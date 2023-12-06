#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameB2(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 50005:
    {
        returnValue = F("Baumblüte");
        break;
    }
    case 50006:
    {
        returnValue = F("Baumbreite");
        break;
    }
    case 50007:
    {
        returnValue = F("Baumburggasse");
        break;
    }
    case 50008:
    {
        returnValue = F("Baumburgstr.");
        break;
    }
    case 50009:
    {
        returnValue = F("Baumbuschstr.");
        break;
    }
    case 50010:
    {
        returnValue = F("Baumbühl");
        break;
    }
    case 50011:
    {
        returnValue = F("Baumbühlstr.");
        break;
    }
    case 50012:
    {
        returnValue = F("Baumbüsch");
        break;
    }
    case 50013:
    {
        returnValue = F("Baume Ecke");
        break;
    }
    case 50014:
    {
        returnValue = F("Baumeckerstr.");
        break;
    }
    case 50015:
    {
        returnValue = F("Baumeister-Bufler-Str.");
        break;
    }
    case 50016:
    {
        returnValue = F("Baumeister-Emil-Engel-Str.");
        break;
    }
    case 50017:
    {
        returnValue = F("Baumeister-Fischer-Str.");
        break;
    }
    case 50018:
    {
        returnValue = F("Baumeister-Günther-Str.");
        break;
    }
    case 50019:
    {
        returnValue = F("Baumeister-Hase-Str.");
        break;
    }
    case 50020:
    {
        returnValue = F("Baumeister-Krentler-Str.");
        break;
    }
    case 50021:
    {
        returnValue = F("Baumeister-Martens-Str.");
        break;
    }
    case 50022:
    {
        returnValue = F("Baumeister-Poppe-Weg");
        break;
    }
    case 50023:
    {
        returnValue = F("Baumeister-Rohrer-Weg");
        break;
    }
    case 50024:
    {
        returnValue = F("Baumeister-Schonlau-Str.");
        break;
    }
    case 50025:
    {
        returnValue = F("Baumeister-Specht-Str.");
        break;
    }
    case 50026:
    {
        returnValue = F("Baumeister-Uhlig-Str.");
        break;
    }
    case 50027:
    {
        returnValue = F("Baumeisterallee");
        break;
    }
    case 50028:
    {
        returnValue = F("Baumeisterfeld");
        break;
    }
    case 50029:
    {
        returnValue = F("Baumeisters Kamp");
        break;
    }
    case 50030:
    {
        returnValue = F("Baumeisterstr.");
        break;
    }
    case 50031:
    {
        returnValue = F("Baumeistersweg");
        break;
    }
    case 50032:
    {
        returnValue = F("Baumeisterweg");
        break;
    }
    case 50033:
    {
        returnValue = F("Baumen");
        break;
    }
    case 50034:
    {
        returnValue = F("Baumener Str.");
        break;
    }
    case 50035:
    {
        returnValue = F("Baumensteinstr.");
        break;
    }
    case 50036:
    {
        returnValue = F("Baumensteinweg");
        break;
    }
    case 50037:
    {
        returnValue = F("Baumenäcker");
        break;
    }
    case 50038:
    {
        returnValue = F("Baumer");
        break;
    }
    case 50039:
    {
        returnValue = F("Baumersreuth");
        break;
    }
    case 50040:
    {
        returnValue = F("Baumersrodaer Weg");
        break;
    }
    case 50041:
    {
        returnValue = F("Baumerstr.");
        break;
    }
    case 50042:
    {
        returnValue = F("Baumertstr.");
        break;
    }
    case 50043:
    {
        returnValue = F("Baumerweg");
        break;
    }
    case 50044:
    {
        returnValue = F("Baumeröder Weg");
        break;
    }
    case 50045:
    {
        returnValue = F("Baumeselweg");
        break;
    }
    case 50046:
    {
        returnValue = F("Baumesweg");
        break;
    }
    case 50047:
    {
        returnValue = F("Baumetswiese");
        break;
    }
    case 50048:
    {
        returnValue = F("Baumeyerstr.");
        break;
    }
    case 50049:
    {
        returnValue = F("Baumfalkenweg");
        break;
    }
    case 50050:
    {
        returnValue = F("Baumfeld");
        break;
    }
    case 50051:
    {
        returnValue = F("Baumfelder Weg");
        break;
    }
    case 50052:
    {
        returnValue = F("Baumfeldstr.");
        break;
    }
    case 50053:
    {
        returnValue = F("Baumfeldweg");
        break;
    }
    case 50054:
    {
        returnValue = F("Baumgang");
        break;
    }
    case 50055:
    {
        returnValue = F("Baumgarten");
        break;
    }
    case 50056:
    {
        returnValue = F("Baumgarten-Crusius-Str.");
        break;
    }
    case 50057:
    {
        returnValue = F("Baumgartenbrück");
        break;
    }
    case 50058:
    {
        returnValue = F("Baumgartenbrücke");
        break;
    }
    case 50059:
    {
        returnValue = F("Baumgartener Str.");
        break;
    }
    case 50060:
    {
        returnValue = F("Baumgartenfeld");
        break;
    }
    case 50061:
    {
        returnValue = F("Baumgartenhof");
        break;
    }
    case 50062:
    {
        returnValue = F("Baumgartenring");
        break;
    }
    case 50063:
    {
        returnValue = F("Baumgartenstr.");
        break;
    }
    case 50064:
    {
        returnValue = F("Baumgartensträßle");
        break;
    }
    case 50065:
    {
        returnValue = F("Baumgartentor");
        break;
    }
    case 50066:
    {
        returnValue = F("Baumgartenwandsträßle");
        break;
    }
    case 50067:
    {
        returnValue = F("Baumgartenweg");
        break;
    }
    case 50068:
    {
        returnValue = F("Baumgarteweg");
        break;
    }
    case 50069:
    {
        returnValue = F("Baumgartner Feld");
        break;
    }
    case 50070:
    {
        returnValue = F("Baumgartner Str.");
        break;
    }
    case 50071:
    {
        returnValue = F("Baumgartner Weg");
        break;
    }
    case 50072:
    {
        returnValue = F("Baumgartner-Weg");
        break;
    }
    case 50073:
    {
        returnValue = F("Baumgartnerstr.");
        break;
    }
    case 50074:
    {
        returnValue = F("Baumgartnerweg");
        break;
    }
    case 50075:
    {
        returnValue = F("Baumgartshofweg");
        break;
    }
    case 50076:
    {
        returnValue = F("Baumgartsweg");
        break;
    }
    case 50077:
    {
        returnValue = F("Baumgasse");
        break;
    }
    case 50078:
    {
        returnValue = F("Baumgrieser Str.");
        break;
    }
    case 50079:
    {
        returnValue = F("Baumgruppe an der alten Mainkaserne");
        break;
    }
    case 50080:
    {
        returnValue = F("Baumgärtelweg");
        break;
    }
    case 50081:
    {
        returnValue = F("Baumgärten");
        break;
    }
    case 50082:
    {
        returnValue = F("Baumgärtle");
        break;
    }
    case 50083:
    {
        returnValue = F("Baumgärtleingäßchen");
        break;
    }
    case 50084:
    {
        returnValue = F("Baumgärtleinstr.");
        break;
    }
    case 50085:
    {
        returnValue = F("Baumgärtlessiedlung");
        break;
    }
    case 50086:
    {
        returnValue = F("Baumgärtner Weg");
        break;
    }
    case 50087:
    {
        returnValue = F("Baumgärtnerstr.");
        break;
    }
    case 50088:
    {
        returnValue = F("Baumhackergasse");
        break;
    }
    case 50089:
    {
        returnValue = F("Baumhagen");
        break;
    }
    case 50090:
    {
        returnValue = F("Baumhalde");
        break;
    }
    case 50091:
    {
        returnValue = F("Baumham");
        break;
    }
    case 50092:
    {
        returnValue = F("Baumhaselring");
        break;
    }
    case 50093:
    {
        returnValue = F("Baumhaselstr.");
        break;
    }
    case 50094:
    {
        returnValue = F("Baumhaselweg");
        break;
    }
    case 50095:
    {
        returnValue = F("Baumhauser Weg");
        break;
    }
    case 50096:
    {
        returnValue = F("Baumhausstr.");
        break;
    }
    case 50097:
    {
        returnValue = F("Baumheide");
        break;
    }
    case 50098:
    {
        returnValue = F("Baumhof");
        break;
    }
    case 50099:
    {
        returnValue = F("Baumhofredder");
        break;
    }
    case 50100:
    {
        returnValue = F("Baumhofstr.");
        break;
    }
    case 50101:
    {
        returnValue = F("Baumhofsweg");
        break;
    }
    case 50102:
    {
        returnValue = F("Baumhofweg");
        break;
    }
    case 50103:
    {
        returnValue = F("Baumholderer Str.");
        break;
    }
    case 50104:
    {
        returnValue = F("Baumholderstr.");
        break;
    }
    case 50105:
    {
        returnValue = F("Baumhölzlweg");
        break;
    }
    case 50106:
    {
        returnValue = F("Baumkamp");
        break;
    }
    case 50107:
    {
        returnValue = F("Baumkampsweg");
        break;
    }
    case 50108:
    {
        returnValue = F("Baumkate");
        break;
    }
    case 50109:
    {
        returnValue = F("Baumkaten");
        break;
    }
    case 50110:
    {
        returnValue = F("Baumkircher Str.");
        break;
    }
    case 50111:
    {
        returnValue = F("Baumklingenweg");
        break;
    }
    case 50112:
    {
        returnValue = F("Baumkronenpfad");
        break;
    }
    case 50113:
    {
        returnValue = F("Baumkronenweg");
        break;
    }
    case 50114:
    {
        returnValue = F("Baumkundeweg");
        break;
    }
    case 50115:
    {
        returnValue = F("Baumlager");
        break;
    }
    case 50116:
    {
        returnValue = F("Baumlandweg");
        break;
    }
    case 50117:
    {
        returnValue = F("Baumlegeweg");
        break;
    }
    case 50118:
    {
        returnValue = F("Baumlehrpfad");
        break;
    }
    case 50119:
    {
        returnValue = F("Baumleite");
        break;
    }
    case 50120:
    {
        returnValue = F("Baumläuferweg");
        break;
    }
    case 50121:
    {
        returnValue = F("Baummattstr.");
        break;
    }
    case 50122:
    {
        returnValue = F("Baumpark");
        break;
    }
    case 50123:
    {
        returnValue = F("Baumpark Bilshausen");
        break;
    }
    case 50124:
    {
        returnValue = F("Baumpark Gernlinden");
        break;
    }
    case 50125:
    {
        returnValue = F("Baumpark Pinneberg");
        break;
    }
    case 50126:
    {
        returnValue = F("Baumpark Ratzeburg");
        break;
    }
    case 50127:
    {
        returnValue = F("Baumpark Ringethal");
        break;
    }
    case 50128:
    {
        returnValue = F("Baumpark Rüdershausen");
        break;
    }
    case 50129:
    {
        returnValue = F("Baumrader Weg");
        break;
    }
    case 50130:
    {
        returnValue = F("Baumredder");
        break;
    }
    case 50131:
    {
        returnValue = F("Baumreute");
        break;
    }
    case 50132:
    {
        returnValue = F("Baumriesweg");
        break;
    }
    case 50133:
    {
        returnValue = F("Baumrißstr.");
        break;
    }
    case 50134:
    {
        returnValue = F("Baumsatzstr.");
        break;
    }
    case 50135:
    {
        returnValue = F("Baumschulallee");
        break;
    }
    case 50136:
    {
        returnValue = F("Baumschule");
        break;
    }
    case 50137:
    {
        returnValue = F("Baumschule Schmitz");
        break;
    }
    case 50138:
    {
        returnValue = F("Baumschule Zellesmühle");
        break;
    }
    case 50139:
    {
        returnValue = F("Baumschulenallee");
        break;
    }
    case 50140:
    {
        returnValue = F("Baumschulenring");
        break;
    }
    case 50141:
    {
        returnValue = F("Baumschulenstr.");
        break;
    }
    case 50142:
    {
        returnValue = F("Baumschulenweg");
        break;
    }
    case 50143:
    {
        returnValue = F("Baumschulhof");
        break;
    }
    case 50144:
    {
        returnValue = F("Baumschulkehre");
        break;
    }
    case 50145:
    {
        returnValue = F("Baumschullinie");
        break;
    }
    case 50146:
    {
        returnValue = F("Baumschulstr.");
        break;
    }
    case 50147:
    {
        returnValue = F("Baumschulweg");
        break;
    }
    case 50148:
    {
        returnValue = F("Baumschulwiese");
        break;
    }
    case 50149:
    {
        returnValue = F("Baumschulwäldchen");
        break;
    }
    case 50150:
    {
        returnValue = F("Baumseidenweg");
        break;
    }
    case 50151:
    {
        returnValue = F("Baumstamm über Fluss");
        break;
    }
    case 50152:
    {
        returnValue = F("Baumsteftenlenzstr.");
        break;
    }
    case 50153:
    {
        returnValue = F("Baumstr.");
        break;
    }
    case 50154:
    {
        returnValue = F("Baumsweg");
        break;
    }
    case 50155:
    {
        returnValue = F("Baumtal");
        break;
    }
    case 50156:
    {
        returnValue = F("Baumtalweg");
        break;
    }
    case 50157:
    {
        returnValue = F("Baumteilweg");
        break;
    }
    case 50158:
    {
        returnValue = F("Baumwaide");
        break;
    }
    case 50159:
    {
        returnValue = F("Baumwallsweg");
        break;
    }
    case 50160:
    {
        returnValue = F("Baumwasenstr.");
        break;
    }
    case 50161:
    {
        returnValue = F("Baumweg");
        break;
    }
    case 50162:
    {
        returnValue = F("Baumwegstr.");
        break;
    }
    case 50163:
    {
        returnValue = F("Baumwiese");
        break;
    }
    case 50164:
    {
        returnValue = F("Baumwiesen");
        break;
    }
    case 50165:
    {
        returnValue = F("Baumwiesenstr.");
        break;
    }
    case 50166:
    {
        returnValue = F("Baumwiesenweg");
        break;
    }
    case 50167:
    {
        returnValue = F("Baumwieserhof");
        break;
    }
    case 50168:
    {
        returnValue = F("Baumwieserhofweg");
        break;
    }
    case 50169:
    {
        returnValue = F("Baumwipfelpfad");
        break;
    }
    case 50170:
    {
        returnValue = F("Baumwipfelpfad Bad Iburg");
        break;
    }
    case 50171:
    {
        returnValue = F("Baumwipfelpfad Harz");
        break;
    }
    case 50172:
    {
        returnValue = F("Baumwipfelpfad Ruegen");
        break;
    }
    case 50173:
    {
        returnValue = F("Baumwipfelpfad Steigerwald");
        break;
    }
    case 50174:
    {
        returnValue = F("Baumwipfelpfad mit Hängebrücken");
        break;
    }
    case 50175:
    {
        returnValue = F("Baumwipfelweg");
        break;
    }
    case 50176:
    {
        returnValue = F("Baumwollstr.");
        break;
    }
    case 50177:
    {
        returnValue = F("Baumwollweg");
        break;
    }
    case 50178:
    {
        returnValue = F("Baumworthstr.");
        break;
    }
    case 50179:
    {
        returnValue = F("Baumwurzelpfad");
        break;
    }
    case 50180:
    {
        returnValue = F("Baumwühren");
        break;
    }
    case 50181:
    {
        returnValue = F("Baumzeil");
        break;
    }
    case 50182:
    {
        returnValue = F("Baumzeile");
        break;
    }
    case 50183:
    {
        returnValue = F("Baumäcker");
        break;
    }
    case 50184:
    {
        returnValue = F("Baumäcker Str.");
        break;
    }
    case 50185:
    {
        returnValue = F("Baumäckerstr.");
        break;
    }
    case 50186:
    {
        returnValue = F("Baumäckerweg");
        break;
    }
    case 50187:
    {
        returnValue = F("Baumühle");
        break;
    }
    case 50188:
    {
        returnValue = F("Baunacher Str.");
        break;
    }
    case 50189:
    {
        returnValue = F("Baunacher Weg");
        break;
    }
    case 50190:
    {
        returnValue = F("Baunacherweg");
        break;
    }
    case 50191:
    {
        returnValue = F("Baunachstr.");
        break;
    }
    case 50192:
    {
        returnValue = F("Baunachweg");
        break;
    }
    case 50193:
    {
        returnValue = F("Baunackstr.");
        break;
    }
    case 50194:
    {
        returnValue = F("Baunataler Str.");
        break;
    }
    case 50195:
    {
        returnValue = F("Baunatalweg");
        break;
    }
    case 50196:
    {
        returnValue = F("Baunawiesen");
        break;
    }
    case 50197:
    {
        returnValue = F("Baunsberg");
        break;
    }
    case 50198:
    {
        returnValue = F("Baunsbergpark");
        break;
    }
    case 50199:
    {
        returnValue = F("Baunsbergring");
        break;
    }
    case 50200:
    {
        returnValue = F("Baunsbergstr.");
        break;
    }
    case 50201:
    {
        returnValue = F("Baunscheidtstr.");
        break;
    }
    case 50202:
    {
        returnValue = F("Bauordenstr.");
        break;
    }
    case 50203:
    {
        returnValue = F("Bauordenweg");
        break;
    }
    case 50204:
    {
        returnValue = F("Bauplan");
        break;
    }
    case 50205:
    {
        returnValue = F("Bauplanstr.");
        break;
    }
    case 50206:
    {
        returnValue = F("Bauplatz");
        break;
    }
    case 50207:
    {
        returnValue = F("Baur-Schneise");
        break;
    }
    case 50208:
    {
        returnValue = F("Baurat-Gerber-Str.");
        break;
    }
    case 50209:
    {
        returnValue = F("Baurat-Hase-Str.");
        break;
    }
    case 50210:
    {
        returnValue = F("Baurat-Hering-Str.");
        break;
    }
    case 50211:
    {
        returnValue = F("Baurat-Köhler-Str.");
        break;
    }
    case 50212:
    {
        returnValue = F("Baurat-Liebold-Str.");
        break;
    }
    case 50213:
    {
        returnValue = F("Baurat-Manz-Str.");
        break;
    }
    case 50214:
    {
        returnValue = F("Baurat-Scherman-Weg");
        break;
    }
    case 50215:
    {
        returnValue = F("Baurat-Sommer-Str.");
        break;
    }
    case 50216:
    {
        returnValue = F("Baurat-Wiese-Str.");
        break;
    }
    case 50217:
    {
        returnValue = F("Baurat-Wolters-Str.");
        break;
    }
    case 50218:
    {
        returnValue = F("Baurenbergweg");
        break;
    }
    case 50219:
    {
        returnValue = F("Baurenfeldstr.");
        break;
    }
    case 50220:
    {
        returnValue = F("Baurengasse");
        break;
    }
    case 50221:
    {
        returnValue = F("Baurenhau");
        break;
    }
    case 50222:
    {
        returnValue = F("Baurenlatzallee");
        break;
    }
    case 50223:
    {
        returnValue = F("Baurenwasen");
        break;
    }
    case 50224:
    {
        returnValue = F("Baurenwies");
        break;
    }
    case 50225:
    {
        returnValue = F("Bauriedweg");
        break;
    }
    case 50226:
    {
        returnValue = F("Bauringstr.");
        break;
    }
    case 50227:
    {
        returnValue = F("Bauringstr. Nord");
        break;
    }
    case 50228:
    {
        returnValue = F("Bauringstr. Süd");
        break;
    }
    case 50229:
    {
        returnValue = F("Bauroth");
        break;
    }
    case 50230:
    {
        returnValue = F("Baurschneise");
        break;
    }
    case 50231:
    {
        returnValue = F("Baurstr.");
        break;
    }
    case 50232:
    {
        returnValue = F("Baus Blick");
        break;
    }
    case 50233:
    {
        returnValue = F("Bausberger Str.");
        break;
    }
    case 50234:
    {
        returnValue = F("Bauschanweg");
        break;
    }
    case 50235:
    {
        returnValue = F("Bauschberg");
        break;
    }
    case 50236:
    {
        returnValue = F("Bauschengasse");
        break;
    }
    case 50237:
    {
        returnValue = F("Bauscherweg");
        break;
    }
    case 50238:
    {
        returnValue = F("Bauschhausgässle");
        break;
    }
    case 50239:
    {
        returnValue = F("Bauschheimer Landstr.");
        break;
    }
    case 50240:
    {
        returnValue = F("Bauschheimer Str.");
        break;
    }
    case 50241:
    {
        returnValue = F("Bauschheimer Weg");
        break;
    }
    case 50242:
    {
        returnValue = F("Bauschlingenweg");
        break;
    }
    case 50243:
    {
        returnValue = F("Bauschlotter Str.");
        break;
    }
    case 50244:
    {
        returnValue = F("Bauschstr.");
        break;
    }
    case 50245:
    {
        returnValue = F("Bauschulenweg");
        break;
    }
    case 50246:
    {
        returnValue = F("Bauschweg");
        break;
    }
    case 50247:
    {
        returnValue = F("Bausdorfer Weg");
        break;
    }
    case 50248:
    {
        returnValue = F("Bausenbergweg");
        break;
    }
    case 50249:
    {
        returnValue = F("Bausenhagener Str.");
        break;
    }
    case 50250:
    {
        returnValue = F("Bausenhaus");
        break;
    }
    case 50251:
    {
        returnValue = F("Bausenpfad");
        break;
    }
    case 50252:
    {
        returnValue = F("Bausenroder Weg");
        break;
    }
    case 50253:
    {
        returnValue = F("Bausenweg");
        break;
    }
    case 50254:
    {
        returnValue = F("Bauser Weg");
        break;
    }
    case 50255:
    {
        returnValue = F("Bausestr.");
        break;
    }
    case 50256:
    {
        returnValue = F("Bausetstr.");
        break;
    }
    case 50257:
    {
        returnValue = F("Bauskotten");
        break;
    }
    case 50258:
    {
        returnValue = F("Bausmühlenstr.");
        break;
    }
    case 50259:
    {
        returnValue = F("Baustadelgasse");
        break;
    }
    case 50260:
    {
        returnValue = F("Baustatt");
        break;
    }
    case 50261:
    {
        returnValue = F("Bausteinstr.");
        break;
    }
    case 50262:
    {
        returnValue = F("Baustelle");
        break;
    }
    case 50263:
    {
        returnValue = F("Baustellenstr. Neubau B 210 neu");
        break;
    }
    case 50264:
    {
        returnValue = F("Baustellenumfahrung");
        break;
    }
    case 50265:
    {
        returnValue = F("Baustellenweg");
        break;
    }
    case 50266:
    {
        returnValue = F("Baustellenzufahrt");
        break;
    }
    case 50267:
    {
        returnValue = F("Bausterter Weg");
        break;
    }
    case 50268:
    {
        returnValue = F("Baustertgraben");
        break;
    }
    case 50269:
    {
        returnValue = F("Baustetter Str.");
        break;
    }
    case 50270:
    {
        returnValue = F("Baustetter Weg");
        break;
    }
    case 50271:
    {
        returnValue = F("Baustr.");
        break;
    }
    case 50272:
    {
        returnValue = F("Baustr. (temp.)");
        break;
    }
    case 50273:
    {
        returnValue = F("Baustr. KA");
        break;
    }
    case 50274:
    {
        returnValue = F("Baustädterstr.");
        break;
    }
    case 50275:
    {
        returnValue = F("Baustätterstr.");
        break;
    }
    case 50276:
    {
        returnValue = F("Baustückenweg");
        break;
    }
    case 50277:
    {
        returnValue = F("Bautacker");
        break;
    }
    case 50278:
    {
        returnValue = F("Baute");
        break;
    }
    case 50279:
    {
        returnValue = F("Bautelspesch");
        break;
    }
    case 50280:
    {
        returnValue = F("Bautenbachweg");
        break;
    }
    case 50281:
    {
        returnValue = F("Bautenberger Str.");
        break;
    }
    case 50282:
    {
        returnValue = F("Bautengasse");
        break;
    }
    case 50283:
    {
        returnValue = F("Bautenheide");
        break;
    }
    case 50284:
    {
        returnValue = F("Bauterweg");
        break;
    }
    case 50285:
    {
        returnValue = F("Bautschenlochweg");
        break;
    }
    case 50286:
    {
        returnValue = F("Bautzenbachstr.");
        break;
    }
    case 50287:
    {
        returnValue = F("Bautzener Allee");
        break;
    }
    case 50288:
    {
        returnValue = F("Bautzener Brücke");
        break;
    }
    case 50289:
    {
        returnValue = F("Bautzener Landstr.");
        break;
    }
    case 50290:
    {
        returnValue = F("Bautzener Platz");
        break;
    }
    case 50291:
    {
        returnValue = F("Bautzener Str.");
        break;
    }
    case 50292:
    {
        returnValue = F("Bautzener Weg");
        break;
    }
    case 50293:
    {
        returnValue = F("Bautzengasse");
        break;
    }
    case 50294:
    {
        returnValue = F("Bautzenhof");
        break;
    }
    case 50295:
    {
        returnValue = F("Bautzenstr.");
        break;
    }
    case 50296:
    {
        returnValue = F("Bautzenweg");
        break;
    }
    case 50297:
    {
        returnValue = F("Bautzmannstr.");
        break;
    }
    case 50298:
    {
        returnValue = F("Bautzner Berg");
        break;
    }
    case 50299:
    {
        returnValue = F("Bautzner Landstr.");
        break;
    }
    case 50300:
    {
        returnValue = F("Bautzner Str.");
        break;
    }
    case 50301:
    {
        returnValue = F("Bauverein");
        break;
    }
    case 50302:
    {
        returnValue = F("Bauvereinsstr.");
        break;
    }
    case 50303:
    {
        returnValue = F("Bauvereinstr.");
        break;
    }
    case 50304:
    {
        returnValue = F("Bauvereinsweg");
        break;
    }
    case 50305:
    {
        returnValue = F("Bauvogelsweg");
        break;
    }
    case 50306:
    {
        returnValue = F("Bauwaldstr.");
        break;
    }
    case 50307:
    {
        returnValue = F("Bauwaldweg");
        break;
    }
    case 50308:
    {
        returnValue = F("Bauweg");
        break;
    }
    case 50309:
    {
        returnValue = F("Bauweiler Gäßchen");
        break;
    }
    case 50310:
    {
        returnValue = F("Bauwerkerstr.");
        break;
    }
    case 50311:
    {
        returnValue = F("Bauwerksnr. 6921");
        break;
    }
    case 50312:
    {
        returnValue = F("Bauwiesenstr.");
        break;
    }
    case 50313:
    {
        returnValue = F("Bauxhof");
        break;
    }
    case 50314:
    {
        returnValue = F("Bauxitstr.");
        break;
    }
    case 50315:
    {
        returnValue = F("Bauzinger Str.");
        break;
    }
    case 50316:
    {
        returnValue = F("Bauzunftstr.");
        break;
    }
    case 50317:
    {
        returnValue = F("Bavariafilmplatz");
        break;
    }
    case 50318:
    {
        returnValue = F("Bavariafilmstr.");
        break;
    }
    case 50319:
    {
        returnValue = F("Bavariaring");
        break;
    }
    case 50320:
    {
        returnValue = F("Bavariastr.");
        break;
    }
    case 50321:
    {
        returnValue = F("Bavendorfer Str.");
        break;
    }
    case 50322:
    {
        returnValue = F("Bavener Str.");
        break;
    }
    case 50323:
    {
        returnValue = F("Bavenhauser Str.");
        break;
    }
    case 50324:
    {
        returnValue = F("Bavensenstr.");
        break;
    }
    case 50325:
    {
        returnValue = F("Bavenstedter Hauptstr.");
        break;
    }
    case 50326:
    {
        returnValue = F("Bavenstedter Ring");
        break;
    }
    case 50327:
    {
        returnValue = F("Bavenstedter Str.");
        break;
    }
    case 50328:
    {
        returnValue = F("Bavert");
        break;
    }
    case 50329:
    {
        returnValue = F("Baverter Str.");
        break;
    }
    case 50330:
    {
        returnValue = F("Bavierpark");
        break;
    }
    case 50331:
    {
        returnValue = F("Bavinganstr.");
        break;
    }
    case 50332:
    {
        returnValue = F("Bavinkstr.");
        break;
    }
    case 50333:
    {
        returnValue = F("Bavousstr.");
        break;
    }
    case 50334:
    {
        returnValue = F("Bawert");
        break;
    }
    case 50335:
    {
        returnValue = F("Bawinkeler Damm");
        break;
    }
    case 50336:
    {
        returnValue = F("Bawinkeler Str.");
        break;
    }
    case 50337:
    {
        returnValue = F("Baxmannstr.");
        break;
    }
    case 50338:
    {
        returnValue = F("Baxmannweg");
        break;
    }
    case 50339:
    {
        returnValue = F("Baxwittel");
        break;
    }
    case 50340:
    {
        returnValue = F("Bay-City-Brücke");
        break;
    }
    case 50341:
    {
        returnValue = F("Bayangol-Park");
        break;
    }
    case 50342:
    {
        returnValue = F("Bayardweg");
        break;
    }
    case 50343:
    {
        returnValue = F("Baybachstr.");
        break;
    }
    case 50344:
    {
        returnValue = F("Baybachtal");
        break;
    }
    case 50345:
    {
        returnValue = F("Bayer Weg");
        break;
    }
    case 50346:
    {
        returnValue = F("Bayer-Platz");
        break;
    }
    case 50347:
    {
        returnValue = F("Bayerbacher Str.");
        break;
    }
    case 50348:
    {
        returnValue = F("Bayerdillinger Str.");
        break;
    }
    case 50349:
    {
        returnValue = F("Bayerfeldstr.");
        break;
    }
    case 50350:
    {
        returnValue = F("Bayergasse");
        break;
    }
    case 50351:
    {
        returnValue = F("Bayerhof");
        break;
    }
    case 50352:
    {
        returnValue = F("Bayerhohl");
        break;
    }
    case 50353:
    {
        returnValue = F("Bayerhöfer Str.");
        break;
    }
    case 50354:
    {
        returnValue = F("Bayerisch Haibach");
        break;
    }
    case 50355:
    {
        returnValue = F("Bayerisch Hofgässchen");
        break;
    }
    case 50356:
    {
        returnValue = F("Bayerische Str.");
        break;
    }
    case 50357:
    {
        returnValue = F("Bayerischer-Hof-Platz");
        break;
    }
    case 50358:
    {
        returnValue = F("Bayerlandstr.");
        break;
    }
    case 50359:
    {
        returnValue = F("Bayerlstr.");
        break;
    }
    case 50360:
    {
        returnValue = F("Bayermühle");
        break;
    }
    case 50361:
    {
        returnValue = F("Bayernallee");
        break;
    }
    case 50362:
    {
        returnValue = F("Bayernbrücke");
        break;
    }
    case 50363:
    {
        returnValue = F("Bayerngasse");
        break;
    }
    case 50364:
    {
        returnValue = F("Bayernhütteweg");
        break;
    }
    case 50365:
    {
        returnValue = F("Bayernleite");
        break;
    }
    case 50366:
    {
        returnValue = F("Bayernpfad");
        break;
    }
    case 50367:
    {
        returnValue = F("Bayernplatz");
        break;
    }
    case 50368:
    {
        returnValue = F("Bayernring");
        break;
    }
    case 50369:
    {
        returnValue = F("Bayernstr.");
        break;
    }
    case 50370:
    {
        returnValue = F("Bayernwaldring");
        break;
    }
    case 50371:
    {
        returnValue = F("Bayernweg");
        break;
    }
    case 50372:
    {
        returnValue = F("Bayernwerk");
        break;
    }
    case 50373:
    {
        returnValue = F("Bayernwerksiedlung");
        break;
    }
    case 50374:
    {
        returnValue = F("Bayernwerkstr.");
        break;
    }
    case 50375:
    {
        returnValue = F("Bayers Park");
        break;
    }
    case 50376:
    {
        returnValue = F("Bayersbach");
        break;
    }
    case 50377:
    {
        returnValue = F("Bayersbusch");
        break;
    }
    case 50378:
    {
        returnValue = F("Bayerschweg");
        break;
    }
    case 50379:
    {
        returnValue = F("Bayerseich Schneise");
        break;
    }
    case 50380:
    {
        returnValue = F("Bayershofer Weg");
        break;
    }
    case 50381:
    {
        returnValue = F("Bayersried");
        break;
    }
    case 50382:
    {
        returnValue = F("Bayersrieder Str.");
        break;
    }
    case 50383:
    {
        returnValue = F("Bayerstetten");
        break;
    }
    case 50384:
    {
        returnValue = F("Bayerstr.");
        break;
    }
    case 50385:
    {
        returnValue = F("Bayerwaldblick");
        break;
    }
    case 50386:
    {
        returnValue = F("Bayerwaldloipe");
        break;
    }
    case 50387:
    {
        returnValue = F("Bayerwaldring");
        break;
    }
    case 50388:
    {
        returnValue = F("Bayerwaldstr.");
        break;
    }
    case 50389:
    {
        returnValue = F("Bayerwaldweg");
        break;
    }
    case 50390:
    {
        returnValue = F("Bayerweg");
        break;
    }
    case 50391:
    {
        returnValue = F("Bayerwegerl");
        break;
    }
    case 50392:
    {
        returnValue = F("Bayerzeller Str.");
        break;
    }
    case 50393:
    {
        returnValue = F("Bayeuxallee");
        break;
    }
    case 50394:
    {
        returnValue = F("Baynstr.");
        break;
    }
    case 50395:
    {
        returnValue = F("Bayonstr.");
        break;
    }
    case 50396:
    {
        returnValue = F("Bayplatz");
        break;
    }
    case 50397:
    {
        returnValue = F("Bayreuter Str.");
        break;
    }
    case 50398:
    {
        returnValue = F("Bayreuther Berg");
        break;
    }
    case 50399:
    {
        returnValue = F("Bayreuther Pfad");
        break;
    }
    case 50400:
    {
        returnValue = F("Bayreuther Platz");
        break;
    }
    case 50401:
    {
        returnValue = F("Bayreuther Str.");
        break;
    }
    case 50402:
    {
        returnValue = F("Bayreuther Weg");
        break;
    }
    case 50403:
    {
        returnValue = F("Bayreuthstr.");
        break;
    }
    case 50404:
    {
        returnValue = F("Bayrische Str.");
        break;
    }
    case 50405:
    {
        returnValue = F("Bayrische-Wald-Str.");
        break;
    }
    case 50406:
    {
        returnValue = F("Bayrischer Berg");
        break;
    }
    case 50407:
    {
        returnValue = F("Bayrischer Platz");
        break;
    }
    case 50408:
    {
        returnValue = F("Bayrischzeller Str.");
        break;
    }
    case 50409:
    {
        returnValue = F("Bayuwarenstr.");
        break;
    }
    case 50410:
    {
        returnValue = F("Baywiesen");
        break;
    }
    case 50411:
    {
        returnValue = F("Bazancourt Platz");
        break;
    }
    case 50412:
    {
        returnValue = F("Bazienstr.");
        break;
    }
    case 50413:
    {
        returnValue = F("Bazlenstr.");
        break;
    }
    case 50414:
    {
        returnValue = F("Baß");
        break;
    }
    case 50415:
    {
        returnValue = F("Baßacker");
        break;
    }
    case 50416:
    {
        returnValue = F("Baßberg");
        break;
    }
    case 50417:
    {
        returnValue = F("Baßbergstr.");
        break;
    }
    case 50418:
    {
        returnValue = F("Baßdorfer Weg");
        break;
    }
    case 50419:
    {
        returnValue = F("Baßfeld");
        break;
    }
    case 50420:
    {
        returnValue = F("Baßfeldshof");
        break;
    }
    case 50421:
    {
        returnValue = F("Baßhorn");
        break;
    }
    case 50422:
    {
        returnValue = F("Baßlitzer Str.");
        break;
    }
    case 50423:
    {
        returnValue = F("Baßlohweg");
        break;
    }
    case 50424:
    {
        returnValue = F("Baßmühle");
        break;
    }
    case 50425:
    {
        returnValue = F("Baßriede");
        break;
    }
    case 50426:
    {
        returnValue = F("Be2");
        break;
    }
    case 50427:
    {
        returnValue = F("Beach Street");
        break;
    }
    case 50428:
    {
        returnValue = F("Beamten-Pädel");
        break;
    }
    case 50429:
    {
        returnValue = F("Beamtengarten");
        break;
    }
    case 50430:
    {
        returnValue = F("Beamtengäßchen");
        break;
    }
    case 50431:
    {
        returnValue = F("Beamtenlaufbahn");
        break;
    }
    case 50432:
    {
        returnValue = F("Beamtenplatz");
        break;
    }
    case 50433:
    {
        returnValue = F("Beamtenschneise");
        break;
    }
    case 50434:
    {
        returnValue = F("Beamtenschulstr.");
        break;
    }
    case 50435:
    {
        returnValue = F("Beamtenstr.");
        break;
    }
    case 50436:
    {
        returnValue = F("Beamtenweg");
        break;
    }
    case 50437:
    {
        returnValue = F("Beate-Paulus-Platz");
        break;
    }
    case 50438:
    {
        returnValue = F("Beate-Paulus-Str.");
        break;
    }
    case 50439:
    {
        returnValue = F("Beate-Rotermund-Str.");
        break;
    }
    case 50440:
    {
        returnValue = F("Beate-Uhse-Weg");
        break;
    }
    case 50441:
    {
        returnValue = F("Beatenbergstr.");
        break;
    }
    case 50442:
    {
        returnValue = F("Beatenweg");
        break;
    }
    case 50443:
    {
        returnValue = F("Beateweg");
        break;
    }
    case 50444:
    {
        returnValue = F("Beatrice-Edgell-Weg");
        break;
    }
    case 50445:
    {
        returnValue = F("Beatrixstr.");
        break;
    }
    case 50446:
    {
        returnValue = F("Beatus-Widmann-Str.");
        break;
    }
    case 50447:
    {
        returnValue = F("Beatusgässchen");
        break;
    }
    case 50448:
    {
        returnValue = F("Beatussteig");
        break;
    }
    case 50449:
    {
        returnValue = F("Beatusstr.");
        break;
    }
    case 50450:
    {
        returnValue = F("Beaulieustr.");
        break;
    }
    case 50451:
    {
        returnValue = F("Beaumaraiser Park");
        break;
    }
    case 50452:
    {
        returnValue = F("Beaumaraiser Str.");
        break;
    }
    case 50453:
    {
        returnValue = F("Beaumaraiser Weg");
        break;
    }
    case 50454:
    {
        returnValue = F("Beaumont-le-Roger-Platz");
        break;
    }
    case 50455:
    {
        returnValue = F("Beauner Platz");
        break;
    }
    case 50456:
    {
        returnValue = F("Beaunier-Weg");
        break;
    }
    case 50457:
    {
        returnValue = F("Beauregard");
        break;
    }
    case 50458:
    {
        returnValue = F("Beaurepaire-Platz");
        break;
    }
    case 50459:
    {
        returnValue = F("Beaurepairestr.");
        break;
    }
    case 50460:
    {
        returnValue = F("Beaver Close");
        break;
    }
    case 50461:
    {
        returnValue = F("Bebbelsdorf");
        break;
    }
    case 50462:
    {
        returnValue = F("Bebbenstr.");
        break;
    }
    case 50463:
    {
        returnValue = F("Bebbingen");
        break;
    }
    case 50464:
    {
        returnValue = F("Bebbinger Str.");
        break;
    }
    case 50465:
    {
        returnValue = F("Bebelallee");
        break;
    }
    case 50466:
    {
        returnValue = F("Bebelplatz");
        break;
    }
    case 50467:
    {
        returnValue = F("Bebelsheimer Str.");
        break;
    }
    case 50468:
    {
        returnValue = F("Bebelstr.");
        break;
    }
    case 50469:
    {
        returnValue = F("Bebeltstr.");
        break;
    }
    case 50470:
    {
        returnValue = F("Bebelweg");
        break;
    }
    case 50471:
    {
        returnValue = F("Bebenburger Str.");
        break;
    }
    case 50472:
    {
        returnValue = F("Bebenburger Weg");
        break;
    }
    case 50473:
    {
        returnValue = F("Bebenburgstr.");
        break;
    }
    case 50474:
    {
        returnValue = F("Bebendorfer Str.");
        break;
    }
    case 50475:
    {
        returnValue = F("Bebenhauser Str.");
        break;
    }
    case 50476:
    {
        returnValue = F("Bebenhauser Weg");
        break;
    }
    case 50477:
    {
        returnValue = F("Bebenhäuser Str.");
        break;
    }
    case 50478:
    {
        returnValue = F("Bebensundweg");
        break;
    }
    case 50479:
    {
        returnValue = F("Beberbachaue");
        break;
    }
    case 50480:
    {
        returnValue = F("Beberbachweg");
        break;
    }
    case 50481:
    {
        returnValue = F("Beberbecker Weg");
        break;
    }
    case 50482:
    {
        returnValue = F("Beberbergsweg");
        break;
    }
    case 50483:
    {
        returnValue = F("Beberfeld");
        break;
    }
    case 50484:
    {
        returnValue = F("Bebergrund");
        break;
    }
    case 50485:
    {
        returnValue = F("Bebericher Str.");
        break;
    }
    case 50486:
    {
        returnValue = F("Bebericher Weg");
        break;
    }
    case 50487:
    {
        returnValue = F("Bebersche Str.");
        break;
    }
    case 50488:
    {
        returnValue = F("Bebersches Feld");
        break;
    }
    case 50489:
    {
        returnValue = F("Bebersee");
        break;
    }
    case 50490:
    {
        returnValue = F("Beberseer Weg");
        break;
    }
    case 50491:
    {
        returnValue = F("Beberstedter Str.");
        break;
    }
    case 50492:
    {
        returnValue = F("Beberstedter Weg");
        break;
    }
    case 50493:
    {
        returnValue = F("Beberstr.");
        break;
    }
    case 50494:
    {
        returnValue = F("Bebertaler Str.");
        break;
    }
    case 50495:
    {
        returnValue = F("Bebionstr.");
        break;
    }
    case 50496:
    {
        returnValue = F("Bebitzer Str.");
        break;
    }
    case 50497:
    {
        returnValue = F("Beblinstetten");
        break;
    }
    case 50498:
    {
        returnValue = F("Bebo-Wager-Str.");
        break;
    }
    case 50499:
    {
        returnValue = F("Bebraer Str.");
        break;
    }
    case 50500:
    {
        returnValue = F("Bebraer Weg");
        break;
    }
    case 50501:
    {
        returnValue = F("Bebrastr.");
        break;
    }
    case 50502:
    {
        returnValue = F("Bebrier Weg");
        break;
    }
    case 50503:
    {
        returnValue = F("Bebritstr.");
        break;
    }
    case 50504:
    {
        returnValue = F("Beccostr.");
        break;
    }
    case 50505:
    {
        returnValue = F("Bech");
        break;
    }
    case 50506:
    {
        returnValue = F("Bechelsdorfer Rundling");
        break;
    }
    case 50507:
    {
        returnValue = F("Bechelstr.");
        break;
    }
    case 50508:
    {
        returnValue = F("Bechemer Str.");
        break;
    }
    case 50509:
    {
        returnValue = F("Bechemstr.");
        break;
    }
    case 50510:
    {
        returnValue = F("Bechener Str.");
        break;
    }
    case 50511:
    {
        returnValue = F("Bechenheimer Str.");
        break;
    }
    case 50512:
    {
        returnValue = F("Bechenheimer Weg");
        break;
    }
    case 50513:
    {
        returnValue = F("Bechenhütten");
        break;
    }
    case 50514:
    {
        returnValue = F("Becher Garten");
        break;
    }
    case 50515:
    {
        returnValue = F("Becher Str.");
        break;
    }
    case 50516:
    {
        returnValue = F("Becher-Brücke");
        break;
    }
    case 50517:
    {
        returnValue = F("Becherbacher Str.");
        break;
    }
    case 50518:
    {
        returnValue = F("Becherbachweg");
        break;
    }
    case 50519:
    {
        returnValue = F("Becherbanden");
        break;
    }
    case 50520:
    {
        returnValue = F("Becherberg");
        break;
    }
    case 50521:
    {
        returnValue = F("Becherbruch");
        break;
    }
    case 50522:
    {
        returnValue = F("Bechererplatz");
        break;
    }
    case 50523:
    {
        returnValue = F("Bechererstr.");
        break;
    }
    case 50524:
    {
        returnValue = F("Becherfeld");
        break;
    }
    case 50525:
    {
        returnValue = F("Bechergasse");
        break;
    }
    case 50526:
    {
        returnValue = F("Becherhaufenweg");
        break;
    }
    case 50527:
    {
        returnValue = F("Becherhof");
        break;
    }
    case 50528:
    {
        returnValue = F("Becherhofer Weg");
        break;
    }
    case 50529:
    {
        returnValue = F("Becherhöllstr.");
        break;
    }
    case 50530:
    {
        returnValue = F("Becherkopfweg");
        break;
    }
    case 50531:
    {
        returnValue = F("Becherlehen");
        break;
    }
    case 50532:
    {
        returnValue = F("Becherlehenstr.");
        break;
    }
    case 50533:
    {
        returnValue = F("Bechermacherstr.");
        break;
    }
    case 50534:
    {
        returnValue = F("Becherstr.");
        break;
    }
    case 50535:
    {
        returnValue = F("Bechersträßle");
        break;
    }
    case 50536:
    {
        returnValue = F("Becherts");
        break;
    }
    case 50537:
    {
        returnValue = F("Becherwaldstr.");
        break;
    }
    case 50538:
    {
        returnValue = F("Becherweg");
        break;
    }
    case 50539:
    {
        returnValue = F("Bechhausen");
        break;
    }
    case 50540:
    {
        returnValue = F("Bechhausener Str.");
        break;
    }
    case 50541:
    {
        returnValue = F("Bechheim");
        break;
    }
    case 50542:
    {
        returnValue = F("Bechhofen");
        break;
    }
    case 50543:
    {
        returnValue = F("Bechhofener Str.");
        break;
    }
    case 50544:
    {
        returnValue = F("Bechhofener Weg");
        break;
    }
    case 50545:
    {
        returnValue = F("Bechhofer Str.");
        break;
    }
    case 50546:
    {
        returnValue = F("Bechhofweg");
        break;
    }
    case 50547:
    {
        returnValue = F("Bechlergasse");
        break;
    }
    case 50548:
    {
        returnValue = F("Bechlergässle");
        break;
    }
    case 50549:
    {
        returnValue = F("Bechlerstr.");
        break;
    }
    case 50550:
    {
        returnValue = F("Bechliner Chaussee");
        break;
    }
    case 50551:
    {
        returnValue = F("Bechliner Weg");
        break;
    }
    case 50552:
    {
        returnValue = F("Bechlingen (Dorfstr.)");
        break;
    }
    case 50553:
    {
        returnValue = F("Bechlinger Str.");
        break;
    }
    case 50554:
    {
        returnValue = F("Bechlinger Weg");
        break;
    }
    case 50555:
    {
        returnValue = F("Bechlinweg");
        break;
    }
    case 50556:
    {
        returnValue = F("Bechstedter Str.");
        break;
    }
    case 50557:
    {
        returnValue = F("Bechstedter Weg");
        break;
    }
    case 50558:
    {
        returnValue = F("Bechsteinallee");
        break;
    }
    case 50559:
    {
        returnValue = F("Bechsteingrund");
        break;
    }
    case 50560:
    {
        returnValue = F("Bechsteinstr.");
        break;
    }
    case 50561:
    {
        returnValue = F("Bechsteinweg");
        break;
    }
    case 50562:
    {
        returnValue = F("Bechstr.");
        break;
    }
    case 50563:
    {
        returnValue = F("Bechtaler Str.");
        break;
    }
    case 50564:
    {
        returnValue = F("Bechtbrunnenstr.");
        break;
    }
    case 50565:
    {
        returnValue = F("Bechtenrainweg");
        break;
    }
    case 50566:
    {
        returnValue = F("Bechtenwaldstr.");
        break;
    }
    case 50567:
    {
        returnValue = F("Bechterdisser Str.");
        break;
    }
    case 50568:
    {
        returnValue = F("Bechtermünzstr.");
        break;
    }
    case 50569:
    {
        returnValue = F("Bechtewaldweg");
        break;
    }
    case 50570:
    {
        returnValue = F("Bechthal");
        break;
    }
    case 50571:
    {
        returnValue = F("Bechthaler Str.");
        break;
    }
    case 50572:
    {
        returnValue = F("Bechtheimer Hohl");
        break;
    }
    case 50573:
    {
        returnValue = F("Bechtheimer Str.");
        break;
    }
    case 50574:
    {
        returnValue = F("Bechtheimer Weg");
        break;
    }
    case 50575:
    {
        returnValue = F("Bechtholds Gärten");
        break;
    }
    case 50576:
    {
        returnValue = F("Bechtle-Platz");
        break;
    }
    case 50577:
    {
        returnValue = F("Bechtoldstr.");
        break;
    }
    case 50578:
    {
        returnValue = F("Bechtolsheimer Str.");
        break;
    }
    case 50579:
    {
        returnValue = F("Bechtolsheimer Weg");
        break;
    }
    case 50580:
    {
        returnValue = F("Bechtrup");
        break;
    }
    case 50581:
    {
        returnValue = F("Bechtsbütteler Str.");
        break;
    }
    case 50582:
    {
        returnValue = F("Bechtstr.");
        break;
    }
    case 50583:
    {
        returnValue = F("Beck");
        break;
    }
    case 50584:
    {
        returnValue = F("Beck von Peccoz-Siedlung");
        break;
    }
    case 50585:
    {
        returnValue = F("Beckacker Schulstr.");
        break;
    }
    case 50586:
    {
        returnValue = F("Beckagässle");
        break;
    }
    case 50587:
    {
        returnValue = F("Beckbruchweg");
        break;
    }
    case 50588:
    {
        returnValue = F("Beckbuschstr.");
        break;
    }
    case 50589:
    {
        returnValue = F("Beckdorfer Str.");
        break;
    }
    case 50590:
    {
        returnValue = F("Becke");
        break;
    }
    case 50591:
    {
        returnValue = F("Becke-Daale");
        break;
    }
    case 50592:
    {
        returnValue = F("Beckeanger");
        break;
    }
    case 50593:
    {
        returnValue = F("Beckedahl");
        break;
    }
    case 50594:
    {
        returnValue = F("Beckedorfer Heide");
        break;
    }
    case 50595:
    {
        returnValue = F("Beckedorfer Str.");
        break;
    }
    case 50596:
    {
        returnValue = F("Beckelloh");
        break;
    }
    case 50597:
    {
        returnValue = F("Beckelmannsweg");
        break;
    }
    case 50598:
    {
        returnValue = F("Beckemühle");
        break;
    }
    case 50599:
    {
        returnValue = F("Becken");
        break;
    }
    case 50600:
    {
        returnValue = F("Beckenbauerfeld");
        break;
    }
    case 50601:
    {
        returnValue = F("Beckenberg");
        break;
    }
    case 50602:
    {
        returnValue = F("Beckenbergstr.");
        break;
    }
    case 50603:
    {
        returnValue = F("Beckenbergweg");
        break;
    }
    case 50604:
    {
        returnValue = F("Beckenbeund");
        break;
    }
    case 50605:
    {
        returnValue = F("Beckenbreiter Stege");
        break;
    }
    case 50606:
    {
        returnValue = F("Beckendorf");
        break;
    }
    case 50607:
    {
        returnValue = F("Beckendorfer Berg");
        break;
    }
    case 50608:
    {
        returnValue = F("Beckendorfer Str.");
        break;
    }
    case 50609:
    {
        returnValue = F("Beckendorfer Weg");
        break;
    }
    case 50610:
    {
        returnValue = F("Beckendorfstr.");
        break;
    }
    case 50611:
    {
        returnValue = F("Beckenfeld");
        break;
    }
    case 50612:
    {
        returnValue = F("Beckengarten");
        break;
    }
    case 50613:
    {
        returnValue = F("Beckengartenweg");
        break;
    }
    case 50614:
    {
        returnValue = F("Beckengasse");
        break;
    }
    case 50615:
    {
        returnValue = F("Beckengässlein");
        break;
    }
    case 50616:
    {
        returnValue = F("Beckenhalde");
        break;
    }
    case 50617:
    {
        returnValue = F("Beckenhofer Str.");
        break;
    }
    case 50618:
    {
        returnValue = F("Beckenhofer Weg");
        break;
    }
    case 50619:
    {
        returnValue = F("Beckenhäulesstich");
        break;
    }
    case 50620:
    {
        returnValue = F("Beckenhäulesweg");
        break;
    }
    case 50621:
    {
        returnValue = F("Beckenhölzle");
        break;
    }
    case 50622:
    {
        returnValue = F("Beckenkamp");
        break;
    }
    case 50623:
    {
        returnValue = F("Beckenkampstr.");
        break;
    }
    case 50624:
    {
        returnValue = F("Beckenkeller");
        break;
    }
    case 50625:
    {
        returnValue = F("Beckenkreuz");
        break;
    }
    case 50626:
    {
        returnValue = F("Beckenkrug");
        break;
    }
    case 50627:
    {
        returnValue = F("Beckenleite");
        break;
    }
    case 50628:
    {
        returnValue = F("Beckenmühle");
        break;
    }
    case 50629:
    {
        returnValue = F("Beckenmühlenweg");
        break;
    }
    case 50630:
    {
        returnValue = F("Beckenrandstr.");
        break;
    }
    case 50631:
    {
        returnValue = F("Beckenschlagweg");
        break;
    }
    case 50632:
    {
        returnValue = F("Beckenstr.");
        break;
    }
    case 50633:
    {
        returnValue = F("Beckentalweg");
        break;
    }
    case 50634:
    {
        returnValue = F("Beckenteich-Weg");
        break;
    }
    case 50635:
    {
        returnValue = F("Beckenthin");
        break;
    }
    case 50636:
    {
        returnValue = F("Beckentälchen");
        break;
    }
    case 50637:
    {
        returnValue = F("Beckenweg");
        break;
    }
    case 50638:
    {
        returnValue = F("Beckenweiherallee");
        break;
    }
    case 50639:
    {
        returnValue = F("Beckenweiler");
        break;
    }
    case 50640:
    {
        returnValue = F("Beckenwengert");
        break;
    }
    case 50641:
    {
        returnValue = F("Beckenwerkerstr.");
        break;
    }
    case 50642:
    {
        returnValue = F("Beckenwiesenstr.");
        break;
    }
    case 50643:
    {
        returnValue = F("Beckenwiesenweg");
        break;
    }
    case 50644:
    {
        returnValue = F("Beckenzellerweg");
        break;
    }
    case 50645:
    {
        returnValue = F("Beckenäcker");
        break;
    }
    case 50646:
    {
        returnValue = F("Becker Gaas");
        break;
    }
    case 50647:
    {
        returnValue = F("Becker Schneise");
        break;
    }
    case 50648:
    {
        returnValue = F("Becker-Gundahl-Str.");
        break;
    }
    case 50649:
    {
        returnValue = F("Becker-Göring-Str.");
        break;
    }
    case 50650:
    {
        returnValue = F("Becker-von-Berg-Str.");
        break;
    }
    case 50651:
    {
        returnValue = F("Beckeradsdelle");
        break;
    }
    case 50652:
    {
        returnValue = F("Beckeradstr.");
        break;
    }
    case 50653:
    {
        returnValue = F("Beckerathsweg");
        break;
    }
    case 50654:
    {
        returnValue = F("Beckeraue");
        break;
    }
    case 50655:
    {
        returnValue = F("Beckerberg");
        break;
    }
    case 50656:
    {
        returnValue = F("Beckerdsweg");
        break;
    }
    case 50657:
    {
        returnValue = F("Beckerecken");
        break;
    }
    case 50658:
    {
        returnValue = F("Beckerfeld");
        break;
    }
    case 50659:
    {
        returnValue = F("Beckerfelder Str.");
        break;
    }
    case 50660:
    {
        returnValue = F("Beckerfeldstr.");
        break;
    }
    case 50661:
    {
        returnValue = F("Beckergasse");
        break;
    }
    case 50662:
    {
        returnValue = F("Beckergrube");
        break;
    }
    case 50663:
    {
        returnValue = F("Beckerhaan");
        break;
    }
    case 50664:
    {
        returnValue = F("Beckerhof");
        break;
    }
    case 50665:
    {
        returnValue = F("Beckeringstr.");
        break;
    }
    case 50666:
    {
        returnValue = F("Beckerkoppel");
        break;
    }
    case 50667:
    {
        returnValue = F("Beckerleede");
        break;
    }
    case 50668:
    {
        returnValue = F("Beckermannstr.");
        break;
    }
    case 50669:
    {
        returnValue = F("Beckeroder Esch");
        break;
    }
    case 50670:
    {
        returnValue = F("Beckeroder Platz");
        break;
    }
    case 50671:
    {
        returnValue = F("Beckerpassage");
        break;
    }
    case 50672:
    {
        returnValue = F("Beckerpfad");
        break;
    }
    case 50673:
    {
        returnValue = F("Beckers Allee");
        break;
    }
    case 50674:
    {
        returnValue = F("Beckers Barg");
        break;
    }
    case 50675:
    {
        returnValue = F("Beckers Brink");
        break;
    }
    case 50676:
    {
        returnValue = F("Beckers Feld");
        break;
    }
    case 50677:
    {
        returnValue = F("Beckers Garten");
        break;
    }
    case 50678:
    {
        returnValue = F("Beckers Hohl");
        break;
    }
    case 50679:
    {
        returnValue = F("Beckers Kamp");
        break;
    }
    case 50680:
    {
        returnValue = F("Beckers Kreuz");
        break;
    }
    case 50681:
    {
        returnValue = F("Beckers Kull");
        break;
    }
    case 50682:
    {
        returnValue = F("Beckers Kämpchen");
        break;
    }
    case 50683:
    {
        returnValue = F("Beckers Stiege");
        break;
    }
    case 50684:
    {
        returnValue = F("Beckers Weg");
        break;
    }
    case 50685:
    {
        returnValue = F("Beckers Weiden");
        break;
    }
    case 50686:
    {
        returnValue = F("Beckersacker");
        break;
    }
    case 50687:
    {
        returnValue = F("Beckersberg");
        break;
    }
    case 50688:
    {
        returnValue = F("Beckersbergring");
        break;
    }
    case 50689:
    {
        returnValue = F("Beckersbergstr.");
        break;
    }
    case 50690:
    {
        returnValue = F("Beckerschlag");
        break;
    }
    case 50691:
    {
        returnValue = F("Beckerschneise");
        break;
    }
    case 50692:
    {
        returnValue = F("Beckerseite");
        break;
    }
    case 50693:
    {
        returnValue = F("Beckerserlen");
        break;
    }
    case 50694:
    {
        returnValue = F("Beckersfeld");
        break;
    }
    case 50695:
    {
        returnValue = F("Beckersgasse");
        break;
    }
    case 50696:
    {
        returnValue = F("Beckersgraben");
        break;
    }
    case 50697:
    {
        returnValue = F("Beckersheide");
        break;
    }
    case 50698:
    {
        returnValue = F("Beckershoffstr.");
        break;
    }
    case 50699:
    {
        returnValue = F("Beckershohle");
        break;
    }
    case 50700:
    {
        returnValue = F("Beckershäuschen");
        break;
    }
    case 50701:
    {
        returnValue = F("Beckershöfe");
        break;
    }
    case 50702:
    {
        returnValue = F("Beckerskamp");
        break;
    }
    case 50703:
    {
        returnValue = F("Beckersloh");
        break;
    }
    case 50704:
    {
        returnValue = F("Beckersstr.");
        break;
    }
    case 50705:
    {
        returnValue = F("Beckerstr.");
        break;
    }
    case 50706:
    {
        returnValue = F("Beckersweg");
        break;
    }
    case 50707:
    {
        returnValue = F("Beckertal");
        break;
    }
    case 50708:
    {
        returnValue = F("Beckertaler Str.");
        break;
    }
    case 50709:
    {
        returnValue = F("Beckertalweg");
        break;
    }
    case 50710:
    {
        returnValue = F("Beckerteichpforte");
        break;
    }
    case 50711:
    {
        returnValue = F("Beckertstr.");
        break;
    }
    case 50712:
    {
        returnValue = F("Beckertsweg");
        break;
    }
    case 50713:
    {
        returnValue = F("Beckerweg");
        break;
    }
    case 50714:
    {
        returnValue = F("Beckerweg Nord");
        break;
    }
    case 50715:
    {
        returnValue = F("Beckerwiese");
        break;
    }
    case 50716:
    {
        returnValue = F("Beckerwinkel");
        break;
    }
    case 50717:
    {
        returnValue = F("Beckeshausenfeld");
        break;
    }
    case 50718:
    {
        returnValue = F("Beckestr.");
        break;
    }
    case 50719:
    {
        returnValue = F("Becketalstr.");
        break;
    }
    case 50720:
    {
        returnValue = F("Beckewegli");
        break;
    }
    case 50721:
    {
        returnValue = F("Beckfleck");
        break;
    }
    case 50722:
    {
        returnValue = F("Beckgasse");
        break;
    }
    case 50723:
    {
        returnValue = F("Beckhauser Str.");
        break;
    }
    case 50724:
    {
        returnValue = F("Beckhauser Weg");
        break;
    }
    case 50725:
    {
        returnValue = F("Beckhausstr.");
        break;
    }
    case 50726:
    {
        returnValue = F("Beckhausweg");
        break;
    }
    case 50727:
    {
        returnValue = F("Beckheide");
        break;
    }
    case 50728:
    {
        returnValue = F("Beckhofer Str.");
        break;
    }
    case 50729:
    {
        returnValue = F("Beckhook");
        break;
    }
    case 50730:
    {
        returnValue = F("Beckhstr.");
        break;
    }
    case 50731:
    {
        returnValue = F("Beckinger Str.");
        break;
    }
    case 50732:
    {
        returnValue = F("Beckinger Weg");
        break;
    }
    case 50733:
    {
        returnValue = F("Beckinghausen");
        break;
    }
    case 50734:
    {
        returnValue = F("Beckingsbusch");
        break;
    }
    case 50735:
    {
        returnValue = F("Beckingshof");
        break;
    }
    case 50736:
    {
        returnValue = F("Beckingsweg");
        break;
    }
    case 50737:
    {
        returnValue = F("Beckkamp");
        break;
    }
    case 50738:
    {
        returnValue = F("Beckleinsgasse");
        break;
    }
    case 50739:
    {
        returnValue = F("Becklemer Str.");
        break;
    }
    case 50740:
    {
        returnValue = F("Becklemer Weg");
        break;
    }
    case 50741:
    {
        returnValue = F("Becklesklingenweg");
        break;
    }
    case 50742:
    {
        returnValue = F("Becklingen");
        break;
    }
    case 50743:
    {
        returnValue = F("Becklinger Str.");
        break;
    }
    case 50744:
    {
        returnValue = F("Becklinger Weg");
        break;
    }
    case 50745:
    {
        returnValue = F("Becklohhof");
        break;
    }
    case 50746:
    {
        returnValue = F("Becklück");
        break;
    }
    case 50747:
    {
        returnValue = F("Beckmannplatz");
        break;
    }
    case 50748:
    {
        returnValue = F("Beckmanns Worth");
        break;
    }
    case 50749:
    {
        returnValue = F("Beckmannsfelder Weg");
        break;
    }
    case 50750:
    {
        returnValue = F("Beckmannsheide");
        break;
    }
    case 50751:
    {
        returnValue = F("Beckmannshof");
        break;
    }
    case 50752:
    {
        returnValue = F("Beckmannskamp");
        break;
    }
    case 50753:
    {
        returnValue = F("Beckmannstr.");
        break;
    }
    case 50754:
    {
        returnValue = F("Beckmannsweg");
        break;
    }
    case 50755:
    {
        returnValue = F("Beckmannweg");
        break;
    }
    case 50756:
    {
        returnValue = F("Beckmarhau");
        break;
    }
    case 50757:
    {
        returnValue = F("Beckmühle");
        break;
    }
    case 50758:
    {
        returnValue = F("Beckrather Dorfstr.");
        break;
    }
    case 50759:
    {
        returnValue = F("Beckrather Str.");
        break;
    }
    case 50760:
    {
        returnValue = F("Beckschlagergasse");
        break;
    }
    case 50761:
    {
        returnValue = F("Becksfelder Weg");
        break;
    }
    case 50762:
    {
        returnValue = F("Beckshöhe");
        break;
    }
    case 50763:
    {
        returnValue = F("Beckstadtstr.");
        break;
    }
    case 50764:
    {
        returnValue = F("Becksteddes Kamp");
        break;
    }
    case 50765:
    {
        returnValue = F("Beckstedter Str.");
        break;
    }
    case 50766:
    {
        returnValue = F("Becksteiner Str.");
        break;
    }
    case 50767:
    {
        returnValue = F("Beckstettener Str.");
        break;
    }
    case 50768:
    {
        returnValue = F("Beckstr.");
        break;
    }
    case 50769:
    {
        returnValue = F("Becksweg");
        break;
    }
    case 50770:
    {
        returnValue = F("Beckumer Siel");
        break;
    }
    case 50771:
    {
        returnValue = F("Beckumer Str.");
        break;
    }
    case 50772:
    {
        returnValue = F("Beckurtsstr.");
        break;
    }
    case 50773:
    {
        returnValue = F("Beckweg");
        break;
    }
    case 50774:
    {
        returnValue = F("Beckwiesen");
        break;
    }
    case 50775:
    {
        returnValue = F("Beckwischweg");
        break;
    }
    case 50776:
    {
        returnValue = F("Beckwitzer Str.");
        break;
    }
    case 50777:
    {
        returnValue = F("Beckwitzer Weg");
        break;
    }
    case 50778:
    {
        returnValue = F("Becostr.");
        break;
    }
    case 50779:
    {
        returnValue = F("Beda-Angehrn-Str.");
        break;
    }
    case 50780:
    {
        returnValue = F("Beda-Kleinschmidt-Weg");
        break;
    }
    case 50781:
    {
        returnValue = F("Beda-Mayr-Str.");
        break;
    }
    case 50782:
    {
        returnValue = F("Beda-Sommerberger-Str.");
        break;
    }
    case 50783:
    {
        returnValue = F("Bedaer Str.");
        break;
    }
    case 50784:
    {
        returnValue = F("Bedaiumweg");
        break;
    }
    case 50785:
    {
        returnValue = F("Bedaplatz");
        break;
    }
    case 50786:
    {
        returnValue = F("Bedastr.");
        break;
    }
    case 50787:
    {
        returnValue = F("Bedburdycker Str.");
        break;
    }
    case 50788:
    {
        returnValue = F("Bedburger Hüll");
        break;
    }
    case 50789:
    {
        returnValue = F("Bedburger Schweiz");
        break;
    }
    case 50790:
    {
        returnValue = F("Bedburger Str.");
        break;
    }
    case 50791:
    {
        returnValue = F("Bedburger Weg");
        break;
    }
    case 50792:
    {
        returnValue = F("Bedburger Weide");
        break;
    }
    case 50793:
    {
        returnValue = F("Beddelhäuser Str.");
        break;
    }
    case 50794:
    {
        returnValue = F("Beddinger Str.");
        break;
    }
    case 50795:
    {
        returnValue = F("Beddinger Weg");
        break;
    }
    case 50796:
    {
        returnValue = F("Bedelgasse");
        break;
    }
    case 50797:
    {
        returnValue = F("Bedenbenderweg");
        break;
    }
    case 50798:
    {
        returnValue = F("Bederkesaer Str.");
        break;
    }
    case 50799:
    {
        returnValue = F("Bederkesaer Weg");
        break;
    }
    case 50800:
    {
        returnValue = F("Bederkesaer Wiesendamm");
        break;
    }
    case 50801:
    {
        returnValue = F("Bedernauer Str.");
        break;
    }
    case 50802:
    {
        returnValue = F("Bedersdorfer Str.");
        break;
    }
    case 50803:
    {
        returnValue = F("Bederwitzer Str.");
        break;
    }
    case 50804:
    {
        returnValue = F("Bedeweg");
        break;
    }
    case 50805:
    {
        returnValue = F("Bedheimer Str.");
        break;
    }
    case 50806:
    {
        returnValue = F("Bedhusweg");
        break;
    }
    case 50807:
    {
        returnValue = F("Bedmor");
        break;
    }
    case 50808:
    {
        returnValue = F("Bedofinger Weg");
        break;
    }
    case 50809:
    {
        returnValue = F("Bedraer Str.");
        break;
    }
    case 50810:
    {
        returnValue = F("Beech Court");
        break;
    }
    case 50811:
    {
        returnValue = F("Beeck");
        break;
    }
    case 50812:
    {
        returnValue = F("Beecker Str.");
        break;
    }
    case 50813:
    {
        returnValue = F("Beecker Weg");
        break;
    }
    case 50814:
    {
        returnValue = F("Beeckerortstr.");
        break;
    }
    case 50815:
    {
        returnValue = F("Beeckscher Weg");
        break;
    }
    case 50816:
    {
        returnValue = F("Beecksländer Str.");
        break;
    }
    case 50817:
    {
        returnValue = F("Beeckstr.");
        break;
    }
    case 50818:
    {
        returnValue = F("Beedenbosteler Str.");
        break;
    }
    case 50819:
    {
        returnValue = F("Beedenbosteler Weg");
        break;
    }
    case 50820:
    {
        returnValue = F("Beedenkirchener Str.");
        break;
    }
    case 50821:
    {
        returnValue = F("Beeder Str.");
        break;
    }
    case 50822:
    {
        returnValue = F("Beedstr.");
        break;
    }
    case 50823:
    {
        returnValue = F("Beegerstr.");
        break;
    }
    case 50824:
    {
        returnValue = F("Beeghöfer Ortsstr.");
        break;
    }
    case 50825:
    {
        returnValue = F("Beegstr.");
        break;
    }
    case 50826:
    {
        returnValue = F("Beeholt");
        break;
    }
    case 50827:
    {
        returnValue = F("Beek");
        break;
    }
    case 50828:
    {
        returnValue = F("Beekblick");
        break;
    }
    case 50829:
    {
        returnValue = F("Beekdamm");
        break;
    }
    case 50830:
    {
        returnValue = F("Beekebreite");
        break;
    }
    case 50831:
    {
        returnValue = F("Beekebruch");
        break;
    }
    case 50832:
    {
        returnValue = F("Beekebrücke");
        break;
    }
    case 50833:
    {
        returnValue = F("Beekedamm");
        break;
    }
    case 50834:
    {
        returnValue = F("Beekefeld");
        break;
    }
    case 50835:
    {
        returnValue = F("Beekefeldsweg");
        break;
    }
    case 50836:
    {
        returnValue = F("Beekehof");
        break;
    }
    case 50837:
    {
        returnValue = F("Beekenblick");
        break;
    }
    case 50838:
    {
        returnValue = F("Beekendorfer Str.");
        break;
    }
    case 50839:
    {
        returnValue = F("Beekenende");
        break;
    }
    case 50840:
    {
        returnValue = F("Beekenfeld");
        break;
    }
    case 50841:
    {
        returnValue = F("Beekengrund");
        break;
    }
    case 50842:
    {
        returnValue = F("Beekenhaide");
        break;
    }
    case 50843:
    {
        returnValue = F("Beekenkamp");
        break;
    }
    case 50844:
    {
        returnValue = F("Beekenrahde");
        break;
    }
    case 50845:
    {
        returnValue = F("Beekenriede");
        break;
    }
    case 50846:
    {
        returnValue = F("Beekenweg");
        break;
    }
    case 50847:
    {
        returnValue = F("Beeker Hof");
        break;
    }
    case 50848:
    {
        returnValue = F("Beeker Ring");
        break;
    }
    case 50849:
    {
        returnValue = F("Beeker Str.");
        break;
    }
    case 50850:
    {
        returnValue = F("Beeker Weg");
        break;
    }
    case 50851:
    {
        returnValue = F("Beeker Winkel");
        break;
    }
    case 50852:
    {
        returnValue = F("Beekerstr.");
        break;
    }
    case 50853:
    {
        returnValue = F("Beekestr.");
        break;
    }
    case 50854:
    {
        returnValue = F("Beekeweg");
        break;
    }
    case 50855:
    {
        returnValue = F("Beekewiesen");
        break;
    }
    case 50856:
    {
        returnValue = F("Beekfeld");
        break;
    }
    case 50857:
    {
        returnValue = F("Beekfeldweg");
        break;
    }
    case 50858:
    {
        returnValue = F("Beekgarten");
        break;
    }
    case 50859:
    {
        returnValue = F("Beekhalf");
        break;
    }
    case 50860:
    {
        returnValue = F("Beekholt");
        break;
    }
    case 50861:
    {
        returnValue = F("Beekhusen");
        break;
    }
    case 50862:
    {
        returnValue = F("Beekkamp");
        break;
    }
    case 50863:
    {
        returnValue = F("Beeklangeweg");
        break;
    }
    case 50864:
    {
        returnValue = F("Beekloh");
        break;
    }
    case 50865:
    {
        returnValue = F("Beekmanns Hof");
        break;
    }
    case 50866:
    {
        returnValue = F("Beekmoorweg");
        break;
    }
    case 50867:
    {
        returnValue = F("Beeks Hoff");
        break;
    }
    case 50868:
    {
        returnValue = F("Beeksbrink");
        break;
    }
    case 50869:
    {
        returnValue = F("Beekscher Weg");
        break;
    }
    case 50870:
    {
        returnValue = F("Beeksfelde");
        break;
    }
    case 50871:
    {
        returnValue = F("Beeksteg");
        break;
    }
    case 50872:
    {
        returnValue = F("Beekstr.");
        break;
    }
    case 50873:
    {
        returnValue = F("Beekstraat");
        break;
    }
    case 50874:
    {
        returnValue = F("Beeksweg");
        break;
    }
    case 50875:
    {
        returnValue = F("Beekswiese");
        break;
    }
    case 50876:
    {
        returnValue = F("Beekweg");
        break;
    }
    case 50877:
    {
        returnValue = F("Beekwiese");
        break;
    }
    case 50878:
    {
        returnValue = F("Beekwiesen");
        break;
    }
    case 50879:
    {
        returnValue = F("Beelener Str.");
        break;
    }
    case 50880:
    {
        returnValue = F("Beelitzer Chaussee");
        break;
    }
    case 50881:
    {
        returnValue = F("Beelitzer Landstr.");
        break;
    }
    case 50882:
    {
        returnValue = F("Beelitzer Str.");
        break;
    }
    case 50883:
    {
        returnValue = F("Beelitzer Tor");
        break;
    }
    case 50884:
    {
        returnValue = F("Beelitzer Weg");
        break;
    }
    case 50885:
    {
        returnValue = F("Beelitzweg");
        break;
    }
    case 50886:
    {
        returnValue = F("Beelsgarten");
        break;
    }
    case 50887:
    {
        returnValue = F("Beelter Weg");
        break;
    }
    case 50888:
    {
        returnValue = F("Beembeck");
        break;
    }
    case 50889:
    {
        returnValue = F("Beendorfer Str.");
        break;
    }
    case 50890:
    {
        returnValue = F("Beendscher Weg");
        break;
    }
    case 50891:
    {
        returnValue = F("Beenhäuser Weg");
        break;
    }
    case 50892:
    {
        returnValue = F("Beentweg");
        break;
    }
    case 50893:
    {
        returnValue = F("Beenzer Ausbau");
        break;
    }
    case 50894:
    {
        returnValue = F("Beenzer Chaussee");
        break;
    }
    case 50895:
    {
        returnValue = F("Beenzer Damm");
        break;
    }
    case 50896:
    {
        returnValue = F("Beenzer Landstr.");
        break;
    }
    case 50897:
    {
        returnValue = F("Beenzer Str.");
        break;
    }
    case 50898:
    {
        returnValue = F("Beenzhof");
        break;
    }
    case 50899:
    {
        returnValue = F("Beer-Sheva-Ufer");
        break;
    }
    case 50900:
    {
        returnValue = F("Beer-Siedlung");
        break;
    }
    case 50901:
    {
        returnValue = F("Beer-Yaacov-Weg");
        break;
    }
    case 50902:
    {
        returnValue = F("Beerastr.");
        break;
    }
    case 50903:
    {
        returnValue = F("Beerbach A");
        break;
    }
    case 50904:
    {
        returnValue = F("Beerbach B");
        break;
    }
    case 50905:
    {
        returnValue = F("Beerbach C");
        break;
    }
    case 50906:
    {
        returnValue = F("Beerbach D");
        break;
    }
    case 50907:
    {
        returnValue = F("Beerbach E");
        break;
    }
    case 50908:
    {
        returnValue = F("Beerbacher Hauptstr.");
        break;
    }
    case 50909:
    {
        returnValue = F("Beerbacher Str.");
        break;
    }
    case 50910:
    {
        returnValue = F("Beerbacher Weg");
        break;
    }
    case 50911:
    {
        returnValue = F("Beerbachstr.");
        break;
    }
    case 50912:
    {
        returnValue = F("Beerbachweg");
        break;
    }
    case 50913:
    {
        returnValue = F("Beerbaum");
        break;
    }
    case 50914:
    {
        returnValue = F("Beerbaumer Str.");
        break;
    }
    case 50915:
    {
        returnValue = F("Beerbaumer Weg");
        break;
    }
    case 50916:
    {
        returnValue = F("Beerbaumstr.");
        break;
    }
    case 50917:
    {
        returnValue = F("Beerberg");
        break;
    }
    case 50918:
    {
        returnValue = F("Beerbergstr.");
        break;
    }
    case 50919:
    {
        returnValue = F("Beerbergweg");
        break;
    }
    case 50920:
    {
        returnValue = F("Beerboom");
        break;
    }
    case 50921:
    {
        returnValue = F("Beerboomscher Weg");
        break;
    }
    case 50922:
    {
        returnValue = F("Beerbusch");
        break;
    }
    case 50923:
    {
        returnValue = F("Beerbuschstr.");
        break;
    }
    case 50924:
    {
        returnValue = F("Beerbuschweg");
        break;
    }
    case 50925:
    {
        returnValue = F("Beerbäume");
        break;
    }
    case 50926:
    {
        returnValue = F("Beerbüsche");
        break;
    }
    case 50927:
    {
        returnValue = F("Beerdigungsweg");
        break;
    }
    case 50928:
    {
        returnValue = F("Beerenallee");
        break;
    }
    case 50929:
    {
        returnValue = F("Beerenbarg");
        break;
    }
    case 50930:
    {
        returnValue = F("Beerenbrouckstr.");
        break;
    }
    case 50931:
    {
        returnValue = F("Beerenbuckweg");
        break;
    }
    case 50932:
    {
        returnValue = F("Beerenburg");
        break;
    }
    case 50933:
    {
        returnValue = F("Beerenbusch");
        break;
    }
    case 50934:
    {
        returnValue = F("Beerenbuscher Damm");
        break;
    }
    case 50935:
    {
        returnValue = F("Beerenbuscher Steig");
        break;
    }
    case 50936:
    {
        returnValue = F("Beerenbühlweg");
        break;
    }
    case 50937:
    {
        returnValue = F("Beerendonker Str.");
        break;
    }
    case 50938:
    {
        returnValue = F("Beerendorfer Anger");
        break;
    }
    case 50939:
    {
        returnValue = F("Beerendorfer Str.");
        break;
    }
    case 50940:
    {
        returnValue = F("Beerenfeldstr.");
        break;
    }
    case 50941:
    {
        returnValue = F("Beerengarten");
        break;
    }
    case 50942:
    {
        returnValue = F("Beerengasse");
        break;
    }
    case 50943:
    {
        returnValue = F("Beerengrund");
        break;
    }
    case 50944:
    {
        returnValue = F("Beerenhang");
        break;
    }
    case 50945:
    {
        returnValue = F("Beerenheide");
        break;
    }
    case 50946:
    {
        returnValue = F("Beerenhorst");
        break;
    }
    case 50947:
    {
        returnValue = F("Beerenkamp");
        break;
    }
    case 50948:
    {
        returnValue = F("Beerenkothen");
        break;
    }
    case 50949:
    {
        returnValue = F("Beerenkämpen");
        break;
    }
    case 50950:
    {
        returnValue = F("Beerenpfad");
        break;
    }
    case 50951:
    {
        returnValue = F("Beerens Hecke");
        break;
    }
    case 50952:
    {
        returnValue = F("Beerenschlag");
        break;
    }
    case 50953:
    {
        returnValue = F("Beerenstr.");
        break;
    }
    case 50954:
    {
        returnValue = F("Beerental");
        break;
    }
    case 50955:
    {
        returnValue = F("Beerentalstr.");
        break;
    }
    case 50956:
    {
        returnValue = F("Beerenweg");
        break;
    }
    case 50957:
    {
        returnValue = F("Beerenwies");
        break;
    }
    case 50958:
    {
        returnValue = F("Beerenwiese");
        break;
    }
    case 50959:
    {
        returnValue = F("Beerenwinkel");
        break;
    }
    case 50960:
    {
        returnValue = F("Beeres Hang");
        break;
    }
    case 50961:
    {
        returnValue = F("Beerfelde Ausbau");
        break;
    }
    case 50962:
    {
        returnValue = F("Beerfeldener Str.");
        break;
    }
    case 50963:
    {
        returnValue = F("Beerfeldener Weg");
        break;
    }
    case 50964:
    {
        returnValue = F("Beerfelder Str.");
        break;
    }
    case 50965:
    {
        returnValue = F("Beerfleckweg");
        break;
    }
    case 50966:
    {
        returnValue = F("Beerfurther Weg");
        break;
    }
    case 50967:
    {
        returnValue = F("Beergartenstr.");
        break;
    }
    case 50968:
    {
        returnValue = F("Beergasse");
        break;
    }
    case 50969:
    {
        returnValue = F("Beerhaldenstr.");
        break;
    }
    case 50970:
    {
        returnValue = F("Beerhaldenweg");
        break;
    }
    case 50971:
    {
        returnValue = F("Beerheider Str.");
        break;
    }
    case 50972:
    {
        returnValue = F("Beerholzweg");
        break;
    }
    case 50973:
    {
        returnValue = F("Beerhübel");
        break;
    }
    case 50974:
    {
        returnValue = F("Beerhügel");
        break;
    }
    case 50975:
    {
        returnValue = F("Beerirainweg");
        break;
    }
    case 50976:
    {
        returnValue = F("Beerkamp");
        break;
    }
    case 50977:
    {
        returnValue = F("Beerlacherschneise");
        break;
    }
    case 50978:
    {
        returnValue = F("Beerlager Str.");
        break;
    }
    case 50979:
    {
        returnValue = F("Beerlichsweg");
        break;
    }
    case 50980:
    {
        returnValue = F("Beerlingerbergschneise");
        break;
    }
    case 50981:
    {
        returnValue = F("Beermannstr.");
        break;
    }
    case 50982:
    {
        returnValue = F("Beermiß");
        break;
    }
    case 50983:
    {
        returnValue = F("Beerrasen");
        break;
    }
    case 50984:
    {
        returnValue = F("Beersbach");
        break;
    }
    case 50985:
    {
        returnValue = F("Beersdorf");
        break;
    }
    case 50986:
    {
        returnValue = F("Beerser Feld");
        break;
    }
    case 50987:
    {
        returnValue = F("Beerser Hof");
        break;
    }
    case 50988:
    {
        returnValue = F("Beerser Weg");
        break;
    }
    case 50989:
    {
        returnValue = F("Beersteinstr.");
        break;
    }
    case 50990:
    {
        returnValue = F("Beerster Mühlenweg");
        break;
    }
    case 50991:
    {
        returnValue = F("Beerster Weg");
        break;
    }
    case 50992:
    {
        returnValue = F("Beerstr.");
        break;
    }
    case 50993:
    {
        returnValue = F("Beerstreuchen");
        break;
    }
    case 50994:
    {
        returnValue = F("Beerumer Weg");
        break;
    }
    case 50995:
    {
        returnValue = F("Beerwalder Str.");
        break;
    }
    case 50996:
    {
        returnValue = F("Beerwalder Weg");
        break;
    }
    case 50997:
    {
        returnValue = F("Beerwaldhauptweg");
        break;
    }
    case 50998:
    {
        returnValue = F("Beerwaldweg");
        break;
    }
    case 50999:
    {
        returnValue = F("Beerweg");
        break;
    }
    case 51000:
    {
        returnValue = F("Beerwiese");
        break;
    }
    case 51001:
    {
        returnValue = F("Beerwiesenweg");
        break;
    }
    case 51002:
    {
        returnValue = F("Beerwinkelstr.");
        break;
    }
    case 51003:
    {
        returnValue = F("Beesdau Schulstr.");
        break;
    }
    case 51004:
    {
        returnValue = F("Beesdau Str. der Einheit");
        break;
    }
    case 51005:
    {
        returnValue = F("Beesdau Str. der Freundschaft");
        break;
    }
    case 51006:
    {
        returnValue = F("Beesedau");
        break;
    }
    case 51007:
    {
        returnValue = F("Beesedauer Steg");
        break;
    }
    case 51008:
    {
        returnValue = F("Beeselstr.");
        break;
    }
    case 51009:
    {
        returnValue = F("Beesenbrook");
        break;
    }
    case 51010:
    {
        returnValue = F("Beesener Str.");
        break;
    }
    case 51011:
    {
        returnValue = F("Beesenstedter Str.");
        break;
    }
    case 51012:
    {
        returnValue = F("Beesenstedter Weg");
        break;
    }
    case 51013:
    {
        returnValue = F("Beesenweide");
        break;
    }
    case 51014:
    {
        returnValue = F("Beeser Dorfstr.");
        break;
    }
    case 51015:
    {
        returnValue = F("Beeserstr.");
        break;
    }
    case 51016:
    {
        returnValue = F("Beesestr.");
        break;
    }
    case 51017:
    {
        returnValue = F("Beesgraben");
        break;
    }
    case 51018:
    {
        returnValue = F("Beeskower Chaussee");
        break;
    }
    case 51019:
    {
        returnValue = F("Beeskower Feld");
        break;
    }
    case 51020:
    {
        returnValue = F("Beeskower Platz");
        break;
    }
    case 51021:
    {
        returnValue = F("Beeskower Str.");
        break;
    }
    case 51022:
    {
        returnValue = F("Beeskower Weg");
        break;
    }
    case 51023:
    {
        returnValue = F("Beestener Str.");
        break;
    }
    case 51024:
    {
        returnValue = F("Beesters Kämpken");
        break;
    }
    case 51025:
    {
        returnValue = F("Beestland");
        break;
    }
    case 51026:
    {
        returnValue = F("Beetackerweg");
        break;
    }
    case 51027:
    {
        returnValue = F("Beetallee");
        break;
    }
    case 51028:
    {
        returnValue = F("Beetenackerweg");
        break;
    }
    case 51029:
    {
        returnValue = F("Beetenbornstr.");
        break;
    }
    case 51030:
    {
        returnValue = F("Beetenbruchweg");
        break;
    }
    case 51031:
    {
        returnValue = F("Beetenbrücker Weg");
        break;
    }
    case 51032:
    {
        returnValue = F("Beetenstr.");
        break;
    }
    case 51033:
    {
        returnValue = F("Beetenweg");
        break;
    }
    case 51034:
    {
        returnValue = F("Beetenwiese");
        break;
    }
    case 51035:
    {
        returnValue = F("Beethenweg");
        break;
    }
    case 51036:
    {
        returnValue = F("Beethoven-Ring");
        break;
    }
    case 51037:
    {
        returnValue = F("Beethoven-Str.");
        break;
    }
    case 51038:
    {
        returnValue = F("Beethovenallee");
        break;
    }
    case 51039:
    {
        returnValue = F("Beethovenpark");
        break;
    }
    case 51040:
    {
        returnValue = F("Beethovenplatz");
        break;
    }
    case 51041:
    {
        returnValue = F("Beethovenring");
        break;
    }
    case 51042:
    {
        returnValue = F("Beethovenstr.");
        break;
    }
    case 51043:
    {
        returnValue = F("Beethovenweg");
        break;
    }
    case 51044:
    {
        returnValue = F("Beetlesäcker");
        break;
    }
    case 51045:
    {
        returnValue = F("Beetländer Str.");
        break;
    }
    case 51046:
    {
        returnValue = F("Beetmieschen");
        break;
    }
    case 51047:
    {
        returnValue = F("Beetstr.");
        break;
    }
    case 51048:
    {
        returnValue = F("Beetwiese");
        break;
    }
    case 51049:
    {
        returnValue = F("Beetwischen");
        break;
    }
    case 51050:
    {
        returnValue = F("Beetzendorfer Park");
        break;
    }
    case 51051:
    {
        returnValue = F("Beetzer Dorfstr.");
        break;
    }
    case 51052:
    {
        returnValue = F("Beetzer Luch");
        break;
    }
    case 51053:
    {
        returnValue = F("Beetzer Str.");
        break;
    }
    case 51054:
    {
        returnValue = F("Beetzer Triftweg");
        break;
    }
    case 51055:
    {
        returnValue = F("Beetzer Weidenweg");
        break;
    }
    case 51056:
    {
        returnValue = F("Beetzseeufer");
        break;
    }
    case 51057:
    {
        returnValue = F("Beetzweg");
        break;
    }
    case 51058:
    {
        returnValue = F("Beetäcker");
        break;
    }
    case 51059:
    {
        returnValue = F("Beeweg");
        break;
    }
    case 51060:
    {
        returnValue = F("Befahrbare Seitenfläche");
        break;
    }
    case 51061:
    {
        returnValue = F("Befestigter Waldweg");
        break;
    }
    case 51062:
    {
        returnValue = F("Befestigungsanlage");
        break;
    }
    case 51063:
    {
        returnValue = F("Beffendorfer Str.");
        break;
    }
    case 51064:
    {
        returnValue = F("Beffendorfer Weg");
        break;
    }
    case 51065:
    {
        returnValue = F("Befferberg");
        break;
    }
    case 51066:
    {
        returnValue = F("Befreiungshallestr.");
        break;
    }
    case 51067:
    {
        returnValue = F("Befreiungsstr.");
        break;
    }
    case 51068:
    {
        returnValue = F("Begaer Str.");
        break;
    }
    case 51069:
    {
        returnValue = F("Begakamp");
        break;
    }
    case 51070:
    {
        returnValue = F("Begardistr.");
        break;
    }
    case 51071:
    {
        returnValue = F("Begasstr.");
        break;
    }
    case 51072:
    {
        returnValue = F("Begastr.");
        break;
    }
    case 51073:
    {
        returnValue = F("Begasweg");
        break;
    }
    case 51074:
    {
        returnValue = F("Begauer Mühlenweg");
        break;
    }
    case 51075:
    {
        returnValue = F("Begauer Str.");
        break;
    }
    case 51076:
    {
        returnValue = F("Begaustr.");
        break;
    }
    case 51077:
    {
        returnValue = F("Begaweg");
        break;
    }
    case 51078:
    {
        returnValue = F("Begegnungsfläche");
        break;
    }
    case 51079:
    {
        returnValue = F("Begegnungspark Hahle");
        break;
    }
    case 51080:
    {
        returnValue = F("Begegnungsplatz Fichtepark");
        break;
    }
    case 51081:
    {
        returnValue = F("Begegnungsraum Lauter");
        break;
    }
    case 51082:
    {
        returnValue = F("Begegnungsstätte Feldmann-Stiftung");
        break;
    }
    case 51083:
    {
        returnValue = F("Begehbare Vogelvoliere");
        break;
    }
    case 51084:
    {
        returnValue = F("Begelleite");
        break;
    }
    case 51085:
    {
        returnValue = F("Begelstr.");
        break;
    }
    case 51086:
    {
        returnValue = F("Begemannstr.");
        break;
    }
    case 51087:
    {
        returnValue = F("Begerstr.");
        break;
    }
    case 51088:
    {
        returnValue = F("Beggendorfer Str.");
        break;
    }
    case 51089:
    {
        returnValue = F("Beggenegartweg");
        break;
    }
    case 51090:
    {
        returnValue = F("Beggersgrund");
        break;
    }
    case 51091:
    {
        returnValue = F("Begglinweg");
        break;
    }
    case 51092:
    {
        returnValue = F("Beghinenhof");
        break;
    }
    case 51093:
    {
        returnValue = F("Beghinenstr.");
        break;
    }
    case 51094:
    {
        returnValue = F("Beginenberg");
        break;
    }
    case 51095:
    {
        returnValue = F("Begineneck");
        break;
    }
    case 51096:
    {
        returnValue = F("Beginengasse");
        break;
    }
    case 51097:
    {
        returnValue = F("Beginengäßchen");
        break;
    }
    case 51098:
    {
        returnValue = F("Beginenhof");
        break;
    }
    case 51099:
    {
        returnValue = F("Beginenpad");
        break;
    }
    case 51100:
    {
        returnValue = F("Beginenstr.");
        break;
    }
    case 51101:
    {
        returnValue = F("Beginenweg");
        break;
    }
    case 51102:
    {
        returnValue = F("Beginnenfeld");
        break;
    }
    case 51103:
    {
        returnValue = F("Beginnenkamp");
        break;
    }
    case 51104:
    {
        returnValue = F("Begnizweg");
        break;
    }
    case 51105:
    {
        returnValue = F("Begnungsstätte Zum Himmelsfels");
        break;
    }
    case 51106:
    {
        returnValue = F("Begonienplatz");
        break;
    }
    case 51107:
    {
        returnValue = F("Begonienreihe");
        break;
    }
    case 51108:
    {
        returnValue = F("Begonienstr.");
        break;
    }
    case 51109:
    {
        returnValue = F("Begonienweg");
        break;
    }
    case 51110:
    {
        returnValue = F("Beguinenstr.");
        break;
    }
    case 51111:
    {
        returnValue = F("Beguinenwiese");
        break;
    }
    case 51112:
    {
        returnValue = F("Behaghelweg");
        break;
    }
    case 51113:
    {
        returnValue = F("Behaimring");
        break;
    }
    case 51114:
    {
        returnValue = F("Behaimstr.");
        break;
    }
    case 51115:
    {
        returnValue = F("Behaimweg");
        break;
    }
    case 51116:
    {
        returnValue = F("Behamberger Str.");
        break;
    }
    case 51117:
    {
        returnValue = F("Behamstr.");
        break;
    }
    case 51118:
    {
        returnValue = F("Behatonstr.");
        break;
    }
    case 51119:
    {
        returnValue = F("Beheburgstr.");
        break;
    }
    case 51120:
    {
        returnValue = F("Beheimstr.");
        break;
    }
    case 51121:
    {
        returnValue = F("Behelfsbrücke");
        break;
    }
    case 51122:
    {
        returnValue = F("Behelfsbrücke (Baumstamm + Geländer)");
        break;
    }
    case 51123:
    {
        returnValue = F("Behelfsbrücke / nur für die Bauphase /Personbenverkehr und nur Einsatzfahrzeuge Frei");
        break;
    }
    case 51124:
    {
        returnValue = F("Behelfssteg");
        break;
    }
    case 51125:
    {
        returnValue = F("Behelfsstr.");
        break;
    }
    case 51126:
    {
        returnValue = F("Behfels");
        break;
    }
    case 51127:
    {
        returnValue = F("Behlendorfer Str.");
        break;
    }
    case 51128:
    {
        returnValue = F("Behlenstr.");
        break;
    }
    case 51129:
    {
        returnValue = F("Behler Weg");
        break;
    }
    case 51130:
    {
        returnValue = F("Behlersstr.");
        break;
    }
    case 51131:
    {
        returnValue = F("Behlertstr.");
        break;
    }
    case 51132:
    {
        returnValue = F("Behlesheck");
        break;
    }
    case 51133:
    {
        returnValue = F("Behleweg");
        break;
    }
    case 51134:
    {
        returnValue = F("Behlinger Mühle");
        break;
    }
    case 51135:
    {
        returnValue = F("Behlinger Str.");
        break;
    }
    case 51136:
    {
        returnValue = F("Behlinger Weg");
        break;
    }
    case 51137:
    {
        returnValue = F("Behlingshof");
        break;
    }
    case 51138:
    {
        returnValue = F("Behlingshoff");
        break;
    }
    case 51139:
    {
        returnValue = F("Behlitzer Str.");
        break;
    }
    case 51140:
    {
        returnValue = F("Behlmer Mühlenweg");
        break;
    }
    case 51141:
    {
        returnValue = F("Behlmerweg");
        break;
    }
    case 51142:
    {
        returnValue = F("Behlow");
        break;
    }
    case 51143:
    {
        returnValue = F("Behlstr.");
        break;
    }
    case 51144:
    {
        returnValue = F("Behmenstr.");
        break;
    }
    case 51145:
    {
        returnValue = F("Behmerothsfeld");
        break;
    }
    case 51146:
    {
        returnValue = F("Behmestr.");
        break;
    }
    case 51147:
    {
        returnValue = F("Behmhusen");
        break;
    }
    case 51148:
    {
        returnValue = F("Behmhusener Str.");
        break;
    }
    case 51149:
    {
        returnValue = F("Behmstr.");
        break;
    }
    case 51150:
    {
        returnValue = F("Behmweg");
        break;
    }
    case 51151:
    {
        returnValue = F("Behnebach");
        break;
    }
    case 51152:
    {
        returnValue = F("Behnenkamp");
        break;
    }
    case 51153:
    {
        returnValue = F("Behnerberg");
        break;
    }
    case 51154:
    {
        returnValue = F("Behnes Wiesen");
        break;
    }
    case 51155:
    {
        returnValue = F("Behnesstr.");
        break;
    }
    case 51156:
    {
        returnValue = F("Behnestr.");
        break;
    }
    case 51157:
    {
        returnValue = F("Behneweg");
        break;
    }
    case 51158:
    {
        returnValue = F("Behnhaus-Gang");
        break;
    }
    case 51159:
    {
        returnValue = F("Behnhof");
        break;
    }
    case 51160:
    {
        returnValue = F("Behningen");
        break;
    }
    case 51161:
    {
        returnValue = F("Behninger Str.");
        break;
    }
    case 51162:
    {
        returnValue = F("Behnitzer Dorfstr.");
        break;
    }
    case 51163:
    {
        returnValue = F("Behnkenhäger Str.");
        break;
    }
    case 51164:
    {
        returnValue = F("Behnkenhäger Weg");
        break;
    }
    case 51165:
    {
        returnValue = F("Behnkenmühlen");
        break;
    }
    case 51166:
    {
        returnValue = F("Behnkeweg");
        break;
    }
    case 51167:
    {
        returnValue = F("Behnsdorfer Str.");
        break;
    }
    case 51168:
    {
        returnValue = F("Behnsenhof");
        break;
    }
    case 51169:
    {
        returnValue = F("Behnsenstr.");
        break;
    }
    case 51170:
    {
        returnValue = F("Behnstr.");
        break;
    }
    case 51171:
    {
        returnValue = F("Behntweg");
        break;
    }
    case 51172:
    {
        returnValue = F("Behnweg");
        break;
    }
    case 51173:
    {
        returnValue = F("Behr weg");
        break;
    }
    case 51174:
    {
        returnValue = F("Behrbachstr.");
        break;
    }
    case 51175:
    {
        returnValue = F("Behrbohmskamp");
        break;
    }
    case 51176:
    {
        returnValue = F("Behrbom");
        break;
    }
    case 51177:
    {
        returnValue = F("Behrelsen");
        break;
    }
    case 51178:
    {
        returnValue = F("Behrenbergstr.");
        break;
    }
    case 51179:
    {
        returnValue = F("Behrendhof");
        break;
    }
    case 51180:
    {
        returnValue = F("Behrendorfer-Kiel");
        break;
    }
    case 51181:
    {
        returnValue = F("Behrends Hof");
        break;
    }
    case 51182:
    {
        returnValue = F("Behrendsweg");
        break;
    }
    case 51183:
    {
        returnValue = F("Behrener Dorfstr.");
        break;
    }
    case 51184:
    {
        returnValue = F("Behrener Str.");
        break;
    }
    case 51185:
    {
        returnValue = F("Behrener Weg");
        break;
    }
    case 51186:
    {
        returnValue = F("Behrenhöfer Weg");
        break;
    }
    case 51187:
    {
        returnValue = F("Behrens Twachte");
        break;
    }
    case 51188:
    {
        returnValue = F("Behrens-Ort Schneise");
        break;
    }
    case 51189:
    {
        returnValue = F("Behrens-Ring");
        break;
    }
    case 51190:
    {
        returnValue = F("Behrensallee");
        break;
    }
    case 51191:
    {
        returnValue = F("Behrensbrooker Weg");
        break;
    }
    case 51192:
    {
        returnValue = F("Behrenser Str.");
        break;
    }
    case 51193:
    {
        returnValue = F("Behrenser Weg");
        break;
    }
    case 51194:
    {
        returnValue = F("Behrensfeld");
        break;
    }
    case 51195:
    {
        returnValue = F("Behrensgang");
        break;
    }
    case 51196:
    {
        returnValue = F("Behrensgasse");
        break;
    }
    case 51197:
    {
        returnValue = F("Behrenskamp");
        break;
    }
    case 51198:
    {
        returnValue = F("Behrenspark");
        break;
    }
    case 51199:
    {
        returnValue = F("Behrensstr.");
        break;
    }
    case 51200:
    {
        returnValue = F("Behrensstr. 51-47");
        break;
    }
    case 51201:
    {
        returnValue = F("Behrenstr.");
        break;
    }
    case 51202:
    {
        returnValue = F("Behrensweg");
        break;
    }
    case 51203:
    {
        returnValue = F("Behrenswinkel");
        break;
    }
    case 51204:
    {
        returnValue = F("Behrestr.");
        break;
    }
    case 51205:
    {
        returnValue = F("Behrgasse");
        break;
    }
    case 51206:
    {
        returnValue = F("Behrhof");
        break;
    }
    case 51207:
    {
        returnValue = F("Behringer Schenke");
        break;
    }
    case 51208:
    {
        returnValue = F("Behringer Str.");
        break;
    }
    case 51209:
    {
        returnValue = F("Behringer Weg");
        break;
    }
    case 51210:
    {
        returnValue = F("Behringersdorfer Str.");
        break;
    }
    case 51211:
    {
        returnValue = F("Behringersmühle");
        break;
    }
    case 51212:
    {
        returnValue = F("Behringersmühler Str.");
        break;
    }
    case 51213:
    {
        returnValue = F("Behringerstr.");
        break;
    }
    case 51214:
    {
        returnValue = F("Behringerweg");
        break;
    }
    case 51215:
    {
        returnValue = F("Behringhauser Str.");
        break;
    }
    case 51216:
    {
        returnValue = F("Behringplatz");
        break;
    }
    case 51217:
    {
        returnValue = F("Behringstr.");
        break;
    }
    case 51218:
    {
        returnValue = F("Behringtreppe");
        break;
    }
    case 51219:
    {
        returnValue = F("Behringweg");
        break;
    }
    case 51220:
    {
        returnValue = F("Behrlastr.");
        break;
    }
    case 51221:
    {
        returnValue = F("Behrnenweg");
        break;
    }
    case 51222:
    {
        returnValue = F("Behrs Tannen");
        break;
    }
    case 51223:
    {
        returnValue = F("Behrstr.");
        break;
    }
    case 51224:
    {
        returnValue = F("Behrunger Str.");
        break;
    }
    case 51225:
    {
        returnValue = F("Behrunger Weg");
        break;
    }
    case 51226:
    {
        returnValue = F("Behrwegle");
        break;
    }
    case 51227:
    {
        returnValue = F("Behwaldweg");
        break;
    }
    case 51228:
    {
        returnValue = F("Behälterweg");
        break;
    }
    case 51229:
    {
        returnValue = F("Behälterwiese");
        break;
    }
    case 51230:
    {
        returnValue = F("Bei Abbingwehr");
        break;
    }
    case 51231:
    {
        returnValue = F("Bei Becker");
        break;
    }
    case 51232:
    {
        returnValue = F("Bei Brandeck");
        break;
    }
    case 51233:
    {
        returnValue = F("Bei Brinksteffen");
        break;
    }
    case 51234:
    {
        returnValue = F("Bei Brixmannstannen");
        break;
    }
    case 51235:
    {
        returnValue = F("Bei Fußenkreuz");
        break;
    }
    case 51236:
    {
        returnValue = F("Bei Gerstnershaus");
        break;
    }
    case 51237:
    {
        returnValue = F("Bei Gottels");
        break;
    }
    case 51238:
    {
        returnValue = F("Bei Kaisers-Haus");
        break;
    }
    case 51239:
    {
        returnValue = F("Bei Kallagen Hof");
        break;
    }
    case 51240:
    {
        returnValue = F("Bei Klenen Hof");
        break;
    }
    case 51241:
    {
        returnValue = F("Bei Kringwehrum");
        break;
    }
    case 51242:
    {
        returnValue = F("Bei Maria Schray");
        break;
    }
    case 51243:
    {
        returnValue = F("Bei Meyers Hof");
        break;
    }
    case 51244:
    {
        returnValue = F("Bei Middendorfs Hof");
        break;
    }
    case 51245:
    {
        returnValue = F("Bei Mönchsgarten");
        break;
    }
    case 51246:
    {
        returnValue = F("Bei Mühlendorn");
        break;
    }
    case 51247:
    {
        returnValue = F("Bei Rölkers Wiesen");
        break;
    }
    case 51248:
    {
        returnValue = F("Bei Sankt Anna");
        break;
    }
    case 51249:
    {
        returnValue = F("Bei Sankt Barbara");
        break;
    }
    case 51250:
    {
        returnValue = F("Bei Sankt Johannis");
        break;
    }
    case 51251:
    {
        returnValue = F("Bei Sankt Max");
        break;
    }
    case 51252:
    {
        returnValue = F("Bei Sankt Peter");
        break;
    }
    case 51253:
    {
        returnValue = F("Bei Sankt Ursula");
        break;
    }
    case 51254:
    {
        returnValue = F("Bei St. Anna");
        break;
    }
    case 51255:
    {
        returnValue = F("Bei St. Bartholomäi");
        break;
    }
    case 51256:
    {
        returnValue = F("Bei St. Georgen");
        break;
    }
    case 51257:
    {
        returnValue = F("Bei St. Jost");
        break;
    }
    case 51258:
    {
        returnValue = F("Bei St. Leonhard");
        break;
    }
    case 51259:
    {
        returnValue = F("Bei St. Petri");
        break;
    }
    case 51260:
    {
        returnValue = F("Bei St. Wilhadi");
        break;
    }
    case 51261:
    {
        returnValue = F("Bei St.-Johannis");
        break;
    }
    case 51262:
    {
        returnValue = F("Bei Susings Hof");
        break;
    }
    case 51263:
    {
        returnValue = F("Bei Vliehaus");
        break;
    }
    case 51264:
    {
        returnValue = F("Bei Wichhusen");
        break;
    }
    case 51265:
    {
        returnValue = F("Bei Wichtens");
        break;
    }
    case 51266:
    {
        returnValue = F("Bei Wilberts Wall");
        break;
    }
    case 51267:
    {
        returnValue = F("Bei dem Frankenbaume");
        break;
    }
    case 51268:
    {
        returnValue = F("Bei dem Gerichte");
        break;
    }
    case 51269:
    {
        returnValue = F("Bei dem Hainstieg");
        break;
    }
    case 51270:
    {
        returnValue = F("Bei dem Holzmoor");
        break;
    }
    case 51271:
    {
        returnValue = F("Bei dem Moor");
        break;
    }
    case 51272:
    {
        returnValue = F("Bei dem Schloss");
        break;
    }
    case 51273:
    {
        returnValue = F("Bei dem Stein auf die Mauswiese Außerhalb");
        break;
    }
    case 51274:
    {
        returnValue = F("Bei dem Weiher");
        break;
    }
    case 51275:
    {
        returnValue = F("Bei den 4 Ulmen");
        break;
    }
    case 51276:
    {
        returnValue = F("Bei den Allwiesen");
        break;
    }
    case 51277:
    {
        returnValue = F("Bei den Anstreichern");
        break;
    }
    case 51278:
    {
        returnValue = F("Bei den Bauern");
        break;
    }
    case 51279:
    {
        returnValue = F("Bei den Birken");
        break;
    }
    case 51280:
    {
        returnValue = F("Bei den Borger Tannen");
        break;
    }
    case 51281:
    {
        returnValue = F("Bei den Buchen");
        break;
    }
    case 51282:
    {
        returnValue = F("Bei den Bäumchen");
        break;
    }
    case 51283:
    {
        returnValue = F("Bei den Bäumen");
        break;
    }
    case 51284:
    {
        returnValue = F("Bei den Dolinen");
        break;
    }
    case 51285:
    {
        returnValue = F("Bei den Doren");
        break;
    }
    case 51286:
    {
        returnValue = F("Bei den Drei Figuren");
        break;
    }
    case 51287:
    {
        returnValue = F("Bei den Eichbäumen");
        break;
    }
    case 51288:
    {
        returnValue = F("Bei den Eichen");
        break;
    }
    case 51289:
    {
        returnValue = F("Bei den Erbhöfen");
        break;
    }
    case 51290:
    {
        returnValue = F("Bei den Erlen");
        break;
    }
    case 51291:
    {
        returnValue = F("Bei den Eschen");
        break;
    }
    case 51292:
    {
        returnValue = F("Bei den Espen");
        break;
    }
    case 51293:
    {
        returnValue = F("Bei den Fahrten");
        break;
    }
    case 51294:
    {
        returnValue = F("Bei den Feldmühlen");
        break;
    }
    case 51295:
    {
        returnValue = F("Bei den Fichten");
        break;
    }
    case 51296:
    {
        returnValue = F("Bei den Flecken");
        break;
    }
    case 51297:
    {
        returnValue = F("Bei den Fohren");
        break;
    }
    case 51298:
    {
        returnValue = F("Bei den Fuchslöchern");
        break;
    }
    case 51299:
    {
        returnValue = F("Bei den Füchsen");
        break;
    }
    case 51300:
    {
        returnValue = F("Bei den Graftwiesen");
        break;
    }
    case 51301:
    {
        returnValue = F("Bei den Großen Steinen");
        break;
    }
    case 51302:
    {
        returnValue = F("Bei den Grünen Platten");
        break;
    }
    case 51303:
    {
        returnValue = F("Bei den Gänsekuhlen");
        break;
    }
    case 51304:
    {
        returnValue = F("Bei den Gärten");
        break;
    }
    case 51305:
    {
        returnValue = F("Bei den Hainweiden");
        break;
    }
    case 51306:
    {
        returnValue = F("Bei den Heidkuhlen");
        break;
    }
    case 51307:
    {
        returnValue = F("Bei den Heidplacken");
        break;
    }
    case 51308:
    {
        returnValue = F("Bei den Holzhöfen");
        break;
    }
    case 51309:
    {
        returnValue = F("Bei den Holzäckern");
        break;
    }
    case 51310:
    {
        returnValue = F("Bei den Häuslen");
        break;
    }
    case 51311:
    {
        returnValue = F("Bei den Höfen");
        break;
    }
    case 51312:
    {
        returnValue = F("Bei den Hünengräbern");
        break;
    }
    case 51313:
    {
        returnValue = F("Bei den Imhöfen");
        break;
    }
    case 51314:
    {
        returnValue = F("Bei den Junkergärten");
        break;
    }
    case 51315:
    {
        returnValue = F("Bei den Kappen");
        break;
    }
    case 51316:
    {
        returnValue = F("Bei den Kellerhäusern");
        break;
    }
    case 51317:
    {
        returnValue = F("Bei den Kellern");
        break;
    }
    case 51318:
    {
        returnValue = F("Bei den Kiefern");
        break;
    }
    case 51319:
    {
        returnValue = F("Bei den Kleingärten");
        break;
    }
    case 51320:
    {
        returnValue = F("Bei den Klosterkämpen");
        break;
    }
    case 51321:
    {
        returnValue = F("Bei den Krautgärten");
        break;
    }
    case 51322:
    {
        returnValue = F("Bei den Krautländern");
        break;
    }
    case 51323:
    {
        returnValue = F("Bei den Kämpen");
        break;
    }
    case 51324:
    {
        returnValue = F("Bei den Köthnern");
        break;
    }
    case 51325:
    {
        returnValue = F("Bei den Langen Birken");
        break;
    }
    case 51326:
    {
        returnValue = F("Bei den Lehmkuhlen");
        break;
    }
    case 51327:
    {
        returnValue = F("Bei den Linden");
        break;
    }
    case 51328:
    {
        returnValue = F("Bei den Lindenwiesen");
        break;
    }
    case 51329:
    {
        returnValue = F("Bei den Linnenbergen");
        break;
    }
    case 51330:
    {
        returnValue = F("Bei den Lochäckern");
        break;
    }
    case 51331:
    {
        returnValue = F("Bei den Methkaten");
        break;
    }
    case 51332:
    {
        returnValue = F("Bei den Mühlen");
        break;
    }
    case 51333:
    {
        returnValue = F("Bei den Mühlwiesen");
        break;
    }
    case 51334:
    {
        returnValue = F("Bei den Neun Morgen");
        break;
    }
    case 51335:
    {
        returnValue = F("Bei den Nußbäumen");
        break;
    }
    case 51336:
    {
        returnValue = F("Bei den Obstgärten");
        break;
    }
    case 51337:
    {
        returnValue = F("Bei den Pappeln");
        break;
    }
    case 51338:
    {
        returnValue = F("Bei den Pfalzwiesen");
        break;
    }
    case 51339:
    {
        returnValue = F("Bei den Pferdeställen");
        break;
    }
    case 51340:
    {
        returnValue = F("Bei den Pflanzenländern");
        break;
    }
    case 51341:
    {
        returnValue = F("Bei den Polizeigärten");
        break;
    }
    case 51342:
    {
        returnValue = F("Bei den Rauhen Bergen");
        break;
    }
    case 51343:
    {
        returnValue = F("Bei den Rethen");
        break;
    }
    case 51344:
    {
        returnValue = F("Bei den Riegelwiesen");
        break;
    }
    case 51345:
    {
        returnValue = F("Bei den Riehen");
        break;
    }
    case 51346:
    {
        returnValue = F("Bei den Riethen");
        break;
    }
    case 51347:
    {
        returnValue = F("Bei den Roten Buchen");
        break;
    }
    case 51348:
    {
        returnValue = F("Bei den Roßwiesen");
        break;
    }
    case 51349:
    {
        returnValue = F("Bei den Römergräbern");
        break;
    }
    case 51350:
    {
        returnValue = F("Bei den Rüsten");
        break;
    }
    case 51351:
    {
        returnValue = F("Bei den Schafställen");
        break;
    }
    case 51352:
    {
        returnValue = F("Bei den Schlehen");
        break;
    }
    case 51353:
    {
        returnValue = F("Bei den Schlossweihern");
        break;
    }
    case 51354:
    {
        returnValue = F("Bei den Schmidäckern");
        break;
    }
    case 51355:
    {
        returnValue = F("Bei den Seewiesen");
        break;
    }
    case 51356:
    {
        returnValue = F("Bei den Selzam Weiden");
        break;
    }
    case 51357:
    {
        returnValue = F("Bei den Semmenwiesen");
        break;
    }
    case 51358:
    {
        returnValue = F("Bei den Sieben Kindeln");
        break;
    }
    case 51359:
    {
        returnValue = F("Bei den Sporthallen");
        break;
    }
    case 51360:
    {
        returnValue = F("Bei den Spritzen");
        break;
    }
    case 51361:
    {
        returnValue = F("Bei den Stadtwerken");
        break;
    }
    case 51362:
    {
        returnValue = F("Bei den Steegen");
        break;
    }
    case 51363:
    {
        returnValue = F("Bei den Stockwiesen");
        break;
    }
    case 51364:
    {
        returnValue = F("Bei den Tannen");
        break;
    }
    case 51365:
    {
        returnValue = F("Bei den Teichen");
        break;
    }
    case 51366:
    {
        returnValue = F("Bei den Tongruben");
        break;
    }
    case 51367:
    {
        returnValue = F("Bei den Türmen");
        break;
    }
    case 51368:
    {
        returnValue = F("Bei den Vier Äckern");
        break;
    }
    case 51369:
    {
        returnValue = F("Bei den Wegäckern");
        break;
    }
    case 51370:
    {
        returnValue = F("Bei den Weiden");
        break;
    }
    case 51371:
    {
        returnValue = F("Bei den Weidenbäumen");
        break;
    }
    case 51372:
    {
        returnValue = F("Bei den Weidenstämmen");
        break;
    }
    case 51373:
    {
        returnValue = F("Bei den Werren");
        break;
    }
    case 51374:
    {
        returnValue = F("Bei den Wettern");
        break;
    }
    case 51375:
    {
        returnValue = F("Bei den Zäunen");
        break;
    }
    case 51376:
    {
        returnValue = F("Bei den drei Buchen");
        break;
    }
    case 51377:
    {
        returnValue = F("Bei den drei Eichen");
        break;
    }
    case 51378:
    {
        returnValue = F("Bei den drei Kreuzen");
        break;
    }
    case 51379:
    {
        returnValue = F("Bei den kleinen Häusern");
        break;
    }
    case 51380:
    {
        returnValue = F("Bei den roten Höfen");
        break;
    }
    case 51381:
    {
        returnValue = F("Bei den schieren Eichen");
        break;
    }
    case 51382:
    {
        returnValue = F("Bei den sechs Linden");
        break;
    }
    case 51383:
    {
        returnValue = F("Bei den zwei Kreuzen");
        break;
    }
    case 51384:
    {
        returnValue = F("Bei den zwölf Aposteln");
        break;
    }
    case 51385:
    {
        returnValue = F("Bei der Abtsmühle");
        break;
    }
    case 51386:
    {
        returnValue = F("Bei der Abtspferdetränke");
        break;
    }
    case 51387:
    {
        returnValue = F("Bei der Alten Furt");
        break;
    }
    case 51388:
    {
        returnValue = F("Bei der Alten Kate");
        break;
    }
    case 51389:
    {
        returnValue = F("Bei der Alten Liebe");
        break;
    }
    case 51390:
    {
        returnValue = F("Bei der Alten Mühle");
        break;
    }
    case 51391:
    {
        returnValue = F("Bei der Alten Post");
        break;
    }
    case 51392:
    {
        returnValue = F("Bei der Alten Schmiede");
        break;
    }
    case 51393:
    {
        returnValue = F("Bei der Alten Schule");
        break;
    }
    case 51394:
    {
        returnValue = F("Bei der Alten Ziegelei");
        break;
    }
    case 51395:
    {
        returnValue = F("Bei der Altstadt");
        break;
    }
    case 51396:
    {
        returnValue = F("Bei der Arbeitskelter");
        break;
    }
    case 51397:
    {
        returnValue = F("Bei der Arena");
        break;
    }
    case 51398:
    {
        returnValue = F("Bei der Arnau");
        break;
    }
    case 51399:
    {
        returnValue = F("Bei der Autobahn");
        break;
    }
    case 51400:
    {
        returnValue = F("Bei der Autobahnmeisterei");
        break;
    }
    case 51401:
    {
        returnValue = F("Bei der Bachbruck");
        break;
    }
    case 51402:
    {
        returnValue = F("Bei der Bergkelter");
        break;
    }
    case 51403:
    {
        returnValue = F("Bei der Bleiche");
        break;
    }
    case 51404:
    {
        returnValue = F("Bei der Braake");
        break;
    }
    case 51405:
    {
        returnValue = F("Bei der Breitsülze");
        break;
    }
    case 51406:
    {
        returnValue = F("Bei der Bruchmühle");
        break;
    }
    case 51407:
    {
        returnValue = F("Bei der Brücke");
        break;
    }
    case 51408:
    {
        returnValue = F("Bei der Brüderkirche");
        break;
    }
    case 51409:
    {
        returnValue = F("Bei der Brühlmühle");
        break;
    }
    case 51410:
    {
        returnValue = F("Bei der Buchstauden");
        break;
    }
    case 51411:
    {
        returnValue = F("Bei der Buhlhofe");
        break;
    }
    case 51412:
    {
        returnValue = F("Bei der Bäckerei");
        break;
    }
    case 51413:
    {
        returnValue = F("Bei der Börne");
        break;
    }
    case 51414:
    {
        returnValue = F("Bei der Böttcherei");
        break;
    }
    case 51415:
    {
        returnValue = F("Bei der Doppeleiche");
        break;
    }
    case 51416:
    {
        returnValue = F("Bei der Dorflinde");
        break;
    }
    case 51417:
    {
        returnValue = F("Bei der Dornheck");
        break;
    }
    case 51418:
    {
        returnValue = F("Bei der Drehscheibe");
        break;
    }
    case 51419:
    {
        returnValue = F("Bei der Dörre");
        break;
    }
    case 51420:
    {
        returnValue = F("Bei der Eich");
        break;
    }
    case 51421:
    {
        returnValue = F("Bei der Eiche");
        break;
    }
    case 51422:
    {
        returnValue = F("Bei der Erbsmühle");
        break;
    }
    case 51423:
    {
        returnValue = F("Bei der Erdbeerwiese");
        break;
    }
    case 51424:
    {
        returnValue = F("Bei der Erlbacher Str.");
        break;
    }
    case 51425:
    {
        returnValue = F("Bei der Ermsbrücke");
        break;
    }
    case 51426:
    {
        returnValue = F("Bei der Eselsbrücke");
        break;
    }
    case 51427:
    {
        returnValue = F("Bei der Feldremise");
        break;
    }
    case 51428:
    {
        returnValue = F("Bei der Feuerwehr");
        break;
    }
    case 51429:
    {
        returnValue = F("Bei der Fibel");
        break;
    }
    case 51430:
    {
        returnValue = F("Bei der Fischtreppe");
        break;
    }
    case 51431:
    {
        returnValue = F("Bei der Flutrinne");
        break;
    }
    case 51432:
    {
        returnValue = F("Bei der Forche");
        break;
    }
    case 51433:
    {
        returnValue = F("Bei der Frauenkirche");
        break;
    }
    case 51434:
    {
        returnValue = F("Bei der Friedenseiche");
        break;
    }
    case 51435:
    {
        returnValue = F("Bei der Fruchtschranne");
        break;
    }
    case 51436:
    {
        returnValue = F("Bei der Furthmühle");
        break;
    }
    case 51437:
    {
        returnValue = F("Bei der Gasanstalt");
        break;
    }
    case 51438:
    {
        returnValue = F("Bei der Gernbrücke");
        break;
    }
    case 51439:
    {
        returnValue = F("Bei der Glocke");
        break;
    }
    case 51440:
    {
        returnValue = F("Bei der Goldenen Bremm");
        break;
    }
    case 51441:
    {
        returnValue = F("Bei der Gottesleiter");
        break;
    }
    case 51442:
    {
        returnValue = F("Bei der Grafenkelter");
        break;
    }
    case 51443:
    {
        returnValue = F("Bei der Grodener Kirche");
        break;
    }
    case 51444:
    {
        returnValue = F("Bei der Grotte");
        break;
    }
    case 51445:
    {
        returnValue = F("Bei der Großen Brücke");
        break;
    }
    case 51446:
    {
        returnValue = F("Bei der Grube");
        break;
    }
    case 51447:
    {
        returnValue = F("Bei der Guldenwiese");
        break;
    }
    case 51448:
    {
        returnValue = F("Bei der Gärtnerei");
        break;
    }
    case 51449:
    {
        returnValue = F("Bei der Hammerschmiede");
        break;
    }
    case 51450:
    {
        returnValue = F("Bei der Hand");
        break;
    }
    case 51451:
    {
        returnValue = F("Bei der Hardtlinde");
        break;
    }
    case 51452:
    {
        returnValue = F("Bei der Hauptwache");
        break;
    }
    case 51453:
    {
        returnValue = F("Bei der Heidenmauer");
        break;
    }
    case 51454:
    {
        returnValue = F("Bei der Heilgeistkirche");
        break;
    }
    case 51455:
    {
        returnValue = F("Bei der Hirsenmühle");
        break;
    }
    case 51456:
    {
        returnValue = F("Bei der Hohen Burg");
        break;
    }
    case 51457:
    {
        returnValue = F("Bei der Hohl");
        break;
    }
    case 51458:
    {
        returnValue = F("Bei der Hollerstaude");
        break;
    }
    case 51459:
    {
        returnValue = F("Bei der Horst");
        break;
    }
    case 51460:
    {
        returnValue = F("Bei der Hub");
        break;
    }
    case 51461:
    {
        returnValue = F("Bei der Humesgrub");
        break;
    }
    case 51462:
    {
        returnValue = F("Bei der Hutlade");
        break;
    }
    case 51463:
    {
        returnValue = F("Bei der Hülbe");
        break;
    }
    case 51464:
    {
        returnValue = F("Bei der Hüle");
        break;
    }
    case 51465:
    {
        returnValue = F("Bei der Illersäge");
        break;
    }
    case 51466:
    {
        returnValue = F("Bei der Industriestr.");
        break;
    }
    case 51467:
    {
        returnValue = F("Bei der Insel");
        break;
    }
    case 51468:
    {
        returnValue = F("Bei der Jakobikirche");
        break;
    }
    case 51469:
    {
        returnValue = F("Bei der Jakobskirche");
        break;
    }
    case 51470:
    {
        returnValue = F("Bei der Johanniskirche");
        break;
    }
    case 51471:
    {
        returnValue = F("Bei der Kallinde");
        break;
    }
    case 51472:
    {
        returnValue = F("Bei der Kammer");
        break;
    }
    case 51473:
    {
        returnValue = F("Bei der Kapell");
        break;
    }
    case 51474:
    {
        returnValue = F("Bei der Kapelle");
        break;
    }
    case 51475:
    {
        returnValue = F("Bei der Kaplanei");
        break;
    }
    case 51476:
    {
        returnValue = F("Bei der Kappel");
        break;
    }
    case 51477:
    {
        returnValue = F("Bei der Kelter");
        break;
    }
    case 51478:
    {
        returnValue = F("Bei der Keulahütte");
        break;
    }
    case 51479:
    {
        returnValue = F("Bei der Kiesgrube");
        break;
    }
    case 51480:
    {
        returnValue = F("Bei der Kirche");
        break;
    }
    case 51481:
    {
        returnValue = F("Bei der Klaus");
        break;
    }
    case 51482:
    {
        returnValue = F("Bei der Klauskapelle");
        break;
    }
    case 51483:
    {
        returnValue = F("Bei der Klosterkirche");
        break;
    }
    case 51484:
    {
        returnValue = F("Bei der Knochenmühle");
        break;
    }
    case 51485:
    {
        returnValue = F("Bei der Kohlenmühl");
        break;
    }
    case 51486:
    {
        returnValue = F("Bei der Kohlröthe");
        break;
    }
    case 51487:
    {
        returnValue = F("Bei der Kohlstatt");
        break;
    }
    case 51488:
    {
        returnValue = F("Bei der Kriegersiedlung");
        break;
    }
    case 51489:
    {
        returnValue = F("Bei der Krone");
        break;
    }
    case 51490:
    {
        returnValue = F("Bei der Kugelbake");
        break;
    }
    case 51491:
    {
        returnValue = F("Bei der Kurzen Breite");
        break;
    }
    case 51492:
    {
        returnValue = F("Bei der Landwehr");
        break;
    }
    case 51493:
    {
        returnValue = F("Bei der Langheck");
        break;
    }
    case 51494:
    {
        returnValue = F("Bei der Laupfütze");
        break;
    }
    case 51495:
    {
        returnValue = F("Bei der Lehmgrube");
        break;
    }
    case 51496:
    {
        returnValue = F("Bei der Lehmkaute");
        break;
    }
    case 51497:
    {
        returnValue = F("Bei der Lehmkuhle");
        break;
    }
    case 51498:
    {
        returnValue = F("Bei der Leimengrube");
        break;
    }
    case 51499:
    {
        returnValue = F("Bei der Leimkaul");
        break;
    }
    case 51500:
    {
        returnValue = F("Bei der Lieben Frau");
        break;
    }
    case 51501:
    {
        returnValue = F("Bei der Liebethaler Kirche");
        break;
    }
    case 51502:
    {
        returnValue = F("Bei der Linde");
        break;
    }
    case 51503:
    {
        returnValue = F("Bei der Lohmühle");
        break;
    }
    case 51504:
    {
        returnValue = F("Bei der Lüner Mühle");
        break;
    }
    case 51505:
    {
        returnValue = F("Bei der Marienkirche");
        break;
    }
    case 51506:
    {
        returnValue = F("Bei der Marktkirche");
        break;
    }
    case 51507:
    {
        returnValue = F("Bei der Martinskirche");
        break;
    }
    case 51508:
    {
        returnValue = F("Bei der Mauch");
        break;
    }
    case 51509:
    {
        returnValue = F("Bei der Mauer");
        break;
    }
    case 51510:
    {
        returnValue = F("Bei der Mennokate");
        break;
    }
    case 51511:
    {
        returnValue = F("Bei der Molke");
        break;
    }
    case 51512:
    {
        returnValue = F("Bei der Moorenwies");
        break;
    }
    case 51513:
    {
        returnValue = F("Bei der Mühle");
        break;
    }
    case 51514:
    {
        returnValue = F("Bei der Napoleonstanne");
        break;
    }
    case 51515:
    {
        returnValue = F("Bei der Neumühle");
        break;
    }
    case 51516:
    {
        returnValue = F("Bei der Nikolaikirche");
        break;
    }
    case 51517:
    {
        returnValue = F("Bei der Oberdorfer Mühle");
        break;
    }
    case 51518:
    {
        returnValue = F("Bei der Oberkirche");
        break;
    }
    case 51519:
    {
        returnValue = F("Bei der Oberwiese");
        break;
    }
    case 51520:
    {
        returnValue = F("Bei der Ochsenweide");
        break;
    }
    case 51521:
    {
        returnValue = F("Bei der Ostergrube");
        break;
    }
    case 51522:
    {
        returnValue = F("Bei der Palmschleuse");
        break;
    }
    case 51523:
    {
        returnValue = F("Bei der Papierfabrik");
        break;
    }
    case 51524:
    {
        returnValue = F("Bei der Papiermühle");
        break;
    }
    case 51525:
    {
        returnValue = F("Bei der Peterskirche");
        break;
    }
    case 51526:
    {
        returnValue = F("Bei der Petribleiche");
        break;
    }
    case 51527:
    {
        returnValue = F("Bei der Petrikirche");
        break;
    }
    case 51528:
    {
        returnValue = F("Bei der Pfaffenwiese");
        break;
    }
    case 51529:
    {
        returnValue = F("Bei der Pferdehütte");
        break;
    }
    case 51530:
    {
        returnValue = F("Bei der Porzellanmanufaktur");
        break;
    }
    case 51531:
    {
        returnValue = F("Bei der Pürschmark");
        break;
    }
    case 51532:
    {
        returnValue = F("Bei der Ratsmühle");
        break;
    }
    case 51533:
    {
        returnValue = F("Bei der Rayse");
        break;
    }
    case 51534:
    {
        returnValue = F("Bei der Rehkuhle");
        break;
    }
    case 51535:
    {
        returnValue = F("Bei der Reitbahn");
        break;
    }
    case 51536:
    {
        returnValue = F("Bei der Riedmühle");
        break;
    }
    case 51537:
    {
        returnValue = F("Bei der Ringeljucht");
        break;
    }
    case 51538:
    {
        returnValue = F("Bei der Rinnen");
        break;
    }
    case 51539:
    {
        returnValue = F("Bei der Roten Mühle");
        break;
    }
    case 51540:
    {
        returnValue = F("Bei der Ruhmauer");
        break;
    }
    case 51541:
    {
        returnValue = F("Bei der Röße");
        break;
    }
    case 51542:
    {
        returnValue = F("Bei der Sallermühle");
        break;
    }
    case 51543:
    {
        returnValue = F("Bei der Sandhühl");
        break;
    }
    case 51544:
    {
        returnValue = F("Bei der Sandsteige");
        break;
    }
    case 51545:
    {
        returnValue = F("Bei der Schafbrücke");
        break;
    }
    case 51546:
    {
        returnValue = F("Bei der Schafschwemme");
        break;
    }
    case 51547:
    {
        returnValue = F("Bei der Schanz");
        break;
    }
    case 51548:
    {
        returnValue = F("Bei der Schanze");
        break;
    }
    case 51549:
    {
        returnValue = F("Bei der Schenke");
        break;
    }
    case 51550:
    {
        returnValue = F("Bei der Schießmauer");
        break;
    }
    case 51551:
    {
        returnValue = F("Bei der Schleifmühle");
        break;
    }
    case 51552:
    {
        returnValue = F("Bei der Schlenke");
        break;
    }
    case 51553:
    {
        returnValue = F("Bei der Schmelze");
        break;
    }
    case 51554:
    {
        returnValue = F("Bei der Schmiede");
        break;
    }
    case 51555:
    {
        returnValue = F("Bei der Schule");
        break;
    }
    case 51556:
    {
        returnValue = F("Bei der Schwarzen Brake");
        break;
    }
    case 51557:
    {
        returnValue = F("Bei der Seefigur");
        break;
    }
    case 51558:
    {
        returnValue = F("Bei der Seh");
        break;
    }
    case 51559:
    {
        returnValue = F("Bei der Seilerbahn");
        break;
    }
    case 51560:
    {
        returnValue = F("Bei der Sparkasse");
        break;
    }
    case 51561:
    {
        returnValue = F("Bei der St. Johanniskirche");
        break;
    }
    case 51562:
    {
        returnValue = F("Bei der St. Lambertikirche");
        break;
    }
    case 51563:
    {
        returnValue = F("Bei der St. Nicolaikirche");
        break;
    }
    case 51564:
    {
        returnValue = F("Bei der Stadt");
        break;
    }
    case 51565:
    {
        returnValue = F("Bei der Stadtkirche");
        break;
    }
    case 51566:
    {
        returnValue = F("Bei der Stadtmauer");
        break;
    }
    case 51567:
    {
        returnValue = F("Bei der Stadtmühle");
        break;
    }
    case 51568:
    {
        returnValue = F("Bei der Stahlmühle");
        break;
    }
    case 51569:
    {
        returnValue = F("Bei der Station");
        break;
    }
    case 51570:
    {
        returnValue = F("Bei der Steig");
        break;
    }
    case 51571:
    {
        returnValue = F("Bei der Steinbuche");
        break;
    }
    case 51572:
    {
        returnValue = F("Bei der Steinernen Brücke");
        break;
    }
    case 51573:
    {
        returnValue = F("Bei der Steingrube");
        break;
    }
    case 51574:
    {
        returnValue = F("Bei der Steinkaul");
        break;
    }
    case 51575:
    {
        returnValue = F("Bei der Steinmauer");
        break;
    }
    case 51576:
    {
        returnValue = F("Bei der Stiftskirche");
        break;
    }
    case 51577:
    {
        returnValue = F("Bei der Struth");
        break;
    }
    case 51578:
    {
        returnValue = F("Bei der Störmeder Linde");
        break;
    }
    case 51579:
    {
        returnValue = F("Bei der Säge");
        break;
    }
    case 51580:
    {
        returnValue = F("Bei der Sägemühle");
        break;
    }
    case 51581:
    {
        returnValue = F("Bei der Sägmühl");
        break;
    }
    case 51582:
    {
        returnValue = F("Bei der Sägmühle");
        break;
    }
    case 51583:
    {
        returnValue = F("Bei der Talmühle");
        break;
    }
    case 51584:
    {
        returnValue = F("Bei der Teichmühle");
        break;
    }
    case 51585:
    {
        returnValue = F("Bei der Teufelsbrück");
        break;
    }
    case 51586:
    {
        returnValue = F("Bei der Tromsmühle");
        break;
    }
    case 51587:
    {
        returnValue = F("Bei der Tränke");
        break;
    }
    case 51588:
    {
        returnValue = F("Bei der Tweel");
        break;
    }
    case 51589:
    {
        returnValue = F("Bei der Villa");
        break;
    }
    case 51590:
    {
        returnValue = F("Bei der Waldschule");
        break;
    }
    case 51591:
    {
        returnValue = F("Bei der Walkmühle");
        break;
    }
    case 51592:
    {
        returnValue = F("Bei der Warte");
        break;
    }
    case 51593:
    {
        returnValue = F("Bei der Waschbeck");
        break;
    }
    case 51594:
    {
        returnValue = F("Bei der Wasserkunst");
        break;
    }
    case 51595:
    {
        returnValue = F("Bei der Wasserreserve");
        break;
    }
    case 51596:
    {
        returnValue = F("Bei der Weberei");
        break;
    }
    case 51597:
    {
        returnValue = F("Bei der Weihergasse");
        break;
    }
    case 51598:
    {
        returnValue = F("Bei der Wendlerei");
        break;
    }
    case 51599:
    {
        returnValue = F("Bei der Wette");
        break;
    }
    case 51600:
    {
        returnValue = F("Bei der Wettersäule");
        break;
    }
    case 51601:
    {
        returnValue = F("Bei der Windmühle");
        break;
    }
    case 51602:
    {
        returnValue = F("Bei der Wolfsgrube");
        break;
    }
    case 51603:
    {
        returnValue = F("Bei der Wüstmatte");
        break;
    }
    case 51604:
    {
        returnValue = F("Bei der Zehntscheuer");
        break;
    }
    case 51605:
    {
        returnValue = F("Bei der Ziegelei");
        break;
    }
    case 51606:
    {
        returnValue = F("Bei der Ziegelgrube");
        break;
    }
    case 51607:
    {
        returnValue = F("Bei der Ziegelhütte");
        break;
    }
    case 51608:
    {
        returnValue = F("Bei der alten Eiche");
        break;
    }
    case 51609:
    {
        returnValue = F("Bei der alten Kirche");
        break;
    }
    case 51610:
    {
        returnValue = F("Bei der alten Saline");
        break;
    }
    case 51611:
    {
        returnValue = F("Bei der alten Schule");
        break;
    }
    case 51612:
    {
        returnValue = F("Bei der alten Volksschule");
        break;
    }
    case 51613:
    {
        returnValue = F("Bei der großen Buche");
        break;
    }
    case 51614:
    {
        returnValue = F("Bei der langen Brücke");
        break;
    }
    case 51615:
    {
        returnValue = F("Bei der neuen Mühle");
        break;
    }
    case 51616:
    {
        returnValue = F("Bei der weiß Eich");
        break;
    }
    case 51617:
    {
        returnValue = F("Bei der Ölmühle");
        break;
    }
    case 51618:
    {
        returnValue = F("Bei der Ölschläge");
        break;
    }
    case 51619:
    {
        returnValue = F("Beibachweg");
        break;
    }
    case 51620:
    {
        returnValue = F("Beibergstr.");
        break;
    }
    case 51621:
    {
        returnValue = F("Beichlinger Str.");
        break;
    }
    case 51622:
    {
        returnValue = F("Beichtenhaldenweg");
        break;
    }
    case 51623:
    {
        returnValue = F("Beidendorfer Hauptstr.");
        break;
    }
    case 51624:
    {
        returnValue = F("Beidendorfer Weg");
        break;
    }
    case 51625:
    {
        returnValue = F("Beiderseer Bahnhofsstr.");
        break;
    }
    case 51626:
    {
        returnValue = F("Beidersweg");
        break;
    }
    case 51627:
    {
        returnValue = F("Beidlmühlweg");
        break;
    }
    case 51628:
    {
        returnValue = F("Beidteweg");
        break;
    }
    case 51629:
    {
        returnValue = F("Beien-Weg");
        break;
    }
    case 51630:
    {
        returnValue = F("Beienbach");
        break;
    }
    case 51631:
    {
        returnValue = F("Beienbacher Weg");
        break;
    }
    case 51632:
    {
        returnValue = F("Beienbergweg");
        break;
    }
    case 51633:
    {
        returnValue = F("Beienbruch");
        break;
    }
    case 51634:
    {
        returnValue = F("Beienburger Str.");
        break;
    }
    case 51635:
    {
        returnValue = F("Beienheimer Höhe");
        break;
    }
    case 51636:
    {
        returnValue = F("Beienheimer Str.");
        break;
    }
    case 51637:
    {
        returnValue = F("Beienroder Hauptstr.");
        break;
    }
    case 51638:
    {
        returnValue = F("Beienroder Str.");
        break;
    }
    case 51639:
    {
        returnValue = F("Beienröder Weg");
        break;
    }
    case 51640:
    {
        returnValue = F("Beierbachstr.");
        break;
    }
    case 51641:
    {
        returnValue = F("Beierfelde");
        break;
    }
    case 51642:
    {
        returnValue = F("Beierfelder Str.");
        break;
    }
    case 51643:
    {
        returnValue = F("Beierfelder Weg");
        break;
    }
    case 51644:
    {
        returnValue = F("Beierfeldstr.");
        break;
    }
    case 51645:
    {
        returnValue = F("Beiern");
        break;
    }
    case 51646:
    {
        returnValue = F("Beiersdamm");
        break;
    }
    case 51647:
    {
        returnValue = F("Beiersdorf");
        break;
    }
    case 51648:
    {
        returnValue = F("Beiersdorfer Chaussee");
        break;
    }
    case 51649:
    {
        returnValue = F("Beiersdorfer Str.");
        break;
    }
    case 51650:
    {
        returnValue = F("Beiersdorfer Weg");
        break;
    }
    case 51651:
    {
        returnValue = F("Beiersdorfstr.");
        break;
    }
    case 51652:
    {
        returnValue = F("Beiersgrund");
        break;
    }
    case 51653:
    {
        returnValue = F("Beiert");
        break;
    }
    case 51654:
    {
        returnValue = F("Beierter Weg");
        break;
    }
    case 51655:
    {
        returnValue = F("Beiertheimer Allee");
        break;
    }
    case 51656:
    {
        returnValue = F("Beiertheimer Weg");
        break;
    }
    case 51657:
    {
        returnValue = F("Beiertheimer Wäldchen");
        break;
    }
    case 51658:
    {
        returnValue = F("Beierweg");
        break;
    }
    case 51659:
    {
        returnValue = F("Beierwiese");
        break;
    }
    case 51660:
    {
        returnValue = F("Beifang");
        break;
    }
    case 51661:
    {
        returnValue = F("Beifanger Weg");
        break;
    }
    case 51662:
    {
        returnValue = F("Beifangstr.");
        break;
    }
    case 51663:
    {
        returnValue = F("Beifinkweg");
        break;
    }
    case 51664:
    {
        returnValue = F("Beifußweg");
        break;
    }
    case 51665:
    {
        returnValue = F("Beigarten");
        break;
    }
    case 51666:
    {
        returnValue = F("Beigasse");
        break;
    }
    case 51667:
    {
        returnValue = F("Beigelswinden");
        break;
    }
    case 51668:
    {
        returnValue = F("Beigeordnetenweg");
        break;
    }
    case 51669:
    {
        returnValue = F("Beigutstr.");
        break;
    }
    case 51670:
    {
        returnValue = F("Beihinger Str.");
        break;
    }
    case 51671:
    {
        returnValue = F("Beihinger Weg");
        break;
    }
    case 51672:
    {
        returnValue = F("Beikel");
        break;
    }
    case 51673:
    {
        returnValue = F("Beikelort");
        break;
    }
    case 51674:
    {
        returnValue = F("Beiken Hoff");
        break;
    }
    case 51675:
    {
        returnValue = F("Beikenweg");
        break;
    }
    case 51676:
    {
        returnValue = F("Beikers");
        break;
    }
    case 51677:
    {
        returnValue = F("Beikheimer Weg");
        break;
    }
    case 51678:
    {
        returnValue = F("Beiklingen");
        break;
    }
    case 51679:
    {
        returnValue = F("Beikumweg");
        break;
    }
    case 51680:
    {
        returnValue = F("Beilbach");
        break;
    }
    case 51681:
    {
        returnValue = F("Beilbachweg");
        break;
    }
    case 51682:
    {
        returnValue = F("Beilbergweg");
        break;
    }
    case 51683:
    {
        returnValue = F("Beilbrücke");
        break;
    }
    case 51684:
    {
        returnValue = F("Beilenberg");
        break;
    }
    case 51685:
    {
        returnValue = F("Beilenberger Str.");
        break;
    }
    case 51686:
    {
        returnValue = F("Beilhackstr.");
        break;
    }
    case 51687:
    {
        returnValue = F("Beilinger Str.");
        break;
    }
    case 51688:
    {
        returnValue = F("Beilingerstr.");
        break;
    }
    case 51689:
    {
        returnValue = F("Beilngrieser Steig");
        break;
    }
    case 51690:
    {
        returnValue = F("Beilngrieser Str.");
        break;
    }
    case 51691:
    {
        returnValue = F("Beilngrieser Weg");
        break;
    }
    case 51692:
    {
        returnValue = F("Beilnstein");
        break;
    }
    case 51693:
    {
        returnValue = F("Beilsbachstr.");
        break;
    }
    case 51694:
    {
        returnValue = F("Beilsbachweg");
        break;
    }
    case 51695:
    {
        returnValue = F("Beilstein");
        break;
    }
    case 51696:
    {
        returnValue = F("Beilsteiner Str.");
        break;
    }
    case 51697:
    {
        returnValue = F("Beilsteiner Weg");
        break;
    }
    case 51698:
    {
        returnValue = F("Beilsteinstr.");
        break;
    }
    case 51699:
    {
        returnValue = F("Beilstr.");
        break;
    }
    case 51700:
    {
        returnValue = F("Beim Ablass");
        break;
    }
    case 51701:
    {
        returnValue = F("Beim Achmühlösch");
        break;
    }
    case 51702:
    {
        returnValue = F("Beim Achterbrook");
        break;
    }
    case 51703:
    {
        returnValue = F("Beim Alenbrunnen");
        break;
    }
    case 51704:
    {
        returnValue = F("Beim Alten Bahnhof");
        break;
    }
    case 51705:
    {
        returnValue = F("Beim Alten Flugplatz");
        break;
    }
    case 51706:
    {
        returnValue = F("Beim Alten Friedhof");
        break;
    }
    case 51707:
    {
        returnValue = F("Beim Alten Hellchen");
        break;
    }
    case 51708:
    {
        returnValue = F("Beim Alten Hof");
        break;
    }
    case 51709:
    {
        returnValue = F("Beim Alten Kircherl");
        break;
    }
    case 51710:
    {
        returnValue = F("Beim Alten Kloster");
        break;
    }
    case 51711:
    {
        returnValue = F("Beim Alten Kreuz");
        break;
    }
    case 51712:
    {
        returnValue = F("Beim Alten Schacht");
        break;
    }
    case 51713:
    {
        returnValue = F("Beim Alten Turnplatz");
        break;
    }
    case 51714:
    {
        returnValue = F("Beim Alten Wasen");
        break;
    }
    case 51715:
    {
        returnValue = F("Beim Altersheim");
        break;
    }
    case 51716:
    {
        returnValue = F("Beim Altheinrieter Weg");
        break;
    }
    case 51717:
    {
        returnValue = F("Beim Amper");
        break;
    }
    case 51718:
    {
        returnValue = F("Beim Amthaus");
        break;
    }
    case 51719:
    {
        returnValue = F("Beim Angel");
        break;
    }
    case 51720:
    {
        returnValue = F("Beim Anger");
        break;
    }
    case 51721:
    {
        returnValue = F("Beim Antoni");
        break;
    }
    case 51722:
    {
        returnValue = F("Beim Apfelbaum");
        break;
    }
    case 51723:
    {
        returnValue = F("Beim Apfelgarten");
        break;
    }
    case 51724:
    {
        returnValue = F("Beim Arberstein");
        break;
    }
    case 51725:
    {
        returnValue = F("Beim Aspen");
        break;
    }
    case 51726:
    {
        returnValue = F("Beim Aussichtsturm");
        break;
    }
    case 51727:
    {
        returnValue = F("Beim Bachbauer");
        break;
    }
    case 51728:
    {
        returnValue = F("Beim Backhaus");
        break;
    }
    case 51729:
    {
        returnValue = F("Beim Bad");
        break;
    }
    case 51730:
    {
        returnValue = F("Beim Badenwerk");
        break;
    }
    case 51731:
    {
        returnValue = F("Beim Bahndamm");
        break;
    }
    case 51732:
    {
        returnValue = F("Beim Bahnhof");
        break;
    }
    case 51733:
    {
        returnValue = F("Beim Bahnhof Biburg");
        break;
    }
    case 51734:
    {
        returnValue = F("Beim Bahnhof Haagen");
        break;
    }
    case 51735:
    {
        returnValue = F("Beim Bahnhof Königstor");
        break;
    }
    case 51736:
    {
        returnValue = F("Beim Barfüßer");
        break;
    }
    case 51737:
    {
        returnValue = F("Beim Bauernhaus");
        break;
    }
    case 51738:
    {
        returnValue = F("Beim Bauerspfad");
        break;
    }
    case 51739:
    {
        returnValue = F("Beim Bauhof");
        break;
    }
    case 51740:
    {
        returnValue = F("Beim Baumgarten");
        break;
    }
    case 51741:
    {
        returnValue = F("Beim Beekhoff");
        break;
    }
    case 51742:
    {
        returnValue = F("Beim Benedikt");
        break;
    }
    case 51743:
    {
        returnValue = F("Beim Berdelteich");
        break;
    }
    case 51744:
    {
        returnValue = F("Beim Bergschmied");
        break;
    }
    case 51745:
    {
        returnValue = F("Beim Bergtor");
        break;
    }
    case 51746:
    {
        returnValue = F("Beim Bergwerk");
        break;
    }
    case 51747:
    {
        returnValue = F("Beim Bernhard");
        break;
    }
    case 51748:
    {
        returnValue = F("Beim Betzenbrunnen");
        break;
    }
    case 51749:
    {
        returnValue = F("Beim Bienenstock");
        break;
    }
    case 51750:
    {
        returnValue = F("Beim Biengarten");
        break;
    }
    case 51751:
    {
        returnValue = F("Beim Bierkeller");
        break;
    }
    case 51752:
    {
        returnValue = F("Beim Bildchen");
        break;
    }
    case 51753:
    {
        returnValue = F("Beim Bildstock");
        break;
    }
    case 51754:
    {
        returnValue = F("Beim Bildstöckle");
        break;
    }
    case 51755:
    {
        returnValue = F("Beim Bildsäule");
        break;
    }
    case 51756:
    {
        returnValue = F("Beim Birkholz");
        break;
    }
    case 51757:
    {
        returnValue = F("Beim Birnbaum");
        break;
    }
    case 51758:
    {
        returnValue = F("Beim Birnbäumle");
        break;
    }
    case 51759:
    {
        returnValue = F("Beim Blutbirnbaum");
        break;
    }
    case 51760:
    {
        returnValue = F("Beim Blümle");
        break;
    }
    case 51761:
    {
        returnValue = F("Beim Bockelsberg");
        break;
    }
    case 51762:
    {
        returnValue = F("Beim Bonifaciusbrunnen");
        break;
    }
    case 51763:
    {
        returnValue = F("Beim Bonz´schen Garten");
        break;
    }
    case 51764:
    {
        returnValue = F("Beim Bootsbauer");
        break;
    }
    case 51765:
    {
        returnValue = F("Beim Braunland");
        break;
    }
    case 51766:
    {
        returnValue = F("Beim Braunstall");
        break;
    }
    case 51767:
    {
        returnValue = F("Beim Brechhaus");
        break;
    }
    case 51768:
    {
        returnValue = F("Beim Brechhölzle");
        break;
    }
    case 51769:
    {
        returnValue = F("Beim Breitenstein");
        break;
    }
    case 51770:
    {
        returnValue = F("Beim Bremer Hof");
        break;
    }
    case 51771:
    {
        returnValue = F("Beim Brenkele");
        break;
    }
    case 51772:
    {
        returnValue = F("Beim Brenzursprung");
        break;
    }
    case 51773:
    {
        returnValue = F("Beim Brestenberg");
        break;
    }
    case 51774:
    {
        returnValue = F("Beim Brinke");
        break;
    }
    case 51775:
    {
        returnValue = F("Beim Brückentor");
        break;
    }
    case 51776:
    {
        returnValue = F("Beim Brückle");
        break;
    }
    case 51777:
    {
        returnValue = F("Beim Brüderhof");
        break;
    }
    case 51778:
    {
        returnValue = F("Beim Brünnele");
        break;
    }
    case 51779:
    {
        returnValue = F("Beim Buchschächle");
        break;
    }
    case 51780:
    {
        returnValue = F("Beim Buckelweber");
        break;
    }
    case 51781:
    {
        returnValue = F("Beim Bunten Mantel");
        break;
    }
    case 51782:
    {
        returnValue = F("Beim Butterberge");
        break;
    }
    case 51783:
    {
        returnValue = F("Beim Bähnle");
        break;
    }
    case 51784:
    {
        returnValue = F("Beim Bügele");
        break;
    }
    case 51785:
    {
        returnValue = F("Beim Bürgerweiher");
        break;
    }
    case 51786:
    {
        returnValue = F("Beim Büttlerberg");
        break;
    }
    case 51787:
    {
        returnValue = F("Beim Campener Leuchtturm");
        break;
    }
    case 51788:
    {
        returnValue = F("Beim Carl-Zeiss-Stadion");
        break;
    }
    case 51789:
    {
        returnValue = F("Beim Dalborn");
        break;
    }
    case 51790:
    {
        returnValue = F("Beim Damm");
        break;
    }
    case 51791:
    {
        returnValue = F("Beim Dannelar");
        break;
    }
    case 51792:
    {
        returnValue = F("Beim Denkmal");
        break;
    }
    case 51793:
    {
        returnValue = F("Beim Diasporahaus");
        break;
    }
    case 51794:
    {
        returnValue = F("Beim Diedeborn");
        break;
    }
    case 51795:
    {
        returnValue = F("Beim Doktorbankerl");
        break;
    }
    case 51796:
    {
        returnValue = F("Beim Dom");
        break;
    }
    case 51797:
    {
        returnValue = F("Beim Dorf");
        break;
    }
    case 51798:
    {
        returnValue = F("Beim Dorfbeck");
        break;
    }
    case 51799:
    {
        returnValue = F("Beim Drudenbaum");
        break;
    }
    case 51800:
    {
        returnValue = F("Beim Drögenvorwerk");
        break;
    }
    case 51801:
    {
        returnValue = F("Beim Dübelsarse");
        break;
    }
    case 51802:
    {
        returnValue = F("Beim Dünkagel");
        break;
    }
    case 51803:
    {
        returnValue = F("Beim Dürren Ast");
        break;
    }
    case 51804:
    {
        returnValue = F("Beim E-Werk");
        break;
    }
    case 51805:
    {
        returnValue = F("Beim Eberacker");
        break;
    }
    case 51806:
    {
        returnValue = F("Beim Edingberg");
        break;
    }
    case 51807:
    {
        returnValue = F("Beim Eichbrunnen");
        break;
    }
    case 51808:
    {
        returnValue = F("Beim Eichhofe");
        break;
    }
    case 51809:
    {
        returnValue = F("Beim Eichhörnle");
        break;
    }
    case 51810:
    {
        returnValue = F("Beim Eikhof");
        break;
    }
    case 51811:
    {
        returnValue = F("Beim Eisenrichter");
        break;
    }
    case 51812:
    {
        returnValue = F("Beim Eislager");
        break;
    }
    case 51813:
    {
        returnValue = F("Beim Elektrizitätswerk");
        break;
    }
    case 51814:
    {
        returnValue = F("Beim Ellernsteg");
        break;
    }
    case 51815:
    {
        returnValue = F("Beim Elste");
        break;
    }
    case 51816:
    {
        returnValue = F("Beim Entenweiher");
        break;
    }
    case 51817:
    {
        returnValue = F("Beim Erlenborn");
        break;
    }
    case 51818:
    {
        returnValue = F("Beim Fahrenberg");
        break;
    }
    case 51819:
    {
        returnValue = F("Beim Falkenhof");
        break;
    }
    case 51820:
    {
        returnValue = F("Beim Falltor");
        break;
    }
    case 51821:
    {
        returnValue = F("Beim Fehlenkäpelle");
        break;
    }
    case 51822:
    {
        returnValue = F("Beim Feldtor");
        break;
    }
    case 51823:
    {
        returnValue = F("Beim Feuerwehrhaus");
        break;
    }
    case 51824:
    {
        returnValue = F("Beim Findelstein");
        break;
    }
    case 51825:
    {
        returnValue = F("Beim Findling");
        break;
    }
    case 51826:
    {
        returnValue = F("Beim Fischhaus");
        break;
    }
    case 51827:
    {
        returnValue = F("Beim Fischweiher");
        break;
    }
    case 51828:
    {
        returnValue = F("Beim Fohrhäldele");
        break;
    }
    case 51829:
    {
        returnValue = F("Beim Forellenweiher");
        break;
    }
    case 51830:
    {
        returnValue = F("Beim Forstamt");
        break;
    }
    case 51831:
    {
        returnValue = F("Beim Forsthaus");
        break;
    }
    case 51832:
    {
        returnValue = F("Beim Forstwirt");
        break;
    }
    case 51833:
    {
        returnValue = F("Beim Franzosengrab");
        break;
    }
    case 51834:
    {
        returnValue = F("Beim Freibad");
        break;
    }
    case 51835:
    {
        returnValue = F("Beim Frick");
        break;
    }
    case 51836:
    {
        returnValue = F("Beim Friedhof");
        break;
    }
    case 51837:
    {
        returnValue = F("Beim Fritzmaier");
        break;
    }
    case 51838:
    {
        returnValue = F("Beim Fruchtkasten");
        break;
    }
    case 51839:
    {
        returnValue = F("Beim Fuchshölzle");
        break;
    }
    case 51840:
    {
        returnValue = F("Beim Fuchsloch");
        break;
    }
    case 51841:
    {
        returnValue = F("Beim Fuhrenkamp");
        break;
    }
    case 51842:
    {
        returnValue = F("Beim Fälltor");
        break;
    }
    case 51843:
    {
        returnValue = F("Beim Fünftälerweg");
        break;
    }
    case 51844:
    {
        returnValue = F("Beim Fürstenkeller");
        break;
    }
    case 51845:
    {
        returnValue = F("Beim Gansacker");
        break;
    }
    case 51846:
    {
        returnValue = F("Beim Gassenberg");
        break;
    }
    case 51847:
    {
        returnValue = F("Beim Gedenkplatz");
        break;
    }
    case 51848:
    {
        returnValue = F("Beim Gefällbrunnen");
        break;
    }
    case 51849:
    {
        returnValue = F("Beim Geisbaum");
        break;
    }
    case 51850:
    {
        returnValue = F("Beim Geisterturm");
        break;
    }
    case 51851:
    {
        returnValue = F("Beim Geistholz");
        break;
    }
    case 51852:
    {
        returnValue = F("Beim Gelben Berg");
        break;
    }
    case 51853:
    {
        returnValue = F("Beim Gerber");
        break;
    }
    case 51854:
    {
        returnValue = F("Beim Gericht");
        break;
    }
    case 51855:
    {
        returnValue = F("Beim Gerichte");
        break;
    }
    case 51856:
    {
        returnValue = F("Beim Gerlinger Tor");
        break;
    }
    case 51857:
    {
        returnValue = F("Beim Ginsterfeld");
        break;
    }
    case 51858:
    {
        returnValue = F("Beim Glaspalast");
        break;
    }
    case 51859:
    {
        returnValue = F("Beim Glockacker");
        break;
    }
    case 51860:
    {
        returnValue = F("Beim Goldenen Pflug");
        break;
    }
    case 51861:
    {
        returnValue = F("Beim Golschlu");
        break;
    }
    case 51862:
    {
        returnValue = F("Beim Gottesacker");
        break;
    }
    case 51863:
    {
        returnValue = F("Beim Gotteslande");
        break;
    }
    case 51864:
    {
        returnValue = F("Beim Greimel");
        break;
    }
    case 51865:
    {
        returnValue = F("Beim Grenzgraben");
        break;
    }
    case 51866:
    {
        returnValue = F("Beim Grenztäle");
        break;
    }
    case 51867:
    {
        returnValue = F("Beim Gritschenkeller");
        break;
    }
    case 51868:
    {
        returnValue = F("Beim Großen Markstein");
        break;
    }
    case 51869:
    {
        returnValue = F("Beim Grünen Tor");
        break;
    }
    case 51870:
    {
        returnValue = F("Beim Gymnasiurm");
        break;
    }
    case 51871:
    {
        returnValue = F("Beim Gärtchen");
        break;
    }
    case 51872:
    {
        returnValue = F("Beim Görtzhof");
        break;
    }
    case 51873:
    {
        returnValue = F("Beim Haagensteg");
        break;
    }
    case 51874:
    {
        returnValue = F("Beim Haferhof");
        break;
    }
    case 51875:
    {
        returnValue = F("Beim Hafnerberg");
        break;
    }
    case 51876:
    {
        returnValue = F("Beim Hahnenberg");
        break;
    }
    case 51877:
    {
        returnValue = F("Beim Hallenbad");
        break;
    }
    case 51878:
    {
        returnValue = F("Beim Hamberg");
        break;
    }
    case 51879:
    {
        returnValue = F("Beim Hammerschmied");
        break;
    }
    case 51880:
    {
        returnValue = F("Beim Hammerwerk");
        break;
    }
    case 51881:
    {
        returnValue = F("Beim Handweiser");
        break;
    }
    case 51882:
    {
        returnValue = F("Beim Hansbauer");
        break;
    }
    case 51883:
    {
        returnValue = F("Beim Hart");
        break;
    }
    case 51884:
    {
        returnValue = F("Beim Hasenkreuz");
        break;
    }
    case 51885:
    {
        returnValue = F("Beim Hecht");
        break;
    }
    case 51886:
    {
        returnValue = F("Beim Heidenkreuz");
        break;
    }
    case 51887:
    {
        returnValue = F("Beim Heidenstädter Eschle");
        break;
    }
    case 51888:
    {
        returnValue = F("Beim Heiligenhäuschen");
        break;
    }
    case 51889:
    {
        returnValue = F("Beim Heiligenhäusle");
        break;
    }
    case 51890:
    {
        returnValue = F("Beim Heiligental");
        break;
    }
    case 51891:
    {
        returnValue = F("Beim Heim");
        break;
    }
    case 51892:
    {
        returnValue = F("Beim Herbstenhof");
        break;
    }
    case 51893:
    {
        returnValue = F("Beim Heuacker");
        break;
    }
    case 51894:
    {
        returnValue = F("Beim Heuerhause");
        break;
    }
    case 51895:
    {
        returnValue = F("Beim Himmelreich");
        break;
    }
    case 51896:
    {
        returnValue = F("Beim Hirschbrünnele");
        break;
    }
    case 51897:
    {
        returnValue = F("Beim Hirschenhof");
        break;
    }
    case 51898:
    {
        returnValue = F("Beim Hirtenhaus");
        break;
    }
    case 51899:
    {
        returnValue = F("Beim Hochgericht");
        break;
    }
    case 51900:
    {
        returnValue = F("Beim Hochwald");
        break;
    }
    case 51901:
    {
        returnValue = F("Beim Hof Göxe");
        break;
    }
    case 51902:
    {
        returnValue = F("Beim Hofackersbrunnen");
        break;
    }
    case 51903:
    {
        returnValue = F("Beim Hofe");
        break;
    }
    case 51904:
    {
        returnValue = F("Beim Hofgarten");
        break;
    }
    case 51905:
    {
        returnValue = F("Beim Hofhaus");
        break;
    }
    case 51906:
    {
        returnValue = F("Beim Hohen Baum");
        break;
    }
    case 51907:
    {
        returnValue = F("Beim Hohen Kreuz");
        break;
    }
    case 51908:
    {
        returnValue = F("Beim Hohen Kreuze");
        break;
    }
    case 51909:
    {
        returnValue = F("Beim Hohenstein");
        break;
    }
    case 51910:
    {
        returnValue = F("Beim Hohlengraben");
        break;
    }
    case 51911:
    {
        returnValue = F("Beim Holderstock");
        break;
    }
    case 51912:
    {
        returnValue = F("Beim Holderstöckle");
        break;
    }
    case 51913:
    {
        returnValue = F("Beim Hollerbusch");
        break;
    }
    case 51914:
    {
        returnValue = F("Beim Holzberg");
        break;
    }
    case 51915:
    {
        returnValue = F("Beim Holze");
        break;
    }
    case 51916:
    {
        returnValue = F("Beim Holzlager");
        break;
    }
    case 51917:
    {
        returnValue = F("Beim Honold");
        break;
    }
    case 51918:
    {
        returnValue = F("Beim Hoophof");
        break;
    }
    case 51919:
    {
        returnValue = F("Beim Hopfengarten");
        break;
    }
    case 51920:
    {
        returnValue = F("Beim Hornschen Hof");
        break;
    }
    case 51921:
    {
        returnValue = F("Beim Huber");
        break;
    }
    case 51922:
    {
        returnValue = F("Beim Hungerbrünnele");
        break;
    }
    case 51923:
    {
        returnValue = F("Beim Häldele");
        break;
    }
    case 51924:
    {
        returnValue = F("Beim Häusle");
        break;
    }
    case 51925:
    {
        returnValue = F("Beim Höffinger");
        break;
    }
    case 51926:
    {
        returnValue = F("Beim Hölzernen Kreuz");
        break;
    }
    case 51927:
    {
        returnValue = F("Beim Hölzernen Steg");
        break;
    }
    case 51928:
    {
        returnValue = F("Beim Hölzle");
        break;
    }
    case 51929:
    {
        returnValue = F("Beim Hügel");
        break;
    }
    case 51930:
    {
        returnValue = F("Beim Hügelgrab");
        break;
    }
    case 51931:
    {
        returnValue = F("Beim Imkerhause");
        break;
    }
    case 51932:
    {
        returnValue = F("Beim Jagdhaus");
        break;
    }
    case 51933:
    {
        returnValue = F("Beim Johannkirchhof");
        break;
    }
    case 51934:
    {
        returnValue = F("Beim Jonnisbaum");
        break;
    }
    case 51935:
    {
        returnValue = F("Beim Jägerhaus");
        break;
    }
    case 51936:
    {
        returnValue = F("Beim Jägerwirt");
        break;
    }
    case 51937:
    {
        returnValue = F("Beim Kaisersbaum");
        break;
    }
    case 51938:
    {
        returnValue = F("Beim Kalbsbrunnen");
        break;
    }
    case 51939:
    {
        returnValue = F("Beim Kalkberg");
        break;
    }
    case 51940:
    {
        returnValue = F("Beim Kalkofen");
        break;
    }
    case 51941:
    {
        returnValue = F("Beim Kalksbrunnen");
        break;
    }
    case 51942:
    {
        returnValue = F("Beim Kampe");
        break;
    }
    case 51943:
    {
        returnValue = F("Beim Kapellchen");
        break;
    }
    case 51944:
    {
        returnValue = F("Beim Kapellenholz");
        break;
    }
    case 51945:
    {
        returnValue = F("Beim Kastanienbaum");
        break;
    }
    case 51946:
    {
        returnValue = F("Beim Kastenkamp");
        break;
    }
    case 51947:
    {
        returnValue = F("Beim Katerstieg");
        break;
    }
    case 51948:
    {
        returnValue = F("Beim Kefer");
        break;
    }
    case 51949:
    {
        returnValue = F("Beim Kellerbuck");
        break;
    }
    case 51950:
    {
        returnValue = F("Beim Kellerhaus");
        break;
    }
    case 51951:
    {
        returnValue = F("Beim Kiefhaus");
        break;
    }
    case 51952:
    {
        returnValue = F("Beim Kindergarten");
        break;
    }
    case 51953:
    {
        returnValue = F("Beim Kirchenbauer");
        break;
    }
    case 51954:
    {
        returnValue = F("Beim Kirchhof");
        break;
    }
    case 51955:
    {
        returnValue = F("Beim Kirschengarten");
        break;
    }
    case 51956:
    {
        returnValue = F("Beim Kirschgraben");
        break;
    }
    case 51957:
    {
        returnValue = F("Beim Kleidstein");
        break;
    }
    case 51958:
    {
        returnValue = F("Beim Klingentor");
        break;
    }
    case 51959:
    {
        returnValue = F("Beim Kloster");
        break;
    }
    case 51960:
    {
        returnValue = F("Beim Kloster Dohren");
        break;
    }
    case 51961:
    {
        returnValue = F("Beim Klostergut");
        break;
    }
    case 51962:
    {
        returnValue = F("Beim Klosterholz");
        break;
    }
    case 51963:
    {
        returnValue = F("Beim Klösterle");
        break;
    }
    case 51964:
    {
        returnValue = F("Beim Knorr");
        break;
    }
    case 51965:
    {
        returnValue = F("Beim Kogelstein");
        break;
    }
    case 51966:
    {
        returnValue = F("Beim Korwinkel");
        break;
    }
    case 51967:
    {
        returnValue = F("Beim Kraftwerk");
        break;
    }
    case 51968:
    {
        returnValue = F("Beim Kramer");
        break;
    }
    case 51969:
    {
        returnValue = F("Beim Krappennest");
        break;
    }
    case 51970:
    {
        returnValue = F("Beim Krausbeck");
        break;
    }
    case 51971:
    {
        returnValue = F("Beim Krautgarten");
        break;
    }
    case 51972:
    {
        returnValue = F("Beim Kreuz");
        break;
    }
    case 51973:
    {
        returnValue = F("Beim Kreuzchen");
        break;
    }
    case 51974:
    {
        returnValue = F("Beim Kreuzplatz");
        break;
    }
    case 51975:
    {
        returnValue = F("Beim Kreuzstein");
        break;
    }
    case 51976:
    {
        returnValue = F("Beim Kriegerdenkmal");
        break;
    }
    case 51977:
    {
        returnValue = F("Beim Krugbäcker");
        break;
    }
    case 51978:
    {
        returnValue = F("Beim Kuhtor");
        break;
    }
    case 51979:
    {
        returnValue = F("Beim Kupferhammer");
        break;
    }
    case 51980:
    {
        returnValue = F("Beim Kurpark");
        break;
    }
    case 51981:
    {
        returnValue = F("Beim Käpelle");
        break;
    }
    case 51982:
    {
        returnValue = F("Beim Käppele");
        break;
    }
    case 51983:
    {
        returnValue = F("Beim Käser");
        break;
    }
    case 51984:
    {
        returnValue = F("Beim Küfer");
        break;
    }
    case 51985:
    {
        returnValue = F("Beim Lager");
        break;
    }
    case 51986:
    {
        returnValue = F("Beim Lammkeller");
        break;
    }
    case 51987:
    {
        returnValue = F("Beim Landerer");
        break;
    }
    case 51988:
    {
        returnValue = F("Beim Landsitzle");
        break;
    }
    case 51989:
    {
        returnValue = F("Beim Langen Rick");
        break;
    }
    case 51990:
    {
        returnValue = F("Beim Langenlauch");
        break;
    }
    case 51991:
    {
        returnValue = F("Beim Leibertäle");
        break;
    }
    case 51992:
    {
        returnValue = F("Beim Leonhardsbrunnen");
        break;
    }
    case 51993:
    {
        returnValue = F("Beim Leschenhaus");
        break;
    }
    case 51994:
    {
        returnValue = F("Beim Lindenhof");
        break;
    }
    case 51995:
    {
        returnValue = F("Beim Lindenmahd");
        break;
    }
    case 51996:
    {
        returnValue = F("Beim Logehof");
        break;
    }
    case 51997:
    {
        returnValue = F("Beim Lokschuppen");
        break;
    }
    case 51998:
    {
        returnValue = F("Beim Löwen");
        break;
    }
    case 51999:
    {
        returnValue = F("Beim Maistumpf");
        break;
    }
    case 52000:
    {
        returnValue = F("Beim Marderlauf");
        break;
    }
    case 52001:
    {
        returnValue = F("Beim Marienheim");
        break;
    }
    case 52002:
    {
        returnValue = F("Beim Marterl");
        break;
    }
    case 52003:
    {
        returnValue = F("Beim Meierhof");
        break;
    }
    case 52004:
    {
        returnValue = F("Beim Meilenstein");
        break;
    }
    case 52005:
    {
        returnValue = F("Beim Meister");
        break;
    }
    case 52006:
    {
        returnValue = F("Beim Mittelteiche");
        break;
    }
    case 52007:
    {
        returnValue = F("Beim Munzenbrunnen");
        break;
    }
    case 52008:
    {
        returnValue = F("Beim Märzenbad");
        break;
    }
    case 52009:
    {
        returnValue = F("Beim Mühlbach");
        break;
    }
    case 52010:
    {
        returnValue = F("Beim Mühlenmoor");
        break;
    }
    case 52011:
    {
        returnValue = F("Beim Mühlenwege");
        break;
    }
    case 52012:
    {
        returnValue = F("Beim Mühltor");
        break;
    }
    case 52013:
    {
        returnValue = F("Beim Mühlweg");
        break;
    }
    case 52014:
    {
        returnValue = F("Beim Neuhaus");
        break;
    }
    case 52015:
    {
        returnValue = F("Beim Nußbaum");
        break;
    }
    case 52016:
    {
        returnValue = F("Beim Oberkloster");
        break;
    }
    case 52017:
    {
        returnValue = F("Beim Obermüller");
        break;
    }
    case 52018:
    {
        returnValue = F("Beim Oelsteg");
        break;
    }
    case 52019:
    {
        returnValue = F("Beim Ofenloch");
        break;
    }
    case 52020:
    {
        returnValue = F("Beim Opfergraben");
        break;
    }
    case 52021:
    {
        returnValue = F("Beim Orgelacker");
        break;
    }
    case 52022:
    {
        returnValue = F("Beim Osterholz");
        break;
    }
    case 52023:
    {
        returnValue = F("Beim Ottenbach");
        break;
    }
    case 52024:
    {
        returnValue = F("Beim Paradies");
        break;
    }
    case 52025:
    {
        returnValue = F("Beim Pfaffenacker");
        break;
    }
    case 52026:
    {
        returnValue = F("Beim Pfaffenkeller");
        break;
    }
    case 52027:
    {
        returnValue = F("Beim Pfaffentäle");
        break;
    }
    case 52028:
    {
        returnValue = F("Beim Pfarracker");
        break;
    }
    case 52029:
    {
        returnValue = F("Beim Pfarrgarten");
        break;
    }
    case 52030:
    {
        returnValue = F("Beim Pfarrstadel");
        break;
    }
    case 52031:
    {
        returnValue = F("Beim Pferdeschloot");
        break;
    }
    case 52032:
    {
        returnValue = F("Beim Pingelshof");
        break;
    }
    case 52033:
    {
        returnValue = F("Beim Postweg");
        break;
    }
    case 52034:
    {
        returnValue = F("Beim Praetorium");
        break;
    }
    case 52035:
    {
        returnValue = F("Beim Preußischen");
        break;
    }
    case 52036:
    {
        returnValue = F("Beim Priggenkamp");
        break;
    }
    case 52037:
    {
        returnValue = F("Beim Professor");
        break;
    }
    case 52038:
    {
        returnValue = F("Beim Puhlhaus");
        break;
    }
    case 52039:
    {
        returnValue = F("Beim Pumpwerk");
        break;
    }
    case 52040:
    {
        returnValue = F("Beim Quallenbrunnen");
        break;
    }
    case 52041:
    {
        returnValue = F("Beim Rabenbad");
        break;
    }
    case 52042:
    {
        returnValue = F("Beim Rade");
        break;
    }
    case 52043:
    {
        returnValue = F("Beim Raderbach");
        break;
    }
    case 52044:
    {
        returnValue = F("Beim Rathaus");
        break;
    }
    case 52045:
    {
        returnValue = F("Beim Ratsberg");
        break;
    }
    case 52046:
    {
        returnValue = F("Beim Ratskeller");
        break;
    }
    case 52047:
    {
        returnValue = F("Beim Redelborn");
        break;
    }
    case 52048:
    {
        returnValue = F("Beim Reedsoll");
        break;
    }
    case 52049:
    {
        returnValue = F("Beim Reifenbrünnele");
        break;
    }
    case 52050:
    {
        returnValue = F("Beim Reihergehölz");
        break;
    }
    case 52051:
    {
        returnValue = F("Beim Retteich");
        break;
    }
    case 52052:
    {
        returnValue = F("Beim Ried");
        break;
    }
    case 52053:
    {
        returnValue = F("Beim Rißkanal");
        break;
    }
    case 52054:
    {
        returnValue = F("Beim Rohngraben");
        break;
    }
    case 52055:
    {
        returnValue = F("Beim Rohrwald");
        break;
    }
    case 52056:
    {
        returnValue = F("Beim Rosenwasser");
        break;
    }
    case 52057:
    {
        returnValue = F("Beim Rot");
        break;
    }
    case 52058:
    {
        returnValue = F("Beim Roten Haus");
        break;
    }
    case 52059:
    {
        returnValue = F("Beim Roten Herrgott");
        break;
    }
    case 52060:
    {
        returnValue = F("Beim Roten Hügel");
        break;
    }
    case 52061:
    {
        returnValue = F("Beim Roten Kreuz");
        break;
    }
    case 52062:
    {
        returnValue = F("Beim Rothen-Kreuz");
        break;
    }
    case 52063:
    {
        returnValue = F("Beim Roßgumpen");
        break;
    }
    case 52064:
    {
        returnValue = F("Beim Ruhacker");
        break;
    }
    case 52065:
    {
        returnValue = F("Beim Ruhplatz");
        break;
    }
    case 52066:
    {
        returnValue = F("Beim Rumpsfelde");
        break;
    }
    case 52067:
    {
        returnValue = F("Beim Rumpsmoore");
        break;
    }
    case 52068:
    {
        returnValue = F("Beim Runnenstal");
        break;
    }
    case 52069:
    {
        returnValue = F("Beim Rupfentäle");
        break;
    }
    case 52070:
    {
        returnValue = F("Beim Röhrbrunnen");
        break;
    }
    case 52071:
    {
        returnValue = F("Beim Römerschatz");
        break;
    }
    case 52072:
    {
        returnValue = F("Beim Römerturm");
        break;
    }
    case 52073:
    {
        returnValue = F("Beim Römerweg");
        break;
    }
    case 52074:
    {
        returnValue = F("Beim Römischen");
        break;
    }
    case 52075:
    {
        returnValue = F("Beim Rötelbrunnen");
        break;
    }
    case 52076:
    {
        returnValue = F("Beim Sachsenwald");
        break;
    }
    case 52077:
    {
        returnValue = F("Beim Saliterer");
        break;
    }
    case 52078:
    {
        returnValue = F("Beim Salztor");
        break;
    }
    case 52079:
    {
        returnValue = F("Beim Sande");
        break;
    }
    case 52080:
    {
        returnValue = F("Beim Sandigen Grüble");
        break;
    }
    case 52081:
    {
        returnValue = F("Beim Sandschuster");
        break;
    }
    case 52082:
    {
        returnValue = F("Beim Sandstein");
        break;
    }
    case 52083:
    {
        returnValue = F("Beim Sankt-Salvator");
        break;
    }
    case 52084:
    {
        returnValue = F("Beim Saun");
        break;
    }
    case 52085:
    {
        returnValue = F("Beim Schacher");
        break;
    }
    case 52086:
    {
        returnValue = F("Beim Schackendiek");
        break;
    }
    case 52087:
    {
        returnValue = F("Beim Schafanger");
        break;
    }
    case 52088:
    {
        returnValue = F("Beim Schaffeld");
        break;
    }
    case 52089:
    {
        returnValue = F("Beim Schafhaus");
        break;
    }
    case 52090:
    {
        returnValue = F("Beim Schafkoven");
        break;
    }
    case 52091:
    {
        returnValue = F("Beim Schafstadel");
        break;
    }
    case 52092:
    {
        returnValue = F("Beim Schafwald");
        break;
    }
    case 52093:
    {
        returnValue = F("Beim Schafweg");
        break;
    }
    case 52094:
    {
        returnValue = F("Beim Schelandshof");
        break;
    }
    case 52095:
    {
        returnValue = F("Beim Scherling");
        break;
    }
    case 52096:
    {
        returnValue = F("Beim Schießhäusle");
        break;
    }
    case 52097:
    {
        returnValue = F("Beim Schießwasen");
        break;
    }
    case 52098:
    {
        returnValue = F("Beim Schiffahrtsweg");
        break;
    }
    case 52099:
    {
        returnValue = F("Beim Schiffertor");
        break;
    }
    case 52100:
    {
        returnValue = F("Beim Schimmelhof");
        break;
    }
    case 52101:
    {
        returnValue = F("Beim Schlagbaum");
        break;
    }
    case 52102:
    {
        returnValue = F("Beim Schlatt");
        break;
    }
    case 52103:
    {
        returnValue = F("Beim Schlaugraben");
        break;
    }
    case 52104:
    {
        returnValue = F("Beim Schleichgraben");
        break;
    }
    case 52105:
    {
        returnValue = F("Beim Schlinghause");
        break;
    }
    case 52106:
    {
        returnValue = F("Beim Schloss");
        break;
    }
    case 52107:
    {
        returnValue = F("Beim Schlossbauer");
        break;
    }
    case 52108:
    {
        returnValue = F("Beim Schlossgarten");
        break;
    }
    case 52109:
    {
        returnValue = F("Beim Schloß");
        break;
    }
    case 52110:
    {
        returnValue = F("Beim Schloßgarten");
        break;
    }
    case 52111:
    {
        returnValue = F("Beim Schlößl");
        break;
    }
    case 52112:
    {
        returnValue = F("Beim Schlößle");
        break;
    }
    case 52113:
    {
        returnValue = F("Beim Schmalzbuckel");
        break;
    }
    case 52114:
    {
        returnValue = F("Beim Schmitshaus");
        break;
    }
    case 52115:
    {
        returnValue = F("Beim Schnark");
        break;
    }
    case 52116:
    {
        returnValue = F("Beim Schnarrbrunnen");
        break;
    }
    case 52117:
    {
        returnValue = F("Beim Schneekreuz");
        break;
    }
    case 52118:
    {
        returnValue = F("Beim Schulbrink");
        break;
    }
    case 52119:
    {
        returnValue = F("Beim Schulhaus");
        break;
    }
    case 52120:
    {
        returnValue = F("Beim Schulland");
        break;
    }
    case 52121:
    {
        returnValue = F("Beim Schullandheim");
        break;
    }
    case 52122:
    {
        returnValue = F("Beim Schullenort");
        break;
    }
    case 52123:
    {
        returnValue = F("Beim Schusterbauer");
        break;
    }
    case 52124:
    {
        returnValue = F("Beim Schwartmoor");
        break;
    }
    case 52125:
    {
        returnValue = F("Beim Schwarzen Feld");
        break;
    }
    case 52126:
    {
        returnValue = F("Beim Schwefelbad");
        break;
    }
    case 52127:
    {
        returnValue = F("Beim Schwingerkreuz");
        break;
    }
    case 52128:
    {
        returnValue = F("Beim Schäferdamm");
        break;
    }
    case 52129:
    {
        returnValue = F("Beim Schäferkreuz");
        break;
    }
    case 52130:
    {
        returnValue = F("Beim Schöllbrunnen");
        break;
    }
    case 52131:
    {
        returnValue = F("Beim Schönblick");
        break;
    }
    case 52132:
    {
        returnValue = F("Beim Schöpfchen");
        break;
    }
    case 52133:
    {
        returnValue = F("Beim Schützenbrünnele");
        break;
    }
    case 52134:
    {
        returnValue = F("Beim Schützenhof");
        break;
    }
    case 52135:
    {
        returnValue = F("Beim Schützenwiesle");
        break;
    }
    case 52136:
    {
        returnValue = F("Beim See");
        break;
    }
    case 52137:
    {
        returnValue = F("Beim Seehäusl");
        break;
    }
    case 52138:
    {
        returnValue = F("Beim Seiler");
        break;
    }
    case 52139:
    {
        returnValue = F("Beim Sellmair");
        break;
    }
    case 52140:
    {
        returnValue = F("Beim Seltenbach");
        break;
    }
    case 52141:
    {
        returnValue = F("Beim Siechenkirchle");
        break;
    }
    case 52142:
    {
        returnValue = F("Beim Siel");
        break;
    }
    case 52143:
    {
        returnValue = F("Beim Signauer Schachen");
        break;
    }
    case 52144:
    {
        returnValue = F("Beim Soll");
        break;
    }
    case 52145:
    {
        returnValue = F("Beim Sommerbauer");
        break;
    }
    case 52146:
    {
        returnValue = F("Beim Sonnenmaier");
        break;
    }
    case 52147:
    {
        returnValue = F("Beim Spieker");
        break;
    }
    case 52148:
    {
        returnValue = F("Beim Spielgarten");
        break;
    }
    case 52149:
    {
        returnValue = F("Beim Spielplatz");
        break;
    }
    case 52150:
    {
        returnValue = F("Beim Sportplatz");
        break;
    }
    case 52151:
    {
        returnValue = F("Beim Sportzentrum");
        break;
    }
    case 52152:
    {
        returnValue = F("Beim Spritzenhaus");
        break;
    }
    case 52153:
    {
        returnValue = F("Beim St. Jakobsweg");
        break;
    }
    case 52154:
    {
        returnValue = F("Beim St. Peter");
        break;
    }
    case 52155:
    {
        returnValue = F("Beim St.-Johannis-Kloster");
        break;
    }
    case 52156:
    {
        returnValue = F("Beim St.-Katharinenstift");
        break;
    }
    case 52157:
    {
        returnValue = F("Beim Stadthaus");
        break;
    }
    case 52158:
    {
        returnValue = F("Beim Stadthof");
        break;
    }
    case 52159:
    {
        returnValue = F("Beim Staudamm");
        break;
    }
    case 52160:
    {
        returnValue = F("Beim Staumberge");
        break;
    }
    case 52161:
    {
        returnValue = F("Beim Stausee");
        break;
    }
    case 52162:
    {
        returnValue = F("Beim Stegen");
        break;
    }
    case 52163:
    {
        returnValue = F("Beim Steigbrunnen");
        break;
    }
    case 52164:
    {
        returnValue = F("Beim Steigle");
        break;
    }
    case 52165:
    {
        returnValue = F("Beim Steinbruch");
        break;
    }
    case 52166:
    {
        returnValue = F("Beim Steinbrunnen");
        break;
    }
    case 52167:
    {
        returnValue = F("Beim Steinbrückle");
        break;
    }
    case 52168:
    {
        returnValue = F("Beim Steinernen Brückle");
        break;
    }
    case 52169:
    {
        returnValue = F("Beim Steinernen Kreuz");
        break;
    }
    case 52170:
    {
        returnValue = F("Beim Steingrab");
        break;
    }
    case 52171:
    {
        returnValue = F("Beim Steinigen Weg");
        break;
    }
    case 52172:
    {
        returnValue = F("Beim Steinkauz");
        break;
    }
    case 52173:
    {
        returnValue = F("Beim Steinkreuz");
        break;
    }
    case 52174:
    {
        returnValue = F("Beim Steinwerk");
        break;
    }
    case 52175:
    {
        returnValue = F("Beim Steinwitten");
        break;
    }
    case 52176:
    {
        returnValue = F("Beim Stellmacher");
        break;
    }
    case 52177:
    {
        returnValue = F("Beim Stockbrunnen");
        break;
    }
    case 52178:
    {
        returnValue = F("Beim Stollenborn");
        break;
    }
    case 52179:
    {
        returnValue = F("Beim Storchennest");
        break;
    }
    case 52180:
    {
        returnValue = F("Beim Storchsturm");
        break;
    }
    case 52181:
    {
        returnValue = F("Beim Straßweiher");
        break;
    }
    case 52182:
    {
        returnValue = F("Beim Sträßle");
        break;
    }
    case 52183:
    {
        returnValue = F("Beim Studentenhut");
        break;
    }
    case 52184:
    {
        returnValue = F("Beim Stöckle");
        break;
    }
    case 52185:
    {
        returnValue = F("Beim Stück");
        break;
    }
    case 52186:
    {
        returnValue = F("Beim Sumpfkrug");
        break;
    }
    case 52187:
    {
        returnValue = F("Beim Sägewerk");
        break;
    }
    case 52188:
    {
        returnValue = F("Beim Sägwerk");
        break;
    }
    case 52189:
    {
        returnValue = F("Beim Südbahnhof");
        break;
    }
    case 52190:
    {
        returnValue = F("Beim Tannenbaum");
        break;
    }
    case 52191:
    {
        returnValue = F("Beim Tannenhof");
        break;
    }
    case 52192:
    {
        returnValue = F("Beim Tannenkamp");
        break;
    }
    case 52193:
    {
        returnValue = F("Beim Tegelkamp");
        break;
    }
    case 52194:
    {
        returnValue = F("Beim Teich");
        break;
    }
    case 52195:
    {
        returnValue = F("Beim Teiche");
        break;
    }
    case 52196:
    {
        returnValue = F("Beim Theresienhof");
        break;
    }
    case 52197:
    {
        returnValue = F("Beim Tiergarten");
        break;
    }
    case 52198:
    {
        returnValue = F("Beim Tilgesbrunnen");
        break;
    }
    case 52199:
    {
        returnValue = F("Beim Tivoli");
        break;
    }
    case 52200:
    {
        returnValue = F("Beim Tonnenmoor");
        break;
    }
    case 52201:
    {
        returnValue = F("Beim Trieb");
        break;
    }
    case 52202:
    {
        returnValue = F("Beim Turm");
        break;
    }
    case 52203:
    {
        returnValue = F("Beim Turm Luxemburg");
        break;
    }
    case 52204:
    {
        returnValue = F("Beim Törle");
        break;
    }
    case 52205:
    {
        returnValue = F("Beim Umspannwerk");
        break;
    }
    case 52206:
    {
        returnValue = F("Beim Unger");
        break;
    }
    case 52207:
    {
        returnValue = F("Beim Unteren Krautgarten");
        break;
    }
    case 52208:
    {
        returnValue = F("Beim Unteren Tor");
        break;
    }
    case 52209:
    {
        returnValue = F("Beim Untervogt");
        break;
    }
    case 52210:
    {
        returnValue = F("Beim Urnenfeld");
        break;
    }
    case 52211:
    {
        returnValue = F("Beim Vogelherd");
        break;
    }
    case 52212:
    {
        returnValue = F("Beim Vogelsbrunnen");
        break;
    }
    case 52213:
    {
        returnValue = F("Beim Vogelwäldle");
        break;
    }
    case 52214:
    {
        returnValue = F("Beim Vorwerk");
        break;
    }
    case 52215:
    {
        returnValue = F("Beim Wachhaus");
        break;
    }
    case 52216:
    {
        returnValue = F("Beim Wagner");
        break;
    }
    case 52217:
    {
        returnValue = F("Beim Waisenhaus");
        break;
    }
    case 52218:
    {
        returnValue = F("Beim Wall");
        break;
    }
    case 52219:
    {
        returnValue = F("Beim Wallratsroth");
        break;
    }
    case 52220:
    {
        returnValue = F("Beim Wanger");
        break;
    }
    case 52221:
    {
        returnValue = F("Beim Waschborn");
        break;
    }
    case 52222:
    {
        returnValue = F("Beim Wasserbehälter");
        break;
    }
    case 52223:
    {
        returnValue = F("Beim Wasserturm");
        break;
    }
    case 52224:
    {
        returnValue = F("Beim Wasserwerk");
        break;
    }
    case 52225:
    {
        returnValue = F("Beim Wehrwall");
        break;
    }
    case 52226:
    {
        returnValue = F("Beim Weiherhof");
        break;
    }
    case 52227:
    {
        returnValue = F("Beim Weinkreuz");
        break;
    }
    case 52228:
    {
        returnValue = F("Beim Weinskreuz");
        break;
    }
    case 52229:
    {
        returnValue = F("Beim Weisenstein");
        break;
    }
    case 52230:
    {
        returnValue = F("Beim Weiß");
        break;
    }
    case 52231:
    {
        returnValue = F("Beim Weißen Stein");
        break;
    }
    case 52232:
    {
        returnValue = F("Beim Weißen Weg");
        break;
    }
    case 52233:
    {
        returnValue = F("Beim Welschengarten");
        break;
    }
    case 52234:
    {
        returnValue = F("Beim Wendelstein");
        break;
    }
    case 52235:
    {
        returnValue = F("Beim Wendentor");
        break;
    }
    case 52236:
    {
        returnValue = F("Beim Wetterkreuz");
        break;
    }
    case 52237:
    {
        returnValue = F("Beim Wetterkreuzchen");
        break;
    }
    case 52238:
    {
        returnValue = F("Beim Widmen");
        break;
    }
    case 52239:
    {
        returnValue = F("Beim Wiedebauer");
        break;
    }
    case 52240:
    {
        returnValue = F("Beim Wiesental");
        break;
    }
    case 52241:
    {
        returnValue = F("Beim Wiesle");
        break;
    }
    case 52242:
    {
        returnValue = F("Beim Wiesplätzle");
        break;
    }
    case 52243:
    {
        returnValue = F("Beim Wildbrunnen");
        break;
    }
    case 52244:
    {
        returnValue = F("Beim Wilden Schwein");
        break;
    }
    case 52245:
    {
        returnValue = F("Beim Winkelacker");
        break;
    }
    case 52246:
    {
        returnValue = F("Beim Wirt");
        break;
    }
    case 52247:
    {
        returnValue = F("Beim Wolfsacker");
        break;
    }
    case 52248:
    {
        returnValue = F("Beim Wuhr");
        break;
    }
    case 52249:
    {
        returnValue = F("Beim Wurmberg");
        break;
    }
    case 52250:
    {
        returnValue = F("Beim Wäldle");
        break;
    }
    case 52251:
    {
        returnValue = F("Beim Wölfelsbrunnen");
        break;
    }
    case 52252:
    {
        returnValue = F("Beim Wörndl-Wirt");
        break;
    }
    case 52253:
    {
        returnValue = F("Beim Zehnmorgenfeld");
        break;
    }
    case 52254:
    {
        returnValue = F("Beim Zehntstadel");
        break;
    }
    case 52255:
    {
        returnValue = F("Beim Zett");
        break;
    }
    case 52256:
    {
        returnValue = F("Beim Zeugamt");
        break;
    }
    case 52257:
    {
        returnValue = F("Beim Ziegelberg");
        break;
    }
    case 52258:
    {
        returnValue = F("Beim Ziegelstadel");
        break;
    }
    case 52259:
    {
        returnValue = F("Beim Ziegelweiher");
        break;
    }
    case 52260:
    {
        returnValue = F("Beim Ziegelwäldle");
        break;
    }
    case 52261:
    {
        returnValue = F("Beim Ziegenstadel");
        break;
    }
    case 52262:
    {
        returnValue = F("Beim Zollstock");
        break;
    }
    case 52263:
    {
        returnValue = F("Beim alten Brunnen");
        break;
    }
    case 52264:
    {
        returnValue = F("Beim alten Deich");
        break;
    }
    case 52265:
    {
        returnValue = F("Beim alten Hochgericht");
        break;
    }
    case 52266:
    {
        returnValue = F("Beim alten Kreuz");
        break;
    }
    case 52267:
    {
        returnValue = F("Beim alten Rathaus");
        break;
    }
    case 52268:
    {
        returnValue = F("Beim alten Wasserwerk");
        break;
    }
    case 52269:
    {
        returnValue = F("Beim alten Weg");
        break;
    }
    case 52270:
    {
        returnValue = F("Beim alten Wörttor");
        break;
    }
    case 52271:
    {
        returnValue = F("Beim blanken Schlatt");
        break;
    }
    case 52272:
    {
        returnValue = F("Beim blauen Stein");
        break;
    }
    case 52273:
    {
        returnValue = F("Beim großen Haus");
        break;
    }
    case 52274:
    {
        returnValue = F("Beim kleinen Moor");
        break;
    }
    case 52275:
    {
        returnValue = F("Beim langen Berge");
        break;
    }
    case 52276:
    {
        returnValue = F("Beim letzten Heller");
        break;
    }
    case 52277:
    {
        returnValue = F("Beim neuen Friedhof");
        break;
    }
    case 52278:
    {
        returnValue = F("Beim niederen Teiche");
        break;
    }
    case 52279:
    {
        returnValue = F("Beim oberen Bruch");
        break;
    }
    case 52280:
    {
        returnValue = F("Beim oberen Bäumle");
        break;
    }
    case 52281:
    {
        returnValue = F("Beim oberen Tor");
        break;
    }
    case 52282:
    {
        returnValue = F("Beim schwarzen Kreuz");
        break;
    }
    case 52283:
    {
        returnValue = F("Beim schwarzen Schlat");
        break;
    }
    case 52284:
    {
        returnValue = F("Beim weißen Stein");
        break;
    }
    case 52285:
    {
        returnValue = F("Beim Ärztehaus");
        break;
    }
    case 52286:
    {
        returnValue = F("Beim Ölweiher");
        break;
    }
    case 52287:
    {
        returnValue = F("Beim Öschle");
        break;
    }
    case 52288:
    {
        returnValue = F("Beim Österfelde");
        break;
    }
    case 52289:
    {
        returnValue = F("Beimbacher Hauptstr.");
        break;
    }
    case 52290:
    {
        returnValue = F("Beimbergstr.");
        break;
    }
    case 52291:
    {
        returnValue = F("Beimerskamp");
        break;
    }
    case 52292:
    {
        returnValue = F("Beimerstetter Str.");
        break;
    }
    case 52293:
    {
        returnValue = F("Beimlerstr.");
        break;
    }
    case 52294:
    {
        returnValue = F("Beimoorweg");
        break;
    }
    case 52295:
    {
        returnValue = F("Beimsplatz");
        break;
    }
    case 52296:
    {
        returnValue = F("Beimsstr.");
        break;
    }
    case 52297:
    {
        returnValue = F("Bein");
        break;
    }
    case 52298:
    {
        returnValue = F("Beinberger Steige");
        break;
    }
    case 52299:
    {
        returnValue = F("Beinberger Str.");
        break;
    }
    case 52300:
    {
        returnValue = F("Beinberger Weg");
        break;
    }
    case 52301:
    {
        returnValue = F("Beinbergstr.");
        break;
    }
    case 52302:
    {
        returnValue = F("Beinde");
        break;
    }
    case 52303:
    {
        returnValue = F("Beindersheimer Str.");
        break;
    }
    case 52304:
    {
        returnValue = F("Beindestr.");
        break;
    }
    case 52305:
    {
        returnValue = F("Beindstr.");
        break;
    }
    case 52306:
    {
        returnValue = F("Beinegasse");
        break;
    }
    case 52307:
    {
        returnValue = F("Beinegrund");
        break;
    }
    case 52308:
    {
        returnValue = F("Beinegärten");
        break;
    }
    case 52309:
    {
        returnValue = F("Beinengutstr.");
        break;
    }
    case 52310:
    {
        returnValue = F("Beinenweg");
        break;
    }
    case 52311:
    {
        returnValue = F("Beiner Weg");
        break;
    }
    case 52312:
    {
        returnValue = F("Beinerstr.");
        break;
    }
    case 52313:
    {
        returnValue = F("Beinerstädter Str.");
        break;
    }
    case 52314:
    {
        returnValue = F("Beinesengasse");
        break;
    }
    case 52315:
    {
        returnValue = F("Beinestr.");
        break;
    }
    case 52316:
    {
        returnValue = F("Beineweg");
        break;
    }
    case 52317:
    {
        returnValue = F("Beineäcker");
        break;
    }
    case 52318:
    {
        returnValue = F("Beinfeldweg");
        break;
    }
    case 52319:
    {
        returnValue = F("Beingasse");
        break;
    }
    case 52320:
    {
        returnValue = F("Beinghausen");
        break;
    }
    case 52321:
    {
        returnValue = F("Beingärten");
        break;
    }
    case 52322:
    {
        returnValue = F("Beinhaldenweg");
        break;
    }
    case 52323:
    {
        returnValue = F("Beinhardsweg");
        break;
    }
    case 52324:
    {
        returnValue = F("Beinhauserweg");
        break;
    }
    case 52325:
    {
        returnValue = F("Beinheimer Str.");
        break;
    }
    case 52326:
    {
        returnValue = F("Beinhorner Weg");
        break;
    }
    case 52327:
    {
        returnValue = F("Beinhornstr.");
        break;
    }
    case 52328:
    {
        returnValue = F("Beinhornweg");
        break;
    }
    case 52329:
    {
        returnValue = F("Beinhölzle");
        break;
    }
    case 52330:
    {
        returnValue = F("Beininger Str.");
        break;
    }
    case 52331:
    {
        returnValue = F("Beiningshof");
        break;
    }
    case 52332:
    {
        returnValue = F("Beinlenstr.");
        break;
    }
    case 52333:
    {
        returnValue = F("Beinleshalde");
        break;
    }
    case 52334:
    {
        returnValue = F("Beinpfad");
        break;
    }
    case 52335:
    {
        returnValue = F("Beinröder Str.");
        break;
    }
    case 52336:
    {
        returnValue = F("Beinsstiege");
        break;
    }
    case 52337:
    {
        returnValue = F("Beinsteiner Str.");
        break;
    }
    case 52338:
    {
        returnValue = F("Beinstr.");
        break;
    }
    case 52339:
    {
        returnValue = F("Beintweg");
        break;
    }
    case 52340:
    {
        returnValue = F("Beinumer Weg");
        break;
    }
    case 52341:
    {
        returnValue = F("Beinweg");
        break;
    }
    case 52342:
    {
        returnValue = F("Beire Le Chatel Str.");
        break;
    }
    case 52343:
    {
        returnValue = F("Beireisstr.");
        break;
    }
    case 52344:
    {
        returnValue = F("Beiseförther Str.");
        break;
    }
    case 52345:
    {
        returnValue = F("Beisegrund");
        break;
    }
    case 52346:
    {
        returnValue = F("Beiselestr.");
        break;
    }
    case 52347:
    {
        returnValue = F("Beiselstr.");
        break;
    }
    case 52348:
    {
        returnValue = F("Beisenberg");
        break;
    }
    case 52349:
    {
        returnValue = F("Beisenbrauck");
        break;
    }
    case 52350:
    {
        returnValue = F("Beisenbruchstr.");
        break;
    }
    case 52351:
    {
        returnValue = F("Beisenburg");
        break;
    }
    case 52352:
    {
        returnValue = F("Beisenbusch");
        break;
    }
    case 52353:
    {
        returnValue = F("Beisengeithe");
        break;
    }
    case 52354:
    {
        returnValue = F("Beisenkamp");
        break;
    }
    case 52355:
    {
        returnValue = F("Beisenkampstr.");
        break;
    }
    case 52356:
    {
        returnValue = F("Beisenstr.");
        break;
    }
    case 52357:
    {
        returnValue = F("Beisenweg");
        break;
    }
    case 52358:
    {
        returnValue = F("Beiserstr.");
        break;
    }
    case 52359:
    {
        returnValue = F("Beisetal");
        break;
    }
    case 52360:
    {
        returnValue = F("Beiseystr.");
        break;
    }
    case 52361:
    {
        returnValue = F("Beisheimer Str.");
        break;
    }
    case 52362:
    {
        returnValue = F("Beisiedlungsweg");
        break;
    }
    case 52363:
    {
        returnValue = F("Beisinger Weg");
        break;
    }
    case 52364:
    {
        returnValue = F("Beisingstr.");
        break;
    }
    case 52365:
    {
        returnValue = F("Beislerstr.");
        break;
    }
    case 52366:
    {
        returnValue = F("Beismicke");
        break;
    }
    case 52367:
    {
        returnValue = F("Beisselstr.");
        break;
    }
    case 52368:
    {
        returnValue = F("Beissner-Ring");
        break;
    }
    case 52369:
    {
        returnValue = F("Beistensoll");
        break;
    }
    case 52370:
    {
        returnValue = F("Beiswang");
        break;
    }
    case 52371:
    {
        returnValue = F("Beiswanger Str.");
        break;
    }
    case 52372:
    {
        returnValue = F("Beit-Sahour-Str.");
        break;
    }
    case 52373:
    {
        returnValue = F("Beitelbrink");
        break;
    }
    case 52374:
    {
        returnValue = F("Beitfeld");
        break;
    }
    case 52375:
    {
        returnValue = F("Beitscheidstr.");
        break;
    }
    case 52376:
    {
        returnValue = F("Beitzengang");
        break;
    }
    case 52377:
    {
        returnValue = F("Beiweg");
        break;
    }
    case 52378:
    {
        returnValue = F("Beiwinderweg");
        break;
    }
    case 52379:
    {
        returnValue = F("Beixenhart Talweg");
        break;
    }
    case 52380:
    {
        returnValue = F("Beixenhartstr.");
        break;
    }
    case 52381:
    {
        returnValue = F("Beize");
        break;
    }
    case 52382:
    {
        returnValue = F("Beizkofer Str.");
        break;
    }
    case 52383:
    {
        returnValue = F("Beizweg");
        break;
    }
    case 52384:
    {
        returnValue = F("Beißerweiherweg");
        break;
    }
    case 52385:
    {
        returnValue = F("Beißzange");
        break;
    }
    case 52386:
    {
        returnValue = F("Bejaiaweg");
        break;
    }
    case 52387:
    {
        returnValue = F("Bekamp");
        break;
    }
    case 52388:
    {
        returnValue = F("Bekampstr.");
        break;
    }
    case 52389:
    {
        returnValue = F("Bekassinengasse");
        break;
    }
    case 52390:
    {
        returnValue = F("Bekassinenweg");
        break;
    }
    case 52391:
    {
        returnValue = F("Bekate");
        break;
    }
    case 52392:
    {
        returnValue = F("Bekaublick");
        break;
    }
    case 52393:
    {
        returnValue = F("Bekegrund");
        break;
    }
    case 52394:
    {
        returnValue = F("Bekelheider Str.");
        break;
    }
    case 52395:
    {
        returnValue = F("Bekende");
        break;
    }
    case 52396:
    {
        returnValue = F("Bekendorfsweide");
        break;
    }
    case 52397:
    {
        returnValue = F("Bekenreihe");
        break;
    }
    case 52398:
    {
        returnValue = F("Beker Gärten");
        break;
    }
    case 52399:
    {
        returnValue = F("Bekerfriederweg");
        break;
    }
    case 52400:
    {
        returnValue = F("Bekergrundweg");
        break;
    }
    case 52401:
    {
        returnValue = F("Bekestr.");
        break;
    }
    case 52402:
    {
        returnValue = F("Bekeweg");
        break;
    }
    case 52403:
    {
        returnValue = F("Bekhauser Str.");
        break;
    }
    case 52404:
    {
        returnValue = F("Bekhof");
        break;
    }
    case 52405:
    {
        returnValue = F("Bekholz");
        break;
    }
    case 52406:
    {
        returnValue = F("Bekkamp");
        break;
    }
    case 52407:
    {
        returnValue = F("Bekkerstr.");
        break;
    }
    case 52408:
    {
        returnValue = F("Bekmühle");
        break;
    }
    case 52409:
    {
        returnValue = F("Bekonder Str.");
        break;
    }
    case 52410:
    {
        returnValue = F("Bekower Weg");
        break;
    }
    case 52411:
    {
        returnValue = F("Beksberg");
        break;
    }
    case 52412:
    {
        returnValue = F("Bekscher Berg");
        break;
    }
    case 52413:
    {
        returnValue = F("Bekskate");
        break;
    }
    case 52414:
    {
        returnValue = F("Bekstr.");
        break;
    }
    case 52415:
    {
        returnValue = F("Bektal");
        break;
    }
    case 52416:
    {
        returnValue = F("Bektanger Str.");
        break;
    }
    case 52417:
    {
        returnValue = F("Bekumer Ring");
        break;
    }
    case 52418:
    {
        returnValue = F("Bekweg");
        break;
    }
    case 52419:
    {
        returnValue = F("Bekweiden");
        break;
    }
    case 52420:
    {
        returnValue = F("Bekwisch");
        break;
    }
    case 52421:
    {
        returnValue = F("Bela-Bartok-Weg");
        break;
    }
    case 52422:
    {
        returnValue = F("Bela-von-Glinde-Str.");
        break;
    }
    case 52423:
    {
        returnValue = F("Belandsweg");
        break;
    }
    case 52424:
    {
        returnValue = F("Belauer Str.");
        break;
    }
    case 52425:
    {
        returnValue = F("Belauer Weg");
        break;
    }
    case 52426:
    {
        returnValue = F("Belchenblick");
        break;
    }
    case 52427:
    {
        returnValue = F("Belchenplatz");
        break;
    }
    case 52428:
    {
        returnValue = F("Belchenring");
        break;
    }
    case 52429:
    {
        returnValue = F("Belchenstr.");
        break;
    }
    case 52430:
    {
        returnValue = F("Belchenweg");
        break;
    }
    case 52431:
    {
        returnValue = F("Belchenwinkel");
        break;
    }
    case 52432:
    {
        returnValue = F("Belderberg");
        break;
    }
    case 52433:
    {
        returnValue = F("Belderbuschstr.");
        break;
    }
    case 52434:
    {
        returnValue = F("Belderweg");
        break;
    }
    case 52435:
    {
        returnValue = F("Beleckenweg");
        break;
    }
    case 52436:
    {
        returnValue = F("Belecker Landstr.");
        break;
    }
    case 52437:
    {
        returnValue = F("Belecker Str.");
        break;
    }
    case 52438:
    {
        returnValue = F("Belecker Weg");
        break;
    }
    case 52439:
    {
        returnValue = F("Belemnitenweg");
        break;
    }
    case 52440:
    {
        returnValue = F("Belenhorst");
        break;
    }
    case 52441:
    {
        returnValue = F("Beleuchteter Pfad");
        break;
    }
    case 52442:
    {
        returnValue = F("Belfort");
        break;
    }
    case 52443:
    {
        returnValue = F("Belforter Platz");
        break;
    }
    case 52444:
    {
        returnValue = F("Belforter Str.");
        break;
    }
    case 52445:
    {
        returnValue = F("Belfortplatz");
        break;
    }
    case 52446:
    {
        returnValue = F("Belfortstr.");
        break;
    }
    case 52447:
    {
        returnValue = F("Belgarder Str.");
        break;
    }
    case 52448:
    {
        returnValue = F("Belgenbacher Weg");
        break;
    }
    case 52449:
    {
        returnValue = F("Belgenstr.");
        break;
    }
    case 52450:
    {
        returnValue = F("Belgeraner Str.");
        break;
    }
    case 52451:
    {
        returnValue = F("Belgerkopfgraben");
        break;
    }
    case 52452:
    {
        returnValue = F("Belgerner Str.");
        break;
    }
    case 52453:
    {
        returnValue = F("Belgernsche Str.");
        break;
    }
    case 52454:
    {
        returnValue = F("Belgernsche Str. oder Das doppelte N");
        break;
    }
    case 52455:
    {
        returnValue = F("Belgershainer Str.");
        break;
    }
    case 52456:
    {
        returnValue = F("Belgetweg");
        break;
    }
    case 52457:
    {
        returnValue = F("Belgienstr.");
        break;
    }
    case 52458:
    {
        returnValue = F("Belgierweg");
        break;
    }
    case 52459:
    {
        returnValue = F("Belginumstr.");
        break;
    }
    case 52460:
    {
        returnValue = F("Belgische Allee");
        break;
    }
    case 52461:
    {
        returnValue = F("Belgische Str.");
        break;
    }
    case 52462:
    {
        returnValue = F("Belgischer Platz");
        break;
    }
    case 52463:
    {
        returnValue = F("Belgorodstr.");
        break;
    }
    case 52464:
    {
        returnValue = F("Belgrad");
        break;
    }
    case 52465:
    {
        returnValue = F("Belgrader Str.");
        break;
    }
    case 52466:
    {
        returnValue = F("Belgradstr.");
        break;
    }
    case 52467:
    {
        returnValue = F("Belgwaldweg");
        break;
    }
    case 52468:
    {
        returnValue = F("Belicke");
        break;
    }
    case 52469:
    {
        returnValue = F("Belinger Str.");
        break;
    }
    case 52470:
    {
        returnValue = F("Beliststr.");
        break;
    }
    case 52471:
    {
        returnValue = F("Belitz");
        break;
    }
    case 52472:
    {
        returnValue = F("Belitzer Str.");
        break;
    }
    case 52473:
    {
        returnValue = F("Belkas Weg");
        break;
    }
    case 52474:
    {
        returnValue = F("Belkauer Weg");
        break;
    }
    case 52475:
    {
        returnValue = F("Belker Feld");
        break;
    }
    case 52476:
    {
        returnValue = F("Belker Heide");
        break;
    }
    case 52477:
    {
        returnValue = F("Bella Clava");
        break;
    }
    case 52478:
    {
        returnValue = F("Bella-Aul-Str.");
        break;
    }
    case 52479:
    {
        returnValue = F("Bella-Vista-Allee");
        break;
    }
    case 52480:
    {
        returnValue = F("Bella-Winkhaus-Str.");
        break;
    }
    case 52481:
    {
        returnValue = F("Bellamonter Str.");
        break;
    }
    case 52482:
    {
        returnValue = F("Bellavitestr.");
        break;
    }
    case 52483:
    {
        returnValue = F("Belle Vue");
        break;
    }
    case 52484:
    {
        returnValue = F("Belle-Alliance-Str.");
        break;
    }
    case 52485:
    {
        returnValue = F("Bellebener Str.");
        break;
    }
    case 52486:
    {
        returnValue = F("Bellebener Weg");
        break;
    }
    case 52487:
    {
        returnValue = F("Bellefleurstr.");
        break;
    }
    case 52488:
    {
        returnValue = F("Bellekuhl");
        break;
    }
    case 52489:
    {
        returnValue = F("Bellemer Str.");
        break;
    }
    case 52490:
    {
        returnValue = F("Bellemer-Heiner-Str.");
        break;
    }
    case 52491:
    {
        returnValue = F("Bellen");
        break;
    }
    case 52492:
    {
        returnValue = F("Bellenberger Str.");
        break;
    }
    case 52493:
    {
        returnValue = F("Bellenbrockstr.");
        break;
    }
    case 52494:
    {
        returnValue = F("Bellenbruchstr.");
        break;
    }
    case 52495:
    {
        returnValue = F("Bellenbrünnleweg");
        break;
    }
    case 52496:
    {
        returnValue = F("Bellenbusch");
        break;
    }
    case 52497:
    {
        returnValue = F("Bellendorfsweg");
        break;
    }
    case 52498:
    {
        returnValue = F("Belleneck");
        break;
    }
    case 52499:
    {
        returnValue = F("Bellener Weg");
        break;
    }
    case 52500:
    {
        returnValue = F("Belleneuvestr.");
        break;
    }
    case 52501:
    {
        returnValue = F("Bellengasse");
        break;
    }
    case 52502:
    {
        returnValue = F("Bellenhorster Str.");
        break;
    }
    case 52503:
    {
        returnValue = F("Bellenkamp");
        break;
    }
    case 52504:
    {
        returnValue = F("Bellenkopf-Schließe");
        break;
    }
    case 52505:
    {
        returnValue = F("Bellenstegge");
        break;
    }
    case 52506:
    {
        returnValue = F("Bellenstein");
        break;
    }
    case 52507:
    {
        returnValue = F("Bellensteinerstr.");
        break;
    }
    case 52508:
    {
        returnValue = F("Bellensteinstr.");
        break;
    }
    case 52509:
    {
        returnValue = F("Bellenstr.");
        break;
    }
    case 52510:
    {
        returnValue = F("Bellentalweg");
        break;
    }
    case 52511:
    {
        returnValue = F("Bellenwaldstr.");
        break;
    }
    case 52512:
    {
        returnValue = F("Bellenwaldweg");
        break;
    }
    case 52513:
    {
        returnValue = F("Bellenweg");
        break;
    }
    case 52514:
    {
        returnValue = F("Bellenwiesenweg");
        break;
    }
    case 52515:
    {
        returnValue = F("Bellenäcker");
        break;
    }
    case 52516:
    {
        returnValue = F("Beller Busch");
        break;
    }
    case 52517:
    {
        returnValue = F("Beller Durchgang");
        break;
    }
    case 52518:
    {
        returnValue = F("Beller Feld");
        break;
    }
    case 52519:
    {
        returnValue = F("Beller Hauptstr.");
        break;
    }
    case 52520:
    {
        returnValue = F("Beller Hecke");
        break;
    }
    case 52521:
    {
        returnValue = F("Beller Park");
        break;
    }
    case 52522:
    {
        returnValue = F("Beller Roul");
        break;
    }
    case 52523:
    {
        returnValue = F("Beller Str.");
        break;
    }
    case 52524:
    {
        returnValue = F("Bellerburgweg");
        break;
    }
    case 52525:
    {
        returnValue = F("Bellerbuschallee");
        break;
    }
    case 52526:
    {
        returnValue = F("Bellerkirchstr.");
        break;
    }
    case 52527:
    {
        returnValue = F("Bellerkrug");
        break;
    }
    case 52528:
    {
        returnValue = F("Bellersberg");
        break;
    }
    case 52529:
    {
        returnValue = F("Bellersche Str.");
        break;
    }
    case 52530:
    {
        returnValue = F("Bellersdorfer Str.");
        break;
    }
    case 52531:
    {
        returnValue = F("Bellershauser Str.");
        break;
    }
    case 52532:
    {
        returnValue = F("Bellersheimer Str.");
        break;
    }
    case 52533:
    {
        returnValue = F("Bellersheimer Weg");
        break;
    }
    case 52534:
    {
        returnValue = F("Bellershöhe");
        break;
    }
    case 52535:
    {
        returnValue = F("Bellerslohstr.");
        break;
    }
    case 52536:
    {
        returnValue = F("Bellerstr.");
        break;
    }
    case 52537:
    {
        returnValue = F("Bellerweg");
        break;
    }
    case 52538:
    {
        returnValue = F("Bellerwiese");
        break;
    }
    case 52539:
    {
        returnValue = F("Belleviller Platz");
        break;
    }
    case 52540:
    {
        returnValue = F("Bellevue");
        break;
    }
    case 52541:
    {
        returnValue = F("Bellevueberg");
        break;
    }
    case 52542:
    {
        returnValue = F("Bellevuestr.");
        break;
    }
    case 52543:
    {
        returnValue = F("Bellgasse");
        break;
    }
    case 52544:
    {
        returnValue = F("Bellheimer Str.");
        break;
    }
    case 52545:
    {
        returnValue = F("Bellheimer Weg");
        break;
    }
    case 52546:
    {
        returnValue = F("Belliner Str.");
        break;
    }
    case 52547:
    {
        returnValue = F("Belliner Weg");
        break;
    }
    case 52548:
    {
        returnValue = F("Bellingen");
        break;
    }
    case 52549:
    {
        returnValue = F("Bellinger Gartenweg");
        break;
    }
    case 52550:
    {
        returnValue = F("Bellinger Str.");
        break;
    }
    case 52551:
    {
        returnValue = F("Bellinger Tor");
        break;
    }
    case 52552:
    {
        returnValue = F("Bellinger Weg");
        break;
    }
    case 52553:
    {
        returnValue = F("Bellingerstr.");
        break;
    }
    case 52554:
    {
        returnValue = F("Bellinggradtstr.");
        break;
    }
    case 52555:
    {
        returnValue = F("Bellinghausen");
        break;
    }
    case 52556:
    {
        returnValue = F("Bellinghausener Str.");
        break;
    }
    case 52557:
    {
        returnValue = F("Bellinghausenstr.");
        break;
    }
    case 52558:
    {
        returnValue = F("Bellingheide");
        break;
    }
    case 52559:
    {
        returnValue = F("Bellinghovener Weg");
        break;
    }
    case 52560:
    {
        returnValue = F("Bellingrathweg");
        break;
    }
    case 52561:
    {
        returnValue = F("Bellingrother Hof");
        break;
    }
    case 52562:
    {
        returnValue = F("Bellingrother Str.");
        break;
    }
    case 52563:
    {
        returnValue = F("Bellingrottstr.");
        break;
    }
    case 52564:
    {
        returnValue = F("Bellingsen");
        break;
    }
    case 52565:
    {
        returnValue = F("Bellingser Str.");
        break;
    }
    case 52566:
    {
        returnValue = F("Bellingser Weg");
        break;
    }
    case 52567:
    {
        returnValue = F("Bellingstr.");
        break;
    }
    case 52568:
    {
        returnValue = F("Bellingwolder Str.");
        break;
    }
    case 52569:
    {
        returnValue = F("Bellinistr.");
        break;
    }
    case 52570:
    {
        returnValue = F("Belliniweg");
        break;
    }
    case 52571:
    {
        returnValue = F("Bellinostr.");
        break;
    }
    case 52572:
    {
        returnValue = F("Bellisweg");
        break;
    }
    case 52573:
    {
        returnValue = F("Belliweg");
        break;
    }
    case 52574:
    {
        returnValue = F("Bellmanns Flügel");
        break;
    }
    case 52575:
    {
        returnValue = F("Bellmannskamp");
        break;
    }
    case 52576:
    {
        returnValue = F("Bellmannstr.");
        break;
    }
    case 52577:
    {
        returnValue = F("Bellmers Wiese");
        break;
    }
    case 52578:
    {
        returnValue = F("Bellmuther Str.");
        break;
    }
    case 52579:
    {
        returnValue = F("Bellnhäuser Str.");
        break;
    }
    case 52580:
    {
        returnValue = F("Bellscheider Weg");
        break;
    }
    case 52581:
    {
        returnValue = F("Bellscheidtstr.");
        break;
    }
    case 52582:
    {
        returnValue = F("Bellstedter Str.");
        break;
    }
    case 52583:
    {
        returnValue = F("Bellstein");
        break;
    }
    case 52584:
    {
        returnValue = F("Bellstieg");
        break;
    }
    case 52585:
    {
        returnValue = F("Bellstr.");
        break;
    }
    case 52586:
    {
        returnValue = F("Belltal");
        break;
    }
    case 52587:
    {
        returnValue = F("Belltaler Weg");
        break;
    }
    case 52588:
    {
        returnValue = F("Bellungstr.");
        break;
    }
    case 52589:
    {
        returnValue = F("Bellungsweg");
        break;
    }
    case 52590:
    {
        returnValue = F("Bellweg");
        break;
    }
    case 52591:
    {
        returnValue = F("Bellweweg");
        break;
    }
    case 52592:
    {
        returnValue = F("Bellwitzer Str.");
        break;
    }
    case 52593:
    {
        returnValue = F("Belmbracher Str.");
        break;
    }
    case 52594:
    {
        returnValue = F("Belmener Höfe");
        break;
    }
    case 52595:
    {
        returnValue = F("Belmener Weg");
        break;
    }
    case 52596:
    {
        returnValue = F("Belmer Fußweg");
        break;
    }
    case 52597:
    {
        returnValue = F("Belmer Marktplatz");
        break;
    }
    case 52598:
    {
        returnValue = F("Belmer Str.");
        break;
    }
    case 52599:
    {
        returnValue = F("Belmers Busch");
        break;
    }
    case 52600:
    {
        returnValue = F("Belmicker Weg");
        break;
    }
    case 52601:
    {
        returnValue = F("Belmsdorfer Str.");
        break;
    }
    case 52602:
    {
        returnValue = F("Belmshelm");
        break;
    }
    case 52603:
    {
        returnValue = F("Below Farm");
        break;
    }
    case 52604:
    {
        returnValue = F("Belower Damm");
        break;
    }
    case 52605:
    {
        returnValue = F("Belower Str.");
        break;
    }
    case 52606:
    {
        returnValue = F("Belower Weg");
        break;
    }
    case 52607:
    {
        returnValue = F("Belowstr.");
        break;
    }
    case 52608:
    {
        returnValue = F("Belreinstr.");
        break;
    }
    case 52609:
    {
        returnValue = F("Belremstr.");
        break;
    }
    case 52610:
    {
        returnValue = F("Belschbachweg");
        break;
    }
    case 52611:
    {
        returnValue = F("Belscher Str.");
        break;
    }
    case 52612:
    {
        returnValue = F("Belscher Weg");
        break;
    }
    case 52613:
    {
        returnValue = F("Belschnerstr.");
        break;
    }
    case 52614:
    {
        returnValue = F("Belsdorfer Str.");
        break;
    }
    case 52615:
    {
        returnValue = F("Belsdorfer Weg");
        break;
    }
    case 52616:
    {
        returnValue = F("Belsemer Steg");
        break;
    }
    case 52617:
    {
        returnValue = F("Belsenberger Str.");
        break;
    }
    case 52618:
    {
        returnValue = F("Belsener Str.");
        break;
    }
    case 52619:
    {
        returnValue = F("Belsenplatz");
        break;
    }
    case 52620:
    {
        returnValue = F("Belsenstr.");
        break;
    }
    case 52621:
    {
        returnValue = F("Belserweg");
        break;
    }
    case 52622:
    {
        returnValue = F("Belsgasse");
        break;
    }
    case 52623:
    {
        returnValue = F("Beltener Str.");
        break;
    }
    case 52624:
    {
        returnValue = F("Beltenkampstr.");
        break;
    }
    case 52625:
    {
        returnValue = F("Beltershainer Str.");
        break;
    }
    case 52626:
    {
        returnValue = F("Beltershäuser Str.");
        break;
    }
    case 52627:
    {
        returnValue = F("Belthlestr.");
        break;
    }
    case 52628:
    {
        returnValue = F("Belthoek");
        break;
    }
    case 52629:
    {
        returnValue = F("Beltinghovener Str.");
        break;
    }
    case 52630:
    {
        returnValue = F("Beltring");
        break;
    }
    case 52631:
    {
        returnValue = F("Beltstr.");
        break;
    }
    case 52632:
    {
        returnValue = F("Beltwalk");
        break;
    }
    case 52633:
    {
        returnValue = F("Beltze");
        break;
    }
    case 52634:
    {
        returnValue = F("Beltzeeck");
        break;
    }
    case 52635:
    {
        returnValue = F("Belvedere");
        break;
    }
    case 52636:
    {
        returnValue = F("Belvederer Allee");
        break;
    }
    case 52637:
    {
        returnValue = F("Belvederestr.");
        break;
    }
    case 52638:
    {
        returnValue = F("Belzackerweg");
        break;
    }
    case 52639:
    {
        returnValue = F("Belzbachweg");
        break;
    }
    case 52640:
    {
        returnValue = F("Belzbühl");
        break;
    }
    case 52641:
    {
        returnValue = F("Belzebach");
        break;
    }
    case 52642:
    {
        returnValue = F("Belzengasse");
        break;
    }
    case 52643:
    {
        returnValue = F("Belzengraben");
        break;
    }
    case 52644:
    {
        returnValue = F("Belzenstr.");
        break;
    }
    case 52645:
    {
        returnValue = F("Belzenteichweg");
        break;
    }
    case 52646:
    {
        returnValue = F("Belzenweg");
        break;
    }
    case 52647:
    {
        returnValue = F("Belzerstr.");
        break;
    }
    case 52648:
    {
        returnValue = F("Belzerweg");
        break;
    }
    case 52649:
    {
        returnValue = F("Belzgasse");
        break;
    }
    case 52650:
    {
        returnValue = F("Belzhohl");
        break;
    }
    case 52651:
    {
        returnValue = F("Belziger Chaussee");
        break;
    }
    case 52652:
    {
        returnValue = F("Belziger Landstr.");
        break;
    }
    case 52653:
    {
        returnValue = F("Belziger Str.");
        break;
    }
    case 52654:
    {
        returnValue = F("Belziweg");
        break;
    }
    case 52655:
    {
        returnValue = F("Belzmühle");
        break;
    }
    case 52656:
    {
        returnValue = F("Belzmühlgäßchen");
        break;
    }
    case 52657:
    {
        returnValue = F("Belzweg");
        break;
    }
    case 52658:
    {
        returnValue = F("Belzwies");
        break;
    }
    case 52659:
    {
        returnValue = F("Bemannsbruch");
        break;
    }
    case 52660:
    {
        returnValue = F("Bemberg");
        break;
    }
    case 52661:
    {
        returnValue = F("Bemberger Weg");
        break;
    }
    case 52662:
    {
        returnValue = F("Bembergstr.");
        break;
    }
    case 52663:
    {
        returnValue = F("Bembergtreppe");
        break;
    }
    case 52664:
    {
        returnValue = F("Bembürener Weg");
        break;
    }
    case 52665:
    {
        returnValue = F("Bemelbergstr.");
        break;
    }
    case 52666:
    {
        returnValue = F("Bemmelbergergasse");
        break;
    }
    case 52667:
    {
        returnValue = F("Bemmelpfad");
        break;
    }
    case 52668:
    {
        returnValue = F("Bemmelstr.");
        break;
    }
    case 52669:
    {
        returnValue = F("Bemmelsträßle");
        break;
    }
    case 52670:
    {
        returnValue = F("Bemmelweg");
        break;
    }
    case 52671:
    {
        returnValue = F("Bempflinger Str.");
        break;
    }
    case 52672:
    {
        returnValue = F("Ben-Chorin-Weg");
        break;
    }
    case 52673:
    {
        returnValue = F("Ben-Gurion-Ring");
        break;
    }
    case 52674:
    {
        returnValue = F("Benaryplatz");
        break;
    }
    case 52675:
    {
        returnValue = F("Benatekstr.");
        break;
    }
    case 52676:
    {
        returnValue = F("Benatweg");
        break;
    }
    case 52677:
    {
        returnValue = F("Benatzkystr.");
        break;
    }
    case 52678:
    {
        returnValue = F("Benatzkyweg");
        break;
    }
    case 52679:
    {
        returnValue = F("Benazet-Weg");
        break;
    }
    case 52680:
    {
        returnValue = F("Benazetstr.");
        break;
    }
    case 52681:
    {
        returnValue = F("Bencardstr.");
        break;
    }
    case 52682:
    {
        returnValue = F("Benckgraffweg");
        break;
    }
    case 52683:
    {
        returnValue = F("Benckiserbrücke");
        break;
    }
    case 52684:
    {
        returnValue = F("Benckiserpark");
        break;
    }
    case 52685:
    {
        returnValue = F("Benckiserstr.");
        break;
    }
    case 52686:
    {
        returnValue = F("Bendacker Hof");
        break;
    }
    case 52687:
    {
        returnValue = F("Bendahler Str.");
        break;
    }
    case 52688:
    {
        returnValue = F("Bendastr.");
        break;
    }
    case 52689:
    {
        returnValue = F("Bende-Bendsen-Wäi");
        break;
    }
    case 52690:
    {
        returnValue = F("Bendel-Mühlenweg");
        break;
    }
    case 52691:
    {
        returnValue = F("Bendelebener Str.");
        break;
    }
    case 52692:
    {
        returnValue = F("Bendelebshof");
        break;
    }
    case 52693:
    {
        returnValue = F("Bendelgasse");
        break;
    }
    case 52694:
    {
        returnValue = F("Bendeliner Dorfstr.");
        break;
    }
    case 52695:
    {
        returnValue = F("Bendelstr.");
        break;
    }
    case 52696:
    {
        returnValue = F("Bendemannstr.");
        break;
    }
    case 52697:
    {
        returnValue = F("Benden");
        break;
    }
    case 52698:
    {
        returnValue = F("Bendenblick");
        break;
    }
    case 52699:
    {
        returnValue = F("Bendengasse");
        break;
    }
    case 52700:
    {
        returnValue = F("Bendenkamp");
        break;
    }
    case 52701:
    {
        returnValue = F("Bendenmühle");
        break;
    }
    case 52702:
    {
        returnValue = F("Bendenreihe");
        break;
    }
    case 52703:
    {
        returnValue = F("Bendenstr.");
        break;
    }
    case 52704:
    {
        returnValue = F("Bendenweg");
        break;
    }
    case 52705:
    {
        returnValue = F("Bender Str.");
        break;
    }
    case 52706:
    {
        returnValue = F("Bendergasse");
        break;
    }
    case 52707:
    {
        returnValue = F("Bendersgarten");
        break;
    }
    case 52708:
    {
        returnValue = F("Benderstr.");
        break;
    }
    case 52709:
    {
        returnValue = F("Bendersträßchen");
        break;
    }
    case 52710:
    {
        returnValue = F("Benderweg");
        break;
    }
    case 52711:
    {
        returnValue = F("Benderwiese");
        break;
    }
    case 52712:
    {
        returnValue = F("Benderwiesenchaussee");
        break;
    }
    case 52713:
    {
        returnValue = F("Bendeslo");
        break;
    }
    case 52714:
    {
        returnValue = F("Bendestorfer Kuhtrift");
        break;
    }
    case 52715:
    {
        returnValue = F("Bendestorfer Str.");
        break;
    }
    case 52716:
    {
        returnValue = F("Bendestr.");
        break;
    }
    case 52717:
    {
        returnValue = F("Bendfelder Weg");
        break;
    }
    case 52718:
    {
        returnValue = F("Bendgasse");
        break;
    }
    case 52719:
    {
        returnValue = F("Bendgen");
        break;
    }
    case 52720:
    {
        returnValue = F("Bendgespfad");
        break;
    }
    case 52721:
    {
        returnValue = F("Bendhecker Str.");
        break;
    }
    case 52722:
    {
        returnValue = F("Bendheide");
        break;
    }
    case 52723:
    {
        returnValue = F("Bendheim");
        break;
    }
    case 52724:
    {
        returnValue = F("Bendhofer Weg");
        break;
    }
    case 52725:
    {
        returnValue = F("Bendhütter Str.");
        break;
    }
    case 52726:
    {
        returnValue = F("Bendingbosteler Dorfstr.");
        break;
    }
    case 52727:
    {
        returnValue = F("Bendingbosteler Weg");
        break;
    }
    case 52728:
    {
        returnValue = F("Benditstr.");
        break;
    }
    case 52729:
    {
        returnValue = F("Bendixenstr.");
        break;
    }
    case 52730:
    {
        returnValue = F("Bendixwall");
        break;
    }
    case 52731:
    {
        returnValue = F("Bendl-Platz");
        break;
    }
    case 52732:
    {
        returnValue = F("Bendlerstr.");
        break;
    }
    case 52733:
    {
        returnValue = F("Bendloh");
        break;
    }
    case 52734:
    {
        returnValue = F("Bendlstr.");
        break;
    }
    case 52735:
    {
        returnValue = F("Bendmannstr.");
        break;
    }
    case 52736:
    {
        returnValue = F("Bendorfer Feld");
        break;
    }
    case 52737:
    {
        returnValue = F("Bendorfer Str.");
        break;
    }
    case 52738:
    {
        returnValue = F("Bendorfer Weg");
        break;
    }
    case 52739:
    {
        returnValue = F("Bendschenweg");
        break;
    }
    case 52740:
    {
        returnValue = F("Bendsteg");
        break;
    }
    case 52741:
    {
        returnValue = F("Bendstich");
        break;
    }
    case 52742:
    {
        returnValue = F("Bendstieg");
        break;
    }
    case 52743:
    {
        returnValue = F("Bendstr.");
        break;
    }
    case 52744:
    {
        returnValue = F("Bendweg");
        break;
    }
    case 52745:
    {
        returnValue = F("Benedensdyk");
        break;
    }
    case 52746:
    {
        returnValue = F("Benedicta-Riepp-Weg");
        break;
    }
    case 52747:
    {
        returnValue = F("Benedicta-von-Spiegel-Str.");
        break;
    }
    case 52748:
    {
        returnValue = F("Benedikt-Bauer-Str.");
        break;
    }
    case 52749:
    {
        returnValue = F("Benedikt-Beutner-Str.");
        break;
    }
    case 52750:
    {
        returnValue = F("Benedikt-Burtscher-Str.");
        break;
    }
    case 52751:
    {
        returnValue = F("Benedikt-Dachauer-Str.");
        break;
    }
    case 52752:
    {
        returnValue = F("Benedikt-Elsas-Weg");
        break;
    }
    case 52753:
    {
        returnValue = F("Benedikt-Erhard-Str.");
        break;
    }
    case 52754:
    {
        returnValue = F("Benedikt-Gaugenrieder-Str.");
        break;
    }
    case 52755:
    {
        returnValue = F("Benedikt-Hagg-Str.");
        break;
    }
    case 52756:
    {
        returnValue = F("Benedikt-Hopp-Str.");
        break;
    }
    case 52757:
    {
        returnValue = F("Benedikt-Hoy-Str.");
        break;
    }
    case 52758:
    {
        returnValue = F("Benedikt-Höck-Weg");
        break;
    }
    case 52759:
    {
        returnValue = F("Benedikt-Mahlmeister-Str.");
        break;
    }
    case 52760:
    {
        returnValue = F("Benedikt-Pesch-Str.");
        break;
    }
    case 52761:
    {
        returnValue = F("Benedikt-Reisacher-Str.");
        break;
    }
    case 52762:
    {
        returnValue = F("Benedikt-Schmid-Str.");
        break;
    }
    case 52763:
    {
        returnValue = F("Benedikt-Schmidt-Str.");
        break;
    }
    case 52764:
    {
        returnValue = F("Benedikt-Schwarz-Str.");
        break;
    }
    case 52765:
    {
        returnValue = F("Benedikt-Vasold-Str.");
        break;
    }
    case 52766:
    {
        returnValue = F("Benedikt-Wagner-Str.");
        break;
    }
    case 52767:
    {
        returnValue = F("Benedikt-Waldeck-Str.");
        break;
    }
    case 52768:
    {
        returnValue = F("Benedikt-Wehrle-Str.");
        break;
    }
    case 52769:
    {
        returnValue = F("Benedikt-Weiß-Str.");
        break;
    }
    case 52770:
    {
        returnValue = F("Benedikt-Welser-Weg");
        break;
    }
    case 52771:
    {
        returnValue = F("Benedikt-von-Nursia-Str.");
        break;
    }
    case 52772:
    {
        returnValue = F("Benediktbeuernstr.");
        break;
    }
    case 52773:
    {
        returnValue = F("Benediktbeurer");
        break;
    }
    case 52774:
    {
        returnValue = F("Benediktbeurer Ring");
        break;
    }
    case 52775:
    {
        returnValue = F("Benediktbeurer Str.");
        break;
    }
    case 52776:
    {
        returnValue = F("Benediktenstr.");
        break;
    }
    case 52777:
    {
        returnValue = F("Benediktenwandstr.");
        break;
    }
    case 52778:
    {
        returnValue = F("Benediktenweg");
        break;
    }
    case 52779:
    {
        returnValue = F("Benediktinergasse");
        break;
    }
    case 52780:
    {
        returnValue = F("Benediktinerhöhe");
        break;
    }
    case 52781:
    {
        returnValue = F("Benediktinerplatz");
        break;
    }
    case 52782:
    {
        returnValue = F("Benediktinerring");
        break;
    }
    case 52783:
    {
        returnValue = F("Benediktinerstr.");
        break;
    }
    case 52784:
    {
        returnValue = F("Benediktinerweg");
        break;
    }
    case 52785:
    {
        returnValue = F("Benediktmoosweg");
        break;
    }
    case 52786:
    {
        returnValue = F("Benediktplatz");
        break;
    }
    case 52787:
    {
        returnValue = F("Benediktsplatz");
        break;
    }
    case 52788:
    {
        returnValue = F("Benediktsteig");
        break;
    }
    case 52789:
    {
        returnValue = F("Benediktstr.");
        break;
    }
    case 52790:
    {
        returnValue = F("Benediktus-Kirchplatz");
        break;
    }
    case 52791:
    {
        returnValue = F("Benediktusgarten");
        break;
    }
    case 52792:
    {
        returnValue = F("Benediktusplatz");
        break;
    }
    case 52793:
    {
        returnValue = F("Benediktusstr.");
        break;
    }
    case 52794:
    {
        returnValue = F("Benediktusweg");
        break;
    }
    case 52795:
    {
        returnValue = F("Benediktweg");
        break;
    }
    case 52796:
    {
        returnValue = F("Benedixstr.");
        break;
    }
    case 52797:
    {
        returnValue = F("Benedixweg");
        break;
    }
    case 52798:
    {
        returnValue = F("Benefelder Kirchweg");
        break;
    }
    case 52799:
    {
        returnValue = F("Benefelder Str.");
        break;
    }
    case 52800:
    {
        returnValue = F("Benefiziar-Vest-Str.");
        break;
    }
    case 52801:
    {
        returnValue = F("Benefiziarierbrücke");
        break;
    }
    case 52802:
    {
        returnValue = F("Benefiziat-Bach-Str.");
        break;
    }
    case 52803:
    {
        returnValue = F("Benefiziat-Weber-Weg");
        break;
    }
    case 52804:
    {
        returnValue = F("Benefiziatengasse");
        break;
    }
    case 52805:
    {
        returnValue = F("Benefiziatenweg");
        break;
    }
    case 52806:
    {
        returnValue = F("Benefiziumstr.");
        break;
    }
    case 52807:
    {
        returnValue = F("Benefiziumsweg");
        break;
    }
    case 52808:
    {
        returnValue = F("Benefiziumweg");
        break;
    }
    case 52809:
    {
        returnValue = F("Benekendamm");
        break;
    }
    case 52810:
    {
        returnValue = F("Benekestr.");
        break;
    }
    case 52811:
    {
        returnValue = F("Benemer Str.");
        break;
    }
    case 52812:
    {
        returnValue = F("Benendikenwai");
        break;
    }
    case 52813:
    {
        returnValue = F("Benfelder Str.");
        break;
    }
    case 52814:
    {
        returnValue = F("Benfeyweg");
        break;
    }
    case 52815:
    {
        returnValue = F("Bengdbruchstr.");
        break;
    }
    case 52816:
    {
        returnValue = F("Bengeler Str.");
        break;
    }
    case 52817:
    {
        returnValue = F("Bengelstr.");
        break;
    }
    case 52818:
    {
        returnValue = F("Bengelweg");
        break;
    }
    case 52819:
    {
        returnValue = F("Bengelwiese");
        break;
    }
    case 52820:
    {
        returnValue = F("Bengendorfer Str.");
        break;
    }
    case 52821:
    {
        returnValue = F("Bengener Str.");
        break;
    }
    case 52822:
    {
        returnValue = F("Bengenkampsweg");
        break;
    }
    case 52823:
    {
        returnValue = F("Bengerpfad");
        break;
    }
    case 52824:
    {
        returnValue = F("Bengerstorfer Weg");
        break;
    }
    case 52825:
    {
        returnValue = F("Bengertstr.");
        break;
    }
    case 52826:
    {
        returnValue = F("Bengeser Str.");
        break;
    }
    case 52827:
    {
        returnValue = F("Bengolweg");
        break;
    }
    case 52828:
    {
        returnValue = F("Benhauser Str.");
        break;
    }
    case 52829:
    {
        returnValue = F("Benhorner Weg");
        break;
    }
    case 52830:
    {
        returnValue = F("Benifiziatengasse");
        break;
    }
    case 52831:
    {
        returnValue = F("Benignengrün");
        break;
    }
    case 52832:
    {
        returnValue = F("Beningalohne");
        break;
    }
    case 52833:
    {
        returnValue = F("Beningastr.");
        break;
    }
    case 52834:
    {
        returnValue = F("Beningaweg");
        break;
    }
    case 52835:
    {
        returnValue = F("Beningsfeld");
        break;
    }
    case 52836:
    {
        returnValue = F("Beningsgasse");
        break;
    }
    case 52837:
    {
        returnValue = F("Beningstr.");
        break;
    }
    case 52838:
    {
        returnValue = F("Benistobelweg");
        break;
    }
    case 52839:
    {
        returnValue = F("Benita-Otte-Str.");
        break;
    }
    case 52840:
    {
        returnValue = F("Benitzer Str.");
        break;
    }
    case 52841:
    {
        returnValue = F("Benjamin-Britten-Weg");
        break;
    }
    case 52842:
    {
        returnValue = F("Benjamin-Franklin-Platz");
        break;
    }
    case 52843:
    {
        returnValue = F("Benjamin-Franklin-Str.");
        break;
    }
    case 52844:
    {
        returnValue = F("Benjamin-Kiesewetter-Str.");
        break;
    }
    case 52845:
    {
        returnValue = F("Benjamin-Miller-Str.");
        break;
    }
    case 52846:
    {
        returnValue = F("Benjamin-Mühle-Str.");
        break;
    }
    case 52847:
    {
        returnValue = F("Benjamin-Niethammer-Weg");
        break;
    }
    case 52848:
    {
        returnValue = F("Benjaminsgrund");
        break;
    }
    case 52849:
    {
        returnValue = F("Benk");
        break;
    }
    case 52850:
    {
        returnValue = F("Benkamp");
        break;
    }
    case 52851:
    {
        returnValue = F("Benkel");
        break;
    }
    case 52852:
    {
        returnValue = F("Benkeler Str.");
        break;
    }
    case 52853:
    {
        returnValue = F("Benkeloher Str.");
        break;
    }
    case 52854:
    {
        returnValue = F("Benken-Bokern");
        break;
    }
    case 52855:
    {
        returnValue = F("Benkenblick");
        break;
    }
    case 52856:
    {
        returnValue = F("Benkendorfer Str.");
        break;
    }
    case 52857:
    {
        returnValue = F("Benkendorferstr.");
        break;
    }
    case 52858:
    {
        returnValue = F("Benkendorffstr.");
        break;
    }
    case 52859:
    {
        returnValue = F("Benkener Dorfstr.");
        break;
    }
    case 52860:
    {
        returnValue = F("Benkener Str.");
        break;
    }
    case 52861:
    {
        returnValue = F("Benkener Weg");
        break;
    }
    case 52862:
    {
        returnValue = F("Benker Weg");
        break;
    }
    case 52863:
    {
        returnValue = F("Benkertberg");
        break;
    }
    case 52864:
    {
        returnValue = F("Benkertbergstr.");
        break;
    }
    case 52865:
    {
        returnValue = F("Benkertstr.");
        break;
    }
    case 52866:
    {
        returnValue = F("Benkertsweg");
        break;
    }
    case 52867:
    {
        returnValue = F("Benkerweg");
        break;
    }
    case 52868:
    {
        returnValue = F("Benkhäuser Str.");
        break;
    }
    case 52869:
    {
        returnValue = F("Benkner-Berg-Weg");
        break;
    }
    case 52870:
    {
        returnValue = F("Benlefstede");
        break;
    }
    case 52871:
    {
        returnValue = F("Benlepstr.");
        break;
    }
    case 52872:
    {
        returnValue = F("Benleweg");
        break;
    }
    case 52873:
    {
        returnValue = F("Benlstr.");
        break;
    }
    case 52874:
    {
        returnValue = F("Benlupweg");
        break;
    }
    case 52875:
    {
        returnValue = F("Bennauer Str.");
        break;
    }
    case 52876:
    {
        returnValue = F("Bennauerstr.");
        break;
    }
    case 52877:
    {
        returnValue = F("Bennberg");
        break;
    }
    case 52878:
    {
        returnValue = F("Benndorfer Landstr.");
        break;
    }
    case 52879:
    {
        returnValue = F("Benndorfer Str.");
        break;
    }
    case 52880:
    {
        returnValue = F("Benndorfer Weg");
        break;
    }
    case 52881:
    {
        returnValue = F("Benndorfstr.");
        break;
    }
    case 52882:
    {
        returnValue = F("Bennebeker Weg");
        break;
    }
    case 52883:
    {
        returnValue = F("Bennebosteler Str.");
        break;
    }
    case 52884:
    {
        returnValue = F("Bennebosteler Weg");
        break;
    }
    case 52885:
    {
        returnValue = F("Benneckenbecker Str.");
        break;
    }
    case 52886:
    {
        returnValue = F("Benneckenrode");
        break;
    }
    case 52887:
    {
        returnValue = F("Benneckensteiner Str.");
        break;
    }
    case 52888:
    {
        returnValue = F("Benneckenwiesen");
        break;
    }
    case 52889:
    {
        returnValue = F("Benneckestr.");
        break;
    }
    case 52890:
    {
        returnValue = F("Benneckstr.");
        break;
    }
    case 52891:
    {
        returnValue = F("Benneganshof");
        break;
    }
    case 52892:
    {
        returnValue = F("Benneker Lindenweg");
        break;
    }
    case 52893:
    {
        returnValue = F("Bennemakerweg");
        break;
    }
    case 52894:
    {
        returnValue = F("Bennemanns Geist");
        break;
    }
    case 52895:
    {
        returnValue = F("Bennemannstr.");
        break;
    }
    case 52896:
    {
        returnValue = F("Bennemühler Str.");
        break;
    }
    case 52897:
    {
        returnValue = F("Bennenberg");
        break;
    }
    case 52898:
    {
        returnValue = F("Bennenbergstr.");
        break;
    }
    case 52899:
    {
        returnValue = F("Bennendör");
        break;
    }
    case 52900:
    {
        returnValue = F("Bennengässel");
        break;
    }
    case 52901:
    {
        returnValue = F("Bennenholzweg");
        break;
    }
    case 52902:
    {
        returnValue = F("Bennenwinkelstr.");
        break;
    }
    case 52903:
    {
        returnValue = F("Benner Hohl");
        break;
    }
    case 52904:
    {
        returnValue = F("Bennerberg");
        break;
    }
    case 52905:
    {
        returnValue = F("Bennerbergstr.");
        break;
    }
    case 52906:
    {
        returnValue = F("Bennerfeldweg");
        break;
    }
    case 52907:
    {
        returnValue = F("Bennergasse");
        break;
    }
    case 52908:
    {
        returnValue = F("Bennerscheider Heide");
        break;
    }
    case 52909:
    {
        returnValue = F("Bennerscheidweg");
        break;
    }
    case 52910:
    {
        returnValue = F("Bennersweg");
        break;
    }
    case 52911:
    {
        returnValue = F("Bennertstr.");
        break;
    }
    case 52912:
    {
        returnValue = F("Bennerweg");
        break;
    }
    case 52913:
    {
        returnValue = F("Bennesch-Rudolf-Allee");
        break;
    }
    case 52914:
    {
        returnValue = F("Bennettkänguru");
        break;
    }
    case 52915:
    {
        returnValue = F("Benneweg");
        break;
    }
    case 52916:
    {
        returnValue = F("Bennewitz");
        break;
    }
    case 52917:
    {
        returnValue = F("Bennewitzer Dorfstr.");
        break;
    }
    case 52918:
    {
        returnValue = F("Bennewitzer Str.");
        break;
    }
    case 52919:
    {
        returnValue = F("Bennewohlder Weg");
        break;
    }
    case 52920:
    {
        returnValue = F("Benngasse");
        break;
    }
    case 52921:
    {
        returnValue = F("Benngewannstr.");
        break;
    }
    case 52922:
    {
        returnValue = F("Bennhauser Pfad");
        break;
    }
    case 52923:
    {
        returnValue = F("Bennhauser Str.");
        break;
    }
    case 52924:
    {
        returnValue = F("Benniehäuser Weg");
        break;
    }
    case 52925:
    {
        returnValue = F("Bennighäuser Str.");
        break;
    }
    case 52926:
    {
        returnValue = F("Bennigsenstr.");
        break;
    }
    case 52927:
    {
        returnValue = F("Bennigser Str.");
        break;
    }
    case 52928:
    {
        returnValue = F("Bennigser Weg");
        break;
    }
    case 52929:
    {
        returnValue = F("Benninger Str.");
        break;
    }
    case 52930:
    {
        returnValue = F("Benninger Weg");
        break;
    }
    case 52931:
    {
        returnValue = F("Benningerstr.");
        break;
    }
    case 52932:
    {
        returnValue = F("Benninghausen");
        break;
    }
    case 52933:
    {
        returnValue = F("Benninghausenweg");
        break;
    }
    case 52934:
    {
        returnValue = F("Benninghauser Heide");
        break;
    }
    case 52935:
    {
        returnValue = F("Benninghauser Str.");
        break;
    }
    case 52936:
    {
        returnValue = F("Benninghofer Weg");
        break;
    }
    case 52937:
    {
        returnValue = F("Benningloher Weg");
        break;
    }
    case 52938:
    {
        returnValue = F("Benningsenstr.");
        break;
    }
    case 52939:
    {
        returnValue = F("Benningsfeld");
        break;
    }
    case 52940:
    {
        returnValue = F("Benningweg");
        break;
    }
    case 52941:
    {
        returnValue = F("Bennlander Weg");
        break;
    }
    case 52942:
    {
        returnValue = F("Benno-Benedicter-Str.");
        break;
    }
    case 52943:
    {
        returnValue = F("Benno-Bichler-Platz");
        break;
    }
    case 52944:
    {
        returnValue = F("Benno-Elkan-Allee");
        break;
    }
    case 52945:
    {
        returnValue = F("Benno-Happe-Weg");
        break;
    }
    case 52946:
    {
        returnValue = F("Benno-Hartl-Str.");
        break;
    }
    case 52947:
    {
        returnValue = F("Benno-Heinrich-Str.");
        break;
    }
    case 52948:
    {
        returnValue = F("Benno-Hubensteiner-Str.");
        break;
    }
    case 52949:
    {
        returnValue = F("Benno-Mayer-Str.");
        break;
    }
    case 52950:
    {
        returnValue = F("Benno-Merkle-Str.");
        break;
    }
    case 52951:
    {
        returnValue = F("Benno-Nußbaum-Platz");
        break;
    }
    case 52952:
    {
        returnValue = F("Benno-Reifenberg-Weg");
        break;
    }
    case 52953:
    {
        returnValue = F("Benno-Rüttenauer-Str.");
        break;
    }
    case 52954:
    {
        returnValue = F("Benno-Scharl-Str.");
        break;
    }
    case 52955:
    {
        returnValue = F("Benno-Scharl-Weg");
        break;
    }
    case 52956:
    {
        returnValue = F("Benno-Schilde-Platz");
        break;
    }
    case 52957:
    {
        returnValue = F("Benno-Schilde-Str.");
        break;
    }
    case 52958:
    {
        returnValue = F("Benno-Strauß-Str.");
        break;
    }
    case 52959:
    {
        returnValue = F("Benno-Voelkner-Str.");
        break;
    }
    case 52960:
    {
        returnValue = F("Bennobergstr.");
        break;
    }
    case 52961:
    {
        returnValue = F("Bennoburg");
        break;
    }
    case 52962:
    {
        returnValue = F("Bennosteg");
        break;
    }
    case 52963:
    {
        returnValue = F("Bennostr.");
        break;
    }
    case 52964:
    {
        returnValue = F("Bennoweg");
        break;
    }
    case 52965:
    {
        returnValue = F("Bennrath");
        break;
    }
    case 52966:
    {
        returnValue = F("Bennstedter Str.");
        break;
    }
    case 52967:
    {
        returnValue = F("Bennstr.");
        break;
    }
    case 52968:
    {
        returnValue = F("Bennunger Feldstr.");
        break;
    }
    case 52969:
    {
        returnValue = F("Bennunger Str.");
        break;
    }
    case 52970:
    {
        returnValue = F("Bennweg");
        break;
    }
    case 52971:
    {
        returnValue = F("Benny-Goodman-Weg");
        break;
    }
    case 52972:
    {
        returnValue = F("Beno-Gutenberg-Weg");
        break;
    }
    case 52973:
    {
        returnValue = F("Benolper Str.");
        break;
    }
    case 52974:
    {
        returnValue = F("Benrader Str.");
        break;
    }
    case 52975:
    {
        returnValue = F("Benrather Str.");
        break;
    }
    case 52976:
    {
        returnValue = F("Benrathweg");
        break;
    }
    case 52977:
    {
        returnValue = F("Benriedenweg");
        break;
    }
    case 52978:
    {
        returnValue = F("Benrode");
        break;
    }
    case 52979:
    {
        returnValue = F("Benroder Str.");
        break;
    }
    case 52980:
    {
        returnValue = F("Benroth");
        break;
    }
    case 52981:
    {
        returnValue = F("Benrother Str.");
        break;
    }
    case 52982:
    {
        returnValue = F("Bensberger Str.");
        break;
    }
    case 52983:
    {
        returnValue = F("Bensbruchstr.");
        break;
    }
    case 52984:
    {
        returnValue = F("Benscheid");
        break;
    }
    case 52985:
    {
        returnValue = F("Benscheider Str.");
        break;
    }
    case 52986:
    {
        returnValue = F("Benscheidtstr.");
        break;
    }
    case 52987:
    {
        returnValue = F("Bensdorf");
        break;
    }
    case 52988:
    {
        returnValue = F("Bensdorpstr.");
        break;
    }
    case 52989:
    {
        returnValue = F("Bensen");
        break;
    }
    case 52990:
    {
        returnValue = F("Bensendrift");
        break;
    }
    case 52991:
    {
        returnValue = F("Bensenstr.");
        break;
    }
    case 52992:
    {
        returnValue = F("Benser Haide");
        break;
    }
    case 52993:
    {
        returnValue = F("Benser Mauer");
        break;
    }
    case 52994:
    {
        returnValue = F("Benser Str.");
        break;
    }
    case 52995:
    {
        returnValue = F("Benser Weg");
        break;
    }
    case 52996:
    {
        returnValue = F("Bensersieler Str.");
        break;
    }
    case 52997:
    {
        returnValue = F("Bensheimer Ring");
        break;
    }
    case 52998:
    {
        returnValue = F("Bensheimer Str.");
        break;
    }
    case 52999:
    {
        returnValue = F("Bensheimer Weg");
        break;
    }
    case 53000:
    {
        returnValue = F("Benshurstsiedlung");
        break;
    }
    case 53001:
    {
        returnValue = F("Benshurststr.");
        break;
    }
    case 53002:
    {
        returnValue = F("Benshäuser Grund");
        break;
    }
    case 53003:
    {
        returnValue = F("Benshäuser Str.");
        break;
    }
    case 53004:
    {
        returnValue = F("Benshöcht");
        break;
    }
    case 53005:
    {
        returnValue = F("Bensingerstr.");
        break;
    }
    case 53006:
    {
        returnValue = F("Bensjücher Weg");
        break;
    }
    case 53007:
    {
        returnValue = F("Benskamp");
        break;
    }
    case 53008:
    {
        returnValue = F("Bensleweg");
        break;
    }
    case 53009:
    {
        returnValue = F("Benslips Kamp");
        break;
    }
    case 53010:
    {
        returnValue = F("Bensmeerweg");
        break;
    }
    case 53011:
    {
        returnValue = F("Bensmoor");
        break;
    }
    case 53012:
    {
        returnValue = F("Benstaben");
        break;
    }
    case 53013:
    {
        returnValue = F("Bensumskamp");
        break;
    }
    case 53014:
    {
        returnValue = F("Bensweg");
        break;
    }
    case 53015:
    {
        returnValue = F("Bent");
        break;
    }
    case 53016:
    {
        returnValue = F("Bentelerstr.");
        break;
    }
    case 53017:
    {
        returnValue = F("Bentelgasse");
        break;
    }
    case 53018:
    {
        returnValue = F("Benten Kamp");
        break;
    }
    case 53019:
    {
        returnValue = F("Bentenknapp");
        break;
    }
    case 53020:
    {
        returnValue = F("Bentenweg");
        break;
    }
    case 53021:
    {
        returnValue = F("Benter Weg");
        break;
    }
    case 53022:
    {
        returnValue = F("Benterkamp");
        break;
    }
    case 53023:
    {
        returnValue = F("Benterkaul");
        break;
    }
    case 53024:
    {
        returnValue = F("Benteroder Str.");
        break;
    }
    case 53025:
    {
        returnValue = F("Benters Kamp");
        break;
    }
    case 53026:
    {
        returnValue = F("Benteröder Weg");
        break;
    }
    case 53027:
    {
        returnValue = F("Bentestr.");
        break;
    }
    case 53028:
    {
        returnValue = F("Bentfelder Str.");
        break;
    }
    case 53029:
    {
        returnValue = F("Bentfelder Weg");
        break;
    }
    case 53030:
    {
        returnValue = F("Bentfurt");
        break;
    }
    case 53031:
    {
        returnValue = F("Bentger Feld");
        break;
    }
    case 53032:
    {
        returnValue = F("Bentgrasweg");
        break;
    }
    case 53033:
    {
        returnValue = F("Benthalmsweg");
        break;
    }
    case 53034:
    {
        returnValue = F("Benthalmweg");
        break;
    }
    case 53035:
    {
        returnValue = F("Bentheider Weg");
        break;
    }
    case 53036:
    {
        returnValue = F("Bentheimer Str.");
        break;
    }
    case 53037:
    {
        returnValue = F("Bentheimer Weg");
        break;
    }
    case 53038:
    {
        returnValue = F("Bentheimstr.");
        break;
    }
    case 53039:
    {
        returnValue = F("Benthener Str.");
        break;
    }
    case 53040:
    {
        returnValue = F("Benther Mühle");
        break;
    }
    case 53041:
    {
        returnValue = F("Benther Str.");
        break;
    }
    case 53042:
    {
        returnValue = F("Benther-Berg-Weg");
        break;
    }
    case 53043:
    {
        returnValue = F("Benthof");
        break;
    }
    case 53044:
    {
        returnValue = F("Benthögtsweg");
        break;
    }
    case 53045:
    {
        returnValue = F("Bentieröder Born");
        break;
    }
    case 53046:
    {
        returnValue = F("Bentieröder Bruch");
        break;
    }
    case 53047:
    {
        returnValue = F("Bentieröder Hauptstr.");
        break;
    }
    case 53048:
    {
        returnValue = F("Bentieröder Ring");
        break;
    }
    case 53049:
    {
        returnValue = F("Bentieröder Wanne");
        break;
    }
    case 53050:
    {
        returnValue = F("Bentieröder Winkel");
        break;
    }
    case 53051:
    {
        returnValue = F("Bentinckstr.");
        break;
    }
    case 53052:
    {
        returnValue = F("Bentingstr.");
        break;
    }
    case 53053:
    {
        returnValue = F("Bentinksweg");
        break;
    }
    case 53054:
    {
        returnValue = F("Bentlager Weg");
        break;
    }
    case 53055:
    {
        returnValue = F("Bentlakestr.");
        break;
    }
    case 53056:
    {
        returnValue = F("Bentloh");
        break;
    }
    case 53057:
    {
        returnValue = F("Bentorfer Str.");
        break;
    }
    case 53058:
    {
        returnValue = F("Bentritesstr.");
        break;
    }
    case 53059:
    {
        returnValue = F("Bentroper Weg");
        break;
    }
    case 53060:
    {
        returnValue = F("Bentruper Str.");
        break;
    }
    case 53061:
    {
        returnValue = F("Bentruper Weg");
        break;
    }
    case 53062:
    {
        returnValue = F("Bentruperheider Weg");
        break;
    }
    case 53063:
    {
        returnValue = F("Bentshöcht");
        break;
    }
    case 53064:
    {
        returnValue = F("Bentshöhe");
        break;
    }
    case 53065:
    {
        returnValue = F("Bentskamp");
        break;
    }
    case 53066:
    {
        returnValue = F("Bentstreeker Grenzweg");
        break;
    }
    case 53067:
    {
        returnValue = F("Bentstreeker Hunter Moor");
        break;
    }
    case 53068:
    {
        returnValue = F("Bentstreeker Kielweg");
        break;
    }
    case 53069:
    {
        returnValue = F("Bentstreeker Schulweg");
        break;
    }
    case 53070:
    {
        returnValue = F("Bentstreeker Str.");
        break;
    }
    case 53071:
    {
        returnValue = F("Bentstreeker Weg");
        break;
    }
    case 53072:
    {
        returnValue = F("Bentswaller Weg");
        break;
    }
    case 53073:
    {
        returnValue = F("Bentumer Sieltiefsweg");
        break;
    }
    case 53074:
    {
        returnValue = F("Bentweg");
        break;
    }
    case 53075:
    {
        returnValue = F("Bentweide");
        break;
    }
    case 53076:
    {
        returnValue = F("Bentwisch");
        break;
    }
    case 53077:
    {
        returnValue = F("Bentwischer Chaussee");
        break;
    }
    case 53078:
    {
        returnValue = F("Bentwischer Dorfstr.");
        break;
    }
    case 53079:
    {
        returnValue = F("Bentwischer Weg");
        break;
    }
    case 53080:
    {
        returnValue = F("Bentzlerstr.");
        break;
    }
    case 53081:
    {
        returnValue = F("Benz Str.");
        break;
    }
    case 53082:
    {
        returnValue = F("Benz-Meisel-Str.");
        break;
    }
    case 53083:
    {
        returnValue = F("Benzachring");
        break;
    }
    case 53084:
    {
        returnValue = F("Benzachweg");
        break;
    }
    case 53085:
    {
        returnValue = F("Benzberg");
        break;
    }
    case 53086:
    {
        returnValue = F("Benzebühnd");
        break;
    }
    case 53087:
    {
        returnValue = F("Benzekauser Weg");
        break;
    }
    case 53088:
    {
        returnValue = F("Benzelrather Str.");
        break;
    }
    case 53089:
    {
        returnValue = F("Benzenacker");
        break;
    }
    case 53090:
    {
        returnValue = F("Benzenauerstr.");
        break;
    }
    case 53091:
    {
        returnValue = F("Benzenauerweg");
        break;
    }
    case 53092:
    {
        returnValue = F("Benzenbergs Kamp");
        break;
    }
    case 53093:
    {
        returnValue = F("Benzenbergstr.");
        break;
    }
    case 53094:
    {
        returnValue = F("Benzenbergweg");
        break;
    }
    case 53095:
    {
        returnValue = F("Benzendorfer Str.");
        break;
    }
    case 53096:
    {
        returnValue = F("Benzengarten");
        break;
    }
    case 53097:
    {
        returnValue = F("Benzengasse");
        break;
    }
    case 53098:
    {
        returnValue = F("Benzengrabenstr.");
        break;
    }
    case 53099:
    {
        returnValue = F("Benzengrundschneise");
        break;
    }
    case 53100:
    {
        returnValue = F("Benzengrundweg");
        break;
    }
    case 53101:
    {
        returnValue = F("Benzengäßle");
        break;
    }
    case 53102:
    {
        returnValue = F("Benzenhahn");
        break;
    }
    case 53103:
    {
        returnValue = F("Benzenhauser Teich");
        break;
    }
    case 53104:
    {
        returnValue = F("Benzenhell");
        break;
    }
    case 53105:
    {
        returnValue = F("Benzenhofweg");
        break;
    }
    case 53106:
    {
        returnValue = F("Benzenmühlstr.");
        break;
    }
    case 53107:
    {
        returnValue = F("Benzenweg");
        break;
    }
    case 53108:
    {
        returnValue = F("Benzenwiesenschneise");
        break;
    }
    case 53109:
    {
        returnValue = F("Benzenzimmerner Str.");
        break;
    }
    case 53110:
    {
        returnValue = F("Benzenäcker");
        break;
    }
    case 53111:
    {
        returnValue = F("Benzenäckerweg");
        break;
    }
    case 53112:
    {
        returnValue = F("Benzepädel");
        break;
    }
    case 53113:
    {
        returnValue = F("Benzer Chaussee");
        break;
    }
    case 53114:
    {
        returnValue = F("Benzer Kirchsteig");
        break;
    }
    case 53115:
    {
        returnValue = F("Benzer Str.");
        break;
    }
    case 53116:
    {
        returnValue = F("Benzer Winkel");
        break;
    }
    case 53117:
    {
        returnValue = F("Benzerstr.");
        break;
    }
    case 53118:
    {
        returnValue = F("Benzhauser Str.");
        break;
    }
    case 53119:
    {
        returnValue = F("Benzholzstr.");
        break;
    }
    case 53120:
    {
        returnValue = F("Benzigweg");
        break;
    }
    case 53121:
    {
        returnValue = F("Benziner Chaussee");
        break;
    }
    case 53122:
    {
        returnValue = F("Benziner Str.");
        break;
    }
    case 53123:
    {
        returnValue = F("Benziner Weg");
        break;
    }
    case 53124:
    {
        returnValue = F("Benzing");
        break;
    }
    case 53125:
    {
        returnValue = F("Benzinger Hof");
        break;
    }
    case 53126:
    {
        returnValue = F("Benzinger Str.");
        break;
    }
    case 53127:
    {
        returnValue = F("Benzingeröder Chaussee");
        break;
    }
    case 53128:
    {
        returnValue = F("Benzingstr.");
        break;
    }
    case 53129:
    {
        returnValue = F("Benzingweg");
        break;
    }
    case 53130:
    {
        returnValue = F("Benzinkurve");
        break;
    }
    case 53131:
    {
        returnValue = F("Benzinopark");
        break;
    }
    case 53132:
    {
        returnValue = F("Benzinoring");
        break;
    }
    case 53133:
    {
        returnValue = F("Benzins-Ausbau");
        break;
    }
    case 53134:
    {
        returnValue = F("Benzkamp");
        break;
    }
    case 53135:
    {
        returnValue = F("Benzmattenweg");
        break;
    }
    case 53136:
    {
        returnValue = F("Benzstr.");
        break;
    }
    case 53137:
    {
        returnValue = F("Benzweg");
        break;
    }
    case 53138:
    {
        returnValue = F("Benzwiesen");
        break;
    }
    case 53139:
    {
        returnValue = F("Benzwiesenweg");
        break;
    }
    case 53140:
    {
        returnValue = F("Benzäcker");
        break;
    }
    case 53141:
    {
        returnValue = F("Benölkenplatz");
        break;
    }
    case 53142:
    {
        returnValue = F("Beppener Heide");
        break;
    }
    case 53143:
    {
        returnValue = F("Beppener Str.");
        break;
    }
    case 53144:
    {
        returnValue = F("Beppo-Römer-Str.");
        break;
    }
    case 53145:
    {
        returnValue = F("BerRies Eventgelände");
        break;
    }
    case 53146:
    {
        returnValue = F("Beraiterweg");
        break;
    }
    case 53147:
    {
        returnValue = F("Beratzhausener Str.");
        break;
    }
    case 53148:
    {
        returnValue = F("Beratzhausener Weg");
        break;
    }
    case 53149:
    {
        returnValue = F("Berauer Str.");
        break;
    }
    case 53150:
    {
        returnValue = F("Berbachsträßle");
        break;
    }
    case 53151:
    {
        returnValue = F("Berbaumsteg");
        break;
    }
    case 53152:
    {
        returnValue = F("Berbeck");
        break;
    }
    case 53153:
    {
        returnValue = F("Berbelingskamp");
        break;
    }
    case 53154:
    {
        returnValue = F("Berbergweg");
        break;
    }
    case 53155:
    {
        returnValue = F("Berberichstr.");
        break;
    }
    case 53156:
    {
        returnValue = F("Berberichweg");
        break;
    }
    case 53157:
    {
        returnValue = F("Berberitzenweg");
        break;
    }
    case 53158:
    {
        returnValue = F("Berbersdorfer Str.");
        break;
    }
    case 53159:
    {
        returnValue = F("Berbigstr.");
        break;
    }
    case 53160:
    {
        returnValue = F("Berbing");
        break;
    }
    case 53161:
    {
        returnValue = F("Berbisdorfer Hauptstr.");
        break;
    }
    case 53162:
    {
        returnValue = F("Berbisdorfer Kirchweg");
        break;
    }
    case 53163:
    {
        returnValue = F("Berbisdorfer Str.");
        break;
    }
    case 53164:
    {
        returnValue = F("Berbke");
        break;
    }
    case 53165:
    {
        returnValue = F("Berblinger Str.");
        break;
    }
    case 53166:
    {
        returnValue = F("Berblingerstr.");
        break;
    }
    case 53167:
    {
        returnValue = F("Berblingerweg");
        break;
    }
    case 53168:
    {
        returnValue = F("Berbomstiege");
        break;
    }
    case 53169:
    {
        returnValue = F("Berchemallee");
        break;
    }
    case 53170:
    {
        returnValue = F("Berchemstr.");
        break;
    }
    case 53171:
    {
        returnValue = F("Berchenstr.");
        break;
    }
    case 53172:
    {
        returnValue = F("Berchenweg");
        break;
    }
    case 53173:
    {
        returnValue = F("Berchetstr.");
        break;
    }
    case 53174:
    {
        returnValue = F("Berchinger Str.");
        break;
    }
    case 53175:
    {
        returnValue = F("Berchtenstr.");
        break;
    }
    case 53176:
    {
        returnValue = F("Berchtesgadener Str.");
        break;
    }
    case 53177:
    {
        returnValue = F("Berchtholdstr.");
        break;
    }
    case 53178:
    {
        returnValue = F("Berchtoldstr.");
        break;
    }
    case 53179:
    {
        returnValue = F("Berchtoldweg");
        break;
    }
    case 53180:
    {
        returnValue = F("Berck-sur-Mer Str.");
        break;
    }
    case 53181:
    {
        returnValue = F("Berckheimstr.");
        break;
    }
    case 53182:
    {
        returnValue = F("Berckmüllerstr.");
        break;
    }
    case 53183:
    {
        returnValue = F("Berdel");
        break;
    }
    case 53184:
    {
        returnValue = F("Berdinghof");
        break;
    }
    case 53185:
    {
        returnValue = F("Berdingweg");
        break;
    }
    case 53186:
    {
        returnValue = F("Berdoletstr.");
        break;
    }
    case 53187:
    {
        returnValue = F("Berdumer Altendeich");
        break;
    }
    case 53188:
    {
        returnValue = F("Berdumer Altengroden");
        break;
    }
    case 53189:
    {
        returnValue = F("Berdumer Dorfstr.");
        break;
    }
    case 53190:
    {
        returnValue = F("Berdumer Hammrich");
        break;
    }
    case 53191:
    {
        returnValue = F("Berdumer Kleine Riege");
        break;
    }
    case 53192:
    {
        returnValue = F("Berdumer Weg");
        break;
    }
    case 53193:
    {
        returnValue = F("Berdumerriege");
        break;
    }
    case 53194:
    {
        returnValue = F("Bereboomstr.");
        break;
    }
    case 53195:
    {
        returnValue = F("Berechtigungspfad");
        break;
    }
    case 53196:
    {
        returnValue = F("Bereisungsweg");
        break;
    }
    case 53197:
    {
        returnValue = F("Bereitschaftssiedlung");
        break;
    }
    case 53198:
    {
        returnValue = F("Bereler Str.");
        break;
    }
    case 53199:
    {
        returnValue = F("Bereler Weg");
        break;
    }
    case 53200:
    {
        returnValue = F("Berenbachweg");
        break;
    }
    case 53201:
    {
        returnValue = F("Berenberg");
        break;
    }
    case 53202:
    {
        returnValue = F("Berenbosteler Str.");
        break;
    }
    case 53203:
    {
        returnValue = F("Berenbrock");
        break;
    }
    case 53204:
    {
        returnValue = F("Berenbruchstr.");
        break;
    }
    case 53205:
    {
        returnValue = F("Berenbuscher Str.");
        break;
    }
    case 53206:
    {
        returnValue = F("Berend-Ulpts-Str.");
        break;
    }
    case 53207:
    {
        returnValue = F("Berend-de-Vries-Str.");
        break;
    }
    case 53208:
    {
        returnValue = F("Berender Heide");
        break;
    }
    case 53209:
    {
        returnValue = F("Berendfeld");
        break;
    }
    case 53210:
    {
        returnValue = F("Berendlund");
        break;
    }
    case 53211:
    {
        returnValue = F("Berendseen");
        break;
    }
    case 53212:
    {
        returnValue = F("Berendshäger Weg");
        break;
    }
    case 53213:
    {
        returnValue = F("Berendsohnsstr.");
        break;
    }
    case 53214:
    {
        returnValue = F("Berendstamm");
        break;
    }
    case 53215:
    {
        returnValue = F("Berendstr.");
        break;
    }
    case 53216:
    {
        returnValue = F("Berengariastr.");
        break;
    }
    case 53217:
    {
        returnValue = F("Berengarstr.");
        break;
    }
    case 53218:
    {
        returnValue = F("Berenger Str.");
        break;
    }
    case 53219:
    {
        returnValue = F("Berengerstr.");
        break;
    }
    case 53220:
    {
        returnValue = F("Berensberger Str.");
        break;
    }
    case 53221:
    {
        returnValue = F("Berensberger Winkel");
        break;
    }
    case 53222:
    {
        returnValue = F("Berenscher Dorfstr.");
        break;
    }
    case 53223:
    {
        returnValue = F("Berenscher Heideweg");
        break;
    }
    case 53224:
    {
        returnValue = F("Berenscher Weg");
        break;
    }
    case 53225:
    {
        returnValue = F("Berensgasse");
        break;
    }
    case 53226:
    {
        returnValue = F("Berenskamp");
        break;
    }
    case 53227:
    {
        returnValue = F("Berensrech");
        break;
    }
    case 53228:
    {
        returnValue = F("Berensstr.");
        break;
    }
    case 53229:
    {
        returnValue = F("Berensweg");
        break;
    }
    case 53230:
    {
        returnValue = F("Berentelgweg");
        break;
    }
    case 53231:
    {
        returnValue = F("Berentrop");
        break;
    }
    case 53232:
    {
        returnValue = F("Berentroper Berg");
        break;
    }
    case 53233:
    {
        returnValue = F("Berentrup");
        break;
    }
    case 53234:
    {
        returnValue = F("Berer Weg");
        break;
    }
    case 53235:
    {
        returnValue = F("Berescheid");
        break;
    }
    case 53236:
    {
        returnValue = F("Berfaer Str.");
        break;
    }
    case 53237:
    {
        returnValue = F("Berfallen");
        break;
    }
    case 53238:
    {
        returnValue = F("Berfeldweg");
        break;
    }
    case 53239:
    {
        returnValue = F("Berfmühle");
        break;
    }
    case 53240:
    {
        returnValue = F("Berfritgasse");
        break;
    }
    case 53241:
    {
        returnValue = F("Berg");
        break;
    }
    case 53242:
    {
        returnValue = F("Berg Erlebnis Welt");
        break;
    }
    case 53243:
    {
        returnValue = F("Berg im Gauer Str.");
        break;
    }
    case 53244:
    {
        returnValue = F("Berg und Reifenloch");
        break;
    }
    case 53245:
    {
        returnValue = F("Berg und Tal - Weg");
        break;
    }
    case 53246:
    {
        returnValue = F("Berg und Talweg");
        break;
    }
    case 53247:
    {
        returnValue = F("Berg up Sonn");
        break;
    }
    case 53248:
    {
        returnValue = F("Berg- und Talweg");
        break;
    }
    case 53249:
    {
        returnValue = F("Berg-Isel-Weg");
        break;
    }
    case 53250:
    {
        returnValue = F("Berg-Leite");
        break;
    }
    case 53251:
    {
        returnValue = F("Berg-Mark-Str.");
        break;
    }
    case 53252:
    {
        returnValue = F("Berg-Waldstr.");
        break;
    }
    case 53253:
    {
        returnValue = F("Berg-Wiesen-Weg");
        break;
    }
    case 53254:
    {
        returnValue = F("Berg-im-Gau-Str.");
        break;
    }
    case 53255:
    {
        returnValue = F("Berg-und Tälerweg");
        break;
    }
    case 53256:
    {
        returnValue = F("Berga-Krassiger Str.");
        break;
    }
    case 53257:
    {
        returnValue = F("Bergach");
        break;
    }
    case 53258:
    {
        returnValue = F("Bergachweg");
        break;
    }
    case 53259:
    {
        returnValue = F("Bergacker");
        break;
    }
    case 53260:
    {
        returnValue = F("Bergacker-Weg");
        break;
    }
    case 53261:
    {
        returnValue = F("Bergackerstr.");
        break;
    }
    case 53262:
    {
        returnValue = F("Bergackerweg");
        break;
    }
    case 53263:
    {
        returnValue = F("Bergaer Trift");
        break;
    }
    case 53264:
    {
        returnValue = F("Bergaer Weg");
        break;
    }
    case 53265:
    {
        returnValue = F("Bergaggerstr.");
        break;
    }
    case 53266:
    {
        returnValue = F("Bergahorn-Allee");
        break;
    }
    case 53267:
    {
        returnValue = F("Bergahornstr.");
        break;
    }
    case 53268:
    {
        returnValue = F("Bergahornweg");
        break;
    }
    case 53269:
    {
        returnValue = F("Bergalingen");
        break;
    }
    case 53270:
    {
        returnValue = F("Bergallee");
        break;
    }
    case 53271:
    {
        returnValue = F("Bergamannsweg");
        break;
    }
    case 53272:
    {
        returnValue = F("Bergamastr.");
        break;
    }
    case 53273:
    {
        returnValue = F("Bergamtsplatz");
        break;
    }
    case 53274:
    {
        returnValue = F("Bergamtsstr.");
        break;
    }
    case 53275:
    {
        returnValue = F("Bergamtstr.");
        break;
    }
    case 53276:
    {
        returnValue = F("Berganger");
        break;
    }
    case 53277:
    {
        returnValue = F("Bergarbeiterpark");
        break;
    }
    case 53278:
    {
        returnValue = F("Bergarbeitersiedlung");
        break;
    }
    case 53279:
    {
        returnValue = F("Bergarbeitersieldung");
        break;
    }
    case 53280:
    {
        returnValue = F("Bergarn");
        break;
    }
    case 53281:
    {
        returnValue = F("Bergarner Str.");
        break;
    }
    case 53282:
    {
        returnValue = F("Bergatreuter Str.");
        break;
    }
    case 53283:
    {
        returnValue = F("Bergauf");
        break;
    }
    case 53284:
    {
        returnValue = F("Bergauffahrt");
        break;
    }
    case 53285:
    {
        returnValue = F("Bergbachweg");
        break;
    }
    case 53286:
    {
        returnValue = F("Bergbadallee");
        break;
    }
    case 53287:
    {
        returnValue = F("Bergbadweg");
        break;
    }
    case 53288:
    {
        returnValue = F("Bergbahnstr.");
        break;
    }
    case 53289:
    {
        returnValue = F("Bergbahntrasse");
        break;
    }
    case 53290:
    {
        returnValue = F("Bergbau Erlebnispfad");
        break;
    }
    case 53291:
    {
        returnValue = F("Bergbauehrung");
        break;
    }
    case 53292:
    {
        returnValue = F("Bergbauernhof");
        break;
    }
    case 53293:
    {
        returnValue = F("Bergbauerweg");
        break;
    }
    case 53294:
    {
        returnValue = F("Bergbaulehrpfad");
        break;
    }
    case 53295:
    {
        returnValue = F("Bergbaulehrpfad Steinbachtal");
        break;
    }
    case 53296:
    {
        returnValue = F("Bergbaupark Groß Bülten");
        break;
    }
    case 53297:
    {
        returnValue = F("Bergbaupfad");
        break;
    }
    case 53298:
    {
        returnValue = F("Bergbaustr.");
        break;
    }
    case 53299:
    {
        returnValue = F("Bergbautechnikausstellung");
        break;
    }
    case 53300:
    {
        returnValue = F("Bergbauweg");
        break;
    }
    case 53301:
    {
        returnValue = F("Bergbendenweg");
        break;
    }
    case 53302:
    {
        returnValue = F("Bergbildstock");
        break;
    }
    case 53303:
    {
        returnValue = F("Bergbinderstr.");
        break;
    }
    case 53304:
    {
        returnValue = F("Bergblick");
        break;
    }
    case 53305:
    {
        returnValue = F("Bergblickstr.");
        break;
    }
    case 53306:
    {
        returnValue = F("Bergborn");
        break;
    }
    case 53307:
    {
        returnValue = F("Bergbornstr.");
        break;
    }
    case 53308:
    {
        returnValue = F("Bergbossendorf");
        break;
    }
    case 53309:
    {
        returnValue = F("Bergbrede");
        break;
    }
    case 53310:
    {
        returnValue = F("Bergbreite");
        break;
    }
    case 53311:
    {
        returnValue = F("Bergbronner Str.");
        break;
    }
    case 53312:
    {
        returnValue = F("Bergbrunn");
        break;
    }
    case 53313:
    {
        returnValue = F("Bergbrunnenstr.");
        break;
    }
    case 53314:
    {
        returnValue = F("Bergbrunnenweg");
        break;
    }
    case 53315:
    {
        returnValue = F("Bergbrunner Kopf");
        break;
    }
    case 53316:
    {
        returnValue = F("Bergbuschschlag");
        break;
    }
    case 53317:
    {
        returnValue = F("Bergbühnenweg");
        break;
    }
    case 53318:
    {
        returnValue = F("Bergchaussee");
        break;
    }
    case 53319:
    {
        returnValue = F("Bergdahlsweg");
        break;
    }
    case 53320:
    {
        returnValue = F("Bergdohlenweg");
        break;
    }
    case 53321:
    {
        returnValue = F("Bergdorfer Str.");
        break;
    }
    case 53322:
    {
        returnValue = F("Bergdorfstr.");
        break;
    }
    case 53323:
    {
        returnValue = F("Bergdriesch");
        break;
    }
    case 53324:
    {
        returnValue = F("Berge");
        break;
    }
    case 53325:
    {
        returnValue = F("Bergeder Weg");
        break;
    }
    case 53326:
    {
        returnValue = F("Bergedorfer Kirchdamm");
        break;
    }
    case 53327:
    {
        returnValue = F("Bergedorfer Landstr.");
        break;
    }
    case 53328:
    {
        returnValue = F("Bergedorfer Str.");
        break;
    }
    case 53329:
    {
        returnValue = F("Bergedorfer Utdamm");
        break;
    }
    case 53330:
    {
        returnValue = F("Bergedorfer Weg");
        break;
    }
    case 53331:
    {
        returnValue = F("Bergegge");
        break;
    }
    case 53332:
    {
        returnValue = F("Bergehalde Wilsberg");
        break;
    }
    case 53333:
    {
        returnValue = F("Bergeickeler Weg");
        break;
    }
    case 53334:
    {
        returnValue = F("Bergelchen");
        break;
    }
    case 53335:
    {
        returnValue = F("Bergele");
        break;
    }
    case 53336:
    {
        returnValue = F("Bergeler Str.");
        break;
    }
    case 53337:
    {
        returnValue = F("Bergelerweg");
        break;
    }
    case 53338:
    {
        returnValue = F("Bergeliether Weg");
        break;
    }
    case 53339:
    {
        returnValue = F("Bergeller");
        break;
    }
    case 53340:
    {
        returnValue = F("Bergelmanns Hof");
        break;
    }
    case 53341:
    {
        returnValue = F("Bergeloh");
        break;
    }
    case 53342:
    {
        returnValue = F("Bergelshof");
        break;
    }
    case 53343:
    {
        returnValue = F("Bergelshofer Steig");
        break;
    }
    case 53344:
    {
        returnValue = F("Bergelstr.");
        break;
    }
    case 53345:
    {
        returnValue = F("Bergelweg");
        break;
    }
    case 53346:
    {
        returnValue = F("Bergemannhof");
        break;
    }
    case 53347:
    {
        returnValue = F("Bergen");
        break;
    }
    case 53348:
    {
        returnValue = F("Bergen Hs 4 + 5");
        break;
    }
    case 53349:
    {
        returnValue = F("Bergenacker Weg");
        break;
    }
    case 53350:
    {
        returnValue = F("Bergendahlstr.");
        break;
    }
    case 53351:
    {
        returnValue = F("Bergende");
        break;
    }
    case 53352:
    {
        returnValue = F("Bergendorfer Str.");
        break;
    }
    case 53353:
    {
        returnValue = F("Bergener Str.");
        break;
    }
    case 53354:
    {
        returnValue = F("Bergener Str. Ausbau");
        break;
    }
    case 53355:
    {
        returnValue = F("Bergener Weg");
        break;
    }
    case 53356:
    {
        returnValue = F("Bergenfahrerstr.");
        break;
    }
    case 53357:
    {
        returnValue = F("Bergengruenstr.");
        break;
    }
    case 53358:
    {
        returnValue = F("Bergengruenweg");
        break;
    }
    case 53359:
    {
        returnValue = F("Bergenhöferweg");
        break;
    }
    case 53360:
    {
        returnValue = F("Bergenkamp");
        break;
    }
    case 53361:
    {
        returnValue = F("Bergenring");
        break;
    }
    case 53362:
    {
        returnValue = F("Bergenroder Str.");
        break;
    }
    case 53363:
    {
        returnValue = F("Bergenroder Weg");
        break;
    }
    case 53364:
    {
        returnValue = F("Bergenrot");
        break;
    }
    case 53365:
    {
        returnValue = F("Bergenrothweg");
        break;
    }
    case 53366:
    {
        returnValue = F("Bergens Busch");
        break;
    }
    case 53367:
    {
        returnValue = F("Bergenschneise");
        break;
    }
    case 53368:
    {
        returnValue = F("Bergenstettener Str.");
        break;
    }
    case 53369:
    {
        returnValue = F("Bergenstetter Str.");
        break;
    }
    case 53370:
    {
        returnValue = F("Bergenstetter Weg");
        break;
    }
    case 53371:
    {
        returnValue = F("Bergenstr.");
        break;
    }
    case 53372:
    {
        returnValue = F("Bergentenweg");
        break;
    }
    case 53373:
    {
        returnValue = F("Bergenthal Park");
        break;
    }
    case 53374:
    {
        returnValue = F("Bergenthal-Park");
        break;
    }
    case 53375:
    {
        returnValue = F("Bergenthalstr.");
        break;
    }
    case 53376:
    {
        returnValue = F("Bergenweg");
        break;
    }
    case 53377:
    {
        returnValue = F("Bergenweiler Weg");
        break;
    }
    case 53378:
    {
        returnValue = F("Berger");
        break;
    }
    case 53379:
    {
        returnValue = F("Berger Acker");
        break;
    }
    case 53380:
    {
        returnValue = F("Berger Allee");
        break;
    }
    case 53381:
    {
        returnValue = F("Berger Au");
        break;
    }
    case 53382:
    {
        returnValue = F("Berger Aue");
        break;
    }
    case 53383:
    {
        returnValue = F("Berger Busch");
        break;
    }
    case 53384:
    {
        returnValue = F("Berger Damm");
        break;
    }
    case 53385:
    {
        returnValue = F("Berger Dorfstr.");
        break;
    }
    case 53386:
    {
        returnValue = F("Berger Feld");
        break;
    }
    case 53387:
    {
        returnValue = F("Berger Halde");
        break;
    }
    case 53388:
    {
        returnValue = F("Berger Heide");
        break;
    }
    case 53389:
    {
        returnValue = F("Berger Landstr.");
        break;
    }
    case 53390:
    {
        returnValue = F("Berger Marktplatz");
        break;
    }
    case 53391:
    {
        returnValue = F("Berger Moosweg");
        break;
    }
    case 53392:
    {
        returnValue = F("Berger Steige");
        break;
    }
    case 53393:
    {
        returnValue = F("Berger Str.");
        break;
    }
    case 53394:
    {
        returnValue = F("Berger Vorstadt");
        break;
    }
    case 53395:
    {
        returnValue = F("Berger Weg");
        break;
    }
    case 53396:
    {
        returnValue = F("Berger Weide");
        break;
    }
    case 53397:
    {
        returnValue = F("Berger-Geräumt");
        break;
    }
    case 53398:
    {
        returnValue = F("Berger-Steig-Weg");
        break;
    }
    case 53399:
    {
        returnValue = F("Bergerbitze");
        break;
    }
    case 53400:
    {
        returnValue = F("Bergerbrücke");
        break;
    }
    case 53401:
    {
        returnValue = F("Bergerend");
        break;
    }
    case 53402:
    {
        returnValue = F("Bergerfeld");
        break;
    }
    case 53403:
    {
        returnValue = F("Bergerfeldweg");
        break;
    }
    case 53404:
    {
        returnValue = F("Bergerfurth");
        break;
    }
    case 53405:
    {
        returnValue = F("Bergerfurther Str.");
        break;
    }
    case 53406:
    {
        returnValue = F("Bergerfurthstr.");
        break;
    }
    case 53407:
    {
        returnValue = F("Bergergasse");
        break;
    }
    case 53408:
    {
        returnValue = F("Bergergrundweg");
        break;
    }
    case 53409:
    {
        returnValue = F("Bergergässle");
        break;
    }
    case 53410:
    {
        returnValue = F("Bergerhauser Str.");
        break;
    }
    case 53411:
    {
        returnValue = F("Bergerhof");
        break;
    }
    case 53412:
    {
        returnValue = F("Bergerhofer Str.");
        break;
    }
    case 53413:
    {
        returnValue = F("Bergerhofweg");
        break;
    }
    case 53414:
    {
        returnValue = F("Bergerholz");
        break;
    }
    case 53415:
    {
        returnValue = F("Bergerhöh");
        break;
    }
    case 53416:
    {
        returnValue = F("Bergerkamp");
        break;
    }
    case 53417:
    {
        returnValue = F("Bergerlandstr.");
        break;
    }
    case 53418:
    {
        returnValue = F("Bergermatt");
        break;
    }
    case 53419:
    {
        returnValue = F("Bergermühlsiedlung");
        break;
    }
    case 53420:
    {
        returnValue = F("Bergermühlstr.");
        break;
    }
    case 53421:
    {
        returnValue = F("Bergern");
        break;
    }
    case 53422:
    {
        returnValue = F("Bergerort");
        break;
    }
    case 53423:
    {
        returnValue = F("Bergerortsweg");
        break;
    }
    case 53424:
    {
        returnValue = F("Bergerpark Lichtenstein");
        break;
    }
    case 53425:
    {
        returnValue = F("Bergerplatz");
        break;
    }
    case 53426:
    {
        returnValue = F("Bergerrücken");
        break;
    }
    case 53427:
    {
        returnValue = F("Bergers Kamp");
        break;
    }
    case 53428:
    {
        returnValue = F("Bergerschachtweg");
        break;
    }
    case 53429:
    {
        returnValue = F("Bergersfeld");
        break;
    }
    case 53430:
    {
        returnValue = F("Bergerskamp");
        break;
    }
    case 53431:
    {
        returnValue = F("Bergersteigweg");
        break;
    }
    case 53432:
    {
        returnValue = F("Bergerstr.");
        break;
    }
    case 53433:
    {
        returnValue = F("Bergersweg");
        break;
    }
    case 53434:
    {
        returnValue = F("Bergertorstr.");
        break;
    }
    case 53435:
    {
        returnValue = F("Bergerwaldweg");
        break;
    }
    case 53436:
    {
        returnValue = F("Bergerweg");
        break;
    }
    case 53437:
    {
        returnValue = F("Bergerweidstr.");
        break;
    }
    case 53438:
    {
        returnValue = F("Bergerwiesenweg");
        break;
    }
    case 53439:
    {
        returnValue = F("Bergesanfang");
        break;
    }
    case 53440:
    {
        returnValue = F("Bergesbirken");
        break;
    }
    case 53441:
    {
        returnValue = F("Bergesch");
        break;
    }
    case 53442:
    {
        returnValue = F("Bergesgrund");
        break;
    }
    case 53443:
    {
        returnValue = F("Bergeshang");
        break;
    }
    case 53444:
    {
        returnValue = F("Bergeshöh");
        break;
    }
    case 53445:
    {
        returnValue = F("Bergeshöhe");
        break;
    }
    case 53446:
    {
        returnValue = F("Bergeshöveder Str.");
        break;
    }
    case 53447:
    {
        returnValue = F("Bergeswiese");
        break;
    }
    case 53448:
    {
        returnValue = F("Bergfahrweg");
        break;
    }
    case 53449:
    {
        returnValue = F("Bergfeilerweg");
        break;
    }
    case 53450:
    {
        returnValue = F("Bergfeine");
        break;
    }
    case 53451:
    {
        returnValue = F("Bergfeiner Str.");
        break;
    }
    case 53452:
    {
        returnValue = F("Bergfeld");
        break;
    }
    case 53453:
    {
        returnValue = F("Bergfeld Nord");
        break;
    }
    case 53454:
    {
        returnValue = F("Bergfeld Süd");
        break;
    }
    case 53455:
    {
        returnValue = F("Bergfeldchen");
        break;
    }
    case 53456:
    {
        returnValue = F("Bergfelder Chaussee");
        break;
    }
    case 53457:
    {
        returnValue = F("Bergfelder Hauptstr.");
        break;
    }
    case 53458:
    {
        returnValue = F("Bergfelder Str.");
        break;
    }
    case 53459:
    {
        returnValue = F("Bergfelder Weg");
        break;
    }
    case 53460:
    {
        returnValue = F("Bergfeldsteig");
        break;
    }
    case 53461:
    {
        returnValue = F("Bergfeldstr.");
        break;
    }
    case 53462:
    {
        returnValue = F("Bergfeldweg");
        break;
    }
    case 53463:
    {
        returnValue = F("Bergfelsenweg");
        break;
    }
    case 53464:
    {
        returnValue = F("Bergfestplatz");
        break;
    }
    case 53465:
    {
        returnValue = F("Bergfinkenstr.");
        break;
    }
    case 53466:
    {
        returnValue = F("Bergfinkenweg");
        break;
    }
    case 53467:
    {
        returnValue = F("Bergflagge");
        break;
    }
    case 53468:
    {
        returnValue = F("Bergflur");
        break;
    }
    case 53469:
    {
        returnValue = F("Bergflußweg");
        break;
    }
    case 53470:
    {
        returnValue = F("Bergfrede");
        break;
    }
    case 53471:
    {
        returnValue = F("Bergfreiheit");
        break;
    }
    case 53472:
    {
        returnValue = F("Bergfreiheiter Str.");
        break;
    }
    case 53473:
    {
        returnValue = F("Bergfried");
        break;
    }
    case 53474:
    {
        returnValue = F("Bergfried-Park");
        break;
    }
    case 53475:
    {
        returnValue = F("Bergfriede");
        break;
    }
    case 53476:
    {
        returnValue = F("Bergfrieden");
        break;
    }
    case 53477:
    {
        returnValue = F("Bergfriedenstr.");
        break;
    }
    case 53478:
    {
        returnValue = F("Bergfriedenweg");
        break;
    }
    case 53479:
    {
        returnValue = F("Bergfrieder Weg");
        break;
    }
    case 53480:
    {
        returnValue = F("Bergfriederstr.");
        break;
    }
    case 53481:
    {
        returnValue = F("Bergfriedhof");
        break;
    }
    case 53482:
    {
        returnValue = F("Bergfriedstr.");
        break;
    }
    case 53483:
    {
        returnValue = F("Bergfriedweg");
        break;
    }
    case 53484:
    {
        returnValue = F("Bergfußsteig");
        break;
    }
    case 53485:
    {
        returnValue = F("Berggalle");
        break;
    }
    case 53486:
    {
        returnValue = F("Berggarten");
        break;
    }
    case 53487:
    {
        returnValue = F("Berggartenstr.");
        break;
    }
    case 53488:
    {
        returnValue = F("Berggartenweg");
        break;
    }
    case 53489:
    {
        returnValue = F("Berggasse");
        break;
    }
    case 53490:
    {
        returnValue = F("Berggassenweg");
        break;
    }
    case 53491:
    {
        returnValue = F("Berggassl");
        break;
    }
    case 53492:
    {
        returnValue = F("Berggate");
        break;
    }
    case 53493:
    {
        returnValue = F("Berggeiststr.");
        break;
    }
    case 53494:
    {
        returnValue = F("Berggewann");
        break;
    }
    case 53495:
    {
        returnValue = F("Berggießhübeler Str.");
        break;
    }
    case 53496:
    {
        returnValue = F("Berggoldstr.");
        break;
    }
    case 53497:
    {
        returnValue = F("Berggrabenweg");
        break;
    }
    case 53498:
    {
        returnValue = F("Berggrenze");
        break;
    }
    case 53499:
    {
        returnValue = F("Berggrube");
        break;
    }
    case 53500:
    {
        returnValue = F("Berggrubenweg");
        break;
    }
    case 53501:
    {
        returnValue = F("Berggrund");
        break;
    }
    case 53502:
    {
        returnValue = F("Berggärten");
        break;
    }
    case 53503:
    {
        returnValue = F("Berggärtenstr.");
        break;
    }
    case 53504:
    {
        returnValue = F("Berggässle");
        break;
    }
    case 53505:
    {
        returnValue = F("Berggäßchen");
        break;
    }
    case 53506:
    {
        returnValue = F("Berggäßle");
        break;
    }
    case 53507:
    {
        returnValue = F("Berggäßlein");
        break;
    }
    case 53508:
    {
        returnValue = F("Berghagen");
        break;
    }
    case 53509:
    {
        returnValue = F("Berghalde");
        break;
    }
    case 53510:
    {
        returnValue = F("Berghaldenweg");
        break;
    }
    case 53511:
    {
        returnValue = F("Berghaldeweg");
        break;
    }
    case 53512:
    {
        returnValue = F("Berghaltern");
        break;
    }
    case 53513:
    {
        returnValue = F("Bergham");
        break;
    }
    case 53514:
    {
        returnValue = F("Berghamberg");
        break;
    }
    case 53515:
    {
        returnValue = F("Berghamer Str.");
        break;
    }
    case 53516:
    {
        returnValue = F("Berghamer Weg");
        break;
    }
    case 53517:
    {
        returnValue = F("Berghamerweg");
        break;
    }
    case 53518:
    {
        returnValue = F("Berghammerstr.");
        break;
    }
    case 53519:
    {
        returnValue = F("Berghammerweg");
        break;
    }
    case 53520:
    {
        returnValue = F("Berghamstr.");
        break;
    }
    case 53521:
    {
        returnValue = F("Berghamsweg");
        break;
    }
    case 53522:
    {
        returnValue = F("Berghang");
        break;
    }
    case 53523:
    {
        returnValue = F("Berghangstr.");
        break;
    }
    case 53524:
    {
        returnValue = F("Berghangweg");
        break;
    }
    case 53525:
    {
        returnValue = F("Berghardt");
        break;
    }
    case 53526:
    {
        returnValue = F("Berghaselbacher Str.");
        break;
    }
    case 53527:
    {
        returnValue = F("Berghauptener Str.");
        break;
    }
    case 53528:
    {
        returnValue = F("Berghaus");
        break;
    }
    case 53529:
    {
        returnValue = F("Berghausen");
        break;
    }
    case 53530:
    {
        returnValue = F("Berghausener Str.");
        break;
    }
    case 53531:
    {
        returnValue = F("Berghausener Weg");
        break;
    }
    case 53532:
    {
        returnValue = F("Berghauser Bucht");
        break;
    }
    case 53533:
    {
        returnValue = F("Berghauser Grenzweg");
        break;
    }
    case 53534:
    {
        returnValue = F("Berghauser Str.");
        break;
    }
    case 53535:
    {
        returnValue = F("Berghauser Weg");
        break;
    }
    case 53536:
    {
        returnValue = F("Berghauserstr.");
        break;
    }
    case 53537:
    {
        returnValue = F("Berghausring");
        break;
    }
    case 53538:
    {
        returnValue = F("Berghausstr.");
        break;
    }
    case 53539:
    {
        returnValue = F("Berghausweg");
        break;
    }
    case 53540:
    {
        returnValue = F("Berghauweg");
        break;
    }
    case 53541:
    {
        returnValue = F("Berghecke");
        break;
    }
    case 53542:
    {
        returnValue = F("Bergheckenweg");
        break;
    }
    case 53543:
    {
        returnValue = F("Bergheide");
        break;
    }
    case 53544:
    {
        returnValue = F("Bergheider Str.");
        break;
    }
    case 53545:
    {
        returnValue = F("Bergheideweg");
        break;
    }
    case 53546:
    {
        returnValue = F("Bergheim");
        break;
    }
    case 53547:
    {
        returnValue = F("Bergheim Passage");
        break;
    }
    case 53548:
    {
        returnValue = F("Bergheimer Bruch");
        break;
    }
    case 53549:
    {
        returnValue = F("Bergheimer Grund");
        break;
    }
    case 53550:
    {
        returnValue = F("Bergheimer Randweg");
        break;
    }
    case 53551:
    {
        returnValue = F("Bergheimer Str.");
        break;
    }
    case 53552:
    {
        returnValue = F("Bergheimer Weg");
        break;
    }
    case 53553:
    {
        returnValue = F("Bergheimstr.");
        break;
    }
    case 53554:
    {
        returnValue = F("Berghey");
        break;
    }
    case 53555:
    {
        returnValue = F("Berghof");
        break;
    }
    case 53556:
    {
        returnValue = F("Berghof Weiche");
        break;
    }
    case 53557:
    {
        returnValue = F("Berghofbrunnensträßle");
        break;
    }
    case 53558:
    {
        returnValue = F("Berghofener Steig");
        break;
    }
    case 53559:
    {
        returnValue = F("Berghofener Str.");
        break;
    }
    case 53560:
    {
        returnValue = F("Berghofenweg");
        break;
    }
    case 53561:
    {
        returnValue = F("Berghofer Heide");
        break;
    }
    case 53562:
    {
        returnValue = F("Berghofer Str.");
        break;
    }
    case 53563:
    {
        returnValue = F("Berghofer Weg");
        break;
    }
    case 53564:
    {
        returnValue = F("Berghoffstr.");
        break;
    }
    case 53565:
    {
        returnValue = F("Berghoffsweg");
        break;
    }
    case 53566:
    {
        returnValue = F("Berghofring");
        break;
    }
    case 53567:
    {
        returnValue = F("Berghofsiedlung");
        break;
    }
    case 53568:
    {
        returnValue = F("Berghofstr.");
        break;
    }
    case 53569:
    {
        returnValue = F("Berghofweg");
        break;
    }
    case 53570:
    {
        returnValue = F("Berghohl");
        break;
    }
    case 53571:
    {
        returnValue = F("Berghol");
        break;
    }
    case 53572:
    {
        returnValue = F("Bergholer Str.");
        break;
    }
    case 53573:
    {
        returnValue = F("Bergholm");
        break;
    }
    case 53574:
    {
        returnValue = F("Bergholz");
        break;
    }
    case 53575:
    {
        returnValue = F("Bergholzer Damm");
        break;
    }
    case 53576:
    {
        returnValue = F("Bergholzer Str.");
        break;
    }
    case 53577:
    {
        returnValue = F("Bergholzstr.");
        break;
    }
    case 53578:
    {
        returnValue = F("Bergholzweg");
        break;
    }
    case 53579:
    {
        returnValue = F("Berghoop");
        break;
    }
    case 53580:
    {
        returnValue = F("Berghop");
        break;
    }
    case 53581:
    {
        returnValue = F("Berghorn");
        break;
    }
    case 53582:
    {
        returnValue = F("Berghornfeld");
        break;
    }
    case 53583:
    {
        returnValue = F("Berghornweg");
        break;
    }
    case 53584:
    {
        returnValue = F("Berghorster Weg");
        break;
    }
    case 53585:
    {
        returnValue = F("Berghovener Str.");
        break;
    }
    case 53586:
    {
        returnValue = F("Berghover Weg");
        break;
    }
    case 53587:
    {
        returnValue = F("Berghsweg");
        break;
    }
    case 53588:
    {
        returnValue = F("Berghulweg");
        break;
    }
    case 53589:
    {
        returnValue = F("Berghutweg");
        break;
    }
    case 53590:
    {
        returnValue = F("Berghälde");
        break;
    }
    case 53591:
    {
        returnValue = F("Berghäuerweg");
        break;
    }
    case 53592:
    {
        returnValue = F("Berghäuleweg");
        break;
    }
    case 53593:
    {
        returnValue = F("Berghäuschen-Trail");
        break;
    }
    case 53594:
    {
        returnValue = F("Berghäuschensweg");
        break;
    }
    case 53595:
    {
        returnValue = F("Berghäuschenweg");
        break;
    }
    case 53596:
    {
        returnValue = F("Berghäuser");
        break;
    }
    case 53597:
    {
        returnValue = F("Berghäuser Str.");
        break;
    }
    case 53598:
    {
        returnValue = F("Berghäuser Weg");
        break;
    }
    case 53599:
    {
        returnValue = F("Berghäuserstr.");
        break;
    }
    case 53600:
    {
        returnValue = F("Berghäuserweg");
        break;
    }
    case 53601:
    {
        returnValue = F("Berghäusl");
        break;
    }
    case 53602:
    {
        returnValue = F("Berghäuslesweg");
        break;
    }
    case 53603:
    {
        returnValue = F("Berghäusleweg");
        break;
    }
    case 53604:
    {
        returnValue = F("Berghöfe");
        break;
    }
    case 53605:
    {
        returnValue = F("Berghöfen");
        break;
    }
    case 53606:
    {
        returnValue = F("Berghöfer Str.");
        break;
    }
    case 53607:
    {
        returnValue = F("Berghöferfeld");
        break;
    }
    case 53608:
    {
        returnValue = F("Berghöferstr.");
        break;
    }
    case 53609:
    {
        returnValue = F("Berghöhe");
        break;
    }
    case 53610:
    {
        returnValue = F("Berghölzchen");
        break;
    }
    case 53611:
    {
        returnValue = F("Berghölzleweg");
        break;
    }
    case 53612:
    {
        returnValue = F("Berghöve");
        break;
    }
    case 53613:
    {
        returnValue = F("Berghügel");
        break;
    }
    case 53614:
    {
        returnValue = F("Berghüler Weg");
        break;
    }
    case 53615:
    {
        returnValue = F("Berghütte");
        break;
    }
    case 53616:
    {
        returnValue = F("Berginger Str.");
        break;
    }
    case 53617:
    {
        returnValue = F("Bergisch Born");
        break;
    }
    case 53618:
    {
        returnValue = F("Bergisch Gladbacher Str.");
        break;
    }
    case 53619:
    {
        returnValue = F("Bergische Allee");
        break;
    }
    case 53620:
    {
        returnValue = F("Bergische Gasse");
        break;
    }
    case 53621:
    {
        returnValue = F("Bergische Hufe");
        break;
    }
    case 53622:
    {
        returnValue = F("Bergische Landstr.");
        break;
    }
    case 53623:
    {
        returnValue = F("Bergische Str.");
        break;
    }
    case 53624:
    {
        returnValue = F("Bergischer Ring");
        break;
    }
    case 53625:
    {
        returnValue = F("Bergisches Plateau");
        break;
    }
    case 53626:
    {
        returnValue = F("Bergisdorfer Str.");
        break;
    }
    case 53627:
    {
        returnValue = F("Bergisdorfer Weg");
        break;
    }
    case 53628:
    {
        returnValue = F("Bergiselstr.");
        break;
    }
    case 53629:
    {
        returnValue = F("Bergiusstr.");
        break;
    }
    case 53630:
    {
        returnValue = F("Bergiusweg");
        break;
    }
    case 53631:
    {
        returnValue = F("Bergjans Weg");
        break;
    }
    case 53632:
    {
        returnValue = F("Bergkamener Str.");
        break;
    }
    case 53633:
    {
        returnValue = F("Bergkamm");
        break;
    }
    case 53634:
    {
        returnValue = F("Bergkamp");
        break;
    }
    case 53635:
    {
        returnValue = F("Bergkampstr.");
        break;
    }
    case 53636:
    {
        returnValue = F("Bergkampsweg");
        break;
    }
    case 53637:
    {
        returnValue = F("Bergkellergasse");
        break;
    }
    case 53638:
    {
        returnValue = F("Bergkellerweg");
        break;
    }
    case 53639:
    {
        returnValue = F("Bergkiefernstr.");
        break;
    }
    case 53640:
    {
        returnValue = F("Bergkiefernweg");
        break;
    }
    case 53641:
    {
        returnValue = F("Bergkieferweg");
        break;
    }
    case 53642:
    {
        returnValue = F("Bergkirchener Str.");
        break;
    }
    case 53643:
    {
        returnValue = F("Bergkirchenweg");
        break;
    }
    case 53644:
    {
        returnValue = F("Bergkirchlweg");
        break;
    }
    case 53645:
    {
        returnValue = F("Bergklinge");
        break;
    }
    case 53646:
    {
        returnValue = F("Bergkloster");
        break;
    }
    case 53647:
    {
        returnValue = F("Bergknappenstr.");
        break;
    }
    case 53648:
    {
        returnValue = F("Bergknappenweg");
        break;
    }
    case 53649:
    {
        returnValue = F("Bergknappstr.");
        break;
    }
    case 53650:
    {
        returnValue = F("Bergknick");
        break;
    }
    case 53651:
    {
        returnValue = F("Bergkolonie");
        break;
    }
    case 53652:
    {
        returnValue = F("Bergkopfstr.");
        break;
    }
    case 53653:
    {
        returnValue = F("Bergkopfweg");
        break;
    }
    case 53654:
    {
        returnValue = F("Bergkoppel");
        break;
    }
    case 53655:
    {
        returnValue = F("Bergkoppelstr.");
        break;
    }
    case 53656:
    {
        returnValue = F("Bergkreuzweg");
        break;
    }
    case 53657:
    {
        returnValue = F("Bergkristallstr.");
        break;
    }
    case 53658:
    {
        returnValue = F("Bergkrug");
        break;
    }
    case 53659:
    {
        returnValue = F("Bergkuhle");
        break;
    }
    case 53660:
    {
        returnValue = F("Bergkurpark");
        break;
    }
    case 53661:
    {
        returnValue = F("Bergkämpe");
        break;
    }
    case 53662:
    {
        returnValue = F("Bergl");
        break;
    }
    case 53663:
    {
        returnValue = F("Bergl-Mitte");
        break;
    }
    case 53664:
    {
        returnValue = F("Bergla");
        break;
    }
    case 53665:
    {
        returnValue = F("Berglackerweg");
        break;
    }
    case 53666:
    {
        returnValue = F("Berglageweg");
        break;
    }
    case 53667:
    {
        returnValue = F("Bergland");
        break;
    }
    case 53668:
    {
        returnValue = F("Berglandstr.");
        break;
    }
    case 53669:
    {
        returnValue = F("Berglangenbacher Str.");
        break;
    }
    case 53670:
    {
        returnValue = F("Bergle");
        break;
    }
    case 53671:
    {
        returnValue = F("Bergle Weg");
        break;
    }
    case 53672:
    {
        returnValue = F("Bergle-Gleichenweg");
        break;
    }
    case 53673:
    {
        returnValue = F("Berglehne");
        break;
    }
    case 53674:
    {
        returnValue = F("Berglein");
        break;
    }
    case 53675:
    {
        returnValue = F("Bergleiner Weg");
        break;
    }
    case 53676:
    {
        returnValue = F("Bergleinstr.");
        break;
    }
    case 53677:
    {
        returnValue = F("Bergleite");
        break;
    }
    case 53678:
    {
        returnValue = F("Berglenstr.");
        break;
    }
    case 53679:
    {
        returnValue = F("Berglerner Str.");
        break;
    }
    case 53680:
    {
        returnValue = F("Berglerschleife");
        break;
    }
    case 53681:
    {
        returnValue = F("Bergleseichenweg");
        break;
    }
    case 53682:
    {
        returnValue = F("Berglesfeld");
        break;
    }
    case 53683:
    {
        returnValue = F("Berglestr.");
        break;
    }
    case 53684:
    {
        returnValue = F("Berglesweg");
        break;
    }
    case 53685:
    {
        returnValue = F("Bergleweg");
        break;
    }
    case 53686:
    {
        returnValue = F("Berglichter Weg");
        break;
    }
    case 53687:
    {
        returnValue = F("Berglichweg");
        break;
    }
    case 53688:
    {
        returnValue = F("Berglindenweg");
        break;
    }
    case 53689:
    {
        returnValue = F("Berglinie");
        break;
    }
    case 53690:
    {
        returnValue = F("Berglochstr.");
        break;
    }
    case 53691:
    {
        returnValue = F("Berglochweg");
        break;
    }
    case 53692:
    {
        returnValue = F("Berglohweg");
        break;
    }
    case 53693:
    {
        returnValue = F("Berglstr.");
        break;
    }
    case 53694:
    {
        returnValue = F("Bergluch");
        break;
    }
    case 53695:
    {
        returnValue = F("Bergluck");
        break;
    }
    case 53696:
    {
        returnValue = F("Bergluftstr.");
        break;
    }
    case 53697:
    {
        returnValue = F("Berglust");
        break;
    }
    case 53698:
    {
        returnValue = F("Berglücke");
        break;
    }
    case 53699:
    {
        returnValue = F("Bergmangstr.");
        break;
    }
    case 53700:
    {
        returnValue = F("Bergmann");
        break;
    }
    case 53701:
    {
        returnValue = F("Bergmann-Michel-Str.");
        break;
    }
    case 53702:
    {
        returnValue = F("Bergmann-Michel-Weg");
        break;
    }
    case 53703:
    {
        returnValue = F("Bergmanns Garten");
        break;
    }
    case 53704:
    {
        returnValue = F("Bergmanns Hof");
        break;
    }
    case 53705:
    {
        returnValue = F("Bergmanns Trost");
        break;
    }
    case 53706:
    {
        returnValue = F("Bergmanns Weg");
        break;
    }
    case 53707:
    {
        returnValue = F("Bergmannsallee");
        break;
    }
    case 53708:
    {
        returnValue = F("Bergmannsbauern-Weg");
        break;
    }
    case 53709:
    {
        returnValue = F("Bergmannsbusch");
        break;
    }
    case 53710:
    {
        returnValue = F("Bergmannscher Weg");
        break;
    }
    case 53711:
    {
        returnValue = F("Bergmannseck");
        break;
    }
    case 53712:
    {
        returnValue = F("Bergmannsgasse");
        break;
    }
    case 53713:
    {
        returnValue = F("Bergmannsgleie");
        break;
    }
    case 53714:
    {
        returnValue = F("Bergmannsglück");
        break;
    }
    case 53715:
    {
        returnValue = F("Bergmannsglückstr.");
        break;
    }
    case 53716:
    {
        returnValue = F("Bergmannsgrab Segen-Gottes-Schacht");
        break;
    }
    case 53717:
    {
        returnValue = F("Bergmannsgrund");
        break;
    }
    case 53718:
    {
        returnValue = F("Bergmannsheil");
        break;
    }
    case 53719:
    {
        returnValue = F("Bergmannshof");
        break;
    }
    case 53720:
    {
        returnValue = F("Bergmannsiedlung");
        break;
    }
    case 53721:
    {
        returnValue = F("Bergmannskamp");
        break;
    }
    case 53722:
    {
        returnValue = F("Bergmannsklause");
        break;
    }
    case 53723:
    {
        returnValue = F("Bergmannspfad");
        break;
    }
    case 53724:
    {
        returnValue = F("Bergmannsplatz");
        break;
    }
    case 53725:
    {
        returnValue = F("Bergmannsring");
        break;
    }
    case 53726:
    {
        returnValue = F("Bergmannsruh");
        break;
    }
    case 53727:
    {
        returnValue = F("Bergmannssiedlung");
        break;
    }
    case 53728:
    {
        returnValue = F("Bergmannsstieg");
        break;
    }
    case 53729:
    {
        returnValue = F("Bergmannsstr.");
        break;
    }
    case 53730:
    {
        returnValue = F("Bergmannsteig");
        break;
    }
    case 53731:
    {
        returnValue = F("Bergmannstieg");
        break;
    }
    case 53732:
    {
        returnValue = F("Bergmannstr.");
        break;
    }
    case 53733:
    {
        returnValue = F("Bergmannsweg");
        break;
    }
    case 53734:
    {
        returnValue = F("Bergmannsweg (1)");
        break;
    }
    case 53735:
    {
        returnValue = F("Bergmannsweg (2)");
        break;
    }
    case 53736:
    {
        returnValue = F("Bergmannswinkel");
        break;
    }
    case 53737:
    {
        returnValue = F("Bergmannweg");
        break;
    }
    case 53738:
    {
        returnValue = F("Bergmark");
        break;
    }
    case 53739:
    {
        returnValue = F("Bergmattinger Weg");
        break;
    }
    case 53740:
    {
        returnValue = F("Bergmecke");
        break;
    }
    case 53741:
    {
        returnValue = F("Bergmeierstr.");
        break;
    }
    case 53742:
    {
        returnValue = F("Bergmeister-Stoelzl-Str.");
        break;
    }
    case 53743:
    {
        returnValue = F("Bergmeistergasse");
        break;
    }
    case 53744:
    {
        returnValue = F("Bergmeisterstr.");
        break;
    }
    case 53745:
    {
        returnValue = F("Bergmeisterstück");
        break;
    }
    case 53746:
    {
        returnValue = F("Bergmeisterweg");
        break;
    }
    case 53747:
    {
        returnValue = F("Bergmerfeld");
        break;
    }
    case 53748:
    {
        returnValue = F("Bergmeyerspad");
        break;
    }
    case 53749:
    {
        returnValue = F("Bergmeyersweg");
        break;
    }
    case 53750:
    {
        returnValue = F("Bergmillerstr.");
        break;
    }
    case 53751:
    {
        returnValue = F("Bergmoor");
        break;
    }
    case 53752:
    {
        returnValue = F("Bergmoosstr.");
        break;
    }
    case 53753:
    {
        returnValue = F("Bergmoserstr.");
        break;
    }
    case 53754:
    {
        returnValue = F("Bergmühle");
        break;
    }
    case 53755:
    {
        returnValue = F("Bergmühlenstr.");
        break;
    }
    case 53756:
    {
        returnValue = F("Bergmühlenweg");
        break;
    }
    case 53757:
    {
        returnValue = F("Bergmühlgasse");
        break;
    }
    case 53758:
    {
        returnValue = F("Bergmühlweg");
        break;
    }
    case 53759:
    {
        returnValue = F("Bergmüller Str.");
        break;
    }
    case 53760:
    {
        returnValue = F("Bergmüllerstr.");
        break;
    }
    case 53761:
    {
        returnValue = F("Bergmüllerweg");
        break;
    }
    case 53762:
    {
        returnValue = F("Bergnerweg");
        break;
    }
    case 53763:
    {
        returnValue = F("Bergnetsreuth");
        break;
    }
    case 53764:
    {
        returnValue = F("Bergpark");
        break;
    }
    case 53765:
    {
        returnValue = F("Bergpark Hackenberg");
        break;
    }
    case 53766:
    {
        returnValue = F("Bergpark Wilhelmshöhe");
        break;
    }
    case 53767:
    {
        returnValue = F("Bergpfad");
        break;
    }
    case 53768:
    {
        returnValue = F("Bergpfad Gehlberg");
        break;
    }
    case 53769:
    {
        returnValue = F("Bergpflege");
        break;
    }
    case 53770:
    {
        returnValue = F("Bergplatz");
        break;
    }
    case 53771:
    {
        returnValue = F("Bergquellweg");
        break;
    }
    case 53772:
    {
        returnValue = F("Bergquerweg");
        break;
    }
    case 53773:
    {
        returnValue = F("Bergrade");
        break;
    }
    case 53774:
    {
        returnValue = F("Bergrader Weg");
        break;
    }
    case 53775:
    {
        returnValue = F("Bergrain");
        break;
    }
    case 53776:
    {
        returnValue = F("Bergrainstr.");
        break;
    }
    case 53777:
    {
        returnValue = F("Bergrat-Backs-Str.");
        break;
    }
    case 53778:
    {
        returnValue = F("Bergrat-Bilfinger-Str.");
        break;
    }
    case 53779:
    {
        returnValue = F("Bergrat-Koch-Str.");
        break;
    }
    case 53780:
    {
        returnValue = F("Bergrat-Mahr-Str.");
        break;
    }
    case 53781:
    {
        returnValue = F("Bergrat-Stutz-Str.");
        break;
    }
    case 53782:
    {
        returnValue = F("Bergrat-Voigt-Str.");
        break;
    }
    case 53783:
    {
        returnValue = F("Bergrather Feld");
        break;
    }
    case 53784:
    {
        returnValue = F("Bergrather Str.");
        break;
    }
    case 53785:
    {
        returnValue = F("Bergrathstr.");
        break;
    }
    case 53786:
    {
        returnValue = F("Bergredder");
        break;
    }
    case 53787:
    {
        returnValue = F("Bergrehme");
        break;
    }
    case 53788:
    {
        returnValue = F("Bergreichensteiner Str.");
        break;
    }
    case 53789:
    {
        returnValue = F("Bergreichensteinstr.");
        break;
    }
    case 53790:
    {
        returnValue = F("Bergrheinfelder Str.");
        break;
    }
    case 53791:
    {
        returnValue = F("Bergrheinfelder Weg");
        break;
    }
    case 53792:
    {
        returnValue = F("Bergrieks Kamp");
        break;
    }
    case 53793:
    {
        returnValue = F("Bergring");
        break;
    }
    case 53794:
    {
        returnValue = F("Bergringweg");
        break;
    }
    case 53795:
    {
        returnValue = F("Bergrothenfelser Str.");
        break;
    }
    case 53796:
    {
        returnValue = F("Bergrundstr.");
        break;
    }
    case 53797:
    {
        returnValue = F("Bergschattenweg");
        break;
    }
    case 53798:
    {
        returnValue = F("Bergschenkenweg");
        break;
    }
    case 53799:
    {
        returnValue = F("Bergschenweg");
        break;
    }
    case 53800:
    {
        returnValue = F("Bergschiffmühle");
        break;
    }
    case 53801:
    {
        returnValue = F("Bergschlagsweg");
        break;
    }
    case 53802:
    {
        returnValue = F("Bergschlagweg");
        break;
    }
    case 53803:
    {
        returnValue = F("Bergschlohweg");
        break;
    }
    case 53804:
    {
        returnValue = F("Bergschläg");
        break;
    }
    case 53805:
    {
        returnValue = F("Bergschlösschen");
        break;
    }
    case 53806:
    {
        returnValue = F("Bergschlösschenweg");
        break;
    }
    case 53807:
    {
        returnValue = F("Bergschlößchenweg");
        break;
    }
    case 53808:
    {
        returnValue = F("Bergschlößlweg");
        break;
    }
    case 53809:
    {
        returnValue = F("Bergschmiedestr.");
        break;
    }
    case 53810:
    {
        returnValue = F("Bergschneider Ring");
        break;
    }
    case 53811:
    {
        returnValue = F("Bergschneider Str.");
        break;
    }
    case 53812:
    {
        returnValue = F("Bergschneiderweg");
        break;
    }
    case 53813:
    {
        returnValue = F("Bergschneise");
        break;
    }
    case 53814:
    {
        returnValue = F("Bergschänke");
        break;
    }
    case 53815:
    {
        returnValue = F("Bergsdorf");
        break;
    }
    case 53816:
    {
        returnValue = F("Bergsdorfer Bahnhofstr.");
        break;
    }
    case 53817:
    {
        returnValue = F("Bergsdorfer Damm");
        break;
    }
    case 53818:
    {
        returnValue = F("Bergsdorfer Dorfstr.");
        break;
    }
    case 53819:
    {
        returnValue = F("Bergsdorfer Str.");
        break;
    }
    case 53820:
    {
        returnValue = F("Bergsdorfer Weg");
        break;
    }
    case 53821:
    {
        returnValue = F("Bergseebrücke");
        break;
    }
    case 53822:
    {
        returnValue = F("Bergseehof");
        break;
    }
    case 53823:
    {
        returnValue = F("Bergseestr.");
        break;
    }
    case 53824:
    {
        returnValue = F("Bergsegen");
        break;
    }
    case 53825:
    {
        returnValue = F("Bergseite");
        break;
    }
    case 53826:
    {
        returnValue = F("Bergseitenstr.");
        break;
    }
    case 53827:
    {
        returnValue = F("Bergshohl");
        break;
    }
    case 53828:
    {
        returnValue = F("Bergshäuser Str.");
        break;
    }
    case 53829:
    {
        returnValue = F("Bergsiedlung");
        break;
    }
    case 53830:
    {
        returnValue = F("Bergsiefen");
        break;
    }
    case 53831:
    {
        returnValue = F("Bergsohle");
        break;
    }
    case 53832:
    {
        returnValue = F("Bergsoll");
        break;
    }
    case 53833:
    {
        returnValue = F("Bergstadt");
        break;
    }
    case 53834:
    {
        returnValue = F("Bergstadt-Mies-Weg");
        break;
    }
    case 53835:
    {
        returnValue = F("Bergstadtblick");
        break;
    }
    case 53836:
    {
        returnValue = F("Bergstedtstr.");
        break;
    }
    case 53837:
    {
        returnValue = F("Bergsteg");
        break;
    }
    case 53838:
    {
        returnValue = F("Bergstege");
        break;
    }
    case 53839:
    {
        returnValue = F("Bergsteig");
        break;
    }
    case 53840:
    {
        returnValue = F("Bergsteige");
        break;
    }
    case 53841:
    {
        returnValue = F("Bergsteigerpromenade");
        break;
    }
    case 53842:
    {
        returnValue = F("Bergsteile");
        break;
    }
    case 53843:
    {
        returnValue = F("Bergsteiner Str.");
        break;
    }
    case 53844:
    {
        returnValue = F("Bergsteinstr.");
        break;
    }
    case 53845:
    {
        returnValue = F("Bergsteinweg");
        break;
    }
    case 53846:
    {
        returnValue = F("Bergstetten");
        break;
    }
    case 53847:
    {
        returnValue = F("Bergstettener Weg");
        break;
    }
    case 53848:
    {
        returnValue = F("Bergstieg");
        break;
    }
    case 53849:
    {
        returnValue = F("Bergstiege");
        break;
    }
    case 53850:
    {
        returnValue = F("Bergstiftsgasse");
        break;
    }
    case 53851:
    {
        returnValue = F("Bergstorf");
        break;
    }
    case 53852:
    {
        returnValue = F("Bergstorfer Weg");
        break;
    }
    case 53853:
    {
        returnValue = F("Bergstr.");
        break;
    }
    case 53854:
    {
        returnValue = F("Bergstr. Abberode");
        break;
    }
    case 53855:
    {
        returnValue = F("Bergstr. II");
        break;
    }
    case 53856:
    {
        returnValue = F("Bergstr. Nord");
        break;
    }
    case 53857:
    {
        returnValue = F("Bergstr. Süd");
        break;
    }
    case 53858:
    {
        returnValue = F("Bergstr. Vatterode");
        break;
    }
    case 53859:
    {
        returnValue = F("Bergstr.nweg");
        break;
    }
    case 53860:
    {
        returnValue = F("Bergstr.r Weg");
        break;
    }
    case 53861:
    {
        returnValue = F("Bergstrang");
        break;
    }
    case 53862:
    {
        returnValue = F("Bergstrasse");
        break;
    }
    case 53863:
    {
        returnValue = F("Bergstrassl");
        break;
    }
    case 53864:
    {
        returnValue = F("Bergstruper Str.");
        break;
    }
    case 53865:
    {
        returnValue = F("Bergsträßer Weg");
        break;
    }
    case 53866:
    {
        returnValue = F("Bergsträßle");
        break;
    }
    case 53867:
    {
        returnValue = F("Bergstrücken");
        break;
    }
    case 53868:
    {
        returnValue = F("Bergstätter Str.");
        break;
    }
    case 53869:
    {
        returnValue = F("Bergstückenweg");
        break;
    }
    case 53870:
    {
        returnValue = F("Bergswick");
        break;
    }
    case 53871:
    {
        returnValue = F("Bergswicker Str.");
        break;
    }
    case 53872:
    {
        returnValue = F("Bergtagweg");
        break;
    }
    case 53873:
    {
        returnValue = F("Bergtal");
        break;
    }
    case 53874:
    {
        returnValue = F("Bergteilweg");
        break;
    }
    case 53875:
    {
        returnValue = F("Bergtheimer Str.");
        break;
    }
    case 53876:
    {
        returnValue = F("Bergtheimer Weg");
        break;
    }
    case 53877:
    {
        returnValue = F("Bergtor");
        break;
    }
    case 53878:
    {
        returnValue = F("Bergtorstr.");
        break;
    }
    case 53879:
    {
        returnValue = F("Bergtorweg");
        break;
    }
    case 53880:
    {
        returnValue = F("Bergtrift");
        break;
    }
    case 53881:
    {
        returnValue = F("Bergtwiete");
        break;
    }
    case 53882:
    {
        returnValue = F("Bergulmenweg");
        break;
    }
    case 53883:
    {
        returnValue = F("Bergumer Str.");
        break;
    }
    case 53884:
    {
        returnValue = F("Bergvennenweg");
        break;
    }
    case 53885:
    {
        returnValue = F("Bergviertel");
        break;
    }
    case 53886:
    {
        returnValue = F("Bergwachtweg");
        break;
    }
    case 53887:
    {
        returnValue = F("Bergwaldanger");
        break;
    }
    case 53888:
    {
        returnValue = F("Bergwaldbühne");
        break;
    }
    case 53889:
    {
        returnValue = F("Bergwalder Weg");
        break;
    }
    case 53890:
    {
        returnValue = F("Bergwaldsteige");
        break;
    }
    case 53891:
    {
        returnValue = F("Bergwaldstr.");
        break;
    }
    case 53892:
    {
        returnValue = F("Bergwaldsträßle");
        break;
    }
    case 53893:
    {
        returnValue = F("Bergwaldweg");
        break;
    }
    case 53894:
    {
        returnValue = F("Bergwandstr.");
        break;
    }
    case 53895:
    {
        returnValue = F("Bergwasenstr.");
        break;
    }
    case 53896:
    {
        returnValue = F("Bergweberstr.");
        break;
    }
    case 53897:
    {
        returnValue = F("Bergweg");
        break;
    }
    case 53898:
    {
        returnValue = F("Bergwegle");
        break;
    }
    case 53899:
    {
        returnValue = F("Bergweide");
        break;
    }
    case 53900:
    {
        returnValue = F("Bergweilerstr.");
        break;
    }
    case 53901:
    {
        returnValue = F("Bergweilerweg");
        break;
    }
    case 53902:
    {
        returnValue = F("Bergwende");
        break;
    }
    case 53903:
    {
        returnValue = F("Bergwerg");
        break;
    }
    case 53904:
    {
        returnValue = F("Bergwerk");
        break;
    }
    case 53905:
    {
        returnValue = F("Bergwerksgasse");
        break;
    }
    case 53906:
    {
        returnValue = F("Bergwerksring");
        break;
    }
    case 53907:
    {
        returnValue = F("Bergwerksstr.");
        break;
    }
    case 53908:
    {
        returnValue = F("Bergwerkstr.");
        break;
    }
    case 53909:
    {
        returnValue = F("Bergwerksweg");
        break;
    }
    case 53910:
    {
        returnValue = F("Bergwerkweg");
        break;
    }
    case 53911:
    {
        returnValue = F("Bergwies");
        break;
    }
    case 53912:
    {
        returnValue = F("Bergwiese");
        break;
    }
    case 53913:
    {
        returnValue = F("Bergwiesen");
        break;
    }
    case 53914:
    {
        returnValue = F("Bergwiesen-Lehrpfad");
        break;
    }
    case 53915:
    {
        returnValue = F("Bergwiesenstr.");
        break;
    }
    case 53916:
    {
        returnValue = F("Bergwiesenweg");
        break;
    }
    case 53917:
    {
        returnValue = F("Bergwiesstr.");
        break;
    }
    case 53918:
    {
        returnValue = F("Bergwinkel");
        break;
    }
    case 53919:
    {
        returnValue = F("Bergwinkelstr.");
        break;
    }
    case 53920:
    {
        returnValue = F("Bergwinkelsweg");
        break;
    }
    case 53921:
    {
        returnValue = F("Bergwinkelweg");
        break;
    }
    case 53922:
    {
        returnValue = F("Bergwitzer Gartenstr.");
        break;
    }
    case 53923:
    {
        returnValue = F("Bergwitzer Mühlenstr.");
        break;
    }
    case 53924:
    {
        returnValue = F("Bergwitzer Str.");
        break;
    }
    case 53925:
    {
        returnValue = F("Bergzaberner Str.");
        break;
    }
    case 53926:
    {
        returnValue = F("Bergzellerstr.");
        break;
    }
    case 53927:
    {
        returnValue = F("Bergziegen");
        break;
    }
    case 53928:
    {
        returnValue = F("Bergzower Str.");
        break;
    }
    case 53929:
    {
        returnValue = F("Bergäcker");
        break;
    }
    case 53930:
    {
        returnValue = F("Bergäcker Weg");
        break;
    }
    case 53931:
    {
        returnValue = F("Bergäckerstr.");
        break;
    }
    case 53932:
    {
        returnValue = F("Bergäckerweg");
        break;
    }
    case 53933:
    {
        returnValue = F("Bergänger");
        break;
    }
    case 53934:
    {
        returnValue = F("Bergöschinger Str.");
        break;
    }
    case 53935:
    {
        returnValue = F("Bergöschweg");
        break;
    }
    case 53936:
    {
        returnValue = F("Berhauser Weg");
        break;
    }
    case 53937:
    {
        returnValue = F("Berhorststr.");
        break;
    }
    case 53938:
    {
        returnValue = F("Bericher Str.");
        break;
    }
    case 53939:
    {
        returnValue = F("Bericher Weg");
        break;
    }
    case 53940:
    {
        returnValue = F("Bericoweg");
        break;
    }
    case 53941:
    {
        returnValue = F("Bering-Str.");
        break;
    }
    case 53942:
    {
        returnValue = F("Beringallee");
        break;
    }
    case 53943:
    {
        returnValue = F("Beringerstr.");
        break;
    }
    case 53944:
    {
        returnValue = F("Beringerweg");
        break;
    }
    case 53945:
    {
        returnValue = F("Beringhauser Str.");
        break;
    }
    case 53946:
    {
        returnValue = F("Beringstedter Str.");
        break;
    }
    case 53947:
    {
        returnValue = F("Beringstr.");
        break;
    }
    case 53948:
    {
        returnValue = F("Beringweg");
        break;
    }
    case 53949:
    {
        returnValue = F("Berinkart");
        break;
    }
    case 53950:
    {
        returnValue = F("Berinkhusenstr.");
        break;
    }
    case 53951:
    {
        returnValue = F("Berk'sche Str.");
        break;
    }
    case 53952:
    {
        returnValue = F("Berkacher Grund");
        break;
    }
    case 53953:
    {
        returnValue = F("Berkacher Hauptstr.");
        break;
    }
    case 53954:
    {
        returnValue = F("Berkacher Str.");
        break;
    }
    case 53955:
    {
        returnValue = F("Berkacher Weg");
        break;
    }
    case 53956:
    {
        returnValue = F("Berkaer Str.");
        break;
    }
    case 53957:
    {
        returnValue = F("Berkastr.");
        break;
    }
    case 53958:
    {
        returnValue = F("Berkatalstr.");
        break;
    }
    case 53959:
    {
        returnValue = F("Berkau");
        break;
    }
    case 53960:
    {
        returnValue = F("Berkauer Str.");
        break;
    }
    case 53961:
    {
        returnValue = F("Berkauer Weg");
        break;
    }
    case 53962:
    {
        returnValue = F("Berkaweg");
        break;
    }
    case 53963:
    {
        returnValue = F("Berkefeldweg");
        break;
    }
    case 53964:
    {
        returnValue = F("Berkel");
        break;
    }
    case 53965:
    {
        returnValue = F("Berkelaue");
        break;
    }
    case 53966:
    {
        returnValue = F("Berkeler Blick");
        break;
    }
    case 53967:
    {
        returnValue = F("Berkeler Feld");
        break;
    }
    case 53968:
    {
        returnValue = F("Berkeler Grenze");
        break;
    }
    case 53969:
    {
        returnValue = F("Berkeler Str.");
        break;
    }
    case 53970:
    {
        returnValue = F("Berkeler Warte");
        break;
    }
    case 53971:
    {
        returnValue = F("Berkelhook");
        break;
    }
    case 53972:
    {
        returnValue = F("Berkelsstr.");
        break;
    }
    case 53973:
    {
        returnValue = F("Berkelstr.");
        break;
    }
    case 53974:
    {
        returnValue = F("Berkelweg");
        break;
    }
    case 53975:
    {
        returnValue = F("Berkelwiese");
        break;
    }
    case 53976:
    {
        returnValue = F("Berkemeierweg");
        break;
    }
    case 53977:
    {
        returnValue = F("Berken");
        break;
    }
    case 53978:
    {
        returnValue = F("Berkenbrede");
        break;
    }
    case 53979:
    {
        returnValue = F("Berkenbrücker Chaussee");
        break;
    }
    case 53980:
    {
        returnValue = F("Berkenbrücker Dorfstr.");
        break;
    }
    case 53981:
    {
        returnValue = F("Berkenbrücker Str.");
        break;
    }
    case 53982:
    {
        returnValue = F("Berkenbrücker Weg");
        break;
    }
    case 53983:
    {
        returnValue = F("Berkenburg");
        break;
    }
    case 53984:
    {
        returnValue = F("Berkenbusch");
        break;
    }
    case 53985:
    {
        returnValue = F("Berkenbuschstr.");
        break;
    }
    case 53986:
    {
        returnValue = F("Berkendahlweg");
        break;
    }
    case 53987:
    {
        returnValue = F("Berkendeich");
        break;
    }
    case 53988:
    {
        returnValue = F("Berkendiek");
        break;
    }
    case 53989:
    {
        returnValue = F("Berkener Str.");
        break;
    }
    case 53990:
    {
        returnValue = F("Berkener Weg");
        break;
    }
    case 53991:
    {
        returnValue = F("Berkenhegge");
        break;
    }
    case 53992:
    {
        returnValue = F("Berkenheide");
        break;
    }
    case 53993:
    {
        returnValue = F("Berkenhoffstr.");
        break;
    }
    case 53994:
    {
        returnValue = F("Berkenhuiser Str.");
        break;
    }
    case 53995:
    {
        returnValue = F("Berkenhöltschen");
        break;
    }
    case 53996:
    {
        returnValue = F("Berkenhörster Damm");
        break;
    }
    case 53997:
    {
        returnValue = F("Berkenkamp");
        break;
    }
    case 53998:
    {
        returnValue = F("Berkenroth");
        break;
    }
    case 53999:
    {
        returnValue = F("Berkenrother Str.");
        break;
    }
    case 54000:
    {
        returnValue = F("Berkenstockstr.");
        break;
    }
    case 54001:
    {
        returnValue = F("Berkenstr.");
        break;
    }
    case 54002:
    {
        returnValue = F("Berkenstück");
        break;
    }
    case 54003:
    {
        returnValue = F("Berkentrup");
        break;
    }
    case 54004:
    {
        returnValue = F("Berkenweg");
        break;
    }
    case 54005:
    {
        returnValue = F("Berker Str.");
        break;
    }
    case 54006:
    {
        returnValue = F("Berker Wand Str.");
        break;
    }
    case 54007:
    {
        returnValue = F("Berker Weg");
        break;
    }
    case 54008:
    {
        returnValue = F("Berkerpatt");
        break;
    }
    case 54009:
    {
        returnValue = F("Berkersheimer Weg");
        break;
    }
    case 54010:
    {
        returnValue = F("Berkeser Str.");
        break;
    }
    case 54011:
    {
        returnValue = F("Berkesfeld");
        break;
    }
    case 54012:
    {
        returnValue = F("Berketstr.");
        break;
    }
    case 54013:
    {
        returnValue = F("Berkevoortshofstr.");
        break;
    }
    case 54014:
    {
        returnValue = F("Berkey");
        break;
    }
    case 54015:
    {
        returnValue = F("Berkheimer Str.");
        break;
    }
    case 54016:
    {
        returnValue = F("Berkheimer Weg");
        break;
    }
    case 54017:
    {
        returnValue = F("Berkhofer Str.");
        break;
    }
    case 54018:
    {
        returnValue = F("Berkhofer Trift");
        break;
    }
    case 54019:
    {
        returnValue = F("Berkhofer Weg");
        break;
    }
    case 54020:
    {
        returnValue = F("Berkholz");
        break;
    }
    case 54021:
    {
        returnValue = F("Berkholzer Allee");
        break;
    }
    case 54022:
    {
        returnValue = F("Berkholzer Hauptstr.");
        break;
    }
    case 54023:
    {
        returnValue = F("Berkholzer Str.");
        break;
    }
    case 54024:
    {
        returnValue = F("Berkholzer Wiesengrund");
        break;
    }
    case 54025:
    {
        returnValue = F("Berkhopstr.");
        break;
    }
    case 54026:
    {
        returnValue = F("Berkingstr.");
        break;
    }
    case 54027:
    {
        returnValue = F("Berkowstr.");
        break;
    }
    case 54028:
    {
        returnValue = F("Berkringerstr.");
        break;
    }
    case 54029:
    {
        returnValue = F("Berksen");
        break;
    }
    case 54030:
    {
        returnValue = F("Berkshire Ride");
        break;
    }
    case 54031:
    {
        returnValue = F("Berkumer Mühle");
        break;
    }
    case 54032:
    {
        returnValue = F("Berkumer Str.");
        break;
    }
    case 54033:
    {
        returnValue = F("Berkumer Weg");
        break;
    }
    case 54034:
    {
        returnValue = F("Berkweg");
        break;
    }
    case 54035:
    {
        returnValue = F("Berl");
        break;
    }
    case 54036:
    {
        returnValue = F("Berlachen");
        break;
    }
    case 54037:
    {
        returnValue = F("Berlagestr.");
        break;
    }
    case 54038:
    {
        returnValue = F("Berlagrund");
        break;
    }
    case 54039:
    {
        returnValue = F("Berlarer Str.");
        break;
    }
    case 54040:
    {
        returnValue = F("Berlderath");
        break;
    }
    case 54041:
    {
        returnValue = F("Berlebach");
        break;
    }
    case 54042:
    {
        returnValue = F("Berlebecker Heide");
        break;
    }
    case 54043:
    {
        returnValue = F("Berleburger Str.");
        break;
    }
    case 54044:
    {
        returnValue = F("Berlemanns Kamp");
        break;
    }
    case 54045:
    {
        returnValue = F("Berlenstr.");
        break;
    }
    case 54046:
    {
        returnValue = F("Berlepscher Str.");
        break;
    }
    case 54047:
    {
        returnValue = F("Berlepschkamp");
        break;
    }
    case 54048:
    {
        returnValue = F("Berlepschstr.");
        break;
    }
    case 54049:
    {
        returnValue = F("Berlepschweg");
        break;
    }
    case 54050:
    {
        returnValue = F("Berlerweg");
        break;
    }
    case 54051:
    {
        returnValue = F("Berlesstr.");
        break;
    }
    case 54052:
    {
        returnValue = F("Berlestal");
        break;
    }
    case 54053:
    {
        returnValue = F("Berlestenweg");
        break;
    }
    case 54054:
    {
        returnValue = F("Berletstr.");
        break;
    }
    case 54055:
    {
        returnValue = F("Berletzeck");
        break;
    }
    case 54056:
    {
        returnValue = F("Berletzhofer Weg");
        break;
    }
    case 54057:
    {
        returnValue = F("Berleweg");
        break;
    }
    case 54058:
    {
        returnValue = F("Berlich");
        break;
    }
    case 54059:
    {
        returnValue = F("Berlichingenstr.");
        break;
    }
    case 54060:
    {
        returnValue = F("Berlichingenweg");
        break;
    }
    case 54061:
    {
        returnValue = F("Berlichinger Weg");
        break;
    }
    case 54062:
    {
        returnValue = F("Berlinallee");
        break;
    }
    case 54063:
    {
        returnValue = F("Berlinchen");
        break;
    }
    case 54064:
    {
        returnValue = F("Berlinchener Chaussee");
        break;
    }
    case 54065:
    {
        returnValue = F("Berlinchener Dorfplatz");
        break;
    }
    case 54066:
    {
        returnValue = F("Berlinchener Dorfstr.");
        break;
    }
    case 54067:
    {
        returnValue = F("Berlinchner Str.");
        break;
    }
    case 54068:
    {
        returnValue = F("Berlinen Gang");
        break;
    }
    case 54069:
    {
        returnValue = F("Berliner Allee");
        break;
    }
    case 54070:
    {
        returnValue = F("Berliner Berg");
        break;
    }
    case 54071:
    {
        returnValue = F("Berliner Brücke");
        break;
    }
    case 54072:
    {
        returnValue = F("Berliner Chaussee");
        break;
    }
    case 54073:
    {
        returnValue = F("Berliner Damm");
        break;
    }
    case 54074:
    {
        returnValue = F("Berliner Eck");
        break;
    }
    case 54075:
    {
        returnValue = F("Berliner Ende");
        break;
    }
    case 54076:
    {
        returnValue = F("Berliner Gasse");
        break;
    }
    case 54077:
    {
        returnValue = F("Berliner Heerstr.");
        break;
    }
    case 54078:
    {
        returnValue = F("Berliner Hof");
        break;
    }
    case 54079:
    {
        returnValue = F("Berliner Höhe");
        break;
    }
    case 54080:
    {
        returnValue = F("Berliner Kreisel");
        break;
    }
    case 54081:
    {
        returnValue = F("Berliner Landstr.");
        break;
    }
    case 54082:
    {
        returnValue = F("Berliner Park");
        break;
    }
    case 54083:
    {
        returnValue = F("Berliner Platz");
        break;
    }
    case 54084:
    {
        returnValue = F("Berliner Ring");
        break;
    }
    case 54085:
    {
        returnValue = F("Berliner Str.");
        break;
    }
    case 54086:
    {
        returnValue = F("Berliner Str. Ansiedlung");
        break;
    }
    case 54087:
    {
        returnValue = F("Berliner Str. Siedlung");
        break;
    }
    case 54088:
    {
        returnValue = F("Berliner Tor");
        break;
    }
    case 54089:
    {
        returnValue = F("Berliner Vorstadt");
        break;
    }
    case 54090:
    {
        returnValue = F("Berliner Wall");
        break;
    }
    case 54091:
    {
        returnValue = F("Berliner Weg");
        break;
    }
    case 54092:
    {
        returnValue = F("Berliner-Tor-Platz");
        break;
    }
    case 54093:
    {
        returnValue = F("Berlinerstr.");
        break;
    }
    case 54094:
    {
        returnValue = F("Berlinerweg");
        break;
    }
    case 54095:
    {
        returnValue = F("Berlinger Plan");
        break;
    }
    case 54096:
    {
        returnValue = F("Berlinger Str.");
        break;
    }
    case 54097:
    {
        returnValue = F("Berlinger Weg");
        break;
    }
    case 54098:
    {
        returnValue = F("Berlingerstr.");
        break;
    }
    case 54099:
    {
        returnValue = F("Berlingerweg");
        break;
    }
    case 54100:
    {
        returnValue = F("Berlingeröder Str.");
        break;
    }
    case 54101:
    {
        returnValue = F("Berlinghausen");
        break;
    }
    case 54102:
    {
        returnValue = F("Berlingser Weg");
        break;
    }
    case 54103:
    {
        returnValue = F("Berlingsgasse");
        break;
    }
    case 54104:
    {
        returnValue = F("Berlingshecke");
        break;
    }
    case 54105:
    {
        returnValue = F("Berlingweg");
        break;
    }
    case 54106:
    {
        returnValue = F("Berlinring");
        break;
    }
    case 54107:
    {
        returnValue = F("Berlinsgasse");
        break;
    }
    case 54108:
    {
        returnValue = F("Berlinstr.");
        break;
    }
    case 54109:
    {
        returnValue = F("Berlinweg");
        break;
    }
    case 54110:
    {
        returnValue = F("Berliozstr.");
        break;
    }
    case 54111:
    {
        returnValue = F("Berlisstr.");
        break;
    }
    case 54112:
    {
        returnValue = F("Berlitstr.");
        break;
    }
    case 54113:
    {
        returnValue = F("Berlitter Dorfstr.");
        break;
    }
    case 54114:
    {
        returnValue = F("Berlitzgrube");
        break;
    }
    case 54115:
    {
        returnValue = F("Berlitzstr.");
        break;
    }
    case 54116:
    {
        returnValue = F("Berlitzweg");
        break;
    }
    case 54117:
    {
        returnValue = F("Berlotter Weg");
        break;
    }
    case 54118:
    {
        returnValue = F("Berlstedter Markt");
        break;
    }
    case 54119:
    {
        returnValue = F("Berlstedter Str.");
        break;
    }
    case 54120:
    {
        returnValue = F("Bermannstr.");
        break;
    }
    case 54121:
    {
        returnValue = F("Bermaringer Str.");
        break;
    }
    case 54122:
    {
        returnValue = F("Bermaringer Weg");
        break;
    }
    case 54123:
    {
        returnValue = F("Bermbacher Hauptstr.");
        break;
    }
    case 54124:
    {
        returnValue = F("Bermbacher Str.");
        break;
    }
    case 54125:
    {
        returnValue = F("Bermbacher Weg");
        break;
    }
    case 54126:
    {
        returnValue = F("Bermbachtal");
        break;
    }
    case 54127:
    {
        returnValue = F("Bermbecker Weg");
        break;
    }
    case 54128:
    {
        returnValue = F("Bermecke");
        break;
    }
    case 54129:
    {
        returnValue = F("Bermeckestr.");
        break;
    }
    case 54130:
    {
        returnValue = F("Bermenseeschneise");
        break;
    }
    case 54131:
    {
        returnValue = F("Bermensfeld");
        break;
    }
    case 54132:
    {
        returnValue = F("Bermenweg");
        break;
    }
    case 54133:
    {
        returnValue = F("Bermersbachstr.");
        break;
    }
    case 54134:
    {
        returnValue = F("Bermersheimer Str.");
        break;
    }
    case 54135:
    {
        returnValue = F("Bermershäuser Str.");
        break;
    }
    case 54136:
    {
        returnValue = F("Bermes Feld");
        break;
    }
    case 54137:
    {
        returnValue = F("Bermesdyck");
        break;
    }
    case 54138:
    {
        returnValue = F("Bermesgasse");
        break;
    }
    case 54139:
    {
        returnValue = F("Bermetstr.");
        break;
    }
    case 54140:
    {
        returnValue = F("Bermeweg");
        break;
    }
    case 54141:
    {
        returnValue = F("Bermkestr.");
        break;
    }
    case 54142:
    {
        returnValue = F("Bermkeweg");
        break;
    }
    case 54143:
    {
        returnValue = F("Bermlichsweg");
        break;
    }
    case 54144:
    {
        returnValue = F("Bermoller Str.");
        break;
    }
    case 54145:
    {
        returnValue = F("Bermondstr.");
        break;
    }
    case 54146:
    {
        returnValue = F("Bermsgrüner Siedlung");
        break;
    }
    case 54147:
    {
        returnValue = F("Bermsgrüner Str.");
        break;
    }
    case 54148:
    {
        returnValue = F("Bermuda Dreieck");
        break;
    }
    case 54149:
    {
        returnValue = F("Bermudastr.");
        break;
    }
    case 54150:
    {
        returnValue = F("Bermuthshainer Str.");
        break;
    }
    case 54151:
    {
        returnValue = F("Bermuthstr.");
        break;
    }
    case 54152:
    {
        returnValue = F("Bernadeinweg");
        break;
    }
    case 54153:
    {
        returnValue = F("Bernadettenstr.");
        break;
    }
    case 54154:
    {
        returnValue = F("Bernadettestr.");
        break;
    }
    case 54155:
    {
        returnValue = F("Bernadottestr.");
        break;
    }
    case 54156:
    {
        returnValue = F("Bernadotteweg");
        break;
    }
    case 54157:
    {
        returnValue = F("Bernadusweg");
        break;
    }
    case 54158:
    {
        returnValue = F("Bernaer Chaussee");
        break;
    }
    case 54159:
    {
        returnValue = F("Bernar-Venet-Str.");
        break;
    }
    case 54160:
    {
        returnValue = F("Bernard-Eyberg-Str.");
        break;
    }
    case 54161:
    {
        returnValue = F("Bernard-Humblot-Str.");
        break;
    }
    case 54162:
    {
        returnValue = F("Bernard-Höting-Str.");
        break;
    }
    case 54163:
    {
        returnValue = F("Bernard-Krone-Str.");
        break;
    }
    case 54164:
    {
        returnValue = F("Bernard-Liening-Str.");
        break;
    }
    case 54165:
    {
        returnValue = F("Bernard-Manegold-Str.");
        break;
    }
    case 54166:
    {
        returnValue = F("Bernard-Schumacher-Weg");
        break;
    }
    case 54167:
    {
        returnValue = F("Bernard-Wissing-Platz");
        break;
    }
    case 54168:
    {
        returnValue = F("Bernardskreuz");
        break;
    }
    case 54169:
    {
        returnValue = F("Bernardstr.");
        break;
    }
    case 54170:
    {
        returnValue = F("Bernardsweg");
        break;
    }
    case 54171:
    {
        returnValue = F("Bernardus-Stober-Str.");
        break;
    }
    case 54172:
    {
        returnValue = F("Bernardusring");
        break;
    }
    case 54173:
    {
        returnValue = F("Bernardusstr.");
        break;
    }
    case 54174:
    {
        returnValue = F("Bernardusweg");
        break;
    }
    case 54175:
    {
        returnValue = F("Bernareggio-Platz");
        break;
    }
    case 54176:
    {
        returnValue = F("Bernarticer Str.");
        break;
    }
    case 54177:
    {
        returnValue = F("Bernatzstr.");
        break;
    }
    case 54178:
    {
        returnValue = F("Bernau-Menzenschwander-Str.");
        break;
    }
    case 54179:
    {
        returnValue = F("Bernauel");
        break;
    }
    case 54180:
    {
        returnValue = F("Bernauer Chaussee");
        break;
    }
    case 54181:
    {
        returnValue = F("Bernauer Damm");
        break;
    }
    case 54182:
    {
        returnValue = F("Bernauer Heerstr.");
        break;
    }
    case 54183:
    {
        returnValue = F("Bernauer Kurpark");
        break;
    }
    case 54184:
    {
        returnValue = F("Bernauer Mark");
        break;
    }
    case 54185:
    {
        returnValue = F("Bernauer Str.");
        break;
    }
    case 54186:
    {
        returnValue = F("Bernauer Waldweg");
        break;
    }
    case 54187:
    {
        returnValue = F("Bernauer Weg");
        break;
    }
    case 54188:
    {
        returnValue = F("Bernauer-Kreuz-Weg");
        break;
    }
    case 54189:
    {
        returnValue = F("Bernauerhof");
        break;
    }
    case 54190:
    {
        returnValue = F("Bernauerstr.");
        break;
    }
    case 54191:
    {
        returnValue = F("Bernaustr.");
        break;
    }
    case 54192:
    {
        returnValue = F("Bernbacher Steigle");
        break;
    }
    case 54193:
    {
        returnValue = F("Bernbacher Str.");
        break;
    }
    case 54194:
    {
        returnValue = F("Bernbacher Weg");
        break;
    }
    case 54195:
    {
        returnValue = F("Bernbacherstaig");
        break;
    }
    case 54196:
    {
        returnValue = F("Bernbachhaldenweg");
        break;
    }
    case 54197:
    {
        returnValue = F("Bernbachstr.");
        break;
    }
    case 54198:
    {
        returnValue = F("Bernbachweg");
        break;
    }
    case 54199:
    {
        returnValue = F("Bernbeckplatz");
        break;
    }
    case 54200:
    {
        returnValue = F("Bernbeckweg");
        break;
    }
    case 54201:
    {
        returnValue = F("Bernberger Str.");
        break;
    }
    case 54202:
    {
        returnValue = F("Bernbergstr.");
        break;
    }
    case 54203:
    {
        returnValue = F("Bernbeuren - Burggen");
        break;
    }
    case 54204:
    {
        returnValue = F("Bernbeurener Str.");
        break;
    }
    case 54205:
    {
        returnValue = F("Bernbeurer Str.");
        break;
    }
    case 54206:
    {
        returnValue = F("Bernbrucher Str.");
        break;
    }
    case 54207:
    {
        returnValue = F("Bernbrucher Weg");
        break;
    }
    case 54208:
    {
        returnValue = F("Bernbrunner Str.");
        break;
    }
    case 54209:
    {
        returnValue = F("Bernburger Str.");
        break;
    }
    case 54210:
    {
        returnValue = F("Bernburger Weg");
        break;
    }
    case 54211:
    {
        returnValue = F("Bernburgstr.");
        break;
    }
    case 54212:
    {
        returnValue = F("Bernbühl");
        break;
    }
    case 54213:
    {
        returnValue = F("Bernbühlweg");
        break;
    }
    case 54214:
    {
        returnValue = F("Bernd von Arnim Str.");
        break;
    }
    case 54215:
    {
        returnValue = F("Bernd-Alois-Zimmermann-Str.");
        break;
    }
    case 54216:
    {
        returnValue = F("Bernd-Beltrame-Str.");
        break;
    }
    case 54217:
    {
        returnValue = F("Bernd-Bohr-Platz");
        break;
    }
    case 54218:
    {
        returnValue = F("Bernd-Bücker-Str.");
        break;
    }
    case 54219:
    {
        returnValue = F("Bernd-Hartmann-Str.");
        break;
    }
    case 54220:
    {
        returnValue = F("Bernd-Isemann-Weg");
        break;
    }
    case 54221:
    {
        returnValue = F("Bernd-Köster-Str.");
        break;
    }
    case 54222:
    {
        returnValue = F("Bernd-Neumann-Platz");
        break;
    }
    case 54223:
    {
        returnValue = F("Bernd-Rosemeyer-Str.");
        break;
    }
    case 54224:
    {
        returnValue = F("Bernd-Schulte-Weg");
        break;
    }
    case 54225:
    {
        returnValue = F("Bernd-Terhorst-Weg");
        break;
    }
    case 54226:
    {
        returnValue = F("Bernd-Tönjes-Weg");
        break;
    }
    case 54227:
    {
        returnValue = F("Berndesallee");
        break;
    }
    case 54228:
    {
        returnValue = F("Berndiel");
        break;
    }
    case 54229:
    {
        returnValue = F("Berndieler Str.");
        break;
    }
    case 54230:
    {
        returnValue = F("Berndieler Weg");
        break;
    }
    case 54231:
    {
        returnValue = F("Berndlberg");
        break;
    }
    case 54232:
    {
        returnValue = F("Berndlfeldweg");
        break;
    }
    case 54233:
    {
        returnValue = F("Berndorf");
        break;
    }
    case 54234:
    {
        returnValue = F("Berndorfer Str.");
        break;
    }
    case 54235:
    {
        returnValue = F("Berndorferstr.");
        break;
    }
    case 54236:
    {
        returnValue = F("Berndorferweg");
        break;
    }
    case 54237:
    {
        returnValue = F("Berndrother Str.");
        break;
    }
    case 54238:
    {
        returnValue = F("Bernds Kamp");
        break;
    }
    case 54239:
    {
        returnValue = F("Berndsgasse");
        break;
    }
    case 54240:
    {
        returnValue = F("Berndshof");
        break;
    }
    case 54241:
    {
        returnValue = F("Berndshofer Landstr.");
        break;
    }
    case 54242:
    {
        returnValue = F("Berndshäuser Str.");
        break;
    }
    case 54243:
    {
        returnValue = F("Berndshöfer Str.");
        break;
    }
    case 54244:
    {
        returnValue = F("Berndtstr.");
        break;
    }
    case 54245:
    {
        returnValue = F("Berndtswiese");
        break;
    }
    case 54246:
    {
        returnValue = F("Berneburger Str.");
        break;
    }
    case 54247:
    {
        returnValue = F("Berneburgstr.");
        break;
    }
    case 54248:
    {
        returnValue = F("Berneck");
        break;
    }
    case 54249:
    {
        returnValue = F("Bernecker Steige");
        break;
    }
    case 54250:
    {
        returnValue = F("Bernecker Str.");
        break;
    }
    case 54251:
    {
        returnValue = F("Bernecker Weg");
        break;
    }
    case 54252:
    {
        returnValue = F("Berneckerstr.");
        break;
    }
    case 54253:
    {
        returnValue = F("Berneckerweg");
        break;
    }
    case 54254:
    {
        returnValue = F("Berneckstr.");
        break;
    }
    case 54255:
    {
        returnValue = F("Bernentalstr.");
        break;
    }
    case 54256:
    {
        returnValue = F("Berner Deich");
        break;
    }
    case 54257:
    {
        returnValue = F("Berner Gasse");
        break;
    }
    case 54258:
    {
        returnValue = F("Berner Str.");
        break;
    }
    case 54259:
    {
        returnValue = F("Berner Weg");
        break;
    }
    case 54260:
    {
        returnValue = F("Bernerhof");
        break;
    }
    case 54261:
    {
        returnValue = F("Bernerlohweg");
        break;
    }
    case 54262:
    {
        returnValue = F("Bernerskamp");
        break;
    }
    case 54263:
    {
        returnValue = F("Bernerstr.");
        break;
    }
    case 54264:
    {
        returnValue = F("Bernestr.");
        break;
    }
    case 54265:
    {
        returnValue = F("Bernetenstr.");
        break;
    }
    case 54266:
    {
        returnValue = F("Bernethsdamm");
        break;
    }
    case 54267:
    {
        returnValue = F("Berneweg");
        break;
    }
    case 54268:
    {
        returnValue = F("Bernfurter Str.");
        break;
    }
    case 54269:
    {
        returnValue = F("Berngariusstr.");
        break;
    }
    case 54270:
    {
        returnValue = F("Berngauer Weg");
        break;
    }
    case 54271:
    {
        returnValue = F("Berngehrerstr.");
        break;
    }
    case 54272:
    {
        returnValue = F("Berngeröder Str.");
        break;
    }
    case 54273:
    {
        returnValue = F("Berngeröder Weg");
        break;
    }
    case 54274:
    {
        returnValue = F("Bernhalde");
        break;
    }
    case 54275:
    {
        returnValue = F("Bernhaldenklingenstr.");
        break;
    }
    case 54276:
    {
        returnValue = F("Bernhaldenweg");
        break;
    }
    case 54277:
    {
        returnValue = F("Bernhard-Adelung-Str.");
        break;
    }
    case 54278:
    {
        returnValue = F("Bernhard-Anger-Str.");
        break;
    }
    case 54279:
    {
        returnValue = F("Bernhard-Avermann-Str.");
        break;
    }
    case 54280:
    {
        returnValue = F("Bernhard-Awe-Str.");
        break;
    }
    case 54281:
    {
        returnValue = F("Bernhard-Bahnschulte-Str.");
        break;
    }
    case 54282:
    {
        returnValue = F("Bernhard-Bartmann-Str.");
        break;
    }
    case 54283:
    {
        returnValue = F("Bernhard-Becherer-Str.");
        break;
    }
    case 54284:
    {
        returnValue = F("Bernhard-Beck-Str.");
        break;
    }
    case 54285:
    {
        returnValue = F("Bernhard-Becker-Str.");
        break;
    }
    case 54286:
    {
        returnValue = F("Bernhard-Bickert-Weg");
        break;
    }
    case 54287:
    {
        returnValue = F("Bernhard-Birkhahn-Weg");
        break;
    }
    case 54288:
    {
        returnValue = F("Bernhard-Brasch-Str.");
        break;
    }
    case 54289:
    {
        returnValue = F("Bernhard-Brinkmöller-Str.");
        break;
    }
    case 54290:
    {
        returnValue = F("Bernhard-Brühl-Str.");
        break;
    }
    case 54291:
    {
        returnValue = F("Bernhard-Bästlein-Str.");
        break;
    }
    case 54292:
    {
        returnValue = F("Bernhard-Claves-Weg");
        break;
    }
    case 54293:
    {
        returnValue = F("Bernhard-Denzel-Weg");
        break;
    }
    case 54294:
    {
        returnValue = F("Bernhard-Dietrich-Str.");
        break;
    }
    case 54295:
    {
        returnValue = F("Bernhard-Duhm-Str.");
        break;
    }
    case 54296:
    {
        returnValue = F("Bernhard-Durst-Str.");
        break;
    }
    case 54297:
    {
        returnValue = F("Bernhard-Ehlers-Str.");
        break;
    }
    case 54298:
    {
        returnValue = F("Bernhard-Eichholz-Str.");
        break;
    }
    case 54299:
    {
        returnValue = F("Bernhard-Elbern-Str.");
        break;
    }
    case 54300:
    {
        returnValue = F("Bernhard-Endres-Weg");
        break;
    }
    case 54301:
    {
        returnValue = F("Bernhard-Engelhardt-Str.");
        break;
    }
    case 54302:
    {
        returnValue = F("Bernhard-Falk-Str.");
        break;
    }
    case 54303:
    {
        returnValue = F("Bernhard-Farwer-Strat");
        break;
    }
    case 54304:
    {
        returnValue = F("Bernhard-Faust-Str.");
        break;
    }
    case 54305:
    {
        returnValue = F("Bernhard-Fischer-Str.");
        break;
    }
    case 54306:
    {
        returnValue = F("Bernhard-Flemes-Str.");
        break;
    }
    case 54307:
    {
        returnValue = F("Bernhard-Fries-Str.");
        break;
    }
    case 54308:
    {
        returnValue = F("Bernhard-Fries-Weg");
        break;
    }
    case 54309:
    {
        returnValue = F("Bernhard-Früh-Str.");
        break;
    }
    case 54310:
    {
        returnValue = F("Bernhard-Gehrke-Weg");
        break;
    }
    case 54311:
    {
        returnValue = F("Bernhard-Gilles-Weg");
        break;
    }
    case 54312:
    {
        returnValue = F("Bernhard-Grabbe-Weg");
        break;
    }
    case 54313:
    {
        returnValue = F("Bernhard-Grimm-Str.");
        break;
    }
    case 54314:
    {
        returnValue = F("Bernhard-Grueber-Str.");
        break;
    }
    case 54315:
    {
        returnValue = F("Bernhard-Göring-Str.");
        break;
    }
    case 54316:
    {
        returnValue = F("Bernhard-Göz-Weg");
        break;
    }
    case 54317:
    {
        returnValue = F("Bernhard-Haar-Str.");
        break;
    }
    case 54318:
    {
        returnValue = F("Bernhard-Hagels-Platz");
        break;
    }
    case 54319:
    {
        returnValue = F("Bernhard-Hahn-Str.");
        break;
    }
    case 54320:
    {
        returnValue = F("Bernhard-Hahne-Str.");
        break;
    }
    case 54321:
    {
        returnValue = F("Bernhard-Harms-Weg");
        break;
    }
    case 54322:
    {
        returnValue = F("Bernhard-Hartmann-Str.");
        break;
    }
    case 54323:
    {
        returnValue = F("Bernhard-Havighorst-Weg");
        break;
    }
    case 54324:
    {
        returnValue = F("Bernhard-Heese-Str.");
        break;
    }
    case 54325:
    {
        returnValue = F("Bernhard-Heising-Weg");
        break;
    }
    case 54326:
    {
        returnValue = F("Bernhard-Hellmann-Str.");
        break;
    }
    case 54327:
    {
        returnValue = F("Bernhard-Henß-Str.");
        break;
    }
    case 54328:
    {
        returnValue = F("Bernhard-Hilz-Str.");
        break;
    }
    case 54329:
    {
        returnValue = F("Bernhard-Hoetger-Str.");
        break;
    }
    case 54330:
    {
        returnValue = F("Bernhard-Hoffmann-Str.");
        break;
    }
    case 54331:
    {
        returnValue = F("Bernhard-Holtmann-Str.");
        break;
    }
    case 54332:
    {
        returnValue = F("Bernhard-Honkamp-Str.");
        break;
    }
    case 54333:
    {
        returnValue = F("Bernhard-Hunstig-Str.");
        break;
    }
    case 54334:
    {
        returnValue = F("Bernhard-Huss-Str.");
        break;
    }
    case 54335:
    {
        returnValue = F("Bernhard-Huys-Ring");
        break;
    }
    case 54336:
    {
        returnValue = F("Bernhard-Härtel-Str.");
        break;
    }
    case 54337:
    {
        returnValue = F("Bernhard-Höttger-Weg");
        break;
    }
    case 54338:
    {
        returnValue = F("Bernhard-Hüsers-Str.");
        break;
    }
    case 54339:
    {
        returnValue = F("Bernhard-Ihnen-Str.");
        break;
    }
    case 54340:
    {
        returnValue = F("Bernhard-Itzel-Str.");
        break;
    }
    case 54341:
    {
        returnValue = F("Bernhard-Jäger-Weg");
        break;
    }
    case 54342:
    {
        returnValue = F("Bernhard-Kampshoff-Weg");
        break;
    }
    case 54343:
    {
        returnValue = F("Bernhard-Kaufmann-Weg");
        break;
    }
    case 54344:
    {
        returnValue = F("Bernhard-Kellermann-Str.");
        break;
    }
    case 54345:
    {
        returnValue = F("Bernhard-Klein-Str.");
        break;
    }
    case 54346:
    {
        returnValue = F("Bernhard-Klockenbusch-Str.");
        break;
    }
    case 54347:
    {
        returnValue = F("Bernhard-Knubel-Str.");
        break;
    }
    case 54348:
    {
        returnValue = F("Bernhard-Krause-Str.");
        break;
    }
    case 54349:
    {
        returnValue = F("Bernhard-Kretzschmar-Weg");
        break;
    }
    case 54350:
    {
        returnValue = F("Bernhard-Krieg-Str.");
        break;
    }
    case 54351:
    {
        returnValue = F("Bernhard-Kromer-Weg");
        break;
    }
    case 54352:
    {
        returnValue = F("Bernhard-Köthenbürger-Str.");
        break;
    }
    case 54353:
    {
        returnValue = F("Bernhard-Kühnert-Str.");
        break;
    }
    case 54354:
    {
        returnValue = F("Bernhard-Lauscher-Str.");
        break;
    }
    case 54355:
    {
        returnValue = F("Bernhard-Lekve-Park");
        break;
    }
    case 54356:
    {
        returnValue = F("Bernhard-Letterhaus-Grund");
        break;
    }
    case 54357:
    {
        returnValue = F("Bernhard-Letterhaus-Str.");
        break;
    }
    case 54358:
    {
        returnValue = F("Bernhard-Letterhaus-Weg");
        break;
    }
    case 54359:
    {
        returnValue = F("Bernhard-Lichtenberg-Str.");
        break;
    }
    case 54360:
    {
        returnValue = F("Bernhard-Lichtenberg-Weg");
        break;
    }
    case 54361:
    {
        returnValue = F("Bernhard-Lohmüller-Str.");
        break;
    }
    case 54362:
    {
        returnValue = F("Bernhard-Lorenz-Weg");
        break;
    }
    case 54363:
    {
        returnValue = F("Bernhard-Lüdecke-Str.");
        break;
    }
    case 54364:
    {
        returnValue = F("Bernhard-Marc-Platz");
        break;
    }
    case 54365:
    {
        returnValue = F("Bernhard-May-Str.");
        break;
    }
    case 54366:
    {
        returnValue = F("Bernhard-Metz-Str.");
        break;
    }
    case 54367:
    {
        returnValue = F("Bernhard-Meyer-Str.");
        break;
    }
    case 54368:
    {
        returnValue = F("Bernhard-Meyer-Weg");
        break;
    }
    case 54369:
    {
        returnValue = F("Bernhard-Minetti-Weg");
        break;
    }
    case 54370:
    {
        returnValue = F("Bernhard-Monath-Str.");
        break;
    }
    case 54371:
    {
        returnValue = F("Bernhard-Muke-Str.");
        break;
    }
    case 54372:
    {
        returnValue = F("Bernhard-Muth-Str.");
        break;
    }
    case 54373:
    {
        returnValue = F("Bernhard-Märzdorf-Str.");
        break;
    }
    case 54374:
    {
        returnValue = F("Bernhard-Müller-Str.");
        break;
    }
    case 54375:
    {
        returnValue = F("Bernhard-Müller-Weg");
        break;
    }
    case 54376:
    {
        returnValue = F("Bernhard-Naumann-Weg");
        break;
    }
    case 54377:
    {
        returnValue = F("Bernhard-Neuhaus-Weg");
        break;
    }
    case 54378:
    {
        returnValue = F("Bernhard-Niehues-Str.");
        break;
    }
    case 54379:
    {
        returnValue = F("Bernhard-Nigebur-Str.");
        break;
    }
    case 54380:
    {
        returnValue = F("Bernhard-Otte-Str.");
        break;
    }
    case 54381:
    {
        returnValue = F("Bernhard-Pankok-Weg");
        break;
    }
    case 54382:
    {
        returnValue = F("Bernhard-Plenck-Str.");
        break;
    }
    case 54383:
    {
        returnValue = F("Bernhard-Plettner-Ring");
        break;
    }
    case 54384:
    {
        returnValue = F("Bernhard-Poether-Weg");
        break;
    }
    case 54385:
    {
        returnValue = F("Bernhard-Porten-Str.");
        break;
    }
    case 54386:
    {
        returnValue = F("Bernhard-Prager-Gasse");
        break;
    }
    case 54387:
    {
        returnValue = F("Bernhard-Probst-Str.");
        break;
    }
    case 54388:
    {
        returnValue = F("Bernhard-Pröbsting-Str.");
        break;
    }
    case 54389:
    {
        returnValue = F("Bernhard-Pölder-Str.");
        break;
    }
    case 54390:
    {
        returnValue = F("Bernhard-Raestrup-Platz");
        break;
    }
    case 54391:
    {
        returnValue = F("Bernhard-Rehkopf-Str.");
        break;
    }
    case 54392:
    {
        returnValue = F("Bernhard-Remmers-Str.");
        break;
    }
    case 54393:
    {
        returnValue = F("Bernhard-Remy-Str.");
        break;
    }
    case 54394:
    {
        returnValue = F("Bernhard-Rest-Str.");
        break;
    }
    case 54395:
    {
        returnValue = F("Bernhard-Ridder-Str.");
        break;
    }
    case 54396:
    {
        returnValue = F("Bernhard-Riedmiller-Str.");
        break;
    }
    case 54397:
    {
        returnValue = F("Bernhard-Riemann-Str.");
        break;
    }
    case 54398:
    {
        returnValue = F("Bernhard-Riesenbeck-Weg");
        break;
    }
    case 54399:
    {
        returnValue = F("Bernhard-Rinke-Str.");
        break;
    }
    case 54400:
    {
        returnValue = F("Bernhard-Roseland-Weg");
        break;
    }
    case 54401:
    {
        returnValue = F("Bernhard-Roth-Weg");
        break;
    }
    case 54402:
    {
        returnValue = F("Bernhard-Rösler-Str.");
        break;
    }
    case 54403:
    {
        returnValue = F("Bernhard-Rößner-Str.");
        break;
    }
    case 54404:
    {
        returnValue = F("Bernhard-Sanders-Weg");
        break;
    }
    case 54405:
    {
        returnValue = F("Bernhard-Sarnes-Str.");
        break;
    }
    case 54406:
    {
        returnValue = F("Bernhard-Scherer-Str.");
        break;
    }
    case 54407:
    {
        returnValue = F("Bernhard-Schineller-Str.");
        break;
    }
    case 54408:
    {
        returnValue = F("Bernhard-Schlegel-Str.");
        break;
    }
    case 54409:
    {
        returnValue = F("Bernhard-Schmidt-Str.");
        break;
    }
    case 54410:
    {
        returnValue = F("Bernhard-Schopmeyer-Str.");
        break;
    }
    case 54411:
    {
        returnValue = F("Bernhard-Schorbach-Str.");
        break;
    }
    case 54412:
    {
        returnValue = F("Bernhard-Schulte-Str.");
        break;
    }
    case 54413:
    {
        returnValue = F("Bernhard-Schultze-Str.");
        break;
    }
    case 54414:
    {
        returnValue = F("Bernhard-Schwarz-Str.");
        break;
    }
    case 54415:
    {
        returnValue = F("Bernhard-Schwentner-Str.");
        break;
    }
    case 54416:
    {
        returnValue = F("Bernhard-Seitz-Weg");
        break;
    }
    case 54417:
    {
        returnValue = F("Bernhard-Setzer-Str.");
        break;
    }
    case 54418:
    {
        returnValue = F("Bernhard-Sickmann-Weg");
        break;
    }
    case 54419:
    {
        returnValue = F("Bernhard-Sinne-Str.");
        break;
    }
    case 54420:
    {
        returnValue = F("Bernhard-Spetsmann-Str.");
        break;
    }
    case 54421:
    {
        returnValue = F("Bernhard-Sporer-Str.");
        break;
    }
    case 54422:
    {
        returnValue = F("Bernhard-Sroka-Weg");
        break;
    }
    case 54423:
    {
        returnValue = F("Bernhard-Stark-Str.");
        break;
    }
    case 54424:
    {
        returnValue = F("Bernhard-Steinel-Str.");
        break;
    }
    case 54425:
    {
        returnValue = F("Bernhard-Stern-Weg");
        break;
    }
    case 54426:
    {
        returnValue = F("Bernhard-Stocker-Str.");
        break;
    }
    case 54427:
    {
        returnValue = F("Bernhard-Suttner-Str.");
        break;
    }
    case 54428:
    {
        returnValue = F("Bernhard-Suttner-Weg");
        break;
    }
    case 54429:
    {
        returnValue = F("Bernhard-Sälzer-Platz");
        break;
    }
    case 54430:
    {
        returnValue = F("Bernhard-Tarner-Weg");
        break;
    }
    case 54431:
    {
        returnValue = F("Bernhard-Thiersch-Str.");
        break;
    }
    case 54432:
    {
        returnValue = F("Bernhard-Thywissen-Str.");
        break;
    }
    case 54433:
    {
        returnValue = F("Bernhard-Thüssing-Weg");
        break;
    }
    case 54434:
    {
        returnValue = F("Bernhard-Uhde-Str.");
        break;
    }
    case 54435:
    {
        returnValue = F("Bernhard-Vornhecke-Str.");
        break;
    }
    case 54436:
    {
        returnValue = F("Bernhard-Voß-Str.");
        break;
    }
    case 54437:
    {
        returnValue = F("Bernhard-Walzik-Weg");
        break;
    }
    case 54438:
    {
        returnValue = F("Bernhard-Warnecke-Str.");
        break;
    }
    case 54439:
    {
        returnValue = F("Bernhard-Weg");
        break;
    }
    case 54440:
    {
        returnValue = F("Bernhard-Wehmhoff-Str.");
        break;
    }
    case 54441:
    {
        returnValue = F("Bernhard-Weiss-Platz");
        break;
    }
    case 54442:
    {
        returnValue = F("Bernhard-Welte-Weg");
        break;
    }
    case 54443:
    {
        returnValue = F("Bernhard-Wemmer-Str.");
        break;
    }
    case 54444:
    {
        returnValue = F("Bernhard-Wiemeyer-Str.");
        break;
    }
    case 54445:
    {
        returnValue = F("Bernhard-Wiesch-Str.");
        break;
    }
    case 54446:
    {
        returnValue = F("Bernhard-Wilhelm-Str.");
        break;
    }
    case 54447:
    {
        returnValue = F("Bernhard-Wilking-Str.");
        break;
    }
    case 54448:
    {
        returnValue = F("Bernhard-Winter-Str.");
        break;
    }
    case 54449:
    {
        returnValue = F("Bernhard-Witte-Str.");
        break;
    }
    case 54450:
    {
        returnValue = F("Bernhard-Würth-Weg");
        break;
    }
    case 54451:
    {
        returnValue = F("Bernhard-von-Arnswald-Str.");
        break;
    }
    case 54452:
    {
        returnValue = F("Bernhard-von-Clairvaux-Str.");
        break;
    }
    case 54453:
    {
        returnValue = F("Bernhard-von-Cotta-Str.");
        break;
    }
    case 54454:
    {
        returnValue = F("Bernhard-von-Galen-Str.");
        break;
    }
    case 54455:
    {
        returnValue = F("Bernhard-von-Lippe-Str.");
        break;
    }
    case 54456:
    {
        returnValue = F("Bernhard-von-Steinau-Str.");
        break;
    }
    case 54457:
    {
        returnValue = F("Bernhard-von-Wassel-Str.");
        break;
    }
    case 54458:
    {
        returnValue = F("Bernhard-von-Weimar-Str.");
        break;
    }
    case 54459:
    {
        returnValue = F("Bernhardgasse");
        break;
    }
    case 54460:
    {
        returnValue = F("Bernhardhausenstr.");
        break;
    }
    case 54461:
    {
        returnValue = F("Bernhardiring");
        break;
    }
    case 54462:
    {
        returnValue = F("Bernhardistr.");
        break;
    }
    case 54463:
    {
        returnValue = F("Bernhards Padd");
        break;
    }
    case 54464:
    {
        returnValue = F("Bernhards-Gruber-Weg");
        break;
    }
    case 54465:
    {
        returnValue = F("Bernhardsacker Sträßle");
        break;
    }
    case 54466:
    {
        returnValue = F("Bernhardsacker-Schneise");
        break;
    }
    case 54467:
    {
        returnValue = F("Bernhardsackerschneise");
        break;
    }
    case 54468:
    {
        returnValue = F("Bernhardsbach");
        break;
    }
    case 54469:
    {
        returnValue = F("Bernhardsberg");
        break;
    }
    case 54470:
    {
        returnValue = F("Bernhardsbrunnen");
        break;
    }
    case 54471:
    {
        returnValue = F("Bernhardser Str.");
        break;
    }
    case 54472:
    {
        returnValue = F("Bernhardsgasse");
        break;
    }
    case 54473:
    {
        returnValue = F("Bernhardshaller Str.");
        break;
    }
    case 54474:
    {
        returnValue = F("Bernhardshäuleweg");
        break;
    }
    case 54475:
    {
        returnValue = F("Bernhardshöf");
        break;
    }
    case 54476:
    {
        returnValue = F("Bernhardskreuzweg");
        break;
    }
    case 54477:
    {
        returnValue = F("Bernhardsmüh");
        break;
    }
    case 54478:
    {
        returnValue = F("Bernhardsrain");
        break;
    }
    case 54479:
    {
        returnValue = F("Bernhardstal");
        break;
    }
    case 54480:
    {
        returnValue = F("Bernhardsthal");
        break;
    }
    case 54481:
    {
        returnValue = F("Bernhardstr.");
        break;
    }
    case 54482:
    {
        returnValue = F("Bernhardsweg");
        break;
    }
    case 54483:
    {
        returnValue = F("Bernhardsweiler Str.");
        break;
    }
    case 54484:
    {
        returnValue = F("Bernhardswiesen");
        break;
    }
    case 54485:
    {
        returnValue = F("Bernhardswinden");
        break;
    }
    case 54486:
    {
        returnValue = F("Bernhardswinkel");
        break;
    }
    case 54487:
    {
        returnValue = F("Bernhardt-Dietz-Str.");
        break;
    }
    case 54488:
    {
        returnValue = F("Bernhardt-Vocke-Str.");
        break;
    }
    case 54489:
    {
        returnValue = F("Bernhardtobelweg");
        break;
    }
    case 54490:
    {
        returnValue = F("Bernhardts Weg");
        break;
    }
    case 54491:
    {
        returnValue = F("Bernhardtsgäßchen");
        break;
    }
    case 54492:
    {
        returnValue = F("Bernhardtsmühle");
        break;
    }
    case 54493:
    {
        returnValue = F("Bernhardtstr.");
        break;
    }
    case 54494:
    {
        returnValue = F("Bernhardtsweg");
        break;
    }
    case 54495:
    {
        returnValue = F("Bernhardtweg");
        break;
    }
    case 54496:
    {
        returnValue = F("Bernhardusplatz");
        break;
    }
    case 54497:
    {
        returnValue = F("Bernhardusstr.");
        break;
    }
    case 54498:
    {
        returnValue = F("Bernhardusweg");
        break;
    }
    case 54499:
    {
        returnValue = F("Bernhardweg");
        break;
    }
    case 54500:
    {
        returnValue = F("Bernhauerstr.");
        break;
    }
    case 54501:
    {
        returnValue = F("Bernhausenweg");
        break;
    }
    case 54502:
    {
        returnValue = F("Bernhauser Str.");
        break;
    }
    case 54503:
    {
        returnValue = F("Bernhauser Weg");
        break;
    }
    case 54504:
    {
        returnValue = F("Bernheimer-Platz");
        break;
    }
    case 54505:
    {
        returnValue = F("Bernhof");
        break;
    }
    case 54506:
    {
        returnValue = F("Bernhofer Weg");
        break;
    }
    case 54507:
    {
        returnValue = F("Bernholdstr.");
        break;
    }
    case 54508:
    {
        returnValue = F("Bernholter Str.");
        break;
    }
    case 54509:
    {
        returnValue = F("Bernhäuser Hauptstr.");
        break;
    }
    case 54510:
    {
        returnValue = F("Bernhäuser Str.");
        break;
    }
    case 54511:
    {
        returnValue = F("Bernhäusle");
        break;
    }
    case 54512:
    {
        returnValue = F("Bernigweg");
        break;
    }
    case 54513:
    {
        returnValue = F("Berninghauser Str.");
        break;
    }
    case 54514:
    {
        returnValue = F("Berninghausstr.");
        break;
    }
    case 54515:
    {
        returnValue = F("Berninghoffallee");
        break;
    }
    case 54516:
    {
        returnValue = F("Berningstr.");
        break;
    }
    case 54517:
    {
        returnValue = F("Berningweg");
        break;
    }
    case 54518:
    {
        returnValue = F("Berninstr.");
        break;
    }
    case 54519:
    {
        returnValue = F("Bernitter Str.");
        break;
    }
    case 54520:
    {
        returnValue = F("Bernitter Weg");
        break;
    }
    case 54521:
    {
        returnValue = F("Bernitzower Weg");
        break;
    }
    case 54522:
    {
        returnValue = F("Bernkasteler Platz");
        break;
    }
    case 54523:
    {
        returnValue = F("Bernkasteler Str.");
        break;
    }
    case 54524:
    {
        returnValue = F("Bernkasteler Weg");
        break;
    }
    case 54525:
    {
        returnValue = F("Bernkottstr.");
        break;
    }
    case 54526:
    {
        returnValue = F("Bernla");
        break;
    }
    case 54527:
    {
        returnValue = F("Bernlachstr.");
        break;
    }
    case 54528:
    {
        returnValue = F("Bernlappstr.");
        break;
    }
    case 54529:
    {
        returnValue = F("Bernlaustr.");
        break;
    }
    case 54530:
    {
        returnValue = F("Bernlocher Str.");
        break;
    }
    case 54531:
    {
        returnValue = F("Bernlocher Weg");
        break;
    }
    case 54532:
    {
        returnValue = F("Bernlochnerschluchtweg");
        break;
    }
    case 54533:
    {
        returnValue = F("Bernlochsteigle");
        break;
    }
    case 54534:
    {
        returnValue = F("Bernlochweg");
        break;
    }
    case 54535:
    {
        returnValue = F("Bernloher Weg");
        break;
    }
    case 54536:
    {
        returnValue = F("Bernoldweg");
        break;
    }
    case 54537:
    {
        returnValue = F("Bernoullistr.");
        break;
    }
    case 54538:
    {
        returnValue = F("Bernoweg");
        break;
    }
    case 54539:
    {
        returnValue = F("Bernradstr.");
        break;
    }
    case 54540:
    {
        returnValue = F("Bernrain");
        break;
    }
    case 54541:
    {
        returnValue = F("Bernreiter Weg");
        break;
    }
    case 54542:
    {
        returnValue = F("Bernreiterstr.");
        break;
    }
    case 54543:
    {
        returnValue = F("Bernreuteweg");
        break;
    }
    case 54544:
    {
        returnValue = F("Bernreuther Str.");
        break;
    }
    case 54545:
    {
        returnValue = F("Bernrieder Park");
        break;
    }
    case 54546:
    {
        returnValue = F("Bernrieder Str.");
        break;
    }
    case 54547:
    {
        returnValue = F("Bernrieder Weg");
        break;
    }
    case 54548:
    {
        returnValue = F("Bernrieth");
        break;
    }
    case 54549:
    {
        returnValue = F("Bernriether Str.");
        break;
    }
    case 54550:
    {
        returnValue = F("Bernroder Str.");
        break;
    }
    case 54551:
    {
        returnValue = F("Bernsauelerberg");
        break;
    }
    case 54552:
    {
        returnValue = F("Bernsauer Jagdweg");
        break;
    }
    case 54553:
    {
        returnValue = F("Bernsauplatz");
        break;
    }
    case 54554:
    {
        returnValue = F("Bernsaustr.");
        break;
    }
    case 54555:
    {
        returnValue = F("Bernsbach");
        break;
    }
    case 54556:
    {
        returnValue = F("Bernsbacher Str.");
        break;
    }
    case 54557:
    {
        returnValue = F("Bernsbachplatz");
        break;
    }
    case 54558:
    {
        returnValue = F("Bernsbachstr.");
        break;
    }
    case 54559:
    {
        returnValue = F("Bernsbergerstr.");
        break;
    }
    case 54560:
    {
        returnValue = F("Bernsburger Str.");
        break;
    }
    case 54561:
    {
        returnValue = F("Bernsburger Weg");
        break;
    }
    case 54562:
    {
        returnValue = F("Bernsdorf");
        break;
    }
    case 54563:
    {
        returnValue = F("Bernsdorfer Plan");
        break;
    }
    case 54564:
    {
        returnValue = F("Bernsdorfer Str.");
        break;
    }
    case 54565:
    {
        returnValue = F("Bernsdorfer Weg");
        break;
    }
    case 54566:
    {
        returnValue = F("Bernsdorfstr.");
        break;
    }
    case 54567:
    {
        returnValue = F("Bernsener Str.");
        break;
    }
    case 54568:
    {
        returnValue = F("Bernsfelder Str.");
        break;
    }
    case 54569:
    {
        returnValue = F("Bernsgrüner Str.");
        break;
    }
    case 54570:
    {
        returnValue = F("Bernshausen");
        break;
    }
    case 54571:
    {
        returnValue = F("Bernshausstr.");
        break;
    }
    case 54572:
    {
        returnValue = F("Bernshuck");
        break;
    }
    case 54573:
    {
        returnValue = F("Bernshäuser Str.");
        break;
    }
    case 54574:
    {
        returnValue = F("Bernskamp");
        break;
    }
    case 54575:
    {
        returnValue = F("Bernsmannskamp");
        break;
    }
    case 54576:
    {
        returnValue = F("Bernsmannweg");
        break;
    }
    case 54577:
    {
        returnValue = F("Bernsmeyerweg");
        break;
    }
    case 54578:
    {
        returnValue = F("Bernstadter Str.");
        break;
    }
    case 54579:
    {
        returnValue = F("Bernstal");
        break;
    }
    case 54580:
    {
        returnValue = F("Bernstein");
        break;
    }
    case 54581:
    {
        returnValue = F("Bernstein A");
        break;
    }
    case 54582:
    {
        returnValue = F("Bernstein B");
        break;
    }
    case 54583:
    {
        returnValue = F("Bernstein C");
        break;
    }
    case 54584:
    {
        returnValue = F("Bernstein D");
        break;
    }
    case 54585:
    {
        returnValue = F("Bernstein E");
        break;
    }
    case 54586:
    {
        returnValue = F("Bernsteinallee");
        break;
    }
    case 54587:
    {
        returnValue = F("Bernsteiner Str.");
        break;
    }
    case 54588:
    {
        returnValue = F("Bernsteiner Weg");
        break;
    }
    case 54589:
    {
        returnValue = F("Bernsteingasse");
        break;
    }
    case 54590:
    {
        returnValue = F("Bernsteinpark");
        break;
    }
    case 54591:
    {
        returnValue = F("Bernsteinpromenade");
        break;
    }
    case 54592:
    {
        returnValue = F("Bernsteinring");
        break;
    }
    case 54593:
    {
        returnValue = F("Bernsteinstr.");
        break;
    }
    case 54594:
    {
        returnValue = F("Bernsteinweg");
        break;
    }
    case 54595:
    {
        returnValue = F("Bernstorfer Dorfstr.");
        break;
    }
    case 54596:
    {
        returnValue = F("Bernstorffstr.");
        break;
    }
    case 54597:
    {
        returnValue = F("Bernstorffweg");
        break;
    }
    case 54598:
    {
        returnValue = F("Bernstr.");
        break;
    }
    case 54599:
    {
        returnValue = F("Bernstädter Str.");
        break;
    }
    case 54600:
    {
        returnValue = F("Bernsweg");
        break;
    }
    case 54601:
    {
        returnValue = F("Berntal");
        break;
    }
    case 54602:
    {
        returnValue = F("Berntalstr.");
        break;
    }
    case 54603:
    {
        returnValue = F("Bernte");
        break;
    }
    case 54604:
    {
        returnValue = F("Bernte 32");
        break;
    }
    case 54605:
    {
        returnValue = F("Bernteröder Str.");
        break;
    }
    case 54606:
    {
        returnValue = F("Bernteröder Weg");
        break;
    }
    case 54607:
    {
        returnValue = F("Bernthaler Str.");
        break;
    }
    case 54608:
    {
        returnValue = F("Berntitz");
        break;
    }
    case 54609:
    {
        returnValue = F("Berntitzer Str.");
        break;
    }
    case 54610:
    {
        returnValue = F("Bernusstr.");
        break;
    }
    case 54611:
    {
        returnValue = F("Bernusufer");
        break;
    }
    case 54612:
    {
        returnValue = F("Bernwardring");
        break;
    }
    case 54613:
    {
        returnValue = F("Bernwardshof");
        break;
    }
    case 54614:
    {
        returnValue = F("Bernwardstr.");
        break;
    }
    case 54615:
    {
        returnValue = F("Bernweg");
        break;
    }
    case 54616:
    {
        returnValue = F("Bernweilerstr.");
        break;
    }
    case 54617:
    {
        returnValue = F("Bernwiese");
        break;
    }
    case 54618:
    {
        returnValue = F("Bernwiesenstr.");
        break;
    }
    case 54619:
    {
        returnValue = F("Bernäckerstr.");
        break;
    }
    case 54620:
    {
        returnValue = F("Bernäckerweg");
        break;
    }
    case 54621:
    {
        returnValue = F("Bernöder Weg");
        break;
    }
    case 54622:
    {
        returnValue = F("Bernöwer Dorfstr.");
        break;
    }
    case 54623:
    {
        returnValue = F("Bernöwer Str.");
        break;
    }
    case 54624:
    {
        returnValue = F("Bero-Str.");
        break;
    }
    case 54625:
    {
        returnValue = F("Beroder Str.");
        break;
    }
    case 54626:
    {
        returnValue = F("Berodts Hof");
        break;
    }
    case 54627:
    {
        returnValue = F("Berodtskamp");
        break;
    }
    case 54628:
    {
        returnValue = F("Beroldingenstr.");
        break;
    }
    case 54629:
    {
        returnValue = F("Beroldingenweg");
        break;
    }
    case 54630:
    {
        returnValue = F("Beroldingerstr.");
        break;
    }
    case 54631:
    {
        returnValue = F("Beroldingerweg");
        break;
    }
    case 54632:
    {
        returnValue = F("Berolfweg");
        break;
    }
    case 54633:
    {
        returnValue = F("Berolzheimer Str.");
        break;
    }
    case 54634:
    {
        returnValue = F("Berolzheimerstr.");
        break;
    }
    case 54635:
    {
        returnValue = F("Beromünsterweg");
        break;
    }
    case 54636:
    {
        returnValue = F("Berrefeldweg");
        break;
    }
    case 54637:
    {
        returnValue = F("Berreit");
        break;
    }
    case 54638:
    {
        returnValue = F("Berrendorfer Str.");
        break;
    }
    case 54639:
    {
        returnValue = F("Berrenrather Kirchweg");
        break;
    }
    case 54640:
    {
        returnValue = F("Berrenrather Str.");
        break;
    }
    case 54641:
    {
        returnValue = F("Berresheimer Str.");
        break;
    }
    case 54642:
    {
        returnValue = F("Berreuther Str.");
        break;
    }
    case 54643:
    {
        returnValue = F("Berringhausen");
        break;
    }
    case 54644:
    {
        returnValue = F("Bersarinstr.");
        break;
    }
    case 54645:
    {
        returnValue = F("Berscheid");
        break;
    }
    case 54646:
    {
        returnValue = F("Berscheider Str.");
        break;
    }
    case 54647:
    {
        returnValue = F("Berschelsche");
        break;
    }
    case 54648:
    {
        returnValue = F("Berscheweg");
        break;
    }
    case 54649:
    {
        returnValue = F("Berschied");
        break;
    }
    case 54650:
    {
        returnValue = F("Berschwaldweg");
        break;
    }
    case 54651:
    {
        returnValue = F("Berschweiler Str.");
        break;
    }
    case 54652:
    {
        returnValue = F("Berschweilerstr.");
        break;
    }
    case 54653:
    {
        returnValue = F("Bersenbrücker Str.");
        break;
    }
    case 54654:
    {
        returnValue = F("Bersenkampstr.");
        break;
    }
    case 54655:
    {
        returnValue = F("Bersitter Hof");
        break;
    }
    case 54656:
    {
        returnValue = F("Bersitter Str.");
        break;
    }
    case 54657:
    {
        returnValue = F("Bersröder Str.");
        break;
    }
    case 54658:
    {
        returnValue = F("Bersröder Weg");
        break;
    }
    case 54659:
    {
        returnValue = F("Bersteallee");
        break;
    }
    case 54660:
    {
        returnValue = F("Berster Str.");
        break;
    }
    case 54661:
    {
        returnValue = F("Bersteweg");
        break;
    }
    case 54662:
    {
        returnValue = F("Berstlacher-Hau-Weg");
        break;
    }
    case 54663:
    {
        returnValue = F("Berstlachweg");
        break;
    }
    case 54664:
    {
        returnValue = F("Berstädter Gasse");
        break;
    }
    case 54665:
    {
        returnValue = F("Berstädter Grabenweg");
        break;
    }
    case 54666:
    {
        returnValue = F("Berstädter Str.");
        break;
    }
    case 54667:
    {
        returnValue = F("Berstädter Weg");
        break;
    }
    case 54668:
    {
        returnValue = F("Berswordtgasse");
        break;
    }
    case 54669:
    {
        returnValue = F("Berswordtstr.");
        break;
    }
    case 54670:
    {
        returnValue = F("Bert-Brecht Str.");
        break;
    }
    case 54671:
    {
        returnValue = F("Bert-Brecht-Ring");
        break;
    }
    case 54672:
    {
        returnValue = F("Bert-Brecht-Str.");
        break;
    }
    case 54673:
    {
        returnValue = F("Bert-Brecht-Weg");
        break;
    }
    case 54674:
    {
        returnValue = F("Bert-Fricke-Weg");
        break;
    }
    case 54675:
    {
        returnValue = F("Bert-Heller-Str.");
        break;
    }
    case 54676:
    {
        returnValue = F("Bert-Schratzlseer-Str.");
        break;
    }
    case 54677:
    {
        returnValue = F("Berta Benz Str.");
        break;
    }
    case 54678:
    {
        returnValue = F("Berta-Benz-Str.");
        break;
    }
    case 54679:
    {
        returnValue = F("Berta-Benz-Weg");
        break;
    }
    case 54680:
    {
        returnValue = F("Berta-Gieselbusch-Weg");
        break;
    }
    case 54681:
    {
        returnValue = F("Berta-Heß");
        break;
    }
    case 54682:
    {
        returnValue = F("Berta-Heß-Str.");
        break;
    }
    case 54683:
    {
        returnValue = F("Berta-Hintz-Str.");
        break;
    }
    case 54684:
    {
        returnValue = F("Berta-Hummel-Str.");
        break;
    }
    case 54685:
    {
        returnValue = F("Berta-Höchendorfer-Str.");
        break;
    }
    case 54686:
    {
        returnValue = F("Berta-Karlik-Str.");
        break;
    }
    case 54687:
    {
        returnValue = F("Berta-Kempf-Str.");
        break;
    }
    case 54688:
    {
        returnValue = F("Berta-Landau-Str.");
        break;
    }
    case 54689:
    {
        returnValue = F("Berta-Lungstras-Weg");
        break;
    }
    case 54690:
    {
        returnValue = F("Berta-Morena-Weg");
        break;
    }
    case 54691:
    {
        returnValue = F("Berta-Ottenstein-Str.");
        break;
    }
    case 54692:
    {
        returnValue = F("Berta-Schulz-Str.");
        break;
    }
    case 54693:
    {
        returnValue = F("Berta-Schäfer-Str.");
        break;
    }
    case 54694:
    {
        returnValue = F("Berta-Schäfer-Weg");
        break;
    }
    case 54695:
    {
        returnValue = F("Berta-Semler-Str.");
        break;
    }
    case 54696:
    {
        returnValue = F("Berta-Stoll-Weg");
        break;
    }
    case 54697:
    {
        returnValue = F("Berta-Timmermann-Str.");
        break;
    }
    case 54698:
    {
        returnValue = F("Berta-von-Suttner-Str.");
        break;
    }
    case 54699:
    {
        returnValue = F("Berta-von-Suttner-Weg");
        break;
    }
    case 54700:
    {
        returnValue = F("Bertasruhweg");
        break;
    }
    case 54701:
    {
        returnValue = F("Bertastr.");
        break;
    }
    case 54702:
    {
        returnValue = F("Bertaweg");
        break;
    }
    case 54703:
    {
        returnValue = F("Bertelsbach");
        break;
    }
    case 54704:
    {
        returnValue = F("Bertelsdorfer Höhe");
        break;
    }
    case 54705:
    {
        returnValue = F("Bertelsdorfer Weg");
        break;
    }
    case 54706:
    {
        returnValue = F("Bertelsgrube");
        break;
    }
    case 54707:
    {
        returnValue = F("Bertelshof");
        break;
    }
    case 54708:
    {
        returnValue = F("Bertelsweg");
        break;
    }
    case 54709:
    {
        returnValue = F("Bertenaustr.");
        break;
    }
    case 54710:
    {
        returnValue = F("Bertenweg");
        break;
    }
    case 54711:
    {
        returnValue = F("Berterodaer Weg");
        break;
    }
    case 54712:
    {
        returnValue = F("Berteröder Planweg");
        break;
    }
    case 54713:
    {
        returnValue = F("Bertesweg");
        break;
    }
    case 54714:
    {
        returnValue = F("Bertha von Kattonitz Str.");
        break;
    }
    case 54715:
    {
        returnValue = F("Bertha von Suttner-Str.");
        break;
    }
    case 54716:
    {
        returnValue = F("Bertha-Becker-Weg");
        break;
    }
    case 54717:
    {
        returnValue = F("Bertha-Benz-Platz");
        break;
    }
    case 54718:
    {
        returnValue = F("Bertha-Benz-Ring");
        break;
    }
    case 54719:
    {
        returnValue = F("Bertha-Benz-Str.");
        break;
    }
    case 54720:
    {
        returnValue = F("Bertha-Benz-Weg");
        break;
    }
    case 54721:
    {
        returnValue = F("Bertha-Bosch-Weg");
        break;
    }
    case 54722:
    {
        returnValue = F("Bertha-Dinkel-Weg");
        break;
    }
    case 54723:
    {
        returnValue = F("Bertha-Karrillon-Str.");
        break;
    }
    case 54724:
    {
        returnValue = F("Bertha-Kipfmüller-Str.");
        break;
    }
    case 54725:
    {
        returnValue = F("Bertha-Michaelis-Str.");
        break;
    }
    case 54726:
    {
        returnValue = F("Bertha-Middelhauve-Str.");
        break;
    }
    case 54727:
    {
        returnValue = F("Bertha-Pappenheim-Platz");
        break;
    }
    case 54728:
    {
        returnValue = F("Bertha-Reinecke-Str.");
        break;
    }
    case 54729:
    {
        returnValue = F("Bertha-Schneyer-Str.");
        break;
    }
    case 54730:
    {
        returnValue = F("Bertha-Treib-Str.");
        break;
    }
    case 54731:
    {
        returnValue = F("Bertha-Weill-Str.");
        break;
    }
    case 54732:
    {
        returnValue = F("Bertha-von Suttner-Ring");
        break;
    }
    case 54733:
    {
        returnValue = F("Bertha-von Suttner-Str.");
        break;
    }
    case 54734:
    {
        returnValue = F("Bertha-von-Suttner-Allee");
        break;
    }
    case 54735:
    {
        returnValue = F("Bertha-von-Suttner-Anlage");
        break;
    }
    case 54736:
    {
        returnValue = F("Bertha-von-Suttner-Hof");
        break;
    }
    case 54737:
    {
        returnValue = F("Bertha-von-Suttner-Platz");
        break;
    }
    case 54738:
    {
        returnValue = F("Bertha-von-Suttner-Ring");
        break;
    }
    case 54739:
    {
        returnValue = F("Bertha-von-Suttner-Stieg");
        break;
    }
    case 54740:
    {
        returnValue = F("Bertha-von-Suttner-Str.");
        break;
    }
    case 54741:
    {
        returnValue = F("Bertha-von-Suttner-Weg");
        break;
    }
    case 54742:
    {
        returnValue = F("Berthastr.");
        break;
    }
    case 54743:
    {
        returnValue = F("Berthe-Morisot-Ring");
        break;
    }
    case 54744:
    {
        returnValue = F("Bertheaustr.");
        break;
    }
    case 54745:
    {
        returnValue = F("Berthelsdorf");
        break;
    }
    case 54746:
    {
        returnValue = F("Berthelsdorfer Str.");
        break;
    }
    case 54747:
    {
        returnValue = F("Bertheltspromenade");
        break;
    }
    case 54748:
    {
        returnValue = F("Bertheltstr.");
        break;
    }
    case 54749:
    {
        returnValue = F("Berthin-Bleeg-Str.");
        break;
    }
    case 54750:
    {
        returnValue = F("Berthke-Richtenberger Chaussee");
        break;
    }
    case 54751:
    {
        returnValue = F("Berthker Damm");
        break;
    }
    case 54752:
    {
        returnValue = F("Berthold-Auerbach-Str.");
        break;
    }
    case 54753:
    {
        returnValue = F("Berthold-Beitz-Platz");
        break;
    }
    case 54754:
    {
        returnValue = F("Berthold-Beitz-Str.");
        break;
    }
    case 54755:
    {
        returnValue = F("Berthold-Bott-Str.");
        break;
    }
    case 54756:
    {
        returnValue = F("Berthold-Brecht-Weg");
        break;
    }
    case 54757:
    {
        returnValue = F("Berthold-Dege-Weg");
        break;
    }
    case 54758:
    {
        returnValue = F("Berthold-Delbrück-Str.");
        break;
    }
    case 54759:
    {
        returnValue = F("Berthold-Eicke-Weg");
        break;
    }
    case 54760:
    {
        returnValue = F("Berthold-Frost-Weg");
        break;
    }
    case 54761:
    {
        returnValue = F("Berthold-Günther-Platz");
        break;
    }
    case 54762:
    {
        returnValue = F("Berthold-Haller-Str.");
        break;
    }
    case 54763:
    {
        returnValue = F("Berthold-Hupmann-Str.");
        break;
    }
    case 54764:
    {
        returnValue = F("Berthold-Ketterer-Weg");
        break;
    }
    case 54765:
    {
        returnValue = F("Berthold-Koch-Platz");
        break;
    }
    case 54766:
    {
        returnValue = F("Berthold-Kopp-Str.");
        break;
    }
    case 54767:
    {
        returnValue = F("Berthold-Krieger-Ring");
        break;
    }
    case 54768:
    {
        returnValue = F("Berthold-Lauffmann-Weg");
        break;
    }
    case 54769:
    {
        returnValue = F("Berthold-Leibinger-Str.");
        break;
    }
    case 54770:
    {
        returnValue = F("Berthold-Lissner-Str.");
        break;
    }
    case 54771:
    {
        returnValue = F("Berthold-Mogel-Str.");
        break;
    }
    case 54772:
    {
        returnValue = F("Berthold-Nelke-Weg");
        break;
    }
    case 54773:
    {
        returnValue = F("Berthold-Rein-Str.");
        break;
    }
    case 54774:
    {
        returnValue = F("Berthold-Roggan-Ring");
        break;
    }
    case 54775:
    {
        returnValue = F("Berthold-Schlotzhauer-Str.");
        break;
    }
    case 54776:
    {
        returnValue = F("Berthold-Schwarz-Str.");
        break;
    }
    case 54777:
    {
        returnValue = F("Berthold-Walter-Str.");
        break;
    }
    case 54778:
    {
        returnValue = F("Berthold-von-Henneberg-Str.");
        break;
    }
    case 54779:
    {
        returnValue = F("Berthold-von-Stein-Str.");
        break;
    }
    case 54780:
    {
        returnValue = F("Berthold-von-Sternberg-Platz");
        break;
    }
    case 54781:
    {
        returnValue = F("Bertholdallee");
        break;
    }
    case 54782:
    {
        returnValue = F("Bertholdplatz");
        break;
    }
    case 54783:
    {
        returnValue = F("Bertholdshaldenweg");
        break;
    }
    case 54784:
    {
        returnValue = F("Bertholdshofener Weg");
        break;
    }
    case 54785:
    {
        returnValue = F("Bertholdstieg");
        break;
    }
    case 54786:
    {
        returnValue = F("Bertholdstr.");
        break;
    }
    case 54787:
    {
        returnValue = F("Bertholdstr. - Brücke");
        break;
    }
    case 54788:
    {
        returnValue = F("Bertholdsweg");
        break;
    }
    case 54789:
    {
        returnValue = F("Bertholdtstr.");
        break;
    }
    case 54790:
    {
        returnValue = F("Bertholdus-Pfenningh-Str.");
        break;
    }
    case 54791:
    {
        returnValue = F("Bertholdusstr.");
        break;
    }
    case 54792:
    {
        returnValue = F("Bertholdweg");
        break;
    }
    case 54793:
    {
        returnValue = F("Bertholt-Brecht-Str.");
        break;
    }
    case 54794:
    {
        returnValue = F("Berthostr.");
        break;
    }
    case 54795:
    {
        returnValue = F("Berti-Breuer-Weber-Str.");
        break;
    }
    case 54796:
    {
        returnValue = F("Berti-Thieser-Weg");
        break;
    }
    case 54797:
    {
        returnValue = F("Bertikower Str.");
        break;
    }
    case 54798:
    {
        returnValue = F("Bertikower Weg");
        break;
    }
    case 54799:
    {
        returnValue = F("Berting");
        break;
    }
    case 54800:
    {
        returnValue = F("Bertinger Chaussee");
        break;
    }
    case 54801:
    {
        returnValue = F("Bertinger Str.");
        break;
    }
    case 54802:
    {
        returnValue = F("Bertingloher Weg");
        break;
    }
    case 54803:
    {
        returnValue = F("Bertinistr.");
        break;
    }
    case 54804:
    {
        returnValue = F("Bertiniweg");
        break;
    }
    case 54805:
    {
        returnValue = F("Bertkower Str.");
        break;
    }
    case 54806:
    {
        returnValue = F("Bertl-Bormann-Str.");
        break;
    }
    case 54807:
    {
        returnValue = F("Bertleinstr.");
        break;
    }
    case 54808:
    {
        returnValue = F("Bertlicher Blatt");
        break;
    }
    case 54809:
    {
        returnValue = F("Bertlicher Str.");
        break;
    }
    case 54810:
    {
        returnValue = F("Bertlingen");
        break;
    }
    case 54811:
    {
        returnValue = F("Bertlinger Str.");
        break;
    }
    case 54812:
    {
        returnValue = F("Bertlingsgasse");
        break;
    }
    case 54813:
    {
        returnValue = F("Bertold-Augenstein-Str.");
        break;
    }
    case 54814:
    {
        returnValue = F("Bertold-Schmidt-Platz");
        break;
    }
    case 54815:
    {
        returnValue = F("Bertoldsheimer Str.");
        break;
    }
    case 54816:
    {
        returnValue = F("Bertoldshofener Weg");
        break;
    }
    case 54817:
    {
        returnValue = F("Bertoldsstr.");
        break;
    }
    case 54818:
    {
        returnValue = F("Bertoldstr.");
        break;
    }
    case 54819:
    {
        returnValue = F("Bertoldweg");
        break;
    }
    case 54820:
    {
        returnValue = F("Bertolt-Brecht-Allee");
        break;
    }
    case 54821:
    {
        returnValue = F("Bertolt-Brecht-Platz");
        break;
    }
    case 54822:
    {
        returnValue = F("Bertolt-Brecht-Ring");
        break;
    }
    case 54823:
    {
        returnValue = F("Bertolt-Brecht-Str.");
        break;
    }
    case 54824:
    {
        returnValue = F("Bertolt-Brecht-Weg");
        break;
    }
    case 54825:
    {
        returnValue = F("Bertradastr.");
        break;
    }
    case 54826:
    {
        returnValue = F("Bertradisstr.");
        break;
    }
    case 54827:
    {
        returnValue = F("Bertram-Blank-Str.");
        break;
    }
    case 54828:
    {
        returnValue = F("Bertram-Mehler-Weg");
        break;
    }
    case 54829:
    {
        returnValue = F("Bertram-Schaefer-Str.");
        break;
    }
    case 54830:
    {
        returnValue = F("Bertram-Schrot-Str.");
        break;
    }
    case 54831:
    {
        returnValue = F("Bertram-Wieland-Str.");
        break;
    }
    case 54832:
    {
        returnValue = F("Bertrams-Jagdweg");
        break;
    }
    case 54833:
    {
        returnValue = F("Bertramshof");
        break;
    }
    case 54834:
    {
        returnValue = F("Bertramsmühle");
        break;
    }
    case 54835:
    {
        returnValue = F("Bertramsplatz");
        break;
    }
    case 54836:
    {
        returnValue = F("Bertramstr.");
        break;
    }
    case 54837:
    {
        returnValue = F("Bertramsweg");
        break;
    }
    case 54838:
    {
        returnValue = F("Bertrand-Roth-Str.");
        break;
    }
    case 54839:
    {
        returnValue = F("Bertricher Str.");
        break;
    }
    case 54840:
    {
        returnValue = F("Bertrodtstr.");
        break;
    }
    case 54841:
    {
        returnValue = F("Bertroisweg");
        break;
    }
    case 54842:
    {
        returnValue = F("Bertschen");
        break;
    }
    case 54843:
    {
        returnValue = F("Bertschensteinweg");
        break;
    }
    case 54844:
    {
        returnValue = F("Bertschstr.");
        break;
    }
    case 54845:
    {
        returnValue = F("Bertsdorfer Str.");
        break;
    }
    case 54846:
    {
        returnValue = F("Bertsdorfer Weg");
        break;
    }
    case 54847:
    {
        returnValue = F("Bertuchstr.");
        break;
    }
    case 54848:
    {
        returnValue = F("Bertulfstr.");
        break;
    }
    case 54849:
    {
        returnValue = F("Bertzweg");
        break;
    }
    case 54850:
    {
        returnValue = F("Berufsbildungsstr.");
        break;
    }
    case 54851:
    {
        returnValue = F("Berufsschulstr.");
        break;
    }
    case 54852:
    {
        returnValue = F("Berumer Ring");
        break;
    }
    case 54853:
    {
        returnValue = F("Berumer Str.");
        break;
    }
    case 54854:
    {
        returnValue = F("Beruser Str.");
        break;
    }
    case 54855:
    {
        returnValue = F("Berverath");
        break;
    }
    case 54856:
    {
        returnValue = F("Berverath (neu)");
        break;
    }
    case 54857:
    {
        returnValue = F("Berverstr.");
        break;
    }
    case 54858:
    {
        returnValue = F("Berwanger Park");
        break;
    }
    case 54859:
    {
        returnValue = F("Berwanger Pfad");
        break;
    }
    case 54860:
    {
        returnValue = F("Berwanger Str.");
        break;
    }
    case 54861:
    {
        returnValue = F("Berwanger Sträßle");
        break;
    }
    case 54862:
    {
        returnValue = F("Berwanger Weg");
        break;
    }
    case 54863:
    {
        returnValue = F("Berwangerstr.");
        break;
    }
    case 54864:
    {
        returnValue = F("Berwangerweg");
        break;
    }
    case 54865:
    {
        returnValue = F("Berwangweg");
        break;
    }
    case 54866:
    {
        returnValue = F("Berwartplatz");
        break;
    }
    case 54867:
    {
        returnValue = F("Berwartshäuser Str.");
        break;
    }
    case 54868:
    {
        returnValue = F("Berwartsteinstr.");
        break;
    }
    case 54869:
    {
        returnValue = F("Berwartsteinweg");
        break;
    }
    case 54870:
    {
        returnValue = F("Berwartweg");
        break;
    }
    case 54871:
    {
        returnValue = F("Berwicker Str.");
        break;
    }
    case 54872:
    {
        returnValue = F("Berwickstr.");
        break;
    }
    case 54873:
    {
        returnValue = F("Berwindstr.");
        break;
    }
    case 54874:
    {
        returnValue = F("Berwinkel");
        break;
    }
    case 54875:
    {
        returnValue = F("Berwitzer Str.");
        break;
    }
    case 54876:
    {
        returnValue = F("Berxen");
        break;
    }
    case 54877:
    {
        returnValue = F("Berxer Holz");
        break;
    }
    case 54878:
    {
        returnValue = F("Beryllstr.");
        break;
    }
    case 54879:
    {
        returnValue = F("Berzallee");
        break;
    }
    case 54880:
    {
        returnValue = F("Berzbach");
        break;
    }
    case 54881:
    {
        returnValue = F("Berzberger Fahrt");
        break;
    }
    case 54882:
    {
        returnValue = F("Berzbuirer Str.");
        break;
    }
    case 54883:
    {
        returnValue = F("Berzdorfer Str.");
        break;
    }
    case 54884:
    {
        returnValue = F("Berzeliusstr.");
        break;
    }
    case 54885:
    {
        returnValue = F("Berßeler Str.");
        break;
    }
    case 54886:
    {
        returnValue = F("Berßener Str.");
        break;
    }
    case 54887:
    {
        returnValue = F("Berßler Str.");
        break;
    }
    case 54888:
    {
        returnValue = F("Berßler Weg");
        break;
    }
    case 54889:
    {
        returnValue = F("Besantwiete");
        break;
    }
    case 54890:
    {
        returnValue = F("Besanweg");
        break;
    }
    case 54891:
    {
        returnValue = F("Besançonallee");
        break;
    }
    case 54892:
    {
        returnValue = F("Bescher Str.");
        break;
    }
    case 54893:
    {
        returnValue = F("Beschert Glück");
        break;
    }
    case 54894:
    {
        returnValue = F("Beschkamp");
        break;
    }
    case 54895:
    {
        returnValue = F("Beschotenweg");
        break;
    }
    case 54896:
    {
        returnValue = F("Besebrucher Str.");
        break;
    }
    case 54897:
    {
        returnValue = F("Besel");
        break;
    }
    case 54898:
    {
        returnValue = F("Beseler Str.");
        break;
    }
    case 54899:
    {
        returnValue = F("Beselerallee");
        break;
    }
    case 54900:
    {
        returnValue = F("Beselerstr.");
        break;
    }
    case 54901:
    {
        returnValue = F("Beselerweg");
        break;
    }
    case 54902:
    {
        returnValue = F("Beselestr.");
        break;
    }
    case 54903:
    {
        returnValue = F("Beselicher Str.");
        break;
    }
    case 54904:
    {
        returnValue = F("Beselicher Weg");
        break;
    }
    case 54905:
    {
        returnValue = F("Beseliner Parkweg");
        break;
    }
    case 54906:
    {
        returnValue = F("Beselmühle");
        break;
    }
    case 54907:
    {
        returnValue = F("Besembennerkreisel");
        break;
    }
    case 54908:
    {
        returnValue = F("Besembennerweg");
        break;
    }
    case 54909:
    {
        returnValue = F("Besemfelderweg");
        break;
    }
    case 54910:
    {
        returnValue = F("Besenacker");
        break;
    }
    case 54911:
    {
        returnValue = F("Besenbek");
        break;
    }
    case 54912:
    {
        returnValue = F("Besenbeker Str.");
        break;
    }
    case 54913:
    {
        returnValue = F("Besenbindergasse");
        break;
    }
    case 54914:
    {
        returnValue = F("Besenbinderstieg");
        break;
    }
    case 54915:
    {
        returnValue = F("Besenbinderstr.");
        break;
    }
    case 54916:
    {
        returnValue = F("Besenbinderweg");
        break;
    }
    case 54917:
    {
        returnValue = F("Besenborn");
        break;
    }
    case 54918:
    {
        returnValue = F("Besenbrook");
        break;
    }
    case 54919:
    {
        returnValue = F("Besenbuschkuhle");
        break;
    }
    case 54920:
    {
        returnValue = F("Besendahlweg");
        break;
    }
    case 54921:
    {
        returnValue = F("Besenfelder Str.");
        break;
    }
    case 54922:
    {
        returnValue = F("Besenfelder Weg");
        break;
    }
    case 54923:
    {
        returnValue = F("Besenfleck");
        break;
    }
    case 54924:
    {
        returnValue = F("Besengasse");
        break;
    }
    case 54925:
    {
        returnValue = F("Besengassl");
        break;
    }
    case 54926:
    {
        returnValue = F("Besengaustr.");
        break;
    }
    case 54927:
    {
        returnValue = F("Besengässchen");
        break;
    }
    case 54928:
    {
        returnValue = F("Besenhausen");
        break;
    }
    case 54929:
    {
        returnValue = F("Besenheide");
        break;
    }
    case 54930:
    {
        returnValue = F("Besenhorst");
        break;
    }
    case 54931:
    {
        returnValue = F("Besenhäuser Str.");
        break;
    }
    case 54932:
    {
        returnValue = F("Besenkamp");
        break;
    }
    case 54933:
    {
        returnValue = F("Besenmarkt");
        break;
    }
    case 54934:
    {
        returnValue = F("Besenrain");
        break;
    }
    case 54935:
    {
        returnValue = F("Besenreiher Weg");
        break;
    }
    case 54936:
    {
        returnValue = F("Besenriede");
        break;
    }
    case 54937:
    {
        returnValue = F("Besenrode");
        break;
    }
    case 54938:
    {
        returnValue = F("Besenstiel");
        break;
    }
    case 54939:
    {
        returnValue = F("Besenstr.");
        break;
    }
    case 54940:
    {
        returnValue = F("Besenweg");
        break;
    }
    case 54941:
    {
        returnValue = F("Besenäckerstr.");
        break;
    }
    case 54942:
    {
        returnValue = F("Beser Weg");
        break;
    }
    case 54943:
    {
        returnValue = F("Beseritzer Str.");
        break;
    }
    case 54944:
    {
        returnValue = F("Besetzte Gasse");
        break;
    }
    case 54945:
    {
        returnValue = F("Besgeser Str.");
        break;
    }
    case 54946:
    {
        returnValue = F("Besigheimer Str.");
        break;
    }
    case 54947:
    {
        returnValue = F("Besigheimer Weg");
        break;
    }
    case 54948:
    {
        returnValue = F("Besingstr.");
        break;
    }
    case 54949:
    {
        returnValue = F("Besinnungsweg");
        break;
    }
    case 54950:
    {
        returnValue = F("Besinnungsweg RuheForst Alte Ruh Steinfeild/Mariabuchen");
        break;
    }
    case 54951:
    {
        returnValue = F("Beskenstr.");
        break;
    }
    case 54952:
    {
        returnValue = F("Beskidenring");
        break;
    }
    case 54953:
    {
        returnValue = F("Beskidenstr.");
        break;
    }
    case 54954:
    {
        returnValue = F("Beskidenweg");
        break;
    }
    case 54955:
    {
        returnValue = F("Beslerstr.");
        break;
    }
    case 54956:
    {
        returnValue = F("Besoldstr.");
        break;
    }
    case 54957:
    {
        returnValue = F("Bessarabienstr.");
        break;
    }
    case 54958:
    {
        returnValue = F("Bessel");
        break;
    }
    case 54959:
    {
        returnValue = F("Besselberger Weg");
        break;
    }
    case 54960:
    {
        returnValue = F("Besselbrock");
        break;
    }
    case 54961:
    {
        returnValue = F("Besselhof");
        break;
    }
    case 54962:
    {
        returnValue = F("Besselkamp");
        break;
    }
    case 54963:
    {
        returnValue = F("Besselstr.");
        break;
    }
    case 54964:
    {
        returnValue = F("Bessemer Str.");
        break;
    }
    case 54965:
    {
        returnValue = F("Bessemerstr.");
        break;
    }
    case 54966:
    {
        returnValue = F("Bessemerweg");
        break;
    }
    case 54967:
    {
        returnValue = F("Bessemsland");
        break;
    }
    case 54968:
    {
        returnValue = F("Bessenbacher Weg");
        break;
    }
    case 54969:
    {
        returnValue = F("Bessenbachstr.");
        break;
    }
    case 54970:
    {
        returnValue = F("Bessenicher Mühle");
        break;
    }
    case 54971:
    {
        returnValue = F("Bessenmühle");
        break;
    }
    case 54972:
    {
        returnValue = F("Bessenstr.");
        break;
    }
    case 54973:
    {
        returnValue = F("Besser Str.");
        break;
    }
    case 54974:
    {
        returnValue = F("Besserabienstr.");
        break;
    }
    case 54975:
    {
        returnValue = F("Bessere Zukunft");
        break;
    }
    case 54976:
    {
        returnValue = F("Besserer Weg");
        break;
    }
    case 54977:
    {
        returnValue = F("Bessererstr.");
        break;
    }
    case 54978:
    {
        returnValue = F("Bessererweg");
        break;
    }
    case 54979:
    {
        returnValue = F("Bessergasse");
        break;
    }
    case 54980:
    {
        returnValue = F("Bessern");
        break;
    }
    case 54981:
    {
        returnValue = F("Besserstr.");
        break;
    }
    case 54982:
    {
        returnValue = F("Bessin");
        break;
    }
    case 54983:
    {
        returnValue = F("Bessiner Haken");
        break;
    }
    case 54984:
    {
        returnValue = F("Bessinger Str.");
        break;
    }
    case 54985:
    {
        returnValue = F("Besslinghook");
        break;
    }
    case 54986:
    {
        returnValue = F("Bessunger Str.");
        break;
    }
    case 54987:
    {
        returnValue = F("Bessunger Weg");
        break;
    }
    case 54988:
    {
        returnValue = F("Bestattungswald Hambörn");
        break;
    }
    case 54989:
    {
        returnValue = F("Beste-Park");
        break;
    }
    case 54990:
    {
        returnValue = F("Bestehornpark");
        break;
    }
    case 54991:
    {
        returnValue = F("Bestehornstr.");
        break;
    }
    case 54992:
    {
        returnValue = F("Bestehöhe");
        break;
    }
    case 54993:
    {
        returnValue = F("Bestelmeyerstr.");
        break;
    }
    case 54994:
    {
        returnValue = F("Bestelstr.");
        break;
    }
    case 54995:
    {
        returnValue = F("Bestenbosteler Str.");
        break;
    }
    case 54996:
    {
        returnValue = F("Bestener Str.");
        break;
    }
    case 54997:
    {
        returnValue = F("Bestener Transformatorenweg");
        break;
    }
    case 54998:
    {
        returnValue = F("Bestengasse");
        break;
    }
    case 54999:
    {
        returnValue = F("Bestenheider Höhenweg");
        break;
    }
    case 55000:
    {
        returnValue = F("Bestenheider Landstr.");
        break;
    }
    case 55001:
    {
        returnValue = F("Bestenseer Chaussee");
        break;
    }
    case 55002:
    {
        returnValue = F("Bestenseer Str.");
        break;
    }
    case 55003:
    {
        returnValue = F("Bestenweg");
        break;
    }
    case 55004:
    {
        returnValue = F("Besters Fließ Ost");
        break;
    }
    case 55005:
    {
        returnValue = F("Bestestieg");
        break;
    }
    case 55006:
    {
        returnValue = F("Bestestr.");
        break;
    }
    case 55007:
    {
        returnValue = F("Besteweg");
        break;
    }
    case 55008:
    {
        returnValue = F("Bestewiesenschneise");
        break;
    }
    case 55009:
    {
        returnValue = F("Besthübel");
        break;
    }
    case 55010:
    {
        returnValue = F("Bestlenstr.");
        break;
    }
    case 55011:
    {
        returnValue = F("Bestlinstr.");
        break;
    }
    case 55012:
    {
        returnValue = F("Bestmannsweg");
        break;
    }
    case 55013:
    {
        returnValue = F("Bestmannweg");
        break;
    }
    case 55014:
    {
        returnValue = F("Besttorritzen");
        break;
    }
    case 55015:
    {
        returnValue = F("Bestwiger Str.");
        break;
    }
    case 55016:
    {
        returnValue = F("Besucher Eingang/Ausgang");
        break;
    }
    case 55017:
    {
        returnValue = F("Besucherpark");
        break;
    }
    case 55018:
    {
        returnValue = F("Besucherplattform");
        break;
    }
    case 55019:
    {
        returnValue = F("Besucherweg");
        break;
    }
    case 55020:
    {
        returnValue = F("Bet-Shemesh-Str.");
        break;
    }
    case 55021:
    {
        returnValue = F("Betberger Str.");
        break;
    }
    case 55022:
    {
        returnValue = F("Betelwiese");
        break;
    }
    case 55023:
    {
        returnValue = F("Betenbarg");
        break;
    }
    case 55024:
    {
        returnValue = F("Betenbrunner Str.");
        break;
    }
    case 55025:
    {
        returnValue = F("Betende Hände Rundweg");
        break;
    }
    case 55026:
    {
        returnValue = F("Betentalstr.");
        break;
    }
    case 55027:
    {
        returnValue = F("Betgasse");
        break;
    }
    case 55028:
    {
        returnValue = F("Betgestr.");
        break;
    }
    case 55029:
    {
        returnValue = F("Bethanienallee");
        break;
    }
    case 55030:
    {
        returnValue = F("Bethanienstr.");
        break;
    }
    case 55031:
    {
        returnValue = F("Bethau");
        break;
    }
    case 55032:
    {
        returnValue = F("Bethauer Str.");
        break;
    }
    case 55033:
    {
        returnValue = F("Bethausweg");
        break;
    }
    case 55034:
    {
        returnValue = F("Bethegasse");
        break;
    }
    case 55035:
    {
        returnValue = F("Bethelner Str.");
        break;
    }
    case 55036:
    {
        returnValue = F("Bethelstr.");
        break;
    }
    case 55037:
    {
        returnValue = F("Bethelweg");
        break;
    }
    case 55038:
    {
        returnValue = F("Betheläcker");
        break;
    }
    case 55039:
    {
        returnValue = F("Bethenhausen");
        break;
    }
    case 55040:
    {
        returnValue = F("Bethenhausener Str.");
        break;
    }
    case 55041:
    {
        returnValue = F("Bethentäfeleweg");
        break;
    }
    case 55042:
    {
        returnValue = F("Betheny-Allee");
        break;
    }
    case 55043:
    {
        returnValue = F("Bether Dorfstr.");
        break;
    }
    case 55044:
    {
        returnValue = F("Bether Höhe");
        break;
    }
    case 55045:
    {
        returnValue = F("Bether Ring");
        break;
    }
    case 55046:
    {
        returnValue = F("Bether Str.");
        break;
    }
    case 55047:
    {
        returnValue = F("Bether Weg");
        break;
    }
    case 55048:
    {
        returnValue = F("Bethlehem");
        break;
    }
    case 55049:
    {
        returnValue = F("Bethlehem links");
        break;
    }
    case 55050:
    {
        returnValue = F("Bethlehem rechts");
        break;
    }
    case 55051:
    {
        returnValue = F("Bethlehem-West");
        break;
    }
    case 55052:
    {
        returnValue = F("Bethlehemer Allee");
        break;
    }
    case 55053:
    {
        returnValue = F("Bethlehemer Str.");
        break;
    }
    case 55054:
    {
        returnValue = F("Bethlehemstr.");
        break;
    }
    case 55055:
    {
        returnValue = F("Bethlehemweg");
        break;
    }
    case 55056:
    {
        returnValue = F("Bethmannstr.");
        break;
    }
    case 55057:
    {
        returnValue = F("Bethnal-Green-Str.");
        break;
    }
    case 55058:
    {
        returnValue = F("Betholzweg");
        break;
    }
    case 55059:
    {
        returnValue = F("Bethunestr.");
        break;
    }
    case 55060:
    {
        returnValue = F("Betmauerstr.");
        break;
    }
    case 55061:
    {
        returnValue = F("Betmenstr.");
        break;
    }
    case 55062:
    {
        returnValue = F("Betonienweg");
        break;
    }
    case 55063:
    {
        returnValue = F("Betonrohr als Steg");
        break;
    }
    case 55064:
    {
        returnValue = F("Betonstr.");
        break;
    }
    case 55065:
    {
        returnValue = F("Betonsträßle");
        break;
    }
    case 55066:
    {
        returnValue = F("Betonweg");
        break;
    }
    case 55067:
    {
        returnValue = F("Betonwerkstr.");
        break;
    }
    case 55068:
    {
        returnValue = F("Betpfad");
        break;
    }
    case 55069:
    {
        returnValue = F("Betraer Steige");
        break;
    }
    case 55070:
    {
        returnValue = F("Betriebsgelände");
        break;
    }
    case 55071:
    {
        returnValue = F("Betriebsplatz");
        break;
    }
    case 55072:
    {
        returnValue = F("Betriebsstr.");
        break;
    }
    case 55073:
    {
        returnValue = F("Betriebsstr. Wupperverband");
        break;
    }
    case 55074:
    {
        returnValue = F("Betriebsweg");
        break;
    }
    case 55075:
    {
        returnValue = F("Betriebsweg Deutsche Bahn");
        break;
    }
    case 55076:
    {
        returnValue = F("Betriebsweg Lösseler Bach");
        break;
    }
    case 55077:
    {
        returnValue = F("Betriebsweg Schleuse");
        break;
    }
    case 55078:
    {
        returnValue = F("Betriebsweg links des DEK's");
        break;
    }
    case 55079:
    {
        returnValue = F("Betschgrabenstr.");
        break;
    }
    case 55080:
    {
        returnValue = F("Bettackerstr.");
        break;
    }
    case 55081:
    {
        returnValue = F("Bettbrunner Str.");
        break;
    }
    case 55082:
    {
        returnValue = F("Bettburgstr.");
        break;
    }
    case 55083:
    {
        returnValue = F("Bettelackerweg");
        break;
    }
    case 55084:
    {
        returnValue = F("Bettelbaum");
        break;
    }
    case 55085:
    {
        returnValue = F("Bettelbrunnenweg");
        break;
    }
    case 55086:
    {
        returnValue = F("Bettelbrücke");
        break;
    }
    case 55087:
    {
        returnValue = F("Bettelecke");
        break;
    }
    case 55088:
    {
        returnValue = F("Bettelenstr.");
        break;
    }
    case 55089:
    {
        returnValue = F("Bettelfloschenweg");
        break;
    }
    case 55090:
    {
        returnValue = F("Bettelgasse");
        break;
    }
    case 55091:
    {
        returnValue = F("Bettelgässchen");
        break;
    }
    case 55092:
    {
        returnValue = F("Bettelhecker Str.");
        break;
    }
    case 55093:
    {
        returnValue = F("Bettelhofen");
        break;
    }
    case 55094:
    {
        returnValue = F("Bettelmann");
        break;
    }
    case 55095:
    {
        returnValue = F("Bettelmanns Umkehr");
        break;
    }
    case 55096:
    {
        returnValue = F("Bettelmannshaldenweg");
        break;
    }
    case 55097:
    {
        returnValue = F("Bettelmannsreute");
        break;
    }
    case 55098:
    {
        returnValue = F("Bettelmannstieg");
        break;
    }
    case 55099:
    {
        returnValue = F("Bettelmannsweg");
        break;
    }
    case 55100:
    {
        returnValue = F("Bettelmädelweg");
        break;
    }
    case 55101:
    {
        returnValue = F("Bettelpfad");
        break;
    }
    case 55102:
    {
        returnValue = F("Bettelsack");
        break;
    }
    case 55103:
    {
        returnValue = F("Bettelshain");
        break;
    }
    case 55104:
    {
        returnValue = F("Bettelsteig");
        break;
    }
    case 55105:
    {
        returnValue = F("Bettelsteigle");
        break;
    }
    case 55106:
    {
        returnValue = F("Bettelstockweg");
        break;
    }
    case 55107:
    {
        returnValue = F("Bettelstr.");
        break;
    }
    case 55108:
    {
        returnValue = F("Bettelwaldweg");
        break;
    }
    case 55109:
    {
        returnValue = F("Bettelwasen");
        break;
    }
    case 55110:
    {
        returnValue = F("Bettelweg");
        break;
    }
    case 55111:
    {
        returnValue = F("Betteläcker");
        break;
    }
    case 55112:
    {
        returnValue = F("Bettemburgstr.");
        break;
    }
    case 55113:
    {
        returnValue = F("Bettenacker");
        break;
    }
    case 55114:
    {
        returnValue = F("Bettenbach");
        break;
    }
    case 55115:
    {
        returnValue = F("Bettenberg");
        break;
    }
    case 55116:
    {
        returnValue = F("Bettenbergstr.");
        break;
    }
    case 55117:
    {
        returnValue = F("Bettendorfer Str.");
        break;
    }
    case 55118:
    {
        returnValue = F("Bettendorfplatz");
        break;
    }
    case 55119:
    {
        returnValue = F("Bettendorfring");
        break;
    }
    case 55120:
    {
        returnValue = F("Bettenenweg");
        break;
    }
    case 55121:
    {
        returnValue = F("Bettenfelder Str.");
        break;
    }
    case 55122:
    {
        returnValue = F("Bettengasse");
        break;
    }
    case 55123:
    {
        returnValue = F("Bettengraben");
        break;
    }
    case 55124:
    {
        returnValue = F("Bettenhagen");
        break;
    }
    case 55125:
    {
        returnValue = F("Bettenhardtweg");
        break;
    }
    case 55126:
    {
        returnValue = F("Bettenhartweg");
        break;
    }
    case 55127:
    {
        returnValue = F("Bettenhausen");
        break;
    }
    case 55128:
    {
        returnValue = F("Bettenhausener Str.");
        break;
    }
    case 55129:
    {
        returnValue = F("Bettenhelle");
        break;
    }
    case 55130:
    {
        returnValue = F("Bettenhover Trift");
        break;
    }
    case 55131:
    {
        returnValue = F("Bettenhäuser Str.");
        break;
    }
    case 55132:
    {
        returnValue = F("Bettenhäuser Weg");
        break;
    }
    case 55133:
    {
        returnValue = F("Bettenkamp");
        break;
    }
    case 55134:
    {
        returnValue = F("Bettenkamper Weg");
        break;
    }
    case 55135:
    {
        returnValue = F("Bettenmacherweg");
        break;
    }
    case 55136:
    {
        returnValue = F("Bettensen");
        break;
    }
    case 55137:
    {
        returnValue = F("Bettenstr.");
        break;
    }
    case 55138:
    {
        returnValue = F("Bettensweiler");
        break;
    }
    case 55139:
    {
        returnValue = F("Bettental");
        break;
    }
    case 55140:
    {
        returnValue = F("Bettentrupsweg");
        break;
    }
    case 55141:
    {
        returnValue = F("Bettenwarfen");
        break;
    }
    case 55142:
    {
        returnValue = F("Bettenweg");
        break;
    }
    case 55143:
    {
        returnValue = F("Bettenweiler");
        break;
    }
    case 55144:
    {
        returnValue = F("Betteraysstr.");
        break;
    }
    case 55145:
    {
        returnValue = F("Bettermannweg");
        break;
    }
    case 55146:
    {
        returnValue = F("Bettersteig");
        break;
    }
    case 55147:
    {
        returnValue = F("Betteräckerstr.");
        break;
    }
    case 55148:
    {
        returnValue = F("Bettewehrstr.");
        break;
    }
    case 55149:
    {
        returnValue = F("Bettewiese");
        break;
    }
    case 55150:
    {
        returnValue = F("Bettgenhausener Weg");
        break;
    }
    case 55151:
    {
        returnValue = F("Bettgesgraben");
        break;
    }
    case 55152:
    {
        returnValue = F("Bettikumer Dorfstr.");
        break;
    }
    case 55153:
    {
        returnValue = F("Bettikumer Feldstr.");
        break;
    }
    case 55154:
    {
        returnValue = F("Bettikumer Flurstr.");
        break;
    }
    case 55155:
    {
        returnValue = F("Bettikumer Grund");
        break;
    }
    case 55156:
    {
        returnValue = F("Bettikumer Kampweg");
        break;
    }
    case 55157:
    {
        returnValue = F("Bettikumer Str.");
        break;
    }
    case 55158:
    {
        returnValue = F("Bettina-Brentano-Weg");
        break;
    }
    case 55159:
    {
        returnValue = F("Bettina-von-Arnim-Ring");
        break;
    }
    case 55160:
    {
        returnValue = F("Bettina-von-Arnim-Str.");
        break;
    }
    case 55161:
    {
        returnValue = F("Bettina-von-Arnim-Weg");
        break;
    }
    case 55162:
    {
        returnValue = F("Bettinastr.");
        break;
    }
    case 55163:
    {
        returnValue = F("Bettinaweg");
        break;
    }
    case 55164:
    {
        returnValue = F("Bettine-von-Arnim-Str.");
        break;
    }
    case 55165:
    {
        returnValue = F("Bettine-von-Arnim-Weg");
        break;
    }
    case 55166:
    {
        returnValue = F("Bettingbergtunnel");
        break;
    }
    case 55167:
    {
        returnValue = F("Bettingbührener Dorfstr.");
        break;
    }
    case 55168:
    {
        returnValue = F("Bettingbührener Helmer");
        break;
    }
    case 55169:
    {
        returnValue = F("Bettingbührener Str.");
        break;
    }
    case 55170:
    {
        returnValue = F("Bettinge");
        break;
    }
    case 55171:
    {
        returnValue = F("Bettingen");
        break;
    }
    case 55172:
    {
        returnValue = F("Bettinger Str.");
        break;
    }
    case 55173:
    {
        returnValue = F("Bettinger Weg");
        break;
    }
    case 55174:
    {
        returnValue = F("Bettingeroder Str.");
        break;
    }
    case 55175:
    {
        returnValue = F("Bettingerstr.");
        break;
    }
    case 55176:
    {
        returnValue = F("Bettinghausen");
        break;
    }
    case 55177:
    {
        returnValue = F("Bettinghauser Str.");
        break;
    }
    case 55178:
    {
        returnValue = F("Bettinghauser Weg");
        break;
    }
    case 55179:
    {
        returnValue = F("Bettingsbusch");
        break;
    }
    case 55180:
    {
        returnValue = F("Bettlerküchenweg");
        break;
    }
    case 55181:
    {
        returnValue = F("Bettlerpfad");
        break;
    }
    case 55182:
    {
        returnValue = F("Bettlers Patt");
        break;
    }
    case 55183:
    {
        returnValue = F("Bettlersgasse");
        break;
    }
    case 55184:
    {
        returnValue = F("Bettlertannenweg");
        break;
    }
    case 55185:
    {
        returnValue = F("Bettlerweg");
        break;
    }
    case 55186:
    {
        returnValue = F("Bettlesriedweg");
        break;
    }
    case 55187:
    {
        returnValue = F("Bettlinger Weg");
        break;
    }
    case 55188:
    {
        returnValue = F("Bettlinsbadweg");
        break;
    }
    case 55189:
    {
        returnValue = F("Bettmarer Str.");
        break;
    }
    case 55190:
    {
        returnValue = F("Bettmattenstr.");
        break;
    }
    case 55191:
    {
        returnValue = F("Bettnanger Str.");
        break;
    }
    case 55192:
    {
        returnValue = F("Bettnau");
        break;
    }
    case 55193:
    {
        returnValue = F("Bettnauer Str.");
        break;
    }
    case 55194:
    {
        returnValue = F("Bettorf");
        break;
    }
    case 55195:
    {
        returnValue = F("Bettoweg");
        break;
    }
    case 55196:
    {
        returnValue = F("Bettrather Str.");
        break;
    }
    case 55197:
    {
        returnValue = F("Bettringer Str.");
        break;
    }
    case 55198:
    {
        returnValue = F("Bettrumer Str.");
        break;
    }
    case 55199:
    {
        returnValue = F("Bettwasen");
        break;
    }
    case 55200:
    {
        returnValue = F("Bettweg");
        break;
    }
    case 55201:
    {
        returnValue = F("Bettwiesen");
        break;
    }
    case 55202:
    {
        returnValue = F("Bettwiesenstr.");
        break;
    }
    case 55203:
    {
        returnValue = F("Bettwiesenweg");
        break;
    }
    case 55204:
    {
        returnValue = F("Betty-Essinger-Weg");
        break;
    }
    case 55205:
    {
        returnValue = F("Betty-Friedan-Ring");
        break;
    }
    case 55206:
    {
        returnValue = F("Betty-Greif-Str.");
        break;
    }
    case 55207:
    {
        returnValue = F("Betty-Impertro-Str.");
        break;
    }
    case 55208:
    {
        returnValue = F("Betty-Kormann-Str.");
        break;
    }
    case 55209:
    {
        returnValue = F("Betty-Pfleger-Str.");
        break;
    }
    case 55210:
    {
        returnValue = F("Betty-Winterfeld-Str.");
        break;
    }
    case 55211:
    {
        returnValue = F("Betty-Zierer-Str.");
        break;
    }
    case 55212:
    {
        returnValue = F("Bettäcker");
        break;
    }
    case 55213:
    {
        returnValue = F("Bettäckerstr.");
        break;
    }
    case 55214:
    {
        returnValue = F("Betweg");
        break;
    }
    case 55215:
    {
        returnValue = F("Betzdorfer Landstr.");
        break;
    }
    case 55216:
    {
        returnValue = F("Betzdorfer Str.");
        break;
    }
    case 55217:
    {
        returnValue = F("Betze");
        break;
    }
    case 55218:
    {
        returnValue = F("Betze Jässje");
        break;
    }
    case 55219:
    {
        returnValue = F("Betzelbacher Weg");
        break;
    }
    case 55220:
    {
        returnValue = F("Betzelbachstr.");
        break;
    }
    case 55221:
    {
        returnValue = F("Betzelbend");
        break;
    }
    case 55222:
    {
        returnValue = F("Betzelseifen");
        break;
    }
    case 55223:
    {
        returnValue = F("Betzelterstr.");
        break;
    }
    case 55224:
    {
        returnValue = F("Betzemerhof");
        break;
    }
    case 55225:
    {
        returnValue = F("Betzen");
        break;
    }
    case 55226:
    {
        returnValue = F("Betzenbachweg");
        break;
    }
    case 55227:
    {
        returnValue = F("Betzenbergstr.");
        break;
    }
    case 55228:
    {
        returnValue = F("Betzendorf");
        break;
    }
    case 55229:
    {
        returnValue = F("Betzendorfer Str.");
        break;
    }
    case 55230:
    {
        returnValue = F("Betzendorfer Weg");
        break;
    }
    case 55231:
    {
        returnValue = F("Betzener Str.");
        break;
    }
    case 55232:
    {
        returnValue = F("Betzenfeld");
        break;
    }
    case 55233:
    {
        returnValue = F("Betzengasse");
        break;
    }
    case 55234:
    {
        returnValue = F("Betzenhausen");
        break;
    }
    case 55235:
    {
        returnValue = F("Betzenhölle");
        break;
    }
    case 55236:
    {
        returnValue = F("Betzenjörgfelsweg");
        break;
    }
    case 55237:
    {
        returnValue = F("Betzenried");
        break;
    }
    case 55238:
    {
        returnValue = F("Betzenriedstr.");
        break;
    }
    case 55239:
    {
        returnValue = F("Betzenriedweg");
        break;
    }
    case 55240:
    {
        returnValue = F("Betzenroder Str.");
        break;
    }
    case 55241:
    {
        returnValue = F("Betzenröder Str.");
        break;
    }
    case 55242:
    {
        returnValue = F("Betzenröder Weg");
        break;
    }
    case 55243:
    {
        returnValue = F("Betzenstr.");
        break;
    }
    case 55244:
    {
        returnValue = F("Betzental");
        break;
    }
    case 55245:
    {
        returnValue = F("Betzentalstr.");
        break;
    }
    case 55246:
    {
        returnValue = F("Betzenweg");
        break;
    }
    case 55247:
    {
        returnValue = F("Betzenweiler Str.");
        break;
    }
    case 55248:
    {
        returnValue = F("Betzenwinkel");
        break;
    }
    case 55249:
    {
        returnValue = F("Betzenwäldleweg");
        break;
    }
    case 55250:
    {
        returnValue = F("Betzer Weg");
        break;
    }
    case 55251:
    {
        returnValue = F("Betzerbrucher Weg");
        break;
    }
    case 55252:
    {
        returnValue = F("Betzgasse");
        break;
    }
    case 55253:
    {
        returnValue = F("Betzgerstr.");
        break;
    }
    case 55254:
    {
        returnValue = F("Betzhofer Halde");
        break;
    }
    case 55255:
    {
        returnValue = F("Betzhorner Str.");
        break;
    }
    case 55256:
    {
        returnValue = F("Betziesdorfer Weg");
        break;
    }
    case 55257:
    {
        returnValue = F("Betziner Weg");
        break;
    }
    case 55258:
    {
        returnValue = F("Betzinger Str.");
        break;
    }
    case 55259:
    {
        returnValue = F("Betzinger Weg");
        break;
    }
    case 55260:
    {
        returnValue = F("Betzkamp");
        break;
    }
    case 55261:
    {
        returnValue = F("Betzlenweg");
        break;
    }
    case 55262:
    {
        returnValue = F("Betzmannsdorf");
        break;
    }
    case 55263:
    {
        returnValue = F("Betznauer Str.");
        break;
    }
    case 55264:
    {
        returnValue = F("Betzngasse");
        break;
    }
    case 55265:
    {
        returnValue = F("Betzoring");
        break;
    }
    case 55266:
    {
        returnValue = F("Betzstr.");
        break;
    }
    case 55267:
    {
        returnValue = F("Betzweiler Str.");
        break;
    }
    case 55268:
    {
        returnValue = F("Betzwinkel");
        break;
    }
    case 55269:
    {
        returnValue = F("Bet´Heft");
        break;
    }
    case 55270:
    {
        returnValue = F("Beuchaer Landstr.");
        break;
    }
    case 55271:
    {
        returnValue = F("Beuchaer Oberweg");
        break;
    }
    case 55272:
    {
        returnValue = F("Beuchaer Str.");
        break;
    }
    case 55273:
    {
        returnValue = F("Beuchaer Weg");
        break;
    }
    case 55274:
    {
        returnValue = F("Beuchener Str.");
        break;
    }
    case 55275:
    {
        returnValue = F("Beuchergasse");
        break;
    }
    case 55276:
    {
        returnValue = F("Beuchow");
        break;
    }
    case 55277:
    {
        returnValue = F("Beuchstr.");
        break;
    }
    case 55278:
    {
        returnValue = F("Beuchter Str.");
        break;
    }
    case 55279:
    {
        returnValue = F("Beuchter Weg");
        break;
    }
    case 55280:
    {
        returnValue = F("Beudelsdyk");
        break;
    }
    case 55281:
    {
        returnValue = F("Beudelshof");
        break;
    }
    case 55282:
    {
        returnValue = F("Beudener Str.");
        break;
    }
    case 55283:
    {
        returnValue = F("Beudeweg");
        break;
    }
    case 55284:
    {
        returnValue = F("Beuditz-Vorstadt");
        break;
    }
    case 55285:
    {
        returnValue = F("Beuditzer Berg");
        break;
    }
    case 55286:
    {
        returnValue = F("Beuditzer Weg");
        break;
    }
    case 55287:
    {
        returnValue = F("Beuditzstr.");
        break;
    }
    case 55288:
    {
        returnValue = F("Beudweg");
        break;
    }
    case 55289:
    {
        returnValue = F("Beueler Kreuz");
        break;
    }
    case 55290:
    {
        returnValue = F("Beueler Str.");
        break;
    }
    case 55291:
    {
        returnValue = F("Beuelskopfweg");
        break;
    }
    case 55292:
    {
        returnValue = F("Beuelsrast");
        break;
    }
    case 55293:
    {
        returnValue = F("Beuelsstr.");
        break;
    }
    case 55294:
    {
        returnValue = F("Beuelsweg");
        break;
    }
    case 55295:
    {
        returnValue = F("Beuerbacher Landstr.");
        break;
    }
    case 55296:
    {
        returnValue = F("Beuerbacher Str.");
        break;
    }
    case 55297:
    {
        returnValue = F("Beuerbacher Weg");
        break;
    }
    case 55298:
    {
        returnValue = F("Beuerbachstr.");
        break;
    }
    case 55299:
    {
        returnValue = F("Beuerberg");
        break;
    }
    case 55300:
    {
        returnValue = F("Beuerberger Str.");
        break;
    }
    case 55301:
    {
        returnValue = F("Beuerer Str.");
        break;
    }
    case 55302:
    {
        returnValue = F("Beuerer Weg");
        break;
    }
    case 55303:
    {
        returnValue = F("Beuerfelder Str.");
        break;
    }
    case 55304:
    {
        returnValue = F("Beuerlbacher Hauptstr.");
        break;
    }
    case 55305:
    {
        returnValue = F("Beuerlbacher Str.");
        break;
    }
    case 55306:
    {
        returnValue = F("Beuerner Pfad");
        break;
    }
    case 55307:
    {
        returnValue = F("Beuerner Str.");
        break;
    }
    case 55308:
    {
        returnValue = F("Beuerner Weg");
        break;
    }
    case 55309:
    {
        returnValue = F("Beuerngrund");
        break;
    }
    case 55310:
    {
        returnValue = F("Beuernsche Höhle");
        break;
    }
    case 55311:
    {
        returnValue = F("Beuernsche Str.");
        break;
    }
    case 55312:
    {
        returnValue = F("Beuerscher Weg");
        break;
    }
    case 55313:
    {
        returnValue = F("Beuertor");
        break;
    }
    case 55314:
    {
        returnValue = F("Beuggen");
        break;
    }
    case 55315:
    {
        returnValue = F("Beuggenwaldweg");
        break;
    }
    case 55316:
    {
        returnValue = F("Beughorst");
        break;
    }
    case 55317:
    {
        returnValue = F("Beuinghausener Weg");
        break;
    }
    case 55318:
    {
        returnValue = F("Beukampsborn");
        break;
    }
    case 55319:
    {
        returnValue = F("Beuke");
        break;
    }
    case 55320:
    {
        returnValue = F("Beukenberg");
        break;
    }
    case 55321:
    {
        returnValue = F("Beukenbergstr.");
        break;
    }
    case 55322:
    {
        returnValue = F("Beukenbusch");
        break;
    }
    case 55323:
    {
        returnValue = F("Beukenstr.");
        break;
    }
    case 55324:
    {
        returnValue = F("Beukerweg");
        break;
    }
    case 55325:
    {
        returnValue = F("Beulardsteiner Feld");
        break;
    }
    case 55326:
    {
        returnValue = F("Beulbar");
        break;
    }
    case 55327:
    {
        returnValue = F("Beuler Höhe");
        break;
    }
    case 55328:
    {
        returnValue = F("Beuler Weg");
        break;
    }
    case 55329:
    {
        returnValue = F("Beulersahlen");
        break;
    }
    case 55330:
    {
        returnValue = F("Beulerstr.");
        break;
    }
    case 55331:
    {
        returnValue = F("Beulertweg");
        break;
    }
    case 55332:
    {
        returnValue = F("Beulerweg");
        break;
    }
    case 55333:
    {
        returnValue = F("Beuljenstr.");
        break;
    }
    case 55334:
    {
        returnValue = F("Beulkenkamp");
        break;
    }
    case 55335:
    {
        returnValue = F("Beulshausen");
        break;
    }
    case 55336:
    {
        returnValue = F("Beulshäuser Str.");
        break;
    }
    case 55337:
    {
        returnValue = F("Beulstr.");
        break;
    }
    case 55338:
    {
        returnValue = F("Beulwitzer Dorfwiesen");
        break;
    }
    case 55339:
    {
        returnValue = F("Beulwitzer Str.");
        break;
    }
    case 55340:
    {
        returnValue = F("Beumers Wiese");
        break;
    }
    case 55341:
    {
        returnValue = F("Beumerstr.");
        break;
    }
    case 55342:
    {
        returnValue = F("Beund");
        break;
    }
    case 55343:
    {
        returnValue = F("Beunde");
        break;
    }
    case 55344:
    {
        returnValue = F("Beundegasse");
        break;
    }
    case 55345:
    {
        returnValue = F("Beundehöfer Str.");
        break;
    }
    case 55346:
    {
        returnValue = F("Beunden");
        break;
    }
    case 55347:
    {
        returnValue = F("Beundengärten");
        break;
    }
    case 55348:
    {
        returnValue = F("Beundenstr.");
        break;
    }
    case 55349:
    {
        returnValue = F("Beundenweg");
        break;
    }
    case 55350:
    {
        returnValue = F("Beundenäcker");
        break;
    }
    case 55351:
    {
        returnValue = F("Beundestr.");
        break;
    }
    case 55352:
    {
        returnValue = F("Beundeweg");
        break;
    }
    case 55353:
    {
        returnValue = F("Beundgasse");
        break;
    }
    case 55354:
    {
        returnValue = F("Beundle");
        break;
    }
    case 55355:
    {
        returnValue = F("Beundleweg");
        break;
    }
    case 55356:
    {
        returnValue = F("Beundstr.");
        break;
    }
    case 55357:
    {
        returnValue = F("Beundweg");
        break;
    }
    case 55358:
    {
        returnValue = F("Beune");
        break;
    }
    case 55359:
    {
        returnValue = F("Beuneberg");
        break;
    }
    case 55360:
    {
        returnValue = F("Beunegasse");
        break;
    }
    case 55361:
    {
        returnValue = F("Beuner Weg");
        break;
    }
    case 55362:
    {
        returnValue = F("Beunestr.");
        break;
    }
    case 55363:
    {
        returnValue = F("Beuneweg");
        break;
    }
    case 55364:
    {
        returnValue = F("Beunstr.");
        break;
    }
    case 55365:
    {
        returnValue = F("Beunsweg");
        break;
    }
    case 55366:
    {
        returnValue = F("Beunten");
        break;
    }
    case 55367:
    {
        returnValue = F("Beunth");
        break;
    }
    case 55368:
    {
        returnValue = F("Beunweg");
        break;
    }
    case 55369:
    {
        returnValue = F("Beur. Grenzweg");
        break;
    }
    case 55370:
    {
        returnValue = F("Beurbarungsstr.");
        break;
    }
    case 55371:
    {
        returnValue = F("Beuremer Tal");
        break;
    }
    case 55372:
    {
        returnValue = F("Beuren");
        break;
    }
    case 55373:
    {
        returnValue = F("Beurenbachweg");
        break;
    }
    case 55374:
    {
        returnValue = F("Beurenbergstr.");
        break;
    }
    case 55375:
    {
        returnValue = F("Beurener Str.");
        break;
    }
    case 55376:
    {
        returnValue = F("Beurener Wasen");
        break;
    }
    case 55377:
    {
        returnValue = F("Beurenerlochweg");
        break;
    }
    case 55378:
    {
        returnValue = F("Beurengasse");
        break;
    }
    case 55379:
    {
        returnValue = F("Beurenkern");
        break;
    }
    case 55380:
    {
        returnValue = F("Beurensteig");
        break;
    }
    case 55381:
    {
        returnValue = F("Beurenweg");
        break;
    }
    case 55382:
    {
        returnValue = F("Beurer Steig");
        break;
    }
    case 55383:
    {
        returnValue = F("Beurer Str.");
        break;
    }
    case 55384:
    {
        returnValue = F("Beurer Talweg");
        break;
    }
    case 55385:
    {
        returnValue = F("Beurer Weg");
        break;
    }
    case 55386:
    {
        returnValue = F("Beurerweg");
        break;
    }
    case 55387:
    {
        returnValue = F("Beurhausstr.");
        break;
    }
    case 55388:
    {
        returnValue = F("Beuroner Str.");
        break;
    }
    case 55389:
    {
        returnValue = F("Beuroner Weg");
        break;
    }
    case 55390:
    {
        returnValue = F("Beurskensweg");
        break;
    }
    case 55391:
    {
        returnValue = F("Beuschenbrook");
        break;
    }
    case 55392:
    {
        returnValue = F("Beuscherweg");
        break;
    }
    case 55393:
    {
        returnValue = F("Beusenstr.");
        break;
    }
    case 55394:
    {
        returnValue = F("Beusingser Str.");
        break;
    }
    case 55395:
    {
        returnValue = F("Beusloer Weg");
        break;
    }
    case 55396:
    {
        returnValue = F("Beustenbachstr.");
        break;
    }
    case 55397:
    {
        returnValue = F("Beustereck");
        break;
    }
    case 55398:
    {
        returnValue = F("Beusterstr.");
        break;
    }
    case 55399:
    {
        returnValue = F("Beuststr.");
        break;
    }
    case 55400:
    {
        returnValue = F("Beutauklinge");
        break;
    }
    case 55401:
    {
        returnValue = F("Beutbachstr.");
        break;
    }
    case 55402:
    {
        returnValue = F("Beutbachweg");
        break;
    }
    case 55403:
    {
        returnValue = F("Beutebrink");
        break;
    }
    case 55404:
    {
        returnValue = F("Beutelbergstr.");
        break;
    }
    case 55405:
    {
        returnValue = F("Beuteleistr.");
        break;
    }
    case 55406:
    {
        returnValue = F("Beuteler Str.");
        break;
    }
    case 55407:
    {
        returnValue = F("Beutelhaldenweg");
        break;
    }
    case 55408:
    {
        returnValue = F("Beutelhausen");
        break;
    }
    case 55409:
    {
        returnValue = F("Beutelreusch");
        break;
    }
    case 55410:
    {
        returnValue = F("Beutelsbacher - / Daimler Str.");
        break;
    }
    case 55411:
    {
        returnValue = F("Beutelsbacher Str.");
        break;
    }
    case 55412:
    {
        returnValue = F("Beutelsbacherstr");
        break;
    }
    case 55413:
    {
        returnValue = F("Beutelsdorf");
        break;
    }
    case 55414:
    {
        returnValue = F("Beutelsdorfer Str.");
        break;
    }
    case 55415:
    {
        returnValue = F("Beutelshufe");
        break;
    }
    case 55416:
    {
        returnValue = F("Beutelsloch");
        break;
    }
    case 55417:
    {
        returnValue = F("Beutelsteige");
        break;
    }
    case 55418:
    {
        returnValue = F("Beutelsteinweg");
        break;
    }
    case 55419:
    {
        returnValue = F("Beutelstr.");
        break;
    }
    case 55420:
    {
        returnValue = F("Beutenbachstr.");
        break;
    }
    case 55421:
    {
        returnValue = F("Beutenbachweg");
        break;
    }
    case 55422:
    {
        returnValue = F("Beutenbergstr.");
        break;
    }
    case 55423:
    {
        returnValue = F("Beutenfeldstr.");
        break;
    }
    case 55424:
    {
        returnValue = F("Beutengairenweg");
        break;
    }
    case 55425:
    {
        returnValue = F("Beutengraben");
        break;
    }
    case 55426:
    {
        returnValue = F("Beutenhofer Str.");
        break;
    }
    case 55427:
    {
        returnValue = F("Beutenhofer Weg");
        break;
    }
    case 55428:
    {
        returnValue = F("Beutenlaystr.");
        break;
    }
    case 55429:
    {
        returnValue = F("Beutenloch");
        break;
    }
    case 55430:
    {
        returnValue = F("Beutenstr.");
        break;
    }
    case 55431:
    {
        returnValue = F("Beutentalweg");
        break;
    }
    case 55432:
    {
        returnValue = F("Beutersitzer Kirchweg");
        break;
    }
    case 55433:
    {
        returnValue = F("Beutersitzer Str.");
        break;
    }
    case 55434:
    {
        returnValue = F("Beuteweg");
        break;
    }
    case 55435:
    {
        returnValue = F("Beuthaer Str.");
        break;
    }
    case 55436:
    {
        returnValue = F("Beuthauweg");
        break;
    }
    case 55437:
    {
        returnValue = F("Beuthener Str.");
        break;
    }
    case 55438:
    {
        returnValue = F("Beuthener Weg");
        break;
    }
    case 55439:
    {
        returnValue = F("Beuthenweg");
        break;
    }
    case 55440:
    {
        returnValue = F("Beutherstr.");
        break;
    }
    case 55441:
    {
        returnValue = F("Beuthiner Hof");
        break;
    }
    case 55442:
    {
        returnValue = F("Beuthiner Str.");
        break;
    }
    case 55443:
    {
        returnValue = F("Beuthiner Weg");
        break;
    }
    case 55444:
    {
        returnValue = F("Beuthmühlweg");
        break;
    }
    case 55445:
    {
        returnValue = F("Beuthnerweg");
        break;
    }
    case 55446:
    {
        returnValue = F("Beuthstr.");
        break;
    }
    case 55447:
    {
        returnValue = F("Beutigweg");
        break;
    }
    case 55448:
    {
        returnValue = F("Beutinger Str.");
        break;
    }
    case 55449:
    {
        returnValue = F("Beutingerstr.");
        break;
    }
    case 55450:
    {
        returnValue = F("Beutlerstr.");
        break;
    }
    case 55451:
    {
        returnValue = F("Beutnitzer Str.");
        break;
    }
    case 55452:
    {
        returnValue = F("Beutow");
        break;
    }
    case 55453:
    {
        returnValue = F("Beutower Weg");
        break;
    }
    case 55454:
    {
        returnValue = F("Beutringhausen");
        break;
    }
    case 55455:
    {
        returnValue = F("Beutstr.");
        break;
    }
    case 55456:
    {
        returnValue = F("Beuttenmillerhof");
        break;
    }
    case 55457:
    {
        returnValue = F("Beuttenmüllerstr.");
        break;
    }
    case 55458:
    {
        returnValue = F("Beutterstr.");
        break;
    }
    case 55459:
    {
        returnValue = F("Beutwaldweg");
        break;
    }
    case 55460:
    {
        returnValue = F("Beutwang");
        break;
    }
    case 55461:
    {
        returnValue = F("Beutweg");
        break;
    }
    case 55462:
    {
        returnValue = F("Beutzener Weg");
        break;
    }
    case 55463:
    {
        returnValue = F("Beutzkamp");
        break;
    }
    case 55464:
    {
        returnValue = F("Beuzlen");
        break;
    }
    case 55465:
    {
        returnValue = F("Beußweg");
        break;
    }
    case 55466:
    {
        returnValue = F("Bevelter-Berg-Str.");
        break;
    }
    case 55467:
    {
        returnValue = F("Bevenroder Str.");
        break;
    }
    case 55468:
    {
        returnValue = F("Bevensener Str.");
        break;
    }
    case 55469:
    {
        returnValue = F("Bevenser Str.");
        break;
    }
    case 55470:
    {
        returnValue = F("Bevenser Weg");
        break;
    }
    case 55471:
    {
        returnValue = F("Bever de Heiwe");
        break;
    }
    case 55472:
    {
        returnValue = F("Beverbecker Str.");
        break;
    }
    case 55473:
    {
        returnValue = F("Beverblick");
        break;
    }
    case 55474:
    {
        returnValue = F("Beverbrucher Damm");
        break;
    }
    case 55475:
    {
        returnValue = F("Beverbrucher Str.");
        break;
    }
    case 55476:
    {
        returnValue = F("Beverfoerderweg");
        break;
    }
    case 55477:
    {
        returnValue = F("Bevergerner Damm");
        break;
    }
    case 55478:
    {
        returnValue = F("Bevergerner Str.");
        break;
    }
    case 55479:
    {
        returnValue = F("Beverhol");
        break;
    }
    case 55480:
    {
        returnValue = F("Bevering");
        break;
    }
    case 55481:
    {
        returnValue = F("Beverinstr.");
        break;
    }
    case 55482:
    {
        returnValue = F("Beverley Str.");
        break;
    }
    case 55483:
    {
        returnValue = F("Beverley-Str.");
        break;
    }
    case 55484:
    {
        returnValue = F("Bevermühle");
        break;
    }
    case 55485:
    {
        returnValue = F("Bevermühler Str.");
        break;
    }
    case 55486:
    {
        returnValue = F("Bevern Rundweg 2");
        break;
    }
    case 55487:
    {
        returnValue = F("Beverner Chaussee");
        break;
    }
    case 55488:
    {
        returnValue = F("Beverner Str.");
        break;
    }
    case 55489:
    {
        returnValue = F("Beverner Weg");
        break;
    }
    case 55490:
    {
        returnValue = F("Bevernhorst");
        break;
    }
    case 55491:
    {
        returnValue = F("Beveroe");
        break;
    }
    case 55492:
    {
        returnValue = F("Beverstedter Mühlenstr.");
        break;
    }
    case 55493:
    {
        returnValue = F("Beverstedter Str.");
        break;
    }
    case 55494:
    {
        returnValue = F("Beverstiege");
        break;
    }
    case 55495:
    {
        returnValue = F("Beverstr.");
        break;
    }
    case 55496:
    {
        returnValue = F("Beverstrang");
        break;
    }
    case 55497:
    {
        returnValue = F("Bevertal");
        break;
    }
    case 55498:
    {
        returnValue = F("Bevertalstr.");
        break;
    }
    case 55499:
    {
        returnValue = F("Bevertrift");
        break;
    }
    case 55500:
    {
        returnValue = F("Beverunger Str.");
        break;
    }
    case 55501:
    {
        returnValue = F("Beverunger Weg");
        break;
    }
    case 55502:
    {
        returnValue = F("Beverweg");
        break;
    }
    case 55503:
    {
        returnValue = F("Beverwehr");
        break;
    }
    case 55504:
    {
        returnValue = F("Beverwijker Ring");
        break;
    }
    case 55505:
    {
        returnValue = F("Beverworthweg");
        break;
    }
    case 55506:
    {
        returnValue = F("Bewdley-Platz");
        break;
    }
    case 55507:
    {
        returnValue = F("Bewegungsfläche am Erikapark");
        break;
    }
    case 55508:
    {
        returnValue = F("Bewegungsgarten");
        break;
    }
    case 55509:
    {
        returnValue = F("Bewersgasse");
        break;
    }
    case 55510:
    {
        returnValue = F("Bewersgraben");
        break;
    }
    case 55511:
    {
        returnValue = F("Bewinger Str. / Kyll-Radweg");
        break;
    }
    case 55512:
    {
        returnValue = F("Bewördenweg");
        break;
    }
    case 55513:
    {
        returnValue = F("Bexbacher Str.");
        break;
    }
    case 55514:
    {
        returnValue = F("Bexheim");
        break;
    }
    case 55515:
    {
        returnValue = F("Bexhöveder Str.");
        break;
    }
    case 55516:
    {
        returnValue = F("Bextener Str.");
        break;
    }
    case 55517:
    {
        returnValue = F("Bextenstr.");
        break;
    }
    case 55518:
    {
        returnValue = F("Bexterbreden");
        break;
    }
    case 55519:
    {
        returnValue = F("Bexterlau");
        break;
    }
    case 55520:
    {
        returnValue = F("Bexterweg");
        break;
    }
    case 55521:
    {
        returnValue = F("Beybusch");
        break;
    }
    case 55522:
    {
        returnValue = F("Beyelsfeld");
        break;
    }
    case 55523:
    {
        returnValue = F("Beyenburger Str.");
        break;
    }
    case 55524:
    {
        returnValue = F("Beyerbachstr.");
        break;
    }
    case 55525:
    {
        returnValue = F("Beyerberger Str.");
        break;
    }
    case 55526:
    {
        returnValue = F("Beyergasse");
        break;
    }
    case 55527:
    {
        returnValue = F("Beyerhahnstr.");
        break;
    }
    case 55528:
    {
        returnValue = F("Beyerhofgasse");
        break;
    }
    case 55529:
    {
        returnValue = F("Beyerlestr.");
        break;
    }
    case 55530:
    {
        returnValue = F("Beyernaumburger Str.");
        break;
    }
    case 55531:
    {
        returnValue = F("Beyernaumburger Weg");
        break;
    }
    case 55532:
    {
        returnValue = F("Beyerplatz");
        break;
    }
    case 55533:
    {
        returnValue = F("Beyersche Burg");
        break;
    }
    case 55534:
    {
        returnValue = F("Beyersdorfer Str.");
        break;
    }
    case 55535:
    {
        returnValue = F("Beyersdorfer Weg");
        break;
    }
    case 55536:
    {
        returnValue = F("Beyersgasse");
        break;
    }
    case 55537:
    {
        returnValue = F("Beyersmühle");
        break;
    }
    case 55538:
    {
        returnValue = F("Beyerstr.");
        break;
    }
    case 55539:
    {
        returnValue = F("Beyersweg");
        break;
    }
    case 55540:
    {
        returnValue = F("Beyerweg");
        break;
    }
    case 55541:
    {
        returnValue = F("Beyesberg");
        break;
    }
    case 55542:
    {
        returnValue = F("Beyhartinger Str.");
        break;
    }
    case 55543:
    {
        returnValue = F("Beyreutherweg");
        break;
    }
    case 55544:
    {
        returnValue = F("Beyrichstr.");
        break;
    }
    case 55545:
    {
        returnValue = F("Beyrischer Weg");
        break;
    }
    case 55546:
    {
        returnValue = F("Beyrischer Winkel");
        break;
    }
    case 55547:
    {
        returnValue = F("Beyseweg");
        break;
    }
    case 55548:
    {
        returnValue = F("Beystr.");
        break;
    }
    case 55549:
    {
        returnValue = F("Beythaler Str.");
        break;
    }
    case 55550:
    {
        returnValue = F("Bezenlochweg");
        break;
    }
    case 55551:
    {
        returnValue = F("Bezgenrieter Str.");
        break;
    }
    case 55552:
    {
        returnValue = F("Bezgenrieter Weg");
        break;
    }
    case 55553:
    {
        returnValue = F("Beziersstr.");
        break;
    }
    case 55554:
    {
        returnValue = F("Bezirk A");
        break;
    }
    case 55555:
    {
        returnValue = F("Bezirk B");
        break;
    }
    case 55556:
    {
        returnValue = F("Bezirk C");
        break;
    }
    case 55557:
    {
        returnValue = F("Bezirk D");
        break;
    }
    case 55558:
    {
        returnValue = F("Bezirk E");
        break;
    }
    case 55559:
    {
        returnValue = F("Bezirk F");
        break;
    }
    case 55560:
    {
        returnValue = F("Bezirk G");
        break;
    }
    case 55561:
    {
        returnValue = F("Bezirk H");
        break;
    }
    case 55562:
    {
        returnValue = F("Bezirk K");
        break;
    }
    case 55563:
    {
        returnValue = F("Bezirk L");
        break;
    }
    case 55564:
    {
        returnValue = F("Bezirksamtsgasse");
        break;
    }
    case 55565:
    {
        returnValue = F("Bezirksamtsstr.");
        break;
    }
    case 55566:
    {
        returnValue = F("Bezirksamtstr.");
        break;
    }
    case 55567:
    {
        returnValue = F("Bezirksstr.");
        break;
    }
    case 55568:
    {
        returnValue = F("Bezirkstr.");
        break;
    }
    case 55569:
    {
        returnValue = F("Beznerstr.");
        break;
    }
    case 55570:
    {
        returnValue = F("Bezoldweg");
        break;
    }
    case 55571:
    {
        returnValue = F("Beßenberg");
        break;
    }
    case 55572:
    {
        returnValue = F("Beßheimer Gärten");
        break;
    }
    case 55573:
    {
        returnValue = F("Beßlicher Str.");
        break;
    }
    case 55574:
    {
        returnValue = F("Beärengrabenbrücke");
        break;
    }
    case 55575:
    {
        returnValue = F("Bgm Kneidl Anlage");
        break;
    }
    case 55576:
    {
        returnValue = F("Bgm-Bader-Str.");
        break;
    }
    case 55577:
    {
        returnValue = F("Bgm-Jakob-Sieben-Str.");
        break;
    }
    case 55578:
    {
        returnValue = F("Bgm-Josef-Endrich-Str.");
        break;
    }
    case 55579:
    {
        returnValue = F("Bgm-Köpf-Str.");
        break;
    }
    case 55580:
    {
        returnValue = F("Bgm-Niedermaier-Ring");
        break;
    }
    case 55581:
    {
        returnValue = F("Bgm-Rauchenecker-Str.");
        break;
    }
    case 55582:
    {
        returnValue = F("Bgm. Schneider-Str.");
        break;
    }
    case 55583:
    {
        returnValue = F("Bgm. Walter-Bender-Weg");
        break;
    }
    case 55584:
    {
        returnValue = F("Bgm. Wenig Str.");
        break;
    }
    case 55585:
    {
        returnValue = F("Bgm.-Adam-Wöber-Str.");
        break;
    }
    case 55586:
    {
        returnValue = F("Bgm.-Ametsbichler-Ring");
        break;
    }
    case 55587:
    {
        returnValue = F("Bgm.-Angerer-Str.");
        break;
    }
    case 55588:
    {
        returnValue = F("Bgm.-Anton-Schmid-Str.");
        break;
    }
    case 55589:
    {
        returnValue = F("Bgm.-Asenbauer-Str.");
        break;
    }
    case 55590:
    {
        returnValue = F("Bgm.-Bauer-Ring");
        break;
    }
    case 55591:
    {
        returnValue = F("Bgm.-Bayr-Str.");
        break;
    }
    case 55592:
    {
        returnValue = F("Bgm.-Bechmann-Str.");
        break;
    }
    case 55593:
    {
        returnValue = F("Bgm.-Bergmann-Str.");
        break;
    }
    case 55594:
    {
        returnValue = F("Bgm.-Bestle-Str.");
        break;
    }
    case 55595:
    {
        returnValue = F("Bgm.-Biesenberger-Str.");
        break;
    }
    case 55596:
    {
        returnValue = F("Bgm.-Birndorfer-Str.");
        break;
    }
    case 55597:
    {
        returnValue = F("Bgm.-Brandenburg-Str.");
        break;
    }
    case 55598:
    {
        returnValue = F("Bgm.-Brandl-Str.");
        break;
    }
    case 55599:
    {
        returnValue = F("Bgm.-Bruckmeir-Str.");
        break;
    }
    case 55600:
    {
        returnValue = F("Bgm.-Bräu-Str.");
        break;
    }
    case 55601:
    {
        returnValue = F("Bgm.-Burmeister-Str.");
        break;
    }
    case 55602:
    {
        returnValue = F("Bgm.-Butscher-Str.");
        break;
    }
    case 55603:
    {
        returnValue = F("Bgm.-Butzenberger-Str.");
        break;
    }
    case 55604:
    {
        returnValue = F("Bgm.-Böswald-Str.");
        break;
    }
    case 55605:
    {
        returnValue = F("Bgm.-Bürzle-Str.");
        break;
    }
    case 55606:
    {
        returnValue = F("Bgm.-Deppisch-Str.");
        break;
    }
    case 55607:
    {
        returnValue = F("Bgm.-Dethlefsen-Str.");
        break;
    }
    case 55608:
    {
        returnValue = F("Bgm.-Dietrich-Str.");
        break;
    }
    case 55609:
    {
        returnValue = F("Bgm.-Dobler-Str.");
        break;
    }
    case 55610:
    {
        returnValue = F("Bgm.-Dr. Friedrichs-Allee");
        break;
    }
    case 55611:
    {
        returnValue = F("Bgm.-Dullinger-Str.");
        break;
    }
    case 55612:
    {
        returnValue = F("Bgm.-Eichhammer-Str.");
        break;
    }
    case 55613:
    {
        returnValue = F("Bgm.-Eisenbarth-Gasse");
        break;
    }
    case 55614:
    {
        returnValue = F("Bgm.-Endres-Str.");
        break;
    }
    case 55615:
    {
        returnValue = F("Bgm.-Ernst-Lübcke-Str.");
        break;
    }
    case 55616:
    {
        returnValue = F("Bgm.-Faulbacher-Str.");
        break;
    }
    case 55617:
    {
        returnValue = F("Bgm.-Ferdinand-Fischer-Str.");
        break;
    }
    case 55618:
    {
        returnValue = F("Bgm.-Fetzer-Str.");
        break;
    }
    case 55619:
    {
        returnValue = F("Bgm.-Fichtner-Str.");
        break;
    }
    case 55620:
    {
        returnValue = F("Bgm.-Fink-Str.");
        break;
    }
    case 55621:
    {
        returnValue = F("Bgm.-Fischer-Str.");
        break;
    }
    case 55622:
    {
        returnValue = F("Bgm.-Fleischmann-Str.");
        break;
    }
    case 55623:
    {
        returnValue = F("Bgm.-Fußeder-Str.");
        break;
    }
    case 55624:
    {
        returnValue = F("Bgm.-Georg-Baust-Str.");
        break;
    }
    case 55625:
    {
        returnValue = F("Bgm.-Georg-Gügel-Ring");
        break;
    }
    case 55626:
    {
        returnValue = F("Bgm.-Georg-Reck-Str.");
        break;
    }
    case 55627:
    {
        returnValue = F("Bgm.-Germeier-Str.");
        break;
    }
    case 55628:
    {
        returnValue = F("Bgm.-Gierlinger-Str.");
        break;
    }
    case 55629:
    {
        returnValue = F("Bgm.-Graber-Str.");
        break;
    }
    case 55630:
    {
        returnValue = F("Bgm.-Großmann-Str.");
        break;
    }
    case 55631:
    {
        returnValue = F("Bgm.-Gröpper-Str.");
        break;
    }
    case 55632:
    {
        returnValue = F("Bgm.-Göttl-Str.");
        break;
    }
    case 55633:
    {
        returnValue = F("Bgm.-Günthner-Str.");
        break;
    }
    case 55634:
    {
        returnValue = F("Bgm.-Hampp-Str.");
        break;
    }
    case 55635:
    {
        returnValue = F("Bgm.-Hartner-Str.");
        break;
    }
    case 55636:
    {
        returnValue = F("Bgm.-Heckl-Str.");
        break;
    }
    case 55637:
    {
        returnValue = F("Bgm.-Hermann-Fisch-Str.");
        break;
    }
    case 55638:
    {
        returnValue = F("Bgm.-Hermann-Str.");
        break;
    }
    case 55639:
    {
        returnValue = F("Bgm.-Herner-Str.");
        break;
    }
    case 55640:
    {
        returnValue = F("Bgm.-Hettl-Str.");
        break;
    }
    case 55641:
    {
        returnValue = F("Bgm.-Hilmer-Ring");
        break;
    }
    case 55642:
    {
        returnValue = F("Bgm.-Hofbauer-Str.");
        break;
    }
    case 55643:
    {
        returnValue = F("Bgm.-Hofmann Str.");
        break;
    }
    case 55644:
    {
        returnValue = F("Bgm.-Horner-Str.");
        break;
    }
    case 55645:
    {
        returnValue = F("Bgm.-Huber-Str.");
        break;
    }
    case 55646:
    {
        returnValue = F("Bgm.-Hunger-Str.");
        break;
    }
    case 55647:
    {
        returnValue = F("Bgm.-Häußler-Str.");
        break;
    }
    case 55648:
    {
        returnValue = F("Bgm.-Johann-Mayer-Str.");
        break;
    }
    case 55649:
    {
        returnValue = F("Bgm.-Josef-Bauer-Str.");
        break;
    }
    case 55650:
    {
        returnValue = F("Bgm.-Josef-Günter-Str.");
        break;
    }
    case 55651:
    {
        returnValue = F("Bgm.-Josef-Janner-Str.");
        break;
    }
    case 55652:
    {
        returnValue = F("Bgm.-Josef-Maier-Weg");
        break;
    }
    case 55653:
    {
        returnValue = F("Bgm.-Josef-Schmid-Str.");
        break;
    }
    case 55654:
    {
        returnValue = F("Bgm.-Jürgens-Str.");
        break;
    }
    case 55655:
    {
        returnValue = F("Bgm.-Kainz-Str.");
        break;
    }
    case 55656:
    {
        returnValue = F("Bgm.-Karl-Hagedorn-Weg");
        break;
    }
    case 55657:
    {
        returnValue = F("Bgm.-Kempf-Str.");
        break;
    }
    case 55658:
    {
        returnValue = F("Bgm.-Kirchberger-Str.");
        break;
    }
    case 55659:
    {
        returnValue = F("Bgm.-Kirschner-Str.");
        break;
    }
    case 55660:
    {
        returnValue = F("Bgm.-Knötgen-Str.");
        break;
    }
    case 55661:
    {
        returnValue = F("Bgm.-Kossack-Str.");
        break;
    }
    case 55662:
    {
        returnValue = F("Bgm.-Kraus-Str.");
        break;
    }
    case 55663:
    {
        returnValue = F("Bgm.-Kroher-Str.");
        break;
    }
    case 55664:
    {
        returnValue = F("Bgm.-Kroneck-Str.");
        break;
    }
    case 55665:
    {
        returnValue = F("Bgm.-Köster-Str.");
        break;
    }
    case 55666:
    {
        returnValue = F("Bgm.-Loibl-Str.");
        break;
    }
    case 55667:
    {
        returnValue = F("Bgm.-Lüsse-Str.");
        break;
    }
    case 55668:
    {
        returnValue = F("Bgm.-Martin-Pfeffer-Str.");
        break;
    }
    case 55669:
    {
        returnValue = F("Bgm.-Mayerhofer-Str.");
        break;
    }
    case 55670:
    {
        returnValue = F("Bgm.-Menth-Str.");
        break;
    }
    case 55671:
    {
        returnValue = F("Bgm.-Merk-Str.");
        break;
    }
    case 55672:
    {
        returnValue = F("Bgm.-Meyer-Str.");
        break;
    }
    case 55673:
    {
        returnValue = F("Bgm.-Michael-Maurer-Str.");
        break;
    }
    case 55674:
    {
        returnValue = F("Bgm.-Michl-Str.");
        break;
    }
    case 55675:
    {
        returnValue = F("Bgm.-Moser-Str.");
        break;
    }
    case 55676:
    {
        returnValue = F("Bgm.-Mävers-Str.");
        break;
    }
    case 55677:
    {
        returnValue = F("Bgm.-Ohse-Str.");
        break;
    }
    case 55678:
    {
        returnValue = F("Bgm.-Oppel-Str.");
        break;
    }
    case 55679:
    {
        returnValue = F("Bgm.-Osterholzer-Str.");
        break;
    }
    case 55680:
    {
        returnValue = F("Bgm.-Otersen-Str.");
        break;
    }
    case 55681:
    {
        returnValue = F("Bgm.-Otto-Knapp-Str.");
        break;
    }
    case 55682:
    {
        returnValue = F("Bgm.-Pantele-Str.");
        break;
    }
    case 55683:
    {
        returnValue = F("Bgm.-Paulus-Ring");
        break;
    }
    case 55684:
    {
        returnValue = F("Bgm.-Polster-Str.");
        break;
    }
    case 55685:
    {
        returnValue = F("Bgm.-Prüschenk-Str.");
        break;
    }
    case 55686:
    {
        returnValue = F("Bgm.-Pöschl-Str.");
        break;
    }
    case 55687:
    {
        returnValue = F("Bgm.-Püls-Str.");
        break;
    }
    case 55688:
    {
        returnValue = F("Bgm.-Rauner-Str.");
        break;
    }
    case 55689:
    {
        returnValue = F("Bgm.-Rehm-Str.");
        break;
    }
    case 55690:
    {
        returnValue = F("Bgm.-Rhein-Str.");
        break;
    }
    case 55691:
    {
        returnValue = F("Bgm.-Rieger-Str.");
        break;
    }
    case 55692:
    {
        returnValue = F("Bgm.-Ring-Str.");
        break;
    }
    case 55693:
    {
        returnValue = F("Bgm.-Ritter-Str.");
        break;
    }
    case 55694:
    {
        returnValue = F("Bgm.-Robl-Str.");
        break;
    }
    case 55695:
    {
        returnValue = F("Bgm.-Rolfes-Str.");
        break;
    }
    case 55696:
    {
        returnValue = F("Bgm.-Roth-Str.");
        break;
    }
    case 55697:
    {
        returnValue = F("Bgm.-Rädler-Str.");
        break;
    }
    case 55698:
    {
        returnValue = F("Bgm.-Sailer-Str.");
        break;
    }
    case 55699:
    {
        returnValue = F("Bgm.-Schachtner-Str.");
        break;
    }
    case 55700:
    {
        returnValue = F("Bgm.-Schallhorn-Str.");
        break;
    }
    case 55701:
    {
        returnValue = F("Bgm.-Schlachtmeier-Str.");
        break;
    }
    case 55702:
    {
        returnValue = F("Bgm.-Schmid-Str.");
        break;
    }
    case 55703:
    {
        returnValue = F("Bgm.-Schmitt-Str.");
        break;
    }
    case 55704:
    {
        returnValue = F("Bgm.-Schober-Str.");
        break;
    }
    case 55705:
    {
        returnValue = F("Bgm.-Schönauer-Str.");
        break;
    }
    case 55706:
    {
        returnValue = F("Bgm.-Sepp-Böhm-Str.");
        break;
    }
    case 55707:
    {
        returnValue = F("Bgm.-Simet-Str.");
        break;
    }
    case 55708:
    {
        returnValue = F("Bgm.-Stadler-Str.");
        break;
    }
    case 55709:
    {
        returnValue = F("Bgm.-Stallbauer-Str.");
        break;
    }
    case 55710:
    {
        returnValue = F("Bgm.-Stegmüller-Str.");
        break;
    }
    case 55711:
    {
        returnValue = F("Bgm.-Stocker-Str.");
        break;
    }
    case 55712:
    {
        returnValue = F("Bgm.-Stoffel-Str.");
        break;
    }
    case 55713:
    {
        returnValue = F("Bgm.-Strobl-Str.");
        break;
    }
    case 55714:
    {
        returnValue = F("Bgm.-Strobl-Weg");
        break;
    }
    case 55715:
    {
        returnValue = F("Bgm.-Stuiber-Str.");
        break;
    }
    case 55716:
    {
        returnValue = F("Bgm.-Sturm-Str.");
        break;
    }
    case 55717:
    {
        returnValue = F("Bgm.-Summerer-Weg");
        break;
    }
    case 55718:
    {
        returnValue = F("Bgm.-Thaler-Str.");
        break;
    }
    case 55719:
    {
        returnValue = F("Bgm.-Unertl-Str.");
        break;
    }
    case 55720:
    {
        returnValue = F("Bgm.-Urban-Str.");
        break;
    }
    case 55721:
    {
        returnValue = F("Bgm.-Weigand-Str.");
        break;
    }
    case 55722:
    {
        returnValue = F("Bgm.-Weigl-Str.");
        break;
    }
    case 55723:
    {
        returnValue = F("Bgm.-Wenk-Str.");
        break;
    }
    case 55724:
    {
        returnValue = F("Bgm.-Werdich-Str.");
        break;
    }
    case 55725:
    {
        returnValue = F("Bgm.-Weyrauther-Str.");
        break;
    }
    case 55726:
    {
        returnValue = F("Bgm.-Wiendl-Str.");
        break;
    }
    case 55727:
    {
        returnValue = F("Bgm.-Wiesnet-Str.");
        break;
    }
    case 55728:
    {
        returnValue = F("Bgm.-Wimmer-Str.");
        break;
    }
    case 55729:
    {
        returnValue = F("Bgm.-Winklhofer-Str.");
        break;
    }
    case 55730:
    {
        returnValue = F("Bgm.-Wittmann-Str.");
        break;
    }
    case 55731:
    {
        returnValue = F("Bgm.-Würzinger-Str.");
        break;
    }
    case 55732:
    {
        returnValue = F("Bgm.-Zeiler-Weg");
        break;
    }
    case 55733:
    {
        returnValue = F("Bgm.-Zimmer-Str.");
        break;
    }
    case 55734:
    {
        returnValue = F("Bgm.-Zülch-Weg");
        break;
    }
    case 55735:
    {
        returnValue = F("Bi Kiar");
        break;
    }
    case 55736:
    {
        returnValue = F("Bi Miiren");
        break;
    }
    case 55737:
    {
        returnValue = F("Bi Müür");
        break;
    }
    case 55738:
    {
        returnValue = F("Bi Trentaft");
        break;
    }
    case 55739:
    {
        returnValue = F("Bi d'Utkiek");
        break;
    }
    case 55740:
    {
        returnValue = F("Bi de Baak");
        break;
    }
    case 55741:
    {
        returnValue = F("Bi de Boomschool");
        break;
    }
    case 55742:
    {
        returnValue = F("Bi de Dampmöhl");
        break;
    }
    case 55743:
    {
        returnValue = F("Bi de Eek");
        break;
    }
    case 55744:
    {
        returnValue = F("Bi de Feldmöhl");
        break;
    }
    case 55745:
    {
        returnValue = F("Bi de Forstkoppeln");
        break;
    }
    case 55746:
    {
        returnValue = F("Bi de Friheit");
        break;
    }
    case 55747:
    {
        returnValue = F("Bi de Hoff");
        break;
    }
    case 55748:
    {
        returnValue = F("Bi de Hütten");
        break;
    }
    case 55749:
    {
        returnValue = F("Bi de Kark");
        break;
    }
    case 55750:
    {
        returnValue = F("Bi de Karken");
        break;
    }
    case 55751:
    {
        returnValue = F("Bi de Karkwisch");
        break;
    }
    case 55752:
    {
        returnValue = F("Bi de Kirch");
        break;
    }
    case 55753:
    {
        returnValue = F("Bi de Krog");
        break;
    }
    case 55754:
    {
        returnValue = F("Bi de Meere");
        break;
    }
    case 55755:
    {
        returnValue = F("Bi de Mergelkuhl");
        break;
    }
    case 55756:
    {
        returnValue = F("Bi de Möhl");
        break;
    }
    case 55757:
    {
        returnValue = F("Bi de Rohe");
        break;
    }
    case 55758:
    {
        returnValue = F("Bi de Schink");
        break;
    }
    case 55759:
    {
        returnValue = F("Bi de School");
        break;
    }
    case 55760:
    {
        returnValue = F("Bi de Schünkoppel");
        break;
    }
    case 55761:
    {
        returnValue = F("Bi de Süd");
        break;
    }
    case 55762:
    {
        returnValue = F("Bi de Teielei");
        break;
    }
    case 55763:
    {
        returnValue = F("Bi de Utgrabung");
        break;
    }
    case 55764:
    {
        returnValue = F("Bi de Wall");
        break;
    }
    case 55765:
    {
        returnValue = F("Bi de Windmöl");
        break;
    }
    case 55766:
    {
        returnValue = F("Bi de Wurt");
        break;
    }
    case 55767:
    {
        returnValue = F("Bi den Ihlpohl");
        break;
    }
    case 55768:
    {
        returnValue = F("Bi di wik");
        break;
    }
    case 55769:
    {
        returnValue = F("Bi'n Diek");
        break;
    }
    case 55770:
    {
        returnValue = F("Bi'n Lassfänger");
        break;
    }
    case 55771:
    {
        returnValue = F("Bi'n Ramoker");
        break;
    }
    case 55772:
    {
        returnValue = F("Bi'n Spritzenhus");
        break;
    }
    case 55773:
    {
        returnValue = F("Bialasstr.");
        break;
    }
    case 55774:
    {
        returnValue = F("Biaser Str.");
        break;
    }
    case 55775:
    {
        returnValue = F("Bibelgarten");
        break;
    }
    case 55776:
    {
        returnValue = F("Bibelgarten der Löhnberger Schlosskirche");
        break;
    }
    case 55777:
    {
        returnValue = F("Bibelierstr.");
        break;
    }
    case 55778:
    {
        returnValue = F("Bibelis");
        break;
    }
    case 55779:
    {
        returnValue = F("Bibelisgasse");
        break;
    }
    case 55780:
    {
        returnValue = F("Bibellehrpfad");
        break;
    }
    case 55781:
    {
        returnValue = F("Bibelpflanzenpark");
        break;
    }
    case 55782:
    {
        returnValue = F("Bibelskircher Weg");
        break;
    }
    case 55783:
    {
        returnValue = F("Bibelstr.");
        break;
    }
    case 55784:
    {
        returnValue = F("Bibelter Weg");
        break;
    }
    case 55785:
    {
        returnValue = F("Bibelweg");
        break;
    }
    case 55786:
    {
        returnValue = F("Bibelöd");
        break;
    }
    case 55787:
    {
        returnValue = F("Bibensstr.");
        break;
    }
    case 55788:
    {
        returnValue = F("Biber");
        break;
    }
    case 55789:
    {
        returnValue = F("Biberach");
        break;
    }
    case 55790:
    {
        returnValue = F("Biberacher Str.");
        break;
    }
    case 55791:
    {
        returnValue = F("Biberacher Weg");
        break;
    }
    case 55792:
    {
        returnValue = F("Biberacherhofstr.");
        break;
    }
    case 55793:
    {
        returnValue = F("Biberachzeller Str.");
        break;
    }
    case 55794:
    {
        returnValue = F("Biberanger");
        break;
    }
    case 55795:
    {
        returnValue = F("Biberau");
        break;
    }
    case 55796:
    {
        returnValue = F("Biberbach");
        break;
    }
    case 55797:
    {
        returnValue = F("Biberbacher Str.");
        break;
    }
    case 55798:
    {
        returnValue = F("Biberbacher Weg");
        break;
    }
    case 55799:
    {
        returnValue = F("Biberbachstr.");
        break;
    }
    case 55800:
    {
        returnValue = F("Biberbau");
        break;
    }
    case 55801:
    {
        returnValue = F("Biberberger Str.");
        break;
    }
    case 55802:
    {
        returnValue = F("Biberburg");
        break;
    }
    case 55803:
    {
        returnValue = F("Biberdamm");
        break;
    }
    case 55804:
    {
        returnValue = F("Biberecker Str.");
        break;
    }
    case 55805:
    {
        returnValue = F("Bibereckerweg");
        break;
    }
    case 55806:
    {
        returnValue = F("Biberfarm");
        break;
    }
    case 55807:
    {
        returnValue = F("Biberfeld");
        break;
    }
    case 55808:
    {
        returnValue = F("Biberfeldstr.");
        break;
    }
    case 55809:
    {
        returnValue = F("Biberg");
        break;
    }
    case 55810:
    {
        returnValue = F("Bibergasse");
        break;
    }
    case 55811:
    {
        returnValue = F("Bibergauer Str.");
        break;
    }
    case 55812:
    {
        returnValue = F("Bibergauer Weg");
        break;
    }
    case 55813:
    {
        returnValue = F("Biberger Feld");
        break;
    }
    case 55814:
    {
        returnValue = F("Biberger Str.");
        break;
    }
    case 55815:
    {
        returnValue = F("Bibergraben");
        break;
    }
    case 55816:
    {
        returnValue = F("Bibergrund");
        break;
    }
    case 55817:
    {
        returnValue = F("Bibergrundstr.");
        break;
    }
    case 55818:
    {
        returnValue = F("Biberhöhe");
        break;
    }
    case 55819:
    {
        returnValue = F("Biberkiez");
        break;
    }
    case 55820:
    {
        returnValue = F("Biberkopfstr.");
        break;
    }
    case 55821:
    {
        returnValue = F("Biberkopfweg");
        break;
    }
    case 55822:
    {
        returnValue = F("Bibermühlstr.");
        break;
    }
    case 55823:
    {
        returnValue = F("Biberpfad");
        break;
    }
    case 55824:
    {
        returnValue = F("Biberring");
        break;
    }
    case 55825:
    {
        returnValue = F("Bibersaue");
        break;
    }
    case 55826:
    {
        returnValue = F("Bibersbach");
        break;
    }
    case 55827:
    {
        returnValue = F("Bibersbacher Str.");
        break;
    }
    case 55828:
    {
        returnValue = F("Biberschwöll");
        break;
    }
    case 55829:
    {
        returnValue = F("Bibersfelder Str.");
        break;
    }
    case 55830:
    {
        returnValue = F("Bibershof");
        break;
    }
    case 55831:
    {
        returnValue = F("Bibersohlerweg");
        break;
    }
    case 55832:
    {
        returnValue = F("Bibersstr.");
        break;
    }
    case 55833:
    {
        returnValue = F("Bibersteig");
        break;
    }
    case 55834:
    {
        returnValue = F("Bibersteige");
        break;
    }
    case 55835:
    {
        returnValue = F("Biberstr.");
        break;
    }
    case 55836:
    {
        returnValue = F("Bibersträßle");
        break;
    }
    case 55837:
    {
        returnValue = F("Bibertal");
        break;
    }
    case 55838:
    {
        returnValue = F("Bibertalstr.");
        break;
    }
    case 55839:
    {
        returnValue = F("Bibertalweg");
        break;
    }
    case 55840:
    {
        returnValue = F("Bibertstr.");
        break;
    }
    case 55841:
    {
        returnValue = F("Biberttalstr.");
        break;
    }
    case 55842:
    {
        returnValue = F("Biberwasenstr.");
        break;
    }
    case 55843:
    {
        returnValue = F("Biberweg");
        break;
    }
    case 55844:
    {
        returnValue = F("Biberwertweg");
        break;
    }
    case 55845:
    {
        returnValue = F("Biberwiese");
        break;
    }
    case 55846:
    {
        returnValue = F("Biberzellweg");
        break;
    }
    case 55847:
    {
        returnValue = F("Bibicke");
        break;
    }
    case 55848:
    {
        returnValue = F("Bibienastr.");
        break;
    }
    case 55849:
    {
        returnValue = F("Bibingerstr.");
        break;
    }
    case 55850:
    {
        returnValue = F("Bibitzenbach");
        break;
    }
    case 55851:
    {
        returnValue = F("Bibliothek Letschin");
        break;
    }
    case 55852:
    {
        returnValue = F("Bibliotheksgasse");
        break;
    }
    case 55853:
    {
        returnValue = F("Bibliotheksplatz");
        break;
    }
    case 55854:
    {
        returnValue = F("Bibliotheksweg");
        break;
    }
    case 55855:
    {
        returnValue = F("Bibliser Pfad");
        break;
    }
    case 55856:
    {
        returnValue = F("Bibliser Str.");
        break;
    }
    case 55857:
    {
        returnValue = F("Bibliser Weg");
        break;
    }
    case 55858:
    {
        returnValue = F("Biblisweg");
        break;
    }
    case 55859:
    {
        returnValue = F("Bibopfad");
        break;
    }
    case 55860:
    {
        returnValue = F("Bibower Weg");
        break;
    }
    case 55861:
    {
        returnValue = F("Bibracher Str.");
        break;
    }
    case 55862:
    {
        returnValue = F("Bibraer Landstr.");
        break;
    }
    case 55863:
    {
        returnValue = F("Bibraer Str.");
        break;
    }
    case 55864:
    {
        returnValue = F("Bibraer Weg");
        break;
    }
    case 55865:
    {
        returnValue = F("Bibrastr.");
        break;
    }
    case 55866:
    {
        returnValue = F("Bibraweg");
        break;
    }
    case 55867:
    {
        returnValue = F("Bibri");
        break;
    }
    case 55868:
    {
        returnValue = F("Biburg");
        break;
    }
    case 55869:
    {
        returnValue = F("Biburger Feldweg");
        break;
    }
    case 55870:
    {
        returnValue = F("Biburger Str.");
        break;
    }
    case 55871:
    {
        returnValue = F("Biburger Weg");
        break;
    }
    case 55872:
    {
        returnValue = F("Biburgweg");
        break;
    }
    case 55873:
    {
        returnValue = F("Bicester Park");
        break;
    }
    case 55874:
    {
        returnValue = F("Bich");
        break;
    }
    case 55875:
    {
        returnValue = F("Bichel");
        break;
    }
    case 55876:
    {
        returnValue = F("Bichelackerstr.");
        break;
    }
    case 55877:
    {
        returnValue = F("Bicheler Berg");
        break;
    }
    case 55878:
    {
        returnValue = F("Bicheler Str.");
        break;
    }
    case 55879:
    {
        returnValue = F("Bicheln");
        break;
    }
    case 55880:
    {
        returnValue = F("Bichelrainweg");
        break;
    }
    case 55881:
    {
        returnValue = F("Bichels");
        break;
    }
    case 55882:
    {
        returnValue = F("Bichelstennche");
        break;
    }
    case 55883:
    {
        returnValue = F("Bichelstr.");
        break;
    }
    case 55884:
    {
        returnValue = F("Bichelweg");
        break;
    }
    case 55885:
    {
        returnValue = F("Bicheläckerstr.");
        break;
    }
    case 55886:
    {
        returnValue = F("Bichenweg");
        break;
    }
    case 55887:
    {
        returnValue = F("Bicherouxstr.");
        break;
    }
    case 55888:
    {
        returnValue = F("Bichl");
        break;
    }
    case 55889:
    {
        returnValue = F("Bichlberg");
        break;
    }
    case 55890:
    {
        returnValue = F("Bichler Str.");
        break;
    }
    case 55891:
    {
        returnValue = F("Bichlersteig");
        break;
    }
    case 55892:
    {
        returnValue = F("Bichlerstr.");
        break;
    }
    case 55893:
    {
        returnValue = F("Bichlfeldstr.");
        break;
    }
    case 55894:
    {
        returnValue = F("Bichlfeldweg");
        break;
    }
    case 55895:
    {
        returnValue = F("Bichlhub");
        break;
    }
    case 55896:
    {
        returnValue = F("Bichlmairstr.");
        break;
    }
    case 55897:
    {
        returnValue = F("Bichlmannstr.");
        break;
    }
    case 55898:
    {
        returnValue = F("Bichlring");
        break;
    }
    case 55899:
    {
        returnValue = F("Bichlstr.");
        break;
    }
    case 55900:
    {
        returnValue = F("Bichlweg");
        break;
    }
    case 55901:
    {
        returnValue = F("Bichofsheimer Grund");
        break;
    }
    case 55902:
    {
        returnValue = F("Bichtenhahn");
        break;
    }
    case 55903:
    {
        returnValue = F("Bichtlinger Str.");
        break;
    }
    case 55904:
    {
        returnValue = F("Bickbargen");
        break;
    }
    case 55905:
    {
        returnValue = F("Bickbeen");
        break;
    }
    case 55906:
    {
        returnValue = F("Bickbeerbusch");
        break;
    }
    case 55907:
    {
        returnValue = F("Bickbeeren");
        break;
    }
    case 55908:
    {
        returnValue = F("Bickbeernflage");
        break;
    }
    case 55909:
    {
        returnValue = F("Bickbeerngrund");
        break;
    }
    case 55910:
    {
        returnValue = F("Bickbeernweg");
        break;
    }
    case 55911:
    {
        returnValue = F("Bickbeerstieg");
        break;
    }
    case 55912:
    {
        returnValue = F("Bickbeerweg");
        break;
    }
    case 55913:
    {
        returnValue = F("Bickberger Hof");
        break;
    }
    case 55914:
    {
        returnValue = F("Bickbüschen");
        break;
    }
    case 55915:
    {
        returnValue = F("Bickchensweg");
        break;
    }
    case 55916:
    {
        returnValue = F("Bickelberg");
        break;
    }
    case 55917:
    {
        returnValue = F("Bickeldornlochweg");
        break;
    }
    case 55918:
    {
        returnValue = F("Bickelgasse");
        break;
    }
    case 55919:
    {
        returnValue = F("Bickelhauweg");
        break;
    }
    case 55920:
    {
        returnValue = F("Bickelsberger Str.");
        break;
    }
    case 55921:
    {
        returnValue = F("Bickelsgasse");
        break;
    }
    case 55922:
    {
        returnValue = F("Bickelsheck");
        break;
    }
    case 55923:
    {
        returnValue = F("Bickelsteinstr.");
        break;
    }
    case 55924:
    {
        returnValue = F("Bickelstr.");
        break;
    }
    case 55925:
    {
        returnValue = F("Bickelweg");
        break;
    }
    case 55926:
    {
        returnValue = F("Bickelwiesenschneise");
        break;
    }
    case 55927:
    {
        returnValue = F("Bicken");
        break;
    }
    case 55928:
    {
        returnValue = F("Bickenalbstr.");
        break;
    }
    case 55929:
    {
        returnValue = F("Bickenaschbachermühle");
        break;
    }
    case 55930:
    {
        returnValue = F("Bickenbacher Str.");
        break;
    }
    case 55931:
    {
        returnValue = F("Bickenbacher Weg");
        break;
    }
    case 55932:
    {
        returnValue = F("Bickenbachring");
        break;
    }
    case 55933:
    {
        returnValue = F("Bickenbachstr.");
        break;
    }
    case 55934:
    {
        returnValue = F("Bickenborn");
        break;
    }
    case 55935:
    {
        returnValue = F("Bickendorfer Str.");
        break;
    }
    case 55936:
    {
        returnValue = F("Bickenerwende");
        break;
    }
    case 55937:
    {
        returnValue = F("Bickenmäuerle");
        break;
    }
    case 55938:
    {
        returnValue = F("Bickenrieder Str.");
        break;
    }
    case 55939:
    {
        returnValue = F("Bickenrieder Weg");
        break;
    }
    case 55940:
    {
        returnValue = F("Bickensohler Str.");
        break;
    }
    case 55941:
    {
        returnValue = F("Bickensohler Weg");
        break;
    }
    case 55942:
    {
        returnValue = F("Bickensteg");
        break;
    }
    case 55943:
    {
        returnValue = F("Bickenstr.");
        break;
    }
    case 55944:
    {
        returnValue = F("Bicker Weg");
        break;
    }
    case 55945:
    {
        returnValue = F("Bickerather Str.");
        break;
    }
    case 55946:
    {
        returnValue = F("Bickermeer");
        break;
    }
    case 55947:
    {
        returnValue = F("Bickernstr.");
        break;
    }
    case 55948:
    {
        returnValue = F("Bickers Hof");
        break;
    }
    case 55949:
    {
        returnValue = F("Bickershöhe");
        break;
    }
    case 55950:
    {
        returnValue = F("Bickerweg");
        break;
    }
    case 55951:
    {
        returnValue = F("Bickesheimer Str.");
        break;
    }
    case 55952:
    {
        returnValue = F("Bickeweg");
        break;
    }
    case 55953:
    {
        returnValue = F("Bickhausener Str.");
        break;
    }
    case 55954:
    {
        returnValue = F("Bicklederstr.");
        break;
    }
    case 55955:
    {
        returnValue = F("Bicklinger Weg");
        break;
    }
    case 55956:
    {
        returnValue = F("Bicklingsbach");
        break;
    }
    case 55957:
    {
        returnValue = F("Bicksweg");
        break;
    }
    case 55958:
    {
        returnValue = F("Biddeloh");
        break;
    }
    case 55959:
    {
        returnValue = F("Bideelen");
        break;
    }
    case 55960:
    {
        returnValue = F("Bidembachstr.");
        break;
    }
    case 55961:
    {
        returnValue = F("Biding");
        break;
    }
    case 55962:
    {
        returnValue = F("Bidinger Str.");
        break;
    }
    case 55963:
    {
        returnValue = F("Biebelhausener Str.");
        break;
    }
    case 55964:
    {
        returnValue = F("Biebelnheimer Str.");
        break;
    }
    case 55965:
    {
        returnValue = F("Biebelrieder Str.");
        break;
    }
    case 55966:
    {
        returnValue = F("Biebelrieder Weg");
        break;
    }
    case 55967:
    {
        returnValue = F("Biebelsheimer Str.");
        break;
    }
    case 55968:
    {
        returnValue = F("Biebelshofer Weg");
        break;
    }
    case 55969:
    {
        returnValue = F("Biebelstr.");
        break;
    }
    case 55970:
    {
        returnValue = F("Biebener Weg");
        break;
    }
    case 55971:
    {
        returnValue = F("Bieberacher Str.");
        break;
    }
    case 55972:
    {
        returnValue = F("Bieberauer Str.");
        break;
    }
    case 55973:
    {
        returnValue = F("Bieberbach");
        break;
    }
    case 55974:
    {
        returnValue = F("Bieberbacher Str.");
        break;
    }
    case 55975:
    {
        returnValue = F("Bieberbachweg");
        break;
    }
    case 55976:
    {
        returnValue = F("Bieberehrener Str.");
        break;
    }
    case 55977:
    {
        returnValue = F("Bieberer Feldschneise");
        break;
    }
    case 55978:
    {
        returnValue = F("Bieberer Str.");
        break;
    }
    case 55979:
    {
        returnValue = F("Bieberer Weg");
        break;
    }
    case 55980:
    {
        returnValue = F("Bieberer Wegschneise");
        break;
    }
    case 55981:
    {
        returnValue = F("Bieberer Wiesenschneise");
        break;
    }
    case 55982:
    {
        returnValue = F("Biebergasse");
        break;
    }
    case 55983:
    {
        returnValue = F("Biebergstr.");
        break;
    }
    case 55984:
    {
        returnValue = F("Biebergwiese");
        break;
    }
    case 55985:
    {
        returnValue = F("Biebermühle");
        break;
    }
    case 55986:
    {
        returnValue = F("Biebermühler Str.");
        break;
    }
    case 55987:
    {
        returnValue = F("Bieberner Str.");
        break;
    }
    case 55988:
    {
        returnValue = F("Biebernheimer Höhe");
        break;
    }
    case 55989:
    {
        returnValue = F("Biebernseeweg");
        break;
    }
    case 55990:
    {
        returnValue = F("Bieberpfad");
        break;
    }
    case 55991:
    {
        returnValue = F("Bieberschlager Str.");
        break;
    }
    case 55992:
    {
        returnValue = F("Bieberstein");
        break;
    }
    case 55993:
    {
        returnValue = F("Biebersteiner Str.");
        break;
    }
    case 55994:
    {
        returnValue = F("Biebersteiner Weg");
        break;
    }
    case 55995:
    {
        returnValue = F("Biebersteinstr.");
        break;
    }
    case 55996:
    {
        returnValue = F("Bieberstieg");
        break;
    }
    case 55997:
    {
        returnValue = F("Bieberstr.");
        break;
    }
    case 55998:
    {
        returnValue = F("Biebertalstr.");
        break;
    }
    case 55999:
    {
        returnValue = F("Bieberweg");
        break;
    }
    case 56000:
    {
        returnValue = F("Bieberwiesen");
        break;
    }
    case 56001:
    {
        returnValue = F("Biebesheimer Str.");
        break;
    }
    case 56002:
    {
        returnValue = F("Biebigheimer Str.");
        break;
    }
    case 56003:
    {
        returnValue = F("Biebing");
        break;
    }
    case 56004:
    {
        returnValue = F("Biebingerstr.");
        break;
    }
    case 56005:
    {
        returnValue = F("Bieblacher Park");
        break;
    }
    case 56006:
    {
        returnValue = F("Bieblacher Str.");
        break;
    }
    case 56007:
    {
        returnValue = F("Biebricher Allee");
        break;
    }
    case 56008:
    {
        returnValue = F("Biebricherstr.");
        break;
    }
    case 56009:
    {
        returnValue = F("Biechlweg");
        break;
    }
    case 56010:
    {
        returnValue = F("Biedebacher Str.");
        break;
    }
    case 56011:
    {
        returnValue = F("Biedenbachstr.");
        break;
    }
    case 56012:
    {
        returnValue = F("Biedenbergstr.");
        break;
    }
    case 56013:
    {
        returnValue = F("Biedendieckstr.");
        break;
    }
    case 56014:
    {
        returnValue = F("Biedenkopfer Str.");
        break;
    }
    case 56015:
    {
        returnValue = F("Biedenkämmerweg");
        break;
    }
    case 56016:
    {
        returnValue = F("Biedensandstr.");
        break;
    }
    case 56017:
    {
        returnValue = F("Biederbach");
        break;
    }
    case 56018:
    {
        returnValue = F("Biederbacher Str.");
        break;
    }
    case 56019:
    {
        returnValue = F("Biederbachwiesen");
        break;
    }
    case 56020:
    {
        returnValue = F("Biederitzer Str.");
        break;
    }
    case 56021:
    {
        returnValue = F("Biederitzer Weg");
        break;
    }
    case 56022:
    {
        returnValue = F("Biederlackstr.");
        break;
    }
    case 56023:
    {
        returnValue = F("Biedermanngasse");
        break;
    }
    case 56024:
    {
        returnValue = F("Biedermannsiedlung");
        break;
    }
    case 56025:
    {
        returnValue = F("Biedermannstr.");
        break;
    }
    case 56026:
    {
        returnValue = F("Biedermannweg");
        break;
    }
    case 56027:
    {
        returnValue = F("Biedermeierstr.");
        break;
    }
    case 56028:
    {
        returnValue = F("Biederstrainweg");
        break;
    }
    case 56029:
    {
        returnValue = F("Biedesheimer Str.");
        break;
    }
    case 56030:
    {
        returnValue = F("Biedings");
        break;
    }
    case 56031:
    {
        returnValue = F("Biedrichsgasse");
        break;
    }
    case 56032:
    {
        returnValue = F("Biedrichstr.");
        break;
    }
    case 56033:
    {
        returnValue = F("Biedritzring");
        break;
    }
    case 56034:
    {
        returnValue = F("Biefangstr.");
        break;
    }
    case 56035:
    {
        returnValue = F("Biefelweide");
        break;
    }
    case 56036:
    {
        returnValue = F("Biegarten");
        break;
    }
    case 56037:
    {
        returnValue = F("Biegartenstr.");
        break;
    }
    case 56038:
    {
        returnValue = F("Biegartenweg");
        break;
    }
    case 56039:
    {
        returnValue = F("Biegasse");
        break;
    }
    case 56040:
    {
        returnValue = F("Biege");
        break;
    }
    case 56041:
    {
        returnValue = F("Biegel");
        break;
    }
    case 56042:
    {
        returnValue = F("Biegelfeldstr.");
        break;
    }
    case 56043:
    {
        returnValue = F("Biegelgasse");
        break;
    }
    case 56044:
    {
        returnValue = F("Biegelhofstr.");
        break;
    }
    case 56045:
    {
        returnValue = F("Biegelspfad");
        break;
    }
    case 56046:
    {
        returnValue = F("Biegelstr.");
        break;
    }
    case 56047:
    {
        returnValue = F("Biegelweg");
        break;
    }
    case 56048:
    {
        returnValue = F("Biegelwiesen");
        break;
    }
    case 56049:
    {
        returnValue = F("Biegelwiesenstr.");
        break;
    }
    case 56050:
    {
        returnValue = F("Biegenbrücker Str.");
        break;
    }
    case 56051:
    {
        returnValue = F("Biegenburg");
        break;
    }
    case 56052:
    {
        returnValue = F("Biegener Landstr.");
        break;
    }
    case 56053:
    {
        returnValue = F("Biegener Str.");
        break;
    }
    case 56054:
    {
        returnValue = F("Biegenhofstr.");
        break;
    }
    case 56055:
    {
        returnValue = F("Biegenmühle");
        break;
    }
    case 56056:
    {
        returnValue = F("Biegenrain");
        break;
    }
    case 56057:
    {
        returnValue = F("Biegenstr.");
        break;
    }
    case 56058:
    {
        returnValue = F("Biegenweg");
        break;
    }
    case 56059:
    {
        returnValue = F("Biegenwiesen");
        break;
    }
    case 56060:
    {
        returnValue = F("Biegersguter Weg");
        break;
    }
    case 56061:
    {
        returnValue = F("Biegerstr.");
        break;
    }
    case 56062:
    {
        returnValue = F("Biegfeld");
        break;
    }
    case 56063:
    {
        returnValue = F("Bieggasse");
        break;
    }
    case 56064:
    {
        returnValue = F("Biegstr.");
        break;
    }
    case 56065:
    {
        returnValue = F("Biegäcker");
        break;
    }
    case 56066:
    {
        returnValue = F("Biehainer Weg");
        break;
    }
    case 56067:
    {
        returnValue = F("Biehl");
        break;
    }
    case 56068:
    {
        returnValue = F("Biehlaer Nordstr.");
        break;
    }
    case 56069:
    {
        returnValue = F("Biehlaer Str.");
        break;
    }
    case 56070:
    {
        returnValue = F("Biehlaer Weg");
        break;
    }
    case 56071:
    {
        returnValue = F("Biehlebohstr.");
        break;
    }
    case 56072:
    {
        returnValue = F("Biehlener Hauptstr.");
        break;
    }
    case 56073:
    {
        returnValue = F("Biehlener Str.");
        break;
    }
    case 56074:
    {
        returnValue = F("Biehlener Weg");
        break;
    }
    case 56075:
    {
        returnValue = F("Biehler Weg");
        break;
    }
    case 56076:
    {
        returnValue = F("Biehlerhof");
        break;
    }
    case 56077:
    {
        returnValue = F("Biehlerstr.");
        break;
    }
    case 56078:
    {
        returnValue = F("Biehlerweg");
        break;
    }
    case 56079:
    {
        returnValue = F("Biehlkuppe");
        break;
    }
    case 56080:
    {
        returnValue = F("Biehlstr.");
        break;
    }
    case 56081:
    {
        returnValue = F("Biehlweg");
        break;
    }
    case 56082:
    {
        returnValue = F("Biehnenweg");
        break;
    }
    case 56083:
    {
        returnValue = F("Biehnestr.");
        break;
    }
    case 56084:
    {
        returnValue = F("Bieke");
        break;
    }
    case 56085:
    {
        returnValue = F("Biekedamm");
        break;
    }
    case 56086:
    {
        returnValue = F("Biekegang");
        break;
    }
    case 56087:
    {
        returnValue = F("Biekehöhe");
        break;
    }
    case 56088:
    {
        returnValue = F("Biekensteg");
        break;
    }
    case 56089:
    {
        returnValue = F("Biekenstr.");
        break;
    }
    case 56090:
    {
        returnValue = F("Biekestr.");
        break;
    }
    case 56091:
    {
        returnValue = F("Bieketurmstr.");
        break;
    }
    case 56092:
    {
        returnValue = F("Biekeweg");
        break;
    }
    case 56093:
    {
        returnValue = F("Biekhofer Str.");
        break;
    }
    case 56094:
    {
        returnValue = F("Biekmeresch");
        break;
    }
    case 56095:
    {
        returnValue = F("Bielablick");
        break;
    }
    case 56096:
    {
        returnValue = F("Bielatalstr.");
        break;
    }
    case 56097:
    {
        returnValue = F("Bielbelnheimer Str.");
        break;
    }
    case 56098:
    {
        returnValue = F("Bielbergweg");
        break;
    }
    case 56099:
    {
        returnValue = F("Biele");
        break;
    }
    case 56100:
    {
        returnValue = F("Bielebohstr.");
        break;
    }
    case 56101:
    {
        returnValue = F("Bielefelder Str.");
        break;
    }
    case 56102:
    {
        returnValue = F("Bielefelder Weg");
        break;
    }
    case 56103:
    {
        returnValue = F("Bielegasse");
        break;
    }
    case 56104:
    {
        returnValue = F("Bielenberg");
        break;
    }
    case 56105:
    {
        returnValue = F("Bielenbergstr.");
        break;
    }
    case 56106:
    {
        returnValue = F("Bielenbusch");
        break;
    }
    case 56107:
    {
        returnValue = F("Bielener Str.");
        break;
    }
    case 56108:
    {
        returnValue = F("Bielengasse");
        break;
    }
    case 56109:
    {
        returnValue = F("Bielenhof");
        break;
    }
    case 56110:
    {
        returnValue = F("Bielenweg");
        break;
    }
    case 56111:
    {
        returnValue = F("Bielenweide");
        break;
    }
    case 56112:
    {
        returnValue = F("Bieler Str.");
        break;
    }
    case 56113:
    {
        returnValue = F("Bieler Weg");
        break;
    }
    case 56114:
    {
        returnValue = F("Bielerfeld");
        break;
    }
    case 56115:
    {
        returnValue = F("Bielertstr.");
        break;
    }
    case 56116:
    {
        returnValue = F("Bielfeld");
        break;
    }
    case 56117:
    {
        returnValue = F("Bielfeldstr.");
        break;
    }
    case 56118:
    {
        returnValue = F("Bielfeldtweg");
        break;
    }
    case 56119:
    {
        returnValue = F("Bielhofstr.");
        break;
    }
    case 56120:
    {
        returnValue = F("Bieling Pfad");
        break;
    }
    case 56121:
    {
        returnValue = F("Bielitzer Str.");
        break;
    }
    case 56122:
    {
        returnValue = F("Bielitzstr.");
        break;
    }
    case 56123:
    {
        returnValue = F("Bielkamp");
        break;
    }
    case 56124:
    {
        returnValue = F("Bielkenhagen");
        break;
    }
    case 56125:
    {
        returnValue = F("Bielohweg");
        break;
    }
    case 56126:
    {
        returnValue = F("Bielriet Falknerei");
        break;
    }
    case 56127:
    {
        returnValue = F("Bielriethstr.");
        break;
    }
    case 56128:
    {
        returnValue = F("Bielshövensand");
        break;
    }
    case 56129:
    {
        returnValue = F("Bielsteinchaussee");
        break;
    }
    case 56130:
    {
        returnValue = F("Bielsteinchaussee 2");
        break;
    }
    case 56131:
    {
        returnValue = F("Bielsteiner Str.");
        break;
    }
    case 56132:
    {
        returnValue = F("Bielsteiner Weg");
        break;
    }
    case 56133:
    {
        returnValue = F("Bielsteiner-Bahn-Str.");
        break;
    }
    case 56134:
    {
        returnValue = F("Bielsteinstr.");
        break;
    }
    case 56135:
    {
        returnValue = F("Bielsteinweg");
        break;
    }
    case 56136:
    {
        returnValue = F("Bielstr.");
        break;
    }
    case 56137:
    {
        returnValue = F("Bielweg");
        break;
    }
    case 56138:
    {
        returnValue = F("Biemannsloch");
        break;
    }
    case 56139:
    {
        returnValue = F("Biemenhorster Weg");
        break;
    }
    case 56140:
    {
        returnValue = F("Biemerberg Trail");
        break;
    }
    case 56141:
    {
        returnValue = F("Biemker Breite");
        break;
    }
    case 56142:
    {
        returnValue = F("Biemker Str.");
        break;
    }
    case 56143:
    {
        returnValue = F("Biemser Str.");
        break;
    }
    case 56144:
    {
        returnValue = F("Biemser Weg");
        break;
    }
    case 56145:
    {
        returnValue = F("Biemsmaar");
        break;
    }
    case 56146:
    {
        returnValue = F("Biendlweg");
        break;
    }
    case 56147:
    {
        returnValue = F("Biene");
        break;
    }
    case 56148:
    {
        returnValue = F("Bienebuckweg");
        break;
    }
    case 56149:
    {
        returnValue = F("Bieneckstr.");
        break;
    }
    case 56150:
    {
        returnValue = F("Bieneckweg");
        break;
    }
    case 56151:
    {
        returnValue = F("Bieneller Str.");
        break;
    }
    case 56152:
    {
        returnValue = F("Bienemannsweg");
        break;
    }
    case 56153:
    {
        returnValue = F("Bienen-Allee");
        break;
    }
    case 56154:
    {
        returnValue = F("Bienenauer Bach");
        break;
    }
    case 56155:
    {
        returnValue = F("Bienenbelegstelle");
        break;
    }
    case 56156:
    {
        returnValue = F("Bienenberg");
        break;
    }
    case 56157:
    {
        returnValue = F("Bienenbergweg");
        break;
    }
    case 56158:
    {
        returnValue = F("Bienenbuetteler Str.");
        break;
    }
    case 56159:
    {
        returnValue = F("Bienenfarm");
        break;
    }
    case 56160:
    {
        returnValue = F("Bienenfarmer Weg");
        break;
    }
    case 56161:
    {
        returnValue = F("Bienengarten");
        break;
    }
    case 56162:
    {
        returnValue = F("Bienengartenstr.");
        break;
    }
    case 56163:
    {
        returnValue = F("Bienengartenweg");
        break;
    }
    case 56164:
    {
        returnValue = F("Bienengasse");
        break;
    }
    case 56165:
    {
        returnValue = F("Bienengracht");
        break;
    }
    case 56166:
    {
        returnValue = F("Bienengräberstr.");
        break;
    }
    case 56167:
    {
        returnValue = F("Bienenhang");
        break;
    }
    case 56168:
    {
        returnValue = F("Bienenhaus");
        break;
    }
    case 56169:
    {
        returnValue = F("Bienenheimweg");
        break;
    }
    case 56170:
    {
        returnValue = F("Bienenhof");
        break;
    }
    case 56171:
    {
        returnValue = F("Bienenhofweg");
        break;
    }
    case 56172:
    {
        returnValue = F("Bienenholzweg");
        break;
    }
    case 56173:
    {
        returnValue = F("Bienenhütte, Feuerwiesel");
        break;
    }
    case 56174:
    {
        returnValue = F("Bienenkamp");
        break;
    }
    case 56175:
    {
        returnValue = F("Bienenkorb");
        break;
    }
    case 56176:
    {
        returnValue = F("Bienenlay");
        break;
    }
    case 56177:
    {
        returnValue = F("Bienenlehrgarten");
        break;
    }
    case 56178:
    {
        returnValue = F("Bienenlehrpfad");
        break;
    }
    case 56179:
    {
        returnValue = F("Bienenmarkt-Passage");
        break;
    }
    case 56180:
    {
        returnValue = F("Bienenmättle");
        break;
    }
    case 56181:
    {
        returnValue = F("Bienenmühler Str.");
        break;
    }
    case 56182:
    {
        returnValue = F("Bienenpark");
        break;
    }
    case 56183:
    {
        returnValue = F("Bienenpark Hollriede");
        break;
    }
    case 56184:
    {
        returnValue = F("Bienenschauer");
        break;
    }
    case 56185:
    {
        returnValue = F("Bienensteig");
        break;
    }
    case 56186:
    {
        returnValue = F("Bienenstieg");
        break;
    }
    case 56187:
    {
        returnValue = F("Bienenstock");
        break;
    }
    case 56188:
    {
        returnValue = F("Bienenstockweg");
        break;
    }
    case 56189:
    {
        returnValue = F("Bienenstr.");
        break;
    }
    case 56190:
    {
        returnValue = F("Bienenstück");
        break;
    }
    case 56191:
    {
        returnValue = F("Bienental");
        break;
    }
    case 56192:
    {
        returnValue = F("Bienenwaldweg");
        break;
    }
    case 56193:
    {
        returnValue = F("Bienenwanderweg");
        break;
    }
    case 56194:
    {
        returnValue = F("Bienenweg");
        break;
    }
    case 56195:
    {
        returnValue = F("Bienenweide");
        break;
    }
    case 56196:
    {
        returnValue = F("Bienenwerder");
        break;
    }
    case 56197:
    {
        returnValue = F("Bienenwiese");
        break;
    }
    case 56198:
    {
        returnValue = F("Bienenwiese Herderstr.");
        break;
    }
    case 56199:
    {
        returnValue = F("Bienenwinkel");
        break;
    }
    case 56200:
    {
        returnValue = F("Biener Str.");
        break;
    }
    case 56201:
    {
        returnValue = F("Bienerstr.");
        break;
    }
    case 56202:
    {
        returnValue = F("Biengarten");
        break;
    }
    case 56203:
    {
        returnValue = F("Biengartenstr.");
        break;
    }
    case 56204:
    {
        returnValue = F("Biengartenweg");
        break;
    }
    case 56205:
    {
        returnValue = F("Biengasse");
        break;
    }
    case 56206:
    {
        returnValue = F("Biengener Allee");
        break;
    }
    case 56207:
    {
        returnValue = F("Biengener Str.");
        break;
    }
    case 56208:
    {
        returnValue = F("Bienger Str.");
        break;
    }
    case 56209:
    {
        returnValue = F("Biengerwaldweg");
        break;
    }
    case 56210:
    {
        returnValue = F("Biengraben");
        break;
    }
    case 56211:
    {
        returnValue = F("Bienhof");
        break;
    }
    case 56212:
    {
        returnValue = F("Bienhofer-Weg");
        break;
    }
    case 56213:
    {
        returnValue = F("Bienholdstr.");
        break;
    }
    case 56214:
    {
        returnValue = F("Bienhornhöhe");
        break;
    }
    case 56215:
    {
        returnValue = F("Bienhornpfad");
        break;
    }
    case 56216:
    {
        returnValue = F("Bienhornstr.");
        break;
    }
    case 56217:
    {
        returnValue = F("Bienhäldestr.");
        break;
    }
    case 56218:
    {
        returnValue = F("Bienitzstr.");
        break;
    }
    case 56219:
    {
        returnValue = F("Bienleite");
        break;
    }
    case 56220:
    {
        returnValue = F("Bienlestr.");
        break;
    }
    case 56221:
    {
        returnValue = F("Bienloch");
        break;
    }
    case 56222:
    {
        returnValue = F("Bienndobelweg");
        break;
    }
    case 56223:
    {
        returnValue = F("Biennerstr.");
        break;
    }
    case 56224:
    {
        returnValue = F("Bienrückstr.");
        break;
    }
    case 56225:
    {
        returnValue = F("Biens Mühle");
        break;
    }
    case 56226:
    {
        returnValue = F("Biensackweg");
        break;
    }
    case 56227:
    {
        returnValue = F("Biensdorf");
        break;
    }
    case 56228:
    {
        returnValue = F("Biensdorfer Str.");
        break;
    }
    case 56229:
    {
        returnValue = F("Bienstand");
        break;
    }
    case 56230:
    {
        returnValue = F("Bientheilweg");
        break;
    }
    case 56231:
    {
        returnValue = F("Bienwaldstr.");
        break;
    }
    case 56232:
    {
        returnValue = F("Bienweg");
        break;
    }
    case 56233:
    {
        returnValue = F("Bienwiesen");
        break;
    }
    case 56234:
    {
        returnValue = F("Bienzen");
        break;
    }
    case 56235:
    {
        returnValue = F("Bienäcker");
        break;
    }
    case 56236:
    {
        returnValue = F("Bier Park");
        break;
    }
    case 56237:
    {
        returnValue = F("Bier-Weg");
        break;
    }
    case 56238:
    {
        returnValue = F("Bierawaweg");
        break;
    }
    case 56239:
    {
        returnValue = F("Bierbach");
        break;
    }
    case 56240:
    {
        returnValue = F("Bierbacher Str.");
        break;
    }
    case 56241:
    {
        returnValue = F("Bierbacher Weg");
        break;
    }
    case 56242:
    {
        returnValue = F("Bierbachstr.");
        break;
    }
    case 56243:
    {
        returnValue = F("Bierbaumsmühle");
        break;
    }
    case 56244:
    {
        returnValue = F("Bierbaumstr.");
        break;
    }
    case 56245:
    {
        returnValue = F("Bierbaumsweg");
        break;
    }
    case 56246:
    {
        returnValue = F("Bierberger Str.");
        break;
    }
    case 56247:
    {
        returnValue = F("Bierberger Tor");
        break;
    }
    case 56248:
    {
        returnValue = F("Bierbergsweg");
        break;
    }
    case 56249:
    {
        returnValue = F("Bierbergweg");
        break;
    }
    case 56250:
    {
        returnValue = F("Bierbomskamp");
        break;
    }
    case 56251:
    {
        returnValue = F("Bierbrauerstr.");
        break;
    }
    case 56252:
    {
        returnValue = F("Bierbrauerweg");
        break;
    }
    case 56253:
    {
        returnValue = F("Bierbrücke");
        break;
    }
    case 56254:
    {
        returnValue = F("Bierbrünnleweg");
        break;
    }
    case 56255:
    {
        returnValue = F("Bierde");
        break;
    }
    case 56256:
    {
        returnValue = F("Bierdener Dorfstr.");
        break;
    }
    case 56257:
    {
        returnValue = F("Bierdener Fuhren");
        break;
    }
    case 56258:
    {
        returnValue = F("Bierdener Kämpe");
        break;
    }
    case 56259:
    {
        returnValue = F("Bierdener Marsch");
        break;
    }
    case 56260:
    {
        returnValue = F("Bierdener Mühle");
        break;
    }
    case 56261:
    {
        returnValue = F("Bierdener Str.");
        break;
    }
    case 56262:
    {
        returnValue = F("Bierder Str.");
        break;
    }
    case 56263:
    {
        returnValue = F("Bierderloh");
        break;
    }
    case 56264:
    {
        returnValue = F("Bierdorf");
        break;
    }
    case 56265:
    {
        returnValue = F("Bierdorf-Holzacker");
        break;
    }
    case 56266:
    {
        returnValue = F("Biereckstr.");
        break;
    }
    case 56267:
    {
        returnValue = F("Bierendorfer Str.");
        break;
    }
    case 56268:
    {
        returnValue = F("Bierendorfweg");
        break;
    }
    case 56269:
    {
        returnValue = F("Bierenweg");
        break;
    }
    case 56270:
    {
        returnValue = F("Bierer Str.");
        break;
    }
    case 56271:
    {
        returnValue = F("Biererstr.");
        break;
    }
    case 56272:
    {
        returnValue = F("Bieresch");
        break;
    }
    case 56273:
    {
        returnValue = F("Bieretäckerstr.");
        break;
    }
    case 56274:
    {
        returnValue = F("Bierfelder Str.");
        break;
    }
    case 56275:
    {
        returnValue = F("Bierfeldstr.");
        break;
    }
    case 56276:
    {
        returnValue = F("Biergarten");
        break;
    }
    case 56277:
    {
        returnValue = F("Biergarten Dehne");
        break;
    }
    case 56278:
    {
        returnValue = F("Biergarten Drei Rosen");
        break;
    }
    case 56279:
    {
        returnValue = F("Biergarten Eisenacher Haus");
        break;
    }
    case 56280:
    {
        returnValue = F("Biergarten Heinrich´s");
        break;
    }
    case 56281:
    {
        returnValue = F("Biergarten Plank");
        break;
    }
    case 56282:
    {
        returnValue = F("Biergartenplatz");
        break;
    }
    case 56283:
    {
        returnValue = F("Biergartenstr.");
        break;
    }
    case 56284:
    {
        returnValue = F("Biergartenwanderweg");
        break;
    }
    case 56285:
    {
        returnValue = F("Biergasse");
        break;
    }
    case 56286:
    {
        returnValue = F("Biergbrede");
        break;
    }
    case 56287:
    {
        returnValue = F("Biergeldenstr.");
        break;
    }
    case 56288:
    {
        returnValue = F("Biergredweg");
        break;
    }
    case 56289:
    {
        returnValue = F("Biergässle");
        break;
    }
    case 56290:
    {
        returnValue = F("Biergäßchen");
        break;
    }
    case 56291:
    {
        returnValue = F("Bierhausweg");
        break;
    }
    case 56292:
    {
        returnValue = F("Bierhelder Steige");
        break;
    }
    case 56293:
    {
        returnValue = F("Bierhelderhofweg");
        break;
    }
    case 56294:
    {
        returnValue = F("Bierhelderweg");
        break;
    }
    case 56295:
    {
        returnValue = F("Bierhäuslweg");
        break;
    }
    case 56296:
    {
        returnValue = F("Bierhügel");
        break;
    }
    case 56297:
    {
        returnValue = F("Bierhütte");
        break;
    }
    case 56298:
    {
        returnValue = F("Bieringer Steige");
        break;
    }
    case 56299:
    {
        returnValue = F("Bieringer Str.");
        break;
    }
    case 56300:
    {
        returnValue = F("Bieringerweg");
        break;
    }
    case 56301:
    {
        returnValue = F("Bieringsen");
        break;
    }
    case 56302:
    {
        returnValue = F("Bierkeller");
        break;
    }
    case 56303:
    {
        returnValue = F("Bierkellergasse");
        break;
    }
    case 56304:
    {
        returnValue = F("Bierkellerstr.");
        break;
    }
    case 56305:
    {
        returnValue = F("Bierkellerweg");
        break;
    }
    case 56306:
    {
        returnValue = F("Bierkrugweg");
        break;
    }
    case 56307:
    {
        returnValue = F("Bierlachweg");
        break;
    }
    case 56308:
    {
        returnValue = F("Bierleinswiesen");
        break;
    }
    case 56309:
    {
        returnValue = F("Bierlergasse");
        break;
    }
    case 56310:
    {
        returnValue = F("Bierlhoferstr.");
        break;
    }
    case 56311:
    {
        returnValue = F("Bierlingsweg");
        break;
    }
    case 56312:
    {
        returnValue = F("Bierlingweg");
        break;
    }
    case 56313:
    {
        returnValue = F("Bierlohstr.");
        break;
    }
    case 56314:
    {
        returnValue = F("Bierlstr.");
        break;
    }
    case 56315:
    {
        returnValue = F("Bierlweg");
        break;
    }
    case 56316:
    {
        returnValue = F("Biermannplatz");
        break;
    }
    case 56317:
    {
        returnValue = F("Biermannskamp");
        break;
    }
    case 56318:
    {
        returnValue = F("Biermannstannen");
        break;
    }
    case 56319:
    {
        returnValue = F("Biermannstr.");
        break;
    }
    case 56320:
    {
        returnValue = F("Biermannweg");
        break;
    }
    case 56321:
    {
        returnValue = F("Biermühleschleife (KM)");
        break;
    }
    case 56322:
    {
        returnValue = F("Biernatzkistr.");
        break;
    }
    case 56323:
    {
        returnValue = F("Biernerstr.");
        break;
    }
    case 56324:
    {
        returnValue = F("Biernwiesweg");
        break;
    }
    case 56325:
    {
        returnValue = F("Bierothstr.");
        break;
    }
    case 56326:
    {
        returnValue = F("Bierpohlweg");
        break;
    }
    case 56327:
    {
        returnValue = F("Bierrain");
        break;
    }
    case 56328:
    {
        returnValue = F("Bierreißl");
        break;
    }
    case 56329:
    {
        returnValue = F("Biersackgasse");
        break;
    }
    case 56330:
    {
        returnValue = F("Biersackstr.");
        break;
    }
    case 56331:
    {
        returnValue = F("Bierschlagsweg");
        break;
    }
    case 56332:
    {
        returnValue = F("Biersdorfer Str.");
        break;
    }
    case 56333:
    {
        returnValue = F("Biershöhe");
        break;
    }
    case 56334:
    {
        returnValue = F("Biersiedersteig");
        break;
    }
    case 56335:
    {
        returnValue = F("Biersiederstück");
        break;
    }
    case 56336:
    {
        returnValue = F("Biersteig");
        break;
    }
    case 56337:
    {
        returnValue = F("Bierstetter Str.");
        break;
    }
    case 56338:
    {
        returnValue = F("Bierstr.");
        break;
    }
    case 56339:
    {
        returnValue = F("Bierstrauch");
        break;
    }
    case 56340:
    {
        returnValue = F("Biersträßle");
        break;
    }
    case 56341:
    {
        returnValue = F("Biertal");
        break;
    }
    case 56342:
    {
        returnValue = F("Biertal I");
        break;
    }
    case 56343:
    {
        returnValue = F("Biertal II");
        break;
    }
    case 56344:
    {
        returnValue = F("Bierwaldweg");
        break;
    }
    case 56345:
    {
        returnValue = F("Bierweg");
        break;
    }
    case 56346:
    {
        returnValue = F("Bierwegle");
        break;
    }
    case 56347:
    {
        returnValue = F("Bierwiese");
        break;
    }
    case 56348:
    {
        returnValue = F("Bierwiesstr.");
        break;
    }
    case 56349:
    {
        returnValue = F("Bierwinkel");
        break;
    }
    case 56350:
    {
        returnValue = F("Bierwirth's Wiese");
        break;
    }
    case 56351:
    {
        returnValue = F("Bieräcker");
        break;
    }
    case 56352:
    {
        returnValue = F("Bierägertenweg");
        break;
    }
    case 56353:
    {
        returnValue = F("Bierägerweg");
        break;
    }
    case 56354:
    {
        returnValue = F("Biesdorfer Dorfstr.");
        break;
    }
    case 56355:
    {
        returnValue = F("Biesdorfer Siedlung");
        break;
    }
    case 56356:
    {
        returnValue = F("Biesdorfer Str.");
        break;
    }
    case 56357:
    {
        returnValue = F("Biesdorfer Weg");
        break;
    }
    case 56358:
    {
        returnValue = F("Bieselheide");
        break;
    }
    case 56359:
    {
        returnValue = F("Bieselheider Weg");
        break;
    }
    case 56360:
    {
        returnValue = F("Bieselsberger Weg");
        break;
    }
    case 56361:
    {
        returnValue = F("Bieselweg");
        break;
    }
    case 56362:
    {
        returnValue = F("Biesemeierweg");
        break;
    }
    case 56363:
    {
        returnValue = F("Biesen");
        break;
    }
    case 56364:
    {
        returnValue = F("Biesenbach");
        break;
    }
    case 56365:
    {
        returnValue = F("Biesenbacher Weg");
        break;
    }
    case 56366:
    {
        returnValue = F("Biesenbachstr.");
        break;
    }
    case 56367:
    {
        returnValue = F("Biesenbrower Str.");
        break;
    }
    case 56368:
    {
        returnValue = F("Biesenbrower Weg");
        break;
    }
    case 56369:
    {
        returnValue = F("Biesenbruch");
        break;
    }
    case 56370:
    {
        returnValue = F("Biesenburgstr.");
        break;
    }
    case 56371:
    {
        returnValue = F("Biesendorfer Weg");
        break;
    }
    case 56372:
    {
        returnValue = F("Biesener Dorfplatz");
        break;
    }
    case 56373:
    {
        returnValue = F("Biesener Ring");
        break;
    }
    case 56374:
    {
        returnValue = F("Biesener Str.");
        break;
    }
    case 56375:
    {
        returnValue = F("Biesener Weg");
        break;
    }
    case 56376:
    {
        returnValue = F("Biesengrundbreite");
        break;
    }
    case 56377:
    {
        returnValue = F("Biesenharder Str.");
        break;
    }
    case 56378:
    {
        returnValue = F("Biesenkamp");
        break;
    }
    case 56379:
    {
        returnValue = F("Biesenkampstr.");
        break;
    }
    case 56380:
    {
        returnValue = F("Biesenländer Weg");
        break;
    }
    case 56381:
    {
        returnValue = F("Biesenröder Str.");
        break;
    }
    case 56382:
    {
        returnValue = F("Biesenstr.");
        break;
    }
    case 56383:
    {
        returnValue = F("Biesental");
        break;
    }
    case 56384:
    {
        returnValue = F("Biesentalstr.");
        break;
    }
    case 56385:
    {
        returnValue = F("Biesenthaler Chaussee");
        break;
    }
    case 56386:
    {
        returnValue = F("Biesenthaler Damm");
        break;
    }
    case 56387:
    {
        returnValue = F("Biesenthaler Str.");
        break;
    }
    case 56388:
    {
        returnValue = F("Biesenthaler Weg");
        break;
    }
    case 56389:
    {
        returnValue = F("Biesenweg");
        break;
    }
    case 56390:
    {
        returnValue = F("Biesenweiher");
        break;
    }
    case 56391:
    {
        returnValue = F("Bieserner Str.");
        break;
    }
    case 56392:
    {
        returnValue = F("Biesewinkel");
        break;
    }
    case 56393:
    {
        returnValue = F("Biesfelder Str.");
        break;
    }
    case 56394:
    {
        returnValue = F("Bieshausener Str.");
        break;
    }
    case 56395:
    {
        returnValue = F("Biesheimer Str.");
        break;
    }
    case 56396:
    {
        returnValue = F("Biesinger Str.");
        break;
    }
    case 56397:
    {
        returnValue = F("Biesingerstr.");
        break;
    }
    case 56398:
    {
        returnValue = F("Biesingstr.");
        break;
    }
    case 56399:
    {
        returnValue = F("Biesles-Ring");
        break;
    }
    case 56400:
    {
        returnValue = F("Bieslings");
        break;
    }
    case 56401:
    {
        returnValue = F("Biesnitzer Fußweg");
        break;
    }
    case 56402:
    {
        returnValue = F("Biesnitzer Str.");
        break;
    }
    case 56403:
    {
        returnValue = F("Biesow");
        break;
    }
    case 56404:
    {
        returnValue = F("Biesower Weg");
        break;
    }
    case 56405:
    {
        returnValue = F("Biesselberg");
        break;
    }
    case 56406:
    {
        returnValue = F("Biesstr.");
        break;
    }
    case 56407:
    {
        returnValue = F("Bieste");
        break;
    }
    case 56408:
    {
        returnValue = F("Bieste-Stickteich");
        break;
    }
    case 56409:
    {
        returnValue = F("Bieste-Wischerhausen");
        break;
    }
    case 56410:
    {
        returnValue = F("Biester Heide");
        break;
    }
    case 56411:
    {
        returnValue = F("Biesterbergweg");
        break;
    }
    case 56412:
    {
        returnValue = F("Biesterfeld");
        break;
    }
    case 56413:
    {
        returnValue = F("Biesterfelder Weg");
        break;
    }
    case 56414:
    {
        returnValue = F("Biesterfeldweg");
        break;
    }
    case 56415:
    {
        returnValue = F("Biesterholz");
        break;
    }
    case 56416:
    {
        returnValue = F("Biesterstr.");
        break;
    }
    case 56417:
    {
        returnValue = F("Biestorfer Weg");
        break;
    }
    case 56418:
    {
        returnValue = F("Biestow-Ausbau");
        break;
    }
    case 56419:
    {
        returnValue = F("Biestower Weg");
        break;
    }
    case 56420:
    {
        returnValue = F("Bieswanger Steig");
        break;
    }
    case 56421:
    {
        returnValue = F("Bieswanger Weg");
        break;
    }
    case 56422:
    {
        returnValue = F("Biesweg");
        break;
    }
    case 56423:
    {
        returnValue = F("Bietauer Str.");
        break;
    }
    case 56424:
    {
        returnValue = F("Biete");
        break;
    }
    case 56425:
    {
        returnValue = F("Bietegast");
        break;
    }
    case 56426:
    {
        returnValue = F("Bietenhauser Str.");
        break;
    }
    case 56427:
    {
        returnValue = F("Bieth");
        break;
    }
    case 56428:
    {
        returnValue = F("Biether Str.");
        break;
    }
    case 56429:
    {
        returnValue = F("Bietheweg");
        break;
    }
    case 56430:
    {
        returnValue = F("Biethsstr.");
        break;
    }
    case 56431:
    {
        returnValue = F("Biethstr.");
        break;
    }
    case 56432:
    {
        returnValue = F("Bietigheimer Str.");
        break;
    }
    case 56433:
    {
        returnValue = F("Bietigheimer Weg");
        break;
    }
    case 56434:
    {
        returnValue = F("Bietigheimerstr.");
        break;
    }
    case 56435:
    {
        returnValue = F("Bietinger Str.");
        break;
    }
    case 56436:
    {
        returnValue = F("Bietinger Weg");
        break;
    }
    case 56437:
    {
        returnValue = F("Bietschieder Str.");
        break;
    }
    case 56438:
    {
        returnValue = F("Bietstr.");
        break;
    }
    case 56439:
    {
        returnValue = F("Bietweg");
        break;
    }
    case 56440:
    {
        returnValue = F("Bietwiesenstr.");
        break;
    }
    case 56441:
    {
        returnValue = F("Bietzefeld");
        break;
    }
    case 56442:
    {
        returnValue = F("Bietzefelder Str.");
        break;
    }
    case 56443:
    {
        returnValue = F("Bietzer Str.");
        break;
    }
    case 56444:
    {
        returnValue = F("Bietzerberger");
        break;
    }
    case 56445:
    {
        returnValue = F("Bietzestr.");
        break;
    }
    case 56446:
    {
        returnValue = F("Bietzeweg");
        break;
    }
    case 56447:
    {
        returnValue = F("Bietzweg");
        break;
    }
    case 56448:
    {
        returnValue = F("Bieweg");
        break;
    }
    case 56449:
    {
        returnValue = F("Bieweilerstr.");
        break;
    }
    case 56450:
    {
        returnValue = F("Biewerer Str.");
        break;
    }
    case 56451:
    {
        returnValue = F("Bifangstr.");
        break;
    }
    case 56452:
    {
        returnValue = F("Bifangweg");
        break;
    }
    case 56453:
    {
        returnValue = F("Biffachstr.");
        break;
    }
    case 56454:
    {
        returnValue = F("Biffigweg");
        break;
    }
    case 56455:
    {
        returnValue = F("Bifigstr.");
        break;
    }
    case 56456:
    {
        returnValue = F("Bifurkation");
        break;
    }
    case 56457:
    {
        returnValue = F("Bifänge");
        break;
    }
    case 56458:
    {
        returnValue = F("Big Bagger Blumenbeet");
        break;
    }
    case 56459:
    {
        returnValue = F("Bigartenbruch");
        break;
    }
    case 56460:
    {
        returnValue = F("Bigel");
        break;
    }
    case 56461:
    {
        returnValue = F("Bigenweg");
        break;
    }
    case 56462:
    {
        returnValue = F("Biggemannstr.");
        break;
    }
    case 56463:
    {
        returnValue = F("Biggenbusch");
        break;
    }
    case 56464:
    {
        returnValue = F("Biggenmoos");
        break;
    }
    case 56465:
    {
        returnValue = F("Bigger Str.");
        break;
    }
    case 56466:
    {
        returnValue = F("Biggertkopfweg");
        break;
    }
    case 56467:
    {
        returnValue = F("Biggertweg");
        break;
    }
    case 56468:
    {
        returnValue = F("Biggeseestr.");
        break;
    }
    case 56469:
    {
        returnValue = F("Biggestr.");
        break;
    }
    case 56470:
    {
        returnValue = F("Biggeweg");
        break;
    }
    case 56471:
    {
        returnValue = F("Biggleswadestr.");
        break;
    }
    case 56472:
    {
        returnValue = F("Bihlafinger Str.");
        break;
    }
    case 56473:
    {
        returnValue = F("Bihlweg");
        break;
    }
    case 56474:
    {
        returnValue = F("Biholz");
        break;
    }
    case 56475:
    {
        returnValue = F("Bihrenberg");
        break;
    }
    case 56476:
    {
        returnValue = F("Bihrenbergweg");
        break;
    }
    case 56477:
    {
        returnValue = F("Bikarstr.");
        break;
    }
    case 56478:
    {
        returnValue = F("Bike Park Radsportverein Sulzfeld");
        break;
    }
    case 56479:
    {
        returnValue = F("Bike-Parkour Driedorf");
        break;
    }
    case 56480:
    {
        returnValue = F("Bikemaster Trail");
        break;
    }
    case 56481:
    {
        returnValue = F("Bikepark Fourcross");
        break;
    }
    case 56482:
    {
        returnValue = F("Bikepark Markt Erlbach");
        break;
    }
    case 56483:
    {
        returnValue = F("Bikepark Twist");
        break;
    }
    case 56484:
    {
        returnValue = F("Bikepark Wernertanne");
        break;
    }
    case 56485:
    {
        returnValue = F("Bilager Weg");
        break;
    }
    case 56486:
    {
        returnValue = F("Bild-Höhe");
        break;
    }
    case 56487:
    {
        returnValue = F("Bildackerstr.");
        break;
    }
    case 56488:
    {
        returnValue = F("Bildackerweg");
        break;
    }
    case 56489:
    {
        returnValue = F("Bildbergstr.");
        break;
    }
    case 56490:
    {
        returnValue = F("Bildbuchenweg");
        break;
    }
    case 56491:
    {
        returnValue = F("Bildbuchweg");
        break;
    }
    case 56492:
    {
        returnValue = F("Bildchen");
        break;
    }
    case 56493:
    {
        returnValue = F("Bildchenstr.");
        break;
    }
    case 56494:
    {
        returnValue = F("Bildchenweg");
        break;
    }
    case 56495:
    {
        returnValue = F("Bildchesweg");
        break;
    }
    case 56496:
    {
        returnValue = F("Bilddeichweg");
        break;
    }
    case 56497:
    {
        returnValue = F("Bildechinger Steige");
        break;
    }
    case 56498:
    {
        returnValue = F("Bildechinger Weg");
        break;
    }
    case 56499:
    {
        returnValue = F("Bildeichenweg");
        break;
    }
    case 56500:
    {
        returnValue = F("Bildeichstr.");
        break;
    }
    case 56501:
    {
        returnValue = F("Bildeichweg");
        break;
    }
    case 56502:
    {
        returnValue = F("Bilderbahn");
        break;
    }
    case 56503:
    {
        returnValue = F("Bilderbeckstr.");
        break;
    }
    case 56504:
    {
        returnValue = F("Bilderbogenpassage");
        break;
    }
    case 56505:
    {
        returnValue = F("Bilderfeld");
        break;
    }
    case 56506:
    {
        returnValue = F("Bildergarten");
        break;
    }
    case 56507:
    {
        returnValue = F("Bilderhäuslenstr.");
        break;
    }
    case 56508:
    {
        returnValue = F("Bilderhäuslestr.");
        break;
    }
    case 56509:
    {
        returnValue = F("Bilderlaher Str.");
        break;
    }
    case 56510:
    {
        returnValue = F("Bildersteige");
        break;
    }
    case 56511:
    {
        returnValue = F("Bilderstöckchen");
        break;
    }
    case 56512:
    {
        returnValue = F("Bildesch");
        break;
    }
    case 56513:
    {
        returnValue = F("Bildgartenstr.");
        break;
    }
    case 56514:
    {
        returnValue = F("Bildgasse");
        break;
    }
    case 56515:
    {
        returnValue = F("Bildhauer Moog Str.");
        break;
    }
    case 56516:
    {
        returnValue = F("Bildhauer-Sturm-Str.");
        break;
    }
    case 56517:
    {
        returnValue = F("Bildhauerstr.");
        break;
    }
    case 56518:
    {
        returnValue = F("Bildhauerweg");
        break;
    }
    case 56519:
    {
        returnValue = F("Bildhauerwiese");
        break;
    }
    case 56520:
    {
        returnValue = F("Bildhauweg");
        break;
    }
    case 56521:
    {
        returnValue = F("Bildhäuschen");
        break;
    }
    case 56522:
    {
        returnValue = F("Bildhäuser Str.");
        break;
    }
    case 56523:
    {
        returnValue = F("Bildhäuser Weg");
        break;
    }
    case 56524:
    {
        returnValue = F("Bildpfad");
        break;
    }
    case 56525:
    {
        returnValue = F("Bildreichweg");
        break;
    }
    case 56526:
    {
        returnValue = F("Bildschlagweg");
        break;
    }
    case 56527:
    {
        returnValue = F("Bildsteins-Schneise");
        break;
    }
    case 56528:
    {
        returnValue = F("Bildsteinstr.");
        break;
    }
    case 56529:
    {
        returnValue = F("Bildsteinweg");
        break;
    }
    case 56530:
    {
        returnValue = F("Bildstock");
        break;
    }
    case 56531:
    {
        returnValue = F("Bildstock-Schneise");
        break;
    }
    case 56532:
    {
        returnValue = F("Bildstocker Platz");
        break;
    }
    case 56533:
    {
        returnValue = F("Bildstockhohl");
        break;
    }
    case 56534:
    {
        returnValue = F("Bildstocklesweg");
        break;
    }
    case 56535:
    {
        returnValue = F("Bildstockpfad");
        break;
    }
    case 56536:
    {
        returnValue = F("Bildstockstr.");
        break;
    }
    case 56537:
    {
        returnValue = F("Bildstockweg");
        break;
    }
    case 56538:
    {
        returnValue = F("Bildstr.");
        break;
    }
    case 56539:
    {
        returnValue = F("Bildstöckelschwellenweg");
        break;
    }
    case 56540:
    {
        returnValue = F("Bildstöckle");
        break;
    }
    case 56541:
    {
        returnValue = F("Bildstöckleweg");
        break;
    }
    case 56542:
    {
        returnValue = F("Bildsweg");
        break;
    }
    case 56543:
    {
        returnValue = F("Bildsäule");
        break;
    }
    case 56544:
    {
        returnValue = F("Bildtannenweg");
        break;
    }
    case 56545:
    {
        returnValue = F("Bildtannweg");
        break;
    }
    case 56546:
    {
        returnValue = F("Bildungs- und Freizeitstätte Heilsbach");
        break;
    }
    case 56547:
    {
        returnValue = F("Bildungscampus");
        break;
    }
    case 56548:
    {
        returnValue = F("Bildungsweg");
        break;
    }
    case 56549:
    {
        returnValue = F("Bildweg");
        break;
    }
    case 56550:
    {
        returnValue = F("Bildwiese");
        break;
    }
    case 56551:
    {
        returnValue = F("Bildwiesenweg");
        break;
    }
    case 56552:
    {
        returnValue = F("Bildäcker");
        break;
    }
    case 56553:
    {
        returnValue = F("Bildäcker Ring");
        break;
    }
    case 56554:
    {
        returnValue = F("Bildäckerstr.");
        break;
    }
    case 56555:
    {
        returnValue = F("Bildäckerweg");
        break;
    }
    case 56556:
    {
        returnValue = F("Bilenster Weg");
        break;
    }
    case 56557:
    {
        returnValue = F("Bilfinger Str.");
        break;
    }
    case 56558:
    {
        returnValue = F("Bilfinger Weg");
        break;
    }
    case 56559:
    {
        returnValue = F("Bilgenroth");
        break;
    }
    case 56560:
    {
        returnValue = F("Bilgeristr.");
        break;
    }
    case 56561:
    {
        returnValue = F("Bilgäckerstr.");
        break;
    }
    case 56562:
    {
        returnValue = F("Bilharzstr.");
        break;
    }
    case 56563:
    {
        returnValue = F("Bilhildisstr.");
        break;
    }
    case 56564:
    {
        returnValue = F("Bilholtstr.");
        break;
    }
    case 56565:
    {
        returnValue = F("Biligrimstr.");
        break;
    }
    case 56566:
    {
        returnValue = F("Bilinweg");
        break;
    }
    case 56567:
    {
        returnValue = F("Bilk");
        break;
    }
    case 56568:
    {
        returnValue = F("Bilkenrothweg");
        break;
    }
    case 56569:
    {
        returnValue = F("Bilkentalweg");
        break;
    }
    case 56570:
    {
        returnValue = F("Bilker Str.");
        break;
    }
    case 56571:
    {
        returnValue = F("Bilkstr.");
        break;
    }
    case 56572:
    {
        returnValue = F("Billachstr.");
        break;
    }
    case 56573:
    {
        returnValue = F("Billacker");
        break;
    }
    case 56574:
    {
        returnValue = F("Billafinger Str.");
        break;
    }
    case 56575:
    {
        returnValue = F("Billardbrücke");
        break;
    }
    case 56576:
    {
        returnValue = F("Billberge");
        break;
    }
    case 56577:
    {
        returnValue = F("Billberger Str.");
        break;
    }
    case 56578:
    {
        returnValue = F("Billeber Hauptstr.");
        break;
    }
    case 56579:
    {
        returnValue = F("Billeber Str.");
        break;
    }
    case 56580:
    {
        returnValue = F("Billenbachstr.");
        break;
    }
    case 56581:
    {
        returnValue = F("Billenhagen");
        break;
    }
    case 56582:
    {
        returnValue = F("Billenhauser Weg");
        break;
    }
    case 56583:
    {
        returnValue = F("Billenhof");
        break;
    }
    case 56584:
    {
        returnValue = F("Billensbacher Weg");
        break;
    }
    case 56585:
    {
        returnValue = F("Billensbacheräcker Str.");
        break;
    }
    case 56586:
    {
        returnValue = F("Billensteiner Str.");
        break;
    }
    case 56587:
    {
        returnValue = F("Billentalstr.");
        break;
    }
    case 56588:
    {
        returnValue = F("Billerbachstr.");
        break;
    }
    case 56589:
    {
        returnValue = F("Billerbeck");
        break;
    }
    case 56590:
    {
        returnValue = F("Billerbecker Landwehr");
        break;
    }
    case 56591:
    {
        returnValue = F("Billerbecker Str.");
        break;
    }
    case 56592:
    {
        returnValue = F("Billerberg");
        break;
    }
    case 56593:
    {
        returnValue = F("Billerer Str.");
        break;
    }
    case 56594:
    {
        returnValue = F("Billergasse");
        break;
    }
    case 56595:
    {
        returnValue = F("Billerkeweg");
        break;
    }
    case 56596:
    {
        returnValue = F("Billersberg");
        break;
    }
    case 56597:
    {
        returnValue = F("Billerstr.");
        break;
    }
    case 56598:
    {
        returnValue = F("Billertshäuser Str.");
        break;
    }
    case 56599:
    {
        returnValue = F("Billetal");
        break;
    }
    case 56600:
    {
        returnValue = F("Billewanderweg");
        break;
    }
    case 56601:
    {
        returnValue = F("Billeweg");
        break;
    }
    case 56602:
    {
        returnValue = F("Billfeldweg");
        break;
    }
    case 56603:
    {
        returnValue = F("Billgasse");
        break;
    }
    case 56604:
    {
        returnValue = F("Billgrund");
        break;
    }
    case 56605:
    {
        returnValue = F("Billhardtschneise");
        break;
    }
    case 56606:
    {
        returnValue = F("Billibuckweg");
        break;
    }
    case 56607:
    {
        returnValue = F("Billie-Holiday-Str.");
        break;
    }
    case 56608:
    {
        returnValue = F("Billiger Str.");
        break;
    }
    case 56609:
    {
        returnValue = F("Billiger Wald");
        break;
    }
    case 56610:
    {
        returnValue = F("Billigheimer Pfad");
        break;
    }
    case 56611:
    {
        returnValue = F("Billigheimer Str.");
        break;
    }
    case 56612:
    {
        returnValue = F("Billigheimer Weg");
        break;
    }
    case 56613:
    {
        returnValue = F("Billing");
        break;
    }
    case 56614:
    {
        returnValue = F("Billinganlage");
        break;
    }
    case 56615:
    {
        returnValue = F("Billinger Allee");
        break;
    }
    case 56616:
    {
        returnValue = F("Billingerstr.");
        break;
    }
    case 56617:
    {
        returnValue = F("Billinghauser Str.");
        break;
    }
    case 56618:
    {
        returnValue = F("Billinghäuser Weg");
        break;
    }
    case 56619:
    {
        returnValue = F("Billingshäuser Kaufmannsweg");
        break;
    }
    case 56620:
    {
        returnValue = F("Billingshäuser Schlucht");
        break;
    }
    case 56621:
    {
        returnValue = F("Billingshäuser Str.");
        break;
    }
    case 56622:
    {
        returnValue = F("Billingshäuser Weg");
        break;
    }
    case 56623:
    {
        returnValue = F("Billingstr.");
        break;
    }
    case 56624:
    {
        returnValue = F("Billingstätter Str.");
        break;
    }
    case 56625:
    {
        returnValue = F("Billionenweg");
        break;
    }
    case 56626:
    {
        returnValue = F("Billkoppel");
        break;
    }
    case 56627:
    {
        returnValue = F("Billmayerberg");
        break;
    }
    case 56628:
    {
        returnValue = F("Billmericher Dorfstr.");
        break;
    }
    case 56629:
    {
        returnValue = F("Billmericher Weg");
        break;
    }
    case 56630:
    {
        returnValue = F("Billmerweg");
        break;
    }
    case 56631:
    {
        returnValue = F("Billmuthäuser Str.");
        break;
    }
    case 56632:
    {
        returnValue = F("Billredder");
        break;
    }
    case 56633:
    {
        returnValue = F("Billrothstr.");
        break;
    }
    case 56634:
    {
        returnValue = F("Billrothweg");
        break;
    }
    case 56635:
    {
        returnValue = F("Billsbergstr.");
        break;
    }
    case 56636:
    {
        returnValue = F("Billsbergweg");
        break;
    }
    case 56637:
    {
        returnValue = F("Billstedter Stieg");
        break;
    }
    case 56638:
    {
        returnValue = F("Billsteinstr.");
        break;
    }
    case 56639:
    {
        returnValue = F("Billsteinweg");
        break;
    }
    case 56640:
    {
        returnValue = F("Billstr.");
        break;
    }
    case 56641:
    {
        returnValue = F("Billtal");
        break;
    }
    case 56642:
    {
        returnValue = F("Billtalstr.");
        break;
    }
    case 56643:
    {
        returnValue = F("Billteich");
        break;
    }
    case 56644:
    {
        returnValue = F("Billundstr.");
        break;
    }
    case 56645:
    {
        returnValue = F("Billungerstr.");
        break;
    }
    case 56646:
    {
        returnValue = F("Billungerweg");
        break;
    }
    case 56647:
    {
        returnValue = F("Billunghof");
        break;
    }
    case 56648:
    {
        returnValue = F("Billungstr.");
        break;
    }
    case 56649:
    {
        returnValue = F("Billungweg");
        break;
    }
    case 56650:
    {
        returnValue = F("Billweg");
        break;
    }
    case 56651:
    {
        returnValue = F("Billy-Bermanseder-Weg");
        break;
    }
    case 56652:
    {
        returnValue = F("Billy-Montigny-Platz");
        break;
    }
    case 56653:
    {
        returnValue = F("Billy-Wilder-Platz");
        break;
    }
    case 56654:
    {
        returnValue = F("Bilmer Garten");
        break;
    }
    case 56655:
    {
        returnValue = F("Bilmer Str.");
        break;
    }
    case 56656:
    {
        returnValue = F("Bilmer Strauch");
        break;
    }
    case 56657:
    {
        returnValue = F("Biloher Str.");
        break;
    }
    case 56658:
    {
        returnValue = F("Bilohof");
        break;
    }
    case 56659:
    {
        returnValue = F("Bilsbekbogen");
        break;
    }
    case 56660:
    {
        returnValue = F("Bilschauweg");
        break;
    }
    case 56661:
    {
        returnValue = F("Bilsdorfer Str.");
        break;
    }
    case 56662:
    {
        returnValue = F("Bilsener Weg");
        break;
    }
    case 56663:
    {
        returnValue = F("Bilsenrain");
        break;
    }
    case 56664:
    {
        returnValue = F("Bilsenstein");
        break;
    }
    case 56665:
    {
        returnValue = F("Bilser Str.");
        break;
    }
    case 56666:
    {
        returnValue = F("Bilshäuser Str.");
        break;
    }
    case 56667:
    {
        returnValue = F("Bilstein");
        break;
    }
    case 56668:
    {
        returnValue = F("Bilstein-Brücke");
        break;
    }
    case 56669:
    {
        returnValue = F("Bilstein-Str.");
        break;
    }
    case 56670:
    {
        returnValue = F("Bilsteiner Born");
        break;
    }
    case 56671:
    {
        returnValue = F("Bilsteiner Markt");
        break;
    }
    case 56672:
    {
        returnValue = F("Bilsteiner Str.");
        break;
    }
    case 56673:
    {
        returnValue = F("Bilsteiner Weg");
        break;
    }
    case 56674:
    {
        returnValue = F("Bilsteingasse");
        break;
    }
    case 56675:
    {
        returnValue = F("Bilsteinstr.");
        break;
    }
    case 56676:
    {
        returnValue = F("Bilsteinweg");
        break;
    }
    case 56677:
    {
        returnValue = F("Bilstermühler Str.");
        break;
    }
    case 56678:
    {
        returnValue = F("Biltzweg");
        break;
    }
    case 56679:
    {
        returnValue = F("Bilz");
        break;
    }
    case 56680:
    {
        returnValue = F("Bilz-Wanderweg");
        break;
    }
    case 56681:
    {
        returnValue = F("Bilz-Weg");
        break;
    }
    case 56682:
    {
        returnValue = F("Bilzen");
        break;
    }
    case 56683:
    {
        returnValue = F("Bilzenweg");
        break;
    }
    case 56684:
    {
        returnValue = F("Bilzestr.");
        break;
    }
    case 56685:
    {
        returnValue = F("Bilzingslebener Weg");
        break;
    }
    case 56686:
    {
        returnValue = F("Bilzmähderweg");
        break;
    }
    case 56687:
    {
        returnValue = F("Bilzstr.");
        break;
    }
    case 56688:
    {
        returnValue = F("Bilzsträßle");
        break;
    }
    case 56689:
    {
        returnValue = F("Bilzweg");
        break;
    }
    case 56690:
    {
        returnValue = F("Bim Hille");
        break;
    }
    case 56691:
    {
        returnValue = F("Bimbach");
        break;
    }
    case 56692:
    {
        returnValue = F("Bimbacher Str.");
        break;
    }
    case 56693:
    {
        returnValue = F("Bimbachstr.");
        break;
    }
    case 56694:
    {
        returnValue = F("Bimbaumbreite");
        break;
    }
    case 56695:
    {
        returnValue = F("Bimmelbahnweg");
        break;
    }
    case 56696:
    {
        returnValue = F("Bimolter Str.");
        break;
    }
    case 56697:
    {
        returnValue = F("Bimolter Weg");
        break;
    }
    case 56698:
    {
        returnValue = F("Bimsteinweg");
        break;
    }
    case 56699:
    {
        returnValue = F("Bimsweg");
        break;
    }
    case 56700:
    {
        returnValue = F("Bimswiesen");
        break;
    }
    case 56701:
    {
        returnValue = F("Bimöhlener Str.");
        break;
    }
    case 56702:
    {
        returnValue = F("Bimöhler Str.");
        break;
    }
    case 56703:
    {
        returnValue = F("Bin Pahl");
        break;
    }
    case 56704:
    {
        returnValue = F("Binamühle");
        break;
    }
    case 56705:
    {
        returnValue = F("Binastr.");
        break;
    }
    case 56706:
    {
        returnValue = F("Binauer Höhe");
        break;
    }
    case 56707:
    {
        returnValue = F("Binauer Str.");
        break;
    }
    case 56708:
    {
        returnValue = F("Binauer Weg");
        break;
    }
    case 56709:
    {
        returnValue = F("Bindefeldstr.");
        break;
    }
    case 56710:
    {
        returnValue = F("Bindegasse");
        break;
    }
    case 56711:
    {
        returnValue = F("Bindelhecke");
        break;
    }
    case 56712:
    {
        returnValue = F("Bindelkampweg");
        break;
    }
    case 56713:
    {
        returnValue = F("Bindemannstr.");
        break;
    }
    case 56714:
    {
        returnValue = F("Bindemeer");
        break;
    }
    case 56715:
    {
        returnValue = F("Bindengasse");
        break;
    }
    case 56716:
    {
        returnValue = F("Bindenwiesen");
        break;
    }
    case 56717:
    {
        returnValue = F("Binder");
        break;
    }
    case 56718:
    {
        returnValue = F("Binderanger");
        break;
    }
    case 56719:
    {
        returnValue = F("Binderberg");
        break;
    }
    case 56720:
    {
        returnValue = F("Bindergasse");
        break;
    }
    case 56721:
    {
        returnValue = F("Bindergraben");
        break;
    }
    case 56722:
    {
        returnValue = F("Bindermannzwirn");
        break;
    }
    case 56723:
    {
        returnValue = F("Binderplatz");
        break;
    }
    case 56724:
    {
        returnValue = F("Bindersberg");
        break;
    }
    case 56725:
    {
        returnValue = F("Bindersche Str.");
        break;
    }
    case 56726:
    {
        returnValue = F("Binderstr.");
        break;
    }
    case 56727:
    {
        returnValue = F("Binderweg");
        break;
    }
    case 56728:
    {
        returnValue = F("Binderwies");
        break;
    }
    case 56729:
    {
        returnValue = F("Binderöd");
        break;
    }
    case 56730:
    {
        returnValue = F("Bindesstr.");
        break;
    }
    case 56731:
    {
        returnValue = F("Bindestauden");
        break;
    }
    case 56732:
    {
        returnValue = F("Bindestr.");
        break;
    }
    case 56733:
    {
        returnValue = F("Bindeweg");
        break;
    }
    case 56734:
    {
        returnValue = F("Bindfelder Dorfstr.");
        break;
    }
    case 56735:
    {
        returnValue = F("Bindfelder Feldweg");
        break;
    }
    case 56736:
    {
        returnValue = F("Bindgarten");
        break;
    }
    case 56737:
    {
        returnValue = F("Bindhof");
        break;
    }
    case 56738:
    {
        returnValue = F("Bindingstr.");
        break;
    }
    case 56739:
    {
        returnValue = F("Bindingweg");
        break;
    }
    case 56740:
    {
        returnValue = F("Bindlacher Allee");
        break;
    }
    case 56741:
    {
        returnValue = F("Bindlacher Str.");
        break;
    }
    case 56742:
    {
        returnValue = F("Bindlestr.");
        break;
    }
    case 56743:
    {
        returnValue = F("Bindowbrück");
        break;
    }
    case 56744:
    {
        returnValue = F("Bindower Allee");
        break;
    }
    case 56745:
    {
        returnValue = F("Bindower Dorfstr.");
        break;
    }
    case 56746:
    {
        returnValue = F("Bindower Holzweg");
        break;
    }
    case 56747:
    {
        returnValue = F("Bindower Str.");
        break;
    }
    case 56748:
    {
        returnValue = F("Bindower Weg");
        break;
    }
    case 56749:
    {
        returnValue = F("Bindsachsener Str.");
        break;
    }
    case 56750:
    {
        returnValue = F("Bindsachser Str.");
        break;
    }
    case 56751:
    {
        returnValue = F("Bindsachser Weg");
        break;
    }
    case 56752:
    {
        returnValue = F("Bindsahl");
        break;
    }
    case 56753:
    {
        returnValue = F("Bindseilstr.");
        break;
    }
    case 56754:
    {
        returnValue = F("Bindsteinweg");
        break;
    }
    case 56755:
    {
        returnValue = F("Bindstr.");
        break;
    }
    case 56756:
    {
        returnValue = F("Bindsächser Str.");
        break;
    }
    case 56757:
    {
        returnValue = F("Bindwamsweg");
        break;
    }
    case 56758:
    {
        returnValue = F("Bindweg");
        break;
    }
    case 56759:
    {
        returnValue = F("Bindweider Str.");
        break;
    }
    case 56760:
    {
        returnValue = F("Bindweidgraben");
        break;
    }
    case 56761:
    {
        returnValue = F("Bindweidring");
        break;
    }
    case 56762:
    {
        returnValue = F("Bindäckerstr.");
        break;
    }
    case 56763:
    {
        returnValue = F("Binenwalder Str.");
        break;
    }
    case 56764:
    {
        returnValue = F("Bingarten");
        break;
    }
    case 56765:
    {
        returnValue = F("Binge");
        break;
    }
    case 56766:
    {
        returnValue = F("Bingelrader Str.");
        break;
    }
    case 56767:
    {
        returnValue = F("Bingenacker");
        break;
    }
    case 56768:
    {
        returnValue = F("Bingener Str.");
        break;
    }
    case 56769:
    {
        returnValue = F("Bingenheimer Str.");
        break;
    }
    case 56770:
    {
        returnValue = F("Bingenkopfweg");
        break;
    }
    case 56771:
    {
        returnValue = F("Binger Allee");
        break;
    }
    case 56772:
    {
        returnValue = F("Binger Gasse");
        break;
    }
    case 56773:
    {
        returnValue = F("Binger Höhe");
        break;
    }
    case 56774:
    {
        returnValue = F("Binger Landstr.");
        break;
    }
    case 56775:
    {
        returnValue = F("Binger Str.");
        break;
    }
    case 56776:
    {
        returnValue = F("Binger Weg");
        break;
    }
    case 56777:
    {
        returnValue = F("Bingerbrücker Str.");
        break;
    }
    case 56778:
    {
        returnValue = F("Bingereckstr.");
        break;
    }
    case 56779:
    {
        returnValue = F("Bingerhof");
        break;
    }
    case 56780:
    {
        returnValue = F("Bingerlochgasse");
        break;
    }
    case 56781:
    {
        returnValue = F("Bingerpfortenstr.");
        break;
    }
    case 56782:
    {
        returnValue = F("Bingerstr.");
        break;
    }
    case 56783:
    {
        returnValue = F("Bingertsgarten");
        break;
    }
    case 56784:
    {
        returnValue = F("Bingertstr.");
        break;
    }
    case 56785:
    {
        returnValue = F("Bingerwiese");
        break;
    }
    case 56786:
    {
        returnValue = F("Bingerwiesen");
        break;
    }
    case 56787:
    {
        returnValue = F("Bingeweg");
        break;
    }
    case 56788:
    {
        returnValue = F("Binghäuser Dorfstr.");
        break;
    }
    case 56789:
    {
        returnValue = F("Bingmühle");
        break;
    }
    case 56790:
    {
        returnValue = F("Bingumgaster Str.");
        break;
    }
    case 56791:
    {
        returnValue = F("Bingärtenstr.");
        break;
    }
    case 56792:
    {
        returnValue = F("Binhackstr.");
        break;
    }
    case 56793:
    {
        returnValue = F("Binkegasse");
        break;
    }
    case 56794:
    {
        returnValue = F("Binkenhof");
        break;
    }
    case 56795:
    {
        returnValue = F("Binkesbergweg");
        break;
    }
    case 56796:
    {
        returnValue = F("Binkeweg");
        break;
    }
    case 56797:
    {
        returnValue = F("Binnacker");
        break;
    }
    case 56798:
    {
        returnValue = F("Binnbach");
        break;
    }
    case 56799:
    {
        returnValue = F("Binnefeldstr.");
        break;
    }
    case 56800:
    {
        returnValue = F("Binnemanns Teil");
        break;
    }
    case 56801:
    {
        returnValue = F("Binnemannsstr.");
        break;
    }
    case 56802:
    {
        returnValue = F("Binnen Dör");
        break;
    }
    case 56803:
    {
        returnValue = F("Binnen-Voisselt");
        break;
    }
    case 56804:
    {
        returnValue = F("Binnenau");
        break;
    }
    case 56805:
    {
        returnValue = F("Binnenbeek");
        break;
    }
    case 56806:
    {
        returnValue = F("Binnenborger Str.");
        break;
    }
    case 56807:
    {
        returnValue = F("Binnenbreite");
        break;
    }
    case 56808:
    {
        returnValue = F("Binnenbruchweg");
        break;
    }
    case 56809:
    {
        returnValue = F("Binnendeichsweg");
        break;
    }
    case 56810:
    {
        returnValue = F("Binnendiek");
        break;
    }
    case 56811:
    {
        returnValue = F("Binnendörp");
        break;
    }
    case 56812:
    {
        returnValue = F("Binnenescher");
        break;
    }
    case 56813:
    {
        returnValue = F("Binnenfeld");
        break;
    }
    case 56814:
    {
        returnValue = F("Binnengärtenstr.");
        break;
    }
    case 56815:
    {
        returnValue = F("Binnenhafenstr.");
        break;
    }
    case 56816:
    {
        returnValue = F("Binnenhagen");
        break;
    }
    case 56817:
    {
        returnValue = F("Binnenheide");
        break;
    }
    case 56818:
    {
        returnValue = F("Binnenheideweg");
        break;
    }
    case 56819:
    {
        returnValue = F("Binnenhorster Weg");
        break;
    }
    case 56820:
    {
        returnValue = F("Binnenkamp");
        break;
    }
    case 56821:
    {
        returnValue = F("Binnenmühle");
        break;
    }
    case 56822:
    {
        returnValue = F("Binnenpaß");
        break;
    }
    case 56823:
    {
        returnValue = F("Binnenstr.");
        break;
    }
    case 56824:
    {
        returnValue = F("Binnenweg");
        break;
    }
    case 56825:
    {
        returnValue = F("Binnenweide");
        break;
    }
    case 56826:
    {
        returnValue = F("Binner Torfweg");
        break;
    }
    case 56827:
    {
        returnValue = F("Binnere Str.");
        break;
    }
    case 56828:
    {
        returnValue = F("Binnerfeld");
        break;
    }
    case 56829:
    {
        returnValue = F("Binnerheide");
        break;
    }
    case 56830:
    {
        returnValue = F("Binnernweg");
        break;
    }
    case 56831:
    {
        returnValue = F("Binnerstr.");
        break;
    }
    case 56832:
    {
        returnValue = F("Binnersweg");
        break;
    }
    case 56833:
    {
        returnValue = F("Binnerweg");
        break;
    }
    case 56834:
    {
        returnValue = F("Binnerwies");
        break;
    }
    case 56835:
    {
        returnValue = F("Binnetstr.");
        break;
    }
    case 56836:
    {
        returnValue = F("Binneweg");
        break;
    }
    case 56837:
    {
        returnValue = F("Binnewegesmoor");
        break;
    }
    case 56838:
    {
        returnValue = F("Binnewinkel");
        break;
    }
    case 56839:
    {
        returnValue = F("Binngasse");
        break;
    }
    case 56840:
    {
        returnValue = F("Binnhoff");
        break;
    }
    case 56841:
    {
        returnValue = F("Binnhove");
        break;
    }
    case 56842:
    {
        returnValue = F("Binning");
        break;
    }
    case 56843:
    {
        returnValue = F("Binningen");
        break;
    }
    case 56844:
    {
        returnValue = F("Binninger Str.");
        break;
    }
    case 56845:
    {
        returnValue = F("Binninger Weg");
        break;
    }
    case 56846:
    {
        returnValue = F("Binningsweg");
        break;
    }
    case 56847:
    {
        returnValue = F("Binnstr.");
        break;
    }
    case 56848:
    {
        returnValue = F("Binnung");
        break;
    }
    case 56849:
    {
        returnValue = F("Binnäckerstr.");
        break;
    }
    case 56850:
    {
        returnValue = F("Binolen");
        break;
    }
    case 56851:
    {
        returnValue = F("Bins");
        break;
    }
    case 56852:
    {
        returnValue = F("Binsachstr.");
        break;
    }
    case 56853:
    {
        returnValue = F("Binsachweg");
        break;
    }
    case 56854:
    {
        returnValue = F("Binsackerweg");
        break;
    }
    case 56855:
    {
        returnValue = F("Binsal");
        break;
    }
    case 56856:
    {
        returnValue = F("Binsbachweg");
        break;
    }
    case 56857:
    {
        returnValue = F("Binsberg");
        break;
    }
    case 56858:
    {
        returnValue = F("Binsbergweg");
        break;
    }
    case 56859:
    {
        returnValue = F("Binscheider Str.");
        break;
    }
    case 56860:
    {
        returnValue = F("Binsdorfer Str.");
        break;
    }
    case 56861:
    {
        returnValue = F("Binselberg");
        break;
    }
    case 56862:
    {
        returnValue = F("Binsenacker");
        break;
    }
    case 56863:
    {
        returnValue = F("Binsenbachweg");
        break;
    }
    case 56864:
    {
        returnValue = F("Binsenberg");
        break;
    }
    case 56865:
    {
        returnValue = F("Binsenbergweg");
        break;
    }
    case 56866:
    {
        returnValue = F("Binsenbolstr.");
        break;
    }
    case 56867:
    {
        returnValue = F("Binsenbusch");
        break;
    }
    case 56868:
    {
        returnValue = F("Binsenflecken");
        break;
    }
    case 56869:
    {
        returnValue = F("Binsengasse");
        break;
    }
    case 56870:
    {
        returnValue = F("Binsengrabenweg");
        break;
    }
    case 56871:
    {
        returnValue = F("Binsengrund");
        break;
    }
    case 56872:
    {
        returnValue = F("Binsengärten");
        break;
    }
    case 56873:
    {
        returnValue = F("Binsenheide");
        break;
    }
    case 56874:
    {
        returnValue = F("Binsenhof");
        break;
    }
    case 56875:
    {
        returnValue = F("Binsenhofweg");
        break;
    }
    case 56876:
    {
        returnValue = F("Binsenhohlstr.");
        break;
    }
    case 56877:
    {
        returnValue = F("Binsenkamp");
        break;
    }
    case 56878:
    {
        returnValue = F("Binsenklinge");
        break;
    }
    case 56879:
    {
        returnValue = F("Binsenkoppel");
        break;
    }
    case 56880:
    {
        returnValue = F("Binsenkute");
        break;
    }
    case 56881:
    {
        returnValue = F("Binsenlachen");
        break;
    }
    case 56882:
    {
        returnValue = F("Binsenpfad");
        break;
    }
    case 56883:
    {
        returnValue = F("Binsenplatten-Sträßchen");
        break;
    }
    case 56884:
    {
        returnValue = F("Binsenreuth");
        break;
    }
    case 56885:
    {
        returnValue = F("Binsenstieg");
        break;
    }
    case 56886:
    {
        returnValue = F("Binsenstr.");
        break;
    }
    case 56887:
    {
        returnValue = F("Binsentalstr.");
        break;
    }
    case 56888:
    {
        returnValue = F("Binsenweg");
        break;
    }
    case 56889:
    {
        returnValue = F("Binsenwerder");
        break;
    }
    case 56890:
    {
        returnValue = F("Binsenwiese");
        break;
    }
    case 56891:
    {
        returnValue = F("Binsenwiesen");
        break;
    }
    case 56892:
    {
        returnValue = F("Binsenwiesenstr.");
        break;
    }
    case 56893:
    {
        returnValue = F("Binsenwiesenweg");
        break;
    }
    case 56894:
    {
        returnValue = F("Binsenäckerstr.");
        break;
    }
    case 56895:
    {
        returnValue = F("Binsenäckerweg");
        break;
    }
    case 56896:
    {
        returnValue = F("Binsfeld");
        break;
    }
    case 56897:
    {
        returnValue = F("Binsfelder Pfad");
        break;
    }
    case 56898:
    {
        returnValue = F("Binsfelder Str.");
        break;
    }
    case 56899:
    {
        returnValue = F("Binsfelder Weg");
        break;
    }
    case 56900:
    {
        returnValue = F("Binsfeldstr.");
        break;
    }
    case 56901:
    {
        returnValue = F("Binsförther Str.");
        break;
    }
    case 56902:
    {
        returnValue = F("Binsförther Weg");
        break;
    }
    case 56903:
    {
        returnValue = F("Binsgasse");
        break;
    }
    case 56904:
    {
        returnValue = F("Binshaldenweg");
        break;
    }
    case 56905:
    {
        returnValue = F("Binshamer Str.");
        break;
    }
    case 56906:
    {
        returnValue = F("Binsheim");
        break;
    }
    case 56907:
    {
        returnValue = F("Binsheimer Str.");
        break;
    }
    case 56908:
    {
        returnValue = F("Binshofstr.");
        break;
    }
    case 56909:
    {
        returnValue = F("Binsicht");
        break;
    }
    case 56910:
    {
        returnValue = F("Binsig");
        break;
    }
    case 56911:
    {
        returnValue = F("Binsigweg");
        break;
    }
    case 56912:
    {
        returnValue = F("Binswangen");
        break;
    }
    case 56913:
    {
        returnValue = F("Binswanger Str.");
        break;
    }
    case 56914:
    {
        returnValue = F("Binswanger Sträßle");
        break;
    }
    case 56915:
    {
        returnValue = F("Binswangerstr.");
        break;
    }
    case 56916:
    {
        returnValue = F("Binsweg");
        break;
    }
    case 56917:
    {
        returnValue = F("Binswiesenweg");
        break;
    }
    case 56918:
    {
        returnValue = F("Bintener Hof");
        break;
    }
    case 56919:
    {
        returnValue = F("Binweg");
        break;
    }
    case 56920:
    {
        returnValue = F("Binzachweg");
        break;
    }
    case 56921:
    {
        returnValue = F("Binzburgstr.");
        break;
    }
    case 56922:
    {
        returnValue = F("Binzdorfer Weg");
        break;
    }
    case 56923:
    {
        returnValue = F("Binzen");
        break;
    }
    case 56924:
    {
        returnValue = F("Binzener Str.");
        break;
    }
    case 56925:
    {
        returnValue = F("Binzengrün");
        break;
    }
    case 56926:
    {
        returnValue = F("Binzenlöchleweg");
        break;
    }
    case 56927:
    {
        returnValue = F("Binzenweg");
        break;
    }
    case 56928:
    {
        returnValue = F("Binzer Allee");
        break;
    }
    case 56929:
    {
        returnValue = F("Binzer Almendweg");
        break;
    }
    case 56930:
    {
        returnValue = F("Binzer Str.");
        break;
    }
    case 56931:
    {
        returnValue = F("Binzer Weg");
        break;
    }
    case 56932:
    {
        returnValue = F("Binzertweg");
        break;
    }
    case 56933:
    {
        returnValue = F("Binzerweg");
        break;
    }
    case 56934:
    {
        returnValue = F("Binzger Str.");
        break;
    }
    case 56935:
    {
        returnValue = F("Binzig");
        break;
    }
    case 56936:
    {
        returnValue = F("Binzigstr.");
        break;
    }
    case 56937:
    {
        returnValue = F("Binzigsweg");
        break;
    }
    case 56938:
    {
        returnValue = F("Binzigweg");
        break;
    }
    case 56939:
    {
        returnValue = F("Binzisreuteweg");
        break;
    }
    case 56940:
    {
        returnValue = F("Binzmattstr.");
        break;
    }
    case 56941:
    {
        returnValue = F("Binzwangener Weg");
        break;
    }
    case 56942:
    {
        returnValue = F("Binzwanger Str.");
        break;
    }
    case 56943:
    {
        returnValue = F("Binzweg");
        break;
    }
    case 56944:
    {
        returnValue = F("Biobadstr.");
        break;
    }
    case 56945:
    {
        returnValue = F("Biodiversität von Stieleichen");
        break;
    }
    case 56946:
    {
        returnValue = F("Biogasallee");
        break;
    }
    case 56947:
    {
        returnValue = F("Biologenweg");
        break;
    }
    case 56948:
    {
        returnValue = F("Biologischer Garten");
        break;
    }
    case 56949:
    {
        returnValue = F("Biomalzspange");
        break;
    }
    case 56950:
    {
        returnValue = F("Biomilchstr.");
        break;
    }
    case 56951:
    {
        returnValue = F("Biotop");
        break;
    }
    case 56952:
    {
        returnValue = F("Biotop Bleichplan");
        break;
    }
    case 56953:
    {
        returnValue = F("Biotop Westum");
        break;
    }
    case 56954:
    {
        returnValue = F("Biotopgarten");
        break;
    }
    case 56955:
    {
        returnValue = F("Biotopweg");
        break;
    }
    case 56956:
    {
        returnValue = F("Biotopwildpark Anholter Schweiz");
        break;
    }
    case 56957:
    {
        returnValue = F("Biozentrum Ballgottheit");
        break;
    }
    case 56958:
    {
        returnValue = F("Bippartstr.");
        break;
    }
    case 56959:
    {
        returnValue = F("Bippener Str.");
        break;
    }
    case 56960:
    {
        returnValue = F("Bippenwaldstr.");
        break;
    }
    case 56961:
    {
        returnValue = F("Birbachtal");
        break;
    }
    case 56962:
    {
        returnValue = F("Birch Street");
        break;
    }
    case 56963:
    {
        returnValue = F("Bircher-Benner-Str.");
        break;
    }
    case 56964:
    {
        returnValue = F("Birchring");
        break;
    }
    case 56965:
    {
        returnValue = F("Birchtiloweg");
        break;
    }
    case 56966:
    {
        returnValue = F("Birchweg");
        break;
    }
    case 56967:
    {
        returnValue = F("Birckenbachstr.");
        break;
    }
    case 56968:
    {
        returnValue = F("Bircksstr.");
        break;
    }
    case 56969:
    {
        returnValue = F("Birder Str.");
        break;
    }
    case 56970:
    {
        returnValue = F("Bireknstrasse");
        break;
    }
    case 56971:
    {
        returnValue = F("Birenbacher Str.");
        break;
    }
    case 56972:
    {
        returnValue = F("Birenmattstr.");
        break;
    }
    case 56973:
    {
        returnValue = F("Birentalweg");
        break;
    }
    case 56974:
    {
        returnValue = F("Birgden III");
        break;
    }
    case 56975:
    {
        returnValue = F("Birgdener Berg");
        break;
    }
    case 56976:
    {
        returnValue = F("Birgdener Str.");
        break;
    }
    case 56977:
    {
        returnValue = F("Birgder Gracht");
        break;
    }
    case 56978:
    {
        returnValue = F("Birgder Hammer");
        break;
    }
    case 56979:
    {
        returnValue = F("Birgelener Bahn");
        break;
    }
    case 56980:
    {
        returnValue = F("Birgeler Str.");
        break;
    }
    case 56981:
    {
        returnValue = F("Birgeler-Kopf-Weg");
        break;
    }
    case 56982:
    {
        returnValue = F("Birgelstr.");
        break;
    }
    case 56983:
    {
        returnValue = F("Birgen");
        break;
    }
    case 56984:
    {
        returnValue = F("Birgenweg");
        break;
    }
    case 56985:
    {
        returnValue = F("Birger-Forell-Str.");
        break;
    }
    case 56986:
    {
        returnValue = F("Birgit-Blank-Str.");
        break;
    }
    case 56987:
    {
        returnValue = F("Birgit-Reinert-Str.");
        break;
    }
    case 56988:
    {
        returnValue = F("Birgittenstr.");
        break;
    }
    case 56989:
    {
        returnValue = F("Birgittenweg");
        break;
    }
    case 56990:
    {
        returnValue = F("Birgmeierweg");
        break;
    }
    case 56991:
    {
        returnValue = F("Birgsauer Str.");
        break;
    }
    case 56992:
    {
        returnValue = F("Birgstr.");
        break;
    }
    case 56993:
    {
        returnValue = F("Birgter Feldweg");
        break;
    }
    case 56994:
    {
        returnValue = F("Birgteweg");
        break;
    }
    case 56995:
    {
        returnValue = F("Birgweg");
        break;
    }
    case 56996:
    {
        returnValue = F("Birhusten");
        break;
    }
    case 56997:
    {
        returnValue = F("Birigtstr.");
        break;
    }
    case 56998:
    {
        returnValue = F("Biringer Acht");
        break;
    }
    case 56999:
    {
        returnValue = F("Birk");
        break;
    }
    case 57000:
    {
        returnValue = F("Birka");
        break;
    }
    case 57001:
    {
        returnValue = F("Birkach");
        break;
    }
    case 57002:
    {
        returnValue = F("Birkacher Hauptstr.");
        break;
    }
    case 57003:
    {
        returnValue = F("Birkacher Str.");
        break;
    }
    case 57004:
    {
        returnValue = F("Birkacher Weg");
        break;
    }
    case 57005:
    {
        returnValue = F("Birkachgäßle");
        break;
    }
    case 57006:
    {
        returnValue = F("Birkachring");
        break;
    }
    case 57007:
    {
        returnValue = F("Birkachstr.");
        break;
    }
    case 57008:
    {
        returnValue = F("Birkachweg");
        break;
    }
    case 57009:
    {
        returnValue = F("Birkastr.");
        break;
    }
    case 57010:
    {
        returnValue = F("Birkberg");
        break;
    }
    case 57011:
    {
        returnValue = F("Birkbusch");
        break;
    }
    case 57012:
    {
        returnValue = F("Birkbuschstr.");
        break;
    }
    case 57013:
    {
        returnValue = F("Birkbuschweg");
        break;
    }
    case 57014:
    {
        returnValue = F("Birke");
        break;
    }
    case 57015:
    {
        returnValue = F("Birkebeneweg");
        break;
    }
    case 57016:
    {
        returnValue = F("Birkefehler Str.");
        break;
    }
    case 57017:
    {
        returnValue = F("Birkei");
        break;
    }
    case 57018:
    {
        returnValue = F("Birkelbacher Str.");
        break;
    }
    case 57019:
    {
        returnValue = F("Birkeles Weg");
        break;
    }
    case 57020:
    {
        returnValue = F("Birkelgasse");
        break;
    }
    case 57021:
    {
        returnValue = F("Birkelhöhlenweg");
        break;
    }
    case 57022:
    {
        returnValue = F("Birkelsgrund");
        break;
    }
    case 57023:
    {
        returnValue = F("Birkelstr.");
        break;
    }
    case 57024:
    {
        returnValue = F("Birkelweg");
        break;
    }
    case 57025:
    {
        returnValue = F("Birkemesweg");
        break;
    }
    case 57026:
    {
        returnValue = F("Birkemich");
        break;
    }
    case 57027:
    {
        returnValue = F("Birken");
        break;
    }
    case 57028:
    {
        returnValue = F("Birken Abzw.");
        break;
    }
    case 57029:
    {
        returnValue = F("Birken Schneise");
        break;
    }
    case 57030:
    {
        returnValue = F("Birken-Höhenweg");
        break;
    }
    case 57031:
    {
        returnValue = F("Birken-Schneise");
        break;
    }
    case 57032:
    {
        returnValue = F("Birkenackerweg");
        break;
    }
    case 57033:
    {
        returnValue = F("Birkenallee");
        break;
    }
    case 57034:
    {
        returnValue = F("Birkenanger");
        break;
    }
    case 57035:
    {
        returnValue = F("Birkenau");
        break;
    }
    case 57036:
    {
        returnValue = F("Birkenaue");
        break;
    }
    case 57037:
    {
        returnValue = F("Birkenauer Str.");
        break;
    }
    case 57038:
    {
        returnValue = F("Birkenauer Talstr.");
        break;
    }
    case 57039:
    {
        returnValue = F("Birkenbachstr.");
        break;
    }
    case 57040:
    {
        returnValue = F("Birkenbachtal");
        break;
    }
    case 57041:
    {
        returnValue = F("Birkenbankweg");
        break;
    }
    case 57042:
    {
        returnValue = F("Birkenbattweg");
        break;
    }
    case 57043:
    {
        returnValue = F("Birkenbaum");
        break;
    }
    case 57044:
    {
        returnValue = F("Birkenbbuckelweg");
        break;
    }
    case 57045:
    {
        returnValue = F("Birkenberg");
        break;
    }
    case 57046:
    {
        returnValue = F("Birkenbergstr.");
        break;
    }
    case 57047:
    {
        returnValue = F("Birkenbergweg");
        break;
    }
    case 57048:
    {
        returnValue = F("Birkenbeuler Weg");
        break;
    }
    case 57049:
    {
        returnValue = F("Birkenblick");
        break;
    }
    case 57050:
    {
        returnValue = F("Birkenbogen");
        break;
    }
    case 57051:
    {
        returnValue = F("Birkenbosch");
        break;
    }
    case 57052:
    {
        returnValue = F("Birkenbreite");
        break;
    }
    case 57053:
    {
        returnValue = F("Birkenbruch");
        break;
    }
    case 57054:
    {
        returnValue = F("Birkenbruchweg");
        break;
    }
    case 57055:
    {
        returnValue = F("Birkenbuck");
        break;
    }
    case 57056:
    {
        returnValue = F("Birkenbuckelrückeweg");
        break;
    }
    case 57057:
    {
        returnValue = F("Birkenbusch");
        break;
    }
    case 57058:
    {
        returnValue = F("Birkenbuschstr.");
        break;
    }
    case 57059:
    {
        returnValue = F("Birkenbuschweg");
        break;
    }
    case 57060:
    {
        returnValue = F("Birkenbügerl");
        break;
    }
    case 57061:
    {
        returnValue = F("Birkenbühl");
        break;
    }
    case 57062:
    {
        returnValue = F("Birkenbühlweg");
        break;
    }
    case 57063:
    {
        returnValue = F("Birkenbüsch");
        break;
    }
    case 57064:
    {
        returnValue = F("Birkenchaussee");
        break;
    }
    case 57065:
    {
        returnValue = F("Birkendamm");
        break;
    }
    case 57066:
    {
        returnValue = F("Birkendeller Weg");
        break;
    }
    case 57067:
    {
        returnValue = F("Birkenderkamp");
        break;
    }
    case 57068:
    {
        returnValue = F("Birkendonk");
        break;
    }
    case 57069:
    {
        returnValue = F("Birkendorfer Str.");
        break;
    }
    case 57070:
    {
        returnValue = F("Birkendorfschule");
        break;
    }
    case 57071:
    {
        returnValue = F("Birkendyk");
        break;
    }
    case 57072:
    {
        returnValue = F("Birkeneck");
        break;
    }
    case 57073:
    {
        returnValue = F("Birkener Str.");
        break;
    }
    case 57074:
    {
        returnValue = F("Birkenfeld");
        break;
    }
    case 57075:
    {
        returnValue = F("Birkenfeld-Nord");
        break;
    }
    case 57076:
    {
        returnValue = F("Birkenfeld-Süd");
        break;
    }
    case 57077:
    {
        returnValue = F("Birkenfelde");
        break;
    }
    case 57078:
    {
        returnValue = F("Birkenfelde Mitte");
        break;
    }
    case 57079:
    {
        returnValue = F("Birkenfelder Allee");
        break;
    }
    case 57080:
    {
        returnValue = F("Birkenfelder Str.");
        break;
    }
    case 57081:
    {
        returnValue = F("Birkenfelder Weg");
        break;
    }
    case 57082:
    {
        returnValue = F("Birkenfelderstr.");
        break;
    }
    case 57083:
    {
        returnValue = F("Birkenfeldstr.");
        break;
    }
    case 57084:
    {
        returnValue = F("Birkenfeldweg");
        break;
    }
    case 57085:
    {
        returnValue = F("Birkenfeller Weg");
        break;
    }
    case 57086:
    {
        returnValue = F("Birkenflügel");
        break;
    }
    case 57087:
    {
        returnValue = F("Birkengangstr.");
        break;
    }
    case 57088:
    {
        returnValue = F("Birkengartenstr.");
        break;
    }
    case 57089:
    {
        returnValue = F("Birkengartenweg");
        break;
    }
    case 57090:
    {
        returnValue = F("Birkengasse");
        break;
    }
    case 57091:
    {
        returnValue = F("Birkengehren");
        break;
    }
    case 57092:
    {
        returnValue = F("Birkengehrenweg");
        break;
    }
    case 57093:
    {
        returnValue = F("Birkengertenweg");
        break;
    }
    case 57094:
    {
        returnValue = F("Birkengrasebrink");
        break;
    }
    case 57095:
    {
        returnValue = F("Birkengrund");
        break;
    }
    case 57096:
    {
        returnValue = F("Birkengäßle");
        break;
    }
    case 57097:
    {
        returnValue = F("Birkenhack");
        break;
    }
    case 57098:
    {
        returnValue = F("Birkenhagen");
        break;
    }
    case 57099:
    {
        returnValue = F("Birkenhahnstr.");
        break;
    }
    case 57100:
    {
        returnValue = F("Birkenhain");
        break;
    }
    case 57101:
    {
        returnValue = F("Birkenhainer");
        break;
    }
    case 57102:
    {
        returnValue = F("Birkenhainer Höhe");
        break;
    }
    case 57103:
    {
        returnValue = F("Birkenhainer Ring");
        break;
    }
    case 57104:
    {
        returnValue = F("Birkenhainer Str.");
        break;
    }
    case 57105:
    {
        returnValue = F("Birkenhainer Weg");
        break;
    }
    case 57106:
    {
        returnValue = F("Birkenhainring");
        break;
    }
    case 57107:
    {
        returnValue = F("Birkenhainweg");
        break;
    }
    case 57108:
    {
        returnValue = F("Birkenhang");
        break;
    }
    case 57109:
    {
        returnValue = F("Birkenharder Str.");
        break;
    }
    case 57110:
    {
        returnValue = F("Birkenhardt");
        break;
    }
    case 57111:
    {
        returnValue = F("Birkenhausträßchen");
        break;
    }
    case 57112:
    {
        returnValue = F("Birkenhauweg");
        break;
    }
    case 57113:
    {
        returnValue = F("Birkenhecker Str.");
        break;
    }
    case 57114:
    {
        returnValue = F("Birkenheg Schneise");
        break;
    }
    case 57115:
    {
        returnValue = F("Birkenheide");
        break;
    }
    case 57116:
    {
        returnValue = F("Birkenheider Str.");
        break;
    }
    case 57117:
    {
        returnValue = F("Birkenheider Weg");
        break;
    }
    case 57118:
    {
        returnValue = F("Birkenhof");
        break;
    }
    case 57119:
    {
        returnValue = F("Birkenhofer Weg");
        break;
    }
    case 57120:
    {
        returnValue = F("Birkenhoferstr.");
        break;
    }
    case 57121:
    {
        returnValue = F("Birkenhofschneise");
        break;
    }
    case 57122:
    {
        returnValue = F("Birkenhofstr.");
        break;
    }
    case 57123:
    {
        returnValue = F("Birkenhofweg");
        break;
    }
    case 57124:
    {
        returnValue = F("Birkenholt");
        break;
    }
    case 57125:
    {
        returnValue = F("Birkenholz");
        break;
    }
    case 57126:
    {
        returnValue = F("Birkenholzer Str.");
        break;
    }
    case 57127:
    {
        returnValue = F("Birkenhorst");
        break;
    }
    case 57128:
    {
        returnValue = F("Birkenhorststr.");
        break;
    }
    case 57129:
    {
        returnValue = F("Birkenhäuserweg");
        break;
    }
    case 57130:
    {
        returnValue = F("Birkenhöfe");
        break;
    }
    case 57131:
    {
        returnValue = F("Birkenhöhe");
        break;
    }
    case 57132:
    {
        returnValue = F("Birkenhöhenweg");
        break;
    }
    case 57133:
    {
        returnValue = F("Birkenhügel");
        break;
    }
    case 57134:
    {
        returnValue = F("Birkenkamp");
        break;
    }
    case 57135:
    {
        returnValue = F("Birkenkampstr.");
        break;
    }
    case 57136:
    {
        returnValue = F("Birkenkampsweg");
        break;
    }
    case 57137:
    {
        returnValue = F("Birkenkampweg");
        break;
    }
    case 57138:
    {
        returnValue = F("Birkenkanal");
        break;
    }
    case 57139:
    {
        returnValue = F("Birkenkolonie");
        break;
    }
    case 57140:
    {
        returnValue = F("Birkenkopfstr.");
        break;
    }
    case 57141:
    {
        returnValue = F("Birkenkopfweg");
        break;
    }
    case 57142:
    {
        returnValue = F("Birkenkoppel");
        break;
    }
    case 57143:
    {
        returnValue = F("Birkenlacher Weg");
        break;
    }
    case 57144:
    {
        returnValue = F("Birkenleite");
        break;
    }
    case 57145:
    {
        returnValue = F("Birkenlinie");
        break;
    }
    case 57146:
    {
        returnValue = F("Birkenloh");
        break;
    }
    case 57147:
    {
        returnValue = F("Birkenloher Str.");
        break;
    }
    case 57148:
    {
        returnValue = F("Birkenlohrstr.");
        break;
    }
    case 57149:
    {
        returnValue = F("Birkenlohstr.");
        break;
    }
    case 57150:
    {
        returnValue = F("Birkenlohweg");
        break;
    }
    case 57151:
    {
        returnValue = F("Birkenmahd");
        break;
    }
    case 57152:
    {
        returnValue = F("Birkenmoor");
        break;
    }
    case 57153:
    {
        returnValue = F("Birkenmoosstr.");
        break;
    }
    case 57154:
    {
        returnValue = F("Birkenmoosweg");
        break;
    }
    case 57155:
    {
        returnValue = F("Birkenmoosäckerweg");
        break;
    }
    case 57156:
    {
        returnValue = F("Birkenmühle");
        break;
    }
    case 57157:
    {
        returnValue = F("Birkenmühler Weg");
        break;
    }
    case 57158:
    {
        returnValue = F("Birkenort");
        break;
    }
    case 57159:
    {
        returnValue = F("Birkenpaschhof");
        break;
    }
    case 57160:
    {
        returnValue = F("Birkenpfad");
        break;
    }
    case 57161:
    {
        returnValue = F("Birkenpilzweg");
        break;
    }
    case 57162:
    {
        returnValue = F("Birkenplatz");
        break;
    }
    case 57163:
    {
        returnValue = F("Birkenplätzle");
        break;
    }
    case 57164:
    {
        returnValue = F("Birkenrain");
        break;
    }
    case 57165:
    {
        returnValue = F("Birkenredder");
        break;
    }
    case 57166:
    {
        returnValue = F("Birkenreuther Weg");
        break;
    }
    case 57167:
    {
        returnValue = F("Birkenrieder Str.");
        break;
    }
    case 57168:
    {
        returnValue = F("Birkenriedstr.");
        break;
    }
    case 57169:
    {
        returnValue = F("Birkenring");
        break;
    }
    case 57170:
    {
        returnValue = F("Birkenrith");
        break;
    }
    case 57171:
    {
        returnValue = F("Birkenroder Str.");
        break;
    }
    case 57172:
    {
        returnValue = F("Birkenrotweg");
        break;
    }
    case 57173:
    {
        returnValue = F("Birkenschlag");
        break;
    }
    case 57174:
    {
        returnValue = F("Birkenschlagweg");
        break;
    }
    case 57175:
    {
        returnValue = F("Birkenschläglesweg");
        break;
    }
    case 57176:
    {
        returnValue = F("Birkenschlägleweg");
        break;
    }
    case 57177:
    {
        returnValue = F("Birkenschneise");
        break;
    }
    case 57178:
    {
        returnValue = F("Birkenschrot");
        break;
    }
    case 57179:
    {
        returnValue = F("Birkensee-Wanderweg");
        break;
    }
    case 57180:
    {
        returnValue = F("Birkenseeschneise");
        break;
    }
    case 57181:
    {
        returnValue = F("Birkenseetrift");
        break;
    }
    case 57182:
    {
        returnValue = F("Birkenseeweg");
        break;
    }
    case 57183:
    {
        returnValue = F("Birkensiedlung");
        break;
    }
    case 57184:
    {
        returnValue = F("Birkensiefen");
        break;
    }
    case 57185:
    {
        returnValue = F("Birkensiepen");
        break;
    }
    case 57186:
    {
        returnValue = F("Birkenstasse");
        break;
    }
    case 57187:
    {
        returnValue = F("Birkensteg");
        break;
    }
    case 57188:
    {
        returnValue = F("Birkensteig");
        break;
    }
    case 57189:
    {
        returnValue = F("Birkensteige");
        break;
    }
    case 57190:
    {
        returnValue = F("Birkensteiner Str.");
        break;
    }
    case 57191:
    {
        returnValue = F("Birkensteinstr.");
        break;
    }
    case 57192:
    {
        returnValue = F("Birkensteinweg");
        break;
    }
    case 57193:
    {
        returnValue = F("Birkenstieg");
        break;
    }
    case 57194:
    {
        returnValue = F("Birkenstockstr.");
        break;
    }
    case 57195:
    {
        returnValue = F("Birkenstr");
        break;
    }
    case 57196:
    {
        returnValue = F("Birkenstr.");
        break;
    }
    case 57197:
    {
        returnValue = F("Birkenstrat");
        break;
    }
    case 57198:
    {
        returnValue = F("Birkenstrauchweg");
        break;
    }
    case 57199:
    {
        returnValue = F("Birkenstöcke");
        break;
    }
    case 57200:
    {
        returnValue = F("Birkenstück");
        break;
    }
    case 57201:
    {
        returnValue = F("Birkensümpfeweg");
        break;
    }
    case 57202:
    {
        returnValue = F("Birkental");
        break;
    }
    case 57203:
    {
        returnValue = F("Birkentalstr.");
        break;
    }
    case 57204:
    {
        returnValue = F("Birkentalsweg");
        break;
    }
    case 57205:
    {
        returnValue = F("Birkentalweg");
        break;
    }
    case 57206:
    {
        returnValue = F("Birkenteich");
        break;
    }
    case 57207:
    {
        returnValue = F("Birkenthal");
        break;
    }
    case 57208:
    {
        returnValue = F("Birkenthalstr.");
        break;
    }
    case 57209:
    {
        returnValue = F("Birkentwiete");
        break;
    }
    case 57210:
    {
        returnValue = F("Birkenvennweg");
        break;
    }
    case 57211:
    {
        returnValue = F("Birkenwald");
        break;
    }
    case 57212:
    {
        returnValue = F("Birkenwaldstr.");
        break;
    }
    case 57213:
    {
        returnValue = F("Birkenwaldweg");
        break;
    }
    case 57214:
    {
        returnValue = F("Birkenweg");
        break;
    }
    case 57215:
    {
        returnValue = F("Birkenweg Buchholz");
        break;
    }
    case 57216:
    {
        returnValue = F("Birkenweg Falkenhagen");
        break;
    }
    case 57217:
    {
        returnValue = F("Birkenweiher Str.");
        break;
    }
    case 57218:
    {
        returnValue = F("Birkenweiherfeld");
        break;
    }
    case 57219:
    {
        returnValue = F("Birkenwerderstr.");
        break;
    }
    case 57220:
    {
        returnValue = F("Birkenwerderweg");
        break;
    }
    case 57221:
    {
        returnValue = F("Birkenwiese");
        break;
    }
    case 57222:
    {
        returnValue = F("Birkenwinkel");
        break;
    }
    case 57223:
    {
        returnValue = F("Birkenwälchen");
        break;
    }
    case 57224:
    {
        returnValue = F("Birkenwäldchen");
        break;
    }
    case 57225:
    {
        returnValue = F("Birkenwäldchen I");
        break;
    }
    case 57226:
    {
        returnValue = F("Birkenwäldchen II");
        break;
    }
    case 57227:
    {
        returnValue = F("Birkenwäldchen III");
        break;
    }
    case 57228:
    {
        returnValue = F("Birkenwäldleweg");
        break;
    }
    case 57229:
    {
        returnValue = F("Birkenzanter Str.");
        break;
    }
    case 57230:
    {
        returnValue = F("Birkenzeller Str.");
        break;
    }
    case 57231:
    {
        returnValue = F("Birkenäckerstr.");
        break;
    }
    case 57232:
    {
        returnValue = F("Birkenäckerweg");
        break;
    }
    case 57233:
    {
        returnValue = F("Birkenörter");
        break;
    }
    case 57234:
    {
        returnValue = F("Birkenösch");
        break;
    }
    case 57235:
    {
        returnValue = F("Birker Feld");
        break;
    }
    case 57236:
    {
        returnValue = F("Birker Str.");
        break;
    }
    case 57237:
    {
        returnValue = F("Birker Weg");
        break;
    }
    case 57238:
    {
        returnValue = F("Birkerfeld");
        break;
    }
    case 57239:
    {
        returnValue = F("Birkerhof");
        break;
    }
    case 57240:
    {
        returnValue = F("Birkerhöhe");
        break;
    }
    case 57241:
    {
        returnValue = F("Birkerlweg");
        break;
    }
    case 57242:
    {
        returnValue = F("Birkerter Weg");
        break;
    }
    case 57243:
    {
        returnValue = F("Birkertschneise");
        break;
    }
    case 57244:
    {
        returnValue = F("Birkertstr.");
        break;
    }
    case 57245:
    {
        returnValue = F("Birkertweg");
        break;
    }
    case 57246:
    {
        returnValue = F("Birkerweg");
        break;
    }
    case 57247:
    {
        returnValue = F("Birkesdorfer Str.");
        break;
    }
    case 57248:
    {
        returnValue = F("Birkeshardt");
        break;
    }
    case 57249:
    {
        returnValue = F("Birkeshöhstr.");
        break;
    }
    case 57250:
    {
        returnValue = F("Birkesweg");
        break;
    }
    case 57251:
    {
        returnValue = F("Birket");
        break;
    }
    case 57252:
    {
        returnValue = F("Birket-Kirren-Runde");
        break;
    }
    case 57253:
    {
        returnValue = F("Birkethöhe");
        break;
    }
    case 57254:
    {
        returnValue = F("Birketle");
        break;
    }
    case 57255:
    {
        returnValue = F("Birketstr.");
        break;
    }
    case 57256:
    {
        returnValue = F("Birketweg");
        break;
    }
    case 57257:
    {
        returnValue = F("Birketwiesen");
        break;
    }
    case 57258:
    {
        returnValue = F("Birketäcker");
        break;
    }
    case 57259:
    {
        returnValue = F("Birkeweg");
        break;
    }
    case 57260:
    {
        returnValue = F("Birkeystr.");
        break;
    }
    case 57261:
    {
        returnValue = F("Birkfeldstr.");
        break;
    }
    case 57262:
    {
        returnValue = F("Birkfeldweg");
        break;
    }
    case 57263:
    {
        returnValue = F("Birkgartenstr.");
        break;
    }
    case 57264:
    {
        returnValue = F("Birkgasse");
        break;
    }
    case 57265:
    {
        returnValue = F("Birkgäßlesweg");
        break;
    }
    case 57266:
    {
        returnValue = F("Birkhahn");
        break;
    }
    case 57267:
    {
        returnValue = F("Birkhahnenschneise");
        break;
    }
    case 57268:
    {
        returnValue = F("Birkhahnheide");
        break;
    }
    case 57269:
    {
        returnValue = F("Birkhahnkamp");
        break;
    }
    case 57270:
    {
        returnValue = F("Birkhahnstr.");
        break;
    }
    case 57271:
    {
        returnValue = F("Birkhahnweg");
        break;
    }
    case 57272:
    {
        returnValue = F("Birkhalde");
        break;
    }
    case 57273:
    {
        returnValue = F("Birkhaldenstr.");
        break;
    }
    case 57274:
    {
        returnValue = F("Birkhaldenweg");
        break;
    }
    case 57275:
    {
        returnValue = F("Birkhamer Str.");
        break;
    }
    case 57276:
    {
        returnValue = F("Birkhart");
        break;
    }
    case 57277:
    {
        returnValue = F("Birkhau");
        break;
    }
    case 57278:
    {
        returnValue = F("Birkhausen");
        break;
    }
    case 57279:
    {
        returnValue = F("Birkhauser Str.");
        break;
    }
    case 57280:
    {
        returnValue = F("Birkhauweg");
        break;
    }
    case 57281:
    {
        returnValue = F("Birkhecker Ring");
        break;
    }
    case 57282:
    {
        returnValue = F("Birkhecker Str.");
        break;
    }
    case 57283:
    {
        returnValue = F("Birkheide");
        break;
    }
    case 57284:
    {
        returnValue = F("Birkhof");
        break;
    }
    case 57285:
    {
        returnValue = F("Birkhof Waldweg");
        break;
    }
    case 57286:
    {
        returnValue = F("Birkhofer Str.");
        break;
    }
    case 57287:
    {
        returnValue = F("Birkhofsteig");
        break;
    }
    case 57288:
    {
        returnValue = F("Birkhofstr.");
        break;
    }
    case 57289:
    {
        returnValue = F("Birkhofweg");
        break;
    }
    case 57290:
    {
        returnValue = F("Birkholz");
        break;
    }
    case 57291:
    {
        returnValue = F("Birkholz Dorfstr.");
        break;
    }
    case 57292:
    {
        returnValue = F("Birkholzer Allee");
        break;
    }
    case 57293:
    {
        returnValue = F("Birkholzer Chaussee");
        break;
    }
    case 57294:
    {
        returnValue = F("Birkholzer Feldstr.");
        break;
    }
    case 57295:
    {
        returnValue = F("Birkholzer Gartenstr.");
        break;
    }
    case 57296:
    {
        returnValue = F("Birkholzer Mühlenstr.");
        break;
    }
    case 57297:
    {
        returnValue = F("Birkholzer Schulstr.");
        break;
    }
    case 57298:
    {
        returnValue = F("Birkholzer Str.");
        break;
    }
    case 57299:
    {
        returnValue = F("Birkholzer Weg");
        break;
    }
    case 57300:
    {
        returnValue = F("Birkholzstr.");
        break;
    }
    case 57301:
    {
        returnValue = F("Birkholzweg");
        break;
    }
    case 57302:
    {
        returnValue = F("Birkhook");
        break;
    }
    case 57303:
    {
        returnValue = F("Birkhorst");
        break;
    }
    case 57304:
    {
        returnValue = F("Birkhorstweg");
        break;
    }
    case 57305:
    {
        returnValue = F("Birkhuhnstr.");
        break;
    }
    case 57306:
    {
        returnValue = F("Birkhuhnweg");
        break;
    }
    case 57307:
    {
        returnValue = F("Birkichstr.");
        break;
    }
    case 57308:
    {
        returnValue = F("Birkicht");
        break;
    }
    case 57309:
    {
        returnValue = F("Birkichtstr.");
        break;
    }
    case 57310:
    {
        returnValue = F("Birkig");
        break;
    }
    case 57311:
    {
        returnValue = F("Birkiger Str.");
        break;
    }
    case 57312:
    {
        returnValue = F("Birkighütte");
        break;
    }
    case 57313:
    {
        returnValue = F("Birkigstr.");
        break;
    }
    case 57314:
    {
        returnValue = F("Birkigt");
        break;
    }
    case 57315:
    {
        returnValue = F("Birkigter Höhe");
        break;
    }
    case 57316:
    {
        returnValue = F("Birkigter Str.");
        break;
    }
    case 57317:
    {
        returnValue = F("Birkigtgasse");
        break;
    }
    case 57318:
    {
        returnValue = F("Birkigtweg");
        break;
    }
    case 57319:
    {
        returnValue = F("Birkigweg");
        break;
    }
    case 57320:
    {
        returnValue = F("Birkinger Str.");
        break;
    }
    case 57321:
    {
        returnValue = F("Birkingweg");
        break;
    }
    case 57322:
    {
        returnValue = F("Birkkarstr.");
        break;
    }
    case 57323:
    {
        returnValue = F("Birkköpfel");
        break;
    }
    case 57324:
    {
        returnValue = F("Birkland");
        break;
    }
    case 57325:
    {
        returnValue = F("Birklehof");
        break;
    }
    case 57326:
    {
        returnValue = F("Birkleinsgasse");
        break;
    }
    case 57327:
    {
        returnValue = F("Birkleinweg");
        break;
    }
    case 57328:
    {
        returnValue = F("Birkleite");
        break;
    }
    case 57329:
    {
        returnValue = F("Birklenstr.");
        break;
    }
    case 57330:
    {
        returnValue = F("Birklenweg");
        break;
    }
    case 57331:
    {
        returnValue = F("Birklesbergweg");
        break;
    }
    case 57332:
    {
        returnValue = F("Birklesbrunnenweg");
        break;
    }
    case 57333:
    {
        returnValue = F("Birklesstr.");
        break;
    }
    case 57334:
    {
        returnValue = F("Birklestr.");
        break;
    }
    case 57335:
    {
        returnValue = F("Birklesweg");
        break;
    }
    case 57336:
    {
        returnValue = F("Birkleswiese");
        break;
    }
    case 57337:
    {
        returnValue = F("Birkleweg");
        break;
    }
    case 57338:
    {
        returnValue = F("Birklinger Hof");
        break;
    }
    case 57339:
    {
        returnValue = F("Birklinger Steige");
        break;
    }
    case 57340:
    {
        returnValue = F("Birklinger Str.");
        break;
    }
    case 57341:
    {
        returnValue = F("Birklinstr.");
        break;
    }
    case 57342:
    {
        returnValue = F("Birklweg");
        break;
    }
    case 57343:
    {
        returnValue = F("Birkländer Str.");
        break;
    }
    case 57344:
    {
        returnValue = F("Birklück");
        break;
    }
    case 57345:
    {
        returnValue = F("Birkmaase");
        break;
    }
    case 57346:
    {
        returnValue = F("Birkmannsweiler Str.");
        break;
    }
    case 57347:
    {
        returnValue = F("Birkmeedenweg");
        break;
    }
    case 57348:
    {
        returnValue = F("Birkmeyerstr.");
        break;
    }
    case 57349:
    {
        returnValue = F("Birkmühlstr.");
        break;
    }
    case 57350:
    {
        returnValue = F("Birknerstr.");
        break;
    }
    case 57351:
    {
        returnValue = F("Birknerweg");
        break;
    }
    case 57352:
    {
        returnValue = F("Birkrankweg");
        break;
    }
    case 57353:
    {
        returnValue = F("Birkrinnstr.");
        break;
    }
    case 57354:
    {
        returnValue = F("Birkschenweg");
        break;
    }
    case 57355:
    {
        returnValue = F("Birksiedlung");
        break;
    }
    case 57356:
    {
        returnValue = F("Birksiefen");
        break;
    }
    case 57357:
    {
        returnValue = F("Birksiefenweg");
        break;
    }
    case 57358:
    {
        returnValue = F("Birkspitz");
        break;
    }
    case 57359:
    {
        returnValue = F("Birkstockweg");
        break;
    }
    case 57360:
    {
        returnValue = F("Birkstr.");
        break;
    }
    case 57361:
    {
        returnValue = F("Birktal");
        break;
    }
    case 57362:
    {
        returnValue = F("Birktalstr.");
        break;
    }
    case 57363:
    {
        returnValue = F("Birktalweg");
        break;
    }
    case 57364:
    {
        returnValue = F("Birkunger Str.");
        break;
    }
    case 57365:
    {
        returnValue = F("Birkwaldweg");
        break;
    }
    case 57366:
    {
        returnValue = F("Birkweg");
        break;
    }
    case 57367:
    {
        returnValue = F("Birkweiler Str.");
        break;
    }
    case 57368:
    {
        returnValue = F("Birkwiesenweg");
        break;
    }
    case 57369:
    {
        returnValue = F("Birkwiesstr.");
        break;
    }
    case 57370:
    {
        returnValue = F("Birkwildweg");
        break;
    }
    case 57371:
    {
        returnValue = F("Birkwitzer Mittelweg");
        break;
    }
    case 57372:
    {
        returnValue = F("Birkwitzer Str.");
        break;
    }
    case 57373:
    {
        returnValue = F("Birkwäldele");
        break;
    }
    case 57374:
    {
        returnValue = F("Birkäcker");
        break;
    }
    case 57375:
    {
        returnValue = F("Birkäckerstr.");
        break;
    }
    case 57376:
    {
        returnValue = F("Birkäckerweg");
        break;
    }
    case 57377:
    {
        returnValue = F("Birlenbacher Hütte");
        break;
    }
    case 57378:
    {
        returnValue = F("Birlenbacher Str.");
        break;
    }
    case 57379:
    {
        returnValue = F("Birlinghovener Str.");
        break;
    }
    case 57380:
    {
        returnValue = F("Birlswiese");
        break;
    }
    case 57381:
    {
        returnValue = F("Birlweg");
        break;
    }
    case 57382:
    {
        returnValue = F("Birmecker Weg");
        break;
    }
    case 57383:
    {
        returnValue = F("Birmenitz");
        break;
    }
    case 57384:
    {
        returnValue = F("Birmenschneise");
        break;
    }
    case 57385:
    {
        returnValue = F("Birmesstr.");
        break;
    }
    case 57386:
    {
        returnValue = F("Birn");
        break;
    }
    case 57387:
    {
        returnValue = F("Birnanger");
        break;
    }
    case 57388:
    {
        returnValue = F("Birnaublick");
        break;
    }
    case 57389:
    {
        returnValue = F("Birnauer Gässele");
        break;
    }
    case 57390:
    {
        returnValue = F("Birnauer Str.");
        break;
    }
    case 57391:
    {
        returnValue = F("Birnauweg");
        break;
    }
    case 57392:
    {
        returnValue = F("Birnbach");
        break;
    }
    case 57393:
    {
        returnValue = F("Birnbacher Str.");
        break;
    }
    case 57394:
    {
        returnValue = F("Birnbacher Weg");
        break;
    }
    case 57395:
    {
        returnValue = F("Birnbachstr.");
        break;
    }
    case 57396:
    {
        returnValue = F("Birnbachweg");
        break;
    }
    case 57397:
    {
        returnValue = F("Birnbaum");
        break;
    }
    case 57398:
    {
        returnValue = F("Birnbaumackerweg");
        break;
    }
    case 57399:
    {
        returnValue = F("Birnbaumallee");
        break;
    }
    case 57400:
    {
        returnValue = F("Birnbaumbreite");
        break;
    }
    case 57401:
    {
        returnValue = F("Birnbaumer Str.");
        break;
    }
    case 57402:
    {
        returnValue = F("Birnbaumer Weg");
        break;
    }
    case 57403:
    {
        returnValue = F("Birnbaumfeld");
        break;
    }
    case 57404:
    {
        returnValue = F("Birnbaumhof");
        break;
    }
    case 57405:
    {
        returnValue = F("Birnbaumschneise");
        break;
    }
    case 57406:
    {
        returnValue = F("Birnbaumskamp");
        break;
    }
    case 57407:
    {
        returnValue = F("Birnbaumsteig");
        break;
    }
    case 57408:
    {
        returnValue = F("Birnbaumsteigweg");
        break;
    }
    case 57409:
    {
        returnValue = F("Birnbaumstr.");
        break;
    }
    case 57410:
    {
        returnValue = F("Birnbaumstück");
        break;
    }
    case 57411:
    {
        returnValue = F("Birnbaumweg");
        break;
    }
    case 57412:
    {
        returnValue = F("Birnberg");
        break;
    }
    case 57413:
    {
        returnValue = F("Birnbergstr.");
        break;
    }
    case 57414:
    {
        returnValue = F("Birnblütenweg");
        break;
    }
    case 57415:
    {
        returnValue = F("Birnbäumchenschneise");
        break;
    }
    case 57416:
    {
        returnValue = F("Birnbäumches Schneise");
        break;
    }
    case 57417:
    {
        returnValue = F("Birnbäumlesweg");
        break;
    }
    case 57418:
    {
        returnValue = F("Birndorfer Str.");
        break;
    }
    case 57419:
    {
        returnValue = F("Birnen-Anger");
        break;
    }
    case 57420:
    {
        returnValue = F("Birnen-Lehrpfad");
        break;
    }
    case 57421:
    {
        returnValue = F("Birnenallee");
        break;
    }
    case 57422:
    {
        returnValue = F("Birnenbaumweg");
        break;
    }
    case 57423:
    {
        returnValue = F("Birnenbruchstr.");
        break;
    }
    case 57424:
    {
        returnValue = F("Birnendamm");
        break;
    }
    case 57425:
    {
        returnValue = F("Birnengarten");
        break;
    }
    case 57426:
    {
        returnValue = F("Birnengasse");
        break;
    }
    case 57427:
    {
        returnValue = F("Birnenhof");
        break;
    }
    case 57428:
    {
        returnValue = F("Birnenpark");
        break;
    }
    case 57429:
    {
        returnValue = F("Birnenrondell");
        break;
    }
    case 57430:
    {
        returnValue = F("Birnenstieg");
        break;
    }
    case 57431:
    {
        returnValue = F("Birnenstr.");
        break;
    }
    case 57432:
    {
        returnValue = F("Birnenwaldstr.");
        break;
    }
    case 57433:
    {
        returnValue = F("Birnenweg");
        break;
    }
    case 57434:
    {
        returnValue = F("Birner Garten");
        break;
    }
    case 57435:
    {
        returnValue = F("Birner Leitn");
        break;
    }
    case 57436:
    {
        returnValue = F("Birnerstr.");
        break;
    }
    case 57437:
    {
        returnValue = F("Birnfelder Weg");
        break;
    }
    case 57438:
    {
        returnValue = F("Birngartenweg");
        break;
    }
    case 57439:
    {
        returnValue = F("Birngasse");
        break;
    }
    case 57440:
    {
        returnValue = F("Birngründle");
        break;
    }
    case 57441:
    {
        returnValue = F("Birngrützer Str.");
        break;
    }
    case 57442:
    {
        returnValue = F("Birnhäldeweg");
        break;
    }
    case 57443:
    {
        returnValue = F("Birnhäusles Str.");
        break;
    }
    case 57444:
    {
        returnValue = F("Birnkammerweg");
        break;
    }
    case 57445:
    {
        returnValue = F("Birnkamp");
        break;
    }
    case 57446:
    {
        returnValue = F("Birnpfad");
        break;
    }
    case 57447:
    {
        returnValue = F("Birnstengel");
        break;
    }
    case 57448:
    {
        returnValue = F("Birnstengeler Str.");
        break;
    }
    case 57449:
    {
        returnValue = F("Birnstielhohle");
        break;
    }
    case 57450:
    {
        returnValue = F("Birnstr.");
        break;
    }
    case 57451:
    {
        returnValue = F("Birnthaler Str.");
        break;
    }
    case 57452:
    {
        returnValue = F("Birnthon");
        break;
    }
    case 57453:
    {
        returnValue = F("Birnthoner Weg");
        break;
    }
    case 57454:
    {
        returnValue = F("Birntorweg");
        break;
    }
    case 57455:
    {
        returnValue = F("Birnweg");
        break;
    }
    case 57456:
    {
        returnValue = F("Birrbachstr.");
        break;
    }
    case 57457:
    {
        returnValue = F("Birrekoven");
        break;
    }
    case 57458:
    {
        returnValue = F("Birrenbachshöhe");
        break;
    }
    case 57459:
    {
        returnValue = F("Birresborner Str.");
        break;
    }
    case 57460:
    {
        returnValue = F("Birresdorfer Str.");
        break;
    }
    case 57461:
    {
        returnValue = F("Birretstr.");
        break;
    }
    case 57462:
    {
        returnValue = F("Birristoft");
        break;
    }
    case 57463:
    {
        returnValue = F("Birschelsweg");
        break;
    }
    case 57464:
    {
        returnValue = F("Birschlingweg");
        break;
    }
    case 57465:
    {
        returnValue = F("Birsfelder Weg");
        break;
    }
    case 57466:
    {
        returnValue = F("Birsnerweg");
        break;
    }
    case 57467:
    {
        returnValue = F("Birsteiner Str.");
        break;
    }
    case 57468:
    {
        returnValue = F("Birsteinstr.");
        break;
    }
    case 57469:
    {
        returnValue = F("Birtener Str.");
        break;
    }
    case 57470:
    {
        returnValue = F("Birther Kreisel");
        break;
    }
    case 57471:
    {
        returnValue = F("Birther Str.");
        break;
    }
    case 57472:
    {
        returnValue = F("Birtilostr.");
        break;
    }
    case 57473:
    {
        returnValue = F("Birtlinger Str.");
        break;
    }
    case 57474:
    {
        returnValue = F("Birtweg");
        break;
    }
    case 57475:
    {
        returnValue = F("Birxer Str.");
        break;
    }
    case 57476:
    {
        returnValue = F("Birxstr.");
        break;
    }
    case 57477:
    {
        returnValue = F("Birzel");
        break;
    }
    case 57478:
    {
        returnValue = F("Birzenhardt");
        break;
    }
    case 57479:
    {
        returnValue = F("Birzhaft");
        break;
    }
    case 57480:
    {
        returnValue = F("Bisambau");
        break;
    }
    case 57481:
    {
        returnValue = F("Bisamkiez");
        break;
    }
    case 57482:
    {
        returnValue = F("Bisamsteig");
        break;
    }
    case 57483:
    {
        returnValue = F("Bisamstr.");
        break;
    }
    case 57484:
    {
        returnValue = F("Bisamweg");
        break;
    }
    case 57485:
    {
        returnValue = F("Bisch.-v.Ketteler-Platz");
        break;
    }
    case 57486:
    {
        returnValue = F("Bischbachstr.");
        break;
    }
    case 57487:
    {
        returnValue = F("Bischberger Hauptstr.");
        break;
    }
    case 57488:
    {
        returnValue = F("Bischbergstr.");
        break;
    }
    case 57489:
    {
        returnValue = F("Bischbergweg");
        break;
    }
    case 57490:
    {
        returnValue = F("Bischdorfer Str.");
        break;
    }
    case 57491:
    {
        returnValue = F("Bischheimer Str.");
        break;
    }
    case 57492:
    {
        returnValue = F("Bischheimer Weg");
        break;
    }
    case 57493:
    {
        returnValue = F("Bischhäuser Aue");
        break;
    }
    case 57494:
    {
        returnValue = F("Bischhäuser Str.");
        break;
    }
    case 57495:
    {
        returnValue = F("Bischlags");
        break;
    }
    case 57496:
    {
        returnValue = F("Bischlingstr.");
        break;
    }
    case 57497:
    {
        returnValue = F("Bischmannshausen");
        break;
    }
    case 57498:
    {
        returnValue = F("Bischof Theoderich Weg");
        break;
    }
    case 57499:
    {
        returnValue = F("Bischof-Albert-Str.");
        break;
    }
    case 57500:
    {
        returnValue = F("Bischof-Albert-Weg");
        break;
    }
    case 57501:
    {
        returnValue = F("Bischof-Altmann-Str.");
        break;
    }
    case 57502:
    {
        returnValue = F("Bischof-Altmann-Weg");
        break;
    }
    case 57503:
    {
        returnValue = F("Bischof-Anno-Platz");
        break;
    }
    case 57504:
    {
        returnValue = F("Bischof-Anno-Str.");
        break;
    }
    case 57505:
    {
        returnValue = F("Bischof-Anzer-Str.");
        break;
    }
    case 57506:
    {
        returnValue = F("Bischof-Arn-Platz");
        break;
    }
    case 57507:
    {
        returnValue = F("Bischof-Arno-Str.");
        break;
    }
    case 57508:
    {
        returnValue = F("Bischof-Arnoldy-Str.");
        break;
    }
    case 57509:
    {
        returnValue = F("Bischof-Averkamp-Str.");
        break;
    }
    case 57510:
    {
        returnValue = F("Bischof-Baldewin-Str.");
        break;
    }
    case 57511:
    {
        returnValue = F("Bischof-Balduin-Str.");
        break;
    }
    case 57512:
    {
        returnValue = F("Bischof-Baturich-Ring");
        break;
    }
    case 57513:
    {
        returnValue = F("Bischof-Beck-Str.");
        break;
    }
    case 57514:
    {
        returnValue = F("Bischof-Benno-Ring");
        break;
    }
    case 57515:
    {
        returnValue = F("Bischof-Benno-Str.");
        break;
    }
    case 57516:
    {
        returnValue = F("Bischof-Bernhard-Str.");
        break;
    }
    case 57517:
    {
        returnValue = F("Bischof-Bertold-Str.");
        break;
    }
    case 57518:
    {
        returnValue = F("Bischof-Bitter-Str.");
        break;
    }
    case 57519:
    {
        returnValue = F("Bischof-Blum-Platz");
        break;
    }
    case 57520:
    {
        returnValue = F("Bischof-Blum-Str.");
        break;
    }
    case 57521:
    {
        returnValue = F("Bischof-Bolte-Str.");
        break;
    }
    case 57522:
    {
        returnValue = F("Bischof-Bornewasser-Str.");
        break;
    }
    case 57523:
    {
        returnValue = F("Bischof-Bruno-Str.");
        break;
    }
    case 57524:
    {
        returnValue = F("Bischof-Bruns-Str.");
        break;
    }
    case 57525:
    {
        returnValue = F("Bischof-Brück-Str.");
        break;
    }
    case 57526:
    {
        returnValue = F("Bischof-Buchberger-Platz");
        break;
    }
    case 57527:
    {
        returnValue = F("Bischof-Buchberger-Str.");
        break;
    }
    case 57528:
    {
        returnValue = F("Bischof-Buggo-Str.");
        break;
    }
    case 57529:
    {
        returnValue = F("Bischof-Diederich-Platz");
        break;
    }
    case 57530:
    {
        returnValue = F("Bischof-Dieter-Str.");
        break;
    }
    case 57531:
    {
        returnValue = F("Bischof-Dietrich-Str.");
        break;
    }
    case 57532:
    {
        returnValue = F("Bischof-Dietz-Str.");
        break;
    }
    case 57533:
    {
        returnValue = F("Bischof-Dirichs-Str.");
        break;
    }
    case 57534:
    {
        returnValue = F("Bischof-Dr.-Rackl-Str.");
        break;
    }
    case 57535:
    {
        returnValue = F("Bischof-Eder-Str.");
        break;
    }
    case 57536:
    {
        returnValue = F("Bischof-Egilbert-Weg");
        break;
    }
    case 57537:
    {
        returnValue = F("Bischof-Ehrenfried-Str.");
        break;
    }
    case 57538:
    {
        returnValue = F("Bischof-Emanuel-Ring");
        break;
    }
    case 57539:
    {
        returnValue = F("Bischof-Emanuel-Str.");
        break;
    }
    case 57540:
    {
        returnValue = F("Bischof-Endert-Str.");
        break;
    }
    case 57541:
    {
        returnValue = F("Bischof-Engilmar-Str.");
        break;
    }
    case 57542:
    {
        returnValue = F("Bischof-Ferdinand-Dirichs-Str.");
        break;
    }
    case 57543:
    {
        returnValue = F("Bischof-Ferdinand-Str.");
        break;
    }
    case 57544:
    {
        returnValue = F("Bischof-Ferdinand-Weg");
        break;
    }
    case 57545:
    {
        returnValue = F("Bischof-Firmian-Str.");
        break;
    }
    case 57546:
    {
        returnValue = F("Bischof-Fischer-Str.");
        break;
    }
    case 57547:
    {
        returnValue = F("Bischof-Fleischer-Str.");
        break;
    }
    case 57548:
    {
        returnValue = F("Bischof-Freundorfer-Str.");
        break;
    }
    case 57549:
    {
        returnValue = F("Bischof-Först-Ring");
        break;
    }
    case 57550:
    {
        returnValue = F("Bischof-Gebhard-Str.");
        break;
    }
    case 57551:
    {
        returnValue = F("Bischof-Geiger-Str.");
        break;
    }
    case 57552:
    {
        returnValue = F("Bischof-Gerhard-Str.");
        break;
    }
    case 57553:
    {
        returnValue = F("Bischof-Goebl-Str.");
        break;
    }
    case 57554:
    {
        returnValue = F("Bischof-Gottau-Weg");
        break;
    }
    case 57555:
    {
        returnValue = F("Bischof-Gottfried-Str.");
        break;
    }
    case 57556:
    {
        returnValue = F("Bischof-Gotthardt-Str.");
        break;
    }
    case 57557:
    {
        returnValue = F("Bischof-Gundekar-Str.");
        break;
    }
    case 57558:
    {
        returnValue = F("Bischof-Hartl-Str.");
        break;
    }
    case 57559:
    {
        returnValue = F("Bischof-Hartmann-Ring");
        break;
    }
    case 57560:
    {
        returnValue = F("Bischof-Hartmann-Str.");
        break;
    }
    case 57561:
    {
        returnValue = F("Bischof-Hartwich-Str.");
        break;
    }
    case 57562:
    {
        returnValue = F("Bischof-Heckel-Str.");
        break;
    }
    case 57563:
    {
        returnValue = F("Bischof-Hefele-Weg");
        break;
    }
    case 57564:
    {
        returnValue = F("Bischof-Heinrich-Str.");
        break;
    }
    case 57565:
    {
        returnValue = F("Bischof-Heinrich-Weg");
        break;
    }
    case 57566:
    {
        returnValue = F("Bischof-Helding-Str.");
        break;
    }
    case 57567:
    {
        returnValue = F("Bischof-Hermann-Kunst-Platz");
        break;
    }
    case 57568:
    {
        returnValue = F("Bischof-Hermann-Str.");
        break;
    }
    case 57569:
    {
        returnValue = F("Bischof-Hierl-Str.");
        break;
    }
    case 57570:
    {
        returnValue = F("Bischof-Hitto-Str.");
        break;
    }
    case 57571:
    {
        returnValue = F("Bischof-Hofmann-Str.");
        break;
    }
    case 57572:
    {
        returnValue = F("Bischof-Hugo-Str.");
        break;
    }
    case 57573:
    {
        returnValue = F("Bischof-Häring-Str.");
        break;
    }
    case 57574:
    {
        returnValue = F("Bischof-Höhne-Str.");
        break;
    }
    case 57575:
    {
        returnValue = F("Bischof-Janssen-Str.");
        break;
    }
    case 57576:
    {
        returnValue = F("Bischof-Jobst-Str.");
        break;
    }
    case 57577:
    {
        returnValue = F("Bischof-Johann-Str.");
        break;
    }
    case 57578:
    {
        returnValue = F("Bischof-Johannes-Str.");
        break;
    }
    case 57579:
    {
        returnValue = F("Bischof-Josef-Ernst-Str.");
        break;
    }
    case 57580:
    {
        returnValue = F("Bischof-Josef-Weg");
        break;
    }
    case 57581:
    {
        returnValue = F("Bischof-Kaiser-Str.");
        break;
    }
    case 57582:
    {
        returnValue = F("Bischof-Kaller-Str.");
        break;
    }
    case 57583:
    {
        returnValue = F("Bischof-Keppler-Str.");
        break;
    }
    case 57584:
    {
        returnValue = F("Bischof-Ketteler-Hof");
        break;
    }
    case 57585:
    {
        returnValue = F("Bischof-Ketteler-Platz");
        break;
    }
    case 57586:
    {
        returnValue = F("Bischof-Ketteler-Ring");
        break;
    }
    case 57587:
    {
        returnValue = F("Bischof-Ketteler-Str.");
        break;
    }
    case 57588:
    {
        returnValue = F("Bischof-Ketteler-Weg");
        break;
    }
    case 57589:
    {
        returnValue = F("Bischof-Kieckbusch-Str.");
        break;
    }
    case 57590:
    {
        returnValue = F("Bischof-Kilian-Platz");
        break;
    }
    case 57591:
    {
        returnValue = F("Bischof-Kindermann-Str.");
        break;
    }
    case 57592:
    {
        returnValue = F("Bischof-Kinold-Str.");
        break;
    }
    case 57593:
    {
        returnValue = F("Bischof-Konrad-Ring");
        break;
    }
    case 57594:
    {
        returnValue = F("Bischof-Konrad-Str.");
        break;
    }
    case 57595:
    {
        returnValue = F("Bischof-Konrad-Weg");
        break;
    }
    case 57596:
    {
        returnValue = F("Bischof-Krautbauer-Str.");
        break;
    }
    case 57597:
    {
        returnValue = F("Bischof-Kühner-Str.");
        break;
    }
    case 57598:
    {
        returnValue = F("Bischof-Landersdorfer-Str.");
        break;
    }
    case 57599:
    {
        returnValue = F("Bischof-Leiprecht-Str.");
        break;
    }
    case 57600:
    {
        returnValue = F("Bischof-Leiprecht-Weg");
        break;
    }
    case 57601:
    {
        returnValue = F("Bischof-Lipp-Str.");
        break;
    }
    case 57602:
    {
        returnValue = F("Bischof-Ludolf-Müller-Weg");
        break;
    }
    case 57603:
    {
        returnValue = F("Bischof-Ludolf-Weg");
        break;
    }
    case 57604:
    {
        returnValue = F("Bischof-Ludwig-Str.");
        break;
    }
    case 57605:
    {
        returnValue = F("Bischof-Löbmann-Weg");
        break;
    }
    case 57606:
    {
        returnValue = F("Bischof-Lüers-Str.");
        break;
    }
    case 57607:
    {
        returnValue = F("Bischof-Manfred-Müller-Str.");
        break;
    }
    case 57608:
    {
        returnValue = F("Bischof-Meiser-Str.");
        break;
    }
    case 57609:
    {
        returnValue = F("Bischof-Moser-Str.");
        break;
    }
    case 57610:
    {
        returnValue = F("Bischof-Müller-Str.");
        break;
    }
    case 57611:
    {
        returnValue = F("Bischof-Nausea-Platz");
        break;
    }
    case 57612:
    {
        returnValue = F("Bischof-Nettekoven-Str.");
        break;
    }
    case 57613:
    {
        returnValue = F("Bischof-Neuhäusler-Str.");
        break;
    }
    case 57614:
    {
        returnValue = F("Bischof-Neuhäusler-Weg");
        break;
    }
    case 57615:
    {
        returnValue = F("Bischof-Otto-Str.");
        break;
    }
    case 57616:
    {
        returnValue = F("Bischof-Otto-Weg");
        break;
    }
    case 57617:
    {
        returnValue = F("Bischof-Peters-Str.");
        break;
    }
    case 57618:
    {
        returnValue = F("Bischof-Pflaum-Str.");
        break;
    }
    case 57619:
    {
        returnValue = F("Bischof-Pooten-Str.");
        break;
    }
    case 57620:
    {
        returnValue = F("Bischof-Reissmann-Platz");
        break;
    }
    case 57621:
    {
        returnValue = F("Bischof-Riegg-Str.");
        break;
    }
    case 57622:
    {
        returnValue = F("Bischof-Rosner-Platz");
        break;
    }
    case 57623:
    {
        returnValue = F("Bischof-Roß-Str.");
        break;
    }
    case 57624:
    {
        returnValue = F("Bischof-Rudolf-Graber-Str.");
        break;
    }
    case 57625:
    {
        returnValue = F("Bischof-Rudolf-Str.");
        break;
    }
    case 57626:
    {
        returnValue = F("Bischof-Rupertus-Ring");
        break;
    }
    case 57627:
    {
        returnValue = F("Bischof-Rüth-Str.");
        break;
    }
    case 57628:
    {
        returnValue = F("Bischof-Sailer-Str.");
        break;
    }
    case 57629:
    {
        returnValue = F("Bischof-Schmidt-Str.");
        break;
    }
    case 57630:
    {
        returnValue = F("Bischof-Schmitt-Str.");
        break;
    }
    case 57631:
    {
        returnValue = F("Bischof-Schraml-Str.");
        break;
    }
    case 57632:
    {
        returnValue = F("Bischof-Senestrey-Str.");
        break;
    }
    case 57633:
    {
        returnValue = F("Bischof-Senger-Str.");
        break;
    }
    case 57634:
    {
        returnValue = F("Bischof-Simpert-Str.");
        break;
    }
    case 57635:
    {
        returnValue = F("Bischof-Sproll-Str.");
        break;
    }
    case 57636:
    {
        returnValue = F("Bischof-Sproll-Weg");
        break;
    }
    case 57637:
    {
        returnValue = F("Bischof-Stang-Str.");
        break;
    }
    case 57638:
    {
        returnValue = F("Bischof-Stradmann-Str.");
        break;
    }
    case 57639:
    {
        returnValue = F("Bischof-Streit-Str.");
        break;
    }
    case 57640:
    {
        returnValue = F("Bischof-Stumpf-Weg");
        break;
    }
    case 57641:
    {
        returnValue = F("Bischof-Tenhumberg-Str.");
        break;
    }
    case 57642:
    {
        returnValue = F("Bischof-Teutsch-Weg");
        break;
    }
    case 57643:
    {
        returnValue = F("Bischof-Trennbach-Ring");
        break;
    }
    case 57644:
    {
        returnValue = F("Bischof-Tuto-Str.");
        break;
    }
    case 57645:
    {
        returnValue = F("Bischof-Ulrich-Str.");
        break;
    }
    case 57646:
    {
        returnValue = F("Bischof-Ulrich-Weg");
        break;
    }
    case 57647:
    {
        returnValue = F("Bischof-Vicelin-Damm");
        break;
    }
    case 57648:
    {
        returnValue = F("Bischof-Vieter-Str.");
        break;
    }
    case 57649:
    {
        returnValue = F("Bischof-Volkmar-Weg");
        break;
    }
    case 57650:
    {
        returnValue = F("Bischof-Von-Dinkel-Str.");
        break;
    }
    case 57651:
    {
        returnValue = F("Bischof-Wagenhauber-Str.");
        break;
    }
    case 57652:
    {
        returnValue = F("Bischof-Walo-Str.");
        break;
    }
    case 57653:
    {
        returnValue = F("Bischof-Weber-Str.");
        break;
    }
    case 57654:
    {
        returnValue = F("Bischof-Weckert-Str.");
        break;
    }
    case 57655:
    {
        returnValue = F("Bischof-Wedekin-Str.");
        break;
    }
    case 57656:
    {
        returnValue = F("Bischof-Weg");
        break;
    }
    case 57657:
    {
        returnValue = F("Bischof-Wehr-Str.");
        break;
    }
    case 57658:
    {
        returnValue = F("Bischof-Weig-Str.");
        break;
    }
    case 57659:
    {
        returnValue = F("Bischof-Weigl-Str.");
        break;
    }
    case 57660:
    {
        returnValue = F("Bischof-Weis-Str.");
        break;
    }
    case 57661:
    {
        returnValue = F("Bischof-Wenzeslaus-Str.");
        break;
    }
    case 57662:
    {
        returnValue = F("Bischof-Wichfried-Weg");
        break;
    }
    case 57663:
    {
        returnValue = F("Bischof-Wichmann-Str.");
        break;
    }
    case 57664:
    {
        returnValue = F("Bischof-Wikterp-Ring");
        break;
    }
    case 57665:
    {
        returnValue = F("Bischof-Wikterp-Str.");
        break;
    }
    case 57666:
    {
        returnValue = F("Bischof-Wilhelm-Kieckbusch-Gang");
        break;
    }
    case 57667:
    {
        returnValue = F("Bischof-Wilhelm-Str.");
        break;
    }
    case 57668:
    {
        returnValue = F("Bischof-Wittler-Str.");
        break;
    }
    case 57669:
    {
        returnValue = F("Bischof-Wittmann-Str.");
        break;
    }
    case 57670:
    {
        returnValue = F("Bischof-Wittmann-Weg");
        break;
    }
    case 57671:
    {
        returnValue = F("Bischof-Wolfgang-Str.");
        break;
    }
    case 57672:
    {
        returnValue = F("Bischof-Wolfger-Str.");
        break;
    }
    case 57673:
    {
        returnValue = F("Bischof-Wolfhart-von-Roth-Str.");
        break;
    }
    case 57674:
    {
        returnValue = F("Bischof-Wurm-Str.");
        break;
    }
    case 57675:
    {
        returnValue = F("Bischof-Wurm-Weg");
        break;
    }
    case 57676:
    {
        returnValue = F("Bischof-Zeiler-Weg");
        break;
    }
    case 57677:
    {
        returnValue = F("Bischof-Zeller-Str.");
        break;
    }
    case 57678:
    {
        returnValue = F("Bischof-Zottmann-Str.");
        break;
    }
    case 57679:
    {
        returnValue = F("Bischof-van-Aaken-Str.");
        break;
    }
    case 57680:
    {
        returnValue = F("Bischof-von-Dinkel-Str.");
        break;
    }
    case 57681:
    {
        returnValue = F("Bischof-von-Henle-Str.");
        break;
    }
    case 57682:
    {
        returnValue = F("Bischof-von-Keppler-Str.");
        break;
    }
    case 57683:
    {
        returnValue = F("Bischof-von-Ketteler-Str.");
        break;
    }
    case 57684:
    {
        returnValue = F("Bischof-von-Lingg-Str.");
        break;
    }
    case 57685:
    {
        returnValue = F("Bischof-von-Linsenmann-Str.");
        break;
    }
    case 57686:
    {
        returnValue = F("Bischof-von-Lipp-Str.");
        break;
    }
    case 57687:
    {
        returnValue = F("Bischof-von-Rammung-Str.");
        break;
    }
    case 57688:
    {
        returnValue = F("Bischof-von-Reineck-Str.");
        break;
    }
    case 57689:
    {
        returnValue = F("Bischof-von-Senestrey-Str.");
        break;
    }
    case 57690:
    {
        returnValue = F("Bischof-von-Stadion-Str.");
        break;
    }
    case 57691:
    {
        returnValue = F("Bischof-von-Weis-Str.");
        break;
    }
    case 57692:
    {
        returnValue = F("Bischofer Deich");
        break;
    }
    case 57693:
    {
        returnValue = F("Bischofer Weg");
        break;
    }
    case 57694:
    {
        returnValue = F("Bischoffer Str.");
        break;
    }
    case 57695:
    {
        returnValue = F("Bischofferöder Hauptstr.");
        break;
    }
    case 57696:
    {
        returnValue = F("Bischofferöder Str.");
        break;
    }
    case 57697:
    {
        returnValue = F("Bischoffsgarten");
        break;
    }
    case 57698:
    {
        returnValue = F("Bischoffstr.");
        break;
    }
    case 57699:
    {
        returnValue = F("Bischoffsweg");
        break;
    }
    case 57700:
    {
        returnValue = F("Bischofgasse");
        break;
    }
    case 57701:
    {
        returnValue = F("Bischoflinie");
        break;
    }
    case 57702:
    {
        returnValue = F("Bischofsberg");
        break;
    }
    case 57703:
    {
        returnValue = F("Bischofsberger Weg");
        break;
    }
    case 57704:
    {
        returnValue = F("Bischofsbergweg");
        break;
    }
    case 57705:
    {
        returnValue = F("Bischofsbrunnen");
        break;
    }
    case 57706:
    {
        returnValue = F("Bischofsbrunnenweg");
        break;
    }
    case 57707:
    {
        returnValue = F("Bischofsburger Str.");
        break;
    }
    case 57708:
    {
        returnValue = F("Bischofsdhroner Str.");
        break;
    }
    case 57709:
    {
        returnValue = F("Bischofsdorf");
        break;
    }
    case 57710:
    {
        returnValue = F("Bischofsgasse");
        break;
    }
    case 57711:
    {
        returnValue = F("Bischofsgruft");
        break;
    }
    case 57712:
    {
        returnValue = F("Bischofsgrund");
        break;
    }
    case 57713:
    {
        returnValue = F("Bischofsgrüner Str.");
        break;
    }
    case 57714:
    {
        returnValue = F("Bischofshagener Str.");
        break;
    }
    case 57715:
    {
        returnValue = F("Bischofsheimer Grenzweg");
        break;
    }
    case 57716:
    {
        returnValue = F("Bischofsheimer Str.");
        break;
    }
    case 57717:
    {
        returnValue = F("Bischofsheimer Weg");
        break;
    }
    case 57718:
    {
        returnValue = F("Bischofshof");
        break;
    }
    case 57719:
    {
        returnValue = F("Bischofshofener Str.");
        break;
    }
    case 57720:
    {
        returnValue = F("Bischofshofener Weg");
        break;
    }
    case 57721:
    {
        returnValue = F("Bischofshöfe");
        break;
    }
    case 57722:
    {
        returnValue = F("Bischofskamp");
        break;
    }
    case 57723:
    {
        returnValue = F("Bischofsleite");
        break;
    }
    case 57724:
    {
        returnValue = F("Bischofsmaiser Str.");
        break;
    }
    case 57725:
    {
        returnValue = F("Bischofsmühlbrücke");
        break;
    }
    case 57726:
    {
        returnValue = F("Bischofsmühle");
        break;
    }
    case 57727:
    {
        returnValue = F("Bischofsplatz");
        break;
    }
    case 57728:
    {
        returnValue = F("Bischofsreuter Str.");
        break;
    }
    case 57729:
    {
        returnValue = F("Bischofsreuth");
        break;
    }
    case 57730:
    {
        returnValue = F("Bischofsrotweg");
        break;
    }
    case 57731:
    {
        returnValue = F("Bischofsstr.");
        break;
    }
    case 57732:
    {
        returnValue = F("Bischofstein");
        break;
    }
    case 57733:
    {
        returnValue = F("Bischofsthal");
        break;
    }
    case 57734:
    {
        returnValue = F("Bischofstr.");
        break;
    }
    case 57735:
    {
        returnValue = F("Bischofstwiete");
        break;
    }
    case 57736:
    {
        returnValue = F("Bischofsweg");
        break;
    }
    case 57737:
    {
        returnValue = F("Bischofsweiherstr.");
        break;
    }
    case 57738:
    {
        returnValue = F("Bischofswerdaer Str.");
        break;
    }
    case 57739:
    {
        returnValue = F("Bischofswerder Weg");
        break;
    }
    case 57740:
    {
        returnValue = F("Bischofswiesenweg");
        break;
    }
    case 57741:
    {
        returnValue = F("Bischofszeller Str.");
        break;
    }
    case 57742:
    {
        returnValue = F("Bischofsäcker");
        break;
    }
    case 57743:
    {
        returnValue = F("Bischofteinitzer Str.");
        break;
    }
    case 57744:
    {
        returnValue = F("Bischofteinitzer Weg");
        break;
    }
    case 57745:
    {
        returnValue = F("Bischofweg");
        break;
    }
    case 57746:
    {
        returnValue = F("Bischweierer Str.");
        break;
    }
    case 57747:
    {
        returnValue = F("Bischweierer Weg");
        break;
    }
    case 57748:
    {
        returnValue = F("Bischweilerstr.");
        break;
    }
    case 57749:
    {
        returnValue = F("Bischwiese");
        break;
    }
    case 57750:
    {
        returnValue = F("Bischwind");
        break;
    }
    case 57751:
    {
        returnValue = F("Bischwindenstr.");
        break;
    }
    case 57752:
    {
        returnValue = F("Bischwinder Str.");
        break;
    }
    case 57753:
    {
        returnValue = F("Bischwinder Weg");
        break;
    }
    case 57754:
    {
        returnValue = F("Bischöflich-Geistlicher-Rat-Josef-Zinnbauer-Str.");
        break;
    }
    case 57755:
    {
        returnValue = F("Bisdamitz");
        break;
    }
    case 57756:
    {
        returnValue = F("Bisdorf");
        break;
    }
    case 57757:
    {
        returnValue = F("Bisdorfer Chaussee");
        break;
    }
    case 57758:
    {
        returnValue = F("Bisdorfer Dorfstr.");
        break;
    }
    case 57759:
    {
        returnValue = F("Bisdorfer Str.");
        break;
    }
    case 57760:
    {
        returnValue = F("Bisdorfer Weg");
        break;
    }
    case 57761:
    {
        returnValue = F("Biselter Weg");
        break;
    }
    case 57762:
    {
        returnValue = F("Bisemleweg");
        break;
    }
    case 57763:
    {
        returnValue = F("Bisholderweg");
        break;
    }
    case 57764:
    {
        returnValue = F("Bishäuser Weg");
        break;
    }
    case 57765:
    {
        returnValue = F("Bisinger Str.");
        break;
    }
    case 57766:
    {
        returnValue = F("Bisinger Wasen");
        break;
    }
    case 57767:
    {
        returnValue = F("Biskamp");
        break;
    }
    case 57768:
    {
        returnValue = F("Biskayastr.");
        break;
    }
    case 57769:
    {
        returnValue = F("Biskirchener Str.");
        break;
    }
    case 57770:
    {
        returnValue = F("Bislicher Insel");
        break;
    }
    case 57771:
    {
        returnValue = F("Bislicher Str.");
        break;
    }
    case 57772:
    {
        returnValue = F("Bislicher Wald");
        break;
    }
    case 57773:
    {
        returnValue = F("Bisloher Hauptstr.");
        break;
    }
    case 57774:
    {
        returnValue = F("Bisloher Weg");
        break;
    }
    case 57775:
    {
        returnValue = F("Bislohweg");
        break;
    }
    case 57776:
    {
        returnValue = F("Bismarck-Brücke");
        break;
    }
    case 57777:
    {
        returnValue = F("Bismarck-Ring");
        break;
    }
    case 57778:
    {
        returnValue = F("Bismarckallee");
        break;
    }
    case 57779:
    {
        returnValue = F("Bismarckhain");
        break;
    }
    case 57780:
    {
        returnValue = F("Bismarckhöhe");
        break;
    }
    case 57781:
    {
        returnValue = F("Bismarckhöhenweg");
        break;
    }
    case 57782:
    {
        returnValue = F("Bismarckinsel");
        break;
    }
    case 57783:
    {
        returnValue = F("Bismarckpark");
        break;
    }
    case 57784:
    {
        returnValue = F("Bismarckpassage");
        break;
    }
    case 57785:
    {
        returnValue = F("Bismarckplatz");
        break;
    }
    case 57786:
    {
        returnValue = F("Bismarckpromenade");
        break;
    }
    case 57787:
    {
        returnValue = F("Bismarckring");
        break;
    }
    case 57788:
    {
        returnValue = F("Bismarckschacht");
        break;
    }
    case 57789:
    {
        returnValue = F("Bismarcksiedlung");
        break;
    }
    case 57790:
    {
        returnValue = F("Bismarcksteig");
        break;
    }
    case 57791:
    {
        returnValue = F("Bismarckstr.");
        break;
    }
    case 57792:
    {
        returnValue = F("Bismarcksäulenweg");
        break;
    }
    case 57793:
    {
        returnValue = F("Bismarckturmstr.");
        break;
    }
    case 57794:
    {
        returnValue = F("Bismarckturmweg");
        break;
    }
    case 57795:
    {
        returnValue = F("Bismarckwall");
        break;
    }
    case 57796:
    {
        returnValue = F("Bismarckweg");
        break;
    }
    case 57797:
    {
        returnValue = F("Bismarker Str.");
        break;
    }
    case 57798:
    {
        returnValue = F("Bismarkfichtenweg");
        break;
    }
    case 57799:
    {
        returnValue = F("Bismarkhöhe");
        break;
    }
    case 57800:
    {
        returnValue = F("Bismarkstieg");
        break;
    }
    case 57801:
    {
        returnValue = F("Bismarkstr.");
        break;
    }
    case 57802:
    {
        returnValue = F("Bisonklint");
        break;
    }
    case 57803:
    {
        returnValue = F("Bisperoder Str.");
        break;
    }
    case 57804:
    {
        returnValue = F("Bispingallee");
        break;
    }
    case 57805:
    {
        returnValue = F("Bispinger Str.");
        break;
    }
    case 57806:
    {
        returnValue = F("Bispinger Weg");
        break;
    }
    case 57807:
    {
        returnValue = F("Bispingheide");
        break;
    }
    case 57808:
    {
        returnValue = F("Bispingweg");
        break;
    }
    case 57809:
    {
        returnValue = F("Bispinkweg");
        break;
    }
    case 57810:
    {
        returnValue = F("Bisseer Weg");
        break;
    }
    case 57811:
    {
        returnValue = F("Bisseler Str.");
        break;
    }
    case 57812:
    {
        returnValue = F("Bisselhofstr.");
        break;
    }
    case 57813:
    {
        returnValue = F("Bisselsweg");
        break;
    }
    case 57814:
    {
        returnValue = F("Bisselweg");
        break;
    }
    case 57815:
    {
        returnValue = F("Bissen");
        break;
    }
    case 57816:
    {
        returnValue = F("Bissenberger Str.");
        break;
    }
    case 57817:
    {
        returnValue = F("Bissenberger Weg");
        break;
    }
    case 57818:
    {
        returnValue = F("Bissenbrook");
        break;
    }
    case 57819:
    {
        returnValue = F("Bissendorfer Str.");
        break;
    }
    case 57820:
    {
        returnValue = F("Bissendorfer Weg");
        break;
    }
    case 57821:
    {
        returnValue = F("Bissendorffstr.");
        break;
    }
    case 57822:
    {
        returnValue = F("Bissener Str.");
        break;
    }
    case 57823:
    {
        returnValue = F("Bissener Weg");
        break;
    }
    case 57824:
    {
        returnValue = F("Bissenhausen");
        break;
    }
    case 57825:
    {
        returnValue = F("Bissenkamp");
        break;
    }
    case 57826:
    {
        returnValue = F("Bissenmoor");
        break;
    }
    case 57827:
    {
        returnValue = F("Bissenmoortwiete");
        break;
    }
    case 57828:
    {
        returnValue = F("Bissenmoorweg");
        break;
    }
    case 57829:
    {
        returnValue = F("Bisser-Weg");
        break;
    }
    case 57830:
    {
        returnValue = F("Bissersheimer Str.");
        break;
    }
    case 57831:
    {
        returnValue = F("Bisseser Str.");
        break;
    }
    case 57832:
    {
        returnValue = F("Bissigweg");
        break;
    }
    case 57833:
    {
        returnValue = F("Bissinger Str.");
        break;
    }
    case 57834:
    {
        returnValue = F("Bissingerstr.");
        break;
    }
    case 57835:
    {
        returnValue = F("Bissingheimer Str.");
        break;
    }
    case 57836:
    {
        returnValue = F("Bistard");
        break;
    }
    case 57837:
    {
        returnValue = F("Bistede");
        break;
    }
    case 57838:
    {
        returnValue = F("Bistener Str.");
        break;
    }
    case 57839:
    {
        returnValue = F("Bistenseer Weg");
        break;
    }
    case 57840:
    {
        returnValue = F("Bistenwaldstr.");
        break;
    }
    case 57841:
    {
        returnValue = F("Bistenweg");
        break;
    }
    case 57842:
    {
        returnValue = F("Bisterstr.");
        break;
    }
    case 57843:
    {
        returnValue = F("Bistofter Str.");
        break;
    }
    case 57844:
    {
        returnValue = F("Bistorfer Str.");
        break;
    }
    case 57845:
    {
        returnValue = F("Bistritzer Gasse");
        break;
    }
    case 57846:
    {
        returnValue = F("Bistritzer Str.");
        break;
    }
    case 57847:
    {
        returnValue = F("Bistruper Str.");
        break;
    }
    case 57848:
    {
        returnValue = F("Biststr.");
        break;
    }
    case 57849:
    {
        returnValue = F("Bisttalstr.");
        break;
    }
    case 57850:
    {
        returnValue = F("Bistumerweg");
        break;
    }
    case 57851:
    {
        returnValue = F("Bitburger Str.");
        break;
    }
    case 57852:
    {
        returnValue = F("Bitscher Str.");
        break;
    }
    case 57853:
    {
        returnValue = F("Bitscher Weg");
        break;
    }
    case 57854:
    {
        returnValue = F("Bitschstr.");
        break;
    }
    case 57855:
    {
        returnValue = F("Bittelbronner Steige");
        break;
    }
    case 57856:
    {
        returnValue = F("Bittelbronner Str.");
        break;
    }
    case 57857:
    {
        returnValue = F("Bittelbrunnen");
        break;
    }
    case 57858:
    {
        returnValue = F("Bittelbrunnenstr.");
        break;
    }
    case 57859:
    {
        returnValue = F("Bittelbrunner Sträßle Süd");
        break;
    }
    case 57860:
    {
        returnValue = F("Bittelbrunner Weg");
        break;
    }
    case 57861:
    {
        returnValue = F("Bittelfeld");
        break;
    }
    case 57862:
    {
        returnValue = F("Bittelschießer Str.");
        break;
    }
    case 57863:
    {
        returnValue = F("Bittelwiesenweg");
        break;
    }
    case 57864:
    {
        returnValue = F("Bittenbach");
        break;
    }
    case 57865:
    {
        returnValue = F("Bittenbrunner Weg");
        break;
    }
    case 57866:
    {
        returnValue = F("Bittenfelder Str.");
        break;
    }
    case 57867:
    {
        returnValue = F("Bittenfelder Weg");
        break;
    }
    case 57868:
    {
        returnValue = F("Bittenfelderweg");
        break;
    }
    case 57869:
    {
        returnValue = F("Bittengasse");
        break;
    }
    case 57870:
    {
        returnValue = F("Bittenwiesenweg");
        break;
    }
    case 57871:
    {
        returnValue = F("Bitterbachschlucht");
        break;
    }
    case 57872:
    {
        returnValue = F("Bitterburg");
        break;
    }
    case 57873:
    {
        returnValue = F("Bitterer Weg");
        break;
    }
    case 57874:
    {
        returnValue = F("Bitterfeld");
        break;
    }
    case 57875:
    {
        returnValue = F("Bitterfelder Bogen");
        break;
    }
    case 57876:
    {
        returnValue = F("Bitterfelder Chaussee");
        break;
    }
    case 57877:
    {
        returnValue = F("Bitterfelder Landstr.");
        break;
    }
    case 57878:
    {
        returnValue = F("Bitterfelder Str.");
        break;
    }
    case 57879:
    {
        returnValue = F("Bitterfeldstr.");
        break;
    }
    case 57880:
    {
        returnValue = F("Bittersbachweg");
        break;
    }
    case 57881:
    {
        returnValue = F("Bittersberg");
        break;
    }
    case 57882:
    {
        returnValue = F("Bittersbrunnen-Fußweg");
        break;
    }
    case 57883:
    {
        returnValue = F("Bittershofweg");
        break;
    }
    case 57884:
    {
        returnValue = F("Bittersweg");
        break;
    }
    case 57885:
    {
        returnValue = F("Bittesberg");
        break;
    }
    case 57886:
    {
        returnValue = F("Bittgang");
        break;
    }
    case 57887:
    {
        returnValue = F("Bittgang KLJB Mühlhausen");
        break;
    }
    case 57888:
    {
        returnValue = F("Bittgangpfad");
        break;
    }
    case 57889:
    {
        returnValue = F("Bitthäuser");
        break;
    }
    case 57890:
    {
        returnValue = F("Bittinger Str.");
        break;
    }
    case 57891:
    {
        returnValue = F("Bittingerweg");
        break;
    }
    case 57892:
    {
        returnValue = F("Bittkauer Feldstr.");
        break;
    }
    case 57893:
    {
        returnValue = F("Bittkauer Gartenstr.");
        break;
    }
    case 57894:
    {
        returnValue = F("Bittkauer Str.");
        break;
    }
    case 57895:
    {
        returnValue = F("Bittkauer Weg");
        break;
    }
    case 57896:
    {
        returnValue = F("Bittlerweg");
        break;
    }
    case 57897:
    {
        returnValue = F("Bittstedter Str.");
        break;
    }
    case 57898:
    {
        returnValue = F("Bittstädter Str.");
        break;
    }
    case 57899:
    {
        returnValue = F("Bittumstr.");
        break;
    }
    case 57900:
    {
        returnValue = F("Bittumäcker");
        break;
    }
    case 57901:
    {
        returnValue = F("Bittweg");
        break;
    }
    case 57902:
    {
        returnValue = F("Bitz");
        break;
    }
    case 57903:
    {
        returnValue = F("Bitzbruch");
        break;
    }
    case 57904:
    {
        returnValue = F("Bitzchen");
        break;
    }
    case 57905:
    {
        returnValue = F("Bitze");
        break;
    }
    case 57906:
    {
        returnValue = F("Bitze Pädche");
        break;
    }
    case 57907:
    {
        returnValue = F("Bitzegasse");
        break;
    }
    case 57908:
    {
        returnValue = F("Bitzen");
        break;
    }
    case 57909:
    {
        returnValue = F("Bitzenberg");
        break;
    }
    case 57910:
    {
        returnValue = F("Bitzenbrunnenweg");
        break;
    }
    case 57911:
    {
        returnValue = F("Bitzeneweg");
        break;
    }
    case 57912:
    {
        returnValue = F("Bitzengarten");
        break;
    }
    case 57913:
    {
        returnValue = F("Bitzenheimer Weg");
        break;
    }
    case 57914:
    {
        returnValue = F("Bitzenhofer Weg");
        break;
    }
    case 57915:
    {
        returnValue = F("Bitzenkamp");
        break;
    }
    case 57916:
    {
        returnValue = F("Bitzenlander Weg");
        break;
    }
    case 57917:
    {
        returnValue = F("Bitzensee Schneise");
        break;
    }
    case 57918:
    {
        returnValue = F("Bitzenstr.");
        break;
    }
    case 57919:
    {
        returnValue = F("Bitzentheileweg");
        break;
    }
    case 57920:
    {
        returnValue = F("Bitzenweg");
        break;
    }
    case 57921:
    {
        returnValue = F("Bitzenwiesen");
        break;
    }
    case 57922:
    {
        returnValue = F("Bitzer Berg");
        break;
    }
    case 57923:
    {
        returnValue = F("Bitzer Gasse");
        break;
    }
    case 57924:
    {
        returnValue = F("Bitzer Pfad");
        break;
    }
    case 57925:
    {
        returnValue = F("Bitzer Steige");
        break;
    }
    case 57926:
    {
        returnValue = F("Bitzer Str.");
        break;
    }
    case 57927:
    {
        returnValue = F("Bitzer Weg");
        break;
    }
    case 57928:
    {
        returnValue = F("Bitzer Wäldle Weg");
        break;
    }
    case 57929:
    {
        returnValue = F("Bitzerberg");
        break;
    }
    case 57930:
    {
        returnValue = F("Bitzergasse");
        break;
    }
    case 57931:
    {
        returnValue = F("Bitzerstr.");
        break;
    }
    case 57932:
    {
        returnValue = F("Bitzerweg");
        break;
    }
    case 57933:
    {
        returnValue = F("Bitzestr.");
        break;
    }
    case 57934:
    {
        returnValue = F("Bitzeweg");
        break;
    }
    case 57935:
    {
        returnValue = F("Bitzfelder Str.");
        break;
    }
    case 57936:
    {
        returnValue = F("Bitzgasse");
        break;
    }
    case 57937:
    {
        returnValue = F("Bitzkamp");
        break;
    }
    case 57938:
    {
        returnValue = F("Bitzlehangweg");
        break;
    }
    case 57939:
    {
        returnValue = F("Bitzneweg");
        break;
    }
    case 57940:
    {
        returnValue = F("Bitzstr.");
        break;
    }
    case 57941:
    {
        returnValue = F("Bitzweg");
        break;
    }
    case 57942:
    {
        returnValue = F("Bitzwiesen");
        break;
    }
    case 57943:
    {
        returnValue = F("Bivangweg");
        break;
    }
    case 57944:
    {
        returnValue = F("Bivetsweg");
        break;
    }
    case 57945:
    {
        returnValue = F("Biwak");
        break;
    }
    case 57946:
    {
        returnValue = F("Bixlag");
        break;
    }
    case 57947:
    {
        returnValue = F("Bixnaaf");
        break;
    }
    case 57948:
    {
        returnValue = F("Bixnaafermühle");
        break;
    }
    case 57949:
    {
        returnValue = F("Bixterhauser Hellweg");
        break;
    }
    case 57950:
    {
        returnValue = F("Bizaineweg");
        break;
    }
    case 57951:
    {
        returnValue = F("Bizeinestr.");
        break;
    }
    case 57952:
    {
        returnValue = F("Bizetstr.");
        break;
    }
    case 57953:
    {
        returnValue = F("Bizäunestr.");
        break;
    }
    case 57954:
    {
        returnValue = F("Bizäuneweg");
        break;
    }
    case 57955:
    {
        returnValue = F("Biß");
        break;
    }
    case 57956:
    {
        returnValue = F("Bißmeiers Weg");
        break;
    }
    case 57957:
    {
        returnValue = F("Biörn");
        break;
    }
    case 57958:
    {
        returnValue = F("Bjarnat-Krawc-Str.");
        break;
    }
    case 57959:
    {
        returnValue = F("Bjerringbrostr.");
        break;
    }
    case 57960:
    {
        returnValue = F("Björn-Steiger-Kreisel");
        break;
    }
    case 57961:
    {
        returnValue = F("Björnsenpark");
        break;
    }
    case 57962:
    {
        returnValue = F("Björnsenplatz");
        break;
    }
    case 57963:
    {
        returnValue = F("Björnsonstr.");
        break;
    }
    case 57964:
    {
        returnValue = F("Blaahausstr.");
        break;
    }
    case 57965:
    {
        returnValue = F("Blabertsweg");
        break;
    }
    case 57966:
    {
        returnValue = F("Blachendorf");
        break;
    }
    case 57967:
    {
        returnValue = F("Blachenweg");
        break;
    }
    case 57968:
    {
        returnValue = F("Blachfeld");
        break;
    }
    case 57969:
    {
        returnValue = F("Blachweg");
        break;
    }
    case 57970:
    {
        returnValue = F("Black Victor");
        break;
    }
    case 57971:
    {
        returnValue = F("Black-Horse-Str.");
        break;
    }
    case 57972:
    {
        returnValue = F("Blackberggestell");
        break;
    }
    case 57973:
    {
        returnValue = F("Blackburner Str.");
        break;
    }
    case 57974:
    {
        returnValue = F("Blackenhof");
        break;
    }
    case 57975:
    {
        returnValue = F("Blackenstr.");
        break;
    }
    case 57976:
    {
        returnValue = F("Blackmannshof");
        break;
    }
    case 57977:
    {
        returnValue = F("Bladekamp");
        break;
    }
    case 57978:
    {
        returnValue = F("Bladener Str.");
        break;
    }
    case 57979:
    {
        returnValue = F("Bladener Weg");
        break;
    }
    case 57980:
    {
        returnValue = F("Bladenhorster Brücke");
        break;
    }
    case 57981:
    {
        returnValue = F("Bladenhorster Str.");
        break;
    }
    case 57982:
    {
        returnValue = F("Bladenwiese");
        break;
    }
    case 57983:
    {
        returnValue = F("Bladernheimer Str.");
        break;
    }
    case 57984:
    {
        returnValue = F("Bladersbacher Str.");
        break;
    }
    case 57985:
    {
        returnValue = F("Bladilostr.");
        break;
    }
    case 57986:
    {
        returnValue = F("Blagnac-Brücke");
        break;
    }
    case 57987:
    {
        returnValue = F("Blaibacher Str.");
        break;
    }
    case 57988:
    {
        returnValue = F("Blaich");
        break;
    }
    case 57989:
    {
        returnValue = F("Blaichacher Str.");
        break;
    }
    case 57990:
    {
        returnValue = F("Blaichberg");
        break;
    }
    case 57991:
    {
        returnValue = F("Blaicher Str.");
        break;
    }
    case 57992:
    {
        returnValue = F("Blaicherstr.");
        break;
    }
    case 57993:
    {
        returnValue = F("Blaichstr.");
        break;
    }
    case 57994:
    {
        returnValue = F("Blaichwaldweg");
        break;
    }
    case 57995:
    {
        returnValue = F("Blaihofstr.");
        break;
    }
    case 57996:
    {
        returnValue = F("Blaik");
        break;
    }
    case 57997:
    {
        returnValue = F("Blaikenstr.");
        break;
    }
    case 57998:
    {
        returnValue = F("Blaimberg");
        break;
    }
    case 57999:
    {
        returnValue = F("Blaimberger Str.");
        break;
    }
    case 58000:
    {
        returnValue = F("Blainville-Ring");
        break;
    }
    case 58001:
    {
        returnValue = F("Blaisy-Bas-Str.");
        break;
    }
    case 58002:
    {
        returnValue = F("Blambachweg");
        break;
    }
    case 58003:
    {
        returnValue = F("Blamberg");
        break;
    }
    case 58004:
    {
        returnValue = F("Blameraustr.");
        break;
    }
    case 58005:
    {
        returnValue = F("Blamkamp");
        break;
    }
    case 58006:
    {
        returnValue = F("Blammerbergstr.");
        break;
    }
    case 58007:
    {
        returnValue = F("Blanc-und-Fischer-Platz");
        break;
    }
    case 58008:
    {
        returnValue = F("Blanckenagelweg");
        break;
    }
    case 58009:
    {
        returnValue = F("Blanckennagelweg");
        break;
    }
    case 58010:
    {
        returnValue = F("Blanckeweg");
        break;
    }
    case 58011:
    {
        returnValue = F("Blanckfortstr.");
        break;
    }
    case 58012:
    {
        returnValue = F("Blanckmeistersteig");
        break;
    }
    case 58013:
    {
        returnValue = F("Blanckmeisterstr.");
        break;
    }
    case 58014:
    {
        returnValue = F("Blanderergäßchen");
        break;
    }
    case 58015:
    {
        returnValue = F("Blandfordweg");
        break;
    }
    case 58016:
    {
        returnValue = F("Blandikower Chaussee");
        break;
    }
    case 58017:
    {
        returnValue = F("Blandikower Dorfstr.");
        break;
    }
    case 58018:
    {
        returnValue = F("Blandikower Weg");
        break;
    }
    case 58019:
    {
        returnValue = F("Blandine-Merten-Str.");
        break;
    }
    case 58020:
    {
        returnValue = F("Blandorfer Str.");
        break;
    }
    case 58021:
    {
        returnValue = F("Blangen Diek");
        break;
    }
    case 58022:
    {
        returnValue = F("Blangenkoppel");
        break;
    }
    case 58023:
    {
        returnValue = F("Blangenmoorer Str.");
        break;
    }
    case 58024:
    {
        returnValue = F("Blangwiesen");
        break;
    }
    case 58025:
    {
        returnValue = F("Blanka-Schmitt-Weg");
        break;
    }
    case 58026:
    {
        returnValue = F("Blankartshof");
        break;
    }
    case 58027:
    {
        returnValue = F("Blankartstr.");
        break;
    }
    case 58028:
    {
        returnValue = F("Blanke");
        break;
    }
    case 58029:
    {
        returnValue = F("Blanke Fenne");
        break;
    }
    case 58030:
    {
        returnValue = F("Blanke-Patt");
        break;
    }
    case 58031:
    {
        returnValue = F("Blankemater Str.");
        break;
    }
    case 58032:
    {
        returnValue = F("Blankemühlen");
        break;
    }
    case 58033:
    {
        returnValue = F("Blankenackerweg");
        break;
    }
    case 58034:
    {
        returnValue = F("Blankenau");
        break;
    }
    case 58035:
    {
        returnValue = F("Blankenauer Str.");
        break;
    }
    case 58036:
    {
        returnValue = F("Blankenauer Weg");
        break;
    }
    case 58037:
    {
        returnValue = F("Blankenaustr.");
        break;
    }
    case 58038:
    {
        returnValue = F("Blankenbacher Str.");
        break;
    }
    case 58039:
    {
        returnValue = F("Blankenbachring");
        break;
    }
    case 58040:
    {
        returnValue = F("Blankenberg");
        break;
    }
    case 58041:
    {
        returnValue = F("Blankenberghof");
        break;
    }
    case 58042:
    {
        returnValue = F("Blankenbergweg");
        break;
    }
    case 58043:
    {
        returnValue = F("Blankenburg");
        break;
    }
    case 58044:
    {
        returnValue = F("Blankenburger Berg");
        break;
    }
    case 58045:
    {
        returnValue = F("Blankenburger Ring");
        break;
    }
    case 58046:
    {
        returnValue = F("Blankenburger Str.");
        break;
    }
    case 58047:
    {
        returnValue = F("Blankenburger Weg");
        break;
    }
    case 58048:
    {
        returnValue = F("Blankenburgstr.");
        break;
    }
    case 58049:
    {
        returnValue = F("Blankenburgweg");
        break;
    }
    case 58050:
    {
        returnValue = F("Blankenbühlstr.");
        break;
    }
    case 58051:
    {
        returnValue = F("Blankener Str.");
        break;
    }
    case 58052:
    {
        returnValue = F("Blankeneser Chaussee");
        break;
    }
    case 58053:
    {
        returnValue = F("Blankenfeld");
        break;
    }
    case 58054:
    {
        returnValue = F("Blankenfelde");
        break;
    }
    case 58055:
    {
        returnValue = F("Blankenfelder Dorfstr.");
        break;
    }
    case 58056:
    {
        returnValue = F("Blankenfelder Str.");
        break;
    }
    case 58057:
    {
        returnValue = F("Blankenfohr");
        break;
    }
    case 58058:
    {
        returnValue = F("Blankenfohrweg");
        break;
    }
    case 58059:
    {
        returnValue = F("Blankenfoort");
        break;
    }
    case 58060:
    {
        returnValue = F("Blankenförde");
        break;
    }
    case 58061:
    {
        returnValue = F("Blankengarten");
        break;
    }
    case 58062:
    {
        returnValue = F("Blankenhainer Str.");
        break;
    }
    case 58063:
    {
        returnValue = F("Blankenheckenweg");
        break;
    }
    case 58064:
    {
        returnValue = F("Blankenheimer Str.");
        break;
    }
    case 58065:
    {
        returnValue = F("Blankenheimer Weg");
        break;
    }
    case 58066:
    {
        returnValue = F("Blankenheimstr.");
        break;
    }
    case 58067:
    {
        returnValue = F("Blankenhof");
        break;
    }
    case 58068:
    {
        returnValue = F("Blankenhofer Str.");
        break;
    }
    case 58069:
    {
        returnValue = F("Blankenhornpark");
        break;
    }
    case 58070:
    {
        returnValue = F("Blankenhornstr.");
        break;
    }
    case 58071:
    {
        returnValue = F("Blankenlocher Str.");
        break;
    }
    case 58072:
    {
        returnValue = F("Blankenlocher Weg");
        break;
    }
    case 58073:
    {
        returnValue = F("Blankenmoorer Str.");
        break;
    }
    case 58074:
    {
        returnValue = F("Blankenrieder Str.");
        break;
    }
    case 58075:
    {
        returnValue = F("Blankenring");
        break;
    }
    case 58076:
    {
        returnValue = F("Blankenroder Str.");
        break;
    }
    case 58077:
    {
        returnValue = F("Blankensandweg");
        break;
    }
    case 58078:
    {
        returnValue = F("Blankensee");
        break;
    }
    case 58079:
    {
        returnValue = F("Blankenseer Allee");
        break;
    }
    case 58080:
    {
        returnValue = F("Blankenseer Chaussee");
        break;
    }
    case 58081:
    {
        returnValue = F("Blankenseer Dorfstr.");
        break;
    }
    case 58082:
    {
        returnValue = F("Blankenseer Str.");
        break;
    }
    case 58083:
    {
        returnValue = F("Blankenseer Weg");
        break;
    }
    case 58084:
    {
        returnValue = F("Blankenseestr.");
        break;
    }
    case 58085:
    {
        returnValue = F("Blankenseifen");
        break;
    }
    case 58086:
    {
        returnValue = F("Blankenstein");
        break;
    }
    case 58087:
    {
        returnValue = F("Blankensteiner Str.");
        break;
    }
    case 58088:
    {
        returnValue = F("Blankensteiner Weg");
        break;
    }
    case 58089:
    {
        returnValue = F("Blankensteinstr.");
        break;
    }
    case 58090:
    {
        returnValue = F("Blankenstr.");
        break;
    }
    case 58091:
    {
        returnValue = F("Blankenstücksweg");
        break;
    }
    case 58092:
    {
        returnValue = F("Blankental");
        break;
    }
    case 58093:
    {
        returnValue = F("Blankenvortweg");
        break;
    }
    case 58094:
    {
        returnValue = F("Blankenweg");
        break;
    }
    case 58095:
    {
        returnValue = F("Blankenäcker");
        break;
    }
    case 58096:
    {
        returnValue = F("Blanker Post");
        break;
    }
    case 58097:
    {
        returnValue = F("Blanker Puhl");
        break;
    }
    case 58098:
    {
        returnValue = F("Blanker Schlatt");
        break;
    }
    case 58099:
    {
        returnValue = F("Blanker Weg");
        break;
    }
    case 58100:
    {
        returnValue = F("Blanker-Hans-Weg");
        break;
    }
    case 58101:
    {
        returnValue = F("Blankering");
        break;
    }
    case 58102:
    {
        returnValue = F("Blankertshohl");
        break;
    }
    case 58103:
    {
        returnValue = F("Blankes Tälchen");
        break;
    }
    case 58104:
    {
        returnValue = F("Blankeweg");
        break;
    }
    case 58105:
    {
        returnValue = F("Blankgasse");
        break;
    }
    case 58106:
    {
        returnValue = F("Blankpfad");
        break;
    }
    case 58107:
    {
        returnValue = F("Blankschmiede");
        break;
    }
    case 58108:
    {
        returnValue = F("Blanksee");
        break;
    }
    case 58109:
    {
        returnValue = F("Blankstahlweg");
        break;
    }
    case 58110:
    {
        returnValue = F("Blankstr.");
        break;
    }
    case 58111:
    {
        returnValue = F("Blanksweg");
        break;
    }
    case 58112:
    {
        returnValue = F("Blankwasserweg");
        break;
    }
    case 58113:
    {
        returnValue = F("Blankweg");
        break;
    }
    case 58114:
    {
        returnValue = F("Blannentalhof");
        break;
    }
    case 58115:
    {
        returnValue = F("Blanscheidstr.");
        break;
    }
    case 58116:
    {
        returnValue = F("Blansinger Str.");
        break;
    }
    case 58117:
    {
        returnValue = F("Blarerstr.");
        break;
    }
    case 58118:
    {
        returnValue = F("Blasbacher Str.");
        break;
    }
    case 58119:
    {
        returnValue = F("Blasbacher Weg");
        break;
    }
    case 58120:
    {
        returnValue = F("Blasberg");
        break;
    }
    case 58121:
    {
        returnValue = F("Blaschkestr.");
        break;
    }
    case 58122:
    {
        returnValue = F("Blasdorf");
        break;
    }
    case 58123:
    {
        returnValue = F("Blasenbergring");
        break;
    }
    case 58124:
    {
        returnValue = F("Blasenbergstr.");
        break;
    }
    case 58125:
    {
        returnValue = F("Blasenbergweg");
        break;
    }
    case 58126:
    {
        returnValue = F("Blasenfeldstr.");
        break;
    }
    case 58127:
    {
        returnValue = F("Blasengasse");
        break;
    }
    case 58128:
    {
        returnValue = F("Blasheimer Str.");
        break;
    }
    case 58129:
    {
        returnValue = F("Blashub");
        break;
    }
    case 58130:
    {
        returnValue = F("Blashütte");
        break;
    }
    case 58131:
    {
        returnValue = F("Blasianerweg");
        break;
    }
    case 58132:
    {
        returnValue = F("Blasiikirchplatz");
        break;
    }
    case 58133:
    {
        returnValue = F("Blasiistr.");
        break;
    }
    case 58134:
    {
        returnValue = F("Blasimoner Str.");
        break;
    }
    case 58135:
    {
        returnValue = F("Blasiring");
        break;
    }
    case 58136:
    {
        returnValue = F("Blasistr.");
        break;
    }
    case 58137:
    {
        returnValue = F("Blasius-Erler-Weg");
        break;
    }
    case 58138:
    {
        returnValue = F("Blasius-Hogger-Weg");
        break;
    }
    case 58139:
    {
        returnValue = F("Blasius-Schaxel-Str.");
        break;
    }
    case 58140:
    {
        returnValue = F("Blasiusberg");
        break;
    }
    case 58141:
    {
        returnValue = F("Blasiusbergstr.");
        break;
    }
    case 58142:
    {
        returnValue = F("Blasiusstr.");
        break;
    }
    case 58143:
    {
        returnValue = F("Blasiusweg");
        break;
    }
    case 58144:
    {
        returnValue = F("Blasiwaldweg");
        break;
    }
    case 58145:
    {
        returnValue = F("Blaslberg");
        break;
    }
    case 58146:
    {
        returnValue = F("Blaspillerweg");
        break;
    }
    case 58147:
    {
        returnValue = F("Blasshaldeweg");
        break;
    }
    case 58148:
    {
        returnValue = F("Blasturmgasse");
        break;
    }
    case 58149:
    {
        returnValue = F("Blasweiler Weg");
        break;
    }
    case 58150:
    {
        returnValue = F("Blasweilerweg");
        break;
    }
    case 58151:
    {
        returnValue = F("Blatehof");
        break;
    }
    case 58152:
    {
        returnValue = F("Blatendoop");
        break;
    }
    case 58153:
    {
        returnValue = F("Blatenweg");
        break;
    }
    case 58154:
    {
        returnValue = F("Blatesstr.");
        break;
    }
    case 58155:
    {
        returnValue = F("Blattbusch");
        break;
    }
    case 58156:
    {
        returnValue = F("Blattenhäuserwiese");
        break;
    }
    case 58157:
    {
        returnValue = F("Blattentalweg");
        break;
    }
    case 58158:
    {
        returnValue = F("Blattenweg");
        break;
    }
    case 58159:
    {
        returnValue = F("Blattenäckerstr.");
        break;
    }
    case 58160:
    {
        returnValue = F("Blattergasse");
        break;
    }
    case 58161:
    {
        returnValue = F("Blatterngraben");
        break;
    }
    case 58162:
    {
        returnValue = F("Blatterslebener Str.");
        break;
    }
    case 58163:
    {
        returnValue = F("Blatterweg");
        break;
    }
    case 58164:
    {
        returnValue = F("Blattgoldstr.");
        break;
    }
    case 58165:
    {
        returnValue = F("Blattneiweg");
        break;
    }
    case 58166:
    {
        returnValue = F("Blattschneise");
        break;
    }
    case 58167:
    {
        returnValue = F("Blattseeweg");
        break;
    }
    case 58168:
    {
        returnValue = F("Blattstr.");
        break;
    }
    case 58169:
    {
        returnValue = F("Blattwiesenstr.");
        break;
    }
    case 58170:
    {
        returnValue = F("Blatzheimer Str.");
        break;
    }
    case 58171:
    {
        returnValue = F("Blatzheimer Weg");
        break;
    }
    case 58172:
    {
        returnValue = F("Blatzweg");
        break;
    }
    case 58173:
    {
        returnValue = F("Blau-Kreuz-Heim-Str.");
        break;
    }
    case 58174:
    {
        returnValue = F("Blaubach");
        break;
    }
    case 58175:
    {
        returnValue = F("Blaubacher Str.");
        break;
    }
    case 58176:
    {
        returnValue = F("Blaubachstr.");
        break;
    }
    case 58177:
    {
        returnValue = F("Blaubachweg");
        break;
    }
    case 58178:
    {
        returnValue = F("Blaubeergasse");
        break;
    }
    case 58179:
    {
        returnValue = F("Blaubeerplantage Schlote");
        break;
    }
    case 58180:
    {
        returnValue = F("Blaubeerweg");
        break;
    }
    case 58181:
    {
        returnValue = F("Blauberg");
        break;
    }
    case 58182:
    {
        returnValue = F("Blauberger Str.");
        break;
    }
    case 58183:
    {
        returnValue = F("Blaubergstr.");
        break;
    }
    case 58184:
    {
        returnValue = F("Blaubergweg");
        break;
    }
    case 58185:
    {
        returnValue = F("Blaubeurer Str.");
        break;
    }
    case 58186:
    {
        returnValue = F("Blaubeurer Weg");
        break;
    }
    case 58187:
    {
        returnValue = F("Blaubeurerweg");
        break;
    }
    case 58188:
    {
        returnValue = F("Blaubronn");
        break;
    }
    case 58189:
    {
        returnValue = F("Blaue Balje");
        break;
    }
    case 58190:
    {
        returnValue = F("Blaue Brücke");
        break;
    }
    case 58191:
    {
        returnValue = F("Blaue Chausee");
        break;
    }
    case 58192:
    {
        returnValue = F("Blaue Ecke");
        break;
    }
    case 58193:
    {
        returnValue = F("Blaue Hofstadt");
        break;
    }
    case 58194:
    {
        returnValue = F("Blaue Hose");
        break;
    }
    case 58195:
    {
        returnValue = F("Blaue Jäger");
        break;
    }
    case 58196:
    {
        returnValue = F("Blaue Kehre");
        break;
    }
    case 58197:
    {
        returnValue = F("Blaue Kuppe Rundweg");
        break;
    }
    case 58198:
    {
        returnValue = F("Blaue Lehmkuhle");
        break;
    }
    case 58199:
    {
        returnValue = F("Blaue Leite");
        break;
    }
    case 58200:
    {
        returnValue = F("Blaue Liede");
        break;
    }
    case 58201:
    {
        returnValue = F("Blaue Lieth");
        break;
    }
    case 58202:
    {
        returnValue = F("Blaue Mühle");
        break;
    }
    case 58203:
    {
        returnValue = F("Blaue Pforte");
        break;
    }
    case 58204:
    {
        returnValue = F("Blaue Pfütze");
        break;
    }
    case 58205:
    {
        returnValue = F("Blaue Spitze");
        break;
    }
    case 58206:
    {
        returnValue = F("Blaue Str.");
        break;
    }
    case 58207:
    {
        returnValue = F("Blaue Taube");
        break;
    }
    case 58208:
    {
        returnValue = F("Blaue Turmgasse");
        break;
    }
    case 58209:
    {
        returnValue = F("Blaue Wiese");
        break;
    }
    case 58210:
    {
        returnValue = F("Blaue-Kuppe-Str.");
        break;
    }
    case 58211:
    {
        returnValue = F("Blaue-Stern-Gasse");
        break;
    }
    case 58212:
    {
        returnValue = F("Blaue-Wand-Str.");
        break;
    }
    case 58213:
    {
        returnValue = F("Blauehutstr.");
        break;
    }
    case 58214:
    {
        returnValue = F("Blauen");
        break;
    }
    case 58215:
    {
        returnValue = F("Blauenbachweg");
        break;
    }
    case 58216:
    {
        returnValue = F("Blauenblick");
        break;
    }
    case 58217:
    {
        returnValue = F("Blauenblickstr.");
        break;
    }
    case 58218:
    {
        returnValue = F("Blauener Weg");
        break;
    }
    case 58219:
    {
        returnValue = F("Blauenstein");
        break;
    }
    case 58220:
    {
        returnValue = F("Blauenstr.");
        break;
    }
    case 58221:
    {
        returnValue = F("Blauenthaler Hauptstr.");
        break;
    }
    case 58222:
    {
        returnValue = F("Blauenthaler Str.");
        break;
    }
    case 58223:
    {
        returnValue = F("Blauenweg");
        break;
    }
    case 58224:
    {
        returnValue = F("Blauer Baum");
        break;
    }
    case 58225:
    {
        returnValue = F("Blauer Blick");
        break;
    }
    case 58226:
    {
        returnValue = F("Blauer Hecht");
        break;
    }
    case 58227:
    {
        returnValue = F("Blauer Hut");
        break;
    }
    case 58228:
    {
        returnValue = F("Blauer Hügel");
        break;
    }
    case 58229:
    {
        returnValue = F("Blauer Kamp");
        break;
    }
    case 58230:
    {
        returnValue = F("Blauer Lappen");
        break;
    }
    case 58231:
    {
        returnValue = F("Blauer Pfad");
        break;
    }
    case 58232:
    {
        returnValue = F("Blauer Punkt");
        break;
    }
    case 58233:
    {
        returnValue = F("Blauer Ring");
        break;
    }
    case 58234:
    {
        returnValue = F("Blauer Stein");
        break;
    }
    case 58235:
    {
        returnValue = F("Blauer Steinweg");
        break;
    }
    case 58236:
    {
        returnValue = F("Blauer Wandstein");
        break;
    }
    case 58237:
    {
        returnValue = F("Blauer Weg");
        break;
    }
    case 58238:
    {
        returnValue = F("Blauer Winkel");
        break;
    }
    case 58239:
    {
        returnValue = F("Blauer Zahlenweg");
        break;
    }
    case 58240:
    {
        returnValue = F("Blauer-Punkt");
        break;
    }
    case 58241:
    {
        returnValue = F("Blauersteinstr.");
        break;
    }
    case 58242:
    {
        returnValue = F("Blaues Eck");
        break;
    }
    case 58243:
    {
        returnValue = F("Blaues Land");
        break;
    }
    case 58244:
    {
        returnValue = F("Blaues Loch - Brücke");
        break;
    }
    case 58245:
    {
        returnValue = F("Blaues Wunder");
        break;
    }
    case 58246:
    {
        returnValue = F("Blaufeldener Str.");
        break;
    }
    case 58247:
    {
        returnValue = F("Blaufelder Str.");
        break;
    }
    case 58248:
    {
        returnValue = F("Blaufelsstr.");
        break;
    }
    case 58249:
    {
        returnValue = F("Blaufichtenweg");
        break;
    }
    case 58250:
    {
        returnValue = F("Blaufärbergang");
        break;
    }
    case 58251:
    {
        returnValue = F("Blaufärbergasse");
        break;
    }
    case 58252:
    {
        returnValue = F("Blaufärberstr.");
        break;
    }
    case 58253:
    {
        returnValue = F("Blaufärberweg");
        break;
    }
    case 58254:
    {
        returnValue = F("Blaugasse");
        break;
    }
    case 58255:
    {
        returnValue = F("Blaugrasweg");
        break;
    }
    case 58256:
    {
        returnValue = F("Blauhander Str.");
        break;
    }
    case 58257:
    {
        returnValue = F("Blaukehlchenpfad");
        break;
    }
    case 58258:
    {
        returnValue = F("Blaukehlchenweg");
        break;
    }
    case 58259:
    {
        returnValue = F("Blaukirchener Friedhofstr.");
        break;
    }
    case 58260:
    {
        returnValue = F("Blaukissenweg");
        break;
    }
    case 58261:
    {
        returnValue = F("Blaukreutzweg");
        break;
    }
    case 58262:
    {
        returnValue = F("Blaukreuzstr.");
        break;
    }
    case 58263:
    {
        returnValue = F("Blaulachsträßle");
        break;
    }
    case 58264:
    {
        returnValue = F("Blaulachweg");
        break;
    }
    case 58265:
    {
        returnValue = F("Blauleitenweg");
        break;
    }
    case 58266:
    {
        returnValue = F("Blaulisweg");
        break;
    }
    case 58267:
    {
        returnValue = F("Blaulochstr.");
        break;
    }
    case 58268:
    {
        returnValue = F("Blaulstr.");
        break;
    }
    case 58269:
    {
        returnValue = F("Blauländchenstr.");
        break;
    }
    case 58270:
    {
        returnValue = F("Blaumeerstr.");
        break;
    }
    case 58271:
    {
        returnValue = F("Blaumeisengasse");
        break;
    }
    case 58272:
    {
        returnValue = F("Blaumeisenstr.");
        break;
    }
    case 58273:
    {
        returnValue = F("Blaumeisenweg");
        break;
    }
    case 58274:
    {
        returnValue = F("Blaumenweg");
        break;
    }
    case 58275:
    {
        returnValue = F("Blaumhöfener Str.");
        break;
    }
    case 58276:
    {
        returnValue = F("Blaumutzenkreuzweg");
        break;
    }
    case 58277:
    {
        returnValue = F("Blaumühlengäßchen");
        break;
    }
    case 58278:
    {
        returnValue = F("Blaumühlenweg");
        break;
    }
    case 58279:
    {
        returnValue = F("Blaunonnengasse");
        break;
    }
    case 58280:
    {
        returnValue = F("Blauort");
        break;
    }
    case 58281:
    {
        returnValue = F("Blaupfütze");
        break;
    }
    case 58282:
    {
        returnValue = F("Blauregenweg");
        break;
    }
    case 58283:
    {
        returnValue = F("Blaurock");
        break;
    }
    case 58284:
    {
        returnValue = F("Blauseeweg");
        break;
    }
    case 58285:
    {
        returnValue = F("Blaushügel");
        break;
    }
    case 58286:
    {
        returnValue = F("Blausiederweg");
        break;
    }
    case 58287:
    {
        returnValue = F("Blausteinstr.");
        break;
    }
    case 58288:
    {
        returnValue = F("Blausteinsweg");
        break;
    }
    case 58289:
    {
        returnValue = F("Blaustr.");
        break;
    }
    case 58290:
    {
        returnValue = F("Blausäulenweg");
        break;
    }
    case 58291:
    {
        returnValue = F("Blautal");
        break;
    }
    case 58292:
    {
        returnValue = F("Blautalstr.");
        break;
    }
    case 58293:
    {
        returnValue = F("Blautannenbahn");
        break;
    }
    case 58294:
    {
        returnValue = F("Blautannenstr.");
        break;
    }
    case 58295:
    {
        returnValue = F("Blautannenweg");
        break;
    }
    case 58296:
    {
        returnValue = F("Blautorfsweg");
        break;
    }
    case 58297:
    {
        returnValue = F("Blauvogel");
        break;
    }
    case 58298:
    {
        returnValue = F("Blauweg");
        break;
    }
    case 58299:
    {
        returnValue = F("Blauwstr.");
        break;
    }
    case 58300:
    {
        returnValue = F("Blauwunderstr.");
        break;
    }
    case 58301:
    {
        returnValue = F("Blauäckerweg");
        break;
    }
    case 58302:
    {
        returnValue = F("Blayer Str.");
        break;
    }
    case 58303:
    {
        returnValue = F("Blechbaumweg");
        break;
    }
    case 58304:
    {
        returnValue = F("Blechbergele");
        break;
    }
    case 58305:
    {
        returnValue = F("Blechensteg");
        break;
    }
    case 58306:
    {
        returnValue = F("Blechenstr.");
        break;
    }
    case 58307:
    {
        returnValue = F("Blecherborn");
        break;
    }
    case 58308:
    {
        returnValue = F("Blecherstr.");
        break;
    }
    case 58309:
    {
        returnValue = F("Blecherweg");
        break;
    }
    case 58310:
    {
        returnValue = F("Blechgasse");
        break;
    }
    case 58311:
    {
        returnValue = F("Blechhaidstr.");
        break;
    }
    case 58312:
    {
        returnValue = F("Blechhammer");
        break;
    }
    case 58313:
    {
        returnValue = F("Blechhammerer Str.");
        break;
    }
    case 58314:
    {
        returnValue = F("Blechhammerweg");
        break;
    }
    case 58315:
    {
        returnValue = F("Blechhofweg");
        break;
    }
    case 58316:
    {
        returnValue = F("Blechlachstr.");
        break;
    }
    case 58317:
    {
        returnValue = F("Blechmarterbrücke");
        break;
    }
    case 58318:
    {
        returnValue = F("Blechschmidtweg");
        break;
    }
    case 58319:
    {
        returnValue = F("Blechschmiede");
        break;
    }
    case 58320:
    {
        returnValue = F("Blechschneise");
        break;
    }
    case 58321:
    {
        returnValue = F("Blechsteig");
        break;
    }
    case 58322:
    {
        returnValue = F("Bleck");
        break;
    }
    case 58323:
    {
        returnValue = F("Bleckden");
        break;
    }
    case 58324:
    {
        returnValue = F("Bleckeder Landstr.");
        break;
    }
    case 58325:
    {
        returnValue = F("Bleckeder Moor");
        break;
    }
    case 58326:
    {
        returnValue = F("Bleckeder Str.");
        break;
    }
    case 58327:
    {
        returnValue = F("Bleckenaustr.");
        break;
    }
    case 58328:
    {
        returnValue = F("Bleckengrund");
        break;
    }
    case 58329:
    {
        returnValue = F("Bleckenröder Str.");
        break;
    }
    case 58330:
    {
        returnValue = F("Bleckenstedter Str.");
        break;
    }
    case 58331:
    {
        returnValue = F("Bleckenweg");
        break;
    }
    case 58332:
    {
        returnValue = F("Bleckmannsbusch");
        break;
    }
    case 58333:
    {
        returnValue = F("Bleckmannshof");
        break;
    }
    case 58334:
    {
        returnValue = F("Bleckstr.");
        break;
    }
    case 58335:
    {
        returnValue = F("Bleckwedel");
        break;
    }
    case 58336:
    {
        returnValue = F("Bleckwedeler Str.");
        break;
    }
    case 58337:
    {
        returnValue = F("Bleddiner Str.");
        break;
    }
    case 58338:
    {
        returnValue = F("Bledelner Pforte");
        break;
    }
    case 58339:
    {
        returnValue = F("Bledelner Str.");
        break;
    }
    case 58340:
    {
        returnValue = F("Bledesbacher Str.");
        break;
    }
    case 58341:
    {
        returnValue = F("Bleeck");
        break;
    }
    case 58342:
    {
        returnValue = F("Bleeckdamm");
        break;
    }
    case 58343:
    {
        returnValue = F("Bleecken");
        break;
    }
    case 58344:
    {
        returnValue = F("Bleecker Twiete");
        break;
    }
    case 58345:
    {
        returnValue = F("Bleeckerbrücke");
        break;
    }
    case 58346:
    {
        returnValue = F("Bleeckweg");
        break;
    }
    case 58347:
    {
        returnValue = F("Bleek");
        break;
    }
    case 58348:
    {
        returnValue = F("Bleeke");
        break;
    }
    case 58349:
    {
        returnValue = F("Bleekebrink");
        break;
    }
    case 58350:
    {
        returnValue = F("Bleeken");
        break;
    }
    case 58351:
    {
        returnValue = F("Bleeken Kämpe");
        break;
    }
    case 58352:
    {
        returnValue = F("Bleekenweg");
        break;
    }
    case 58353:
    {
        returnValue = F("Bleeker Weg");
        break;
    }
    case 58354:
    {
        returnValue = F("Bleekergang");
        break;
    }
    case 58355:
    {
        returnValue = F("Bleekerstr.");
        break;
    }
    case 58356:
    {
        returnValue = F("Bleekstiege");
        break;
    }
    case 58357:
    {
        returnValue = F("Bleekstr.");
        break;
    }
    case 58358:
    {
        returnValue = F("Bleekweg");
        break;
    }
    case 58359:
    {
        returnValue = F("Bleer Str.");
        break;
    }
    case 58360:
    {
        returnValue = F("Bleeseke-Plass");
        break;
    }
    case 58361:
    {
        returnValue = F("Bleesweg");
        break;
    }
    case 58362:
    {
        returnValue = F("Bleialfer Str.");
        break;
    }
    case 58363:
    {
        returnValue = F("Bleib gesund-Pfad");
        break;
    }
    case 58364:
    {
        returnValue = F("Bleibacher Str.");
        break;
    }
    case 58365:
    {
        returnValue = F("Bleibachstr.");
        break;
    }
    case 58366:
    {
        returnValue = F("Bleibachtalstr.");
        break;
    }
    case 58367:
    {
        returnValue = F("Bleiberg");
        break;
    }
    case 58368:
    {
        returnValue = F("Bleiberger Str.");
        break;
    }
    case 58369:
    {
        returnValue = F("Bleibergstr.");
        break;
    }
    case 58370:
    {
        returnValue = F("Bleibergweg");
        break;
    }
    case 58371:
    {
        returnValue = F("Bleibtreustr.");
        break;
    }
    case 58372:
    {
        returnValue = F("Bleich");
        break;
    }
    case 58373:
    {
        returnValue = F("Bleichackerweg");
        break;
    }
    case 58374:
    {
        returnValue = F("Bleichanger");
        break;
    }
    case 58375:
    {
        returnValue = F("Bleichberg");
        break;
    }
    case 58376:
    {
        returnValue = F("Bleichbergstr.");
        break;
    }
    case 58377:
    {
        returnValue = F("Bleichbitz");
        break;
    }
    case 58378:
    {
        returnValue = F("Bleiche");
        break;
    }
    case 58379:
    {
        returnValue = F("Bleiche-Schulweg");
        break;
    }
    case 58380:
    {
        returnValue = F("Bleichegasse");
        break;
    }
    case 58381:
    {
        returnValue = F("Bleichegässchen");
        break;
    }
    case 58382:
    {
        returnValue = F("Bleichel");
        break;
    }
    case 58383:
    {
        returnValue = F("Bleicheller");
        break;
    }
    case 58384:
    {
        returnValue = F("Bleichen");
        break;
    }
    case 58385:
    {
        returnValue = F("Bleichenbacher Str.");
        break;
    }
    case 58386:
    {
        returnValue = F("Bleichenbacher Weg");
        break;
    }
    case 58387:
    {
        returnValue = F("Bleichenberg");
        break;
    }
    case 58388:
    {
        returnValue = F("Bleichengasse");
        break;
    }
    case 58389:
    {
        returnValue = F("Bleichengrund");
        break;
    }
    case 58390:
    {
        returnValue = F("Bleichenhauweg");
        break;
    }
    case 58391:
    {
        returnValue = F("Bleichenholter Weg");
        break;
    }
    case 58392:
    {
        returnValue = F("Bleichenkopf");
        break;
    }
    case 58393:
    {
        returnValue = F("Bleichenköpfchen");
        break;
    }
    case 58394:
    {
        returnValue = F("Bleichenpfad");
        break;
    }
    case 58395:
    {
        returnValue = F("Bleichenstege");
        break;
    }
    case 58396:
    {
        returnValue = F("Bleichenstr.");
        break;
    }
    case 58397:
    {
        returnValue = F("Bleichenwall");
        break;
    }
    case 58398:
    {
        returnValue = F("Bleichenweg");
        break;
    }
    case 58399:
    {
        returnValue = F("Bleicheplatz");
        break;
    }
    case 58400:
    {
        returnValue = F("Bleicher Str.");
        break;
    }
    case 58401:
    {
        returnValue = F("Bleicher Weg");
        break;
    }
    case 58402:
    {
        returnValue = F("Bleicherbachweg");
        break;
    }
    case 58403:
    {
        returnValue = F("Bleichereistr.");
        break;
    }
    case 58404:
    {
        returnValue = F("Bleicherfleck");
        break;
    }
    case 58405:
    {
        returnValue = F("Bleichergang");
        break;
    }
    case 58406:
    {
        returnValue = F("Bleichergasse");
        break;
    }
    case 58407:
    {
        returnValue = F("Bleichergraben");
        break;
    }
    case 58408:
    {
        returnValue = F("Bleichergässle");
        break;
    }
    case 58409:
    {
        returnValue = F("Bleicherhof");
        break;
    }
    case 58410:
    {
        returnValue = F("Bleicheroder Str.");
        break;
    }
    case 58411:
    {
        returnValue = F("Bleicherpark");
        break;
    }
    case 58412:
    {
        returnValue = F("Bleicherpfad");
        break;
    }
    case 58413:
    {
        returnValue = F("Bleicherslohne");
        break;
    }
    case 58414:
    {
        returnValue = F("Bleicherstege");
        break;
    }
    case 58415:
    {
        returnValue = F("Bleicherstr.");
        break;
    }
    case 58416:
    {
        returnValue = F("Bleichertannenweg");
        break;
    }
    case 58417:
    {
        returnValue = F("Bleicherwall");
        break;
    }
    case 58418:
    {
        returnValue = F("Bleicherweg");
        break;
    }
    case 58419:
    {
        returnValue = F("Bleicherwiesen");
        break;
    }
    case 58420:
    {
        returnValue = F("Bleicheröder Landstr.");
        break;
    }
    case 58421:
    {
        returnValue = F("Bleicheröder Str.");
        break;
    }
    case 58422:
    {
        returnValue = F("Bleichestelle");
        break;
    }
    case 58423:
    {
        returnValue = F("Bleichestr.");
        break;
    }
    case 58424:
    {
        returnValue = F("Bleichetal");
        break;
    }
    case 58425:
    {
        returnValue = F("Bleicheweg");
        break;
    }
    case 58426:
    {
        returnValue = F("Bleichgarten");
        break;
    }
    case 58427:
    {
        returnValue = F("Bleichgartenstr.");
        break;
    }
    case 58428:
    {
        returnValue = F("Bleichgartenweg");
        break;
    }
    case 58429:
    {
        returnValue = F("Bleichgasse");
        break;
    }
    case 58430:
    {
        returnValue = F("Bleichgraben");
        break;
    }
    case 58431:
    {
        returnValue = F("Bleichgräben");
        break;
    }
    case 58432:
    {
        returnValue = F("Bleichgärten");
        break;
    }
    case 58433:
    {
        returnValue = F("Bleichgässchen");
        break;
    }
    case 58434:
    {
        returnValue = F("Bleichgäßchen");
        break;
    }
    case 58435:
    {
        returnValue = F("Bleichhag");
        break;
    }
    case 58436:
    {
        returnValue = F("Bleichhaus");
        break;
    }
    case 58437:
    {
        returnValue = F("Bleichheimer Grenzweg");
        break;
    }
    case 58438:
    {
        returnValue = F("Bleichheimer Pfarrweg");
        break;
    }
    case 58439:
    {
        returnValue = F("Bleichhof");
        break;
    }
    case 58440:
    {
        returnValue = F("Bleichhofer Weg");
        break;
    }
    case 58441:
    {
        returnValue = F("Bleichhofstr.");
        break;
    }
    case 58442:
    {
        returnValue = F("Bleichinselbrücke");
        break;
    }
    case 58443:
    {
        returnValue = F("Bleichlehnenweg");
        break;
    }
    case 58444:
    {
        returnValue = F("Bleichmühlestr.");
        break;
    }
    case 58445:
    {
        returnValue = F("Bleichnauer Str.");
        break;
    }
    case 58446:
    {
        returnValue = F("Bleichpfad");
        break;
    }
    case 58447:
    {
        returnValue = F("Bleichplatz");
        break;
    }
    case 58448:
    {
        returnValue = F("Bleichrasen");
        break;
    }
    case 58449:
    {
        returnValue = F("Bleichstaße");
        break;
    }
    case 58450:
    {
        returnValue = F("Bleichstede");
        break;
    }
    case 58451:
    {
        returnValue = F("Bleichstelle");
        break;
    }
    case 58452:
    {
        returnValue = F("Bleichstetter Weg");
        break;
    }
    case 58453:
    {
        returnValue = F("Bleichstr.");
        break;
    }
    case 58454:
    {
        returnValue = F("Bleichtalstr.");
        break;
    }
    case 58455:
    {
        returnValue = F("Bleichwall");
        break;
    }
    case 58456:
    {
        returnValue = F("Bleichwasen");
        break;
    }
    case 58457:
    {
        returnValue = F("Bleichweg");
        break;
    }
    case 58458:
    {
        returnValue = F("Bleichwiese");
        break;
    }
    case 58459:
    {
        returnValue = F("Bleichwiesen");
        break;
    }
    case 58460:
    {
        returnValue = F("Bleichwiesenstr.");
        break;
    }
    case 58461:
    {
        returnValue = F("Bleichwiesenweg");
        break;
    }
    case 58462:
    {
        returnValue = F("Bleicksweg");
        break;
    }
    case 58463:
    {
        returnValue = F("Bleidenberg Rundweg");
        break;
    }
    case 58464:
    {
        returnValue = F("Bleidenberger Weg");
        break;
    }
    case 58465:
    {
        returnValue = F("Bleidenröder Str.");
        break;
    }
    case 58466:
    {
        returnValue = F("Bleidenstadter Str.");
        break;
    }
    case 58467:
    {
        returnValue = F("Bleidenstadter Weg");
        break;
    }
    case 58468:
    {
        returnValue = F("Bleidenstädter Äcker");
        break;
    }
    case 58469:
    {
        returnValue = F("Bleidesheimer Weg");
        break;
    }
    case 58470:
    {
        returnValue = F("Bleidiger Weg");
        break;
    }
    case 58471:
    {
        returnValue = F("Bleierweg");
        break;
    }
    case 58472:
    {
        returnValue = F("Bleifeld");
        break;
    }
    case 58473:
    {
        returnValue = F("Bleifelder Str.");
        break;
    }
    case 58474:
    {
        returnValue = F("Bleigasse");
        break;
    }
    case 58475:
    {
        returnValue = F("Bleigießerweg");
        break;
    }
    case 58476:
    {
        returnValue = F("Bleigraben");
        break;
    }
    case 58477:
    {
        returnValue = F("Bleigrubenweg");
        break;
    }
    case 58478:
    {
        returnValue = F("Bleihofstr.");
        break;
    }
    case 58479:
    {
        returnValue = F("Bleihöfer Weg");
        break;
    }
    case 58480:
    {
        returnValue = F("Bleikamp");
        break;
    }
    case 58481:
    {
        returnValue = F("Bleikaule");
        break;
    }
    case 58482:
    {
        returnValue = F("Bleilestr.");
        break;
    }
    case 58483:
    {
        returnValue = F("Bleinsgasse");
        break;
    }
    case 58484:
    {
        returnValue = F("Bleiringstr.");
        break;
    }
    case 58485:
    {
        returnValue = F("Bleischeid");
        break;
    }
    case 58486:
    {
        returnValue = F("Bleischeider Weg");
        break;
    }
    case 58487:
    {
        returnValue = F("Bleischmelze");
        break;
    }
    case 58488:
    {
        returnValue = F("Bleisteinstr.");
        break;
    }
    case 58489:
    {
        returnValue = F("Bleistr.");
        break;
    }
    case 58490:
    {
        returnValue = F("Bleistädter Str.");
        break;
    }
    case 58491:
    {
        returnValue = F("Bleiswijker Str.");
        break;
    }
    case 58492:
    {
        returnValue = F("Bleiwaldstr.");
        break;
    }
    case 58493:
    {
        returnValue = F("Bleiweg");
        break;
    }
    case 58494:
    {
        returnValue = F("Bleiwäsche");
        break;
    }
    case 58495:
    {
        returnValue = F("Bleiwäscher Str.");
        break;
    }
    case 58496:
    {
        returnValue = F("Blekamp");
        break;
    }
    case 58497:
    {
        returnValue = F("Bleke");
        break;
    }
    case 58498:
    {
        returnValue = F("Blekendorfer Berg");
        break;
    }
    case 58499:
    {
        returnValue = F("Blekendorfer Str.");
        break;
    }
    case 58500:
    {
        returnValue = F("Bleker Str.");
        break;
    }
    case 58501:
    {
        returnValue = F("Blekerweg");
        break;
    }
    case 58502:
    {
        returnValue = F("Blekgärten");
        break;
    }
    case 58503:
    {
        returnValue = F("Bleking");
        break;
    }
    case 58504:
    {
        returnValue = F("Blekskov");
        break;
    }
    case 58505:
    {
        returnValue = F("Blemisweg");
        break;
    }
    case 58506:
    {
        returnValue = F("Blender Hauptstr.");
        break;
    }
    case 58507:
    {
        returnValue = F("Blendermannsweg");
        break;
    }
    case 58508:
    {
        returnValue = F("Blendersmühlweg");
        break;
    }
    case 58509:
    {
        returnValue = F("Blenderstr.");
        break;
    }
    case 58510:
    {
        returnValue = F("Blenderweg");
        break;
    }
    case 58511:
    {
        returnValue = F("Blenderweide");
        break;
    }
    case 58512:
    {
        returnValue = F("Blendingerweg");
        break;
    }
    case 58513:
    {
        returnValue = F("Blendstatt");
        break;
    }
    case 58514:
    {
        returnValue = F("Blendweg");
        break;
    }
    case 58515:
    {
        returnValue = F("Blengerweg");
        break;
    }
    case 58516:
    {
        returnValue = F("Blenhorster Str.");
        break;
    }
    case 58517:
    {
        returnValue = F("Blenhorster Weg");
        break;
    }
    case 58518:
    {
        returnValue = F("Blenkenkamp");
        break;
    }
    case 58519:
    {
        returnValue = F("Blenkenweg");
        break;
    }
    case 58520:
    {
        returnValue = F("Blenkinsopstr.");
        break;
    }
    case 58521:
    {
        returnValue = F("Blenklensäckerweg");
        break;
    }
    case 58522:
    {
        returnValue = F("Blenkwiese");
        break;
    }
    case 58523:
    {
        returnValue = F("Blenser Platz");
        break;
    }
    case 58524:
    {
        returnValue = F("Blenser Str.");
        break;
    }
    case 58525:
    {
        returnValue = F("Blenskensweg");
        break;
    }
    case 58526:
    {
        returnValue = F("Blenzer Weg");
        break;
    }
    case 58527:
    {
        returnValue = F("Blenzerweg");
        break;
    }
    case 58528:
    {
        returnValue = F("Blersumer Str.");
        break;
    }
    case 58529:
    {
        returnValue = F("Blesendorfer Dorfstr.");
        break;
    }
    case 58530:
    {
        returnValue = F("Blesendorfer Str.");
        break;
    }
    case 58531:
    {
        returnValue = F("Blesendorfer Weg");
        break;
    }
    case 58532:
    {
        returnValue = F("Blesewitzer Weg");
        break;
    }
    case 58533:
    {
        returnValue = F("Bleskenweg");
        break;
    }
    case 58534:
    {
        returnValue = F("Bleskeweg");
        break;
    }
    case 58535:
    {
        returnValue = F("Blessemer Lichweg");
        break;
    }
    case 58536:
    {
        returnValue = F("Blessemer Str.");
        break;
    }
    case 58537:
    {
        returnValue = F("Blessenbacher Str.");
        break;
    }
    case 58538:
    {
        returnValue = F("Blessenbacher Weg");
        break;
    }
    case 58539:
    {
        returnValue = F("Blessenberg");
        break;
    }
    case 58540:
    {
        returnValue = F("Blessenkamp");
        break;
    }
    case 58541:
    {
        returnValue = F("Blessenstätte");
        break;
    }
    case 58542:
    {
        returnValue = F("Blesshuhnweg");
        break;
    }
    case 58543:
    {
        returnValue = F("Blessingstr.");
        break;
    }
    case 58544:
    {
        returnValue = F("Blessnaustr.");
        break;
    }
    case 58545:
    {
        returnValue = F("Bletzen");
        break;
    }
    case 58546:
    {
        returnValue = F("Bleuelmatt");
        break;
    }
    case 58547:
    {
        returnValue = F("Bleuelwiesen");
        break;
    }
    case 58548:
    {
        returnValue = F("Bleuenhorst");
        break;
    }
    case 58549:
    {
        returnValue = F("Bleuermatt");
        break;
    }
    case 58550:
    {
        returnValue = F("Blexener Str.");
        break;
    }
    case 58551:
    {
        returnValue = F("Blexer Groden");
        break;
    }
    case 58552:
    {
        returnValue = F("Blexer Plate");
        break;
    }
    case 58553:
    {
        returnValue = F("Blexer Wurp");
        break;
    }
    case 58554:
    {
        returnValue = F("Bley's Patt");
        break;
    }
    case 58555:
    {
        returnValue = F("Bleyener Weg");
        break;
    }
    case 58556:
    {
        returnValue = F("Bleyerbrücke");
        break;
    }
    case 58557:
    {
        returnValue = F("Bleyerheider Str.");
        break;
    }
    case 58558:
    {
        returnValue = F("Bleyerstr.");
        break;
    }
    case 58559:
    {
        returnValue = F("Bleylerweg");
        break;
    }
    case 58560:
    {
        returnValue = F("Blezingerstr.");
        break;
    }
    case 58561:
    {
        returnValue = F("Blezingerweg");
        break;
    }
    case 58562:
    {
        returnValue = F("Bleßbergstr.");
        break;
    }
    case 58563:
    {
        returnValue = F("Bleßgasse");
        break;
    }
    case 58564:
    {
        returnValue = F("Bleßhuhnstr.");
        break;
    }
    case 58565:
    {
        returnValue = F("Bleßhuhnweg");
        break;
    }
    case 58566:
    {
        returnValue = F("Bleßmannstr.");
        break;
    }
    case 58567:
    {
        returnValue = F("Blickershäuser Str.");
        break;
    }
    case 58568:
    {
        returnValue = F("Blickhausen");
        break;
    }
    case 58569:
    {
        returnValue = F("Blickhausener Landstr.");
        break;
    }
    case 58570:
    {
        returnValue = F("Blicklochschneise");
        break;
    }
    case 58571:
    {
        returnValue = F("Blickstr.");
        break;
    }
    case 58572:
    {
        returnValue = F("Blickwedeler Dorfstr.");
        break;
    }
    case 58573:
    {
        returnValue = F("Blickwedeler Weg");
        break;
    }
    case 58574:
    {
        returnValue = F("Blickweg");
        break;
    }
    case 58575:
    {
        returnValue = F("Blickweilerstr.");
        break;
    }
    case 58576:
    {
        returnValue = F("Blidackerweg");
        break;
    }
    case 58577:
    {
        returnValue = F("Blidenfeldstr.");
        break;
    }
    case 58578:
    {
        returnValue = F("Blidenfelsstr.");
        break;
    }
    case 58579:
    {
        returnValue = F("Bliedenstr.");
        break;
    }
    case 58580:
    {
        returnValue = F("Bliedinghauser Str.");
        break;
    }
    case 58581:
    {
        returnValue = F("Bliedunger Str.");
        break;
    }
    case 58582:
    {
        returnValue = F("Bliensbachweg");
        break;
    }
    case 58583:
    {
        returnValue = F("Blienshaldenweg");
        break;
    }
    case 58584:
    {
        returnValue = F("Blies");
        break;
    }
    case 58585:
    {
        returnValue = F("Bliesberger Str.");
        break;
    }
    case 58586:
    {
        returnValue = F("Bliesbolchener Str.");
        break;
    }
    case 58587:
    {
        returnValue = F("Blieschendorf");
        break;
    }
    case 58588:
    {
        returnValue = F("Blieschendorfer Weg");
        break;
    }
    case 58589:
    {
        returnValue = F("Blieschow");
        break;
    }
    case 58590:
    {
        returnValue = F("Bliesdalheimer Str.");
        break;
    }
    case 58591:
    {
        returnValue = F("Bliesdalheimer Weg");
        break;
    }
    case 58592:
    {
        returnValue = F("Bliesdorfer Höhe");
        break;
    }
    case 58593:
    {
        returnValue = F("Bliesdorfer Str.");
        break;
    }
    case 58594:
    {
        returnValue = F("Bliesdorfer Weg");
        break;
    }
    case 58595:
    {
        returnValue = F("Bliesekower Weg");
        break;
    }
    case 58596:
    {
        returnValue = F("Bliesenbacher Str.");
        break;
    }
    case 58597:
    {
        returnValue = F("Bliesendorfer Dorfstr.");
        break;
    }
    case 58598:
    {
        returnValue = F("Bliesendorfer Poststr.");
        break;
    }
    case 58599:
    {
        returnValue = F("Bliesendorfer Str.");
        break;
    }
    case 58600:
    {
        returnValue = F("Bliesendorfer Weg");
        break;
    }
    case 58601:
    {
        returnValue = F("Bliesener Str.");
        break;
    }
    case 58602:
    {
        returnValue = F("Bliesener Weg");
        break;
    }
    case 58603:
    {
        returnValue = F("Bliesenhorst");
        break;
    }
    case 58604:
    {
        returnValue = F("Bliesenrader Weg");
        break;
    }
    case 58605:
    {
        returnValue = F("Bliesgasse");
        break;
    }
    case 58606:
    {
        returnValue = F("Bliesgaustr.");
        break;
    }
    case 58607:
    {
        returnValue = F("Bliesgersweilermühle");
        break;
    }
    case 58608:
    {
        returnValue = F("Bliesgersweilerstr.");
        break;
    }
    case 58609:
    {
        returnValue = F("Bliesheimer Str.");
        break;
    }
    case 58610:
    {
        returnValue = F("Blieskasteler Str.");
        break;
    }
    case 58611:
    {
        returnValue = F("Blieskasteler Weg");
        break;
    }
    case 58612:
    {
        returnValue = F("Blieskastelstr.");
        break;
    }
    case 58613:
    {
        returnValue = F("Bliesransbacher Str.");
        break;
    }
    case 58614:
    {
        returnValue = F("Bliesstr.");
        break;
    }
    case 58615:
    {
        returnValue = F("Bliestalstr.");
        break;
    }
    case 58616:
    {
        returnValue = F("Bliestorfer Weg");
        break;
    }
    case 58617:
    {
        returnValue = F("Bliesweg");
        break;
    }
    case 58618:
    {
        returnValue = F("Blievacker");
        break;
    }
    case 58619:
    {
        returnValue = F("Blievenstorfer Weg");
        break;
    }
    case 58620:
    {
        returnValue = F("Bliewnißweg");
        break;
    }
    case 58621:
    {
        returnValue = F("Bliggergasse");
        break;
    }
    case 58622:
    {
        returnValue = F("Bliksteege");
        break;
    }
    case 58623:
    {
        returnValue = F("Blindauer Str.");
        break;
    }
    case 58624:
    {
        returnValue = F("Blinde Gasse");
        break;
    }
    case 58625:
    {
        returnValue = F("Blinde Koppel");
        break;
    }
    case 58626:
    {
        returnValue = F("Blinde Steige");
        break;
    }
    case 58627:
    {
        returnValue = F("Blinde-Fliegen-Gasse");
        break;
    }
    case 58628:
    {
        returnValue = F("Blindegasse");
        break;
    }
    case 58629:
    {
        returnValue = F("Blindengasse");
        break;
    }
    case 58630:
    {
        returnValue = F("Blindengäßle");
        break;
    }
    case 58631:
    {
        returnValue = F("Blindenpfad");
        break;
    }
    case 58632:
    {
        returnValue = F("Blindenrainweg");
        break;
    }
    case 58633:
    {
        returnValue = F("Blindenreise mit Baumtafeln");
        break;
    }
    case 58634:
    {
        returnValue = F("Blinder Berg");
        break;
    }
    case 58635:
    {
        returnValue = F("Blinder See");
        break;
    }
    case 58636:
    {
        returnValue = F("Blinder Weg");
        break;
    }
    case 58637:
    {
        returnValue = F("Blinderweg");
        break;
    }
    case 58638:
    {
        returnValue = F("Blindgasse");
        break;
    }
    case 58639:
    {
        returnValue = F("Blindgrabenschneise");
        break;
    }
    case 58640:
    {
        returnValue = F("Blindheimer Weg");
        break;
    }
    case 58641:
    {
        returnValue = F("Blindreit");
        break;
    }
    case 58642:
    {
        returnValue = F("Blindreiter Str.");
        break;
    }
    case 58643:
    {
        returnValue = F("Blindreiter Weg");
        break;
    }
    case 58644:
    {
        returnValue = F("Blindschacht");
        break;
    }
    case 58645:
    {
        returnValue = F("Blindschleichenweg");
        break;
    }
    case 58646:
    {
        returnValue = F("Blindtal");
        break;
    }
    case 58647:
    {
        returnValue = F("Blinge");
        break;
    }
    case 58648:
    {
        returnValue = F("Blink");
        break;
    }
    case 58649:
    {
        returnValue = F("Blinke");
        break;
    }
    case 58650:
    {
        returnValue = F("Blinkfuer");
        break;
    }
    case 58651:
    {
        returnValue = F("Blinkfüer");
        break;
    }
    case 58652:
    {
        returnValue = F("Blinksteige");
        break;
    }
    case 58653:
    {
        returnValue = F("Blinkstr.");
        break;
    }
    case 58654:
    {
        returnValue = F("Blinkstücker Str.");
        break;
    }
    case 58655:
    {
        returnValue = F("Blinkweg");
        break;
    }
    case 58656:
    {
        returnValue = F("Blintendorf");
        break;
    }
    case 58657:
    {
        returnValue = F("Blisselgasse");
        break;
    }
    case 58658:
    {
        returnValue = F("Blissenweg");
        break;
    }
    case 58659:
    {
        returnValue = F("Blitzbergweg");
        break;
    }
    case 58660:
    {
        returnValue = F("Blitzenburg");
        break;
    }
    case 58661:
    {
        returnValue = F("Blitzenburgweg");
        break;
    }
    case 58662:
    {
        returnValue = F("Blitzenreuter Steige");
        break;
    }
    case 58663:
    {
        returnValue = F("Blitzenreuter Str.");
        break;
    }
    case 58664:
    {
        returnValue = F("Blitzenröder Str.");
        break;
    }
    case 58665:
    {
        returnValue = F("Blitzkuhle");
        break;
    }
    case 58666:
    {
        returnValue = F("Blitzkuhlenstr.");
        break;
    }
    case 58667:
    {
        returnValue = F("Blitzleweg");
        break;
    }
    case 58668:
    {
        returnValue = F("Blitzlochweg");
        break;
    }
    case 58669:
    {
        returnValue = F("Blitzstr.");
        break;
    }
    case 58670:
    {
        returnValue = F("Blitzweg");
        break;
    }
    case 58671:
    {
        returnValue = F("Blixberg");
        break;
    }
    case 58672:
    {
        returnValue = F("Bloaschütz");
        break;
    }
    case 58673:
    {
        returnValue = F("Blobach");
        break;
    }
    case 58674:
    {
        returnValue = F("Blobenstr.");
        break;
    }
    case 58675:
    {
        returnValue = F("Bloch");
        break;
    }
    case 58676:
    {
        returnValue = F("Blochbachstr.");
        break;
    }
    case 58677:
    {
        returnValue = F("Blochbergweg");
        break;
    }
    case 58678:
    {
        returnValue = F("Blochfeld");
        break;
    }
    case 58679:
    {
        returnValue = F("Blochinger Str.");
        break;
    }
    case 58680:
    {
        returnValue = F("Blochingergasse");
        break;
    }
    case 58681:
    {
        returnValue = F("Blochmannring");
        break;
    }
    case 58682:
    {
        returnValue = F("Blochmannstr.");
        break;
    }
    case 58683:
    {
        returnValue = F("Blochmatt");
        break;
    }
    case 58684:
    {
        returnValue = F("Blochmattenstr.");
        break;
    }
    case 58685:
    {
        returnValue = F("Blochmühlstr.");
        break;
    }
    case 58686:
    {
        returnValue = F("Blochstr.");
        break;
    }
    case 58687:
    {
        returnValue = F("Blochweg");
        break;
    }
    case 58688:
    {
        returnValue = F("Blochwitzer Str.");
        break;
    }
    case 58689:
    {
        returnValue = F("Blochwitzer Weg");
        break;
    }
    case 58690:
    {
        returnValue = F("Block Marl");
        break;
    }
    case 58691:
    {
        returnValue = F("Blockbergsweg");
        break;
    }
    case 58692:
    {
        returnValue = F("Blockener Str.");
        break;
    }
    case 58693:
    {
        returnValue = F("Blockenredder");
        break;
    }
    case 58694:
    {
        returnValue = F("Blocker Str.");
        break;
    }
    case 58695:
    {
        returnValue = F("Blockfeldstr.");
        break;
    }
    case 58696:
    {
        returnValue = F("Blockgasse");
        break;
    }
    case 58697:
    {
        returnValue = F("Blockhaus");
        break;
    }
    case 58698:
    {
        returnValue = F("Blockhauser Weg");
        break;
    }
    case 58699:
    {
        returnValue = F("Blockhaussiedlung");
        break;
    }
    case 58700:
    {
        returnValue = F("Blockhausstr.");
        break;
    }
    case 58701:
    {
        returnValue = F("Blockhausweg");
        break;
    }
    case 58702:
    {
        returnValue = F("Blockheide");
        break;
    }
    case 58703:
    {
        returnValue = F("Blockhorn");
        break;
    }
    case 58704:
    {
        returnValue = F("Blockhorner Allee");
        break;
    }
    case 58705:
    {
        returnValue = F("Blockhorner Weg");
        break;
    }
    case 58706:
    {
        returnValue = F("Blockhorner Weiden");
        break;
    }
    case 58707:
    {
        returnValue = F("Blockhütten-Weg");
        break;
    }
    case 58708:
    {
        returnValue = F("Blockhüttensträßchen");
        break;
    }
    case 58709:
    {
        returnValue = F("Blockhüttenweg");
        break;
    }
    case 58710:
    {
        returnValue = F("Blockhüttenzufahrt");
        break;
    }
    case 58711:
    {
        returnValue = F("Blockhütteweg");
        break;
    }
    case 58712:
    {
        returnValue = F("Blockkamp");
        break;
    }
    case 58713:
    {
        returnValue = F("Blockkistenweg");
        break;
    }
    case 58714:
    {
        returnValue = F("Blockplatz");
        break;
    }
    case 58715:
    {
        returnValue = F("Blocks Grund");
        break;
    }
    case 58716:
    {
        returnValue = F("Blocks Wiese");
        break;
    }
    case 58717:
    {
        returnValue = F("Blocksbarg");
        break;
    }
    case 58718:
    {
        returnValue = F("Blocksberg");
        break;
    }
    case 58719:
    {
        returnValue = F("Blocksberger Moor");
        break;
    }
    case 58720:
    {
        returnValue = F("Blocksbergring");
        break;
    }
    case 58721:
    {
        returnValue = F("Blocksbergstr.");
        break;
    }
    case 58722:
    {
        returnValue = F("Blocksbergtreppe");
        break;
    }
    case 58723:
    {
        returnValue = F("Blockschluck");
        break;
    }
    case 58724:
    {
        returnValue = F("Blocksdorf");
        break;
    }
    case 58725:
    {
        returnValue = F("Blockshagener Weg");
        break;
    }
    case 58726:
    {
        returnValue = F("Blockshausen");
        break;
    }
    case 58727:
    {
        returnValue = F("Blockshorenberg");
        break;
    }
    case 58728:
    {
        returnValue = F("Blockshornsweg");
        break;
    }
    case 58729:
    {
        returnValue = F("Blockskamp");
        break;
    }
    case 58730:
    {
        returnValue = F("Blocksreitdamm");
        break;
    }
    case 58731:
    {
        returnValue = F("Blockstation");
        break;
    }
    case 58732:
    {
        returnValue = F("Blocksteinweg");
        break;
    }
    case 58733:
    {
        returnValue = F("Blockstr.");
        break;
    }
    case 58734:
    {
        returnValue = F("Blocksweg");
        break;
    }
    case 58735:
    {
        returnValue = F("Blocktor");
        break;
    }
    case 58736:
    {
        returnValue = F("Blockweg");
        break;
    }
    case 58737:
    {
        returnValue = F("Blockwinkel");
        break;
    }
    case 58738:
    {
        returnValue = F("Blockwinkeler Str.");
        break;
    }
    case 58739:
    {
        returnValue = F("Blockäcker");
        break;
    }
    case 58740:
    {
        returnValue = F("Blodelsheimer Weg");
        break;
    }
    case 58741:
    {
        returnValue = F("Blodenberg");
        break;
    }
    case 58742:
    {
        returnValue = F("Blodenkamp");
        break;
    }
    case 58743:
    {
        returnValue = F("Bloecken");
        break;
    }
    case 58744:
    {
        returnValue = F("Bloeckenweg");
        break;
    }
    case 58745:
    {
        returnValue = F("Bloedaustr.");
        break;
    }
    case 58746:
    {
        returnValue = F("Bloemenkamp");
        break;
    }
    case 58747:
    {
        returnValue = F("Bloemersheimstr.");
        break;
    }
    case 58748:
    {
        returnValue = F("Blofelder Str.");
        break;
    }
    case 58749:
    {
        returnValue = F("Bloge");
        break;
    }
    case 58750:
    {
        returnValue = F("Bloher Landstr.");
        break;
    }
    case 58751:
    {
        returnValue = F("Bloher Pad");
        break;
    }
    case 58752:
    {
        returnValue = F("Blohmstr.");
        break;
    }
    case 58753:
    {
        returnValue = F("Blohngasse");
        break;
    }
    case 58754:
    {
        returnValue = F("Blohnstr.");
        break;
    }
    case 58755:
    {
        returnValue = F("Blohweg");
        break;
    }
    case 58756:
    {
        returnValue = F("Blois Str.");
        break;
    }
    case 58757:
    {
        returnValue = F("Bloischdorfer Weg");
        break;
    }
    case 58758:
    {
        returnValue = F("Bloisstr.");
        break;
    }
    case 58759:
    {
        returnValue = F("Blomberg");
        break;
    }
    case 58760:
    {
        returnValue = F("Blomberger Str.");
        break;
    }
    case 58761:
    {
        returnValue = F("Blomberger Weg");
        break;
    }
    case 58762:
    {
        returnValue = F("Blombergerstr.");
        break;
    }
    case 58763:
    {
        returnValue = F("Blombergstr.");
        break;
    }
    case 58764:
    {
        returnValue = F("Blombergweg");
        break;
    }
    case 58765:
    {
        returnValue = F("Blomedahler Weg");
        break;
    }
    case 58766:
    {
        returnValue = F("Blomekamp");
        break;
    }
    case 58767:
    {
        returnValue = F("Blomenacker");
        break;
    }
    case 58768:
    {
        returnValue = F("Blomenberg");
        break;
    }
    case 58769:
    {
        returnValue = F("Blomenburg");
        break;
    }
    case 58770:
    {
        returnValue = F("Blomenburger Allee");
        break;
    }
    case 58771:
    {
        returnValue = F("Blomendalstr.");
        break;
    }
    case 58772:
    {
        returnValue = F("Blomenesch");
        break;
    }
    case 58773:
    {
        returnValue = F("Blomenkamp");
        break;
    }
    case 58774:
    {
        returnValue = F("Blomenstein");
        break;
    }
    case 58775:
    {
        returnValue = F("Blomenweg");
        break;
    }
    case 58776:
    {
        returnValue = F("Blomericher Weg");
        break;
    }
    case 58777:
    {
        returnValue = F("Blomes Hof");
        break;
    }
    case 58778:
    {
        returnValue = F("Blomesaat");
        break;
    }
    case 58779:
    {
        returnValue = F("Blomestr.");
        break;
    }
    case 58780:
    {
        returnValue = F("Blomeweg");
        break;
    }
    case 58781:
    {
        returnValue = F("Blomlage");
        break;
    }
    case 58782:
    {
        returnValue = F("Blommelstr.");
        break;
    }
    case 58783:
    {
        returnValue = F("Blondelplatz");
        break;
    }
    case 58784:
    {
        returnValue = F("Blondelstr.");
        break;
    }
    case 58785:
    {
        returnValue = F("Blonderath");
        break;
    }
    case 58786:
    {
        returnValue = F("Blondergasse");
        break;
    }
    case 58787:
    {
        returnValue = F("Blonhofener Str.");
        break;
    }
    case 58788:
    {
        returnValue = F("Blonhofener Weg");
        break;
    }
    case 58789:
    {
        returnValue = F("Blonsberg-Weg");
        break;
    }
    case 58790:
    {
        returnValue = F("Blonsberger Str.");
        break;
    }
    case 58791:
    {
        returnValue = F("Bloogewäi");
        break;
    }
    case 58792:
    {
        returnValue = F("Blookweg");
        break;
    }
    case 58793:
    {
        returnValue = F("Bloomenkamp");
        break;
    }
    case 58794:
    {
        returnValue = F("Bloomfieldstr.");
        break;
    }
    case 58795:
    {
        returnValue = F("Bloomhof");
        break;
    }
    case 58796:
    {
        returnValue = F("Bloomsweg");
        break;
    }
    case 58797:
    {
        returnValue = F("Blosbergstr.");
        break;
    }
    case 58798:
    {
        returnValue = F("Blosebergstr.");
        break;
    }
    case 58799:
    {
        returnValue = F("Blosenberg");
        break;
    }
    case 58800:
    {
        returnValue = F("Blosenbergstr.");
        break;
    }
    case 58801:
    {
        returnValue = F("Blosenbergsträßle");
        break;
    }
    case 58802:
    {
        returnValue = F("Blosendorfer Str.");
        break;
    }
    case 58803:
    {
        returnValue = F("Blossenweg");
        break;
    }
    case 58804:
    {
        returnValue = F("Blosserberg");
        break;
    }
    case 58805:
    {
        returnValue = F("Blossersberger Str.");
        break;
    }
    case 58806:
    {
        returnValue = F("Blossiner Chaussee");
        break;
    }
    case 58807:
    {
        returnValue = F("Blossiner Hauptstr.");
        break;
    }
    case 58808:
    {
        returnValue = F("Blossiner Lücke");
        break;
    }
    case 58809:
    {
        returnValue = F("Blossiner Seeweg");
        break;
    }
    case 58810:
    {
        returnValue = F("Blossiner Stieg");
        break;
    }
    case 58811:
    {
        returnValue = F("Blossiner Str.");
        break;
    }
    case 58812:
    {
        returnValue = F("Blossiner Weg");
        break;
    }
    case 58813:
    {
        returnValue = F("Blostweg");
        break;
    }
    case 58814:
    {
        returnValue = F("Blote Steg");
        break;
    }
    case 58815:
    {
        returnValue = F("Blotzstr.");
        break;
    }
    case 58816:
    {
        returnValue = F("Bloumstücken");
        break;
    }
    case 58817:
    {
        returnValue = F("Bloße Eichhalde");
        break;
    }
    case 58818:
    {
        returnValue = F("Bloßenbergstr.");
        break;
    }
    case 58819:
    {
        returnValue = F("Bloßenbergweg");
        break;
    }
    case 58820:
    {
        returnValue = F("Bloßenbuck");
        break;
    }
    case 58821:
    {
        returnValue = F("Bloßenstaufenstr.");
        break;
    }
    case 58822:
    {
        returnValue = F("Bloßwitzer Str.");
        break;
    }
    case 58823:
    {
        returnValue = F("BluZi-Weg");
        break;
    }
    case 58824:
    {
        returnValue = F("Bluddenstr.");
        break;
    }
    case 58825:
    {
        returnValue = F("Bluddenweg");
        break;
    }
    case 58826:
    {
        returnValue = F("Bludenzer Str.");
        break;
    }
    case 58827:
    {
        returnValue = F("Blue Ridge Way");
        break;
    }
    case 58828:
    {
        returnValue = F("Blue-Ash-Platz");
        break;
    }
    case 58829:
    {
        returnValue = F("Bluemchen");
        break;
    }
    case 58830:
    {
        returnValue = F("Blumachergasse");
        break;
    }
    case 58831:
    {
        returnValue = F("Blumacker");
        break;
    }
    case 58832:
    {
        returnValue = F("Blumberg");
        break;
    }
    case 58833:
    {
        returnValue = F("Blumberger Chaussee");
        break;
    }
    case 58834:
    {
        returnValue = F("Blumberger Damm");
        break;
    }
    case 58835:
    {
        returnValue = F("Blumberger Str.");
        break;
    }
    case 58836:
    {
        returnValue = F("Blumberger Weg");
        break;
    }
    case 58837:
    {
        returnValue = F("Blumberger-Mühlen-Weg");
        break;
    }
    case 58838:
    {
        returnValue = F("Blumbergstr.");
        break;
    }
    case 58839:
    {
        returnValue = F("Blumbergweg");
        break;
    }
    case 58840:
    {
        returnValue = F("Blume");
        break;
    }
    case 58841:
    {
        returnValue = F("Blumegger Str.");
        break;
    }
    case 58842:
    {
        returnValue = F("Blumen Weg");
        break;
    }
    case 58843:
    {
        returnValue = F("Blumenacker");
        break;
    }
    case 58844:
    {
        returnValue = F("Blumenallee");
        break;
    }
    case 58845:
    {
        returnValue = F("Blumenanger");
        break;
    }
    case 58846:
    {
        returnValue = F("Blumenau");
        break;
    }
    case 58847:
    {
        returnValue = F("Blumenaue");
        break;
    }
    case 58848:
    {
        returnValue = F("Blumenauer Kirchweg");
        break;
    }
    case 58849:
    {
        returnValue = F("Blumenauer Str.");
        break;
    }
    case 58850:
    {
        returnValue = F("Blumenauer Weg");
        break;
    }
    case 58851:
    {
        returnValue = F("Blumenaustr.");
        break;
    }
    case 58852:
    {
        returnValue = F("Blumenauweg");
        break;
    }
    case 58853:
    {
        returnValue = F("Blumenbachstr.");
        break;
    }
    case 58854:
    {
        returnValue = F("Blumenberg");
        break;
    }
    case 58855:
    {
        returnValue = F("Blumenberger Str.");
        break;
    }
    case 58856:
    {
        returnValue = F("Blumenberger Weg");
        break;
    }
    case 58857:
    {
        returnValue = F("Blumenbergstr.");
        break;
    }
    case 58858:
    {
        returnValue = F("Blumenbrink");
        break;
    }
    case 58859:
    {
        returnValue = F("Blumenbruch");
        break;
    }
    case 58860:
    {
        returnValue = F("Blumenbrücke");
        break;
    }
    case 58861:
    {
        returnValue = F("Blumenbrückstr.");
        break;
    }
    case 58862:
    {
        returnValue = F("Blumenburg");
        break;
    }
    case 58863:
    {
        returnValue = F("Blumendelle");
        break;
    }
    case 58864:
    {
        returnValue = F("Blumendeller Str.");
        break;
    }
    case 58865:
    {
        returnValue = F("Blumendorf");
        break;
    }
    case 58866:
    {
        returnValue = F("Blumeneck");
        break;
    }
    case 58867:
    {
        returnValue = F("Blumeneckstr.");
        break;
    }
    case 58868:
    {
        returnValue = F("Blumenesch");
        break;
    }
    case 58869:
    {
        returnValue = F("Blumeneschenweg");
        break;
    }
    case 58870:
    {
        returnValue = F("Blumenfeld");
        break;
    }
    case 58871:
    {
        returnValue = F("Blumenfeldstr.");
        break;
    }
    case 58872:
    {
        returnValue = F("Blumenfenne");
        break;
    }
    case 58873:
    {
        returnValue = F("Blumengarten");
        break;
    }
    case 58874:
    {
        returnValue = F("Blumengasse");
        break;
    }
    case 58875:
    {
        returnValue = F("Blumengässle");
        break;
    }
    case 58876:
    {
        returnValue = F("Blumenhagen");
        break;
    }
    case 58877:
    {
        returnValue = F("Blumenhagener Str.");
        break;
    }
    case 58878:
    {
        returnValue = F("Blumenhain");
        break;
    }
    case 58879:
    {
        returnValue = F("Blumenhalde");
        break;
    }
    case 58880:
    {
        returnValue = F("Blumenhalle");
        break;
    }
    case 58881:
    {
        returnValue = F("Blumenhang");
        break;
    }
    case 58882:
    {
        returnValue = F("Blumenhauweg");
        break;
    }
    case 58883:
    {
        returnValue = F("Blumenhof");
        break;
    }
    case 58884:
    {
        returnValue = F("Blumenhofstr.");
        break;
    }
    case 58885:
    {
        returnValue = F("Blumenhofweg");
        break;
    }
    case 58886:
    {
        returnValue = F("Blumenhorst");
        break;
    }
    case 58887:
    {
        returnValue = F("Blumenhägerweg");
        break;
    }
    case 58888:
    {
        returnValue = F("Blumenhöhe");
        break;
    }
    case 58889:
    {
        returnValue = F("Blumeninsel");
        break;
    }
    case 58890:
    {
        returnValue = F("Blumenkamp");
        break;
    }
    case 58891:
    {
        returnValue = F("Blumenkamper Str.");
        break;
    }
    case 58892:
    {
        returnValue = F("Blumenkorso");
        break;
    }
    case 58893:
    {
        returnValue = F("Blumenlage");
        break;
    }
    case 58894:
    {
        returnValue = F("Blumenland");
        break;
    }
    case 58895:
    {
        returnValue = F("Blumenmahdenstr.");
        break;
    }
    case 58896:
    {
        returnValue = F("Blumenmorgen");
        break;
    }
    case 58897:
    {
        returnValue = F("Blumenmühlgasse");
        break;
    }
    case 58898:
    {
        returnValue = F("Blumenower Str.");
        break;
    }
    case 58899:
    {
        returnValue = F("Blumenpark zur Lore");
        break;
    }
    case 58900:
    {
        returnValue = F("Blumenpfad");
        break;
    }
    case 58901:
    {
        returnValue = F("Blumenplatz");
        break;
    }
    case 58902:
    {
        returnValue = F("Blumenrain");
        break;
    }
    case 58903:
    {
        returnValue = F("Blumenrather Str.");
        break;
    }
    case 58904:
    {
        returnValue = F("Blumenried");
        break;
    }
    case 58905:
    {
        returnValue = F("Blumenring");
        break;
    }
    case 58906:
    {
        returnValue = F("Blumenrode");
        break;
    }
    case 58907:
    {
        returnValue = F("Blumenroder Str.");
        break;
    }
    case 58908:
    {
        returnValue = F("Blumenröschenweg");
        break;
    }
    case 58909:
    {
        returnValue = F("Blumensteg");
        break;
    }
    case 58910:
    {
        returnValue = F("Blumensteig");
        break;
    }
    case 58911:
    {
        returnValue = F("Blumensteiner Str.");
        break;
    }
    case 58912:
    {
        returnValue = F("Blumensteinstr.");
        break;
    }
    case 58913:
    {
        returnValue = F("Blumenstetterstr.");
        break;
    }
    case 58914:
    {
        returnValue = F("Blumenstr.");
        break;
    }
    case 58915:
    {
        returnValue = F("Blumenstrichweg");
        break;
    }
    case 58916:
    {
        returnValue = F("Blumental");
        break;
    }
    case 58917:
    {
        returnValue = F("Blumentalstr.");
        break;
    }
    case 58918:
    {
        returnValue = F("Blumentalweg");
        break;
    }
    case 58919:
    {
        returnValue = F("Blumenthal");
        break;
    }
    case 58920:
    {
        returnValue = F("Blumenthal-Promenade");
        break;
    }
    case 58921:
    {
        returnValue = F("Blumenthaler Bahnhofstr.");
        break;
    }
    case 58922:
    {
        returnValue = F("Blumenthaler Berg");
        break;
    }
    case 58923:
    {
        returnValue = F("Blumenthaler Löh");
        break;
    }
    case 58924:
    {
        returnValue = F("Blumenthaler Str.");
        break;
    }
    case 58925:
    {
        returnValue = F("Blumenthaler Str. Ausbau");
        break;
    }
    case 58926:
    {
        returnValue = F("Blumenthaler Weg");
        break;
    }
    case 58927:
    {
        returnValue = F("Blumenthalstr.");
        break;
    }
    case 58928:
    {
        returnValue = F("Blumentopfweg");
        break;
    }
    case 58929:
    {
        returnValue = F("Blumentrave");
        break;
    }
    case 58930:
    {
        returnValue = F("Blumentstr.");
        break;
    }
    case 58931:
    {
        returnValue = F("Blumenwabe");
        break;
    }
    case 58932:
    {
        returnValue = F("Blumenwall");
        break;
    }
    case 58933:
    {
        returnValue = F("Blumenweg");
        break;
    }
    case 58934:
    {
        returnValue = F("Blumenwerderstr.");
        break;
    }
    case 58935:
    {
        returnValue = F("Blumenwiese");
        break;
    }
    case 58936:
    {
        returnValue = F("Blumenwinkel");
        break;
    }
    case 58937:
    {
        returnValue = F("Blumenwisch");
        break;
    }
    case 58938:
    {
        returnValue = F("Blumenwweg");
        break;
    }
    case 58939:
    {
        returnValue = F("Blumenäcker");
        break;
    }
    case 58940:
    {
        returnValue = F("Blumenäckerstr.");
        break;
    }
    case 58941:
    {
        returnValue = F("Blumersbergstr.");
        break;
    }
    case 58942:
    {
        returnValue = F("Blumert");
        break;
    }
    case 58943:
    {
        returnValue = F("Blumertsfeld");
        break;
    }
    case 58944:
    {
        returnValue = F("Blumeröder Dorfstr.");
        break;
    }
    case 58945:
    {
        returnValue = F("Blumeröder Str.");
        break;
    }
    case 58946:
    {
        returnValue = F("Blumesiedlung");
        break;
    }
    case 58947:
    {
        returnValue = F("Blumestr.");
        break;
    }
    case 58948:
    {
        returnValue = F("Blumfeldstr.");
        break;
    }
    case 58949:
    {
        returnValue = F("Blumgasse");
        break;
    }
    case 58950:
    {
        returnValue = F("Blumhardtstr.");
        break;
    }
    case 58951:
    {
        returnValue = F("Blumhardtweg");
        break;
    }
    case 58952:
    {
        returnValue = F("Blumhof");
        break;
    }
    case 58953:
    {
        returnValue = F("Blumhoferstr.");
        break;
    }
    case 58954:
    {
        returnValue = F("Blumhofstr.");
        break;
    }
    case 58955:
    {
        returnValue = F("Blumlage");
        break;
    }
    case 58956:
    {
        returnValue = F("Blumläger Kirchweg");
        break;
    }
    case 58957:
    {
        returnValue = F("Blumreisig");
        break;
    }
    case 58958:
    {
        returnValue = F("Blumroda");
        break;
    }
    case 58959:
    {
        returnValue = F("Blumrodaer Str.");
        break;
    }
    case 58960:
    {
        returnValue = F("Blumrodaer Weg");
        break;
    }
    case 58961:
    {
        returnValue = F("Blumröderweg");
        break;
    }
    case 58962:
    {
        returnValue = F("Blumsgasse");
        break;
    }
    case 58963:
    {
        returnValue = F("Blumsmühle");
        break;
    }
    case 58964:
    {
        returnValue = F("Blumstr.");
        break;
    }
    case 58965:
    {
        returnValue = F("Blumthaler Str.");
        break;
    }
    case 58966:
    {
        returnValue = F("Blumweg");
        break;
    }
    case 58967:
    {
        returnValue = F("Blunker Landstr.");
        break;
    }
    case 58968:
    {
        returnValue = F("Blunker Redder");
        break;
    }
    case 58969:
    {
        returnValue = F("Bluntschlistr.");
        break;
    }
    case 58970:
    {
        returnValue = F("Blussusstr.");
        break;
    }
    case 58971:
    {
        returnValue = F("Blustenweg");
        break;
    }
    case 58972:
    {
        returnValue = F("Blutangerweg");
        break;
    }
    case 58973:
    {
        returnValue = F("Blutapfelweg");
        break;
    }
    case 58974:
    {
        returnValue = F("Blutbildsweg");
        break;
    }
    case 58975:
    {
        returnValue = F("Blutborn");
        break;
    }
    case 58976:
    {
        returnValue = F("Blutbrunnenstr.");
        break;
    }
    case 58977:
    {
        returnValue = F("Blutbuchenallee");
        break;
    }
    case 58978:
    {
        returnValue = F("Blutbuchenstr.");
        break;
    }
    case 58979:
    {
        returnValue = F("Blutfennen");
        break;
    }
    case 58980:
    {
        returnValue = F("Blutgasse");
        break;
    }
    case 58981:
    {
        returnValue = F("Blutgraben");
        break;
    }
    case 58982:
    {
        returnValue = F("Blutgässchen");
        break;
    }
    case 58983:
    {
        returnValue = F("Bluthsluster Str.");
        break;
    }
    case 58984:
    {
        returnValue = F("Blutigelseeweg");
        break;
    }
    case 58985:
    {
        returnValue = F("Blutpfad");
        break;
    }
    case 58986:
    {
        returnValue = F("Blutrinne");
        break;
    }
    case 58987:
    {
        returnValue = F("Blutsbergstr.");
        break;
    }
    case 58988:
    {
        returnValue = F("Blutstr.");
        break;
    }
    case 58989:
    {
        returnValue = F("Bluttenbühl");
        break;
    }
    case 58990:
    {
        returnValue = F("Blutwiesenweg");
        break;
    }
    case 58991:
    {
        returnValue = F("Blyhamer Str.");
        break;
    }
    case 58992:
    {
        returnValue = F("Blyinghausen");
        break;
    }
    case 58993:
    {
        returnValue = F("Blägeweg");
        break;
    }
    case 58994:
    {
        returnValue = F("Blähaustr.");
        break;
    }
    case 58995:
    {
        returnValue = F("Bläserstr.");
        break;
    }
    case 58996:
    {
        returnValue = F("Bläserweg");
        break;
    }
    case 58997:
    {
        returnValue = F("Bläsesweg");
        break;
    }
    case 58998:
    {
        returnValue = F("Bläsibad");
        break;
    }
    case 58999:
    {
        returnValue = F("Bläsibergstr.");
        break;
    }
    case 59000:
    {
        returnValue = F("Bläsihöfe");
        break;
    }
    case 59001:
    {
        returnValue = F("Bläsiring");
        break;
    }
    case 59002:
    {
        returnValue = F("Bläsisgasse");
        break;
    }
    case 59003:
    {
        returnValue = F("Bläsiweg");
        break;
    }
    case 59004:
    {
        returnValue = F("Blätscherstr.");
        break;
    }
    case 59005:
    {
        returnValue = F("Blättelbornweg");
        break;
    }
    case 59006:
    {
        returnValue = F("Blätterberg");
        break;
    }
    case 59007:
    {
        returnValue = F("Blättermannsgasse");
        break;
    }
    case 59008:
    {
        returnValue = F("Blätteräcker");
        break;
    }
    case 59009:
    {
        returnValue = F("Blättringer Str.");
        break;
    }
    case 59010:
    {
        returnValue = F("Blätzer Str.");
        break;
    }
    case 59011:
    {
        returnValue = F("Bläuering");
        break;
    }
    case 59012:
    {
        returnValue = F("Bläulingsweg");
        break;
    }
    case 59013:
    {
        returnValue = F("Bläßer Höhe");
        break;
    }
    case 59014:
    {
        returnValue = F("Bläßhalde");
        break;
    }
    case 59015:
    {
        returnValue = F("Bläßhuhnweg");
        break;
    }
    case 59016:
    {
        returnValue = F("Blöcherhalde");
        break;
    }
    case 59017:
    {
        returnValue = F("Blöcherweg");
        break;
    }
    case 59018:
    {
        returnValue = F("Blöchlesteige");
        break;
    }
    case 59019:
    {
        returnValue = F("Blöchlestr.");
        break;
    }
    case 59020:
    {
        returnValue = F("Blöcken");
        break;
    }
    case 59021:
    {
        returnValue = F("Blöckenkoppel");
        break;
    }
    case 59022:
    {
        returnValue = F("Blöckenpfad");
        break;
    }
    case 59023:
    {
        returnValue = F("Blöckenredder");
        break;
    }
    case 59024:
    {
        returnValue = F("Blöckenstieg");
        break;
    }
    case 59025:
    {
        returnValue = F("Blöckenstr.");
        break;
    }
    case 59026:
    {
        returnValue = F("Blöckenweg");
        break;
    }
    case 59027:
    {
        returnValue = F("Blöckern");
        break;
    }
    case 59028:
    {
        returnValue = F("Blöckersdamm");
        break;
    }
    case 59029:
    {
        returnValue = F("Blöcktacher Str.");
        break;
    }
    case 59030:
    {
        returnValue = F("Blöckweg");
        break;
    }
    case 59031:
    {
        returnValue = F("Blöckäckerstr.");
        break;
    }
    case 59032:
    {
        returnValue = F("Blödaustr.");
        break;
    }
    case 59033:
    {
        returnValue = F("Blöhlein");
        break;
    }
    case 59034:
    {
        returnValue = F("Blöhsteinstr.");
        break;
    }
    case 59035:
    {
        returnValue = F("Blöken-Wiesenweg");
        break;
    }
    case 59036:
    {
        returnValue = F("Blökenstr.");
        break;
    }
    case 59037:
    {
        returnValue = F("Blökken");
        break;
    }
    case 59038:
    {
        returnValue = F("Blökstr.");
        break;
    }
    case 59039:
    {
        returnValue = F("Blömerstr.");
        break;
    }
    case 59040:
    {
        returnValue = F("Blömerweg");
        break;
    }
    case 59041:
    {
        returnValue = F("Blönrieder Str.");
        break;
    }
    case 59042:
    {
        returnValue = F("Blönsdorf");
        break;
    }
    case 59043:
    {
        returnValue = F("Blöschitzgasse");
        break;
    }
    case 59044:
    {
        returnValue = F("Blösenbergweg");
        break;
    }
    case 59045:
    {
        returnValue = F("Blösham");
        break;
    }
    case 59046:
    {
        returnValue = F("Blöshecke");
        break;
    }
    case 59047:
    {
        returnValue = F("Blössling");
        break;
    }
    case 59048:
    {
        returnValue = F("Blössling Gipfelweg");
        break;
    }
    case 59049:
    {
        returnValue = F("Blösslinhaldenweg");
        break;
    }
    case 59050:
    {
        returnValue = F("Blötter Weg");
        break;
    }
    case 59051:
    {
        returnValue = F("Blößenweg");
        break;
    }
    case 59052:
    {
        returnValue = F("Blößlingschauweg");
        break;
    }
    case 59053:
    {
        returnValue = F("Blößlingweg");
        break;
    }
    case 59054:
    {
        returnValue = F("Blößweg");
        break;
    }
    case 59055:
    {
        returnValue = F("Blöögam");
        break;
    }
    case 59056:
    {
        returnValue = F("Blücher");
        break;
    }
    case 59057:
    {
        returnValue = F("Blücherallee");
        break;
    }
    case 59058:
    {
        returnValue = F("Blüchereiche");
        break;
    }
    case 59059:
    {
        returnValue = F("Blüchergasse");
        break;
    }
    case 59060:
    {
        returnValue = F("Blücherplatz");
        break;
    }
    case 59061:
    {
        returnValue = F("Blücherring");
        break;
    }
    case 59062:
    {
        returnValue = F("Blüchersteig");
        break;
    }
    case 59063:
    {
        returnValue = F("Blücherstr.");
        break;
    }
    case 59064:
    {
        returnValue = F("Blücherweg");
        break;
    }
    case 59065:
    {
        returnValue = F("Blüffelstr.");
        break;
    }
    case 59066:
    {
        returnValue = F("Blüggelscheidt");
        break;
    }
    case 59067:
    {
        returnValue = F("Blühendes Barock");
        break;
    }
    case 59068:
    {
        returnValue = F("Blüherstr.");
        break;
    }
    case 59069:
    {
        returnValue = F("Blümchensaal");
        break;
    }
    case 59070:
    {
        returnValue = F("Blümchesfeld");
        break;
    }
    case 59071:
    {
        returnValue = F("Blümele");
        break;
    }
    case 59072:
    {
        returnValue = F("Blümelenweg");
        break;
    }
    case 59073:
    {
        returnValue = F("Blümelhubergasse");
        break;
    }
    case 59074:
    {
        returnValue = F("Blümelstalstr.");
        break;
    }
    case 59075:
    {
        returnValue = F("Blümelstr.");
        break;
    }
    case 59076:
    {
        returnValue = F("Blümelwiese");
        break;
    }
    case 59077:
    {
        returnValue = F("Blümenau");
        break;
    }
    case 59078:
    {
        returnValue = F("Blümer Hang");
        break;
    }
    case 59079:
    {
        returnValue = F("Blümetsweiler");
        break;
    }
    case 59080:
    {
        returnValue = F("Blümgesgrundstr.");
        break;
    }
    case 59081:
    {
        returnValue = F("Blümleinweg");
        break;
    }
    case 59082:
    {
        returnValue = F("Blümlesbronnensträßchen");
        break;
    }
    case 59083:
    {
        returnValue = F("Blümleskreisel");
        break;
    }
    case 59084:
    {
        returnValue = F("Blümlesmattenweg");
        break;
    }
    case 59085:
    {
        returnValue = F("Blümlingsweg");
        break;
    }
    case 59086:
    {
        returnValue = F("Blünimattstr.");
        break;
    }
    case 59087:
    {
        returnValue = F("Blüssen");
        break;
    }
    case 59088:
    {
        returnValue = F("Blütenallee");
        break;
    }
    case 59089:
    {
        returnValue = F("Blütenanger");
        break;
    }
    case 59090:
    {
        returnValue = F("Blütenberg");
        break;
    }
    case 59091:
    {
        returnValue = F("Blütenberger Weg");
        break;
    }
    case 59092:
    {
        returnValue = F("Blütengang");
        break;
    }
    case 59093:
    {
        returnValue = F("Blütengarten");
        break;
    }
    case 59094:
    {
        returnValue = F("Blütengasse");
        break;
    }
    case 59095:
    {
        returnValue = F("Blütenhain");
        break;
    }
    case 59096:
    {
        returnValue = F("Blütenhang");
        break;
    }
    case 59097:
    {
        returnValue = F("Blütenring");
        break;
    }
    case 59098:
    {
        returnValue = F("Blütensteig");
        break;
    }
    case 59099:
    {
        returnValue = F("Blütenstr.");
        break;
    }
    case 59100:
    {
        returnValue = F("Blütenweg");
        break;
    }
    case 59101:
    {
        returnValue = F("Blütenwiese");
        break;
    }
    case 59102:
    {
        returnValue = F("Blütenwinkel");
        break;
    }
    case 59103:
    {
        returnValue = F("Blütenäcker");
        break;
    }
    case 59104:
    {
        returnValue = F("Blüthener Weg");
        break;
    }
    case 59105:
    {
        returnValue = F("Boale Wegele");
        break;
    }
    case 59106:
    {
        returnValue = F("Boarenbarg");
        break;
    }
    case 59107:
    {
        returnValue = F("Boarweg");
        break;
    }
    case 59108:
    {
        returnValue = F("Bob Terp");
        break;
    }
    case 59109:
    {
        returnValue = F("Bob'n de Lieth");
        break;
    }
    case 59110:
    {
        returnValue = F("Bob-Dylan-Weg");
        break;
    }
    case 59111:
    {
        returnValue = F("Bob-Miller-Platz");
        break;
    }
    case 59112:
    {
        returnValue = F("Bobachshof");
        break;
    }
    case 59113:
    {
        returnValue = F("Bobbahn");
        break;
    }
    case 59114:
    {
        returnValue = F("Bobbauer Dorfstr.");
        break;
    }
    case 59115:
    {
        returnValue = F("Bobbauer Grünstr.");
        break;
    }
    case 59116:
    {
        returnValue = F("Bobbauer Str.");
        break;
    }
    case 59117:
    {
        returnValue = F("Bobbertswäch");
        break;
    }
    case 59118:
    {
        returnValue = F("Bobbertweg");
        break;
    }
    case 59119:
    {
        returnValue = F("Bobbin");
        break;
    }
    case 59120:
    {
        returnValue = F("Bobbiner Chaussee");
        break;
    }
    case 59121:
    {
        returnValue = F("Bobdikem");
        break;
    }
    case 59122:
    {
        returnValue = F("Boben Enn");
        break;
    }
    case 59123:
    {
        returnValue = F("Boben in Dörp");
        break;
    }
    case 59124:
    {
        returnValue = F("Bobenfeld");
        break;
    }
    case 59125:
    {
        returnValue = F("Bobengrüner Str.");
        break;
    }
    case 59126:
    {
        returnValue = F("Bobenhausenweg");
        break;
    }
    case 59127:
    {
        returnValue = F("Bobenheimer Str.");
        break;
    }
    case 59128:
    {
        returnValue = F("Bobenheimer Weg");
        break;
    }
    case 59129:
    {
        returnValue = F("Bobenholzweg");
        break;
    }
    case 59130:
    {
        returnValue = F("Bobenhäuser Str.");
        break;
    }
    case 59131:
    {
        returnValue = F("Bobenhäuser Weg");
        break;
    }
    case 59132:
    {
        returnValue = F("Bobenmeedeweg");
        break;
    }
    case 59133:
    {
        returnValue = F("Bobenneukirchener Str.");
        break;
    }
    case 59134:
    {
        returnValue = F("Bobenthaler Weg");
        break;
    }
    case 59135:
    {
        returnValue = F("Bobergasse");
        break;
    }
    case 59136:
    {
        returnValue = F("Boberger Str.");
        break;
    }
    case 59137:
    {
        returnValue = F("Bobergweg");
        break;
    }
    case 59138:
    {
        returnValue = F("Boberheide");
        break;
    }
    case 59139:
    {
        returnValue = F("Boberower Weg");
        break;
    }
    case 59140:
    {
        returnValue = F("Bobersbergstr.");
        break;
    }
    case 59141:
    {
        returnValue = F("Boberstr.");
        break;
    }
    case 59142:
    {
        returnValue = F("Boberweg");
        break;
    }
    case 59143:
    {
        returnValue = F("Bobes Feld");
        break;
    }
    case 59144:
    {
        returnValue = F("Bobie");
        break;
    }
    case 59145:
    {
        returnValue = F("Bobinethöfe");
        break;
    }
    case 59146:
    {
        returnValue = F("Bobinger Str.");
        break;
    }
    case 59147:
    {
        returnValue = F("Bobklint");
        break;
    }
    case 59148:
    {
        returnValue = F("Bobliner Damm");
        break;
    }
    case 59149:
    {
        returnValue = F("Boblitzer Str.");
        break;
    }
    case 59150:
    {
        returnValue = F("Bobmeere");
        break;
    }
    case 59151:
    {
        returnValue = F("Bobrinkstr.");
        break;
    }
    case 59152:
    {
        returnValue = F("Bobritzscher Str.");
        break;
    }
    case 59153:
    {
        returnValue = F("Bobritzschtalstr.");
        break;
    }
    case 59154:
    {
        returnValue = F("Bobstadter Str.");
        break;
    }
    case 59155:
    {
        returnValue = F("Bobstädter Str.");
        break;
    }
    case 59156:
    {
        returnValue = F("Bobziner Weg");
        break;
    }
    case 59157:
    {
        returnValue = F("Bocciapark");
        break;
    }
    case 59158:
    {
        returnValue = F("Bocerstr.");
        break;
    }
    case 59159:
    {
        returnValue = F("Bochen");
        break;
    }
    case 59160:
    {
        returnValue = F("Bochiner Str.");
        break;
    }
    case 59161:
    {
        returnValue = F("Bochinger Str.");
        break;
    }
    case 59162:
    {
        returnValue = F("Bocholder Esch");
        break;
    }
    case 59163:
    {
        returnValue = F("Bocholt");
        break;
    }
    case 59164:
    {
        returnValue = F("Bocholter Diek");
        break;
    }
    case 59165:
    {
        returnValue = F("Bocholter Str.");
        break;
    }
    case 59166:
    {
        returnValue = F("Bocholter Weg");
        break;
    }
    case 59167:
    {
        returnValue = F("Bochow");
        break;
    }
    case 59168:
    {
        returnValue = F("Bochower Plan");
        break;
    }
    case 59169:
    {
        returnValue = F("Bochower Weg");
        break;
    }
    case 59170:
    {
        returnValue = F("Bochowstr.");
        break;
    }
    case 59171:
    {
        returnValue = F("Bochstr.");
        break;
    }
    case 59172:
    {
        returnValue = F("Bochumer Platz");
        break;
    }
    case 59173:
    {
        returnValue = F("Bochumer Str.");
        break;
    }
    case 59174:
    {
        returnValue = F("Bochumer Weg");
        break;
    }
    case 59175:
    {
        returnValue = F("Bock-Schneise");
        break;
    }
    case 59176:
    {
        returnValue = F("Bockaer Str.");
        break;
    }
    case 59177:
    {
        returnValue = F("Bockaschetwete");
        break;
    }
    case 59178:
    {
        returnValue = F("Bockau Rundteil");
        break;
    }
    case 59179:
    {
        returnValue = F("Bockau-Jägerhaus");
        break;
    }
    case 59180:
    {
        returnValue = F("Bockau-Lauter");
        break;
    }
    case 59181:
    {
        returnValue = F("Bockauer Gasse");
        break;
    }
    case 59182:
    {
        returnValue = F("Bockauer Ring");
        break;
    }
    case 59183:
    {
        returnValue = F("Bockauer Str.");
        break;
    }
    case 59184:
    {
        returnValue = F("Bockauer Talstr.");
        break;
    }
    case 59185:
    {
        returnValue = F("Bockauer Weg");
        break;
    }
    case 59186:
    {
        returnValue = F("Bockautalstr.");
        break;
    }
    case 59187:
    {
        returnValue = F("Bockbauernweg");
        break;
    }
    case 59188:
    {
        returnValue = F("Bockel");
        break;
    }
    case 59189:
    {
        returnValue = F("Bockeldamm");
        break;
    }
    case 59190:
    {
        returnValue = F("Bockeler Bundesstr.");
        break;
    }
    case 59191:
    {
        returnValue = F("Bockeler Ring");
        break;
    }
    case 59192:
    {
        returnValue = F("Bockeler Schweiz");
        break;
    }
    case 59193:
    {
        returnValue = F("Bockeler Str.");
        break;
    }
    case 59194:
    {
        returnValue = F("Bockelfelder Str.");
        break;
    }
    case 59195:
    {
        returnValue = F("Bockelhorner Weg");
        break;
    }
    case 59196:
    {
        returnValue = F("Bockelkathener Str.");
        break;
    }
    case 59197:
    {
        returnValue = F("Bockelmannstr.");
        break;
    }
    case 59198:
    {
        returnValue = F("Bockelnhagener Str.");
        break;
    }
    case 59199:
    {
        returnValue = F("Bockelpromenade");
        break;
    }
    case 59200:
    {
        returnValue = F("Bockelsburger Weg");
        break;
    }
    case 59201:
    {
        returnValue = F("Bockelsdorfer Weg");
        break;
    }
    case 59202:
    {
        returnValue = F("Bockelskämper Weg");
        break;
    }
    case 59203:
    {
        returnValue = F("Bockemölenstr.");
        break;
    }
    case 59204:
    {
        returnValue = F("Bockenauer Str.");
        break;
    }
    case 59205:
    {
        returnValue = F("Bockenauer Weg");
        break;
    }
    case 59206:
    {
        returnValue = F("Bockenbachstr.");
        break;
    }
    case 59207:
    {
        returnValue = F("Bockenbaum");
        break;
    }
    case 59208:
    {
        returnValue = F("Bockenberg");
        break;
    }
    case 59209:
    {
        returnValue = F("Bockenbergweg (KM)");
        break;
    }
    case 59210:
    {
        returnValue = F("Bockenbuscher Weg");
        break;
    }
    case 59211:
    {
        returnValue = F("Bockenemer Str.");
        break;
    }
    case 59212:
    {
        returnValue = F("Bockenfelder Str.");
        break;
    }
    case 59213:
    {
        returnValue = F("Bockenheimer Bachweg");
        break;
    }
    case 59214:
    {
        returnValue = F("Bockenheimer Str.");
        break;
    }
    case 59215:
    {
        returnValue = F("Bockenheimer Weg");
        break;
    }
    case 59216:
    {
        returnValue = F("Bockenweg");
        break;
    }
    case 59217:
    {
        returnValue = F("Bockerlbahn-Weg");
        break;
    }
    case 59218:
    {
        returnValue = F("Bockernweg");
        break;
    }
    case 59219:
    {
        returnValue = F("Bockeroder Weg");
        break;
    }
    case 59220:
    {
        returnValue = F("Bockerother Str.");
        break;
    }
    case 59221:
    {
        returnValue = F("Bockersbaum");
        break;
    }
    case 59222:
    {
        returnValue = F("Bockerter Str.");
        break;
    }
    case 59223:
    {
        returnValue = F("Bocket");
        break;
    }
    case 59224:
    {
        returnValue = F("Bocketaler Str.");
        break;
    }
    case 59225:
    {
        returnValue = F("Bocketer Weg");
        break;
    }
    case 59226:
    {
        returnValue = F("Bocketzgracht");
        break;
    }
    case 59227:
    {
        returnValue = F("Bockfelsenweg");
        break;
    }
    case 59228:
    {
        returnValue = F("Bockgasse");
        break;
    }
    case 59229:
    {
        returnValue = F("Bockgrabenweg");
        break;
    }
    case 59230:
    {
        returnValue = F("Bockgutweg");
        break;
    }
    case 59231:
    {
        returnValue = F("Bockhacken");
        break;
    }
    case 59232:
    {
        returnValue = F("Bockhackerstr.");
        break;
    }
    case 59233:
    {
        returnValue = F("Bockhalde");
        break;
    }
    case 59234:
    {
        returnValue = F("Bockheberer Weg");
        break;
    }
    case 59235:
    {
        returnValue = F("Bockhof");
        break;
    }
    case 59236:
    {
        returnValue = F("Bockhofstr.");
        break;
    }
    case 59237:
    {
        returnValue = F("Bockhofweg");
        break;
    }
    case 59238:
    {
        returnValue = F("Bockholmwik");
        break;
    }
    case 59239:
    {
        returnValue = F("Bockholmwiker Str.");
        break;
    }
    case 59240:
    {
        returnValue = F("Bockholt");
        break;
    }
    case 59241:
    {
        returnValue = F("Bockholter Baum");
        break;
    }
    case 59242:
    {
        returnValue = F("Bockholter Str.");
        break;
    }
    case 59243:
    {
        returnValue = F("Bockholter Weg");
        break;
    }
    case 59244:
    {
        returnValue = F("Bockholtstr.");
        break;
    }
    case 59245:
    {
        returnValue = F("Bockholtsweg");
        break;
    }
    case 59246:
    {
        returnValue = F("Bockholz");
        break;
    }
    case 59247:
    {
        returnValue = F("Bockholzlinie");
        break;
    }
    case 59248:
    {
        returnValue = F("Bockhooper Str.");
        break;
    }
    case 59249:
    {
        returnValue = F("Bockhoopsweg");
        break;
    }
    case 59250:
    {
        returnValue = F("Bockhorn");
        break;
    }
    case 59251:
    {
        returnValue = F("Bockhorner Allee");
        break;
    }
    case 59252:
    {
        returnValue = F("Bockhorner Grenzweg");
        break;
    }
    case 59253:
    {
        returnValue = F("Bockhorner Heide");
        break;
    }
    case 59254:
    {
        returnValue = F("Bockhorner Landstr.");
        break;
    }
    case 59255:
    {
        returnValue = F("Bockhorner Str.");
        break;
    }
    case 59256:
    {
        returnValue = F("Bockhorner Weg");
        break;
    }
    case 59257:
    {
        returnValue = F("Bockhorst");
        break;
    }
    case 59258:
    {
        returnValue = F("Bockhorster Damm");
        break;
    }
    case 59259:
    {
        returnValue = F("Bockhorster Dorfstr.");
        break;
    }
    case 59260:
    {
        returnValue = F("Bockhorster Landweg");
        break;
    }
    case 59261:
    {
        returnValue = F("Bockhorster Moor");
        break;
    }
    case 59262:
    {
        returnValue = F("Bockhorster Str.");
        break;
    }
    case 59263:
    {
        returnValue = F("Bockhorster Str.-Ost");
        break;
    }
    case 59264:
    {
        returnValue = F("Bockhorster Weg");
        break;
    }
    case 59265:
    {
        returnValue = F("Bockhorstweg");
        break;
    }
    case 59266:
    {
        returnValue = F("Bockhub");
        break;
    }
    case 59267:
    {
        returnValue = F("Bockhöft");
        break;
    }
    case 59268:
    {
        returnValue = F("Bockhöh");
        break;
    }
    case 59269:
    {
        returnValue = F("Bockhörn");
        break;
    }
    case 59270:
    {
        returnValue = F("Bockigter Stein");
        break;
    }
    case 59271:
    {
        returnValue = F("Bockmarschweg");
        break;
    }
    case 59272:
    {
        returnValue = F("Bockmayrstr.");
        break;
    }
    case 59273:
    {
        returnValue = F("Bockmoosweg");
        break;
    }
    case 59274:
    {
        returnValue = F("Bockmättleweg");
        break;
    }
    case 59275:
    {
        returnValue = F("Bockmühlenhof");
        break;
    }
    case 59276:
    {
        returnValue = F("Bockmühlenstr.");
        break;
    }
    case 59277:
    {
        returnValue = F("Bockmühlenweg");
        break;
    }
    case 59278:
    {
        returnValue = F("Bockmühlweg");
        break;
    }
    case 59279:
    {
        returnValue = F("Bockradener Schulstr.");
        break;
    }
    case 59280:
    {
        returnValue = F("Bockradener Str.");
        break;
    }
    case 59281:
    {
        returnValue = F("Bockreiterstr.");
        break;
    }
    case 59282:
    {
        returnValue = F("Bockrieß");
        break;
    }
    case 59283:
    {
        returnValue = F("Bocks Allee");
        break;
    }
    case 59284:
    {
        returnValue = F("Bocks Gärten");
        break;
    }
    case 59285:
    {
        returnValue = F("Bocksacker");
        break;
    }
    case 59286:
    {
        returnValue = F("Bocksbartweg");
        break;
    }
    case 59287:
    {
        returnValue = F("Bocksbeere");
        break;
    }
    case 59288:
    {
        returnValue = F("Bocksberg");
        break;
    }
    case 59289:
    {
        returnValue = F("Bocksberger Str.");
        break;
    }
    case 59290:
    {
        returnValue = F("Bocksberger Weg");
        break;
    }
    case 59291:
    {
        returnValue = F("Bocksbergerstr.");
        break;
    }
    case 59292:
    {
        returnValue = F("Bocksbergstr.");
        break;
    }
    case 59293:
    {
        returnValue = F("Bocksbergweg");
        break;
    }
    case 59294:
    {
        returnValue = F("Bocksbeutelstr.");
        break;
    }
    case 59295:
    {
        returnValue = F("Bocksbrinkweg");
        break;
    }
    case 59296:
    {
        returnValue = F("Bocksbrändchen");
        break;
    }
    case 59297:
    {
        returnValue = F("Bocksbrücke");
        break;
    }
    case 59298:
    {
        returnValue = F("Bocksbrückenweg");
        break;
    }
    case 59299:
    {
        returnValue = F("Bocksbühlweg");
        break;
    }
    case 59300:
    {
        returnValue = F("Bockschatzweg");
        break;
    }
    case 59301:
    {
        returnValue = F("Bockschmiede");
        break;
    }
    case 59302:
    {
        returnValue = F("Bockschneise");
        break;
    }
    case 59303:
    {
        returnValue = F("Bockschützstr.");
        break;
    }
    case 59304:
    {
        returnValue = F("Bocksdornweg");
        break;
    }
    case 59305:
    {
        returnValue = F("Bocksebene");
        break;
    }
    case 59306:
    {
        returnValue = F("Bockseifer Str.");
        break;
    }
    case 59307:
    {
        returnValue = F("Bocksfelde");
        break;
    }
    case 59308:
    {
        returnValue = F("Bocksgang");
        break;
    }
    case 59309:
    {
        returnValue = F("Bocksgasse");
        break;
    }
    case 59310:
    {
        returnValue = F("Bocksgrabenweg");
        break;
    }
    case 59311:
    {
        returnValue = F("Bocksgrundweg");
        break;
    }
    case 59312:
    {
        returnValue = F("Bocksgäßchen");
        break;
    }
    case 59313:
    {
        returnValue = F("Bockshard");
        break;
    }
    case 59314:
    {
        returnValue = F("Bockshecke");
        break;
    }
    case 59315:
    {
        returnValue = F("Bockshof");
        break;
    }
    case 59316:
    {
        returnValue = F("Bockshohner Hofweg");
        break;
    }
    case 59317:
    {
        returnValue = F("Bockshorn");
        break;
    }
    case 59318:
    {
        returnValue = F("Bockshornweg");
        break;
    }
    case 59319:
    {
        returnValue = F("Bockshorst");
        break;
    }
    case 59320:
    {
        returnValue = F("Bockshäldenhohl");
        break;
    }
    case 59321:
    {
        returnValue = F("Bockshöll");
        break;
    }
    case 59322:
    {
        returnValue = F("Bockshügel");
        break;
    }
    case 59323:
    {
        returnValue = F("Bocksiefen");
        break;
    }
    case 59324:
    {
        returnValue = F("Bockskamp");
        break;
    }
    case 59325:
    {
        returnValue = F("Bockskirn");
        break;
    }
    case 59326:
    {
        returnValue = F("Bockskoppel");
        break;
    }
    case 59327:
    {
        returnValue = F("Bockslache");
        break;
    }
    case 59328:
    {
        returnValue = F("Bockslager");
        break;
    }
    case 59329:
    {
        returnValue = F("Bockslehde");
        break;
    }
    case 59330:
    {
        returnValue = F("Bocksleite");
        break;
    }
    case 59331:
    {
        returnValue = F("Bocksleithen");
        break;
    }
    case 59332:
    {
        returnValue = F("Bocksnacken");
        break;
    }
    case 59333:
    {
        returnValue = F("Bockspfad");
        break;
    }
    case 59334:
    {
        returnValue = F("Bocksrade");
        break;
    }
    case 59335:
    {
        returnValue = F("Bocksrader Bogen");
        break;
    }
    case 59336:
    {
        returnValue = F("Bocksredder");
        break;
    }
    case 59337:
    {
        returnValue = F("Bocksrüde");
        break;
    }
    case 59338:
    {
        returnValue = F("Bockstadter Weg");
        break;
    }
    case 59339:
    {
        returnValue = F("Bockstal");
        break;
    }
    case 59340:
    {
        returnValue = F("Bockstall Weg");
        break;
    }
    case 59341:
    {
        returnValue = F("Bockstalstr.");
        break;
    }
    case 59342:
    {
        returnValue = F("Bockstanz");
        break;
    }
    case 59343:
    {
        returnValue = F("Bockstatt");
        break;
    }
    case 59344:
    {
        returnValue = F("Bockstedt");
        break;
    }
    case 59345:
    {
        returnValue = F("Bockstedter Str.");
        break;
    }
    case 59346:
    {
        returnValue = F("Bocksteen");
        break;
    }
    case 59347:
    {
        returnValue = F("Bocksteinstr.");
        break;
    }
    case 59348:
    {
        returnValue = F("Bocksteinweg");
        break;
    }
    case 59349:
    {
        returnValue = F("Bockstorplatz");
        break;
    }
    case 59350:
    {
        returnValue = F("Bockstr.");
        break;
    }
    case 59351:
    {
        returnValue = F("Bockstreue");
        break;
    }
    case 59352:
    {
        returnValue = F("Bockstwete");
        break;
    }
    case 59353:
    {
        returnValue = F("Bockstädter Str.");
        break;
    }
    case 59354:
    {
        returnValue = F("Bocksweg");
        break;
    }
    case 59355:
    {
        returnValue = F("Bockswiese");
        break;
    }
    case 59356:
    {
        returnValue = F("Bockswiesen");
        break;
    }
    case 59357:
    {
        returnValue = F("Bockswieser Str.");
        break;
    }
    case 59358:
    {
        returnValue = F("Bockswinkel");
        break;
    }
    case 59359:
    {
        returnValue = F("Bocksäcker");
        break;
    }
    case 59360:
    {
        returnValue = F("Bocksäckerstr.");
        break;
    }
    case 59361:
    {
        returnValue = F("Bocktalstr.");
        break;
    }
    case 59362:
    {
        returnValue = F("Bockum");
        break;
    }
    case 59363:
    {
        returnValue = F("Bockum-Dolffs-Str.");
        break;
    }
    case 59364:
    {
        returnValue = F("Bockum-Dollfs-Gasse");
        break;
    }
    case 59365:
    {
        returnValue = F("Bockumer Platz");
        break;
    }
    case 59366:
    {
        returnValue = F("Bockumer Str.");
        break;
    }
    case 59367:
    {
        returnValue = F("Bockumer Weg");
        break;
    }
    case 59368:
    {
        returnValue = F("Bockumpfad");
        break;
    }
    case 59369:
    {
        returnValue = F("Bockumweg");
        break;
    }
    case 59370:
    {
        returnValue = F("Bockwaer Kohlenstr.");
        break;
    }
    case 59371:
    {
        returnValue = F("Bockwaer Str.");
        break;
    }
    case 59372:
    {
        returnValue = F("Bockwaer Weg");
        break;
    }
    case 59373:
    {
        returnValue = F("Bockweg");
        break;
    }
    case 59374:
    {
        returnValue = F("Bockwener Allee");
        break;
    }
    case 59375:
    {
        returnValue = F("Bockwener Ring");
        break;
    }
    case 59376:
    {
        returnValue = F("Bockwener Weg");
        break;
    }
    case 59377:
    {
        returnValue = F("Bockwieder Str.");
        break;
    }
    case 59378:
    {
        returnValue = F("Bockwindmühlenplatz");
        break;
    }
    case 59379:
    {
        returnValue = F("Bockwinkel");
        break;
    }
    case 59380:
    {
        returnValue = F("Bockwirtsgasse");
        break;
    }
    case 59381:
    {
        returnValue = F("Bockwisch");
        break;
    }
    case 59382:
    {
        returnValue = F("Bockwischer Weg");
        break;
    }
    case 59383:
    {
        returnValue = F("Bockwitz");
        break;
    }
    case 59384:
    {
        returnValue = F("Bockwitzer Dorfstr.");
        break;
    }
    case 59385:
    {
        returnValue = F("Bockwitzer Hauptstr.");
        break;
    }
    case 59386:
    {
        returnValue = F("Bockwitzer Str.");
        break;
    }
    case 59387:
    {
        returnValue = F("Bockwitzer Weg");
        break;
    }
    case 59388:
    {
        returnValue = F("Bockäckerweg");
        break;
    }
    case 59389:
    {
        returnValue = F("Bocköd");
        break;
    }
    case 59390:
    {
        returnValue = F("Bodanrückstr.");
        break;
    }
    case 59391:
    {
        returnValue = F("Bodanstr.");
        break;
    }
    case 59392:
    {
        returnValue = F("Bodanweg");
        break;
    }
    case 59393:
    {
        returnValue = F("Boddelweg");
        break;
    }
    case 59394:
    {
        returnValue = F("Boddenblick");
        break;
    }
    case 59395:
    {
        returnValue = F("Boddenhörn");
        break;
    }
    case 59396:
    {
        returnValue = F("Boddenring");
        break;
    }
    case 59397:
    {
        returnValue = F("Boddensbrok");
        break;
    }
    case 59398:
    {
        returnValue = F("Boddenstr.");
        break;
    }
    case 59399:
    {
        returnValue = F("Boddenweg");
        break;
    }
    case 59400:
    {
        returnValue = F("Bodderbarg");
        break;
    }
    case 59401:
    {
        returnValue = F("Bodderfatt");
        break;
    }
    case 59402:
    {
        returnValue = F("Bodderkuhl");
        break;
    }
    case 59403:
    {
        returnValue = F("Boddermelkstraat");
        break;
    }
    case 59404:
    {
        returnValue = F("Boddert");
        break;
    }
    case 59405:
    {
        returnValue = F("Bodderwech");
        break;
    }
    case 59406:
    {
        returnValue = F("Bodderweg");
        break;
    }
    case 59407:
    {
        returnValue = F("Boddestr.");
        break;
    }
    case 59408:
    {
        returnValue = F("Boddin Ausbau");
        break;
    }
    case 59409:
    {
        returnValue = F("Boddiner Dorfstr.");
        break;
    }
    case 59410:
    {
        returnValue = F("Boddiner Weg");
        break;
    }
    case 59411:
    {
        returnValue = F("Boddiner Weg Bölzke");
        break;
    }
    case 59412:
    {
        returnValue = F("Boddinsfelder Eck");
        break;
    }
    case 59413:
    {
        returnValue = F("Bode-Ring");
        break;
    }
    case 59414:
    {
        returnValue = F("Bodeberg");
        break;
    }
    case 59415:
    {
        returnValue = F("Bodeblick");
        break;
    }
    case 59416:
    {
        returnValue = F("Bodebrücke");
        break;
    }
    case 59417:
    {
        returnValue = F("Bodekamp");
        break;
    }
    case 59418:
    {
        returnValue = F("Bodellerstr.");
        break;
    }
    case 59419:
    {
        returnValue = F("Bodelschwinghbrücke");
        break;
    }
    case 59420:
    {
        returnValue = F("Bodelschwingher Str.");
        break;
    }
    case 59421:
    {
        returnValue = F("Bodelschwinghstr.");
        break;
    }
    case 59422:
    {
        returnValue = F("Bodelschwinghweg");
        break;
    }
    case 59423:
    {
        returnValue = F("Bodelshausener Str.");
        break;
    }
    case 59424:
    {
        returnValue = F("Bodelshofer Str.");
        break;
    }
    case 59425:
    {
        returnValue = F("Bodelshofer Weg");
        break;
    }
    case 59426:
    {
        returnValue = F("Bodelshäuser Str.");
        break;
    }
    case 59427:
    {
        returnValue = F("Bodelwitzer Str.");
        break;
    }
    case 59428:
    {
        returnValue = F("Bodelwitzer Weg");
        break;
    }
    case 59429:
    {
        returnValue = F("Bodemannstr.");
        break;
    }
    case 59430:
    {
        returnValue = F("Bodemar");
        break;
    }
    case 59431:
    {
        returnValue = F("Bodemersiedlung");
        break;
    }
    case 59432:
    {
        returnValue = F("Bodemstr.");
        break;
    }
    case 59433:
    {
        returnValue = F("Boden");
        break;
    }
    case 59434:
    {
        returnValue = F("Bodenacker");
        break;
    }
    case 59435:
    {
        returnValue = F("Bodenackerstr.");
        break;
    }
    case 59436:
    {
        returnValue = F("Bodenbacher Ring");
        break;
    }
    case 59437:
    {
        returnValue = F("Bodenbacher Str.");
        break;
    }
    case 59438:
    {
        returnValue = F("Bodenbacher Weg");
        break;
    }
    case 59439:
    {
        returnValue = F("Bodenbacher Winkel");
        break;
    }
    case 59440:
    {
        returnValue = F("Bodenbachweg");
        break;
    }
    case 59441:
    {
        returnValue = F("Bodenbaumgasse");
        break;
    }
    case 59442:
    {
        returnValue = F("Bodenbenderstr.");
        break;
    }
    case 59443:
    {
        returnValue = F("Bodenberg");
        break;
    }
    case 59444:
    {
        returnValue = F("Bodenberg-Weg");
        break;
    }
    case 59445:
    {
        returnValue = F("Bodenbergstr.");
        break;
    }
    case 59446:
    {
        returnValue = F("Bodenburger Str.");
        break;
    }
    case 59447:
    {
        returnValue = F("Bodendorfer Str.");
        break;
    }
    case 59448:
    {
        returnValue = F("Bodendorfer Weg");
        break;
    }
    case 59449:
    {
        returnValue = F("Bodenehrstr.");
        break;
    }
    case 59450:
    {
        returnValue = F("Bodenehrweg");
        break;
    }
    case 59451:
    {
        returnValue = F("Bodenengern");
        break;
    }
    case 59452:
    {
        returnValue = F("Bodenenweg");
        break;
    }
    case 59453:
    {
        returnValue = F("Bodener Landstr.");
        break;
    }
    case 59454:
    {
        returnValue = F("Bodener Str.");
        break;
    }
    case 59455:
    {
        returnValue = F("Bodener Weg");
        break;
    }
    case 59456:
    {
        returnValue = F("Bodenerlebnispfad");
        break;
    }
    case 59457:
    {
        returnValue = F("Bodenfeld");
        break;
    }
    case 59458:
    {
        returnValue = F("Bodenfelder Str.");
        break;
    }
    case 59459:
    {
        returnValue = F("Bodenfeldstr.");
        break;
    }
    case 59460:
    {
        returnValue = F("Bodenfeldweg");
        break;
    }
    case 59461:
    {
        returnValue = F("Bodengasse");
        break;
    }
    case 59462:
    {
        returnValue = F("Bodengrund");
        break;
    }
    case 59463:
    {
        returnValue = F("Bodenhald");
        break;
    }
    case 59464:
    {
        returnValue = F("Bodenhaldenweg");
        break;
    }
    case 59465:
    {
        returnValue = F("Bodenhaus");
        break;
    }
    case 59466:
    {
        returnValue = F("Bodenheimer Str.");
        break;
    }
    case 59467:
    {
        returnValue = F("Bodenheimer Weg");
        break;
    }
    case 59468:
    {
        returnValue = F("Bodenhof");
        break;
    }
    case 59469:
    {
        returnValue = F("Bodenhofer Weg");
        break;
    }
    case 59470:
    {
        returnValue = F("Bodenholzsackweg");
        break;
    }
    case 59471:
    {
        returnValue = F("Bodenholztraufweg");
        break;
    }
    case 59472:
    {
        returnValue = F("Bodenholzweg");
        break;
    }
    case 59473:
    {
        returnValue = F("Bodenhurstweg");
        break;
    }
    case 59474:
    {
        returnValue = F("Bodenhöfer Str.");
        break;
    }
    case 59475:
    {
        returnValue = F("Bodenleitenstr.");
        break;
    }
    case 59476:
    {
        returnValue = F("Bodenländchen");
        break;
    }
    case 59477:
    {
        returnValue = F("Bodenmaiser Str.");
        break;
    }
    case 59478:
    {
        returnValue = F("Bodenmaiserstr.");
        break;
    }
    case 59479:
    {
        returnValue = F("Bodenmattenweg");
        break;
    }
    case 59480:
    {
        returnValue = F("Bodenmühle");
        break;
    }
    case 59481:
    {
        returnValue = F("Bodenmühlenweg");
        break;
    }
    case 59482:
    {
        returnValue = F("Bodenrain");
        break;
    }
    case 59483:
    {
        returnValue = F("Bodenrainweg");
        break;
    }
    case 59484:
    {
        returnValue = F("Bodenreform");
        break;
    }
    case 59485:
    {
        returnValue = F("Bodenreformsiedlung");
        break;
    }
    case 59486:
    {
        returnValue = F("Bodenreformstr.");
        break;
    }
    case 59487:
    {
        returnValue = F("Bodenreformweg");
        break;
    }
    case 59488:
    {
        returnValue = F("Bodenreuth");
        break;
    }
    case 59489:
    {
        returnValue = F("Bodenreuther Weg");
        break;
    }
    case 59490:
    {
        returnValue = F("Bodenroder Weg");
        break;
    }
    case 59491:
    {
        returnValue = F("Bodenröder Kirchweg");
        break;
    }
    case 59492:
    {
        returnValue = F("Bodenröder Str.");
        break;
    }
    case 59493:
    {
        returnValue = F("Bodens");
        break;
    }
    case 59494:
    {
        returnValue = F("Bodens Weg");
        break;
    }
    case 59495:
    {
        returnValue = F("Bodenschatzstr.");
        break;
    }
    case 59496:
    {
        returnValue = F("Bodenschlagweg");
        break;
    }
    case 59497:
    {
        returnValue = F("Bodenschneidstr.");
        break;
    }
    case 59498:
    {
        returnValue = F("Bodenschneidweg");
        break;
    }
    case 59499:
    {
        returnValue = F("Bodenschneise");
        break;
    }
    case 59500:
    {
        returnValue = F("Bodenseeallee");
        break;
    }
    case 59501:
    {
        returnValue = F("Bodenseeblick");
        break;
    }
    case 59502:
    {
        returnValue = F("Bodenseer Str.");
        break;
    }
    case 59503:
    {
        returnValue = F("Bodenseering");
        break;
    }
    case 59504:
    {
        returnValue = F("Bodenseestr.");
        break;
    }
    case 59505:
    {
        returnValue = F("Bodenseestr. (Baustelle bis 2022-07-08)");
        break;
    }
    case 59506:
    {
        returnValue = F("Bodensfeld");
        break;
    }
    case 59507:
    {
        returnValue = F("Bodensiek");
        break;
    }
    case 59508:
    {
        returnValue = F("Bodenskamp");
        break;
    }
    case 59509:
    {
        returnValue = F("Bodenstedter Str.");
        break;
    }
    case 59510:
    {
        returnValue = F("Bodenstedter Weg");
        break;
    }
    case 59511:
    {
        returnValue = F("Bodenstedtstr.");
        break;
    }
    case 59512:
    {
        returnValue = F("Bodenstedtsweg");
        break;
    }
    case 59513:
    {
        returnValue = F("Bodenstein");
        break;
    }
    case 59514:
    {
        returnValue = F("Bodensteiner Hof");
        break;
    }
    case 59515:
    {
        returnValue = F("Bodensteiner Str.");
        break;
    }
    case 59516:
    {
        returnValue = F("Bodensteinerstr.");
        break;
    }
    case 59517:
    {
        returnValue = F("Bodensteinstr.");
        break;
    }
    case 59518:
    {
        returnValue = F("Bodenstr.");
        break;
    }
    case 59519:
    {
        returnValue = F("Bodensweg");
        break;
    }
    case 59520:
    {
        returnValue = F("Bodentalstr.");
        break;
    }
    case 59521:
    {
        returnValue = F("Bodentalsweg");
        break;
    }
    case 59522:
    {
        returnValue = F("Bodenteicher Str.");
        break;
    }
    case 59523:
    {
        returnValue = F("Bodenteicher Weg");
        break;
    }
    case 59524:
    {
        returnValue = F("Bodenthaler Weg");
        break;
    }
    case 59525:
    {
        returnValue = F("Bodentwete");
        break;
    }
    case 59526:
    {
        returnValue = F("Bodenwaldweg");
        break;
    }
    case 59527:
    {
        returnValue = F("Bodenweg");
        break;
    }
    case 59528:
    {
        returnValue = F("Bodenweinberge");
        break;
    }
    case 59529:
    {
        returnValue = F("Bodenwerder Weg");
        break;
    }
    case 59530:
    {
        returnValue = F("Bodenwerdersche Str.");
        break;
    }
    case 59531:
    {
        returnValue = F("Bodenwiese");
        break;
    }
    case 59532:
    {
        returnValue = F("Bodenwiesen");
        break;
    }
    case 59533:
    {
        returnValue = F("Bodenwiesenstr.");
        break;
    }
    case 59534:
    {
        returnValue = F("Bodenwiesenweg");
        break;
    }
    case 59535:
    {
        returnValue = F("Bodenwöhrer Str.");
        break;
    }
    case 59536:
    {
        returnValue = F("Bodenzaun");
        break;
    }
    case 59537:
    {
        returnValue = F("Bodenäcker");
        break;
    }
    case 59538:
    {
        returnValue = F("Bodenäckerstr.");
        break;
    }
    case 59539:
    {
        returnValue = F("Boderandweg");
        break;
    }
    case 59540:
    {
        returnValue = F("Boderitz");
        break;
    }
    case 59541:
    {
        returnValue = F("Boderndorfer Str.");
        break;
    }
    case 59542:
    {
        returnValue = F("Boderschgassla");
        break;
    }
    case 59543:
    {
        returnValue = F("Bodersweierer Str.");
        break;
    }
    case 59544:
    {
        returnValue = F("Bodestieg");
        break;
    }
    case 59545:
    {
        returnValue = F("Bodestr.");
        break;
    }
    case 59546:
    {
        returnValue = F("Bodetalstr.");
        break;
    }
    case 59547:
    {
        returnValue = F("Bodeweg");
        break;
    }
    case 59548:
    {
        returnValue = F("Bodeweg (Harzer-Hexen-Stieg)");
        break;
    }
    case 59549:
    {
        returnValue = F("Bodewigstr.");
        break;
    }
    case 59550:
    {
        returnValue = F("Bodfeldlaufweg");
        break;
    }
    case 59551:
    {
        returnValue = F("Bodikusweg");
        break;
    }
    case 59552:
    {
        returnValue = F("Bodmaner Str.");
        break;
    }
    case 59553:
    {
        returnValue = F("Bodmannstr.");
        break;
    }
    case 59554:
    {
        returnValue = F("Bodmanstr.");
        break;
    }
    case 59555:
    {
        returnValue = F("Bodmerstr.");
        break;
    }
    case 59556:
    {
        returnValue = F("Bodnegger Str.");
        break;
    }
    case 59557:
    {
        returnValue = F("Bodnerring");
        break;
    }
    case 59558:
    {
        returnValue = F("Bodo-Ebhardt-Anlage");
        break;
    }
    case 59559:
    {
        returnValue = F("Bodo-Freytag-Weg");
        break;
    }
    case 59560:
    {
        returnValue = F("Bodo-Karcher-Str.");
        break;
    }
    case 59561:
    {
        returnValue = F("Bodo-Meyer-Weg");
        break;
    }
    case 59562:
    {
        returnValue = F("Bodo-Uhse-Str.");
        break;
    }
    case 59563:
    {
        returnValue = F("Bodo-Uhse-Weg");
        break;
    }
    case 59564:
    {
        returnValue = F("Bodo-von-Ravensburg-Str.");
        break;
    }
    case 59565:
    {
        returnValue = F("Bodopark");
        break;
    }
    case 59566:
    {
        returnValue = F("Bodostr.");
        break;
    }
    case 59567:
    {
        returnValue = F("Bodoweg");
        break;
    }
    case 59568:
    {
        returnValue = F("Bodweg");
        break;
    }
    case 59569:
    {
        returnValue = F("Boecke");
        break;
    }
    case 59570:
    {
        returnValue = F("Boeckelerstr.");
        break;
    }
    case 59571:
    {
        returnValue = F("Boeckelter Weg");
        break;
    }
    case 59572:
    {
        returnValue = F("Boeckerstr.");
        break;
    }
    case 59573:
    {
        returnValue = F("Boecklinstr.");
        break;
    }
    case 59574:
    {
        returnValue = F("Boeckmannstr.");
        break;
    }
    case 59575:
    {
        returnValue = F("Boeddinghausstr.");
        break;
    }
    case 59576:
    {
        returnValue = F("Boedemanns Kamp");
        break;
    }
    case 59577:
    {
        returnValue = F("Boedikerstr.");
        break;
    }
    case 59578:
    {
        returnValue = F("Boegenhofstr.");
        break;
    }
    case 59579:
    {
        returnValue = F("Boehmerwaldstr.");
        break;
    }
    case 59580:
    {
        returnValue = F("Boehringer Str.");
        break;
    }
    case 59581:
    {
        returnValue = F("Boehringerstr.");
        break;
    }
    case 59582:
    {
        returnValue = F("Boekelostr.");
        break;
    }
    case 59583:
    {
        returnValue = F("Boekenhorst");
        break;
    }
    case 59584:
    {
        returnValue = F("Boeker Landstr.");
        break;
    }
    case 59585:
    {
        returnValue = F("Boeker Mühle");
        break;
    }
    case 59586:
    {
        returnValue = F("Boeker Str.");
        break;
    }
    case 59587:
    {
        returnValue = F("Boekholter Weg");
        break;
    }
    case 59588:
    {
        returnValue = F("Boekladenweg");
        break;
    }
    case 59589:
    {
        returnValue = F("Boeklerstr.");
        break;
    }
    case 59590:
    {
        returnValue = F("Boekweg");
        break;
    }
    case 59591:
    {
        returnValue = F("Boekzeteler Str.");
        break;
    }
    case 59592:
    {
        returnValue = F("Boelckestr.");
        break;
    }
    case 59593:
    {
        returnValue = F("Boelckeweg");
        break;
    }
    case 59594:
    {
        returnValue = F("Boelkestr.");
        break;
    }
    case 59595:
    {
        returnValue = F("Boellingweg");
        break;
    }
    case 59596:
    {
        returnValue = F("Boelstr.");
        break;
    }
    case 59597:
    {
        returnValue = F("Boemannsdyk");
        break;
    }
    case 59598:
    {
        returnValue = F("Boemundring");
        break;
    }
    case 59599:
    {
        returnValue = F("Boemundstr.");
        break;
    }
    case 59600:
    {
        returnValue = F("Boenerstr.");
        break;
    }
    case 59601:
    {
        returnValue = F("Boenfelde");
        break;
    }
    case 59602:
    {
        returnValue = F("Boenninghausenweg");
        break;
    }
    case 59603:
    {
        returnValue = F("Boenster Hauptstr.");
        break;
    }
    case 59604:
    {
        returnValue = F("Boenster Str.");
        break;
    }
    case 59605:
    {
        returnValue = F("Boerdiek");
        break;
    }
    case 59606:
    {
        returnValue = F("Boerholz");
        break;
    }
    case 59607:
    {
        returnValue = F("Boerholzer Str.");
        break;
    }
    case 59608:
    {
        returnValue = F("Boermaweg");
        break;
    }
    case 59609:
    {
        returnValue = F("Boerskamp");
        break;
    }
    case 59610:
    {
        returnValue = F("Boeschweg");
        break;
    }
    case 59611:
    {
        returnValue = F("Boesebecker Str.");
        break;
    }
    case 59612:
    {
        returnValue = F("Boeselagerring");
        break;
    }
    case 59613:
    {
        returnValue = F("Boeselagerstr.");
        break;
    }
    case 59614:
    {
        returnValue = F("Boeskamp");
        break;
    }
    case 59615:
    {
        returnValue = F("Boesnerstr.");
        break;
    }
    case 59616:
    {
        returnValue = F("Boesselstr.");
        break;
    }
    case 59617:
    {
        returnValue = F("Boesstiege");
        break;
    }
    case 59618:
    {
        returnValue = F("Boester Pool");
        break;
    }
    case 59619:
    {
        returnValue = F("Boettcherstr.");
        break;
    }
    case 59620:
    {
        returnValue = F("Boettgerstr.");
        break;
    }
    case 59621:
    {
        returnValue = F("Boevesend");
        break;
    }
    case 59622:
    {
        returnValue = F("Boffertsweg");
        break;
    }
    case 59623:
    {
        returnValue = F("Boffzener Str.");
        break;
    }
    case 59624:
    {
        returnValue = F("Bofsheimer Str.");
        break;
    }
    case 59625:
    {
        returnValue = F("Bogatyniaer Str.");
        break;
    }
    case 59626:
    {
        returnValue = F("Bogeler Str.");
        break;
    }
    case 59627:
    {
        returnValue = F("Bogeler Weg");
        break;
    }
    case 59628:
    {
        returnValue = F("Bogen");
        break;
    }
    case 59629:
    {
        returnValue = F("Bogenau");
        break;
    }
    case 59630:
    {
        returnValue = F("Bogenbergerstr.");
        break;
    }
    case 59631:
    {
        returnValue = F("Bogenbergerweg");
        break;
    }
    case 59632:
    {
        returnValue = F("Bogenbergstr.");
        break;
    }
    case 59633:
    {
        returnValue = F("Bogenbrücke");
        break;
    }
    case 59634:
    {
        returnValue = F("Bogenbrücke Schwarzbach");
        break;
    }
    case 59635:
    {
        returnValue = F("Bogenbrücke mit Inschrifttafel");
        break;
    }
    case 59636:
    {
        returnValue = F("Bogeneckstr.");
        break;
    }
    case 59637:
    {
        returnValue = F("Bogener Str.");
        break;
    }
    case 59638:
    {
        returnValue = F("Bogenfeldstr.");
        break;
    }
    case 59639:
    {
        returnValue = F("Bogengasse");
        break;
    }
    case 59640:
    {
        returnValue = F("Bogengestell");
        break;
    }
    case 59641:
    {
        returnValue = F("Bogenhauser Str.");
        break;
    }
    case 59642:
    {
        returnValue = F("Bogenhofer Weg");
        break;
    }
    case 59643:
    {
        returnValue = F("Bogenholzstr.");
        break;
    }
    case 59644:
    {
        returnValue = F("Bogenrieder Str.");
        break;
    }
    case 59645:
    {
        returnValue = F("Bogenroither Str.");
        break;
    }
    case 59646:
    {
        returnValue = F("Bogenrücken");
        break;
    }
    case 59647:
    {
        returnValue = F("Bogenschießplatz BSC-Rastatt");
        break;
    }
    case 59648:
    {
        returnValue = F("Bogenschneise");
        break;
    }
    case 59649:
    {
        returnValue = F("Bogenschützenweg");
        break;
    }
    case 59650:
    {
        returnValue = F("Bogensportclub Emmendingen");
        break;
    }
    case 59651:
    {
        returnValue = F("Bogenstr.");
        break;
    }
    case 59652:
    {
        returnValue = F("Bogenweg");
        break;
    }
    case 59653:
    {
        returnValue = F("Bogenweilerstr.");
        break;
    }
    case 59654:
    {
        returnValue = F("Bogenäckerstr.");
        break;
    }
    case 59655:
    {
        returnValue = F("Bogestr.");
        break;
    }
    case 59656:
    {
        returnValue = F("Boggasse");
        break;
    }
    case 59657:
    {
        returnValue = F("Bogheimer Weg");
        break;
    }
    case 59658:
    {
        returnValue = F("Bogislav-Rosen-Weg");
        break;
    }
    case 59659:
    {
        returnValue = F("Bogislavstr.");
        break;
    }
    case 59660:
    {
        returnValue = F("Bogislawstr.");
        break;
    }
    case 59661:
    {
        returnValue = F("Bogjamaweg");
        break;
    }
    case 59662:
    {
        returnValue = F("Boglerhaus");
        break;
    }
    case 59663:
    {
        returnValue = F("Bognerstr.");
        break;
    }
    case 59664:
    {
        returnValue = F("Bognerweg");
        break;
    }
    case 59665:
    {
        returnValue = F("Bognor-Regis-Platz");
        break;
    }
    case 59666:
    {
        returnValue = F("Bognor-Regis-Str.");
        break;
    }
    case 59667:
    {
        returnValue = F("Bogstr.");
        break;
    }
    case 59668:
    {
        returnValue = F("Bogtergärten");
        break;
    }
    case 59669:
    {
        returnValue = F("Bogterplatz");
        break;
    }
    case 59670:
    {
        returnValue = F("Bohenkamp");
        break;
    }
    case 59671:
    {
        returnValue = F("Bohl");
        break;
    }
    case 59672:
    {
        returnValue = F("Bohlander Weg");
        break;
    }
    case 59673:
    {
        returnValue = F("Bohlberg");
        break;
    }
    case 59674:
    {
        returnValue = F("Bohldamm");
        break;
    }
    case 59675:
    {
        returnValue = F("Bohldammweg");
        break;
    }
    case 59676:
    {
        returnValue = F("Bohle");
        break;
    }
    case 59677:
    {
        returnValue = F("Bohleitenweg");
        break;
    }
    case 59678:
    {
        returnValue = F("Bohlen-Passage");
        break;
    }
    case 59679:
    {
        returnValue = F("Bohlenberger Str.");
        break;
    }
    case 59680:
    {
        returnValue = F("Bohlenbruchstr.");
        break;
    }
    case 59681:
    {
        returnValue = F("Bohlendamm");
        break;
    }
    case 59682:
    {
        returnValue = F("Bohlendorf");
        break;
    }
    case 59683:
    {
        returnValue = F("Bohlendorfer Weg");
        break;
    }
    case 59684:
    {
        returnValue = F("Bohlenfeld");
        break;
    }
    case 59685:
    {
        returnValue = F("Bohlengasse");
        break;
    }
    case 59686:
    {
        returnValue = F("Bohlengärten");
        break;
    }
    case 59687:
    {
        returnValue = F("Bohlenhagener Str.");
        break;
    }
    case 59688:
    {
        returnValue = F("Bohlenkamp");
        break;
    }
    case 59689:
    {
        returnValue = F("Bohlenmühlenweg");
        break;
    }
    case 59690:
    {
        returnValue = F("Bohlenplatz");
        break;
    }
    case 59691:
    {
        returnValue = F("Bohlenschneise");
        break;
    }
    case 59692:
    {
        returnValue = F("Bohlenskamp");
        break;
    }
    case 59693:
    {
        returnValue = F("Bohlenstiege");
        break;
    }
    case 59694:
    {
        returnValue = F("Bohlenstr.");
        break;
    }
    case 59695:
    {
        returnValue = F("Bohlenweg");
        break;
    }
    case 59696:
    {
        returnValue = F("Bohlenweg Große Angelkuhle");
        break;
    }
    case 59697:
    {
        returnValue = F("Bohler Str.");
        break;
    }
    case 59698:
    {
        returnValue = F("Bohlerhaldeweg");
        break;
    }
    case 59699:
    {
        returnValue = F("Bohlersteig");
        break;
    }
    case 59700:
    {
        returnValue = F("Bohlerstr.");
        break;
    }
    case 59701:
    {
        returnValue = F("Bohlerweg");
        break;
    }
    case 59702:
    {
        returnValue = F("Bohlgasse");
        break;
    }
    case 59703:
    {
        returnValue = F("Bohlhalde");
        break;
    }
    case 59704:
    {
        returnValue = F("Bohlhofstr.");
        break;
    }
    case 59705:
    {
        returnValue = F("Bohlhorst");
        break;
    }
    case 59706:
    {
        returnValue = F("Bohligstr.");
        break;
    }
    case 59707:
    {
        returnValue = F("Bohlinger Str.");
        break;
    }
    case 59708:
    {
        returnValue = F("Bohlkamp");
        break;
    }
    case 59709:
    {
        returnValue = F("Bohlkampsweg");
        break;
    }
    case 59710:
    {
        returnValue = F("Bohlkens Kamp");
        break;
    }
    case 59711:
    {
        returnValue = F("Bohlkolk");
        break;
    }
    case 59712:
    {
        returnValue = F("Bohlleitenweg");
        break;
    }
    case 59713:
    {
        returnValue = F("Bohlmoosstr.");
        break;
    }
    case 59714:
    {
        returnValue = F("Bohlsbacher Str.");
        break;
    }
    case 59715:
    {
        returnValue = F("Bohlscheider Weg");
        break;
    }
    case 59716:
    {
        returnValue = F("Bohlschneise");
        break;
    }
    case 59717:
    {
        returnValue = F("Bohlsgang");
        break;
    }
    case 59718:
    {
        returnValue = F("Bohlsstr.");
        break;
    }
    case 59719:
    {
        returnValue = F("Bohlstr.");
        break;
    }
    case 59720:
    {
        returnValue = F("Bohlswarfen");
        break;
    }
    case 59721:
    {
        returnValue = F("Bohlswarfer Weg");
        break;
    }
    case 59722:
    {
        returnValue = F("Bohlsweg");
        break;
    }
    case 59723:
    {
        returnValue = F("Bohltäle");
        break;
    }
    case 59724:
    {
        returnValue = F("Bohlweg");
        break;
    }
    case 59725:
    {
        returnValue = F("Bohlwiese");
        break;
    }
    case 59726:
    {
        returnValue = F("Bohmattstr.");
        break;
    }
    case 59727:
    {
        returnValue = F("Bohmbrook");
        break;
    }
    case 59728:
    {
        returnValue = F("Bohmen");
        break;
    }
    case 59729:
    {
        returnValue = F("Bohmertstr.");
        break;
    }
    case 59730:
    {
        returnValue = F("Bohmhuser Weg");
        break;
    }
    case 59731:
    {
        returnValue = F("Bohmkestr.");
        break;
    }
    case 59732:
    {
        returnValue = F("Bohmreute");
        break;
    }
    case 59733:
    {
        returnValue = F("Bohmsende");
        break;
    }
    case 59734:
    {
        returnValue = F("Bohmshöhe");
        break;
    }
    case 59735:
    {
        returnValue = F("Bohmster Torfasselsweg");
        break;
    }
    case 59736:
    {
        returnValue = F("Bohmstr.");
        break;
    }
    case 59737:
    {
        returnValue = F("Bohmsäcker");
        break;
    }
    case 59738:
    {
        returnValue = F("Bohmter Str.");
        break;
    }
    case 59739:
    {
        returnValue = F("Bohmweg");
        break;
    }
    case 59740:
    {
        returnValue = F("Bohmwiese");
        break;
    }
    case 59741:
    {
        returnValue = F("Bohn");
        break;
    }
    case 59742:
    {
        returnValue = F("Bohnackergässle");
        break;
    }
    case 59743:
    {
        returnValue = F("Bohnackerstr.");
        break;
    }
    case 59744:
    {
        returnValue = F("Bohnackerum");
        break;
    }
    case 59745:
    {
        returnValue = F("Bohnackerweg");
        break;
    }
    case 59746:
    {
        returnValue = F("Bohnapfelweg");
        break;
    }
    case 59747:
    {
        returnValue = F("Bohnauweg");
        break;
    }
    case 59748:
    {
        returnValue = F("Bohnberg");
        break;
    }
    case 59749:
    {
        returnValue = F("Bohndenstr.");
        break;
    }
    case 59750:
    {
        returnValue = F("Bohnekamp");
        break;
    }
    case 59751:
    {
        returnValue = F("Bohnekampstr.");
        break;
    }
    case 59752:
    {
        returnValue = F("Bohnekampsweg");
        break;
    }
    case 59753:
    {
        returnValue = F("Bohnekampweg");
        break;
    }
    case 59754:
    {
        returnValue = F("Bohnenbarg");
        break;
    }
    case 59755:
    {
        returnValue = F("Bohnenberg");
        break;
    }
    case 59756:
    {
        returnValue = F("Bohnenbergerring");
        break;
    }
    case 59757:
    {
        returnValue = F("Bohnenbergerstr.");
        break;
    }
    case 59758:
    {
        returnValue = F("Bohnenbergerweg");
        break;
    }
    case 59759:
    {
        returnValue = F("Bohnenbergstr.");
        break;
    }
    case 59760:
    {
        returnValue = F("Bohnenbleekstr.");
        break;
    }
    case 59761:
    {
        returnValue = F("Bohnenbreden");
        break;
    }
    case 59762:
    {
        returnValue = F("Bohnenbrunnenweg");
        break;
    }
    case 59763:
    {
        returnValue = F("Bohnenburger Str.");
        break;
    }
    case 59764:
    {
        returnValue = F("Bohnenburger Trift");
        break;
    }
    case 59765:
    {
        returnValue = F("Bohnenfeldstr.");
        break;
    }
    case 59766:
    {
        returnValue = F("Bohnengarten");
        break;
    }
    case 59767:
    {
        returnValue = F("Bohnengasse");
        break;
    }
    case 59768:
    {
        returnValue = F("Bohnenhübel");
        break;
    }
    case 59769:
    {
        returnValue = F("Bohnenkamp");
        break;
    }
    case 59770:
    {
        returnValue = F("Bohnenkampstr.");
        break;
    }
    case 59771:
    {
        returnValue = F("Bohnenkampsweg");
        break;
    }
    case 59772:
    {
        returnValue = F("Bohnenkampweg");
        break;
    }
    case 59773:
    {
        returnValue = F("Bohnenländer Weg");
        break;
    }
    case 59774:
    {
        returnValue = F("Bohnenschläge");
        break;
    }
    case 59775:
    {
        returnValue = F("Bohnenschweiz");
        break;
    }
    case 59776:
    {
        returnValue = F("Bohnenseeschneise");
        break;
    }
    case 59777:
    {
        returnValue = F("Bohnenstr.");
        break;
    }
    case 59778:
    {
        returnValue = F("Bohnenstück");
        break;
    }
    case 59779:
    {
        returnValue = F("Bohnenstücke");
        break;
    }
    case 59780:
    {
        returnValue = F("Bohnenwarf");
        break;
    }
    case 59781:
    {
        returnValue = F("Bohnenweg");
        break;
    }
    case 59782:
    {
        returnValue = F("Bohnenworth");
        break;
    }
    case 59783:
    {
        returnValue = F("Bohnertfeld");
        break;
    }
    case 59784:
    {
        returnValue = F("Bohnertstr.");
        break;
    }
    case 59785:
    {
        returnValue = F("Bohnerzrundweg");
        break;
    }
    case 59786:
    {
        returnValue = F("Bohnerzstr.");
        break;
    }
    case 59787:
    {
        returnValue = F("Bohnesmühlgasse");
        break;
    }
    case 59788:
    {
        returnValue = F("Bohnestr.");
        break;
    }
    case 59789:
    {
        returnValue = F("Bohnetsweg");
        break;
    }
    case 59790:
    {
        returnValue = F("Bohnewand");
        break;
    }
    case 59791:
    {
        returnValue = F("Bohngartental");
        break;
    }
    case 59792:
    {
        returnValue = F("Bohnhaldeweg");
        break;
    }
    case 59793:
    {
        returnValue = F("Bohnheck");
        break;
    }
    case 59794:
    {
        returnValue = F("Bohnhof");
        break;
    }
    case 59795:
    {
        returnValue = F("Bohnholzweg,");
        break;
    }
    case 59796:
    {
        returnValue = F("Bohnhorster Str.");
        break;
    }
    case 59797:
    {
        returnValue = F("Bohninger Weg");
        break;
    }
    case 59798:
    {
        returnValue = F("Bohnitzscher Str.");
        break;
    }
    case 59799:
    {
        returnValue = F("Bohnmühlgasse");
        break;
    }
    case 59800:
    {
        returnValue = F("Bohnrade");
        break;
    }
    case 59801:
    {
        returnValue = F("Bohnrader Weg");
        break;
    }
    case 59802:
    {
        returnValue = F("Bohnsdorfer Chaussee");
        break;
    }
    case 59803:
    {
        returnValue = F("Bohnsdorfer Weg");
        break;
    }
    case 59804:
    {
        returnValue = F("Bohnstedtstr.");
        break;
    }
    case 59805:
    {
        returnValue = F("Bohnster Weg");
        break;
    }
    case 59806:
    {
        returnValue = F("Bohnstr.");
        break;
    }
    case 59807:
    {
        returnValue = F("Bohnwiesenstr.");
        break;
    }
    case 59808:
    {
        returnValue = F("Bohnwiesstr.");
        break;
    }
    case 59809:
    {
        returnValue = F("Bohnäckerweg");
        break;
    }
    case 59810:
    {
        returnValue = F("Bohofsweg");
        break;
    }
    case 59811:
    {
        returnValue = F("Boholm");
        break;
    }
    case 59812:
    {
        returnValue = F("Boholz");
        break;
    }
    case 59813:
    {
        returnValue = F("Boholzau");
        break;
    }
    case 59814:
    {
        returnValue = F("Bohraer Str.");
        break;
    }
    case 59815:
    {
        returnValue = F("Bohrainstr.");
        break;
    }
    case 59816:
    {
        returnValue = F("Bohrbergstr.");
        break;
    }
    case 59817:
    {
        returnValue = F("Bohrenweg");
        break;
    }
    case 59818:
    {
        returnValue = F("Bohrerstr.");
        break;
    }
    case 59819:
    {
        returnValue = F("Bohrerweg");
        break;
    }
    case 59820:
    {
        returnValue = F("Bohrfeld");
        break;
    }
    case 59821:
    {
        returnValue = F("Bohrgaß");
        break;
    }
    case 59822:
    {
        returnValue = F("Bohrlochweg");
        break;
    }
    case 59823:
    {
        returnValue = F("Bohrmeister-Hasenbein-Weg");
        break;
    }
    case 59824:
    {
        returnValue = F("Bohrmühle");
        break;
    }
    case 59825:
    {
        returnValue = F("Bohrmühlenweg");
        break;
    }
    case 59826:
    {
        returnValue = F("Bohrrainstr.");
        break;
    }
    case 59827:
    {
        returnValue = F("Bohrstr.");
        break;
    }
    case 59828:
    {
        returnValue = F("Bohrturmstr.");
        break;
    }
    case 59829:
    {
        returnValue = F("Bohrweg");
        break;
    }
    case 59830:
    {
        returnValue = F("Bohrwiese");
        break;
    }
    case 59831:
    {
        returnValue = F("Boicher Weg");
        break;
    }
    case 59832:
    {
        returnValue = F("Boienhagen");
        break;
    }
    case 59833:
    {
        returnValue = F("Boierstr.");
        break;
    }
    case 59834:
    {
        returnValue = F("Boiestr.");
        break;
    }
    case 59835:
    {
        returnValue = F("Boieweg");
        break;
    }
    case 59836:
    {
        returnValue = F("Boignweg");
        break;
    }
    case 59837:
    {
        returnValue = F("Boihingergartenstr.");
        break;
    }
    case 59838:
    {
        returnValue = F("Boikig");
        break;
    }
    case 59839:
    {
        returnValue = F("Boikweg");
        break;
    }
    case 59840:
    {
        returnValue = F("Boilstädter Platz");
        break;
    }
    case 59841:
    {
        returnValue = F("Boilstädter Str.");
        break;
    }
    case 59842:
    {
        returnValue = F("Boilstädter Weg");
        break;
    }
    case 59843:
    {
        returnValue = F("Boimstorfer Str.");
        break;
    }
    case 59844:
    {
        returnValue = F("Boindstr.");
        break;
    }
    case 59845:
    {
        returnValue = F("Boing-von-Oldersum-Str.");
        break;
    }
    case 59846:
    {
        returnValue = F("Boingstr.");
        break;
    }
    case 59847:
    {
        returnValue = F("Boint");
        break;
    }
    case 59848:
    {
        returnValue = F("Boisdorfer Str.");
        break;
    }
    case 59849:
    {
        returnValue = F("Boisdorfer Weg");
        break;
    }
    case 59850:
    {
        returnValue = F("Boisenhausen");
        break;
    }
    case 59851:
    {
        returnValue = F("Boisenhausener Weg");
        break;
    }
    case 59852:
    {
        returnValue = F("Boisheimer Str.");
        break;
    }
    case 59853:
    {
        returnValue = F("Boissower Hauptstr.");
        break;
    }
    case 59854:
    {
        returnValue = F("Boissower Str.");
        break;
    }
    case 59855:
    {
        returnValue = F("Boisterfelde");
        break;
    }
    case 59856:
    {
        returnValue = F("Boitiner Str.");
        break;
    }
    case 59857:
    {
        returnValue = F("Boitzenbrück");
        break;
    }
    case 59858:
    {
        returnValue = F("Boitzenburger Chaussee");
        break;
    }
    case 59859:
    {
        returnValue = F("Boitzener Trift");
        break;
    }
    case 59860:
    {
        returnValue = F("Boitzenhagener Str.");
        break;
    }
    case 59861:
    {
        returnValue = F("Boitzenhagener Weg");
        break;
    }
    case 59862:
    {
        returnValue = F("Boitzer Ring");
        break;
    }
    case 59863:
    {
        returnValue = F("Boitzer Str.");
        break;
    }
    case 59864:
    {
        returnValue = F("Boitzgasse");
        break;
    }
    case 59865:
    {
        returnValue = F("Boize");
        break;
    }
    case 59866:
    {
        returnValue = F("Boizenburger Chaussee");
        break;
    }
    case 59867:
    {
        returnValue = F("Boizenburger Str.");
        break;
    }
    case 59868:
    {
        returnValue = F("Boizenburger Weg");
        break;
    }
    case 59869:
    {
        returnValue = F("Boizeweg");
        break;
    }
    case 59870:
    {
        returnValue = F("Bojekammerweg");
        break;
    }
    case 59871:
    {
        returnValue = F("Bojendorfer Weg");
        break;
    }
    case 59872:
    {
        returnValue = F("Bojenweg");
        break;
    }
    case 59873:
    {
        returnValue = F("Bojern");
        break;
    }
    case 59874:
    {
        returnValue = F("Bojerstr.");
        break;
    }
    case 59875:
    {
        returnValue = F("Bojerweg");
        break;
    }
    case 59876:
    {
        returnValue = F("Bojeslandweg");
        break;
    }
    case 59877:
    {
        returnValue = F("Bojestr.");
        break;
    }
    case 59878:
    {
        returnValue = F("Bokaerstr.");
        break;
    }
    case 59879:
    {
        returnValue = F("Bokamp");
        break;
    }
    case 59880:
    {
        returnValue = F("Bokel");
        break;
    }
    case 59881:
    {
        returnValue = F("Bokel-Nenndorfer Grenzgraben");
        break;
    }
    case 59882:
    {
        returnValue = F("Bokelah");
        break;
    }
    case 59883:
    {
        returnValue = F("Bokeler Dorfstr.");
        break;
    }
    case 59884:
    {
        returnValue = F("Bokeler Landstr.");
        break;
    }
    case 59885:
    {
        returnValue = F("Bokeler Schulstr.");
        break;
    }
    case 59886:
    {
        returnValue = F("Bokeler Str.");
        break;
    }
    case 59887:
    {
        returnValue = F("Bokeler Torfweg");
        break;
    }
    case 59888:
    {
        returnValue = F("Bokeler Weg");
        break;
    }
    case 59889:
    {
        returnValue = F("Bokelfenner Str.");
        break;
    }
    case 59890:
    {
        returnValue = F("Bokelholmer Chaussee");
        break;
    }
    case 59891:
    {
        returnValue = F("Bokelhoop");
        break;
    }
    case 59892:
    {
        returnValue = F("Bokelo");
        break;
    }
    case 59893:
    {
        returnValue = F("Bokeloher Feld");
        break;
    }
    case 59894:
    {
        returnValue = F("Bokeloher Kirchweg");
        break;
    }
    case 59895:
    {
        returnValue = F("Bokeloher Str.");
        break;
    }
    case 59896:
    {
        returnValue = F("Bokelrehmer Str.");
        break;
    }
    case 59897:
    {
        returnValue = F("Bokelsesser Str.");
        break;
    }
    case 59898:
    {
        returnValue = F("Bokelsesser Weg");
        break;
    }
    case 59899:
    {
        returnValue = F("Bokelskamp");
        break;
    }
    case 59900:
    {
        returnValue = F("Bokelskamper Schulweg");
        break;
    }
    case 59901:
    {
        returnValue = F("Bokelstr.");
        break;
    }
    case 59902:
    {
        returnValue = F("Bokelweg");
        break;
    }
    case 59903:
    {
        returnValue = F("Bokemeyerstr.");
        break;
    }
    case 59904:
    {
        returnValue = F("Bokemühlenfeld");
        break;
    }
    case 59905:
    {
        returnValue = F("Bokenacker");
        break;
    }
    case 59906:
    {
        returnValue = F("Bokenkoppel");
        break;
    }
    case 59907:
    {
        returnValue = F("Bokensdorfer Str.");
        break;
    }
    case 59908:
    {
        returnValue = F("Bokensdorfer Weg");
        break;
    }
    case 59909:
    {
        returnValue = F("Boker Damm");
        break;
    }
    case 59910:
    {
        returnValue = F("Boker Str.");
        break;
    }
    case 59911:
    {
        returnValue = F("Boker-Heide-Weg");
        break;
    }
    case 59912:
    {
        returnValue = F("Bokern");
        break;
    }
    case 59913:
    {
        returnValue = F("Bokerner Damm");
        break;
    }
    case 59914:
    {
        returnValue = F("Bokholter Damm");
        break;
    }
    case 59915:
    {
        returnValue = F("Bokhorst");
        break;
    }
    case 59916:
    {
        returnValue = F("Bokhorstdoor");
        break;
    }
    case 59917:
    {
        returnValue = F("Bokhorster Weg");
        break;
    }
    case 59918:
    {
        returnValue = F("Bokhorststr.");
        break;
    }
    case 59919:
    {
        returnValue = F("Bokhorstweg");
        break;
    }
    case 59920:
    {
        returnValue = F("Boklingweg");
        break;
    }
    case 59921:
    {
        returnValue = F("Boklunder Weg");
        break;
    }
    case 59922:
    {
        returnValue = F("Boknis");
        break;
    }
    case 59923:
    {
        returnValue = F("Bokop");
        break;
    }
    case 59924:
    {
        returnValue = F("Boksberg");
        break;
    }
    case 59925:
    {
        returnValue = F("Bokseer Weg");
        break;
    }
    case 59926:
    {
        returnValue = F("Bokshagen");
        break;
    }
    case 59927:
    {
        returnValue = F("Bokshorn");
        break;
    }
    case 59928:
    {
        returnValue = F("Boksköppen");
        break;
    }
    case 59929:
    {
        returnValue = F("Bokumer Str.");
        break;
    }
    case 59930:
    {
        returnValue = F("Bokumer Weg");
        break;
    }
    case 59931:
    {
        returnValue = F("Bokwiesch");
        break;
    }
    case 59932:
    {
        returnValue = F("Bolandenstr.");
        break;
    }
    case 59933:
    {
        returnValue = F("Bolander Str.");
        break;
    }
    case 59934:
    {
        returnValue = F("Bolander Weg");
        break;
    }
    case 59935:
    {
        returnValue = F("Bolanderhof");
        break;
    }
    case 59936:
    {
        returnValue = F("Bolandshof");
        break;
    }
    case 59937:
    {
        returnValue = F("Bolandstr.");
        break;
    }
    case 59938:
    {
        returnValue = F("Bolandweg");
        break;
    }
    case 59939:
    {
        returnValue = F("Bolardusstr.");
        break;
    }
    case 59940:
    {
        returnValue = F("Bolbecer Ring");
        break;
    }
    case 59941:
    {
        returnValue = F("Bolbergstr.");
        break;
    }
    case 59942:
    {
        returnValue = F("Bolbergweg");
        break;
    }
    case 59943:
    {
        returnValue = F("Bolberweg");
        break;
    }
    case 59944:
    {
        returnValue = F("Bolbritz");
        break;
    }
    case 59945:
    {
        returnValue = F("Boldebucker Weg");
        break;
    }
    case 59946:
    {
        returnValue = F("Boldekow Bornmühl");
        break;
    }
    case 59947:
    {
        returnValue = F("Boldenshäger Weg");
        break;
    }
    case 59948:
    {
        returnValue = F("Bolderkamp");
        break;
    }
    case 59949:
    {
        returnValue = F("Boldevitz");
        break;
    }
    case 59950:
    {
        returnValue = F("Boldixumer Str.");
        break;
    }
    case 59951:
    {
        returnValue = F("Boldshof");
        break;
    }
    case 59952:
    {
        returnValue = F("Boldtstr.");
        break;
    }
    case 59953:
    {
        returnValue = F("Bolehofstr.");
        break;
    }
    case 59954:
    {
        returnValue = F("Bolehörn");
        break;
    }
    case 59955:
    {
        returnValue = F("Bolemer Weg");
        break;
    }
    case 59956:
    {
        returnValue = F("Boleslawiecer Str.");
        break;
    }
    case 59957:
    {
        returnValue = F("Boleweg");
        break;
    }
    case 59958:
    {
        returnValue = F("Boleyweg");
        break;
    }
    case 59959:
    {
        returnValue = F("Bolgasse");
        break;
    }
    case 59960:
    {
        returnValue = F("Bolgenstr.");
        break;
    }
    case 59961:
    {
        returnValue = F("Bolgweg");
        break;
    }
    case 59962:
    {
        returnValue = F("Bolgärtenweg");
        break;
    }
    case 59963:
    {
        returnValue = F("Bolheimer Sachsenhardtsträßle");
        break;
    }
    case 59964:
    {
        returnValue = F("Bolheimer Str.");
        break;
    }
    case 59965:
    {
        returnValue = F("Bolhöferweg");
        break;
    }
    case 59966:
    {
        returnValue = F("Boligweg");
        break;
    }
    case 59967:
    {
        returnValue = F("Bolkamer Str.");
        break;
    }
    case 59968:
    {
        returnValue = F("Bolkelander Weg");
        break;
    }
    case 59969:
    {
        returnValue = F("Bolkenhainer Str.");
        break;
    }
    case 59970:
    {
        returnValue = F("Bolkensdyk");
        break;
    }
    case 59971:
    {
        returnValue = F("Bolkewehrster Weg");
        break;
    }
    case 59972:
    {
        returnValue = F("Bolko-von-Hochberg-Str.");
        break;
    }
    case 59973:
    {
        returnValue = F("Bolkostr.");
        break;
    }
    case 59974:
    {
        returnValue = F("Bolkoweg");
        break;
    }
    case 59975:
    {
        returnValue = F("Bolkowstr.");
        break;
    }
    case 59976:
    {
        returnValue = F("Boll");
        break;
    }
    case 59977:
    {
        returnValue = F("Bollaes");
        break;
    }
    case 59978:
    {
        returnValue = F("Bolland");
        break;
    }
    case 59979:
    {
        returnValue = F("Bollandenstr.");
        break;
    }
    case 59980:
    {
        returnValue = F("Bollandstr.");
        break;
    }
    case 59981:
    {
        returnValue = F("Bollard");
        break;
    }
    case 59982:
    {
        returnValue = F("Bollbaumstr.");
        break;
    }
    case 59983:
    {
        returnValue = F("Bollberg");
        break;
    }
    case 59984:
    {
        returnValue = F("Bollberger Str.");
        break;
    }
    case 59985:
    {
        returnValue = F("Bollbergstr.");
        break;
    }
    case 59986:
    {
        returnValue = F("Bollbrooksweg");
        break;
    }
    case 59987:
    {
        returnValue = F("Bollbrück");
        break;
    }
    case 59988:
    {
        returnValue = F("Bollbrücke");
        break;
    }
    case 59989:
    {
        returnValue = F("Bollbrückenweg");
        break;
    }
    case 59990:
    {
        returnValue = F("Bollbrüg");
        break;
    }
    case 59991:
    {
        returnValue = F("Bollbrügge");
        break;
    }
    case 59992:
    {
        returnValue = F("Bollbrügger Weg");
        break;
    }
    case 59993:
    {
        returnValue = F("Bolldamm");
        break;
    }
    case 59994:
    {
        returnValue = F("Bolleber");
        break;
    }
    case 59995:
    {
        returnValue = F("Bollenbacher Pfad");
        break;
    }
    case 59996:
    {
        returnValue = F("Bollenbacher Steg");
        break;
    }
    case 59997:
    {
        returnValue = F("Bollenbacher Str.");
        break;
    }
    case 59998:
    {
        returnValue = F("Bollenbacher Weg");
        break;
    }
    case 59999:
    {
        returnValue = F("Bollenbend");
        break;
    }
    case 60000:
    {
        returnValue = F("Bollenberg");
        break;
    }
    case 60001:
    {
        returnValue = F("Bollenberger Busch");
        break;
    }
    case 60002:
    {
        returnValue = F("Bollenbrink");
        break;
    }
    case 60003:
    {
        returnValue = F("Bollendorfer Str.");
        break;
    }
    case 60004:
    {
        returnValue = F("Bollener Deich");
        break;
    }
    case 60005:
    {
        returnValue = F("Bollener Dorfstr.");
        break;
    }
    }
    return returnValue;
}
