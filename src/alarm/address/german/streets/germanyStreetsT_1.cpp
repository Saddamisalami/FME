#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameT1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 303967:
    {
        returnValue = F("T");
        break;
    }
    case 303968:
    {
        returnValue = F("T orgarten");
        break;
    }
    case 303969:
    {
        returnValue = F("T-Str.");
        break;
    }
    case 303970:
    {
        returnValue = F("T-Weg");
        break;
    }
    case 303971:
    {
        returnValue = F("T14");
        break;
    }
    case 303972:
    {
        returnValue = F("T8 (Glasschleiferweg)");
        break;
    }
    case 303973:
    {
        returnValue = F("TC Waldshut");
        break;
    }
    case 303974:
    {
        returnValue = F("TERRA.park");
        break;
    }
    case 303975:
    {
        returnValue = F("TERRA.track");
        break;
    }
    case 303976:
    {
        returnValue = F("TERRA.track Erz-Steig");
        break;
    }
    case 303977:
    {
        returnValue = F("THW Brücke");
        break;
    }
    case 303978:
    {
        returnValue = F("THW Ersatzbrücke Brückenstr.");
        break;
    }
    case 303979:
    {
        returnValue = F("TKV-Weg");
        break;
    }
    case 303980:
    {
        returnValue = F("TMP Str.");
        break;
    }
    case 303981:
    {
        returnValue = F("TT-Flügel");
        break;
    }
    case 303982:
    {
        returnValue = F("TTT");
        break;
    }
    case 303983:
    {
        returnValue = F("Taake");
        break;
    }
    case 303984:
    {
        returnValue = F("Taaken Tree");
        break;
    }
    case 303985:
    {
        returnValue = F("Taarepswoi");
        break;
    }
    case 303986:
    {
        returnValue = F("Taastruper Str.");
        break;
    }
    case 303987:
    {
        returnValue = F("Tabackbühlweg");
        break;
    }
    case 303988:
    {
        returnValue = F("Tabacksackerschneise");
        break;
    }
    case 303989:
    {
        returnValue = F("Tabakblütenweg");
        break;
    }
    case 303990:
    {
        returnValue = F("Tabakfeld");
        break;
    }
    case 303991:
    {
        returnValue = F("Tabakfeldstr.");
        break;
    }
    case 303992:
    {
        returnValue = F("Tabakshof");
        break;
    }
    case 303993:
    {
        returnValue = F("Tabakstr.");
        break;
    }
    case 303994:
    {
        returnValue = F("Tabaksweg");
        break;
    }
    case 303995:
    {
        returnValue = F("Tabakswinkel");
        break;
    }
    case 303996:
    {
        returnValue = F("Tabakweg");
        break;
    }
    case 303997:
    {
        returnValue = F("Tabakäcker");
        break;
    }
    case 303998:
    {
        returnValue = F("Tabarzer Str.");
        break;
    }
    case 303999:
    {
        returnValue = F("Tabbenstr.");
        break;
    }
    case 304000:
    {
        returnValue = F("Taben");
        break;
    }
    case 304001:
    {
        returnValue = F("Tabener Str.");
        break;
    }
    case 304002:
    {
        returnValue = F("Tabernackel");
        break;
    }
    case 304003:
    {
        returnValue = F("Tabernae-Montanus-Str.");
        break;
    }
    case 304004:
    {
        returnValue = F("Tabernwasener Weg");
        break;
    }
    case 304005:
    {
        returnValue = F("Tabertshausener Str.");
        break;
    }
    case 304006:
    {
        returnValue = F("Tabertshausenerstr.");
        break;
    }
    case 304007:
    {
        returnValue = F("Tabertshoferstr.");
        break;
    }
    case 304008:
    {
        returnValue = F("Tabing");
        break;
    }
    case 304009:
    {
        returnValue = F("Tabinger Str.");
        break;
    }
    case 304010:
    {
        returnValue = F("Tabkens Weg");
        break;
    }
    case 304011:
    {
        returnValue = F("Taborer Str.");
        break;
    }
    case 304012:
    {
        returnValue = F("Taborplatz");
        break;
    }
    case 304013:
    {
        returnValue = F("Taborstr.");
        break;
    }
    case 304014:
    {
        returnValue = F("Taborweg");
        break;
    }
    case 304015:
    {
        returnValue = F("Tabratshofer Zeile");
        break;
    }
    case 304016:
    {
        returnValue = F("Tabulatorweg");
        break;
    }
    case 304017:
    {
        returnValue = F("Tachauer Str.");
        break;
    }
    case 304018:
    {
        returnValue = F("Tachauer Weg");
        break;
    }
    case 304019:
    {
        returnValue = F("Tachbacher Str.");
        break;
    }
    case 304020:
    {
        returnValue = F("Tachbachsmühle");
        break;
    }
    case 304021:
    {
        returnValue = F("Tachenbergstr.");
        break;
    }
    case 304022:
    {
        returnValue = F("Tachenhäuser Str.");
        break;
    }
    case 304023:
    {
        returnValue = F("Tachenhäuser Sträßchen");
        break;
    }
    case 304024:
    {
        returnValue = F("Tacheniusweg");
        break;
    }
    case 304025:
    {
        returnValue = F("Tachertinger Str.");
        break;
    }
    case 304026:
    {
        returnValue = F("Tachetsbergweg");
        break;
    }
    case 304027:
    {
        returnValue = F("Tachover Ring");
        break;
    }
    case 304028:
    {
        returnValue = F("Tacitus-Str.");
        break;
    }
    case 304029:
    {
        returnValue = F("Tacitusstr.");
        break;
    }
    case 304030:
    {
        returnValue = F("Tacitusweg");
        break;
    }
    case 304031:
    {
        returnValue = F("Tack");
        break;
    }
    case 304032:
    {
        returnValue = F("Tackau");
        break;
    }
    case 304033:
    {
        returnValue = F("Tackeloh");
        break;
    }
    case 304034:
    {
        returnValue = F("Tacken");
        break;
    }
    case 304035:
    {
        returnValue = F("Tackenbergs Patt");
        break;
    }
    case 304036:
    {
        returnValue = F("Tackenbergstr.");
        break;
    }
    case 304037:
    {
        returnValue = F("Tackenkamp");
        break;
    }
    case 304038:
    {
        returnValue = F("Tackenstr.");
        break;
    }
    case 304039:
    {
        returnValue = F("Tackesdorfer Str.");
        break;
    }
    case 304040:
    {
        returnValue = F("Tackestr.");
        break;
    }
    case 304041:
    {
        returnValue = F("Tackheide");
        break;
    }
    case 304042:
    {
        returnValue = F("Tackhütte");
        break;
    }
    case 304043:
    {
        returnValue = F("Tackmannshof");
        break;
    }
    case 304044:
    {
        returnValue = F("Tackstr.");
        break;
    }
    case 304045:
    {
        returnValue = F("Tackweg");
        break;
    }
    case 304046:
    {
        returnValue = F("Taddigshörn");
        break;
    }
    case 304047:
    {
        returnValue = F("Taddigsweg");
        break;
    }
    case 304048:
    {
        returnValue = F("Tadel");
        break;
    }
    case 304049:
    {
        returnValue = F("Tadelgern");
        break;
    }
    case 304050:
    {
        returnValue = F("Tadenser Weg");
        break;
    }
    case 304051:
    {
        returnValue = F("Tadewaldweg");
        break;
    }
    case 304052:
    {
        returnValue = F("Tadinger Str.");
        break;
    }
    case 304053:
    {
        returnValue = F("Taegerstr.");
        break;
    }
    case 304054:
    {
        returnValue = F("Taeglichsbeckstr.");
        break;
    }
    case 304055:
    {
        returnValue = F("Taepperweg");
        break;
    }
    case 304056:
    {
        returnValue = F("Taerbekweg");
        break;
    }
    case 304057:
    {
        returnValue = F("Taeutterstr.");
        break;
    }
    case 304058:
    {
        returnValue = F("Tafel");
        break;
    }
    case 304059:
    {
        returnValue = F("Tafel-Geräumt");
        break;
    }
    case 304060:
    {
        returnValue = F("Tafelacker");
        break;
    }
    case 304061:
    {
        returnValue = F("Tafelackerstr.");
        break;
    }
    case 304062:
    {
        returnValue = F("Tafelberg");
        break;
    }
    case 304063:
    {
        returnValue = F("Tafelberggasse");
        break;
    }
    case 304064:
    {
        returnValue = F("Tafelbergstieg");
        break;
    }
    case 304065:
    {
        returnValue = F("Tafelbergstr.");
        break;
    }
    case 304066:
    {
        returnValue = F("Tafeler Weg");
        break;
    }
    case 304067:
    {
        returnValue = F("Tafelfeldstr.");
        break;
    }
    case 304068:
    {
        returnValue = F("Tafelfeldtunnel");
        break;
    }
    case 304069:
    {
        returnValue = F("Tafelgasse");
        break;
    }
    case 304070:
    {
        returnValue = F("Tafelhofstr.");
        break;
    }
    case 304071:
    {
        returnValue = F("Tafelmaiersiedlung");
        break;
    }
    case 304072:
    {
        returnValue = F("Tafelmakerweg");
        break;
    }
    case 304073:
    {
        returnValue = F("Tafelstr.");
        break;
    }
    case 304074:
    {
        returnValue = F("Tafeltannweg");
        break;
    }
    case 304075:
    {
        returnValue = F("Tafeltour");
        break;
    }
    case 304076:
    {
        returnValue = F("Tafelweg");
        break;
    }
    case 304077:
    {
        returnValue = F("Tafelweiher");
        break;
    }
    case 304078:
    {
        returnValue = F("Tafelwies");
        break;
    }
    case 304079:
    {
        returnValue = F("Tafelwiesen");
        break;
    }
    case 304080:
    {
        returnValue = F("Taferlbergweg");
        break;
    }
    case 304081:
    {
        returnValue = F("Taferlbuckl");
        break;
    }
    case 304082:
    {
        returnValue = F("Taferlweg");
        break;
    }
    case 304083:
    {
        returnValue = F("Tafern");
        break;
    }
    case 304084:
    {
        returnValue = F("Tafernplatz");
        break;
    }
    case 304085:
    {
        returnValue = F("Tafertsbergstr.");
        break;
    }
    case 304086:
    {
        returnValue = F("Tafertshofer Str.");
        break;
    }
    case 304087:
    {
        returnValue = F("Tafertshoferstr.");
        break;
    }
    case 304088:
    {
        returnValue = F("Tafertsried");
        break;
    }
    case 304089:
    {
        returnValue = F("Tafertsrieder Weg");
        break;
    }
    case 304090:
    {
        returnValue = F("Tafertsweiler Str.");
        break;
    }
    case 304091:
    {
        returnValue = F("Tafertsweilerstr.");
        break;
    }
    case 304092:
    {
        returnValue = F("Taffingsweg");
        break;
    }
    case 304093:
    {
        returnValue = F("Tafingerstr.");
        break;
    }
    case 304094:
    {
        returnValue = F("Taft");
        break;
    }
    case 304095:
    {
        returnValue = F("Taftstr.");
        break;
    }
    case 304096:
    {
        returnValue = F("Tagahartstr.");
        break;
    }
    case 304097:
    {
        returnValue = F("Taganrogstr.");
        break;
    }
    case 304098:
    {
        returnValue = F("Tagbauweg");
        break;
    }
    case 304099:
    {
        returnValue = F("Tagbrechtstr.");
        break;
    }
    case 304100:
    {
        returnValue = F("Tagebaurandstr.");
        break;
    }
    case 304101:
    {
        returnValue = F("Tagebaustr.");
        break;
    }
    case 304102:
    {
        returnValue = F("Tagescamper");
        break;
    }
    case 304103:
    {
        returnValue = F("Tageslieger");
        break;
    }
    case 304104:
    {
        returnValue = F("Tagetesstr.");
        break;
    }
    case 304105:
    {
        returnValue = F("Tagetesweg");
        break;
    }
    case 304106:
    {
        returnValue = F("Tagewerbener Str.");
        break;
    }
    case 304107:
    {
        returnValue = F("Tagfalterweg");
        break;
    }
    case 304108:
    {
        returnValue = F("Taggenbrock Weg");
        break;
    }
    case 304109:
    {
        returnValue = F("Taggstr.");
        break;
    }
    case 304110:
    {
        returnValue = F("Taginoweg");
        break;
    }
    case 304111:
    {
        returnValue = F("Taglöhnergärten");
        break;
    }
    case 304112:
    {
        returnValue = F("Tagmersheimer Str.");
        break;
    }
    case 304113:
    {
        returnValue = F("Tagobertrstr.");
        break;
    }
    case 304114:
    {
        returnValue = F("Tagolfstr.");
        break;
    }
    case 304115:
    {
        returnValue = F("Tagorestr.");
        break;
    }
    case 304116:
    {
        returnValue = F("Tagpfauenaugeweg");
        break;
    }
    case 304117:
    {
        returnValue = F("Tagtweidenweg");
        break;
    }
    case 304118:
    {
        returnValue = F("Tagwerbener Str.");
        break;
    }
    case 304119:
    {
        returnValue = F("Tagwiese");
        break;
    }
    case 304120:
    {
        returnValue = F("Tahlenweg");
        break;
    }
    case 304121:
    {
        returnValue = F("Tahlhaldenweg");
        break;
    }
    case 304122:
    {
        returnValue = F("Tahoe Court");
        break;
    }
    case 304123:
    {
        returnValue = F("Taidinger Str.");
        break;
    }
    case 304124:
    {
        returnValue = F("Taigaweg");
        break;
    }
    case 304125:
    {
        returnValue = F("Taigelbrand");
        break;
    }
    case 304126:
    {
        returnValue = F("Taigschuster");
        break;
    }
    case 304127:
    {
        returnValue = F("Taigweg");
        break;
    }
    case 304128:
    {
        returnValue = F("Taildor");
        break;
    }
    case 304129:
    {
        returnValue = F("Tailershöhe");
        break;
    }
    case 304130:
    {
        returnValue = F("Tailfinger Str.");
        break;
    }
    case 304131:
    {
        returnValue = F("Tailfinger Teich");
        break;
    }
    case 304132:
    {
        returnValue = F("Tailfinger Weg");
        break;
    }
    case 304133:
    {
        returnValue = F("Taimerhofstr.");
        break;
    }
    case 304134:
    {
        returnValue = F("Tainer Str.");
        break;
    }
    case 304135:
    {
        returnValue = F("Tainger Feld");
        break;
    }
    case 304136:
    {
        returnValue = F("Tainzostr.");
        break;
    }
    case 304137:
    {
        returnValue = F("Taiostr.");
        break;
    }
    case 304138:
    {
        returnValue = F("Tairnbacher Str.");
        break;
    }
    case 304139:
    {
        returnValue = F("Taischwang");
        break;
    }
    case 304140:
    {
        returnValue = F("Taitinger Str.");
        break;
    }
    case 304141:
    {
        returnValue = F("Tajenfeld");
        break;
    }
    case 304142:
    {
        returnValue = F("Take-Off Gewerbepark");
        break;
    }
    case 304143:
    {
        returnValue = F("Takelbasweg");
        break;
    }
    case 304144:
    {
        returnValue = F("Takenfeldweg");
        break;
    }
    case 304145:
    {
        returnValue = F("Takenhal");
        break;
    }
    case 304146:
    {
        returnValue = F("Takenstr.");
        break;
    }
    case 304147:
    {
        returnValue = F("Takerbarg");
        break;
    }
    case 304148:
    {
        returnValue = F("Takerwai");
        break;
    }
    case 304149:
    {
        returnValue = F("Taklerring");
        break;
    }
    case 304150:
    {
        returnValue = F("Taklerstr.");
        break;
    }
    case 304151:
    {
        returnValue = F("Taku-Fort-Str.");
        break;
    }
    case 304152:
    {
        returnValue = F("Takufeld");
        break;
    }
    case 304153:
    {
        returnValue = F("Takuplatz");
        break;
    }
    case 304154:
    {
        returnValue = F("Takustr.");
        break;
    }
    case 304155:
    {
        returnValue = F("Tal");
        break;
    }
    case 304156:
    {
        returnValue = F("Tal Josaphat");
        break;
    }
    case 304157:
    {
        returnValue = F("Tal Naundorf");
        break;
    }
    case 304158:
    {
        returnValue = F("Tal der Eisvögel");
        break;
    }
    case 304159:
    {
        returnValue = F("Tal der weißen Schwarza");
        break;
    }
    case 304160:
    {
        returnValue = F("Tal-Josaphat-Weg");
        break;
    }
    case 304161:
    {
        returnValue = F("Talabfahrt");
        break;
    }
    case 304162:
    {
        returnValue = F("Talacker");
        break;
    }
    case 304163:
    {
        returnValue = F("Talacker Str.");
        break;
    }
    case 304164:
    {
        returnValue = F("Talackerstr.");
        break;
    }
    case 304165:
    {
        returnValue = F("Talackerweg");
        break;
    }
    case 304166:
    {
        returnValue = F("Talallee");
        break;
    }
    case 304167:
    {
        returnValue = F("Talamtstr.");
        break;
    }
    case 304168:
    {
        returnValue = F("Talanger");
        break;
    }
    case 304169:
    {
        returnValue = F("Talangerplatz");
        break;
    }
    case 304170:
    {
        returnValue = F("Talangerstr.");
        break;
    }
    case 304171:
    {
        returnValue = F("Talantstr.");
        break;
    }
    case 304172:
    {
        returnValue = F("Talaue");
        break;
    }
    case 304173:
    {
        returnValue = F("Talauenstr.");
        break;
    }
    case 304174:
    {
        returnValue = F("Talavera");
        break;
    }
    case 304175:
    {
        returnValue = F("Talaverastr.");
        break;
    }
    case 304176:
    {
        returnValue = F("Talbach");
        break;
    }
    case 304177:
    {
        returnValue = F("Talbachgasse");
        break;
    }
    case 304178:
    {
        returnValue = F("Talbachring");
        break;
    }
    case 304179:
    {
        returnValue = F("Talbachstr.");
        break;
    }
    case 304180:
    {
        returnValue = F("Talbachweg");
        break;
    }
    case 304181:
    {
        returnValue = F("Talbahnstr.");
        break;
    }
    case 304182:
    {
        returnValue = F("Talbauernstr.");
        break;
    }
    case 304183:
    {
        returnValue = F("Talbenden");
        break;
    }
    case 304184:
    {
        returnValue = F("Talberg");
        break;
    }
    case 304185:
    {
        returnValue = F("Talbergstr.");
        break;
    }
    case 304186:
    {
        returnValue = F("Talbergweg");
        break;
    }
    case 304187:
    {
        returnValue = F("Talblick");
        break;
    }
    case 304188:
    {
        returnValue = F("Talblick / An der Seite");
        break;
    }
    case 304189:
    {
        returnValue = F("Talblickstr.");
        break;
    }
    case 304190:
    {
        returnValue = F("Talblickweg");
        break;
    }
    case 304191:
    {
        returnValue = F("Talbogen");
        break;
    }
    case 304192:
    {
        returnValue = F("Talborn");
        break;
    }
    case 304193:
    {
        returnValue = F("Talbothof");
        break;
    }
    case 304194:
    {
        returnValue = F("Talbotstr.");
        break;
    }
    case 304195:
    {
        returnValue = F("Talbrede");
        break;
    }
    case 304196:
    {
        returnValue = F("Talbreitenweg");
        break;
    }
    case 304197:
    {
        returnValue = F("Talbrunnenstr.");
        break;
    }
    case 304198:
    {
        returnValue = F("Talbrunnenweg");
        break;
    }
    case 304199:
    {
        returnValue = F("Talbrücke");
        break;
    }
    case 304200:
    {
        returnValue = F("Talbrücke Gailenkircher Bach");
        break;
    }
    case 304201:
    {
        returnValue = F("Talbrücke Grundsteinheim");
        break;
    }
    case 304202:
    {
        returnValue = F("Talbrücke Sondern");
        break;
    }
    case 304203:
    {
        returnValue = F("Talbrückenstr.");
        break;
    }
    case 304204:
    {
        returnValue = F("Talbrückenweg");
        break;
    }
    case 304205:
    {
        returnValue = F("Talbrückstr.");
        break;
    }
    case 304206:
    {
        returnValue = F("Talburgstr.");
        break;
    }
    case 304207:
    {
        returnValue = F("Talbühlhalde");
        break;
    }
    case 304208:
    {
        returnValue = F("Taldorfer Str.");
        break;
    }
    case 304209:
    {
        returnValue = F("Talendweg");
        break;
    }
    case 304210:
    {
        returnValue = F("Talensteinweg");
        break;
    }
    case 304211:
    {
        returnValue = F("Talenwäldchen");
        break;
    }
    case 304212:
    {
        returnValue = F("Talergasse");
        break;
    }
    case 304213:
    {
        returnValue = F("Talerhof");
        break;
    }
    case 304214:
    {
        returnValue = F("Talerspfad");
        break;
    }
    case 304215:
    {
        returnValue = F("Talerweg");
        break;
    }
    case 304216:
    {
        returnValue = F("Talerwinkel");
        break;
    }
    case 304217:
    {
        returnValue = F("Talesch");
        break;
    }
    case 304218:
    {
        returnValue = F("Talfeld");
        break;
    }
    case 304219:
    {
        returnValue = F("Talfeldstr.");
        break;
    }
    case 304220:
    {
        returnValue = F("Talfeldweg");
        break;
    }
    case 304221:
    {
        returnValue = F("Talfinger Str.");
        break;
    }
    case 304222:
    {
        returnValue = F("Talfinger Uferstr.");
        break;
    }
    case 304223:
    {
        returnValue = F("Talgang");
        break;
    }
    case 304224:
    {
        returnValue = F("Talgangstr.");
        break;
    }
    case 304225:
    {
        returnValue = F("Talgarten");
        break;
    }
    case 304226:
    {
        returnValue = F("Talgartenstr.");
        break;
    }
    case 304227:
    {
        returnValue = F("Talgartenweg");
        break;
    }
    case 304228:
    {
        returnValue = F("Talgasse");
        break;
    }
    case 304229:
    {
        returnValue = F("Talger Heide");
        break;
    }
    case 304230:
    {
        returnValue = F("Talgraben");
        break;
    }
    case 304231:
    {
        returnValue = F("Talgrabenstr.");
        break;
    }
    case 304232:
    {
        returnValue = F("Talgrabenweg");
        break;
    }
    case 304233:
    {
        returnValue = F("Talgrafenstr.");
        break;
    }
    case 304234:
    {
        returnValue = F("Talgrund");
        break;
    }
    case 304235:
    {
        returnValue = F("Talgrundweg");
        break;
    }
    case 304236:
    {
        returnValue = F("Talgäßchen");
        break;
    }
    case 304237:
    {
        returnValue = F("Talgäßle");
        break;
    }
    case 304238:
    {
        returnValue = F("Talhalde");
        break;
    }
    case 304239:
    {
        returnValue = F("Talhaldestr.");
        break;
    }
    case 304240:
    {
        returnValue = F("Talhaus");
        break;
    }
    case 304241:
    {
        returnValue = F("Talhauser Str.");
        break;
    }
    case 304242:
    {
        returnValue = F("Talhausring");
        break;
    }
    case 304243:
    {
        returnValue = F("Talhausstr.");
        break;
    }
    case 304244:
    {
        returnValue = F("Talhauweg");
        break;
    }
    case 304245:
    {
        returnValue = F("Talheide");
        break;
    }
    case 304246:
    {
        returnValue = F("Talheim");
        break;
    }
    case 304247:
    {
        returnValue = F("Talheimer Höhe");
        break;
    }
    case 304248:
    {
        returnValue = F("Talheimer Str.");
        break;
    }
    case 304249:
    {
        returnValue = F("Talheimer Weg");
        break;
    }
    case 304250:
    {
        returnValue = F("Talhof");
        break;
    }
    case 304251:
    {
        returnValue = F("Talhofstr.");
        break;
    }
    case 304252:
    {
        returnValue = F("Talhofweg");
        break;
    }
    case 304253:
    {
        returnValue = F("Talholzgrundweg");
        break;
    }
    case 304254:
    {
        returnValue = F("Talholzstr.");
        break;
    }
    case 304255:
    {
        returnValue = F("Talholzweg");
        break;
    }
    case 304256:
    {
        returnValue = F("Talhälde");
        break;
    }
    case 304257:
    {
        returnValue = F("Talhäuser Str.");
        break;
    }
    case 304258:
    {
        returnValue = F("Talhäuser Weg");
        break;
    }
    case 304259:
    {
        returnValue = F("Talhäusersträßle");
        break;
    }
    case 304260:
    {
        returnValue = F("Talhäuserweg");
        break;
    }
    case 304261:
    {
        returnValue = F("Talhübel");
        break;
    }
    case 304262:
    {
        returnValue = F("Talkamp");
        break;
    }
    case 304263:
    {
        returnValue = F("Talkauer Weg");
        break;
    }
    case 304264:
    {
        returnValue = F("Talkenbergweg");
        break;
    }
    case 304265:
    {
        returnValue = F("Talkenkamp");
        break;
    }
    case 304266:
    {
        returnValue = F("Talklingenweg");
        break;
    }
    case 304267:
    {
        returnValue = F("Talkäckerstr.");
        break;
    }
    case 304268:
    {
        returnValue = F("Tallandweg");
        break;
    }
    case 304269:
    {
        returnValue = F("Tallange");
        break;
    }
    case 304270:
    {
        returnValue = F("Tallardstr.");
        break;
    }
    case 304271:
    {
        returnValue = F("Talleite");
        break;
    }
    case 304272:
    {
        returnValue = F("Talleiten");
        break;
    }
    case 304273:
    {
        returnValue = F("Talleitenweg");
        break;
    }
    case 304274:
    {
        returnValue = F("Tallenser Str.");
        break;
    }
    case 304275:
    {
        returnValue = F("Taller Brede");
        break;
    }
    case 304276:
    {
        returnValue = F("Taller Str.");
        break;
    }
    case 304277:
    {
        returnValue = F("Talleweg");
        break;
    }
    case 304278:
    {
        returnValue = F("Talliner Str.");
        break;
    }
    case 304279:
    {
        returnValue = F("Tallinger Weg");
        break;
    }
    case 304280:
    {
        returnValue = F("Tallinner Str.");
        break;
    }
    case 304281:
    {
        returnValue = F("Talmatt");
        break;
    }
    case 304282:
    {
        returnValue = F("Talmatten");
        break;
    }
    case 304283:
    {
        returnValue = F("Talmattenweg");
        break;
    }
    case 304284:
    {
        returnValue = F("Talmattstr.");
        break;
    }
    case 304285:
    {
        returnValue = F("Talmeswiesenschneise");
        break;
    }
    case 304286:
    {
        returnValue = F("Talmorgen");
        break;
    }
    case 304287:
    {
        returnValue = F("Talmuldenweg");
        break;
    }
    case 304288:
    {
        returnValue = F("Talmweg");
        break;
    }
    case 304289:
    {
        returnValue = F("Talmühle");
        break;
    }
    case 304290:
    {
        returnValue = F("Talmühlenstr.");
        break;
    }
    case 304291:
    {
        returnValue = F("Talmühlenweg");
        break;
    }
    case 304292:
    {
        returnValue = F("Talmühleweg");
        break;
    }
    case 304293:
    {
        returnValue = F("Talplatz");
        break;
    }
    case 304294:
    {
        returnValue = F("Talpromenade");
        break;
    }
    case 304295:
    {
        returnValue = F("Talquellenweg");
        break;
    }
    case 304296:
    {
        returnValue = F("Talrainstr.");
        break;
    }
    case 304297:
    {
        returnValue = F("Talrainweg");
        break;
    }
    case 304298:
    {
        returnValue = F("Talrandweg");
        break;
    }
    case 304299:
    {
        returnValue = F("Talrichtstatt");
        break;
    }
    case 304300:
    {
        returnValue = F("Talring");
        break;
    }
    case 304301:
    {
        returnValue = F("Talringweg");
        break;
    }
    case 304302:
    {
        returnValue = F("Talsbachstr.");
        break;
    }
    case 304303:
    {
        returnValue = F("Talsberg");
        break;
    }
    case 304304:
    {
        returnValue = F("Talsbergweg");
        break;
    }
    case 304305:
    {
        returnValue = F("Talschneise");
        break;
    }
    case 304306:
    {
        returnValue = F("Talsgärten");
        break;
    }
    case 304307:
    {
        returnValue = F("Talsicht");
        break;
    }
    case 304308:
    {
        returnValue = F("Talsiedlung");
        break;
    }
    case 304309:
    {
        returnValue = F("Talsperre");
        break;
    }
    case 304310:
    {
        returnValue = F("Talsperre Frohndorf");
        break;
    }
    case 304311:
    {
        returnValue = F("Talsperrengrund");
        break;
    }
    case 304312:
    {
        returnValue = F("Talsperrenloipe Trautenstein");
        break;
    }
    case 304313:
    {
        returnValue = F("Talsperrenrandstr.");
        break;
    }
    case 304314:
    {
        returnValue = F("Talsperrenrundweg");
        break;
    }
    case 304315:
    {
        returnValue = F("Talsperrenstr.");
        break;
    }
    case 304316:
    {
        returnValue = F("Talsperrenweg");
        break;
    }
    case 304317:
    {
        returnValue = F("Talsperrstr.");
        break;
    }
    case 304318:
    {
        returnValue = F("Talsteige");
        break;
    }
    case 304319:
    {
        returnValue = F("Talstein");
        break;
    }
    case 304320:
    {
        returnValue = F("Talsteinstr.");
        break;
    }
    case 304321:
    {
        returnValue = F("Talstr.");
        break;
    }
    case 304322:
    {
        returnValue = F("Talstrasse");
        break;
    }
    case 304323:
    {
        returnValue = F("Talsträßchen");
        break;
    }
    case 304324:
    {
        returnValue = F("Talsweg");
        break;
    }
    case 304325:
    {
        returnValue = F("Taltitzer Berg");
        break;
    }
    case 304326:
    {
        returnValue = F("Taltitzer Str.");
        break;
    }
    case 304327:
    {
        returnValue = F("Taltitzer Weg");
        break;
    }
    case 304328:
    {
        returnValue = F("Taltraße");
        break;
    }
    case 304329:
    {
        returnValue = F("Talufer");
        break;
    }
    case 304330:
    {
        returnValue = F("Talverbindungsweg");
        break;
    }
    case 304331:
    {
        returnValue = F("Talvogteistr.");
        break;
    }
    case 304332:
    {
        returnValue = F("Talwald");
        break;
    }
    case 304333:
    {
        returnValue = F("Talwaldstr.");
        break;
    }
    case 304334:
    {
        returnValue = F("Talwaldweg");
        break;
    }
    case 304335:
    {
        returnValue = F("Talwandstr.");
        break;
    }
    case 304336:
    {
        returnValue = F("Talweg");
        break;
    }
    case 304337:
    {
        returnValue = F("Talweg (Sommerseite)");
        break;
    }
    case 304338:
    {
        returnValue = F("Talweg (Winterseite)");
        break;
    }
    case 304339:
    {
        returnValue = F("Talweggasse");
        break;
    }
    case 304340:
    {
        returnValue = F("Talwegle");
        break;
    }
    case 304341:
    {
        returnValue = F("Talweidenweg");
        break;
    }
    case 304342:
    {
        returnValue = F("Talwiese");
        break;
    }
    case 304343:
    {
        returnValue = F("Talwiesen");
        break;
    }
    case 304344:
    {
        returnValue = F("Talwiesenstr.");
        break;
    }
    case 304345:
    {
        returnValue = F("Talwiesenweg");
        break;
    }
    case 304346:
    {
        returnValue = F("Talwiesweg");
        break;
    }
    case 304347:
    {
        returnValue = F("Talwinkel");
        break;
    }
    case 304348:
    {
        returnValue = F("Talwäldle");
        break;
    }
    case 304349:
    {
        returnValue = F("Taläcker");
        break;
    }
    case 304350:
    {
        returnValue = F("Taläckerallee");
        break;
    }
    case 304351:
    {
        returnValue = F("Taläckerstr.");
        break;
    }
    case 304352:
    {
        returnValue = F("Taläckerweg");
        break;
    }
    case 304353:
    {
        returnValue = F("Tamara-Bunke-Str.");
        break;
    }
    case 304354:
    {
        returnValue = F("Tamara-Danz-Str.");
        break;
    }
    case 304355:
    {
        returnValue = F("Tamaris-Str.");
        break;
    }
    case 304356:
    {
        returnValue = F("Tamariskenweg");
        break;
    }
    case 304357:
    {
        returnValue = F("Tamarstr.");
        break;
    }
    case 304358:
    {
        returnValue = F("Tambacher Berg");
        break;
    }
    case 304359:
    {
        returnValue = F("Tambacher Str.");
        break;
    }
    case 304360:
    {
        returnValue = F("Tambacher Weg");
        break;
    }
    case 304361:
    {
        returnValue = F("Tambachstr.");
        break;
    }
    case 304362:
    {
        returnValue = F("Tamborninostr.");
        break;
    }
    case 304363:
    {
        returnValue = F("Tambourgasse");
        break;
    }
    case 304364:
    {
        returnValue = F("Tambourstr.");
        break;
    }
    case 304365:
    {
        returnValue = F("Tambourweg");
        break;
    }
    case 304366:
    {
        returnValue = F("Tambuchstr.");
        break;
    }
    case 304367:
    {
        returnValue = F("Tamfurt");
        break;
    }
    case 304368:
    {
        returnValue = F("Tami-Oelfken-Str.");
        break;
    }
    case 304369:
    {
        returnValue = F("Tammannstr.");
        break;
    }
    case 304370:
    {
        returnValue = F("Tammbrook");
        break;
    }
    case 304371:
    {
        returnValue = F("Tammbruch");
        break;
    }
    case 304372:
    {
        returnValue = F("Tammegaster Str.");
        break;
    }
    case 304373:
    {
        returnValue = F("Tammeland");
        break;
    }
    case 304374:
    {
        returnValue = F("Tammensiel");
        break;
    }
    case 304375:
    {
        returnValue = F("Tammer See");
        break;
    }
    case 304376:
    {
        returnValue = F("Tammer Str.");
        break;
    }
    case 304377:
    {
        returnValue = F("Tammer Weg");
        break;
    }
    case 304378:
    {
        returnValue = F("Tammhorst");
        break;
    }
    case 304379:
    {
        returnValue = F("Tammichstr.");
        break;
    }
    case 304380:
    {
        returnValue = F("Tammoweg");
        break;
    }
    case 304381:
    {
        returnValue = F("Tamms Trift");
        break;
    }
    case 304382:
    {
        returnValue = F("Tamms Weg");
        break;
    }
    case 304383:
    {
        returnValue = F("Tammwarft");
        break;
    }
    case 304384:
    {
        returnValue = F("Tammweg");
        break;
    }
    case 304385:
    {
        returnValue = F("Tampel");
        break;
    }
    case 304386:
    {
        returnValue = F("Tampelstr.");
        break;
    }
    case 304387:
    {
        returnValue = F("Tampengartenweg");
        break;
    }
    case 304388:
    {
        returnValue = F("Tampenstr.");
        break;
    }
    case 304389:
    {
        returnValue = F("Tampenweg");
        break;
    }
    case 304390:
    {
        returnValue = F("Tamperestr.");
        break;
    }
    case 304391:
    {
        returnValue = F("Tampire, Ameisenbären");
        break;
    }
    case 304392:
    {
        returnValue = F("Tamra-Hemelingen-Park");
        break;
    }
    case 304393:
    {
        returnValue = F("Tamsesweg");
        break;
    }
    case 304394:
    {
        returnValue = F("Tana-Berghausen-Str.");
        break;
    }
    case 304395:
    {
        returnValue = F("Tana-Schanzara-Platz");
        break;
    }
    case 304396:
    {
        returnValue = F("Tananger");
        break;
    }
    case 304397:
    {
        returnValue = F("Tanauer Str.");
        break;
    }
    case 304398:
    {
        returnValue = F("Tancherichweg");
        break;
    }
    case 304399:
    {
        returnValue = F("Tandlmarkt");
        break;
    }
    case 304400:
    {
        returnValue = F("Tanellerstr.");
        break;
    }
    case 304401:
    {
        returnValue = F("Tanenwai");
        break;
    }
    case 304402:
    {
        returnValue = F("Tanfanastr.");
        break;
    }
    case 304403:
    {
        returnValue = F("Tangabucht");
        break;
    }
    case 304404:
    {
        returnValue = F("Tangastr.");
        break;
    }
    case 304405:
    {
        returnValue = F("Tange");
        break;
    }
    case 304406:
    {
        returnValue = F("Tangegartstr.");
        break;
    }
    case 304407:
    {
        returnValue = F("Tangelner Str.");
        break;
    }
    case 304408:
    {
        returnValue = F("Tangenbarg");
        break;
    }
    case 304409:
    {
        returnValue = F("Tangenberg");
        break;
    }
    case 304410:
    {
        returnValue = F("Tangendorf Ausbau");
        break;
    }
    case 304411:
    {
        returnValue = F("Tangendorfer Hauptstr.");
        break;
    }
    case 304412:
    {
        returnValue = F("Tangendorfer Str.");
        break;
    }
    case 304413:
    {
        returnValue = F("Tangensieck");
        break;
    }
    case 304414:
    {
        returnValue = F("Tangenstr.");
        break;
    }
    case 304415:
    {
        returnValue = F("Tangente");
        break;
    }
    case 304416:
    {
        returnValue = F("Tangenweg");
        break;
    }
    case 304417:
    {
        returnValue = F("Tanger Hauptstr.");
        break;
    }
    case 304418:
    {
        returnValue = F("Tanger Str.");
        break;
    }
    case 304419:
    {
        returnValue = F("Tangerhütter Str.");
        break;
    }
    case 304420:
    {
        returnValue = F("Tangerhütter Weg");
        break;
    }
    case 304421:
    {
        returnValue = F("Tangermehdenweg");
        break;
    }
    case 304422:
    {
        returnValue = F("Tangermoorweg");
        break;
    }
    case 304423:
    {
        returnValue = F("Tangermühlenweg");
        break;
    }
    case 304424:
    {
        returnValue = F("Tangermünder Chaussee");
        break;
    }
    case 304425:
    {
        returnValue = F("Tangermünder Str.");
        break;
    }
    case 304426:
    {
        returnValue = F("Tangermünder Weg");
        break;
    }
    case 304427:
    {
        returnValue = F("Tangersdorf");
        break;
    }
    case 304428:
    {
        returnValue = F("Tangersdorfer Weg");
        break;
    }
    case 304429:
    {
        returnValue = F("Tangersen");
        break;
    }
    case 304430:
    {
        returnValue = F("Tangersiedlung");
        break;
    }
    case 304431:
    {
        returnValue = F("Tangerstr.");
        break;
    }
    case 304432:
    {
        returnValue = F("Tangeweg");
        break;
    }
    case 304433:
    {
        returnValue = F("Tangrintelstr.");
        break;
    }
    case 304434:
    {
        returnValue = F("Tangsehl");
        break;
    }
    case 304435:
    {
        returnValue = F("Tangsehler Weg");
        break;
    }
    case 304436:
    {
        returnValue = F("Tangstedter Chaussee");
        break;
    }
    case 304437:
    {
        returnValue = F("Tangstedter Landstr.");
        break;
    }
    case 304438:
    {
        returnValue = F("Tangstedter Mühlenweg");
        break;
    }
    case 304439:
    {
        returnValue = F("Tangstedter Str.");
        break;
    }
    case 304440:
    {
        returnValue = F("Tangstedter Weg");
        break;
    }
    case 304441:
    {
        returnValue = F("Tankenrade");
        break;
    }
    case 304442:
    {
        returnValue = F("Tankenrader Berg");
        break;
    }
    case 304443:
    {
        returnValue = F("Tankenrainer Str.");
        break;
    }
    case 304444:
    {
        returnValue = F("Tankert");
        break;
    }
    case 304445:
    {
        returnValue = F("Tankham");
        break;
    }
    case 304446:
    {
        returnValue = F("Tankholzplatz");
        break;
    }
    case 304447:
    {
        returnValue = F("Tanks Gang");
        break;
    }
    case 304448:
    {
        returnValue = F("Tankstr.");
        break;
    }
    case 304449:
    {
        returnValue = F("Tankweg");
        break;
    }
    case 304450:
    {
        returnValue = F("Tann");
        break;
    }
    case 304451:
    {
        returnValue = F("Tannachweg");
        break;
    }
    case 304452:
    {
        returnValue = F("Tannacker-Schneise");
        break;
    }
    case 304453:
    {
        returnValue = F("Tannackerallee");
        break;
    }
    case 304454:
    {
        returnValue = F("Tannackerschneise");
        break;
    }
    case 304455:
    {
        returnValue = F("Tannackerstr.");
        break;
    }
    case 304456:
    {
        returnValue = F("Tannackerweg");
        break;
    }
    case 304457:
    {
        returnValue = F("Tannaer Str.");
        break;
    }
    case 304458:
    {
        returnValue = F("Tannauer Str.");
        break;
    }
    case 304459:
    {
        returnValue = F("Tannayer Str.");
        break;
    }
    case 304460:
    {
        returnValue = F("Tannbachstr.");
        break;
    }
    case 304461:
    {
        returnValue = F("Tannbachsträßchen");
        break;
    }
    case 304462:
    {
        returnValue = F("Tannbachweg");
        break;
    }
    case 304463:
    {
        returnValue = F("Tannberg");
        break;
    }
    case 304464:
    {
        returnValue = F("Tannbergstr.");
        break;
    }
    case 304465:
    {
        returnValue = F("Tannbergweg");
        break;
    }
    case 304466:
    {
        returnValue = F("Tannbrook");
        break;
    }
    case 304467:
    {
        returnValue = F("Tannbrunnenweg");
        break;
    }
    case 304468:
    {
        returnValue = F("Tannbuschweg");
        break;
    }
    case 304469:
    {
        returnValue = F("Tannböschleweg");
        break;
    }
    case 304470:
    {
        returnValue = F("Tannbühl");
        break;
    }
    case 304471:
    {
        returnValue = F("Tannbühlweg");
        break;
    }
    case 304472:
    {
        returnValue = F("Tanndorfer Fürstenweg");
        break;
    }
    case 304473:
    {
        returnValue = F("Tanne");
        break;
    }
    case 304474:
    {
        returnValue = F("Tanneberger Hauptstr.");
        break;
    }
    case 304475:
    {
        returnValue = F("Tanneberger Str.");
        break;
    }
    case 304476:
    {
        returnValue = F("Tanneberger Weg");
        break;
    }
    case 304477:
    {
        returnValue = F("Tannebergstr.");
        break;
    }
    case 304478:
    {
        returnValue = F("Tanneck");
        break;
    }
    case 304479:
    {
        returnValue = F("Tannecker Gasse");
        break;
    }
    case 304480:
    {
        returnValue = F("Tannecker Str.");
        break;
    }
    case 304481:
    {
        returnValue = F("Tannecker Weg");
        break;
    }
    case 304482:
    {
        returnValue = F("Tanneckstr.");
        break;
    }
    case 304483:
    {
        returnValue = F("Tannen Weg");
        break;
    }
    case 304484:
    {
        returnValue = F("Tannenallee");
        break;
    }
    case 304485:
    {
        returnValue = F("Tannenau");
        break;
    }
    case 304486:
    {
        returnValue = F("Tannenbachstr.");
        break;
    }
    case 304487:
    {
        returnValue = F("Tannenbachweg");
        break;
    }
    case 304488:
    {
        returnValue = F("Tannenbaum");
        break;
    }
    case 304489:
    {
        returnValue = F("Tannenbaumer Strasse");
        break;
    }
    case 304490:
    {
        returnValue = F("Tannenbaumer Weg");
        break;
    }
    case 304491:
    {
        returnValue = F("Tannenbaumweg");
        break;
    }
    case 304492:
    {
        returnValue = F("Tannenberg");
        break;
    }
    case 304493:
    {
        returnValue = F("Tannenbergallee");
        break;
    }
    case 304494:
    {
        returnValue = F("Tannenberger See");
        break;
    }
    case 304495:
    {
        returnValue = F("Tannenberger Str.");
        break;
    }
    case 304496:
    {
        returnValue = F("Tannenberger Weg");
        break;
    }
    case 304497:
    {
        returnValue = F("Tannenberggrund");
        break;
    }
    case 304498:
    {
        returnValue = F("Tannenberghof");
        break;
    }
    case 304499:
    {
        returnValue = F("Tannenbergplatz");
        break;
    }
    case 304500:
    {
        returnValue = F("Tannenbergsiedlung");
        break;
    }
    case 304501:
    {
        returnValue = F("Tannenbergsthaler Str.");
        break;
    }
    case 304502:
    {
        returnValue = F("Tannenbergsthaler Weg");
        break;
    }
    case 304503:
    {
        returnValue = F("Tannenbergstr.");
        break;
    }
    case 304504:
    {
        returnValue = F("Tannenbergsweg");
        break;
    }
    case 304505:
    {
        returnValue = F("Tannenbergweg");
        break;
    }
    case 304506:
    {
        returnValue = F("Tannenbichl");
        break;
    }
    case 304507:
    {
        returnValue = F("Tannenblick");
        break;
    }
    case 304508:
    {
        returnValue = F("Tannenbodenweg");
        break;
    }
    case 304509:
    {
        returnValue = F("Tannenbogen");
        break;
    }
    case 304510:
    {
        returnValue = F("Tannenbornweg");
        break;
    }
    case 304511:
    {
        returnValue = F("Tannenbrink");
        break;
    }
    case 304512:
    {
        returnValue = F("Tannenbruchsfeld");
        break;
    }
    case 304513:
    {
        returnValue = F("Tannenbrunnen");
        break;
    }
    case 304514:
    {
        returnValue = F("Tannenbrunnenstr.");
        break;
    }
    case 304515:
    {
        returnValue = F("Tannenbrücke");
        break;
    }
    case 304516:
    {
        returnValue = F("Tannenbuckelweg");
        break;
    }
    case 304517:
    {
        returnValue = F("Tannenburg");
        break;
    }
    case 304518:
    {
        returnValue = F("Tannenburgstr.");
        break;
    }
    case 304519:
    {
        returnValue = F("Tannenburgweg");
        break;
    }
    case 304520:
    {
        returnValue = F("Tannenbusch");
        break;
    }
    case 304521:
    {
        returnValue = F("Tannenbuschstr.");
        break;
    }
    case 304522:
    {
        returnValue = F("Tannenbuschweg");
        break;
    }
    case 304523:
    {
        returnValue = F("Tannenbühl");
        break;
    }
    case 304524:
    {
        returnValue = F("Tannenbühlstr.");
        break;
    }
    case 304525:
    {
        returnValue = F("Tannenbühlweg");
        break;
    }
    case 304526:
    {
        returnValue = F("Tannenchaussee");
        break;
    }
    case 304527:
    {
        returnValue = F("Tannendorfplatz");
        break;
    }
    case 304528:
    {
        returnValue = F("Tannendorfstr.");
        break;
    }
    case 304529:
    {
        returnValue = F("Tannendörp");
        break;
    }
    case 304530:
    {
        returnValue = F("Tanneneck");
        break;
    }
    case 304531:
    {
        returnValue = F("Tannenecker Weg");
        break;
    }
    case 304532:
    {
        returnValue = F("Tanneneckstr.");
        break;
    }
    case 304533:
    {
        returnValue = F("Tanneneckweg");
        break;
    }
    case 304534:
    {
        returnValue = F("Tannenfeld");
        break;
    }
    case 304535:
    {
        returnValue = F("Tannenfeldring");
        break;
    }
    case 304536:
    {
        returnValue = F("Tannenfeldstr.");
        break;
    }
    case 304537:
    {
        returnValue = F("Tannenfelsstr.");
        break;
    }
    case 304538:
    {
        returnValue = F("Tannenfleck");
        break;
    }
    case 304539:
    {
        returnValue = F("Tannenfleckstr.");
        break;
    }
    case 304540:
    {
        returnValue = F("Tannenfleckweg");
        break;
    }
    case 304541:
    {
        returnValue = F("Tannenflußweg");
        break;
    }
    case 304542:
    {
        returnValue = F("Tannenforst");
        break;
    }
    case 304543:
    {
        returnValue = F("Tannengarten");
        break;
    }
    case 304544:
    {
        returnValue = F("Tannengartenschneise");
        break;
    }
    case 304545:
    {
        returnValue = F("Tannengartensträßle");
        break;
    }
    case 304546:
    {
        returnValue = F("Tannengartenweg");
        break;
    }
    case 304547:
    {
        returnValue = F("Tannengasse");
        break;
    }
    case 304548:
    {
        returnValue = F("Tannengehaustr.");
        break;
    }
    case 304549:
    {
        returnValue = F("Tannengehege");
        break;
    }
    case 304550:
    {
        returnValue = F("Tannengrund");
        break;
    }
    case 304551:
    {
        returnValue = F("Tannengrunder Str.");
        break;
    }
    case 304552:
    {
        returnValue = F("Tannengrundstr.");
        break;
    }
    case 304553:
    {
        returnValue = F("Tannengrundweg");
        break;
    }
    case 304554:
    {
        returnValue = F("Tannengärten");
        break;
    }
    case 304555:
    {
        returnValue = F("Tannengärtlesallee");
        break;
    }
    case 304556:
    {
        returnValue = F("Tannengärtleweg");
        break;
    }
    case 304557:
    {
        returnValue = F("Tannenhain");
        break;
    }
    case 304558:
    {
        returnValue = F("Tannenhaiweg");
        break;
    }
    case 304559:
    {
        returnValue = F("Tannenhalde");
        break;
    }
    case 304560:
    {
        returnValue = F("Tannenhalweg");
        break;
    }
    case 304561:
    {
        returnValue = F("Tannenhang");
        break;
    }
    case 304562:
    {
        returnValue = F("Tannenhau");
        break;
    }
    case 304563:
    {
        returnValue = F("Tannenhausener Weg");
        break;
    }
    case 304564:
    {
        returnValue = F("Tannenhausträßle");
        break;
    }
    case 304565:
    {
        returnValue = F("Tannenheckerweg");
        break;
    }
    case 304566:
    {
        returnValue = F("Tannenhoek");
        break;
    }
    case 304567:
    {
        returnValue = F("Tannenhof");
        break;
    }
    case 304568:
    {
        returnValue = F("Tannenhof; Hof am Krähpfad");
        break;
    }
    case 304569:
    {
        returnValue = F("Tannenhofallee");
        break;
    }
    case 304570:
    {
        returnValue = F("Tannenhofstr.");
        break;
    }
    case 304571:
    {
        returnValue = F("Tannenhofweg");
        break;
    }
    case 304572:
    {
        returnValue = F("Tannenholz");
        break;
    }
    case 304573:
    {
        returnValue = F("Tannenholzweg");
        break;
    }
    case 304574:
    {
        returnValue = F("Tannenhorst");
        break;
    }
    case 304575:
    {
        returnValue = F("Tannenhäule");
        break;
    }
    case 304576:
    {
        returnValue = F("Tannenhöfe");
        break;
    }
    case 304577:
    {
        returnValue = F("Tannenhöhe");
        break;
    }
    case 304578:
    {
        returnValue = F("Tannenhölzle");
        break;
    }
    case 304579:
    {
        returnValue = F("Tannenhügel");
        break;
    }
    case 304580:
    {
        returnValue = F("Tannenhütte");
        break;
    }
    case 304581:
    {
        returnValue = F("Tannenkamp");
        break;
    }
    case 304582:
    {
        returnValue = F("Tannenkamper Str.");
        break;
    }
    case 304583:
    {
        returnValue = F("Tannenkampring");
        break;
    }
    case 304584:
    {
        returnValue = F("Tannenkampstr.");
        break;
    }
    case 304585:
    {
        returnValue = F("Tannenkampsweg");
        break;
    }
    case 304586:
    {
        returnValue = F("Tannenkampweg");
        break;
    }
    case 304587:
    {
        returnValue = F("Tannenkircher Str.");
        break;
    }
    case 304588:
    {
        returnValue = F("Tannenkopf-Weg");
        break;
    }
    case 304589:
    {
        returnValue = F("Tannenkopfstr.");
        break;
    }
    case 304590:
    {
        returnValue = F("Tannenkopfweg");
        break;
    }
    case 304591:
    {
        returnValue = F("Tannenkoppel");
        break;
    }
    case 304592:
    {
        returnValue = F("Tannenkoppelweg");
        break;
    }
    case 304593:
    {
        returnValue = F("Tannenkpof");
        break;
    }
    case 304594:
    {
        returnValue = F("Tannenkrug");
        break;
    }
    case 304595:
    {
        returnValue = F("Tannenkrugstr.");
        break;
    }
    case 304596:
    {
        returnValue = F("Tannenkuppe");
        break;
    }
    case 304597:
    {
        returnValue = F("Tannenkuppenstr.");
        break;
    }
    case 304598:
    {
        returnValue = F("Tannenkämpe");
        break;
    }
    case 304599:
    {
        returnValue = F("Tannenköpfchen");
        break;
    }
    case 304600:
    {
        returnValue = F("Tannenlauch");
        break;
    }
    case 304601:
    {
        returnValue = F("Tannenleite");
        break;
    }
    case 304602:
    {
        returnValue = F("Tannenloge");
        break;
    }
    case 304603:
    {
        returnValue = F("Tannenloheweg");
        break;
    }
    case 304604:
    {
        returnValue = F("Tannenmoosweg");
        break;
    }
    case 304605:
    {
        returnValue = F("Tannenmähderweg");
        break;
    }
    case 304606:
    {
        returnValue = F("Tannenmättleweg");
        break;
    }
    case 304607:
    {
        returnValue = F("Tannenmühlenweg");
        break;
    }
    case 304608:
    {
        returnValue = F("Tannenpfad");
        break;
    }
    case 304609:
    {
        returnValue = F("Tannenplatz");
        break;
    }
    case 304610:
    {
        returnValue = F("Tannenrain");
        break;
    }
    case 304611:
    {
        returnValue = F("Tannenrainweg");
        break;
    }
    case 304612:
    {
        returnValue = F("Tannenredder");
        break;
    }
    case 304613:
    {
        returnValue = F("Tannenreut");
        break;
    }
    case 304614:
    {
        returnValue = F("Tannenreuth");
        break;
    }
    case 304615:
    {
        returnValue = F("Tannenreuther Trail");
        break;
    }
    case 304616:
    {
        returnValue = F("Tannenriedweg");
        break;
    }
    case 304617:
    {
        returnValue = F("Tannenring");
        break;
    }
    case 304618:
    {
        returnValue = F("Tannenringweg");
        break;
    }
    case 304619:
    {
        returnValue = F("Tannenrottweg");
        break;
    }
    case 304620:
    {
        returnValue = F("Tannenschachen");
        break;
    }
    case 304621:
    {
        returnValue = F("Tannenschlag");
        break;
    }
    case 304622:
    {
        returnValue = F("Tannenschlucht");
        break;
    }
    case 304623:
    {
        returnValue = F("Tannenschmiede");
        break;
    }
    case 304624:
    {
        returnValue = F("Tannenschneise");
        break;
    }
    case 304625:
    {
        returnValue = F("Tannenschorren");
        break;
    }
    case 304626:
    {
        returnValue = F("Tannenschorrenstr.");
        break;
    }
    case 304627:
    {
        returnValue = F("Tannensiedlung");
        break;
    }
    case 304628:
    {
        returnValue = F("Tannensteg");
        break;
    }
    case 304629:
    {
        returnValue = F("Tannenstegweg");
        break;
    }
    case 304630:
    {
        returnValue = F("Tannensteig");
        break;
    }
    case 304631:
    {
        returnValue = F("Tannensteige");
        break;
    }
    case 304632:
    {
        returnValue = F("Tannensteigstr.");
        break;
    }
    case 304633:
    {
        returnValue = F("Tannenstieg");
        break;
    }
    case 304634:
    {
        returnValue = F("Tannenstiege");
        break;
    }
    case 304635:
    {
        returnValue = F("Tannenstr.");
        break;
    }
    case 304636:
    {
        returnValue = F("Tannenstöckel");
        break;
    }
    case 304637:
    {
        returnValue = F("Tannensweg");
        break;
    }
    case 304638:
    {
        returnValue = F("Tannenteich");
        break;
    }
    case 304639:
    {
        returnValue = F("Tannenteichweg");
        break;
    }
    case 304640:
    {
        returnValue = F("Tannenviertelweg");
        break;
    }
    case 304641:
    {
        returnValue = F("Tannenwald");
        break;
    }
    case 304642:
    {
        returnValue = F("Tannenwaldallee");
        break;
    }
    case 304643:
    {
        returnValue = F("Tannenwaldhangsträßchen");
        break;
    }
    case 304644:
    {
        returnValue = F("Tannenwaldkopfweg");
        break;
    }
    case 304645:
    {
        returnValue = F("Tannenwaldrundweg");
        break;
    }
    case 304646:
    {
        returnValue = F("Tannenwaldstr.");
        break;
    }
    case 304647:
    {
        returnValue = F("Tannenwaldsträßle");
        break;
    }
    case 304648:
    {
        returnValue = F("Tannenwaldweg");
        break;
    }
    case 304649:
    {
        returnValue = F("Tannenwedelring");
        break;
    }
    case 304650:
    {
        returnValue = F("Tannenweg");
        break;
    }
    case 304651:
    {
        returnValue = F("Tannenweg / Trimm-Dich-Pfad");
        break;
    }
    case 304652:
    {
        returnValue = F("Tannenweide");
        break;
    }
    case 304653:
    {
        returnValue = F("Tannenwieck");
        break;
    }
    case 304654:
    {
        returnValue = F("Tannenwiese");
        break;
    }
    case 304655:
    {
        returnValue = F("Tannenwiesen");
        break;
    }
    case 304656:
    {
        returnValue = F("Tannenwinkel");
        break;
    }
    case 304657:
    {
        returnValue = F("Tannenworthwiesen");
        break;
    }
    case 304658:
    {
        returnValue = F("Tannenwäldchen");
        break;
    }
    case 304659:
    {
        returnValue = F("Tannenzechenweg");
        break;
    }
    case 304660:
    {
        returnValue = F("Tannenzipfel-Geräumt");
        break;
    }
    case 304661:
    {
        returnValue = F("Tannenäcker");
        break;
    }
    case 304662:
    {
        returnValue = F("Tannenäckerle");
        break;
    }
    case 304663:
    {
        returnValue = F("Tannenäckerstr.");
        break;
    }
    case 304664:
    {
        returnValue = F("Tannenäckerweg");
        break;
    }
    case 304665:
    {
        returnValue = F("Tannepölser Str.");
        break;
    }
    case 304666:
    {
        returnValue = F("Tanner Rundweg");
        break;
    }
    case 304667:
    {
        returnValue = F("Tanner Schulstr.");
        break;
    }
    case 304668:
    {
        returnValue = F("Tanner Str.");
        break;
    }
    case 304669:
    {
        returnValue = F("Tannerbachstr.");
        break;
    }
    case 304670:
    {
        returnValue = F("Tannerhofstr.");
        break;
    }
    case 304671:
    {
        returnValue = F("Tannerhofweg");
        break;
    }
    case 304672:
    {
        returnValue = F("Tannerlstr.");
        break;
    }
    case 304673:
    {
        returnValue = F("Tannermühlstr.");
        break;
    }
    case 304674:
    {
        returnValue = F("Tannerstr.");
        break;
    }
    case 304675:
    {
        returnValue = F("Tannertstr.");
        break;
    }
    case 304676:
    {
        returnValue = F("Tannesackerweg");
        break;
    }
    case 304677:
    {
        returnValue = F("Tannet");
        break;
    }
    case 304678:
    {
        returnValue = F("Tannetstr.");
        break;
    }
    case 304679:
    {
        returnValue = F("Tannetweg");
        break;
    }
    case 304680:
    {
        returnValue = F("Tanneweg");
        break;
    }
    case 304681:
    {
        returnValue = F("Tannfeldstr.");
        break;
    }
    case 304682:
    {
        returnValue = F("Tannfeldweg");
        break;
    }
    case 304683:
    {
        returnValue = F("Tannfried");
        break;
    }
    case 304684:
    {
        returnValue = F("Tanngasse");
        break;
    }
    case 304685:
    {
        returnValue = F("Tannhalde");
        break;
    }
    case 304686:
    {
        returnValue = F("Tannhauser Str.");
        break;
    }
    case 304687:
    {
        returnValue = F("Tannheimer Ring");
        break;
    }
    case 304688:
    {
        returnValue = F("Tannheimer Str.");
        break;
    }
    case 304689:
    {
        returnValue = F("Tannheimer Weg");
        break;
    }
    case 304690:
    {
        returnValue = F("Tannhof");
        break;
    }
    case 304691:
    {
        returnValue = F("Tannhoferweg");
        break;
    }
    case 304692:
    {
        returnValue = F("Tannhofweg");
        break;
    }
    case 304693:
    {
        returnValue = F("Tannholeweg");
        break;
    }
    case 304694:
    {
        returnValue = F("Tannholzstr.");
        break;
    }
    case 304695:
    {
        returnValue = F("Tannholzweg");
        break;
    }
    case 304696:
    {
        returnValue = F("Tannhorstfeld");
        break;
    }
    case 304697:
    {
        returnValue = F("Tannhorstweg");
        break;
    }
    case 304698:
    {
        returnValue = F("Tannhäuser");
        break;
    }
    case 304699:
    {
        returnValue = F("Tannhäuser Grund");
        break;
    }
    case 304700:
    {
        returnValue = F("Tannhäuser Str.");
        break;
    }
    case 304701:
    {
        returnValue = F("Tannhäuser Weg");
        break;
    }
    case 304702:
    {
        returnValue = F("Tannhäuserplatz");
        break;
    }
    case 304703:
    {
        returnValue = F("Tannhäuserring");
        break;
    }
    case 304704:
    {
        returnValue = F("Tannhäuserstr.");
        break;
    }
    case 304705:
    {
        returnValue = F("Tannhäuserweg");
        break;
    }
    case 304706:
    {
        returnValue = F("Tannhöfe");
        break;
    }
    case 304707:
    {
        returnValue = F("Tannhöfer Allee");
        break;
    }
    case 304708:
    {
        returnValue = F("Tannhöfstr.");
        break;
    }
    case 304709:
    {
        returnValue = F("Tannhölzlestr.");
        break;
    }
    case 304710:
    {
        returnValue = F("Tannicht");
        break;
    }
    case 304711:
    {
        returnValue = F("Tannichtstr.");
        break;
    }
    case 304712:
    {
        returnValue = F("Tannigstr.");
        break;
    }
    case 304713:
    {
        returnValue = F("Tannigweg");
        break;
    }
    case 304714:
    {
        returnValue = F("Tanninger Str.");
        break;
    }
    case 304715:
    {
        returnValue = F("Tannleiten");
        break;
    }
    case 304716:
    {
        returnValue = F("Tannleitenweg");
        break;
    }
    case 304717:
    {
        returnValue = F("Tannlohstr.");
        break;
    }
    case 304718:
    {
        returnValue = F("Tannlöherweg");
        break;
    }
    case 304719:
    {
        returnValue = F("Tannmühle");
        break;
    }
    case 304720:
    {
        returnValue = F("Tannmühlenstr.");
        break;
    }
    case 304721:
    {
        returnValue = F("Tanno-Düren-Weg");
        break;
    }
    case 304722:
    {
        returnValue = F("Tannostr.");
        break;
    }
    case 304723:
    {
        returnValue = F("Tannrainweg");
        break;
    }
    case 304724:
    {
        returnValue = F("Tannrodaer Str.");
        break;
    }
    case 304725:
    {
        returnValue = F("Tannrähmsring");
        break;
    }
    case 304726:
    {
        returnValue = F("Tannrähmsweg");
        break;
    }
    case 304727:
    {
        returnValue = F("Tannrütteweg");
        break;
    }
    case 304728:
    {
        returnValue = F("Tannsbergstr.");
        break;
    }
    case 304729:
    {
        returnValue = F("Tannschachenstr.");
        break;
    }
    case 304730:
    {
        returnValue = F("Tannschachhangweg");
        break;
    }
    case 304731:
    {
        returnValue = F("Tannschachstr.");
        break;
    }
    case 304732:
    {
        returnValue = F("Tannschachweg");
        break;
    }
    case 304733:
    {
        returnValue = F("Tannscharn");
        break;
    }
    case 304734:
    {
        returnValue = F("Tannscheidtweg");
        break;
    }
    case 304735:
    {
        returnValue = F("Tannschlagweg");
        break;
    }
    case 304736:
    {
        returnValue = F("Tannstorren");
        break;
    }
    case 304737:
    {
        returnValue = F("Tannstr.");
        break;
    }
    case 304738:
    {
        returnValue = F("Tanntrift");
        break;
    }
    case 304739:
    {
        returnValue = F("Tannwald");
        break;
    }
    case 304740:
    {
        returnValue = F("Tannwalder Str.");
        break;
    }
    case 304741:
    {
        returnValue = F("Tannwalder Weg");
        break;
    }
    case 304742:
    {
        returnValue = F("Tannwaldstr.");
        break;
    }
    case 304743:
    {
        returnValue = F("Tannwaldweg");
        break;
    }
    case 304744:
    {
        returnValue = F("Tannwasserstr.");
        break;
    }
    case 304745:
    {
        returnValue = F("Tannweg");
        break;
    }
    case 304746:
    {
        returnValue = F("Tannweiler");
        break;
    }
    case 304747:
    {
        returnValue = F("Tannweiler Str.");
        break;
    }
    case 304748:
    {
        returnValue = F("Tannweiler Weg");
        break;
    }
    case 304749:
    {
        returnValue = F("Tannweilerstr.");
        break;
    }
    case 304750:
    {
        returnValue = F("Tannweilerweg");
        break;
    }
    case 304751:
    {
        returnValue = F("Tannwiesen");
        break;
    }
    case 304752:
    {
        returnValue = F("Tannwäldeleweg");
        break;
    }
    case 304753:
    {
        returnValue = F("Tannäcker");
        break;
    }
    case 304754:
    {
        returnValue = F("Tannäckerlesteige");
        break;
    }
    case 304755:
    {
        returnValue = F("Tannäckerstr.");
        break;
    }
    case 304756:
    {
        returnValue = F("Tannäckerweg");
        break;
    }
    case 304757:
    {
        returnValue = F("Tannöschstr.");
        break;
    }
    case 304758:
    {
        returnValue = F("Tantalstr.");
        break;
    }
    case 304759:
    {
        returnValue = F("Tantaus Allee");
        break;
    }
    case 304760:
    {
        returnValue = F("Tante-Lucie-Str.");
        break;
    }
    case 304761:
    {
        returnValue = F("Tantelbruchweg");
        break;
    }
    case 304762:
    {
        returnValue = F("Tantenweg");
        break;
    }
    case 304763:
    {
        returnValue = F("Tantower Str.");
        break;
    }
    case 304764:
    {
        returnValue = F("Tantower Weg");
        break;
    }
    case 304765:
    {
        returnValue = F("Tanusblick");
        break;
    }
    case 304766:
    {
        returnValue = F("Tanvalder Str.");
        break;
    }
    case 304767:
    {
        returnValue = F("Tanzberg");
        break;
    }
    case 304768:
    {
        returnValue = F("Tanzbergstr.");
        break;
    }
    case 304769:
    {
        returnValue = F("Tanzbergweg");
        break;
    }
    case 304770:
    {
        returnValue = F("Tanzbodenweg");
        break;
    }
    case 304771:
    {
        returnValue = F("Tanzbühlweg");
        break;
    }
    case 304772:
    {
        returnValue = F("Tanzebengasse");
        break;
    }
    case 304773:
    {
        returnValue = F("Tanzeckstr.");
        break;
    }
    case 304774:
    {
        returnValue = F("Tanzenplatz");
        break;
    }
    case 304775:
    {
        returnValue = F("Tanzermühle");
        break;
    }
    case 304776:
    {
        returnValue = F("Tanzerstr.");
        break;
    }
    case 304777:
    {
        returnValue = F("Tanzgarten");
        break;
    }
    case 304778:
    {
        returnValue = F("Tanzgasse");
        break;
    }
    case 304779:
    {
        returnValue = F("Tanzgrube");
        break;
    }
    case 304780:
    {
        returnValue = F("Tanzhausgasse");
        break;
    }
    case 304781:
    {
        returnValue = F("Tanzhausstr.");
        break;
    }
    case 304782:
    {
        returnValue = F("Tanzlaube");
        break;
    }
    case 304783:
    {
        returnValue = F("Tanzlindenplatz");
        break;
    }
    case 304784:
    {
        returnValue = F("Tanzmattstr.");
        break;
    }
    case 304785:
    {
        returnValue = F("Tanzmeisterweg");
        break;
    }
    case 304786:
    {
        returnValue = F("Tanzplan");
        break;
    }
    case 304787:
    {
        returnValue = F("Tanzplatte");
        break;
    }
    case 304788:
    {
        returnValue = F("Tanzplatz");
        break;
    }
    case 304789:
    {
        returnValue = F("Tanzplatzweg");
        break;
    }
    case 304790:
    {
        returnValue = F("Tanzrech");
        break;
    }
    case 304791:
    {
        returnValue = F("Tanzstr.");
        break;
    }
    case 304792:
    {
        returnValue = F("Tanzwegle");
        break;
    }
    case 304793:
    {
        returnValue = F("Tanzwerder");
        break;
    }
    case 304794:
    {
        returnValue = F("Tanzwerderstr.");
        break;
    }
    case 304795:
    {
        returnValue = F("Tanzwiesenweg");
        break;
    }
    case 304796:
    {
        returnValue = F("Tanzwäldlestr.");
        break;
    }
    case 304797:
    {
        returnValue = F("Tanzwüste");
        break;
    }
    case 304798:
    {
        returnValue = F("Tanzzipfelweg");
        break;
    }
    case 304799:
    {
        returnValue = F("Tapachstr.");
        break;
    }
    case 304800:
    {
        returnValue = F("Tapachtal");
        break;
    }
    case 304801:
    {
        returnValue = F("Tapastr.");
        break;
    }
    case 304802:
    {
        returnValue = F("Tapiauer Str.");
        break;
    }
    case 304803:
    {
        returnValue = F("Tapirweg");
        break;
    }
    case 304804:
    {
        returnValue = F("Tapis Vert");
        break;
    }
    case 304805:
    {
        returnValue = F("Taplinsweg");
        break;
    }
    case 304806:
    {
        returnValue = F("Tappberger Feld");
        break;
    }
    case 304807:
    {
        returnValue = F("Tappehornstr.");
        break;
    }
    case 304808:
    {
        returnValue = F("Tappen Kamp");
        break;
    }
    case 304809:
    {
        returnValue = F("Tappenbecker Landstr.");
        break;
    }
    case 304810:
    {
        returnValue = F("Tappenbecker Weg");
        break;
    }
    case 304811:
    {
        returnValue = F("Tappenbeckstr.");
        break;
    }
    case 304812:
    {
        returnValue = F("Tappenberg");
        break;
    }
    case 304813:
    {
        returnValue = F("Tappengasse");
        break;
    }
    case 304814:
    {
        returnValue = F("Tappenhagen");
        break;
    }
    case 304815:
    {
        returnValue = F("Tappenhof");
        break;
    }
    case 304816:
    {
        returnValue = F("Tappenkamp");
        break;
    }
    case 304817:
    {
        returnValue = F("Tappenstr.");
        break;
    }
    case 304818:
    {
        returnValue = F("Tappenweg");
        break;
    }
    case 304819:
    {
        returnValue = F("Tappeweg");
        break;
    }
    case 304820:
    {
        returnValue = F("Tapplock");
        break;
    }
    case 304821:
    {
        returnValue = F("Tappmeyers Weg");
        break;
    }
    case 304822:
    {
        returnValue = F("Tappseestr.");
        break;
    }
    case 304823:
    {
        returnValue = F("Tapsgasse");
        break;
    }
    case 304824:
    {
        returnValue = F("Taradeauer Str.");
        break;
    }
    case 304825:
    {
        returnValue = F("Tarbackerweg");
        break;
    }
    case 304826:
    {
        returnValue = F("Tarbarger Landstr.");
        break;
    }
    case 304827:
    {
        returnValue = F("Tarbargsweg");
        break;
    }
    case 304828:
    {
        returnValue = F("Tarbeker Landstr.");
        break;
    }
    case 304829:
    {
        returnValue = F("Tarbeker Str.");
        break;
    }
    case 304830:
    {
        returnValue = F("Tarforster Str.");
        break;
    }
    case 304831:
    {
        returnValue = F("Taringerweg");
        break;
    }
    case 304832:
    {
        returnValue = F("Tarjei-Vesaas-Weg");
        break;
    }
    case 304833:
    {
        returnValue = F("Tarmitzer Str.");
        break;
    }
    case 304834:
    {
        returnValue = F("Tarmower Weg");
        break;
    }
    case 304835:
    {
        returnValue = F("Tarmstedter Str.");
        break;
    }
    case 304836:
    {
        returnValue = F("Tarnauer Weg");
        break;
    }
    case 304837:
    {
        returnValue = F("Tarnefitz");
        break;
    }
    case 304838:
    {
        returnValue = F("Tarnewitz Kamp");
        break;
    }
    case 304839:
    {
        returnValue = F("Tarnewitzer Chaussee");
        break;
    }
    case 304840:
    {
        returnValue = F("Tarnewitzer Huk");
        break;
    }
    case 304841:
    {
        returnValue = F("Tarnewitzer Str.");
        break;
    }
    case 304842:
    {
        returnValue = F("Tarnower Chaussee");
        break;
    }
    case 304843:
    {
        returnValue = F("Tarnower Landweg");
        break;
    }
    case 304844:
    {
        returnValue = F("Tarnower Str.");
        break;
    }
    case 304845:
    {
        returnValue = F("Tarnower Weg");
        break;
    }
    case 304846:
    {
        returnValue = F("Tarnowitzer Str.");
        break;
    }
    case 304847:
    {
        returnValue = F("Tarnowitzer Weg");
        break;
    }
    case 304848:
    {
        returnValue = F("Tarnowitzweg");
        break;
    }
    case 304849:
    {
        returnValue = F("Tarnowstr.");
        break;
    }
    case 304850:
    {
        returnValue = F("Tarnowweg");
        break;
    }
    case 304851:
    {
        returnValue = F("Tarostr.");
        break;
    }
    case 304852:
    {
        returnValue = F("Tarpanring");
        break;
    }
    case 304853:
    {
        returnValue = F("Tarpenbekstr.");
        break;
    }
    case 304854:
    {
        returnValue = F("Tarper Str.");
        break;
    }
    case 304855:
    {
        returnValue = F("Tarpholz");
        break;
    }
    case 304856:
    {
        returnValue = F("Tarpstr.");
        break;
    }
    case 304857:
    {
        returnValue = F("Tarrheide");
        break;
    }
    case 304858:
    {
        returnValue = F("Tartanbahn");
        break;
    }
    case 304859:
    {
        returnValue = F("Tartarenberg");
        break;
    }
    case 304860:
    {
        returnValue = F("Tarthuner Str.");
        break;
    }
    case 304861:
    {
        returnValue = F("Tarthuner Weg");
        break;
    }
    case 304862:
    {
        returnValue = F("Tartsberg");
        break;
    }
    case 304863:
    {
        returnValue = F("Tartuer Str.");
        break;
    }
    case 304864:
    {
        returnValue = F("Tarunstr.");
        break;
    }
    case 304865:
    {
        returnValue = F("Taruper Hauptstr.");
        break;
    }
    case 304866:
    {
        returnValue = F("Taruper Weg");
        break;
    }
    case 304867:
    {
        returnValue = F("Tarzow");
        break;
    }
    case 304868:
    {
        returnValue = F("Taschehof");
        break;
    }
    case 304869:
    {
        returnValue = F("Taschen");
        break;
    }
    case 304870:
    {
        returnValue = F("Taschenacker");
        break;
    }
    case 304871:
    {
        returnValue = F("Taschenberg");
        break;
    }
    case 304872:
    {
        returnValue = F("Taschengasse");
        break;
    }
    case 304873:
    {
        returnValue = F("Taschengrubenweg");
        break;
    }
    case 304874:
    {
        returnValue = F("Taschenklapp");
        break;
    }
    case 304875:
    {
        returnValue = F("Taschenlandweg");
        break;
    }
    case 304876:
    {
        returnValue = F("Taschenmais");
        break;
    }
    case 304877:
    {
        returnValue = F("Taschenpfad");
        break;
    }
    case 304878:
    {
        returnValue = F("Taschenturmstr.");
        break;
    }
    case 304879:
    {
        returnValue = F("Taschenwaldweg");
        break;
    }
    case 304880:
    {
        returnValue = F("Taschenweg");
        break;
    }
    case 304881:
    {
        returnValue = F("Taschenäckerstr.");
        break;
    }
    case 304882:
    {
        returnValue = F("Taschenäckerweg");
        break;
    }
    case 304883:
    {
        returnValue = F("Taschetwiesen");
        break;
    }
    case 304884:
    {
        returnValue = F("Taschnerstr.");
        break;
    }
    case 304885:
    {
        returnValue = F("Taschnerweg");
        break;
    }
    case 304886:
    {
        returnValue = F("Tasdorf Süd");
        break;
    }
    case 304887:
    {
        returnValue = F("Tasdorfer Str.");
        break;
    }
    case 304888:
    {
        returnValue = F("Tasdorfer Weg");
        break;
    }
    case 304889:
    {
        returnValue = F("Tasmanweg");
        break;
    }
    case 304890:
    {
        returnValue = F("Taspelstr.");
        break;
    }
    case 304891:
    {
        returnValue = F("Tassilo Str.");
        break;
    }
    case 304892:
    {
        returnValue = F("Tassilo-Tröscher-Str.");
        break;
    }
    case 304893:
    {
        returnValue = F("Tassilo-Zöpf-Weg");
        break;
    }
    case 304894:
    {
        returnValue = F("Tassiloplatz");
        break;
    }
    case 304895:
    {
        returnValue = F("Tassiloring");
        break;
    }
    case 304896:
    {
        returnValue = F("Tassilostr.");
        break;
    }
    case 304897:
    {
        returnValue = F("Tassiloweg");
        break;
    }
    case 304898:
    {
        returnValue = F("Tassostr.");
        break;
    }
    case 304899:
    {
        returnValue = F("Tast- und Schnupperpfad");
        break;
    }
    case 304900:
    {
        returnValue = F("Tastruper Weg");
        break;
    }
    case 304901:
    {
        returnValue = F("Tastunger Str.");
        break;
    }
    case 304902:
    {
        returnValue = F("Tatastr.");
        break;
    }
    case 304903:
    {
        returnValue = F("Tatemannsstr.");
        break;
    }
    case 304904:
    {
        returnValue = F("Tatemeer");
        break;
    }
    case 304905:
    {
        returnValue = F("Tatendorf");
        break;
    }
    case 304906:
    {
        returnValue = F("Tatendorfer Str.");
        break;
    }
    case 304907:
    {
        returnValue = F("Tatengasse");
        break;
    }
    case 304908:
    {
        returnValue = F("Tatenhausener Str.");
        break;
    }
    case 304909:
    {
        returnValue = F("Taterberg");
        break;
    }
    case 304910:
    {
        returnValue = F("Taterbergweg");
        break;
    }
    case 304911:
    {
        returnValue = F("Taterborn");
        break;
    }
    case 304912:
    {
        returnValue = F("Tatergang");
        break;
    }
    case 304913:
    {
        returnValue = F("Taterkrug");
        break;
    }
    case 304914:
    {
        returnValue = F("Tatermoor");
        break;
    }
    case 304915:
    {
        returnValue = F("Tatern");
        break;
    }
    case 304916:
    {
        returnValue = F("Taternberg");
        break;
    }
    case 304917:
    {
        returnValue = F("Taternbruchweg");
        break;
    }
    case 304918:
    {
        returnValue = F("Taterntrift");
        break;
    }
    case 304919:
    {
        returnValue = F("Taternweg");
        break;
    }
    case 304920:
    {
        returnValue = F("Taterphal");
        break;
    }
    case 304921:
    {
        returnValue = F("Taterweg");
        break;
    }
    case 304922:
    {
        returnValue = F("Tatinger Str.");
        break;
    }
    case 304923:
    {
        returnValue = F("Tatjana-Lietz-Weg");
        break;
    }
    case 304924:
    {
        returnValue = F("Tatostr.");
        break;
    }
    case 304925:
    {
        returnValue = F("Tatow");
        break;
    }
    case 304926:
    {
        returnValue = F("Tatrastr.");
        break;
    }
    case 304927:
    {
        returnValue = F("Tatschenweg");
        break;
    }
    case 304928:
    {
        returnValue = F("Tatschower Weg");
        break;
    }
    case 304929:
    {
        returnValue = F("Tattenbacher Weg");
        break;
    }
    case 304930:
    {
        returnValue = F("Tattenbachplatz");
        break;
    }
    case 304931:
    {
        returnValue = F("Tattenbachstr.");
        break;
    }
    case 304932:
    {
        returnValue = F("Tattenbachweg");
        break;
    }
    case 304933:
    {
        returnValue = F("Tattenberg");
        break;
    }
    case 304934:
    {
        returnValue = F("Tattenhagen");
        break;
    }
    case 304935:
    {
        returnValue = F("Tattenkofen");
        break;
    }
    case 304936:
    {
        returnValue = F("Tattenkofener Str.");
        break;
    }
    case 304937:
    {
        returnValue = F("Tattenseestr.");
        break;
    }
    case 304938:
    {
        returnValue = F("Tatterholzschneise");
        break;
    }
    case 304939:
    {
        returnValue = F("Tatterhörn");
        break;
    }
    case 304940:
    {
        returnValue = F("Tattersall");
        break;
    }
    case 304941:
    {
        returnValue = F("Tattersallstr.");
        break;
    }
    case 304942:
    {
        returnValue = F("Tatzberg");
        break;
    }
    case 304943:
    {
        returnValue = F("Tatzelwurm");
        break;
    }
    case 304944:
    {
        returnValue = F("Tatzelwurmstr.");
        break;
    }
    case 304945:
    {
        returnValue = F("Tatzendpromenade");
        break;
    }
    case 304946:
    {
        returnValue = F("Tatzlwurm");
        break;
    }
    case 304947:
    {
        returnValue = F("Tatzstr.");
        break;
    }
    case 304948:
    {
        returnValue = F("Tau de Deel");
        break;
    }
    case 304949:
    {
        returnValue = F("Tau'n Küstenwald");
        break;
    }
    case 304950:
    {
        returnValue = F("Tau'n Lüchttorm");
        break;
    }
    case 304951:
    {
        returnValue = F("Tauaer Weg");
        break;
    }
    case 304952:
    {
        returnValue = F("Taubacher Str.");
        break;
    }
    case 304953:
    {
        returnValue = F("Taubachrain");
        break;
    }
    case 304954:
    {
        returnValue = F("Taubachstr.");
        break;
    }
    case 304955:
    {
        returnValue = F("Taubachweg");
        break;
    }
    case 304956:
    {
        returnValue = F("Taubaldshäuser");
        break;
    }
    case 304957:
    {
        returnValue = F("Taubbronnenweg");
        break;
    }
    case 304958:
    {
        returnValue = F("Taube Bünte");
        break;
    }
    case 304959:
    {
        returnValue = F("Tauben-Bahn");
        break;
    }
    case 304960:
    {
        returnValue = F("Taubenacker");
        break;
    }
    case 304961:
    {
        returnValue = F("Taubenaustr.");
        break;
    }
    case 304962:
    {
        returnValue = F("Taubenbacher Str.");
        break;
    }
    case 304963:
    {
        returnValue = F("Taubenbacher Weg");
        break;
    }
    case 304964:
    {
        returnValue = F("Taubenbachtal");
        break;
    }
    case 304965:
    {
        returnValue = F("Taubenbachweg");
        break;
    }
    case 304966:
    {
        returnValue = F("Taubenbaum");
        break;
    }
    case 304967:
    {
        returnValue = F("Taubenbaumsteige");
        break;
    }
    case 304968:
    {
        returnValue = F("Taubenbaumweg");
        break;
    }
    case 304969:
    {
        returnValue = F("Taubenberg");
        break;
    }
    case 304970:
    {
        returnValue = F("Taubenberger Hof");
        break;
    }
    case 304971:
    {
        returnValue = F("Taubenbergerstr.");
        break;
    }
    case 304972:
    {
        returnValue = F("Taubenbergstr.");
        break;
    }
    case 304973:
    {
        returnValue = F("Taubenbergweg");
        break;
    }
    case 304974:
    {
        returnValue = F("Taubenbogen");
        break;
    }
    case 304975:
    {
        returnValue = F("Taubenbrandweg");
        break;
    }
    case 304976:
    {
        returnValue = F("Taubenbreite");
        break;
    }
    case 304977:
    {
        returnValue = F("Taubenbrunnen");
        break;
    }
    case 304978:
    {
        returnValue = F("Taubenbrunnenweg");
        break;
    }
    case 304979:
    {
        returnValue = F("Taubenbrücke");
        break;
    }
    case 304980:
    {
        returnValue = F("Taubenbrückenweg");
        break;
    }
    case 304981:
    {
        returnValue = F("Taubenbusch");
        break;
    }
    case 304982:
    {
        returnValue = F("Taubenböhl");
        break;
    }
    case 304983:
    {
        returnValue = F("Taubenbühlstr.");
        break;
    }
    case 304984:
    {
        returnValue = F("Taubendelle");
        break;
    }
    case 304985:
    {
        returnValue = F("Taubeneck");
        break;
    }
    case 304986:
    {
        returnValue = F("Taubeneiche");
        break;
    }
    case 304987:
    {
        returnValue = F("Taubenfang");
        break;
    }
    case 304988:
    {
        returnValue = F("Taubenfeld");
        break;
    }
    case 304989:
    {
        returnValue = F("Taubenfeldstr.");
        break;
    }
    case 304990:
    {
        returnValue = F("Taubenfleck");
        break;
    }
    case 304991:
    {
        returnValue = F("Taubenflugstr.");
        break;
    }
    case 304992:
    {
        returnValue = F("Taubenflur");
        break;
    }
    case 304993:
    {
        returnValue = F("Taubenforst");
        break;
    }
    case 304994:
    {
        returnValue = F("Taubenfuhr");
        break;
    }
    case 304995:
    {
        returnValue = F("Taubenfurth");
        break;
    }
    case 304996:
    {
        returnValue = F("Taubengang");
        break;
    }
    case 304997:
    {
        returnValue = F("Taubengarten");
        break;
    }
    case 304998:
    {
        returnValue = F("Taubengartenhohl");
        break;
    }
    case 304999:
    {
        returnValue = F("Taubengasse");
        break;
    }
    case 305000:
    {
        returnValue = F("Taubengraben");
        break;
    }
    case 305001:
    {
        returnValue = F("Taubengracht");
        break;
    }
    case 305002:
    {
        returnValue = F("Taubengrund");
        break;
    }
    case 305003:
    {
        returnValue = F("Taubengrundschneise");
        break;
    }
    case 305004:
    {
        returnValue = F("Taubengründelweg");
        break;
    }
    case 305005:
    {
        returnValue = F("Taubengäßchen");
        break;
    }
    case 305006:
    {
        returnValue = F("Taubenhaus");
        break;
    }
    case 305007:
    {
        returnValue = F("Taubenhausweg");
        break;
    }
    case 305008:
    {
        returnValue = F("Taubenheide");
        break;
    }
    case 305009:
    {
        returnValue = F("Taubenheimer Str.");
        break;
    }
    case 305010:
    {
        returnValue = F("Taubenheimer Weg");
        break;
    }
    case 305011:
    {
        returnValue = F("Taubenheimerwaldweg");
        break;
    }
    case 305012:
    {
        returnValue = F("Taubenheimstr.");
        break;
    }
    case 305013:
    {
        returnValue = F("Taubenherd");
        break;
    }
    case 305014:
    {
        returnValue = F("Taubenhof");
        break;
    }
    case 305015:
    {
        returnValue = F("Taubenhofweg");
        break;
    }
    case 305016:
    {
        returnValue = F("Taubenholzweg");
        break;
    }
    case 305017:
    {
        returnValue = F("Taubenhopsgang");
        break;
    }
    case 305018:
    {
        returnValue = F("Taubenhöheweg");
        break;
    }
    case 305019:
    {
        returnValue = F("Taubenhöhler Weg");
        break;
    }
    case 305020:
    {
        returnValue = F("Taubenhörn");
        break;
    }
    case 305021:
    {
        returnValue = F("Taubenhügel");
        break;
    }
    case 305022:
    {
        returnValue = F("Taubenhüll");
        break;
    }
    case 305023:
    {
        returnValue = F("Taubenhüller Weg");
        break;
    }
    case 305024:
    {
        returnValue = F("Taubenhütte");
        break;
    }
    case 305025:
    {
        returnValue = F("Taubenkamp");
        break;
    }
    case 305026:
    {
        returnValue = F("Taubenkloppstr.");
        break;
    }
    case 305027:
    {
        returnValue = F("Taubenkopf");
        break;
    }
    case 305028:
    {
        returnValue = F("Taubenkopfstr.");
        break;
    }
    case 305029:
    {
        returnValue = F("Taubenkopfweg");
        break;
    }
    case 305030:
    {
        returnValue = F("Taubenlachschneise");
        break;
    }
    case 305031:
    {
        returnValue = F("Taubenloch");
        break;
    }
    case 305032:
    {
        returnValue = F("Taubenlohweg");
        break;
    }
    case 305033:
    {
        returnValue = F("Taubenmarkt");
        break;
    }
    case 305034:
    {
        returnValue = F("Taubenmühlweg");
        break;
    }
    case 305035:
    {
        returnValue = F("Taubennest");
        break;
    }
    case 305036:
    {
        returnValue = F("Taubennestweg");
        break;
    }
    case 305037:
    {
        returnValue = F("Taubenpfad");
        break;
    }
    case 305038:
    {
        returnValue = F("Taubenplan");
        break;
    }
    case 305039:
    {
        returnValue = F("Taubenplatz");
        break;
    }
    case 305040:
    {
        returnValue = F("Taubenpreskelner Str.");
        break;
    }
    case 305041:
    {
        returnValue = F("Taubenpöthen");
        break;
    }
    case 305042:
    {
        returnValue = F("Taubenrain");
        break;
    }
    case 305043:
    {
        returnValue = F("Taubenrauschweg");
        break;
    }
    case 305044:
    {
        returnValue = F("Taubenriedstr.");
        break;
    }
    case 305045:
    {
        returnValue = F("Taubenriedweg");
        break;
    }
    case 305046:
    {
        returnValue = F("Taubenring");
        break;
    }
    case 305047:
    {
        returnValue = F("Taubenschlag");
        break;
    }
    case 305048:
    {
        returnValue = F("Taubenschlagweg");
        break;
    }
    case 305049:
    {
        returnValue = F("Taubenschmidstr.");
        break;
    }
    case 305050:
    {
        returnValue = F("Taubenseestr.");
        break;
    }
    case 305051:
    {
        returnValue = F("Taubenseeweg");
        break;
    }
    case 305052:
    {
        returnValue = F("Taubensiefen");
        break;
    }
    case 305053:
    {
        returnValue = F("Taubensteig");
        break;
    }
    case 305054:
    {
        returnValue = F("Taubenstein");
        break;
    }
    case 305055:
    {
        returnValue = F("Taubensteinbogen");
        break;
    }
    case 305056:
    {
        returnValue = F("Taubensteinstr.");
        break;
    }
    case 305057:
    {
        returnValue = F("Taubensteinweg");
        break;
    }
    case 305058:
    {
        returnValue = F("Taubenstellige");
        break;
    }
    case 305059:
    {
        returnValue = F("Taubenstieg");
        break;
    }
    case 305060:
    {
        returnValue = F("Taubenstr.");
        break;
    }
    case 305061:
    {
        returnValue = F("Taubensuhlerstr.");
        break;
    }
    case 305062:
    {
        returnValue = F("Taubensuhlstr.");
        break;
    }
    case 305063:
    {
        returnValue = F("Taubental");
        break;
    }
    case 305064:
    {
        returnValue = F("Taubentalstr.");
        break;
    }
    case 305065:
    {
        returnValue = F("Taubentalsweg");
        break;
    }
    case 305066:
    {
        returnValue = F("Taubentalweg");
        break;
    }
    case 305067:
    {
        returnValue = F("Taubenteicher Weg");
        break;
    }
    case 305068:
    {
        returnValue = F("Taubentränke");
        break;
    }
    case 305069:
    {
        returnValue = F("Taubenvogtweg");
        break;
    }
    case 305070:
    {
        returnValue = F("Taubenweg");
        break;
    }
    case 305071:
    {
        returnValue = F("Taubenweiherweg");
        break;
    }
    case 305072:
    {
        returnValue = F("Taubenwinkel");
        break;
    }
    case 305073:
    {
        returnValue = F("Taubenäcker");
        break;
    }
    case 305074:
    {
        returnValue = F("Taubenäckerweg");
        break;
    }
    case 305075:
    {
        returnValue = F("Tauber-Promenade");
        break;
    }
    case 305076:
    {
        returnValue = F("Tauberbacher Weg");
        break;
    }
    case 305077:
    {
        returnValue = F("Tauberbergstr.");
        break;
    }
    case 305078:
    {
        returnValue = F("Tauberbischofsheimer Str.");
        break;
    }
    case 305079:
    {
        returnValue = F("Tauberblick");
        break;
    }
    case 305080:
    {
        returnValue = F("Tauberbrücke");
        break;
    }
    case 305081:
    {
        returnValue = F("Tauberfelder Str.");
        break;
    }
    case 305082:
    {
        returnValue = F("Tauberfelder Weg");
        break;
    }
    case 305083:
    {
        returnValue = F("Taubergasse");
        break;
    }
    case 305084:
    {
        returnValue = F("Taubergat");
        break;
    }
    case 305085:
    {
        returnValue = F("Taubergrund");
        break;
    }
    case 305086:
    {
        returnValue = F("Taubergsweg");
        break;
    }
    case 305087:
    {
        returnValue = F("Taubergweg");
        break;
    }
    case 305088:
    {
        returnValue = F("Tauberhangweg");
        break;
    }
    case 305089:
    {
        returnValue = F("Tauberhell");
        break;
    }
    case 305090:
    {
        returnValue = F("Tauberhöhe");
        break;
    }
    case 305091:
    {
        returnValue = F("Tauberleite");
        break;
    }
    case 305092:
    {
        returnValue = F("Taubermühle");
        break;
    }
    case 305093:
    {
        returnValue = F("Taubermühlenweg");
        break;
    }
    case 305094:
    {
        returnValue = F("Tauberring");
        break;
    }
    case 305095:
    {
        returnValue = F("Taubersbachstr.");
        break;
    }
    case 305096:
    {
        returnValue = F("Taubersberg");
        break;
    }
    case 305097:
    {
        returnValue = F("Taubersbergstr.");
        break;
    }
    case 305098:
    {
        returnValue = F("Taubersbergweg");
        break;
    }
    case 305099:
    {
        returnValue = F("Tauberschwarzstr.");
        break;
    }
    case 305100:
    {
        returnValue = F("Tauberseeweg");
        break;
    }
    case 305101:
    {
        returnValue = F("Tauberstr.");
        break;
    }
    case 305102:
    {
        returnValue = F("Taubertalstr.");
        break;
    }
    case 305103:
    {
        returnValue = F("Taubertalweg");
        break;
    }
    case 305104:
    {
        returnValue = F("Tauberthstr.");
        break;
    }
    case 305105:
    {
        returnValue = F("Taubertor");
        break;
    }
    case 305106:
    {
        returnValue = F("Taubertsgasse");
        break;
    }
    case 305107:
    {
        returnValue = F("Taubertsgrund");
        break;
    }
    case 305108:
    {
        returnValue = F("Taubertstr.");
        break;
    }
    case 305109:
    {
        returnValue = F("Tauberweg");
        break;
    }
    case 305110:
    {
        returnValue = F("Tauberzeller Weg");
        break;
    }
    case 305111:
    {
        returnValue = F("Taubesgarten");
        break;
    }
    case 305112:
    {
        returnValue = F("Taubestr.");
        break;
    }
    case 305113:
    {
        returnValue = F("Taubfeld");
        break;
    }
    case 305114:
    {
        returnValue = F("Taubgasse");
        break;
    }
    case 305115:
    {
        returnValue = F("Taubhaus");
        break;
    }
    case 305116:
    {
        returnValue = F("Taubhausring");
        break;
    }
    case 305117:
    {
        returnValue = F("Taubhausstr.");
        break;
    }
    case 305118:
    {
        returnValue = F("Taubmannstr.");
        break;
    }
    case 305119:
    {
        returnValue = F("Taubmannsweg");
        break;
    }
    case 305120:
    {
        returnValue = F("Taubnesselweg");
        break;
    }
    case 305121:
    {
        returnValue = F("Taubriedstr.");
        break;
    }
    case 305122:
    {
        returnValue = F("Taubrunnenweg");
        break;
    }
    case 305123:
    {
        returnValue = F("Tauchaer Str.");
        break;
    }
    case 305124:
    {
        returnValue = F("Tauchaer Weg");
        break;
    }
    case 305125:
    {
        returnValue = F("Tauchbasis");
        break;
    }
    case 305126:
    {
        returnValue = F("Tauchenweilerstr.");
        break;
    }
    case 305127:
    {
        returnValue = F("Taucher Chaussee");
        break;
    }
    case 305128:
    {
        returnValue = F("Tauchersreuther Hauptstr.");
        break;
    }
    case 305129:
    {
        returnValue = F("Tauchersreuther Str.");
        break;
    }
    case 305130:
    {
        returnValue = F("Taucherstr.");
        break;
    }
    case 305131:
    {
        returnValue = F("Taucherwaldstr.");
        break;
    }
    case 305132:
    {
        returnValue = F("Taucherweg");
        break;
    }
    case 305133:
    {
        returnValue = F("Tauchlitz");
        break;
    }
    case 305134:
    {
        returnValue = F("Tauchlitzer Str.");
        break;
    }
    case 305135:
    {
        returnValue = F("Tauchmanns Mühle");
        break;
    }
    case 305136:
    {
        returnValue = F("Tauchseeweg");
        break;
    }
    case 305137:
    {
        returnValue = F("Tauchstein");
        break;
    }
    case 305138:
    {
        returnValue = F("Tauchsteinhalden");
        break;
    }
    case 305139:
    {
        returnValue = F("Tauchsteinweg");
        break;
    }
    case 305140:
    {
        returnValue = F("Tauentzienstr.");
        break;
    }
    case 305141:
    {
        returnValue = F("Tauererweg");
        break;
    }
    case 305142:
    {
        returnValue = F("Tauernstr.");
        break;
    }
    case 305143:
    {
        returnValue = F("Tauernweg");
        break;
    }
    case 305144:
    {
        returnValue = F("Taufachweg");
        break;
    }
    case 305145:
    {
        returnValue = F("Taufbachweg");
        break;
    }
    case 305146:
    {
        returnValue = F("Taufbaumallee");
        break;
    }
    case 305147:
    {
        returnValue = F("Taufeweg");
        break;
    }
    case 305148:
    {
        returnValue = F("Taufkirchener Str.");
        break;
    }
    case 305149:
    {
        returnValue = F("Taufkirchenstr.");
        break;
    }
    case 305150:
    {
        returnValue = F("Taufkirchenweg");
        break;
    }
    case 305151:
    {
        returnValue = F("Taufkirchner Str.");
        break;
    }
    case 305152:
    {
        returnValue = F("Taufkirchner Weg");
        break;
    }
    case 305153:
    {
        returnValue = F("Taufnethe");
        break;
    }
    case 305154:
    {
        returnValue = F("Taufstein");
        break;
    }
    case 305155:
    {
        returnValue = F("Taufsteinstr.");
        break;
    }
    case 305156:
    {
        returnValue = F("Taufsteinweg");
        break;
    }
    case 305157:
    {
        returnValue = F("Taufweg");
        break;
    }
    case 305158:
    {
        returnValue = F("Taufwinkel");
        break;
    }
    case 305159:
    {
        returnValue = F("Taugenweg");
        break;
    }
    case 305160:
    {
        returnValue = F("Tauhardter Str.");
        break;
    }
    case 305161:
    {
        returnValue = F("Tauhardtsche Str.");
        break;
    }
    case 305162:
    {
        returnValue = F("Taulerstr.");
        break;
    }
    case 305163:
    {
        returnValue = F("Taumzielpark");
        break;
    }
    case 305164:
    {
        returnValue = F("Taun Boomkamp");
        break;
    }
    case 305165:
    {
        returnValue = F("Taun Piggenbarg");
        break;
    }
    case 305166:
    {
        returnValue = F("Taun Riedbach");
        break;
    }
    case 305167:
    {
        returnValue = F("Taun Schultenbarg");
        break;
    }
    case 305168:
    {
        returnValue = F("Taun Vörmann");
        break;
    }
    case 305169:
    {
        returnValue = F("Tauner");
        break;
    }
    case 305170:
    {
        returnValue = F("Tauntonring");
        break;
    }
    case 305171:
    {
        returnValue = F("Taunusallee");
        break;
    }
    case 305172:
    {
        returnValue = F("Taunusanlage");
        break;
    }
    case 305173:
    {
        returnValue = F("Taunusblick");
        break;
    }
    case 305174:
    {
        returnValue = F("Taunusbogen");
        break;
    }
    case 305175:
    {
        returnValue = F("Taunushöhenweg");
        break;
    }
    case 305176:
    {
        returnValue = F("Taunuskamm Pfad");
        break;
    }
    case 305177:
    {
        returnValue = F("Taunusplatz");
        break;
    }
    case 305178:
    {
        returnValue = F("Taunusring");
        break;
    }
    case 305179:
    {
        returnValue = F("Taunussteiner Str.");
        break;
    }
    case 305180:
    {
        returnValue = F("Taunusstr.");
        break;
    }
    case 305181:
    {
        returnValue = F("Taunustor");
        break;
    }
    case 305182:
    {
        returnValue = F("Taunusweg");
        break;
    }
    case 305183:
    {
        returnValue = F("Taunusweiler");
        break;
    }
    case 305184:
    {
        returnValue = F("Taupadel");
        break;
    }
    case 305185:
    {
        returnValue = F("Taupadeler Weg");
        break;
    }
    case 305186:
    {
        returnValue = F("Tauplitz");
        break;
    }
    case 305187:
    {
        returnValue = F("Tauraer Str.");
        break;
    }
    case 305188:
    {
        returnValue = F("Tauraer Weg");
        break;
    }
    case 305189:
    {
        returnValue = F("Taurasteinstr.");
        break;
    }
    case 305190:
    {
        returnValue = F("Taurengasse");
        break;
    }
    case 305191:
    {
        returnValue = F("Taurengäßchen");
        break;
    }
    case 305192:
    {
        returnValue = F("Tauriskerweg");
        break;
    }
    case 305193:
    {
        returnValue = F("Tauroggener Str.");
        break;
    }
    case 305194:
    {
        returnValue = F("Tauroggenstr.");
        break;
    }
    case 305195:
    {
        returnValue = F("Tauroggenweg");
        break;
    }
    case 305196:
    {
        returnValue = F("Taurogger Platz");
        break;
    }
    case 305197:
    {
        returnValue = F("Taurusstr.");
        break;
    }
    case 305198:
    {
        returnValue = F("Taurusweg");
        break;
    }
    case 305199:
    {
        returnValue = F("Tausa");
        break;
    }
    case 305200:
    {
        returnValue = F("Tauschackerweg");
        break;
    }
    case 305201:
    {
        returnValue = F("Tauschaer Str.");
        break;
    }
    case 305202:
    {
        returnValue = F("Tauschaer Weg");
        break;
    }
    case 305203:
    {
        returnValue = F("Tauschendorf");
        break;
    }
    case 305204:
    {
        returnValue = F("Tauschendorfer Str.");
        break;
    }
    case 305205:
    {
        returnValue = F("Tauscherstr.");
        break;
    }
    case 305206:
    {
        returnValue = F("Tauschfeldstr.");
        break;
    }
    case 305207:
    {
        returnValue = F("Tauschgraben");
        break;
    }
    case 305208:
    {
        returnValue = F("Tauschke Talweg");
        break;
    }
    case 305209:
    {
        returnValue = F("Tauschklingenweg");
        break;
    }
    case 305210:
    {
        returnValue = F("Tauschlag");
        break;
    }
    case 305211:
    {
        returnValue = F("Tauschlagstr.");
        break;
    }
    case 305212:
    {
        returnValue = F("Tauschthal");
        break;
    }
    case 305213:
    {
        returnValue = F("Tauschwaldweg");
        break;
    }
    case 305214:
    {
        returnValue = F("Tauschweg");
        break;
    }
    case 305215:
    {
        returnValue = F("Tauschwitz");
        break;
    }
    case 305216:
    {
        returnValue = F("Tauschwitzer Str.");
        break;
    }
    case 305217:
    {
        returnValue = F("Tausendbühlweg");
        break;
    }
    case 305218:
    {
        returnValue = F("Tausenderkurve");
        break;
    }
    case 305219:
    {
        returnValue = F("Tausenderstr.");
        break;
    }
    case 305220:
    {
        returnValue = F("Tausendfüßlerbrücke");
        break;
    }
    case 305221:
    {
        returnValue = F("Tausendfüßlergasse");
        break;
    }
    case 305222:
    {
        returnValue = F("Tausendfüßlergässl");
        break;
    }
    case 305223:
    {
        returnValue = F("Tausendmarksweg");
        break;
    }
    case 305224:
    {
        returnValue = F("Tausendschritteweg");
        break;
    }
    case 305225:
    {
        returnValue = F("Tausendschönweg");
        break;
    }
    case 305226:
    {
        returnValue = F("Tausendstäffele");
        break;
    }
    case 305227:
    {
        returnValue = F("Tautenburger Str.");
        break;
    }
    case 305228:
    {
        returnValue = F("Tautenburger Weg");
        break;
    }
    case 305229:
    {
        returnValue = F("Tautendorf");
        break;
    }
    case 305230:
    {
        returnValue = F("Tautendorfer Weg");
        break;
    }
    case 305231:
    {
        returnValue = F("Tautenhain");
        break;
    }
    case 305232:
    {
        returnValue = F("Tautenhainer Bahnhofstr.");
        break;
    }
    case 305233:
    {
        returnValue = F("Tautenhainer Marktweg");
        break;
    }
    case 305234:
    {
        returnValue = F("Tautenhainer Str.");
        break;
    }
    case 305235:
    {
        returnValue = F("Tautenhofer Str.");
        break;
    }
    case 305236:
    {
        returnValue = F("Tautenwind");
        break;
    }
    case 305237:
    {
        returnValue = F("Tautewalde");
        break;
    }
    case 305238:
    {
        returnValue = F("Tautinger Str.");
        break;
    }
    case 305239:
    {
        returnValue = F("Tautinger Weg");
        break;
    }
    case 305240:
    {
        returnValue = F("Tautschbuchstr.");
        break;
    }
    case 305241:
    {
        returnValue = F("Tautstr.");
        break;
    }
    case 305242:
    {
        returnValue = F("Tauweg");
        break;
    }
    case 305243:
    {
        returnValue = F("Tauwerk");
        break;
    }
    case 305244:
    {
        returnValue = F("Tauwerkstr.");
        break;
    }
    case 305245:
    {
        returnValue = F("Tauzenbühlweg");
        break;
    }
    case 305246:
    {
        returnValue = F("Tavarneller Weg");
        break;
    }
    case 305247:
    {
        returnValue = F("Tavaux Str.");
        break;
    }
    case 305248:
    {
        returnValue = F("Tavenhorn");
        break;
    }
    case 305249:
    {
        returnValue = F("Tavenraatstr.");
        break;
    }
    case 305250:
    {
        returnValue = F("Tavernengasse");
        break;
    }
    case 305251:
    {
        returnValue = F("Tavernenstr.");
        break;
    }
    case 305252:
    {
        returnValue = F("Tavernenweg");
        break;
    }
    case 305253:
    {
        returnValue = F("Tavistockstr.");
        break;
    }
    case 305254:
    {
        returnValue = F("Taxa");
        break;
    }
    case 305255:
    {
        returnValue = F("Taxa-Kapellen-Weg");
        break;
    }
    case 305256:
    {
        returnValue = F("Taxberg");
        break;
    }
    case 305257:
    {
        returnValue = F("Taxberger Weg");
        break;
    }
    case 305258:
    {
        returnValue = F("Taxbergstr.");
        break;
    }
    case 305259:
    {
        returnValue = F("Taxbergweg");
        break;
    }
    case 305260:
    {
        returnValue = F("Taxen-Geräumt");
        break;
    }
    case 305261:
    {
        returnValue = F("Taxenberg");
        break;
    }
    case 305262:
    {
        returnValue = F("Taxerstr.");
        break;
    }
    case 305263:
    {
        returnValue = F("Taxetstr.");
        break;
    }
    case 305264:
    {
        returnValue = F("Taxetweg");
        break;
    }
    case 305265:
    {
        returnValue = F("Taxispark");
        break;
    }
    case 305266:
    {
        returnValue = F("Taxisring");
        break;
    }
    case 305267:
    {
        returnValue = F("Taxisstr.");
        break;
    }
    case 305268:
    {
        returnValue = F("Taxiswald");
        break;
    }
    case 305269:
    {
        returnValue = F("Taxiway");
        break;
    }
    case 305270:
    {
        returnValue = F("Taxleitenweg");
        break;
    }
    case 305271:
    {
        returnValue = F("Taxusstr.");
        break;
    }
    case 305272:
    {
        returnValue = F("Taxusweg");
        break;
    }
    case 305273:
    {
        returnValue = F("Taxweg");
        break;
    }
    case 305274:
    {
        returnValue = F("Taybeerweg");
        break;
    }
    case 305275:
    {
        returnValue = F("Tayemoor");
        break;
    }
    case 305276:
    {
        returnValue = F("Taylor Park");
        break;
    }
    case 305277:
    {
        returnValue = F("Teamstr.");
        break;
    }
    case 305278:
    {
        returnValue = F("Tebbehoff");
        break;
    }
    case 305279:
    {
        returnValue = F("Tebbenhof");
        break;
    }
    case 305280:
    {
        returnValue = F("Tebbenweg");
        break;
    }
    case 305281:
    {
        returnValue = F("Tebel");
        break;
    }
    case 305282:
    {
        returnValue = F("Tebenstr.");
        break;
    }
    case 305283:
    {
        returnValue = F("Tebraweg");
        break;
    }
    case 305284:
    {
        returnValue = F("Techentiner Str.");
        break;
    }
    case 305285:
    {
        returnValue = F("Techentiner Weg");
        break;
    }
    case 305286:
    {
        returnValue = F("Techiner Dorfstr.");
        break;
    }
    case 305287:
    {
        returnValue = F("Techiner Weg");
        break;
    }
    case 305288:
    {
        returnValue = F("Techlin");
        break;
    }
    case 305289:
    {
        returnValue = F("Technik");
        break;
    }
    case 305290:
    {
        returnValue = F("Technikstr.");
        break;
    }
    case 305291:
    {
        returnValue = F("Technikumallee");
        break;
    }
    case 305292:
    {
        returnValue = F("Technikumplatz");
        break;
    }
    case 305293:
    {
        returnValue = F("Technikumstr.");
        break;
    }
    case 305294:
    {
        returnValue = F("Technikweg");
        break;
    }
    case 305295:
    {
        returnValue = F("Technitzer Berg");
        break;
    }
    case 305296:
    {
        returnValue = F("Technitzer Str.");
        break;
    }
    case 305297:
    {
        returnValue = F("Technologie-Campus");
        break;
    }
    case 305298:
    {
        returnValue = F("Technologie-Park");
        break;
    }
    case 305299:
    {
        returnValue = F("Technologiepark");
        break;
    }
    case 305300:
    {
        returnValue = F("Technologiering");
        break;
    }
    case 305301:
    {
        returnValue = F("Technologiestr.");
        break;
    }
    case 305302:
    {
        returnValue = F("Technologiezentrum");
        break;
    }
    case 305303:
    {
        returnValue = F("Techwitz");
        break;
    }
    case 305304:
    {
        returnValue = F("Techwitzer Kreisstr.");
        break;
    }
    case 305305:
    {
        returnValue = F("Techwitzer Str.");
        break;
    }
    case 305306:
    {
        returnValue = F("Teckelhagen");
        break;
    }
    case 305307:
    {
        returnValue = F("Teckelschlaut");
        break;
    }
    case 305308:
    {
        returnValue = F("Teckelweg");
        break;
    }
    case 305309:
    {
        returnValue = F("Teckenhahn");
        break;
    }
    case 305310:
    {
        returnValue = F("Teckentrupstr.");
        break;
    }
    case 305311:
    {
        returnValue = F("Teckentrupsweg");
        break;
    }
    case 305312:
    {
        returnValue = F("Teckholzstr.");
        break;
    }
    case 305313:
    {
        returnValue = F("Tecklenborgstr.");
        break;
    }
    case 305314:
    {
        returnValue = F("Tecklenborn");
        break;
    }
    case 305315:
    {
        returnValue = F("Tecklenburger Damm");
        break;
    }
    case 305316:
    {
        returnValue = F("Tecklenburger Fußweg");
        break;
    }
    case 305317:
    {
        returnValue = F("Tecklenburger Str.");
        break;
    }
    case 305318:
    {
        returnValue = F("Tecklenburger Weg");
        break;
    }
    case 305319:
    {
        returnValue = F("Tecklenburgstr.");
        break;
    }
    case 305320:
    {
        returnValue = F("Tecklinghausen");
        break;
    }
    case 305321:
    {
        returnValue = F("Tecklinghauser Weg");
        break;
    }
    case 305322:
    {
        returnValue = F("Teckplatz");
        break;
    }
    case 305323:
    {
        returnValue = F("Tecksteige");
        break;
    }
    case 305324:
    {
        returnValue = F("Teckstr.");
        break;
    }
    case 305325:
    {
        returnValue = F("Teckweg");
        break;
    }
    case 305326:
    {
        returnValue = F("Tedder Crescent");
        break;
    }
    case 305327:
    {
        returnValue = F("Teddybär");
        break;
    }
    case 305328:
    {
        returnValue = F("Tedel-von-Wallmoden-Weg");
        break;
    }
    case 305329:
    {
        returnValue = F("Tedensweg");
        break;
    }
    case 305330:
    {
        returnValue = F("Tedlenser Str.");
        break;
    }
    case 305331:
    {
        returnValue = F("Tedrahnshöhe");
        break;
    }
    case 305332:
    {
        returnValue = F("Tee Labyrinth");
        break;
    }
    case 305333:
    {
        returnValue = F("Teebaumweg");
        break;
    }
    case 305334:
    {
        returnValue = F("Teebkengang");
        break;
    }
    case 305335:
    {
        returnValue = F("Teefelsweg");
        break;
    }
    case 305336:
    {
        returnValue = F("Teegarten");
        break;
    }
    case 305337:
    {
        returnValue = F("Teegendamm");
        break;
    }
    case 305338:
    {
        returnValue = F("Teegentwiete");
        break;
    }
    case 305339:
    {
        returnValue = F("Teehausgasse");
        break;
    }
    case 305340:
    {
        returnValue = F("Teekenstr.");
        break;
    }
    case 305341:
    {
        returnValue = F("Teelackersweg");
        break;
    }
    case 305342:
    {
        returnValue = F("Teelsheide");
        break;
    }
    case 305343:
    {
        returnValue = F("Teendorf");
        break;
    }
    case 305344:
    {
        returnValue = F("Teepohl");
        break;
    }
    case 305345:
    {
        returnValue = F("Teepott");
        break;
    }
    case 305346:
    {
        returnValue = F("Teergang");
        break;
    }
    case 305347:
    {
        returnValue = F("Teerhofbrücke");
        break;
    }
    case 305348:
    {
        returnValue = F("Teerofen");
        break;
    }
    case 305349:
    {
        returnValue = F("Teerofen-Rain");
        break;
    }
    case 305350:
    {
        returnValue = F("Teerofenbrücke");
        break;
    }
    case 305351:
    {
        returnValue = F("Teerofendamm");
        break;
    }
    case 305352:
    {
        returnValue = F("Teerofener Heuweg");
        break;
    }
    case 305353:
    {
        returnValue = F("Teerofener Weg");
        break;
    }
    case 305354:
    {
        returnValue = F("Teerofenschneise");
        break;
    }
    case 305355:
    {
        returnValue = F("Teerofenweg");
        break;
    }
    case 305356:
    {
        returnValue = F("Teerosenweg");
        break;
    }
    case 305357:
    {
        returnValue = F("Teerstr.");
        break;
    }
    case 305358:
    {
        returnValue = F("Teerweg \"Verlorene Hütte");
        break;
    }
    case 305359:
    {
        returnValue = F("Teestr.");
        break;
    }
    case 305360:
    {
        returnValue = F("Teetzer Str.");
        break;
    }
    case 305361:
    {
        returnValue = F("Teetzerstr.");
        break;
    }
    case 305362:
    {
        returnValue = F("Teetzlebener Chaussee");
        break;
    }
    case 305363:
    {
        returnValue = F("Teetzlebener Str.");
        break;
    }
    case 305364:
    {
        returnValue = F("Teewelken");
        break;
    }
    case 305365:
    {
        returnValue = F("Tefental");
        break;
    }
    case 305366:
    {
        returnValue = F("Tefentaler Str.");
        break;
    }
    case 305367:
    {
        returnValue = F("Tefkebüller Weg");
        break;
    }
    case 305368:
    {
        returnValue = F("Teft");
        break;
    }
    case 305369:
    {
        returnValue = F("Tegeder Weg");
        break;
    }
    case 305370:
    {
        returnValue = F("Tegederstr.");
        break;
    }
    case 305371:
    {
        returnValue = F("Tegel");
        break;
    }
    case 305372:
    {
        returnValue = F("Tegelbarg");
        break;
    }
    case 305373:
    {
        returnValue = F("Tegelbek");
        break;
    }
    case 305374:
    {
        returnValue = F("Tegelberggasse");
        break;
    }
    case 305375:
    {
        returnValue = F("Tegelbergstr.");
        break;
    }
    case 305376:
    {
        returnValue = F("Tegelbergweg");
        break;
    }
    case 305377:
    {
        returnValue = F("Tegelbreden");
        break;
    }
    case 305378:
    {
        returnValue = F("Tegelbreite");
        break;
    }
    case 305379:
    {
        returnValue = F("Tegelbusch");
        break;
    }
    case 305380:
    {
        returnValue = F("Tegelbuschstr.");
        break;
    }
    case 305381:
    {
        returnValue = F("Tegelbuschweg");
        break;
    }
    case 305382:
    {
        returnValue = F("Tegeleck");
        break;
    }
    case 305383:
    {
        returnValue = F("Tegelee");
        break;
    }
    case 305384:
    {
        returnValue = F("Tegelener Weg");
        break;
    }
    case 305385:
    {
        returnValue = F("Tegeler Plate");
        break;
    }
    case 305386:
    {
        returnValue = F("Tegeler Rinne");
        break;
    }
    case 305387:
    {
        returnValue = F("Tegeler Str.");
        break;
    }
    case 305388:
    {
        returnValue = F("Tegeler Weg");
        break;
    }
    case 305389:
    {
        returnValue = F("Tegelers Weide");
        break;
    }
    case 305390:
    {
        returnValue = F("Tegelerskamp");
        break;
    }
    case 305391:
    {
        returnValue = F("Tegelerstr.");
        break;
    }
    case 305392:
    {
        returnValue = F("Tegelerweg");
        break;
    }
    case 305393:
    {
        returnValue = F("Tegelfeld");
        break;
    }
    case 305394:
    {
        returnValue = F("Tegelfeldstr.");
        break;
    }
    case 305395:
    {
        returnValue = F("Tegelheide");
        break;
    }
    case 305396:
    {
        returnValue = F("Tegelhof");
        break;
    }
    case 305397:
    {
        returnValue = F("Tegelhoff");
        break;
    }
    case 305398:
    {
        returnValue = F("Tegelie");
        break;
    }
    case 305399:
    {
        returnValue = F("Tegelistraat");
        break;
    }
    case 305400:
    {
        returnValue = F("Tegelkamp");
        break;
    }
    case 305401:
    {
        returnValue = F("Tegelkoppel");
        break;
    }
    case 305402:
    {
        returnValue = F("Tegelkuhl");
        break;
    }
    case 305403:
    {
        returnValue = F("Tegelkuhle");
        break;
    }
    case 305404:
    {
        returnValue = F("Tegelmannstr.");
        break;
    }
    case 305405:
    {
        returnValue = F("Tegelplacken");
        break;
    }
    case 305406:
    {
        returnValue = F("Tegelredder");
        break;
    }
    case 305407:
    {
        returnValue = F("Tegelring");
        break;
    }
    case 305408:
    {
        returnValue = F("Tegelsbeckersdyck");
        break;
    }
    case 305409:
    {
        returnValue = F("Tegelstieg");
        break;
    }
    case 305410:
    {
        returnValue = F("Tegelstr.");
        break;
    }
    case 305411:
    {
        returnValue = F("Tegelwanger Weg");
        break;
    }
    case 305412:
    {
        returnValue = F("Tegelweg");
        break;
    }
    case 305413:
    {
        returnValue = F("Tegeländer Weg");
        break;
    }
    case 305414:
    {
        returnValue = F("Tegernauer Bühlweg");
        break;
    }
    case 305415:
    {
        returnValue = F("Tegernauer Dorfstr.");
        break;
    }
    case 305416:
    {
        returnValue = F("Tegernauer Landstr.");
        break;
    }
    case 305417:
    {
        returnValue = F("Tegernauer Ortsstr.");
        break;
    }
    case 305418:
    {
        returnValue = F("Tegernauer Str.");
        break;
    }
    case 305419:
    {
        returnValue = F("Tegernauer Weg");
        break;
    }
    case 305420:
    {
        returnValue = F("Tegernaustr.");
        break;
    }
    case 305421:
    {
        returnValue = F("Tegernauweg");
        break;
    }
    case 305422:
    {
        returnValue = F("Tegernbach");
        break;
    }
    case 305423:
    {
        returnValue = F("Tegernbacher Str.");
        break;
    }
    case 305424:
    {
        returnValue = F("Tegernheimer Kellerstr.");
        break;
    }
    case 305425:
    {
        returnValue = F("Tegernheimer Schluchtweg");
        break;
    }
    case 305426:
    {
        returnValue = F("Tegernheimer Weg");
        break;
    }
    case 305427:
    {
        returnValue = F("Tegernseer Höhenweg, 510");
        break;
    }
    case 305428:
    {
        returnValue = F("Tegernseer Landstr.");
        break;
    }
    case 305429:
    {
        returnValue = F("Tegernseer Platz");
        break;
    }
    case 305430:
    {
        returnValue = F("Tegernseer Str.");
        break;
    }
    case 305431:
    {
        returnValue = F("Tegernseer Weg");
        break;
    }
    case 305432:
    {
        returnValue = F("Tegernseer-Geräumt");
        break;
    }
    case 305433:
    {
        returnValue = F("Tegernseestr.");
        break;
    }
    case 305434:
    {
        returnValue = F("Tegernseeweg");
        break;
    }
    case 305435:
    {
        returnValue = F("Tegerstr.");
        break;
    }
    case 305436:
    {
        returnValue = F("Teggering");
        break;
    }
    case 305437:
    {
        returnValue = F("Teggermoosweg");
        break;
    }
    case 305438:
    {
        returnValue = F("Teggerstr.");
        break;
    }
    case 305439:
    {
        returnValue = F("Teggingerstr.");
        break;
    }
    case 305440:
    {
        returnValue = F("Tegkwitzer Berg");
        break;
    }
    case 305441:
    {
        returnValue = F("Teglinger Hauptstr.");
        break;
    }
    case 305442:
    {
        returnValue = F("Teglinger Str.");
        break;
    }
    case 305443:
    {
        returnValue = F("Tegtberg");
        break;
    }
    case 305444:
    {
        returnValue = F("Tegtkamp");
        break;
    }
    case 305445:
    {
        returnValue = F("Tegtmeyerallee");
        break;
    }
    case 305446:
    {
        returnValue = F("Tegtmeyerstr.");
        break;
    }
    case 305447:
    {
        returnValue = F("Tegtstr.");
        break;
    }
    case 305448:
    {
        returnValue = F("Tegtweg");
        break;
    }
    case 305449:
    {
        returnValue = F("Tehtenbarg");
        break;
    }
    case 305450:
    {
        returnValue = F("Tei");
        break;
    }
    case 305451:
    {
        returnValue = F("Teich");
        break;
    }
    case 305452:
    {
        returnValue = F("Teich-Allee");
        break;
    }
    case 305453:
    {
        returnValue = F("Teichacker");
        break;
    }
    case 305454:
    {
        returnValue = F("Teichackerstr.");
        break;
    }
    case 305455:
    {
        returnValue = F("Teichackerweg");
        break;
    }
    case 305456:
    {
        returnValue = F("Teichaer Landstr.");
        break;
    }
    case 305457:
    {
        returnValue = F("Teichaer Mühlberg");
        break;
    }
    case 305458:
    {
        returnValue = F("Teichaer Str.");
        break;
    }
    case 305459:
    {
        returnValue = F("Teichaer Weg");
        break;
    }
    case 305460:
    {
        returnValue = F("Teichallee");
        break;
    }
    case 305461:
    {
        returnValue = F("Teichanger");
        break;
    }
    case 305462:
    {
        returnValue = F("Teichanlage");
        break;
    }
    case 305463:
    {
        returnValue = F("Teichaue");
        break;
    }
    case 305464:
    {
        returnValue = F("Teichbachweg");
        break;
    }
    case 305465:
    {
        returnValue = F("Teichberg");
        break;
    }
    case 305466:
    {
        returnValue = F("Teichbergstr.");
        break;
    }
    case 305467:
    {
        returnValue = F("Teichbergweg");
        break;
    }
    case 305468:
    {
        returnValue = F("Teichblick");
        break;
    }
    case 305469:
    {
        returnValue = F("Teichborn");
        break;
    }
    case 305470:
    {
        returnValue = F("Teichbornstr.");
        break;
    }
    case 305471:
    {
        returnValue = F("Teichbornweg");
        break;
    }
    case 305472:
    {
        returnValue = F("Teichbreite");
        break;
    }
    case 305473:
    {
        returnValue = F("Teichdamm");
        break;
    }
    case 305474:
    {
        returnValue = F("Teichdammweg");
        break;
    }
    case 305475:
    {
        returnValue = F("Teichecke");
        break;
    }
    case 305476:
    {
        returnValue = F("Teichelhangweg");
        break;
    }
    case 305477:
    {
        returnValue = F("Teichelweg");
        break;
    }
    case 305478:
    {
        returnValue = F("Teichenbach");
        break;
    }
    case 305479:
    {
        returnValue = F("Teichenbruch");
        break;
    }
    case 305480:
    {
        returnValue = F("Teichenweg");
        break;
    }
    case 305481:
    {
        returnValue = F("Teichertring");
        break;
    }
    case 305482:
    {
        returnValue = F("Teichertzaun");
        break;
    }
    case 305483:
    {
        returnValue = F("Teichfeld");
        break;
    }
    case 305484:
    {
        returnValue = F("Teichfeldstr.");
        break;
    }
    case 305485:
    {
        returnValue = F("Teichfeldweg");
        break;
    }
    case 305486:
    {
        returnValue = F("Teichflageweg");
        break;
    }
    case 305487:
    {
        returnValue = F("Teichflügel");
        break;
    }
    case 305488:
    {
        returnValue = F("Teichgarten");
        break;
    }
    case 305489:
    {
        returnValue = F("Teichgartenstr.");
        break;
    }
    case 305490:
    {
        returnValue = F("Teichgartenweg");
        break;
    }
    case 305491:
    {
        returnValue = F("Teichgasse");
        break;
    }
    case 305492:
    {
        returnValue = F("Teichgewann");
        break;
    }
    case 305493:
    {
        returnValue = F("Teichgraben");
        break;
    }
    case 305494:
    {
        returnValue = F("Teichgraeberweg");
        break;
    }
    case 305495:
    {
        returnValue = F("Teichgrund");
        break;
    }
    case 305496:
    {
        returnValue = F("Teichgräberstr.");
        break;
    }
    case 305497:
    {
        returnValue = F("Teichgut");
        break;
    }
    case 305498:
    {
        returnValue = F("Teichgärten");
        break;
    }
    case 305499:
    {
        returnValue = F("Teichgässchen");
        break;
    }
    case 305500:
    {
        returnValue = F("Teichgäßchen");
        break;
    }
    case 305501:
    {
        returnValue = F("Teichhaus");
        break;
    }
    case 305502:
    {
        returnValue = F("Teichhausstr.");
        break;
    }
    case 305503:
    {
        returnValue = F("Teichhausweg");
        break;
    }
    case 305504:
    {
        returnValue = F("Teichheide");
        break;
    }
    case 305505:
    {
        returnValue = F("Teichhof");
        break;
    }
    case 305506:
    {
        returnValue = F("Teichhofstr.");
        break;
    }
    case 305507:
    {
        returnValue = F("Teichhohle");
        break;
    }
    case 305508:
    {
        returnValue = F("Teichhuhnring");
        break;
    }
    case 305509:
    {
        returnValue = F("Teichhuhnstr.");
        break;
    }
    case 305510:
    {
        returnValue = F("Teichhuhnweg");
        break;
    }
    case 305511:
    {
        returnValue = F("Teichhäuselweg");
        break;
    }
    case 305512:
    {
        returnValue = F("Teichhäuser");
        break;
    }
    case 305513:
    {
        returnValue = F("Teichhäuser Weg");
        break;
    }
    case 305514:
    {
        returnValue = F("Teichhöfe");
        break;
    }
    case 305515:
    {
        returnValue = F("Teichhörn");
        break;
    }
    case 305516:
    {
        returnValue = F("Teichkamp");
        break;
    }
    case 305517:
    {
        returnValue = F("Teichkate");
        break;
    }
    case 305518:
    {
        returnValue = F("Teichkoppel");
        break;
    }
    case 305519:
    {
        returnValue = F("Teichlandschaft Oberndorf");
        break;
    }
    case 305520:
    {
        returnValue = F("Teichlbergweg");
        break;
    }
    case 305521:
    {
        returnValue = F("Teichlenstr.");
        break;
    }
    case 305522:
    {
        returnValue = F("Teichlholzweg");
        break;
    }
    case 305523:
    {
        returnValue = F("Teichlochweg");
        break;
    }
    case 305524:
    {
        returnValue = F("Teichlohweg");
        break;
    }
    case 305525:
    {
        returnValue = F("Teichmannsgärten");
        break;
    }
    case 305526:
    {
        returnValue = F("Teichmannstr.");
        break;
    }
    case 305527:
    {
        returnValue = F("Teichmatt");
        break;
    }
    case 305528:
    {
        returnValue = F("Teichmattenweg");
        break;
    }
    case 305529:
    {
        returnValue = F("Teichmattstr.");
        break;
    }
    case 305530:
    {
        returnValue = F("Teichmühle");
        break;
    }
    case 305531:
    {
        returnValue = F("Teichmühlenstr.");
        break;
    }
    case 305532:
    {
        returnValue = F("Teichmühlenweg");
        break;
    }
    case 305533:
    {
        returnValue = F("Teichmüllerstr.");
        break;
    }
    case 305534:
    {
        returnValue = F("Teichnitzer Str.");
        break;
    }
    case 305535:
    {
        returnValue = F("Teichpad");
        break;
    }
    case 305536:
    {
        returnValue = F("Teichplan");
        break;
    }
    case 305537:
    {
        returnValue = F("Teichplatz");
        break;
    }
    case 305538:
    {
        returnValue = F("Teichplaß");
        break;
    }
    case 305539:
    {
        returnValue = F("Teichpromenade");
        break;
    }
    case 305540:
    {
        returnValue = F("Teichrain");
        break;
    }
    case 305541:
    {
        returnValue = F("Teichrand");
        break;
    }
    case 305542:
    {
        returnValue = F("Teichredder");
        break;
    }
    case 305543:
    {
        returnValue = F("Teichringstr.");
        break;
    }
    case 305544:
    {
        returnValue = F("Teichrohrsängerweg");
        break;
    }
    case 305545:
    {
        returnValue = F("Teichrosenstr.");
        break;
    }
    case 305546:
    {
        returnValue = F("Teichrosenweg");
        break;
    }
    case 305547:
    {
        returnValue = F("Teichschneise");
        break;
    }
    case 305548:
    {
        returnValue = F("Teichsheide");
        break;
    }
    case 305549:
    {
        returnValue = F("Teichsitzecke");
        break;
    }
    case 305550:
    {
        returnValue = F("Teichsmühlengasse");
        break;
    }
    case 305551:
    {
        returnValue = F("Teichsteg");
        break;
    }
    case 305552:
    {
        returnValue = F("Teichstege");
        break;
    }
    case 305553:
    {
        returnValue = F("Teichstr.");
        break;
    }
    case 305554:
    {
        returnValue = F("Teichstr. 13-19");
        break;
    }
    case 305555:
    {
        returnValue = F("Teichstr. 20-26");
        break;
    }
    case 305556:
    {
        returnValue = F("Teichstr. Abberode");
        break;
    }
    case 305557:
    {
        returnValue = F("Teichstrand");
        break;
    }
    case 305558:
    {
        returnValue = F("Teichstätte");
        break;
    }
    case 305559:
    {
        returnValue = F("Teichstätter Weg");
        break;
    }
    case 305560:
    {
        returnValue = F("Teichtal");
        break;
    }
    case 305561:
    {
        returnValue = F("Teichting");
        break;
    }
    case 305562:
    {
        returnValue = F("Teichtor");
        break;
    }
    case 305563:
    {
        returnValue = F("Teichtorstr.");
        break;
    }
    case 305564:
    {
        returnValue = F("Teichtwete");
        break;
    }
    case 305565:
    {
        returnValue = F("Teichvorstadt");
        break;
    }
    case 305566:
    {
        returnValue = F("Teichwall");
        break;
    }
    case 305567:
    {
        returnValue = F("Teichwanderweg");
        break;
    }
    case 305568:
    {
        returnValue = F("Teichweg");
        break;
    }
    case 305569:
    {
        returnValue = F("Teichweiden");
        break;
    }
    case 305570:
    {
        returnValue = F("Teichweidener Str.");
        break;
    }
    case 305571:
    {
        returnValue = F("Teichwiese");
        break;
    }
    case 305572:
    {
        returnValue = F("Teichwiesen");
        break;
    }
    case 305573:
    {
        returnValue = F("Teichwiesenring");
        break;
    }
    case 305574:
    {
        returnValue = F("Teichwiesenstr.");
        break;
    }
    case 305575:
    {
        returnValue = F("Teichwiesenweg");
        break;
    }
    case 305576:
    {
        returnValue = F("Teichwinkel");
        break;
    }
    case 305577:
    {
        returnValue = F("Teichwirtschaft");
        break;
    }
    case 305578:
    {
        returnValue = F("Teichwitz");
        break;
    }
    case 305579:
    {
        returnValue = F("Teichwolframsdorfer Str.");
        break;
    }
    case 305580:
    {
        returnValue = F("Teichzipfelweg");
        break;
    }
    case 305581:
    {
        returnValue = F("Teichäcker");
        break;
    }
    case 305582:
    {
        returnValue = F("Teichäckerstr.");
        break;
    }
    case 305583:
    {
        returnValue = F("Teichäckerweg");
        break;
    }
    case 305584:
    {
        returnValue = F("Teigelbrand");
        break;
    }
    case 305585:
    {
        returnValue = F("Teigelesch");
        break;
    }
    case 305586:
    {
        returnValue = F("Teigelhof");
        break;
    }
    case 305587:
    {
        returnValue = F("Teigelhus");
        break;
    }
    case 305588:
    {
        returnValue = F("Teigelhügel");
        break;
    }
    case 305589:
    {
        returnValue = F("Teigelkamp");
        break;
    }
    case 305590:
    {
        returnValue = F("Teigelofen");
        break;
    }
    case 305591:
    {
        returnValue = F("Teiklerweg");
        break;
    }
    case 305592:
    {
        returnValue = F("Teil Wolfsradweg");
        break;
    }
    case 305593:
    {
        returnValue = F("Teil des Rhön-Rundweg 2 Roßdorf - Rhön");
        break;
    }
    case 305594:
    {
        returnValue = F("Teilackerstr.");
        break;
    }
    case 305595:
    {
        returnValue = F("Teilbachstr.");
        break;
    }
    case 305596:
    {
        returnValue = F("Teilberg");
        break;
    }
    case 305597:
    {
        returnValue = F("Teiledamm");
        break;
    }
    case 305598:
    {
        returnValue = F("Teilenstr.");
        break;
    }
    case 305599:
    {
        returnValue = F("Teilerweg");
        break;
    }
    case 305600:
    {
        returnValue = F("Teilfeld");
        break;
    }
    case 305601:
    {
        returnValue = F("Teilgartenstr.");
        break;
    }
    case 305602:
    {
        returnValue = F("Teilgärtenweg");
        break;
    }
    case 305603:
    {
        returnValue = F("Teilhard-de-Chardin-Allee");
        break;
    }
    case 305604:
    {
        returnValue = F("Teilhofsweg");
        break;
    }
    case 305605:
    {
        returnValue = F("Teilkamp");
        break;
    }
    case 305606:
    {
        returnValue = F("Teilland");
        break;
    }
    case 305607:
    {
        returnValue = F("Teilortsumgehung B281");
        break;
    }
    case 305608:
    {
        returnValue = F("Teilschneise");
        break;
    }
    case 305609:
    {
        returnValue = F("Teilstiegen");
        break;
    }
    case 305610:
    {
        returnValue = F("Teilstr.");
        break;
    }
    case 305611:
    {
        returnValue = F("Teilstück des Nudersdorfer Rundwanderweges (gelber Punkt)");
        break;
    }
    case 305612:
    {
        returnValue = F("Teiltriescher Str.");
        break;
    }
    case 305613:
    {
        returnValue = F("Teilungsweg");
        break;
    }
    case 305614:
    {
        returnValue = F("Teilweg");
        break;
    }
    case 305615:
    {
        returnValue = F("Teilwiese");
        break;
    }
    case 305616:
    {
        returnValue = F("Teilwiesen");
        break;
    }
    case 305617:
    {
        returnValue = F("Teilwiesenstr.");
        break;
    }
    case 305618:
    {
        returnValue = F("Teiläcker");
        break;
    }
    case 305619:
    {
        returnValue = F("Teimannstr.");
        break;
    }
    case 305620:
    {
        returnValue = F("Teimannweg");
        break;
    }
    case 305621:
    {
        returnValue = F("Teimbergstr.");
        break;
    }
    case 305622:
    {
        returnValue = F("Teinacher Str.");
        break;
    }
    case 305623:
    {
        returnValue = F("Teinacher Weg");
        break;
    }
    case 305624:
    {
        returnValue = F("Teinachstr.");
        break;
    }
    case 305625:
    {
        returnValue = F("Teinachtal");
        break;
    }
    case 305626:
    {
        returnValue = F("Teinachweg");
        break;
    }
    case 305627:
    {
        returnValue = F("Teindeln");
        break;
    }
    case 305628:
    {
        returnValue = F("Teinenkamp");
        break;
    }
    case 305629:
    {
        returnValue = F("Teinerstr.");
        break;
    }
    case 305630:
    {
        returnValue = F("Teinsiek");
        break;
    }
    case 305631:
    {
        returnValue = F("Teisbacher Str.");
        break;
    }
    case 305632:
    {
        returnValue = F("Teisenbergstr.");
        break;
    }
    case 305633:
    {
        returnValue = F("Teisenbergweg");
        break;
    }
    case 305634:
    {
        returnValue = F("Teisendorfer Str.");
        break;
    }
    case 305635:
    {
        returnValue = F("Teiser Str.");
        break;
    }
    case 305636:
    {
        returnValue = F("Teisgasse");
        break;
    }
    case 305637:
    {
        returnValue = F("Teisinger Str.");
        break;
    }
    case 305638:
    {
        returnValue = F("Teisker");
        break;
    }
    case 305639:
    {
        returnValue = F("Teiskersiedlung");
        break;
    }
    case 305640:
    {
        returnValue = F("Teislerweg");
        break;
    }
    case 305641:
    {
        returnValue = F("Teismannsweg");
        break;
    }
    case 305642:
    {
        returnValue = F("Teismanstr.");
        break;
    }
    case 305643:
    {
        returnValue = F("Teisnacher Str.");
        break;
    }
    case 305644:
    {
        returnValue = F("Teisnacherstr.");
        break;
    }
    case 305645:
    {
        returnValue = F("Teisselsberg");
        break;
    }
    case 305646:
    {
        returnValue = F("Teisselstr.");
        break;
    }
    case 305647:
    {
        returnValue = F("Teisterstr.");
        break;
    }
    case 305648:
    {
        returnValue = F("Teistunger Str.");
        break;
    }
    case 305649:
    {
        returnValue = F("Teistunger Weg");
        break;
    }
    case 305650:
    {
        returnValue = F("Teitelbacherstr.");
        break;
    }
    case 305651:
    {
        returnValue = F("Teitscheid");
        break;
    }
    case 305652:
    {
        returnValue = F("Teitscheider Weg");
        break;
    }
    case 305653:
    {
        returnValue = F("Teiwes Brink");
        break;
    }
    case 305654:
    {
        returnValue = F("Tejastr.");
        break;
    }
    case 305655:
    {
        returnValue = F("Tejaweg");
        break;
    }
    case 305656:
    {
        returnValue = F("Tekenbarg");
        break;
    }
    case 305657:
    {
        returnValue = F("Tekenbarghang");
        break;
    }
    case 305658:
    {
        returnValue = F("Tekenberg");
        break;
    }
    case 305659:
    {
        returnValue = F("Tekkenhof");
        break;
    }
    case 305660:
    {
        returnValue = F("Teknerweg");
        break;
    }
    case 305661:
    {
        returnValue = F("Tektonweg");
        break;
    }
    case 305662:
    {
        returnValue = F("Tel-Aviv-Str.");
        break;
    }
    case 305663:
    {
        returnValue = F("Tel-Aviv-Yafo-Allee");
        break;
    }
    case 305664:
    {
        returnValue = F("Teland");
        break;
    }
    case 305665:
    {
        returnValue = F("Telawiallee");
        break;
    }
    case 305666:
    {
        returnValue = F("Telbrake");
        break;
    }
    case 305667:
    {
        returnValue = F("Telbraker Str.");
        break;
    }
    case 305668:
    {
        returnValue = F("Telco-Kreisel");
        break;
    }
    case 305669:
    {
        returnValue = F("Teldauer Str.");
        break;
    }
    case 305670:
    {
        returnValue = F("Telefongestell");
        break;
    }
    case 305671:
    {
        returnValue = F("Telefonweg");
        break;
    }
    case 305672:
    {
        returnValue = F("Telefunkenstr.");
        break;
    }
    case 305673:
    {
        returnValue = F("Telefunkenweg");
        break;
    }
    case 305674:
    {
        returnValue = F("Telegrafenstr.");
        break;
    }
    case 305675:
    {
        returnValue = F("Telegrafenweg");
        break;
    }
    case 305676:
    {
        returnValue = F("Telegrafstr.");
        break;
    }
    case 305677:
    {
        returnValue = F("Telegraphengasse");
        break;
    }
    case 305678:
    {
        returnValue = F("Telegraphenweg");
        break;
    }
    case 305679:
    {
        returnValue = F("Telemannallee");
        break;
    }
    case 305680:
    {
        returnValue = F("Telemannstr.");
        break;
    }
    case 305681:
    {
        returnValue = F("Telemannweg");
        break;
    }
    case 305682:
    {
        returnValue = F("Telephonweg");
        break;
    }
    case 305683:
    {
        returnValue = F("Telfer Str.");
        break;
    }
    case 305684:
    {
        returnValue = F("Telgemeyerskamp");
        break;
    }
    case 305685:
    {
        returnValue = F("Telgen");
        break;
    }
    case 305686:
    {
        returnValue = F("Telgenbrink");
        break;
    }
    case 305687:
    {
        returnValue = F("Telgenbusch");
        break;
    }
    case 305688:
    {
        returnValue = F("Telgengarten");
        break;
    }
    case 305689:
    {
        returnValue = F("Telgengärten");
        break;
    }
    case 305690:
    {
        returnValue = F("Telgenkamp");
        break;
    }
    case 305691:
    {
        returnValue = F("Telgenstr.");
        break;
    }
    case 305692:
    {
        returnValue = F("Telgenweg");
        break;
    }
    case 305693:
    {
        returnValue = F("Telgerhuck");
        break;
    }
    case 305694:
    {
        returnValue = F("Telgerkamp");
        break;
    }
    case 305695:
    {
        returnValue = F("Telghauskamp");
        break;
    }
    case 305696:
    {
        returnValue = F("Telgheide");
        break;
    }
    case 305697:
    {
        returnValue = F("Telgte");
        break;
    }
    case 305698:
    {
        returnValue = F("Telgtenweg");
        break;
    }
    case 305699:
    {
        returnValue = F("Telgter Damm");
        break;
    }
    case 305700:
    {
        returnValue = F("Telgter Landstr.");
        break;
    }
    case 305701:
    {
        returnValue = F("Telgter Str.");
        break;
    }
    case 305702:
    {
        returnValue = F("Telgweg");
        break;
    }
    case 305703:
    {
        returnValue = F("Telingskamp");
        break;
    }
    case 305704:
    {
        returnValue = F("Telkampsweg");
        break;
    }
    case 305705:
    {
        returnValue = F("Telkenkamp");
        break;
    }
    case 305706:
    {
        returnValue = F("Telksheide");
        break;
    }
    case 305707:
    {
        returnValue = F("Tell-Geck-Weg");
        break;
    }
    case 305708:
    {
        returnValue = F("Tellbrunnenstr.");
        break;
    }
    case 305709:
    {
        returnValue = F("Tellbusch");
        break;
    }
    case 305710:
    {
        returnValue = F("Telle");
        break;
    }
    case 305711:
    {
        returnValue = F("Tellebenden");
        break;
    }
    case 305712:
    {
        returnValue = F("Tellenbuck");
        break;
    }
    case 305713:
    {
        returnValue = F("Tellengasse");
        break;
    }
    case 305714:
    {
        returnValue = F("Tellenstr.");
        break;
    }
    case 305715:
    {
        returnValue = F("Tellenweg");
        break;
    }
    case 305716:
    {
        returnValue = F("Teller-Weg");
        break;
    }
    case 305717:
    {
        returnValue = F("Tellerbeck");
        break;
    }
    case 305718:
    {
        returnValue = F("Tellerberg");
        break;
    }
    case 305719:
    {
        returnValue = F("Tellerbrink");
        break;
    }
    case 305720:
    {
        returnValue = F("Tellerbrücke");
        break;
    }
    case 305721:
    {
        returnValue = F("Tellerebenweg");
        break;
    }
    case 305722:
    {
        returnValue = F("Tellerhofweg");
        break;
    }
    case 305723:
    {
        returnValue = F("Tellerhäuser Str.");
        break;
    }
    case 305724:
    {
        returnValue = F("Telleringstr.");
        break;
    }
    case 305725:
    {
        returnValue = F("Tellers Brink");
        break;
    }
    case 305726:
    {
        returnValue = F("Tellerstr.");
        break;
    }
    case 305727:
    {
        returnValue = F("Tellerweg");
        break;
    }
    case 305728:
    {
        returnValue = F("Tellestr.");
        break;
    }
    case 305729:
    {
        returnValue = F("Telleweg");
        break;
    }
    case 305730:
    {
        returnValue = F("Tellhof");
        break;
    }
    case 305731:
    {
        returnValue = F("Tellhöhe");
        break;
    }
    case 305732:
    {
        returnValue = F("Telliger Str.");
        break;
    }
    case 305733:
    {
        returnValue = F("Tellingstedter Chaussee");
        break;
    }
    case 305734:
    {
        returnValue = F("Tellingstedter Str.");
        break;
    }
    case 305735:
    {
        returnValue = F("Tellkampenweg");
        break;
    }
    case 305736:
    {
        returnValue = F("Tellkoppenstr.");
        break;
    }
    case 305737:
    {
        returnValue = F("Tellkoppenweg");
        break;
    }
    case 305738:
    {
        returnValue = F("Tellmannstr.");
        break;
    }
    case 305739:
    {
        returnValue = F("Tellmer Dorfstr.");
        break;
    }
    case 305740:
    {
        returnValue = F("Tellmoor");
        break;
    }
    case 305741:
    {
        returnValue = F("Tellow");
        break;
    }
    case 305742:
    {
        returnValue = F("Tellskamp");
        break;
    }
    case 305743:
    {
        returnValue = F("Tellsteige");
        break;
    }
    case 305744:
    {
        returnValue = F("Tellstr.");
        break;
    }
    case 305745:
    {
        returnValue = F("Tellusweg");
        break;
    }
    case 305746:
    {
        returnValue = F("Tellweg");
        break;
    }
    case 305747:
    {
        returnValue = F("Telmeskamp");
        break;
    }
    case 305748:
    {
        returnValue = F("Telramundstr.");
        break;
    }
    case 305749:
    {
        returnValue = F("Telramundweg");
        break;
    }
    case 305750:
    {
        returnValue = F("Telschower Landstr.");
        break;
    }
    case 305751:
    {
        returnValue = F("Telschowstr.");
        break;
    }
    case 305752:
    {
        returnValue = F("Telse-Kampen-Str.");
        break;
    }
    case 305753:
    {
        returnValue = F("Telsekamp");
        break;
    }
    case 305754:
    {
        returnValue = F("Teltheide");
        break;
    }
    case 305755:
    {
        returnValue = F("Teltingskamp");
        break;
    }
    case 305756:
    {
        returnValue = F("Teltingweg");
        break;
    }
    case 305757:
    {
        returnValue = F("Teltjenstr.");
        break;
    }
    case 305758:
    {
        returnValue = F("Teltower Berge");
        break;
    }
    case 305759:
    {
        returnValue = F("Teltower Str.");
        break;
    }
    case 305760:
    {
        returnValue = F("Teltower Weg");
        break;
    }
    case 305761:
    {
        returnValue = F("Teltowkehre");
        break;
    }
    case 305762:
    {
        returnValue = F("Teltowweg");
        break;
    }
    case 305763:
    {
        returnValue = F("Teltropsweg");
        break;
    }
    case 305764:
    {
        returnValue = F("Telzer Plan");
        break;
    }
    case 305765:
    {
        returnValue = F("Telzer Siedlung");
        break;
    }
    case 305766:
    {
        returnValue = F("Telzer Str.");
        break;
    }
    case 305767:
    {
        returnValue = F("Telzer Weg");
        break;
    }
    case 305768:
    {
        returnValue = F("Telzweg");
        break;
    }
    case 305769:
    {
        returnValue = F("Tembrinkstr.");
        break;
    }
    case 305770:
    {
        returnValue = F("Temburs Kamp");
        break;
    }
    case 305771:
    {
        returnValue = F("Temdestr.");
        break;
    }
    case 305772:
    {
        returnValue = F("Temeschburger Str.");
        break;
    }
    case 305773:
    {
        returnValue = F("Temeswarplatz");
        break;
    }
    case 305774:
    {
        returnValue = F("Temmenhauser Str.");
        break;
    }
    case 305775:
    {
        returnValue = F("Temmenhauser Weg");
        break;
    }
    case 305776:
    {
        returnValue = F("Temmenhof");
        break;
    }
    case 305777:
    {
        returnValue = F("Temmenkamp");
        break;
    }
    case 305778:
    {
        returnValue = F("Temmestr.");
        break;
    }
    case 305779:
    {
        returnValue = F("Temmeweg");
        break;
    }
    case 305780:
    {
        returnValue = F("Temminghovenstr.");
        break;
    }
    case 305781:
    {
        returnValue = F("Temmingstr.");
        break;
    }
    case 305782:
    {
        returnValue = F("Temmlerstr.");
        break;
    }
    case 305783:
    {
        returnValue = F("Temnitz-Park-Chaussee");
        break;
    }
    case 305784:
    {
        returnValue = F("Temnitzweg");
        break;
    }
    case 305785:
    {
        returnValue = F("Tempel");
        break;
    }
    case 305786:
    {
        returnValue = F("Tempelacker");
        break;
    }
    case 305787:
    {
        returnValue = F("Tempelberg");
        break;
    }
    case 305788:
    {
        returnValue = F("Tempelberger Weg");
        break;
    }
    case 305789:
    {
        returnValue = F("Tempelbergsheide");
        break;
    }
    case 305790:
    {
        returnValue = F("Tempelbergstr.");
        break;
    }
    case 305791:
    {
        returnValue = F("Tempelblick");
        break;
    }
    case 305792:
    {
        returnValue = F("Tempelburger Str.");
        break;
    }
    case 305793:
    {
        returnValue = F("Tempelgarten");
        break;
    }
    case 305794:
    {
        returnValue = F("Tempelgasse");
        break;
    }
    case 305795:
    {
        returnValue = F("Tempelgrundweg");
        break;
    }
    case 305796:
    {
        returnValue = F("Tempelgässchen");
        break;
    }
    case 305797:
    {
        returnValue = F("Tempelherrenstr.");
        break;
    }
    case 305798:
    {
        returnValue = F("Tempelhof");
        break;
    }
    case 305799:
    {
        returnValue = F("Tempelhofer Str.");
        break;
    }
    case 305800:
    {
        returnValue = F("Tempelhofer Weg");
        break;
    }
    case 305801:
    {
        returnValue = F("Tempelhofstr.");
        break;
    }
    case 305802:
    {
        returnValue = F("Tempelhofweg");
        break;
    }
    case 305803:
    {
        returnValue = F("Tempelkamp");
        break;
    }
    case 305804:
    {
        returnValue = F("Tempellohne");
        break;
    }
    case 305805:
    {
        returnValue = F("Tempelmannsweg");
        break;
    }
    case 305806:
    {
        returnValue = F("Tempelpforte");
        break;
    }
    case 305807:
    {
        returnValue = F("Tempelsberg");
        break;
    }
    case 305808:
    {
        returnValue = F("Tempelschneise");
        break;
    }
    case 305809:
    {
        returnValue = F("Tempelseepark");
        break;
    }
    case 305810:
    {
        returnValue = F("Tempelseestr.");
        break;
    }
    case 305811:
    {
        returnValue = F("Tempelsgasse");
        break;
    }
    case 305812:
    {
        returnValue = F("Tempelsgreuth");
        break;
    }
    case 305813:
    {
        returnValue = F("Tempelstr.");
        break;
    }
    case 305814:
    {
        returnValue = F("Tempelsweg");
        break;
    }
    case 305815:
    {
        returnValue = F("Tempelweg");
        break;
    }
    case 305816:
    {
        returnValue = F("Tempepark");
        break;
    }
    case 305817:
    {
        returnValue = F("Tempest");
        break;
    }
    case 305818:
    {
        returnValue = F("Templer Str.");
        break;
    }
    case 305819:
    {
        returnValue = F("Templer Weg");
        break;
    }
    case 305820:
    {
        returnValue = F("Templergasse");
        break;
    }
    case 305821:
    {
        returnValue = F("Templergraben");
        break;
    }
    case 305822:
    {
        returnValue = F("Templerstr.");
        break;
    }
    case 305823:
    {
        returnValue = F("Templerweg");
        break;
    }
    case 305824:
    {
        returnValue = F("Templhof");
        break;
    }
    case 305825:
    {
        returnValue = F("Templhofring");
        break;
    }
    case 305826:
    {
        returnValue = F("Templiner Allee");
        break;
    }
    case 305827:
    {
        returnValue = F("Templiner Chaussee");
        break;
    }
    case 305828:
    {
        returnValue = F("Templiner Landstr.");
        break;
    }
    case 305829:
    {
        returnValue = F("Templiner Str.");
        break;
    }
    case 305830:
    {
        returnValue = F("Templiner Weg");
        break;
    }
    case 305831:
    {
        returnValue = F("Temporäre Fußgängerunterführung");
        break;
    }
    case 305832:
    {
        returnValue = F("Tempsstr.");
        break;
    }
    case 305833:
    {
        returnValue = F("Tempusplatz");
        break;
    }
    case 305834:
    {
        returnValue = F("Tempusstr.");
        break;
    }
    case 305835:
    {
        returnValue = F("Temritz");
        break;
    }
    case 305836:
    {
        returnValue = F("Temritzer Weg");
        break;
    }
    case 305837:
    {
        returnValue = F("Ten-Brink-Park");
        break;
    }
    case 305838:
    {
        returnValue = F("Ten-Brinken-Str.");
        break;
    }
    case 305839:
    {
        returnValue = F("Ten-Doornkaat-Str.");
        break;
    }
    case 305840:
    {
        returnValue = F("Ten-Hövel-Weg");
        break;
    }
    case 305841:
    {
        returnValue = F("Tenacker");
        break;
    }
    case 305842:
    {
        returnValue = F("Tenbensel");
        break;
    }
    case 305843:
    {
        returnValue = F("Tenbenselsweg");
        break;
    }
    case 305844:
    {
        returnValue = F("Tenbrinkstr.");
        break;
    }
    case 305845:
    {
        returnValue = F("Tenbusch");
        break;
    }
    case 305846:
    {
        returnValue = F("Tendelsgasse");
        break;
    }
    case 305847:
    {
        returnValue = F("Tenderichstr.");
        break;
    }
    case 305848:
    {
        returnValue = F("Tenderingstr.");
        break;
    }
    case 305849:
    {
        returnValue = F("Tenderingsweg");
        break;
    }
    case 305850:
    {
        returnValue = F("Tenderweg");
        break;
    }
    case 305851:
    {
        returnValue = F("Teneverstr.");
        break;
    }
    case 305852:
    {
        returnValue = F("Tenge-Rietberg-Str.");
        break;
    }
    case 305853:
    {
        returnValue = F("Tengelmannweg");
        break;
    }
    case 305854:
    {
        returnValue = F("Tengener Str.");
        break;
    }
    case 305855:
    {
        returnValue = F("Tengenkamp");
        break;
    }
    case 305856:
    {
        returnValue = F("Tenger");
        break;
    }
    case 305857:
    {
        returnValue = F("Tengerholz");
        break;
    }
    case 305858:
    {
        returnValue = F("Tengerhörn");
        break;
    }
    case 305859:
    {
        returnValue = F("Tengerner Str.");
        break;
    }
    case 305860:
    {
        returnValue = F("Tengestr.");
        break;
    }
    case 305861:
    {
        returnValue = F("Tengshausen");
        break;
    }
    case 305862:
    {
        returnValue = F("Tengstr.");
        break;
    }
    case 305863:
    {
        returnValue = F("Tenhagenstr.");
        break;
    }
    case 305864:
    {
        returnValue = F("Tenholt");
        break;
    }
    case 305865:
    {
        returnValue = F("Tenholter Str.");
        break;
    }
    case 305866:
    {
        returnValue = F("Teninger Str.");
        break;
    }
    case 305867:
    {
        returnValue = F("Teninger Weg");
        break;
    }
    case 305868:
    {
        returnValue = F("Tenkhoffs Gasse");
        break;
    }
    case 305869:
    {
        returnValue = F("Tenkingallee");
        break;
    }
    case 305870:
    {
        returnValue = F("Tenkingstr.");
        break;
    }
    case 305871:
    {
        returnValue = F("Tenktererstr.");
        break;
    }
    case 305872:
    {
        returnValue = F("Tennebergstr.");
        break;
    }
    case 305873:
    {
        returnValue = F("Tennelbachstr.");
        break;
    }
    case 305874:
    {
        returnValue = F("Tennelbergweg");
        break;
    }
    case 305875:
    {
        returnValue = F("Tennenbach");
        break;
    }
    case 305876:
    {
        returnValue = F("Tennenbacher Str.");
        break;
    }
    case 305877:
    {
        returnValue = F("Tennenbacher Weg");
        break;
    }
    case 305878:
    {
        returnValue = F("Tennenbacherstr.");
        break;
    }
    case 305879:
    {
        returnValue = F("Tennenbachweg");
        break;
    }
    case 305880:
    {
        returnValue = F("Tennenbergstr.");
        break;
    }
    case 305881:
    {
        returnValue = F("Tennenbergweg");
        break;
    }
    case 305882:
    {
        returnValue = F("Tennenlochweg");
        break;
    }
    case 305883:
    {
        returnValue = F("Tennenloher Hauptstr.");
        break;
    }
    case 305884:
    {
        returnValue = F("Tennenloher Str.");
        break;
    }
    case 305885:
    {
        returnValue = F("Tennenloher Weg");
        break;
    }
    case 305886:
    {
        returnValue = F("Tennenplatz");
        break;
    }
    case 305887:
    {
        returnValue = F("Tennentalstr.");
        break;
    }
    case 305888:
    {
        returnValue = F("Tennenwald");
        break;
    }
    case 305889:
    {
        returnValue = F("Tennenweg");
        break;
    }
    case 305890:
    {
        returnValue = F("Tenner Berg");
        break;
    }
    case 305891:
    {
        returnValue = F("Tennera");
        break;
    }
    case 305892:
    {
        returnValue = F("Tennesse Court");
        break;
    }
    case 305893:
    {
        returnValue = F("Tennesseeallee");
        break;
    }
    case 305894:
    {
        returnValue = F("Tennhofer Weg");
        break;
    }
    case 305895:
    {
        returnValue = F("Tennhorst");
        break;
    }
    case 305896:
    {
        returnValue = F("Tennhöfleweg");
        break;
    }
    case 305897:
    {
        returnValue = F("Tennis");
        break;
    }
    case 305898:
    {
        returnValue = F("Tennis-Club Lahr e.V.");
        break;
    }
    case 305899:
    {
        returnValue = F("Tennisanlage im Schlossgarten");
        break;
    }
    case 305900:
    {
        returnValue = F("Tennisclub");
        break;
    }
    case 305901:
    {
        returnValue = F("Tennisplatz");
        break;
    }
    case 305902:
    {
        returnValue = F("Tennisplatzweg");
        break;
    }
    case 305903:
    {
        returnValue = F("Tennissteg");
        break;
    }
    case 305904:
    {
        returnValue = F("Tennisstr.");
        break;
    }
    case 305905:
    {
        returnValue = F("Tennisweg");
        break;
    }
    case 305906:
    {
        returnValue = F("Tenniswiese");
        break;
    }
    case 305907:
    {
        returnValue = F("Tennschürsnummer");
        break;
    }
    case 305908:
    {
        returnValue = F("Tennstedt");
        break;
    }
    case 305909:
    {
        returnValue = F("Tennstedter Berg");
        break;
    }
    case 305910:
    {
        returnValue = F("Tennstedter Str.");
        break;
    }
    case 305911:
    {
        returnValue = F("Tennstedter Weg");
        break;
    }
    case 305912:
    {
        returnValue = F("Tennweg");
        break;
    }
    case 305913:
    {
        returnValue = F("Tenor");
        break;
    }
    case 305914:
    {
        returnValue = F("Tenorgasse");
        break;
    }
    case 305915:
    {
        returnValue = F("Tensbüttler Str.");
        break;
    }
    case 305916:
    {
        returnValue = F("Tensbüttlerhochweg");
        break;
    }
    case 305917:
    {
        returnValue = F("Tensfelder Au");
        break;
    }
    case 305918:
    {
        returnValue = F("Tensgrund");
        break;
    }
    case 305919:
    {
        returnValue = F("Tenstedter Str.");
        break;
    }
    case 305920:
    {
        returnValue = F("Tente");
        break;
    }
    case 305921:
    {
        returnValue = F("Tentenbrook");
        break;
    }
    case 305922:
    {
        returnValue = F("Tentenstr.");
        break;
    }
    case 305923:
    {
        returnValue = F("Tenter Hof");
        break;
    }
    case 305924:
    {
        returnValue = F("Tenter Weg");
        break;
    }
    case 305925:
    {
        returnValue = F("Tenterstr.");
        break;
    }
    case 305926:
    {
        returnValue = F("Tenthoffstr.");
        break;
    }
    case 305927:
    {
        returnValue = F("Tentrusweg");
        break;
    }
    case 305928:
    {
        returnValue = F("Tentsbecke");
        break;
    }
    case 305929:
    {
        returnValue = F("Tentstr.");
        break;
    }
    case 305930:
    {
        returnValue = F("Tentweg");
        break;
    }
    case 305931:
    {
        returnValue = F("Tentzerow");
        break;
    }
    case 305932:
    {
        returnValue = F("Tenze");
        break;
    }
    case 305933:
    {
        returnValue = F("Tenzelweg");
        break;
    }
    case 305934:
    {
        returnValue = F("Tenzer Weg");
        break;
    }
    case 305935:
    {
        returnValue = F("Teorunistr.");
        break;
    }
    case 305936:
    {
        returnValue = F("Tepestr.");
        break;
    }
    case 305937:
    {
        returnValue = F("Tepeweg");
        break;
    }
    case 305938:
    {
        returnValue = F("Tepler Str.");
        break;
    }
    case 305939:
    {
        returnValue = F("Tepler Weg");
        break;
    }
    case 305940:
    {
        returnValue = F("Teplinger Str.");
        break;
    }
    case 305941:
    {
        returnValue = F("Teplitz-Schönauer-Str.");
        break;
    }
    case 305942:
    {
        returnValue = F("Teplitzer Allee");
        break;
    }
    case 305943:
    {
        returnValue = F("Teplitzer Poststr.");
        break;
    }
    case 305944:
    {
        returnValue = F("Teplitzer Ring");
        break;
    }
    case 305945:
    {
        returnValue = F("Teplitzer Str.");
        break;
    }
    case 305946:
    {
        returnValue = F("Teplitzer Weg");
        break;
    }
    case 305947:
    {
        returnValue = F("Teplitzstr.");
        break;
    }
    case 305948:
    {
        returnValue = F("Teppelweg");
        break;
    }
    case 305949:
    {
        returnValue = F("Tepperdiek");
        break;
    }
    case 305950:
    {
        returnValue = F("Teppichstr.");
        break;
    }
    case 305951:
    {
        returnValue = F("Teppichweg");
        break;
    }
    case 305952:
    {
        returnValue = F("Teps");
        break;
    }
    case 305953:
    {
        returnValue = F("Ter Horst");
        break;
    }
    case 305954:
    {
        returnValue = F("Ter-Beeks-Lohne");
        break;
    }
    case 305955:
    {
        returnValue = F("Ter-Berg-Ring");
        break;
    }
    case 305956:
    {
        returnValue = F("Ter-Borch-Str.");
        break;
    }
    case 305957:
    {
        returnValue = F("Ter-Borg-Str.");
        break;
    }
    case 305958:
    {
        returnValue = F("Ter-Meer-Platz");
        break;
    }
    case 305959:
    {
        returnValue = F("Ter-Meer-Str.");
        break;
    }
    case 305960:
    {
        returnValue = F("Ter-Nedden-Str.");
        break;
    }
    case 305961:
    {
        returnValue = F("Terassen-Promenade");
        break;
    }
    case 305962:
    {
        returnValue = F("Terbeckstr.");
        break;
    }
    case 305963:
    {
        returnValue = F("Terbergerstr.");
        break;
    }
    case 305964:
    {
        returnValue = F("Teresa-Bock-Str.");
        break;
    }
    case 305965:
    {
        returnValue = F("Teresastr.");
        break;
    }
    case 305966:
    {
        returnValue = F("Teresaweg");
        break;
    }
    case 305967:
    {
        returnValue = F("Tereschkowastr.");
        break;
    }
    case 305968:
    {
        returnValue = F("Tereziner Str.");
        break;
    }
    case 305969:
    {
        returnValue = F("Terflothstr.");
        break;
    }
    case 305970:
    {
        returnValue = F("Tergaster Str.");
        break;
    }
    case 305971:
    {
        returnValue = F("Terhaller Weg");
        break;
    }
    case 305972:
    {
        returnValue = F("Terhardthof");
        break;
    }
    case 305973:
    {
        returnValue = F("Terheide");
        break;
    }
    case 305974:
    {
        returnValue = F("Terheider Weg");
        break;
    }
    case 305975:
    {
        returnValue = F("Terhochweg");
        break;
    }
    case 305976:
    {
        returnValue = F("Terhoffsteddestr.");
        break;
    }
    case 305977:
    {
        returnValue = F("Terkampstr.");
        break;
    }
    case 305978:
    {
        returnValue = F("Terkelsmai");
        break;
    }
    case 305979:
    {
        returnValue = F("Terkhorns Garten");
        break;
    }
    case 305980:
    {
        returnValue = F("Terlaner Str.");
        break;
    }
    case 305981:
    {
        returnValue = F("Terlaner Weg");
        break;
    }
    case 305982:
    {
        returnValue = F("Terlanerstr.");
        break;
    }
    case 305983:
    {
        returnValue = F("Terlindenweg");
        break;
    }
    case 305984:
    {
        returnValue = F("Termeerhöfe");
        break;
    }
    case 305985:
    {
        returnValue = F("Termelinesweg");
        break;
    }
    case 305986:
    {
        returnValue = F("Termenei");
        break;
    }
    case 305987:
    {
        returnValue = F("Termiedenhof");
        break;
    }
    case 305988:
    {
        returnValue = F("Terminal 1 A to B tunnel");
        break;
    }
    case 305989:
    {
        returnValue = F("Terminal 2 - Abflug / Departure");
        break;
    }
    case 305990:
    {
        returnValue = F("Terminal Ring");
        break;
    }
    case 305991:
    {
        returnValue = F("Terminalring");
        break;
    }
    case 305992:
    {
        returnValue = F("Terminalstr. Mitte");
        break;
    }
    case 305993:
    {
        returnValue = F("Terminalstr. Ost");
        break;
    }
    case 305994:
    {
        returnValue = F("Terminalstr. West");
        break;
    }
    case 305995:
    {
        returnValue = F("Terminusstr.");
        break;
    }
    case 305996:
    {
        returnValue = F("Termitenweg");
        break;
    }
    case 305997:
    {
        returnValue = F("Termunter Weg");
        break;
    }
    case 305998:
    {
        returnValue = F("Termühlenweg");
        break;
    }
    case 305999:
    {
        returnValue = F("Termünter Weg");
        break;
    }
    case 306000:
    {
        returnValue = F("Terneddenstr.");
        break;
    }
    case 306001:
    {
        returnValue = F("Terniepenweg");
        break;
    }
    case 306002:
    {
        returnValue = F("Ternosenweg");
        break;
    }
    case 306003:
    {
        returnValue = F("Terofalstr.");
        break;
    }
    case 306004:
    {
        returnValue = F("Terp Wai");
        break;
    }
    case 306005:
    {
        returnValue = F("Terpe Ausbau");
        break;
    }
    case 306006:
    {
        returnValue = F("Terpe am Rain");
        break;
    }
    case 306007:
    {
        returnValue = F("Terpitz");
        break;
    }
    case 306008:
    {
        returnValue = F("Terpitzer Schulweg");
        break;
    }
    case 306009:
    {
        returnValue = F("Terpitzer Weg");
        break;
    }
    case 306010:
    {
        returnValue = F("Terpstig");
        break;
    }
    case 306011:
    {
        returnValue = F("Terpter Gartenstr.");
        break;
    }
    case 306012:
    {
        returnValue = F("Terpter Hauptstr.");
        break;
    }
    case 306013:
    {
        returnValue = F("Terpter Weg");
        break;
    }
    case 306014:
    {
        returnValue = F("Terra Wohnpark");
        break;
    }
    case 306015:
    {
        returnValue = F("Terracinaweg");
        break;
    }
    case 306016:
    {
        returnValue = F("Terrakottaweg");
        break;
    }
    case 306017:
    {
        returnValue = F("Terrasse");
        break;
    }
    case 306018:
    {
        returnValue = F("Terrasse Zeitler");
        break;
    }
    case 306019:
    {
        returnValue = F("Terrassengarten");
        break;
    }
    case 306020:
    {
        returnValue = F("Terrassengasse");
        break;
    }
    case 306021:
    {
        returnValue = F("Terrassengärten");
        break;
    }
    case 306022:
    {
        returnValue = F("Terrassenpark");
        break;
    }
    case 306023:
    {
        returnValue = F("Terrassensiedlung");
        break;
    }
    case 306024:
    {
        returnValue = F("Terrassenstieg");
        break;
    }
    case 306025:
    {
        returnValue = F("Terrassenstr.");
        break;
    }
    case 306026:
    {
        returnValue = F("Terrassenufer");
        break;
    }
    case 306027:
    {
        returnValue = F("Terrassenweg");
        break;
    }
    case 306028:
    {
        returnValue = F("Terreicken");
        break;
    }
    case 306029:
    {
        returnValue = F("Terrotstr.");
        break;
    }
    case 306030:
    {
        returnValue = F("Terscheckstr.");
        break;
    }
    case 306031:
    {
        returnValue = F("Tersteegen-Schule");
        break;
    }
    case 306032:
    {
        returnValue = F("Tersteegenplatz");
        break;
    }
    case 306033:
    {
        returnValue = F("Tersteegenstr.");
        break;
    }
    case 306034:
    {
        returnValue = F("Tersteegenweg");
        break;
    }
    case 306035:
    {
        returnValue = F("Tertiadamm");
        break;
    }
    case 306036:
    {
        returnValue = F("Tertius-Törn");
        break;
    }
    case 306037:
    {
        returnValue = F("Tertiustörn");
        break;
    }
    case 306038:
    {
        returnValue = F("Tertiusweg");
        break;
    }
    case 306039:
    {
        returnValue = F("Terup");
        break;
    }
    case 306040:
    {
        returnValue = F("Tervoortstr.");
        break;
    }
    case 306041:
    {
        returnValue = F("Terwegenkamp");
        break;
    }
    case 306042:
    {
        returnValue = F("Terwellenweg");
        break;
    }
    case 306043:
    {
        returnValue = F("Terwelpstr.");
        break;
    }
    case 306044:
    {
        returnValue = F("Terwelpweg");
        break;
    }
    case 306045:
    {
        returnValue = F("Terwestenstr.");
        break;
    }
    case 306046:
    {
        returnValue = F("Terwischer Weg");
        break;
    }
    case 306047:
    {
        returnValue = F("Terzkastr.");
        break;
    }
    case 306048:
    {
        returnValue = F("Teschemacherstr.");
        break;
    }
    case 306049:
    {
        returnValue = F("Teschenbachweg");
        break;
    }
    case 306050:
    {
        returnValue = F("Teschendorf");
        break;
    }
    case 306051:
    {
        returnValue = F("Teschendorfer Chaussee");
        break;
    }
    case 306052:
    {
        returnValue = F("Teschendorfer Str.");
        break;
    }
    case 306053:
    {
        returnValue = F("Teschendorfer Weg");
        break;
    }
    case 306054:
    {
        returnValue = F("Teschenhagen");
        break;
    }
    case 306055:
    {
        returnValue = F("Teschenhagen-Bahnweg");
        break;
    }
    case 306056:
    {
        returnValue = F("Teschenhagen-Zarrendorfer Weg");
        break;
    }
    case 306057:
    {
        returnValue = F("Teschenhäger Weg");
        break;
    }
    case 306058:
    {
        returnValue = F("Teschenstr.");
        break;
    }
    case 306059:
    {
        returnValue = F("Teschensudberg");
        break;
    }
    case 306060:
    {
        returnValue = F("Teschensudberger Str.");
        break;
    }
    case 306061:
    {
        returnValue = F("Teschentalweg");
        break;
    }
    case 306062:
    {
        returnValue = F("Teschenweg");
        break;
    }
    case 306063:
    {
        returnValue = F("Tescher Str.");
        break;
    }
    case 306064:
    {
        returnValue = F("Teschestr.");
        break;
    }
    case 306065:
    {
        returnValue = F("Teschnitzweg");
        break;
    }
    case 306066:
    {
        returnValue = F("Teschow");
        break;
    }
    case 306067:
    {
        returnValue = F("Teschower Chaussee");
        break;
    }
    case 306068:
    {
        returnValue = F("Teschower Weg");
        break;
    }
    case 306069:
    {
        returnValue = F("Teschstr.");
        break;
    }
    case 306070:
    {
        returnValue = F("Teschweg");
        break;
    }
    case 306071:
    {
        returnValue = F("Tesdorpfstr.");
        break;
    }
    case 306072:
    {
        returnValue = F("Tesken Waier");
        break;
    }
    case 306073:
    {
        returnValue = F("Teskersweg");
        break;
    }
    case 306074:
    {
        returnValue = F("Teslastr.");
        break;
    }
    case 306075:
    {
        returnValue = F("Tesperhuder Str.");
        break;
    }
    case 306076:
    {
        returnValue = F("Tesse");
        break;
    }
    case 306077:
    {
        returnValue = F("Tesselweg");
        break;
    }
    case 306078:
    {
        returnValue = F("Tessenowstr.");
        break;
    }
    case 306079:
    {
        returnValue = F("Tessenowweg");
        break;
    }
    case 306080:
    {
        returnValue = F("Tessiner Chaussee");
        break;
    }
    case 306081:
    {
        returnValue = F("Tessiner Str.");
        break;
    }
    case 306082:
    {
        returnValue = F("Tessiner Weg");
        break;
    }
    case 306083:
    {
        returnValue = F("Tessinstr.");
        break;
    }
    case 306084:
    {
        returnValue = F("Tessinsträßle");
        break;
    }
    case 306085:
    {
        returnValue = F("Testerweg");
        break;
    }
    case 306086:
    {
        returnValue = F("Testfeld für Sehbehinderte");
        break;
    }
    case 306087:
    {
        returnValue = F("Testorf");
        break;
    }
    case 306088:
    {
        returnValue = F("Testorfer Str.");
        break;
    }
    case 306089:
    {
        returnValue = F("Testorferfelde");
        break;
    }
    case 306090:
    {
        returnValue = F("Testostr.");
        break;
    }
    case 306091:
    {
        returnValue = F("Teststrecke");
        break;
    }
    case 306092:
    {
        returnValue = F("Teststrecke Kreis");
        break;
    }
    case 306093:
    {
        returnValue = F("Tetburystr.");
        break;
    }
    case 306094:
    {
        returnValue = F("Tetekum");
        break;
    }
    case 306095:
    {
        returnValue = F("Tetel");
        break;
    }
    case 306096:
    {
        returnValue = F("Teteler Landweg");
        break;
    }
    case 306097:
    {
        returnValue = F("Tetendonk");
        break;
    }
    case 306098:
    {
        returnValue = F("Tetendorfer Kirchstieg");
        break;
    }
    case 306099:
    {
        returnValue = F("Tetendorfer Str.");
        break;
    }
    case 306100:
    {
        returnValue = F("Tetenhusener Chaussee");
        break;
    }
    case 306101:
    {
        returnValue = F("Teterower Chaussee");
        break;
    }
    case 306102:
    {
        returnValue = F("Teterower Str.");
        break;
    }
    case 306103:
    {
        returnValue = F("Teterower Weg");
        break;
    }
    case 306104:
    {
        returnValue = F("Tetertsträßchen");
        break;
    }
    case 306105:
    {
        returnValue = F("Tetjus-Tügel-Str.");
        break;
    }
    case 306106:
    {
        returnValue = F("Tetjus-Tügel-Weg");
        break;
    }
    case 306107:
    {
        returnValue = F("Tetkenwärf");
        break;
    }
    case 306108:
    {
        returnValue = F("Tetmarusstr.");
        break;
    }
    case 306109:
    {
        returnValue = F("Teton Way");
        break;
    }
    case 306110:
    {
        returnValue = F("Tetschdorfer Weg");
        break;
    }
    case 306111:
    {
        returnValue = F("Tetschen-Bodenbacher-Str.");
        break;
    }
    case 306112:
    {
        returnValue = F("Tetschendorfer Damm");
        break;
    }
    case 306113:
    {
        returnValue = F("Tetschendorfer Lindenstr.");
        break;
    }
    case 306114:
    {
        returnValue = F("Tetschendorfer SWeg");
        break;
    }
    case 306115:
    {
        returnValue = F("Tetschendorfer Weg");
        break;
    }
    case 306116:
    {
        returnValue = F("Tetschener Str.");
        break;
    }
    case 306117:
    {
        returnValue = F("Tetta");
        break;
    }
    case 306118:
    {
        returnValue = F("Tetta-Pol-Str.");
        break;
    }
    case 306119:
    {
        returnValue = F("Tettastr.");
        break;
    }
    case 306120:
    {
        returnValue = F("Tettauer Str.");
        break;
    }
    case 306121:
    {
        returnValue = F("Tettauer Weg");
        break;
    }
    case 306122:
    {
        returnValue = F("Tettaugrundstr.");
        break;
    }
    case 306123:
    {
        returnValue = F("Tettaustr.");
        break;
    }
    case 306124:
    {
        returnValue = F("Tettefelder Weg");
        break;
    }
    case 306125:
    {
        returnValue = F("Tettelbachstr.");
        break;
    }
    case 306126:
    {
        returnValue = F("Tettenbachstr.");
        break;
    }
    case 306127:
    {
        returnValue = F("Tettenbachweg");
        break;
    }
    case 306128:
    {
        returnValue = F("Tettenborner Str.");
        break;
    }
    case 306129:
    {
        returnValue = F("Tettenbornstr.");
        break;
    }
    case 306130:
    {
        returnValue = F("Tettenbusch");
        break;
    }
    case 306131:
    {
        returnValue = F("Tettenser Altendeich");
        break;
    }
    case 306132:
    {
        returnValue = F("Tettenser Steg");
        break;
    }
    case 306133:
    {
        returnValue = F("Tettenser Str.");
        break;
    }
    case 306134:
    {
        returnValue = F("Tettenser Tief");
        break;
    }
    case 306135:
    {
        returnValue = F("Tettenweiser Str.");
        break;
    }
    case 306136:
    {
        returnValue = F("Tettinger Str.");
        break;
    }
    case 306137:
    {
        returnValue = F("Tettinger Weg");
        break;
    }
    case 306138:
    {
        returnValue = F("Tettnanger Str.");
        break;
    }
    case 306139:
    {
        returnValue = F("Tettwanger Str.");
        break;
    }
    case 306140:
    {
        returnValue = F("Tetzelgasse");
        break;
    }
    case 306141:
    {
        returnValue = F("Tetzelmühle");
        break;
    }
    case 306142:
    {
        returnValue = F("Tetzelstein");
        break;
    }
    case 306143:
    {
        returnValue = F("Tetzelsteinweg");
        break;
    }
    case 306144:
    {
        returnValue = F("Tetzelweg");
        break;
    }
    case 306145:
    {
        returnValue = F("Tetzer Weg");
        break;
    }
    case 306146:
    {
        returnValue = F("Tetzlawstr.");
        break;
    }
    case 306147:
    {
        returnValue = F("Tetznerstr.");
        break;
    }
    case 306148:
    {
        returnValue = F("Teuberstr.");
        break;
    }
    case 306149:
    {
        returnValue = F("Teublitzer Str.");
        break;
    }
    case 306150:
    {
        returnValue = F("Teubnerberg");
        break;
    }
    case 306151:
    {
        returnValue = F("Teubnerstr.");
        break;
    }
    case 306152:
    {
        returnValue = F("Teuchatzer Str.");
        break;
    }
    case 306153:
    {
        returnValue = F("Teucheler Anger");
        break;
    }
    case 306154:
    {
        returnValue = F("Teucheler Str.");
        break;
    }
    case 306155:
    {
        returnValue = F("Teucheler Weg");
        break;
    }
    case 306156:
    {
        returnValue = F("Teuchelgrube");
        break;
    }
    case 306157:
    {
        returnValue = F("Teuchelhaldenstr.");
        break;
    }
    case 306158:
    {
        returnValue = F("Teuchelloch");
        break;
    }
    case 306159:
    {
        returnValue = F("Teuchelweg");
        break;
    }
    case 306160:
    {
        returnValue = F("Teuchermark");
        break;
    }
    case 306161:
    {
        returnValue = F("Teucherner Str.");
        break;
    }
    case 306162:
    {
        returnValue = F("Teucherner Weg");
        break;
    }
    case 306163:
    {
        returnValue = F("Teudaldstr.");
        break;
    }
    case 306164:
    {
        returnValue = F("Teudalweg");
        break;
    }
    case 306165:
    {
        returnValue = F("Teuditzer Kirchplatz");
        break;
    }
    case 306166:
    {
        returnValue = F("Teuditzer Str.");
        break;
    }
    case 306167:
    {
        returnValue = F("Teuditzer Weg");
        break;
    }
    case 306168:
    {
        returnValue = F("Teuertinger Str.");
        break;
    }
    case 306169:
    {
        returnValue = F("Teuerzenweg");
        break;
    }
    case 306170:
    {
        returnValue = F("Teufellochstr.");
        break;
    }
    case 306171:
    {
        returnValue = F("Teufelsallee");
        break;
    }
    case 306172:
    {
        returnValue = F("Teufelsbachstr.");
        break;
    }
    case 306173:
    {
        returnValue = F("Teufelsbachweg");
        break;
    }
    case 306174:
    {
        returnValue = F("Teufelsbackofen");
        break;
    }
    case 306175:
    {
        returnValue = F("Teufelsberg");
        break;
    }
    case 306176:
    {
        returnValue = F("Teufelsbergstr.");
        break;
    }
    case 306177:
    {
        returnValue = F("Teufelsbergsträßchen");
        break;
    }
    case 306178:
    {
        returnValue = F("Teufelsbergweg");
        break;
    }
    case 306179:
    {
        returnValue = F("Teufelsbett");
        break;
    }
    case 306180:
    {
        returnValue = F("Teufelsbreite");
        break;
    }
    case 306181:
    {
        returnValue = F("Teufelsbrunnenweg");
        break;
    }
    case 306182:
    {
        returnValue = F("Teufelsbrücke");
        break;
    }
    case 306183:
    {
        returnValue = F("Teufelsbrückenweg");
        break;
    }
    case 306184:
    {
        returnValue = F("Teufelsbrückle");
        break;
    }
    case 306185:
    {
        returnValue = F("Teufelsbrückleweg");
        break;
    }
    case 306186:
    {
        returnValue = F("Teufelsbrückweg");
        break;
    }
    case 306187:
    {
        returnValue = F("Teufelsburgstr.");
        break;
    }
    case 306188:
    {
        returnValue = F("Teufelseestr.");
        break;
    }
    case 306189:
    {
        returnValue = F("Teufelsgasse");
        break;
    }
    case 306190:
    {
        returnValue = F("Teufelsgraben");
        break;
    }
    case 306191:
    {
        returnValue = F("Teufelsgrabenweg");
        break;
    }
    case 306192:
    {
        returnValue = F("Teufelsgrund");
        break;
    }
    case 306193:
    {
        returnValue = F("Teufelsgrundweg");
        break;
    }
    case 306194:
    {
        returnValue = F("Teufelsgässle");
        break;
    }
    case 306195:
    {
        returnValue = F("Teufelsgäßchen");
        break;
    }
    case 306196:
    {
        returnValue = F("Teufelshaldenweg");
        break;
    }
    case 306197:
    {
        returnValue = F("Teufelshausweg");
        break;
    }
    case 306198:
    {
        returnValue = F("Teufelshofer Weg");
        break;
    }
    case 306199:
    {
        returnValue = F("Teufelsinsel");
        break;
    }
    case 306200:
    {
        returnValue = F("Teufelskammerweg");
        break;
    }
    case 306201:
    {
        returnValue = F("Teufelskanzel Nord");
        break;
    }
    case 306202:
    {
        returnValue = F("Teufelskanzelweg");
        break;
    }
    case 306203:
    {
        returnValue = F("Teufelskaute");
        break;
    }
    case 306204:
    {
        returnValue = F("Teufelskehre");
        break;
    }
    case 306205:
    {
        returnValue = F("Teufelskeller");
        break;
    }
    case 306206:
    {
        returnValue = F("Teufelsklause");
        break;
    }
    case 306207:
    {
        returnValue = F("Teufelsklippe");
        break;
    }
    case 306208:
    {
        returnValue = F("Teufelskopfweg");
        break;
    }
    case 306209:
    {
        returnValue = F("Teufelskuch");
        break;
    }
    case 306210:
    {
        returnValue = F("Teufelskuhle");
        break;
    }
    case 306211:
    {
        returnValue = F("Teufelskämpen");
        break;
    }
    case 306212:
    {
        returnValue = F("Teufelsküche");
        break;
    }
    case 306213:
    {
        returnValue = F("Teufelsküchenweg");
        break;
    }
    case 306214:
    {
        returnValue = F("Teufelskücheweg");
        break;
    }
    case 306215:
    {
        returnValue = F("Teufelslai");
        break;
    }
    case 306216:
    {
        returnValue = F("Teufelsleystr.");
        break;
    }
    case 306217:
    {
        returnValue = F("Teufelsloch");
        break;
    }
    case 306218:
    {
        returnValue = F("Teufelslochweg");
        break;
    }
    case 306219:
    {
        returnValue = F("Teufelsmauer");
        break;
    }
    case 306220:
    {
        returnValue = F("Teufelsmauerstieg");
        break;
    }
    case 306221:
    {
        returnValue = F("Teufelsmauerstr.");
        break;
    }
    case 306222:
    {
        returnValue = F("Teufelsmauerweg");
        break;
    }
    case 306223:
    {
        returnValue = F("Teufelsmoorstr.");
        break;
    }
    case 306224:
    {
        returnValue = F("Teufelsmühle");
        break;
    }
    case 306225:
    {
        returnValue = F("Teufelsmühleweg");
        break;
    }
    case 306226:
    {
        returnValue = F("Teufelsmühlweg");
        break;
    }
    case 306227:
    {
        returnValue = F("Teufelspass");
        break;
    }
    case 306228:
    {
        returnValue = F("Teufelspfad");
        break;
    }
    case 306229:
    {
        returnValue = F("Teufelsplattweg");
        break;
    }
    case 306230:
    {
        returnValue = F("Teufelsrie");
        break;
    }
    case 306231:
    {
        returnValue = F("Teufelsschlag");
        break;
    }
    case 306232:
    {
        returnValue = F("Teufelsschlucht");
        break;
    }
    case 306233:
    {
        returnValue = F("Teufelsseer Weg");
        break;
    }
    case 306234:
    {
        returnValue = F("Teufelsseeweg");
        break;
    }
    case 306235:
    {
        returnValue = F("Teufelsspring");
        break;
    }
    case 306236:
    {
        returnValue = F("Teufelssprung");
        break;
    }
    case 306237:
    {
        returnValue = F("Teufelssteine Heiden");
        break;
    }
    case 306238:
    {
        returnValue = F("Teufelssteinweg");
        break;
    }
    case 306239:
    {
        returnValue = F("Teufelstal");
        break;
    }
    case 306240:
    {
        returnValue = F("Teufelstalweg");
        break;
    }
    case 306241:
    {
        returnValue = F("Teufelstein");
        break;
    }
    case 306242:
    {
        returnValue = F("Teufelsteinweg");
        break;
    }
    case 306243:
    {
        returnValue = F("Teufelstischweg");
        break;
    }
    case 306244:
    {
        returnValue = F("Teufelstor");
        break;
    }
    case 306245:
    {
        returnValue = F("Teufelstreppe");
        break;
    }
    case 306246:
    {
        returnValue = F("Teufelsweg");
        break;
    }
    case 306247:
    {
        returnValue = F("Teufelswiese");
        break;
    }
    case 306248:
    {
        returnValue = F("Teufelswiesenallee");
        break;
    }
    case 306249:
    {
        returnValue = F("Teufelswiesenweg");
        break;
    }
    case 306250:
    {
        returnValue = F("Teufelsäckerstr.");
        break;
    }
    case 306251:
    {
        returnValue = F("Teufelsäckerweg");
        break;
    }
    case 306252:
    {
        returnValue = F("Teufenbrücke");
        break;
    }
    case 306253:
    {
        returnValue = F("Teufenstr.");
        break;
    }
    case 306254:
    {
        returnValue = F("Teufenwiesen");
        break;
    }
    case 306255:
    {
        returnValue = F("Teufeslküchenweg");
        break;
    }
    case 306256:
    {
        returnValue = F("Teufstettener Str.");
        break;
    }
    case 306257:
    {
        returnValue = F("Teufzelweg");
        break;
    }
    case 306258:
    {
        returnValue = F("Teugener Str.");
        break;
    }
    case 306259:
    {
        returnValue = F("Teugner Str.");
        break;
    }
    case 306260:
    {
        returnValue = F("Teunzer Str.");
        break;
    }
    case 306261:
    {
        returnValue = F("Teupelstr.");
        break;
    }
    case 306262:
    {
        returnValue = F("Teupenweg");
        break;
    }
    case 306263:
    {
        returnValue = F("Teupesstr.");
        break;
    }
    case 306264:
    {
        returnValue = F("Teupitzer Höhe");
        break;
    }
    case 306265:
    {
        returnValue = F("Teupitzer Str.");
        break;
    }
    case 306266:
    {
        returnValue = F("Teupitzer Weg");
        break;
    }
    case 306267:
    {
        returnValue = F("Teure Zeit");
        break;
    }
    case 306268:
    {
        returnValue = F("Teuremertalweg");
        break;
    }
    case 306269:
    {
        returnValue = F("Teurerweg");
        break;
    }
    case 306270:
    {
        returnValue = F("Teuringer");
        break;
    }
    case 306271:
    {
        returnValue = F("Teuringer Str.");
        break;
    }
    case 306272:
    {
        returnValue = F("Teuringerstr.");
        break;
    }
    case 306273:
    {
        returnValue = F("Teuritzer Str.");
        break;
    }
    case 306274:
    {
        returnValue = F("Teuschleinstr.");
        break;
    }
    case 306275:
    {
        returnValue = F("Teuschnitzer Str.");
        break;
    }
    case 306276:
    {
        returnValue = F("Teuschstr.");
        break;
    }
    case 306277:
    {
        returnValue = F("Teusin");
        break;
    }
    case 306278:
    {
        returnValue = F("Teusserbadstr.");
        break;
    }
    case 306279:
    {
        returnValue = F("Teutberg");
        break;
    }
    case 306280:
    {
        returnValue = F("Teutenbrink");
        break;
    }
    case 306281:
    {
        returnValue = F("Teutenburg");
        break;
    }
    case 306282:
    {
        returnValue = F("Teutendorf");
        break;
    }
    case 306283:
    {
        returnValue = F("Teutendorfer Weg");
        break;
    }
    case 306284:
    {
        returnValue = F("Teutenrod");
        break;
    }
    case 306285:
    {
        returnValue = F("Teutheide");
        break;
    }
    case 306286:
    {
        returnValue = F("Teutholzweg");
        break;
    }
    case 306287:
    {
        returnValue = F("Teutleber Str.");
        break;
    }
    case 306288:
    {
        returnValue = F("Teutoblick");
        break;
    }
    case 306289:
    {
        returnValue = F("Teutoburger Str.");
        break;
    }
    case 306290:
    {
        returnValue = F("Teutoburger Weg");
        break;
    }
    case 306291:
    {
        returnValue = F("Teutoburger-Wald-Str.");
        break;
    }
    case 306292:
    {
        returnValue = F("Teutoburger-Wald-Weg");
        break;
    }
    case 306293:
    {
        returnValue = F("Teutoburgiahof");
        break;
    }
    case 306294:
    {
        returnValue = F("Teutoburgiastr.");
        break;
    }
    case 306295:
    {
        returnValue = F("Teutoburgstr.");
        break;
    }
    case 306296:
    {
        returnValue = F("Teutohang");
        break;
    }
    case 306297:
    {
        returnValue = F("Teutonen Weg");
        break;
    }
    case 306298:
    {
        returnValue = F("Teutonengasse");
        break;
    }
    case 306299:
    {
        returnValue = F("Teutonenring");
        break;
    }
    case 306300:
    {
        returnValue = F("Teutonenstr.");
        break;
    }
    case 306301:
    {
        returnValue = F("Teutonenweg");
        break;
    }
    case 306302:
    {
        returnValue = F("Teutonia");
        break;
    }
    case 306303:
    {
        returnValue = F("Teutoniaweg");
        break;
    }
    case 306304:
    {
        returnValue = F("Teutostr.");
        break;
    }
    case 306305:
    {
        returnValue = F("Teutschenthaler Landstr.");
        break;
    }
    case 306306:
    {
        returnValue = F("Teutschenthaler Str.");
        break;
    }
    case 306307:
    {
        returnValue = F("Teutschneureuter Allee");
        break;
    }
    case 306308:
    {
        returnValue = F("Teutschneureuter Str.");
        break;
    }
    case 306309:
    {
        returnValue = F("Teutstr.");
        break;
    }
    case 306310:
    {
        returnValue = F("Teuwsenweg");
        break;
    }
    case 306311:
    {
        returnValue = F("Teußenberg");
        break;
    }
    case 306312:
    {
        returnValue = F("Teußenbergweg");
        break;
    }
    case 306313:
    {
        returnValue = F("Tevenhauser Str.");
        break;
    }
    case 306314:
    {
        returnValue = F("Teverener Heide");
        break;
    }
    case 306315:
    {
        returnValue = F("Teverenstr.");
        break;
    }
    case 306316:
    {
        returnValue = F("Tevernstr.");
        break;
    }
    case 306317:
    {
        returnValue = F("Teves-Str.");
        break;
    }
    case 306318:
    {
        returnValue = F("Teveskamp");
        break;
    }
    case 306319:
    {
        returnValue = F("Tevesstr.");
        break;
    }
    case 306320:
    {
        returnValue = F("Tewaagstr.");
        break;
    }
    case 306321:
    {
        returnValue = F("Teweler Str.");
        break;
    }
    case 306322:
    {
        returnValue = F("Tewelken");
        break;
    }
    case 306323:
    {
        returnValue = F("Tewenberg");
        break;
    }
    case 306324:
    {
        returnValue = F("Tewes-Hoeft-Weg");
        break;
    }
    case 306325:
    {
        returnValue = F("Tewesallee");
        break;
    }
    case 306326:
    {
        returnValue = F("Tewesenweg");
        break;
    }
    case 306327:
    {
        returnValue = F("Teweskamp");
        break;
    }
    case 306328:
    {
        returnValue = F("Tewesweg");
        break;
    }
    case 306329:
    {
        returnValue = F("Tewskoppel");
        break;
    }
    case 306330:
    {
        returnValue = F("Texabichl");
        break;
    }
    case 306331:
    {
        returnValue = F("Texas");
        break;
    }
    case 306332:
    {
        returnValue = F("Texas Avenue");
        break;
    }
    case 306333:
    {
        returnValue = F("Texasstr.");
        break;
    }
    case 306334:
    {
        returnValue = F("Texasweg");
        break;
    }
    case 306335:
    {
        returnValue = F("Texdorfer Weg");
        break;
    }
    case 306336:
    {
        returnValue = F("Texelweg");
        break;
    }
    case 306337:
    {
        returnValue = F("Texterweg");
        break;
    }
    case 306338:
    {
        returnValue = F("Textibetonbrücke");
        break;
    }
    case 306339:
    {
        returnValue = F("Textilstr.");
        break;
    }
    case 306340:
    {
        returnValue = F("Textorstr.");
        break;
    }
    case 306341:
    {
        returnValue = F("Texwindisstr.");
        break;
    }
    case 306342:
    {
        returnValue = F("Teyescher Weg");
        break;
    }
    case 306343:
    {
        returnValue = F("Teygelhoff");
        break;
    }
    case 306344:
    {
        returnValue = F("Teylestr.");
        break;
    }
    case 306345:
    {
        returnValue = F("Teyweg");
        break;
    }
    case 306346:
    {
        returnValue = F("Teßdorffstr.");
        break;
    }
    case 306347:
    {
        returnValue = F("Teßmannstr.");
        break;
    }
    case 306348:
    {
        returnValue = F("Th-heuss-Päddche");
        break;
    }
    case 306349:
    {
        returnValue = F("Th. Körnerpark");
        break;
    }
    case 306350:
    {
        returnValue = F("Thaaweg");
        break;
    }
    case 306351:
    {
        returnValue = F("Thaddenstr.");
        break;
    }
    case 306352:
    {
        returnValue = F("Thaddenweg");
        break;
    }
    case 306353:
    {
        returnValue = F("Thaddäus-Hofmann-Weg");
        break;
    }
    case 306354:
    {
        returnValue = F("Thaddäus-Hornung-Weg");
        break;
    }
    case 306355:
    {
        returnValue = F("Thaddäus-Schmid-Str.");
        break;
    }
    case 306356:
    {
        returnValue = F("Thaddäus-Siber-Str.");
        break;
    }
    case 306357:
    {
        returnValue = F("Thaddäus-Troll-Platz");
        break;
    }
    case 306358:
    {
        returnValue = F("Thaddäus-Troll-Str.");
        break;
    }
    case 306359:
    {
        returnValue = F("Thaddäus-Troll-Weg");
        break;
    }
    case 306360:
    {
        returnValue = F("Thaddäushofweg");
        break;
    }
    case 306361:
    {
        returnValue = F("Thaddäusstr.");
        break;
    }
    case 306362:
    {
        returnValue = F("Thaddäusweg");
        break;
    }
    case 306363:
    {
        returnValue = F("Thaelmannstr.");
        break;
    }
    case 306364:
    {
        returnValue = F("Thaerplatz");
        break;
    }
    case 306365:
    {
        returnValue = F("Thaers Garten");
        break;
    }
    case 306366:
    {
        returnValue = F("Thaerstr.");
        break;
    }
    case 306367:
    {
        returnValue = F("Thaidener Str.");
        break;
    }
    case 306368:
    {
        returnValue = F("Thainburg");
        break;
    }
    case 306369:
    {
        returnValue = F("Thainburgbrücke");
        break;
    }
    case 306370:
    {
        returnValue = F("Thaininger Feldweg");
        break;
    }
    case 306371:
    {
        returnValue = F("Thaininger Str.");
        break;
    }
    case 306372:
    {
        returnValue = F("Thal");
        break;
    }
    case 306373:
    {
        returnValue = F("Thalacker");
        break;
    }
    case 306374:
    {
        returnValue = F("Thalackerstr.");
        break;
    }
    case 306375:
    {
        returnValue = F("Thalackerweg");
        break;
    }
    case 306376:
    {
        returnValue = F("Thalasso Plattform");
        break;
    }
    case 306377:
    {
        returnValue = F("Thalau");
        break;
    }
    case 306378:
    {
        returnValue = F("Thalauer Str.");
        break;
    }
    case 306379:
    {
        returnValue = F("Thalauer Weg");
        break;
    }
    case 306380:
    {
        returnValue = F("Thalbach");
        break;
    }
    case 306381:
    {
        returnValue = F("Thalbacher Str.");
        break;
    }
    case 306382:
    {
        returnValue = F("Thalbeine");
        break;
    }
    case 306383:
    {
        returnValue = F("Thalberg");
        break;
    }
    case 306384:
    {
        returnValue = F("Thalberger Str.");
        break;
    }
    case 306385:
    {
        returnValue = F("Thalbergstr.");
        break;
    }
    case 306386:
    {
        returnValue = F("Thalborn");
        break;
    }
    case 306387:
    {
        returnValue = F("Thalbrücke");
        break;
    }
    case 306388:
    {
        returnValue = F("Thaldorfer Winkel");
        break;
    }
    case 306389:
    {
        returnValue = F("Thalebraer Weg");
        break;
    }
    case 306390:
    {
        returnValue = F("Thaleischweiler Str.");
        break;
    }
    case 306391:
    {
        returnValue = F("Thalenhorststr.");
        break;
    }
    case 306392:
    {
        returnValue = F("Thalenser Chaussee");
        break;
    }
    case 306393:
    {
        returnValue = F("Thalenser Str.");
        break;
    }
    case 306394:
    {
        returnValue = F("Thalenser Weg");
        break;
    }
    case 306395:
    {
        returnValue = F("Thalenstr.");
        break;
    }
    case 306396:
    {
        returnValue = F("Thalenweg");
        break;
    }
    case 306397:
    {
        returnValue = F("Thaler Berg");
        break;
    }
    case 306398:
    {
        returnValue = F("Thaler Feld");
        break;
    }
    case 306399:
    {
        returnValue = F("Thaler Landstr.");
        break;
    }
    case 306400:
    {
        returnValue = F("Thaler Ring");
        break;
    }
    case 306401:
    {
        returnValue = F("Thaler Str.");
        break;
    }
    case 306402:
    {
        returnValue = F("Thaler Weg");
        break;
    }
    case 306403:
    {
        returnValue = F("Thalerberg");
        break;
    }
    case 306404:
    {
        returnValue = F("Thalermühlstr.");
        break;
    }
    case 306405:
    {
        returnValue = F("Thalerseehofweg");
        break;
    }
    case 306406:
    {
        returnValue = F("Thalerseestr.");
        break;
    }
    case 306407:
    {
        returnValue = F("Thalerseeweg");
        break;
    }
    case 306408:
    {
        returnValue = F("Thalerweg");
        break;
    }
    case 306409:
    {
        returnValue = F("Thalesstr.");
        break;
    }
    case 306410:
    {
        returnValue = F("Thalestr.");
        break;
    }
    case 306411:
    {
        returnValue = F("Thalesweg");
        break;
    }
    case 306412:
    {
        returnValue = F("Thaleweg");
        break;
    }
    case 306413:
    {
        returnValue = F("Thalexweilerstr.");
        break;
    }
    case 306414:
    {
        returnValue = F("Thalfelderstr.");
        break;
    }
    case 306415:
    {
        returnValue = F("Thalfeldstr.");
        break;
    }
    case 306416:
    {
        returnValue = F("Thalfinger Str.");
        break;
    }
    case 306417:
    {
        returnValue = F("Thalgarten");
        break;
    }
    case 306418:
    {
        returnValue = F("Thalgauer Str.");
        break;
    }
    case 306419:
    {
        returnValue = F("Thalham");
        break;
    }
    case 306420:
    {
        returnValue = F("Thalhamer Str.");
        break;
    }
    case 306421:
    {
        returnValue = F("Thalhamer Weg");
        break;
    }
    case 306422:
    {
        returnValue = F("Thalhausen");
        break;
    }
    case 306423:
    {
        returnValue = F("Thalhauser Fußweg");
        break;
    }
    case 306424:
    {
        returnValue = F("Thalhauser Str.");
        break;
    }
    case 306425:
    {
        returnValue = F("Thalhauser Weg");
        break;
    }
    case 306426:
    {
        returnValue = F("Thalhausermühle");
        break;
    }
    case 306427:
    {
        returnValue = F("Thalheimer Flügelweg");
        break;
    }
    case 306428:
    {
        returnValue = F("Thalheimer Str.");
        break;
    }
    case 306429:
    {
        returnValue = F("Thalheimerstr.");
        break;
    }
    case 306430:
    {
        returnValue = F("Thalheimerweg");
        break;
    }
    case 306431:
    {
        returnValue = F("Thalheimstr.");
        break;
    }
    case 306432:
    {
        returnValue = F("Thalhof");
        break;
    }
    case 306433:
    {
        returnValue = F("Thalhofener Str.");
        break;
    }
    case 306434:
    {
        returnValue = F("Thalhofener Weg");
        break;
    }
    case 306435:
    {
        returnValue = F("Thalhofer Str.");
        break;
    }
    case 306436:
    {
        returnValue = F("Thalhofer Weg");
        break;
    }
    case 306437:
    {
        returnValue = F("Thalhoferweg");
        break;
    }
    case 306438:
    {
        returnValue = F("Thalhofstr.");
        break;
    }
    case 306439:
    {
        returnValue = F("Thalia-Passage");
        break;
    }
    case 306440:
    {
        returnValue = F("Thaliapassage");
        break;
    }
    case 306441:
    {
        returnValue = F("Thaliastr.");
        break;
    }
    case 306442:
    {
        returnValue = F("Thalkirchdorfer Weg");
        break;
    }
    case 306443:
    {
        returnValue = F("Thalkirchen");
        break;
    }
    case 306444:
    {
        returnValue = F("Thalkirchener Str.");
        break;
    }
    case 306445:
    {
        returnValue = F("Thalkleinich");
        break;
    }
    case 306446:
    {
        returnValue = F("Thallern");
        break;
    }
    case 306447:
    {
        returnValue = F("Thallerstr.");
        break;
    }
    case 306448:
    {
        returnValue = F("Thallerweg");
        break;
    }
    case 306449:
    {
        returnValue = F("Thallwitzer Str.");
        break;
    }
    case 306450:
    {
        returnValue = F("Thalmaierstr.");
        break;
    }
    case 306451:
    {
        returnValue = F("Thalmann");
        break;
    }
    case 306452:
    {
        returnValue = F("Thalmannstr.");
        break;
    }
    case 306453:
    {
        returnValue = F("Thalmassinger Str.");
        break;
    }
    case 306454:
    {
        returnValue = F("Thalmässinger Str.");
        break;
    }
    case 306455:
    {
        returnValue = F("Thalmühle");
        break;
    }
    case 306456:
    {
        returnValue = F("Thalmühlenweg");
        break;
    }
    case 306457:
    {
        returnValue = F("Thalmühlweg");
        break;
    }
    case 306458:
    {
        returnValue = F("Thalsche Weg");
        break;
    }
    case 306459:
    {
        returnValue = F("Thalschütz");
        break;
    }
    case 306460:
    {
        returnValue = F("Thalstr.");
        break;
    }
    case 306461:
    {
        returnValue = F("Thalweg");
        break;
    }
    case 306462:
    {
        returnValue = F("Thalwender Str.");
        break;
    }
    case 306463:
    {
        returnValue = F("Thalwiler Str.");
        break;
    }
    case 306464:
    {
        returnValue = F("Thalwinkel");
        break;
    }
    case 306465:
    {
        returnValue = F("Thalwinkeler Str.");
        break;
    }
    case 306466:
    {
        returnValue = F("Thamanstr.");
        break;
    }
    case 306467:
    {
        returnValue = F("Thamaschstr.");
        break;
    }
    case 306468:
    {
        returnValue = F("Thambach");
        break;
    }
    case 306469:
    {
        returnValue = F("Thammenhainer Str.");
        break;
    }
    case 306470:
    {
        returnValue = F("Thammenhainer Weg");
        break;
    }
    case 306471:
    {
        returnValue = F("Thammostr.");
        break;
    }
    case 306472:
    {
        returnValue = F("Thamsbrücker Hauptstr.");
        break;
    }
    case 306473:
    {
        returnValue = F("Thamsbrücker Landstr.");
        break;
    }
    case 306474:
    {
        returnValue = F("Thamsbrücker Str.");
        break;
    }
    case 306475:
    {
        returnValue = F("Thamsbrücker Weg");
        break;
    }
    case 306476:
    {
        returnValue = F("Thamsweg");
        break;
    }
    case 306477:
    {
        returnValue = F("Thananger Str.");
        break;
    }
    case 306478:
    {
        returnValue = F("Thanberger Str.");
        break;
    }
    case 306479:
    {
        returnValue = F("Thanellerstr.");
        break;
    }
    case 306480:
    {
        returnValue = F("Thanham");
        break;
    }
    case 306481:
    {
        returnValue = F("Thanhamer Str.");
        break;
    }
    case 306482:
    {
        returnValue = F("Thanheimer Str.");
        break;
    }
    case 306483:
    {
        returnValue = F("Thanhofer Str.");
        break;
    }
    case 306484:
    {
        returnValue = F("Thankgrimweg");
        break;
    }
    case 306485:
    {
        returnValue = F("Thankirchen");
        break;
    }
    case 306486:
    {
        returnValue = F("Thankostr.");
        break;
    }
    case 306487:
    {
        returnValue = F("Thann");
        break;
    }
    case 306488:
    {
        returnValue = F("Thann-Matzbacher-Str.");
        break;
    }
    case 306489:
    {
        returnValue = F("Thannbachstr.");
        break;
    }
    case 306490:
    {
        returnValue = F("Thannbergstr.");
        break;
    }
    case 306491:
    {
        returnValue = F("Thanndorfer Weg");
        break;
    }
    case 306492:
    {
        returnValue = F("Thanner Neubruchweg");
        break;
    }
    case 306493:
    {
        returnValue = F("Thanner Str.");
        break;
    }
    case 306494:
    {
        returnValue = F("Thanner Weg");
        break;
    }
    case 306495:
    {
        returnValue = F("Thannerstr.");
        break;
    }
    case 306496:
    {
        returnValue = F("Thanneter Str.");
        break;
    }
    case 306497:
    {
        returnValue = F("Thannhackl");
        break;
    }
    case 306498:
    {
        returnValue = F("Thannhausen");
        break;
    }
    case 306499:
    {
        returnValue = F("Thannhausener Str.");
        break;
    }
    case 306500:
    {
        returnValue = F("Thannhauser Str.");
        break;
    }
    case 306501:
    {
        returnValue = F("Thannhauser Weg");
        break;
    }
    case 306502:
    {
        returnValue = F("Thannhauserstr.");
        break;
    }
    case 306503:
    {
        returnValue = F("Thannhäuserstr.");
        break;
    }
    case 306504:
    {
        returnValue = F("Thannhäuserweg");
        break;
    }
    case 306505:
    {
        returnValue = F("Thanninger Weg");
        break;
    }
    case 306506:
    {
        returnValue = F("Thannlach");
        break;
    }
    case 306507:
    {
        returnValue = F("Thannlehen");
        break;
    }
    case 306508:
    {
        returnValue = F("Thannmühle");
        break;
    }
    case 306509:
    {
        returnValue = F("Thannriedstr.");
        break;
    }
    case 306510:
    {
        returnValue = F("Thannsteinweg");
        break;
    }
    case 306511:
    {
        returnValue = F("Thannstr.");
        break;
    }
    case 306512:
    {
        returnValue = F("Thannweg");
        break;
    }
    case 306513:
    {
        returnValue = F("Thanried");
        break;
    }
    case 306514:
    {
        returnValue = F("Thansauer Str.");
        break;
    }
    case 306515:
    {
        returnValue = F("Thanweg");
        break;
    }
    case 306516:
    {
        returnValue = F("Thanöd");
        break;
    }
    case 306517:
    {
        returnValue = F("Tharandter Str.");
        break;
    }
    case 306518:
    {
        returnValue = F("Tharkamper Weg");
        break;
    }
    case 306519:
    {
        returnValue = F("Tharloh");
        break;
    }
    case 306520:
    {
        returnValue = F("Tharmannstr.");
        break;
    }
    case 306521:
    {
        returnValue = F("Thauberg");
        break;
    }
    case 306522:
    {
        returnValue = F("Thauenweg");
        break;
    }
    case 306523:
    {
        returnValue = F("Thauernhausen");
        break;
    }
    case 306524:
    {
        returnValue = F("Thauwinkelstr.");
        break;
    }
    case 306525:
    {
        returnValue = F("Thayatalweg");
        break;
    }
    case 306526:
    {
        returnValue = F("Thayaweg");
        break;
    }
    case 306527:
    {
        returnValue = F("Thaynger Str.");
        break;
    }
    case 306528:
    {
        returnValue = F("The Old West");
        break;
    }
    case 306529:
    {
        returnValue = F("Thea-Bähnisch-Weg");
        break;
    }
    case 306530:
    {
        returnValue = F("Thea-Hucke-Str.");
        break;
    }
    case 306531:
    {
        returnValue = F("Thea-Leymann-Str.");
        break;
    }
    case 306532:
    {
        returnValue = F("Thea-Paulus-Str.");
        break;
    }
    case 306533:
    {
        returnValue = F("Thea-Rasche-Weg");
        break;
    }
    case 306534:
    {
        returnValue = F("Theanolte-Bähnisch-Hof");
        break;
    }
    case 306535:
    {
        returnValue = F("Theanolte-Bähnisch-Weg");
        break;
    }
    case 306536:
    {
        returnValue = F("Theanoltestr.");
        break;
    }
    case 306537:
    {
        returnValue = F("Theatergasse");
        break;
    }
    case 306538:
    {
        returnValue = F("Theatergäßchen");
        break;
    }
    case 306539:
    {
        returnValue = F("Theaterpark");
        break;
    }
    case 306540:
    {
        returnValue = F("Theaterpassage");
        break;
    }
    case 306541:
    {
        returnValue = F("Theaterplatz");
        break;
    }
    case 306542:
    {
        returnValue = F("Theaterring");
        break;
    }
    case 306543:
    {
        returnValue = F("Theaterstr.");
        break;
    }
    case 306544:
    {
        returnValue = F("Theatertunnel");
        break;
    }
    case 306545:
    {
        returnValue = F("Theaterwall");
        break;
    }
    case 306546:
    {
        returnValue = F("Theaterweg");
        break;
    }
    case 306547:
    {
        returnValue = F("Theaterwiese");
        break;
    }
    case 306548:
    {
        returnValue = F("Theather Park");
        break;
    }
    case 306549:
    {
        returnValue = F("Theatherplatz");
        break;
    }
    case 306550:
    {
        returnValue = F("Theatinerweg");
        break;
    }
    case 306551:
    {
        returnValue = F("Theatron");
        break;
    }
    case 306552:
    {
        returnValue = F("Thebenkamp");
        break;
    }
    case 306553:
    {
        returnValue = F("Thebenweg");
        break;
    }
    case 306554:
    {
        returnValue = F("Theberath");
        break;
    }
    case 306555:
    {
        returnValue = F("Theberather Weg");
        break;
    }
    case 306556:
    {
        returnValue = F("Theberathsfeld");
        break;
    }
    case 306557:
    {
        returnValue = F("Thebushelmde");
        break;
    }
    case 306558:
    {
        returnValue = F("Thebäerstr.");
        break;
    }
    case 306559:
    {
        returnValue = F("Thebüer Str.");
        break;
    }
    case 306560:
    {
        returnValue = F("Theda-Behme-Str.");
        break;
    }
    case 306561:
    {
        returnValue = F("Theda-von-Werdum-Str.");
        break;
    }
    case 306562:
    {
        returnValue = F("Thedastr.");
        break;
    }
    case 306563:
    {
        returnValue = F("Thedaweg");
        break;
    }
    case 306564:
    {
        returnValue = F("Thedelastr.");
        break;
    }
    case 306565:
    {
        returnValue = F("Thedelskamp");
        break;
    }
    case 306566:
    {
        returnValue = F("Thedingastr.");
        break;
    }
    case 306567:
    {
        returnValue = F("Thedinghausenstr.");
        break;
    }
    case 306568:
    {
        returnValue = F("Thedinghauser Str.");
        break;
    }
    case 306569:
    {
        returnValue = F("Theeberg");
        break;
    }
    case 306570:
    {
        returnValue = F("Theegarten");
        break;
    }
    case 306571:
    {
        returnValue = F("Theegartener Str.");
        break;
    }
    case 306572:
    {
        returnValue = F("Theekamp");
        break;
    }
    case 306573:
    {
        returnValue = F("Theekoppel");
        break;
    }
    case 306574:
    {
        returnValue = F("Theelacht");
        break;
    }
    case 306575:
    {
        returnValue = F("Theelenkamp");
        break;
    }
    case 306576:
    {
        returnValue = F("Theelstr.");
        break;
    }
    case 306577:
    {
        returnValue = F("Theeltalstr.");
        break;
    }
    case 306578:
    {
        returnValue = F("Theelweg");
        break;
    }
    case 306579:
    {
        returnValue = F("Theenbeekweg");
        break;
    }
    case 306580:
    {
        returnValue = F("Theener Oststreek");
        break;
    }
    case 306581:
    {
        returnValue = F("Theener Str.");
        break;
    }
    case 306582:
    {
        returnValue = F("Theener Weststreek");
        break;
    }
    case 306583:
    {
        returnValue = F("Theenhausener Str.");
        break;
    }
    case 306584:
    {
        returnValue = F("Theerbrennerweg");
        break;
    }
    case 306585:
    {
        returnValue = F("Theerhofer Weg");
        break;
    }
    case 306586:
    {
        returnValue = F("Theerhütter Str.");
        break;
    }
    case 306587:
    {
        returnValue = F("Theerofen");
        break;
    }
    case 306588:
    {
        returnValue = F("Thees Hoff");
        break;
    }
    case 306589:
    {
        returnValue = F("Thees-Otten-Padd");
        break;
    }
    case 306590:
    {
        returnValue = F("Theesberg");
        break;
    }
    case 306591:
    {
        returnValue = F("Theeschütz");
        break;
    }
    case 306592:
    {
        returnValue = F("Theeschützer Str.");
        break;
    }
    case 306593:
    {
        returnValue = F("Theesener Str.");
        break;
    }
    case 306594:
    {
        returnValue = F("Theeser Heide");
        break;
    }
    case 306595:
    {
        returnValue = F("Theestr.");
        break;
    }
    case 306596:
    {
        returnValue = F("Theesweg");
        break;
    }
    case 306597:
    {
        returnValue = F("Theeweide");
        break;
    }
    case 306598:
    {
        returnValue = F("Theeßener Weg");
        break;
    }
    case 306599:
    {
        returnValue = F("Theiheide");
        break;
    }
    case 306600:
    {
        returnValue = F("Theileitenweg");
        break;
    }
    case 306601:
    {
        returnValue = F("Theilemannweg");
        break;
    }
    case 306602:
    {
        returnValue = F("Theilenhofener Str.");
        break;
    }
    case 306603:
    {
        returnValue = F("Theilenmoorstr.");
        break;
    }
    case 306604:
    {
        returnValue = F("Theilens Kamp");
        break;
    }
    case 306605:
    {
        returnValue = F("Theilenstr.");
        break;
    }
    case 306606:
    {
        returnValue = F("Theilenweg");
        break;
    }
    case 306607:
    {
        returnValue = F("Theilerstr.");
        break;
    }
    case 306608:
    {
        returnValue = F("Theilestr.");
        break;
    }
    case 306609:
    {
        returnValue = F("Theilheimer Str.");
        break;
    }
    case 306610:
    {
        returnValue = F("Theilheimer Weg");
        break;
    }
    case 306611:
    {
        returnValue = F("Theilkamp");
        break;
    }
    case 306612:
    {
        returnValue = F("Theilkampweg");
        break;
    }
    case 306613:
    {
        returnValue = F("Theilring");
        break;
    }
    case 306614:
    {
        returnValue = F("Theilskamp");
        break;
    }
    case 306615:
    {
        returnValue = F("Theilsmoor");
        break;
    }
    case 306616:
    {
        returnValue = F("Theilung");
        break;
    }
    case 306617:
    {
        returnValue = F("Theilweg");
        break;
    }
    case 306618:
    {
        returnValue = F("Theinfelder Str.");
        break;
    }
    case 306619:
    {
        returnValue = F("Theinheimer Weg");
        break;
    }
    case 306620:
    {
        returnValue = F("Theiningser Weg");
        break;
    }
    case 306621:
    {
        returnValue = F("Theinsbergl");
        break;
    }
    case 306622:
    {
        returnValue = F("Theinselberg");
        break;
    }
    case 306623:
    {
        returnValue = F("Theinstr.");
        break;
    }
    case 306624:
    {
        returnValue = F("Theis Str.");
        break;
    }
    case 306625:
    {
        returnValue = F("Theisaer Str.");
        break;
    }
    case 306626:
    {
        returnValue = F("Theisaer Weg");
        break;
    }
    case 306627:
    {
        returnValue = F("Theisbrügger Str.");
        break;
    }
    case 306628:
    {
        returnValue = F("Theisbrüggermoor");
        break;
    }
    case 306629:
    {
        returnValue = F("Theisbungert");
        break;
    }
    case 306630:
    {
        returnValue = F("Theisenbachstr.");
        break;
    }
    case 306631:
    {
        returnValue = F("Theisenort");
        break;
    }
    case 306632:
    {
        returnValue = F("Theisenorter Str.");
        break;
    }
    case 306633:
    {
        returnValue = F("Theisenstr.");
        break;
    }
    case 306634:
    {
        returnValue = F("Theiseweg");
        break;
    }
    case 306635:
    {
        returnValue = F("Theisewitzer Str.");
        break;
    }
    case 306636:
    {
        returnValue = F("Theisgarten");
        break;
    }
    case 306637:
    {
        returnValue = F("Theishahner Str.");
        break;
    }
    case 306638:
    {
        returnValue = F("Theiske");
        break;
    }
    case 306639:
    {
        returnValue = F("Theismühle");
        break;
    }
    case 306640:
    {
        returnValue = F("Theisseiler Str.");
        break;
    }
    case 306641:
    {
        returnValue = F("Theisstr.");
        break;
    }
    case 306642:
    {
        returnValue = F("Theisweg");
        break;
    }
    case 306643:
    {
        returnValue = F("Theißbaumweg");
        break;
    }
    case 306644:
    {
        returnValue = F("Theißelmannstr.");
        break;
    }
    case 306645:
    {
        returnValue = F("Theißener Hauptstr.");
        break;
    }
    case 306646:
    {
        returnValue = F("Theißener Querstr.");
        break;
    }
    case 306647:
    {
        returnValue = F("Theißengasse");
        break;
    }
    case 306648:
    {
        returnValue = F("Theißensteiner Str.");
        break;
    }
    case 306649:
    {
        returnValue = F("Theißenstr.");
        break;
    }
    case 306650:
    {
        returnValue = F("Theißfloß");
        break;
    }
    case 306651:
    {
        returnValue = F("Theißinger Str.");
        break;
    }
    case 306652:
    {
        returnValue = F("Theißstr.");
        break;
    }
    case 306653:
    {
        returnValue = F("Theißtal");
        break;
    }
    case 306654:
    {
        returnValue = F("Theißweg");
        break;
    }
    case 306655:
    {
        returnValue = F("Thekastr.");
        break;
    }
    case 306656:
    {
        returnValue = F("Thekenberg");
        break;
    }
    case 306657:
    {
        returnValue = F("Thekendorfer Weg");
        break;
    }
    case 306658:
    {
        returnValue = F("Thekhaus");
        break;
    }
    case 306659:
    {
        returnValue = F("Thekhauser Quall");
        break;
    }
    case 306660:
    {
        returnValue = F("Thekla-Herrlinger-Weg");
        break;
    }
    case 306661:
    {
        returnValue = F("Thekla-Trück-Str.");
        break;
    }
    case 306662:
    {
        returnValue = F("Thekla-Wickert-Weg");
        break;
    }
    case 306663:
    {
        returnValue = F("Thekla-von-Düring-Weg");
        break;
    }
    case 306664:
    {
        returnValue = F("Theklaer Str.");
        break;
    }
    case 306665:
    {
        returnValue = F("Theklasteig");
        break;
    }
    case 306666:
    {
        returnValue = F("Theklastr.");
        break;
    }
    case 306667:
    {
        returnValue = F("Theklaweg");
        break;
    }
    case 306668:
    {
        returnValue = F("Thelemannstr.");
        break;
    }
    case 306669:
    {
        returnValue = F("Thelen Mühle");
        break;
    }
    case 306670:
    {
        returnValue = F("Thelenberg");
        break;
    }
    case 306671:
    {
        returnValue = F("Thelenberger Str.");
        break;
    }
    case 306672:
    {
        returnValue = F("Thelenbitze");
        break;
    }
    case 306673:
    {
        returnValue = F("Thelengarten");
        break;
    }
    case 306674:
    {
        returnValue = F("Thelengasse");
        break;
    }
    case 306675:
    {
        returnValue = F("Thelengraben");
        break;
    }
    case 306676:
    {
        returnValue = F("Thelenkamp");
        break;
    }
    case 306677:
    {
        returnValue = F("Thelenort");
        break;
    }
    case 306678:
    {
        returnValue = F("Thelensgracht");
        break;
    }
    case 306679:
    {
        returnValue = F("Thelenshof");
        break;
    }
    case 306680:
    {
        returnValue = F("Thelenstr.");
        break;
    }
    case 306681:
    {
        returnValue = F("Thelenweg");
        break;
    }
    case 306682:
    {
        returnValue = F("Theleyer Str.");
        break;
    }
    case 306683:
    {
        returnValue = F("Thelings Kamp");
        break;
    }
    case 306684:
    {
        returnValue = F("Thelkower Weg");
        break;
    }
    case 306685:
    {
        returnValue = F("Thelottstr.");
        break;
    }
    case 306686:
    {
        returnValue = F("Thelstorf");
        break;
    }
    case 306687:
    {
        returnValue = F("Themarer Str.");
        break;
    }
    case 306688:
    {
        returnValue = F("Themarer Weg");
        break;
    }
    case 306689:
    {
        returnValue = F("Thematischer Wanderweg Pfanntal");
        break;
    }
    case 306690:
    {
        returnValue = F("Themen Park \"Mythos Stein");
        break;
    }
    case 306691:
    {
        returnValue = F("Themenreuth");
        break;
    }
    case 306692:
    {
        returnValue = F("Themesstr.");
        break;
    }
    case 306693:
    {
        returnValue = F("Themsestr.");
        break;
    }
    case 306694:
    {
        returnValue = F("Thenbergstr.");
        break;
    }
    case 306695:
    {
        returnValue = F("Thenerweg");
        break;
    }
    case 306696:
    {
        returnValue = F("Thenhovener Str.");
        break;
    }
    case 306697:
    {
        returnValue = F("Thenhover-Escher Weg");
        break;
    }
    case 306698:
    {
        returnValue = F("Thening");
        break;
    }
    case 306699:
    {
        returnValue = F("Thennenbühlstr.");
        break;
    }
    case 306700:
    {
        returnValue = F("Thenner Str.");
        break;
    }
    case 306701:
    {
        returnValue = F("Thenner-See-Str.");
        break;
    }
    case 306702:
    {
        returnValue = F("Thenrieder Str.");
        break;
    }
    case 306703:
    {
        returnValue = F("Thenrieder Weg");
        break;
    }
    case 306704:
    {
        returnValue = F("Thenstr.");
        break;
    }
    case 306705:
    {
        returnValue = F("Theo Oster Platz");
        break;
    }
    case 306706:
    {
        returnValue = F("Theo-Barkowski-Platz");
        break;
    }
    case 306707:
    {
        returnValue = F("Theo-Berger-Weg");
        break;
    }
    case 306708:
    {
        returnValue = F("Theo-Betz-Platz");
        break;
    }
    case 306709:
    {
        returnValue = F("Theo-Birkel-Str.");
        break;
    }
    case 306710:
    {
        returnValue = F("Theo-Blum-Str.");
        break;
    }
    case 306711:
    {
        returnValue = F("Theo-Böhle-Str.");
        break;
    }
    case 306712:
    {
        returnValue = F("Theo-Carlen-Platz");
        break;
    }
    case 306713:
    {
        returnValue = F("Theo-Claas-Damm");
        break;
    }
    case 306714:
    {
        returnValue = F("Theo-Dickopp-Str.");
        break;
    }
    case 306715:
    {
        returnValue = F("Theo-Ehrhardt-Str.");
        break;
    }
    case 306716:
    {
        returnValue = F("Theo-Esser-Weg");
        break;
    }
    case 306717:
    {
        returnValue = F("Theo-Friedrich-Weg");
        break;
    }
    case 306718:
    {
        returnValue = F("Theo-Fritz-Koch-Weg");
        break;
    }
    case 306719:
    {
        returnValue = F("Theo-Funccius-Str.");
        break;
    }
    case 306720:
    {
        returnValue = F("Theo-Förch-Str.");
        break;
    }
    case 306721:
    {
        returnValue = F("Theo-Geisel-Str.");
        break;
    }
    case 306722:
    {
        returnValue = F("Theo-Greiner-Str.");
        break;
    }
    case 306723:
    {
        returnValue = F("Theo-Gutberlet-Weg");
        break;
    }
    case 306724:
    {
        returnValue = F("Theo-Junghänel-Weg");
        break;
    }
    case 306725:
    {
        returnValue = F("Theo-Kellner-Str.");
        break;
    }
    case 306726:
    {
        returnValue = F("Theo-Klein-Str.");
        break;
    }
    case 306727:
    {
        returnValue = F("Theo-Kleppe-Weg");
        break;
    }
    case 306728:
    {
        returnValue = F("Theo-Koch-Str.");
        break;
    }
    case 306729:
    {
        returnValue = F("Theo-Lauber-Str.");
        break;
    }
    case 306730:
    {
        returnValue = F("Theo-Leuchten-Weg");
        break;
    }
    case 306731:
    {
        returnValue = F("Theo-Leyendecker-Weg");
        break;
    }
    case 306732:
    {
        returnValue = F("Theo-Mack-Str.");
        break;
    }
    case 306733:
    {
        returnValue = F("Theo-Mackeben-Str.");
        break;
    }
    case 306734:
    {
        returnValue = F("Theo-Mülders-Str.");
        break;
    }
    case 306735:
    {
        returnValue = F("Theo-Neubauer-Str.");
        break;
    }
    case 306736:
    {
        returnValue = F("Theo-Philipps-Ring");
        break;
    }
    case 306737:
    {
        returnValue = F("Theo-Reckmeyer-Str.");
        break;
    }
    case 306738:
    {
        returnValue = F("Theo-Schneider-Str.");
        break;
    }
    case 306739:
    {
        returnValue = F("Theo-Schultes-Weg");
        break;
    }
    case 306740:
    {
        returnValue = F("Theo-Schäfer-Weg");
        break;
    }
    case 306741:
    {
        returnValue = F("Theo-Seifer-Str.");
        break;
    }
    case 306742:
    {
        returnValue = F("Theo-Strepp-Str.");
        break;
    }
    case 306743:
    {
        returnValue = F("Theo-Volmert-Weg");
        break;
    }
    case 306744:
    {
        returnValue = F("Theo-Vondano-Str.");
        break;
    }
    case 306745:
    {
        returnValue = F("Theo-Wilkens-Str.");
        break;
    }
    case 306746:
    {
        returnValue = F("Theo-Wolfgarten-Str.");
        break;
    }
    case 306747:
    {
        returnValue = F("Theo-Wüllenkemper-Str.");
        break;
    }
    case 306748:
    {
        returnValue = F("Theo-Zimmermann-Str.");
        break;
    }
    case 306749:
    {
        returnValue = F("Theobald-Beer-Str.");
        break;
    }
    case 306750:
    {
        returnValue = F("Theobald-Christ-Str.");
        break;
    }
    case 306751:
    {
        returnValue = F("Theobald-Grad-Str.");
        break;
    }
    case 306752:
    {
        returnValue = F("Theobald-Hock-Platz");
        break;
    }
    case 306753:
    {
        returnValue = F("Theobald-Hock-Str.");
        break;
    }
    case 306754:
    {
        returnValue = F("Theobald-Hofmann-Str.");
        break;
    }
    case 306755:
    {
        returnValue = F("Theobald-Pfeiffer-Str.");
        break;
    }
    case 306756:
    {
        returnValue = F("Theobald-Renner-Str.");
        break;
    }
    case 306757:
    {
        returnValue = F("Theobald-Simon-Str.");
        break;
    }
    case 306758:
    {
        returnValue = F("Theobald-Ziegler-Str.");
        break;
    }
    case 306759:
    {
        returnValue = F("Theobald-von-Fuchs-Str.");
        break;
    }
    case 306760:
    {
        returnValue = F("Theobaldgässchen");
        break;
    }
    case 306761:
    {
        returnValue = F("Theobaldstr.");
        break;
    }
    case 306762:
    {
        returnValue = F("Theobaldsweg");
        break;
    }
    case 306763:
    {
        returnValue = F("Theobertstr.");
        break;
    }
    case 306764:
    {
        returnValue = F("Theod Schletterer Anlage");
        break;
    }
    case 306765:
    {
        returnValue = F("Theoderich-Str.");
        break;
    }
    case 306766:
    {
        returnValue = F("Theoderichstr.");
        break;
    }
    case 306767:
    {
        returnValue = F("Theodoldusweg");
        break;
    }
    case 306768:
    {
        returnValue = F("Theodolinde-Katzenmaier-Str.");
        break;
    }
    case 306769:
    {
        returnValue = F("Theodolindenstr.");
        break;
    }
    case 306770:
    {
        returnValue = F("Theodolindestr.");
        break;
    }
    case 306771:
    {
        returnValue = F("Theodolindeweg");
        break;
    }
    case 306772:
    {
        returnValue = F("Theodor Heuss Ring");
        break;
    }
    case 306773:
    {
        returnValue = F("Theodor-Adorno-Str.");
        break;
    }
    case 306774:
    {
        returnValue = F("Theodor-Adorno-Weg");
        break;
    }
    case 306775:
    {
        returnValue = F("Theodor-Alt-Weg");
        break;
    }
    case 306776:
    {
        returnValue = F("Theodor-Althoff-Str.");
        break;
    }
    case 306777:
    {
        returnValue = F("Theodor-Andresen-Str.");
        break;
    }
    case 306778:
    {
        returnValue = F("Theodor-Apel-Str.");
        break;
    }
    case 306779:
    {
        returnValue = F("Theodor-Arnold-Promenade");
        break;
    }
    case 306780:
    {
        returnValue = F("Theodor-Aufsberg-Str.");
        break;
    }
    case 306781:
    {
        returnValue = F("Theodor-Babilon-Str.");
        break;
    }
    case 306782:
    {
        returnValue = F("Theodor-Bansbach-Str.");
        break;
    }
    case 306783:
    {
        returnValue = F("Theodor-Basedow-Weg");
        break;
    }
    case 306784:
    {
        returnValue = F("Theodor-Bergmann-Str.");
        break;
    }
    case 306785:
    {
        returnValue = F("Theodor-Bergqvist-Weg");
        break;
    }
    case 306786:
    {
        returnValue = F("Theodor-Billroth-Str.");
        break;
    }
    case 306787:
    {
        returnValue = F("Theodor-Binder-Str.");
        break;
    }
    case 306788:
    {
        returnValue = F("Theodor-Blank-Allee");
        break;
    }
    case 306789:
    {
        returnValue = F("Theodor-Blank-Str.");
        break;
    }
    case 306790:
    {
        returnValue = F("Theodor-Blank-Weg");
        break;
    }
    case 306791:
    {
        returnValue = F("Theodor-Bogler-Weg");
        break;
    }
    case 306792:
    {
        returnValue = F("Theodor-Bogner-Str.");
        break;
    }
    case 306793:
    {
        returnValue = F("Theodor-Bornett-Weg");
        break;
    }
    case 306794:
    {
        returnValue = F("Theodor-Braeucker-Platz");
        break;
    }
    case 306795:
    {
        returnValue = F("Theodor-Brauer-Str.");
        break;
    }
    case 306796:
    {
        returnValue = F("Theodor-Braus-Weg");
        break;
    }
    case 306797:
    {
        returnValue = F("Theodor-Bremer-Str.");
        break;
    }
    case 306798:
    {
        returnValue = F("Theodor-Brinkmann-Str.");
        break;
    }
    case 306799:
    {
        returnValue = F("Theodor-Brugsch-Str.");
        break;
    }
    case 306800:
    {
        returnValue = F("Theodor-Brugsch-Weg");
        break;
    }
    case 306801:
    {
        returnValue = F("Theodor-Bräcker-Str.");
        break;
    }
    case 306802:
    {
        returnValue = F("Theodor-Bäuerle-Weg");
        break;
    }
    case 306803:
    {
        returnValue = F("Theodor-Bötel-Weg");
        break;
    }
    case 306804:
    {
        returnValue = F("Theodor-Castor-Weg");
        break;
    }
    case 306805:
    {
        returnValue = F("Theodor-Clausen-Str.");
        break;
    }
    case 306806:
    {
        returnValue = F("Theodor-Cosack-Str.");
        break;
    }
    case 306807:
    {
        returnValue = F("Theodor-Crato-Weg");
        break;
    }
    case 306808:
    {
        returnValue = F("Theodor-Crins-Weg");
        break;
    }
    case 306809:
    {
        returnValue = F("Theodor-Dierlamm-Str.");
        break;
    }
    case 306810:
    {
        returnValue = F("Theodor-Dirks-Weg");
        break;
    }
    case 306811:
    {
        returnValue = F("Theodor-Echtermeyer-Str.");
        break;
    }
    case 306812:
    {
        returnValue = F("Theodor-Echtermeyer-Weg");
        break;
    }
    case 306813:
    {
        returnValue = F("Theodor-Eckert-Str.");
        break;
    }
    case 306814:
    {
        returnValue = F("Theodor-Eilers-Str.");
        break;
    }
    case 306815:
    {
        returnValue = F("Theodor-Einsle-Str.");
        break;
    }
    case 306816:
    {
        returnValue = F("Theodor-Eisenlohr-Str.");
        break;
    }
    case 306817:
    {
        returnValue = F("Theodor-Elbinger-Str.");
        break;
    }
    case 306818:
    {
        returnValue = F("Theodor-Engel-Str.");
        break;
    }
    case 306819:
    {
        returnValue = F("Theodor-Ernst-Str.");
        break;
    }
    case 306820:
    {
        returnValue = F("Theodor-Esch-Str.");
        break;
    }
    case 306821:
    {
        returnValue = F("Theodor-Fahrmeir-Str.");
        break;
    }
    case 306822:
    {
        returnValue = F("Theodor-Fahrner-Str.");
        break;
    }
    case 306823:
    {
        returnValue = F("Theodor-Fetköter-Str.");
        break;
    }
    case 306824:
    {
        returnValue = F("Theodor-Fischer-Platz");
        break;
    }
    case 306825:
    {
        returnValue = F("Theodor-Fischer-Str.");
        break;
    }
    case 306826:
    {
        returnValue = F("Theodor-Fischer-Weg");
        break;
    }
    case 306827:
    {
        returnValue = F("Theodor-Fleitmann-Str.");
        break;
    }
    case 306828:
    {
        returnValue = F("Theodor-Fliedner-Str.");
        break;
    }
    case 306829:
    {
        returnValue = F("Theodor-Fliedner-Weg");
        break;
    }
    case 306830:
    {
        returnValue = F("Theodor-Foerster-Str.");
        break;
    }
    case 306831:
    {
        returnValue = F("Theodor-Fontane-Allee");
        break;
    }
    case 306832:
    {
        returnValue = F("Theodor-Fontane-Park");
        break;
    }
    case 306833:
    {
        returnValue = F("Theodor-Fontane-Passage");
        break;
    }
    case 306834:
    {
        returnValue = F("Theodor-Fontane-Platz");
        break;
    }
    case 306835:
    {
        returnValue = F("Theodor-Fontane-Ring");
        break;
    }
    case 306836:
    {
        returnValue = F("Theodor-Fontane-Str.");
        break;
    }
    case 306837:
    {
        returnValue = F("Theodor-Fontane-Weg");
        break;
    }
    case 306838:
    {
        returnValue = F("Theodor-Francksen-Str.");
        break;
    }
    case 306839:
    {
        returnValue = F("Theodor-Frank-Str.");
        break;
    }
    case 306840:
    {
        returnValue = F("Theodor-Franke-Str.");
        break;
    }
    case 306841:
    {
        returnValue = F("Theodor-Franken-Str.");
        break;
    }
    case 306842:
    {
        returnValue = F("Theodor-Frey-Str.");
        break;
    }
    case 306843:
    {
        returnValue = F("Theodor-Freywald-Weg");
        break;
    }
    case 306844:
    {
        returnValue = F("Theodor-Friedrich-Str.");
        break;
    }
    case 306845:
    {
        returnValue = F("Theodor-Friedrich-Weg");
        break;
    }
    case 306846:
    {
        returnValue = F("Theodor-Frings-Allee");
        break;
    }
    case 306847:
    {
        returnValue = F("Theodor-Fröhlich-Str.");
        break;
    }
    case 306848:
    {
        returnValue = F("Theodor-Gampe-Str.");
        break;
    }
    case 306849:
    {
        returnValue = F("Theodor-Geßner-Str.");
        break;
    }
    case 306850:
    {
        returnValue = F("Theodor-Gierath-Str.");
        break;
    }
    case 306851:
    {
        returnValue = F("Theodor-Gietl-Str.");
        break;
    }
    case 306852:
    {
        returnValue = F("Theodor-Goebel-Str.");
        break;
    }
    case 306853:
    {
        returnValue = F("Theodor-Graß-Str.");
        break;
    }
    case 306854:
    {
        returnValue = F("Theodor-Groppe-Str.");
        break;
    }
    case 306855:
    {
        returnValue = F("Theodor-Groz-Str.");
        break;
    }
    case 306856:
    {
        returnValue = F("Theodor-Gugel-Str.");
        break;
    }
    case 306857:
    {
        returnValue = F("Theodor-Haagn-Str.");
        break;
    }
    case 306858:
    {
        returnValue = F("Theodor-Haan-Str.");
        break;
    }
    case 306859:
    {
        returnValue = F("Theodor-Haebler-Str.");
        break;
    }
    case 306860:
    {
        returnValue = F("Theodor-Haecker-Str.");
        break;
    }
    case 306861:
    {
        returnValue = F("Theodor-Hagen-Weg");
        break;
    }
    case 306862:
    {
        returnValue = F("Theodor-Hampe-Weg");
        break;
    }
    case 306863:
    {
        returnValue = F("Theodor-Hartmann-Str.");
        break;
    }
    case 306864:
    {
        returnValue = F("Theodor-Hartz-Str.");
        break;
    }
    case 306865:
    {
        returnValue = F("Theodor-Haubach-Str.");
        break;
    }
    case 306866:
    {
        returnValue = F("Theodor-Haubach-Weg");
        break;
    }
    case 306867:
    {
        returnValue = F("Theodor-Haug-Str.");
        break;
    }
    case 306868:
    {
        returnValue = F("Theodor-Heckel-Str.");
        break;
    }
    case 306869:
    {
        returnValue = F("Theodor-Hecker-Str.");
        break;
    }
    case 306870:
    {
        returnValue = F("Theodor-Hein-Str.");
        break;
    }
    case 306871:
    {
        returnValue = F("Theodor-Hellmich-Str.");
        break;
    }
    case 306872:
    {
        returnValue = F("Theodor-Hepp-Str.");
        break;
    }
    case 306873:
    {
        returnValue = F("Theodor-Hepp-Weg");
        break;
    }
    case 306874:
    {
        returnValue = F("Theodor-Her-Str.");
        break;
    }
    case 306875:
    {
        returnValue = F("Theodor-Herrmann-Str.");
        break;
    }
    case 306876:
    {
        returnValue = F("Theodor-Heublein-Str.");
        break;
    }
    case 306877:
    {
        returnValue = F("Theodor-Heuglin-Str.");
        break;
    }
    case 306878:
    {
        returnValue = F("Theodor-Heuss Str.");
        break;
    }
    case 306879:
    {
        returnValue = F("Theodor-Heuss-Allee");
        break;
    }
    case 306880:
    {
        returnValue = F("Theodor-Heuss-Anlage");
        break;
    }
    case 306881:
    {
        returnValue = F("Theodor-Heuss-Brücke");
        break;
    }
    case 306882:
    {
        returnValue = F("Theodor-Heuss-Damm");
        break;
    }
    case 306883:
    {
        returnValue = F("Theodor-Heuss-Park");
        break;
    }
    case 306884:
    {
        returnValue = F("Theodor-Heuss-Platz");
        break;
    }
    case 306885:
    {
        returnValue = F("Theodor-Heuss-Ring");
        break;
    }
    case 306886:
    {
        returnValue = F("Theodor-Heuss-Str.");
        break;
    }
    case 306887:
    {
        returnValue = F("Theodor-Heuss-Ufer");
        break;
    }
    case 306888:
    {
        returnValue = F("Theodor-Heuss-Weg");
        break;
    }
    case 306889:
    {
        returnValue = F("Theodor-Heuß-Ring");
        break;
    }
    case 306890:
    {
        returnValue = F("Theodor-Heuß-Str.");
        break;
    }
    case 306891:
    {
        returnValue = F("Theodor-Heuß-Weg");
        break;
    }
    case 306892:
    {
        returnValue = F("Theodor-Hoffmann-Platz");
        break;
    }
    case 306893:
    {
        returnValue = F("Theodor-Holzschneider-Platz");
        break;
    }
    case 306894:
    {
        returnValue = F("Theodor-Hoppe-Weg");
        break;
    }
    case 306895:
    {
        returnValue = F("Theodor-Horber-Str.");
        break;
    }
    case 306896:
    {
        returnValue = F("Theodor-Hymmen-Str.");
        break;
    }
    case 306897:
    {
        returnValue = F("Theodor-Hörstmann-Str.");
        break;
    }
    case 306898:
    {
        returnValue = F("Theodor-Hürth-Str.");
        break;
    }
    case 306899:
    {
        returnValue = F("Theodor-Imberg-Str.");
        break;
    }
    case 306900:
    {
        returnValue = F("Theodor-Jansen-Str.");
        break;
    }
    case 306901:
    {
        returnValue = F("Theodor-Johannsen-Str.");
        break;
    }
    case 306902:
    {
        returnValue = F("Theodor-Jopp-Str.");
        break;
    }
    case 306903:
    {
        returnValue = F("Theodor-Jörg-Str.");
        break;
    }
    case 306904:
    {
        returnValue = F("Theodor-Kaiser-Str.");
        break;
    }
    case 306905:
    {
        returnValue = F("Theodor-Kaufmann-Weg");
        break;
    }
    case 306906:
    {
        returnValue = F("Theodor-Kerkow-Allee");
        break;
    }
    case 306907:
    {
        returnValue = F("Theodor-Kiefer-Str.");
        break;
    }
    case 306908:
    {
        returnValue = F("Theodor-Klein-Str.");
        break;
    }
    case 306909:
    {
        returnValue = F("Theodor-Kliefoth-Str.");
        break;
    }
    case 306910:
    {
        returnValue = F("Theodor-Klinkforth-Str.");
        break;
    }
    case 306911:
    {
        returnValue = F("Theodor-Klippel-Str.");
        break;
    }
    case 306912:
    {
        returnValue = F("Theodor-Klotzbücher-Str.");
        break;
    }
    case 306913:
    {
        returnValue = F("Theodor-Koch-Weg");
        break;
    }
    case 306914:
    {
        returnValue = F("Theodor-Koerner-Str.");
        break;
    }
    case 306915:
    {
        returnValue = F("Theodor-Korselt-Str.");
        break;
    }
    case 306916:
    {
        returnValue = F("Theodor-Kozlowski-Str.");
        break;
    }
    case 306917:
    {
        returnValue = F("Theodor-Kreimer-Str.");
        break;
    }
    case 306918:
    {
        returnValue = F("Theodor-Krumm-Str.");
        break;
    }
    case 306919:
    {
        returnValue = F("Theodor-Kröger-Str.");
        break;
    }
    case 306920:
    {
        returnValue = F("Theodor-Krüger-Str.");
        break;
    }
    case 306921:
    {
        returnValue = F("Theodor-Kunz-Ring");
        break;
    }
    case 306922:
    {
        returnValue = F("Theodor-Kunzemann-Str.");
        break;
    }
    case 306923:
    {
        returnValue = F("Theodor-Kurscheid-Str.");
        break;
    }
    case 306924:
    {
        returnValue = F("Theodor-Kutzer-Ufer");
        break;
    }
    case 306925:
    {
        returnValue = F("Theodor-Kuypers-Str.");
        break;
    }
    case 306926:
    {
        returnValue = F("Theodor-Kömer-Str.");
        break;
    }
    case 306927:
    {
        returnValue = F("Theodor-König-Str.");
        break;
    }
    case 306928:
    {
        returnValue = F("Theodor-Körber-Weg");
        break;
    }
    case 306929:
    {
        returnValue = F("Theodor-Körner-Allee");
        break;
    }
    case 306930:
    {
        returnValue = F("Theodor-Körner-Platz");
        break;
    }
    case 306931:
    {
        returnValue = F("Theodor-Körner-Str.");
        break;
    }
    case 306932:
    {
        returnValue = F("Theodor-Körner-Weg");
        break;
    }
    case 306933:
    {
        returnValue = F("Theodor-Künneth-Str.");
        break;
    }
    case 306934:
    {
        returnValue = F("Theodor-Lachmann-Str.");
        break;
    }
    case 306935:
    {
        returnValue = F("Theodor-Leipart-Str.");
        break;
    }
    case 306936:
    {
        returnValue = F("Theodor-Leißl-Str.");
        break;
    }
    case 306937:
    {
        returnValue = F("Theodor-Lennartz-Str.");
        break;
    }
    case 306938:
    {
        returnValue = F("Theodor-Lessing-Platz");
        break;
    }
    case 306939:
    {
        returnValue = F("Theodor-Lessing-Ring");
        break;
    }
    case 306940:
    {
        returnValue = F("Theodor-Lessing-Str.");
        break;
    }
    case 306941:
    {
        returnValue = F("Theodor-Lessing-Weg");
        break;
    }
    case 306942:
    {
        returnValue = F("Theodor-Leutwein-Str.");
        break;
    }
    case 306943:
    {
        returnValue = F("Theodor-Liebertz-Str.");
        break;
    }
    case 306944:
    {
        returnValue = F("Theodor-Lieser-Str.");
        break;
    }
    case 306945:
    {
        returnValue = F("Theodor-Lipps-Str.");
        break;
    }
    case 306946:
    {
        returnValue = F("Theodor-Litt-Ring");
        break;
    }
    case 306947:
    {
        returnValue = F("Theodor-Litt-Str.");
        break;
    }
    case 306948:
    {
        returnValue = F("Theodor-Lohmann-Weg");
        break;
    }
    case 306949:
    {
        returnValue = F("Theodor-Lorch-Weg");
        break;
    }
    case 306950:
    {
        returnValue = F("Theodor-Lutz-Str.");
        break;
    }
    case 306951:
    {
        returnValue = F("Theodor-Löbbecke-Str.");
        break;
    }
    case 306952:
    {
        returnValue = F("Theodor-Lövenich-Str.");
        break;
    }
    case 306953:
    {
        returnValue = F("Theodor-Maas-Str.");
        break;
    }
    case 306954:
    {
        returnValue = F("Theodor-Marwitz-Str.");
        break;
    }
    case 306955:
    {
        returnValue = F("Theodor-Mathieu-Str.");
        break;
    }
    case 306956:
    {
        returnValue = F("Theodor-Mayer-Str.");
        break;
    }
    case 306957:
    {
        returnValue = F("Theodor-Meckel-Weg");
        break;
    }
    case 306958:
    {
        returnValue = F("Theodor-Menke-Str.");
        break;
    }
    case 306959:
    {
        returnValue = F("Theodor-Meyer-Str.");
        break;
    }
    case 306960:
    {
        returnValue = F("Theodor-Mietens-Weg");
        break;
    }
    case 306961:
    {
        returnValue = F("Theodor-Mohr-Str.");
        break;
    }
    case 306962:
    {
        returnValue = F("Theodor-Mommsen-Str.");
        break;
    }
    case 306963:
    {
        returnValue = F("Theodor-Mommsen-Weg");
        break;
    }
    case 306964:
    {
        returnValue = F("Theodor-Morung-Str.");
        break;
    }
    case 306965:
    {
        returnValue = F("Theodor-Munz-Str.");
        break;
    }
    case 306966:
    {
        returnValue = F("Theodor-Möller-Park");
        break;
    }
    case 306967:
    {
        returnValue = F("Theodor-Müller-Str.");
        break;
    }
    case 306968:
    {
        returnValue = F("Theodor-Naarmann-Str.");
        break;
    }
    case 306969:
    {
        returnValue = F("Theodor-Neizert-Str.");
        break;
    }
    case 306970:
    {
        returnValue = F("Theodor-Neubauer-Park");
        break;
    }
    case 306971:
    {
        returnValue = F("Theodor-Neubauer-Str.");
        break;
    }
    case 306972:
    {
        returnValue = F("Theodor-Neubauer-Weg");
        break;
    }
    case 306973:
    {
        returnValue = F("Theodor-Neubürger-Str.");
        break;
    }
    case 306974:
    {
        returnValue = F("Theodor-Neunecker-Str.");
        break;
    }
    case 306975:
    {
        returnValue = F("Theodor-Neutig-Str.");
        break;
    }
    case 306976:
    {
        returnValue = F("Theodor-Nießen-Str.");
        break;
    }
    case 306977:
    {
        returnValue = F("Theodor-Noa-Str.");
        break;
    }
    case 306978:
    {
        returnValue = F("Theodor-Nolte-Str.");
        break;
    }
    case 306979:
    {
        returnValue = F("Theodor-Nägelein-Str.");
        break;
    }
    case 306980:
    {
        returnValue = F("Theodor-Ortner-Str.");
        break;
    }
    case 306981:
    {
        returnValue = F("Theodor-Ott-Ring");
        break;
    }
    case 306982:
    {
        returnValue = F("Theodor-Otte-Str.");
        break;
    }
    case 306983:
    {
        returnValue = F("Theodor-Pekol-Str.");
        break;
    }
    case 306984:
    {
        returnValue = F("Theodor-Petersen-Weg");
        break;
    }
    case 306985:
    {
        returnValue = F("Theodor-Pixis-Str.");
        break;
    }
    case 306986:
    {
        returnValue = F("Theodor-Porsch-Str.");
        break;
    }
    case 306987:
    {
        returnValue = F("Theodor-Preuß-Str.");
        break;
    }
    case 306988:
    {
        returnValue = F("Theodor-Pröpper-Weg");
        break;
    }
    case 306989:
    {
        returnValue = F("Theodor-Quehl-Str.");
        break;
    }
    case 306990:
    {
        returnValue = F("Theodor-Reh-Str.");
        break;
    }
    case 306991:
    {
        returnValue = F("Theodor-Rehbock-Str.");
        break;
    }
    case 306992:
    {
        returnValue = F("Theodor-Rehn-Str.");
        break;
    }
    case 306993:
    {
        returnValue = F("Theodor-Reiche-Str.");
        break;
    }
    case 306994:
    {
        returnValue = F("Theodor-Roeingh-Str.");
        break;
    }
    case 306995:
    {
        returnValue = F("Theodor-Roemer-Str.");
        break;
    }
    case 306996:
    {
        returnValue = F("Theodor-Roghmans-Platz");
        break;
    }
    case 306997:
    {
        returnValue = F("Theodor-Rothschild-Str.");
        break;
    }
    case 306998:
    {
        returnValue = F("Theodor-Röhmeyer-Weg");
        break;
    }
    case 306999:
    {
        returnValue = F("Theodor-Römer-Weg");
        break;
    }
    case 307000:
    {
        returnValue = F("Theodor-Rößler-Str.");
        break;
    }
    case 307001:
    {
        returnValue = F("Theodor-Sachs-Str.");
        break;
    }
    case 307002:
    {
        returnValue = F("Theodor-Sanne-Str.");
        break;
    }
    case 307003:
    {
        returnValue = F("Theodor-Schenck-Str.");
        break;
    }
    case 307004:
    {
        returnValue = F("Theodor-Scherg-Str.");
        break;
    }
    case 307005:
    {
        returnValue = F("Theodor-Schmid-Str.");
        break;
    }
    case 307006:
    {
        returnValue = F("Theodor-Schmidt-Str.");
        break;
    }
    case 307007:
    {
        returnValue = F("Theodor-Schnell-Weg");
        break;
    }
    case 307008:
    {
        returnValue = F("Theodor-Schröder-Weg");
        break;
    }
    case 307009:
    {
        returnValue = F("Theodor-Schultz-Str.");
        break;
    }
    case 307010:
    {
        returnValue = F("Theodor-Schwann-Str.");
        break;
    }
    case 307011:
    {
        returnValue = F("Theodor-Schwarte-Str.");
        break;
    }
    case 307012:
    {
        returnValue = F("Theodor-Schäfer-Str.");
        break;
    }
    case 307013:
    {
        returnValue = F("Theodor-Schöllig-Str.");
        break;
    }
    case 307014:
    {
        returnValue = F("Theodor-Schütze-Weg");
        break;
    }
    case 307015:
    {
        returnValue = F("Theodor-Schüz-Str.");
        break;
    }
    case 307016:
    {
        returnValue = F("Theodor-Scriba-Str.");
        break;
    }
    case 307017:
    {
        returnValue = F("Theodor-Seipp-Str.");
        break;
    }
    case 307018:
    {
        returnValue = F("Theodor-Selig-Str.");
        break;
    }
    case 307019:
    {
        returnValue = F("Theodor-Seybold-Str.");
        break;
    }
    case 307020:
    {
        returnValue = F("Theodor-Siebel-Weg");
        break;
    }
    case 307021:
    {
        returnValue = F("Theodor-Simon-Str.");
        break;
    }
    case 307022:
    {
        returnValue = F("Theodor-Steininger-Str.");
        break;
    }
    case 307023:
    {
        returnValue = F("Theodor-Steltzer-Str.");
        break;
    }
    case 307024:
    {
        returnValue = F("Theodor-Steltzer-Weg");
        break;
    }
    case 307025:
    {
        returnValue = F("Theodor-Stern-Kai");
        break;
    }
    case 307026:
    {
        returnValue = F("Theodor-Storm-Allee");
        break;
    }
    case 307027:
    {
        returnValue = F("Theodor-Storm-Platz");
        break;
    }
    case 307028:
    {
        returnValue = F("Theodor-Storm-Ring");
        break;
    }
    case 307029:
    {
        returnValue = F("Theodor-Storm-Stieg");
        break;
    }
    case 307030:
    {
        returnValue = F("Theodor-Storm-Str.");
        break;
    }
    case 307031:
    {
        returnValue = F("Theodor-Storm-Weg");
        break;
    }
    case 307032:
    {
        returnValue = F("Theodor-Stöterau-Str.");
        break;
    }
    case 307033:
    {
        returnValue = F("Theodor-Suhnel-Str.");
        break;
    }
    case 307034:
    {
        returnValue = F("Theodor-Sältze-Str.");
        break;
    }
    case 307035:
    {
        returnValue = F("Theodor-Tantzen-Str.");
        break;
    }
    case 307036:
    {
        returnValue = F("Theodor-Thomas-Str.");
        break;
    }
    case 307037:
    {
        returnValue = F("Theodor-Triebenbacher-Str.");
        break;
    }
    case 307038:
    {
        returnValue = F("Theodor-Trippel-Str.");
        break;
    }
    case 307039:
    {
        returnValue = F("Theodor-Türich-Str.");
        break;
    }
    case 307040:
    {
        returnValue = F("Theodor-Uhlenbrock-Weg");
        break;
    }
    case 307041:
    {
        returnValue = F("Theodor-Uhlig-Str.");
        break;
    }
    case 307042:
    {
        returnValue = F("Theodor-Vahlmann-Str.");
        break;
    }
    case 307043:
    {
        returnValue = F("Theodor-Viepeck-Str.");
        break;
    }
    case 307044:
    {
        returnValue = F("Theodor-Vogel-Weg");
        break;
    }
    case 307045:
    {
        returnValue = F("Theodor-Voigt-Str.");
        break;
    }
    case 307046:
    {
        returnValue = F("Theodor-Völker-Str.");
        break;
    }
    case 307047:
    {
        returnValue = F("Theodor-W.-Adorno-Platz");
        break;
    }
    case 307048:
    {
        returnValue = F("Theodor-W.-Adorno-Weg");
        break;
    }
    case 307049:
    {
        returnValue = F("Theodor-Wabnitz-Str.");
        break;
    }
    case 307050:
    {
        returnValue = F("Theodor-Waechter-Str.");
        break;
    }
    case 307051:
    {
        returnValue = F("Theodor-Wagner-Str.");
        break;
    }
    case 307052:
    {
        returnValue = F("Theodor-Weber-Str.");
        break;
    }
    case 307053:
    {
        returnValue = F("Theodor-Weinz-Str.");
        break;
    }
    case 307054:
    {
        returnValue = F("Theodor-Wenge-Str.");
        break;
    }
    case 307055:
    {
        returnValue = F("Theodor-Wenzel-Weg");
        break;
    }
    case 307056:
    {
        returnValue = F("Theodor-Westerburg-Str.");
        break;
    }
    case 307057:
    {
        returnValue = F("Theodor-Wiedemann-Str.");
        break;
    }
    case 307058:
    {
        returnValue = F("Theodor-Wilhelm-Schmid-Str.");
        break;
    }
    case 307059:
    {
        returnValue = F("Theodor-Wolf-Weg");
        break;
    }
    case 307060:
    {
        returnValue = F("Theodor-Wüst-Str.");
        break;
    }
    case 307061:
    {
        returnValue = F("Theodor-Zais-Str.");
        break;
    }
    case 307062:
    {
        returnValue = F("Theodor-Zeller-Str.");
        break;
    }
    case 307063:
    {
        returnValue = F("Theodor-Zimmermann-Str.");
        break;
    }
    case 307064:
    {
        returnValue = F("Theodor-Zink-Str.");
        break;
    }
    case 307065:
    {
        returnValue = F("Theodor-Zöckler-Str.");
        break;
    }
    case 307066:
    {
        returnValue = F("Theodor-von-Hötzendorff-Str.");
        break;
    }
    case 307067:
    {
        returnValue = F("Theodor-von-Schacht-Str.");
        break;
    }
    case 307068:
    {
        returnValue = F("Theodor-von-Zahn-Str.");
        break;
    }
    case 307069:
    {
        returnValue = F("Theodora-Cashel-Str.");
        break;
    }
    case 307070:
    {
        returnValue = F("Theodora-Korte-Str.");
        break;
    }
    case 307071:
    {
        returnValue = F("Theodora-Löwenstein-Str.");
        break;
    }
    case 307072:
    {
        returnValue = F("Theodora-Rump-Str.");
        break;
    }
    case 307073:
    {
        returnValue = F("Theodorenstr.");
        break;
    }
    case 307074:
    {
        returnValue = F("Theodoriweg");
        break;
    }
    case 307075:
    {
        returnValue = F("Theodorplatz");
        break;
    }
    case 307076:
    {
        returnValue = F("Theodorshofweg");
        break;
    }
    case 307077:
    {
        returnValue = F("Theodorstr.");
        break;
    }
    case 307078:
    {
        returnValue = F("Theodorus Weg");
        break;
    }
    case 307079:
    {
        returnValue = F("Theodorweg");
        break;
    }
    case 307080:
    {
        returnValue = F("Theodostr.");
        break;
    }
    case 307081:
    {
        returnValue = F("Theolindenstr.");
        break;
    }
    case 307082:
    {
        returnValue = F("Theophanostr.");
        break;
    }
    case 307083:
    {
        returnValue = F("Theophil-Wurm-Str.");
        break;
    }
    case 307084:
    {
        returnValue = F("Theophil-Wurm-Weg");
        break;
    }
    case 307085:
    {
        returnValue = F("Theopoldstr.");
        break;
    }
    case 307086:
    {
        returnValue = F("Theotramstr.");
        break;
    }
    case 307087:
    {
        returnValue = F("Therapiegarten");
        break;
    }
    case 307088:
    {
        returnValue = F("Therecker Weg");
        break;
    }
    case 307089:
    {
        returnValue = F("Thererstr.");
        break;
    }
    case 307090:
    {
        returnValue = F("Therese-Bauer-Str.");
        break;
    }
    case 307091:
    {
        returnValue = F("Therese-Blase-Str.");
        break;
    }
    case 307092:
    {
        returnValue = F("Therese-Giehse-Platz");
        break;
    }
    case 307093:
    {
        returnValue = F("Therese-Giehse-Str.");
        break;
    }
    case 307094:
    {
        returnValue = F("Therese-Giehse-Weg");
        break;
    }
    case 307095:
    {
        returnValue = F("Therese-Grube-Weg");
        break;
    }
    case 307096:
    {
        returnValue = F("Therese-Herger-Anlage");
        break;
    }
    case 307097:
    {
        returnValue = F("Therese-Huber-Str.");
        break;
    }
    case 307098:
    {
        returnValue = F("Therese-Illerhues-Weg");
        break;
    }
    case 307099:
    {
        returnValue = F("Therese-Kalbfleisch-Str.");
        break;
    }
    case 307100:
    {
        returnValue = F("Therese-Kuhlmann-Str.");
        break;
    }
    case 307101:
    {
        returnValue = F("Therese-Malten-Str.");
        break;
    }
    case 307102:
    {
        returnValue = F("Therese-Müller-Str.");
        break;
    }
    case 307103:
    {
        returnValue = F("Therese-Münsterteicher-Platz");
        break;
    }
    case 307104:
    {
        returnValue = F("Therese-Neumann-Platz");
        break;
    }
    case 307105:
    {
        returnValue = F("Therese-Pöhler-Weg");
        break;
    }
    case 307106:
    {
        returnValue = F("Therese-Studer-Str.");
        break;
    }
    case 307107:
    {
        returnValue = F("Therese-Stählin-Str.");
        break;
    }
    case 307108:
    {
        returnValue = F("Therese-Wiesert-Str.");
        break;
    }
    case 307109:
    {
        returnValue = F("Therese-Zenk-Weg");
        break;
    }
    case 307110:
    {
        returnValue = F("Therese-von-Wüllenweber-Platz");
        break;
    }
    case 307111:
    {
        returnValue = F("Therese-von-der-Vring-Str.");
        break;
    }
    case 307112:
    {
        returnValue = F("Theresenstr.");
        break;
    }
    case 307113:
    {
        returnValue = F("Theresenweg");
        break;
    }
    case 307114:
    {
        returnValue = F("Thereser Str.");
        break;
    }
    case 307115:
    {
        returnValue = F("Theresia-Albers-Str.");
        break;
    }
    case 307116:
    {
        returnValue = F("Theresia-Bosch-Str.");
        break;
    }
    case 307117:
    {
        returnValue = F("Theresia-Gerhardinger-Str.");
        break;
    }
    case 307118:
    {
        returnValue = F("Theresia-Gerhardinger-Weg");
        break;
    }
    case 307119:
    {
        returnValue = F("Theresia-Hueck-Str.");
        break;
    }
    case 307120:
    {
        returnValue = F("Theresia-Siewering-Str.");
        break;
    }
    case 307121:
    {
        returnValue = F("Theresia-von-Wüllenweber-Str.");
        break;
    }
    case 307122:
    {
        returnValue = F("Theresianumweg");
        break;
    }
    case 307123:
    {
        returnValue = F("Theresiastr.");
        break;
    }
    case 307124:
    {
        returnValue = F("Theresien Geräumt");
        break;
    }
    case 307125:
    {
        returnValue = F("Theresien- Geräumt");
        break;
    }
    case 307126:
    {
        returnValue = F("Theresien-Geräumt");
        break;
    }
    case 307127:
    {
        returnValue = F("Theresienau");
        break;
    }
    case 307128:
    {
        returnValue = F("Theresienbad");
        break;
    }
    case 307129:
    {
        returnValue = F("Theresienbogen");
        break;
    }
    case 307130:
    {
        returnValue = F("Theresienbrücke");
        break;
    }
    case 307131:
    {
        returnValue = F("Theresienfeld");
        break;
    }
    case 307132:
    {
        returnValue = F("Theresienhain");
        break;
    }
    case 307133:
    {
        returnValue = F("Theresienhof");
        break;
    }
    case 307134:
    {
        returnValue = F("Theresienhofer Stieg");
        break;
    }
    case 307135:
    {
        returnValue = F("Theresienhofstr.");
        break;
    }
    case 307136:
    {
        returnValue = F("Theresienhöhe");
        break;
    }
    case 307137:
    {
        returnValue = F("Theresienpark");
        break;
    }
    case 307138:
    {
        returnValue = F("Theresienplatz");
        break;
    }
    case 307139:
    {
        returnValue = F("Theresienstr.");
        break;
    }
    case 307140:
    {
        returnValue = F("Theresiental");
        break;
    }
    case 307141:
    {
        returnValue = F("Theresientaler Str.");
        break;
    }
    case 307142:
    {
        returnValue = F("Theresienthal");
        break;
    }
    case 307143:
    {
        returnValue = F("Theresienthaler Str.");
        break;
    }
    case 307144:
    {
        returnValue = F("Theresienweg");
        break;
    }
    case 307145:
    {
        returnValue = F("Theriswiesweg");
        break;
    }
    case 307146:
    {
        returnValue = F("Thermalbad");
        break;
    }
    case 307147:
    {
        returnValue = F("Thermalbadstr.");
        break;
    }
    case 307148:
    {
        returnValue = F("Thermalstr.");
        break;
    }
    case 307149:
    {
        returnValue = F("Thermenallee");
        break;
    }
    case 307150:
    {
        returnValue = F("Thermenpark");
        break;
    }
    case 307151:
    {
        returnValue = F("Thermenstr.");
        break;
    }
    case 307152:
    {
        returnValue = F("Thermenweg");
        break;
    }
    case 307153:
    {
        returnValue = F("Therwingenstr.");
        break;
    }
    case 307154:
    {
        returnValue = F("Thesdorfer Str.");
        break;
    }
    case 307155:
    {
        returnValue = F("Thesdorfer Weg");
        break;
    }
    case 307156:
    {
        returnValue = F("Thesenkampsweg");
        break;
    }
    case 307157:
    {
        returnValue = F("Theseusstr.");
        break;
    }
    case 307158:
    {
        returnValue = F("Thesfelderstr.");
        break;
    }
    case 307159:
    {
        returnValue = F("Thesingfelder Str.");
        break;
    }
    case 307160:
    {
        returnValue = F("Thesings Allee");
        break;
    }
    case 307161:
    {
        returnValue = F("Thesingsland");
        break;
    }
    case 307162:
    {
        returnValue = F("Thesingsweg");
        break;
    }
    case 307163:
    {
        returnValue = F("Theta");
        break;
    }
    case 307164:
    {
        returnValue = F("Thetener Str.");
        break;
    }
    case 307165:
    {
        returnValue = F("Thetforder Str.");
        break;
    }
    case 307166:
    {
        returnValue = F("Theudebertstr.");
        break;
    }
    case 307167:
    {
        returnValue = F("Theuderichstr.");
        break;
    }
    case 307168:
    {
        returnValue = F("Theuerbach");
        break;
    }
    case 307169:
    {
        returnValue = F("Theuerbornshohl");
        break;
    }
    case 307170:
    {
        returnValue = F("Theuerbronner Str.");
        break;
    }
    case 307171:
    {
        returnValue = F("Theuerbrünnleinsweg");
        break;
    }
    case 307172:
    {
        returnValue = F("Theuerner Str.");
        break;
    }
    case 307173:
    {
        returnValue = F("Theuerstadt");
        break;
    }
    case 307174:
    {
        returnValue = F("Theumaer Str.");
        break;
    }
    case 307175:
    {
        returnValue = F("Theumaer Weg");
        break;
    }
    case 307176:
    {
        returnValue = F("Theunerplatz");
        break;
    }
    case 307177:
    {
        returnValue = F("Theunertstr.");
        break;
    }
    case 307178:
    {
        returnValue = F("Theurerstr.");
        break;
    }
    case 307179:
    {
        returnValue = F("Theurersweg");
        break;
    }
    case 307180:
    {
        returnValue = F("Theusdorf");
        break;
    }
    case 307181:
    {
        returnValue = F("Theussengasse");
        break;
    }
    case 307182:
    {
        returnValue = F("Theutbirgstr.");
        break;
    }
    case 307183:
    {
        returnValue = F("Theutbirgweg");
        break;
    }
    case 307184:
    {
        returnValue = F("Theußenbergsträßle");
        break;
    }
    case 307185:
    {
        returnValue = F("Thewaltstr.");
        break;
    }
    case 307186:
    {
        returnValue = F("Thewissenweg");
        break;
    }
    case 307187:
    {
        returnValue = F("Theys-Külwer-Str.");
        break;
    }
    case 307188:
    {
        returnValue = F("Thiaisplatz");
        break;
    }
    case 307189:
    {
        returnValue = F("Thiatildisstr.");
        break;
    }
    case 307190:
    {
        returnValue = F("Thibautstr.");
        break;
    }
    case 307191:
    {
        returnValue = F("Thiberg");
        break;
    }
    case 307192:
    {
        returnValue = F("Thiderichstr.");
        break;
    }
    case 307193:
    {
        returnValue = F("Thidrekweg");
        break;
    }
    case 307194:
    {
        returnValue = F("Thie");
        break;
    }
    case 307195:
    {
        returnValue = F("Thie-Str.");
        break;
    }
    case 307196:
    {
        returnValue = F("Thiebachgasse");
        break;
    }
    case 307197:
    {
        returnValue = F("Thiebachstr.");
        break;
    }
    case 307198:
    {
        returnValue = F("Thiebauthstr.");
        break;
    }
    case 307199:
    {
        returnValue = F("Thieberg");
        break;
    }
    case 307200:
    {
        returnValue = F("Thiebergstr.");
        break;
    }
    case 307201:
    {
        returnValue = F("Thiebrink");
        break;
    }
    case 307202:
    {
        returnValue = F("Thiedebacher Weg");
        break;
    }
    case 307203:
    {
        returnValue = F("Thieder Str.");
        break;
    }
    case 307204:
    {
        returnValue = F("Thieder Weg");
        break;
    }
    case 307205:
    {
        returnValue = F("Thiederhall");
        break;
    }
    case 307206:
    {
        returnValue = F("Thiedestr.");
        break;
    }
    case 307207:
    {
        returnValue = F("Thiefeld");
        break;
    }
    case 307208:
    {
        returnValue = F("Thiegarten");
        break;
    }
    case 307209:
    {
        returnValue = F("Thiegasse");
        break;
    }
    case 307210:
    {
        returnValue = F("Thieheuers Weg");
        break;
    }
    case 307211:
    {
        returnValue = F("Thieheuerstr.");
        break;
    }
    case 307212:
    {
        returnValue = F("Thiehofsfeld");
        break;
    }
    case 307213:
    {
        returnValue = F("Thiekamp");
        break;
    }
    case 307214:
    {
        returnValue = F("Thiel");
        break;
    }
    case 307215:
    {
        returnValue = F("Thielaustr.");
        break;
    }
    case 307216:
    {
        returnValue = F("Thielberg");
        break;
    }
    case 307217:
    {
        returnValue = F("Thielbrede");
        break;
    }
    case 307218:
    {
        returnValue = F("Thielebachstr.");
        break;
    }
    case 307219:
    {
        returnValue = F("Thielebachweg");
        break;
    }
    case 307220:
    {
        returnValue = F("Thielegasse");
        break;
    }
    case 307221:
    {
        returnValue = F("Thielemanns Damm");
        break;
    }
    case 307222:
    {
        returnValue = F("Thielemannstr.");
        break;
    }
    case 307223:
    {
        returnValue = F("Thielemannweg");
        break;
    }
    case 307224:
    {
        returnValue = F("Thielenbachstr.");
        break;
    }
    case 307225:
    {
        returnValue = F("Thielenbrucher Str.");
        break;
    }
    case 307226:
    {
        returnValue = F("Thielengasse");
        break;
    }
    case 307227:
    {
        returnValue = F("Thielenkamp");
        break;
    }
    case 307228:
    {
        returnValue = F("Thielenkampweg");
        break;
    }
    case 307229:
    {
        returnValue = F("Thielenplatz");
        break;
    }
    case 307230:
    {
        returnValue = F("Thielenstr.");
        break;
    }
    case 307231:
    {
        returnValue = F("Thielenweg");
        break;
    }
    case 307232:
    {
        returnValue = F("Thielenäcker");
        break;
    }
    case 307233:
    {
        returnValue = F("Thieler Weg");
        break;
    }
    case 307234:
    {
        returnValue = F("Thieles Garten");
        break;
    }
    case 307235:
    {
        returnValue = F("Thieles Wiesen");
        break;
    }
    case 307236:
    {
        returnValue = F("Thielestr.");
        break;
    }
    case 307237:
    {
        returnValue = F("Thieleweg");
        break;
    }
    case 307238:
    {
        returnValue = F("Thielkeskamp");
        break;
    }
    case 307239:
    {
        returnValue = F("Thielmannweg");
        break;
    }
    case 307240:
    {
        returnValue = F("Thielsbungerten");
        break;
    }
    case 307241:
    {
        returnValue = F("Thielshof");
        break;
    }
    case 307242:
    {
        returnValue = F("Thielstr.");
        break;
    }
    case 307243:
    {
        returnValue = F("Thiemanns Weg");
        break;
    }
    case 307244:
    {
        returnValue = F("Thiemannshof");
        break;
    }
    case 307245:
    {
        returnValue = F("Thiemannskamp");
        break;
    }
    case 307246:
    {
        returnValue = F("Thiemannstr.");
        break;
    }
    case 307247:
    {
        returnValue = F("Thiemannsweg");
        break;
    }
    case 307248:
    {
        returnValue = F("Thiemannweg");
        break;
    }
    case 307249:
    {
        returnValue = F("Thiemauer");
        break;
    }
    case 307250:
    {
        returnValue = F("Thieme-Brücke");
        break;
    }
    case 307251:
    {
        returnValue = F("Thiemendorfer Eck");
        break;
    }
    case 307252:
    {
        returnValue = F("Thiemendorfer Str.");
        break;
    }
    case 307253:
    {
        returnValue = F("Thiemental");
        break;
    }
    case 307254:
    {
        returnValue = F("Thiemerstr.");
        break;
    }
    case 307255:
    {
        returnValue = F("Thiemestr.");
        break;
    }
    case 307256:
    {
        returnValue = F("Thiemigstr.");
        break;
    }
    case 307257:
    {
        returnValue = F("Thiemitz");
        break;
    }
    case 307258:
    {
        returnValue = F("Thiemitztalstr.");
        break;
    }
    case 307259:
    {
        returnValue = F("Thiemorgen");
        break;
    }
    case 307260:
    {
        returnValue = F("Thiemostr.");
        break;
    }
    case 307261:
    {
        returnValue = F("Thiemplatz");
        break;
    }
    case 307262:
    {
        returnValue = F("Thiemsburger Weg");
        break;
    }
    case 307263:
    {
        returnValue = F("Thiemstr.");
        break;
    }
    case 307264:
    {
        returnValue = F("Thiemühle");
        break;
    }
    case 307265:
    {
        returnValue = F("Thienbüttler Weg");
        break;
    }
    case 307266:
    {
        returnValue = F("Thienemannstr.");
        break;
    }
    case 307267:
    {
        returnValue = F("Thiener Damm");
        break;
    }
    case 307268:
    {
        returnValue = F("Thiener Grenzweg");
        break;
    }
    case 307269:
    {
        returnValue = F("Thiener Str.");
        break;
    }
    case 307270:
    {
        returnValue = F("Thienhausener Str.");
        break;
    }
    case 307271:
    {
        returnValue = F("Thienhausener Weg");
        break;
    }
    case 307272:
    {
        returnValue = F("Thienhauser Weg");
        break;
    }
    case 307273:
    {
        returnValue = F("Thienkamp");
        break;
    }
    case 307274:
    {
        returnValue = F("Thiens Pat");
        break;
    }
    case 307275:
    {
        returnValue = F("Thiensen");
        break;
    }
    case 307276:
    {
        returnValue = F("Thiensener Weg");
        break;
    }
    case 307277:
    {
        returnValue = F("Thiensweg");
        break;
    }
    case 307278:
    {
        returnValue = F("Thieplatz");
        break;
    }
    case 307279:
    {
        returnValue = F("Thier-zum-Berge-Platz");
        break;
    }
    case 307280:
    {
        returnValue = F("Thierach");
        break;
    }
    case 307281:
    {
        returnValue = F("Thieracher Weg");
        break;
    }
    case 307282:
    {
        returnValue = F("Thierbacher Dorfstr.");
        break;
    }
    case 307283:
    {
        returnValue = F("Thierbacher Siedlung");
        break;
    }
    case 307284:
    {
        returnValue = F("Thierbacher Str.");
        break;
    }
    case 307285:
    {
        returnValue = F("Thierbacher Weg");
        break;
    }
    case 307286:
    {
        returnValue = F("Thierbachweg");
        break;
    }
    case 307287:
    {
        returnValue = F("Thierbaumer Marktflügel");
        break;
    }
    case 307288:
    {
        returnValue = F("Thierbaumer Str.");
        break;
    }
    case 307289:
    {
        returnValue = F("Thierbaumer Weg");
        break;
    }
    case 307290:
    {
        returnValue = F("Thierbergstr.");
        break;
    }
    case 307291:
    {
        returnValue = F("Thierbüsch");
        break;
    }
    case 307292:
    {
        returnValue = F("Thierfelder Str.");
        break;
    }
    case 307293:
    {
        returnValue = F("Thierfelderstr.");
        break;
    }
    case 307294:
    {
        returnValue = F("Thiergarten");
        break;
    }
    case 307295:
    {
        returnValue = F("Thiergartener Str.");
        break;
    }
    case 307296:
    {
        returnValue = F("Thiergartenstr.");
        break;
    }
    case 307297:
    {
        returnValue = F("Thiergartner Str.");
        break;
    }
    case 307298:
    {
        returnValue = F("Thiergartner Weg");
        break;
    }
    case 307299:
    {
        returnValue = F("Thiergärtleweg");
        break;
    }
    case 307300:
    {
        returnValue = F("Thiergärtner Str.");
        break;
    }
    case 307301:
    {
        returnValue = F("Thierhamer Str.");
        break;
    }
    case 307302:
    {
        returnValue = F("Thierhauptener Str.");
        break;
    }
    case 307303:
    {
        returnValue = F("Thierhaupter Weg");
        break;
    }
    case 307304:
    {
        returnValue = F("Thieringhauser Str.");
        break;
    }
    case 307305:
    {
        returnValue = F("Thieringstr.");
        break;
    }
    case 307306:
    {
        returnValue = F("Thieriotstr.");
        break;
    }
    case 307307:
    {
        returnValue = F("Thierkenweg");
        break;
    }
    case 307308:
    {
        returnValue = F("Thierkopfweg");
        break;
    }
    case 307309:
    {
        returnValue = F("Thierling");
        break;
    }
    case 307310:
    {
        returnValue = F("Thierlsteiner Str.");
        break;
    }
    case 307311:
    {
        returnValue = F("Thiermairstr.");
        break;
    }
    case 307312:
    {
        returnValue = F("Thierschbrücke");
        break;
    }
    case 307313:
    {
        returnValue = F("Thierschstr.");
        break;
    }
    case 307314:
    {
        returnValue = F("Thierschweg");
        break;
    }
    case 307315:
    {
        returnValue = F("Thierseifener Str.");
        break;
    }
    case 307316:
    {
        returnValue = F("Thiersheimer Str.");
        break;
    }
    case 307317:
    {
        returnValue = F("Thiersteiner Str.");
        break;
    }
    case 307318:
    {
        returnValue = F("Thiersteinstr.");
        break;
    }
    case 307319:
    {
        returnValue = F("Thierstr.");
        break;
    }
    case 307320:
    {
        returnValue = F("Thierviller Str.");
        break;
    }
    case 307321:
    {
        returnValue = F("Thierystr.");
        break;
    }
    case 307322:
    {
        returnValue = F("Thiesberg");
        break;
    }
    case 307323:
    {
        returnValue = F("Thiesbrücke");
        break;
    }
    case 307324:
    {
        returnValue = F("Thieschitzer Str.");
        break;
    }
    case 307325:
    {
        returnValue = F("Thiesenring");
        break;
    }
    case 307326:
    {
        returnValue = F("Thieshof");
        break;
    }
    case 307327:
    {
        returnValue = F("Thieshoper Brink");
        break;
    }
    case 307328:
    {
        returnValue = F("Thieshoper Eichen");
        break;
    }
    case 307329:
    {
        returnValue = F("Thieshoper Grund");
        break;
    }
    case 307330:
    {
        returnValue = F("Thieshoper Hörsten");
        break;
    }
    case 307331:
    {
        returnValue = F("Thieshoper Neuland");
        break;
    }
    case 307332:
    {
        returnValue = F("Thieshoper Post");
        break;
    }
    case 307333:
    {
        returnValue = F("Thieshoper Str.");
        break;
    }
    case 307334:
    {
        returnValue = F("Thieshoper Waadern");
        break;
    }
    case 307335:
    {
        returnValue = F("Thiesmühle");
        break;
    }
    case 307336:
    {
        returnValue = F("Thiespatt");
        break;
    }
    case 307337:
    {
        returnValue = F("Thiessendörper Weg");
        break;
    }
    case 307338:
    {
        returnValue = F("Thiessensweg");
        break;
    }
    case 307339:
    {
        returnValue = F("Thiessower Str.");
        break;
    }
    case 307340:
    {
        returnValue = F("Thiesstr.");
        break;
    }
    case 307341:
    {
        returnValue = F("Thiestr.");
        break;
    }
    case 307342:
    {
        returnValue = F("Thiesweg");
        break;
    }
    case 307343:
    {
        returnValue = F("Thietburgastr.");
        break;
    }
    case 307344:
    {
        returnValue = F("Thietmarplatz");
        break;
    }
    case 307345:
    {
        returnValue = F("Thietmarstr.");
        break;
    }
    case 307346:
    {
        returnValue = F("Thietorstr.");
        break;
    }
    case 307347:
    {
        returnValue = F("Thiewall");
        break;
    }
    case 307348:
    {
        returnValue = F("Thiewallbrücke");
        break;
    }
    case 307349:
    {
        returnValue = F("Thieweg");
        break;
    }
    case 307350:
    {
        returnValue = F("Thiewinkel");
        break;
    }
    case 307351:
    {
        returnValue = F("Thießen");
        break;
    }
    case 307352:
    {
        returnValue = F("Thießener Weg");
        break;
    }
    case 307353:
    {
        returnValue = F("Thießenstr.");
        break;
    }
    case 307354:
    {
        returnValue = F("Thießenweg");
        break;
    }
    case 307355:
    {
        returnValue = F("Thießweg");
        break;
    }
    case 307356:
    {
        returnValue = F("Thilhove");
        break;
    }
    case 307357:
    {
        returnValue = F("Thilingstr.");
        break;
    }
    case 307358:
    {
        returnValue = F("Thillstr.");
        break;
    }
    case 307359:
    {
        returnValue = F("Thilmannweg");
        break;
    }
    case 307360:
    {
        returnValue = F("Thilmanystr.");
        break;
    }
    case 307361:
    {
        returnValue = F("Thilo-von-Trotha-Str.");
        break;
    }
    case 307362:
    {
        returnValue = F("Thiloweg");
        break;
    }
    case 307363:
    {
        returnValue = F("Thimannstr.");
        break;
    }
    case 307364:
    {
        returnValue = F("Thimmendorf");
        break;
    }
    case 307365:
    {
        returnValue = F("Thing");
        break;
    }
    case 307366:
    {
        returnValue = F("Thing-Platz");
        break;
    }
    case 307367:
    {
        returnValue = F("Thingauer Str.");
        break;
    }
    case 307368:
    {
        returnValue = F("Thingaustr.");
        break;
    }
    case 307369:
    {
        returnValue = F("Thinggasse");
        break;
    }
    case 307370:
    {
        returnValue = F("Thinghof");
        break;
    }
    case 307371:
    {
        returnValue = F("Thingoltstr.");
        break;
    }
    case 307372:
    {
        returnValue = F("Thingplatz");
        break;
    }
    case 307373:
    {
        returnValue = F("Thingplatzweg");
        break;
    }
    case 307374:
    {
        returnValue = F("Thingslindestr.");
        break;
    }
    case 307375:
    {
        returnValue = F("Thingstr.");
        break;
    }
    case 307376:
    {
        returnValue = F("Thingstätte");
        break;
    }
    case 307377:
    {
        returnValue = F("Thingstätte Meerbeck");
        break;
    }
    case 307378:
    {
        returnValue = F("Thingwai");
        break;
    }
    case 307379:
    {
        returnValue = F("Thingweg");
        break;
    }
    case 307380:
    {
        returnValue = F("Thiotmannstr.");
        break;
    }
    case 307381:
    {
        returnValue = F("Third Avenue");
        break;
    }
    case 307382:
    {
        returnValue = F("Third Street");
        break;
    }
    case 307383:
    {
        returnValue = F("Thirionstr.");
        break;
    }
    case 307384:
    {
        returnValue = F("Thiron Str.");
        break;
    }
    case 307385:
    {
        returnValue = F("Thirteenth Street");
        break;
    }
    case 307386:
    {
        returnValue = F("Thisaut");
        break;
    }
    case 307387:
    {
        returnValue = F("Thiser-Str.");
        break;
    }
    case 307388:
    {
        returnValue = F("Thivierstr.");
        break;
    }
    case 307389:
    {
        returnValue = F("Thoben Diek");
        break;
    }
    case 307390:
    {
        returnValue = F("Thodenweg");
        break;
    }
    case 307391:
    {
        returnValue = F("Thoiry-Promenade");
        break;
    }
    case 307392:
    {
        returnValue = F("Thol");
        break;
    }
    case 307393:
    {
        returnValue = F("Tholbather Steig");
        break;
    }
    case 307394:
    {
        returnValue = F("Tholbather Weg");
        break;
    }
    case 307395:
    {
        returnValue = F("Tholendorf");
        break;
    }
    case 307396:
    {
        returnValue = F("Tholenswehr");
        break;
    }
    case 307397:
    {
        returnValue = F("Tholenweg");
        break;
    }
    case 307398:
    {
        returnValue = F("Tholerbitze");
        break;
    }
    case 307399:
    {
        returnValue = F("Tholeyer Berg");
        break;
    }
    case 307400:
    {
        returnValue = F("Tholeyer Str.");
        break;
    }
    case 307401:
    {
        returnValue = F("Tholusweg");
        break;
    }
    case 307402:
    {
        returnValue = F("Thoma-Geräumt");
        break;
    }
    case 307403:
    {
        returnValue = F("Thoma-Gässchen");
        break;
    }
    case 307404:
    {
        returnValue = F("Thoma-Rieder-Str.");
        break;
    }
    case 307405:
    {
        returnValue = F("Thomaeplatz");
        break;
    }
    case 307406:
    {
        returnValue = F("Thomaestr.");
        break;
    }
    case 307407:
    {
        returnValue = F("Thomaeweg");
        break;
    }
    case 307408:
    {
        returnValue = F("Thomafluh");
        break;
    }
    case 307409:
    {
        returnValue = F("Thomannstr.");
        break;
    }
    case 307410:
    {
        returnValue = F("Thomanstr.");
        break;
    }
    case 307411:
    {
        returnValue = F("Thomanweg");
        break;
    }
    case 307412:
    {
        returnValue = F("Thomaplatz");
        break;
    }
    case 307413:
    {
        returnValue = F("Thomas Marktanner Weg");
        break;
    }
    case 307414:
    {
        returnValue = F("Thomas Müntzer Str.");
        break;
    }
    case 307415:
    {
        returnValue = F("Thomas Scharnagel-Weg");
        break;
    }
    case 307416:
    {
        returnValue = F("Thomas Schütte Stiftung");
        break;
    }
    case 307417:
    {
        returnValue = F("Thomas-Alva-Edison-Ring");
        break;
    }
    case 307418:
    {
        returnValue = F("Thomas-Baumgartner-Weg");
        break;
    }
    case 307419:
    {
        returnValue = F("Thomas-Bayer-Str.");
        break;
    }
    case 307420:
    {
        returnValue = F("Thomas-Bengel-Str.");
        break;
    }
    case 307421:
    {
        returnValue = F("Thomas-Bernhard-Stiege");
        break;
    }
    case 307422:
    {
        returnValue = F("Thomas-Boldorf-Platz");
        break;
    }
    case 307423:
    {
        returnValue = F("Thomas-Borchwede-Weg");
        break;
    }
    case 307424:
    {
        returnValue = F("Thomas-Breit-Str.");
        break;
    }
    case 307425:
    {
        returnValue = F("Thomas-Buscher-Str.");
        break;
    }
    case 307426:
    {
        returnValue = F("Thomas-Christian-Fink-Weg");
        break;
    }
    case 307427:
    {
        returnValue = F("Thomas-Dachser-Str.");
        break;
    }
    case 307428:
    {
        returnValue = F("Thomas-Dehler-Str.");
        break;
    }
    case 307429:
    {
        returnValue = F("Thomas-Dehler-Weg");
        break;
    }
    case 307430:
    {
        returnValue = F("Thomas-Dieterlen-Str.");
        break;
    }
    case 307431:
    {
        returnValue = F("Thomas-Diewald-Str.");
        break;
    }
    case 307432:
    {
        returnValue = F("Thomas-Dölle-Str.");
        break;
    }
    case 307433:
    {
        returnValue = F("Thomas-Edison-Str.");
        break;
    }
    case 307434:
    {
        returnValue = F("Thomas-Eha-Str.");
        break;
    }
    case 307435:
    {
        returnValue = F("Thomas-Ehemann-Str.");
        break;
    }
    case 307436:
    {
        returnValue = F("Thomas-Esser-Platz");
        break;
    }
    case 307437:
    {
        returnValue = F("Thomas-Eßer-Str.");
        break;
    }
    case 307438:
    {
        returnValue = F("Thomas-Fincke-Str.");
        break;
    }
    case 307439:
    {
        returnValue = F("Thomas-Flad-Weg");
        break;
    }
    case 307440:
    {
        returnValue = F("Thomas-Führer-Str.");
        break;
    }
    case 307441:
    {
        returnValue = F("Thomas-Gerber-Str.");
        break;
    }
    case 307442:
    {
        returnValue = F("Thomas-Glock-Str.");
        break;
    }
    case 307443:
    {
        returnValue = F("Thomas-Goretzky-Weg");
        break;
    }
    case 307444:
    {
        returnValue = F("Thomas-Göllmann-Str.");
        break;
    }
    case 307445:
    {
        returnValue = F("Thomas-Howie-Str.");
        break;
    }
    case 307446:
    {
        returnValue = F("Thomas-Igl-Str.");
        break;
    }
    case 307447:
    {
        returnValue = F("Thomas-Jefferson-Platz");
        break;
    }
    case 307448:
    {
        returnValue = F("Thomas-Jefferson-Str.");
        break;
    }
    case 307449:
    {
        returnValue = F("Thomas-Jensen-Weg");
        break;
    }
    case 307450:
    {
        returnValue = F("Thomas-Jung-Str.");
        break;
    }
    case 307451:
    {
        returnValue = F("Thomas-Kantzow-Str.");
        break;
    }
    case 307452:
    {
        returnValue = F("Thomas-Kirchmair-Str.");
        break;
    }
    case 307453:
    {
        returnValue = F("Thomas-Kirchner-Str.");
        break;
    }
    case 307454:
    {
        returnValue = F("Thomas-Kleinlein-Str.");
        break;
    }
    case 307455:
    {
        returnValue = F("Thomas-Knorr-Str.");
        break;
    }
    case 307456:
    {
        returnValue = F("Thomas-Kolb-Brücke");
        break;
    }
    case 307457:
    {
        returnValue = F("Thomas-Koschat-Str.");
        break;
    }
    case 307458:
    {
        returnValue = F("Thomas-Kuile-Weg");
        break;
    }
    case 307459:
    {
        returnValue = F("Thomas-Lehner-Weg");
        break;
    }
    case 307460:
    {
        returnValue = F("Thomas-Lorck-Weg");
        break;
    }
    case 307461:
    {
        returnValue = F("Thomas-Maier-Weg");
        break;
    }
    case 307462:
    {
        returnValue = F("Thomas-Mallinger-Str.");
        break;
    }
    case 307463:
    {
        returnValue = F("Thomas-Mann-Platz");
        break;
    }
    case 307464:
    {
        returnValue = F("Thomas-Mann-Ring");
        break;
    }
    case 307465:
    {
        returnValue = F("Thomas-Mann-Siedlung");
        break;
    }
    case 307466:
    {
        returnValue = F("Thomas-Mann-Str.");
        break;
    }
    case 307467:
    {
        returnValue = F("Thomas-Mann-Weg");
        break;
    }
    case 307468:
    {
        returnValue = F("Thomas-Mayer-Str.");
        break;
    }
    case 307469:
    {
        returnValue = F("Thomas-Merkelbach-Str.");
        break;
    }
    case 307470:
    {
        returnValue = F("Thomas-Morus-Str.");
        break;
    }
    case 307471:
    {
        returnValue = F("Thomas-Morus-Weg");
        break;
    }
    case 307472:
    {
        returnValue = F("Thomas-Müntzer Str.");
        break;
    }
    case 307473:
    {
        returnValue = F("Thomas-Müntzer-Berg");
        break;
    }
    case 307474:
    {
        returnValue = F("Thomas-Müntzer-Damm");
        break;
    }
    case 307475:
    {
        returnValue = F("Thomas-Müntzer-Gasse");
        break;
    }
    case 307476:
    {
        returnValue = F("Thomas-Müntzer-Hof");
        break;
    }
    case 307477:
    {
        returnValue = F("Thomas-Müntzer-Höhe");
        break;
    }
    case 307478:
    {
        returnValue = F("Thomas-Müntzer-Park");
        break;
    }
    case 307479:
    {
        returnValue = F("Thomas-Müntzer-Plan");
        break;
    }
    case 307480:
    {
        returnValue = F("Thomas-Müntzer-Platz");
        break;
    }
    case 307481:
    {
        returnValue = F("Thomas-Müntzer-Ring");
        break;
    }
    case 307482:
    {
        returnValue = F("Thomas-Müntzer-Siedlung");
        break;
    }
    case 307483:
    {
        returnValue = F("Thomas-Müntzer-Str.");
        break;
    }
    case 307484:
    {
        returnValue = F("Thomas-Müntzer-Weg");
        break;
    }
    case 307485:
    {
        returnValue = F("Thomas-Münzer-Str.");
        break;
    }
    case 307486:
    {
        returnValue = F("Thomas-Nast-Platz");
        break;
    }
    case 307487:
    {
        returnValue = F("Thomas-Nast-Str.");
        break;
    }
    case 307488:
    {
        returnValue = F("Thomas-Nißler-Str.");
        break;
    }
    case 307489:
    {
        returnValue = F("Thomas-Reiter-Str.");
        break;
    }
    case 307490:
    {
        returnValue = F("Thomas-Ried-Str.");
        break;
    }
    case 307491:
    {
        returnValue = F("Thomas-Rockard-Str.");
        break;
    }
    case 307492:
    {
        returnValue = F("Thomas-Rüblein-Str.");
        break;
    }
    case 307493:
    {
        returnValue = F("Thomas-Schaidhauf-Str.");
        break;
    }
    case 307494:
    {
        returnValue = F("Thomas-Scheffler-Str.");
        break;
    }
    case 307495:
    {
        returnValue = F("Thomas-Schreiber-Weg");
        break;
    }
    case 307496:
    {
        returnValue = F("Thomas-Schuster-Str.");
        break;
    }
    case 307497:
    {
        returnValue = F("Thomas-Schwarz-Str.");
        break;
    }
    case 307498:
    {
        returnValue = F("Thomas-Schäfer-Weg");
        break;
    }
    case 307499:
    {
        returnValue = F("Thomas-Selle-Str.");
        break;
    }
    case 307500:
    {
        returnValue = F("Thomas-Specht-Weg");
        break;
    }
    case 307501:
    {
        returnValue = F("Thomas-Steenholdt-Weg");
        break;
    }
    case 307502:
    {
        returnValue = F("Thomas-Stettner-Str.");
        break;
    }
    case 307503:
    {
        returnValue = F("Thomas-Stöber-Str.");
        break;
    }
    case 307504:
    {
        returnValue = F("Thomas-Sättele-Str.");
        break;
    }
    case 307505:
    {
        returnValue = F("Thomas-Theodor-Heine-Str.");
        break;
    }
    case 307506:
    {
        returnValue = F("Thomas-Thorild-Platz");
        break;
    }
    case 307507:
    {
        returnValue = F("Thomas-Trimm-Weg");
        break;
    }
    case 307508:
    {
        returnValue = F("Thomas-Voll-Weg");
        break;
    }
    case 307509:
    {
        returnValue = F("Thomas-Wiest-Weg");
        break;
    }
    case 307510:
    {
        returnValue = F("Thomas-Wimmer-Str.");
        break;
    }
    case 307511:
    {
        returnValue = F("Thomas-Woesthoff-Weg");
        break;
    }
    case 307512:
    {
        returnValue = F("Thomas-Zeller-Str.");
        break;
    }
    case 307513:
    {
        returnValue = F("Thomas-Zweiffel-Str.");
        break;
    }
    case 307514:
    {
        returnValue = F("Thomas-von-Aquin-Str.");
        break;
    }
    case 307515:
    {
        returnValue = F("Thomas-von-Aquin-Weg");
        break;
    }
    case 307516:
    {
        returnValue = F("Thomas-von-Inden-Str.");
        break;
    }
    case 307517:
    {
        returnValue = F("Thomasaue");
        break;
    }
    case 307518:
    {
        returnValue = F("Thomasbach");
        break;
    }
    case 307519:
    {
        returnValue = F("Thomasberg");
        break;
    }
    case 307520:
    {
        returnValue = F("Thomasberger Str.");
        break;
    }
    case 307521:
    {
        returnValue = F("Thomasberger Weg");
        break;
    }
    case 307522:
    {
        returnValue = F("Thomasbodenweg");
        break;
    }
    case 307523:
    {
        returnValue = F("Thomasborn Schneise");
        break;
    }
    case 307524:
    {
        returnValue = F("Thomasborn Weg");
        break;
    }
    case 307525:
    {
        returnValue = F("Thomasbreite");
        break;
    }
    case 307526:
    {
        returnValue = F("Thomasbrunnenstr.");
        break;
    }
    case 307527:
    {
        returnValue = F("Thomasburg");
        break;
    }
    case 307528:
    {
        returnValue = F("Thomasburger Str.");
        break;
    }
    case 307529:
    {
        returnValue = F("Thomasburgstr.");
        break;
    }
    case 307530:
    {
        returnValue = F("Thomasbusch");
        break;
    }
    case 307531:
    {
        returnValue = F("Thomasbühl");
        break;
    }
    case 307532:
    {
        returnValue = F("Thomasbühlstr.");
        break;
    }
    case 307533:
    {
        returnValue = F("Thomasdamm");
        break;
    }
    case 307534:
    {
        returnValue = F("Thomaseck");
        break;
    }
    case 307535:
    {
        returnValue = F("Thomasfeldweg");
        break;
    }
    case 307536:
    {
        returnValue = F("Thomasgasse");
        break;
    }
    case 307537:
    {
        returnValue = F("Thomasgraben");
        break;
    }
    case 307538:
    {
        returnValue = F("Thomasgschieß");
        break;
    }
    case 307539:
    {
        returnValue = F("Thomashansenweg");
        break;
    }
    case 307540:
    {
        returnValue = F("Thomashardter Str.");
        break;
    }
    case 307541:
    {
        returnValue = F("Thomashardter Weg");
        break;
    }
    case 307542:
    {
        returnValue = F("Thomasheck");
        break;
    }
    case 307543:
    {
        returnValue = F("Thomashof");
        break;
    }
    case 307544:
    {
        returnValue = F("Thomashofer Str.");
        break;
    }
    case 307545:
    {
        returnValue = F("Thomashofstr.");
        break;
    }
    case 307546:
    {
        returnValue = F("Thomasholz");
        break;
    }
    case 307547:
    {
        returnValue = F("Thomashölzlein");
        break;
    }
    case 307548:
    {
        returnValue = F("Thomashüttenschneise");
        break;
    }
    case 307549:
    {
        returnValue = F("Thomasiusstr.");
        break;
    }
    case 307550:
    {
        returnValue = F("Thomaskamp");
        break;
    }
    case 307551:
    {
        returnValue = F("Thomaskircher Weg");
        break;
    }
    case 307552:
    {
        returnValue = F("Thomaskirchhof");
        break;
    }
    case 307553:
    {
        returnValue = F("Thomaskirchweg");
        break;
    }
    case 307554:
    {
        returnValue = F("Thomaslochstr.");
        break;
    }
    case 307555:
    {
        returnValue = F("Thomaslohgasse");
        break;
    }
    case 307556:
    {
        returnValue = F("Thomasmühle");
        break;
    }
    case 307557:
    {
        returnValue = F("Thomaspfad");
        break;
    }
    case 307558:
    {
        returnValue = F("Thomasplan");
        break;
    }
    case 307559:
    {
        returnValue = F("Thomasplatz");
        break;
    }
    case 307560:
    {
        returnValue = F("Thomaspädje");
        break;
    }
    case 307561:
    {
        returnValue = F("Thomasreuth");
        break;
    }
    case 307562:
    {
        returnValue = F("Thomasring");
        break;
    }
    case 307563:
    {
        returnValue = F("Thomassenweg");
        break;
    }
    case 307564:
    {
        returnValue = F("Thomasstr.");
        break;
    }
    case 307565:
    {
        returnValue = F("Thomasteichweg");
        break;
    }
    case 307566:
    {
        returnValue = F("Thomastr.");
        break;
    }
    case 307567:
    {
        returnValue = F("Thomaswalde");
        break;
    }
    case 307568:
    {
        returnValue = F("Thomaswalder Str.");
        break;
    }
    case 307569:
    {
        returnValue = F("Thomasweg");
        break;
    }
    case 307570:
    {
        returnValue = F("Thomaswert");
        break;
    }
    case 307571:
    {
        returnValue = F("Thomaswiesen");
        break;
    }
    case 307572:
    {
        returnValue = F("Thomasäcker");
        break;
    }
    case 307573:
    {
        returnValue = F("Thomasäckerweg");
        break;
    }
    case 307574:
    {
        returnValue = F("Thomaweg");
        break;
    }
    case 307575:
    {
        returnValue = F("Thomees Kamp");
        break;
    }
    case 307576:
    {
        returnValue = F("Thomestr.");
        break;
    }
    case 307577:
    {
        returnValue = F("Thommer Str.");
        break;
    }
    case 307578:
    {
        returnValue = F("Thommesweg");
        break;
    }
    case 307579:
    {
        returnValue = F("Thommstr.");
        break;
    }
    case 307580:
    {
        returnValue = F("Thoms Koppel");
        break;
    }
    case 307581:
    {
        returnValue = F("Thomsdorf");
        break;
    }
    case 307582:
    {
        returnValue = F("Thomsenweg");
        break;
    }
    case 307583:
    {
        returnValue = F("Thomsgang");
        break;
    }
    case 307584:
    {
        returnValue = F("Thomshorstweg");
        break;
    }
    case 307585:
    {
        returnValue = F("Thomshörnweg");
        break;
    }
    case 307586:
    {
        returnValue = F("Thomsvieh");
        break;
    }
    case 307587:
    {
        returnValue = F("Thomä-Grandweger-Wallstr.");
        break;
    }
    case 307588:
    {
        returnValue = F("Thomäschäfergasse");
        break;
    }
    case 307589:
    {
        returnValue = F("Thomästr.");
        break;
    }
    case 307590:
    {
        returnValue = F("Thomätor");
        break;
    }
    case 307591:
    {
        returnValue = F("Thoméestr.");
        break;
    }
    case 307592:
    {
        returnValue = F("Thon-Dittmer-Str.");
        break;
    }
    case 307593:
    {
        returnValue = F("Thonauer Str.");
        break;
    }
    case 307594:
    {
        returnValue = F("Thonberghöhe");
        break;
    }
    case 307595:
    {
        returnValue = F("Thondorfer Str.");
        break;
    }
    case 307596:
    {
        returnValue = F("Thondorfer Weg");
        break;
    }
    case 307597:
    {
        returnValue = F("Thonenburg");
        break;
    }
    case 307598:
    {
        returnValue = F("Thoner Weg");
        break;
    }
    case 307599:
    {
        returnValue = F("Thongasse");
        break;
    }
    case 307600:
    {
        returnValue = F("Thongrabenweg");
        break;
    }
    case 307601:
    {
        returnValue = F("Thongräben");
        break;
    }
    case 307602:
    {
        returnValue = F("Thongräbener Weg");
        break;
    }
    case 307603:
    {
        returnValue = F("Thonhausen");
        break;
    }
    case 307604:
    {
        returnValue = F("Thonhausener Str.");
        break;
    }
    case 307605:
    {
        returnValue = F("Thonhausenstr.");
        break;
    }
    case 307606:
    {
        returnValue = F("Thonhauser Str.");
        break;
    }
    case 307607:
    {
        returnValue = F("Thonhof");
        break;
    }
    case 307608:
    {
        returnValue = F("Thonhofer Weg");
        break;
    }
    case 307609:
    {
        returnValue = F("Thoniesstr.");
        break;
    }
    case 307610:
    {
        returnValue = F("Thonieswiesen");
        break;
    }
    case 307611:
    {
        returnValue = F("Thonlöcherweg");
        break;
    }
    case 307612:
    {
        returnValue = F("Thonstr.");
        break;
    }
    case 307613:
    {
        returnValue = F("Thonweg");
        break;
    }
    case 307614:
    {
        returnValue = F("Thor-Straten-Weg");
        break;
    }
    case 307615:
    {
        returnValue = F("Thorackerstr.");
        break;
    }
    case 307616:
    {
        returnValue = F("Thoradestr.");
        break;
    }
    case 307617:
    {
        returnValue = F("Thorasbrook");
        break;
    }
    case 307618:
    {
        returnValue = F("Thorbach");
        break;
    }
    case 307619:
    {
        returnValue = F("Thorbeckestr.");
        break;
    }
    case 307620:
    {
        returnValue = F("Thorbergweg");
        break;
    }
    case 307621:
    {
        returnValue = F("Thorenburger Str.");
        break;
    }
    case 307622:
    {
        returnValue = F("Thorenfeld");
        break;
    }
    case 307623:
    {
        returnValue = F("Thorenkamp");
        break;
    }
    case 307624:
    {
        returnValue = F("Thorenknick");
        break;
    }
    case 307625:
    {
        returnValue = F("Thorenstr.");
        break;
    }
    case 307626:
    {
        returnValue = F("Thorenwiesenweg");
        break;
    }
    case 307627:
    {
        returnValue = F("Thorenäckerweg");
        break;
    }
    case 307628:
    {
        returnValue = F("Thorerstr.");
        break;
    }
    case 307629:
    {
        returnValue = F("Thorezweg");
        break;
    }
    case 307630:
    {
        returnValue = F("Thorfeld");
        break;
    }
    case 307631:
    {
        returnValue = F("Thorfeldsweg");
        break;
    }
    case 307632:
    {
        returnValue = F("Thorgarten");
        break;
    }
    case 307633:
    {
        returnValue = F("Thorgartenweg");
        break;
    }
    case 307634:
    {
        returnValue = F("Thorgasse");
        break;
    }
    case 307635:
    {
        returnValue = F("Thorhaus");
        break;
    }
    case 307636:
    {
        returnValue = F("Thorhof");
        break;
    }
    case 307637:
    {
        returnValue = F("Thorkoppel");
        break;
    }
    case 307638:
    {
        returnValue = F("Thorleitenstr.");
        break;
    }
    case 307639:
    {
        returnValue = F("Thormannplatz");
        break;
    }
    case 307640:
    {
        returnValue = F("Thormattenweg");
        break;
    }
    case 307641:
    {
        returnValue = F("Thormeyerstr.");
        break;
    }
    case 307642:
    {
        returnValue = F("Thormählenpark");
        break;
    }
    case 307643:
    {
        returnValue = F("Thormöhlen");
        break;
    }
    case 307644:
    {
        returnValue = F("Thorn-Prikker-Str.");
        break;
    }
    case 307645:
    {
        returnValue = F("Thornburyplatz");
        break;
    }
    case 307646:
    {
        returnValue = F("Thorner Str.");
        break;
    }
    case 307647:
    {
        returnValue = F("Thorner Weg");
        break;
    }
    case 307648:
    {
        returnValue = F("Thorner Zeile");
        break;
    }
    case 307649:
    {
        returnValue = F("Thorner-Park");
        break;
    }
    case 307650:
    {
        returnValue = F("Thornerstr.");
        break;
    }
    case 307651:
    {
        returnValue = F("Thornsches Feld");
        break;
    }
    case 307652:
    {
        returnValue = F("Thornsgraben");
        break;
    }
    case 307653:
    {
        returnValue = F("Thornstr.");
        break;
    }
    case 307654:
    {
        returnValue = F("Thornweg");
        break;
    }
    case 307655:
    {
        returnValue = F("Thornwiese");
        break;
    }
    case 307656:
    {
        returnValue = F("Thorpeplatz");
        break;
    }
    case 307657:
    {
        returnValue = F("Thorrer Str.");
        break;
    }
    case 307658:
    {
        returnValue = F("Thors Hagen");
        break;
    }
    case 307659:
    {
        returnValue = F("Thorsteinstr.");
        break;
    }
    case 307660:
    {
        returnValue = F("Thorstr.");
        break;
    }
    case 307661:
    {
        returnValue = F("Thorsweg");
        break;
    }
    case 307662:
    {
        returnValue = F("Thorwaldbrücke");
        break;
    }
    case 307663:
    {
        returnValue = F("Thorwaldsenanlage");
        break;
    }
    case 307664:
    {
        returnValue = F("Thorwaldsenpfad");
        break;
    }
    case 307665:
    {
        returnValue = F("Thorwaldsenstr.");
        break;
    }
    case 307666:
    {
        returnValue = F("Thorwaldweg");
        break;
    }
    case 307667:
    {
        returnValue = F("Thorweg");
        break;
    }
    case 307668:
    {
        returnValue = F("Thorwesten-Str.");
        break;
    }
    case 307669:
    {
        returnValue = F("Thoräcker");
        break;
    }
    case 307670:
    {
        returnValue = F("Thossener Str.");
        break;
    }
    case 307671:
    {
        returnValue = F("Thossenweg");
        break;
    }
    case 307672:
    {
        returnValue = F("Thouarsstr.");
        break;
    }
    case 307673:
    {
        returnValue = F("Thouretallee");
        break;
    }
    case 307674:
    {
        returnValue = F("Thran");
        break;
    }
    case 307675:
    {
        returnValue = F("Thranenweier");
        break;
    }
    case 307676:
    {
        returnValue = F("Thranestr.");
        break;
    }
    case 307677:
    {
        returnValue = F("Thrangartenweg");
        break;
    }
    case 307678:
    {
        returnValue = F("Thrasoltstr.");
        break;
    }
    case 307679:
    {
        returnValue = F("Threnaer Allee");
        break;
    }
    case 307680:
    {
        returnValue = F("Threnaer Str.");
        break;
    }
    case 307681:
    {
        returnValue = F("Threnaer Weg");
        break;
    }
    case 307682:
    {
        returnValue = F("Thrombergstr.");
        break;
    }
    case 307683:
    {
        returnValue = F("Thron");
        break;
    }
    case 307684:
    {
        returnValue = F("Throner Weg");
        break;
    }
    case 307685:
    {
        returnValue = F("Thronitzer Str.");
        break;
    }
    case 307686:
    {
        returnValue = F("Thronitzer Weg");
        break;
    }
    case 307687:
    {
        returnValue = F("Thronstr.");
        break;
    }
    case 307688:
    {
        returnValue = F("Thränaer Str.");
        break;
    }
    case 307689:
    {
        returnValue = F("Thränaer Weg");
        break;
    }
    case 307690:
    {
        returnValue = F("Thrändorfweg");
        break;
    }
    case 307691:
    {
        returnValue = F("Thränitz");
        break;
    }
    case 307692:
    {
        returnValue = F("Thränitzer Siedlung");
        break;
    }
    case 307693:
    {
        returnValue = F("Thränitzer Str.");
        break;
    }
    case 307694:
    {
        returnValue = F("Thränstr.");
        break;
    }
    case 307695:
    {
        returnValue = F("Thuarstr.");
        break;
    }
    case 307696:
    {
        returnValue = F("Thuiner Str.");
        break;
    }
    case 307697:
    {
        returnValue = F("Thuir");
        break;
    }
    case 307698:
    {
        returnValue = F("Thuisbrunn");
        break;
    }
    case 307699:
    {
        returnValue = F("Thuisbrunner Str.");
        break;
    }
    case 307700:
    {
        returnValue = F("Thujaschneise");
        break;
    }
    case 307701:
    {
        returnValue = F("Thujastr.");
        break;
    }
    case 307702:
    {
        returnValue = F("Thujaweg");
        break;
    }
    case 307703:
    {
        returnValue = F("Thujenstr.");
        break;
    }
    case 307704:
    {
        returnValue = F("Thujenweg");
        break;
    }
    case 307705:
    {
        returnValue = F("Thulba-Radweg");
        break;
    }
    case 307706:
    {
        returnValue = F("Thulbach");
        break;
    }
    case 307707:
    {
        returnValue = F("Thulbaer Str.");
        break;
    }
    case 307708:
    {
        returnValue = F("Thulbaweg");
        break;
    }
    case 307709:
    {
        returnValue = F("Thulboden");
        break;
    }
    case 307710:
    {
        returnValue = F("Thulenecken");
        break;
    }
    case 307711:
    {
        returnValue = F("Thuler Weg");
        break;
    }
    case 307712:
    {
        returnValue = F("Thulesiusstr.");
        break;
    }
    case 307713:
    {
        returnValue = F("Thullenhausstr.");
        break;
    }
    case 307714:
    {
        returnValue = F("Thumannstr.");
        break;
    }
    case 307715:
    {
        returnValue = F("Thumbachstr.");
        break;
    }
    case 307716:
    {
        returnValue = F("Thumberg");
        break;
    }
    case 307717:
    {
        returnValue = F("Thumbergweg");
        break;
    }
    case 307718:
    {
        returnValue = F("Thumbstr.");
        break;
    }
    case 307719:
    {
        returnValue = F("Thumbweg");
        break;
    }
    case 307720:
    {
        returnValue = F("Thumby");
        break;
    }
    case 307721:
    {
        returnValue = F("Thumby-West");
        break;
    }
    case 307722:
    {
        returnValue = F("Thumenberger Weg");
        break;
    }
    case 307723:
    {
        returnValue = F("Thumer Str.");
        break;
    }
    case 307724:
    {
        returnValue = F("Thumer Weg");
        break;
    }
    case 307725:
    {
        returnValue = F("Thumhartstr.");
        break;
    }
    case 307726:
    {
        returnValue = F("Thumirnichter Platz");
        break;
    }
    case 307727:
    {
        returnValue = F("Thumirnichter Str.");
        break;
    }
    case 307728:
    {
        returnValue = F("Thumkuhlenkopf Weg");
        break;
    }
    case 307729:
    {
        returnValue = F("Thumkuhlental");
        break;
    }
    case 307730:
    {
        returnValue = F("Thummesstr.");
        break;
    }
    case 307731:
    {
        returnValue = F("Thummstr.");
        break;
    }
    case 307732:
    {
        returnValue = F("Thumseestr.");
        break;
    }
    case 307733:
    {
        returnValue = F("Thumstr.");
        break;
    }
    case 307734:
    {
        returnValue = F("Thun'scher Weg");
        break;
    }
    case 307735:
    {
        returnValue = F("Thunacker");
        break;
    }
    case 307736:
    {
        returnValue = F("Thunackern");
        break;
    }
    case 307737:
    {
        returnValue = F("Thunbuschpark");
        break;
    }
    case 307738:
    {
        returnValue = F("Thunbuschstr.");
        break;
    }
    case 307739:
    {
        returnValue = F("Thundorf");
        break;
    }
    case 307740:
    {
        returnValue = F("Thundorfer Mühle");
        break;
    }
    case 307741:
    {
        returnValue = F("Thundorfer Str.");
        break;
    }
    case 307742:
    {
        returnValue = F("Thundorfer Weg");
        break;
    }
    case 307743:
    {
        returnValue = F("Thundorferstr.");
        break;
    }
    case 307744:
    {
        returnValue = F("Thunemeiershof");
        break;
    }
    case 307745:
    {
        returnValue = F("Thunemühle");
        break;
    }
    case 307746:
    {
        returnValue = F("Thuner Hang");
        break;
    }
    case 307747:
    {
        returnValue = F("Thuner Mühle");
        break;
    }
    case 307748:
    {
        returnValue = F("Thuner Ring");
        break;
    }
    case 307749:
    {
        returnValue = F("Thuner Str.");
        break;
    }
    case 307750:
    {
        returnValue = F("Thuner Weg");
        break;
    }
    case 307751:
    {
        returnValue = F("Thunestr.");
        break;
    }
    case 307752:
    {
        returnValue = F("Thunesweg");
        break;
    }
    case 307753:
    {
        returnValue = F("Thunheide");
        break;
    }
    case 307754:
    {
        returnValue = F("Thunpadd");
        break;
    }
    case 307755:
    {
        returnValue = F("Thunstr.");
        break;
    }
    case 307756:
    {
        returnValue = F("Thunumer Str.");
        break;
    }
    case 307757:
    {
        returnValue = F("Thunumer Weg");
        break;
    }
    case 307758:
    {
        returnValue = F("Thunweg");
        break;
    }
    case 307759:
    {
        returnValue = F("Thura Mark");
        break;
    }
    case 307760:
    {
        returnValue = F("Thurasdorf");
        break;
    }
    case 307761:
    {
        returnValue = F("Thurasdorfer Str.");
        break;
    }
    case 307762:
    {
        returnValue = F("Thurasdorfer Weg");
        break;
    }
    case 307763:
    {
        returnValue = F("Thurau");
        break;
    }
    case 307764:
    {
        returnValue = F("Thurauer Brücke");
        break;
    }
    case 307765:
    {
        returnValue = F("Thurauer Weg");
        break;
    }
    case 307766:
    {
        returnValue = F("Thurbruchstr.");
        break;
    }
    case 307767:
    {
        returnValue = F("Thurgauer Platz");
        break;
    }
    case 307768:
    {
        returnValue = F("Thurgauer Str.");
        break;
    }
    case 307769:
    {
        returnValue = F("Thurgauer Str. 10/1 - 10/7");
        break;
    }
    case 307770:
    {
        returnValue = F("Thurgauer Str. 2/1 - 2/5");
        break;
    }
    case 307771:
    {
        returnValue = F("Thurgauer Str. 8/1 - 8/7");
        break;
    }
    case 307772:
    {
        returnValue = F("Thurgauer Weg");
        break;
    }
    case 307773:
    {
        returnValue = F("Thurgauerstr.");
        break;
    }
    case 307774:
    {
        returnValue = F("Thurgaustr.");
        break;
    }
    case 307775:
    {
        returnValue = F("Thurgauweg");
        break;
    }
    case 307776:
    {
        returnValue = F("Thuringiaweg");
        break;
    }
    case 307777:
    {
        returnValue = F("Thurländer Dorfstr.");
        break;
    }
    case 307778:
    {
        returnValue = F("Thurländer Lindenstr.");
        break;
    }
    case 307779:
    {
        returnValue = F("Thurländer Schulstr.");
        break;
    }
    case 307780:
    {
        returnValue = F("Thurländer Str.");
        break;
    }
    case 307781:
    {
        returnValue = F("Thurm Geräumt");
        break;
    }
    case 307782:
    {
        returnValue = F("Thurm-Gestell");
        break;
    }
    case 307783:
    {
        returnValue = F("Thurmayerstr.");
        break;
    }
    case 307784:
    {
        returnValue = F("Thurmayrstr.");
        break;
    }
    case 307785:
    {
        returnValue = F("Thurmer Hauptstr.");
        break;
    }
    case 307786:
    {
        returnValue = F("Thurmer Nebenstr.");
        break;
    }
    case 307787:
    {
        returnValue = F("Thurmer Str.");
        break;
    }
    case 307788:
    {
        returnValue = F("Thurmgut");
        break;
    }
    case 307789:
    {
        returnValue = F("Thurmkamp");
        break;
    }
    case 307790:
    {
        returnValue = F("Thurmsplan");
        break;
    }
    case 307791:
    {
        returnValue = F("Thurn & Taxis Reul");
        break;
    }
    case 307792:
    {
        returnValue = F("Thurn-und-Taxis-Ring");
        break;
    }
    case 307793:
    {
        returnValue = F("Thurn-und-Taxis-Str.");
        break;
    }
    case 307794:
    {
        returnValue = F("Thurn-und-Taxis-Weg");
        break;
    }
    case 307795:
    {
        returnValue = F("Thurnauer Str.");
        break;
    }
    case 307796:
    {
        returnValue = F("Thurndorfer Str.");
        break;
    }
    case 307797:
    {
        returnValue = F("Thurndorfer Weg");
        break;
    }
    case 307798:
    {
        returnValue = F("Thurner Str.");
        break;
    }
    case 307799:
    {
        returnValue = F("Thurner Weg");
        break;
    }
    case 307800:
    {
        returnValue = F("Thurnerstr.");
        break;
    }
    case 307801:
    {
        returnValue = F("Thurnerweg");
        break;
    }
    case 307802:
    {
        returnValue = F("Thurngasse");
        break;
    }
    case 307803:
    {
        returnValue = F("Thurnithistr.");
        break;
    }
    case 307804:
    {
        returnValue = F("Thurnknopfstr.");
        break;
    }
    case 307805:
    {
        returnValue = F("Thurnlohstr.");
        break;
    }
    case 307806:
    {
        returnValue = F("Thurnrinnen");
        break;
    }
    case 307807:
    {
        returnValue = F("Thurnstein");
        break;
    }
    case 307808:
    {
        returnValue = F("Thurnstr.");
        break;
    }
    case 307809:
    {
        returnValue = F("Thurnweg");
        break;
    }
    case 307810:
    {
        returnValue = F("Thuro-Balzer-Weg");
        break;
    }
    case 307811:
    {
        returnValue = F("Thurow");
        break;
    }
    case 307812:
    {
        returnValue = F("Thurower Landstr.");
        break;
    }
    case 307813:
    {
        returnValue = F("Thurower Str.");
        break;
    }
    case 307814:
    {
        returnValue = F("Thurower Weg");
        break;
    }
    case 307815:
    {
        returnValue = F("Thursoer Str.");
        break;
    }
    case 307816:
    {
        returnValue = F("Thurweg");
        break;
    }
    case 307817:
    {
        returnValue = F("Thusenweg");
        break;
    }
    case 307818:
    {
        returnValue = F("Thusmühle");
        break;
    }
    case 307819:
    {
        returnValue = F("Thusneldastr.");
        break;
    }
    case 307820:
    {
        returnValue = F("Thusstr.");
        break;
    }
    case 307821:
    {
        returnValue = F("Thuwieser Str.");
        break;
    }
    case 307822:
    {
        returnValue = F("Thylmannweg");
        break;
    }
    case 307823:
    {
        returnValue = F("Thymianplatz");
        break;
    }
    case 307824:
    {
        returnValue = F("Thymiansberg");
        break;
    }
    case 307825:
    {
        returnValue = F("Thymianstr.");
        break;
    }
    case 307826:
    {
        returnValue = F("Thymianweg");
        break;
    }
    case 307827:
    {
        returnValue = F("Thymstr.");
        break;
    }
    case 307828:
    {
        returnValue = F("Thyra Fuchs");
        break;
    }
    case 307829:
    {
        returnValue = F("Thyrahöhe");
        break;
    }
    case 307830:
    {
        returnValue = F("Thyrastr.");
        break;
    }
    case 307831:
    {
        returnValue = F("Thyratal");
        break;
    }
    case 307832:
    {
        returnValue = F("Thyraweg");
        break;
    }
    case 307833:
    {
        returnValue = F("Thyrnau Str.");
        break;
    }
    case 307834:
    {
        returnValue = F("Thyrower Bahnhofstr.");
        break;
    }
    case 307835:
    {
        returnValue = F("Thyrower Dorfstr.");
        break;
    }
    case 307836:
    {
        returnValue = F("Thyrower Feldstr.");
        break;
    }
    case 307837:
    {
        returnValue = F("Thyrower Pappelweg");
        break;
    }
    case 307838:
    {
        returnValue = F("Thyrower Str.");
        break;
    }
    case 307839:
    {
        returnValue = F("Thyrower Weg");
        break;
    }
    case 307840:
    {
        returnValue = F("Thyrower Wiesengrund");
        break;
    }
    case 307841:
    {
        returnValue = F("Thyrower Wilhelmstr.");
        break;
    }
    case 307842:
    {
        returnValue = F("Thyrsteinweg");
        break;
    }
    case 307843:
    {
        returnValue = F("Thyrsusstr.");
        break;
    }
    case 307844:
    {
        returnValue = F("Thyssenpark");
        break;
    }
    case 307845:
    {
        returnValue = F("Thyssenplatz");
        break;
    }
    case 307846:
    {
        returnValue = F("Thyssenstr.");
        break;
    }
    case 307847:
    {
        returnValue = F("Thywissenhof");
        break;
    }
    case 307848:
    {
        returnValue = F("Thywissenstr.");
        break;
    }
    case 307849:
    {
        returnValue = F("Thälendorf");
        break;
    }
    case 307850:
    {
        returnValue = F("Thälmann-Str.");
        break;
    }
    case 307851:
    {
        returnValue = F("Thälmannbrücke");
        break;
    }
    case 307852:
    {
        returnValue = F("Thälmannpark");
        break;
    }
    case 307853:
    {
        returnValue = F("Thälmannplatz");
        break;
    }
    case 307854:
    {
        returnValue = F("Thälmannring");
        break;
    }
    case 307855:
    {
        returnValue = F("Thälmannsiedlung");
        break;
    }
    case 307856:
    {
        returnValue = F("Thälmannstr.");
        break;
    }
    case 307857:
    {
        returnValue = F("Thärigenstr.");
        break;
    }
    case 307858:
    {
        returnValue = F("Thäterstr.");
        break;
    }
    case 307859:
    {
        returnValue = F("Thödeweg");
        break;
    }
    case 307860:
    {
        returnValue = F("Thölstedter Weg");
        break;
    }
    case 307861:
    {
        returnValue = F("Thöne-Weg");
        break;
    }
    case 307862:
    {
        returnValue = F("Thönebergstr.");
        break;
    }
    case 307863:
    {
        returnValue = F("Thöningser Str.");
        break;
    }
    case 307864:
    {
        returnValue = F("Thönser Str.");
        break;
    }
    case 307865:
    {
        returnValue = F("Thönser Trift");
        break;
    }
    case 307866:
    {
        returnValue = F("Thörener Str.");
        break;
    }
    case 307867:
    {
        returnValue = F("Thöreyer Landstr.");
        break;
    }
    case 307868:
    {
        returnValue = F("Thöreyer Str.");
        break;
    }
    case 307869:
    {
        returnValue = F("Thöreyer Weg");
        break;
    }
    case 307870:
    {
        returnValue = F("Thörigtal");
        break;
    }
    case 307871:
    {
        returnValue = F("Thöringswerder");
        break;
    }
    case 307872:
    {
        returnValue = F("Thörlsweg");
        break;
    }
    case 307873:
    {
        returnValue = F("Thörnicher Brücke");
        break;
    }
    case 307874:
    {
        returnValue = F("Thörnicher Str.");
        break;
    }
    case 307875:
    {
        returnValue = F("Thüdinghäuser Str.");
        break;
    }
    case 307876:
    {
        returnValue = F("Thüerstr.");
        break;
    }
    case 307877:
    {
        returnValue = F("Thülecke");
        break;
    }
    case 307878:
    {
        returnValue = F("Thüler Feld");
        break;
    }
    case 307879:
    {
        returnValue = F("Thüler Kirchstr.");
        break;
    }
    case 307880:
    {
        returnValue = F("Thüler Ring");
        break;
    }
    case 307881:
    {
        returnValue = F("Thüler Str.");
        break;
    }
    case 307882:
    {
        returnValue = F("Thülsfelder Str.");
        break;
    }
    case 307883:
    {
        returnValue = F("Thümmelberg");
        break;
    }
    case 307884:
    {
        returnValue = F("Thümmelstr.");
        break;
    }
    case 307885:
    {
        returnValue = F("Thümmleinsweg");
        break;
    }
    case 307886:
    {
        returnValue = F("Thümmlitz");
        break;
    }
    case 307887:
    {
        returnValue = F("Thümmlitzseeweg");
        break;
    }
    case 307888:
    {
        returnValue = F("Thümmlitzwaldstr.");
        break;
    }
    case 307889:
    {
        returnValue = F("Thünahof");
        break;
    }
    case 307890:
    {
        returnValue = F("Thünahofer Str.");
        break;
    }
    case 307891:
    {
        returnValue = F("Thündamm");
        break;
    }
    case 307892:
    {
        returnValue = F("Thüne");
        break;
    }
    case 307893:
    {
        returnValue = F("Thünefeldstr.");
        break;
    }
    case 307894:
    {
        returnValue = F("Thünen");
        break;
    }
    case 307895:
    {
        returnValue = F("Thünenhof");
        break;
    }
    case 307896:
    {
        returnValue = F("Thünenstr.");
        break;
    }
    case 307897:
    {
        returnValue = F("Thünentreppe");
        break;
    }
    case 307898:
    {
        returnValue = F("Thünenweg");
        break;
    }
    case 307899:
    {
        returnValue = F("Thüner Wiese");
        break;
    }
    case 307900:
    {
        returnValue = F("Thünerweg");
        break;
    }
    case 307901:
    {
        returnValue = F("Thüneweg");
        break;
    }
    case 307902:
    {
        returnValue = F("Thüngbach");
        break;
    }
    case 307903:
    {
        returnValue = F("Thüngbacher Weg");
        break;
    }
    case 307904:
    {
        returnValue = F("Thüngener Str.");
        break;
    }
    case 307905:
    {
        returnValue = F("Thüngenstr.");
        break;
    }
    case 307906:
    {
        returnValue = F("Thüngersheimer Str.");
        break;
    }
    case 307907:
    {
        returnValue = F("Thüngersheimer Weg");
        break;
    }
    case 307908:
    {
        returnValue = F("Thürachstr.");
        break;
    }
    case 307909:
    {
        returnValue = F("Thürenballigstr.");
        break;
    }
    case 307910:
    {
        returnValue = F("Thürenweg");
        break;
    }
    case 307911:
    {
        returnValue = F("Thürer Mühle");
        break;
    }
    case 307912:
    {
        returnValue = F("Thürer Str.");
        break;
    }
    case 307913:
    {
        returnValue = F("Thürer Weg");
        break;
    }
    case 307914:
    {
        returnValue = F("Thürhamer Str.");
        break;
    }
    case 307915:
    {
        returnValue = F("Thürheimstr.");
        break;
    }
    case 307916:
    {
        returnValue = F("Thüringenhäuser Str.");
        break;
    }
    case 307917:
    {
        returnValue = F("Thüringenplatz");
        break;
    }
    case 307918:
    {
        returnValue = F("Thüringenstr.");
        break;
    }
    case 307919:
    {
        returnValue = F("Thüringenweg");
        break;
    }
    case 307920:
    {
        returnValue = F("Thüringer Allee");
        break;
    }
    case 307921:
    {
        returnValue = F("Thüringer Park");
        break;
    }
    case 307922:
    {
        returnValue = F("Thüringer Platz");
        break;
    }
    case 307923:
    {
        returnValue = F("Thüringer Rhönhaus");
        break;
    }
    case 307924:
    {
        returnValue = F("Thüringer Rhönhausstr.");
        break;
    }
    case 307925:
    {
        returnValue = F("Thüringer Ring");
        break;
    }
    case 307926:
    {
        returnValue = F("Thüringer Steig");
        break;
    }
    case 307927:
    {
        returnValue = F("Thüringer Str.");
        break;
    }
    case 307928:
    {
        returnValue = F("Thüringer Städtekette");
        break;
    }
    case 307929:
    {
        returnValue = F("Thüringer Waldblick");
        break;
    }
    case 307930:
    {
        returnValue = F("Thüringer Weg");
        break;
    }
    case 307931:
    {
        returnValue = F("Thüringer-Wald-Str.");
        break;
    }
    case 307932:
    {
        returnValue = F("Thüringerstr.");
        break;
    }
    case 307933:
    {
        returnValue = F("Thüringerweg");
        break;
    }
    case 307934:
    {
        returnValue = F("Thüringsberg");
        break;
    }
    case 307935:
    {
        returnValue = F("Thüritz");
        break;
    }
    case 307936:
    {
        returnValue = F("Thürker Redder");
        break;
    }
    case 307937:
    {
        returnValue = F("Thürmerweg");
        break;
    }
    case 307938:
    {
        returnValue = F("Thürner Weg");
        break;
    }
    case 307939:
    {
        returnValue = F("Thürnthenniger Weg");
        break;
    }
    case 307940:
    {
        returnValue = F("Thürpfad");
        break;
    }
    case 307941:
    {
        returnValue = F("Thüsingstr.");
        break;
    }
    case 307942:
    {
        returnValue = F("Tiarksstr.");
        break;
    }
    case 307943:
    {
        returnValue = F("Tibbenstr.");
        break;
    }
    case 307944:
    {
        returnValue = F("Tiber-Fundel-Weg");
        break;
    }
    case 307945:
    {
        returnValue = F("Tiberberg");
        break;
    }
    case 307946:
    {
        returnValue = F("Tibergasse");
        break;
    }
    case 307947:
    {
        returnValue = F("Tiberiusstr.");
        break;
    }
    case 307948:
    {
        returnValue = F("Tiberiusweg");
        break;
    }
    case 307949:
    {
        returnValue = F("Tiberquelle");
        break;
    }
    case 307950:
    {
        returnValue = F("Tiberstr.");
        break;
    }
    case 307951:
    {
        returnValue = F("Tibistr.");
        break;
    }
    case 307952:
    {
        returnValue = F("Tibor-Dembik-Ring");
        break;
    }
    case 307953:
    {
        returnValue = F("Tibor-von-Szabolcs-Weg");
        break;
    }
    case 307954:
    {
        returnValue = F("Tibujewstr.");
        break;
    }
    case 307955:
    {
        returnValue = F("Tiburtiusstr.");
        break;
    }
    case 307956:
    {
        returnValue = F("Tich");
        break;
    }
    case 307957:
    {
        returnValue = F("Tichauer Str.");
        break;
    }
    case 307958:
    {
        returnValue = F("Tichauer Weg");
        break;
    }
    case 307959:
    {
        returnValue = F("Tichelboeweg");
        break;
    }
    case 307960:
    {
        returnValue = F("Tichelbrink");
        break;
    }
    case 307961:
    {
        returnValue = F("Ticheleipadd");
        break;
    }
    case 307962:
    {
        returnValue = F("Tichelener Weg");
        break;
    }
    case 307963:
    {
        returnValue = F("Tichelhoff");
        break;
    }
    case 307964:
    {
        returnValue = F("Tichelhörn");
        break;
    }
    case 307965:
    {
        returnValue = F("Tichelkamp");
        break;
    }
    case 307966:
    {
        returnValue = F("Tichelkampstr.");
        break;
    }
    case 307967:
    {
        returnValue = F("Tichelpatt");
        break;
    }
    case 307968:
    {
        returnValue = F("Tichelpläcke");
        break;
    }
    case 307969:
    {
        returnValue = F("Tichelstr.");
        break;
    }
    case 307970:
    {
        returnValue = F("Tichelwarfer Str.");
        break;
    }
    case 307971:
    {
        returnValue = F("Tichelweg");
        break;
    }
    case 307972:
    {
        returnValue = F("Tichlers Mühle");
        break;
    }
    case 307973:
    {
        returnValue = F("Tichlerweg");
        break;
    }
    case 307974:
    {
        returnValue = F("Tichstr.");
        break;
    }
    case 307975:
    {
        returnValue = F("Ticinplatz");
        break;
    }
    case 307976:
    {
        returnValue = F("Tickelbusch");
        break;
    }
    case 307977:
    {
        returnValue = F("Tiddischer Drömlingsweg");
        break;
    }
    case 307978:
    {
        returnValue = F("Tiddischer Str.");
        break;
    }
    case 307979:
    {
        returnValue = F("Tiddischer Weg");
        break;
    }
    case 307980:
    {
        returnValue = F("Tide-Winnenga-Weg");
        break;
    }
    case 307981:
    {
        returnValue = F("Tidemanstr.");
        break;
    }
    case 307982:
    {
        returnValue = F("Tidenpadd");
        break;
    }
    case 307983:
    {
        returnValue = F("Tidenweg");
        break;
    }
    case 307984:
    {
        returnValue = F("Tidenwiese");
        break;
    }
    case 307985:
    {
        returnValue = F("Tideweg");
        break;
    }
    case 307986:
    {
        returnValue = F("Tidexer Berg");
        break;
    }
    case 307987:
    {
        returnValue = F("Tidian-Brücke");
        break;
    }
    case 307988:
    {
        returnValue = F("Tidofeld");
        break;
    }
    case 307989:
    {
        returnValue = F("Tidoweg");
        break;
    }
    case 307990:
    {
        returnValue = F("Tie");
        break;
    }
    case 307991:
    {
        returnValue = F("Tie-Esch-Str.");
        break;
    }
    case 307992:
    {
        returnValue = F("Tiebenseer Str.");
        break;
    }
    case 307993:
    {
        returnValue = F("Tieberg");
        break;
    }
    case 307994:
    {
        returnValue = F("Tieberken");
        break;
    }
    case 307995:
    {
        returnValue = F("Tiebrink");
        break;
    }
    case 307996:
    {
        returnValue = F("Tieckower Havelstr.");
        break;
    }
    case 307997:
    {
        returnValue = F("Tieckower Str.");
        break;
    }
    case 307998:
    {
        returnValue = F("Tieckower Weg");
        break;
    }
    case 307999:
    {
        returnValue = F("Tieckstr.");
        break;
    }
    case 308000:
    {
        returnValue = F("Tieckweg");
        break;
    }
    case 308001:
    {
        returnValue = F("Tiedbörg");
        break;
    }
    case 308002:
    {
        returnValue = F("Tiede-Ubben-Str.");
        break;
    }
    case 308003:
    {
        returnValue = F("Tiedemannstr.");
        break;
    }
    case 308004:
    {
        returnValue = F("Tiedemannsweg");
        break;
    }
    case 308005:
    {
        returnValue = F("Tiedenkamp");
        break;
    }
    case 308006:
    {
        returnValue = F("Tiedestr.");
        break;
    }
    case 308007:
    {
        returnValue = F("Tiedexer Str.");
        break;
    }
    case 308008:
    {
        returnValue = F("Tiedexer Tor");
        break;
    }
    case 308009:
    {
        returnValue = F("Tiedgestr.");
        break;
    }
    case 308010:
    {
        returnValue = F("Tiedtshof");
        break;
    }
    case 308011:
    {
        returnValue = F("Tieenbrink");
        break;
    }
    case 308012:
    {
        returnValue = F("Tiefackerweg");
        break;
    }
    case 308013:
    {
        returnValue = F("Tiefaustr.");
        break;
    }
    case 308014:
    {
        returnValue = F("Tiefbachstr.");
        break;
    }
    case 308015:
    {
        returnValue = F("Tiefbauweg");
        break;
    }
    case 308016:
    {
        returnValue = F("Tiefbrunnenweg");
        break;
    }
    case 308017:
    {
        returnValue = F("Tiefbrunnweg");
        break;
    }
    case 308018:
    {
        returnValue = F("Tiefburgweg");
        break;
    }
    case 308019:
    {
        returnValue = F("Tiefe Allee");
        break;
    }
    case 308020:
    {
        returnValue = F("Tiefe Brücke");
        break;
    }
    case 308021:
    {
        returnValue = F("Tiefe Furche");
        break;
    }
    case 308022:
    {
        returnValue = F("Tiefe Gasse");
        break;
    }
    case 308023:
    {
        returnValue = F("Tiefe Gwand");
        break;
    }
    case 308024:
    {
        returnValue = F("Tiefe Klinge");
        break;
    }
    case 308025:
    {
        returnValue = F("Tiefe Riehe");
        break;
    }
    case 308026:
    {
        returnValue = F("Tiefe Steige");
        break;
    }
    case 308027:
    {
        returnValue = F("Tiefe Str.");
        break;
    }
    case 308028:
    {
        returnValue = F("Tiefe Weide");
        break;
    }
    case 308029:
    {
        returnValue = F("Tiefe Wiese");
        break;
    }
    case 308030:
    {
        returnValue = F("Tiefe Wiesen");
        break;
    }
    case 308031:
    {
        returnValue = F("Tiefe Äcker");
        break;
    }
    case 308032:
    {
        returnValue = F("Tiefe-Kuhle-Str.");
        break;
    }
    case 308033:
    {
        returnValue = F("Tiefel");
        break;
    }
    case 308034:
    {
        returnValue = F("Tiefelstr.");
        break;
    }
    case 308035:
    {
        returnValue = F("Tiefen Brink");
        break;
    }
    case 308036:
    {
        returnValue = F("Tiefen Graben");
        break;
    }
    case 308037:
    {
        returnValue = F("Tiefen Ortsweg");
        break;
    }
    case 308038:
    {
        returnValue = F("Tiefenacker");
        break;
    }
    case 308039:
    {
        returnValue = F("Tiefenauer Str.");
        break;
    }
    case 308040:
    {
        returnValue = F("Tiefenauweg");
        break;
    }
    case 308041:
    {
        returnValue = F("Tiefenbach");
        break;
    }
    case 308042:
    {
        returnValue = F("Tiefenbach-Rundweg");
        break;
    }
    case 308043:
    {
        returnValue = F("Tiefenbacher Allee");
        break;
    }
    case 308044:
    {
        returnValue = F("Tiefenbacher Halde");
        break;
    }
    case 308045:
    {
        returnValue = F("Tiefenbacher Str.");
        break;
    }
    case 308046:
    {
        returnValue = F("Tiefenbacher Weg");
        break;
    }
    case 308047:
    {
        returnValue = F("Tiefenbachhangweg");
        break;
    }
    case 308048:
    {
        returnValue = F("Tiefenbachring");
        break;
    }
    case 308049:
    {
        returnValue = F("Tiefenbachstr.");
        break;
    }
    case 308050:
    {
        returnValue = F("Tiefenbachsweg");
        break;
    }
    case 308051:
    {
        returnValue = F("Tiefenbachtal");
        break;
    }
    case 308052:
    {
        returnValue = F("Tiefenbachtalstr.");
        break;
    }
    case 308053:
    {
        returnValue = F("Tiefenbachtalweg");
        break;
    }
    case 308054:
    {
        returnValue = F("Tiefenbachweg");
        break;
    }
    case 308055:
    {
        returnValue = F("Tiefenbachwiesen");
        break;
    }
    case 308056:
    {
        returnValue = F("Tiefenbeck");
        break;
    }
    case 308057:
    {
        returnValue = F("Tiefenbeek");
        break;
    }
    case 308058:
    {
        returnValue = F("Tiefenberg");
        break;
    }
    case 308059:
    {
        returnValue = F("Tiefenborn");
        break;
    }
    case 308060:
    {
        returnValue = F("Tiefenbornweg");
        break;
    }
    case 308061:
    {
        returnValue = F("Tiefenbroicher Str.");
        break;
    }
    case 308062:
    {
        returnValue = F("Tiefenbroicher Weg");
        break;
    }
    case 308063:
    {
        returnValue = F("Tiefenbronner Str.");
        break;
    }
    case 308064:
    {
        returnValue = F("Tiefenbronner Weg");
        break;
    }
    case 308065:
    {
        returnValue = F("Tiefenbronnerstr.");
        break;
    }
    case 308066:
    {
        returnValue = F("Tiefenbruch");
        break;
    }
    case 308067:
    {
        returnValue = F("Tiefenbruchstr.");
        break;
    }
    case 308068:
    {
        returnValue = F("Tiefenbruggerstr.");
        break;
    }
    case 308069:
    {
        returnValue = F("Tiefenbrunn");
        break;
    }
    case 308070:
    {
        returnValue = F("Tiefenbrunnen");
        break;
    }
    case 308071:
    {
        returnValue = F("Tiefenbrunner Str.");
        break;
    }
    case 308072:
    {
        returnValue = F("Tiefendick");
        break;
    }
    case 308073:
    {
        returnValue = F("Tiefendicker Str.");
        break;
    }
    case 308074:
    {
        returnValue = F("Tiefendoblstr.");
        break;
    }
    case 308075:
    {
        returnValue = F("Tiefendorf");
        break;
    }
    case 308076:
    {
        returnValue = F("Tiefendorfer Str.");
        break;
    }
    case 308077:
    {
        returnValue = F("Tiefenfehnskämpe");
        break;
    }
    case 308078:
    {
        returnValue = F("Tiefenfeld");
        break;
    }
    case 308079:
    {
        returnValue = F("Tiefenfeldstr.");
        break;
    }
    case 308080:
    {
        returnValue = F("Tiefenfurter Weg");
        break;
    }
    case 308081:
    {
        returnValue = F("Tiefengasse");
        break;
    }
    case 308082:
    {
        returnValue = F("Tiefengrubener Str.");
        break;
    }
    case 308083:
    {
        returnValue = F("Tiefengrubenweg");
        break;
    }
    case 308084:
    {
        returnValue = F("Tiefengrundweg");
        break;
    }
    case 308085:
    {
        returnValue = F("Tiefengrüner Str.");
        break;
    }
    case 308086:
    {
        returnValue = F("Tiefengärten");
        break;
    }
    case 308087:
    {
        returnValue = F("Tiefengäßle");
        break;
    }
    case 308088:
    {
        returnValue = F("Tiefenhagen");
        break;
    }
    case 308089:
    {
        returnValue = F("Tiefenhof");
        break;
    }
    case 308090:
    {
        returnValue = F("Tiefenhäusern");
        break;
    }
    case 308091:
    {
        returnValue = F("Tiefenhöchstadt");
        break;
    }
    case 308092:
    {
        returnValue = F("Tiefenhüll");
        break;
    }
    case 308093:
    {
        returnValue = F("Tiefenkleiner Str.");
        break;
    }
    case 308094:
    {
        returnValue = F("Tiefenklingensträsschen");
        break;
    }
    case 308095:
    {
        returnValue = F("Tiefenklinger Weg");
        break;
    }
    case 308096:
    {
        returnValue = F("Tiefenmad");
        break;
    }
    case 308097:
    {
        returnValue = F("Tiefenorter Ring");
        break;
    }
    case 308098:
    {
        returnValue = F("Tiefenriede");
        break;
    }
    case 308099:
    {
        returnValue = F("Tiefenrod");
        break;
    }
    case 308100:
    {
        returnValue = F("Tiefenrodrundweg");
        break;
    }
    case 308101:
    {
        returnValue = F("Tiefenrodrundweg Grimmsteig");
        break;
    }
    case 308102:
    {
        returnValue = F("Tiefenseer Chaussee");
        break;
    }
    case 308103:
    {
        returnValue = F("Tiefenseer Siedlung");
        break;
    }
    case 308104:
    {
        returnValue = F("Tiefenseer Weg");
        break;
    }
    case 308105:
    {
        returnValue = F("Tiefenstein");
        break;
    }
    case 308106:
    {
        returnValue = F("Tiefensteiner Str.");
        break;
    }
    case 308107:
    {
        returnValue = F("Tiefensteiner Weg");
        break;
    }
    case 308108:
    {
        returnValue = F("Tiefenstockheimer Weg");
        break;
    }
    case 308109:
    {
        returnValue = F("Tiefenstr.");
        break;
    }
    case 308110:
    {
        returnValue = F("Tiefenstürmig");
        break;
    }
    case 308111:
    {
        returnValue = F("Tiefental");
        break;
    }
    case 308112:
    {
        returnValue = F("Tiefentaler Hof");
        break;
    }
    case 308113:
    {
        returnValue = F("Tiefentaler Str.");
        break;
    }
    case 308114:
    {
        returnValue = F("Tiefentaler Weg");
        break;
    }
    case 308115:
    {
        returnValue = F("Tiefentalstr.");
        break;
    }
    case 308116:
    {
        returnValue = F("Tiefentalweg");
        break;
    }
    case 308117:
    {
        returnValue = F("Tiefenteich");
        break;
    }
    case 308118:
    {
        returnValue = F("Tiefenteichweg");
        break;
    }
    case 308119:
    {
        returnValue = F("Tiefenthal");
        break;
    }
    case 308120:
    {
        returnValue = F("Tiefenthal-Berg");
        break;
    }
    case 308121:
    {
        returnValue = F("Tiefenthaler Str.");
        break;
    }
    case 308122:
    {
        returnValue = F("Tiefenthaler Weg");
        break;
    }
    case 308123:
    {
        returnValue = F("Tiefenthalerstr.");
        break;
    }
    case 308124:
    {
        returnValue = F("Tiefenthalschlucht");
        break;
    }
    case 308125:
    {
        returnValue = F("Tiefenthalstr.");
        break;
    }
    case 308126:
    {
        returnValue = F("Tiefenweg");
        break;
    }
    case 308127:
    {
        returnValue = F("Tiefenwiese");
        break;
    }
    case 308128:
    {
        returnValue = F("Tiefenwiesenweg");
        break;
    }
    case 308129:
    {
        returnValue = F("Tiefenwöhrer Weg");
        break;
    }
    case 308130:
    {
        returnValue = F("Tiefer Brunnen");
        break;
    }
    case 308131:
    {
        returnValue = F("Tiefer Graben");
        break;
    }
    case 308132:
    {
        returnValue = F("Tiefer Grund");
        break;
    }
    case 308133:
    {
        returnValue = F("Tiefer Hahn");
        break;
    }
    case 308134:
    {
        returnValue = F("Tiefer Hellweg");
        break;
    }
    case 308135:
    {
        returnValue = F("Tiefer Hof");
        break;
    }
    case 308136:
    {
        returnValue = F("Tiefer Kamp");
        break;
    }
    case 308137:
    {
        returnValue = F("Tiefer Keller");
        break;
    }
    case 308138:
    {
        returnValue = F("Tiefer Kirchweg");
        break;
    }
    case 308139:
    {
        returnValue = F("Tiefer Moorweg");
        break;
    }
    case 308140:
    {
        returnValue = F("Tiefer Pfad");
        break;
    }
    case 308141:
    {
        returnValue = F("Tiefer Stein");
        break;
    }
    case 308142:
    {
        returnValue = F("Tiefer Weg");
        break;
    }
    case 308143:
    {
        returnValue = F("Tiefer-Hau-Weg");
        break;
    }
    case 308144:
    {
        returnValue = F("Tiefer-Tal-Weg");
        break;
    }
    case 308145:
    {
        returnValue = F("Tieferflußweg");
        break;
    }
    case 308146:
    {
        returnValue = F("Tiefertswinkel");
        break;
    }
    case 308147:
    {
        returnValue = F("Tieferweg");
        break;
    }
    case 308148:
    {
        returnValue = F("Tiefes Moor");
        break;
    }
    case 308149:
    {
        returnValue = F("Tiefes Tal");
        break;
    }
    case 308150:
    {
        returnValue = F("Tiefeseifen");
        break;
    }
    case 308151:
    {
        returnValue = F("Tiefestr.");
        break;
    }
    case 308152:
    {
        returnValue = F("Tiefetal");
        break;
    }
    case 308153:
    {
        returnValue = F("Tieffenthaler Gasse");
        break;
    }
    case 308154:
    {
        returnValue = F("Tieffurtweg");
        break;
    }
    case 308155:
    {
        returnValue = F("Tiefgarage");
        break;
    }
    case 308156:
    {
        returnValue = F("Tiefgasse");
        break;
    }
    case 308157:
    {
        returnValue = F("Tiefgewanne");
        break;
    }
    case 308158:
    {
        returnValue = F("Tiefittigbreite");
        break;
    }
    case 308159:
    {
        returnValue = F("Tiefkai");
        break;
    }
    case 308160:
    {
        returnValue = F("Tiefkarstr.");
        break;
    }
    case 308161:
    {
        returnValue = F("Tiefkellerweg");
        break;
    }
    case 308162:
    {
        returnValue = F("Tiefklingensträßchen");
        break;
    }
    case 308163:
    {
        returnValue = F("Tiefklingenweg");
        break;
    }
    case 308164:
    {
        returnValue = F("Tieflachweg");
        break;
    }
    case 308165:
    {
        returnValue = F("Tieflandstr.");
        break;
    }
    case 308166:
    {
        returnValue = F("Tiefmattenweg");
        break;
    }
    case 308167:
    {
        returnValue = F("Tiefmoos-Allee");
        break;
    }
    case 308168:
    {
        returnValue = F("Tiefmähderweg");
        break;
    }
    case 308169:
    {
        returnValue = F("Tieforte");
        break;
    }
    case 308170:
    {
        returnValue = F("Tiefortenstr.");
        break;
    }
    case 308171:
    {
        returnValue = F("Tiefseestr.");
        break;
    }
    case 308172:
    {
        returnValue = F("Tiefseeweg");
        break;
    }
    case 308173:
    {
        returnValue = F("Tiefskaule");
        break;
    }
    case 308174:
    {
        returnValue = F("Tiefslücke");
        break;
    }
    case 308175:
    {
        returnValue = F("Tiefsohlenweg");
        break;
    }
    case 308176:
    {
        returnValue = F("Tiefstollen");
        break;
    }
    case 308177:
    {
        returnValue = F("Tiefstr.");
        break;
    }
    case 308178:
    {
        returnValue = F("Tiefstr. West");
        break;
    }
    case 308179:
    {
        returnValue = F("Tieftal");
        break;
    }
    case 308180:
    {
        returnValue = F("Tieftalweg");
        break;
    }
    case 308181:
    {
        returnValue = F("Tiefthaler Gartenstr.");
        break;
    }
    case 308182:
    {
        returnValue = F("Tiefthaler Str.");
        break;
    }
    case 308183:
    {
        returnValue = F("Tiefthaler Weg");
        break;
    }
    case 308184:
    {
        returnValue = F("Tiefurter Allee");
        break;
    }
    case 308185:
    {
        returnValue = F("Tiefurter Weg");
        break;
    }
    case 308186:
    {
        returnValue = F("Tiefweg");
        break;
    }
    case 308187:
    {
        returnValue = F("Tiefweiden");
        break;
    }
    case 308188:
    {
        returnValue = F("Tiefwiesenstr.");
        break;
    }
    case 308189:
    {
        returnValue = F("Tiefwiesenweg");
        break;
    }
    case 308190:
    {
        returnValue = F("Tiefäckerstr.");
        break;
    }
    case 308191:
    {
        returnValue = F("Tiegelgasse");
        break;
    }
    case 308192:
    {
        returnValue = F("Tiegelgruben");
        break;
    }
    case 308193:
    {
        returnValue = F("Tiegelstr.");
        break;
    }
    case 308194:
    {
        returnValue = F("Tiegelweg");
        break;
    }
    case 308195:
    {
        returnValue = F("Tiegen");
        break;
    }
    case 308196:
    {
        returnValue = F("Tiegener Busch");
        break;
    }
    case 308197:
    {
        returnValue = F("Tiegener Str.");
        break;
    }
    case 308198:
    {
        returnValue = F("Tiegenhofer Zeile");
        break;
    }
    case 308199:
    {
        returnValue = F("Tiegenhöfer Str.");
        break;
    }
    case 308200:
    {
        returnValue = F("Tiekamp");
        break;
    }
    case 308201:
    {
        returnValue = F("Tiekbrede");
        break;
    }
    case 308202:
    {
        returnValue = F("Tiekemeiers Hof");
        break;
    }
    case 308203:
    {
        returnValue = F("Tiekendamm");
        break;
    }
    case 308204:
    {
        returnValue = F("Tiekensweg");
        break;
    }
    case 308205:
    {
        returnValue = F("Tiele-Winckler-Str.");
        break;
    }
    case 308206:
    {
        returnValue = F("Tielen");
        break;
    }
    case 308207:
    {
        returnValue = F("Tielenweg");
        break;
    }
    case 308208:
    {
        returnValue = F("Tielerfeld");
        break;
    }
    case 308209:
    {
        returnValue = F("Tielger Allee");
        break;
    }
    case 308210:
    {
        returnValue = F("Tielger Str.");
        break;
    }
    case 308211:
    {
        returnValue = F("Tielinge");
        break;
    }
    case 308212:
    {
        returnValue = F("Tielingskamp");
        break;
    }
    case 308213:
    {
        returnValue = F("Tielmanweg");
        break;
    }
    case 308214:
    {
        returnValue = F("Tieloserfeld");
        break;
    }
    case 308215:
    {
        returnValue = F("Tielter Str.");
        break;
    }
    case 308216:
    {
        returnValue = F("Tiemannhof");
        break;
    }
    case 308217:
    {
        returnValue = F("Tiemanns Hof");
        break;
    }
    case 308218:
    {
        returnValue = F("Tiemannshof");
        break;
    }
    case 308219:
    {
        returnValue = F("Tiemannskamp");
        break;
    }
    case 308220:
    {
        returnValue = F("Tiemannstr.");
        break;
    }
    case 308221:
    {
        returnValue = F("Tiemannsweg");
        break;
    }
    case 308222:
    {
        returnValue = F("Tiembacher Str.");
        break;
    }
    case 308223:
    {
        returnValue = F("Tiemorgen");
        break;
    }
    case 308224:
    {
        returnValue = F("Tiemostr.");
        break;
    }
    case 308225:
    {
        returnValue = F("Tienberg");
        break;
    }
    case 308226:
    {
        returnValue = F("Tienenberg");
        break;
    }
    case 308227:
    {
        returnValue = F("Tienenweg");
        break;
    }
    case 308228:
    {
        returnValue = F("Tiengener Grenzweg");
        break;
    }
    case 308229:
    {
        returnValue = F("Tiengener Str.");
        break;
    }
    case 308230:
    {
        returnValue = F("Tiengener Weg");
        break;
    }
    case 308231:
    {
        returnValue = F("Tienhornsweg");
        break;
    }
    case 308232:
    {
        returnValue = F("Tiensande");
        break;
    }
    case 308233:
    {
        returnValue = F("Tieplitzer Str.");
        break;
    }
    case 308234:
    {
        returnValue = F("Tiepolostr.");
        break;
    }
    case 308235:
    {
        returnValue = F("Tier- und Vogelpark Forst");
        break;
    }
    case 308236:
    {
        returnValue = F("Tier-Natur-Erlebnispark Mundenhof");
        break;
    }
    case 308237:
    {
        returnValue = F("Tier-und Kulturpark Bischofswerda");
        break;
    }
    case 308238:
    {
        returnValue = F("Tierbach");
        break;
    }
    case 308239:
    {
        returnValue = F("Tierbachstr.");
        break;
    }
    case 308240:
    {
        returnValue = F("Tierbachweg");
        break;
    }
    case 308241:
    {
        returnValue = F("Tierberg");
        break;
    }
    case 308242:
    {
        returnValue = F("Tierberger Str.");
        break;
    }
    case 308243:
    {
        returnValue = F("Tierbergstr.");
        break;
    }
    case 308244:
    {
        returnValue = F("Tierbergweg");
        break;
    }
    case 308245:
    {
        returnValue = F("Tierbungertstr.");
        break;
    }
    case 308246:
    {
        returnValue = F("Tierfriedhof Flensburg-Wees");
        break;
    }
    case 308247:
    {
        returnValue = F("Tierfriedhof Hastrungsfeld-Burla");
        break;
    }
    case 308248:
    {
        returnValue = F("Tiergarten");
        break;
    }
    case 308249:
    {
        returnValue = F("Tiergarten Allee");
        break;
    }
    case 308250:
    {
        returnValue = F("Tiergarten Sonneberg");
        break;
    }
    case 308251:
    {
        returnValue = F("Tiergarten-Querschneise");
        break;
    }
    case 308252:
    {
        returnValue = F("Tiergarten-Schneise");
        break;
    }
    case 308253:
    {
        returnValue = F("Tiergartenallee");
        break;
    }
    case 308254:
    {
        returnValue = F("Tiergartenmühlgasse");
        break;
    }
    case 308255:
    {
        returnValue = F("Tiergartenpark");
        break;
    }
    case 308256:
    {
        returnValue = F("Tiergartensiedlung");
        break;
    }
    case 308257:
    {
        returnValue = F("Tiergartenspange");
        break;
    }
    case 308258:
    {
        returnValue = F("Tiergartensteige");
        break;
    }
    case 308259:
    {
        returnValue = F("Tiergartenstr.");
        break;
    }
    case 308260:
    {
        returnValue = F("Tiergartentreppe");
        break;
    }
    case 308261:
    {
        returnValue = F("Tiergartenweg");
        break;
    }
    case 308262:
    {
        returnValue = F("Tiergedenkstätte");
        break;
    }
    case 308263:
    {
        returnValue = F("Tiergehege");
        break;
    }
    case 308264:
    {
        returnValue = F("Tiergehege Dornreichenbach");
        break;
    }
    case 308265:
    {
        returnValue = F("Tiergehege Zeulenroda-Triebes");
        break;
    }
    case 308266:
    {
        returnValue = F("Tiergraben");
        break;
    }
    case 308267:
    {
        returnValue = F("Tiergrübleweg");
        break;
    }
    case 308268:
    {
        returnValue = F("Tiergärtelweg");
        break;
    }
    case 308269:
    {
        returnValue = F("Tiergärten");
        break;
    }
    case 308270:
    {
        returnValue = F("Tiergärtle");
        break;
    }
    case 308271:
    {
        returnValue = F("Tiergärtleweg");
        break;
    }
    case 308272:
    {
        returnValue = F("Tiergärtner Weg");
        break;
    }
    case 308273:
    {
        returnValue = F("Tierhaupter Weg");
        break;
    }
    case 308274:
    {
        returnValue = F("Tierheimweg");
        break;
    }
    case 308275:
    {
        returnValue = F("Tieringer Steig Weg");
        break;
    }
    case 308276:
    {
        returnValue = F("Tieringer Str.");
        break;
    }
    case 308277:
    {
        returnValue = F("Tierisch-Nah-Arena");
        break;
    }
    case 308278:
    {
        returnValue = F("Tierlachenweg");
        break;
    }
    case 308279:
    {
        returnValue = F("Tierpark");
        break;
    }
    case 308280:
    {
        returnValue = F("Tierpark Balzfeld");
        break;
    }
    case 308281:
    {
        returnValue = F("Tierpark Gera");
        break;
    }
    case 308282:
    {
        returnValue = F("Tierpark Görlitz");
        break;
    }
    case 308283:
    {
        returnValue = F("Tierpark Kirchheim");
        break;
    }
    case 308284:
    {
        returnValue = F("Tierpark Klingenthal");
        break;
    }
    case 308285:
    {
        returnValue = F("Tierpark Merzig");
        break;
    }
    case 308286:
    {
        returnValue = F("Tierpark Nordhorn");
        break;
    }
    case 308287:
    {
        returnValue = F("Tierpark Röhrensee");
        break;
    }
    case 308288:
    {
        returnValue = F("Tierpark Sommerhausen");
        break;
    }
    case 308289:
    {
        returnValue = F("Tierpark Weißwasser");
        break;
    }
    case 308290:
    {
        returnValue = F("Tierparkpromenade");
        break;
    }
    case 308291:
    {
        returnValue = F("Tierparkstr.");
        break;
    }
    case 308292:
    {
        returnValue = F("Tierparkweg");
        break;
    }
    case 308293:
    {
        returnValue = F("Tierschutzverein");
        break;
    }
    case 308294:
    {
        returnValue = F("Tierser Str.");
        break;
    }
    case 308295:
    {
        returnValue = F("Tierspurenpfad");
        break;
    }
    case 308296:
    {
        returnValue = F("Tierstation Schneckenhaus");
        break;
    }
    case 308297:
    {
        returnValue = F("Tierstein");
        break;
    }
    case 308298:
    {
        returnValue = F("Tiersteinstr.");
        break;
    }
    case 308299:
    {
        returnValue = F("Tiersteinweg");
        break;
    }
    case 308300:
    {
        returnValue = F("Tieräckerweg");
        break;
    }
    case 308301:
    {
        returnValue = F("Tiesholz");
        break;
    }
    case 308302:
    {
        returnValue = F("Tieskamp");
        break;
    }
    case 308303:
    {
        returnValue = F("Tiesloh");
        break;
    }
    case 308304:
    {
        returnValue = F("Tiessenkai");
        break;
    }
    case 308305:
    {
        returnValue = F("Tiessenstr.");
        break;
    }
    case 308306:
    {
        returnValue = F("Tieste-50-Weg");
        break;
    }
    case 308307:
    {
        returnValue = F("Tiester Weg");
        break;
    }
    case 308308:
    {
        returnValue = F("Tiestestr.");
        break;
    }
    case 308309:
    {
        returnValue = F("Tiestr.");
        break;
    }
    case 308310:
    {
        returnValue = F("Tietelser Str.");
        break;
    }
    case 308311:
    {
        returnValue = F("Tietelser Weg");
        break;
    }
    case 308312:
    {
        returnValue = F("Tietjenstr.");
        break;
    }
    case 308313:
    {
        returnValue = F("Tietjensweg");
        break;
    }
    case 308314:
    {
        returnValue = F("Tietlinger Lönsweg");
        break;
    }
    case 308315:
    {
        returnValue = F("Tietlinger Weg");
        break;
    }
    case 308316:
    {
        returnValue = F("Tietmecker Weg");
        break;
    }
    case 308317:
    {
        returnValue = F("Tietmeyerstr.");
        break;
    }
    case 308318:
    {
        returnValue = F("Tietor");
        break;
    }
    case 308319:
    {
        returnValue = F("Tietwete");
        break;
    }
    case 308320:
    {
        returnValue = F("Tietzelweg");
        break;
    }
    case 308321:
    {
        returnValue = F("Tietzower Str.");
        break;
    }
    case 308322:
    {
        returnValue = F("Tietzower Weg");
        break;
    }
    case 308323:
    {
        returnValue = F("Tietzstr.");
        break;
    }
    case 308324:
    {
        returnValue = F("Tieweg");
        break;
    }
    case 308325:
    {
        returnValue = F("Tifensulzweg");
        break;
    }
    case 308326:
    {
        returnValue = F("Tiffi-Weg");
        break;
    }
    case 308327:
    {
        returnValue = F("Tifliser Platz");
        break;
    }
    case 308328:
    {
        returnValue = F("Tiftlingeröder Str.");
        break;
    }
    case 308329:
    {
        returnValue = F("Tigaustr.");
        break;
    }
    case 308330:
    {
        returnValue = F("Tigenstr.");
        break;
    }
    case 308331:
    {
        returnValue = F("Tiger");
        break;
    }
    case 308332:
    {
        returnValue = F("Tigerfeldstr.");
        break;
    }
    case 308333:
    {
        returnValue = F("Tigg");
        break;
    }
    case 308334:
    {
        returnValue = F("Tigge");
        break;
    }
    case 308335:
    {
        returnValue = F("Tiggelkamp");
        break;
    }
    case 308336:
    {
        returnValue = F("Tiggelsee");
        break;
    }
    case 308337:
    {
        returnValue = F("Tiggelstiege");
        break;
    }
    case 308338:
    {
        returnValue = F("Tiggelstr.");
        break;
    }
    case 308339:
    {
        returnValue = F("Tiggelweg");
        break;
    }
    case 308340:
    {
        returnValue = F("Tiggelwerkweg");
        break;
    }
    case 308341:
    {
        returnValue = F("Tiggeplass");
        break;
    }
    case 308342:
    {
        returnValue = F("Tigges Wiese");
        break;
    }
    case 308343:
    {
        returnValue = F("Tiggeskamp");
        break;
    }
    case 308344:
    {
        returnValue = F("Tiggesloh");
        break;
    }
    case 308345:
    {
        returnValue = F("Tiggestr.");
        break;
    }
    case 308346:
    {
        returnValue = F("Tiggesweg");
        break;
    }
    case 308347:
    {
        returnValue = F("Tiggeweg");
        break;
    }
    case 308348:
    {
        returnValue = F("Tiggstr.");
        break;
    }
    case 308349:
    {
        returnValue = F("Tiglitzer Weg");
        break;
    }
    case 308350:
    {
        returnValue = F("Tiksvennstr.");
        break;
    }
    case 308351:
    {
        returnValue = F("Tilaxweg");
        break;
    }
    case 308352:
    {
        returnValue = F("Tilbeck");
        break;
    }
    case 308353:
    {
        returnValue = F("Tilburger Str.");
        break;
    }
    case 308354:
    {
        returnValue = F("Tilde-Klose-Str.");
        break;
    }
    case 308355:
    {
        returnValue = F("Tilde-Klose-Weg");
        break;
    }
    case 308356:
    {
        returnValue = F("Tilder Weg");
        break;
    }
    case 308357:
    {
        returnValue = F("Tile-Hagemann-Str.");
        break;
    }
    case 308358:
    {
        returnValue = F("Tileman-Wiarda-Str.");
        break;
    }
    case 308359:
    {
        returnValue = F("Tilemann-Schnabel-Str.");
        break;
    }
    case 308360:
    {
        returnValue = F("Tilemannstr.");
        break;
    }
    case 308361:
    {
        returnValue = F("Tilesiusstr.");
        break;
    }
    case 308362:
    {
        returnValue = F("Tilgenkampstr.");
        break;
    }
    case 308363:
    {
        returnValue = F("Tilgenkrug");
        break;
    }
    case 308364:
    {
        returnValue = F("Tilgenstr.");
        break;
    }
    case 308365:
    {
        returnValue = F("Tilgenweg");
        break;
    }
    case 308366:
    {
        returnValue = F("Tilgesbrunnenstr.");
        break;
    }
    case 308367:
    {
        returnValue = F("Tilgesbrunner Weg");
        break;
    }
    case 308368:
    {
        returnValue = F("Tilgshausenstr.");
        break;
    }
    case 308369:
    {
        returnValue = F("Tilgshäuslesweg");
        break;
    }
    case 308370:
    {
        returnValue = F("Tiliastr.");
        break;
    }
    case 308371:
    {
        returnValue = F("Tilingstr.");
        break;
    }
    case 308372:
    {
        returnValue = F("Tilkenbreite");
        break;
    }
    case 308373:
    {
        returnValue = F("Tilkentrift");
        break;
    }
    case 308374:
    {
        returnValue = F("Tilkenweg");
        break;
    }
    case 308375:
    {
        returnValue = F("Tilkerbrink");
        break;
    }
    case 308376:
    {
        returnValue = F("Till-Eulenspiegel-Ring");
        break;
    }
    case 308377:
    {
        returnValue = F("Till-Eulenspiegel-Weg");
        break;
    }
    case 308378:
    {
        returnValue = F("Tilla-Matysiak-Str.");
        break;
    }
    case 308379:
    {
        returnValue = F("Tilla-von-Praun-Str.");
        break;
    }
    case 308380:
    {
        returnValue = F("Tilledaer Stieg");
        break;
    }
    case 308381:
    {
        returnValue = F("Tilledaer Str.");
        break;
    }
    case 308382:
    {
        returnValue = F("Tilledaer Weg");
        break;
    }
    case 308383:
    {
        returnValue = F("Tillenberger Weg");
        break;
    }
    case 308384:
    {
        returnValue = F("Tillenborn-Str.");
        break;
    }
    case 308385:
    {
        returnValue = F("Tillenstr.");
        break;
    }
    case 308386:
    {
        returnValue = F("Tiller Str.");
        break;
    }
    case 308387:
    {
        returnValue = F("Tiller Weg");
        break;
    }
    case 308388:
    {
        returnValue = F("Tillerfeld");
        break;
    }
    case 308389:
    {
        returnValue = F("Tillerweg");
        break;
    }
    case 308390:
    {
        returnValue = F("Tillessenstr.");
        break;
    }
    case 308391:
    {
        returnValue = F("Tillestr.");
        break;
    }
    case 308392:
    {
        returnValue = F("Tilleusekenweg");
        break;
    }
    case 308393:
    {
        returnValue = F("Tilleweg");
        break;
    }
    case 308394:
    {
        returnValue = F("Tillinghausen");
        break;
    }
    case 308395:
    {
        returnValue = F("Tillkampsweg");
        break;
    }
    case 308396:
    {
        returnValue = F("Tillkausener Str.");
        break;
    }
    case 308397:
    {
        returnValue = F("Tillkeweg");
        break;
    }
    case 308398:
    {
        returnValue = F("Tillmann-Gottschalk-Str.");
        break;
    }
    case 308399:
    {
        returnValue = F("Tillmann-Siebel-Str.");
        break;
    }
    case 308400:
    {
        returnValue = F("Tillmann-Stolz-Str.");
        break;
    }
    case 308401:
    {
        returnValue = F("Tillmanns Gäßchen");
        break;
    }
    case 308402:
    {
        returnValue = F("Tillmanns Hof");
        break;
    }
    case 308403:
    {
        returnValue = F("Tillmanns Kamp");
        break;
    }
    case 308404:
    {
        returnValue = F("Tillmannsdorfer Str.");
        break;
    }
    case 308405:
    {
        returnValue = F("Tillmannshecke");
        break;
    }
    case 308406:
    {
        returnValue = F("Tillmannshof");
        break;
    }
    case 308407:
    {
        returnValue = F("Tillmannsteege");
        break;
    }
    case 308408:
    {
        returnValue = F("Tillmannstr.");
        break;
    }
    case 308409:
    {
        returnValue = F("Tillmannsweg");
        break;
    }
    case 308410:
    {
        returnValue = F("Tillmannswiese");
        break;
    }
    case 308411:
    {
        returnValue = F("Tillmannweg");
        break;
    }
    case 308412:
    {
        returnValue = F("Tillmans Park");
        break;
    }
    case 308413:
    {
        returnValue = F("Tillmatten");
        break;
    }
    case 308414:
    {
        returnValue = F("Tillostr.");
        break;
    }
    case 308415:
    {
        returnValue = F("Tillpetersrech");
        break;
    }
    case 308416:
    {
        returnValue = F("Tillrundweg");
        break;
    }
    case 308417:
    {
        returnValue = F("Tillskamp");
        break;
    }
    case 308418:
    {
        returnValue = F("Tillvenne");
        break;
    }
    case 308419:
    {
        returnValue = F("Tillweg");
        break;
    }
    case 308420:
    {
        returnValue = F("Tilly-Behringer-Str.");
        break;
    }
    case 308421:
    {
        returnValue = F("Tilly-Fleischer-Weg");
        break;
    }
    case 308422:
    {
        returnValue = F("Tilly-Schanzen-Str.");
        break;
    }
    case 308423:
    {
        returnValue = F("Tillyberg");
        break;
    }
    case 308424:
    {
        returnValue = F("Tillygasse");
        break;
    }
    case 308425:
    {
        returnValue = F("Tillypark");
        break;
    }
    case 308426:
    {
        returnValue = F("Tillyplatz");
        break;
    }
    case 308427:
    {
        returnValue = F("Tillyschanz");
        break;
    }
    case 308428:
    {
        returnValue = F("Tillyschanze");
        break;
    }
    case 308429:
    {
        returnValue = F("Tillyschanzenweg");
        break;
    }
    case 308430:
    {
        returnValue = F("Tillyschanzweg");
        break;
    }
    case 308431:
    {
        returnValue = F("Tillysteinweg");
        break;
    }
    case 308432:
    {
        returnValue = F("Tillystr.");
        break;
    }
    case 308433:
    {
        returnValue = F("Tillyweg");
        break;
    }
    case 308434:
    {
        returnValue = F("Tillywiese");
        break;
    }
    case 308435:
    {
        returnValue = F("Tilman-Riemenschneider-Str.");
        break;
    }
    case 308436:
    {
        returnValue = F("Tilman-Riemenschneider-Weg");
        break;
    }
    case 308437:
    {
        returnValue = F("Tilmann-Joel-Park");
        break;
    }
    case 308438:
    {
        returnValue = F("Tilmann-Riemenschneider-Platz");
        break;
    }
    case 308439:
    {
        returnValue = F("Tilmann-Riemenschneider-Str.");
        break;
    }
    case 308440:
    {
        returnValue = F("Tilmann-Riemenschneider-Weg");
        break;
    }
    case 308441:
    {
        returnValue = F("Tilmann-Willems-Str.");
        break;
    }
    case 308442:
    {
        returnValue = F("Tilmannstr.");
        break;
    }
    case 308443:
    {
        returnValue = F("Tilsiter Platz");
        break;
    }
    case 308444:
    {
        returnValue = F("Tilsiter Str.");
        break;
    }
    case 308445:
    {
        returnValue = F("Tilsiter Ufer");
        break;
    }
    case 308446:
    {
        returnValue = F("Tilsiter Weg");
        break;
    }
    case 308447:
    {
        returnValue = F("Tilsiterstr.");
        break;
    }
    case 308448:
    {
        returnValue = F("Tilsiterweg");
        break;
    }
    case 308449:
    {
        returnValue = F("Tilsitstr.");
        break;
    }
    case 308450:
    {
        returnValue = F("Tilsitweg");
        break;
    }
    case 308451:
    {
        returnValue = F("Tilsmaas");
        break;
    }
    case 308452:
    {
        returnValue = F("Tilzower Dorfstr.");
        break;
    }
    case 308453:
    {
        returnValue = F("Tilzower Ring");
        break;
    }
    case 308454:
    {
        returnValue = F("Tilzower Weg");
        break;
    }
    case 308455:
    {
        returnValue = F("Timbergstr.");
        break;
    }
    case 308456:
    {
        returnValue = F("Timelostr.");
        break;
    }
    case 308457:
    {
        returnValue = F("Timesstr.");
        break;
    }
    case 308458:
    {
        returnValue = F("Timkampenweg");
        break;
    }
    case 308459:
    {
        returnValue = F("Timkenweg");
        break;
    }
    case 308460:
    {
        returnValue = F("Timkes Weg");
        break;
    }
    case 308461:
    {
        returnValue = F("Timkestr.");
        break;
    }
    case 308462:
    {
        returnValue = F("Timlerweg");
        break;
    }
    case 308463:
    {
        returnValue = F("Timm Horn");
        break;
    }
    case 308464:
    {
        returnValue = F("Timm-Kruse-Weg");
        break;
    }
    case 308465:
    {
        returnValue = F("Timm-Kröger-Schule");
        break;
    }
    case 308466:
    {
        returnValue = F("Timm-Kröger-Str.");
        break;
    }
    case 308467:
    {
        returnValue = F("Timm-Kröger-Weg");
        break;
    }
    case 308468:
    {
        returnValue = F("Timm-Schott-Weg");
        break;
    }
    case 308469:
    {
        returnValue = F("Timm-Willem-Weg");
        break;
    }
    case 308470:
    {
        returnValue = F("Timmasper Landstr.");
        break;
    }
    case 308471:
    {
        returnValue = F("Timmasper Weg");
        break;
    }
    case 308472:
    {
        returnValue = F("Timmbrook");
        break;
    }
    case 308473:
    {
        returnValue = F("Timmeitzer Weg");
        break;
    }
    case 308474:
    {
        returnValue = F("Timmeler Hauptweg");
        break;
    }
    case 308475:
    {
        returnValue = F("Timmeler Kampsweg");
        break;
    }
    case 308476:
    {
        returnValue = F("Timmeler Str.");
        break;
    }
    case 308477:
    {
        returnValue = F("Timmelter Berg");
        break;
    }
    case 308478:
    {
        returnValue = F("Timmen Weg");
        break;
    }
    case 308479:
    {
        returnValue = F("Timmendorf");
        break;
    }
    case 308480:
    {
        returnValue = F("Timmendorfer Platz");
        break;
    }
    case 308481:
    {
        returnValue = F("Timmendorfer Str.");
        break;
    }
    case 308482:
    {
        returnValue = F("Timmendorfer Weg");
        break;
    }
    case 308483:
    {
        returnValue = F("Timmendorffstr.");
        break;
    }
    case 308484:
    {
        returnValue = F("Timmenhofstr.");
        break;
    }
    case 308485:
    {
        returnValue = F("Timmenröder Str.");
        break;
    }
    case 308486:
    {
        returnValue = F("Timmenweg");
        break;
    }
    case 308487:
    {
        returnValue = F("Timmerbarg");
        break;
    }
    case 308488:
    {
        returnValue = F("Timmerberg");
        break;
    }
    case 308489:
    {
        returnValue = F("Timmerbergstr.");
        break;
    }
    case 308490:
    {
        returnValue = F("Timmerbrinksweg");
        break;
    }
    case 308491:
    {
        returnValue = F("Timmerbruch");
        break;
    }
    case 308492:
    {
        returnValue = F("Timmerhausacker");
        break;
    }
    case 308493:
    {
        returnValue = F("Timmerhorner Str.");
        break;
    }
    case 308494:
    {
        returnValue = F("Timmerhorner Teiche");
        break;
    }
    case 308495:
    {
        returnValue = F("Timmerhornskamp");
        break;
    }
    case 308496:
    {
        returnValue = F("Timmerhorst");
        break;
    }
    case 308497:
    {
        returnValue = F("Timmerkamp");
        break;
    }
    case 308498:
    {
        returnValue = F("Timmerlade");
        break;
    }
    case 308499:
    {
        returnValue = F("Timmerlaher Str.");
        break;
    }
    case 308500:
    {
        returnValue = F("Timmerlahstr.");
        break;
    }
    case 308501:
    {
        returnValue = F("Timmerloh");
        break;
    }
    case 308502:
    {
        returnValue = F("Timmerloher Weg");
        break;
    }
    case 308503:
    {
        returnValue = F("Timmermannallee");
        break;
    }
    case 308504:
    {
        returnValue = F("Timmermanngang");
        break;
    }
    case 308505:
    {
        returnValue = F("Timmermanns Gaderum");
        break;
    }
    case 308506:
    {
        returnValue = F("Timmermannsstrat");
        break;
    }
    case 308507:
    {
        returnValue = F("Timmermannstr.");
        break;
    }
    case 308508:
    {
        returnValue = F("Timmermannsweg");
        break;
    }
    case 308509:
    {
        returnValue = F("Timmermansstr.");
        break;
    }
    case 308510:
    {
        returnValue = F("Timmermanufer");
        break;
    }
    case 308511:
    {
        returnValue = F("Timmermeß");
        break;
    }
    case 308512:
    {
        returnValue = F("Timmerplatz");
        break;
    }
    case 308513:
    {
        returnValue = F("Timmers Garten");
        break;
    }
    case 308514:
    {
        returnValue = F("Timmerschlade");
        break;
    }
    case 308515:
    {
        returnValue = F("Timmersfeld");
        break;
    }
    case 308516:
    {
        returnValue = F("Timmersholt");
        break;
    }
    case 308517:
    {
        returnValue = F("Timmerskrögredder");
        break;
    }
    case 308518:
    {
        returnValue = F("Timmerweg");
        break;
    }
    case 308519:
    {
        returnValue = F("Timmhorstkamp");
        break;
    }
    case 308520:
    {
        returnValue = F("Timmichgasse");
        break;
    }
    case 308521:
    {
        returnValue = F("Timms Hoff");
        break;
    }
    case 308522:
    {
        returnValue = F("Timmsbrook");
        break;
    }
    case 308523:
    {
        returnValue = F("Timmstr.");
        break;
    }
    case 308524:
    {
        returnValue = F("Timo-Konietzka-Weg");
        break;
    }
    case 308525:
    {
        returnValue = F("Timoburgstr.");
        break;
    }
    case 308526:
    {
        returnValue = F("Timocom Platz");
        break;
    }
    case 308527:
    {
        returnValue = F("Timor-Hirsche");
        break;
    }
    case 308528:
    {
        returnValue = F("Timostr.");
        break;
    }
    case 308529:
    {
        returnValue = F("Timotheusplatz");
        break;
    }
    case 308530:
    {
        returnValue = F("Timp");
        break;
    }
    case 308531:
    {
        returnValue = F("Timpbergstr.");
        break;
    }
    case 308532:
    {
        returnValue = F("Timpen");
        break;
    }
    case 308533:
    {
        returnValue = F("Timpen Bahn");
        break;
    }
    case 308534:
    {
        returnValue = F("Timpen Feld");
        break;
    }
    case 308535:
    {
        returnValue = F("Timpen Siedlung");
        break;
    }
    case 308536:
    {
        returnValue = F("Timpenbarg");
        break;
    }
    case 308537:
    {
        returnValue = F("Timpenberg");
        break;
    }
    case 308538:
    {
        returnValue = F("Timpende");
        break;
    }
    case 308539:
    {
        returnValue = F("Timpender Weg");
        break;
    }
    case 308540:
    {
        returnValue = F("Timpenkamp");
        break;
    }
    case 308541:
    {
        returnValue = F("Timpenstr.");
        break;
    }
    case 308542:
    {
        returnValue = F("Timpenweg");
        break;
    }
    case 308543:
    {
        returnValue = F("Timpenweide");
        break;
    }
    case 308544:
    {
        returnValue = F("Timpertsweg");
        break;
    }
    case 308545:
    {
        returnValue = F("Timpertweg");
        break;
    }
    case 308546:
    {
        returnValue = F("Timphorst");
        break;
    }
    case 308547:
    {
        returnValue = F("Timphorstweg");
        break;
    }
    case 308548:
    {
        returnValue = F("Timpkenweg");
        break;
    }
    case 308549:
    {
        returnValue = F("Timplerweg");
        break;
    }
    case 308550:
    {
        returnValue = F("Timpweg");
        break;
    }
    case 308551:
    {
        returnValue = F("Timrade");
        break;
    }
    case 308552:
    {
        returnValue = F("Timsmannweg");
        break;
    }
    case 308553:
    {
        returnValue = F("Tina-Blau-Str.");
        break;
    }
    case 308554:
    {
        returnValue = F("Tina-Modotti-Str.");
        break;
    }
    case 308555:
    {
        returnValue = F("Tina-Will-Str.");
        break;
    }
    case 308556:
    {
        returnValue = F("Tina-von-Brühl-Str.");
        break;
    }
    case 308557:
    {
        returnValue = F("Tindelner Weg");
        break;
    }
    case 308558:
    {
        returnValue = F("Tinesch");
        break;
    }
    case 308559:
    {
        returnValue = F("Tinge");
        break;
    }
    case 308560:
    {
        returnValue = F("Tingengarten");
        break;
    }
    case 308561:
    {
        returnValue = F("Tinghausen");
        break;
    }
    case 308562:
    {
        returnValue = F("Tingleffer Str.");
        break;
    }
    case 308563:
    {
        returnValue = F("Tingleffstr.");
        break;
    }
    case 308564:
    {
        returnValue = F("Tingleffweg");
        break;
    }
    case 308565:
    {
        returnValue = F("Tiniburg");
        break;
    }
    case 308566:
    {
        returnValue = F("Tinkerweg");
        break;
    }
    case 308567:
    {
        returnValue = F("Tinkhöfe");
        break;
    }
    case 308568:
    {
        returnValue = F("Tinkmühlenweg");
        break;
    }
    case 308569:
    {
        returnValue = F("Tinkofenstr.");
        break;
    }
    case 308570:
    {
        returnValue = F("Tinkrathstr.");
        break;
    }
    case 308571:
    {
        returnValue = F("Tinley-Park-Platz");
        break;
    }
    case 308572:
    {
        returnValue = F("Tinnagel");
        break;
    }
    case 308573:
    {
        returnValue = F("Tinnenbrook");
        break;
    }
    case 308574:
    {
        returnValue = F("Tinnengasse");
        break;
    }
    case 308575:
    {
        returnValue = F("Tinnenstr.");
        break;
    }
    case 308576:
    {
        returnValue = F("Tinnenweg");
        break;
    }
    case 308577:
    {
        returnValue = F("Tinners Blöken");
        break;
    }
    case 308578:
    {
        returnValue = F("Tinnertinger Str.");
        break;
    }
    case 308579:
    {
        returnValue = F("Tinnholz");
        break;
    }
    case 308580:
    {
        returnValue = F("Tinnhorn");
        break;
    }
    case 308581:
    {
        returnValue = F("Tinnhöfel");
        break;
    }
    case 308582:
    {
        returnValue = F("Tinning");
        break;
    }
    case 308583:
    {
        returnValue = F("Tinninger Str.");
        break;
    }
    case 308584:
    {
        returnValue = F("Tinninger-See-Str.");
        break;
    }
    case 308585:
    {
        returnValue = F("Tinningstedter Str.");
        break;
    }
    case 308586:
    {
        returnValue = F("Tinnstücken");
        break;
    }
    case 308587:
    {
        returnValue = F("Tinnstückenweg");
        break;
    }
    case 308588:
    {
        returnValue = F("Tinnumer Deichweg");
        break;
    }
    case 308589:
    {
        returnValue = F("Tinnumer Str.");
        break;
    }
    case 308590:
    {
        returnValue = F("Tinqueux-Allee");
        break;
    }
    case 308591:
    {
        returnValue = F("Tinsberger Schulweg");
        break;
    }
    case 308592:
    {
        returnValue = F("Tinsdaler Weg");
        break;
    }
    case 308593:
    {
        returnValue = F("Tinselweg");
        break;
    }
    case 308594:
    {
        returnValue = F("Tintenbachstr.");
        break;
    }
    case 308595:
    {
        returnValue = F("Tintengasse");
        break;
    }
    case 308596:
    {
        returnValue = F("Tintenstr.");
        break;
    }
    case 308597:
    {
        returnValue = F("Tinthofstr.");
        break;
    }
    case 308598:
    {
        returnValue = F("Tintruper Str.");
        break;
    }
    case 308599:
    {
        returnValue = F("Tinzer Str.");
        break;
    }
    case 308600:
    {
        returnValue = F("Tiolerweg");
        break;
    }
    case 308601:
    {
        returnValue = F("Tipi Zeltstadt (temporär)");
        break;
    }
    case 308602:
    {
        returnValue = F("Tippelsberger Str.");
        break;
    }
    case 308603:
    {
        returnValue = F("Tippelspfad");
        break;
    }
    case 308604:
    {
        returnValue = F("Tippelstr.");
        break;
    }
    case 308605:
    {
        returnValue = F("Tippengasse");
        break;
    }
    case 308606:
    {
        returnValue = F("Tippenhauerweg");
        break;
    }
    case 308607:
    {
        returnValue = F("Tippenmarkt");
        break;
    }
    case 308608:
    {
        returnValue = F("Tipperberg");
        break;
    }
    case 308609:
    {
        returnValue = F("Tippgarten");
        break;
    }
    case 308610:
    {
        returnValue = F("Tippheideweg");
        break;
    }
    case 308611:
    {
        returnValue = F("Tipphoff");
        break;
    }
    case 308612:
    {
        returnValue = F("Tippnerweg");
        break;
    }
    case 308613:
    {
        returnValue = F("Tippweg");
        break;
    }
    case 308614:
    {
        returnValue = F("Tiranaer Str.");
        break;
    }
    case 308615:
    {
        returnValue = F("Tirat-Carmel-Str.");
        break;
    }
    case 308616:
    {
        returnValue = F("Tirgrathsfeldweg");
        break;
    }
    case 308617:
    {
        returnValue = F("Tirol");
        break;
    }
    case 308618:
    {
        returnValue = F("Tiroler Damm");
        break;
    }
    case 308619:
    {
        returnValue = F("Tiroler Gasse");
        break;
    }
    case 308620:
    {
        returnValue = F("Tiroler Käppele");
        break;
    }
    case 308621:
    {
        returnValue = F("Tiroler Ring");
        break;
    }
    case 308622:
    {
        returnValue = F("Tiroler Str.");
        break;
    }
    case 308623:
    {
        returnValue = F("Tiroler Weg");
        break;
    }
    case 308624:
    {
        returnValue = F("Tiroler-Schneise");
        break;
    }
    case 308625:
    {
        returnValue = F("Tiroler-Seen-Weg");
        break;
    }
    case 308626:
    {
        returnValue = F("Tirolerbrunnenweg");
        break;
    }
    case 308627:
    {
        returnValue = F("Tirolergasse");
        break;
    }
    case 308628:
    {
        returnValue = F("Tirolergrundweg");
        break;
    }
    case 308629:
    {
        returnValue = F("Tirolerhaldeweg");
        break;
    }
    case 308630:
    {
        returnValue = F("Tirolerschlag Weg");
        break;
    }
    case 308631:
    {
        returnValue = F("Tirolerstr.");
        break;
    }
    case 308632:
    {
        returnValue = F("Tirolerweg");
        break;
    }
    case 308633:
    {
        returnValue = F("Tirolfstr.");
        break;
    }
    case 308634:
    {
        returnValue = F("Tiroliaweg");
        break;
    }
    case 308635:
    {
        returnValue = F("Tirolstr.");
        break;
    }
    case 308636:
    {
        returnValue = F("Tirolweg");
        break;
    }
    case 308637:
    {
        returnValue = F("Tirpersdorfer Str.");
        break;
    }
    case 308638:
    {
        returnValue = F("Tirpitzstr.");
        break;
    }
    case 308639:
    {
        returnValue = F("Tirpitzweg");
        break;
    }
    case 308640:
    {
        returnValue = F("Tirrillstr.");
        break;
    }
    case 308641:
    {
        returnValue = F("Tirschendorfer Str.");
        break;
    }
    case 308642:
    {
        returnValue = F("Tirschenreuther Str.");
        break;
    }
    case 308643:
    {
        returnValue = F("Tischardter Str.");
        break;
    }
    case 308644:
    {
        returnValue = F("Tischardter Weg");
        break;
    }
    case 308645:
    {
        returnValue = F("Tischardterweg");
        break;
    }
    case 308646:
    {
        returnValue = F("Tischauweg");
        break;
    }
    case 308647:
    {
        returnValue = F("Tischbein-Garten");
        break;
    }
    case 308648:
    {
        returnValue = F("Tischbeinstr.");
        break;
    }
    case 308649:
    {
        returnValue = F("Tischbeinweg");
        break;
    }
    case 308650:
    {
        returnValue = F("Tischbergerstr.");
        break;
    }
    case 308651:
    {
        returnValue = F("Tischelkauler Weg");
        break;
    }
    case 308652:
    {
        returnValue = F("Tischelweg");
        break;
    }
    case 308653:
    {
        returnValue = F("Tischendorf");
        break;
    }
    case 308654:
    {
        returnValue = F("Tischendorfstr.");
        break;
    }
    case 308655:
    {
        returnValue = F("Tischenweg");
        break;
    }
    case 308656:
    {
        returnValue = F("Tischerdorf");
        break;
    }
    case 308657:
    {
        returnValue = F("Tischergang");
        break;
    }
    case 308658:
    {
        returnValue = F("Tischerkamp");
        break;
    }
    case 308659:
    {
        returnValue = F("Tischerplatz");
        break;
    }
    case 308660:
    {
        returnValue = F("Tischerstr.");
        break;
    }
    case 308661:
    {
        returnValue = F("Tischeräcker");
        break;
    }
    case 308662:
    {
        returnValue = F("Tischlerbreite");
        break;
    }
    case 308663:
    {
        returnValue = F("Tischlereiweg");
        break;
    }
    case 308664:
    {
        returnValue = F("Tischlergasse");
        break;
    }
    case 308665:
    {
        returnValue = F("Tischlergaßl");
        break;
    }
    case 308666:
    {
        returnValue = F("Tischlersberg");
        break;
    }
    case 308667:
    {
        returnValue = F("Tischlerstr.");
        break;
    }
    case 308668:
    {
        returnValue = F("Tischlertalweg");
        break;
    }
    case 308669:
    {
        returnValue = F("Tischlerweg");
        break;
    }
    case 308670:
    {
        returnValue = F("Tischneck");
        break;
    }
    case 308671:
    {
        returnValue = F("Tischnecker Weg");
        break;
    }
    case 308672:
    {
        returnValue = F("Tischtennisplatten Area");
        break;
    }
    case 308673:
    {
        returnValue = F("Tischweg");
        break;
    }
    case 308674:
    {
        returnValue = F("Tischwäldle");
        break;
    }
    case 308675:
    {
        returnValue = F("Tisinstr.");
        break;
    }
    case 308676:
    {
        returnValue = F("Tislitstr.");
        break;
    }
    case 308677:
    {
        returnValue = F("Tismarstr.");
        break;
    }
    case 308678:
    {
        returnValue = F("Tismenrade");
        break;
    }
    case 308679:
    {
        returnValue = F("Tisoring");
        break;
    }
    case 308680:
    {
        returnValue = F("Tissaer Weg");
        break;
    }
    case 308681:
    {
        returnValue = F("Tissener Fußweg");
        break;
    }
    case 308682:
    {
        returnValue = F("Tissenicher Str.");
        break;
    }
    case 308683:
    {
        returnValue = F("Tister Winkel");
        break;
    }
    case 308684:
    {
        returnValue = F("Tister Ziegeleiweg");
        break;
    }
    case 308685:
    {
        returnValue = F("TitanRT");
        break;
    }
    case 308686:
    {
        returnValue = F("Titaniastr.");
        break;
    }
    case 308687:
    {
        returnValue = F("Titanstr.");
        break;
    }
    case 308688:
    {
        returnValue = F("Titanweg");
        break;
    }
    case 308689:
    {
        returnValue = F("Titiseestr.");
        break;
    }
    case 308690:
    {
        returnValue = F("Titiseeweg");
        break;
    }
    case 308691:
    {
        returnValue = F("Titlmoser Str.");
        break;
    }
    case 308692:
    {
        returnValue = F("Titofelde Weg");
        break;
    }
    case 308693:
    {
        returnValue = F("Titotstr.");
        break;
    }
    case 308694:
    {
        returnValue = F("Titschendorf");
        break;
    }
    case 308695:
    {
        returnValue = F("Titschendorfer Str.");
        break;
    }
    case 308696:
    {
        returnValue = F("Titschenhofer Str.");
        break;
    }
    case 308697:
    {
        returnValue = F("Tittardsfeld");
        break;
    }
    case 308698:
    {
        returnValue = F("Tittardshang");
        break;
    }
    case 308699:
    {
        returnValue = F("Tittelgasse");
        break;
    }
    case 308700:
    {
        returnValue = F("Tittelsstr.");
        break;
    }
    case 308701:
    {
        returnValue = F("Tittelsweg");
        break;
    }
    case 308702:
    {
        returnValue = F("Tittenkofener Str.");
        break;
    }
    case 308703:
    {
        returnValue = F("Tittingdorfer Str.");
        break;
    }
    case 308704:
    {
        returnValue = F("Tittinger Weg");
        break;
    }
    case 308705:
    {
        returnValue = F("Tittlinger Str.");
        break;
    }
    case 308706:
    {
        returnValue = F("Tittmoninger Str.");
        break;
    }
    case 308707:
    {
        returnValue = F("Tittusstr.");
        break;
    }
    case 308708:
    {
        returnValue = F("Titurelstr.");
        break;
    }
    case 308709:
    {
        returnValue = F("Titus-Brandsma-Str.");
        break;
    }
    case 308710:
    {
        returnValue = F("Titus-Brandsma-Weg");
        break;
    }
    case 308711:
    {
        returnValue = F("Titus-Düber-Str.");
        break;
    }
    case 308712:
    {
        returnValue = F("Titus-Horten-Str.");
        break;
    }
    case 308713:
    {
        returnValue = F("Titusgasse");
        break;
    }
    case 308714:
    {
        returnValue = F("Titusstr.");
        break;
    }
    case 308715:
    {
        returnValue = F("Titusweg");
        break;
    }
    case 308716:
    {
        returnValue = F("Titze Gäßchen");
        break;
    }
    case 308717:
    {
        returnValue = F("Titzer Str.");
        break;
    }
    case 308718:
    {
        returnValue = F("Titzer Weg");
        break;
    }
    case 308719:
    {
        returnValue = F("Titzgarten");
        break;
    }
    case 308720:
    {
        returnValue = F("Titzostr.");
        break;
    }
    case 308721:
    {
        returnValue = F("Titzstr.");
        break;
    }
    case 308722:
    {
        returnValue = F("Tiunweg");
        break;
    }
    case 308723:
    {
        returnValue = F("Tivoli");
        break;
    }
    case 308724:
    {
        returnValue = F("Tivolidyk");
        break;
    }
    case 308725:
    {
        returnValue = F("Tivolipark");
        break;
    }
    case 308726:
    {
        returnValue = F("Tivoliplatz");
        break;
    }
    case 308727:
    {
        returnValue = F("Tivolistr.");
        break;
    }
    case 308728:
    {
        returnValue = F("Tivoliweg");
        break;
    }
    case 308729:
    {
        returnValue = F("Tixhoven");
        break;
    }
    case 308730:
    {
        returnValue = F("Tizianplatz");
        break;
    }
    case 308731:
    {
        returnValue = F("Tizianstr.");
        break;
    }
    case 308732:
    {
        returnValue = F("Tizianweg");
        break;
    }
    case 308733:
    {
        returnValue = F("Tjabberantsweg");
        break;
    }
    case 308734:
    {
        returnValue = F("Tjackleger Fährweg");
        break;
    }
    case 308735:
    {
        returnValue = F("Tjaddenhofstr.");
        break;
    }
    case 308736:
    {
        returnValue = F("Tjaddeweg");
        break;
    }
    case 308737:
    {
        returnValue = F("Tjalkstr.");
        break;
    }
    case 308738:
    {
        returnValue = F("Tjalkweg");
        break;
    }
    case 308739:
    {
        returnValue = F("Tjarksweg");
        break;
    }
    case 308740:
    {
        returnValue = F("Tjede-Peckes-Str.");
        break;
    }
    case 308741:
    {
        returnValue = F("Tjumenstr.");
        break;
    }
    case 308742:
    {
        returnValue = F("Tjärke");
        break;
    }
    case 308743:
    {
        returnValue = F("Tjögenstr.");
        break;
    }
    case 308744:
    {
        returnValue = F("Tjüchen");
        break;
    }
    case 308745:
    {
        returnValue = F("Tjüchenring");
        break;
    }
    case 308746:
    {
        returnValue = F("Tjüchenweg");
        break;
    }
    case 308747:
    {
        returnValue = F("Tjücher Campen");
        break;
    }
    case 308748:
    {
        returnValue = F("Tjücher Dreesche");
        break;
    }
    case 308749:
    {
        returnValue = F("Tjücher Gaste");
        break;
    }
    case 308750:
    {
        returnValue = F("Tjücher Kolken");
        break;
    }
    case 308751:
    {
        returnValue = F("Tjücher Moortun");
        break;
    }
    case 308752:
    {
        returnValue = F("Tjücher Str.");
        break;
    }
    case 308753:
    {
        returnValue = F("Tjücher Weg");
        break;
    }
    case 308754:
    {
        returnValue = F("Tjüchkampstr.");
        break;
    }
    case 308755:
    {
        returnValue = F("To Osten");
        break;
    }
    case 308756:
    {
        returnValue = F("To Pye");
        break;
    }
    case 308757:
    {
        returnValue = F("To Süden");
        break;
    }
    case 308758:
    {
        returnValue = F("To Westen");
        break;
    }
    case 308759:
    {
        returnValue = F("To Wurth");
        break;
    }
    case 308760:
    {
        returnValue = F("To'n Ahrensbarg");
        break;
    }
    case 308761:
    {
        returnValue = F("To'n Diek");
        break;
    }
    case 308762:
    {
        returnValue = F("To'n Hook");
        break;
    }
    case 308763:
    {
        returnValue = F("To'n Lütjen Kamp");
        break;
    }
    case 308764:
    {
        returnValue = F("To'n Rösterbarg");
        break;
    }
    case 308765:
    {
        returnValue = F("To'n Slagboom");
        break;
    }
    case 308766:
    {
        returnValue = F("To'n Sprüttenhuus");
        break;
    }
    case 308767:
    {
        returnValue = F("Tobach");
        break;
    }
    case 308768:
    {
        returnValue = F("Tobaer Hauptstr.");
        break;
    }
    case 308769:
    {
        returnValue = F("Tobaer Str.");
        break;
    }
    case 308770:
    {
        returnValue = F("Tobakskamp");
        break;
    }
    case 308771:
    {
        returnValue = F("Tobegarten");
        break;
    }
    case 308772:
    {
        returnValue = F("Tobel");
        break;
    }
    case 308773:
    {
        returnValue = F("Tobelacker");
        break;
    }
    case 308774:
    {
        returnValue = F("Tobelbachstr.");
        break;
    }
    case 308775:
    {
        returnValue = F("Tobelbachweg");
        break;
    }
    case 308776:
    {
        returnValue = F("Tobelesch");
        break;
    }
    case 308777:
    {
        returnValue = F("Tobelgasse");
        break;
    }
    case 308778:
    {
        returnValue = F("Tobelhalde");
        break;
    }
    case 308779:
    {
        returnValue = F("Tobelstr.");
        break;
    }
    case 308780:
    {
        returnValue = F("Tobelwangerhof");
        break;
    }
    case 308781:
    {
        returnValue = F("Tobelwasenweg");
        break;
    }
    case 308782:
    {
        returnValue = F("Tobelweg");
        break;
    }
    case 308783:
    {
        returnValue = F("Tobelwiesen");
        break;
    }
    case 308784:
    {
        returnValue = F("Tobeläcker");
        break;
    }
    case 308785:
    {
        returnValue = F("Tobeläckerstr.");
        break;
    }
    case 308786:
    {
        returnValue = F("Tobelösch");
        break;
    }
    case 308787:
    {
        returnValue = F("Tobenweg");
        break;
    }
    case 308788:
    {
        returnValue = F("Toberg");
        break;
    }
    case 308789:
    {
        returnValue = F("Tobertitzer Str.");
        break;
    }
    case 308790:
    {
        returnValue = F("Tobesweg");
        break;
    }
    case 308791:
    {
        returnValue = F("Tobias-Albert-Str.");
        break;
    }
    case 308792:
    {
        returnValue = F("Tobias-Asser-Str.");
        break;
    }
    case 308793:
    {
        returnValue = F("Tobias-Christoph-Feilner-Str.");
        break;
    }
    case 308794:
    {
        returnValue = F("Tobias-Hoppe-Str.");
        break;
    }
    case 308795:
    {
        returnValue = F("Tobias-Kießling-Str.");
        break;
    }
    case 308796:
    {
        returnValue = F("Tobias-Kroll-Str.");
        break;
    }
    case 308797:
    {
        returnValue = F("Tobias-Maurer-Str.");
        break;
    }
    case 308798:
    {
        returnValue = F("Tobias-Mayer-Str.");
        break;
    }
    case 308799:
    {
        returnValue = F("Tobias-Mayer-Weg");
        break;
    }
    case 308800:
    {
        returnValue = F("Tobias-Unfried-Str.");
        break;
    }
    case 308801:
    {
        returnValue = F("Tobias-Weiß-Str.");
        break;
    }
    case 308802:
    {
        returnValue = F("Tobias-Öttl-Str.");
        break;
    }
    case 308803:
    {
        returnValue = F("Tobias-Öttl-Weg");
        break;
    }
    case 308804:
    {
        returnValue = F("Tobiasbrücke");
        break;
    }
    case 308805:
    {
        returnValue = F("Tobiasbuckel");
        break;
    }
    case 308806:
    {
        returnValue = F("Tobiaspark");
        break;
    }
    case 308807:
    {
        returnValue = F("Tobiasweg");
        break;
    }
    case 308808:
    {
        returnValue = F("Tobienstr.");
        break;
    }
    case 308809:
    {
        returnValue = F("Toblacher Str.");
        break;
    }
    case 308810:
    {
        returnValue = F("Toblacher Weg");
        break;
    }
    case 308811:
    {
        returnValue = F("Toblerweg");
        break;
    }
    case 308812:
    {
        returnValue = F("Tobringer");
        break;
    }
    case 308813:
    {
        returnValue = F("Tobritschstr.");
        break;
    }
    case 308814:
    {
        returnValue = F("Tobrukstr.");
        break;
    }
    case 308815:
    {
        returnValue = F("Tochdiek");
        break;
    }
    case 308816:
    {
        returnValue = F("Tochheimer Weg");
        break;
    }
    case 308817:
    {
        returnValue = F("Tochtenweg");
        break;
    }
    case 308818:
    {
        returnValue = F("Tochtgraben");
        break;
    }
    case 308819:
    {
        returnValue = F("Tochweg");
        break;
    }
    case 308820:
    {
        returnValue = F("Tockengrüner Weg");
        break;
    }
    case 308821:
    {
        returnValue = F("Tockhausen");
        break;
    }
    case 308822:
    {
        returnValue = F("Tockhauser Str.");
        break;
    }
    case 308823:
    {
        returnValue = F("Tocklergasse");
        break;
    }
    case 308824:
    {
        returnValue = F("Toddiner Chaussee");
        break;
    }
    case 308825:
    {
        returnValue = F("Toddiner Str.");
        break;
    }
    case 308826:
    {
        returnValue = F("Todenbütteler Str.");
        break;
    }
    case 308827:
    {
        returnValue = F("Todendorf");
        break;
    }
    case 308828:
    {
        returnValue = F("Todendorfer Str.");
        break;
    }
    case 308829:
    {
        returnValue = F("Todenfelder Str.");
        break;
    }
    case 308830:
    {
        returnValue = F("Todenhäuser Str.");
        break;
    }
    case 308831:
    {
        returnValue = F("Todenhäuser Weg");
        break;
    }
    case 308832:
    {
        returnValue = F("Todenredder");
        break;
    }
    case 308833:
    {
        returnValue = F("Todenweg");
        break;
    }
    case 308834:
    {
        returnValue = F("Todesallee");
        break;
    }
    case 308835:
    {
        returnValue = F("Todesbahn");
        break;
    }
    case 308836:
    {
        returnValue = F("Todesbruch");
        break;
    }
    case 308837:
    {
        returnValue = F("Todesfelder Str.");
        break;
    }
    case 308838:
    {
        returnValue = F("Todfeilerstr.");
        break;
    }
    case 308839:
    {
        returnValue = F("Todiallee");
        break;
    }
    case 308840:
    {
        returnValue = F("Todmorden-Platz");
        break;
    }
    case 308841:
    {
        returnValue = F("Todtbrede");
        break;
    }
    case 308842:
    {
        returnValue = F("Todtemannsgrund");
        break;
    }
    case 308843:
    {
        returnValue = F("Todtenberger Str.");
        break;
    }
    case 308844:
    {
        returnValue = F("Todtenbronnenweg");
        break;
    }
    case 308845:
    {
        returnValue = F("Todtengraben");
        break;
    }
    case 308846:
    {
        returnValue = F("Todtenhauser Dorfstr.");
        break;
    }
    case 308847:
    {
        returnValue = F("Todtenhauser Heideweg");
        break;
    }
    case 308848:
    {
        returnValue = F("Todtenhauser Str.");
        break;
    }
    case 308849:
    {
        returnValue = F("Todtenheimer Weg");
        break;
    }
    case 308850:
    {
        returnValue = F("Todtenhemmer Weg");
        break;
    }
    case 308851:
    {
        returnValue = F("Todtenkampsweg");
        break;
    }
    case 308852:
    {
        returnValue = F("Todtenkopfweg");
        break;
    }
    case 308853:
    {
        returnValue = F("Todtentalerweg");
        break;
    }
    case 308854:
    {
        returnValue = F("Todtenwaldweg");
        break;
    }
    case 308855:
    {
        returnValue = F("Todtenweg");
        break;
    }
    case 308856:
    {
        returnValue = F("Todtermannsweg");
        break;
    }
    case 308857:
    {
        returnValue = F("Todtglüsinger Str.");
        break;
    }
    case 308858:
    {
        returnValue = F("Todtmooser Str.");
        break;
    }
    case 308859:
    {
        returnValue = F("Todtmooser Weg");
        break;
    }
    case 308860:
    {
        returnValue = F("Todtmooser-Str.");
        break;
    }
    case 308861:
    {
        returnValue = F("Todtmoser Str.");
        break;
    }
    case 308862:
    {
        returnValue = F("Todtnauer Str.");
        break;
    }
    case 308863:
    {
        returnValue = F("Todtnauer Waldweg");
        break;
    }
    case 308864:
    {
        returnValue = F("Todtnauerliweg");
        break;
    }
    case 308865:
    {
        returnValue = F("Todtnauerweg");
        break;
    }
    case 308866:
    {
        returnValue = F("Todtnauweg");
        break;
    }
    case 308867:
    {
        returnValue = F("Todts Feld");
        break;
    }
    case 308868:
    {
        returnValue = F("Todtsche Koppel");
        break;
    }
    case 308869:
    {
        returnValue = F("Todtshorner Weg");
        break;
    }
    case 308870:
    {
        returnValue = F("Todtweg");
        break;
    }
    case 308871:
    {
        returnValue = F("Todtwiesen");
        break;
    }
    case 308872:
    {
        returnValue = F("Todweg");
        break;
    }
    case 308873:
    {
        returnValue = F("Toelleberg");
        break;
    }
    case 308874:
    {
        returnValue = F("Toepfferspark");
        break;
    }
    case 308875:
    {
        returnValue = F("Toerringstr.");
        break;
    }
    case 308876:
    {
        returnValue = F("Toerschenweg");
        break;
    }
    case 308877:
    {
        returnValue = F("Toestorf");
        break;
    }
    case 308878:
    {
        returnValue = F("Toestorfer Str.");
        break;
    }
    case 308879:
    {
        returnValue = F("Toestrup");
        break;
    }
    case 308880:
    {
        returnValue = F("Toft");
        break;
    }
    case 308881:
    {
        returnValue = F("Toftacker");
        break;
    }
    case 308882:
    {
        returnValue = F("Toften");
        break;
    }
    case 308883:
    {
        returnValue = F("Toftenweg");
        break;
    }
    case 308884:
    {
        returnValue = F("Tofthof");
        break;
    }
    case 308885:
    {
        returnValue = F("Toftinger Str.");
        break;
    }
    case 308886:
    {
        returnValue = F("Toftlundstr.");
        break;
    }
    case 308887:
    {
        returnValue = F("Toftlundweg");
        break;
    }
    case 308888:
    {
        returnValue = F("Toftstr.");
        break;
    }
    case 308889:
    {
        returnValue = F("Toftumer Weg");
        break;
    }
    case 308890:
    {
        returnValue = F("Toftweg");
        break;
    }
    case 308891:
    {
        returnValue = F("Toggenburgerstr.");
        break;
    }
    case 308892:
    {
        returnValue = F("Toggenburgstr.");
        break;
    }
    case 308893:
    {
        returnValue = F("Togoplatz");
        break;
    }
    case 308894:
    {
        returnValue = F("Togostr.");
        break;
    }
    case 308895:
    {
        returnValue = F("Togschlootweg");
        break;
    }
    case 308896:
    {
        returnValue = F("Toitenwinkel");
        break;
    }
    case 308897:
    {
        returnValue = F("Toitenwinkler Allee");
        break;
    }
    case 308898:
    {
        returnValue = F("Toitzer Berg");
        break;
    }
    case 308899:
    {
        returnValue = F("Tokaier Weg");
        break;
    }
    case 308900:
    {
        returnValue = F("Tokajer Str.");
        break;
    }
    case 308901:
    {
        returnValue = F("Tokajer Weg");
        break;
    }
    case 308902:
    {
        returnValue = F("Tokajerweg");
        break;
    }
    case 308903:
    {
        returnValue = F("Tokayerweg");
        break;
    }
    case 308904:
    {
        returnValue = F("Tokelkampweg");
        break;
    }
    case 308905:
    {
        returnValue = F("Tokiostr.");
        break;
    }
    case 308906:
    {
        returnValue = F("Tolberberg");
        break;
    }
    case 308907:
    {
        returnValue = F("Tolkemiter Str.");
        break;
    }
    case 308908:
    {
        returnValue = F("Tolker Str.");
        break;
    }
    case 308909:
    {
        returnValue = F("Tolkmitz");
        break;
    }
    case 308910:
    {
        returnValue = F("Tolkschubyer Str.");
        break;
    }
    case 308911:
    {
        returnValue = F("Tolkwade");
        break;
    }
    case 308912:
    {
        returnValue = F("Tollbergstr.");
        break;
    }
    case 308913:
    {
        returnValue = F("Tollbrettkoppel");
        break;
    }
    case 308914:
    {
        returnValue = F("Tollenseheim");
        break;
    }
    case 308915:
    {
        returnValue = F("Tollenserstr.");
        break;
    }
    case 308916:
    {
        returnValue = F("Tollensestr.");
        break;
    }
    case 308917:
    {
        returnValue = F("Tollenseweg");
        break;
    }
    case 308918:
    {
        returnValue = F("Tollesser Land");
        break;
    }
    case 308919:
    {
        returnValue = F("Tollestr.");
        break;
    }
    case 308920:
    {
        returnValue = F("Tollhausener Str.");
        break;
    }
    case 308921:
    {
        returnValue = F("Tollkirschenweg");
        break;
    }
    case 308922:
    {
        returnValue = F("Tollnerstr.");
        break;
    }
    case 308923:
    {
        returnValue = F("Tollostr.");
        break;
    }
    case 308924:
    {
        returnValue = F("Tollskamp");
        break;
    }
    case 308925:
    {
        returnValue = F("Tollsweide");
        break;
    }
    case 308926:
    {
        returnValue = F("Tollwitzer Platz");
        break;
    }
    case 308927:
    {
        returnValue = F("Tollwitzer Weg");
        break;
    }
    case 308928:
    {
        returnValue = F("Tolläckerstr.");
        break;
    }
    case 308929:
    {
        returnValue = F("Tolnaer Str.");
        break;
    }
    case 308930:
    {
        returnValue = F("Tolnaplatz");
        break;
    }
    case 308931:
    {
        returnValue = F("Tolnauer Str.");
        break;
    }
    case 308932:
    {
        returnValue = F("Tolnaustr.");
        break;
    }
    case 308933:
    {
        returnValue = F("Toloptwete");
        break;
    }
    case 308934:
    {
        returnValue = F("Tolstoistr.");
        break;
    }
    case 308935:
    {
        returnValue = F("Tolstoiweg");
        break;
    }
    case 308936:
    {
        returnValue = F("Tom Sawyer Street");
        break;
    }
    case 308937:
    {
        returnValue = F("Tom-Brook-Str.");
        break;
    }
    case 308938:
    {
        returnValue = F("Tom-Bullus-Str.");
        break;
    }
    case 308939:
    {
        returnValue = F("Tom-Dieck-Str.");
        break;
    }
    case 308940:
    {
        returnValue = F("Tom-Mutters-Str.");
        break;
    }
    case 308941:
    {
        returnValue = F("Tom-Mutters-Weg");
        break;
    }
    case 308942:
    {
        returnValue = F("Tom-Rinck-Str.");
        break;
    }
    case 308943:
    {
        returnValue = F("Tomatenweg");
        break;
    }
    case 308944:
    {
        returnValue = F("Tomatshalde");
        break;
    }
    case 308945:
    {
        returnValue = F("Tombacher Str.");
        break;
    }
    case 308946:
    {
        returnValue = F("Tomberger Mühle");
        break;
    }
    case 308947:
    {
        returnValue = F("Tomberger Str.");
        break;
    }
    case 308948:
    {
        returnValue = F("Tombergstr.");
        break;
    }
    case 308949:
    {
        returnValue = F("Tomblaineplatz");
        break;
    }
    case 308950:
    {
        returnValue = F("Tomburgstr.");
        break;
    }
    case 308951:
    {
        returnValue = F("Tommasistr.");
        break;
    }
    case 308952:
    {
        returnValue = F("Tommaweg");
        break;
    }
    case 308953:
    {
        returnValue = F("Tommentalstr.");
        break;
    }
    case 308954:
    {
        returnValue = F("Tommerl-Geräumt");
        break;
    }
    case 308955:
    {
        returnValue = F("Tommerweg");
        break;
    }
    case 308956:
    {
        returnValue = F("Tommweg");
        break;
    }
    case 308957:
    {
        returnValue = F("Tomp");
        break;
    }
    case 308958:
    {
        returnValue = F("Tomper Eck");
        break;
    }
    case 308959:
    {
        returnValue = F("Tomper Feld");
        break;
    }
    case 308960:
    {
        returnValue = F("Tomper Str.");
        break;
    }
    case 308961:
    {
        returnValue = F("Tomper Weg");
        break;
    }
    case 308962:
    {
        returnValue = F("Tomphecke");
        break;
    }
    case 308963:
    {
        returnValue = F("Tompsche Str.");
        break;
    }
    case 308964:
    {
        returnValue = F("Tomshörn");
        break;
    }
    case 308965:
    {
        returnValue = F("Tomsonstr.");
        break;
    }
    case 308966:
    {
        returnValue = F("Ton Barg");
        break;
    }
    case 308967:
    {
        returnValue = F("Ton Hogenbargen");
        break;
    }
    case 308968:
    {
        returnValue = F("Ton Hus Rönnau");
        break;
    }
    case 308969:
    {
        returnValue = F("Ton Strand");
        break;
    }
    case 308970:
    {
        returnValue = F("Ton Vossbarg");
        break;
    }
    case 308971:
    {
        returnValue = F("Tonacker");
        break;
    }
    case 308972:
    {
        returnValue = F("Tonackerweg");
        break;
    }
    case 308973:
    {
        returnValue = F("Tonaustr.");
        break;
    }
    case 308974:
    {
        returnValue = F("Tonbachstr.");
        break;
    }
    case 308975:
    {
        returnValue = F("Tonbachsträßle");
        break;
    }
    case 308976:
    {
        returnValue = F("Tonbachweg");
        break;
    }
    case 308977:
    {
        returnValue = F("Tonbahn");
        break;
    }
    case 308978:
    {
        returnValue = F("Tonberg");
        break;
    }
    case 308979:
    {
        returnValue = F("Tonberg Ausbau");
        break;
    }
    case 308980:
    {
        returnValue = F("Tonbergstr.");
        break;
    }
    case 308981:
    {
        returnValue = F("Tonbergsweg");
        break;
    }
    case 308982:
    {
        returnValue = F("Tonbrennerstr.");
        break;
    }
    case 308983:
    {
        returnValue = F("Tonbrennerweg");
        break;
    }
    case 308984:
    {
        returnValue = F("Tonburg");
        break;
    }
    case 308985:
    {
        returnValue = F("Tonbusch");
        break;
    }
    case 308986:
    {
        returnValue = F("Tonderner Str.");
        break;
    }
    case 308987:
    {
        returnValue = F("Tonderner Weg");
        break;
    }
    case 308988:
    {
        returnValue = F("Tondernsche Str.");
        break;
    }
    case 308989:
    {
        returnValue = F("Tondernstr.");
        break;
    }
    case 308990:
    {
        returnValue = F("Tondernweg");
        break;
    }
    case 308991:
    {
        returnValue = F("Tondernweg-Nord");
        break;
    }
    case 308992:
    {
        returnValue = F("Tondorfer Str.");
        break;
    }
    case 308993:
    {
        returnValue = F("Tondorfstr.");
        break;
    }
    case 308994:
    {
        returnValue = F("Tonenstr.");
        break;
    }
    case 308995:
    {
        returnValue = F("Tongasse");
        break;
    }
    case 308996:
    {
        returnValue = F("Tongerenweg");
        break;
    }
    case 308997:
    {
        returnValue = F("Tongerlostr.");
        break;
    }
    case 308998:
    {
        returnValue = F("Tongernstr.");
        break;
    }
    case 308999:
    {
        returnValue = F("Tonghsweg");
        break;
    }
    case 309000:
    {
        returnValue = F("Tongraben");
        break;
    }
    case 309001:
    {
        returnValue = F("Tongrube");
        break;
    }
    case 309002:
    {
        returnValue = F("Tongrubenstr.");
        break;
    }
    case 309003:
    {
        returnValue = F("Tongrubenweg");
        break;
    }
    case 309004:
    {
        returnValue = F("Tongräberweg");
        break;
    }
    case 309005:
    {
        returnValue = F("Tonhallen-Ufer");
        break;
    }
    case 309006:
    {
        returnValue = F("Tonhallenpassage");
        break;
    }
    case 309007:
    {
        returnValue = F("Tonhallenstr.");
        break;
    }
    case 309008:
    {
        returnValue = F("Tonholzweg");
        break;
    }
    case 309009:
    {
        returnValue = F("Tonhüttenweg");
        break;
    }
    case 309010:
    {
        returnValue = F("Toni-André-Str.");
        break;
    }
    case 309011:
    {
        returnValue = F("Toni-Baumanns-Str.");
        break;
    }
    case 309012:
    {
        returnValue = F("Toni-Kryn-Weg");
        break;
    }
    case 309013:
    {
        returnValue = F("Toni-Kurz-Weg");
        break;
    }
    case 309014:
    {
        returnValue = F("Toni-Kuster-Weg");
        break;
    }
    case 309015:
    {
        returnValue = F("Toni-Lermen-Str.");
        break;
    }
    case 309016:
    {
        returnValue = F("Toni-Ließem-Weg");
        break;
    }
    case 309017:
    {
        returnValue = F("Toni-Mang-Ring");
        break;
    }
    case 309018:
    {
        returnValue = F("Toni-Müller-Str.");
        break;
    }
    case 309019:
    {
        returnValue = F("Toni-Ooms-Str.");
        break;
    }
    case 309020:
    {
        returnValue = F("Toni-Pensperger-Str.");
        break;
    }
    case 309021:
    {
        returnValue = F("Toni-Pfülf-Weg");
        break;
    }
    case 309022:
    {
        returnValue = F("Toni-Pötzl-Str.");
        break;
    }
    case 309023:
    {
        returnValue = F("Toni-Reifenhäuser-Str.");
        break;
    }
    case 309024:
    {
        returnValue = F("Toni-Ruhr-Str.");
        break;
    }
    case 309025:
    {
        returnValue = F("Toni-Schecher-Str.");
        break;
    }
    case 309026:
    {
        returnValue = F("Toni-Schröder-Str.");
        break;
    }
    case 309027:
    {
        returnValue = F("Toni-Schuhmacher-Weg");
        break;
    }
    case 309028:
    {
        returnValue = F("Toni-Schumacher-Str.");
        break;
    }
    case 309029:
    {
        returnValue = F("Toni-Seber-Weg");
        break;
    }
    case 309030:
    {
        returnValue = F("Toni-Steingass-Str.");
        break;
    }
    case 309031:
    {
        returnValue = F("Toni-Stemmler-Str.");
        break;
    }
    case 309032:
    {
        returnValue = F("Toni-Turek-Str.");
        break;
    }
    case 309033:
    {
        returnValue = F("Toni-Turek-Weg");
        break;
    }
    case 309034:
    {
        returnValue = F("Toni-Wolf-Str.");
        break;
    }
    case 309035:
    {
        returnValue = F("Toni-von-Oeynhausen-Str.");
        break;
    }
    case 309036:
    {
        returnValue = F("Tonio-Bödiker-Str.");
        break;
    }
    case 309037:
    {
        returnValue = F("Tonio-Guerra-Weg");
        break;
    }
    case 309038:
    {
        returnValue = F("Tonio-Pflaum-Weg");
        break;
    }
    case 309039:
    {
        returnValue = F("Tonishofweg");
        break;
    }
    case 309040:
    {
        returnValue = F("Toniusplatz");
        break;
    }
    case 309041:
    {
        returnValue = F("Tonkaute");
        break;
    }
    case 309042:
    {
        returnValue = F("Tonkautenschneise");
        break;
    }
    case 309043:
    {
        returnValue = F("Tonkital");
        break;
    }
    case 309044:
    {
        returnValue = F("Tonkrukenhof");
        break;
    }
    case 309045:
    {
        returnValue = F("Tonkuhle");
        break;
    }
    case 309046:
    {
        returnValue = F("Tonkuhlenstr.");
        break;
    }
    case 309047:
    {
        returnValue = F("Tonkuhlenweg");
        break;
    }
    case 309048:
    {
        returnValue = F("Tonleite");
        break;
    }
    case 309049:
    {
        returnValue = F("Tonmark");
        break;
    }
    case 309050:
    {
        returnValue = F("Tonnaer Str.");
        break;
    }
    case 309051:
    {
        returnValue = F("Tonnaer Weg");
        break;
    }
    case 309052:
    {
        returnValue = F("Tonndeichstr.");
        break;
    }
    case 309053:
    {
        returnValue = F("Tonndeichsweg");
        break;
    }
    case 309054:
    {
        returnValue = F("Tonndorfer Stieg");
        break;
    }
    case 309055:
    {
        returnValue = F("Tonndorfer Str.");
        break;
    }
    case 309056:
    {
        returnValue = F("Tonndorfer Weg");
        break;
    }
    case 309057:
    {
        returnValue = F("Tonnenberg");
        break;
    }
    case 309058:
    {
        returnValue = F("Tonnenbergstr.");
        break;
    }
    case 309059:
    {
        returnValue = F("Tonnenheider Str.");
        break;
    }
    case 309060:
    {
        returnValue = F("Tonnenhofstr.");
        break;
    }
    case 309061:
    {
        returnValue = F("Tonnenkamper Weg");
        break;
    }
    case 309062:
    {
        returnValue = F("Tonnenpesch");
        break;
    }
    case 309063:
    {
        returnValue = F("Tonnenpütz");
        break;
    }
    case 309064:
    {
        returnValue = F("Tonnenteich");
        break;
    }
    case 309065:
    {
        returnValue = F("Tonnenweg");
        break;
    }
    case 309066:
    {
        returnValue = F("Tonnenwiese");
        break;
    }
    case 309067:
    {
        returnValue = F("Tonnerrestr.");
        break;
    }
    case 309068:
    {
        returnValue = F("Tonolzbronner Str.");
        break;
    }
    case 309069:
    {
        returnValue = F("Tonrestloch");
        break;
    }
    case 309070:
    {
        returnValue = F("Tonsilweg");
        break;
    }
    case 309071:
    {
        returnValue = F("Tonsorstr.");
        break;
    }
    case 309072:
    {
        returnValue = F("Tonstichgang");
        break;
    }
    case 309073:
    {
        returnValue = F("Tonstichweg");
        break;
    }
    case 309074:
    {
        returnValue = F("Tonstr.");
        break;
    }
    case 309075:
    {
        returnValue = F("Tonteichsteg");
        break;
    }
    case 309076:
    {
        returnValue = F("Tonweg");
        break;
    }
    case 309077:
    {
        returnValue = F("Tonwerke");
        break;
    }
    case 309078:
    {
        returnValue = F("Tonwerke-Str.");
        break;
    }
    case 309079:
    {
        returnValue = F("Tonwerkstr.");
        break;
    }
    case 309080:
    {
        returnValue = F("Tonwiesenweg");
        break;
    }
    case 309081:
    {
        returnValue = F("Tony-Binder-Str.");
        break;
    }
    case 309082:
    {
        returnValue = F("Tony-Marshall-Weg");
        break;
    }
    case 309083:
    {
        returnValue = F("Tony-Schumacher-Str.");
        break;
    }
    case 309084:
    {
        returnValue = F("Tonzeche");
        break;
    }
    case 309085:
    {
        returnValue = F("Tonäcker");
        break;
    }
    case 309086:
    {
        returnValue = F("Toogmoorstr.");
        break;
    }
    case 309087:
    {
        returnValue = F("Toosbüystr.");
        break;
    }
    case 309088:
    {
        returnValue = F("Topasstr.");
        break;
    }
    case 309089:
    {
        returnValue = F("Topasweg");
        break;
    }
    case 309090:
    {
        returnValue = F("Topehlenweg");
        break;
    }
    case 309091:
    {
        returnValue = F("Topesch");
        break;
    }
    case 309092:
    {
        returnValue = F("Topfgasse");
        break;
    }
    case 309093:
    {
        returnValue = F("Topfmarkt");
        break;
    }
    case 309094:
    {
        returnValue = F("Topfmarktgasse");
        break;
    }
    case 309095:
    {
        returnValue = F("Topfsberg");
        break;
    }
    case 309096:
    {
        returnValue = F("Topfseifersdorfer Str.");
        break;
    }
    case 309097:
    {
        returnValue = F("Topfstedterstr.");
        break;
    }
    case 309098:
    {
        returnValue = F("Topheide");
        break;
    }
    case 309099:
    {
        returnValue = F("Toppenstedter Kirchweg");
        break;
    }
    case 309100:
    {
        returnValue = F("Toppenstedter Mühlenweg");
        break;
    }
    case 309101:
    {
        returnValue = F("Toppenstedter Str.");
        break;
    }
    case 309102:
    {
        returnValue = F("Toppenstedter Weg");
        break;
    }
    case 309103:
    {
        returnValue = F("Toppenwiesen");
        break;
    }
    case 309104:
    {
        returnValue = F("Topper Diek");
        break;
    }
    case 309105:
    {
        returnValue = F("Topplerweg");
        break;
    }
    case 309106:
    {
        returnValue = F("Toppmannsweg");
        break;
    }
    case 309107:
    {
        returnValue = F("Toppstr.");
        break;
    }
    case 309108:
    {
        returnValue = F("Toppweg");
        break;
    }
    case 309109:
    {
        returnValue = F("Tops");
        break;
    }
    case 309110:
    {
        returnValue = F("Tops Riete");
        break;
    }
    case 309111:
    {
        returnValue = F("Topsloh");
        break;
    }
    case 309112:
    {
        returnValue = F("Topsstr.");
        break;
    }
    case 309113:
    {
        returnValue = F("Topsweg");
        break;
    }
    case 309114:
    {
        returnValue = F("Toquard");
        break;
    }
    case 309115:
    {
        returnValue = F("Tor");
        break;
    }
    case 309116:
    {
        returnValue = F("Tor 4");
        break;
    }
    case 309117:
    {
        returnValue = F("Tor Süd");
        break;
    }
    case 309118:
    {
        returnValue = F("Tor West");
        break;
    }
    case 309119:
    {
        returnValue = F("Tor des Nordens");
        break;
    }
    case 309120:
    {
        returnValue = F("Toracker");
        break;
    }
    case 309121:
    {
        returnValue = F("Torackerstr.");
        break;
    }
    case 309122:
    {
        returnValue = F("Torackerweg");
        break;
    }
    case 309123:
    {
        returnValue = F("Torallee");
        break;
    }
    case 309124:
    {
        returnValue = F("Toraweg");
        break;
    }
    case 309125:
    {
        returnValue = F("Torbayufer");
        break;
    }
    case 309126:
    {
        returnValue = F("Torberg");
        break;
    }
    case 309127:
    {
        returnValue = F("Torbitze");
        break;
    }
    case 309128:
    {
        returnValue = F("Torbogen");
        break;
    }
    case 309129:
    {
        returnValue = F("Torbogengäßle");
        break;
    }
    case 309130:
    {
        returnValue = F("Torbogenstr.");
        break;
    }
    case 309131:
    {
        returnValue = F("Torbogenweg");
        break;
    }
    case 309132:
    {
        returnValue = F("Torbreite");
        break;
    }
    case 309133:
    {
        returnValue = F("Torbronnenstr.");
        break;
    }
    case 309134:
    {
        returnValue = F("Torbrunnengasse");
        break;
    }
    case 309135:
    {
        returnValue = F("Torbrunnenstr.");
        break;
    }
    case 309136:
    {
        returnValue = F("Torbrücke");
        break;
    }
    case 309137:
    {
        returnValue = F("Torbuck");
        break;
    }
    case 309138:
    {
        returnValue = F("Torbäckgäßchen");
        break;
    }
    case 309139:
    {
        returnValue = F("Torcystr.");
        break;
    }
    case 309140:
    {
        returnValue = F("Tordenskioldstr.");
        break;
    }
    case 309141:
    {
        returnValue = F("Tordschell");
        break;
    }
    case 309142:
    {
        returnValue = F("Torenberg");
        break;
    }
    case 309143:
    {
        returnValue = F("Torenkasten");
        break;
    }
    case 309144:
    {
        returnValue = F("Torenstoff");
        break;
    }
    case 309145:
    {
        returnValue = F("Torenstr.");
        break;
    }
    case 309146:
    {
        returnValue = F("Toreschle");
        break;
    }
    case 309147:
    {
        returnValue = F("Toresweg");
        break;
    }
    case 309148:
    {
        returnValue = F("Torf");
        break;
    }
    case 309149:
    {
        returnValue = F("Torf- und Siedlungsmuseum");
        break;
    }
    case 309150:
    {
        returnValue = F("Torfabfuhrweg");
        break;
    }
    case 309151:
    {
        returnValue = F("Torfbogen");
        break;
    }
    case 309152:
    {
        returnValue = F("Torfbruch");
        break;
    }
    case 309153:
    {
        returnValue = F("Torfbruchstr.");
        break;
    }
    case 309154:
    {
        returnValue = F("Torfbrücke");
        break;
    }
    case 309155:
    {
        returnValue = F("Torfdamm");
        break;
    }
    case 309156:
    {
        returnValue = F("Torfeldstr.");
        break;
    }
    case 309157:
    {
        returnValue = F("Torfeldweg");
        break;
    }
    case 309158:
    {
        returnValue = F("Torfende");
        break;
    }
    case 309159:
    {
        returnValue = F("Torfers Esch");
        break;
    }
    case 309160:
    {
        returnValue = F("Torffehnsweg");
        break;
    }
    case 309161:
    {
        returnValue = F("Torffeldweg");
        break;
    }
    case 309162:
    {
        returnValue = F("Torfgasse");
        break;
    }
    case 309163:
    {
        returnValue = F("Torfgraben");
        break;
    }
    case 309164:
    {
        returnValue = F("Torfgrube");
        break;
    }
    case 309165:
    {
        returnValue = F("Torfgrubenweg");
        break;
    }
    case 309166:
    {
        returnValue = F("Torfgräberweg");
        break;
    }
    case 309167:
    {
        returnValue = F("Torfhaus");
        break;
    }
    case 309168:
    {
        returnValue = F("Torfhausstr.");
        break;
    }
    case 309169:
    {
        returnValue = F("Torfhausweg");
        break;
    }
    case 309170:
    {
        returnValue = F("Torfhäuser");
        break;
    }
    case 309171:
    {
        returnValue = F("Torfkamp");
        break;
    }
    case 309172:
    {
        returnValue = F("Torfkoppelweg");
        break;
    }
    case 309173:
    {
        returnValue = F("Torfkuhle");
        break;
    }
    case 309174:
    {
        returnValue = F("Torfkuhlenweg");
        break;
    }
    case 309175:
    {
        returnValue = F("Torfkuhler Weg");
        break;
    }
    case 309176:
    {
        returnValue = F("Torfkuhlweg");
        break;
    }
    case 309177:
    {
        returnValue = F("Torfmoor");
        break;
    }
    case 309178:
    {
        returnValue = F("Torfmoorkamp");
        break;
    }
    case 309179:
    {
        returnValue = F("Torfmoors-Weg");
        break;
    }
    case 309180:
    {
        returnValue = F("Torfmoorstr.");
        break;
    }
    case 309181:
    {
        returnValue = F("Torfmoorweg");
        break;
    }
    case 309182:
    {
        returnValue = F("Torfmoosstr.");
        break;
    }
    case 309183:
    {
        returnValue = F("Torfmoosweg");
        break;
    }
    case 309184:
    {
        returnValue = F("Torfmuurschneise");
        break;
    }
    case 309185:
    {
        returnValue = F("Torfplatz");
        break;
    }
    case 309186:
    {
        returnValue = F("Torfredder");
        break;
    }
    case 309187:
    {
        returnValue = F("Torfschuppenweg");
        break;
    }
    case 309188:
    {
        returnValue = F("Torfstecherweg");
        break;
    }
    case 309189:
    {
        returnValue = F("Torfsteg");
        break;
    }
    case 309190:
    {
        returnValue = F("Torfstelle");
        break;
    }
    case 309191:
    {
        returnValue = F("Torfstich");
        break;
    }
    case 309192:
    {
        returnValue = F("Torfstichallee");
        break;
    }
    case 309193:
    {
        returnValue = F("Torfstichweg");
        break;
    }
    case 309194:
    {
        returnValue = F("Torfstieg");
        break;
    }
    case 309195:
    {
        returnValue = F("Torfstr.");
        break;
    }
    case 309196:
    {
        returnValue = F("Torfweg");
        break;
    }
    case 309197:
    {
        returnValue = F("Torfwerk");
        break;
    }
    case 309198:
    {
        returnValue = F("Torfwiese");
        break;
    }
    case 309199:
    {
        returnValue = F("Torfwiesenweg");
        break;
    }
    case 309200:
    {
        returnValue = F("Torgaer Str.");
        break;
    }
    case 309201:
    {
        returnValue = F("Torgarten");
        break;
    }
    case 309202:
    {
        returnValue = F("Torgartenstr.");
        break;
    }
    case 309203:
    {
        returnValue = F("Torgartenweg");
        break;
    }
    case 309204:
    {
        returnValue = F("Torgasse");
        break;
    }
    case 309205:
    {
        returnValue = F("Torgau-Annaburger Str.");
        break;
    }
    case 309206:
    {
        returnValue = F("Torgauer Allee");
        break;
    }
    case 309207:
    {
        returnValue = F("Torgauer Landstr.");
        break;
    }
    case 309208:
    {
        returnValue = F("Torgauer Str.");
        break;
    }
    case 309209:
    {
        returnValue = F("Torgauer Weg");
        break;
    }
    case 309210:
    {
        returnValue = F("Torgaustr.");
        break;
    }
    case 309211:
    {
        returnValue = F("Torgaß");
        break;
    }
    case 309212:
    {
        returnValue = F("Torgelow");
        break;
    }
    case 309213:
    {
        returnValue = F("Torgelower Chaussee");
        break;
    }
    case 309214:
    {
        returnValue = F("Torgelower Str.");
        break;
    }
    case 309215:
    {
        returnValue = F("Torgelower Weg");
        break;
    }
    case 309216:
    {
        returnValue = F("Torgowstr.");
        break;
    }
    case 309217:
    {
        returnValue = F("Torgärten");
        break;
    }
    case 309218:
    {
        returnValue = F("Torgässle");
        break;
    }
    case 309219:
    {
        returnValue = F("Torhaus");
        break;
    }
    case 309220:
    {
        returnValue = F("Torhausgasse");
        break;
    }
    case 309221:
    {
        returnValue = F("Torhausplatz");
        break;
    }
    case 309222:
    {
        returnValue = F("Torhausstr.");
        break;
    }
    case 309223:
    {
        returnValue = F("Torhausweg");
        break;
    }
    case 309224:
    {
        returnValue = F("Torhegenhausstr.");
        break;
    }
    case 309225:
    {
        returnValue = F("Torhof");
        break;
    }
    case 309226:
    {
        returnValue = F("Torhäuslweg");
        break;
    }
    case 309227:
    {
        returnValue = F("Torisdorfer Weg");
        break;
    }
    case 309228:
    {
        returnValue = F("Torkamp");
        break;
    }
    case 309229:
    {
        returnValue = F("Torkelbergstr.");
        break;
    }
    case 309230:
    {
        returnValue = F("Torkelgasse");
        break;
    }
    case 309231:
    {
        returnValue = F("Torkelhalden");
        break;
    }
    case 309232:
    {
        returnValue = F("Torkelplatz");
        break;
    }
    case 309233:
    {
        returnValue = F("Torkelstr.");
        break;
    }
    case 309234:
    {
        returnValue = F("Torkelstube");
        break;
    }
    case 309235:
    {
        returnValue = F("Torkelweg");
        break;
    }
    case 309236:
    {
        returnValue = F("Torkeläcker");
        break;
    }
    case 309237:
    {
        returnValue = F("Torleite");
        break;
    }
    case 309238:
    {
        returnValue = F("Torleystr.");
        break;
    }
    case 309239:
    {
        returnValue = F("Tormersdorfer Allee");
        break;
    }
    case 309240:
    {
        returnValue = F("Torna");
        break;
    }
    case 309241:
    {
        returnValue = F("Tornado Str.");
        break;
    }
    case 309242:
    {
        returnValue = F("Tornadoweg");
        break;
    }
    case 309243:
    {
        returnValue = F("Tornaer Platz");
        break;
    }
    case 309244:
    {
        returnValue = F("Tornaer Str.");
        break;
    }
    case 309245:
    {
        returnValue = F("Tornaer Weg");
        break;
    }
    case 309246:
    {
        returnValue = F("Tornauer Dorfstr.");
        break;
    }
    case 309247:
    {
        returnValue = F("Tornauer Hauptstr.");
        break;
    }
    case 309248:
    {
        returnValue = F("Tornauer Str.");
        break;
    }
    case 309249:
    {
        returnValue = F("Tornauer Weg");
        break;
    }
    case 309250:
    {
        returnValue = F("Torneiweg");
        break;
    }
    case 309251:
    {
        returnValue = F("Tornescher Weg");
        break;
    }
    case 309252:
    {
        returnValue = F("Torneystr.");
        break;
    }
    case 309253:
    {
        returnValue = F("Torneywinkel");
        break;
    }
    case 309254:
    {
        returnValue = F("Tornoer Str.");
        break;
    }
    case 309255:
    {
        returnValue = F("Tornoer Weg");
        break;
    }
    case 309256:
    {
        returnValue = F("Tornow");
        break;
    }
    case 309257:
    {
        returnValue = F("Tornower Dorfstr.");
        break;
    }
    case 309258:
    {
        returnValue = F("Tornower Str.");
        break;
    }
    case 309259:
    {
        returnValue = F("Tornower Waldstr.");
        break;
    }
    case 309260:
    {
        returnValue = F("Tornower Weg");
        break;
    }
    case 309261:
    {
        returnValue = F("Tornowhöfer Str.");
        break;
    }
    case 309262:
    {
        returnValue = F("Tornows Idyll");
        break;
    }
    case 309263:
    {
        returnValue = F("Tornowstr.");
        break;
    }
    case 309264:
    {
        returnValue = F("Tornschauer Str.");
        break;
    }
    case 309265:
    {
        returnValue = F("Tornwiesenweg");
        break;
    }
    case 309266:
    {
        returnValue = F("Tornéestr.");
        break;
    }
    case 309267:
    {
        returnValue = F("Toronto-Str.");
        break;
    }
    case 309268:
    {
        returnValue = F("Torpforte");
        break;
    }
    case 309269:
    {
        returnValue = F("Torplatz");
        break;
    }
    case 309270:
    {
        returnValue = F("Torrbach");
        break;
    }
    case 309271:
    {
        returnValue = F("Torre-Pellice-Weg");
        break;
    }
    case 309272:
    {
        returnValue = F("Torrechtsstr.");
        break;
    }
    case 309273:
    {
        returnValue = F("Torringen");
        break;
    }
    case 309274:
    {
        returnValue = F("Torrundstr.");
        break;
    }
    case 309275:
    {
        returnValue = F("Torsballiger Str.");
        break;
    }
    case 309276:
    {
        returnValue = F("Torsbyvägen");
        break;
    }
    case 309277:
    {
        returnValue = F("Torschmiedweg");
        break;
    }
    case 309278:
    {
        returnValue = F("Torschreiberweg");
        break;
    }
    case 309279:
    {
        returnValue = F("Torsholter Hauptstr.");
        break;
    }
    case 309280:
    {
        returnValue = F("Torsholter Kirchweg");
        break;
    }
    case 309281:
    {
        returnValue = F("Torsholter Weg");
        break;
    }
    case 309282:
    {
        returnValue = F("Torstr.");
        break;
    }
    case 309283:
    {
        returnValue = F("Torsträßle");
        break;
    }
    case 309284:
    {
        returnValue = F("Tortonastr.");
        break;
    }
    case 309285:
    {
        returnValue = F("Torturmstr.");
        break;
    }
    case 309286:
    {
        returnValue = F("Torumer Ring");
        break;
    }
    case 309287:
    {
        returnValue = F("Torumer Str.");
        break;
    }
    case 309288:
    {
        returnValue = F("Torumer Weg");
        break;
    }
    case 309289:
    {
        returnValue = F("Torwand");
        break;
    }
    case 309290:
    {
        returnValue = F("Torwartgasse");
        break;
    }
    case 309291:
    {
        returnValue = F("Torwasenweg");
        break;
    }
    case 309292:
    {
        returnValue = F("Torweg");
        break;
    }
    case 309293:
    {
        returnValue = F("Torweiher");
        break;
    }
    case 309294:
    {
        returnValue = F("Torweiherweg");
        break;
    }
    case 309295:
    {
        returnValue = F("Torweinberg");
        break;
    }
    case 309296:
    {
        returnValue = F("Torweinbergstr.");
        break;
    }
    case 309297:
    {
        returnValue = F("Torwiese");
        break;
    }
    case 309298:
    {
        returnValue = F("Torwiesen");
        break;
    }
    case 309299:
    {
        returnValue = F("Torwiesenstr.");
        break;
    }
    case 309300:
    {
        returnValue = F("Torwiesenweg");
        break;
    }
    case 309301:
    {
        returnValue = F("Torwiesstr.");
        break;
    }
    case 309302:
    {
        returnValue = F("Toräcker");
        break;
    }
    case 309303:
    {
        returnValue = F("Toräckerstr.");
        break;
    }
    case 309304:
    {
        returnValue = F("Toräckerweg");
        break;
    }
    case 309305:
    {
        returnValue = F("Toscastr.");
        break;
    }
    case 309306:
    {
        returnValue = F("Toschlag");
        break;
    }
    case 309307:
    {
        returnValue = F("Toskanapark");
        break;
    }
    case 309308:
    {
        returnValue = F("Toskanischer Hof");
        break;
    }
    case 309309:
    {
        returnValue = F("Toskewieker Weg");
        break;
    }
    case 309310:
    {
        returnValue = F("Tosmarblick");
        break;
    }
    case 309311:
    {
        returnValue = F("Tossenser Deich");
        break;
    }
    case 309312:
    {
        returnValue = F("Tossenser Str.");
        break;
    }
    case 309313:
    {
        returnValue = F("Tossenthal");
        break;
    }
    case 309314:
    {
        returnValue = F("Tossestr.");
        break;
    }
    case 309315:
    {
        returnValue = F("Tossostr.");
        break;
    }
    case 309316:
    {
        returnValue = F("Tossoweg");
        break;
    }
    case 309317:
    {
        returnValue = F("Tossumer Weg");
        break;
    }
    case 309318:
    {
        returnValue = F("Tostedenstr.");
        break;
    }
    case 309319:
    {
        returnValue = F("Tostedt-Land");
        break;
    }
    case 309320:
    {
        returnValue = F("Tostedter Damm");
        break;
    }
    case 309321:
    {
        returnValue = F("Tostedter Str.");
        break;
    }
    case 309322:
    {
        returnValue = F("Tostedter Weg");
        break;
    }
    case 309323:
    {
        returnValue = F("Tostergloper Str.");
        break;
    }
    case 309324:
    {
        returnValue = F("Tostmannplatz");
        break;
    }
    case 309325:
    {
        returnValue = F("Totemannertal");
        break;
    }
    case 309326:
    {
        returnValue = F("Toten - Weg");
        break;
    }
    case 309327:
    {
        returnValue = F("Totenberg");
        break;
    }
    case 309328:
    {
        returnValue = F("Totenbergweg");
        break;
    }
    case 309329:
    {
        returnValue = F("Totenbrücke");
        break;
    }
    case 309330:
    {
        returnValue = F("Totenbühlstr.");
        break;
    }
    case 309331:
    {
        returnValue = F("Totenbühlweg");
        break;
    }
    case 309332:
    {
        returnValue = F("Totenfall");
        break;
    }
    case 309333:
    {
        returnValue = F("Totengang");
        break;
    }
    case 309334:
    {
        returnValue = F("Totengasse");
        break;
    }
    case 309335:
    {
        returnValue = F("Totengatze");
        break;
    }
    case 309336:
    {
        returnValue = F("Totengrabenweg");
        break;
    }
    case 309337:
    {
        returnValue = F("Totengrund");
        break;
    }
    case 309338:
    {
        returnValue = F("Totengässchen");
        break;
    }
    case 309339:
    {
        returnValue = F("Totengässele");
        break;
    }
    case 309340:
    {
        returnValue = F("Totengässle");
        break;
    }
    case 309341:
    {
        returnValue = F("Totengäßle");
        break;
    }
    case 309342:
    {
        returnValue = F("Totenhoper Weg");
        break;
    }
    case 309343:
    {
        returnValue = F("Totenhäuser Str.");
        break;
    }
    case 309344:
    {
        returnValue = F("Totenhäuser Weg");
        break;
    }
    case 309345:
    {
        returnValue = F("Totenhügel");
        break;
    }
    case 309346:
    {
        returnValue = F("Totenkampsweg");
        break;
    }
    case 309347:
    {
        returnValue = F("Totenkirchenweg");
        break;
    }
    case 309348:
    {
        returnValue = F("Totenkopfstr.");
        break;
    }
    case 309349:
    {
        returnValue = F("Totenkopfäffchen");
        break;
    }
    case 309350:
    {
        returnValue = F("Totenredder");
        break;
    }
    case 309351:
    {
        returnValue = F("Totensteige");
        break;
    }
    case 309352:
    {
        returnValue = F("Totensteinstr.");
        break;
    }
    case 309353:
    {
        returnValue = F("Totental");
        break;
    }
    case 309354:
    {
        returnValue = F("Totenwaldweg");
        break;
    }
    case 309355:
    {
        returnValue = F("Totenweg");
        break;
    }
    case 309356:
    {
        returnValue = F("Totenäcker");
        break;
    }
    case 309357:
    {
        returnValue = F("Toter Mann");
        break;
    }
    case 309358:
    {
        returnValue = F("Toter Mann-Weg");
        break;
    }
    case 309359:
    {
        returnValue = F("Toter Manns Weg");
        break;
    }
    case 309360:
    {
        returnValue = F("Toter Weg");
        break;
    }
    case 309361:
    {
        returnValue = F("Totermannweg");
        break;
    }
    case 309362:
    {
        returnValue = F("Totilastr.");
        break;
    }
    case 309363:
    {
        returnValue = F("Totilaweg");
        break;
    }
    case 309364:
    {
        returnValue = F("Totmoosstr.");
        break;
    }
    case 309365:
    {
        returnValue = F("Totnansweg");
        break;
    }
    case 309366:
    {
        returnValue = F("Toto-Blanke-Weg");
        break;
    }
    case 309367:
    {
        returnValue = F("Tottenbergstr.");
        break;
    }
    case 309368:
    {
        returnValue = F("Tottenheimer Str.");
        break;
    }
    case 309369:
    {
        returnValue = F("Tottenklee");
        break;
    }
    case 309370:
    {
        returnValue = F("Tottensweg");
        break;
    }
    case 309371:
    {
        returnValue = F("Tottigstr.");
        break;
    }
    case 309372:
    {
        returnValue = F("Tottleber Str.");
        break;
    }
    case 309373:
    {
        returnValue = F("Tou Pudding-Schoule");
        break;
    }
    case 309374:
    {
        returnValue = F("Toulouser Allee");
        break;
    }
    case 309375:
    {
        returnValue = F("Tourainer Ring");
        break;
    }
    case 309376:
    {
        returnValue = F("Tourcoingstr.");
        break;
    }
    case 309377:
    {
        returnValue = F("Touristenweg");
        break;
    }
    case 309378:
    {
        returnValue = F("Tourlaviller Wall");
        break;
    }
    case 309379:
    {
        returnValue = F("Tourneaustr.");
        break;
    }
    case 309380:
    {
        returnValue = F("Tournelystr.");
        break;
    }
    case 309381:
    {
        returnValue = F("Tournisauel");
        break;
    }
    case 309382:
    {
        returnValue = F("Tournonstr.");
        break;
    }
    case 309383:
    {
        returnValue = F("Tournuser Platz");
        break;
    }
    case 309384:
    {
        returnValue = F("Tovarer Weg");
        break;
    }
    case 309385:
    {
        returnValue = F("Tovarstr.");
        break;
    }
    case 309386:
    {
        returnValue = F("Towall");
        break;
    }
    case 309387:
    {
        returnValue = F("Toweddern");
        break;
    }
    case 309388:
    {
        returnValue = F("Tower Str.");
        break;
    }
    case 309389:
    {
        returnValue = F("Towerstr.");
        break;
    }
    case 309390:
    {
        returnValue = F("Traarer Kendel");
        break;
    }
    case 309391:
    {
        returnValue = F("Traarer Str.");
        break;
    }
    case 309392:
    {
        returnValue = F("Trab");
        break;
    }
    case 309393:
    {
        returnValue = F("Trabantstr.");
        break;
    }
    case 309394:
    {
        returnValue = F("Trabelsdorfer Hof");
        break;
    }
    case 309395:
    {
        returnValue = F("Trabelsdorfer Weg");
        break;
    }
    case 309396:
    {
        returnValue = F("Traber Str.");
        break;
    }
    case 309397:
    {
        returnValue = F("Traberallee");
        break;
    }
    case 309398:
    {
        returnValue = F("Trabergasse");
        break;
    }
    case 309399:
    {
        returnValue = F("Traberhof");
        break;
    }
    case 309400:
    {
        returnValue = F("Traberhofstr.");
        break;
    }
    case 309401:
    {
        returnValue = F("Trabering");
        break;
    }
    case 309402:
    {
        returnValue = F("Traberpark Den Heyberg");
        break;
    }
    case 309403:
    {
        returnValue = F("Traberstieg");
        break;
    }
    case 309404:
    {
        returnValue = F("Trabertsgasse");
        break;
    }
    case 309405:
    {
        returnValue = F("Trabertweg");
        break;
    }
    case 309406:
    {
        returnValue = F("Traberweg");
        break;
    }
    case 309407:
    {
        returnValue = F("Trabuhn");
        break;
    }
    case 309408:
    {
        returnValue = F("Trabwiesenstr.");
        break;
    }
    case 309409:
    {
        returnValue = F("Trachauer Str.");
        break;
    }
    case 309410:
    {
        returnValue = F("Trachenauer Str.");
        break;
    }
    case 309411:
    {
        returnValue = F("Trachenauer Weg");
        break;
    }
    case 309412:
    {
        returnValue = F("Trachenbergstr.");
        break;
    }
    case 309413:
    {
        returnValue = F("Trachstr.");
        break;
    }
    case 309414:
    {
        returnValue = F("Trachtenweg");
        break;
    }
    case 309415:
    {
        returnValue = F("Trachtlerstr.");
        break;
    }
    case 309416:
    {
        returnValue = F("Trachtlerweg");
        break;
    }
    case 309417:
    {
        returnValue = F("Trackertweg");
        break;
    }
    case 309418:
    {
        returnValue = F("Traco-Park");
        break;
    }
    case 309419:
    {
        returnValue = F("Trad");
        break;
    }
    case 309420:
    {
        returnValue = F("Tradenweg");
        break;
    }
    case 309421:
    {
        returnValue = F("Tradgasse");
        break;
    }
    case 309422:
    {
        returnValue = F("Tradl");
        break;
    }
    case 309423:
    {
        returnValue = F("Tradlmühle");
        break;
    }
    case 309424:
    {
        returnValue = F("Tradstr.");
        break;
    }
    case 309425:
    {
        returnValue = F("Tradtfeld");
        break;
    }
    case 309426:
    {
        returnValue = F("Tradtstr.");
        break;
    }
    case 309427:
    {
        returnValue = F("Tradtweg");
        break;
    }
    case 309428:
    {
        returnValue = F("Tradweg");
        break;
    }
    case 309429:
    {
        returnValue = F("Tradweging");
        break;
    }
    case 309430:
    {
        returnValue = F("Traef");
        break;
    }
    case 309431:
    {
        returnValue = F("Traenkstr.");
        break;
    }
    case 309432:
    {
        returnValue = F("Trafoweg");
        break;
    }
    case 309433:
    {
        returnValue = F("Tragarth");
        break;
    }
    case 309434:
    {
        returnValue = F("Tragarther Str.");
        break;
    }
    case 309435:
    {
        returnValue = F("Tragbergstr.");
        break;
    }
    case 309436:
    {
        returnValue = F("Tragelhöchstädt");
        break;
    }
    case 309437:
    {
        returnValue = F("Tragenreuth");
        break;
    }
    case 309438:
    {
        returnValue = F("Tragenschwander Str.");
        break;
    }
    case 309439:
    {
        returnValue = F("Trageser Str.");
        break;
    }
    case 309440:
    {
        returnValue = F("Trageser Weg");
        break;
    }
    case 309441:
    {
        returnValue = F("Trageserstr.");
        break;
    }
    case 309442:
    {
        returnValue = F("Tragheimerstr.");
        break;
    }
    case 309443:
    {
        returnValue = F("Traglbergstr.");
        break;
    }
    case 309444:
    {
        returnValue = F("Traglhofer Str.");
        break;
    }
    case 309445:
    {
        returnValue = F("Tragolfstr.");
        break;
    }
    case 309446:
    {
        returnValue = F("Tragweiner Eck");
        break;
    }
    case 309447:
    {
        returnValue = F("Trahe");
        break;
    }
    case 309448:
    {
        returnValue = F("Traher Weg");
        break;
    }
    case 309449:
    {
        returnValue = F("Trahtweg");
        break;
    }
    case 309450:
    {
        returnValue = F("Traich");
        break;
    }
    case 309451:
    {
        returnValue = F("Traidersdorf");
        break;
    }
    case 309452:
    {
        returnValue = F("Traifelbergstr.");
        break;
    }
    case 309453:
    {
        returnValue = F("Traifelbergweg");
        break;
    }
    case 309454:
    {
        returnValue = F("Trail");
        break;
    }
    case 309455:
    {
        returnValue = F("Trail \"Burgen- und Schlösserweg");
        break;
    }
    case 309456:
    {
        returnValue = F("Trail Wundergraben");
        break;
    }
    case 309457:
    {
        returnValue = F("Trailfinger Schlucht");
        break;
    }
    case 309458:
    {
        returnValue = F("Trailfinger Str.");
        break;
    }
    case 309459:
    {
        returnValue = F("Trailfinger Weg");
        break;
    }
    case 309460:
    {
        returnValue = F("Trailhof");
        break;
    }
    case 309461:
    {
        returnValue = F("Trailhofweg");
        break;
    }
    case 309462:
    {
        returnValue = F("Trailhöfer Str.");
        break;
    }
    case 309463:
    {
        returnValue = F("Trailsdorfer Str.");
        break;
    }
    case 309464:
    {
        returnValue = F("Traindorfer Str.");
        break;
    }
    case 309465:
    {
        returnValue = F("Traindorfstr.");
        break;
    }
    case 309466:
    {
        returnValue = F("Trainer Str.");
        break;
    }
    case 309467:
    {
        returnValue = F("Trainer Weg");
        break;
    }
    case 309468:
    {
        returnValue = F("Trainerweg");
        break;
    }
    case 309469:
    {
        returnValue = F("Trainingsstrecke");
        break;
    }
    case 309470:
    {
        returnValue = F("Trainsjochstr.");
        break;
    }
    case 309471:
    {
        returnValue = F("Trainsjochweg");
        break;
    }
    case 309472:
    {
        returnValue = F("Trainstr.");
        break;
    }
    case 309473:
    {
        returnValue = F("Trais");
        break;
    }
    case 309474:
    {
        returnValue = F("Trais-Horloffer Str.");
        break;
    }
    case 309475:
    {
        returnValue = F("Trais-Münzenberger-Str.");
        break;
    }
    case 309476:
    {
        returnValue = F("Traisaer Brunnengasse");
        break;
    }
    case 309477:
    {
        returnValue = F("Traisaer Hohlweg");
        break;
    }
    case 309478:
    {
        returnValue = F("Traisaer Str.");
        break;
    }
    case 309479:
    {
        returnValue = F("Traisaer Weg");
        break;
    }
    case 309480:
    {
        returnValue = F("Traisbacher Str.");
        break;
    }
    case 309481:
    {
        returnValue = F("Traisblick");
        break;
    }
    case 309482:
    {
        returnValue = F("Traischbachweg");
        break;
    }
    case 309483:
    {
        returnValue = F("Traisener Str.");
        break;
    }
    case 309484:
    {
        returnValue = F("Traiser Pfad");
        break;
    }
    case 309485:
    {
        returnValue = F("Traiser Weg");
        break;
    }
    case 309486:
    {
        returnValue = F("Traishöchstädt");
        break;
    }
    case 309487:
    {
        returnValue = F("Traispelweg");
        break;
    }
    case 309488:
    {
        returnValue = F("Traisweg");
        break;
    }
    case 309489:
    {
        returnValue = F("Traitenweg");
        break;
    }
    case 309490:
    {
        returnValue = F("Traiteur-Platz");
        break;
    }
    case 309491:
    {
        returnValue = F("Traithenstr.");
        break;
    }
    case 309492:
    {
        returnValue = F("Traitteurstr.");
        break;
    }
    case 309493:
    {
        returnValue = F("Traitteurweg");
        break;
    }
    case 309494:
    {
        returnValue = F("Trajanring");
        break;
    }
    case 309495:
    {
        returnValue = F("Trajanstr.");
        break;
    }
    case 309496:
    {
        returnValue = F("Trajanweg");
        break;
    }
    case 309497:
    {
        returnValue = F("Trakehnener Str.");
        break;
    }
    case 309498:
    {
        returnValue = F("Trakehnenstr.");
        break;
    }
    case 309499:
    {
        returnValue = F("Trakehnenweg");
        break;
    }
    case 309500:
    {
        returnValue = F("Trakehner Allee");
        break;
    }
    case 309501:
    {
        returnValue = F("Trakehner Hof");
        break;
    }
    case 309502:
    {
        returnValue = F("Trakehner Str.");
        break;
    }
    case 309503:
    {
        returnValue = F("Trakehner Weg");
        break;
    }
    case 309504:
    {
        returnValue = F("Trakehnergraben");
        break;
    }
    case 309505:
    {
        returnValue = F("Trakehnerring");
        break;
    }
    case 309506:
    {
        returnValue = F("Trakehnerstr.");
        break;
    }
    case 309507:
    {
        returnValue = F("Trakehnerweg");
        break;
    }
    case 309508:
    {
        returnValue = F("Traktorenstr.");
        break;
    }
    case 309509:
    {
        returnValue = F("Traktorenweg");
        break;
    }
    case 309510:
    {
        returnValue = F("Tralauer Weg");
        break;
    }
    case 309511:
    {
        returnValue = F("Tralens");
        break;
    }
    case 309512:
    {
        returnValue = F("Tralle");
        break;
    }
    case 309513:
    {
        returnValue = F("Trambach");
        break;
    }
    case 309514:
    {
        returnValue = F("Trambalken");
        break;
    }
    case 309515:
    {
        returnValue = F("Traminer Str.");
        break;
    }
    case 309516:
    {
        returnValue = F("Traminer Weg");
        break;
    }
    case 309517:
    {
        returnValue = F("Traminerpfad");
        break;
    }
    case 309518:
    {
        returnValue = F("Traminerstr.");
        break;
    }
    case 309519:
    {
        returnValue = F("Traminerweg");
        break;
    }
    case 309520:
    {
        returnValue = F("Trammer Str.");
        break;
    }
    case 309521:
    {
        returnValue = F("Trammer Weg");
        break;
    }
    case 309522:
    {
        returnValue = F("Trammershof");
        break;
    }
    case 309523:
    {
        returnValue = F("Trammstr.");
        break;
    }
    case 309524:
    {
        returnValue = F("Tramnitzer Str.");
        break;
    }
    case 309525:
    {
        returnValue = F("Trampe");
        break;
    }
    case 309526:
    {
        returnValue = F("Trampelpfad");
        break;
    }
    case 309527:
    {
        returnValue = F("Trampelpfad Ziegeläcker Lautern");
        break;
    }
    case 309528:
    {
        returnValue = F("Trampelpfad mit alter Brücke (auf eigene Gefahr)");
        break;
    }
    case 309529:
    {
        returnValue = F("Trampelpfad zum \"Rheinischen Esel");
        break;
    }
    case 309530:
    {
        returnValue = F("Trampeltier");
        break;
    }
    case 309531:
    {
        returnValue = F("Trampeltiere");
        break;
    }
    case 309532:
    {
        returnValue = F("Trampenhegge");
        break;
    }
    case 309533:
    {
        returnValue = F("Tramper Chaussee");
        break;
    }
    case 309534:
    {
        returnValue = F("Tramper Weg");
        break;
    }
    case 309535:
    {
        returnValue = F("Trampeweg");
        break;
    }
    case 309536:
    {
        returnValue = F("Tramplerstr.");
        break;
    }
    case 309537:
    {
        returnValue = F("Tramser Str.");
        break;
    }
    case 309538:
    {
        returnValue = F("Tramstow");
        break;
    }
    case 309539:
    {
        returnValue = F("Tramstower Str.");
        break;
    }
    case 309540:
    {
        returnValue = F("Tramweg");
        break;
    }
    case 309541:
    {
        returnValue = F("Tranberg");
        break;
    }
    case 309542:
    {
        returnValue = F("Tranbüll");
        break;
    }
    case 309543:
    {
        returnValue = F("Tranendweg");
        break;
    }
    case 309544:
    {
        returnValue = F("Tranholm");
        break;
    }
    case 309545:
    {
        returnValue = F("Traningsgelände des Reitsportvereinś Mihla");
        break;
    }
    case 309546:
    {
        returnValue = F("Tranitzer Str.");
        break;
    }
    case 309547:
    {
        returnValue = F("Trankgasse");
        break;
    }
    case 309548:
    {
        returnValue = F("Trannberg");
        break;
    }
    case 309549:
    {
        returnValue = F("Trannrodaer Str.");
        break;
    }
    case 309550:
    {
        returnValue = F("Tranpad");
        break;
    }
    case 309551:
    {
        returnValue = F("Transfeldstr.");
        break;
    }
    case 309552:
    {
        returnValue = F("Transformatorenweg");
        break;
    }
    case 309553:
    {
        returnValue = F("Transformatorweg");
        break;
    }
    case 309554:
    {
        returnValue = F("Transitstr.");
        break;
    }
    case 309555:
    {
        returnValue = F("Transvaal");
        break;
    }
    case 309556:
    {
        returnValue = F("Transvaaler Str.");
        break;
    }
    case 309557:
    {
        returnValue = F("Transval");
        break;
    }
    case 309558:
    {
        returnValue = F("Trantenrother Weg");
        break;
    }
    case 309559:
    {
        returnValue = F("Trapez");
        break;
    }
    case 309560:
    {
        returnValue = F("Trappbahn");
        break;
    }
    case 309561:
    {
        returnValue = F("Trappbörnchen");
        break;
    }
    case 309562:
    {
        returnValue = F("Trappenbaum");
        break;
    }
    case 309563:
    {
        returnValue = F("Trappenbergstr.");
        break;
    }
    case 309564:
    {
        returnValue = F("Trappenbredde");
        break;
    }
    case 309565:
    {
        returnValue = F("Trappener Weg");
        break;
    }
    case 309566:
    {
        returnValue = F("Trappenfeld");
        break;
    }
    case 309567:
    {
        returnValue = F("Trappenfelder Siedlung");
        break;
    }
    case 309568:
    {
        returnValue = F("Trappenfelder Str.");
        break;
    }
    case 309569:
    {
        returnValue = F("Trappengasse");
        break;
    }
    case 309570:
    {
        returnValue = F("Trappenhardt");
        break;
    }
    case 309571:
    {
        returnValue = F("Trappenkamper Hof");
        break;
    }
    case 309572:
    {
        returnValue = F("Trappenmahle");
        break;
    }
    case 309573:
    {
        returnValue = F("Trappensee");
        break;
    }
    case 309574:
    {
        returnValue = F("Trappenstr.");
        break;
    }
    case 309575:
    {
        returnValue = F("Trappentreustr.");
        break;
    }
    case 309576:
    {
        returnValue = F("Trappenweg");
        break;
    }
    case 309577:
    {
        returnValue = F("Trappesgässje");
        break;
    }
    case 309578:
    {
        returnValue = F("Trappfeld");
        break;
    }
    case 309579:
    {
        returnValue = F("Trappgasse");
        break;
    }
    case 309580:
    {
        returnValue = F("Trapphofstr.");
        break;
    }
    case 309581:
    {
        returnValue = F("Trappistenweg");
        break;
    }
    case 309582:
    {
        returnValue = F("Trappmanns Weg");
        break;
    }
    case 309583:
    {
        returnValue = F("Trappstadter Str.");
        break;
    }
    case 309584:
    {
        returnValue = F("Trappstadter Weg");
        break;
    }
    case 309585:
    {
        returnValue = F("Trappstr.");
        break;
    }
    case 309586:
    {
        returnValue = F("Trappstädter Str.");
        break;
    }
    case 309587:
    {
        returnValue = F("Trappvorlingen");
        break;
    }
    case 309588:
    {
        returnValue = F("Trappweg");
        break;
    }
    case 309589:
    {
        returnValue = F("Trapweg");
        break;
    }
    case 309590:
    {
        returnValue = F("Trarbacher Platz");
        break;
    }
    case 309591:
    {
        returnValue = F("Trarbacher Str.");
        break;
    }
    case 309592:
    {
        returnValue = F("Trarbacher Weg");
        break;
    }
    case 309593:
    {
        returnValue = F("Traren");
        break;
    }
    case 309594:
    {
        returnValue = F("Trasgschieß");
        break;
    }
    case 309595:
    {
        returnValue = F("Trasham");
        break;
    }
    case 309596:
    {
        returnValue = F("Trasse");
        break;
    }
    case 309597:
    {
        returnValue = F("Trasse alte Friedrich-Wilhelm-Nordbahn");
        break;
    }
    case 309598:
    {
        returnValue = F("Trassenheider Chaussee");
        break;
    }
    case 309599:
    {
        returnValue = F("Trassenheider Str.");
        break;
    }
    case 309600:
    {
        returnValue = F("Trassenheider Weg");
        break;
    }
    case 309601:
    {
        returnValue = F("Trassenwald");
        break;
    }
    case 309602:
    {
        returnValue = F("Trassenwaldweg");
        break;
    }
    case 309603:
    {
        returnValue = F("Trassenweg");
        break;
    }
    case 309604:
    {
        returnValue = F("Trasshof");
        break;
    }
    case 309605:
    {
        returnValue = F("Trat");
        break;
    }
    case 309606:
    {
        returnValue = F("Tratberg");
        break;
    }
    case 309607:
    {
        returnValue = F("Tratberg I");
        break;
    }
    case 309608:
    {
        returnValue = F("Tratberg II");
        break;
    }
    case 309609:
    {
        returnValue = F("Tratberg III");
        break;
    }
    case 309610:
    {
        returnValue = F("Tratberg Nord");
        break;
    }
    case 309611:
    {
        returnValue = F("Tratbergstr.");
        break;
    }
    case 309612:
    {
        returnValue = F("Tratenbachweg");
        break;
    }
    case 309613:
    {
        returnValue = F("Tratenweg");
        break;
    }
    case 309614:
    {
        returnValue = F("Tratfeldstr.");
        break;
    }
    case 309615:
    {
        returnValue = F("Trath");
        break;
    }
    case 309616:
    {
        returnValue = F("Trathgasse");
        break;
    }
    case 309617:
    {
        returnValue = F("Trathlohstr.");
        break;
    }
    case 309618:
    {
        returnValue = F("Trathstr.");
        break;
    }
    case 309619:
    {
        returnValue = F("Trathweg");
        break;
    }
    case 309620:
    {
        returnValue = F("Tratmoosweg");
        break;
    }
    case 309621:
    {
        returnValue = F("Tratstr.");
        break;
    }
    case 309622:
    {
        returnValue = F("Trattach");
        break;
    }
    case 309623:
    {
        returnValue = F("Trattangerring");
        break;
    }
    case 309624:
    {
        returnValue = F("Trattbergstr.");
        break;
    }
    case 309625:
    {
        returnValue = F("Trattbergweg");
        break;
    }
    case 309626:
    {
        returnValue = F("Tratteilstr.");
        break;
    }
    case 309627:
    {
        returnValue = F("Trattendorfer Hof");
        break;
    }
    case 309628:
    {
        returnValue = F("Trattendorfer Str.");
        break;
    }
    case 309629:
    {
        returnValue = F("Trattengasse");
        break;
    }
    case 309630:
    {
        returnValue = F("Trattstr.");
        break;
    }
    case 309631:
    {
        returnValue = F("Trattweg");
        break;
    }
    case 309632:
    {
        returnValue = F("Tratweg");
        break;
    }
    case 309633:
    {
        returnValue = F("Tratwiesenweg");
        break;
    }
    case 309634:
    {
        returnValue = F("Tratzbergstr.");
        break;
    }
    case 309635:
    {
        returnValue = F("Tratäckerweg");
        break;
    }
    case 309636:
    {
        returnValue = F("Traubagässle");
        break;
    }
    case 309637:
    {
        returnValue = F("Trauben");
        break;
    }
    case 309638:
    {
        returnValue = F("Traubenbergstr.");
        break;
    }
    case 309639:
    {
        returnValue = F("Traubenbergweg");
        break;
    }
    case 309640:
    {
        returnValue = F("Traubenbreite");
        break;
    }
    case 309641:
    {
        returnValue = F("Traubeneichenstr.");
        break;
    }
    case 309642:
    {
        returnValue = F("Traubengasse");
        break;
    }
    case 309643:
    {
        returnValue = F("Traubengassl");
        break;
    }
    case 309644:
    {
        returnValue = F("Traubengäßchen");
        break;
    }
    case 309645:
    {
        returnValue = F("Traubenhüttenweg");
        break;
    }
    case 309646:
    {
        returnValue = F("Traubenkirschenweg");
        break;
    }
    case 309647:
    {
        returnValue = F("Traubenkreisel");
        break;
    }
    case 309648:
    {
        returnValue = F("Traubenplatz");
        break;
    }
    case 309649:
    {
        returnValue = F("Traubenschneise");
        break;
    }
    case 309650:
    {
        returnValue = F("Traubensteige");
        break;
    }
    case 309651:
    {
        returnValue = F("Traubenstr.");
        break;
    }
    case 309652:
    {
        returnValue = F("Traubenweg");
        break;
    }
    case 309653:
    {
        returnValue = F("Traubenwirtsgasse");
        break;
    }
    case 309654:
    {
        returnValue = F("Traubenäckerweg");
        break;
    }
    case 309655:
    {
        returnValue = F("Trauberstr.");
        break;
    }
    case 309656:
    {
        returnValue = F("Traubinger Moosweg");
        break;
    }
    case 309657:
    {
        returnValue = F("Traubinger Str.");
        break;
    }
    case 309658:
    {
        returnValue = F("Traubstr.");
        break;
    }
    case 309659:
    {
        returnValue = F("Traubweg");
        break;
    }
    case 309660:
    {
        returnValue = F("Trauchbergweg");
        break;
    }
    case 309661:
    {
        returnValue = F("Trauchburgstr.");
        break;
    }
    case 309662:
    {
        returnValue = F("Trauchgaustr.");
        break;
    }
    case 309663:
    {
        returnValue = F("Traudis Winkel");
        break;
    }
    case 309664:
    {
        returnValue = F("Trauener Str.");
        break;
    }
    case 309665:
    {
        returnValue = F("Trauener Weg");
        break;
    }
    case 309666:
    {
        returnValue = F("Traueraustr.");
        break;
    }
    case 309667:
    {
        returnValue = F("Trauerberg");
        break;
    }
    case 309668:
    {
        returnValue = F("Traueweg");
        break;
    }
    case 309669:
    {
        returnValue = F("Traufblick");
        break;
    }
    case 309670:
    {
        returnValue = F("Traufelder Str.");
        break;
    }
    case 309671:
    {
        returnValue = F("Traufenstr.");
        break;
    }
    case 309672:
    {
        returnValue = F("Traufrundweg");
        break;
    }
    case 309673:
    {
        returnValue = F("Traufweg");
        break;
    }
    case 309674:
    {
        returnValue = F("Traufweg Koshauweg");
        break;
    }
    case 309675:
    {
        returnValue = F("Traufweg Lauch");
        break;
    }
    case 309676:
    {
        returnValue = F("Traufweg Lindenhöfe");
        break;
    }
    case 309677:
    {
        returnValue = F("Traufwegle");
        break;
    }
    case 309678:
    {
        returnValue = F("Traugott-Bender-Weg");
        break;
    }
    case 309679:
    {
        returnValue = F("Traugott-Golde-Str.");
        break;
    }
    case 309680:
    {
        returnValue = F("Traugottsteinweg");
        break;
    }
    case 309681:
    {
        returnValue = F("Trauloher Weg");
        break;
    }
    case 309682:
    {
        returnValue = F("Traumannswald");
        break;
    }
    case 309683:
    {
        returnValue = F("Traumflügel");
        break;
    }
    case 309684:
    {
        returnValue = F("Traumpfad");
        break;
    }
    case 309685:
    {
        returnValue = F("Traumpfade, Waldschluchtenweg");
        break;
    }
    case 309686:
    {
        returnValue = F("Traumschleife Kirschweiler Festung");
        break;
    }
    case 309687:
    {
        returnValue = F("Traumstr.");
        break;
    }
    case 309688:
    {
        returnValue = F("Traumwiesenweg");
        break;
    }
    case 309689:
    {
        returnValue = F("Traumühlweg");
        break;
    }
    case 309690:
    {
        returnValue = F("Traun");
        break;
    }
    case 309691:
    {
        returnValue = F("Traun und Abensbergweg");
        break;
    }
    case 309692:
    {
        returnValue = F("Traundamm");
        break;
    }
    case 309693:
    {
        returnValue = F("Traundorf");
        break;
    }
    case 309694:
    {
        returnValue = F("Traunerstr.");
        break;
    }
    case 309695:
    {
        returnValue = F("Traunerweg");
        break;
    }
    case 309696:
    {
        returnValue = F("Traunfeldstr.");
        break;
    }
    case 309697:
    {
        returnValue = F("Traunreuter Str.");
        break;
    }
    case 309698:
    {
        returnValue = F("Traunring");
        break;
    }
    case 309699:
    {
        returnValue = F("Traunseeweg");
        break;
    }
    case 309700:
    {
        returnValue = F("Traunsteiner Str.");
        break;
    }
    case 309701:
    {
        returnValue = F("Traunsteiner Str. 2-4");
        break;
    }
    case 309702:
    {
        returnValue = F("Traunstorfer Str.");
        break;
    }
    case 309703:
    {
        returnValue = F("Traunstr.");
        break;
    }
    case 309704:
    {
        returnValue = F("Trauntalbrücke");
        break;
    }
    case 309705:
    {
        returnValue = F("Trauntalweg");
        break;
    }
    case 309706:
    {
        returnValue = F("Traunwalchener Str.");
        break;
    }
    case 309707:
    {
        returnValue = F("Traunweg");
        break;
    }
    case 309708:
    {
        returnValue = F("Traupitzer Dorfstr.");
        break;
    }
    case 309709:
    {
        returnValue = F("Traupitzer Str.");
        break;
    }
    case 309710:
    {
        returnValue = F("Traupitzer Weg");
        break;
    }
    case 309711:
    {
        returnValue = F("Trauschendorf");
        break;
    }
    case 309712:
    {
        returnValue = F("Trauschendorfer Weg");
        break;
    }
    case 309713:
    {
        returnValue = F("Trauschkenweg");
        break;
    }
    case 309714:
    {
        returnValue = F("Trausterbachstr.");
        break;
    }
    case 309715:
    {
        returnValue = F("Traute-Riedemann-Str.");
        break;
    }
    case 309716:
    {
        returnValue = F("Trautenauer Str.");
        break;
    }
    case 309717:
    {
        returnValue = F("Trautenauer Weg");
        break;
    }
    case 309718:
    {
        returnValue = F("Trautenaustr.");
        break;
    }
    case 309719:
    {
        returnValue = F("Trautenberg");
        break;
    }
    case 309720:
    {
        returnValue = F("Trautenberger Str.");
        break;
    }
    case 309721:
    {
        returnValue = F("Trautenbergstr.");
        break;
    }
    case 309722:
    {
        returnValue = F("Trautenfeldstr.");
        break;
    }
    case 309723:
    {
        returnValue = F("Trautenhardtweg");
        break;
    }
    case 309724:
    {
        returnValue = F("Trautenhof");
        break;
    }
    case 309725:
    {
        returnValue = F("Trautenmühleweg");
        break;
    }
    case 309726:
    {
        returnValue = F("Trautenplanie");
        break;
    }
    case 309727:
    {
        returnValue = F("Trautenstr.");
        break;
    }
    case 309728:
    {
        returnValue = F("Trauterfing");
        break;
    }
    case 309729:
    {
        returnValue = F("Trautersdorf");
        break;
    }
    case 309730:
    {
        returnValue = F("Trautersdorfer Str.");
        break;
    }
    case 309731:
    {
        returnValue = F("Trautlergasse");
        break;
    }
    case 309732:
    {
        returnValue = F("Trautmannshofener Str.");
        break;
    }
    case 309733:
    {
        returnValue = F("Trautmannshöhe");
        break;
    }
    case 309734:
    {
        returnValue = F("Trautmannstr.");
        break;
    }
    case 309735:
    {
        returnValue = F("Trautnerstr.");
        break;
    }
    case 309736:
    {
        returnValue = F("Trautscheit");
        break;
    }
    case 309737:
    {
        returnValue = F("Trautstr.");
        break;
    }
    case 309738:
    {
        returnValue = F("Trautvetterstr.");
        break;
    }
    case 309739:
    {
        returnValue = F("Trautweinstr.");
        break;
    }
    case 309740:
    {
        returnValue = F("Trautzberg");
        break;
    }
    case 309741:
    {
        returnValue = F("Trauweg");
        break;
    }
    case 309742:
    {
        returnValue = F("Trauzenbachweg");
        break;
    }
    case 309743:
    {
        returnValue = F("Trave I");
        break;
    }
    case 309744:
    {
        returnValue = F("Traveberg");
        break;
    }
    case 309745:
    {
        returnValue = F("Travegrund");
        break;
    }
    case 309746:
    {
        returnValue = F("Travelmannstr.");
        break;
    }
    case 309747:
    {
        returnValue = F("Travels");
        break;
    }
    case 309748:
    {
        returnValue = F("Travemünder Allee");
        break;
    }
    case 309749:
    {
        returnValue = F("Travemünder Landstr.");
        break;
    }
    case 309750:
    {
        returnValue = F("Travemünder Str.");
        break;
    }
    case 309751:
    {
        returnValue = F("Travemünder Weg");
        break;
    }
    case 309752:
    {
        returnValue = F("Travenhöhe");
        break;
    }
    case 309753:
    {
        returnValue = F("Travenort");
        break;
    }
    case 309754:
    {
        returnValue = F("Travenstieg");
        break;
    }
    case 309755:
    {
        returnValue = F("Travenstr.");
        break;
    }
    case 309756:
    {
        returnValue = F("Traventhaler Str.");
        break;
    }
    case 309757:
    {
        returnValue = F("Traveredder");
        break;
    }
    case 309758:
    {
        returnValue = F("Traversale");
        break;
    }
    case 309759:
    {
        returnValue = F("Travertinstr.");
        break;
    }
    case 309760:
    {
        returnValue = F("Travestieg");
        break;
    }
    case 309761:
    {
        returnValue = F("Travestr.");
        break;
    }
    case 309762:
    {
        returnValue = F("Traveweg");
        break;
    }
    case 309763:
    {
        returnValue = F("Traweg");
        break;
    }
    case 309764:
    {
        returnValue = F("Traxenberg");
        break;
    }
    case 309765:
    {
        returnValue = F("Trayhstr.");
        break;
    }
    case 309766:
    {
        returnValue = F("Traßlberg");
        break;
    }
    case 309767:
    {
        returnValue = F("Traßlberger Str.");
        break;
    }
    case 309768:
    {
        returnValue = F("Traßmiething");
        break;
    }
    case 309769:
    {
        returnValue = F("Treb");
        break;
    }
    case 309770:
    {
        returnValue = F("Trebachsweg");
        break;
    }
    case 309771:
    {
        returnValue = F("Trebanitzer Str.");
        break;
    }
    case 309772:
    {
        returnValue = F("Trebanz");
        break;
    }
    case 309773:
    {
        returnValue = F("Trebatscher Hauptstr.");
        break;
    }
    case 309774:
    {
        returnValue = F("Trebbelin");
        break;
    }
    case 309775:
    {
        returnValue = F("Trebbichauer Lindenstr.");
        break;
    }
    case 309776:
    {
        returnValue = F("Trebbiner Allee");
        break;
    }
    case 309777:
    {
        returnValue = F("Trebbiner Chaussee");
        break;
    }
    case 309778:
    {
        returnValue = F("Trebbiner Damm");
        break;
    }
    case 309779:
    {
        returnValue = F("Trebbiner Eichenhof");
        break;
    }
    case 309780:
    {
        returnValue = F("Trebbiner Gartenstr.");
        break;
    }
    case 309781:
    {
        returnValue = F("Trebbiner Landstr.");
        break;
    }
    case 309782:
    {
        returnValue = F("Trebbiner Str.");
        break;
    }
    case 309783:
    {
        returnValue = F("Trebbiner Tor");
        break;
    }
    case 309784:
    {
        returnValue = F("Trebbiner Weg");
        break;
    }
    case 309785:
    {
        returnValue = F("Trebbinsgasse");
        break;
    }
    case 309786:
    {
        returnValue = F("Trebbower Landweg");
        break;
    }
    case 309787:
    {
        returnValue = F("Trebbower Str.");
        break;
    }
    case 309788:
    {
        returnValue = F("Trebbower Weg");
        break;
    }
    case 309789:
    {
        returnValue = F("Trebbus");
        break;
    }
    case 309790:
    {
        returnValue = F("Trebbuser Weg");
        break;
    }
    case 309791:
    {
        returnValue = F("Trebe");
        break;
    }
    case 309792:
    {
        returnValue = F("Trebelehof");
        break;
    }
    case 309793:
    {
        returnValue = F("Trebeler Mastenweg");
        break;
    }
    case 309794:
    {
        returnValue = F("Trebelshainer Str.");
        break;
    }
    case 309795:
    {
        returnValue = F("Trebelstr.");
        break;
    }
    case 309796:
    {
        returnValue = F("Trebelweg");
        break;
    }
    case 309797:
    {
        returnValue = F("Trebener Str.");
        break;
    }
    case 309798:
    {
        returnValue = F("Trebenow");
        break;
    }
    case 309799:
    {
        returnValue = F("Trebenstr.");
        break;
    }
    case 309800:
    {
        returnValue = F("Trebenweg");
        break;
    }
    case 309801:
    {
        returnValue = F("Treberg");
        break;
    }
    case 309802:
    {
        returnValue = F("Trebergasse");
        break;
    }
    case 309803:
    {
        returnValue = F("Trebestr.");
        break;
    }
    case 309804:
    {
        returnValue = F("Trebetastr.");
        break;
    }
    case 309805:
    {
        returnValue = F("Trebeweg");
        break;
    }
    case 309806:
    {
        returnValue = F("Trebgastweg");
        break;
    }
    case 309807:
    {
        returnValue = F("Trebicer Weg");
        break;
    }
    case 309808:
    {
        returnValue = F("Trebin");
        break;
    }
    case 309809:
    {
        returnValue = F("Trebishainer Str.");
        break;
    }
    case 309810:
    {
        returnValue = F("Trebitz");
        break;
    }
    case 309811:
    {
        returnValue = F("Trebitzer Dorfstr.");
        break;
    }
    case 309812:
    {
        returnValue = F("Trebitzer Str.");
        break;
    }
    case 309813:
    {
        returnValue = F("Trebitzer Weg");
        break;
    }
    case 309814:
    {
        returnValue = F("Treblitzsch");
        break;
    }
    case 309815:
    {
        returnValue = F("Trebnitz");
        break;
    }
    case 309816:
    {
        returnValue = F("Trebnitzer Bahnhofstr.");
        break;
    }
    case 309817:
    {
        returnValue = F("Trebnitzer Dorfstr.");
        break;
    }
    case 309818:
    {
        returnValue = F("Trebnitzer Hauptstr.");
        break;
    }
    case 309819:
    {
        returnValue = F("Trebnitzer Park");
        break;
    }
    case 309820:
    {
        returnValue = F("Trebnitzer Platz");
        break;
    }
    case 309821:
    {
        returnValue = F("Trebnitzer Str.");
        break;
    }
    case 309822:
    {
        returnValue = F("Trebnitzer Weg");
        break;
    }
    case 309823:
    {
        returnValue = F("Trebnitzgrund");
        break;
    }
    case 309824:
    {
        returnValue = F("Trebnitzstr.");
        break;
    }
    case 309825:
    {
        returnValue = F("Treboniusstr.");
        break;
    }
    case 309826:
    {
        returnValue = F("Trebraer Str.");
        break;
    }
    case 309827:
    {
        returnValue = F("Trebrastr.");
        break;
    }
    case 309828:
    {
        returnValue = F("Trebs");
        break;
    }
    case 309829:
    {
        returnValue = F("Trebsauer Str.");
        break;
    }
    case 309830:
    {
        returnValue = F("Trebsener Landstr.");
        break;
    }
    case 309831:
    {
        returnValue = F("Trebsener Str.");
        break;
    }
    case 309832:
    {
        returnValue = F("Trebser Weg");
        break;
    }
    case 309833:
    {
        returnValue = F("Trebulaer Hauptstr.");
        break;
    }
    case 309834:
    {
        returnValue = F("Treburer Str.");
        break;
    }
    case 309835:
    {
        returnValue = F("Treburer große Schneise");
        break;
    }
    case 309836:
    {
        returnValue = F("Treburer-Waldschneise");
        break;
    }
    case 309837:
    {
        returnValue = F("Trebuser Chaussee");
        break;
    }
    case 309838:
    {
        returnValue = F("Trebuser Heuweg");
        break;
    }
    case 309839:
    {
        returnValue = F("Trebuser Str.");
        break;
    }
    case 309840:
    {
        returnValue = F("Trechower Weg");
        break;
    }
    case 309841:
    {
        returnValue = F("Trechterweg");
        break;
    }
    case 309842:
    {
        returnValue = F("Trechwitzer Str.");
        break;
    }
    case 309843:
    {
        returnValue = F("Trecker PFAD");
        break;
    }
    case 309844:
    {
        returnValue = F("Treckfahrtsweg");
        break;
    }
    case 309845:
    {
        returnValue = F("Treckgasse");
        break;
    }
    case 309846:
    {
        returnValue = F("Treckinghauser Str.");
        break;
    }
    case 309847:
    {
        returnValue = F("Trecklenkamp");
        break;
    }
    case 309848:
    {
        returnValue = F("Treckpad");
        break;
    }
    case 309849:
    {
        returnValue = F("Trecksbrücke");
        break;
    }
    case 309850:
    {
        returnValue = F("Trecktal");
        break;
    }
    case 309851:
    {
        returnValue = F("Treckweg");
        break;
    }
    case 309852:
    {
        returnValue = F("Tredde");
        break;
    }
    case 309853:
    {
        returnValue = F("Treddenweg");
        break;
    }
    case 309854:
    {
        returnValue = F("Treekerdyck");
        break;
    }
    case 309855:
    {
        returnValue = F("Treembeck");
        break;
    }
    case 309856:
    {
        returnValue = F("Treeneblick");
        break;
    }
    case 309857:
    {
        returnValue = F("Treenepark");
        break;
    }
    case 309858:
    {
        returnValue = F("Treenering");
        break;
    }
    case 309859:
    {
        returnValue = F("Treenesiedlung");
        break;
    }
    case 309860:
    {
        returnValue = F("Treenestr.");
        break;
    }
    case 309861:
    {
        returnValue = F("Treenetal");
        break;
    }
    case 309862:
    {
        returnValue = F("Treeneweg");
        break;
    }
    case 309863:
    {
        returnValue = F("Treenewiesen");
        break;
    }
    case 309864:
    {
        returnValue = F("Treesenweg");
        break;
    }
    case 309865:
    {
        returnValue = F("Treffelhauser Str.");
        break;
    }
    case 309866:
    {
        returnValue = F("Treffelsheimer Str.");
        break;
    }
    case 309867:
    {
        returnValue = F("Treffener Ring");
        break;
    }
    case 309868:
    {
        returnValue = F("Treffensbuch");
        break;
    }
    case 309869:
    {
        returnValue = F("Treffensbucher Str.");
        break;
    }
    case 309870:
    {
        returnValue = F("Treffensbucher Weg");
        break;
    }
    case 309871:
    {
        returnValue = F("Treffentrill");
        break;
    }
    case 309872:
    {
        returnValue = F("Treffenweg");
        break;
    }
    case 309873:
    {
        returnValue = F("Treffersäge");
        break;
    }
    case 309874:
    {
        returnValue = F("Treffisried");
        break;
    }
    case 309875:
    {
        returnValue = F("Trefflerstr.");
        break;
    }
    case 309876:
    {
        returnValue = F("Treffpunkt Bürgergarten");
        break;
    }
    case 309877:
    {
        returnValue = F("Treffurter Str.");
        break;
    }
    case 309878:
    {
        returnValue = F("Treffurter Weg");
        break;
    }
    case 309879:
    {
        returnValue = F("Treffurthstr.");
        break;
    }
    case 309880:
    {
        returnValue = F("Treflinger Weg");
        break;
    }
    case 309881:
    {
        returnValue = F("Treflinsklingenweg");
        break;
    }
    case 309882:
    {
        returnValue = F("Tregenstr.");
        break;
    }
    case 309883:
    {
        returnValue = F("Treherzer Str.");
        break;
    }
    case 309884:
    {
        returnValue = F("Treib");
        break;
    }
    case 309885:
    {
        returnValue = F("Treibbach");
        break;
    }
    case 309886:
    {
        returnValue = F("Treibe");
        break;
    }
    case 309887:
    {
        returnValue = F("Treibelsbergstr.");
        break;
    }
    case 309888:
    {
        returnValue = F("Treibenweg");
        break;
    }
    case 309889:
    {
        returnValue = F("Treibergasse");
        break;
    }
    case 309890:
    {
        returnValue = F("Treiberpfad");
        break;
    }
    case 309891:
    {
        returnValue = F("Treiberstr.");
        break;
    }
    case 309892:
    {
        returnValue = F("Treibersweg");
        break;
    }
    case 309893:
    {
        returnValue = F("Treiberweg");
        break;
    }
    case 309894:
    {
        returnValue = F("Treibestr.");
        break;
    }
    case 309895:
    {
        returnValue = F("Treibeweg");
        break;
    }
    case 309896:
    {
        returnValue = F("Treibgasse");
        break;
    }
    case 309897:
    {
        returnValue = F("Treibholz");
        break;
    }
    case 309898:
    {
        returnValue = F("Treibseeweg");
        break;
    }
    case 309899:
    {
        returnValue = F("Treibstr.");
        break;
    }
    case 309900:
    {
        returnValue = F("Treibweg");
        break;
    }
    case 309901:
    {
        returnValue = F("Treidelheimer Str.");
        break;
    }
    case 309902:
    {
        returnValue = F("Treidelpfad");
        break;
    }
    case 309903:
    {
        returnValue = F("Treidelsweg");
        break;
    }
    case 309904:
    {
        returnValue = F("Treidelweg");
        break;
    }
    case 309905:
    {
        returnValue = F("Treidlergasse");
        break;
    }
    case 309906:
    {
        returnValue = F("Treidlerweg");
        break;
    }
    case 309907:
    {
        returnValue = F("Treidlkofener Str.");
        break;
    }
    case 309908:
    {
        returnValue = F("Treiergasse");
        break;
    }
    case 309909:
    {
        returnValue = F("Treinenfeld");
        break;
    }
    case 309910:
    {
        returnValue = F("Treisbacher Weg");
        break;
    }
    case 309911:
    {
        returnValue = F("Treisbachstr.");
        break;
    }
    case 309912:
    {
        returnValue = F("Treisbachweg");
        break;
    }
    case 309913:
    {
        returnValue = F("Treisberger Weg");
        break;
    }
    case 309914:
    {
        returnValue = F("Treischfeld");
        break;
    }
    case 309915:
    {
        returnValue = F("Treisental");
        break;
    }
    case 309916:
    {
        returnValue = F("Treiser Pfad");
        break;
    }
    case 309917:
    {
        returnValue = F("Treiser Str.");
        break;
    }
    case 309918:
    {
        returnValue = F("Treiser Weg");
        break;
    }
    case 309919:
    {
        returnValue = F("Treistr.");
        break;
    }
    case 309920:
    {
        returnValue = F("Treistrift");
        break;
    }
    case 309921:
    {
        returnValue = F("Treisweg");
        break;
    }
    case 309922:
    {
        returnValue = F("Treitschkestr.");
        break;
    }
    case 309923:
    {
        returnValue = F("Treiweg");
        break;
    }
    case 309924:
    {
        returnValue = F("Trelder Berg");
        break;
    }
    case 309925:
    {
        returnValue = F("Trelder Dorfstr.");
        break;
    }
    case 309926:
    {
        returnValue = F("Trelder Str.");
        break;
    }
    case 309927:
    {
        returnValue = F("Trelder Weg");
        break;
    }
    case 309928:
    {
        returnValue = F("Trelleborgallee");
        break;
    }
    case 309929:
    {
        returnValue = F("Trelleborger Str.");
        break;
    }
    case 309930:
    {
        returnValue = F("Trelleborger Weg");
        break;
    }
    case 309931:
    {
        returnValue = F("Trelleborgstr.");
        break;
    }
    case 309932:
    {
        returnValue = F("Trelleborgweg");
        break;
    }
    case 309933:
    {
        returnValue = F("Trellenweg");
        break;
    }
    case 309934:
    {
        returnValue = F("Treller");
        break;
    }
    case 309935:
    {
        returnValue = F("Trellhof");
        break;
    }
    case 309936:
    {
        returnValue = F("Trellingereck");
        break;
    }
    case 309937:
    {
        returnValue = F("Tremauer Weg");
        break;
    }
    case 309938:
    {
        returnValue = F("Tremersdorfer Str.");
        break;
    }
    case 309939:
    {
        returnValue = F("Tremmelhauser Str.");
        break;
    }
    case 309940:
    {
        returnValue = F("Tremmelhauserhöhe");
        break;
    }
    case 309941:
    {
        returnValue = F("Tremmelhauserweg");
        break;
    }
    case 309942:
    {
        returnValue = F("Tremmelschwanger Str.");
        break;
    }
    case 309943:
    {
        returnValue = F("Tremmelstr.");
        break;
    }
    case 309944:
    {
        returnValue = F("Tremmener Landstr.");
        break;
    }
    case 309945:
    {
        returnValue = F("Tremmener Str.");
        break;
    }
    case 309946:
    {
        returnValue = F("Tremmener Weg");
        break;
    }
    case 309947:
    {
        returnValue = F("Tremmerupweg");
        break;
    }
    case 309948:
    {
        returnValue = F("Tremmlallee");
        break;
    }
    case 309949:
    {
        returnValue = F("Tremnitz");
        break;
    }
    case 309950:
    {
        returnValue = F("Tremnitzer Str.");
        break;
    }
    case 309951:
    {
        returnValue = F("Trempersweg");
        break;
    }
    case 309952:
    {
        returnValue = F("Tremsbütteler Weg");
        break;
    }
    case 309953:
    {
        returnValue = F("Tremsdorfer Dorfstr.");
        break;
    }
    case 309954:
    {
        returnValue = F("Tremsdorfer Str.");
        break;
    }
    case 309955:
    {
        returnValue = F("Tremsdorfer Weg");
        break;
    }
    case 309956:
    {
        returnValue = F("Tremsenplatz");
        break;
    }
    case 309957:
    {
        returnValue = F("Tremsenweg");
        break;
    }
    case 309958:
    {
        returnValue = F("Tremskamp");
        break;
    }
    case 309959:
    {
        returnValue = F("Trenbachstr.");
        break;
    }
    case 309960:
    {
        returnValue = F("Trenbeckstr.");
        break;
    }
    case 309961:
    {
        returnValue = F("Trenckelgrund");
        break;
    }
    case 309962:
    {
        returnValue = F("Trenckmannstr.");
        break;
    }
    case 309963:
    {
        returnValue = F("Trenckstr.");
        break;
    }
    case 309964:
    {
        returnValue = F("Trendelburger Str.");
        break;
    }
    case 309965:
    {
        returnValue = F("Trendelburger Weg");
        break;
    }
    case 309966:
    {
        returnValue = F("Trendelbuscher Weg");
        break;
    }
    case 309967:
    {
        returnValue = F("Trendelheide");
        break;
    }
    case 309968:
    {
        returnValue = F("Trendelmoor");
        break;
    }
    case 309969:
    {
        returnValue = F("Trendelnweg");
        break;
    }
    case 309970:
    {
        returnValue = F("Trendelstr.");
        break;
    }
    case 309971:
    {
        returnValue = F("Trendermarschweg");
        break;
    }
    case 309972:
    {
        returnValue = F("Trengweg");
        break;
    }
    case 309973:
    {
        returnValue = F("Trenkampstr.");
        break;
    }
    case 309974:
    {
        returnValue = F("Trenkelbachstr.");
        break;
    }
    case 309975:
    {
        returnValue = F("Trenkelhof");
        break;
    }
    case 309976:
    {
        returnValue = F("Trenkelhofer Str.");
        break;
    }
    case 309977:
    {
        returnValue = F("Trenkerberg");
        break;
    }
    case 309978:
    {
        returnValue = F("Trenkerstr.");
        break;
    }
    case 309979:
    {
        returnValue = F("Trenkgasse");
        break;
    }
    case 309980:
    {
        returnValue = F("Trenkmoos");
        break;
    }
    case 309981:
    {
        returnValue = F("Trenndiek");
        break;
    }
    case 309982:
    {
        returnValue = F("Trennemoor");
        break;
    }
    case 309983:
    {
        returnValue = F("Trennewurther Str.");
        break;
    }
    case 309984:
    {
        returnValue = F("Trennewurtheraltendeich");
        break;
    }
    case 309985:
    {
        returnValue = F("Trennewurtherneuendeich");
        break;
    }
    case 309986:
    {
        returnValue = F("Trennfurter Str.");
        break;
    }
    case 309987:
    {
        returnValue = F("Trenngasse");
        break;
    }
    case 309988:
    {
        returnValue = F("Trennmooren");
        break;
    }
    case 309989:
    {
        returnValue = F("Trennmoorweg");
        break;
    }
    case 309990:
    {
        returnValue = F("Trenntrader Weg");
        break;
    }
    case 309991:
    {
        returnValue = F("Trennweg");
        break;
    }
    case 309992:
    {
        returnValue = F("Trensahler Weg");
        break;
    }
    case 309993:
    {
        returnValue = F("Trenschelweg");
        break;
    }
    case 309994:
    {
        returnValue = F("Trensenweg");
        break;
    }
    case 309995:
    {
        returnValue = F("Trenstiin");
        break;
    }
    case 309996:
    {
        returnValue = F("Trensweg");
        break;
    }
    case 309997:
    {
        returnValue = F("Trentelmoorweg");
        break;
    }
    case 309998:
    {
        returnValue = F("Trenthoopsweg");
        break;
    }
    case 309999:
    {
        returnValue = F("Trenthorst");
        break;
    }
    case 310000:
    {
        returnValue = F("Trenthorster Str.");
        break;
    }
    case 310001:
    {
        returnValue = F("Trenthöpen");
        break;
    }
    case 310002:
    {
        returnValue = F("Trenthöper Weg");
        break;
    }
    case 310003:
    {
        returnValue = F("Trentiner Ring");
        break;
    }
    case 310004:
    {
        returnValue = F("Trentiner Str.");
        break;
    }
    case 310005:
    {
        returnValue = F("Trentlager Weg");
        break;
    }
    case 310006:
    {
        returnValue = F("Trentrade");
        break;
    }
    case 310007:
    {
        returnValue = F("Trentseehöhe");
        break;
    }
    case 310008:
    {
        returnValue = F("Trentseeweg");
        break;
    }
    case 310009:
    {
        returnValue = F("Treonstr.");
        break;
    }
    case 310010:
    {
        returnValue = F("Treppacher Str.");
        break;
    }
    case 310011:
    {
        returnValue = F("Treppe Eschweger Pfad");
        break;
    }
    case 310012:
    {
        returnValue = F("Treppe Moltke-Brücke");
        break;
    }
    case 310013:
    {
        returnValue = F("Treppe(Stauffenb.-Wildstr.)");
        break;
    }
    case 310014:
    {
        returnValue = F("Treppelklingenweg");
        break;
    }
    case 310015:
    {
        returnValue = F("Treppelmühle");
        break;
    }
    case 310016:
    {
        returnValue = F("Treppelner Schulstr.");
        break;
    }
    case 310017:
    {
        returnValue = F("Treppelner Str.");
        break;
    }
    case 310018:
    {
        returnValue = F("Treppelner Weg");
        break;
    }
    case 310019:
    {
        returnValue = F("Treppelpflaster");
        break;
    }
    case 310020:
    {
        returnValue = F("Treppenanlage");
        break;
    }
    case 310021:
    {
        returnValue = F("Treppenberg");
        break;
    }
    case 310022:
    {
        returnValue = F("Treppendorf");
        break;
    }
    case 310023:
    {
        returnValue = F("Treppendorfer Str.");
        break;
    }
    case 310024:
    {
        returnValue = F("Treppendorfer Weg");
        break;
    }
    case 310025:
    {
        returnValue = F("Treppengasse");
        break;
    }
    case 310026:
    {
        returnValue = F("Treppengässchen");
        break;
    }
    case 310027:
    {
        returnValue = F("Treppenholz");
        break;
    }
    case 310028:
    {
        returnValue = F("Treppenkamp");
        break;
    }
    case 310029:
    {
        returnValue = F("Treppensteg");
        break;
    }
    case 310030:
    {
        returnValue = F("Treppensteig");
        break;
    }
    case 356515:
    {
        returnValue = F("tartan");
        break;
    }
    case 356516:
    {
        returnValue = F("team Allee");
        break;
    }
    case 356517:
    {
        returnValue = F("temporärer Fuß- und Rad-Notweg");
        break;
    }
    case 356518:
    {
        returnValue = F("ten-Brink-Str.");
        break;
    }
    case 356519:
    {
        returnValue = F("ten-Welberg-Str.");
        break;
    }
    case 356520:
    {
        returnValue = F("term Flecken");
        break;
    }
    case 356521:
    {
        returnValue = F("tom-Brok-Str.");
        break;
    }
    case 356522:
    {
        returnValue = F("tom-Ring-Str.");
        break;
    }
    }
    return returnValue;
}
