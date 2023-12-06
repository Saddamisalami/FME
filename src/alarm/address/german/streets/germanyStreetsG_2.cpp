#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameG2(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 120012:
    {
        returnValue = F("Graefenthalstr.");
        break;
    }
    case 120013:
    {
        returnValue = F("Graepels Kamp");
        break;
    }
    case 120014:
    {
        returnValue = F("Graesbecker Weg");
        break;
    }
    case 120015:
    {
        returnValue = F("Graeser Brook");
        break;
    }
    case 120016:
    {
        returnValue = F("Graeser Str.");
        break;
    }
    case 120017:
    {
        returnValue = F("Graeserstr.");
        break;
    }
    case 120018:
    {
        returnValue = F("Graetzstr.");
        break;
    }
    case 120019:
    {
        returnValue = F("Graf Albrecht von Krockow-Str.");
        break;
    }
    case 120020:
    {
        returnValue = F("Graf Dürckheim-Weg");
        break;
    }
    case 120021:
    {
        returnValue = F("Graf Preysing Str.");
        break;
    }
    case 120022:
    {
        returnValue = F("Graf Rhena Weg");
        break;
    }
    case 120023:
    {
        returnValue = F("Graf von Berg Str.");
        break;
    }
    case 120024:
    {
        returnValue = F("Graf-Adalbert-Str.");
        break;
    }
    case 120025:
    {
        returnValue = F("Graf-Adelmann-Str.");
        break;
    }
    case 120026:
    {
        returnValue = F("Graf-Adolf-Platz");
        break;
    }
    case 120027:
    {
        returnValue = F("Graf-Adolf-Str.");
        break;
    }
    case 120028:
    {
        returnValue = F("Graf-Albero-Str.");
        break;
    }
    case 120029:
    {
        returnValue = F("Graf-Albert-Str.");
        break;
    }
    case 120030:
    {
        returnValue = F("Graf-Albrecht-Str.");
        break;
    }
    case 120031:
    {
        returnValue = F("Graf-Albrecht-Weg");
        break;
    }
    case 120032:
    {
        returnValue = F("Graf-Alfred-von-Soden-Str.");
        break;
    }
    case 120033:
    {
        returnValue = F("Graf-Andechs-Str.");
        break;
    }
    case 120034:
    {
        returnValue = F("Graf-Andreas-Str.");
        break;
    }
    case 120035:
    {
        returnValue = F("Graf-Anholt-Str.");
        break;
    }
    case 120036:
    {
        returnValue = F("Graf-Anselm-Str.");
        break;
    }
    case 120037:
    {
        returnValue = F("Graf-Anton-Günther-Str.");
        break;
    }
    case 120038:
    {
        returnValue = F("Graf-Anton-Str.");
        break;
    }
    case 120039:
    {
        returnValue = F("Graf-Anton-Weg");
        break;
    }
    case 120040:
    {
        returnValue = F("Graf-Arbo-Str.");
        break;
    }
    case 120041:
    {
        returnValue = F("Graf-Arco Str.");
        break;
    }
    case 120042:
    {
        returnValue = F("Graf-Arco-Ring");
        break;
    }
    case 120043:
    {
        returnValue = F("Graf-Arco-Str.");
        break;
    }
    case 120044:
    {
        returnValue = F("Graf-Arco-Weg");
        break;
    }
    case 120045:
    {
        returnValue = F("Graf-Are-Str.");
        break;
    }
    case 120046:
    {
        returnValue = F("Graf-Armansperg-Str.");
        break;
    }
    case 120047:
    {
        returnValue = F("Graf-Arno-Str.");
        break;
    }
    case 120048:
    {
        returnValue = F("Graf-Arnold-Hof");
        break;
    }
    case 120049:
    {
        returnValue = F("Graf-Arnold-Platz");
        break;
    }
    case 120050:
    {
        returnValue = F("Graf-Arnold-Str.");
        break;
    }
    case 120051:
    {
        returnValue = F("Graf-Balduin-Str.");
        break;
    }
    case 120052:
    {
        returnValue = F("Graf-Beisel-Str.");
        break;
    }
    case 120053:
    {
        returnValue = F("Graf-Bentinck-Str.");
        break;
    }
    case 120054:
    {
        returnValue = F("Graf-Bentzel-Str.");
        break;
    }
    case 120055:
    {
        returnValue = F("Graf-Berchtold-Str.");
        break;
    }
    case 120056:
    {
        returnValue = F("Graf-Berengar-Str.");
        break;
    }
    case 120057:
    {
        returnValue = F("Graf-Berghe-von-Trips-Ring");
        break;
    }
    case 120058:
    {
        returnValue = F("Graf-Bernadotte-Str.");
        break;
    }
    case 120059:
    {
        returnValue = F("Graf-Bernadotte-Weg");
        break;
    }
    case 120060:
    {
        returnValue = F("Graf-Bernhard-Str.");
        break;
    }
    case 120061:
    {
        returnValue = F("Graf-Bernhard-Weg");
        break;
    }
    case 120062:
    {
        returnValue = F("Graf-Berthold-Str.");
        break;
    }
    case 120063:
    {
        returnValue = F("Graf-Berthold-Weg");
        break;
    }
    case 120064:
    {
        returnValue = F("Graf-Beust-Str.");
        break;
    }
    case 120065:
    {
        returnValue = F("Graf-Bibereck-Weg");
        break;
    }
    case 120066:
    {
        returnValue = F("Graf-Blankard-Str.");
        break;
    }
    case 120067:
    {
        returnValue = F("Graf-Blumenthal-Str.");
        break;
    }
    case 120068:
    {
        returnValue = F("Graf-Boyneburg-Str.");
        break;
    }
    case 120069:
    {
        returnValue = F("Graf-Bray-Str.");
        break;
    }
    case 120070:
    {
        returnValue = F("Graf-Bremer-Str.");
        break;
    }
    case 120071:
    {
        returnValue = F("Graf-Burkhard-Str.");
        break;
    }
    case 120072:
    {
        returnValue = F("Graf-Buttler-Str.");
        break;
    }
    case 120073:
    {
        returnValue = F("Graf-Carl-Str.");
        break;
    }
    case 120074:
    {
        returnValue = F("Graf-Casimir-Str.");
        break;
    }
    case 120075:
    {
        returnValue = F("Graf-Chiemo-Str.");
        break;
    }
    case 120076:
    {
        returnValue = F("Graf-Christoffer-Str.");
        break;
    }
    case 120077:
    {
        returnValue = F("Graf-Christoph-Str.");
        break;
    }
    case 120078:
    {
        returnValue = F("Graf-Christoph-Weg");
        break;
    }
    case 120079:
    {
        returnValue = F("Graf-Degenfeld-Str.");
        break;
    }
    case 120080:
    {
        returnValue = F("Graf-Detlef-von-Einsiedel-Str.");
        break;
    }
    case 120081:
    {
        returnValue = F("Graf-Diederich-Str.");
        break;
    }
    case 120082:
    {
        returnValue = F("Graf-Diepolt-Weg");
        break;
    }
    case 120083:
    {
        returnValue = F("Graf-Dietmar-Str.");
        break;
    }
    case 120084:
    {
        returnValue = F("Graf-Dietrich-Ring");
        break;
    }
    case 120085:
    {
        returnValue = F("Graf-Dietrich-Str.");
        break;
    }
    case 120086:
    {
        returnValue = F("Graf-Dietrich-Weg");
        break;
    }
    case 120087:
    {
        returnValue = F("Graf-Dietrichs-Str.");
        break;
    }
    case 120088:
    {
        returnValue = F("Graf-Dodiko-Weg");
        break;
    }
    case 120089:
    {
        returnValue = F("Graf-Douglas Weg");
        break;
    }
    case 120090:
    {
        returnValue = F("Graf-Douglas-Str.");
        break;
    }
    case 120091:
    {
        returnValue = F("Graf-Droste-Str.");
        break;
    }
    case 120092:
    {
        returnValue = F("Graf-Droste-zu-Vischering-Allee");
        break;
    }
    case 120093:
    {
        returnValue = F("Graf-Dudo-Platz");
        break;
    }
    case 120094:
    {
        returnValue = F("Graf-Dux-Str.");
        break;
    }
    case 120095:
    {
        returnValue = F("Graf-Dürckheim-Str.");
        break;
    }
    case 120096:
    {
        returnValue = F("Graf-Dürckheim-Weg");
        break;
    }
    case 120097:
    {
        returnValue = F("Graf-Dürkheim-Str.");
        break;
    }
    case 120098:
    {
        returnValue = F("Graf-Eberhard-Allee");
        break;
    }
    case 120099:
    {
        returnValue = F("Graf-Eberhard-Platz");
        break;
    }
    case 120100:
    {
        returnValue = F("Graf-Eberhard-Str.");
        break;
    }
    case 120101:
    {
        returnValue = F("Graf-Eberhard-Weg");
        break;
    }
    case 120102:
    {
        returnValue = F("Graf-Eberstein-Str.");
        break;
    }
    case 120103:
    {
        returnValue = F("Graf-Eckhard-Str.");
        break;
    }
    case 120104:
    {
        returnValue = F("Graf-Edzard-Str.");
        break;
    }
    case 120105:
    {
        returnValue = F("Graf-Egbert-Ring");
        break;
    }
    case 120106:
    {
        returnValue = F("Graf-Egbert-Str.");
        break;
    }
    case 120107:
    {
        returnValue = F("Graf-Egge-Str.");
        break;
    }
    case 120108:
    {
        returnValue = F("Graf-Emich-Anlage");
        break;
    }
    case 120109:
    {
        returnValue = F("Graf-Emich-Str.");
        break;
    }
    case 120110:
    {
        returnValue = F("Graf-Emundus-Str.");
        break;
    }
    case 120111:
    {
        returnValue = F("Graf-Engelbert-Str.");
        break;
    }
    case 120112:
    {
        returnValue = F("Graf-Enno-Str.");
        break;
    }
    case 120113:
    {
        returnValue = F("Graf-Erbach-Str.");
        break;
    }
    case 120114:
    {
        returnValue = F("Graf-Erhard-Str.");
        break;
    }
    case 120115:
    {
        returnValue = F("Graf-Ernest-Str.");
        break;
    }
    case 120116:
    {
        returnValue = F("Graf-Ernst-Weg");
        break;
    }
    case 120117:
    {
        returnValue = F("Graf-Erpo-Str.");
        break;
    }
    case 120118:
    {
        returnValue = F("Graf-Erwin-Str.");
        break;
    }
    case 120119:
    {
        returnValue = F("Graf-Ezzo-Weg");
        break;
    }
    case 120120:
    {
        returnValue = F("Graf-Folke-Bernadotte-Str.");
        break;
    }
    case 120121:
    {
        returnValue = F("Graf-Franz-Georg-Str.");
        break;
    }
    case 120122:
    {
        returnValue = F("Graf-Friedrich-Str.");
        break;
    }
    case 120123:
    {
        returnValue = F("Graf-Friedrich-Weg");
        break;
    }
    case 120124:
    {
        returnValue = F("Graf-Froben-Str.");
        break;
    }
    case 120125:
    {
        returnValue = F("Graf-Fugger-Str.");
        break;
    }
    case 120126:
    {
        returnValue = F("Graf-Galen-Str.");
        break;
    }
    case 120127:
    {
        returnValue = F("Graf-Galen-Weg");
        break;
    }
    case 120128:
    {
        returnValue = F("Graf-Gebhard-Str.");
        break;
    }
    case 120129:
    {
        returnValue = F("Graf-Georg-Str.");
        break;
    }
    case 120130:
    {
        returnValue = F("Graf-Gerhard-Str.");
        break;
    }
    case 120131:
    {
        returnValue = F("Graf-Gerlach-Ring");
        break;
    }
    case 120132:
    {
        returnValue = F("Graf-Gerlach-Str.");
        break;
    }
    case 120133:
    {
        returnValue = F("Graf-Gerold-Str.");
        break;
    }
    case 120134:
    {
        returnValue = F("Graf-Gerold-Weg");
        break;
    }
    case 120135:
    {
        returnValue = F("Graf-Giselbert-Str.");
        break;
    }
    case 120136:
    {
        returnValue = F("Graf-Gleichen-Str.");
        break;
    }
    case 120137:
    {
        returnValue = F("Graf-Goder-Str.");
        break;
    }
    case 120138:
    {
        returnValue = F("Graf-Goltstein-Str.");
        break;
    }
    case 120139:
    {
        returnValue = F("Graf-Goswin-Weg");
        break;
    }
    case 120140:
    {
        returnValue = F("Graf-Gottfried-Str.");
        break;
    }
    case 120141:
    {
        returnValue = F("Graf-Grote-Str.");
        break;
    }
    case 120142:
    {
        returnValue = F("Graf-Gustav-Weg");
        break;
    }
    case 120143:
    {
        returnValue = F("Graf-Götz-Weg");
        break;
    }
    case 120144:
    {
        returnValue = F("Graf-Haeseler-Str.");
        break;
    }
    case 120145:
    {
        returnValue = F("Graf-Haeseler-Weg");
        break;
    }
    case 120146:
    {
        returnValue = F("Graf-Hartard-Str.");
        break;
    }
    case 120147:
    {
        returnValue = F("Graf-Hartmann-Str.");
        break;
    }
    case 120148:
    {
        returnValue = F("Graf-Hartwig-Str.");
        break;
    }
    case 120149:
    {
        returnValue = F("Graf-Haslang-Str.");
        break;
    }
    case 120150:
    {
        returnValue = F("Graf-Hatto-Str.");
        break;
    }
    case 120151:
    {
        returnValue = F("Graf-Heinrich-Ring");
        break;
    }
    case 120152:
    {
        returnValue = F("Graf-Heinrich-Str.");
        break;
    }
    case 120153:
    {
        returnValue = F("Graf-Heinrih-Str.");
        break;
    }
    case 120154:
    {
        returnValue = F("Graf-Herimann-Str.");
        break;
    }
    case 120155:
    {
        returnValue = F("Graf-Hermann-Otto-Weg");
        break;
    }
    case 120156:
    {
        returnValue = F("Graf-Hermann-Str.");
        break;
    }
    case 120157:
    {
        returnValue = F("Graf-Hoensbroech-Str.");
        break;
    }
    case 120158:
    {
        returnValue = F("Graf-Hompesch-Weg");
        break;
    }
    case 120159:
    {
        returnValue = F("Graf-Hundt-Str.");
        break;
    }
    case 120160:
    {
        returnValue = F("Graf-Huno-Str.");
        break;
    }
    case 120161:
    {
        returnValue = F("Graf-Ignaz-Str.");
        break;
    }
    case 120162:
    {
        returnValue = F("Graf-Ingelheim-Weg");
        break;
    }
    case 120163:
    {
        returnValue = F("Graf-Isang-Weg");
        break;
    }
    case 120164:
    {
        returnValue = F("Graf-J.-Reinhard Str.");
        break;
    }
    case 120165:
    {
        returnValue = F("Graf-Jobst-Weg");
        break;
    }
    case 120166:
    {
        returnValue = F("Graf-Johann-Str.");
        break;
    }
    case 120167:
    {
        returnValue = F("Graf-Johann-Wall");
        break;
    }
    case 120168:
    {
        returnValue = F("Graf-Johannes-Str.");
        break;
    }
    case 120169:
    {
        returnValue = F("Graf-Joner-Str.");
        break;
    }
    case 120170:
    {
        returnValue = F("Graf-Joseph-Bruno-Weg");
        break;
    }
    case 120171:
    {
        returnValue = F("Graf-Kachel-Str.");
        break;
    }
    case 120172:
    {
        returnValue = F("Graf-Kalckreuth-Str.");
        break;
    }
    case 120173:
    {
        returnValue = F("Graf-Kanitz-Str.");
        break;
    }
    case 120174:
    {
        returnValue = F("Graf-Karl-Ferdinand-Str.");
        break;
    }
    case 120175:
    {
        returnValue = F("Graf-Karl-Str.");
        break;
    }
    case 120176:
    {
        returnValue = F("Graf-Kefernburg-Str.");
        break;
    }
    case 120177:
    {
        returnValue = F("Graf-Keller-Str.");
        break;
    }
    case 120178:
    {
        returnValue = F("Graf-Kessel-Str.");
        break;
    }
    case 120179:
    {
        returnValue = F("Graf-Kirchberg-Str.");
        break;
    }
    case 120180:
    {
        returnValue = F("Graf-Konrad-Str.");
        break;
    }
    case 120181:
    {
        returnValue = F("Graf-Ladislaus-Weg");
        break;
    }
    case 120182:
    {
        returnValue = F("Graf-Lamberg-Str.");
        break;
    }
    case 120183:
    {
        returnValue = F("Graf-Lamberg-Weg");
        break;
    }
    case 120184:
    {
        returnValue = F("Graf-Landsberg-Str.");
        break;
    }
    case 120185:
    {
        returnValue = F("Graf-Lenberger-Str.");
        break;
    }
    case 120186:
    {
        returnValue = F("Graf-Lennart-Bernadotte-Str.");
        break;
    }
    case 120187:
    {
        returnValue = F("Graf-Leopold-Ring");
        break;
    }
    case 120188:
    {
        returnValue = F("Graf-Leopold-Str.");
        break;
    }
    case 120189:
    {
        returnValue = F("Graf-Leuchtenberg-Weg");
        break;
    }
    case 120190:
    {
        returnValue = F("Graf-Leutrum-Str.");
        break;
    }
    case 120191:
    {
        returnValue = F("Graf-Lodron-Str.");
        break;
    }
    case 120192:
    {
        returnValue = F("Graf-Luckner-Str.");
        break;
    }
    case 120193:
    {
        returnValue = F("Graf-Luckner-Weg");
        break;
    }
    case 120194:
    {
        returnValue = F("Graf-Ludolf-Str.");
        break;
    }
    case 120195:
    {
        returnValue = F("Graf-Ludwig-Str.");
        break;
    }
    case 120196:
    {
        returnValue = F("Graf-Luithold-Str.");
        break;
    }
    case 120197:
    {
        returnValue = F("Graf-Luitpold-Str.");
        break;
    }
    case 120198:
    {
        returnValue = F("Graf-Luxburg-Str.");
        break;
    }
    case 120199:
    {
        returnValue = F("Graf-Lösch-Str.");
        break;
    }
    case 120200:
    {
        returnValue = F("Graf-Lüder-Str.");
        break;
    }
    case 120201:
    {
        returnValue = F("Graf-Mangold-Str.");
        break;
    }
    case 120202:
    {
        returnValue = F("Graf-Marogna-Redwitz-Str.");
        break;
    }
    case 120203:
    {
        returnValue = F("Graf-Max-Str.");
        break;
    }
    case 120204:
    {
        returnValue = F("Graf-Meerveldt-Str.");
        break;
    }
    case 120205:
    {
        returnValue = F("Graf-Meginhard-Str.");
        break;
    }
    case 120206:
    {
        returnValue = F("Graf-Metternich-Str.");
        break;
    }
    case 120207:
    {
        returnValue = F("Graf-Mirbach-Platz");
        break;
    }
    case 120208:
    {
        returnValue = F("Graf-Mirbach-Str.");
        break;
    }
    case 120209:
    {
        returnValue = F("Graf-Moltke-Str.");
        break;
    }
    case 120210:
    {
        returnValue = F("Graf-Moltke-Weg");
        break;
    }
    case 120211:
    {
        returnValue = F("Graf-Moritz-Str.");
        break;
    }
    case 120212:
    {
        returnValue = F("Graf-Moy-Str.");
        break;
    }
    case 120213:
    {
        returnValue = F("Graf-Münster-Str.");
        break;
    }
    case 120214:
    {
        returnValue = F("Graf-Niclas-Str.");
        break;
    }
    case 120215:
    {
        returnValue = F("Graf-Niklas-Str.");
        break;
    }
    case 120216:
    {
        returnValue = F("Graf-Otto-Hartmann-Str.");
        break;
    }
    case 120217:
    {
        returnValue = F("Graf-Otto-Str.");
        break;
    }
    case 120218:
    {
        returnValue = F("Graf-Otto-Weg");
        break;
    }
    case 120219:
    {
        returnValue = F("Graf-Philipp-Ludwig-Str.");
        break;
    }
    case 120220:
    {
        returnValue = F("Graf-Platow-Str.");
        break;
    }
    case 120221:
    {
        returnValue = F("Graf-Pocci-Weg");
        break;
    }
    case 120222:
    {
        returnValue = F("Graf-Preysing-Str.");
        break;
    }
    case 120223:
    {
        returnValue = F("Graf-Puchberger-Weg");
        break;
    }
    case 120224:
    {
        returnValue = F("Graf-Pückler-Str.");
        break;
    }
    case 120225:
    {
        returnValue = F("Graf-Rantzau-Str.");
        break;
    }
    case 120226:
    {
        returnValue = F("Graf-Ranzow-Str.");
        break;
    }
    case 120227:
    {
        returnValue = F("Graf-Rapoto-Str.");
        break;
    }
    case 120228:
    {
        returnValue = F("Graf-Rasso-Str.");
        break;
    }
    case 120229:
    {
        returnValue = F("Graf-Rasso-Weg");
        break;
    }
    case 120230:
    {
        returnValue = F("Graf-Rathold-Weg");
        break;
    }
    case 120231:
    {
        returnValue = F("Graf-Recke-Weg");
        break;
    }
    case 120232:
    {
        returnValue = F("Graf-Reden-Str.");
        break;
    }
    case 120233:
    {
        returnValue = F("Graf-Reginar-Str.");
        break;
    }
    case 120234:
    {
        returnValue = F("Graf-Reinald-Str.");
        break;
    }
    case 120235:
    {
        returnValue = F("Graf-Reisach-Str.");
        break;
    }
    case 120236:
    {
        returnValue = F("Graf-Reuttner-Weg");
        break;
    }
    case 120237:
    {
        returnValue = F("Graf-Rhena-Weg");
        break;
    }
    case 120238:
    {
        returnValue = F("Graf-Rieneck-Str.");
        break;
    }
    case 120239:
    {
        returnValue = F("Graf-Roland-Str.");
        break;
    }
    case 120240:
    {
        returnValue = F("Graf-Rudolf-Str.");
        break;
    }
    case 120241:
    {
        returnValue = F("Graf-Salburg-Str.");
        break;
    }
    case 120242:
    {
        returnValue = F("Graf-Salentin-Ernst-Weg");
        break;
    }
    case 120243:
    {
        returnValue = F("Graf-Salm-Str.");
        break;
    }
    case 120244:
    {
        returnValue = F("Graf-Schack-Allee");
        break;
    }
    case 120245:
    {
        returnValue = F("Graf-Schaesberg-Str.");
        break;
    }
    case 120246:
    {
        returnValue = F("Graf-Schall-Str.");
        break;
    }
    case 120247:
    {
        returnValue = F("Graf-Schaunberg-Str.");
        break;
    }
    case 120248:
    {
        returnValue = F("Graf-Schellart-Platz");
        break;
    }
    case 120249:
    {
        returnValue = F("Graf-Schellart-Weg");
        break;
    }
    case 120250:
    {
        returnValue = F("Graf-Schenk-Str.");
        break;
    }
    case 120251:
    {
        returnValue = F("Graf-Schenk-von-Stauffenberg-Str.");
        break;
    }
    case 120252:
    {
        returnValue = F("Graf-Schulenburg-Weg");
        break;
    }
    case 120253:
    {
        returnValue = F("Graf-Schwerin-Str.");
        break;
    }
    case 120254:
    {
        returnValue = F("Graf-Schönborn-Str.");
        break;
    }
    case 120255:
    {
        returnValue = F("Graf-Seyssel-Str.");
        break;
    }
    case 120256:
    {
        returnValue = F("Graf-Siboto-Str.");
        break;
    }
    case 120257:
    {
        returnValue = F("Graf-Siegebert-Str.");
        break;
    }
    case 120258:
    {
        returnValue = F("Graf-Siegfried-Str.");
        break;
    }
    case 120259:
    {
        returnValue = F("Graf-Sieghart-Weg");
        break;
    }
    case 120260:
    {
        returnValue = F("Graf-Siegmund-Str.");
        break;
    }
    case 120261:
    {
        returnValue = F("Graf-Sighard-Str.");
        break;
    }
    case 120262:
    {
        returnValue = F("Graf-Sigmund-Str.");
        break;
    }
    case 120263:
    {
        returnValue = F("Graf-Simon-Str.");
        break;
    }
    case 120264:
    {
        returnValue = F("Graf-Sinzendorf-Str.");
        break;
    }
    case 120265:
    {
        returnValue = F("Graf-Spee-Allee");
        break;
    }
    case 120266:
    {
        returnValue = F("Graf-Spee-Str.");
        break;
    }
    case 120267:
    {
        returnValue = F("Graf-Spee-Weg");
        break;
    }
    case 120268:
    {
        returnValue = F("Graf-Sponheim-Str.");
        break;
    }
    case 120269:
    {
        returnValue = F("Graf-Sporck-Str.");
        break;
    }
    case 120270:
    {
        returnValue = F("Graf-Spreti-Str.");
        break;
    }
    case 120271:
    {
        returnValue = F("Graf-Sprety-Str.");
        break;
    }
    case 120272:
    {
        returnValue = F("Graf-Stadion-Str.");
        break;
    }
    case 120273:
    {
        returnValue = F("Graf-Stauffenberg Str.");
        break;
    }
    case 120274:
    {
        returnValue = F("Graf-Stauffenberg-Brücke");
        break;
    }
    case 120275:
    {
        returnValue = F("Graf-Stauffenberg-Platz");
        break;
    }
    case 120276:
    {
        returnValue = F("Graf-Stauffenberg-Ring");
        break;
    }
    case 120277:
    {
        returnValue = F("Graf-Stauffenberg-Str.");
        break;
    }
    case 120278:
    {
        returnValue = F("Graf-Stauffenberg-Weg");
        break;
    }
    case 120279:
    {
        returnValue = F("Graf-Sternberg-Str.");
        break;
    }
    case 120280:
    {
        returnValue = F("Graf-Stolberg-Allee");
        break;
    }
    case 120281:
    {
        returnValue = F("Graf-Stolberg-Str.");
        break;
    }
    case 120282:
    {
        returnValue = F("Graf-Tattenbach-Weg");
        break;
    }
    case 120283:
    {
        returnValue = F("Graf-Taube-Str.");
        break;
    }
    case 120284:
    {
        returnValue = F("Graf-Thietmar-Str.");
        break;
    }
    case 120285:
    {
        returnValue = F("Graf-Tiemo-Str.");
        break;
    }
    case 120286:
    {
        returnValue = F("Graf-Tiemo-Weg");
        break;
    }
    case 120287:
    {
        returnValue = F("Graf-Tilly-Str.");
        break;
    }
    case 120288:
    {
        returnValue = F("Graf-Toerring-Seefeld-Str.");
        break;
    }
    case 120289:
    {
        returnValue = F("Graf-Toerring-Str.");
        break;
    }
    case 120290:
    {
        returnValue = F("Graf-Trajektin-Str.");
        break;
    }
    case 120291:
    {
        returnValue = F("Graf-Treuberg-Str.");
        break;
    }
    case 120292:
    {
        returnValue = F("Graf-Trips-Str.");
        break;
    }
    case 120293:
    {
        returnValue = F("Graf-Törring-Str.");
        break;
    }
    case 120294:
    {
        returnValue = F("Graf-Uko-Weg");
        break;
    }
    case 120295:
    {
        returnValue = F("Graf-Ulrich-Str.");
        break;
    }
    case 120296:
    {
        returnValue = F("Graf-Ulrich-Weg");
        break;
    }
    case 120297:
    {
        returnValue = F("Graf-Veith-Str.");
        break;
    }
    case 120298:
    {
        returnValue = F("Graf-Vieregg-Str.");
        break;
    }
    case 120299:
    {
        returnValue = F("Graf-Vojkffy-Weg");
        break;
    }
    case 120300:
    {
        returnValue = F("Graf-Volker-Str.");
        break;
    }
    case 120301:
    {
        returnValue = F("Graf-Volkwin-Str.");
        break;
    }
    case 120302:
    {
        returnValue = F("Graf-Von-Galen-Str.");
        break;
    }
    case 120303:
    {
        returnValue = F("Graf-Wartenberg-Ring");
        break;
    }
    case 120304:
    {
        returnValue = F("Graf-Werder-Str.");
        break;
    }
    case 120305:
    {
        returnValue = F("Graf-Werner-Str.");
        break;
    }
    case 120306:
    {
        returnValue = F("Graf-Wichmann-Allee");
        break;
    }
    case 120307:
    {
        returnValue = F("Graf-Wichmann-Str.");
        break;
    }
    case 120308:
    {
        returnValue = F("Graf-Widukind-Str.");
        break;
    }
    case 120309:
    {
        returnValue = F("Graf-Wilhelm-Str.");
        break;
    }
    case 120310:
    {
        returnValue = F("Graf-Wilhelm-Weg");
        break;
    }
    case 120311:
    {
        returnValue = F("Graf-Wiprecht-Str.");
        break;
    }
    case 120312:
    {
        returnValue = F("Graf-Wirich-Str.");
        break;
    }
    case 120313:
    {
        returnValue = F("Graf-Woellwarth-Str.");
        break;
    }
    case 120314:
    {
        returnValue = F("Graf-Wolfegg-Str.");
        break;
    }
    case 120315:
    {
        returnValue = F("Graf-Wolfgang-Str.");
        break;
    }
    case 120316:
    {
        returnValue = F("Graf-Yorck-Str.");
        break;
    }
    case 120317:
    {
        returnValue = F("Graf-Zaisolf-Str.");
        break;
    }
    case 120318:
    {
        returnValue = F("Graf-Zech-Weg");
        break;
    }
    case 120319:
    {
        returnValue = F("Graf-Zeppelin-Allee");
        break;
    }
    case 120320:
    {
        returnValue = F("Graf-Zeppelin-Ring");
        break;
    }
    case 120321:
    {
        returnValue = F("Graf-Zeppelin-Str.");
        break;
    }
    case 120322:
    {
        returnValue = F("Graf-v.-Bray-Str.");
        break;
    }
    case 120323:
    {
        returnValue = F("Graf-v.-Moltke-Platz");
        break;
    }
    case 120324:
    {
        returnValue = F("Graf-v.-Stauffenberg-Str.");
        break;
    }
    case 120325:
    {
        returnValue = F("Graf-von-Bissingen-Str.");
        break;
    }
    case 120326:
    {
        returnValue = F("Graf-von-Bogen-Str.");
        break;
    }
    case 120327:
    {
        returnValue = F("Graf-von-Bünau-Ring");
        break;
    }
    case 120328:
    {
        returnValue = F("Graf-von-Dehn-Str.");
        break;
    }
    case 120329:
    {
        returnValue = F("Graf-von-Deuring-Str.");
        break;
    }
    case 120330:
    {
        returnValue = F("Graf-von-Deym-Str.");
        break;
    }
    case 120331:
    {
        returnValue = F("Graf-von-Düren-Str.");
        break;
    }
    case 120332:
    {
        returnValue = F("Graf-von-Galen-Platz");
        break;
    }
    case 120333:
    {
        returnValue = F("Graf-von-Galen-Str.");
        break;
    }
    case 120334:
    {
        returnValue = F("Graf-von-Galen-Weg");
        break;
    }
    case 120335:
    {
        returnValue = F("Graf-von-Geldern-Str.");
        break;
    }
    case 120336:
    {
        returnValue = F("Graf-von-Hardenberg-Str.");
        break;
    }
    case 120337:
    {
        returnValue = F("Graf-von-Lerchenfeld-Str.");
        break;
    }
    case 120338:
    {
        returnValue = F("Graf-von-Linden-Str.");
        break;
    }
    case 120339:
    {
        returnValue = F("Graf-von-Luckner-Stieg");
        break;
    }
    case 120340:
    {
        returnValue = F("Graf-von-Maldeghem-Str.");
        break;
    }
    case 120341:
    {
        returnValue = F("Graf-von-Manderscheid-Str.");
        break;
    }
    case 120342:
    {
        returnValue = F("Graf-von-Merveldt-Str.");
        break;
    }
    case 120343:
    {
        returnValue = F("Graf-von-Moltke-Str.");
        break;
    }
    case 120344:
    {
        returnValue = F("Graf-von-Moltke-Weg");
        break;
    }
    case 120345:
    {
        returnValue = F("Graf-von-Münnich-Str.");
        break;
    }
    case 120346:
    {
        returnValue = F("Graf-von-Oberndorff-Str.");
        break;
    }
    case 120347:
    {
        returnValue = F("Graf-von-Pfeil-Str.");
        break;
    }
    case 120348:
    {
        returnValue = F("Graf-von-Plettenberg-Str.");
        break;
    }
    case 120349:
    {
        returnValue = F("Graf-von-Rechberg-Str.");
        break;
    }
    case 120350:
    {
        returnValue = F("Graf-von-Reisach-Str.");
        break;
    }
    case 120351:
    {
        returnValue = F("Graf-von-Roden-Str.");
        break;
    }
    case 120352:
    {
        returnValue = F("Graf-von-Schwerin-Str.");
        break;
    }
    case 120353:
    {
        returnValue = F("Graf-von-Soden-Platz");
        break;
    }
    case 120354:
    {
        returnValue = F("Graf-von-Soden-Str.");
        break;
    }
    case 120355:
    {
        returnValue = F("Graf-von-Spee-Str.");
        break;
    }
    case 120356:
    {
        returnValue = F("Graf-von-Sponheim-Str.");
        break;
    }
    case 120357:
    {
        returnValue = F("Graf-von-Stadion-Str.");
        break;
    }
    case 120358:
    {
        returnValue = F("Graf-von-Stauffenberg-Str.");
        break;
    }
    case 120359:
    {
        returnValue = F("Graf-von-Stauffenberg-Weg");
        break;
    }
    case 120360:
    {
        returnValue = F("Graf-von-Tauffkirchen-Str.");
        break;
    }
    case 120361:
    {
        returnValue = F("Graf-von-Treuberg-Str.");
        break;
    }
    case 120362:
    {
        returnValue = F("Graf-von-Werdenberg-Str.");
        break;
    }
    case 120363:
    {
        returnValue = F("Graf-von-Westerholt-Str.");
        break;
    }
    case 120364:
    {
        returnValue = F("Graf-von-Westphalen-Str.");
        break;
    }
    case 120365:
    {
        returnValue = F("Graf-von-Zeppelin-Str.");
        break;
    }
    case 120366:
    {
        returnValue = F("Graf-von-der-Mark-Str.");
        break;
    }
    case 120367:
    {
        returnValue = F("Graf-von-der-Schulenburg-Str.");
        break;
    }
    case 120368:
    {
        returnValue = F("Graf-zu-Eltz-Str.");
        break;
    }
    case 120369:
    {
        returnValue = F("Graf-zu-Toerring-Str.");
        break;
    }
    case 120370:
    {
        returnValue = F("Grafel");
        break;
    }
    case 120371:
    {
        returnValue = F("Grafelder Str.");
        break;
    }
    case 120372:
    {
        returnValue = F("Grafelder Weg");
        break;
    }
    case 120373:
    {
        returnValue = F("Grafeler Berg");
        break;
    }
    case 120374:
    {
        returnValue = F("Grafeler Str.");
        break;
    }
    case 120375:
    {
        returnValue = F("Grafen - Schachenweg");
        break;
    }
    case 120376:
    {
        returnValue = F("Grafen Allee");
        break;
    }
    case 120377:
    {
        returnValue = F("Grafen-von-Berchem-Str.");
        break;
    }
    case 120378:
    {
        returnValue = F("Grafen-von-Hoya-Str.");
        break;
    }
    case 120379:
    {
        returnValue = F("Grafen-von-Rieneck-Str.");
        break;
    }
    case 120380:
    {
        returnValue = F("Grafen-von-Sempt-Str.");
        break;
    }
    case 120381:
    {
        returnValue = F("Grafenacker");
        break;
    }
    case 120382:
    {
        returnValue = F("Grafenackerstr.");
        break;
    }
    case 120383:
    {
        returnValue = F("Grafenallee");
        break;
    }
    case 120384:
    {
        returnValue = F("Grafenauer Str.");
        break;
    }
    case 120385:
    {
        returnValue = F("Grafenberg");
        break;
    }
    case 120386:
    {
        returnValue = F("Grafenberger Str.");
        break;
    }
    case 120387:
    {
        returnValue = F("Grafenberger Weg");
        break;
    }
    case 120388:
    {
        returnValue = F("Grafenbergstr.");
        break;
    }
    case 120389:
    {
        returnValue = F("Grafenbergweg");
        break;
    }
    case 120390:
    {
        returnValue = F("Grafenbuchstr.");
        break;
    }
    case 120391:
    {
        returnValue = F("Grafenbuckelweg");
        break;
    }
    case 120392:
    {
        returnValue = F("Grafenbühlstr.");
        break;
    }
    case 120393:
    {
        returnValue = F("Grafenbühlweg");
        break;
    }
    case 120394:
    {
        returnValue = F("Grafendamm");
        break;
    }
    case 120395:
    {
        returnValue = F("Grafendobrach");
        break;
    }
    case 120396:
    {
        returnValue = F("Grafendorfer Str.");
        break;
    }
    case 120397:
    {
        returnValue = F("Grafeneck");
        break;
    }
    case 120398:
    {
        returnValue = F("Grafenecker Str.");
        break;
    }
    case 120399:
    {
        returnValue = F("Grafeneckstr.");
        break;
    }
    case 120400:
    {
        returnValue = F("Grafeneggstr.");
        break;
    }
    case 120401:
    {
        returnValue = F("Grafenfeld");
        break;
    }
    case 120402:
    {
        returnValue = F("Grafengasse");
        break;
    }
    case 120403:
    {
        returnValue = F("Grafengaßl");
        break;
    }
    case 120404:
    {
        returnValue = F("Grafengrabenweg");
        break;
    }
    case 120405:
    {
        returnValue = F("Grafengrundweg");
        break;
    }
    case 120406:
    {
        returnValue = F("Grafengrüner Str.");
        break;
    }
    case 120407:
    {
        returnValue = F("Grafenhalde");
        break;
    }
    case 120408:
    {
        returnValue = F("Grafenhaldeweg");
        break;
    }
    case 120409:
    {
        returnValue = F("Grafenhaun");
        break;
    }
    case 120410:
    {
        returnValue = F("Grafenhauser Str.");
        break;
    }
    case 120411:
    {
        returnValue = F("Grafenhauweg");
        break;
    }
    case 120412:
    {
        returnValue = F("Grafenhof");
        break;
    }
    case 120413:
    {
        returnValue = F("Grafenhof/City-Center");
        break;
    }
    case 120414:
    {
        returnValue = F("Grafenholzstr.");
        break;
    }
    case 120415:
    {
        returnValue = F("Grafenholzweg");
        break;
    }
    case 120416:
    {
        returnValue = F("Grafenhorst");
        break;
    }
    case 120417:
    {
        returnValue = F("Grafenhorststr.");
        break;
    }
    case 120418:
    {
        returnValue = F("Grafenhölzl");
        break;
    }
    case 120419:
    {
        returnValue = F("Grafenleite");
        break;
    }
    case 120420:
    {
        returnValue = F("Grafenleitenweg");
        break;
    }
    case 120421:
    {
        returnValue = F("Grafenmattweg");
        break;
    }
    case 120422:
    {
        returnValue = F("Grafenorter Str.");
        break;
    }
    case 120423:
    {
        returnValue = F("Grafenrain");
        break;
    }
    case 120424:
    {
        returnValue = F("Grafenrainstr.");
        break;
    }
    case 120425:
    {
        returnValue = F("Grafenreisach Weg");
        break;
    }
    case 120426:
    {
        returnValue = F("Grafenreuth");
        break;
    }
    case 120427:
    {
        returnValue = F("Grafenreuther Str.");
        break;
    }
    case 120428:
    {
        returnValue = F("Grafenrheinfelder Str.");
        break;
    }
    case 120429:
    {
        returnValue = F("Grafenricht");
        break;
    }
    case 120430:
    {
        returnValue = F("Grafenrichter Str.");
        break;
    }
    case 120431:
    {
        returnValue = F("Grafenrieder Str.");
        break;
    }
    case 120432:
    {
        returnValue = F("Grafenrieder Weg");
        break;
    }
    case 120433:
    {
        returnValue = F("Grafenring");
        break;
    }
    case 120434:
    {
        returnValue = F("Grafenschlag");
        break;
    }
    case 120435:
    {
        returnValue = F("Grafenschlagweg");
        break;
    }
    case 120436:
    {
        returnValue = F("Grafenspitz");
        break;
    }
    case 120437:
    {
        returnValue = F("Grafensprungweg");
        break;
    }
    case 120438:
    {
        returnValue = F("Grafenstadl");
        break;
    }
    case 120439:
    {
        returnValue = F("Grafenstaffel");
        break;
    }
    case 120440:
    {
        returnValue = F("Grafensteig");
        break;
    }
    case 120441:
    {
        returnValue = F("Grafenstein");
        break;
    }
    case 120442:
    {
        returnValue = F("Grafensteinstr.");
        break;
    }
    case 120443:
    {
        returnValue = F("Grafensteinweg");
        break;
    }
    case 120444:
    {
        returnValue = F("Grafenstr.");
        break;
    }
    case 120445:
    {
        returnValue = F("Grafentalstr.");
        break;
    }
    case 120446:
    {
        returnValue = F("Grafentalweg");
        break;
    }
    case 120447:
    {
        returnValue = F("Grafentraubach");
        break;
    }
    case 120448:
    {
        returnValue = F("Grafenwald");
        break;
    }
    case 120449:
    {
        returnValue = F("Grafenwaldweg");
        break;
    }
    case 120450:
    {
        returnValue = F("Grafenwall");
        break;
    }
    case 120451:
    {
        returnValue = F("Grafenwandstr.");
        break;
    }
    case 120452:
    {
        returnValue = F("Grafenweg");
        break;
    }
    case 120453:
    {
        returnValue = F("Grafenwerderstr.");
        break;
    }
    case 120454:
    {
        returnValue = F("Grafenwerther Str.");
        break;
    }
    case 120455:
    {
        returnValue = F("Grafenwiese");
        break;
    }
    case 120456:
    {
        returnValue = F("Grafenwiesen");
        break;
    }
    case 120457:
    {
        returnValue = F("Grafenwiesenstr.");
        break;
    }
    case 120458:
    {
        returnValue = F("Grafenwieser Weg");
        break;
    }
    case 120459:
    {
        returnValue = F("Grafenwöhrer Str.");
        break;
    }
    case 120460:
    {
        returnValue = F("Grafenäckerstr.");
        break;
    }
    case 120461:
    {
        returnValue = F("Grafenöd");
        break;
    }
    case 120462:
    {
        returnValue = F("Grafenöder Weg");
        break;
    }
    case 120463:
    {
        returnValue = F("Grafestr.");
        break;
    }
    case 120464:
    {
        returnValue = F("Graffelbruchstr.");
        break;
    }
    case 120465:
    {
        returnValue = F("Graffelder Esch");
        break;
    }
    case 120466:
    {
        returnValue = F("Graffeler Berg");
        break;
    }
    case 120467:
    {
        returnValue = F("Graffeler Ring");
        break;
    }
    case 120468:
    {
        returnValue = F("Graffeln");
        break;
    }
    case 120469:
    {
        returnValue = F("Graffenstr.");
        break;
    }
    case 120470:
    {
        returnValue = F("Graffiti-Park in der Rosenau");
        break;
    }
    case 120471:
    {
        returnValue = F("Grafforst");
        break;
    }
    case 120472:
    {
        returnValue = F("Grafftring");
        break;
    }
    case 120473:
    {
        returnValue = F("Graffweg");
        break;
    }
    case 120474:
    {
        returnValue = F("Grafhornstr.");
        break;
    }
    case 120475:
    {
        returnValue = F("Grafhornweg");
        break;
    }
    case 120476:
    {
        returnValue = F("Grafhorster Str.");
        break;
    }
    case 120477:
    {
        returnValue = F("Grafing");
        break;
    }
    case 120478:
    {
        returnValue = F("Grafinger Platz");
        break;
    }
    case 120479:
    {
        returnValue = F("Grafinger Ring");
        break;
    }
    case 120480:
    {
        returnValue = F("Grafinger Str.");
        break;
    }
    case 120481:
    {
        returnValue = F("Graflinger Str.");
        break;
    }
    case 120482:
    {
        returnValue = F("Graflkofen");
        break;
    }
    case 120483:
    {
        returnValue = F("Grafmühlstr.");
        break;
    }
    case 120484:
    {
        returnValue = F("Grafmühlweg");
        break;
    }
    case 120485:
    {
        returnValue = F("Grafrather Str.");
        break;
    }
    case 120486:
    {
        returnValue = F("Grafschaft");
        break;
    }
    case 120487:
    {
        returnValue = F("Grafschafter Pad");
        break;
    }
    case 120488:
    {
        returnValue = F("Grafschafter Platz");
        break;
    }
    case 120489:
    {
        returnValue = F("Grafschafter Ring");
        break;
    }
    case 120490:
    {
        returnValue = F("Grafschafter Str.");
        break;
    }
    case 120491:
    {
        returnValue = F("Grafschafter Weg");
        break;
    }
    case 120492:
    {
        returnValue = F("Grafschaftsgasse");
        break;
    }
    case 120493:
    {
        returnValue = F("Grafschaftsplatz");
        break;
    }
    case 120494:
    {
        returnValue = F("Grafschaftsstr.");
        break;
    }
    case 120495:
    {
        returnValue = F("Grafschaftstr.");
        break;
    }
    case 120496:
    {
        returnValue = F("Grafschaftsweg");
        break;
    }
    case 120497:
    {
        returnValue = F("Grafscherweg");
        break;
    }
    case 120498:
    {
        returnValue = F("Grafstr.");
        break;
    }
    case 120499:
    {
        returnValue = F("Graftanlagen");
        break;
    }
    case 120500:
    {
        returnValue = F("Graftegge");
        break;
    }
    case 120501:
    {
        returnValue = F("Graftlage");
        break;
    }
    case 120502:
    {
        returnValue = F("Graftplatz");
        break;
    }
    case 120503:
    {
        returnValue = F("Graftstr.");
        break;
    }
    case 120504:
    {
        returnValue = F("Graftweg");
        break;
    }
    case 120505:
    {
        returnValue = F("Grafweg");
        break;
    }
    case 120506:
    {
        returnValue = F("Graham-Bell-Weg");
        break;
    }
    case 120507:
    {
        returnValue = F("Grahamstr.");
        break;
    }
    case 120508:
    {
        returnValue = F("Grahamsweg");
        break;
    }
    case 120509:
    {
        returnValue = F("Grahbergstr.");
        break;
    }
    case 120510:
    {
        returnValue = F("Grahlenstein");
        break;
    }
    case 120511:
    {
        returnValue = F("Grahlerner Wäldchen");
        break;
    }
    case 120512:
    {
        returnValue = F("Grahles Garten");
        break;
    }
    case 120513:
    {
        returnValue = F("Grahlhof");
        break;
    }
    case 120514:
    {
        returnValue = F("Grahlhofer Weg");
        break;
    }
    case 120515:
    {
        returnValue = F("Grahlplatz");
        break;
    }
    case 120516:
    {
        returnValue = F("Grahlstr.");
        break;
    }
    case 120517:
    {
        returnValue = F("Grahsee");
        break;
    }
    case 120518:
    {
        returnValue = F("Grahügel");
        break;
    }
    case 120519:
    {
        returnValue = F("Graichaer Str.");
        break;
    }
    case 120520:
    {
        returnValue = F("Graimbergweg");
        break;
    }
    case 120521:
    {
        returnValue = F("Grain");
        break;
    }
    case 120522:
    {
        returnValue = F("Grainauer Weg");
        break;
    }
    case 120523:
    {
        returnValue = F("Graine");
        break;
    }
    case 120524:
    {
        returnValue = F("Graineter Str.");
        break;
    }
    case 120525:
    {
        returnValue = F("Graingasse");
        break;
    }
    case 120526:
    {
        returnValue = F("Grainhof");
        break;
    }
    case 120527:
    {
        returnValue = F("Grainstr.");
        break;
    }
    case 120528:
    {
        returnValue = F("Grainstrote");
        break;
    }
    case 120529:
    {
        returnValue = F("Grainwinkel");
        break;
    }
    case 120530:
    {
        returnValue = F("Graisbacher Weg");
        break;
    }
    case 120531:
    {
        returnValue = F("Graisbachstr.");
        break;
    }
    case 120532:
    {
        returnValue = F("Graisch");
        break;
    }
    case 120533:
    {
        returnValue = F("Graitschen auf der Höhe");
        break;
    }
    case 120534:
    {
        returnValue = F("Graitzer Str.");
        break;
    }
    case 120535:
    {
        returnValue = F("Gralinger Weg");
        break;
    }
    case 120536:
    {
        returnValue = F("Gralow");
        break;
    }
    case 120537:
    {
        returnValue = F("Gralower Str.");
        break;
    }
    case 120538:
    {
        returnValue = F("Gralower Weg");
        break;
    }
    case 120539:
    {
        returnValue = F("Gramacher Weg");
        break;
    }
    case 120540:
    {
        returnValue = F("Gramanstr.");
        break;
    }
    case 120541:
    {
        returnValue = F("Grambauerstr.");
        break;
    }
    case 120542:
    {
        returnValue = F("Grambeker Heide");
        break;
    }
    case 120543:
    {
        returnValue = F("Grambeker Weg");
        break;
    }
    case 120544:
    {
        returnValue = F("Gramberger Str.");
        break;
    }
    case 120545:
    {
        returnValue = F("Grambergs Weg");
        break;
    }
    case 120546:
    {
        returnValue = F("Grambergweg");
        break;
    }
    case 120547:
    {
        returnValue = F("Grambower Chaussee");
        break;
    }
    case 120548:
    {
        returnValue = F("Grambower Str.");
        break;
    }
    case 120549:
    {
        returnValue = F("Grambower Weg");
        break;
    }
    case 120550:
    {
        returnValue = F("Grambuscher Str.");
        break;
    }
    case 120551:
    {
        returnValue = F("Grambzow");
        break;
    }
    case 120552:
    {
        returnValue = F("Gramelower Str.");
        break;
    }
    case 120553:
    {
        returnValue = F("Gramenzer Weg");
        break;
    }
    case 120554:
    {
        returnValue = F("Gramker Str.");
        break;
    }
    case 120555:
    {
        returnValue = F("Gramletstr.");
        break;
    }
    case 120556:
    {
        returnValue = F("Gramlingstr.");
        break;
    }
    case 120557:
    {
        returnValue = F("Grammdorfer Weg");
        break;
    }
    case 120558:
    {
        returnValue = F("Grammelkam");
        break;
    }
    case 120559:
    {
        returnValue = F("Grammelmoorweg");
        break;
    }
    case 120560:
    {
        returnValue = F("Grammelsbrunn");
        break;
    }
    case 120561:
    {
        returnValue = F("Grammelter Weg");
        break;
    }
    case 120562:
    {
        returnValue = F("Grammendorfer Weg");
        break;
    }
    case 120563:
    {
        returnValue = F("Grammersbergstr.");
        break;
    }
    case 120564:
    {
        returnValue = F("Grammersdorf");
        break;
    }
    case 120565:
    {
        returnValue = F("Grammertin");
        break;
    }
    case 120566:
    {
        returnValue = F("Grammgasse");
        break;
    }
    case 120567:
    {
        returnValue = F("Gramming");
        break;
    }
    case 120568:
    {
        returnValue = F("Grammwiesenweg");
        break;
    }
    case 120569:
    {
        returnValue = F("Grammühle");
        break;
    }
    case 120570:
    {
        returnValue = F("Gramnitzer Hauptstr.");
        break;
    }
    case 120571:
    {
        returnValue = F("Gramonter Str.");
        break;
    }
    case 120572:
    {
        returnValue = F("Grampersdorfer Weg");
        break;
    }
    case 120573:
    {
        returnValue = F("Gramsbergen");
        break;
    }
    case 120574:
    {
        returnValue = F("Gramsbergener Str.");
        break;
    }
    case 120575:
    {
        returnValue = F("Gramschatzer Ring");
        break;
    }
    case 120576:
    {
        returnValue = F("Gramschatzer Str.");
        break;
    }
    case 120577:
    {
        returnValue = F("Gramschatzer Zahlenweg");
        break;
    }
    case 120578:
    {
        returnValue = F("Gramsdorfer Str.");
        break;
    }
    case 120579:
    {
        returnValue = F("Gramsdorfer Weg");
        break;
    }
    case 120580:
    {
        returnValue = F("Gramtitz");
        break;
    }
    case 120581:
    {
        returnValue = F("Gramzow");
        break;
    }
    case 120582:
    {
        returnValue = F("Gramzower Chaussee");
        break;
    }
    case 120583:
    {
        returnValue = F("Gramzower Str.");
        break;
    }
    case 120584:
    {
        returnValue = F("Gramzower Weg");
        break;
    }
    case 120585:
    {
        returnValue = F("Granadaallee");
        break;
    }
    case 120586:
    {
        returnValue = F("Granaer Weg");
        break;
    }
    case 120587:
    {
        returnValue = F("Granastr.");
        break;
    }
    case 120588:
    {
        returnValue = F("Granatenweg");
        break;
    }
    case 120589:
    {
        returnValue = F("Granatstr.");
        break;
    }
    case 120590:
    {
        returnValue = F("Granatweg");
        break;
    }
    case 120591:
    {
        returnValue = F("Granauer Str.");
        break;
    }
    case 120592:
    {
        returnValue = F("Granbrink");
        break;
    }
    case 120593:
    {
        returnValue = F("Grand-Centre-Ring");
        break;
    }
    case 120594:
    {
        returnValue = F("Grand-Couronne-Allee");
        break;
    }
    case 120595:
    {
        returnValue = F("Grand-Quevilly-Passage");
        break;
    }
    case 120596:
    {
        returnValue = F("Grandauer-Au-Str.");
        break;
    }
    case 120597:
    {
        returnValue = F("Grandauerstr.");
        break;
    }
    case 120598:
    {
        returnValue = F("Grandbergweg");
        break;
    }
    case 120599:
    {
        returnValue = F("Granderathstr.");
        break;
    }
    case 120600:
    {
        returnValue = F("Granderheider Weg");
        break;
    }
    case 120601:
    {
        returnValue = F("Granderheidestr.");
        break;
    }
    case 120602:
    {
        returnValue = F("Grandiger Weg");
        break;
    }
    case 120603:
    {
        returnValue = F("Grandkaule");
        break;
    }
    case 120604:
    {
        returnValue = F("Grandkuhle");
        break;
    }
    case 120605:
    {
        returnValue = F("Grandkuhlenweg");
        break;
    }
    case 120606:
    {
        returnValue = F("Grandlmiltach");
        break;
    }
    case 120607:
    {
        returnValue = F("Grandorfer Str.");
        break;
    }
    case 120608:
    {
        returnValue = F("Grandsberg");
        break;
    }
    case 120609:
    {
        returnValue = F("Grandsee");
        break;
    }
    case 120610:
    {
        returnValue = F("Grandsteig");
        break;
    }
    case 120611:
    {
        returnValue = F("Grandstieg");
        break;
    }
    case 120612:
    {
        returnValue = F("Grandweg");
        break;
    }
    case 120613:
    {
        returnValue = F("Grandweg-Ulricher-Wallstr.");
        break;
    }
    case 120614:
    {
        returnValue = F("Grane - Uferstr.");
        break;
    }
    case 120615:
    {
        returnValue = F("Graneckerstr.");
        break;
    }
    case 120616:
    {
        returnValue = F("Granefurtweg");
        break;
    }
    case 120617:
    {
        returnValue = F("Graneggstr.");
        break;
    }
    case 120618:
    {
        returnValue = F("Graneggweg");
        break;
    }
    case 120619:
    {
        returnValue = F("Graner Str.");
        break;
    }
    case 120620:
    {
        returnValue = F("Granestr.");
        break;
    }
    case 120621:
    {
        returnValue = F("Granetalstr.");
        break;
    }
    case 120622:
    {
        returnValue = F("Granetalweg");
        break;
    }
    case 120623:
    {
        returnValue = F("Graneweg");
        break;
    }
    case 120624:
    {
        returnValue = F("Grangert-Verbweg");
        break;
    }
    case 120625:
    {
        returnValue = F("Grangerthangweg");
        break;
    }
    case 120626:
    {
        returnValue = F("Grangertweg");
        break;
    }
    case 120627:
    {
        returnValue = F("Grangesstr.");
        break;
    }
    case 120628:
    {
        returnValue = F("Grangethangweg");
        break;
    }
    case 120629:
    {
        returnValue = F("Grangetweg");
        break;
    }
    case 120630:
    {
        returnValue = F("Grangärtenweg");
        break;
    }
    case 120631:
    {
        returnValue = F("Granheimer Str.");
        break;
    }
    case 120632:
    {
        returnValue = F("Granitlabyrinth");
        break;
    }
    case 120633:
    {
        returnValue = F("Granitsteine/Kieselsteine");
        break;
    }
    case 120634:
    {
        returnValue = F("Granitstr.");
        break;
    }
    case 120635:
    {
        returnValue = F("Granitweg");
        break;
    }
    case 120636:
    {
        returnValue = F("Granitzberger Steg");
        break;
    }
    case 120637:
    {
        returnValue = F("Granitzblick");
        break;
    }
    case 120638:
    {
        returnValue = F("Granitzer Str.");
        break;
    }
    case 120639:
    {
        returnValue = F("Granitzer Weg");
        break;
    }
    case 120640:
    {
        returnValue = F("Granitzhof");
        break;
    }
    case 120641:
    {
        returnValue = F("Granitzstr.");
        break;
    }
    case 120642:
    {
        returnValue = F("Grannenweg");
        break;
    }
    case 120643:
    {
        returnValue = F("Gransau");
        break;
    }
    case 120644:
    {
        returnValue = F("Gransauplatz");
        break;
    }
    case 120645:
    {
        returnValue = F("Granschützer Str.");
        break;
    }
    case 120646:
    {
        returnValue = F("Gransdorfer Str.");
        break;
    }
    case 120647:
    {
        returnValue = F("Granseer Str.");
        break;
    }
    case 120648:
    {
        returnValue = F("Granseer Weg");
        break;
    }
    case 120649:
    {
        returnValue = F("Granstahlweg");
        break;
    }
    case 120650:
    {
        returnValue = F("Granstedter Dorfstr.");
        break;
    }
    case 120651:
    {
        returnValue = F("Granstedter Ostenbrücke");
        break;
    }
    case 120652:
    {
        returnValue = F("Granstedter Str.");
        break;
    }
    case 120653:
    {
        returnValue = F("Granstedter Weg");
        break;
    }
    case 120654:
    {
        returnValue = F("Grantchaussee");
        break;
    }
    case 120655:
    {
        returnValue = F("Grantgrubenweg");
        break;
    }
    case 120656:
    {
        returnValue = F("Grantham-Allee");
        break;
    }
    case 120657:
    {
        returnValue = F("Grantschener Hohl");
        break;
    }
    case 120658:
    {
        returnValue = F("Grantschener Str.");
        break;
    }
    case 120659:
    {
        returnValue = F("Grantschener Weg");
        break;
    }
    case 120660:
    {
        returnValue = F("Grantweg");
        break;
    }
    case 120661:
    {
        returnValue = F("Granz-Weg");
        break;
    }
    case 120662:
    {
        returnValue = F("Granzin");
        break;
    }
    case 120663:
    {
        returnValue = F("Granziner Str.");
        break;
    }
    case 120664:
    {
        returnValue = F("Granziner Weg");
        break;
    }
    case 120665:
    {
        returnValue = F("Granzow");
        break;
    }
    case 120666:
    {
        returnValue = F("Granzower Str.");
        break;
    }
    case 120667:
    {
        returnValue = F("Granzweg");
        break;
    }
    case 120668:
    {
        returnValue = F("Grape Street");
        break;
    }
    case 120669:
    {
        returnValue = F("Grapengießerstrasse");
        break;
    }
    case 120670:
    {
        returnValue = F("Grapenkamp");
        break;
    }
    case 120671:
    {
        returnValue = F("Grapentiner Weg");
        break;
    }
    case 120672:
    {
        returnValue = F("Grapenweg");
        break;
    }
    case 120673:
    {
        returnValue = F("Grapenwerderstr.");
        break;
    }
    case 120674:
    {
        returnValue = F("Graphitweg");
        break;
    }
    case 120675:
    {
        returnValue = F("Grappaweg");
        break;
    }
    case 120676:
    {
        returnValue = F("Grapperhausen");
        break;
    }
    case 120677:
    {
        returnValue = F("Grappermöns");
        break;
    }
    case 120678:
    {
        returnValue = F("Grappertshofen");
        break;
    }
    case 120679:
    {
        returnValue = F("Gras-Damm-Weg");
        break;
    }
    case 120680:
    {
        returnValue = F("Gras-Ellenbacher Weg");
        break;
    }
    case 120681:
    {
        returnValue = F("Grasacker");
        break;
    }
    case 120682:
    {
        returnValue = F("Grasackerweg");
        break;
    }
    case 120683:
    {
        returnValue = F("Grasamerweg");
        break;
    }
    case 120684:
    {
        returnValue = F("Grasanger");
        break;
    }
    case 120685:
    {
        returnValue = F("Grasbach");
        break;
    }
    case 120686:
    {
        returnValue = F("Grasbachweg");
        break;
    }
    case 120687:
    {
        returnValue = F("Grasberg");
        break;
    }
    case 120688:
    {
        returnValue = F("Grasberger Str.");
        break;
    }
    case 120689:
    {
        returnValue = F("Grasberger Weg");
        break;
    }
    case 120690:
    {
        returnValue = F("Grasbergstr.");
        break;
    }
    case 120691:
    {
        returnValue = F("Grasbergweg");
        break;
    }
    case 120692:
    {
        returnValue = F("Grasbeurer Str.");
        break;
    }
    case 120693:
    {
        returnValue = F("Grasbrink");
        break;
    }
    case 120694:
    {
        returnValue = F("Grasbrockstr.");
        break;
    }
    case 120695:
    {
        returnValue = F("Grasbrook");
        break;
    }
    case 120696:
    {
        returnValue = F("Grasbruchweg");
        break;
    }
    case 120697:
    {
        returnValue = F("Grasbrunner Geräumt");
        break;
    }
    case 120698:
    {
        returnValue = F("Grasbrunner Stadtweg");
        break;
    }
    case 120699:
    {
        returnValue = F("Grasbrunner Str.");
        break;
    }
    case 120700:
    {
        returnValue = F("Grasbrunner Weg");
        break;
    }
    case 120701:
    {
        returnValue = F("Grasburgstr.");
        break;
    }
    case 120702:
    {
        returnValue = F("Grasbödele");
        break;
    }
    case 120703:
    {
        returnValue = F("Grasbütenweg");
        break;
    }
    case 120704:
    {
        returnValue = F("Grasdamm");
        break;
    }
    case 120705:
    {
        returnValue = F("Grasdelle");
        break;
    }
    case 120706:
    {
        returnValue = F("Grasdiek");
        break;
    }
    case 120707:
    {
        returnValue = F("Grasdorf");
        break;
    }
    case 120708:
    {
        returnValue = F("Grasdorfer Nebenweg");
        break;
    }
    case 120709:
    {
        returnValue = F("Grasdorfer Schuldamm");
        break;
    }
    case 120710:
    {
        returnValue = F("Grasdorfer Str.");
        break;
    }
    case 120711:
    {
        returnValue = F("Grasdorfer Weg");
        break;
    }
    case 120712:
    {
        returnValue = F("Grasebicke");
        break;
    }
    case 120713:
    {
        returnValue = F("Graseborn");
        break;
    }
    case 120714:
    {
        returnValue = F("Grasekabeln");
        break;
    }
    case 120715:
    {
        returnValue = F("Grasellenbacher Weg");
        break;
    }
    case 120716:
    {
        returnValue = F("Grasemannweg");
        break;
    }
    case 120717:
    {
        returnValue = F("Grasenmoor");
        break;
    }
    case 120718:
    {
        returnValue = F("Graser Feld");
        break;
    }
    case 120719:
    {
        returnValue = F("Grasergasse");
        break;
    }
    case 120720:
    {
        returnValue = F("Graserstr.");
        break;
    }
    case 120721:
    {
        returnValue = F("Graserweg");
        break;
    }
    case 120722:
    {
        returnValue = F("Grasesteig");
        break;
    }
    case 120723:
    {
        returnValue = F("Grasewanne");
        break;
    }
    case 120724:
    {
        returnValue = F("Graseweg");
        break;
    }
    case 120725:
    {
        returnValue = F("Grasewegskamp");
        break;
    }
    case 120726:
    {
        returnValue = F("Grasfeldweg");
        break;
    }
    case 120727:
    {
        returnValue = F("Grasfenne");
        break;
    }
    case 120728:
    {
        returnValue = F("Grasfläche mit Bänken");
        break;
    }
    case 120729:
    {
        returnValue = F("Grasgarten");
        break;
    }
    case 120730:
    {
        returnValue = F("Grasgartenstr.");
        break;
    }
    case 120731:
    {
        returnValue = F("Grasgartenweg");
        break;
    }
    case 120732:
    {
        returnValue = F("Grasgasse");
        break;
    }
    case 120733:
    {
        returnValue = F("Grasgehren");
        break;
    }
    case 120734:
    {
        returnValue = F("Grasgehrenweg");
        break;
    }
    case 120735:
    {
        returnValue = F("Grasgruber Str.");
        break;
    }
    case 120736:
    {
        returnValue = F("Grasgärten");
        break;
    }
    case 120737:
    {
        returnValue = F("Grashain");
        break;
    }
    case 120738:
    {
        returnValue = F("Grashalde");
        break;
    }
    case 120739:
    {
        returnValue = F("Grashaus");
        break;
    }
    case 120740:
    {
        returnValue = F("Grashausener Weg");
        break;
    }
    case 120741:
    {
        returnValue = F("Grashauser Flage");
        break;
    }
    case 120742:
    {
        returnValue = F("Grashauser Str.");
        break;
    }
    case 120743:
    {
        returnValue = F("Grashauser Weg");
        break;
    }
    case 120744:
    {
        returnValue = F("Grashausgarten");
        break;
    }
    case 120745:
    {
        returnValue = F("Grashausweg");
        break;
    }
    case 120746:
    {
        returnValue = F("Grasheider Str.");
        break;
    }
    case 120747:
    {
        returnValue = F("Grasheimer Str.");
        break;
    }
    case 120748:
    {
        returnValue = F("Grashof");
        break;
    }
    case 120749:
    {
        returnValue = F("Grashofblick");
        break;
    }
    case 120750:
    {
        returnValue = F("Grashofer Str.");
        break;
    }
    case 120751:
    {
        returnValue = F("Grashoff");
        break;
    }
    case 120752:
    {
        returnValue = F("Grashoffstr.");
        break;
    }
    case 120753:
    {
        returnValue = F("Grashoffweg");
        break;
    }
    case 120754:
    {
        returnValue = F("Grashofsland");
        break;
    }
    case 120755:
    {
        returnValue = F("Grashofstr.");
        break;
    }
    case 120756:
    {
        returnValue = F("Grashofsweg");
        break;
    }
    case 120757:
    {
        returnValue = F("Grashofweg");
        break;
    }
    case 120758:
    {
        returnValue = F("Grasholz");
        break;
    }
    case 120759:
    {
        returnValue = F("Grasholzstr.");
        break;
    }
    case 120760:
    {
        returnValue = F("Grashopsweg");
        break;
    }
    case 120761:
    {
        returnValue = F("Grashornstr.");
        break;
    }
    case 120762:
    {
        returnValue = F("Grashornweg");
        break;
    }
    case 120763:
    {
        returnValue = F("Grashorst");
        break;
    }
    case 120764:
    {
        returnValue = F("Grashöfe");
        break;
    }
    case 120765:
    {
        returnValue = F("Grashörens Grund");
        break;
    }
    case 120766:
    {
        returnValue = F("Grashörnweg");
        break;
    }
    case 120767:
    {
        returnValue = F("Grashövenweg");
        break;
    }
    case 120768:
    {
        returnValue = F("Grashüpferweg");
        break;
    }
    case 120769:
    {
        returnValue = F("Grasiger Hag");
        break;
    }
    case 120770:
    {
        returnValue = F("Grasiger Rain");
        break;
    }
    case 120771:
    {
        returnValue = F("Grasiger Weg");
        break;
    }
    case 120772:
    {
        returnValue = F("Grasinger Weg");
        break;
    }
    case 120773:
    {
        returnValue = F("Grasingerweg");
        break;
    }
    case 120774:
    {
        returnValue = F("Grasiweg");
        break;
    }
    case 120775:
    {
        returnValue = F("Graskammer");
        break;
    }
    case 120776:
    {
        returnValue = F("Graskamp");
        break;
    }
    case 120777:
    {
        returnValue = F("Graskehre");
        break;
    }
    case 120778:
    {
        returnValue = F("Graskämpeweg");
        break;
    }
    case 120779:
    {
        returnValue = F("Graslebener Str.");
        break;
    }
    case 120780:
    {
        returnValue = F("Grasleber Weg");
        break;
    }
    case 120781:
    {
        returnValue = F("Grasleite");
        break;
    }
    case 120782:
    {
        returnValue = F("Grasleitensteig");
        break;
    }
    case 120783:
    {
        returnValue = F("Grasleitenweg");
        break;
    }
    case 120784:
    {
        returnValue = F("Graslerweg");
        break;
    }
    case 120785:
    {
        returnValue = F("Graslitzer Str.");
        break;
    }
    case 120786:
    {
        returnValue = F("Graslitzer Weg");
        break;
    }
    case 120787:
    {
        returnValue = F("Grasmaierstr.");
        break;
    }
    case 120788:
    {
        returnValue = F("Grasmanngasse");
        break;
    }
    case 120789:
    {
        returnValue = F("Grasmannsdorf");
        break;
    }
    case 120790:
    {
        returnValue = F("Grasmoorkamp");
        break;
    }
    case 120791:
    {
        returnValue = F("Grasmoorweg");
        break;
    }
    case 120792:
    {
        returnValue = F("Grasmuldenweg");
        break;
    }
    case 120793:
    {
        returnValue = F("Grasmutterweg");
        break;
    }
    case 120794:
    {
        returnValue = F("Grasmörte Weg - Süd");
        break;
    }
    case 120795:
    {
        returnValue = F("Grasmörtenweg Nord");
        break;
    }
    case 120796:
    {
        returnValue = F("Grasmöörte");
        break;
    }
    case 120797:
    {
        returnValue = F("Grasmückenring");
        break;
    }
    case 120798:
    {
        returnValue = F("Grasmückenstr.");
        break;
    }
    case 120799:
    {
        returnValue = F("Grasmückenweg");
        break;
    }
    case 120800:
    {
        returnValue = F("Grasmühle");
        break;
    }
    case 120801:
    {
        returnValue = F("Grasmühlweg");
        break;
    }
    case 120802:
    {
        returnValue = F("Grasnelkenweg");
        break;
    }
    case 120803:
    {
        returnValue = F("Grasortsdamm");
        break;
    }
    case 120804:
    {
        returnValue = F("Graspad");
        break;
    }
    case 120805:
    {
        returnValue = F("Graspergerstr.");
        break;
    }
    case 120806:
    {
        returnValue = F("Graspoint");
        break;
    }
    case 120807:
    {
        returnValue = F("Graspointstr.");
        break;
    }
    case 120808:
    {
        returnValue = F("Graspyramide");
        break;
    }
    case 120809:
    {
        returnValue = F("Grasrain");
        break;
    }
    case 120810:
    {
        returnValue = F("Grasredder");
        break;
    }
    case 120811:
    {
        returnValue = F("Grasreinerstr.");
        break;
    }
    case 120812:
    {
        returnValue = F("Grasriete");
        break;
    }
    case 120813:
    {
        returnValue = F("Grassach");
        break;
    }
    case 120814:
    {
        returnValue = F("Grassauer Str.");
        break;
    }
    case 120815:
    {
        returnValue = F("Grassauer Weg");
        break;
    }
    case 120816:
    {
        returnValue = F("Grasschlag");
        break;
    }
    case 120817:
    {
        returnValue = F("Grasseler Str.");
        break;
    }
    case 120818:
    {
        returnValue = F("Grasselweg");
        break;
    }
    case 120819:
    {
        returnValue = F("Grassenbergstr.");
        break;
    }
    case 120820:
    {
        returnValue = F("Grasserhofweg");
        break;
    }
    case 120821:
    {
        returnValue = F("Grassertblick");
        break;
    }
    case 120822:
    {
        returnValue = F("Grasshoppersstr.");
        break;
    }
    case 120823:
    {
        returnValue = F("Grassiek");
        break;
    }
    case 120824:
    {
        returnValue = F("Grassin");
        break;
    }
    case 120825:
    {
        returnValue = F("Grassinger Str.");
        break;
    }
    case 120826:
    {
        returnValue = F("Grassingerstr.");
        break;
    }
    case 120827:
    {
        returnValue = F("Grasslbau");
        break;
    }
    case 120828:
    {
        returnValue = F("Grassostr.");
        break;
    }
    case 120829:
    {
        returnValue = F("Grasstationweg");
        break;
    }
    case 120830:
    {
        returnValue = F("Grassteig");
        break;
    }
    case 120831:
    {
        returnValue = F("Grasstr.");
        break;
    }
    case 120832:
    {
        returnValue = F("Grasteen");
        break;
    }
    case 120833:
    {
        returnValue = F("Grasteilweg");
        break;
    }
    case 120834:
    {
        returnValue = F("Graster Brink");
        break;
    }
    case 120835:
    {
        returnValue = F("Graster Str.");
        break;
    }
    case 120836:
    {
        returnValue = F("Grastwiete");
        break;
    }
    case 120837:
    {
        returnValue = F("Graswaeldchen");
        break;
    }
    case 120838:
    {
        returnValue = F("Graswarder");
        break;
    }
    case 120839:
    {
        returnValue = F("Grasweg");
        break;
    }
    case 120840:
    {
        returnValue = F("Grasweide");
        break;
    }
    case 120841:
    {
        returnValue = F("Grasweiherweg");
        break;
    }
    case 120842:
    {
        returnValue = F("Graswiese");
        break;
    }
    case 120843:
    {
        returnValue = F("Graswiesenweg");
        break;
    }
    case 120844:
    {
        returnValue = F("Graswinkel");
        break;
    }
    case 120845:
    {
        returnValue = F("Graswinkelstr.");
        break;
    }
    case 120846:
    {
        returnValue = F("Graswäzenstr.");
        break;
    }
    case 120847:
    {
        returnValue = F("Graswörth");
        break;
    }
    case 120848:
    {
        returnValue = F("Grasäcker");
        break;
    }
    case 120849:
    {
        returnValue = F("Grathwohlstr.");
        break;
    }
    case 120850:
    {
        returnValue = F("Gratian-Grimm-Str.");
        break;
    }
    case 120851:
    {
        returnValue = F("Gratianstr.");
        break;
    }
    case 120852:
    {
        returnValue = F("Gratianusstr.");
        break;
    }
    case 120853:
    {
        returnValue = F("Gratstr.");
        break;
    }
    case 120854:
    {
        returnValue = F("Grattstadter Str.");
        break;
    }
    case 120855:
    {
        returnValue = F("Gratweg");
        break;
    }
    case 120856:
    {
        returnValue = F("Gratwohlhof");
        break;
    }
    case 120857:
    {
        returnValue = F("Gratwohlweg");
        break;
    }
    case 120858:
    {
        returnValue = F("Gratze");
        break;
    }
    case 120859:
    {
        returnValue = F("Gratzener Weg");
        break;
    }
    case 120860:
    {
        returnValue = F("Gratzfelder Str.");
        break;
    }
    case 120861:
    {
        returnValue = F("Gratzfeldweg");
        break;
    }
    case 120862:
    {
        returnValue = F("Gratzunger Str.");
        break;
    }
    case 120863:
    {
        returnValue = F("Grau Acht");
        break;
    }
    case 120864:
    {
        returnValue = F("Graubachstr.");
        break;
    }
    case 120865:
    {
        returnValue = F("Graubachtal");
        break;
    }
    case 120866:
    {
        returnValue = F("Graubaderweg");
        break;
    }
    case 120867:
    {
        returnValue = F("Graube");
        break;
    }
    case 120868:
    {
        returnValue = F("Graubenstr.");
        break;
    }
    case 120869:
    {
        returnValue = F("Graubergen");
        break;
    }
    case 120870:
    {
        returnValue = F("Graubergstr.");
        break;
    }
    case 120871:
    {
        returnValue = F("Graubergweg");
        break;
    }
    case 120872:
    {
        returnValue = F("Graubestr.");
        break;
    }
    case 120873:
    {
        returnValue = F("Grauburgunderhof");
        break;
    }
    case 120874:
    {
        returnValue = F("Grauburgunderstr.");
        break;
    }
    case 120875:
    {
        returnValue = F("Graubühl");
        break;
    }
    case 120876:
    {
        returnValue = F("Graubühlstr.");
        break;
    }
    case 120877:
    {
        returnValue = F("Graudenzer Platz");
        break;
    }
    case 120878:
    {
        returnValue = F("Graudenzer Str.");
        break;
    }
    case 120879:
    {
        returnValue = F("Graudenzer Weg");
        break;
    }
    case 120880:
    {
        returnValue = F("Graudornstr.");
        break;
    }
    case 120881:
    {
        returnValue = F("Graue");
        break;
    }
    case 120882:
    {
        returnValue = F("Graue Ecke");
        break;
    }
    case 120883:
    {
        returnValue = F("Graue Riethe");
        break;
    }
    case 120884:
    {
        returnValue = F("Graue Weiden");
        break;
    }
    case 120885:
    {
        returnValue = F("Graue Winkel");
        break;
    }
    case 120886:
    {
        returnValue = F("Graue-Burg-Str.");
        break;
    }
    case 120887:
    {
        returnValue = F("Graue-Presse-Weg");
        break;
    }
    case 120888:
    {
        returnValue = F("Graue-Turm-Str.");
        break;
    }
    case 120889:
    {
        returnValue = F("Grauellern");
        break;
    }
    case 120890:
    {
        returnValue = F("Grauelsweg");
        break;
    }
    case 120891:
    {
        returnValue = F("Grauen");
        break;
    }
    case 120892:
    {
        returnValue = F("Grauenbarge");
        break;
    }
    case 120893:
    {
        returnValue = F("Grauenbrunnenweg");
        break;
    }
    case 120894:
    {
        returnValue = F("Grauener Dorfstr.");
        break;
    }
    case 120895:
    {
        returnValue = F("Grauener Heide");
        break;
    }
    case 120896:
    {
        returnValue = F("Grauener Lindenweg");
        break;
    }
    case 120897:
    {
        returnValue = F("Grauener Reßberg");
        break;
    }
    case 120898:
    {
        returnValue = F("Grauener Str.");
        break;
    }
    case 120899:
    {
        returnValue = F("Grauener Weg");
        break;
    }
    case 120900:
    {
        returnValue = F("Grauengasse");
        break;
    }
    case 120901:
    {
        returnValue = F("Grauenhagener Damm");
        break;
    }
    case 120902:
    {
        returnValue = F("Grauenhofer Weg");
        break;
    }
    case 120903:
    {
        returnValue = F("Grauensiepen");
        break;
    }
    case 120904:
    {
        returnValue = F("Grauenstein");
        break;
    }
    case 120905:
    {
        returnValue = F("Grauensteinstr.");
        break;
    }
    case 120906:
    {
        returnValue = F("Grauenthal");
        break;
    }
    case 120907:
    {
        returnValue = F("Grauer Busch");
        break;
    }
    case 120908:
    {
        returnValue = F("Grauer Esel");
        break;
    }
    case 120909:
    {
        returnValue = F("Grauer Haag");
        break;
    }
    case 120910:
    {
        returnValue = F("Grauer Hag");
        break;
    }
    case 120911:
    {
        returnValue = F("Grauer Hengst");
        break;
    }
    case 120912:
    {
        returnValue = F("Grauer Hof");
        break;
    }
    case 120913:
    {
        returnValue = F("Grauer Kamp");
        break;
    }
    case 120914:
    {
        returnValue = F("Grauer Mühlenweg");
        break;
    }
    case 120915:
    {
        returnValue = F("Grauer Stein");
        break;
    }
    case 120916:
    {
        returnValue = F("Grauer Stein Str.");
        break;
    }
    case 120917:
    {
        returnValue = F("Grauer Stein Weg");
        break;
    }
    case 120918:
    {
        returnValue = F("Grauer Steinhau");
        break;
    }
    case 120919:
    {
        returnValue = F("Grauer Steinweg");
        break;
    }
    case 120920:
    {
        returnValue = F("Grauer Wall");
        break;
    }
    case 120921:
    {
        returnValue = F("Grauer Weg");
        break;
    }
    case 120922:
    {
        returnValue = F("Grauer-Stein-Weg");
        break;
    }
    case 120923:
    {
        returnValue = F("Grauerholzweg");
        break;
    }
    case 120924:
    {
        returnValue = F("Grauersteinweg");
        break;
    }
    case 120925:
    {
        returnValue = F("Graufeldstr.");
        break;
    }
    case 120926:
    {
        returnValue = F("Graugansring");
        break;
    }
    case 120927:
    {
        returnValue = F("Graugansstr.");
        break;
    }
    case 120928:
    {
        returnValue = F("Graugansweg");
        break;
    }
    case 120929:
    {
        returnValue = F("Graugasse");
        break;
    }
    case 120930:
    {
        returnValue = F("Graugrebenscher Weg");
        break;
    }
    case 120931:
    {
        returnValue = F("Grauhalde");
        break;
    }
    case 120932:
    {
        returnValue = F("Grauheide");
        break;
    }
    case 120933:
    {
        returnValue = F("Grauhofstr.");
        break;
    }
    case 120934:
    {
        returnValue = F("Grauhorststr.");
        break;
    }
    case 120935:
    {
        returnValue = F("Grauhöfer Landwehr");
        break;
    }
    case 120936:
    {
        returnValue = F("Grauhöft");
        break;
    }
    case 120937:
    {
        returnValue = F("Grauhöfter Weg");
        break;
    }
    case 120938:
    {
        returnValue = F("Graukjer");
        break;
    }
    case 120939:
    {
        returnValue = F("Graulberg");
        break;
    }
    case 120940:
    {
        returnValue = F("Graulfusweg");
        break;
    }
    case 120941:
    {
        returnValue = F("Graulheck");
        break;
    }
    case 120942:
    {
        returnValue = F("Graulhecker Weg");
        break;
    }
    case 120943:
    {
        returnValue = F("Graulinger Str.");
        break;
    }
    case 120944:
    {
        returnValue = F("Graulpfad");
        break;
    }
    case 120945:
    {
        returnValue = F("Graulsteig");
        break;
    }
    case 120946:
    {
        returnValue = F("Graulweg");
        break;
    }
    case 120947:
    {
        returnValue = F("Graumannsstieg");
        break;
    }
    case 120948:
    {
        returnValue = F("Graumannswinkel");
        break;
    }
    case 120949:
    {
        returnValue = F("Graumnitzer Weg");
        break;
    }
    case 120950:
    {
        returnValue = F("Graunplatz");
        break;
    }
    case 120951:
    {
        returnValue = F("Graupaer Str.");
        break;
    }
    case 120952:
    {
        returnValue = F("Graupaer Weg");
        break;
    }
    case 120953:
    {
        returnValue = F("Graupenmühle");
        break;
    }
    case 120954:
    {
        returnValue = F("Graupenmühler Weg");
        break;
    }
    case 120955:
    {
        returnValue = F("Graupenstr.");
        break;
    }
    case 120956:
    {
        returnValue = F("Graupenweg");
        break;
    }
    case 120957:
    {
        returnValue = F("Graupfortstr.");
        break;
    }
    case 120958:
    {
        returnValue = F("Graupfädel");
        break;
    }
    case 120959:
    {
        returnValue = F("Graupnerstr.");
        break;
    }
    case 120960:
    {
        returnValue = F("Graupnerweg");
        break;
    }
    case 120961:
    {
        returnValue = F("Graupsäge");
        break;
    }
    case 120962:
    {
        returnValue = F("Graupzig");
        break;
    }
    case 120963:
    {
        returnValue = F("Graureiherstieg");
        break;
    }
    case 120964:
    {
        returnValue = F("Graureiherweg");
        break;
    }
    case 120965:
    {
        returnValue = F("Grausch");
        break;
    }
    case 120966:
    {
        returnValue = F("Grauschwitzer Str.");
        break;
    }
    case 120967:
    {
        returnValue = F("Grausenbuck");
        break;
    }
    case 120968:
    {
        returnValue = F("Graustein");
        break;
    }
    case 120969:
    {
        returnValue = F("Grausteiner Str.");
        break;
    }
    case 120970:
    {
        returnValue = F("Grausteiner Weg");
        break;
    }
    case 120971:
    {
        returnValue = F("Graustr.");
        break;
    }
    case 120972:
    {
        returnValue = F("Grausweg");
        break;
    }
    case 120973:
    {
        returnValue = F("Grautalstr.");
        break;
    }
    case 120974:
    {
        returnValue = F("Graute Kamp");
        break;
    }
    case 120975:
    {
        returnValue = F("Graute Laun");
        break;
    }
    case 120976:
    {
        returnValue = F("Grauten Ihl");
        break;
    }
    case 120977:
    {
        returnValue = F("Grauthoffweg");
        break;
    }
    case 120978:
    {
        returnValue = F("Grauwall");
        break;
    }
    case 120979:
    {
        returnValue = F("Grauweg");
        break;
    }
    case 120980:
    {
        returnValue = F("Grauweg / Grand-Weg");
        break;
    }
    case 120981:
    {
        returnValue = F("Grauweidenweg");
        break;
    }
    case 120982:
    {
        returnValue = F("Grauweiderfeld");
        break;
    }
    case 120983:
    {
        returnValue = F("Grauwiesen");
        break;
    }
    case 120984:
    {
        returnValue = F("Grauwiesenstr.");
        break;
    }
    case 120985:
    {
        returnValue = F("Grauwiesenweg");
        break;
    }
    case 120986:
    {
        returnValue = F("Grauwisch");
        break;
    }
    case 120987:
    {
        returnValue = F("Grauwölfe");
        break;
    }
    case 120988:
    {
        returnValue = F("Graußengarten");
        break;
    }
    case 120989:
    {
        returnValue = F("Grav-von-Moltke-Str.");
        break;
    }
    case 120990:
    {
        returnValue = F("Graveloher Weg");
        break;
    }
    case 120991:
    {
        returnValue = F("Gravelotte");
        break;
    }
    case 120992:
    {
        returnValue = F("Gravelottestr.");
        break;
    }
    case 120993:
    {
        returnValue = F("Gravemannring");
        break;
    }
    case 120994:
    {
        returnValue = F("Gravenberger Weg");
        break;
    }
    case 120995:
    {
        returnValue = F("Gravenbrucher Weg");
        break;
    }
    case 120996:
    {
        returnValue = F("Gravenbruchring");
        break;
    }
    case 120997:
    {
        returnValue = F("Gravenbruchschneise");
        break;
    }
    case 120998:
    {
        returnValue = F("Gravenbruchstr.");
        break;
    }
    case 120999:
    {
        returnValue = F("Gravenbruchweg");
        break;
    }
    case 121000:
    {
        returnValue = F("Gravenhainstr.");
        break;
    }
    case 121001:
    {
        returnValue = F("Gravenholter Weg");
        break;
    }
    case 121002:
    {
        returnValue = F("Gravenhorst-Weg");
        break;
    }
    case 121003:
    {
        returnValue = F("Gravenhorster Str.");
        break;
    }
    case 121004:
    {
        returnValue = F("Gravenhorster Weg");
        break;
    }
    case 121005:
    {
        returnValue = F("Gravenhorststr.");
        break;
    }
    case 121006:
    {
        returnValue = F("Gravenkamp");
        break;
    }
    case 121007:
    {
        returnValue = F("Gravenreutherstr.");
        break;
    }
    case 121008:
    {
        returnValue = F("Gravenstein");
        break;
    }
    case 121009:
    {
        returnValue = F("Gravensteiner Str.");
        break;
    }
    case 121010:
    {
        returnValue = F("Gravensteiner Weg");
        break;
    }
    case 121011:
    {
        returnValue = F("Gravensteiner-Weg");
        break;
    }
    case 121012:
    {
        returnValue = F("Gravensteinerkamp");
        break;
    }
    case 121013:
    {
        returnValue = F("Gravensteinerstr.");
        break;
    }
    case 121014:
    {
        returnValue = F("Gravensteinerweg");
        break;
    }
    case 121015:
    {
        returnValue = F("Gravenweg");
        break;
    }
    case 121016:
    {
        returnValue = F("Graverdyk");
        break;
    }
    case 121017:
    {
        returnValue = F("Gravestr.");
        break;
    }
    case 121018:
    {
        returnValue = F("Graweg");
        break;
    }
    case 121019:
    {
        returnValue = F("Grawenhof");
        break;
    }
    case 121020:
    {
        returnValue = F("Grawertstr.");
        break;
    }
    case 121021:
    {
        returnValue = F("Grawiedestr.");
        break;
    }
    case 121022:
    {
        returnValue = F("Grawiedeweg");
        break;
    }
    case 121023:
    {
        returnValue = F("Grawinkel");
        break;
    }
    case 121024:
    {
        returnValue = F("Grawolfstr.");
        break;
    }
    case 121025:
    {
        returnValue = F("Grayer Platz");
        break;
    }
    case 121026:
    {
        returnValue = F("Grazer Platz");
        break;
    }
    case 121027:
    {
        returnValue = F("Grazer Str.");
        break;
    }
    case 121028:
    {
        returnValue = F("Grazert");
        break;
    }
    case 121029:
    {
        returnValue = F("Grazert-Randweg");
        break;
    }
    case 121030:
    {
        returnValue = F("Grazestr.");
        break;
    }
    case 121031:
    {
        returnValue = F("Grazstr.");
        break;
    }
    case 121032:
    {
        returnValue = F("Grazweg");
        break;
    }
    case 121033:
    {
        returnValue = F("Graßahofrundweg Nr. 7 (grün)");
        break;
    }
    case 121034:
    {
        returnValue = F("Graßahofweg");
        break;
    }
    case 121035:
    {
        returnValue = F("Graßdorfer Höhe");
        break;
    }
    case 121036:
    {
        returnValue = F("Graßdorfer Str.");
        break;
    }
    case 121037:
    {
        returnValue = F("Graßeggerstr.");
        break;
    }
    case 121038:
    {
        returnValue = F("Graßer Str.");
        break;
    }
    case 121039:
    {
        returnValue = F("Graßer Weg");
        break;
    }
    case 121040:
    {
        returnValue = F("Graßhof");
        break;
    }
    case 121041:
    {
        returnValue = F("Graßhofstr.");
        break;
    }
    case 121042:
    {
        returnValue = F("Graßlfinger Str.");
        break;
    }
    case 121043:
    {
        returnValue = F("Graßlfinger Weg");
        break;
    }
    case 121044:
    {
        returnValue = F("Graßlitzer Str.");
        break;
    }
    case 121045:
    {
        returnValue = F("Graßlstr.");
        break;
    }
    case 121046:
    {
        returnValue = F("Graßlweg");
        break;
    }
    case 121047:
    {
        returnValue = F("Graäfensteinstr.");
        break;
    }
    case 121048:
    {
        returnValue = F("Greamandlweg");
        break;
    }
    case 121049:
    {
        returnValue = F("Great-Barford-Str.");
        break;
    }
    case 121050:
    {
        returnValue = F("Grebbecke");
        break;
    }
    case 121051:
    {
        returnValue = F("Grebbecker Weg");
        break;
    }
    case 121052:
    {
        returnValue = F("Grebbener Str.");
        break;
    }
    case 121053:
    {
        returnValue = F("Grebbergstr.");
        break;
    }
    case 121054:
    {
        returnValue = F("Grebbiner Ausbau");
        break;
    }
    case 121055:
    {
        returnValue = F("Grebbiner Chaussee");
        break;
    }
    case 121056:
    {
        returnValue = F("Grebbiner Str.");
        break;
    }
    case 121057:
    {
        returnValue = F("Grebehof");
        break;
    }
    case 121058:
    {
        returnValue = F("Grebelgasse");
        break;
    }
    case 121059:
    {
        returnValue = F("Grebelsweg");
        break;
    }
    case 121060:
    {
        returnValue = F("Grebenauer Pfad");
        break;
    }
    case 121061:
    {
        returnValue = F("Grebenauer Str.");
        break;
    }
    case 121062:
    {
        returnValue = F("Grebenauer Weg");
        break;
    }
    case 121063:
    {
        returnValue = F("Grebenberg");
        break;
    }
    case 121064:
    {
        returnValue = F("Grebendorfer Str.");
        break;
    }
    case 121065:
    {
        returnValue = F("Grebeneich");
        break;
    }
    case 121066:
    {
        returnValue = F("Grebenerweg");
        break;
    }
    case 121067:
    {
        returnValue = F("Grebengasse");
        break;
    }
    case 121068:
    {
        returnValue = F("Grebenhainer Str.");
        break;
    }
    case 121069:
    {
        returnValue = F("Grebenhoop");
        break;
    }
    case 121070:
    {
        returnValue = F("Grebenrother Weg");
        break;
    }
    case 121071:
    {
        returnValue = F("Grebensteiner Str.");
        break;
    }
    case 121072:
    {
        returnValue = F("Grebenstr.");
        break;
    }
    case 121073:
    {
        returnValue = F("Grebenweg");
        break;
    }
    case 121074:
    {
        returnValue = F("Grebenwiesenweg");
        break;
    }
    case 121075:
    {
        returnValue = F("Grebertstr.");
        break;
    }
    case 121076:
    {
        returnValue = F("Grebhahn's Pad");
        break;
    }
    case 121077:
    {
        returnValue = F("Grebiner Redder");
        break;
    }
    case 121078:
    {
        returnValue = F("Grebiner Weg");
        break;
    }
    case 121079:
    {
        returnValue = F("Grebs");
        break;
    }
    case 121080:
    {
        returnValue = F("Grebser Feldstr.");
        break;
    }
    case 121081:
    {
        returnValue = F("Grebser Str.");
        break;
    }
    case 121082:
    {
        returnValue = F("Grebshorner Kirchweg");
        break;
    }
    case 121083:
    {
        returnValue = F("Grebshorner Str.");
        break;
    }
    case 121084:
    {
        returnValue = F("Grebstr.");
        break;
    }
    case 121085:
    {
        returnValue = F("Grebswarder Weg");
        break;
    }
    case 121086:
    {
        returnValue = F("Grechte");
        break;
    }
    case 121087:
    {
        returnValue = F("Grechwitzer Landstr.");
        break;
    }
    case 121088:
    {
        returnValue = F("Grechwitzer Str.");
        break;
    }
    case 121089:
    {
        returnValue = F("Greckengasse");
        break;
    }
    case 121090:
    {
        returnValue = F("Greckenhof");
        break;
    }
    case 121091:
    {
        returnValue = F("Greckenstr.");
        break;
    }
    case 121092:
    {
        returnValue = F("Gredinger Str.");
        break;
    }
    case 121093:
    {
        returnValue = F("Gredl-Radweg");
        break;
    }
    case 121094:
    {
        returnValue = F("Greedenweg");
        break;
    }
    case 121095:
    {
        returnValue = F("Greedeweg");
        break;
    }
    case 121096:
    {
        returnValue = F("Greedäckerweg");
        break;
    }
    case 121097:
    {
        returnValue = F("Greefsallee");
        break;
    }
    case 121098:
    {
        returnValue = F("Greefstr.");
        break;
    }
    case 121099:
    {
        returnValue = F("Greehörner Siedlung");
        break;
    }
    case 121100:
    {
        returnValue = F("Greehörner Weg");
        break;
    }
    case 121101:
    {
        returnValue = F("Greelkamp");
        break;
    }
    case 121102:
    {
        returnValue = F("Green");
        break;
    }
    case 121103:
    {
        returnValue = F("Green Corner");
        break;
    }
    case 121104:
    {
        returnValue = F("Green Mountain Drive");
        break;
    }
    case 121105:
    {
        returnValue = F("Green Wai");
        break;
    }
    case 121106:
    {
        returnValue = F("Greenberger Weg");
        break;
    }
    case 121107:
    {
        returnValue = F("Greener Burg");
        break;
    }
    case 121108:
    {
        returnValue = F("Greener Gartenstr.");
        break;
    }
    case 121109:
    {
        returnValue = F("Greener Marktstr.");
        break;
    }
    case 121110:
    {
        returnValue = F("Greener Neue Reihe");
        break;
    }
    case 121111:
    {
        returnValue = F("Greener Str.");
        break;
    }
    case 121112:
    {
        returnValue = F("Greener Tor");
        break;
    }
    case 121113:
    {
        returnValue = F("Greener Weg");
        break;
    }
    case 121114:
    {
        returnValue = F("Greenkerweg");
        break;
    }
    case 121115:
    {
        returnValue = F("Greenstr.");
        break;
    }
    case 121116:
    {
        returnValue = F("Greensweg");
        break;
    }
    case 121117:
    {
        returnValue = F("Greenwai");
        break;
    }
    case 121118:
    {
        returnValue = F("Greesberger Str.");
        break;
    }
    case 121119:
    {
        returnValue = F("Greese");
        break;
    }
    case 121120:
    {
        returnValue = F("Greeser Weg");
        break;
    }
    case 121121:
    {
        returnValue = F("Greesgraben");
        break;
    }
    case 121122:
    {
        returnValue = F("Greetenweg");
        break;
    }
    case 121123:
    {
        returnValue = F("Greeteweg");
        break;
    }
    case 121124:
    {
        returnValue = F("Greethun");
        break;
    }
    case 121125:
    {
        returnValue = F("Greetkamp");
        break;
    }
    case 121126:
    {
        returnValue = F("Greetsieler Nacken");
        break;
    }
    case 121127:
    {
        returnValue = F("Greetsieler Reihe");
        break;
    }
    case 121128:
    {
        returnValue = F("Greetsieler Str.");
        break;
    }
    case 121129:
    {
        returnValue = F("Greetsieler Weg");
        break;
    }
    case 121130:
    {
        returnValue = F("Greevenbrook");
        break;
    }
    case 121131:
    {
        returnValue = F("Grefekestr.");
        break;
    }
    case 121132:
    {
        returnValue = F("Grefenstr.");
        break;
    }
    case 121133:
    {
        returnValue = F("Grefenweg");
        break;
    }
    case 121134:
    {
        returnValue = F("Grefestr.");
        break;
    }
    case 121135:
    {
        returnValue = F("Greffener Str.");
        break;
    }
    case 121136:
    {
        returnValue = F("Grefferner Str.");
        break;
    }
    case 121137:
    {
        returnValue = F("Greflingerstr.");
        break;
    }
    case 121138:
    {
        returnValue = F("Grefrather Landstr.");
        break;
    }
    case 121139:
    {
        returnValue = F("Grefrather Str.");
        break;
    }
    case 121140:
    {
        returnValue = F("Grefrather Weg");
        break;
    }
    case 121141:
    {
        returnValue = F("Gregelstr.");
        break;
    }
    case 121142:
    {
        returnValue = F("Gregergasse");
        break;
    }
    case 121143:
    {
        returnValue = F("Gregnitzweg");
        break;
    }
    case 121144:
    {
        returnValue = F("Gregor-Breuer-Str.");
        break;
    }
    case 121145:
    {
        returnValue = F("Gregor-Dellin-Str.");
        break;
    }
    case 121146:
    {
        returnValue = F("Gregor-Fuchs-Str.");
        break;
    }
    case 121147:
    {
        returnValue = F("Gregor-Götz-Str.");
        break;
    }
    case 121148:
    {
        returnValue = F("Gregor-Kruk-Platz");
        break;
    }
    case 121149:
    {
        returnValue = F("Gregor-Mendel Eck");
        break;
    }
    case 121150:
    {
        returnValue = F("Gregor-Mendel-Str.");
        break;
    }
    case 121151:
    {
        returnValue = F("Gregor-Mendel-Weg");
        break;
    }
    case 121152:
    {
        returnValue = F("Gregor-Meyer-Str.");
        break;
    }
    case 121153:
    {
        returnValue = F("Gregor-Märkl-Weg");
        break;
    }
    case 121154:
    {
        returnValue = F("Gregor-Nickl-Str.");
        break;
    }
    case 121155:
    {
        returnValue = F("Gregor-Platten-Str.");
        break;
    }
    case 121156:
    {
        returnValue = F("Gregor-Probst-Str.");
        break;
    }
    case 121157:
    {
        returnValue = F("Gregor-Schneid-Str.");
        break;
    }
    case 121158:
    {
        returnValue = F("Gregor-Schwake-Str.");
        break;
    }
    case 121159:
    {
        returnValue = F("Gregor-Stolz-Str.");
        break;
    }
    case 121160:
    {
        returnValue = F("Gregor-Umhof-Str.");
        break;
    }
    case 121161:
    {
        returnValue = F("Gregor-Voit-Str.");
        break;
    }
    case 121162:
    {
        returnValue = F("Gregor-Vosen-Str.");
        break;
    }
    case 121163:
    {
        returnValue = F("Gregor-Waltmann-Str.");
        break;
    }
    case 121164:
    {
        returnValue = F("Gregor-Wetzel-Str.");
        break;
    }
    case 121165:
    {
        returnValue = F("Gregor-Wolf-Str.");
        break;
    }
    case 121166:
    {
        returnValue = F("Gregor-von-Pfalzel-Str.");
        break;
    }
    case 121167:
    {
        returnValue = F("Gregoriusweg");
        break;
    }
    case 121168:
    {
        returnValue = F("Gregorstr.");
        break;
    }
    case 121169:
    {
        returnValue = F("Gregoryweg");
        break;
    }
    case 121170:
    {
        returnValue = F("Grehberg");
        break;
    }
    case 121171:
    {
        returnValue = F("Grehenberglestr.");
        break;
    }
    case 121172:
    {
        returnValue = F("Grehenbruch");
        break;
    }
    case 121173:
    {
        returnValue = F("Greichenweg");
        break;
    }
    case 121174:
    {
        returnValue = F("Greidererstr.");
        break;
    }
    case 121175:
    {
        returnValue = F("Greiendorfer Weg");
        break;
    }
    case 121176:
    {
        returnValue = F("Greifberg");
        break;
    }
    case 121177:
    {
        returnValue = F("Greifbergstr.");
        break;
    }
    case 121178:
    {
        returnValue = F("Greifenbachstr.");
        break;
    }
    case 121179:
    {
        returnValue = F("Greifenbachtal Pochwaldweg");
        break;
    }
    case 121180:
    {
        returnValue = F("Greifenbachtalweg");
        break;
    }
    case 121181:
    {
        returnValue = F("Greifenberger Str.");
        break;
    }
    case 121182:
    {
        returnValue = F("Greifenberger Weg");
        break;
    }
    case 121183:
    {
        returnValue = F("Greifenbergstr.");
        break;
    }
    case 121184:
    {
        returnValue = F("Greifendofer Str.");
        break;
    }
    case 121185:
    {
        returnValue = F("Greifendorfer Str.");
        break;
    }
    case 121186:
    {
        returnValue = F("Greifengasse");
        break;
    }
    case 121187:
    {
        returnValue = F("Greifenhagener Str.");
        break;
    }
    case 121188:
    {
        returnValue = F("Greifenhagener Weg");
        break;
    }
    case 121189:
    {
        returnValue = F("Greifenhagenstr.");
        break;
    }
    case 121190:
    {
        returnValue = F("Greifenhainer Str.");
        break;
    }
    case 121191:
    {
        returnValue = F("Greifenhainer Weg");
        break;
    }
    case 121192:
    {
        returnValue = F("Greifenklaustr.");
        break;
    }
    case 121193:
    {
        returnValue = F("Greifensteine");
        break;
    }
    case 121194:
    {
        returnValue = F("Greifensteiner Str.");
        break;
    }
    case 121195:
    {
        returnValue = F("Greifensteiner Weg");
        break;
    }
    case 121196:
    {
        returnValue = F("Greifensteinstr.");
        break;
    }
    case 121197:
    {
        returnValue = F("Greifensteinweg");
        break;
    }
    case 121198:
    {
        returnValue = F("Greifenstr.");
        break;
    }
    case 121199:
    {
        returnValue = F("Greifenthaler Str.");
        break;
    }
    case 121200:
    {
        returnValue = F("Greifenweg");
        break;
    }
    case 121201:
    {
        returnValue = F("Greifenwerder");
        break;
    }
    case 121202:
    {
        returnValue = F("Greiffenberger Str.");
        break;
    }
    case 121203:
    {
        returnValue = F("Greiffenbergstr.");
        break;
    }
    case 121204:
    {
        returnValue = F("Greiffenclauhof");
        break;
    }
    case 121205:
    {
        returnValue = F("Greiffenclaustr.");
        break;
    }
    case 121206:
    {
        returnValue = F("Greiffeneggbrücke");
        break;
    }
    case 121207:
    {
        returnValue = F("Greiffeneggring");
        break;
    }
    case 121208:
    {
        returnValue = F("Greiffenklaugasse");
        break;
    }
    case 121209:
    {
        returnValue = F("Greiffenklaustr.");
        break;
    }
    case 121210:
    {
        returnValue = F("Greifpark");
        break;
    }
    case 121211:
    {
        returnValue = F("Greifsbachsiedlung");
        break;
    }
    case 121212:
    {
        returnValue = F("Greifstr.");
        break;
    }
    case 121213:
    {
        returnValue = F("Greifswalder Chaussee");
        break;
    }
    case 121214:
    {
        returnValue = F("Greifswalder Kehre");
        break;
    }
    case 121215:
    {
        returnValue = F("Greifswalder Landweg");
        break;
    }
    case 121216:
    {
        returnValue = F("Greifswalder Str.");
        break;
    }
    case 121217:
    {
        returnValue = F("Greifswalder Weg");
        break;
    }
    case 121218:
    {
        returnValue = F("Greifvögel");
        break;
    }
    case 121219:
    {
        returnValue = F("Greifvögel Tiershow");
        break;
    }
    case 121220:
    {
        returnValue = F("Greifweg");
        break;
    }
    case 121221:
    {
        returnValue = F("Greilack");
        break;
    }
    case 121222:
    {
        returnValue = F("Greilbühelweg");
        break;
    }
    case 121223:
    {
        returnValue = F("Greiler Str.");
        break;
    }
    case 121224:
    {
        returnValue = F("Greilerstr.");
        break;
    }
    case 121225:
    {
        returnValue = F("Greilinger Weg");
        break;
    }
    case 121226:
    {
        returnValue = F("Greilingsbaum");
        break;
    }
    case 121227:
    {
        returnValue = F("Greilingsschneise");
        break;
    }
    case 121228:
    {
        returnValue = F("Greilstr.");
        break;
    }
    case 121229:
    {
        returnValue = F("Greimelberg");
        break;
    }
    case 121230:
    {
        returnValue = F("Greimelscheider Str.");
        break;
    }
    case 121231:
    {
        returnValue = F("Greimelstr.");
        break;
    }
    case 121232:
    {
        returnValue = F("Greimeltshofer Str.");
        break;
    }
    case 121233:
    {
        returnValue = F("Greimersdorfer Dorfstr.");
        break;
    }
    case 121234:
    {
        returnValue = F("Greimersdorfer Str.");
        break;
    }
    case 121235:
    {
        returnValue = F("Greimersdorfer Weg");
        break;
    }
    case 121236:
    {
        returnValue = F("Greimerstalweg");
        break;
    }
    case 121237:
    {
        returnValue = F("Greimerstälchen");
        break;
    }
    case 121238:
    {
        returnValue = F("Greimharting");
        break;
    }
    case 121239:
    {
        returnValue = F("Greimhartinger Str.");
        break;
    }
    case 121240:
    {
        returnValue = F("Greimoltstr.");
        break;
    }
    case 121241:
    {
        returnValue = F("Greinbergweg");
        break;
    }
    case 121242:
    {
        returnValue = F("Greiner Str.");
        break;
    }
    case 121243:
    {
        returnValue = F("Greiner-Eck-Weg");
        break;
    }
    case 121244:
    {
        returnValue = F("Greinerpromenade");
        break;
    }
    case 121245:
    {
        returnValue = F("Greinerstr.");
        break;
    }
    case 121246:
    {
        returnValue = F("Greinerweg");
        break;
    }
    case 121247:
    {
        returnValue = F("Greinhofer Str.");
        break;
    }
    case 121248:
    {
        returnValue = F("Greinstr.");
        break;
    }
    case 121249:
    {
        returnValue = F("Greinwaldstr.");
        break;
    }
    case 121250:
    {
        returnValue = F("Greinwaldweg");
        break;
    }
    case 121251:
    {
        returnValue = F("Greinöd");
        break;
    }
    case 121252:
    {
        returnValue = F("Greipziger Str.");
        break;
    }
    case 121253:
    {
        returnValue = F("Greipziger Weg");
        break;
    }
    case 121254:
    {
        returnValue = F("Greisbacher Str.");
        break;
    }
    case 121255:
    {
        returnValue = F("Greiselstr.");
        break;
    }
    case 121256:
    {
        returnValue = F("Greiser Weg");
        break;
    }
    case 121257:
    {
        returnValue = F("Greishofstr.");
        break;
    }
    case 121258:
    {
        returnValue = F("Greisingstr.");
        break;
    }
    case 121259:
    {
        returnValue = F("Greislingstr.");
        break;
    }
    case 121260:
    {
        returnValue = F("Greisstr.");
        break;
    }
    case 121261:
    {
        returnValue = F("Greit");
        break;
    }
    case 121262:
    {
        returnValue = F("Greiteler Gärten");
        break;
    }
    case 121263:
    {
        returnValue = F("Greitelerweg");
        break;
    }
    case 121264:
    {
        returnValue = F("Greitenstieg");
        break;
    }
    case 121265:
    {
        returnValue = F("Greiterer");
        break;
    }
    case 121266:
    {
        returnValue = F("Greith");
        break;
    }
    case 121267:
    {
        returnValue = F("Greitherrstr.");
        break;
    }
    case 121268:
    {
        returnValue = F("Greitherstr.");
        break;
    }
    case 121269:
    {
        returnValue = F("Greitstr.");
        break;
    }
    case 121270:
    {
        returnValue = F("Greitweg");
        break;
    }
    case 121271:
    {
        returnValue = F("Greizer Berg");
        break;
    }
    case 121272:
    {
        returnValue = F("Greizer Landstr.");
        break;
    }
    case 121273:
    {
        returnValue = F("Greizer Steig");
        break;
    }
    case 121274:
    {
        returnValue = F("Greizer Str.");
        break;
    }
    case 121275:
    {
        returnValue = F("Greizer Weg");
        break;
    }
    case 121276:
    {
        returnValue = F("Grelle");
        break;
    }
    case 121277:
    {
        returnValue = F("Grellenberger Dorfstr.");
        break;
    }
    case 121278:
    {
        returnValue = F("Grellenberger Str.");
        break;
    }
    case 121279:
    {
        returnValue = F("Grellenbrook");
        break;
    }
    case 121280:
    {
        returnValue = F("Grellenkamp");
        break;
    }
    case 121281:
    {
        returnValue = F("Grellenkampswiese");
        break;
    }
    case 121282:
    {
        returnValue = F("Grelles Hof");
        break;
    }
    case 121283:
    {
        returnValue = F("Grellestr.");
        break;
    }
    case 121284:
    {
        returnValue = F("Grellewiesen");
        break;
    }
    case 121285:
    {
        returnValue = F("Grellfeldtwiete");
        break;
    }
    case 121286:
    {
        returnValue = F("Grellkamp");
        break;
    }
    case 121287:
    {
        returnValue = F("Grellsbülldeich");
        break;
    }
    case 121288:
    {
        returnValue = F("Grellsbüller Str.");
        break;
    }
    case 121289:
    {
        returnValue = F("Gremelskamp");
        break;
    }
    case 121290:
    {
        returnValue = F("Gremersdorfer Str.");
        break;
    }
    case 121291:
    {
        returnValue = F("Gremertshausen");
        break;
    }
    case 121292:
    {
        returnValue = F("Gremertshauser Str.");
        break;
    }
    case 121293:
    {
        returnValue = F("Gremlichstr.");
        break;
    }
    case 121294:
    {
        returnValue = F("Gremmin");
        break;
    }
    case 121295:
    {
        returnValue = F("Gremminer Str.");
        break;
    }
    case 121296:
    {
        returnValue = F("Gremminer Weg");
        break;
    }
    case 121297:
    {
        returnValue = F("Grempstr.");
        break;
    }
    case 121298:
    {
        returnValue = F("Gremsbargen");
        break;
    }
    case 121299:
    {
        returnValue = F("Gremsdorfer Weg");
        break;
    }
    case 121300:
    {
        returnValue = F("Gremsgöör");
        break;
    }
    case 121301:
    {
        returnValue = F("Gremsheimer Str.");
        break;
    }
    case 121302:
    {
        returnValue = F("Gremskampstr.");
        break;
    }
    case 121303:
    {
        returnValue = F("Grenadierschneiße");
        break;
    }
    case 121304:
    {
        returnValue = F("Grenadierstr.");
        break;
    }
    case 121305:
    {
        returnValue = F("Grenadierweg");
        break;
    }
    case 121306:
    {
        returnValue = F("Grenayer Str.");
        break;
    }
    case 121307:
    {
        returnValue = F("Grenbach");
        break;
    }
    case 121308:
    {
        returnValue = F("Grenchenstr.");
        break;
    }
    case 121309:
    {
        returnValue = F("Grendel");
        break;
    }
    case 121310:
    {
        returnValue = F("Grendelgarten");
        break;
    }
    case 121311:
    {
        returnValue = F("Grendeltorweg");
        break;
    }
    case 121312:
    {
        returnValue = F("Grendericher Str.");
        break;
    }
    case 121313:
    {
        returnValue = F("Grenffstr.");
        break;
    }
    case 121314:
    {
        returnValue = F("Grenftalstr.");
        break;
    }
    case 121315:
    {
        returnValue = F("Grengdel");
        break;
    }
    case 121316:
    {
        returnValue = F("Grengeler Weg");
        break;
    }
    case 121317:
    {
        returnValue = F("Grengelsbitze");
        break;
    }
    case 121318:
    {
        returnValue = F("Grengracht");
        break;
    }
    case 121319:
    {
        returnValue = F("Grenisbergweg");
        break;
    }
    case 121320:
    {
        returnValue = F("Grennigloh");
        break;
    }
    case 121321:
    {
        returnValue = F("Grennigloher Weg");
        break;
    }
    case 121322:
    {
        returnValue = F("Grenselstr.");
        break;
    }
    case 121323:
    {
        returnValue = F("Grensstraat");
        break;
    }
    case 121324:
    {
        returnValue = F("Grensweg");
        break;
    }
    case 121325:
    {
        returnValue = F("Grentruper Weg");
        break;
    }
    case 121326:
    {
        returnValue = F("Grenz");
        break;
    }
    case 121327:
    {
        returnValue = F("Grenz-Geräumt");
        break;
    }
    case 121328:
    {
        returnValue = F("Grenzacher Str.");
        break;
    }
    case 121329:
    {
        returnValue = F("Grenzacher Weg");
        break;
    }
    case 121330:
    {
        returnValue = F("Grenzacker");
        break;
    }
    case 121331:
    {
        returnValue = F("Grenzallee");
        break;
    }
    case 121332:
    {
        returnValue = F("Grenzbachhof");
        break;
    }
    case 121333:
    {
        returnValue = F("Grenzbachstr.");
        break;
    }
    case 121334:
    {
        returnValue = F("Grenzbachtal");
        break;
    }
    case 121335:
    {
        returnValue = F("Grenzbachweg");
        break;
    }
    case 121336:
    {
        returnValue = F("Grenzbahn");
        break;
    }
    case 121337:
    {
        returnValue = F("Grenzbahn-Weg");
        break;
    }
    case 121338:
    {
        returnValue = F("Grenzbaudenweg");
        break;
    }
    case 121339:
    {
        returnValue = F("Grenzberg");
        break;
    }
    case 121340:
    {
        returnValue = F("Grenzbogen");
        break;
    }
    case 121341:
    {
        returnValue = F("Grenzborn");
        break;
    }
    case 121342:
    {
        returnValue = F("Grenzbrücke");
        break;
    }
    case 121343:
    {
        returnValue = F("Grenzdamm");
        break;
    }
    case 121344:
    {
        returnValue = F("Grenzdorf");
        break;
    }
    case 121345:
    {
        returnValue = F("Grenzdyck");
        break;
    }
    case 121346:
    {
        returnValue = F("Grenzdycker Str.");
        break;
    }
    case 121347:
    {
        returnValue = F("Grenze");
        break;
    }
    case 121348:
    {
        returnValue = F("Grenzebergstr.");
        break;
    }
    case 121349:
    {
        returnValue = F("Grenzeck");
        break;
    }
    case 121350:
    {
        returnValue = F("Grenzelweg");
        break;
    }
    case 121351:
    {
        returnValue = F("Grenzenberg");
        break;
    }
    case 121352:
    {
        returnValue = F("Grenzenmühlenweg");
        break;
    }
    case 121353:
    {
        returnValue = F("Grenzenstr.");
        break;
    }
    case 121354:
    {
        returnValue = F("Grenzerpfad");
        break;
    }
    case 121355:
    {
        returnValue = F("Grenzersteig");
        break;
    }
    case 121356:
    {
        returnValue = F("Grenzertrundweg");
        break;
    }
    case 121357:
    {
        returnValue = F("Grenzertstr.");
        break;
    }
    case 121358:
    {
        returnValue = F("Grenzfeldstr.");
        break;
    }
    case 121359:
    {
        returnValue = F("Grenzflügel");
        break;
    }
    case 121360:
    {
        returnValue = F("Grenzgasse");
        break;
    }
    case 121361:
    {
        returnValue = F("Grenzgeräumt");
        break;
    }
    case 121362:
    {
        returnValue = F("Grenzgestell");
        break;
    }
    case 121363:
    {
        returnValue = F("Grenzgraben");
        break;
    }
    case 121364:
    {
        returnValue = F("Grenzgrund");
        break;
    }
    case 121365:
    {
        returnValue = F("Grenzhammer");
        break;
    }
    case 121366:
    {
        returnValue = F("Grenzhausener Str.");
        break;
    }
    case 121367:
    {
        returnValue = F("Grenzhaustr.");
        break;
    }
    case 121368:
    {
        returnValue = F("Grenzheide");
        break;
    }
    case 121369:
    {
        returnValue = F("Grenzhof");
        break;
    }
    case 121370:
    {
        returnValue = F("Grenzhofer Weg");
        break;
    }
    case 121371:
    {
        returnValue = F("Grenzhofstr.");
        break;
    }
    case 121372:
    {
        returnValue = F("Grenzholzstr.");
        break;
    }
    case 121373:
    {
        returnValue = F("Grenzhus - Außenanlagen");
        break;
    }
    case 121374:
    {
        returnValue = F("Grenzhäuser");
        break;
    }
    case 121375:
    {
        returnValue = F("Grenzhäuser Str.");
        break;
    }
    case 121376:
    {
        returnValue = F("Grenzhöfe");
        break;
    }
    case 121377:
    {
        returnValue = F("Grenzhöfer Str.");
        break;
    }
    case 121378:
    {
        returnValue = F("Grenzhöhe");
        break;
    }
    case 121379:
    {
        returnValue = F("Grenzingstr.");
        break;
    }
    case 121380:
    {
        returnValue = F("Grenzjägerweg");
        break;
    }
    case 121381:
    {
        returnValue = F("Grenzkrug");
        break;
    }
    case 121382:
    {
        returnValue = F("Grenzlandring");
        break;
    }
    case 121383:
    {
        returnValue = F("Grenzlandsteig");
        break;
    }
    case 121384:
    {
        returnValue = F("Grenzlandstr.");
        break;
    }
    case 121385:
    {
        returnValue = F("Grenzmark");
        break;
    }
    case 121386:
    {
        returnValue = F("Grenzmarkstr.");
        break;
    }
    case 121387:
    {
        returnValue = F("Grenzmoorweg");
        break;
    }
    case 121388:
    {
        returnValue = F("Grenzmühlenstr.");
        break;
    }
    case 121389:
    {
        returnValue = F("Grenzpad");
        break;
    }
    case 121390:
    {
        returnValue = F("Grenzpfad");
        break;
    }
    case 121391:
    {
        returnValue = F("Grenzpfahlweg");
        break;
    }
    case 121392:
    {
        returnValue = F("Grenzrain");
        break;
    }
    case 121393:
    {
        returnValue = F("Grenzring");
        break;
    }
    case 121394:
    {
        returnValue = F("Grenzritt");
        break;
    }
    case 121395:
    {
        returnValue = F("Grenzschleuse");
        break;
    }
    case 121396:
    {
        returnValue = F("Grenzschneise");
        break;
    }
    case 121397:
    {
        returnValue = F("Grenzschänkstr.");
        break;
    }
    case 121398:
    {
        returnValue = F("Grenzsiedlung");
        break;
    }
    case 121399:
    {
        returnValue = F("Grenzsteig");
        break;
    }
    case 121400:
    {
        returnValue = F("Grenzsteigle");
        break;
    }
    case 121401:
    {
        returnValue = F("Grenzstein Monument");
        break;
    }
    case 121402:
    {
        returnValue = F("Grenzsteingarten Heimbuchenthal");
        break;
    }
    case 121403:
    {
        returnValue = F("Grenzsteinpfad");
        break;
    }
    case 121404:
    {
        returnValue = F("Grenzsteinweg");
        break;
    }
    case 121405:
    {
        returnValue = F("Grenzstockweg");
        break;
    }
    case 121406:
    {
        returnValue = F("Grenzstr.");
        break;
    }
    case 121407:
    {
        returnValue = F("Grenzsträßchen");
        break;
    }
    case 121408:
    {
        returnValue = F("Grenzsträßle");
        break;
    }
    case 121409:
    {
        returnValue = F("Grenztal");
        break;
    }
    case 121410:
    {
        returnValue = F("Grenztalweg");
        break;
    }
    case 121411:
    {
        returnValue = F("Grenztrift");
        break;
    }
    case 121412:
    {
        returnValue = F("Grenztriftweg");
        break;
    }
    case 121413:
    {
        returnValue = F("Grenzviebig");
        break;
    }
    case 121414:
    {
        returnValue = F("Grenzwaldstr.");
        break;
    }
    case 121415:
    {
        returnValue = F("Grenzwall");
        break;
    }
    case 121416:
    {
        returnValue = F("Grenzwallweg");
        break;
    }
    case 121417:
    {
        returnValue = F("Grenzwanderweg");
        break;
    }
    case 121418:
    {
        returnValue = F("Grenzweg");
        break;
    }
    case 121419:
    {
        returnValue = F("Grenzweg (Kolonnenweg)");
        break;
    }
    case 121420:
    {
        returnValue = F("Grenzweg (Rothaarsteig)");
        break;
    }
    case 121421:
    {
        returnValue = F("Grenzweg / Stellweg 7/8");
        break;
    }
    case 121422:
    {
        returnValue = F("Grenzweg Flörsheim");
        break;
    }
    case 121423:
    {
        returnValue = F("Grenzweg Kork");
        break;
    }
    case 121424:
    {
        returnValue = F("Grenzweg Linx");
        break;
    }
    case 121425:
    {
        returnValue = F("Grenzweg Neumühl");
        break;
    }
    case 121426:
    {
        returnValue = F("Grenzweg Nord");
        break;
    }
    case 121427:
    {
        returnValue = F("Grenzweg Vehrte/Venne");
        break;
    }
    case 121428:
    {
        returnValue = F("Grenzweg am Bodesprung");
        break;
    }
    case 121429:
    {
        returnValue = F("Grenzwegschlag");
        break;
    }
    case 121430:
    {
        returnValue = F("Grenzwehr");
        break;
    }
    case 121431:
    {
        returnValue = F("Grenzäckerstr.");
        break;
    }
    case 121432:
    {
        returnValue = F("Greobenweg");
        break;
    }
    case 121433:
    {
        returnValue = F("Grepelstr.");
        break;
    }
    case 121434:
    {
        returnValue = F("Grepenweg");
        break;
    }
    case 121435:
    {
        returnValue = F("Grepiner Str.");
        break;
    }
    case 121436:
    {
        returnValue = F("Greppenstr.");
        break;
    }
    case 121437:
    {
        returnValue = F("Greppenweg");
        break;
    }
    case 121438:
    {
        returnValue = F("Greppiner Str.");
        break;
    }
    case 121439:
    {
        returnValue = F("Greppmeierstr.");
        break;
    }
    case 121440:
    {
        returnValue = F("Greppstr.");
        break;
    }
    case 121441:
    {
        returnValue = F("Gresaubacher Str.");
        break;
    }
    case 121442:
    {
        returnValue = F("Gresding");
        break;
    }
    case 121443:
    {
        returnValue = F("Gresemundstr.");
        break;
    }
    case 121444:
    {
        returnValue = F("Gresgen");
        break;
    }
    case 121445:
    {
        returnValue = F("Gresgen-Eichbühl");
        break;
    }
    case 121446:
    {
        returnValue = F("Gresgener Weg");
        break;
    }
    case 121447:
    {
        returnValue = F("Gresger Weg");
        break;
    }
    case 121448:
    {
        returnValue = F("Gresgerstr.");
        break;
    }
    case 121449:
    {
        returnValue = F("Gresgerweg");
        break;
    }
    case 121450:
    {
        returnValue = F("Greskampsfeld");
        break;
    }
    case 121451:
    {
        returnValue = F("Gresselgrund");
        break;
    }
    case 121452:
    {
        returnValue = F("Gresselweg");
        break;
    }
    case 121453:
    {
        returnValue = F("Gressenhardtweg");
        break;
    }
    case 121454:
    {
        returnValue = F("Gressenicher Str.");
        break;
    }
    case 121455:
    {
        returnValue = F("Gresserstr.");
        break;
    }
    case 121456:
    {
        returnValue = F("Gresskamp");
        break;
    }
    case 121457:
    {
        returnValue = F("Gresslande");
        break;
    }
    case 121458:
    {
        returnValue = F("Gressower Str.");
        break;
    }
    case 121459:
    {
        returnValue = F("Gressstr.");
        break;
    }
    case 121460:
    {
        returnValue = F("Grestenweg");
        break;
    }
    case 121461:
    {
        returnValue = F("Grester Str.");
        break;
    }
    case 121462:
    {
        returnValue = F("Greta-Jünger-Weg");
        break;
    }
    case 121463:
    {
        returnValue = F("Greta-Korn-Str.");
        break;
    }
    case 121464:
    {
        returnValue = F("Greta-Rothe-Str.");
        break;
    }
    case 121465:
    {
        returnValue = F("Greta-Schoon-Str.");
        break;
    }
    case 121466:
    {
        returnValue = F("Gretchen-Schantz-Str.");
        break;
    }
    case 121467:
    {
        returnValue = F("Gretchenbrink");
        break;
    }
    case 121468:
    {
        returnValue = F("Gretchengasse");
        break;
    }
    case 121469:
    {
        returnValue = F("Gretchenstr.");
        break;
    }
    case 121470:
    {
        returnValue = F("Gretchenweg");
        break;
    }
    case 121471:
    {
        returnValue = F("Grete- Minde Str.");
        break;
    }
    case 121472:
    {
        returnValue = F("Grete-Borgmann-Str.");
        break;
    }
    case 121473:
    {
        returnValue = F("Grete-Fluss-Str.");
        break;
    }
    case 121474:
    {
        returnValue = F("Grete-Frisius-Weg");
        break;
    }
    case 121475:
    {
        returnValue = F("Grete-Hermann-Str.");
        break;
    }
    case 121476:
    {
        returnValue = F("Grete-Hoffmann-Weg");
        break;
    }
    case 121477:
    {
        returnValue = F("Grete-Kahn-Str.");
        break;
    }
    case 121478:
    {
        returnValue = F("Grete-Schickedanz-Str.");
        break;
    }
    case 121479:
    {
        returnValue = F("Grete-Schmitz-Str.");
        break;
    }
    case 121480:
    {
        returnValue = F("Grete-Schött-Ring");
        break;
    }
    case 121481:
    {
        returnValue = F("Grete-Unrein-Str.");
        break;
    }
    case 121482:
    {
        returnValue = F("Grete-Walther-Str.");
        break;
    }
    case 121483:
    {
        returnValue = F("Grete-Wendt-Str.");
        break;
    }
    case 121484:
    {
        returnValue = F("Gretel-Baumbach-Str.");
        break;
    }
    case 121485:
    {
        returnValue = F("Gretel-Bergmann-Str.");
        break;
    }
    case 121486:
    {
        returnValue = F("Gretel-Hirth-Str.");
        break;
    }
    case 121487:
    {
        returnValue = F("Gretel-Locher-Weg");
        break;
    }
    case 121488:
    {
        returnValue = F("Gretel-Maraldo-Str.");
        break;
    }
    case 121489:
    {
        returnValue = F("Gretelgasse");
        break;
    }
    case 121490:
    {
        returnValue = F("Gretelriede");
        break;
    }
    case 121491:
    {
        returnValue = F("Gretelsbachweg");
        break;
    }
    case 121492:
    {
        returnValue = F("Gretelweg");
        break;
    }
    case 121493:
    {
        returnValue = F("Gretenbachstr.");
        break;
    }
    case 121494:
    {
        returnValue = F("Gretenberg Bahn");
        break;
    }
    case 121495:
    {
        returnValue = F("Gretenberger Str.");
        break;
    }
    case 121496:
    {
        returnValue = F("Greteneck");
        break;
    }
    case 121497:
    {
        returnValue = F("Gretengasse");
        break;
    }
    case 121498:
    {
        returnValue = F("Gretengrund");
        break;
    }
    case 121499:
    {
        returnValue = F("Gretenhecke");
        break;
    }
    case 121500:
    {
        returnValue = F("Gretenrade");
        break;
    }
    case 121501:
    {
        returnValue = F("Gretenschneise");
        break;
    }
    case 121502:
    {
        returnValue = F("Greter-Stück-Weg");
        break;
    }
    case 121503:
    {
        returnValue = F("Gretescher Weg");
        break;
    }
    case 121504:
    {
        returnValue = F("Greteweg");
        break;
    }
    case 121505:
    {
        returnValue = F("Greth-Skrabbel-Wei");
        break;
    }
    case 121506:
    {
        returnValue = F("Grethaldenweg");
        break;
    }
    case 121507:
    {
        returnValue = F("Grethe-Jürgens-Ring");
        break;
    }
    case 121508:
    {
        returnValue = F("Grethe-Jürgens-Str.");
        break;
    }
    case 121509:
    {
        returnValue = F("Grethe-Jürgens-Weg");
        break;
    }
    case 121510:
    {
        returnValue = F("Grethe-Weiser-Str.");
        break;
    }
    case 121511:
    {
        returnValue = F("Grethehof");
        break;
    }
    case 121512:
    {
        returnValue = F("Grethemer Hauptstr.");
        break;
    }
    case 121513:
    {
        returnValue = F("Grethener Allee");
        break;
    }
    case 121514:
    {
        returnValue = F("Grethener Str.");
        break;
    }
    case 121515:
    {
        returnValue = F("Grethengasse");
        break;
    }
    case 121516:
    {
        returnValue = F("Grethenstr.");
        break;
    }
    case 121517:
    {
        returnValue = F("Gretherstr.");
        break;
    }
    case 121518:
    {
        returnValue = F("Greti-Grube-Weg");
        break;
    }
    case 121519:
    {
        returnValue = F("Gretje-Dwenger-Weg");
        break;
    }
    case 121520:
    {
        returnValue = F("Gretje-Offen-Weg");
        break;
    }
    case 121521:
    {
        returnValue = F("Gretjenrade");
        break;
    }
    case 121522:
    {
        returnValue = F("Gretlade");
        break;
    }
    case 121523:
    {
        returnValue = F("Gretli-Fuchs-Str.");
        break;
    }
    case 121524:
    {
        returnValue = F("Gretlmühle");
        break;
    }
    case 121525:
    {
        returnValue = F("Gretmeer");
        break;
    }
    case 121526:
    {
        returnValue = F("Grettenacker");
        break;
    }
    case 121527:
    {
        returnValue = F("Grettenfeld");
        break;
    }
    case 121528:
    {
        returnValue = F("Gretterweg");
        break;
    }
    case 121529:
    {
        returnValue = F("Grettstadter Str.");
        break;
    }
    case 121530:
    {
        returnValue = F("Grettstadter Weg");
        break;
    }
    case 121531:
    {
        returnValue = F("Gretzgäßle");
        break;
    }
    case 121532:
    {
        returnValue = F("Gretzmanns Esch");
        break;
    }
    case 121533:
    {
        returnValue = F("Greuda");
        break;
    }
    case 121534:
    {
        returnValue = F("Greudaer Weg");
        break;
    }
    case 121535:
    {
        returnValue = F("Greuel");
        break;
    }
    case 121536:
    {
        returnValue = F("Greuelgasse");
        break;
    }
    case 121537:
    {
        returnValue = F("Greulingstr.");
        break;
    }
    case 121538:
    {
        returnValue = F("Greulstr.");
        break;
    }
    case 121539:
    {
        returnValue = F("Greune Eck");
        break;
    }
    case 121540:
    {
        returnValue = F("Greune-Stee-Weg");
        break;
    }
    case 121541:
    {
        returnValue = F("Greut");
        break;
    }
    case 121542:
    {
        returnValue = F("Greut-Sträßle");
        break;
    }
    case 121543:
    {
        returnValue = F("Greuter Str.");
        break;
    }
    case 121544:
    {
        returnValue = F("Greuth");
        break;
    }
    case 121545:
    {
        returnValue = F("Greuthangweg");
        break;
    }
    case 121546:
    {
        returnValue = F("Greuthaustr.");
        break;
    }
    case 121547:
    {
        returnValue = F("Greuthauweg");
        break;
    }
    case 121548:
    {
        returnValue = F("Greuther Str.");
        break;
    }
    case 121549:
    {
        returnValue = F("Greutherweg");
        break;
    }
    case 121550:
    {
        returnValue = F("Greuthof");
        break;
    }
    case 121551:
    {
        returnValue = F("Greuthofstr.");
        break;
    }
    case 121552:
    {
        returnValue = F("Greuthstr.");
        break;
    }
    case 121553:
    {
        returnValue = F("Greuthweg");
        break;
    }
    case 121554:
    {
        returnValue = F("Greuthölzle");
        break;
    }
    case 121555:
    {
        returnValue = F("Greutlachweg");
        break;
    }
    case 121556:
    {
        returnValue = F("Greutlesweg");
        break;
    }
    case 121557:
    {
        returnValue = F("Greutleweg");
        break;
    }
    case 121558:
    {
        returnValue = F("Greutsteinstr.");
        break;
    }
    case 121559:
    {
        returnValue = F("Greutstich");
        break;
    }
    case 121560:
    {
        returnValue = F("Greutstr.");
        break;
    }
    case 121561:
    {
        returnValue = F("Greutsträßle");
        break;
    }
    case 121562:
    {
        returnValue = F("Greuttorallee");
        break;
    }
    case 121563:
    {
        returnValue = F("Greutweg");
        break;
    }
    case 121564:
    {
        returnValue = F("Greutwiesen");
        break;
    }
    case 121565:
    {
        returnValue = F("Greutwiesenstr.");
        break;
    }
    case 121566:
    {
        returnValue = F("Greutäckerstr.");
        break;
    }
    case 121567:
    {
        returnValue = F("Greußen-Ebeleben-Keulaer Eisenbahn");
        break;
    }
    case 121568:
    {
        returnValue = F("Greußener Str.");
        break;
    }
    case 121569:
    {
        returnValue = F("Greußener Tor");
        break;
    }
    case 121570:
    {
        returnValue = F("Greußener Weg");
        break;
    }
    case 121571:
    {
        returnValue = F("Greußengasse");
        break;
    }
    case 121572:
    {
        returnValue = F("Greußstr.");
        break;
    }
    case 121573:
    {
        returnValue = F("Greve");
        break;
    }
    case 121574:
    {
        returnValue = F("Grevekoppel");
        break;
    }
    case 121575:
    {
        returnValue = F("Grevelau");
        break;
    }
    case 121576:
    {
        returnValue = F("Greveling");
        break;
    }
    case 121577:
    {
        returnValue = F("Grevelingstieg");
        break;
    }
    case 121578:
    {
        returnValue = F("Grevelkampsweg");
        break;
    }
    case 121579:
    {
        returnValue = F("Grevelourstr.");
        break;
    }
    case 121580:
    {
        returnValue = F("Grevelsberger Weg");
        break;
    }
    case 121581:
    {
        returnValue = F("Grevelskamp");
        break;
    }
    case 121582:
    {
        returnValue = F("Grevelstr.");
        break;
    }
    case 121583:
    {
        returnValue = F("Greven Worth");
        break;
    }
    case 121584:
    {
        returnValue = F("Grevenbarg");
        break;
    }
    case 121585:
    {
        returnValue = F("Grevenberger Str.");
        break;
    }
    case 121586:
    {
        returnValue = F("Grevenbleck");
        break;
    }
    case 121587:
    {
        returnValue = F("Grevenbroicher Str.");
        break;
    }
    case 121588:
    {
        returnValue = F("Grevenbrücker Str.");
        break;
    }
    case 121589:
    {
        returnValue = F("Grevener Chaussee");
        break;
    }
    case 121590:
    {
        returnValue = F("Grevener Damm");
        break;
    }
    case 121591:
    {
        returnValue = F("Grevener Landstr.");
        break;
    }
    case 121592:
    {
        returnValue = F("Grevener Str.");
        break;
    }
    case 121593:
    {
        returnValue = F("Grevenhagener Str.");
        break;
    }
    case 121594:
    {
        returnValue = F("Grevenhausenstr.");
        break;
    }
    case 121595:
    {
        returnValue = F("Grevenhauser Weg");
        break;
    }
    case 121596:
    {
        returnValue = F("Grevenhell uf Denneberg");
        break;
    }
    case 121597:
    {
        returnValue = F("Grevenhof");
        break;
    }
    case 121598:
    {
        returnValue = F("Grevenhornweg");
        break;
    }
    case 121599:
    {
        returnValue = F("Grevenhorst");
        break;
    }
    case 121600:
    {
        returnValue = F("Grevenhäger Weg");
        break;
    }
    case 121601:
    {
        returnValue = F("Grevenhütte");
        break;
    }
    case 121602:
    {
        returnValue = F("Grevenkamp");
        break;
    }
    case 121603:
    {
        returnValue = F("Grevenkoper Riep");
        break;
    }
    case 121604:
    {
        returnValue = F("Grevenlahstr.");
        break;
    }
    case 121605:
    {
        returnValue = F("Grevenmühle");
        break;
    }
    case 121606:
    {
        returnValue = F("Grevensberg");
        break;
    }
    case 121607:
    {
        returnValue = F("Grevensberger Weg");
        break;
    }
    case 121608:
    {
        returnValue = F("Grevenskampweg");
        break;
    }
    case 121609:
    {
        returnValue = F("Grevenskuhler Damm");
        break;
    }
    case 121610:
    {
        returnValue = F("Grevenstein");
        break;
    }
    case 121611:
    {
        returnValue = F("Grevensteiner Str.");
        break;
    }
    case 121612:
    {
        returnValue = F("Grevensteiner Weg");
        break;
    }
    case 121613:
    {
        returnValue = F("Grevenstr.");
        break;
    }
    case 121614:
    {
        returnValue = F("Grevenweg");
        break;
    }
    case 121615:
    {
        returnValue = F("Grevenwiese");
        break;
    }
    case 121616:
    {
        returnValue = F("Greverather Weg");
        break;
    }
    case 121617:
    {
        returnValue = F("Grevers Kolk");
        break;
    }
    case 121618:
    {
        returnValue = F("Greversweg");
        break;
    }
    case 121619:
    {
        returnValue = F("Greves Wiese");
        break;
    }
    case 121620:
    {
        returnValue = F("Grevesmühlener Chaussee");
        break;
    }
    case 121621:
    {
        returnValue = F("Grevesmühlener Str.");
        break;
    }
    case 121622:
    {
        returnValue = F("Grevesmühlener Weg");
        break;
    }
    case 121623:
    {
        returnValue = F("Grevestr.");
        break;
    }
    case 121624:
    {
        returnValue = F("Greveweg");
        break;
    }
    case 121625:
    {
        returnValue = F("Grevinghof");
        break;
    }
    case 121626:
    {
        returnValue = F("Grevskamp");
        break;
    }
    case 121627:
    {
        returnValue = F("Grewenhof");
        break;
    }
    case 121628:
    {
        returnValue = F("Grewiede");
        break;
    }
    case 121629:
    {
        returnValue = F("Grewingsweg");
        break;
    }
    case 121630:
    {
        returnValue = F("Grewohweg");
        break;
    }
    case 121631:
    {
        returnValue = F("Greyerstr.");
        break;
    }
    case 121632:
    {
        returnValue = F("Grezhauser Str.");
        break;
    }
    case 121633:
    {
        returnValue = F("Grezzbachstr.");
        break;
    }
    case 121634:
    {
        returnValue = F("Greßbachbrücke");
        break;
    }
    case 121635:
    {
        returnValue = F("Greßhausen");
        break;
    }
    case 121636:
    {
        returnValue = F("Greßhügel");
        break;
    }
    case 121637:
    {
        returnValue = F("Greßlerweg");
        break;
    }
    case 121638:
    {
        returnValue = F("Greßthaler Str.");
        break;
    }
    case 121639:
    {
        returnValue = F("Greßwinkel");
        break;
    }
    case 121640:
    {
        returnValue = F("Griasbeger Fussweg");
        break;
    }
    case 121641:
    {
        returnValue = F("Gribehner Weg");
        break;
    }
    case 121642:
    {
        returnValue = F("Grie");
        break;
    }
    case 121643:
    {
        returnValue = F("Griebeler Weg");
        break;
    }
    case 121644:
    {
        returnValue = F("Griebelstr.");
        break;
    }
    case 121645:
    {
        returnValue = F("Griebelweg");
        break;
    }
    case 121646:
    {
        returnValue = F("Griebeläckerstr.");
        break;
    }
    case 121647:
    {
        returnValue = F("Griebener Breite Str.");
        break;
    }
    case 121648:
    {
        returnValue = F("Griebener Chaussee");
        break;
    }
    case 121649:
    {
        returnValue = F("Griebener Chausseestr.");
        break;
    }
    case 121650:
    {
        returnValue = F("Griebener Damm");
        break;
    }
    case 121651:
    {
        returnValue = F("Griebener Elbstr.");
        break;
    }
    case 121652:
    {
        returnValue = F("Griebener Gang");
        break;
    }
    case 121653:
    {
        returnValue = F("Griebener Gartenstr.");
        break;
    }
    case 121654:
    {
        returnValue = F("Griebener Str.");
        break;
    }
    case 121655:
    {
        returnValue = F("Griebener Weg");
        break;
    }
    case 121656:
    {
        returnValue = F("Griebenkamp");
        break;
    }
    case 121657:
    {
        returnValue = F("Griebnitzer Weg");
        break;
    }
    case 121658:
    {
        returnValue = F("Griebnitzstr.");
        break;
    }
    case 121659:
    {
        returnValue = F("Grieboer Dorfstr.");
        break;
    }
    case 121660:
    {
        returnValue = F("Grieboer Gartenweg");
        break;
    }
    case 121661:
    {
        returnValue = F("Grieboer Heideweg");
        break;
    }
    case 121662:
    {
        returnValue = F("Grieboer Kiefernweg");
        break;
    }
    case 121663:
    {
        returnValue = F("Grieboer Mittelweg");
        break;
    }
    case 121664:
    {
        returnValue = F("Grieboer Querweg");
        break;
    }
    case 121665:
    {
        returnValue = F("Grieboer Schulstr.");
        break;
    }
    case 121666:
    {
        returnValue = F("Grieboer Schulweg");
        break;
    }
    case 121667:
    {
        returnValue = F("Grieboer Weg");
        break;
    }
    case 121668:
    {
        returnValue = F("Griebow Siedlung");
        break;
    }
    case 121669:
    {
        returnValue = F("Griebow-Mühle");
        break;
    }
    case 121670:
    {
        returnValue = F("Griebower Str.");
        break;
    }
    case 121671:
    {
        returnValue = F("Griechenweg");
        break;
    }
    case 121672:
    {
        returnValue = F("Griechischer Weg");
        break;
    }
    case 121673:
    {
        returnValue = F("Griechoweg");
        break;
    }
    case 121674:
    {
        returnValue = F("Griedelbacher Pfad");
        break;
    }
    case 121675:
    {
        returnValue = F("Griedelbacher Str.");
        break;
    }
    case 121676:
    {
        returnValue = F("Griedeler Str.");
        break;
    }
    case 121677:
    {
        returnValue = F("Griegallee");
        break;
    }
    case 121678:
    {
        returnValue = F("Griege");
        break;
    }
    case 121679:
    {
        returnValue = F("Griegstr.");
        break;
    }
    case 121680:
    {
        returnValue = F("Griegweg");
        break;
    }
    case 121681:
    {
        returnValue = F("Griemensiek");
        break;
    }
    case 121682:
    {
        returnValue = F("Griemenstr.");
        break;
    }
    case 121683:
    {
        returnValue = F("Griemeringhauser Str.");
        break;
    }
    case 121684:
    {
        returnValue = F("Griemshorst");
        break;
    }
    case 121685:
    {
        returnValue = F("Griemshorster Str.");
        break;
    }
    case 121686:
    {
        returnValue = F("Grienenberg");
        break;
    }
    case 121687:
    {
        returnValue = F("Griengasse");
        break;
    }
    case 121688:
    {
        returnValue = F("Grienmatt");
        break;
    }
    case 121689:
    {
        returnValue = F("Grienriede");
        break;
    }
    case 121690:
    {
        returnValue = F("Grienskamp");
        break;
    }
    case 121691:
    {
        returnValue = F("Grienstr.");
        break;
    }
    case 121692:
    {
        returnValue = F("Grienweg");
        break;
    }
    case 121693:
    {
        returnValue = F("Grienäckerweg");
        break;
    }
    case 121694:
    {
        returnValue = F("Griepenburger Str.");
        break;
    }
    case 121695:
    {
        returnValue = F("Griepenkerlstr.");
        break;
    }
    case 121696:
    {
        returnValue = F("Griepshop");
        break;
    }
    case 121697:
    {
        returnValue = F("Griepsweg");
        break;
    }
    case 121698:
    {
        returnValue = F("Gries");
        break;
    }
    case 121699:
    {
        returnValue = F("Gries Enn");
        break;
    }
    case 121700:
    {
        returnValue = F("Griesacker");
        break;
    }
    case 121701:
    {
        returnValue = F("Griesackerweg");
        break;
    }
    case 121702:
    {
        returnValue = F("Griesbach");
        break;
    }
    case 121703:
    {
        returnValue = F("Griesbacher Str.");
        break;
    }
    case 121704:
    {
        returnValue = F("Griesbacher Weg");
        break;
    }
    case 121705:
    {
        returnValue = F("Griesbachgarten");
        break;
    }
    case 121706:
    {
        returnValue = F("Griesbachstr.");
        break;
    }
    case 121707:
    {
        returnValue = F("Griesbachweg");
        break;
    }
    case 121708:
    {
        returnValue = F("Griesberg");
        break;
    }
    case 121709:
    {
        returnValue = F("Griesbergebeneweg");
        break;
    }
    case 121710:
    {
        returnValue = F("Griesberger Str.");
        break;
    }
    case 121711:
    {
        returnValue = F("Griesbergstr.");
        break;
    }
    case 121712:
    {
        returnValue = F("Griesbergsträßchen");
        break;
    }
    case 121713:
    {
        returnValue = F("Griesbergweg");
        break;
    }
    case 121714:
    {
        returnValue = F("Griesborner Str.");
        break;
    }
    case 121715:
    {
        returnValue = F("Griesbreitlweg");
        break;
    }
    case 121716:
    {
        returnValue = F("Griesbrunnenstr.");
        break;
    }
    case 121717:
    {
        returnValue = F("Griesbrücke");
        break;
    }
    case 121718:
    {
        returnValue = F("Griesbrückenweg");
        break;
    }
    case 121719:
    {
        returnValue = F("Griesbuckring");
        break;
    }
    case 121720:
    {
        returnValue = F("Griesbündlweg");
        break;
    }
    case 121721:
    {
        returnValue = F("Griesdell");
        break;
    }
    case 121722:
    {
        returnValue = F("Griesdobelstr.");
        break;
    }
    case 121723:
    {
        returnValue = F("Griesdobelweg");
        break;
    }
    case 121724:
    {
        returnValue = F("Griesdorfer Weg");
        break;
    }
    case 121725:
    {
        returnValue = F("Griesebachstr.");
        break;
    }
    case 121726:
    {
        returnValue = F("Griesebartshuchtweg");
        break;
    }
    case 121727:
    {
        returnValue = F("Griesefeld");
        break;
    }
    case 121728:
    {
        returnValue = F("Griesegrund");
        break;
    }
    case 121729:
    {
        returnValue = F("Grieseling");
        break;
    }
    case 121730:
    {
        returnValue = F("Grieselstr.");
        break;
    }
    case 121731:
    {
        returnValue = F("Griesemerter Weg");
        break;
    }
    case 121732:
    {
        returnValue = F("Griesenau");
        break;
    }
    case 121733:
    {
        returnValue = F("Griesenbachstr.");
        break;
    }
    case 121734:
    {
        returnValue = F("Griesenbalken");
        break;
    }
    case 121735:
    {
        returnValue = F("Griesenbraucker Str.");
        break;
    }
    case 121736:
    {
        returnValue = F("Griesenbrink");
        break;
    }
    case 121737:
    {
        returnValue = F("Griesenbrokstr.");
        break;
    }
    case 121738:
    {
        returnValue = F("Griesenbruchstr.");
        break;
    }
    case 121739:
    {
        returnValue = F("Griesener Dorfstr.");
        break;
    }
    case 121740:
    {
        returnValue = F("Griesener Str.");
        break;
    }
    case 121741:
    {
        returnValue = F("Griesengasse");
        break;
    }
    case 121742:
    {
        returnValue = F("Griesenhäldeleweg");
        break;
    }
    case 121743:
    {
        returnValue = F("Griesenhörn");
        break;
    }
    case 121744:
    {
        returnValue = F("Griesenkamp");
        break;
    }
    case 121745:
    {
        returnValue = F("Griesenmoor");
        break;
    }
    case 121746:
    {
        returnValue = F("Griesensiepen");
        break;
    }
    case 121747:
    {
        returnValue = F("Griesenstr.");
        break;
    }
    case 121748:
    {
        returnValue = F("Griesenweg");
        break;
    }
    case 121749:
    {
        returnValue = F("Grieser Str.");
        break;
    }
    case 121750:
    {
        returnValue = F("Grieserstr.");
        break;
    }
    case 121751:
    {
        returnValue = F("Griesestr.");
        break;
    }
    case 121752:
    {
        returnValue = F("Griesetalweg");
        break;
    }
    case 121753:
    {
        returnValue = F("Griesfeldstr.");
        break;
    }
    case 121754:
    {
        returnValue = F("Griesfeldweg");
        break;
    }
    case 121755:
    {
        returnValue = F("Griesgaard");
        break;
    }
    case 121756:
    {
        returnValue = F("Griesgartenstr.");
        break;
    }
    case 121757:
    {
        returnValue = F("Griesgasse");
        break;
    }
    case 121758:
    {
        returnValue = F("Griesgraben");
        break;
    }
    case 121759:
    {
        returnValue = F("Griesgrund");
        break;
    }
    case 121760:
    {
        returnValue = F("Grieshaberstr.");
        break;
    }
    case 121761:
    {
        returnValue = F("Grieshaberweg");
        break;
    }
    case 121762:
    {
        returnValue = F("Grieshalde");
        break;
    }
    case 121763:
    {
        returnValue = F("Griesheimer Kreuz");
        break;
    }
    case 121764:
    {
        returnValue = F("Griesheimer Str.");
        break;
    }
    case 121765:
    {
        returnValue = F("Griesheimer Weg");
        break;
    }
    case 121766:
    {
        returnValue = F("Griesheimweg");
        break;
    }
    case 121767:
    {
        returnValue = F("Grieshof");
        break;
    }
    case 121768:
    {
        returnValue = F("Grieshofweg");
        break;
    }
    case 121769:
    {
        returnValue = F("Grieshohlstr.");
        break;
    }
    case 121770:
    {
        returnValue = F("Grieshäuserweg");
        break;
    }
    case 121771:
    {
        returnValue = F("Griesinger Str.");
        break;
    }
    case 121772:
    {
        returnValue = F("Griesinger Weg");
        break;
    }
    case 121773:
    {
        returnValue = F("Griesingerstr.");
        break;
    }
    case 121774:
    {
        returnValue = F("Griesingerweg");
        break;
    }
    case 121775:
    {
        returnValue = F("Griesleite");
        break;
    }
    case 121776:
    {
        returnValue = F("Griesleweg");
        break;
    }
    case 121777:
    {
        returnValue = F("Grieslweg");
        break;
    }
    case 121778:
    {
        returnValue = F("Griesmattenweg");
        break;
    }
    case 121779:
    {
        returnValue = F("Griesmayerstr.");
        break;
    }
    case 121780:
    {
        returnValue = F("Griesmeier");
        break;
    }
    case 121781:
    {
        returnValue = F("Griesmühlweg");
        break;
    }
    case 121782:
    {
        returnValue = F("Griesplatz");
        break;
    }
    case 121783:
    {
        returnValue = F("Griespointweg");
        break;
    }
    case 121784:
    {
        returnValue = F("Griesredder");
        break;
    }
    case 121785:
    {
        returnValue = F("Griesring");
        break;
    }
    case 121786:
    {
        returnValue = F("Griessbrunnensträssle");
        break;
    }
    case 121787:
    {
        returnValue = F("Griessemannstr.");
        break;
    }
    case 121788:
    {
        returnValue = F("Griessgasse");
        break;
    }
    case 121789:
    {
        returnValue = F("Griessn Feld");
        break;
    }
    case 121790:
    {
        returnValue = F("Griesstr.");
        break;
    }
    case 121791:
    {
        returnValue = F("Griesstätterstr.");
        break;
    }
    case 121792:
    {
        returnValue = F("Griesterweg");
        break;
    }
    case 121793:
    {
        returnValue = F("Griesweg");
        break;
    }
    case 121794:
    {
        returnValue = F("Grieswegle");
        break;
    }
    case 121795:
    {
        returnValue = F("Grieswiese");
        break;
    }
    case 121796:
    {
        returnValue = F("Griesäckerstr.");
        break;
    }
    case 121797:
    {
        returnValue = F("Griete-van-Borken-Str.");
        break;
    }
    case 121798:
    {
        returnValue = F("Grietgasse");
        break;
    }
    case 121799:
    {
        returnValue = F("Grietgasse-Passage");
        break;
    }
    case 121800:
    {
        returnValue = F("Grietgen-Haaks-Str.");
        break;
    }
    case 121801:
    {
        returnValue = F("Griether Markt");
        break;
    }
    case 121802:
    {
        returnValue = F("Griether Str.");
        break;
    }
    case 121803:
    {
        returnValue = F("Grietherbusch");
        break;
    }
    case 121804:
    {
        returnValue = F("Grietherbuscher Str.");
        break;
    }
    case 121805:
    {
        returnValue = F("Grietherort");
        break;
    }
    case 121806:
    {
        returnValue = F("Griethweg");
        break;
    }
    case 121807:
    {
        returnValue = F("Grietsche Weg");
        break;
    }
    case 121808:
    {
        returnValue = F("Grietweg");
        break;
    }
    case 121809:
    {
        returnValue = F("Griewenkamp");
        break;
    }
    case 121810:
    {
        returnValue = F("Grieß");
        break;
    }
    case 121811:
    {
        returnValue = F("Grießackerweg");
        break;
    }
    case 121812:
    {
        returnValue = F("Grießbacher Hauptstr.");
        break;
    }
    case 121813:
    {
        returnValue = F("Grießbacher Str.");
        break;
    }
    case 121814:
    {
        returnValue = F("Grießbacher Weg");
        break;
    }
    case 121815:
    {
        returnValue = F("Grießbachhangweg");
        break;
    }
    case 121816:
    {
        returnValue = F("Grießbachweg");
        break;
    }
    case 121817:
    {
        returnValue = F("Grießbergstr.");
        break;
    }
    case 121818:
    {
        returnValue = F("Grießbergweg");
        break;
    }
    case 121819:
    {
        returnValue = F("Grießbuck");
        break;
    }
    case 121820:
    {
        returnValue = F("Grießeggstr.");
        break;
    }
    case 121821:
    {
        returnValue = F("Grießemer Str.");
        break;
    }
    case 121822:
    {
        returnValue = F("Grießenbach");
        break;
    }
    case 121823:
    {
        returnValue = F("Grießenbacher Weg");
        break;
    }
    case 121824:
    {
        returnValue = F("Grießenbachstr.");
        break;
    }
    case 121825:
    {
        returnValue = F("Grießenbeckstr.");
        break;
    }
    case 121826:
    {
        returnValue = F("Grießener Hardweg");
        break;
    }
    case 121827:
    {
        returnValue = F("Grießener Weg");
        break;
    }
    case 121828:
    {
        returnValue = F("Grießenstr.");
        break;
    }
    case 121829:
    {
        returnValue = F("Grießer");
        break;
    }
    case 121830:
    {
        returnValue = F("Grießerstr.");
        break;
    }
    case 121831:
    {
        returnValue = F("Grießerweg");
        break;
    }
    case 121832:
    {
        returnValue = F("Grießfeld");
        break;
    }
    case 121833:
    {
        returnValue = F("Grießfeldstr.");
        break;
    }
    case 121834:
    {
        returnValue = F("Grießfeldweg");
        break;
    }
    case 121835:
    {
        returnValue = F("Grießgasse");
        break;
    }
    case 121836:
    {
        returnValue = F("Grießhardtweg");
        break;
    }
    case 121837:
    {
        returnValue = F("Grießlstr.");
        break;
    }
    case 121838:
    {
        returnValue = F("Grießmattenstr.");
        break;
    }
    case 121839:
    {
        returnValue = F("Grießstr.");
        break;
    }
    case 121840:
    {
        returnValue = F("Grießtalstr.");
        break;
    }
    case 121841:
    {
        returnValue = F("Grießweg");
        break;
    }
    case 121842:
    {
        returnValue = F("Griffenberg");
        break;
    }
    case 121843:
    {
        returnValue = F("Griffenhagen");
        break;
    }
    case 121844:
    {
        returnValue = F("Griffenwanger Str.");
        break;
    }
    case 121845:
    {
        returnValue = F("Griftenweg");
        break;
    }
    case 121846:
    {
        returnValue = F("Grifter Str.");
        break;
    }
    case 121847:
    {
        returnValue = F("Grifter Weg");
        break;
    }
    case 121848:
    {
        returnValue = F("Grifteweg");
        break;
    }
    case 121849:
    {
        returnValue = F("Griftweg");
        break;
    }
    case 121850:
    {
        returnValue = F("Grillanlage der KG Erfttal 1958 e.V.");
        break;
    }
    case 121851:
    {
        returnValue = F("Grillchaussee");
        break;
    }
    case 121852:
    {
        returnValue = F("Grillecke");
        break;
    }
    case 121853:
    {
        returnValue = F("Grillen Geräumt");
        break;
    }
    case 121854:
    {
        returnValue = F("Grillenberg");
        break;
    }
    case 121855:
    {
        returnValue = F("Grillenberger Höhe");
        break;
    }
    case 121856:
    {
        returnValue = F("Grillenberger Weg");
        break;
    }
    case 121857:
    {
        returnValue = F("Grillenbergerstr.");
        break;
    }
    case 121858:
    {
        returnValue = F("Grillenbergstr.");
        break;
    }
    case 121859:
    {
        returnValue = F("Grillenbuckring");
        break;
    }
    case 121860:
    {
        returnValue = F("Grillenburger Str.");
        break;
    }
    case 121861:
    {
        returnValue = F("Grillenburger Weg");
        break;
    }
    case 121862:
    {
        returnValue = F("Grillendamm");
        break;
    }
    case 121863:
    {
        returnValue = F("Grillengasse");
        break;
    }
    case 121864:
    {
        returnValue = F("Grillengrund");
        break;
    }
    case 121865:
    {
        returnValue = F("Grillenpfad");
        break;
    }
    case 121866:
    {
        returnValue = F("Grillenrainweg");
        break;
    }
    case 121867:
    {
        returnValue = F("Grillenstieg");
        break;
    }
    case 121868:
    {
        returnValue = F("Grillenstr.");
        break;
    }
    case 121869:
    {
        returnValue = F("Grillenweg");
        break;
    }
    case 121870:
    {
        returnValue = F("Grillenöd");
        break;
    }
    case 121871:
    {
        returnValue = F("Grillgasse");
        break;
    }
    case 121872:
    {
        returnValue = F("Grillhofweg");
        break;
    }
    case 121873:
    {
        returnValue = F("Grillhütte");
        break;
    }
    case 121874:
    {
        returnValue = F("Grillhütte Hauser Holz");
        break;
    }
    case 121875:
    {
        returnValue = F("Grillhütte Offstein");
        break;
    }
    case 121876:
    {
        returnValue = F("Grillhütte Weinbach");
        break;
    }
    case 121877:
    {
        returnValue = F("Grillhüttenplatz");
        break;
    }
    case 121878:
    {
        returnValue = F("Grillhüttenweg");
        break;
    }
    case 121879:
    {
        returnValue = F("Grilling");
        break;
    }
    case 121880:
    {
        returnValue = F("Grillostr.");
        break;
    }
    case 121881:
    {
        returnValue = F("Grilloweg");
        break;
    }
    case 121882:
    {
        returnValue = F("Grillparzerplatz");
        break;
    }
    case 121883:
    {
        returnValue = F("Grillparzerstr.");
        break;
    }
    case 121884:
    {
        returnValue = F("Grillparzerweg");
        break;
    }
    case 121885:
    {
        returnValue = F("Grillpfad");
        break;
    }
    case 121886:
    {
        returnValue = F("Grillplatz");
        break;
    }
    case 121887:
    {
        returnValue = F("Grillplatz \"Am Armen Mann");
        break;
    }
    case 121888:
    {
        returnValue = F("Grillplatz \"Hinterm Halberg");
        break;
    }
    case 121889:
    {
        returnValue = F("Grillplatz \"In der Dornhecke");
        break;
    }
    case 121890:
    {
        returnValue = F("Grillplatz Breungeshain");
        break;
    }
    case 121891:
    {
        returnValue = F("Grillplatz Feuerwehr Michelbach");
        break;
    }
    case 121892:
    {
        returnValue = F("Grillplatz Harlingen");
        break;
    }
    case 121893:
    {
        returnValue = F("Grillplatz Hitzelrode");
        break;
    }
    case 121894:
    {
        returnValue = F("Grillplatz Niedererbach");
        break;
    }
    case 121895:
    {
        returnValue = F("Grillplatz Ochsengespann");
        break;
    }
    case 121896:
    {
        returnValue = F("Grillplatz Rheinsheim");
        break;
    }
    case 121897:
    {
        returnValue = F("Grillplatz Schutzhüttenverein Neumorschen");
        break;
    }
    case 121898:
    {
        returnValue = F("Grillplatz Schwalbenrainweg");
        break;
    }
    case 121899:
    {
        returnValue = F("Grillplatz Simmern");
        break;
    }
    case 121900:
    {
        returnValue = F("Grillplatz am St. Alban");
        break;
    }
    case 121901:
    {
        returnValue = F("Grillplatz an der Aschaffaue");
        break;
    }
    case 121902:
    {
        returnValue = F("Grillplatz im Pfaffental");
        break;
    }
    case 121903:
    {
        returnValue = F("Grillplatzweg");
        break;
    }
    case 121904:
    {
        returnValue = F("Grillweg");
        break;
    }
    case 121905:
    {
        returnValue = F("Grimbachstr.");
        break;
    }
    case 121906:
    {
        returnValue = F("Grimbachweg");
        break;
    }
    case 121907:
    {
        returnValue = F("Grimbartschlucht");
        break;
    }
    case 121908:
    {
        returnValue = F("Grimbartweg");
        break;
    }
    case 121909:
    {
        returnValue = F("Grimberg");
        break;
    }
    case 121910:
    {
        returnValue = F("Grimberger Feld");
        break;
    }
    case 121911:
    {
        returnValue = F("Grimberger Ring");
        break;
    }
    case 121912:
    {
        returnValue = F("Grimbergstr.");
        break;
    }
    case 121913:
    {
        returnValue = F("Grimburger Str.");
        break;
    }
    case 121914:
    {
        returnValue = F("Grimburger Weg");
        break;
    }
    case 121915:
    {
        returnValue = F("Grimelsberg");
        break;
    }
    case 121916:
    {
        returnValue = F("Grimelsheimer Str.");
        break;
    }
    case 121917:
    {
        returnValue = F("Grimersumer Altendeich");
        break;
    }
    case 121918:
    {
        returnValue = F("Grimersumer Reihe");
        break;
    }
    case 121919:
    {
        returnValue = F("Grimersumer Str.");
        break;
    }
    case 121920:
    {
        returnValue = F("Grimersumer Wilmerweg");
        break;
    }
    case 121921:
    {
        returnValue = F("Grimlinghausen");
        break;
    }
    case 121922:
    {
        returnValue = F("Grimlinghauser Str.");
        break;
    }
    case 121923:
    {
        returnValue = F("Grimlinghauserbrücke");
        break;
    }
    case 121924:
    {
        returnValue = F("Grimm's Hof");
        break;
    }
    case 121925:
    {
        returnValue = F("Grimmaer Landstr.");
        break;
    }
    case 121926:
    {
        returnValue = F("Grimmaer Str.");
        break;
    }
    case 121927:
    {
        returnValue = F("Grimmaer Wiesenstr.");
        break;
    }
    case 121928:
    {
        returnValue = F("Grimmaische Str.");
        break;
    }
    case 121929:
    {
        returnValue = F("Grimmaischer Platz");
        break;
    }
    case 121930:
    {
        returnValue = F("Grimmastr.");
        break;
    }
    case 121931:
    {
        returnValue = F("Grimmbachstr.");
        break;
    }
    case 121932:
    {
        returnValue = F("Grimmberg");
        break;
    }
    case 121933:
    {
        returnValue = F("Grimme");
        break;
    }
    case 121934:
    {
        returnValue = F("Grimmel");
        break;
    }
    case 121935:
    {
        returnValue = F("Grimmelallee");
        break;
    }
    case 121936:
    {
        returnValue = F("Grimmeldorf");
        break;
    }
    case 121937:
    {
        returnValue = F("Grimmelgasse");
        break;
    }
    case 121938:
    {
        returnValue = F("Grimmelsberg");
        break;
    }
    case 121939:
    {
        returnValue = F("Grimmelsbergstr.");
        break;
    }
    case 121940:
    {
        returnValue = F("Grimmelschanze");
        break;
    }
    case 121941:
    {
        returnValue = F("Grimmelschneise");
        break;
    }
    case 121942:
    {
        returnValue = F("Grimmelsgasse");
        break;
    }
    case 121943:
    {
        returnValue = F("Grimmelshausenstr.");
        break;
    }
    case 121944:
    {
        returnValue = F("Grimmelshausenweg");
        break;
    }
    case 121945:
    {
        returnValue = F("Grimmelshof");
        break;
    }
    case 121946:
    {
        returnValue = F("Grimmelshäuser Wegle");
        break;
    }
    case 121947:
    {
        returnValue = F("Grimmeltstr.");
        break;
    }
    case 121948:
    {
        returnValue = F("Grimmelweg");
        break;
    }
    case 121949:
    {
        returnValue = F("Grimmener Chaussee");
        break;
    }
    case 121950:
    {
        returnValue = F("Grimmener Str.");
        break;
    }
    case 121951:
    {
        returnValue = F("Grimmengasse");
        break;
    }
    case 121952:
    {
        returnValue = F("Grimmenhügel");
        break;
    }
    case 121953:
    {
        returnValue = F("Grimmens");
        break;
    }
    case 121954:
    {
        returnValue = F("Grimmenstein");
        break;
    }
    case 121955:
    {
        returnValue = F("Grimmer Chaussee");
        break;
    }
    case 121956:
    {
        returnValue = F("Grimmer Landstr.");
        break;
    }
    case 121957:
    {
        returnValue = F("Grimmer Str.");
        break;
    }
    case 121958:
    {
        returnValue = F("Grimmer Weg");
        break;
    }
    case 121959:
    {
        returnValue = F("Grimmerfelder Str.");
        break;
    }
    case 121960:
    {
        returnValue = F("Grimmerriedweg");
        break;
    }
    case 121961:
    {
        returnValue = F("Grimmersberg");
        break;
    }
    case 121962:
    {
        returnValue = F("Grimmersdorfer Weg");
        break;
    }
    case 121963:
    {
        returnValue = F("Grimmerstr.");
        break;
    }
    case 121964:
    {
        returnValue = F("Grimmerswaldstr.");
        break;
    }
    case 121965:
    {
        returnValue = F("Grimmerweg");
        break;
    }
    case 121966:
    {
        returnValue = F("Grimmes Garten");
        break;
    }
    case 121967:
    {
        returnValue = F("Grimmestr.");
        break;
    }
    case 121968:
    {
        returnValue = F("Grimmeweg");
        break;
    }
    case 121969:
    {
        returnValue = F("Grimmgasse");
        break;
    }
    case 121970:
    {
        returnValue = F("Grimminghausen");
        break;
    }
    case 121971:
    {
        returnValue = F("Grimmischall");
        break;
    }
    case 121972:
    {
        returnValue = F("Grimmlichsbuschweg");
        break;
    }
    case 121973:
    {
        returnValue = F("Grimms Weg");
        break;
    }
    case 121974:
    {
        returnValue = F("Grimmsche Hauptstr.");
        break;
    }
    case 121975:
    {
        returnValue = F("Grimmsche Str.");
        break;
    }
    case 121976:
    {
        returnValue = F("Grimmscher Park");
        break;
    }
    case 121977:
    {
        returnValue = F("Grimmschlade");
        break;
    }
    case 121978:
    {
        returnValue = F("Grimmschwinder Str.");
        break;
    }
    case 121979:
    {
        returnValue = F("Grimmsmühle");
        break;
    }
    case 121980:
    {
        returnValue = F("Grimmsteig");
        break;
    }
    case 121981:
    {
        returnValue = F("Grimmstr.");
        break;
    }
    case 121982:
    {
        returnValue = F("Grimmsweg");
        break;
    }
    case 121983:
    {
        returnValue = F("Grimmweg");
        break;
    }
    case 121984:
    {
        returnValue = F("Grimmwiese");
        break;
    }
    case 121985:
    {
        returnValue = F("Grimnitzer Str.");
        break;
    }
    case 121986:
    {
        returnValue = F("Grimoldinghof");
        break;
    }
    case 121987:
    {
        returnValue = F("Grimolzhausener Str.");
        break;
    }
    case 121988:
    {
        returnValue = F("Grimolzhauser Str.");
        break;
    }
    case 121989:
    {
        returnValue = F("Grimostr.");
        break;
    }
    case 121990:
    {
        returnValue = F("Grimoweg");
        break;
    }
    case 121991:
    {
        returnValue = F("Grimpingstr.");
        break;
    }
    case 121992:
    {
        returnValue = F("Grimsehlstr.");
        break;
    }
    case 121993:
    {
        returnValue = F("Grimsehlweg");
        break;
    }
    case 121994:
    {
        returnValue = F("Grimsfeld");
        break;
    }
    case 121995:
    {
        returnValue = F("Grinauer Str.");
        break;
    }
    case 121996:
    {
        returnValue = F("Grinauer Weg");
        break;
    }
    case 121997:
    {
        returnValue = F("Grinautal");
        break;
    }
    case 121998:
    {
        returnValue = F("Grind");
        break;
    }
    case 121999:
    {
        returnValue = F("Grindauer Str.");
        break;
    }
    case 122000:
    {
        returnValue = F("Grindbucht");
        break;
    }
    case 122001:
    {
        returnValue = F("Grindbühlweg");
        break;
    }
    case 122002:
    {
        returnValue = F("Grindelbachstr.");
        break;
    }
    case 122003:
    {
        returnValue = F("Grindelstr.");
        break;
    }
    case 122004:
    {
        returnValue = F("Grindelweg");
        break;
    }
    case 122005:
    {
        returnValue = F("Grindhagenstr.");
        break;
    }
    case 122006:
    {
        returnValue = F("Grindweg");
        break;
    }
    case 122007:
    {
        returnValue = F("Gringel");
        break;
    }
    case 122008:
    {
        returnValue = F("Gringelsbach");
        break;
    }
    case 122009:
    {
        returnValue = F("Gringelstr.");
        break;
    }
    case 122010:
    {
        returnValue = F("Gringelweg");
        break;
    }
    case 122011:
    {
        returnValue = F("Grinnenstr.");
        break;
    }
    case 122012:
    {
        returnValue = F("Grinsardstr.");
        break;
    }
    case 122013:
    {
        returnValue = F("Grippekovener Str.");
        break;
    }
    case 122014:
    {
        returnValue = F("Grippeler Elbuferstr.");
        break;
    }
    case 122015:
    {
        returnValue = F("Gripsergasse");
        break;
    }
    case 122016:
    {
        returnValue = F("Grislishornweg");
        break;
    }
    case 122017:
    {
        returnValue = F("Grisselberg");
        break;
    }
    case 122018:
    {
        returnValue = F("Grisselborner Weg");
        break;
    }
    case 122019:
    {
        returnValue = F("Grissetstr.");
        break;
    }
    case 122020:
    {
        returnValue = F("Grisstede Weg");
        break;
    }
    case 122021:
    {
        returnValue = F("Gristeder Str.");
        break;
    }
    case 122022:
    {
        returnValue = F("Grisutenstr.");
        break;
    }
    case 122023:
    {
        returnValue = F("Gritschenöd");
        break;
    }
    case 122024:
    {
        returnValue = F("Gritschstr.");
        break;
    }
    case 122025:
    {
        returnValue = F("Gritteler Str.");
        break;
    }
    case 122026:
    {
        returnValue = F("Gritterer Weg");
        break;
    }
    case 122027:
    {
        returnValue = F("Grittweg");
        break;
    }
    case 122028:
    {
        returnValue = F("Griubengatze");
        break;
    }
    case 122029:
    {
        returnValue = F("Grivitenstr.");
        break;
    }
    case 122030:
    {
        returnValue = F("Grizzlybärweg");
        break;
    }
    case 122031:
    {
        returnValue = F("Grißheimer Str.");
        break;
    }
    case 122032:
    {
        returnValue = F("Grißheimer Weg");
        break;
    }
    case 122033:
    {
        returnValue = F("Gro-Harlem-Brundtland-Str.");
        break;
    }
    case 122034:
    {
        returnValue = F("Grobauer Weg");
        break;
    }
    case 122035:
    {
        returnValue = F("Grobelweg");
        break;
    }
    case 122036:
    {
        returnValue = F("Groben Kamp");
        break;
    }
    case 122037:
    {
        returnValue = F("Groben Stücken");
        break;
    }
    case 122038:
    {
        returnValue = F("Grobenstr.");
        break;
    }
    case 122039:
    {
        returnValue = F("Grobenweg");
        break;
    }
    case 122040:
    {
        returnValue = F("Grober Acker");
        break;
    }
    case 122041:
    {
        returnValue = F("Groberbergstr.");
        break;
    }
    case 122042:
    {
        returnValue = F("Grobergerstr.");
        break;
    }
    case 122043:
    {
        returnValue = F("Grobersweg");
        break;
    }
    case 122044:
    {
        returnValue = F("Grobesberg");
        break;
    }
    case 122045:
    {
        returnValue = F("Grobestr.");
        break;
    }
    case 122046:
    {
        returnValue = F("Grobleben");
        break;
    }
    case 122047:
    {
        returnValue = F("Groblebener Weg");
        break;
    }
    case 122048:
    {
        returnValue = F("Grobsbachstr.");
        break;
    }
    case 122049:
    {
        returnValue = F("Grobsdorfer Str.");
        break;
    }
    case 122050:
    {
        returnValue = F("Grochewitzer Anger");
        break;
    }
    case 122051:
    {
        returnValue = F("Grochewitzer Dorfstr.");
        break;
    }
    case 122052:
    {
        returnValue = F("Grochlitzer Str.");
        break;
    }
    case 122053:
    {
        returnValue = F("Grochwitz");
        break;
    }
    case 122054:
    {
        returnValue = F("Grochwitzer Str.");
        break;
    }
    case 122055:
    {
        returnValue = F("Grochwitzer Weg");
        break;
    }
    case 122056:
    {
        returnValue = F("Grockelhofen");
        break;
    }
    case 122057:
    {
        returnValue = F("Grode Kamp");
        break;
    }
    case 122058:
    {
        returnValue = F("Grode Katjeweg");
        break;
    }
    case 122059:
    {
        returnValue = F("Grode Wisch");
        break;
    }
    case 122060:
    {
        returnValue = F("Grodenchaussee");
        break;
    }
    case 122061:
    {
        returnValue = F("Grodener Bürgerpark");
        break;
    }
    case 122062:
    {
        returnValue = F("Grodener Chaussee");
        break;
    }
    case 122063:
    {
        returnValue = F("Grodener Deichstr.");
        break;
    }
    case 122064:
    {
        returnValue = F("Grodener Deichtrift");
        break;
    }
    case 122065:
    {
        returnValue = F("Grodener Hörn");
        break;
    }
    case 122066:
    {
        returnValue = F("Grodener Mühlenweg");
        break;
    }
    case 122067:
    {
        returnValue = F("Grodenstr.");
        break;
    }
    case 122068:
    {
        returnValue = F("Groeben");
        break;
    }
    case 122069:
    {
        returnValue = F("Groeblerstr.");
        break;
    }
    case 122070:
    {
        returnValue = F("Groen Eck");
        break;
    }
    case 122071:
    {
        returnValue = F("Groendahlscher Weg");
        break;
    }
    case 122072:
    {
        returnValue = F("Groenerstr.");
        break;
    }
    case 122073:
    {
        returnValue = F("Groenesteynstr.");
        break;
    }
    case 122074:
    {
        returnValue = F("Groenhoffstr.");
        break;
    }
    case 122075:
    {
        returnValue = F("Groeningerweg");
        break;
    }
    case 122076:
    {
        returnValue = F("Groenloer Str.");
        break;
    }
    case 122077:
    {
        returnValue = F("Groensfurther Weg");
        break;
    }
    case 122078:
    {
        returnValue = F("Groenwold");
        break;
    }
    case 122079:
    {
        returnValue = F("Grofer Weg");
        break;
    }
    case 122080:
    {
        returnValue = F("Groggelhofen");
        break;
    }
    case 122081:
    {
        returnValue = F("Groggentalgasse");
        break;
    }
    case 122082:
    {
        returnValue = F("Grohbergstr.");
        break;
    }
    case 122083:
    {
        returnValue = F("Grohellern");
        break;
    }
    case 122084:
    {
        returnValue = F("Grohgasse");
        break;
    }
    case 122085:
    {
        returnValue = F("Grohhausschneise");
        break;
    }
    case 122086:
    {
        returnValue = F("Grohleite");
        break;
    }
    case 122087:
    {
        returnValue = F("Grohlgasse");
        break;
    }
    case 122088:
    {
        returnValue = F("Grohlochstr.");
        break;
    }
    case 122089:
    {
        returnValue = F("Grohlweg");
        break;
    }
    case 122090:
    {
        returnValue = F("Grohmannstr.");
        break;
    }
    case 122091:
    {
        returnValue = F("Grohnder Str.");
        break;
    }
    case 122092:
    {
        returnValue = F("Grohschlag Hohl");
        break;
    }
    case 122093:
    {
        returnValue = F("Grohwedeweg");
        break;
    }
    case 122094:
    {
        returnValue = F("Grohweg");
        break;
    }
    case 122095:
    {
        returnValue = F("Grohwiesenstr.");
        break;
    }
    case 122096:
    {
        returnValue = F("Groiner Allee");
        break;
    }
    case 122097:
    {
        returnValue = F("Groiner Kirchweg");
        break;
    }
    case 122098:
    {
        returnValue = F("Groitschener Berg");
        break;
    }
    case 122099:
    {
        returnValue = F("Groitscher Weg");
        break;
    }
    case 122100:
    {
        returnValue = F("Groitzscher Fußweg");
        break;
    }
    case 122101:
    {
        returnValue = F("Groitzscher Str.");
        break;
    }
    case 122102:
    {
        returnValue = F("Groißenbachweg");
        break;
    }
    case 122103:
    {
        returnValue = F("Grol");
        break;
    }
    case 122104:
    {
        returnValue = F("Groll");
        break;
    }
    case 122105:
    {
        returnValue = F("Groll Geräumt");
        break;
    }
    case 122106:
    {
        returnValue = F("Grollenburg");
        break;
    }
    case 122107:
    {
        returnValue = F("Grollscher Weg");
        break;
    }
    case 122108:
    {
        returnValue = F("Grolmanweg");
        break;
    }
    case 122109:
    {
        returnValue = F("Grolsheimer Str.");
        break;
    }
    case 122110:
    {
        returnValue = F("Grolsheimer Weg");
        break;
    }
    case 122111:
    {
        returnValue = F("Gromansfeld");
        break;
    }
    case 122112:
    {
        returnValue = F("Gromanweg");
        break;
    }
    case 122113:
    {
        returnValue = F("Grombacher Str.");
        break;
    }
    case 122114:
    {
        returnValue = F("Grombacher Weg");
        break;
    }
    case 122115:
    {
        returnValue = F("Grombachweg");
        break;
    }
    case 122116:
    {
        returnValue = F("Grombühl");
        break;
    }
    case 122117:
    {
        returnValue = F("Grombühlstr.");
        break;
    }
    case 122118:
    {
        returnValue = F("Grombühlweg");
        break;
    }
    case 122119:
    {
        returnValue = F("Gromergasse");
        break;
    }
    case 122120:
    {
        returnValue = F("Grometsbenden");
        break;
    }
    case 122121:
    {
        returnValue = F("Grometstr.");
        break;
    }
    case 122122:
    {
        returnValue = F("Gromischweg");
        break;
    }
    case 122123:
    {
        returnValue = F("Grommeshofstr.");
        break;
    }
    case 122124:
    {
        returnValue = F("Grommesweg");
        break;
    }
    case 122125:
    {
        returnValue = F("Gronachblick");
        break;
    }
    case 122126:
    {
        returnValue = F("Gronachstr.");
        break;
    }
    case 122127:
    {
        returnValue = F("Gronaublick");
        break;
    }
    case 122128:
    {
        returnValue = F("Gronauer Damm");
        break;
    }
    case 122129:
    {
        returnValue = F("Gronauer Graben");
        break;
    }
    case 122130:
    {
        returnValue = F("Gronauer Hof");
        break;
    }
    case 122131:
    {
        returnValue = F("Gronauer Mühlenweg");
        break;
    }
    case 122132:
    {
        returnValue = F("Gronauer Str.");
        break;
    }
    case 122133:
    {
        returnValue = F("Gronauer Waldweg");
        break;
    }
    case 122134:
    {
        returnValue = F("Gronauer Weg");
        break;
    }
    case 122135:
    {
        returnValue = F("Gronaugasse");
        break;
    }
    case 122136:
    {
        returnValue = F("Gronaustieg");
        break;
    }
    case 122137:
    {
        returnValue = F("Gronaustr.");
        break;
    }
    case 122138:
    {
        returnValue = F("Gronauweg");
        break;
    }
    case 122139:
    {
        returnValue = F("Grondahlsmühle");
        break;
    }
    case 122140:
    {
        returnValue = F("Grondlergasse");
        break;
    }
    case 122141:
    {
        returnValue = F("Gronebergstr.");
        break;
    }
    case 122142:
    {
        returnValue = F("Gronefeldweg");
        break;
    }
    case 122143:
    {
        returnValue = F("Gronenberger Hof");
        break;
    }
    case 122144:
    {
        returnValue = F("Gronenberger Mühle");
        break;
    }
    case 122145:
    {
        returnValue = F("Gronenborner Weg");
        break;
    }
    case 122146:
    {
        returnValue = F("Gronenweg");
        break;
    }
    case 122147:
    {
        returnValue = F("Gronepark");
        break;
    }
    case 122148:
    {
        returnValue = F("Groner Allee");
        break;
    }
    case 122149:
    {
        returnValue = F("Gronerstr.");
        break;
    }
    case 122150:
    {
        returnValue = F("Gronewald");
        break;
    }
    case 122151:
    {
        returnValue = F("Gronewaldstr.");
        break;
    }
    case 122152:
    {
        returnValue = F("Groneweg");
        break;
    }
    case 122153:
    {
        returnValue = F("Gronewegstr.");
        break;
    }
    case 122154:
    {
        returnValue = F("Gronewoldstr.");
        break;
    }
    case 122155:
    {
        returnValue = F("Gronhorst");
        break;
    }
    case 122156:
    {
        returnValue = F("Groniger Str.");
        break;
    }
    case 122157:
    {
        returnValue = F("Groninger Str.");
        break;
    }
    case 122158:
    {
        returnValue = F("Gronostr.");
        break;
    }
    case 122159:
    {
        returnValue = F("Gronowskistr.");
        break;
    }
    case 122160:
    {
        returnValue = F("Gronsdorfer Hang");
        break;
    }
    case 122161:
    {
        returnValue = F("Gronsdorfer Str.");
        break;
    }
    case 122162:
    {
        returnValue = F("Gronsdorfer Weg");
        break;
    }
    case 122163:
    {
        returnValue = F("Gronsfeldweg");
        break;
    }
    case 122164:
    {
        returnValue = F("Groode Kamp");
        break;
    }
    case 122165:
    {
        returnValue = F("Groode Leegde");
        break;
    }
    case 122166:
    {
        returnValue = F("Groode Leegde Weg");
        break;
    }
    case 122167:
    {
        returnValue = F("Groode Wisch");
        break;
    }
    case 122168:
    {
        returnValue = F("Grooden Rillen");
        break;
    }
    case 122169:
    {
        returnValue = F("Groof");
        break;
    }
    case 122170:
    {
        returnValue = F("Groosschneise");
        break;
    }
    case 122171:
    {
        returnValue = F("Groosstr.");
        break;
    }
    case 122172:
    {
        returnValue = F("Groot Deep");
        break;
    }
    case 122173:
    {
        returnValue = F("Groot Hoff");
        break;
    }
    case 122174:
    {
        returnValue = F("Groot Kamp");
        break;
    }
    case 122175:
    {
        returnValue = F("Groot Karkweg");
        break;
    }
    case 122176:
    {
        returnValue = F("Groot Moor");
        break;
    }
    case 122177:
    {
        returnValue = F("Groot Redder");
        break;
    }
    case 122178:
    {
        returnValue = F("Groot Sand");
        break;
    }
    case 122179:
    {
        returnValue = F("Groot Weid");
        break;
    }
    case 122180:
    {
        returnValue = F("Grootbruchsley");
        break;
    }
    case 122181:
    {
        returnValue = F("Groote Gracht");
        break;
    }
    case 122182:
    {
        returnValue = F("Groote Kamp");
        break;
    }
    case 122183:
    {
        returnValue = F("Groote Kiel");
        break;
    }
    case 122184:
    {
        returnValue = F("Groote Leegde");
        break;
    }
    case 122185:
    {
        returnValue = F("Groote Vehdrifftsweg");
        break;
    }
    case 122186:
    {
        returnValue = F("Grootenkamp");
        break;
    }
    case 122187:
    {
        returnValue = F("Grootensweg");
        break;
    }
    case 122188:
    {
        returnValue = F("Grootestr.");
        break;
    }
    case 122189:
    {
        returnValue = F("Grootflach");
        break;
    }
    case 122190:
    {
        returnValue = F("Groothegen");
        break;
    }
    case 122191:
    {
        returnValue = F("Groothelmt");
        break;
    }
    case 122192:
    {
        returnValue = F("Groothuser Grenzweg");
        break;
    }
    case 122193:
    {
        returnValue = F("Groothuser Reihe");
        break;
    }
    case 122194:
    {
        returnValue = F("Groothörn");
        break;
    }
    case 122195:
    {
        returnValue = F("Grootkoppel");
        break;
    }
    case 122196:
    {
        returnValue = F("Grootkoppelstr.");
        break;
    }
    case 122197:
    {
        returnValue = F("Grootlandsweg");
        break;
    }
    case 122198:
    {
        returnValue = F("Grootmeedenweg");
        break;
    }
    case 122199:
    {
        returnValue = F("Grootredder");
        break;
    }
    case 122200:
    {
        returnValue = F("Grootwaterweg");
        break;
    }
    case 122201:
    {
        returnValue = F("Gropenborn");
        break;
    }
    case 122202:
    {
        returnValue = F("Gropengießerstr.");
        break;
    }
    case 122203:
    {
        returnValue = F("Gropiusallee");
        break;
    }
    case 122204:
    {
        returnValue = F("Gropiusplatz");
        break;
    }
    case 122205:
    {
        returnValue = F("Gropiusstr.");
        break;
    }
    case 122206:
    {
        returnValue = F("Gropiusweg");
        break;
    }
    case 122207:
    {
        returnValue = F("Groppacher Str.");
        break;
    }
    case 122208:
    {
        returnValue = F("Groppeler Str.");
        break;
    }
    case 122209:
    {
        returnValue = F("Groppenbachstr.");
        break;
    }
    case 122210:
    {
        returnValue = F("Groppendiek");
        break;
    }
    case 122211:
    {
        returnValue = F("Groppendorfer Berg");
        break;
    }
    case 122212:
    {
        returnValue = F("Groppenheim");
        break;
    }
    case 122213:
    {
        returnValue = F("Groppenheimer Weg");
        break;
    }
    case 122214:
    {
        returnValue = F("Groppensteige");
        break;
    }
    case 122215:
    {
        returnValue = F("Groppenweg");
        break;
    }
    case 122216:
    {
        returnValue = F("Gropperstr.");
        break;
    }
    case 122217:
    {
        returnValue = F("Groppertalstr.");
        break;
    }
    case 122218:
    {
        returnValue = F("Gropperweg");
        break;
    }
    case 122219:
    {
        returnValue = F("Groptitzer Str.");
        break;
    }
    case 122220:
    {
        returnValue = F("Groschelstr.");
        break;
    }
    case 122221:
    {
        returnValue = F("Groschenwasserweg");
        break;
    }
    case 122222:
    {
        returnValue = F("Groschenwiese");
        break;
    }
    case 122223:
    {
        returnValue = F("Groschlagweg");
        break;
    }
    case 122224:
    {
        returnValue = F("Groschstr.");
        break;
    }
    case 122225:
    {
        returnValue = F("Groschwitz");
        break;
    }
    case 122226:
    {
        returnValue = F("Grosfeldstr.");
        break;
    }
    case 122227:
    {
        returnValue = F("Groslaystr.");
        break;
    }
    case 122228:
    {
        returnValue = F("Grosostr.");
        break;
    }
    case 122229:
    {
        returnValue = F("Gross Middelburg");
        break;
    }
    case 122230:
    {
        returnValue = F("Gross Pankower Weg");
        break;
    }
    case 122231:
    {
        returnValue = F("Gross Thiershausen");
        break;
    }
    case 122232:
    {
        returnValue = F("Grossbrenzelsträßle");
        break;
    }
    case 122233:
    {
        returnValue = F("Grosse Erf");
        break;
    }
    case 122234:
    {
        returnValue = F("Grosse Str.");
        break;
    }
    case 122235:
    {
        returnValue = F("Grosselfinger Str.");
        break;
    }
    case 122236:
    {
        returnValue = F("Grosser Bosch");
        break;
    }
    case 122237:
    {
        returnValue = F("Grosser Mühlenweg");
        break;
    }
    case 122238:
    {
        returnValue = F("Grossers Allee");
        break;
    }
    case 122239:
    {
        returnValue = F("Grossersdorf");
        break;
    }
    case 122240:
    {
        returnValue = F("Grossestr.");
        break;
    }
    case 122241:
    {
        returnValue = F("Grossgartenweg");
        break;
    }
    case 122242:
    {
        returnValue = F("Grossgasse");
        break;
    }
    case 122243:
    {
        returnValue = F("Grossgressinger Str.");
        break;
    }
    case 122244:
    {
        returnValue = F("Grosskröbitz");
        break;
    }
    case 122245:
    {
        returnValue = F("Grosstann Str.");
        break;
    }
    case 122246:
    {
        returnValue = F("Grossteich Auffahrt");
        break;
    }
    case 122247:
    {
        returnValue = F("Grosswendern");
        break;
    }
    case 122248:
    {
        returnValue = F("Grosswies");
        break;
    }
    case 122249:
    {
        returnValue = F("Grostrowstr.");
        break;
    }
    case 122250:
    {
        returnValue = F("Grot");
        break;
    }
    case 122251:
    {
        returnValue = F("Grot Koppel");
        break;
    }
    case 122252:
    {
        returnValue = F("Grotallee");
        break;
    }
    case 122253:
    {
        returnValue = F("Grotangeweg");
        break;
    }
    case 122254:
    {
        returnValue = F("Grote Brinkharf");
        break;
    }
    case 122255:
    {
        returnValue = F("Grote Gert");
        break;
    }
    case 122256:
    {
        returnValue = F("Grote Horst");
        break;
    }
    case 122257:
    {
        returnValue = F("Grote Jannen Weg");
        break;
    }
    case 122258:
    {
        returnValue = F("Grote Kamp");
        break;
    }
    case 122259:
    {
        returnValue = F("Grote Koppel");
        break;
    }
    case 122260:
    {
        returnValue = F("Grote Loh");
        break;
    }
    case 122261:
    {
        returnValue = F("Grote Moorweg");
        break;
    }
    case 122262:
    {
        returnValue = F("Grote Twiet");
        break;
    }
    case 122263:
    {
        returnValue = F("Grote Wisch");
        break;
    }
    case 122264:
    {
        returnValue = F("Grote-Dahl-Weg");
        break;
    }
    case 122265:
    {
        returnValue = F("Grotefendstr.");
        break;
    }
    case 122266:
    {
        returnValue = F("Grotefendweg");
        break;
    }
    case 122267:
    {
        returnValue = F("Grotekamp");
        break;
    }
    case 122268:
    {
        returnValue = F("Grotekampstr.");
        break;
    }
    case 122269:
    {
        returnValue = F("Grotekittelstr.");
        break;
    }
    case 122270:
    {
        returnValue = F("Grotemeyers Kamp");
        break;
    }
    case 122271:
    {
        returnValue = F("Groten Beeck");
        break;
    }
    case 122272:
    {
        returnValue = F("Groten Diek");
        break;
    }
    case 122273:
    {
        returnValue = F("Groten Graben");
        break;
    }
    case 122274:
    {
        returnValue = F("Groten Grund");
        break;
    }
    case 122275:
    {
        returnValue = F("Groten Hof");
        break;
    }
    case 122276:
    {
        returnValue = F("Groten Holln");
        break;
    }
    case 122277:
    {
        returnValue = F("Groten Oh");
        break;
    }
    case 122278:
    {
        returnValue = F("Grotenbachstr.");
        break;
    }
    case 122279:
    {
        returnValue = F("Grotenbergstr.");
        break;
    }
    case 122280:
    {
        returnValue = F("Grotenburg");
        break;
    }
    case 122281:
    {
        returnValue = F("Grotendonker Str.");
        break;
    }
    case 122282:
    {
        returnValue = F("Grotenfehl");
        break;
    }
    case 122283:
    {
        returnValue = F("Grotenfeld");
        break;
    }
    case 122284:
    {
        returnValue = F("Grotenhof");
        break;
    }
    case 122285:
    {
        returnValue = F("Grotenkamp");
        break;
    }
    case 122286:
    {
        returnValue = F("Grotenrather Str.");
        break;
    }
    case 122287:
    {
        returnValue = F("Groter Hammer");
        break;
    }
    case 122288:
    {
        returnValue = F("Grotersbachweg");
        break;
    }
    case 122289:
    {
        returnValue = F("Grotesche Heide");
        break;
    }
    case 122290:
    {
        returnValue = F("Groteweg");
        break;
    }
    case 122291:
    {
        returnValue = F("Grotewiese");
        break;
    }
    case 122292:
    {
        returnValue = F("Grotfeldsredder");
        break;
    }
    case 122293:
    {
        returnValue = F("Grotfeldsweg");
        break;
    }
    case 122294:
    {
        returnValue = F("Grothar");
        break;
    }
    case 122295:
    {
        returnValue = F("Grothaus");
        break;
    }
    case 122296:
    {
        returnValue = F("Grothausstr.");
        break;
    }
    case 122297:
    {
        returnValue = F("Grothe-Marie-Str.");
        break;
    }
    case 122298:
    {
        returnValue = F("Grothenhof");
        break;
    }
    case 122299:
    {
        returnValue = F("Grothenpohl");
        break;
    }
    case 122300:
    {
        returnValue = F("Grothestr.");
        break;
    }
    case 122301:
    {
        returnValue = F("Grothkoppel");
        break;
    }
    case 122302:
    {
        returnValue = F("Grothlin");
        break;
    }
    case 122303:
    {
        returnValue = F("Grothof");
        break;
    }
    case 122304:
    {
        returnValue = F("Grotholt Redder");
        break;
    }
    case 122305:
    {
        returnValue = F("Grothstr.");
        break;
    }
    case 122306:
    {
        returnValue = F("Grothsweg");
        break;
    }
    case 122307:
    {
        returnValue = F("Grothuesstr.");
        break;
    }
    case 122308:
    {
        returnValue = F("Grothusenschanze");
        break;
    }
    case 122309:
    {
        returnValue = F("Grothuser Weg");
        break;
    }
    case 122310:
    {
        returnValue = F("Grothuskamp");
        break;
    }
    case 122311:
    {
        returnValue = F("Grothwisch");
        break;
    }
    case 122312:
    {
        returnValue = F("Grotjahnsweg");
        break;
    }
    case 122313:
    {
        returnValue = F("Grotkamp");
        break;
    }
    case 122314:
    {
        returnValue = F("Grotkoppel");
        break;
    }
    case 122315:
    {
        returnValue = F("Grotmicke");
        break;
    }
    case 122316:
    {
        returnValue = F("Grotn Felln");
        break;
    }
    case 122317:
    {
        returnValue = F("Grotsand");
        break;
    }
    case 122318:
    {
        returnValue = F("Grottastr.");
        break;
    }
    case 122319:
    {
        returnValue = F("Grottauer Brücke");
        break;
    }
    case 122320:
    {
        returnValue = F("Grotte");
        break;
    }
    case 122321:
    {
        returnValue = F("Grottenau");
        break;
    }
    case 122322:
    {
        returnValue = F("Grottenaustr.");
        break;
    }
    case 122323:
    {
        returnValue = F("Grottenberg");
        break;
    }
    case 122324:
    {
        returnValue = F("Grottenberg (20..)");
        break;
    }
    case 122325:
    {
        returnValue = F("Grottendickungsweg");
        break;
    }
    case 122326:
    {
        returnValue = F("Grottendorfer Weg");
        break;
    }
    case 122327:
    {
        returnValue = F("Grottengasse");
        break;
    }
    case 122328:
    {
        returnValue = F("Grottenhof");
        break;
    }
    case 122329:
    {
        returnValue = F("Grottenhofen");
        break;
    }
    case 122330:
    {
        returnValue = F("Grottenkamp");
        break;
    }
    case 122331:
    {
        returnValue = F("Grottenlochweg");
        break;
    }
    case 122332:
    {
        returnValue = F("Grottenmauergasse");
        break;
    }
    case 122333:
    {
        returnValue = F("Grottensteige");
        break;
    }
    case 122334:
    {
        returnValue = F("Grottenstr.");
        break;
    }
    case 122335:
    {
        returnValue = F("Grottenweg");
        break;
    }
    case 122336:
    {
        returnValue = F("Grottestr.");
        break;
    }
    case 122337:
    {
        returnValue = F("Grotteweg");
        break;
    }
    case 122338:
    {
        returnValue = F("Grottewitz");
        break;
    }
    case 122339:
    {
        returnValue = F("Grotthamer Str.");
        break;
    }
    case 122340:
    {
        returnValue = F("Grottkauer Str.");
        break;
    }
    case 122341:
    {
        returnValue = F("Grottkauer Weg");
        break;
    }
    case 122342:
    {
        returnValue = F("Grotvaderskamp");
        break;
    }
    case 122343:
    {
        returnValue = F("Grotweg");
        break;
    }
    case 122344:
    {
        returnValue = F("Grotwisch");
        break;
    }
    case 122345:
    {
        returnValue = F("Grotzstr.");
        break;
    }
    case 122346:
    {
        returnValue = F("Grotztunnel");
        break;
    }
    case 122347:
    {
        returnValue = F("Groutenweg");
        break;
    }
    case 122348:
    {
        returnValue = F("Grouvener Str.");
        break;
    }
    case 122349:
    {
        returnValue = F("Groven");
        break;
    }
    case 122350:
    {
        returnValue = F("Groven Wiese");
        break;
    }
    case 122351:
    {
        returnValue = F("Grover Grenze");
        break;
    }
    case 122352:
    {
        returnValue = F("Grover Str.");
        break;
    }
    case 122353:
    {
        returnValue = F("Grover Weg");
        break;
    }
    case 122354:
    {
        returnValue = F("Groverner Eschweg");
        break;
    }
    case 122355:
    {
        returnValue = F("Grovesmühle");
        break;
    }
    case 122356:
    {
        returnValue = F("Grovesmühler Weg");
        break;
    }
    case 122357:
    {
        returnValue = F("Grovestr.");
        break;
    }
    case 122358:
    {
        returnValue = F("Grovkamp");
        break;
    }
    case 122359:
    {
        returnValue = F("Groweg");
        break;
    }
    case 122360:
    {
        returnValue = F("Groz-Beckert-Str.");
        break;
    }
    case 122361:
    {
        returnValue = F("Grozstr.");
        break;
    }
    case 122362:
    {
        returnValue = F("Groß");
        break;
    }
    case 122363:
    {
        returnValue = F("Groß Ammensleber Weg");
        break;
    }
    case 122364:
    {
        returnValue = F("Groß Aschen");
        break;
    }
    case 122365:
    {
        returnValue = F("Groß Aukens");
        break;
    }
    case 122366:
    {
        returnValue = F("Groß Bademeuseler Str.");
        break;
    }
    case 122367:
    {
        returnValue = F("Groß Bahrenfleth");
        break;
    }
    case 122368:
    {
        returnValue = F("Groß Barl");
        break;
    }
    case 122369:
    {
        returnValue = F("Groß Beelter Str.");
        break;
    }
    case 122370:
    {
        returnValue = F("Groß Behnitzer Str.");
        break;
    }
    case 122371:
    {
        returnValue = F("Groß Behnkenhagen");
        break;
    }
    case 122372:
    {
        returnValue = F("Groß Below");
        break;
    }
    case 122373:
    {
        returnValue = F("Groß Berßener Str.");
        break;
    }
    case 122374:
    {
        returnValue = F("Groß Biewender Str.");
        break;
    }
    case 122375:
    {
        returnValue = F("Groß Brebel");
        break;
    }
    case 122376:
    {
        returnValue = F("Groß Breese");
        break;
    }
    case 122377:
    {
        returnValue = F("Groß Breesen");
        break;
    }
    case 122378:
    {
        returnValue = F("Groß Breesener Str.");
        break;
    }
    case 122379:
    {
        returnValue = F("Groß Breeser Allee");
        break;
    }
    case 122380:
    {
        returnValue = F("Groß Breeser Weg");
        break;
    }
    case 122381:
    {
        returnValue = F("Groß Briesen");
        break;
    }
    case 122382:
    {
        returnValue = F("Groß Briesener Hauptstr.");
        break;
    }
    case 122383:
    {
        returnValue = F("Groß Brodersbyer Weg");
        break;
    }
    case 122384:
    {
        returnValue = F("Groß Brützer Str.");
        break;
    }
    case 122385:
    {
        returnValue = F("Groß Bünzow");
        break;
    }
    case 122386:
    {
        returnValue = F("Groß Charlottengroden");
        break;
    }
    case 122387:
    {
        returnValue = F("Groß Chüdener Chaussee");
        break;
    }
    case 122388:
    {
        returnValue = F("Groß Chüdener Weg");
        break;
    }
    case 122389:
    {
        returnValue = F("Groß Connhausen");
        break;
    }
    case 122390:
    {
        returnValue = F("Groß Deepen");
        break;
    }
    case 122391:
    {
        returnValue = F("Groß Döbberner Str.");
        break;
    }
    case 122392:
    {
        returnValue = F("Groß Dörgen");
        break;
    }
    case 122393:
    {
        returnValue = F("Groß Dübener Weg");
        break;
    }
    case 122394:
    {
        returnValue = F("Groß Eilshausen");
        break;
    }
    case 122395:
    {
        returnValue = F("Groß Eilstorf");
        break;
    }
    case 122396:
    {
        returnValue = F("Groß Eißel");
        break;
    }
    case 122397:
    {
        returnValue = F("Groß Ellenberg");
        break;
    }
    case 122398:
    {
        returnValue = F("Groß Erlach");
        break;
    }
    case 122399:
    {
        returnValue = F("Groß Floyen");
        break;
    }
    case 122400:
    {
        returnValue = F("Groß Flöte");
        break;
    }
    case 122401:
    {
        returnValue = F("Groß Fredenwalder Weg");
        break;
    }
    case 122402:
    {
        returnValue = F("Groß Gerstedt");
        break;
    }
    case 122403:
    {
        returnValue = F("Groß Gischau");
        break;
    }
    case 122404:
    {
        returnValue = F("Groß Gischow");
        break;
    }
    case 122405:
    {
        returnValue = F("Groß Grabenstedt");
        break;
    }
    case 122406:
    {
        returnValue = F("Groß Grimberger Weg");
        break;
    }
    case 122407:
    {
        returnValue = F("Groß Haßlower Str.");
        break;
    }
    case 122408:
    {
        returnValue = F("Groß Hehlener Kirchweg");
        break;
    }
    case 122409:
    {
        returnValue = F("Groß Helle");
        break;
    }
    case 122410:
    {
        returnValue = F("Groß Heller Str.");
        break;
    }
    case 122411:
    {
        returnValue = F("Groß Hohn");
        break;
    }
    case 122412:
    {
        returnValue = F("Groß Hundorfer Weg");
        break;
    }
    case 122413:
    {
        returnValue = F("Groß Husums");
        break;
    }
    case 122414:
    {
        returnValue = F("Groß Hutberger Str.");
        break;
    }
    case 122415:
    {
        returnValue = F("Groß Ippensen");
        break;
    }
    case 122416:
    {
        returnValue = F("Groß Jasedow");
        break;
    }
    case 122417:
    {
        returnValue = F("Groß Kampen");
        break;
    }
    case 122418:
    {
        returnValue = F("Groß Kienitzer Dorfstr.");
        break;
    }
    case 122419:
    {
        returnValue = F("Groß Kienitzer Landstr.");
        break;
    }
    case 122420:
    {
        returnValue = F("Groß Kienitzer Weg");
        break;
    }
    case 122421:
    {
        returnValue = F("Groß Kubbelkow-Dorfstr.");
        break;
    }
    case 122422:
    {
        returnValue = F("Groß Kubitz");
        break;
    }
    case 122423:
    {
        returnValue = F("Groß Kölpin");
        break;
    }
    case 122424:
    {
        returnValue = F("Groß Köriser Str.");
        break;
    }
    case 122425:
    {
        returnValue = F("Groß Köriser Weg");
        break;
    }
    case 122426:
    {
        returnValue = F("Groß Köthel");
        break;
    }
    case 122427:
    {
        returnValue = F("Groß Lehmhagener Dorfstr.");
        break;
    }
    case 122428:
    {
        returnValue = F("Groß Lessen");
        break;
    }
    case 122429:
    {
        returnValue = F("Groß Liedener Marsch");
        break;
    }
    case 122430:
    {
        returnValue = F("Groß Liedener Str.");
        break;
    }
    case 122431:
    {
        returnValue = F("Groß Liederner Str.");
        break;
    }
    case 122432:
    {
        returnValue = F("Groß Luckower Str.");
        break;
    }
    case 122433:
    {
        returnValue = F("Groß Lujaer Str.");
        break;
    }
    case 122434:
    {
        returnValue = F("Groß Lunow");
        break;
    }
    case 122435:
    {
        returnValue = F("Groß Lüdershäger Weg");
        break;
    }
    case 122436:
    {
        returnValue = F("Groß Lüsewitzer Weg");
        break;
    }
    case 122437:
    {
        returnValue = F("Groß Mehßower Str.");
        break;
    }
    case 122438:
    {
        returnValue = F("Groß Methling");
        break;
    }
    case 122439:
    {
        returnValue = F("Groß Miltzow");
        break;
    }
    case 122440:
    {
        returnValue = F("Groß Muckrow");
        break;
    }
    case 122441:
    {
        returnValue = F("Groß Neudorfer Weg");
        break;
    }
    case 122442:
    {
        returnValue = F("Groß Neuendorfer Landweg");
        break;
    }
    case 122443:
    {
        returnValue = F("Groß Neuwerk");
        break;
    }
    case 122444:
    {
        returnValue = F("Groß Nieköhr");
        break;
    }
    case 122445:
    {
        returnValue = F("Groß Nienhäger Str.");
        break;
    }
    case 122446:
    {
        returnValue = F("Groß Ollacker");
        break;
    }
    case 122447:
    {
        returnValue = F("Groß Oßniger Str.");
        break;
    }
    case 122448:
    {
        returnValue = F("Groß Parin");
        break;
    }
    case 122449:
    {
        returnValue = F("Groß Pretzier");
        break;
    }
    case 122450:
    {
        returnValue = F("Groß Quassow");
        break;
    }
    case 122451:
    {
        returnValue = F("Groß Quassower Weg");
        break;
    }
    case 122452:
    {
        returnValue = F("Groß Rakow");
        break;
    }
    case 122453:
    {
        returnValue = F("Groß Rietzer Str.");
        break;
    }
    case 122454:
    {
        returnValue = F("Groß Ringmar");
        break;
    }
    case 122455:
    {
        returnValue = F("Groß Rünzer Str.");
        break;
    }
    case 122456:
    {
        returnValue = F("Groß Scheep");
        break;
    }
    case 122457:
    {
        returnValue = F("Groß Schlebach");
        break;
    }
    case 122458:
    {
        returnValue = F("Groß Schulzendorfer Str.");
        break;
    }
    case 122459:
    {
        returnValue = F("Groß Schönfeld");
        break;
    }
    case 122460:
    {
        returnValue = F("Groß Sommerbeck");
        break;
    }
    case 122461:
    {
        returnValue = F("Groß Sonnendeich");
        break;
    }
    case 122462:
    {
        returnValue = F("Groß Sterneberger Str.");
        break;
    }
    case 122463:
    {
        returnValue = F("Groß Stresow");
        break;
    }
    case 122464:
    {
        returnValue = F("Groß Stöckheimer Weg");
        break;
    }
    case 122465:
    {
        returnValue = F("Groß Süstedter Weg");
        break;
    }
    case 122466:
    {
        returnValue = F("Groß Tessin");
        break;
    }
    case 122467:
    {
        returnValue = F("Groß Thun");
        break;
    }
    case 122468:
    {
        returnValue = F("Groß Thurower Str.");
        break;
    }
    case 122469:
    {
        returnValue = F("Groß Toitin");
        break;
    }
    case 122470:
    {
        returnValue = F("Groß Vahlberger Str.");
        break;
    }
    case 122471:
    {
        returnValue = F("Groß Viert");
        break;
    }
    case 122472:
    {
        returnValue = F("Groß Väter");
        break;
    }
    case 122473:
    {
        returnValue = F("Groß Walmstorfer Str.");
        break;
    }
    case 122474:
    {
        returnValue = F("Groß Warfen");
        break;
    }
    case 122475:
    {
        returnValue = F("Groß Wasserburger Str.");
        break;
    }
    case 122476:
    {
        returnValue = F("Groß Weller Str.");
        break;
    }
    case 122477:
    {
        returnValue = F("Groß Weller Weg");
        break;
    }
    case 122478:
    {
        returnValue = F("Groß Welziner Str.");
        break;
    }
    case 122479:
    {
        returnValue = F("Groß Werdum");
        break;
    }
    case 122480:
    {
        returnValue = F("Groß Wieblitz");
        break;
    }
    case 122481:
    {
        returnValue = F("Groß Wisch");
        break;
    }
    case 122482:
    {
        returnValue = F("Groß Wokern Ausbau");
        break;
    }
    case 122483:
    {
        returnValue = F("Groß Woltersdorfer Damm");
        break;
    }
    case 122484:
    {
        returnValue = F("Groß Woltersdorfer Weg");
        break;
    }
    case 122485:
    {
        returnValue = F("Groß Wulfshorst");
        break;
    }
    case 122486:
    {
        returnValue = F("Groß Wüstenfelder Str.");
        break;
    }
    case 122487:
    {
        returnValue = F("Groß Zieschter Dorfstr.");
        break;
    }
    case 122488:
    {
        returnValue = F("Groß-Bieberauer Str.");
        break;
    }
    case 122489:
    {
        returnValue = F("Groß-Breitenbach");
        break;
    }
    case 122490:
    {
        returnValue = F("Groß-Bremsburg");
        break;
    }
    case 122491:
    {
        returnValue = F("Groß-Buchholzer-Str.");
        break;
    }
    case 122492:
    {
        returnValue = F("Groß-Döhrener-Str.");
        break;
    }
    case 122493:
    {
        returnValue = F("Groß-Eichener Weg");
        break;
    }
    case 122494:
    {
        returnValue = F("Groß-Eichener-Str.");
        break;
    }
    case 122495:
    {
        returnValue = F("Groß-Endebrocks-Kamp");
        break;
    }
    case 122496:
    {
        returnValue = F("Groß-Erkenschwicker-Str.");
        break;
    }
    case 122497:
    {
        returnValue = F("Groß-Feldaer-Str.");
        break;
    }
    case 122498:
    {
        returnValue = F("Groß-Gerauer Str.");
        break;
    }
    case 122499:
    {
        returnValue = F("Groß-Gerauer-Str.");
        break;
    }
    case 122500:
    {
        returnValue = F("Groß-Hasenbach-Str.");
        break;
    }
    case 122501:
    {
        returnValue = F("Groß-Hehlener-Weg");
        break;
    }
    case 122502:
    {
        returnValue = F("Groß-Lück");
        break;
    }
    case 122503:
    {
        returnValue = F("Groß-Midlumer Ring");
        break;
    }
    case 122504:
    {
        returnValue = F("Groß-Neidaer Str.");
        break;
    }
    case 122505:
    {
        returnValue = F("Groß-Neidaer-Str.");
        break;
    }
    case 122506:
    {
        returnValue = F("Groß-Ott-Str.");
        break;
    }
    case 122507:
    {
        returnValue = F("Groß-Quern");
        break;
    }
    case 122508:
    {
        returnValue = F("Groß-Rohrheimer-Str.");
        break;
    }
    case 122509:
    {
        returnValue = F("Groß-Sabiner-Ring");
        break;
    }
    case 122510:
    {
        returnValue = F("Groß-Santersleber-Str.");
        break;
    }
    case 122511:
    {
        returnValue = F("Groß-Schönebecker Str.");
        break;
    }
    case 122512:
    {
        returnValue = F("Groß-Siedlung");
        break;
    }
    case 122513:
    {
        returnValue = F("Groß-Strehlitzer-Weg");
        break;
    }
    case 122514:
    {
        returnValue = F("Groß-Umstädter Str.");
        break;
    }
    case 122515:
    {
        returnValue = F("Groß-Umstädter Straßé");
        break;
    }
    case 122516:
    {
        returnValue = F("Groß-Umstädter Weg");
        break;
    }
    case 122517:
    {
        returnValue = F("Groß-Umstädter-Str.");
        break;
    }
    case 122518:
    {
        returnValue = F("Groß-Wartenberger Str.");
        break;
    }
    case 122519:
    {
        returnValue = F("Groß-Ziethener Str.");
        break;
    }
    case 122520:
    {
        returnValue = F("Groß-Ziethener Weg");
        break;
    }
    case 122521:
    {
        returnValue = F("Groß-Zimmerner Grenzschneise");
        break;
    }
    case 122522:
    {
        returnValue = F("Groß-Zimmerner Str.");
        break;
    }
    case 122523:
    {
        returnValue = F("Groß-Zimmerner-Str.");
        break;
    }
    case 122524:
    {
        returnValue = F("Groß-von-Trockau-Platz");
        break;
    }
    case 122525:
    {
        returnValue = F("Groß-von-Trockau-Str.");
        break;
    }
    case 122526:
    {
        returnValue = F("Großacker");
        break;
    }
    case 122527:
    {
        returnValue = F("Großackerweg");
        break;
    }
    case 122528:
    {
        returnValue = F("Großaibacherforst");
        break;
    }
    case 122529:
    {
        returnValue = F("Großaich");
        break;
    }
    case 122530:
    {
        returnValue = F("Großaigner Str.");
        break;
    }
    case 122531:
    {
        returnValue = F("Großaitinger Str.");
        break;
    }
    case 122532:
    {
        returnValue = F("Großaitinger Weg");
        break;
    }
    case 122533:
    {
        returnValue = F("Großallmendweg");
        break;
    }
    case 122534:
    {
        returnValue = F("Großallmerspanner Weg");
        break;
    }
    case 122535:
    {
        returnValue = F("Großalmeroder Str.");
        break;
    }
    case 122536:
    {
        returnValue = F("Großaltdorfer Str.");
        break;
    }
    case 122537:
    {
        returnValue = F("Großaltenstädter Str.");
        break;
    }
    case 122538:
    {
        returnValue = F("Großaspacher Str.");
        break;
    }
    case 122539:
    {
        returnValue = F("Großbachstr.");
        break;
    }
    case 122540:
    {
        returnValue = F("Großbardauer Hauptstr.");
        break;
    }
    case 122541:
    {
        returnValue = F("Großbardauer Str.");
        break;
    }
    case 122542:
    {
        returnValue = F("Großbarnim");
        break;
    }
    case 122543:
    {
        returnValue = F("Großbayerstr.");
        break;
    }
    case 122544:
    {
        returnValue = F("Großbeerener Landstr.");
        break;
    }
    case 122545:
    {
        returnValue = F("Großbeerener Str.");
        break;
    }
    case 122546:
    {
        returnValue = F("Großbeerener Weg");
        break;
    }
    case 122547:
    {
        returnValue = F("Großbeerenstr.");
        break;
    }
    case 122548:
    {
        returnValue = F("Großbellhofener Hauptstr.");
        break;
    }
    case 122549:
    {
        returnValue = F("Großberger Weg");
        break;
    }
    case 122550:
    {
        returnValue = F("Großberghausen");
        break;
    }
    case 122551:
    {
        returnValue = F("Großberghauser Str.");
        break;
    }
    case 122552:
    {
        returnValue = F("Großberghofener Str.");
        break;
    }
    case 122553:
    {
        returnValue = F("Großbergweg");
        break;
    }
    case 122554:
    {
        returnValue = F("Großbettenrain");
        break;
    }
    case 122555:
    {
        returnValue = F("Großbettlinger Str.");
        break;
    }
    case 122556:
    {
        returnValue = F("Großbliersbach");
        break;
    }
    case 122557:
    {
        returnValue = F("Großblöcken");
        break;
    }
    case 122558:
    {
        returnValue = F("Großbocka");
        break;
    }
    case 122559:
    {
        returnValue = F("Großbockaer Str.");
        break;
    }
    case 122560:
    {
        returnValue = F("Großbodunger Str.");
        break;
    }
    case 122561:
    {
        returnValue = F("Großbothener Str.");
        break;
    }
    case 122562:
    {
        returnValue = F("Großbottwarer Allee");
        break;
    }
    case 122563:
    {
        returnValue = F("Großbottwarer Str.");
        break;
    }
    case 122564:
    {
        returnValue = F("Großboßlerweg");
        break;
    }
    case 122565:
    {
        returnValue = F("Großbraunshain");
        break;
    }
    case 122566:
    {
        returnValue = F("Großbreitenbacher Str.");
        break;
    }
    case 122567:
    {
        returnValue = F("Großbrembacher Str.");
        break;
    }
    case 122568:
    {
        returnValue = F("Großbruch");
        break;
    }
    case 122569:
    {
        returnValue = F("Großbrucher Str.");
        break;
    }
    case 122570:
    {
        returnValue = F("Großbrunner Str.");
        break;
    }
    case 122571:
    {
        returnValue = F("Großbrunnertal");
        break;
    }
    case 122572:
    {
        returnValue = F("Großbrüchtersche Str.");
        break;
    }
    case 122573:
    {
        returnValue = F("Großbucher Str.");
        break;
    }
    case 122574:
    {
        returnValue = F("Großburgwedeler Str.");
        break;
    }
    case 122575:
    {
        returnValue = F("Großburschlaer Str.");
        break;
    }
    case 122576:
    {
        returnValue = F("Großburschlaer Weg");
        break;
    }
    case 122577:
    {
        returnValue = F("Großbärnbacher Str.");
        break;
    }
    case 122578:
    {
        returnValue = F("Großbüchlberg");
        break;
    }
    case 122579:
    {
        returnValue = F("Großbüchlberger Str.");
        break;
    }
    case 122580:
    {
        returnValue = F("Großbühl");
        break;
    }
    case 122581:
    {
        returnValue = F("Großbühndstr.");
        break;
    }
    case 122582:
    {
        returnValue = F("Großbüllesheimer Str.");
        break;
    }
    case 122583:
    {
        returnValue = F("Großbütteler Weg");
        break;
    }
    case 122584:
    {
        returnValue = F("Großcomburger Weg");
        break;
    }
    case 122585:
    {
        returnValue = F("Großdalziger Str.");
        break;
    }
    case 122586:
    {
        returnValue = F("Großdehsaer Str.");
        break;
    }
    case 122587:
    {
        returnValue = F("Großdeubener Weg");
        break;
    }
    case 122588:
    {
        returnValue = F("Großdittmannsdorfer Str.");
        break;
    }
    case 122589:
    {
        returnValue = F("Großdittmannsdorfer Weg");
        break;
    }
    case 122590:
    {
        returnValue = F("Großdobritzer Str.");
        break;
    }
    case 122591:
    {
        returnValue = F("Großdorf");
        break;
    }
    case 122592:
    {
        returnValue = F("Großdorfer Str.");
        break;
    }
    case 122593:
    {
        returnValue = F("Großdraxdorf");
        break;
    }
    case 122594:
    {
        returnValue = F("Großdrebnitzer Str.");
        break;
    }
    case 122595:
    {
        returnValue = F("Großdresbach");
        break;
    }
    case 122596:
    {
        returnValue = F("Großdubrauer Str.");
        break;
    }
    case 122597:
    {
        returnValue = F("Große Achterstr.");
        break;
    }
    case 122598:
    {
        returnValue = F("Große Albanusstr.");
        break;
    }
    case 122599:
    {
        returnValue = F("Große Allee");
        break;
    }
    case 122600:
    {
        returnValue = F("Große Alleestr.");
        break;
    }
    case 122601:
    {
        returnValue = F("Große Amtsgasse");
        break;
    }
    case 122602:
    {
        returnValue = F("Große Arche");
        break;
    }
    case 122603:
    {
        returnValue = F("Große Au");
        break;
    }
    case 122604:
    {
        returnValue = F("Große Austr.");
        break;
    }
    case 122605:
    {
        returnValue = F("Große Bachgasse");
        break;
    }
    case 122606:
    {
        returnValue = F("Große Bachstr.");
        break;
    }
    case 122607:
    {
        returnValue = F("Große Bachwiesen");
        break;
    }
    case 122608:
    {
        returnValue = F("Große Badergasse");
        break;
    }
    case 122609:
    {
        returnValue = F("Große Bahnhofsstr.");
        break;
    }
    case 122610:
    {
        returnValue = F("Große Bahnhofstr.");
        break;
    }
    case 122611:
    {
        returnValue = F("Große Balje");
        break;
    }
    case 122612:
    {
        returnValue = F("Große Barnte");
        break;
    }
    case 122613:
    {
        returnValue = F("Große Battauner Str.");
        break;
    }
    case 122614:
    {
        returnValue = F("Große Bauerngasse");
        break;
    }
    case 122615:
    {
        returnValue = F("Große Baustr.");
        break;
    }
    case 122616:
    {
        returnValue = F("Große Beerbergstr.");
        break;
    }
    case 122617:
    {
        returnValue = F("Große Belower Furt");
        break;
    }
    case 122618:
    {
        returnValue = F("Große Bergbreite");
        break;
    }
    case 122619:
    {
        returnValue = F("Große Bergstr.");
        break;
    }
    case 122620:
    {
        returnValue = F("Große Bettna");
        break;
    }
    case 122621:
    {
        returnValue = F("Große Biergasse");
        break;
    }
    case 122622:
    {
        returnValue = F("Große Binde");
        break;
    }
    case 122623:
    {
        returnValue = F("Große Binsachstr.");
        break;
    }
    case 122624:
    {
        returnValue = F("Große Bleiche");
        break;
    }
    case 122625:
    {
        returnValue = F("Große Bodestr.");
        break;
    }
    case 122626:
    {
        returnValue = F("Große Borgstede");
        break;
    }
    case 122627:
    {
        returnValue = F("Große Braugasse");
        break;
    }
    case 122628:
    {
        returnValue = F("Große Breite");
        break;
    }
    case 122629:
    {
        returnValue = F("Große Bremke");
        break;
    }
    case 122630:
    {
        returnValue = F("Große Brinkstr.");
        break;
    }
    case 122631:
    {
        returnValue = F("Große Bruchstr.");
        break;
    }
    case 122632:
    {
        returnValue = F("Große Brunnengasse");
        break;
    }
    case 122633:
    {
        returnValue = F("Große Brunnenstr.");
        break;
    }
    case 122634:
    {
        returnValue = F("Große Brücke");
        break;
    }
    case 122635:
    {
        returnValue = F("Große Brückenstr.");
        break;
    }
    case 122636:
    {
        returnValue = F("Große Brüdergasse");
        break;
    }
    case 122637:
    {
        returnValue = F("Große Brühl");
        break;
    }
    case 122638:
    {
        returnValue = F("Große Burggasse");
        break;
    }
    case 122639:
    {
        returnValue = F("Große Burgstr.");
        break;
    }
    case 122640:
    {
        returnValue = F("Große Busch");
        break;
    }
    case 122641:
    {
        returnValue = F("Große Dammstr.");
        break;
    }
    case 122642:
    {
        returnValue = F("Große Danneddelstr.");
        break;
    }
    case 122643:
    {
        returnValue = F("Große Dechaneistr.");
        break;
    }
    case 122644:
    {
        returnValue = F("Große Deichstr.");
        break;
    }
    case 122645:
    {
        returnValue = F("Große Dollenstr.");
        break;
    }
    case 122646:
    {
        returnValue = F("Große Domsfreiheit");
        break;
    }
    case 122647:
    {
        returnValue = F("Große Dorfstr.");
        break;
    }
    case 122648:
    {
        returnValue = F("Große Dörnen");
        break;
    }
    case 122649:
    {
        returnValue = F("Große Ecke");
        break;
    }
    case 122650:
    {
        returnValue = F("Große Ecker");
        break;
    }
    case 122651:
    {
        returnValue = F("Große Egert");
        break;
    }
    case 122652:
    {
        returnValue = F("Große Egge");
        break;
    }
    case 122653:
    {
        returnValue = F("Große Enggasse");
        break;
    }
    case 122654:
    {
        returnValue = F("Große Erbsengasse");
        break;
    }
    case 122655:
    {
        returnValue = F("Große Erleninsel");
        break;
    }
    case 122656:
    {
        returnValue = F("Große Ernte Str.");
        break;
    }
    case 122657:
    {
        returnValue = F("Große Esch");
        break;
    }
    case 122658:
    {
        returnValue = F("Große Eschstr.");
        break;
    }
    case 122659:
    {
        returnValue = F("Große Eulenpfütz");
        break;
    }
    case 122660:
    {
        returnValue = F("Große Eßmerstr.");
        break;
    }
    case 122661:
    {
        returnValue = F("Große Fahnenstr.");
        break;
    }
    case 122662:
    {
        returnValue = F("Große Feld");
        break;
    }
    case 122663:
    {
        returnValue = F("Große Feldstr.");
        break;
    }
    case 122664:
    {
        returnValue = F("Große Fenne");
        break;
    }
    case 122665:
    {
        returnValue = F("Große Fischergasse");
        break;
    }
    case 122666:
    {
        returnValue = F("Große Fischerstr.");
        break;
    }
    case 122667:
    {
        returnValue = F("Große Fischgasse");
        break;
    }
    case 122668:
    {
        returnValue = F("Große Flage");
        break;
    }
    case 122669:
    {
        returnValue = F("Große Flurstr.");
        break;
    }
    case 122670:
    {
        returnValue = F("Große Flügelschneise");
        break;
    }
    case 122671:
    {
        returnValue = F("Große Forststr.");
        break;
    }
    case 122672:
    {
        returnValue = F("Große Freesenweg");
        break;
    }
    case 122673:
    {
        returnValue = F("Große Freiheit");
        break;
    }
    case 122674:
    {
        returnValue = F("Große Freizeit");
        break;
    }
    case 122675:
    {
        returnValue = F("Große Friedhofstr.");
        break;
    }
    case 122676:
    {
        returnValue = F("Große Fuhren");
        break;
    }
    case 122677:
    {
        returnValue = F("Große Furth");
        break;
    }
    case 122678:
    {
        returnValue = F("Große Fährgasse");
        break;
    }
    case 122679:
    {
        returnValue = F("Große Gabelstr.");
        break;
    }
    case 122680:
    {
        returnValue = F("Große Gailergasse");
        break;
    }
    case 122681:
    {
        returnValue = F("Große Gartenstr.");
        break;
    }
    case 122682:
    {
        returnValue = F("Große Gasse");
        break;
    }
    case 122683:
    {
        returnValue = F("Große Gaste");
        break;
    }
    case 122684:
    {
        returnValue = F("Große Gaß");
        break;
    }
    case 122685:
    {
        returnValue = F("Große Gebind");
        break;
    }
    case 122686:
    {
        returnValue = F("Große Geest");
        break;
    }
    case 122687:
    {
        returnValue = F("Große Grabengasse");
        break;
    }
    case 122688:
    {
        returnValue = F("Große Graue");
        break;
    }
    case 122689:
    {
        returnValue = F("Große Greifengasse");
        break;
    }
    case 122690:
    {
        returnValue = F("Große Greven Weg");
        break;
    }
    case 122691:
    {
        returnValue = F("Große Gsteinet Str.");
        break;
    }
    case 122692:
    {
        returnValue = F("Große Gänseweide");
        break;
    }
    case 122693:
    {
        returnValue = F("Große Gärten");
        break;
    }
    case 122694:
    {
        returnValue = F("Große Gärtnerstr.");
        break;
    }
    case 122695:
    {
        returnValue = F("Große Haar");
        break;
    }
    case 122696:
    {
        returnValue = F("Große Hagenstr.");
        break;
    }
    case 122697:
    {
        returnValue = F("Große Hainstr.");
        break;
    }
    case 122698:
    {
        returnValue = F("Große Halde Korb");
        break;
    }
    case 122699:
    {
        returnValue = F("Große Hansawiese");
        break;
    }
    case 122700:
    {
        returnValue = F("Große Hardewiek");
        break;
    }
    case 122701:
    {
        returnValue = F("Große Hardtweg");
        break;
    }
    case 122702:
    {
        returnValue = F("Große Hartlage");
        break;
    }
    case 122703:
    {
        returnValue = F("Große Hasengasse");
        break;
    }
    case 122704:
    {
        returnValue = F("Große Hauptschneise");
        break;
    }
    case 122705:
    {
        returnValue = F("Große Hecke");
        break;
    }
    case 122706:
    {
        returnValue = F("Große Heerstr.");
        break;
    }
    case 122707:
    {
        returnValue = F("Große Heide");
        break;
    }
    case 122708:
    {
        returnValue = F("Große Helde");
        break;
    }
    case 122709:
    {
        returnValue = F("Große Hellmer");
        break;
    }
    case 122710:
    {
        returnValue = F("Große Himmelsgasse");
        break;
    }
    case 122711:
    {
        returnValue = F("Große Hintergasse");
        break;
    }
    case 122712:
    {
        returnValue = F("Große Hinterlohne");
        break;
    }
    case 122713:
    {
        returnValue = F("Große Hinterstr.");
        break;
    }
    case 122714:
    {
        returnValue = F("Große Hirschseiters");
        break;
    }
    case 122715:
    {
        returnValue = F("Große Hoellert");
        break;
    }
    case 122716:
    {
        returnValue = F("Große Hohe Str.");
        break;
    }
    case 122717:
    {
        returnValue = F("Große Hohl");
        break;
    }
    case 122718:
    {
        returnValue = F("Große Hohle");
        break;
    }
    case 122719:
    {
        returnValue = F("Große Hohle Gasse");
        break;
    }
    case 122720:
    {
        returnValue = F("Große Horststr.");
        break;
    }
    case 122721:
    {
        returnValue = F("Große Hub");
        break;
    }
    case 122722:
    {
        returnValue = F("Große Hufen");
        break;
    }
    case 122723:
    {
        returnValue = F("Große Höhe");
        break;
    }
    case 122724:
    {
        returnValue = F("Große Höhle");
        break;
    }
    case 122725:
    {
        returnValue = F("Große Hörne");
        break;
    }
    case 122726:
    {
        returnValue = F("Große Isel");
        break;
    }
    case 122727:
    {
        returnValue = F("Große Jahnstr.");
        break;
    }
    case 122728:
    {
        returnValue = F("Große Jüch");
        break;
    }
    case 122729:
    {
        returnValue = F("Große Kalandstr.");
        break;
    }
    case 122730:
    {
        returnValue = F("Große Kamp");
        break;
    }
    case 122731:
    {
        returnValue = F("Große Kampstr.");
        break;
    }
    case 122732:
    {
        returnValue = F("Große Kapellenstr.");
        break;
    }
    case 122733:
    {
        returnValue = F("Große Kappel");
        break;
    }
    case 122734:
    {
        returnValue = F("Große Kartengasse");
        break;
    }
    case 122735:
    {
        returnValue = F("Große Kasematten");
        break;
    }
    case 122736:
    {
        returnValue = F("Große Kaut");
        break;
    }
    case 122737:
    {
        returnValue = F("Große Keh");
        break;
    }
    case 122738:
    {
        returnValue = F("Große Kienheide");
        break;
    }
    case 122739:
    {
        returnValue = F("Große Kirchenstr.");
        break;
    }
    case 122740:
    {
        returnValue = F("Große Kirchgasse");
        break;
    }
    case 122741:
    {
        returnValue = F("Große Kirchreihe");
        break;
    }
    case 122742:
    {
        returnValue = F("Große Kirchstr.");
        break;
    }
    case 122743:
    {
        returnValue = F("Große Kirmes");
        break;
    }
    case 122744:
    {
        returnValue = F("Große Kirschallee");
        break;
    }
    case 122745:
    {
        returnValue = F("Große Klanhorst");
        break;
    }
    case 122746:
    {
        returnValue = F("Große Klappergasse");
        break;
    }
    case 122747:
    {
        returnValue = F("Große Klausburg");
        break;
    }
    case 122748:
    {
        returnValue = F("Große Klinge");
        break;
    }
    case 122749:
    {
        returnValue = F("Große Klingergasse");
        break;
    }
    case 122750:
    {
        returnValue = F("Große Klostergasse");
        break;
    }
    case 122751:
    {
        returnValue = F("Große Knickhäger Str.");
        break;
    }
    case 122752:
    {
        returnValue = F("Große Koppel");
        break;
    }
    case 122753:
    {
        returnValue = F("Große Krauthöferstr.");
        break;
    }
    case 122754:
    {
        returnValue = F("Große Kreisgasse");
        break;
    }
    case 122755:
    {
        returnValue = F("Große Kremper Str.");
        break;
    }
    case 122756:
    {
        returnValue = F("Große Kreuzstr.");
        break;
    }
    case 122757:
    {
        returnValue = F("Große Kreuzung");
        break;
    }
    case 122758:
    {
        returnValue = F("Große Kuhstr.");
        break;
    }
    case 122759:
    {
        returnValue = F("Große Kuhtrift");
        break;
    }
    case 122760:
    {
        returnValue = F("Große Kuhweide");
        break;
    }
    case 122761:
    {
        returnValue = F("Große Kulmkestr.");
        break;
    }
    case 122762:
    {
        returnValue = F("Große Kummstr.");
        break;
    }
    case 122763:
    {
        returnValue = F("Große Köhlergasse");
        break;
    }
    case 122764:
    {
        returnValue = F("Große Laaber Radweg");
        break;
    }
    case 122765:
    {
        returnValue = F("Große Lache");
        break;
    }
    case 122766:
    {
        returnValue = F("Große Lachstr.");
        break;
    }
    case 122767:
    {
        returnValue = F("Große Lamprichte");
        break;
    }
    case 122768:
    {
        returnValue = F("Große Laue");
        break;
    }
    case 122769:
    {
        returnValue = F("Große Lehne");
        break;
    }
    case 122770:
    {
        returnValue = F("Große Leite");
        break;
    }
    case 122771:
    {
        returnValue = F("Große Lieth");
        break;
    }
    case 122772:
    {
        returnValue = F("Große Linie");
        break;
    }
    case 122773:
    {
        returnValue = F("Große Litt");
        break;
    }
    case 122774:
    {
        returnValue = F("Große Loge");
        break;
    }
    case 122775:
    {
        returnValue = F("Große Lohe");
        break;
    }
    case 122776:
    {
        returnValue = F("Große Lohne");
        break;
    }
    case 122777:
    {
        returnValue = F("Große Maingasse");
        break;
    }
    case 122778:
    {
        returnValue = F("Große Marktgasse");
        break;
    }
    case 122779:
    {
        returnValue = F("Große Marktstr.");
        break;
    }
    case 122780:
    {
        returnValue = F("Große Marsch");
        break;
    }
    case 122781:
    {
        returnValue = F("Große Marsch Süd");
        break;
    }
    case 122782:
    {
        returnValue = F("Große Maräne");
        break;
    }
    case 122783:
    {
        returnValue = F("Große Masch");
        break;
    }
    case 122784:
    {
        returnValue = F("Große Mauerstr.");
        break;
    }
    case 122785:
    {
        returnValue = F("Große Messergasse");
        break;
    }
    case 122786:
    {
        returnValue = F("Große Milower Str.");
        break;
    }
    case 122787:
    {
        returnValue = F("Große Minke");
        break;
    }
    case 122788:
    {
        returnValue = F("Große Mittel");
        break;
    }
    case 122789:
    {
        returnValue = F("Große Mittelstr.");
        break;
    }
    case 122790:
    {
        returnValue = F("Große Mittweidaer Str.");
        break;
    }
    case 122791:
    {
        returnValue = F("Große Moorstr.");
        break;
    }
    case 122792:
    {
        returnValue = F("Große Mühle");
        break;
    }
    case 122793:
    {
        returnValue = F("Große Mühlenstr.");
        break;
    }
    case 122794:
    {
        returnValue = F("Große Mühlenwallstr.");
        break;
    }
    case 122795:
    {
        returnValue = F("Große Mühlgasse");
        break;
    }
    case 122796:
    {
        returnValue = F("Große Mühlstr.");
        break;
    }
    case 122797:
    {
        returnValue = F("Große Münzenstr.");
        break;
    }
    case 122798:
    {
        returnValue = F("Große Neustr.");
        break;
    }
    case 122799:
    {
        returnValue = F("Große Nonnengasse");
        break;
    }
    case 122800:
    {
        returnValue = F("Große Nübelstr.");
        break;
    }
    case 122801:
    {
        returnValue = F("Große Oker");
        break;
    }
    case 122802:
    {
        returnValue = F("Große Ortstr.");
        break;
    }
    case 122803:
    {
        returnValue = F("Große Paaschburg");
        break;
    }
    case 122804:
    {
        returnValue = F("Große Pagenbergstr.");
        break;
    }
    case 122805:
    {
        returnValue = F("Große Parower Str.");
        break;
    }
    case 122806:
    {
        returnValue = F("Große Pfaffengasse");
        break;
    }
    case 122807:
    {
        returnValue = F("Große Pfarrgasse");
        break;
    }
    case 122808:
    {
        returnValue = F("Große Plankenlinie");
        break;
    }
    case 122809:
    {
        returnValue = F("Große Predigerstr.");
        break;
    }
    case 122810:
    {
        returnValue = F("Große Promenade");
        break;
    }
    case 122811:
    {
        returnValue = F("Große Quergasse");
        break;
    }
    case 122812:
    {
        returnValue = F("Große Querstr.");
        break;
    }
    case 122813:
    {
        returnValue = F("Große Rathausgasse");
        break;
    }
    case 122814:
    {
        returnValue = F("Große Ratje");
        break;
    }
    case 122815:
    {
        returnValue = F("Große Redder");
        break;
    }
    case 122816:
    {
        returnValue = F("Große Rehre");
        break;
    }
    case 122817:
    {
        returnValue = F("Große Reihe");
        break;
    }
    case 122818:
    {
        returnValue = F("Große Rheinstr.");
        break;
    }
    case 122819:
    {
        returnValue = F("Große Richtstatt");
        break;
    }
    case 122820:
    {
        returnValue = F("Große Rieder");
        break;
    }
    case 122821:
    {
        returnValue = F("Große Riehe");
        break;
    }
    case 122822:
    {
        returnValue = F("Große Riet");
        break;
    }
    case 122823:
    {
        returnValue = F("Große Ringstr.");
        break;
    }
    case 122824:
    {
        returnValue = F("Große Ritterstr.");
        break;
    }
    case 122825:
    {
        returnValue = F("Große Ritti");
        break;
    }
    case 122826:
    {
        returnValue = F("Große Rondellschneise");
        break;
    }
    case 122827:
    {
        returnValue = F("Große Rosenstr.");
        break;
    }
    case 122828:
    {
        returnValue = F("Große Rosmarinstr.");
        break;
    }
    case 122829:
    {
        returnValue = F("Große Roßbergstr.");
        break;
    }
    case 122830:
    {
        returnValue = F("Große Rurstr.");
        break;
    }
    case 122831:
    {
        returnValue = F("Große Sackgasse");
        break;
    }
    case 122832:
    {
        returnValue = F("Große Salzgasse");
        break;
    }
    case 122833:
    {
        returnValue = F("Große Salzstr.");
        break;
    }
    case 122834:
    {
        returnValue = F("Große Sandgewanne");
        break;
    }
    case 122835:
    {
        returnValue = F("Große Sankt-Ilsen-Str.");
        break;
    }
    case 122836:
    {
        returnValue = F("Große Schafheide");
        break;
    }
    case 122837:
    {
        returnValue = F("Große Schaftrift");
        break;
    }
    case 122838:
    {
        returnValue = F("Große Schanze");
        break;
    }
    case 122839:
    {
        returnValue = F("Große Scheeren");
        break;
    }
    case 122840:
    {
        returnValue = F("Große Schenkstr.");
        break;
    }
    case 122841:
    {
        returnValue = F("Große Schlinge");
        break;
    }
    case 122842:
    {
        returnValue = F("Große Schlucht");
        break;
    }
    case 122843:
    {
        returnValue = F("Große Schmiedestr.");
        break;
    }
    case 122844:
    {
        returnValue = F("Große Schmützstr.");
        break;
    }
    case 122845:
    {
        returnValue = F("Große Schnauder");
        break;
    }
    case 122846:
    {
        returnValue = F("Große Schulstr.");
        break;
    }
    case 122847:
    {
        returnValue = F("Große Schweiber");
        break;
    }
    case 122848:
    {
        returnValue = F("Große Seestr.");
        break;
    }
    case 122849:
    {
        returnValue = F("Große Seite");
        break;
    }
    case 122850:
    {
        returnValue = F("Große Siedlung");
        break;
    }
    case 122851:
    {
        returnValue = F("Große Sommerleite");
        break;
    }
    case 122852:
    {
        returnValue = F("Große Stavenstr.");
        break;
    }
    case 122853:
    {
        returnValue = F("Große Stedte");
        break;
    }
    case 122854:
    {
        returnValue = F("Große Stege");
        break;
    }
    case 122855:
    {
        returnValue = F("Große Steig");
        break;
    }
    case 122856:
    {
        returnValue = F("Große Steuer");
        break;
    }
    case 122857:
    {
        returnValue = F("Große Stiege");
        break;
    }
    case 122858:
    {
        returnValue = F("Große Str.");
        break;
    }
    case 122859:
    {
        returnValue = F("Große Stücke");
        break;
    }
    case 122860:
    {
        returnValue = F("Große Stücken");
        break;
    }
    case 122861:
    {
        returnValue = F("Große Sämergasse");
        break;
    }
    case 122862:
    {
        returnValue = F("Große Tannenstr.");
        break;
    }
    case 122863:
    {
        returnValue = F("Große Teichstr.");
        break;
    }
    case 122864:
    {
        returnValue = F("Große Teilung");
        break;
    }
    case 122865:
    {
        returnValue = F("Große Tiefe");
        break;
    }
    case 122866:
    {
        returnValue = F("Große Toft");
        break;
    }
    case 122867:
    {
        returnValue = F("Große Tonkuhle");
        break;
    }
    case 122868:
    {
        returnValue = F("Große Tredde");
        break;
    }
    case 122869:
    {
        returnValue = F("Große Trenk");
        break;
    }
    case 122870:
    {
        returnValue = F("Große Trift");
        break;
    }
    case 122871:
    {
        returnValue = F("Große Tweete");
        break;
    }
    case 122872:
    {
        returnValue = F("Große Twete");
        break;
    }
    case 122873:
    {
        returnValue = F("Große Twiete");
        break;
    }
    case 122874:
    {
        returnValue = F("Große Töpfergasse");
        break;
    }
    case 122875:
    {
        returnValue = F("Große Uferstr.");
        break;
    }
    case 122876:
    {
        returnValue = F("Große Venedig");
        break;
    }
    case 122877:
    {
        returnValue = F("Große Viehstr.");
        break;
    }
    case 122878:
    {
        returnValue = F("Große Voßstr.");
        break;
    }
    case 122879:
    {
        returnValue = F("Große Waldstr.");
        break;
    }
    case 122880:
    {
        returnValue = F("Große Waldwiese");
        break;
    }
    case 122881:
    {
        returnValue = F("Große Wallstr.");
        break;
    }
    case 122882:
    {
        returnValue = F("Große Wassergasse");
        break;
    }
    case 122883:
    {
        returnValue = F("Große Wasserpfortstr.");
        break;
    }
    case 122884:
    {
        returnValue = F("Große Wasserstr.");
        break;
    }
    case 122885:
    {
        returnValue = F("Große Weberstr.");
        break;
    }
    case 122886:
    {
        returnValue = F("Große Wehe");
        break;
    }
    case 122887:
    {
        returnValue = F("Große Weide");
        break;
    }
    case 122888:
    {
        returnValue = F("Große Weidengasse");
        break;
    }
    case 122889:
    {
        returnValue = F("Große Weilstr.");
        break;
    }
    case 122890:
    {
        returnValue = F("Große Weinbergstr.");
        break;
    }
    case 122891:
    {
        returnValue = F("Große Wendelstr.");
        break;
    }
    case 122892:
    {
        returnValue = F("Große Western Landwehr");
        break;
    }
    case 122893:
    {
        returnValue = F("Große Wiegardt");
        break;
    }
    case 122894:
    {
        returnValue = F("Große Wiekau");
        break;
    }
    case 122895:
    {
        returnValue = F("Große Wiese");
        break;
    }
    case 122896:
    {
        returnValue = F("Große Wiesen");
        break;
    }
    case 122897:
    {
        returnValue = F("Große Wiesenhau");
        break;
    }
    case 122898:
    {
        returnValue = F("Große Wildbahn");
        break;
    }
    case 122899:
    {
        returnValue = F("Große Windmühlengasse");
        break;
    }
    case 122900:
    {
        returnValue = F("Große Winkelstr.");
        break;
    }
    case 122901:
    {
        returnValue = F("Große Wittefelderort");
        break;
    }
    case 122902:
    {
        returnValue = F("Große Wolfgangstr.");
        break;
    }
    case 122903:
    {
        returnValue = F("Große Wolfstr.");
        break;
    }
    case 122904:
    {
        returnValue = F("Große Wollweberstr.");
        break;
    }
    case 122905:
    {
        returnValue = F("Große Worth");
        break;
    }
    case 122906:
    {
        returnValue = F("Große Zanggasse");
        break;
    }
    case 122907:
    {
        returnValue = F("Große Zeuthener Allee");
        break;
    }
    case 122908:
    {
        returnValue = F("Große Ziegelstr.");
        break;
    }
    case 122909:
    {
        returnValue = F("Große Äcker");
        break;
    }
    case 122910:
    {
        returnValue = F("Große Ölbruchstr.");
        break;
    }
    case 122911:
    {
        returnValue = F("Große-Geist-Str.");
        break;
    }
    case 122912:
    {
        returnValue = F("Große-Horst-Str.");
        break;
    }
    case 122913:
    {
        returnValue = F("Große-Mark-Weg");
        break;
    }
    case 122914:
    {
        returnValue = F("Große-Neue-Str.");
        break;
    }
    case 122915:
    {
        returnValue = F("Große-Oetringhaus-Str.");
        break;
    }
    case 122916:
    {
        returnValue = F("Große-Perdekamp-Str.");
        break;
    }
    case 122917:
    {
        returnValue = F("Große-Siebenbürgen-Str.");
        break;
    }
    case 122918:
    {
        returnValue = F("Große-Steine-Weg");
        break;
    }
    case 122919:
    {
        returnValue = F("Große-Wann");
        break;
    }
    case 122920:
    {
        returnValue = F("Große-Wiese");
        break;
    }
    case 122921:
    {
        returnValue = F("Große-Wiese-Str.");
        break;
    }
    case 122922:
    {
        returnValue = F("Große-Äcker-Str.");
        break;
    }
    case 122923:
    {
        returnValue = F("Großebersdorf");
        break;
    }
    case 122924:
    {
        returnValue = F("Großefehner Weg");
        break;
    }
    case 122925:
    {
        returnValue = F("Großehofstr.");
        break;
    }
    case 122926:
    {
        returnValue = F("Großeibstädter Str.");
        break;
    }
    case 122927:
    {
        returnValue = F("Großeichholzweg");
        break;
    }
    case 122928:
    {
        returnValue = F("Großeicholzweg");
        break;
    }
    case 122929:
    {
        returnValue = F("Großeislinger Str.");
        break;
    }
    case 122930:
    {
        returnValue = F("Großeledder");
        break;
    }
    case 122931:
    {
        returnValue = F("Großemast");
        break;
    }
    case 122932:
    {
        returnValue = F("Großemsener Weg");
        break;
    }
    case 122933:
    {
        returnValue = F("Großen Eckweg");
        break;
    }
    case 122934:
    {
        returnValue = F("Großen Haag");
        break;
    }
    case 122935:
    {
        returnValue = F("Großen Hundeschneise");
        break;
    }
    case 122936:
    {
        returnValue = F("Großen Sichten");
        break;
    }
    case 122937:
    {
        returnValue = F("Großen-Busecker Str.");
        break;
    }
    case 122938:
    {
        returnValue = F("Großen-Busecker-Str.");
        break;
    }
    case 122939:
    {
        returnValue = F("Großen-Lindener-Str.");
        break;
    }
    case 122940:
    {
        returnValue = F("Großenasper Weg");
        break;
    }
    case 122941:
    {
        returnValue = F("Großenast");
        break;
    }
    case 122942:
    {
        returnValue = F("Großenbacher Str.");
        break;
    }
    case 122943:
    {
        returnValue = F("Großenbacher Tor");
        break;
    }
    case 122944:
    {
        returnValue = F("Großenbaumer Str.");
        break;
    }
    case 122945:
    {
        returnValue = F("Großenberg");
        break;
    }
    case 122946:
    {
        returnValue = F("Großenbergweg");
        break;
    }
    case 122947:
    {
        returnValue = F("Großenberkener Str.");
        break;
    }
    case 122948:
    {
        returnValue = F("Großenbernberger Str.");
        break;
    }
    case 122949:
    {
        returnValue = F("Großenbornstr.");
        break;
    }
    case 122950:
    {
        returnValue = F("Großenbreden");
        break;
    }
    case 122951:
    {
        returnValue = F("Großenbucher Str.");
        break;
    }
    case 122952:
    {
        returnValue = F("Großenbucher Weg");
        break;
    }
    case 122953:
    {
        returnValue = F("Großenbuschstr.");
        break;
    }
    case 122954:
    {
        returnValue = F("Großenbüttel");
        break;
    }
    case 122955:
    {
        returnValue = F("Großendorf");
        break;
    }
    case 122956:
    {
        returnValue = F("Großendorfer Str.");
        break;
    }
    case 122957:
    {
        returnValue = F("Großendrescheid");
        break;
    }
    case 122958:
    {
        returnValue = F("Großenederer Str.");
        break;
    }
    case 122959:
    {
        returnValue = F("Großenederer Weg");
        break;
    }
    case 122960:
    {
        returnValue = F("Großenengliser Str.");
        break;
    }
    case 122961:
    {
        returnValue = F("Großengarten");
        break;
    }
    case 122962:
    {
        returnValue = F("Großenginger Str.");
        break;
    }
    case 122963:
    {
        returnValue = F("Großenhager Ring");
        break;
    }
    case 122964:
    {
        returnValue = F("Großenhainer Platz");
        break;
    }
    case 122965:
    {
        returnValue = F("Großenhainer Ring");
        break;
    }
    case 122966:
    {
        returnValue = F("Großenhainer Str.");
        break;
    }
    case 122967:
    {
        returnValue = F("Großenhainer Weg");
        break;
    }
    case 122968:
    {
        returnValue = F("Großenhalm");
        break;
    }
    case 122969:
    {
        returnValue = F("Großenheerser Grille");
        break;
    }
    case 122970:
    {
        returnValue = F("Großenheerser Ring");
        break;
    }
    case 122971:
    {
        returnValue = F("Großenheerser Str.");
        break;
    }
    case 122972:
    {
        returnValue = F("Großenheidorner Damm");
        break;
    }
    case 122973:
    {
        returnValue = F("Großenheidorner Str.");
        break;
    }
    case 122974:
    {
        returnValue = F("Großenhofer Str.");
        break;
    }
    case 122975:
    {
        returnValue = F("Großenhofer Weg");
        break;
    }
    case 122976:
    {
        returnValue = F("Großenhorster Weg");
        break;
    }
    case 122977:
    {
        returnValue = F("Großenhäuser Str.");
        break;
    }
    case 122978:
    {
        returnValue = F("Großenhül");
        break;
    }
    case 122979:
    {
        returnValue = F("Großenknetener Str.");
        break;
    }
    case 122980:
    {
        returnValue = F("Großenkneter Str.");
        break;
    }
    case 122981:
    {
        returnValue = F("Großenlüderer Weg");
        break;
    }
    case 122982:
    {
        returnValue = F("Großenmoor");
        break;
    }
    case 122983:
    {
        returnValue = F("Großenohlstr.");
        break;
    }
    case 122984:
    {
        returnValue = F("Großenordsweg");
        break;
    }
    case 122985:
    {
        returnValue = F("Großenrader Str.");
        break;
    }
    case 122986:
    {
        returnValue = F("Großenrieder Str.");
        break;
    }
    case 122987:
    {
        returnValue = F("Großenritter Str.");
        break;
    }
    case 122988:
    {
        returnValue = F("Großenroder Str.");
        break;
    }
    case 122989:
    {
        returnValue = F("Großenschwand");
        break;
    }
    case 122990:
    {
        returnValue = F("Großenschwandner Str.");
        break;
    }
    case 122991:
    {
        returnValue = F("Großenseer Str.");
        break;
    }
    case 122992:
    {
        returnValue = F("Großensees");
        break;
    }
    case 122993:
    {
        returnValue = F("Großenseeser Str.");
        break;
    }
    case 122994:
    {
        returnValue = F("Großensieker Weg");
        break;
    }
    case 122995:
    {
        returnValue = F("Großensieler Str.");
        break;
    }
    case 122996:
    {
        returnValue = F("Großenstein");
        break;
    }
    case 122997:
    {
        returnValue = F("Großensteiner Str.");
        break;
    }
    case 122998:
    {
        returnValue = F("Großensterzer Str.");
        break;
    }
    case 122999:
    {
        returnValue = F("Großentafter Str.");
        break;
    }
    case 123000:
    {
        returnValue = F("Großenviecht");
        break;
    }
    case 123001:
    {
        returnValue = F("Großenvörde");
        break;
    }
    case 123002:
    {
        returnValue = F("Großenweder Weg");
        break;
    }
    case 123003:
    {
        returnValue = F("Großenwiedener Weg");
        break;
    }
    case 123004:
    {
        returnValue = F("Großenwiehe-Ost");
        break;
    }
    case 123005:
    {
        returnValue = F("Großenwieher Str.");
        break;
    }
    case 123006:
    {
        returnValue = F("Großenwördener Str.");
        break;
    }
    case 123007:
    {
        returnValue = F("Großenzenried");
        break;
    }
    case 123008:
    {
        returnValue = F("Großenzhaldenweg");
        break;
    }
    case 123009:
    {
        returnValue = F("Großenzhaldeweg");
        break;
    }
    case 123010:
    {
        returnValue = F("Großenzhangweg");
        break;
    }
    case 123011:
    {
        returnValue = F("Großer Absbachweg");
        break;
    }
    case 123012:
    {
        returnValue = F("Großer Ackerweg");
        break;
    }
    case 123013:
    {
        returnValue = F("Großer Adlersteinweg");
        break;
    }
    case 123014:
    {
        returnValue = F("Großer Ameisenbuckweg");
        break;
    }
    case 123015:
    {
        returnValue = F("Großer Anger");
        break;
    }
    case 123016:
    {
        returnValue = F("Großer Anzenweg");
        break;
    }
    case 123017:
    {
        returnValue = F("Großer Audamm");
        break;
    }
    case 123018:
    {
        returnValue = F("Großer Backhorn");
        break;
    }
    case 123019:
    {
        returnValue = F("Großer Barnescherweg");
        break;
    }
    case 123020:
    {
        returnValue = F("Großer Bauernweg");
        break;
    }
    case 123021:
    {
        returnValue = F("Großer Berg");
        break;
    }
    case 123022:
    {
        returnValue = F("Großer Biergrund");
        break;
    }
    case 123023:
    {
        returnValue = F("Großer Blink");
        break;
    }
    case 123024:
    {
        returnValue = F("Großer Bogen");
        break;
    }
    case 123025:
    {
        returnValue = F("Großer Bohldamm");
        break;
    }
    case 123026:
    {
        returnValue = F("Großer Born");
        break;
    }
    case 123027:
    {
        returnValue = F("Großer Bramkamper Weg");
        break;
    }
    case 123028:
    {
        returnValue = F("Großer Brandenweg");
        break;
    }
    case 123029:
    {
        returnValue = F("Großer Brandring");
        break;
    }
    case 123030:
    {
        returnValue = F("Großer Brandweg");
        break;
    }
    case 123031:
    {
        returnValue = F("Großer Bruch");
        break;
    }
    case 123032:
    {
        returnValue = F("Großer Bruch Weg");
        break;
    }
    case 123033:
    {
        returnValue = F("Großer Bruchweg");
        break;
    }
    case 123034:
    {
        returnValue = F("Großer Brückengraben");
        break;
    }
    case 123035:
    {
        returnValue = F("Großer Brühl");
        break;
    }
    case 123036:
    {
        returnValue = F("Großer Buchenhorst");
        break;
    }
    case 123037:
    {
        returnValue = F("Großer Buchenweg");
        break;
    }
    case 123038:
    {
        returnValue = F("Großer Busch");
        break;
    }
    case 123039:
    {
        returnValue = F("Großer Böckel");
        break;
    }
    case 123040:
    {
        returnValue = F("Großer Büchel");
        break;
    }
    case 123041:
    {
        returnValue = F("Großer Damm");
        break;
    }
    case 123042:
    {
        returnValue = F("Großer Diebsteig");
        break;
    }
    case 123043:
    {
        returnValue = F("Großer Dieckkamp");
        break;
    }
    case 123044:
    {
        returnValue = F("Großer Doleweg");
        break;
    }
    case 123045:
    {
        returnValue = F("Großer Dorn");
        break;
    }
    case 123046:
    {
        returnValue = F("Großer Eichenweg");
        break;
    }
    case 123047:
    {
        returnValue = F("Großer Eichwerder");
        break;
    }
    case 123048:
    {
        returnValue = F("Großer Eiderkamp");
        break;
    }
    case 123049:
    {
        returnValue = F("Großer Elzpark");
        break;
    }
    case 123050:
    {
        returnValue = F("Großer Esch");
        break;
    }
    case 123051:
    {
        returnValue = F("Großer Eschenhorst");
        break;
    }
    case 123052:
    {
        returnValue = F("Großer Eschweg");
        break;
    }
    case 123053:
    {
        returnValue = F("Großer Eulenwaldweg");
        break;
    }
    case 123054:
    {
        returnValue = F("Großer Feldbergweg");
        break;
    }
    case 123055:
    {
        returnValue = F("Großer Feldweg");
        break;
    }
    case 123056:
    {
        returnValue = F("Großer Filzenweg");
        break;
    }
    case 123057:
    {
        returnValue = F("Großer Fleckenweg");
        break;
    }
    case 123058:
    {
        returnValue = F("Großer Fledderweg");
        break;
    }
    case 123059:
    {
        returnValue = F("Großer Flügel");
        break;
    }
    case 123060:
    {
        returnValue = F("Großer Forst");
        break;
    }
    case 123061:
    {
        returnValue = F("Großer Fährhof");
        break;
    }
    case 123062:
    {
        returnValue = F("Großer Gallberg");
        break;
    }
    case 123063:
    {
        returnValue = F("Großer Gang");
        break;
    }
    case 123064:
    {
        returnValue = F("Großer Garten");
        break;
    }
    case 123065:
    {
        returnValue = F("Großer Garten Weg");
        break;
    }
    case 123066:
    {
        returnValue = F("Großer Gartenweg");
        break;
    }
    case 123067:
    {
        returnValue = F("Großer Geisrain");
        break;
    }
    case 123068:
    {
        returnValue = F("Großer Glinder Berg");
        break;
    }
    case 123069:
    {
        returnValue = F("Großer Graben");
        break;
    }
    case 123070:
    {
        returnValue = F("Großer Graskamp");
        break;
    }
    case 123071:
    {
        returnValue = F("Großer Grund");
        break;
    }
    case 123072:
    {
        returnValue = F("Großer Hagen");
        break;
    }
    case 123073:
    {
        returnValue = F("Großer Hagener Weg");
        break;
    }
    case 123074:
    {
        returnValue = F("Großer Halken");
        break;
    }
    case 123075:
    {
        returnValue = F("Großer Hansberg");
        break;
    }
    case 123076:
    {
        returnValue = F("Großer Heideberg");
        break;
    }
    case 123077:
    {
        returnValue = F("Großer Heideweg");
        break;
    }
    case 123078:
    {
        returnValue = F("Großer Heidkamp");
        break;
    }
    case 123079:
    {
        returnValue = F("Großer Heidweg");
        break;
    }
    case 123080:
    {
        returnValue = F("Großer Heuweg");
        break;
    }
    case 123081:
    {
        returnValue = F("Großer Hilligenhof");
        break;
    }
    case 123082:
    {
        returnValue = F("Großer Hochhübelweg");
        break;
    }
    case 123083:
    {
        returnValue = F("Großer Hof");
        break;
    }
    case 123084:
    {
        returnValue = F("Großer Hookerweg");
        break;
    }
    case 123085:
    {
        returnValue = F("Großer Hoorn");
        break;
    }
    case 123086:
    {
        returnValue = F("Großer Hufeisenweg");
        break;
    }
    case 123087:
    {
        returnValue = F("Großer Höhenweg");
        break;
    }
    case 123088:
    {
        returnValue = F("Großer Kaisergrund");
        break;
    }
    case 123089:
    {
        returnValue = F("Großer Kamp");
        break;
    }
    case 123090:
    {
        returnValue = F("Großer Kamp West");
        break;
    }
    case 123091:
    {
        returnValue = F("Großer Katthagen");
        break;
    }
    case 123092:
    {
        returnValue = F("Großer Katzenpfad");
        break;
    }
    case 123093:
    {
        returnValue = F("Großer Katzenrain");
        break;
    }
    case 123094:
    {
        returnValue = F("Großer Kesselweg");
        break;
    }
    case 123095:
    {
        returnValue = F("Großer Kirchberg");
        break;
    }
    case 123096:
    {
        returnValue = F("Großer Kirchhof");
        break;
    }
    case 123097:
    {
        returnValue = F("Großer Kirchrain");
        break;
    }
    case 123098:
    {
        returnValue = F("Großer Kirchweg");
        break;
    }
    case 123099:
    {
        returnValue = F("Großer Klosterhof");
        break;
    }
    case 123100:
    {
        returnValue = F("Großer Knick");
        break;
    }
    case 123101:
    {
        returnValue = F("Großer Knickweg");
        break;
    }
    case 123102:
    {
        returnValue = F("Großer Kochelsberg");
        break;
    }
    case 123103:
    {
        returnValue = F("Großer Kraul");
        break;
    }
    case 123104:
    {
        returnValue = F("Großer Kreuzweg");
        break;
    }
    case 123105:
    {
        returnValue = F("Großer Kroll");
        break;
    }
    case 123106:
    {
        returnValue = F("Großer Krug");
        break;
    }
    case 123107:
    {
        returnValue = F("Großer Kuhbachweg");
        break;
    }
    case 123108:
    {
        returnValue = F("Großer Kuhgrund");
        break;
    }
    case 123109:
    {
        returnValue = F("Großer Kuhweg");
        break;
    }
    case 123110:
    {
        returnValue = F("Großer Kuhweidenweg");
        break;
    }
    case 123111:
    {
        returnValue = F("Großer Kühruhweg");
        break;
    }
    case 123112:
    {
        returnValue = F("Großer Kühweg");
        break;
    }
    case 123113:
    {
        returnValue = F("Großer Lahweg");
        break;
    }
    case 123114:
    {
        returnValue = F("Großer Laubelt");
        break;
    }
    case 123115:
    {
        returnValue = F("Großer Lindenplatz");
        break;
    }
    case 123116:
    {
        returnValue = F("Großer Loggenhagen");
        break;
    }
    case 123117:
    {
        returnValue = F("Großer Lychensee");
        break;
    }
    case 123118:
    {
        returnValue = F("Großer Löwe");
        break;
    }
    case 123119:
    {
        returnValue = F("Großer Maarweg");
        break;
    }
    case 123120:
    {
        returnValue = F("Großer Maien");
        break;
    }
    case 123121:
    {
        returnValue = F("Großer Mallohweg");
        break;
    }
    case 123122:
    {
        returnValue = F("Großer Markt");
        break;
    }
    case 123123:
    {
        returnValue = F("Großer Marschweg");
        break;
    }
    case 123124:
    {
        returnValue = F("Großer Moor");
        break;
    }
    case 123125:
    {
        returnValue = F("Großer Moordamm");
        break;
    }
    case 123126:
    {
        returnValue = F("Großer Moorgartenweg");
        break;
    }
    case 123127:
    {
        returnValue = F("Großer Moorgraben");
        break;
    }
    case 123128:
    {
        returnValue = F("Großer Moorweg");
        break;
    }
    case 123129:
    {
        returnValue = F("Großer Morgen");
        break;
    }
    case 123130:
    {
        returnValue = F("Großer Muskamp");
        break;
    }
    case 123131:
    {
        returnValue = F("Großer Mönch");
        break;
    }
    case 123132:
    {
        returnValue = F("Großer Mühlberg");
        break;
    }
    case 123133:
    {
        returnValue = F("Großer Mühlbergweg");
        break;
    }
    case 123134:
    {
        returnValue = F("Großer Mühlenweg");
        break;
    }
    case 123135:
    {
        returnValue = F("Großer Mühlweg");
        break;
    }
    case 123136:
    {
        returnValue = F("Großer Neuwallsweg");
        break;
    }
    case 123137:
    {
        returnValue = F("Großer Nonnensuselweg");
        break;
    }
    case 123138:
    {
        returnValue = F("Großer Ochsenkamp");
        break;
    }
    case 123139:
    {
        returnValue = F("Großer Oldekamp");
        break;
    }
    case 123140:
    {
        returnValue = F("Großer Ort");
        break;
    }
    case 123141:
    {
        returnValue = F("Großer Palsterkamp");
        break;
    }
    case 123142:
    {
        returnValue = F("Großer Peunt");
        break;
    }
    case 123143:
    {
        returnValue = F("Großer Plan");
        break;
    }
    case 123144:
    {
        returnValue = F("Großer Platz");
        break;
    }
    case 123145:
    {
        returnValue = F("Großer Pley");
        break;
    }
    case 123146:
    {
        returnValue = F("Großer Pyraweg");
        break;
    }
    case 123147:
    {
        returnValue = F("Großer Querdamm");
        break;
    }
    case 123148:
    {
        returnValue = F("Großer Querweg");
        break;
    }
    case 123149:
    {
        returnValue = F("Großer Ranzen");
        break;
    }
    case 123150:
    {
        returnValue = F("Großer Rehnhof");
        break;
    }
    case 123151:
    {
        returnValue = F("Großer Reitweg");
        break;
    }
    case 123152:
    {
        returnValue = F("Großer Riedweg");
        break;
    }
    case 123153:
    {
        returnValue = F("Großer Riethweg");
        break;
    }
    case 123154:
    {
        returnValue = F("Großer Ring");
        break;
    }
    case 123155:
    {
        returnValue = F("Großer Rundweg");
        break;
    }
    case 123156:
    {
        returnValue = F("Großer Röhrweg");
        break;
    }
    case 123157:
    {
        returnValue = F("Großer Rübenkamp");
        break;
    }
    case 123158:
    {
        returnValue = F("Großer Saatner");
        break;
    }
    case 123159:
    {
        returnValue = F("Großer Sand");
        break;
    }
    case 123160:
    {
        returnValue = F("Großer Sandhagen");
        break;
    }
    case 123161:
    {
        returnValue = F("Großer Sandkamp");
        break;
    }
    case 123162:
    {
        returnValue = F("Großer Scharnhorst");
        break;
    }
    case 123163:
    {
        returnValue = F("Großer Schlag");
        break;
    }
    case 123164:
    {
        returnValue = F("Großer Schneisenweg");
        break;
    }
    case 123165:
    {
        returnValue = F("Großer Schratweg");
        break;
    }
    case 123166:
    {
        returnValue = F("Großer Schweizerling");
        break;
    }
    case 123167:
    {
        returnValue = F("Großer Schwerin");
        break;
    }
    case 123168:
    {
        returnValue = F("Großer Schwerinweg");
        break;
    }
    case 123169:
    {
        returnValue = F("Großer Schwibbogen");
        break;
    }
    case 123170:
    {
        returnValue = F("Großer Seesteig");
        break;
    }
    case 123171:
    {
        returnValue = F("Großer Seeweg");
        break;
    }
    case 123172:
    {
        returnValue = F("Großer Seligenstädter Grund");
        break;
    }
    case 123173:
    {
        returnValue = F("Großer Siedlungsweg");
        break;
    }
    case 123174:
    {
        returnValue = F("Großer Sielweg");
        break;
    }
    case 123175:
    {
        returnValue = F("Großer Spiegelberg");
        break;
    }
    case 123176:
    {
        returnValue = F("Großer Spielplatz Beimerstetten");
        break;
    }
    case 123177:
    {
        returnValue = F("Großer Spitzenberg");
        break;
    }
    case 123178:
    {
        returnValue = F("Großer Stadtacker");
        break;
    }
    case 123179:
    {
        returnValue = F("Großer Staffelrundweg");
        break;
    }
    case 123180:
    {
        returnValue = F("Großer Steert");
        break;
    }
    case 123181:
    {
        returnValue = F("Großer Stein");
        break;
    }
    case 123182:
    {
        returnValue = F("Großer Steinweg");
        break;
    }
    case 123183:
    {
        returnValue = F("Großer Stellweg");
        break;
    }
    case 123184:
    {
        returnValue = F("Großer Stern");
        break;
    }
    case 123185:
    {
        returnValue = F("Großer Stradower Weg");
        break;
    }
    case 123186:
    {
        returnValue = F("Großer Strauchweg");
        break;
    }
    case 123187:
    {
        returnValue = F("Großer Südermoorweg");
        break;
    }
    case 123188:
    {
        returnValue = F("Großer Tannenweg");
        break;
    }
    case 123189:
    {
        returnValue = F("Großer Taubenweg");
        break;
    }
    case 123190:
    {
        returnValue = F("Großer Teichweg");
        break;
    }
    case 123191:
    {
        returnValue = F("Großer Thieberg");
        break;
    }
    case 123192:
    {
        returnValue = F("Großer Trimm-Dich-Pfad");
        break;
    }
    case 123193:
    {
        returnValue = F("Großer Vogelsang");
        break;
    }
    case 123194:
    {
        returnValue = F("Großer Wald");
        break;
    }
    case 123195:
    {
        returnValue = F("Großer Waldweg");
        break;
    }
    case 123196:
    {
        returnValue = F("Großer Wall");
        break;
    }
    case 123197:
    {
        returnValue = F("Großer Wandrahm");
        break;
    }
    case 123198:
    {
        returnValue = F("Großer Warder");
        break;
    }
    case 123199:
    {
        returnValue = F("Großer Wasen");
        break;
    }
    case 123200:
    {
        returnValue = F("Großer Weg");
        break;
    }
    case 123201:
    {
        returnValue = F("Großer Weidenweg");
        break;
    }
    case 123202:
    {
        returnValue = F("Großer Weideweg");
        break;
    }
    case 123203:
    {
        returnValue = F("Großer Weiher");
        break;
    }
    case 123204:
    {
        returnValue = F("Großer Wesenberg");
        break;
    }
    case 123205:
    {
        returnValue = F("Großer Wiesenweg");
        break;
    }
    case 123206:
    {
        returnValue = F("Großer Winkel");
        break;
    }
    case 123207:
    {
        returnValue = F("Großer Winkelsheidermoorweg");
        break;
    }
    case 123208:
    {
        returnValue = F("Großer Wulfhagen");
        break;
    }
    case 123209:
    {
        returnValue = F("Großer Wunderberg");
        break;
    }
    case 123210:
    {
        returnValue = F("Großer Zehrbrocksweg");
        break;
    }
    case 123211:
    {
        returnValue = F("Großer Zschand");
        break;
    }
    case 123212:
    {
        returnValue = F("Großer-Garten-Weg");
        break;
    }
    case 123213:
    {
        returnValue = F("Großer-Kamp-Str.");
        break;
    }
    case 123214:
    {
        returnValue = F("Großer-See-Weg");
        break;
    }
    case 123215:
    {
        returnValue = F("Großer-Wald-Weg");
        break;
    }
    case 123216:
    {
        returnValue = F("Großer-Weiher-Str.");
        break;
    }
    case 123217:
    {
        returnValue = F("Großerkmannsdorfer Str.");
        break;
    }
    case 123218:
    {
        returnValue = F("Großerlacher Str.");
        break;
    }
    case 123219:
    {
        returnValue = F("Großes Bettental");
        break;
    }
    case 123220:
    {
        returnValue = F("Großes Birkenvenn");
        break;
    }
    case 123221:
    {
        returnValue = F("Großes Bruch");
        break;
    }
    case 123222:
    {
        returnValue = F("Großes Bärental");
        break;
    }
    case 123223:
    {
        returnValue = F("Großes Eppental");
        break;
    }
    case 123224:
    {
        returnValue = F("Großes Feld");
        break;
    }
    case 123225:
    {
        returnValue = F("Großes Fenn");
        break;
    }
    case 123226:
    {
        returnValue = F("Großes Franzosental");
        break;
    }
    case 123227:
    {
        returnValue = F("Großes Gartental");
        break;
    }
    case 123228:
    {
        returnValue = F("Großes Gehölz");
        break;
    }
    case 123229:
    {
        returnValue = F("Großes Heckental");
        break;
    }
    case 123230:
    {
        returnValue = F("Großes Holz");
        break;
    }
    case 123231:
    {
        returnValue = F("Großes Kirchtor");
        break;
    }
    case 123232:
    {
        returnValue = F("Großes Meer");
        break;
    }
    case 123233:
    {
        returnValue = F("Großes Moor");
        break;
    }
    case 123234:
    {
        returnValue = F("Großes Must");
        break;
    }
    case 123235:
    {
        returnValue = F("Großes Mühlenfeld");
        break;
    }
    case 123236:
    {
        returnValue = F("Großes Mühlental");
        break;
    }
    case 123237:
    {
        returnValue = F("Großes Neddernholz");
        break;
    }
    case 123238:
    {
        returnValue = F("Großes Osterfeld");
        break;
    }
    case 123239:
    {
        returnValue = F("Großes Tal");
        break;
    }
    case 123240:
    {
        returnValue = F("Großes Uhlenbachtal");
        break;
    }
    case 123241:
    {
        returnValue = F("Großfahnersche Str.");
        break;
    }
    case 123242:
    {
        returnValue = F("Großfeld");
        break;
    }
    case 123243:
    {
        returnValue = F("Großfeldstiege");
        break;
    }
    case 123244:
    {
        returnValue = F("Großfeldstr.");
        break;
    }
    case 123245:
    {
        returnValue = F("Großfeldweg");
        break;
    }
    case 123246:
    {
        returnValue = F("Großfennen");
        break;
    }
    case 123247:
    {
        returnValue = F("Großfilling");
        break;
    }
    case 123248:
    {
        returnValue = F("Großfischbacher Str.");
        break;
    }
    case 123249:
    {
        returnValue = F("Großflecken");
        break;
    }
    case 123250:
    {
        returnValue = F("Großforst");
        break;
    }
    case 123251:
    {
        returnValue = F("Großfrenkhausen");
        break;
    }
    case 123252:
    {
        returnValue = F("Großfurraer Str.");
        break;
    }
    case 123253:
    {
        returnValue = F("Großfurraer Weg");
        break;
    }
    case 123254:
    {
        returnValue = F("Großgartacher Kreuz");
        break;
    }
    case 123255:
    {
        returnValue = F("Großgartacher Str.");
        break;
    }
    case 123256:
    {
        returnValue = F("Großgartenstr.");
        break;
    }
    case 123257:
    {
        returnValue = F("Großgartenweg");
        break;
    }
    case 123258:
    {
        returnValue = F("Großgasse");
        break;
    }
    case 123259:
    {
        returnValue = F("Großgerstenfeldstr.");
        break;
    }
    case 123260:
    {
        returnValue = F("Großgeschaidter Str.");
        break;
    }
    case 123261:
    {
        returnValue = F("Großgeschwenda");
        break;
    }
    case 123262:
    {
        returnValue = F("Großgeschwendaer Berg");
        break;
    }
    case 123263:
    {
        returnValue = F("Großglattbacher Pfad");
        break;
    }
    case 123264:
    {
        returnValue = F("Großglattbacher Str.");
        break;
    }
    case 123265:
    {
        returnValue = F("Großglattbacher Weg");
        break;
    }
    case 123266:
    {
        returnValue = F("Großglockner Weg");
        break;
    }
    case 123267:
    {
        returnValue = F("Großglocknerstr.");
        break;
    }
    case 123268:
    {
        returnValue = F("Großgmainer Gangsteig");
        break;
    }
    case 123269:
    {
        returnValue = F("Großgmainer Str.");
        break;
    }
    case 123270:
    {
        returnValue = F("Großgraupaer Kirchweg");
        break;
    }
    case 123271:
    {
        returnValue = F("Großgrimmaer Str.");
        break;
    }
    case 123272:
    {
        returnValue = F("Großgrundallee");
        break;
    }
    case 123273:
    {
        returnValue = F("Großgräfendorfer Str.");
        break;
    }
    case 123274:
    {
        returnValue = F("Großgölitz");
        break;
    }
    case 123275:
    {
        returnValue = F("Großgörschener Str.");
        break;
    }
    case 123276:
    {
        returnValue = F("Großgörschner Weg");
        break;
    }
    case 123277:
    {
        returnValue = F("Großhaarbach");
        break;
    }
    case 123278:
    {
        returnValue = F("Großhabersdorfer Str.");
        break;
    }
    case 123279:
    {
        returnValue = F("Großhaderner Str.");
        break;
    }
    case 123280:
    {
        returnValue = F("Großhahbergkopfweg");
        break;
    }
    case 123281:
    {
        returnValue = F("Großhaldeweg");
        break;
    }
    case 123282:
    {
        returnValue = F("Großhamberg");
        break;
    }
    case 123283:
    {
        returnValue = F("Großhandelsring");
        break;
    }
    case 123284:
    {
        returnValue = F("Großharbach");
        break;
    }
    case 123285:
    {
        returnValue = F("Großharbacher Weg");
        break;
    }
    case 123286:
    {
        returnValue = F("Großharriefeld");
        break;
    }
    case 123287:
    {
        returnValue = F("Großharrier Weg");
        break;
    }
    case 123288:
    {
        returnValue = F("Großharthauer Fußsteig");
        break;
    }
    case 123289:
    {
        returnValue = F("Großharthauer Str.");
        break;
    }
    case 123290:
    {
        returnValue = F("Großhartmannsdorfer Str.");
        break;
    }
    case 123291:
    {
        returnValue = F("Großhartmannsdorfer Weg");
        break;
    }
    case 123292:
    {
        returnValue = F("Großhaslacher Allee");
        break;
    }
    case 123293:
    {
        returnValue = F("Großhausener Str.");
        break;
    }
    case 123294:
    {
        returnValue = F("Großhausergasse");
        break;
    }
    case 123295:
    {
        returnValue = F("Großhauserstr.");
        break;
    }
    case 123296:
    {
        returnValue = F("Großhecken");
        break;
    }
    case 123297:
    {
        returnValue = F("Großheckenweg");
        break;
    }
    case 123298:
    {
        returnValue = F("Großhecker Weg");
        break;
    }
    case 123299:
    {
        returnValue = F("Großheider Str.");
        break;
    }
    case 123300:
    {
        returnValue = F("Großheidstr.");
        break;
    }
    case 123301:
    {
        returnValue = F("Großheiligenwalder Str.");
        break;
    }
    case 123302:
    {
        returnValue = F("Großheimer Str.");
        break;
    }
    case 123303:
    {
        returnValue = F("Großheimer Talbrücke");
        break;
    }
    case 123304:
    {
        returnValue = F("Großheirather Str.");
        break;
    }
    case 123305:
    {
        returnValue = F("Großhelmsdorfer Str.");
        break;
    }
    case 123306:
    {
        returnValue = F("Großhennersdorfer Str.");
        break;
    }
    case 123307:
    {
        returnValue = F("Großheppacher Str.");
        break;
    }
    case 123308:
    {
        returnValue = F("Großherzog-Friedrich-Luisen-Str.");
        break;
    }
    case 123309:
    {
        returnValue = F("Großherzog-Friedrich-Str.");
        break;
    }
    case 123310:
    {
        returnValue = F("Großherzog-Karl-Str.");
        break;
    }
    case 123311:
    {
        returnValue = F("Großherzogin-Maria-Anna-Weg");
        break;
    }
    case 123312:
    {
        returnValue = F("Großherzogschneise");
        break;
    }
    case 123313:
    {
        returnValue = F("Großhettstedt");
        break;
    }
    case 123314:
    {
        returnValue = F("Großheubacher Str.");
        break;
    }
    case 123315:
    {
        returnValue = F("Großhofenstr.");
        break;
    }
    case 123316:
    {
        returnValue = F("Großholum-Dorfstr.");
        break;
    }
    case 123317:
    {
        returnValue = F("Großholum-Ost");
        break;
    }
    case 123318:
    {
        returnValue = F("Großholum-West");
        break;
    }
    case 123319:
    {
        returnValue = F("Großholz");
        break;
    }
    case 123320:
    {
        returnValue = F("Großholzer Weg");
        break;
    }
    case 123321:
    {
        returnValue = F("Großholzstr.");
        break;
    }
    case 123322:
    {
        returnValue = F("Großholzweg");
        break;
    }
    case 123323:
    {
        returnValue = F("Großhorst");
        break;
    }
    case 123324:
    {
        returnValue = F("Großhufstr.");
        break;
    }
    case 123325:
    {
        returnValue = F("Großhurdener Berg");
        break;
    }
    case 123326:
    {
        returnValue = F("Großhäuslesweg");
        break;
    }
    case 123327:
    {
        returnValue = F("Großhöchberger Str.");
        break;
    }
    case 123328:
    {
        returnValue = F("Großhöhfeld");
        break;
    }
    case 123329:
    {
        returnValue = F("Großhörn");
        break;
    }
    case 123330:
    {
        returnValue = F("Großhügelstr.");
        break;
    }
    case 123331:
    {
        returnValue = F("Großhülsberg");
        break;
    }
    case 123332:
    {
        returnValue = F("Großingersheimer Str.");
        break;
    }
    case 123333:
    {
        returnValue = F("Großingersheimer Weg");
        break;
    }
    case 123334:
    {
        returnValue = F("Großjungenwald");
        break;
    }
    case 123335:
    {
        returnValue = F("Großkagen");
        break;
    }
    case 123336:
    {
        returnValue = F("Großkahler Str.");
        break;
    }
    case 123337:
    {
        returnValue = F("Großkamsdorfer Str.");
        break;
    }
    case 123338:
    {
        returnValue = F("Großkarlbacher Str.");
        break;
    }
    case 123339:
    {
        returnValue = F("Großkarolinenfelder Str.");
        break;
    }
    case 123340:
    {
        returnValue = F("Großkatern");
        break;
    }
    case 123341:
    {
        returnValue = F("Großkathrein");
        break;
    }
    case 123342:
    {
        returnValue = F("Großkaynaer Str.");
        break;
    }
    case 123343:
    {
        returnValue = F("Großkitzighofener Weg");
        break;
    }
    case 123344:
    {
        returnValue = F("Großkitzighofer Str.");
        break;
    }
    case 123345:
    {
        returnValue = F("Großklamm");
        break;
    }
    case 123346:
    {
        returnValue = F("Großklenau");
        break;
    }
    case 123347:
    {
        returnValue = F("Großkonreuth");
        break;
    }
    case 123348:
    {
        returnValue = F("Großkopfweg");
        break;
    }
    case 123349:
    {
        returnValue = F("Großkoppel");
        break;
    }
    case 123350:
    {
        returnValue = F("Großkorgauer Str.");
        break;
    }
    case 123351:
    {
        returnValue = F("Großkorgauer Weg");
        break;
    }
    case 123352:
    {
        returnValue = F("Großkorkauer Dorfstr.");
        break;
    }
    case 123353:
    {
        returnValue = F("Großkrappenlochweg");
        break;
    }
    case 123354:
    {
        returnValue = F("Großkrausniker Str.");
        break;
    }
    case 123355:
    {
        returnValue = F("Großkuchener Str.");
        break;
    }
    case 123356:
    {
        returnValue = F("Großkundorf");
        break;
    }
    case 123357:
    {
        returnValue = F("Großkämper Damm");
        break;
    }
    case 123358:
    {
        returnValue = F("Großkämper Weg");
        break;
    }
    case 123359:
    {
        returnValue = F("Großköllnbacher Str.");
        break;
    }
    case 123360:
    {
        returnValue = F("Großkölnstr.");
        break;
    }
    case 123361:
    {
        returnValue = F("Großkötzer Str.");
        break;
    }
    case 123362:
    {
        returnValue = F("Großkühnauer Weg");
        break;
    }
    case 123363:
    {
        returnValue = F("Großlangheimer Str.");
        break;
    }
    case 123364:
    {
        returnValue = F("Großlangheimer Weg");
        break;
    }
    case 123365:
    {
        returnValue = F("Großlaudenbacher Str.");
        break;
    }
    case 123366:
    {
        returnValue = F("Großleinunger Weg");
        break;
    }
    case 123367:
    {
        returnValue = F("Großleite");
        break;
    }
    case 123368:
    {
        returnValue = F("Großlindig");
        break;
    }
    case 123369:
    {
        returnValue = F("Großlittger Str.");
        break;
    }
    case 123370:
    {
        returnValue = F("Großlochreute");
        break;
    }
    case 123371:
    {
        returnValue = F("Großlochsackweg");
        break;
    }
    case 123372:
    {
        returnValue = F("Großlohe");
        break;
    }
    case 123373:
    {
        returnValue = F("Großlohweg");
        break;
    }
    case 123374:
    {
        returnValue = F("Großloitzenried");
        break;
    }
    case 123375:
    {
        returnValue = F("Großlug");
        break;
    }
    case 123376:
    {
        returnValue = F("Großlugaer Str.");
        break;
    }
    case 123377:
    {
        returnValue = F("Großlödericher Str.");
        break;
    }
    case 123378:
    {
        returnValue = F("Großlückweg");
        break;
    }
    case 123379:
    {
        returnValue = F("Großmachnower Allee");
        break;
    }
    case 123380:
    {
        returnValue = F("Großmachnower Str.");
        break;
    }
    case 123381:
    {
        returnValue = F("Großmaischeider Str.");
        break;
    }
    case 123382:
    {
        returnValue = F("Großmannstr.");
        break;
    }
    case 123383:
    {
        returnValue = F("Großmargens");
        break;
    }
    case 123384:
    {
        returnValue = F("Großmarktstr.");
        break;
    }
    case 123385:
    {
        returnValue = F("Großmathenweg");
        break;
    }
    case 123386:
    {
        returnValue = F("Großmatt");
        break;
    }
    case 123387:
    {
        returnValue = F("Großmatte");
        break;
    }
    case 123388:
    {
        returnValue = F("Großmattenstr.");
        break;
    }
    case 123389:
    {
        returnValue = F("Großmattenweg");
        break;
    }
    case 123390:
    {
        returnValue = F("Großmattweg");
        break;
    }
    case 123391:
    {
        returnValue = F("Großmecka");
        break;
    }
    case 123392:
    {
        returnValue = F("Großmehringer Str.");
        break;
    }
    case 123393:
    {
        returnValue = F("Großmeinfeld");
        break;
    }
    case 123394:
    {
        returnValue = F("Großmelten");
        break;
    }
    case 123395:
    {
        returnValue = F("Großmenower Str.");
        break;
    }
    case 123396:
    {
        returnValue = F("Großmickestr.");
        break;
    }
    case 123397:
    {
        returnValue = F("Großmoltenstr.");
        break;
    }
    case 123398:
    {
        returnValue = F("Großmonraer Str.");
        break;
    }
    case 123399:
    {
        returnValue = F("Großmoordamm");
        break;
    }
    case 123400:
    {
        returnValue = F("Großmoos");
        break;
    }
    case 123401:
    {
        returnValue = F("Großmoosstr.");
        break;
    }
    case 123402:
    {
        returnValue = F("Großmoosweg");
        break;
    }
    case 123403:
    {
        returnValue = F("Großmultenstr.");
        break;
    }
    case 123404:
    {
        returnValue = F("Großmutter Rodelbahn");
        break;
    }
    case 123405:
    {
        returnValue = F("Großmutterleite");
        break;
    }
    case 123406:
    {
        returnValue = F("Großmutterwiese");
        break;
    }
    case 123407:
    {
        returnValue = F("Großmutzer Dorfstr.");
        break;
    }
    case 123408:
    {
        returnValue = F("Großmutzer Heuweg");
        break;
    }
    case 123409:
    {
        returnValue = F("Großmutzer Weg");
        break;
    }
    case 123410:
    {
        returnValue = F("Großmölsener Str.");
        break;
    }
    case 123411:
    {
        returnValue = F("Großmühle");
        break;
    }
    case 123412:
    {
        returnValue = F("Großmühlgarten");
        break;
    }
    case 123413:
    {
        returnValue = F("Großmühlstr.");
        break;
    }
    case 123414:
    {
        returnValue = F("Großmüllergasse");
        break;
    }
    case 123415:
    {
        returnValue = F("Großnaundorfer Str.");
        break;
    }
    case 123416:
    {
        returnValue = F("Großneundorf");
        break;
    }
    case 123417:
    {
        returnValue = F("Großneundorfer Str.");
        break;
    }
    case 123418:
    {
        returnValue = F("Großniedesheimer Str.");
        break;
    }
    case 123419:
    {
        returnValue = F("Großnweg");
        break;
    }
    case 123420:
    {
        returnValue = F("Großobringer Str.");
        break;
    }
    case 123421:
    {
        returnValue = F("Großobringer Weg");
        break;
    }
    case 123422:
    {
        returnValue = F("Großoderscheid");
        break;
    }
    case 123423:
    {
        returnValue = F("Großohrenbronner Str.");
        break;
    }
    case 123424:
    {
        returnValue = F("Großolbersdorfer Str.");
        break;
    }
    case 123425:
    {
        returnValue = F("Großopitzer Weg");
        break;
    }
    case 123426:
    {
        returnValue = F("Großosidaer Str.");
        break;
    }
    case 123427:
    {
        returnValue = F("Großostheimer Str.");
        break;
    }
    case 123428:
    {
        returnValue = F("Großpelsen");
        break;
    }
    case 123429:
    {
        returnValue = F("Großpeterstr.");
        break;
    }
    case 123430:
    {
        returnValue = F("Großpillingsdorf");
        break;
    }
    case 123431:
    {
        returnValue = F("Großpillingsdorfer Str.");
        break;
    }
    case 123432:
    {
        returnValue = F("Großpörthener Anger");
        break;
    }
    case 123433:
    {
        returnValue = F("Großpörthener Dorfstr.");
        break;
    }
    case 123434:
    {
        returnValue = F("Großpörthener Str.");
        break;
    }
    case 123435:
    {
        returnValue = F("Großpörthener Weg");
        break;
    }
    case 123436:
    {
        returnValue = F("Großpösnaer Str.");
        break;
    }
    case 123437:
    {
        returnValue = F("Großpötzschau");
        break;
    }
    case 123438:
    {
        returnValue = F("Großrachl");
        break;
    }
    case 123439:
    {
        returnValue = F("Großraschützer Str.");
        break;
    }
    case 123440:
    {
        returnValue = F("Großredder");
        break;
    }
    case 123441:
    {
        returnValue = F("Großriedgasse");
        break;
    }
    case 123442:
    {
        returnValue = F("Großring");
        break;
    }
    case 123443:
    {
        returnValue = F("Großromstedter Str.");
        break;
    }
    case 123444:
    {
        returnValue = F("Großromstedter Weg");
        break;
    }
    case 123445:
    {
        returnValue = F("Großrostringhausen");
        break;
    }
    case 123446:
    {
        returnValue = F("Großrottenweg");
        break;
    }
    case 123447:
    {
        returnValue = F("Großrudestedter Str.");
        break;
    }
    case 123448:
    {
        returnValue = F("Großrödaer Hauptstr.");
        break;
    }
    case 123449:
    {
        returnValue = F("Großröhrsdorfer Str.");
        break;
    }
    case 123450:
    {
        returnValue = F("Großröhrsdorfer Weg");
        break;
    }
    case 123451:
    {
        returnValue = F("Großrückerswalder Str.");
        break;
    }
    case 123452:
    {
        returnValue = F("Großrügelner Str.");
        break;
    }
    case 123453:
    {
        returnValue = F("Großsaara");
        break;
    }
    case 123454:
    {
        returnValue = F("Großsachsener Str.");
        break;
    }
    case 123455:
    {
        returnValue = F("Großsachsener Weg");
        break;
    }
    case 123456:
    {
        returnValue = F("Großsachsenheimer Str.");
        break;
    }
    case 123457:
    {
        returnValue = F("Großsander Str.");
        break;
    }
    case 123458:
    {
        returnValue = F("Großschedlstr.");
        break;
    }
    case 123459:
    {
        returnValue = F("Großscheider Str.");
        break;
    }
    case 123460:
    {
        returnValue = F("Großschiffahrtsweg");
        break;
    }
    case 123461:
    {
        returnValue = F("Großschmiedestr.");
        break;
    }
    case 123462:
    {
        returnValue = F("Großschwabhäuser Str.");
        break;
    }
    case 123463:
    {
        returnValue = F("Großschwamborn");
        break;
    }
    case 123464:
    {
        returnValue = F("Großschönau-Ring");
        break;
    }
    case 123465:
    {
        returnValue = F("Großschönauer Str.");
        break;
    }
    case 123466:
    {
        returnValue = F("Großsedlitzer Str.");
        break;
    }
    case 123467:
    {
        returnValue = F("Großseelheimer Str.");
        break;
    }
    case 123468:
    {
        returnValue = F("Großsenderstr.");
        break;
    }
    case 123469:
    {
        returnValue = F("Großsetzenberger Weg");
        break;
    }
    case 123470:
    {
        returnValue = F("Großsolter Str.");
        break;
    }
    case 123471:
    {
        returnValue = F("Großsorheimer Weg");
        break;
    }
    case 123472:
    {
        returnValue = F("Großsporkert");
        break;
    }
    case 123473:
    {
        returnValue = F("Großstechauer Str.");
        break;
    }
    case 123474:
    {
        returnValue = F("Großsteeder Weg");
        break;
    }
    case 123475:
    {
        returnValue = F("Großstein");
        break;
    }
    case 123476:
    {
        returnValue = F("Großsteinberger Str.");
        break;
    }
    case 123477:
    {
        returnValue = F("Großsteinen");
        break;
    }
    case 123478:
    {
        returnValue = F("Großsteinfeld");
        break;
    }
    case 123479:
    {
        returnValue = F("Großsteingrab von Werste");
        break;
    }
    case 123480:
    {
        returnValue = F("Großsteinhauser Str.");
        break;
    }
    case 123481:
    {
        returnValue = F("Großstolpen");
        break;
    }
    case 123482:
    {
        returnValue = F("Großstr.");
        break;
    }
    case 123483:
    {
        returnValue = F("Großstr. (Bad Sobernheim)");
        break;
    }
    case 123484:
    {
        returnValue = F("Großstädtener Weg");
        break;
    }
    case 123485:
    {
        returnValue = F("Großstück");
        break;
    }
    case 123486:
    {
        returnValue = F("Großstückenfeld");
        break;
    }
    case 123487:
    {
        returnValue = F("Großstückenweg");
        break;
    }
    case 123488:
    {
        returnValue = F("Großstückeweg");
        break;
    }
    case 123489:
    {
        returnValue = F("Großteichweg");
        break;
    }
    case 123490:
    {
        returnValue = F("Großtorstr.");
        break;
    }
    case 123491:
    {
        returnValue = F("Großtrebener Landstr.");
        break;
    }
    case 123492:
    {
        returnValue = F("Großtriescher");
        break;
    }
    case 123493:
    {
        returnValue = F("Großträgerstr.");
        break;
    }
    case 123494:
    {
        returnValue = F("Großvaters Ruh");
        break;
    }
    case 123495:
    {
        returnValue = F("Großvenedigerstr.");
        break;
    }
    case 123496:
    {
        returnValue = F("Großvichtach");
        break;
    }
    case 123497:
    {
        returnValue = F("Großviechter Str.");
        break;
    }
    case 123498:
    {
        returnValue = F("Großviehbergstr.");
        break;
    }
    case 123499:
    {
        returnValue = F("Großvoigtsberger Grenzweg");
        break;
    }
    case 123500:
    {
        returnValue = F("Großvögele");
        break;
    }
    case 123501:
    {
        returnValue = F("Großwalburer Dorfstr.");
        break;
    }
    case 123502:
    {
        returnValue = F("Großwalburer Str.");
        break;
    }
    case 123503:
    {
        returnValue = F("Großwalding");
        break;
    }
    case 123504:
    {
        returnValue = F("Großwaldstr.");
        break;
    }
    case 123505:
    {
        returnValue = F("Großwallstädter Str.");
        break;
    }
    case 123506:
    {
        returnValue = F("Großwaltersdorfer Str.");
        break;
    }
    case 123507:
    {
        returnValue = F("Großwechsunger Str.");
        break;
    }
    case 123508:
    {
        returnValue = F("Großweg");
        break;
    }
    case 123509:
    {
        returnValue = F("Großweierer Str.");
        break;
    }
    case 123510:
    {
        returnValue = F("Großwelsbacher Hauptstr.");
        break;
    }
    case 123511:
    {
        returnValue = F("Großwelsbacher Str.");
        break;
    }
    case 123512:
    {
        returnValue = F("Großwelzheimer Str.");
        break;
    }
    case 123513:
    {
        returnValue = F("Großwenkheimer Str.");
        break;
    }
    case 123514:
    {
        returnValue = F("Großwenkheimer Weg");
        break;
    }
    case 123515:
    {
        returnValue = F("Großwies");
        break;
    }
    case 123516:
    {
        returnValue = F("Großwiese");
        break;
    }
    case 123517:
    {
        returnValue = F("Großwiesenstr.");
        break;
    }
    case 123518:
    {
        returnValue = F("Großwiesenweg");
        break;
    }
    case 123519:
    {
        returnValue = F("Großwieshof");
        break;
    }
    case 123520:
    {
        returnValue = F("Großwiger Weg");
        break;
    }
    case 123521:
    {
        returnValue = F("Großwiger Weinberg I");
        break;
    }
    case 123522:
    {
        returnValue = F("Großwiger Weinberg II");
        break;
    }
    case 123523:
    {
        returnValue = F("Großwilsdorfer Str.");
        break;
    }
    case 123524:
    {
        returnValue = F("Großwinklerweg");
        break;
    }
    case 123525:
    {
        returnValue = F("Großwisch");
        break;
    }
    case 123526:
    {
        returnValue = F("Großwolder Str.");
        break;
    }
    case 123527:
    {
        returnValue = F("Großwoltersdorfer Str.");
        break;
    }
    case 123528:
    {
        returnValue = F("Großwürder Weg");
        break;
    }
    case 123529:
    {
        returnValue = F("Großziethener Weg");
        break;
    }
    case 123530:
    {
        returnValue = F("Großzschepaer Str.");
        break;
    }
    case 123531:
    {
        returnValue = F("Großzöberitzer Str.");
        break;
    }
    case 123532:
    {
        returnValue = F("Großäcker");
        break;
    }
    case 123533:
    {
        returnValue = F("Großörner Weg");
        break;
    }
    case 123534:
    {
        returnValue = F("Großösinghausen");
        break;
    }
    case 123535:
    {
        returnValue = F("Grub");
        break;
    }
    case 123536:
    {
        returnValue = F("Grub-Neuravensburg");
        break;
    }
    case 123537:
    {
        returnValue = F("Grubachweg");
        break;
    }
    case 123538:
    {
        returnValue = F("Grubacker");
        break;
    }
    case 123539:
    {
        returnValue = F("Grubacker Weg");
        break;
    }
    case 123540:
    {
        returnValue = F("Grubbühlstr.");
        break;
    }
    case 123541:
    {
        returnValue = F("Grubbühlweg");
        break;
    }
    case 123542:
    {
        returnValue = F("Grubditzer Weg");
        break;
    }
    case 123543:
    {
        returnValue = F("Grube");
        break;
    }
    case 123544:
    {
        returnValue = F("Grube Alexandria");
        break;
    }
    case 123545:
    {
        returnValue = F("Grube Alfred");
        break;
    }
    case 123546:
    {
        returnValue = F("Grube Anna");
        break;
    }
    case 123547:
    {
        returnValue = F("Grube Anxbach");
        break;
    }
    case 123548:
    {
        returnValue = F("Grube Apfel");
        break;
    }
    case 123549:
    {
        returnValue = F("Grube Berta");
        break;
    }
    case 123550:
    {
        returnValue = F("Grube Ecke");
        break;
    }
    case 123551:
    {
        returnValue = F("Grube Erhaltung");
        break;
    }
    case 123552:
    {
        returnValue = F("Grube Erna");
        break;
    }
    case 123553:
    {
        returnValue = F("Grube Ferdinande");
        break;
    }
    case 123554:
    {
        returnValue = F("Grube Henriette");
        break;
    }
    case 123555:
    {
        returnValue = F("Grube Königsberg");
        break;
    }
    case 123556:
    {
        returnValue = F("Grube Labach");
        break;
    }
    case 123557:
    {
        returnValue = F("Grube Malapertus");
        break;
    }
    case 123558:
    {
        returnValue = F("Grube Nikolaus");
        break;
    }
    case 123559:
    {
        returnValue = F("Grube Pilot");
        break;
    }
    case 123560:
    {
        returnValue = F("Grube Reichensteiner Berg");
        break;
    }
    case 123561:
    {
        returnValue = F("Grube Rhonard");
        break;
    }
    case 123562:
    {
        returnValue = F("Grube Rosa");
        break;
    }
    case 123563:
    {
        returnValue = F("Grube Sonnenschein");
        break;
    }
    case 123564:
    {
        returnValue = F("Grube St.-Barbara");
        break;
    }
    case 123565:
    {
        returnValue = F("Grube Weiß");
        break;
    }
    case 123566:
    {
        returnValue = F("Grube Wilhelm");
        break;
    }
    case 123567:
    {
        returnValue = F("Grube Wohlfahrt Tiefer Stollen");
        break;
    }
    case 123568:
    {
        returnValue = F("Grube-Adolf-Park");
        break;
    }
    case 123569:
    {
        returnValue = F("Grube-Alfred-Str.");
        break;
    }
    case 123570:
    {
        returnValue = F("Grube-Andreas-Str.");
        break;
    }
    case 123571:
    {
        returnValue = F("Grube-Clara-Str.");
        break;
    }
    case 123572:
    {
        returnValue = F("Grube-Hermann-Str.");
        break;
    }
    case 123573:
    {
        returnValue = F("Grube-Laura-Str.");
        break;
    }
    case 123574:
    {
        returnValue = F("Grube-Nassau-Str.");
        break;
    }
    case 123575:
    {
        returnValue = F("Grube-Victoria-Str.");
        break;
    }
    case 123576:
    {
        returnValue = F("Grubebachstr.");
        break;
    }
    case 123577:
    {
        returnValue = F("Grubeleck");
        break;
    }
    case 123578:
    {
        returnValue = F("Gruben-Erlebnispfad");
        break;
    }
    case 123579:
    {
        returnValue = F("Grubenackerweg");
        break;
    }
    case 123580:
    {
        returnValue = F("Grubenallee");
        break;
    }
    case 123581:
    {
        returnValue = F("Grubenanlage Itzenplitz");
        break;
    }
    case 123582:
    {
        returnValue = F("Grubenbach");
        break;
    }
    case 123583:
    {
        returnValue = F("Grubenbacher Str.");
        break;
    }
    case 123584:
    {
        returnValue = F("Grubenbahndamm");
        break;
    }
    case 123585:
    {
        returnValue = F("Grubenbahnstr.");
        break;
    }
    case 123586:
    {
        returnValue = F("Grubenberg");
        break;
    }
    case 123587:
    {
        returnValue = F("Grubenbühlweg");
        break;
    }
    case 123588:
    {
        returnValue = F("Grubeneckweg");
        break;
    }
    case 123589:
    {
        returnValue = F("Grubener Str.");
        break;
    }
    case 123590:
    {
        returnValue = F("Grubener Weg");
        break;
    }
    case 123591:
    {
        returnValue = F("Grubenfeld");
        break;
    }
    case 123592:
    {
        returnValue = F("Grubenfeldweg");
        break;
    }
    case 123593:
    {
        returnValue = F("Grubengarten");
        break;
    }
    case 123594:
    {
        returnValue = F("Grubengasse");
        break;
    }
    case 123595:
    {
        returnValue = F("Grubengärten");
        break;
    }
    case 123596:
    {
        returnValue = F("Grubenhagener Str.");
        break;
    }
    case 123597:
    {
        returnValue = F("Grubenhagener Weg");
        break;
    }
    case 123598:
    {
        returnValue = F("Grubenhagenstr.");
        break;
    }
    case 123599:
    {
        returnValue = F("Grubenhagenweg");
        break;
    }
    case 123600:
    {
        returnValue = F("Grubenhof");
        break;
    }
    case 123601:
    {
        returnValue = F("Grubenhohle");
        break;
    }
    case 123602:
    {
        returnValue = F("Grubenholzweg");
        break;
    }
    case 123603:
    {
        returnValue = F("Grubenkamp");
        break;
    }
    case 123604:
    {
        returnValue = F("Grubenkopf");
        break;
    }
    case 123605:
    {
        returnValue = F("Grubenkopfstr.");
        break;
    }
    case 123606:
    {
        returnValue = F("Grubenlicht");
        break;
    }
    case 123607:
    {
        returnValue = F("Grubenpfad");
        break;
    }
    case 123608:
    {
        returnValue = F("Grubenpfadweg");
        break;
    }
    case 123609:
    {
        returnValue = F("Grubenrain");
        break;
    }
    case 123610:
    {
        returnValue = F("Grubenrandstr.");
        break;
    }
    case 123611:
    {
        returnValue = F("Grubensiedlung");
        break;
    }
    case 123612:
    {
        returnValue = F("Grubensteig");
        break;
    }
    case 123613:
    {
        returnValue = F("Grubenstr.");
        break;
    }
    case 123614:
    {
        returnValue = F("Grubenwaldweg");
        break;
    }
    case 123615:
    {
        returnValue = F("Grubenweg");
        break;
    }
    case 123616:
    {
        returnValue = F("Grubenweg (Forsthaus-Weg (FH/G2))");
        break;
    }
    case 123617:
    {
        returnValue = F("Grubenweg (G2)");
        break;
    }
    case 123618:
    {
        returnValue = F("Grubenweg (G2/Panorama-Rundweg - Frücht)");
        break;
    }
    case 123619:
    {
        returnValue = F("Grubenwäldchen");
        break;
    }
    case 123620:
    {
        returnValue = F("Grubenzufahrt");
        break;
    }
    case 123621:
    {
        returnValue = F("Grubenäcker");
        break;
    }
    case 123622:
    {
        returnValue = F("Grubenäckerstr.");
        break;
    }
    case 123623:
    {
        returnValue = F("Gruber Bergweg");
        break;
    }
    case 123624:
    {
        returnValue = F("Gruber Dorfstr.");
        break;
    }
    case 123625:
    {
        returnValue = F("Gruber Feld");
        break;
    }
    case 123626:
    {
        returnValue = F("Gruber Hauptstr.");
        break;
    }
    case 123627:
    {
        returnValue = F("Gruber Str.");
        break;
    }
    case 123628:
    {
        returnValue = F("Gruber Taxet-Weg");
        break;
    }
    case 123629:
    {
        returnValue = F("Gruber Weg");
        break;
    }
    case 123630:
    {
        returnValue = F("Gruber-Passage");
        break;
    }
    case 123631:
    {
        returnValue = F("Gruber-Sperl-Str.");
        break;
    }
    case 123632:
    {
        returnValue = F("Gruberberg");
        break;
    }
    case 123633:
    {
        returnValue = F("Gruberdieken");
        break;
    }
    case 123634:
    {
        returnValue = F("Grubereckweg");
        break;
    }
    case 123635:
    {
        returnValue = F("Gruberfeld");
        break;
    }
    case 123636:
    {
        returnValue = F("Gruberfelde");
        break;
    }
    case 123637:
    {
        returnValue = F("Grubergasse");
        break;
    }
    case 123638:
    {
        returnValue = F("Gruberstr.");
        break;
    }
    case 123639:
    {
        returnValue = F("Gruberweg");
        break;
    }
    case 123640:
    {
        returnValue = F("Gruberäcker");
        break;
    }
    case 123641:
    {
        returnValue = F("Grubes Flach");
        break;
    }
    case 123642:
    {
        returnValue = F("Grubestr.");
        break;
    }
    case 123643:
    {
        returnValue = F("Grubet");
        break;
    }
    case 123644:
    {
        returnValue = F("Grubetstr.");
        break;
    }
    case 123645:
    {
        returnValue = F("Grubfeld");
        break;
    }
    case 123646:
    {
        returnValue = F("Grubfeldweg");
        break;
    }
    case 123647:
    {
        returnValue = F("Grubgraben");
        break;
    }
    case 123648:
    {
        returnValue = F("Grubhof");
        break;
    }
    case 123649:
    {
        returnValue = F("Grubhofstr.");
        break;
    }
    case 123650:
    {
        returnValue = F("Grubhofweg");
        break;
    }
    case 123651:
    {
        returnValue = F("Grubholzer Str.");
        break;
    }
    case 123652:
    {
        returnValue = F("Grubichweg");
        break;
    }
    case 123653:
    {
        returnValue = F("Grubigsteinstr.");
        break;
    }
    case 123654:
    {
        returnValue = F("Grubinger Str.");
        break;
    }
    case 123655:
    {
        returnValue = F("Grubjauchert");
        break;
    }
    case 123656:
    {
        returnValue = F("Grubjauchertsteigle");
        break;
    }
    case 123657:
    {
        returnValue = F("Grubke");
        break;
    }
    case 123658:
    {
        returnValue = F("Grublach");
        break;
    }
    case 123659:
    {
        returnValue = F("Grubmühl");
        break;
    }
    case 123660:
    {
        returnValue = F("Grubmühlerfeldstr.");
        break;
    }
    case 123661:
    {
        returnValue = F("Grubmühlstr.");
        break;
    }
    case 123662:
    {
        returnValue = F("Grubmüllerweg");
        break;
    }
    case 123663:
    {
        returnValue = F("Grubnitzer Dorfstr.");
        break;
    }
    case 123664:
    {
        returnValue = F("Grubnitzer Str.");
        break;
    }
    case 123665:
    {
        returnValue = F("Grubnow");
        break;
    }
    case 123666:
    {
        returnValue = F("Gruboer Hauptstr.");
        break;
    }
    case 123667:
    {
        returnValue = F("Gruboer Str.");
        break;
    }
    case 123668:
    {
        returnValue = F("Gruboer Weg");
        break;
    }
    case 123669:
    {
        returnValue = F("Grubstockweg");
        break;
    }
    case 123670:
    {
        returnValue = F("Grubstr.");
        break;
    }
    case 123671:
    {
        returnValue = F("Grubwasen");
        break;
    }
    case 123672:
    {
        returnValue = F("Grubweg");
        break;
    }
    case 123673:
    {
        returnValue = F("Grubwieserweg");
        break;
    }
    case 123674:
    {
        returnValue = F("Grubwinkl");
        break;
    }
    case 123675:
    {
        returnValue = F("Grubäcker");
        break;
    }
    case 123676:
    {
        returnValue = F("Grubäckerweg");
        break;
    }
    case 123677:
    {
        returnValue = F("Gruböd");
        break;
    }
    case 123678:
    {
        returnValue = F("Grubödstr.");
        break;
    }
    case 123679:
    {
        returnValue = F("Gruckinger Str.");
        break;
    }
    case 123680:
    {
        returnValue = F("Grudenberg");
        break;
    }
    case 123681:
    {
        returnValue = F("Grudene");
        break;
    }
    case 123682:
    {
        returnValue = F("Grueler Str.");
        break;
    }
    case 123683:
    {
        returnValue = F("Gruene Aue");
        break;
    }
    case 123684:
    {
        returnValue = F("Gruenewaldsweg");
        break;
    }
    case 123685:
    {
        returnValue = F("Gruftgarten");
        break;
    }
    case 123686:
    {
        returnValue = F("Gruftgasse");
        break;
    }
    case 123687:
    {
        returnValue = F("Gruftstr.");
        break;
    }
    case 123688:
    {
        returnValue = F("Gruftweg");
        break;
    }
    case 123689:
    {
        returnValue = F("Grugstatt");
        break;
    }
    case 123690:
    {
        returnValue = F("Gruhbachstr.");
        break;
    }
    case 123691:
    {
        returnValue = F("Gruhl");
        break;
    }
    case 123692:
    {
        returnValue = F("Gruhles Weg");
        break;
    }
    case 123693:
    {
        returnValue = F("Gruhlstr.");
        break;
    }
    case 123694:
    {
        returnValue = F("Gruhnoer Hauptstr.");
        break;
    }
    case 123695:
    {
        returnValue = F("Gruhnoer Str.");
        break;
    }
    case 123696:
    {
        returnValue = F("Gruibinger Str.");
        break;
    }
    case 123697:
    {
        returnValue = F("Gruissem");
        break;
    }
    case 123698:
    {
        returnValue = F("Gruitener Str.");
        break;
    }
    case 123699:
    {
        returnValue = F("Gruitener Weg");
        break;
    }
    case 123700:
    {
        returnValue = F("Gruland");
        break;
    }
    case 123701:
    {
        returnValue = F("Grulandstr.");
        break;
    }
    case 123702:
    {
        returnValue = F("Grullbadstr.");
        break;
    }
    case 123703:
    {
        returnValue = F("Grumbach");
        break;
    }
    case 123704:
    {
        returnValue = F("Grumbacher Anger");
        break;
    }
    case 123705:
    {
        returnValue = F("Grumbacher Str.");
        break;
    }
    case 123706:
    {
        returnValue = F("Grumbacher Weg");
        break;
    }
    case 123707:
    {
        returnValue = F("Grumbachshohl");
        break;
    }
    case 123708:
    {
        returnValue = F("Grumbachsiedlung");
        break;
    }
    case 123709:
    {
        returnValue = F("Grumbachstr.");
        break;
    }
    case 123710:
    {
        returnValue = F("Grumbachweg");
        break;
    }
    case 123711:
    {
        returnValue = F("Grumbwiesenweg");
        break;
    }
    case 123712:
    {
        returnValue = F("Grumby");
        break;
    }
    case 123713:
    {
        returnValue = F("Grumbyer Weg");
        break;
    }
    case 123714:
    {
        returnValue = F("Grumetfeld");
        break;
    }
    case 123715:
    {
        returnValue = F("Grumether Str.");
        break;
    }
    case 123716:
    {
        returnValue = F("Grumkiel");
        break;
    }
    case 123717:
    {
        returnValue = F("Grummbachweg");
        break;
    }
    case 123718:
    {
        returnValue = F("Grummersorter Dorfstr.");
        break;
    }
    case 123719:
    {
        returnValue = F("Grummertskamp");
        break;
    }
    case 123720:
    {
        returnValue = F("Grummes Ort");
        break;
    }
    case 123721:
    {
        returnValue = F("Grummetpfad");
        break;
    }
    case 123722:
    {
        returnValue = F("Grummetsreutstr.");
        break;
    }
    case 123723:
    {
        returnValue = F("Grummetswies");
        break;
    }
    case 123724:
    {
        returnValue = F("Grummetswiese");
        break;
    }
    case 123725:
    {
        returnValue = F("Grummetweg");
        break;
    }
    case 123726:
    {
        returnValue = F("Grummetwiese");
        break;
    }
    case 123727:
    {
        returnValue = F("Grummetwiesen");
        break;
    }
    case 123728:
    {
        returnValue = F("Grummich");
        break;
    }
    case 123729:
    {
        returnValue = F("Grummt-Gässchen");
        break;
    }
    case 123730:
    {
        returnValue = F("Grumpen");
        break;
    }
    case 123731:
    {
        returnValue = F("Grumpenweg");
        break;
    }
    case 123732:
    {
        returnValue = F("Grumtwiesen");
        break;
    }
    case 123733:
    {
        returnValue = F("Grunaer Bogen");
        break;
    }
    case 123734:
    {
        returnValue = F("Grunaer Damm");
        break;
    }
    case 123735:
    {
        returnValue = F("Grunaer Hauptstr.");
        break;
    }
    case 123736:
    {
        returnValue = F("Grunaer Weg");
        break;
    }
    case 123737:
    {
        returnValue = F("Grunagasse");
        break;
    }
    case 123738:
    {
        returnValue = F("Grunauer Str.");
        break;
    }
    case 123739:
    {
        returnValue = F("Grunauer Weg");
        break;
    }
    case 123740:
    {
        returnValue = F("Grunaustr.");
        break;
    }
    case 123741:
    {
        returnValue = F("Grunaweg");
        break;
    }
    case 123742:
    {
        returnValue = F("Grunbach Bahnhof");
        break;
    }
    case 123743:
    {
        returnValue = F("Grunbacher Str.");
        break;
    }
    case 123744:
    {
        returnValue = F("Grunbacher Weg");
        break;
    }
    case 123745:
    {
        returnValue = F("Grunbacherstr.");
        break;
    }
    case 123746:
    {
        returnValue = F("Grunbachsträßle");
        break;
    }
    case 123747:
    {
        returnValue = F("Grund");
        break;
    }
    case 123748:
    {
        returnValue = F("Grund-Schneise");
        break;
    }
    case 123749:
    {
        returnValue = F("Grundablass");
        break;
    }
    case 123750:
    {
        returnValue = F("Grundacker");
        break;
    }
    case 123751:
    {
        returnValue = F("Grundackergasse");
        break;
    }
    case 123752:
    {
        returnValue = F("Grundackerstr.");
        break;
    }
    case 123753:
    {
        returnValue = F("Grundackerweg");
        break;
    }
    case 123754:
    {
        returnValue = F("Grundauer Weg");
        break;
    }
    case 123755:
    {
        returnValue = F("Grundbach-Brücke");
        break;
    }
    case 123756:
    {
        returnValue = F("Grundbachstr.");
        break;
    }
    case 123757:
    {
        returnValue = F("Grundbachtal");
        break;
    }
    case 123758:
    {
        returnValue = F("Grundbachweg");
        break;
    }
    case 123759:
    {
        returnValue = F("Grundberg");
        break;
    }
    case 123760:
    {
        returnValue = F("Grundbergstr.");
        break;
    }
    case 123761:
    {
        returnValue = F("Grundbergweg");
        break;
    }
    case 123762:
    {
        returnValue = F("Grundborn");
        break;
    }
    case 123763:
    {
        returnValue = F("Grundbreehe");
        break;
    }
    case 123764:
    {
        returnValue = F("Grundbrücke");
        break;
    }
    case 123765:
    {
        returnValue = F("Grundchaussee");
        break;
    }
    case 123766:
    {
        returnValue = F("Grunddickeweg");
        break;
    }
    case 123767:
    {
        returnValue = F("Grundecke");
        break;
    }
    case 123768:
    {
        returnValue = F("Grundeckweg");
        break;
    }
    case 123769:
    {
        returnValue = F("Grundegertstr.");
        break;
    }
    case 123770:
    {
        returnValue = F("Grundeiche");
        break;
    }
    case 123771:
    {
        returnValue = F("Grundelbachstr.");
        break;
    }
    case 123772:
    {
        returnValue = F("Grundelbachweg");
        break;
    }
    case 123773:
    {
        returnValue = F("Grundelgraben");
        break;
    }
    case 123774:
    {
        returnValue = F("Grundelhalde");
        break;
    }
    case 123775:
    {
        returnValue = F("Grunder Redder");
        break;
    }
    case 123776:
    {
        returnValue = F("Grunder Schulweg");
        break;
    }
    case 123777:
    {
        returnValue = F("Grunder Str.");
        break;
    }
    case 123778:
    {
        returnValue = F("Grunder Weg");
        break;
    }
    case 123779:
    {
        returnValue = F("Grunder Wiesen");
        break;
    }
    case 123780:
    {
        returnValue = F("Grunderfurt");
        break;
    }
    case 123781:
    {
        returnValue = F("Grundermühle");
        break;
    }
    case 123782:
    {
        returnValue = F("Grundermühlenweg");
        break;
    }
    case 123783:
    {
        returnValue = F("Grunderweg");
        break;
    }
    case 123784:
    {
        returnValue = F("Grunderwiesenweg");
        break;
    }
    case 123785:
    {
        returnValue = F("Grundesch");
        break;
    }
    case 123786:
    {
        returnValue = F("Grundfeld");
        break;
    }
    case 123787:
    {
        returnValue = F("Grundfelder Str.");
        break;
    }
    case 123788:
    {
        returnValue = F("Grundfeldstr.");
        break;
    }
    case 123789:
    {
        returnValue = F("Grundfeldweg");
        break;
    }
    case 123790:
    {
        returnValue = F("Grundgartenstr.");
        break;
    }
    case 123791:
    {
        returnValue = F("Grundgasse");
        break;
    }
    case 123792:
    {
        returnValue = F("Grundgotte");
        break;
    }
    case 123793:
    {
        returnValue = F("Grundgrabenweg");
        break;
    }
    case 123794:
    {
        returnValue = F("Grundhalde");
        break;
    }
    case 123795:
    {
        returnValue = F("Grundhaldenweg");
        break;
    }
    case 123796:
    {
        returnValue = F("Grundhauallee");
        break;
    }
    case 123797:
    {
        returnValue = F("Grundherrstr.");
        break;
    }
    case 123798:
    {
        returnValue = F("Grundhof");
        break;
    }
    case 123799:
    {
        returnValue = F("Grundhofer Str.");
        break;
    }
    case 123800:
    {
        returnValue = F("Grundhoffelder Str.");
        break;
    }
    case 123801:
    {
        returnValue = F("Grundhofstr.");
        break;
    }
    case 123802:
    {
        returnValue = F("Grundhofweg");
        break;
    }
    case 123803:
    {
        returnValue = F("Grundhohl");
        break;
    }
    case 123804:
    {
        returnValue = F("Grundhäuser");
        break;
    }
    case 123805:
    {
        returnValue = F("Grundigstr.");
        break;
    }
    case 123806:
    {
        returnValue = F("Grundkampweg");
        break;
    }
    case 123807:
    {
        returnValue = F("Grundkoppeln");
        break;
    }
    case 123808:
    {
        returnValue = F("Grundlachen");
        break;
    }
    case 123809:
    {
        returnValue = F("Grundmannstr.");
        break;
    }
    case 123810:
    {
        returnValue = F("Grundmattenweg");
        break;
    }
    case 123811:
    {
        returnValue = F("Grundmattstr.");
        break;
    }
    case 123812:
    {
        returnValue = F("Grundmühle");
        break;
    }
    case 123813:
    {
        returnValue = F("Grundmühlenstr.");
        break;
    }
    case 123814:
    {
        returnValue = F("Grundmühlenweg");
        break;
    }
    case 123815:
    {
        returnValue = F("Grundmühlstr.");
        break;
    }
    case 123816:
    {
        returnValue = F("Grundner Str.");
        break;
    }
    case 123817:
    {
        returnValue = F("Grundnerweg");
        break;
    }
    case 123818:
    {
        returnValue = F("Grundpatt");
        break;
    }
    case 123819:
    {
        returnValue = F("Grundritt");
        break;
    }
    case 123820:
    {
        returnValue = F("Grundscheidsweg");
        break;
    }
    case 123821:
    {
        returnValue = F("Grundschreinerstr.");
        break;
    }
    case 123822:
    {
        returnValue = F("Grundschulstr.");
        break;
    }
    case 123823:
    {
        returnValue = F("Grundschulweg");
        break;
    }
    case 123824:
    {
        returnValue = F("Grundseeschneise");
        break;
    }
    case 123825:
    {
        returnValue = F("Grundsheimer Str.");
        break;
    }
    case 123826:
    {
        returnValue = F("Grundsmistweg");
        break;
    }
    case 123827:
    {
        returnValue = F("Grundsmühle");
        break;
    }
    case 123828:
    {
        returnValue = F("Grundsteige");
        break;
    }
    case 123829:
    {
        returnValue = F("Grundsteinheimer Weg");
        break;
    }
    case 123830:
    {
        returnValue = F("Grundstr.");
        break;
    }
    case 123831:
    {
        returnValue = F("Grundstöber");
        break;
    }
    case 123832:
    {
        returnValue = F("Grundstück");
        break;
    }
    case 123833:
    {
        returnValue = F("Grundtalring");
        break;
    }
    case 123834:
    {
        returnValue = F("Grundtalweg");
        break;
    }
    case 123835:
    {
        returnValue = F("Grundtappen");
        break;
    }
    case 123836:
    {
        returnValue = F("Grundteichstr.");
        break;
    }
    case 123837:
    {
        returnValue = F("Grundteichweg");
        break;
    }
    case 123838:
    {
        returnValue = F("Grundteufelsrechweg");
        break;
    }
    case 123839:
    {
        returnValue = F("Grundtstr.");
        break;
    }
    case 123840:
    {
        returnValue = F("Grundtvigstr.");
        break;
    }
    case 123841:
    {
        returnValue = F("Grundwaldweg");
        break;
    }
    case 123842:
    {
        returnValue = F("Grundweg");
        break;
    }
    case 123843:
    {
        returnValue = F("Grundwegskamp");
        break;
    }
    case 123844:
    {
        returnValue = F("Grundweinberge");
        break;
    }
    case 123845:
    {
        returnValue = F("Grundwiese");
        break;
    }
    case 123846:
    {
        returnValue = F("Grundwiesen");
        break;
    }
    case 123847:
    {
        returnValue = F("Grundwiesenhaldenweg");
        break;
    }
    case 123848:
    {
        returnValue = F("Grundwiesenstr.");
        break;
    }
    case 123849:
    {
        returnValue = F("Grundwiesenweg");
        break;
    }
    case 123850:
    {
        returnValue = F("Grundäcker");
        break;
    }
    case 123851:
    {
        returnValue = F("Grundäckerstr.");
        break;
    }
    case 123852:
    {
        returnValue = F("Grundäckerweg");
        break;
    }
    case 123853:
    {
        returnValue = F("Gruneplatzweg");
        break;
    }
    case 123854:
    {
        returnValue = F("Grunerner Str.");
        break;
    }
    case 123855:
    {
        returnValue = F("Grunerner Weg");
        break;
    }
    case 123856:
    {
        returnValue = F("Grunerstr.");
        break;
    }
    case 123857:
    {
        returnValue = F("Grunertberg");
        break;
    }
    case 123858:
    {
        returnValue = F("Grunerweg");
        break;
    }
    case 123859:
    {
        returnValue = F("Grunewald");
        break;
    }
    case 123860:
    {
        returnValue = F("Grunewald-, Keller-, Trollweg");
        break;
    }
    case 123861:
    {
        returnValue = F("Grunewalder Dorfstr.");
        break;
    }
    case 123862:
    {
        returnValue = F("Grunewalder Hauptstr.");
        break;
    }
    case 123863:
    {
        returnValue = F("Grunewalder Parkstr.");
        break;
    }
    case 123864:
    {
        returnValue = F("Grunewalder Str.");
        break;
    }
    case 123865:
    {
        returnValue = F("Grunewaldstr.");
        break;
    }
    case 123866:
    {
        returnValue = F("Grunewallstr.");
        break;
    }
    case 123867:
    {
        returnValue = F("Grunholzer Str.");
        break;
    }
    case 123868:
    {
        returnValue = F("Grunower Str.");
        break;
    }
    case 123869:
    {
        returnValue = F("Grunower Weg");
        break;
    }
    case 123870:
    {
        returnValue = F("Grunstr.");
        break;
    }
    case 123871:
    {
        returnValue = F("Gruntal");
        break;
    }
    case 123872:
    {
        returnValue = F("Grunthalplatz");
        break;
    }
    case 123873:
    {
        returnValue = F("Grunwaldweg");
        break;
    }
    case 123874:
    {
        returnValue = F("Gruoler Steig");
        break;
    }
    case 123875:
    {
        returnValue = F("Gruoler Str.");
        break;
    }
    case 123876:
    {
        returnValue = F("Gruorner Str.");
        break;
    }
    case 123877:
    {
        returnValue = F("Gruorner Weg");
        break;
    }
    case 123878:
    {
        returnValue = F("Grupenbergstr.");
        break;
    }
    case 123879:
    {
        returnValue = F("Grupenhagen-Kuhle");
        break;
    }
    case 123880:
    {
        returnValue = F("Grupenhäger Bruch");
        break;
    }
    case 123881:
    {
        returnValue = F("Grupenhäger Kirchweg");
        break;
    }
    case 123882:
    {
        returnValue = F("Grupenstr.");
        break;
    }
    case 123883:
    {
        returnValue = F("Gruppenbacher Str.");
        break;
    }
    case 123884:
    {
        returnValue = F("Gruppenplatzstr.");
        break;
    }
    case 123885:
    {
        returnValue = F("Gruppenstr.");
        break;
    }
    case 123886:
    {
        returnValue = F("Gruppich");
        break;
    }
    case 123887:
    {
        returnValue = F("Gruppweg");
        break;
    }
    case 123888:
    {
        returnValue = F("Grupshausener Str.");
        break;
    }
    case 123889:
    {
        returnValue = F("Gruschelheck");
        break;
    }
    case 123890:
    {
        returnValue = F("Gruscheweg");
        break;
    }
    case 123891:
    {
        returnValue = F("Grusilochweg");
        break;
    }
    case 123892:
    {
        returnValue = F("Grusonstr.");
        break;
    }
    case 123893:
    {
        returnValue = F("Grute Wiese");
        break;
    }
    case 123894:
    {
        returnValue = F("Grutholzstr.");
        break;
    }
    case 123895:
    {
        returnValue = F("Grutschke");
        break;
    }
    case 123896:
    {
        returnValue = F("Grutstich");
        break;
    }
    case 123897:
    {
        returnValue = F("Gruttau");
        break;
    }
    case 123898:
    {
        returnValue = F("Gruttensteingasse");
        break;
    }
    case 123899:
    {
        returnValue = F("Gruttensteinstr.");
        break;
    }
    case 123900:
    {
        returnValue = F("Gruttkuhlenweg");
        break;
    }
    case 123901:
    {
        returnValue = F("Gruttorfer Weg");
        break;
    }
    case 123902:
    {
        returnValue = F("Gruuslandweg");
        break;
    }
    case 123903:
    {
        returnValue = F("Grußendorfer Str.");
        break;
    }
    case 123904:
    {
        returnValue = F("Grußgasse");
        break;
    }
    case 123905:
    {
        returnValue = F("Grußgäßchen");
        break;
    }
    case 123906:
    {
        returnValue = F("Gräbbachweg");
        break;
    }
    case 123907:
    {
        returnValue = F("Gräbchen");
        break;
    }
    case 123908:
    {
        returnValue = F("Gräbelesbergstr.");
        break;
    }
    case 123909:
    {
        returnValue = F("Gräbelesbergweg");
        break;
    }
    case 123910:
    {
        returnValue = F("Gräbelgasse");
        break;
    }
    case 123911:
    {
        returnValue = F("Gräbelsweg");
        break;
    }
    case 123912:
    {
        returnValue = F("Gräben");
        break;
    }
    case 123913:
    {
        returnValue = F("Gräbenbachweg");
        break;
    }
    case 123914:
    {
        returnValue = F("Gräbendorfer Allee");
        break;
    }
    case 123915:
    {
        returnValue = F("Gräbendorfer Str.");
        break;
    }
    case 123916:
    {
        returnValue = F("Gräbendorfer Weg");
        break;
    }
    case 123917:
    {
        returnValue = F("Gräbenen");
        break;
    }
    case 123918:
    {
        returnValue = F("Gräbengasse");
        break;
    }
    case 123919:
    {
        returnValue = F("Gräbenhorst");
        break;
    }
    case 123920:
    {
        returnValue = F("Gräbenrain");
        break;
    }
    case 123921:
    {
        returnValue = F("Gräbenreute");
        break;
    }
    case 123922:
    {
        returnValue = F("Gräbenstr.");
        break;
    }
    case 123923:
    {
        returnValue = F("Gräbenweg");
        break;
    }
    case 123924:
    {
        returnValue = F("Gräbenwiesen");
        break;
    }
    case 123925:
    {
        returnValue = F("Gräbenäcker");
        break;
    }
    case 123926:
    {
        returnValue = F("Gräberei");
        break;
    }
    case 123927:
    {
        returnValue = F("Gräberfeldstr.");
        break;
    }
    case 123928:
    {
        returnValue = F("Gräberpfad");
        break;
    }
    case 123929:
    {
        returnValue = F("Gräberstr.");
        break;
    }
    case 123930:
    {
        returnValue = F("Gräberweg");
        break;
    }
    case 123931:
    {
        returnValue = F("Gräbeweg");
        break;
    }
    case 123932:
    {
        returnValue = F("Gräblein");
        break;
    }
    case 123933:
    {
        returnValue = F("Gräbleshauweg");
        break;
    }
    case 123934:
    {
        returnValue = F("Gräblesweg");
        break;
    }
    case 123935:
    {
        returnValue = F("Gräbleswiesenweg");
        break;
    }
    case 123936:
    {
        returnValue = F("Gräblesäcker");
        break;
    }
    case 123937:
    {
        returnValue = F("Gräbscher Winkel");
        break;
    }
    case 123938:
    {
        returnValue = F("Grädiekstr.");
        break;
    }
    case 123939:
    {
        returnValue = F("Gräfenau");
        break;
    }
    case 123940:
    {
        returnValue = F("Gräfenaustr.");
        break;
    }
    case 123941:
    {
        returnValue = F("Gräfenbachblick");
        break;
    }
    case 123942:
    {
        returnValue = F("Gräfenbacher Hütte");
        break;
    }
    case 123943:
    {
        returnValue = F("Gräfenbachstr.");
        break;
    }
    case 123944:
    {
        returnValue = F("Gräfenberger Str.");
        break;
    }
    case 123945:
    {
        returnValue = F("Gräfenbergstr.");
        break;
    }
    case 123946:
    {
        returnValue = F("Gräfenbergweg");
        break;
    }
    case 123947:
    {
        returnValue = F("Gräfenbitz");
        break;
    }
    case 123948:
    {
        returnValue = F("Gräfenbrunner Str.");
        break;
    }
    case 123949:
    {
        returnValue = F("Gräfenbrück");
        break;
    }
    case 123950:
    {
        returnValue = F("Gräfenbrücker Str.");
        break;
    }
    case 123951:
    {
        returnValue = F("Gräfenbuschweg");
        break;
    }
    case 123952:
    {
        returnValue = F("Gräfendhorner Weg");
        break;
    }
    case 123953:
    {
        returnValue = F("Gräfendhroner Weg");
        break;
    }
    case 123954:
    {
        returnValue = F("Gräfendorfer Str.");
        break;
    }
    case 123955:
    {
        returnValue = F("Gräfendorfer Weg");
        break;
    }
    case 123956:
    {
        returnValue = F("Gräfenhainer Str.");
        break;
    }
    case 123957:
    {
        returnValue = F("Gräfenhainicher Str.");
        break;
    }
    case 123958:
    {
        returnValue = F("Gräfenhardt");
        break;
    }
    case 123959:
    {
        returnValue = F("Gräfenhausen-Neuenbürger-Weg");
        break;
    }
    case 123960:
    {
        returnValue = F("Gräfenhausener Str.");
        break;
    }
    case 123961:
    {
        returnValue = F("Gräfenhofweg");
        break;
    }
    case 123962:
    {
        returnValue = F("Gräfenhohner Str.");
        break;
    }
    case 123963:
    {
        returnValue = F("Gräfenholz");
        break;
    }
    case 123964:
    {
        returnValue = F("Gräfenhäuser Str.");
        break;
    }
    case 123965:
    {
        returnValue = F("Gräfenhäuser Weg");
        break;
    }
    case 123966:
    {
        returnValue = F("Gräfenhäuslinger Str.");
        break;
    }
    case 123967:
    {
        returnValue = F("Gräfenleite");
        break;
    }
    case 123968:
    {
        returnValue = F("Gräfenortstr.");
        break;
    }
    case 123969:
    {
        returnValue = F("Gräfenrodaer Str.");
        break;
    }
    case 123970:
    {
        returnValue = F("Gräfensteiner Str.");
        break;
    }
    case 123971:
    {
        returnValue = F("Gräfensteinstr.");
        break;
    }
    case 123972:
    {
        returnValue = F("Gräfenstühler Str.");
        break;
    }
    case 123973:
    {
        returnValue = F("Gräfensuhr");
        break;
    }
    case 123974:
    {
        returnValue = F("Gräfental");
        break;
    }
    case 123975:
    {
        returnValue = F("Gräfenthaler Str.");
        break;
    }
    case 123976:
    {
        returnValue = F("Gräfenthaler Weg");
        break;
    }
    case 123977:
    {
        returnValue = F("Gräfenthalstr.");
        break;
    }
    case 123978:
    {
        returnValue = F("Gräfentonnaer Str.");
        break;
    }
    case 123979:
    {
        returnValue = F("Gräfentor");
        break;
    }
    case 123980:
    {
        returnValue = F("Gräfenwaldstr.");
        break;
    }
    case 123981:
    {
        returnValue = F("Gräfenweg");
        break;
    }
    case 123982:
    {
        returnValue = F("Gräferstr.");
        break;
    }
    case 123983:
    {
        returnValue = F("Gräffinger Str.");
        break;
    }
    case 123984:
    {
        returnValue = F("Gräffstr.");
        break;
    }
    case 123985:
    {
        returnValue = F("Gräfgenstein");
        break;
    }
    case 123986:
    {
        returnValue = F("Gräfgesweg");
        break;
    }
    case 123987:
    {
        returnValue = F("Gräfin-Adela-Weg");
        break;
    }
    case 123988:
    {
        returnValue = F("Gräfin-Adelheid-Str.");
        break;
    }
    case 123989:
    {
        returnValue = F("Gräfin-Alberada-Ring");
        break;
    }
    case 123990:
    {
        returnValue = F("Gräfin-Anna-Str.");
        break;
    }
    case 123991:
    {
        returnValue = F("Gräfin-Augusta-Str.");
        break;
    }
    case 123992:
    {
        returnValue = F("Gräfin-Bertha-Str.");
        break;
    }
    case 123993:
    {
        returnValue = F("Gräfin-Blücher-Weg");
        break;
    }
    case 123994:
    {
        returnValue = F("Gräfin-Chuniza-Str.");
        break;
    }
    case 123995:
    {
        returnValue = F("Gräfin-Deym-Str.");
        break;
    }
    case 123996:
    {
        returnValue = F("Gräfin-Dönhoff-Ring");
        break;
    }
    case 123997:
    {
        returnValue = F("Gräfin-Dönhoff-Str.");
        break;
    }
    case 123998:
    {
        returnValue = F("Gräfin-Elisabeth-Str.");
        break;
    }
    case 123999:
    {
        returnValue = F("Gräfin-Elisabeth-Weg");
        break;
    }
    case 124000:
    {
        returnValue = F("Gräfin-Else-Weg");
        break;
    }
    case 124001:
    {
        returnValue = F("Gräfin-Ernestine-Str.");
        break;
    }
    case 124002:
    {
        returnValue = F("Gräfin-Euphemia-Str.");
        break;
    }
    case 124003:
    {
        returnValue = F("Gräfin-Hedwig-Str.");
        break;
    }
    case 124004:
    {
        returnValue = F("Gräfin-Helene-Str.");
        break;
    }
    case 124005:
    {
        returnValue = F("Gräfin-Hildgard-Str.");
        break;
    }
    case 124006:
    {
        returnValue = F("Gräfin-Irmgard-v.-Bentzel-Ring");
        break;
    }
    case 124007:
    {
        returnValue = F("Gräfin-Julia-Str.");
        break;
    }
    case 124008:
    {
        returnValue = F("Gräfin-Juliane-Weg");
        break;
    }
    case 124009:
    {
        returnValue = F("Gräfin-Justitia-Str.");
        break;
    }
    case 124010:
    {
        returnValue = F("Gräfin-Jutta-Str.");
        break;
    }
    case 124011:
    {
        returnValue = F("Gräfin-Kielmansegge-Str.");
        break;
    }
    case 124012:
    {
        returnValue = F("Gräfin-Königsmarck-Str.");
        break;
    }
    case 124013:
    {
        returnValue = F("Gräfin-Leutrum-Str.");
        break;
    }
    case 124014:
    {
        returnValue = F("Gräfin-Loretta-Str.");
        break;
    }
    case 124015:
    {
        returnValue = F("Gräfin-Loretta-Weg");
        break;
    }
    case 124016:
    {
        returnValue = F("Gräfin-Margarete-Allee");
        break;
    }
    case 124017:
    {
        returnValue = F("Gräfin-Monika-Platz");
        break;
    }
    case 124018:
    {
        returnValue = F("Gräfin-Monika-Str.");
        break;
    }
    case 124019:
    {
        returnValue = F("Gräfin-Monts-Str.");
        break;
    }
    case 124020:
    {
        returnValue = F("Gräfin-Richardis-Str.");
        break;
    }
    case 124021:
    {
        returnValue = F("Gräfin-Richlind-Weg");
        break;
    }
    case 124022:
    {
        returnValue = F("Gräfin-Sara-Str.");
        break;
    }
    case 124023:
    {
        returnValue = F("Gräfin-Sayn-Str.");
        break;
    }
    case 124024:
    {
        returnValue = F("Gräfin-Schlippenbach-Weg");
        break;
    }
    case 124025:
    {
        returnValue = F("Gräfin-Sophie-Str.");
        break;
    }
    case 124026:
    {
        returnValue = F("Gräfin-Theda-Str.");
        break;
    }
    case 124027:
    {
        returnValue = F("Gräfin-Theda-Weg");
        break;
    }
    case 124028:
    {
        returnValue = F("Gräfin-Thekla-Weg");
        break;
    }
    case 124029:
    {
        returnValue = F("Gräfin-Waldersee-Str.");
        break;
    }
    case 124030:
    {
        returnValue = F("Gräfin-von-Maltzan-Weg");
        break;
    }
    case 124031:
    {
        returnValue = F("Gräfin-von-Mantua-Weg");
        break;
    }
    case 124032:
    {
        returnValue = F("Gräfinauer Str.");
        break;
    }
    case 124033:
    {
        returnValue = F("Gräfinghausen");
        break;
    }
    case 124034:
    {
        returnValue = F("Gräfingschulteweg");
        break;
    }
    case 124035:
    {
        returnValue = F("Gräfingsholz");
        break;
    }
    case 124036:
    {
        returnValue = F("Gräfinnenweg");
        break;
    }
    case 124037:
    {
        returnValue = F("Gräfinsteig");
        break;
    }
    case 124038:
    {
        returnValue = F("Gräfinstr.");
        break;
    }
    case 124039:
    {
        returnValue = F("Gräfinthaler Str.");
        break;
    }
    case 124040:
    {
        returnValue = F("Gräfliche Str.");
        break;
    }
    case 124041:
    {
        returnValue = F("Gräflicher Ring");
        break;
    }
    case 124042:
    {
        returnValue = F("Gräflicher Weg");
        break;
    }
    case 124043:
    {
        returnValue = F("Gräflingsberg");
        break;
    }
    case 124044:
    {
        returnValue = F("Gräflingsweg");
        break;
    }
    case 124045:
    {
        returnValue = F("Gräfrather Str.");
        break;
    }
    case 124046:
    {
        returnValue = F("Gräfte");
        break;
    }
    case 124047:
    {
        returnValue = F("Gräftendiek");
        break;
    }
    case 124048:
    {
        returnValue = F("Gräftenhof");
        break;
    }
    case 124049:
    {
        returnValue = F("Grähnsweg");
        break;
    }
    case 124050:
    {
        returnValue = F("Gränertstr.");
        break;
    }
    case 124051:
    {
        returnValue = F("Gränertweg");
        break;
    }
    case 124052:
    {
        returnValue = F("Gränitzer Str.");
        break;
    }
    case 124053:
    {
        returnValue = F("Gränzelweg");
        break;
    }
    case 124054:
    {
        returnValue = F("Gränzendorfer Str.");
        break;
    }
    case 124055:
    {
        returnValue = F("Gräpeler Str.");
        break;
    }
    case 124056:
    {
        returnValue = F("Gräpkenteich");
        break;
    }
    case 124057:
    {
        returnValue = F("Gräsbachstr.");
        break;
    }
    case 124058:
    {
        returnValue = F("Gräsebilde");
        break;
    }
    case 124059:
    {
        returnValue = F("Gräserfeldweg");
        break;
    }
    case 124060:
    {
        returnValue = F("Gräserichweg");
        break;
    }
    case 124061:
    {
        returnValue = F("Gräsersteig");
        break;
    }
    case 124062:
    {
        returnValue = F("Gräserweg");
        break;
    }
    case 124063:
    {
        returnValue = F("Gräsiger Weg");
        break;
    }
    case 124064:
    {
        returnValue = F("Gräsigweg");
        break;
    }
    case 124065:
    {
        returnValue = F("Gräslberg");
        break;
    }
    case 124066:
    {
        returnValue = F("Grässelstr.");
        break;
    }
    case 124067:
    {
        returnValue = F("Grässenäcker");
        break;
    }
    case 124068:
    {
        returnValue = F("Gräswaldstr.");
        break;
    }
    case 124069:
    {
        returnValue = F("Gräterstr.");
        break;
    }
    case 124070:
    {
        returnValue = F("Gräterweg");
        break;
    }
    case 124071:
    {
        returnValue = F("Gräthstr.");
        break;
    }
    case 124072:
    {
        returnValue = F("Grätz-Markersdorfer-Str.");
        break;
    }
    case 124073:
    {
        returnValue = F("Grätzberg");
        break;
    }
    case 124074:
    {
        returnValue = F("Grätzer Hof");
        break;
    }
    case 124075:
    {
        returnValue = F("Grätzer Str.");
        break;
    }
    case 124076:
    {
        returnValue = F("Grätzer Weg");
        break;
    }
    case 124077:
    {
        returnValue = F("Grätzsteig");
        break;
    }
    case 124078:
    {
        returnValue = F("Grätzstr.");
        break;
    }
    case 124079:
    {
        returnValue = F("Grävchen");
        break;
    }
    case 124080:
    {
        returnValue = F("Gräveheid");
        break;
    }
    case 124081:
    {
        returnValue = F("Grävenecker Str.");
        break;
    }
    case 124082:
    {
        returnValue = F("Grävenhardstr.");
        break;
    }
    case 124083:
    {
        returnValue = F("Grävenitz-Str.");
        break;
    }
    case 124084:
    {
        returnValue = F("Grävenitzstr.");
        break;
    }
    case 124085:
    {
        returnValue = F("Grävenitzweg");
        break;
    }
    case 124086:
    {
        returnValue = F("Grävenskuhlen");
        break;
    }
    case 124087:
    {
        returnValue = F("Grävenwiesbacher Str.");
        break;
    }
    case 124088:
    {
        returnValue = F("Gräwenkolkstr.");
        break;
    }
    case 124089:
    {
        returnValue = F("Gräwigstr.");
        break;
    }
    case 124090:
    {
        returnValue = F("Gräwigweg");
        break;
    }
    case 124091:
    {
        returnValue = F("Gräwingheide");
        break;
    }
    case 124092:
    {
        returnValue = F("Gräßlstr.");
        break;
    }
    case 124093:
    {
        returnValue = F("Gräßteweg");
        break;
    }
    case 124094:
    {
        returnValue = F("Gröbaer Platz");
        break;
    }
    case 124095:
    {
        returnValue = F("Gröbaer Str.");
        break;
    }
    case 124096:
    {
        returnValue = F("Gröbastr.");
        break;
    }
    case 124097:
    {
        returnValue = F("Gröbel");
        break;
    }
    case 124098:
    {
        returnValue = F("Gröbelmeierstr.");
        break;
    }
    case 124099:
    {
        returnValue = F("Gröbelweg");
        break;
    }
    case 124100:
    {
        returnValue = F("Gröbeläcker");
        break;
    }
    case 124101:
    {
        returnValue = F("Gröben");
        break;
    }
    case 124102:
    {
        returnValue = F("Gröbenbachstr.");
        break;
    }
    case 124103:
    {
        returnValue = F("Gröbenbachweg");
        break;
    }
    case 124104:
    {
        returnValue = F("Gröbener Allee");
        break;
    }
    case 124105:
    {
        returnValue = F("Gröbener Dorfstr.");
        break;
    }
    case 124106:
    {
        returnValue = F("Gröbener Heide");
        break;
    }
    case 124107:
    {
        returnValue = F("Gröbener Str.");
        break;
    }
    case 124108:
    {
        returnValue = F("Gröbener Waldstr.");
        break;
    }
    case 124109:
    {
        returnValue = F("Gröbenhüterstr.");
        break;
    }
    case 124110:
    {
        returnValue = F("Gröbenrieder Str.");
        break;
    }
    case 124111:
    {
        returnValue = F("Gröbenseeweg");
        break;
    }
    case 124112:
    {
        returnValue = F("Gröbenstr.");
        break;
    }
    case 124113:
    {
        returnValue = F("Gröbenstädter Str.");
        break;
    }
    case 124114:
    {
        returnValue = F("Gröbenzeller Str.");
        break;
    }
    case 124115:
    {
        returnValue = F("Gröberner Chausseestr.");
        break;
    }
    case 124116:
    {
        returnValue = F("Gröberner Dorfplatz");
        break;
    }
    case 124117:
    {
        returnValue = F("Gröberner Hauptstr.");
        break;
    }
    case 124118:
    {
        returnValue = F("Gröberner Str.");
        break;
    }
    case 124119:
    {
        returnValue = F("Gröberner Triftstr.");
        break;
    }
    case 124120:
    {
        returnValue = F("Gröbersche Str.");
        break;
    }
    case 124121:
    {
        returnValue = F("Gröberssche Str.");
        break;
    }
    case 124122:
    {
        returnValue = F("Gröberstr.");
        break;
    }
    case 124123:
    {
        returnValue = F("Gröberweg");
        break;
    }
    case 124124:
    {
        returnValue = F("Gröbitzer Hauptstr.");
        break;
    }
    case 124125:
    {
        returnValue = F("Gröbitzer Str.");
        break;
    }
    case 124126:
    {
        returnValue = F("Gröbitzer Weg");
        break;
    }
    case 124127:
    {
        returnValue = F("Gröblerstr.");
        break;
    }
    case 124128:
    {
        returnValue = F("Gröblingen");
        break;
    }
    case 124129:
    {
        returnValue = F("Gröblinger Str.");
        break;
    }
    case 124130:
    {
        returnValue = F("Gröblinger Weg");
        break;
    }
    case 124131:
    {
        returnValue = F("Gröblitzer Weg");
        break;
    }
    case 124132:
    {
        returnValue = F("Gröblweg");
        break;
    }
    case 124133:
    {
        returnValue = F("Gröbmaierstr.");
        break;
    }
    case 124134:
    {
        returnValue = F("Gröbmühlstr.");
        break;
    }
    case 124135:
    {
        returnValue = F("Gröbnestr.");
        break;
    }
    case 124136:
    {
        returnValue = F("Gröbschützer Str.");
        break;
    }
    case 124137:
    {
        returnValue = F("Gröbziger Str.");
        break;
    }
    case 124138:
    {
        returnValue = F("Gröbziger Weg");
        break;
    }
    case 124139:
    {
        returnValue = F("Gröchtenstr.");
        break;
    }
    case 124140:
    {
        returnValue = F("Gröchteweg");
        break;
    }
    case 124141:
    {
        returnValue = F("Gröchtmecke");
        break;
    }
    case 124142:
    {
        returnValue = F("Gröden Nord");
        break;
    }
    case 124143:
    {
        returnValue = F("Grödener Str.");
        break;
    }
    case 124144:
    {
        returnValue = F("Grödener Weg");
        break;
    }
    case 124145:
    {
        returnValue = F("Gröder Weg");
        break;
    }
    case 124146:
    {
        returnValue = F("Grödestieg");
        break;
    }
    case 124147:
    {
        returnValue = F("Grödeweg");
        break;
    }
    case 124148:
    {
        returnValue = F("Gröditzer Str.");
        break;
    }
    case 124149:
    {
        returnValue = F("Gröditzweg");
        break;
    }
    case 124150:
    {
        returnValue = F("Gröhnestr.");
        break;
    }
    case 124151:
    {
        returnValue = F("Grökelweg");
        break;
    }
    case 124152:
    {
        returnValue = F("Grölitzenstr.");
        break;
    }
    case 124153:
    {
        returnValue = F("Gröllbach");
        break;
    }
    case 124154:
    {
        returnValue = F("Grömbacher Str.");
        break;
    }
    case 124155:
    {
        returnValue = F("Grömbacher Weg");
        break;
    }
    case 124156:
    {
        returnValue = F("Grömer");
        break;
    }
    case 124157:
    {
        returnValue = F("Grömitzer Höhe");
        break;
    }
    case 124158:
    {
        returnValue = F("Grömitzer Ring");
        break;
    }
    case 124159:
    {
        returnValue = F("Grömitzer Str.");
        break;
    }
    case 124160:
    {
        returnValue = F("Grön Drift");
        break;
    }
    case 124161:
    {
        returnValue = F("Grön Hook");
        break;
    }
    case 124162:
    {
        returnValue = F("Grön Hörn");
        break;
    }
    case 124163:
    {
        returnValue = F("Grön Kamp");
        break;
    }
    case 124164:
    {
        returnValue = F("Grön Pad");
        break;
    }
    case 124165:
    {
        returnValue = F("Grön Stell");
        break;
    }
    case 124166:
    {
        returnValue = F("Grön Winkel");
        break;
    }
    case 124167:
    {
        returnValue = F("Grönauer Mühlenweg");
        break;
    }
    case 124168:
    {
        returnValue = F("Grönbäke");
        break;
    }
    case 124169:
    {
        returnValue = F("Gröndelle");
        break;
    }
    case 124170:
    {
        returnValue = F("Gröndlerweg");
        break;
    }
    case 124171:
    {
        returnValue = F("Gröne Wech");
        break;
    }
    case 124172:
    {
        returnValue = F("Gröne Weg");
        break;
    }
    case 124173:
    {
        returnValue = F("Gröne Werfmittelweg");
        break;
    }
    case 124174:
    {
        returnValue = F("Grönebacher Str.");
        break;
    }
    case 124175:
    {
        returnValue = F("Grönegauplatz");
        break;
    }
    case 124176:
    {
        returnValue = F("Grönegauweg");
        break;
    }
    case 124177:
    {
        returnValue = F("Gröneken");
        break;
    }
    case 124178:
    {
        returnValue = F("Grönenbacher Str.");
        break;
    }
    case 124179:
    {
        returnValue = F("Grönenberger Str.");
        break;
    }
    case 124180:
    {
        returnValue = F("Grönenbergpark");
        break;
    }
    case 124181:
    {
        returnValue = F("Gröner Born");
        break;
    }
    case 124182:
    {
        returnValue = F("Gröner Weg");
        break;
    }
    case 124183:
    {
        returnValue = F("Grönerstr.");
        break;
    }
    case 124184:
    {
        returnValue = F("Gröneweg");
        break;
    }
    case 124185:
    {
        returnValue = F("Grönewertweg");
        break;
    }
    case 124186:
    {
        returnValue = F("Grönfahrtweg");
        break;
    }
    case 124187:
    {
        returnValue = F("Gröngal");
        break;
    }
    case 124188:
    {
        returnValue = F("Grönheck");
        break;
    }
    case 124189:
    {
        returnValue = F("Grönheimer Feld");
        break;
    }
    case 124190:
    {
        returnValue = F("Grönheimer Str.");
        break;
    }
    case 124191:
    {
        returnValue = F("Grönholm");
        break;
    }
    case 124192:
    {
        returnValue = F("Grönhude");
        break;
    }
    case 124193:
    {
        returnValue = F("Gröniger Str.");
        break;
    }
    case 124194:
    {
        returnValue = F("Gröninger Hauptstr.");
        break;
    }
    case 124195:
    {
        returnValue = F("Gröninger Str.");
        break;
    }
    case 124196:
    {
        returnValue = F("Gröninger Weg");
        break;
    }
    case 124197:
    {
        returnValue = F("Gröningerhäuser");
        break;
    }
    case 124198:
    {
        returnValue = F("Gröningerstr.");
        break;
    }
    case 124199:
    {
        returnValue = F("Gröningerweg");
        break;
    }
    case 124200:
    {
        returnValue = F("Grönings Hoff");
        break;
    }
    case 124201:
    {
        returnValue = F("Grönings Venn");
        break;
    }
    case 124202:
    {
        returnValue = F("Grönings Weg");
        break;
    }
    case 124203:
    {
        returnValue = F("Gröningsgarten");
        break;
    }
    case 124204:
    {
        returnValue = F("Gröningstr.");
        break;
    }
    case 124205:
    {
        returnValue = F("Gröningsweg");
        break;
    }
    case 124206:
    {
        returnValue = F("Grönkamp");
        break;
    }
    case 124207:
    {
        returnValue = F("Grönland");
        break;
    }
    case 124208:
    {
        returnValue = F("Grönlandgang");
        break;
    }
    case 124209:
    {
        returnValue = F("Grönlandring");
        break;
    }
    case 124210:
    {
        returnValue = F("Grönlandstr.");
        break;
    }
    case 124211:
    {
        returnValue = F("Grönlandstrate");
        break;
    }
    case 124212:
    {
        returnValue = F("Grönloher Triftweg");
        break;
    }
    case 124213:
    {
        returnValue = F("Grönlund");
        break;
    }
    case 124214:
    {
        returnValue = F("Grönnigerstr.");
        break;
    }
    case 124215:
    {
        returnValue = F("Grönning");
        break;
    }
    case 124216:
    {
        returnValue = F("Gröns Esch");
        break;
    }
    case 124217:
    {
        returnValue = F("Grönsfurther Weg");
        break;
    }
    case 124218:
    {
        returnValue = F("Grönshoy");
        break;
    }
    case 124219:
    {
        returnValue = F("Grönwohlder Str.");
        break;
    }
    case 124220:
    {
        returnValue = F("Gröpelinger Str.");
        break;
    }
    case 124221:
    {
        returnValue = F("Gröpelstr.");
        break;
    }
    case 124222:
    {
        returnValue = F("Gröper Gärten");
        break;
    }
    case 124223:
    {
        returnValue = F("Gröpern");
        break;
    }
    case 124224:
    {
        returnValue = F("Gröperstr.");
        break;
    }
    case 124225:
    {
        returnValue = F("Gröpertor");
        break;
    }
    case 124226:
    {
        returnValue = F("Gröppendorfer Str.");
        break;
    }
    case 124227:
    {
        returnValue = F("Gröppendorfer Weg");
        break;
    }
    case 124228:
    {
        returnValue = F("Gröppenstr.");
        break;
    }
    case 124229:
    {
        returnValue = F("Gröppenweg");
        break;
    }
    case 124230:
    {
        returnValue = F("Gröpser Heg");
        break;
    }
    case 124231:
    {
        returnValue = F("Gröschelstr.");
        break;
    }
    case 124232:
    {
        returnValue = F("Gröschlstr.");
        break;
    }
    case 124233:
    {
        returnValue = F("Grössauer Str.");
        break;
    }
    case 124234:
    {
        returnValue = F("Grösselbergstr.");
        break;
    }
    case 124235:
    {
        returnValue = F("Grösselhangweg");
        break;
    }
    case 124236:
    {
        returnValue = F("Grösseltal");
        break;
    }
    case 124237:
    {
        returnValue = F("Grösseltalweg");
        break;
    }
    case 124238:
    {
        returnValue = F("Grösshof");
        break;
    }
    case 124239:
    {
        returnValue = F("Gröster Hohle");
        break;
    }
    case 124240:
    {
        returnValue = F("Grötschenreuth A");
        break;
    }
    case 124241:
    {
        returnValue = F("Grötschenreuth B");
        break;
    }
    case 124242:
    {
        returnValue = F("Grötschenreuth C");
        break;
    }
    case 124243:
    {
        returnValue = F("Grötschenreuth D");
        break;
    }
    case 124244:
    {
        returnValue = F("Grötschenreuth F");
        break;
    }
    case 124245:
    {
        returnValue = F("Grötschenreuth G");
        break;
    }
    case 124246:
    {
        returnValue = F("Grötschenreuth H");
        break;
    }
    case 124247:
    {
        returnValue = F("Grötschenreuther Str.");
        break;
    }
    case 124248:
    {
        returnValue = F("Grötscher Str.");
        break;
    }
    case 124249:
    {
        returnValue = F("Grötsweg");
        break;
    }
    case 124250:
    {
        returnValue = F("Gröttlerweg");
        break;
    }
    case 124251:
    {
        returnValue = F("Grötzelstr.");
        break;
    }
    case 124252:
    {
        returnValue = F("Grötzenberger Str.");
        break;
    }
    case 124253:
    {
        returnValue = F("Grötzenstr.");
        break;
    }
    case 124254:
    {
        returnValue = F("Grötzer Platz");
        break;
    }
    case 124255:
    {
        returnValue = F("Grötzer Str.");
        break;
    }
    case 124256:
    {
        returnValue = F("Grötzinger Str.");
        break;
    }
    case 124257:
    {
        returnValue = F("Grötzinger Weg");
        break;
    }
    case 124258:
    {
        returnValue = F("Größelbergstreuweg");
        break;
    }
    case 124259:
    {
        returnValue = F("Größenwiesenweg");
        break;
    }
    case 124260:
    {
        returnValue = F("Größeweg");
        break;
    }
    case 124261:
    {
        returnValue = F("Größinger Ring");
        break;
    }
    case 124262:
    {
        returnValue = F("Größlerstr.");
        break;
    }
    case 124263:
    {
        returnValue = F("Größnitz");
        break;
    }
    case 124264:
    {
        returnValue = F("Größnitzer Str.");
        break;
    }
    case 124265:
    {
        returnValue = F("Grübbenweg");
        break;
    }
    case 124266:
    {
        returnValue = F("Grübchen");
        break;
    }
    case 124267:
    {
        returnValue = F("Grübchenstr.");
        break;
    }
    case 124268:
    {
        returnValue = F("Grübeck");
        break;
    }
    case 124269:
    {
        returnValue = F("Grübecker Str.");
        break;
    }
    case 124270:
    {
        returnValue = F("Grübels");
        break;
    }
    case 124271:
    {
        returnValue = F("Grübelsberg");
        break;
    }
    case 124272:
    {
        returnValue = F("Grübelstr.");
        break;
    }
    case 124273:
    {
        returnValue = F("Grübelweg");
        break;
    }
    case 124274:
    {
        returnValue = F("Grübenhauweg");
        break;
    }
    case 124275:
    {
        returnValue = F("Grübenstr.");
        break;
    }
    case 124276:
    {
        returnValue = F("Grübenweg");
        break;
    }
    case 124277:
    {
        returnValue = F("Grüber Str.");
        break;
    }
    case 124278:
    {
        returnValue = F("Grüberstr.");
        break;
    }
    case 124279:
    {
        returnValue = F("Grübitzweg");
        break;
    }
    case 124280:
    {
        returnValue = F("Grüble");
        break;
    }
    case 124281:
    {
        returnValue = F("Grüblein");
        break;
    }
    case 124282:
    {
        returnValue = F("Grübleinsfeld");
        break;
    }
    case 124283:
    {
        returnValue = F("Grüblemattweg");
        break;
    }
    case 124284:
    {
        returnValue = F("Grüblesacker");
        break;
    }
    case 124285:
    {
        returnValue = F("Grübleweg");
        break;
    }
    case 124286:
    {
        returnValue = F("Grüblweg");
        break;
    }
    case 124287:
    {
        returnValue = F("Grübstr.");
        break;
    }
    case 124288:
    {
        returnValue = F("Grübweg");
        break;
    }
    case 124289:
    {
        returnValue = F("Grüfter Ring");
        break;
    }
    case 124290:
    {
        returnValue = F("Grüfter Str.");
        break;
    }
    case 124291:
    {
        returnValue = F("Grüftheck");
        break;
    }
    case 124292:
    {
        returnValue = F("Grügelborner Str.");
        break;
    }
    case 124293:
    {
        returnValue = F("Grüggelsiepen");
        break;
    }
    case 124294:
    {
        returnValue = F("Grühlingstr.");
        break;
    }
    case 124295:
    {
        returnValue = F("Grülinghstr.");
        break;
    }
    case 124296:
    {
        returnValue = F("Grümpelstr.");
        break;
    }
    case 124297:
    {
        returnValue = F("Grümpener Str.");
        break;
    }
    case 124298:
    {
        returnValue = F("Grün");
        break;
    }
    case 124299:
    {
        returnValue = F("Grün Gelb");
        break;
    }
    case 124300:
    {
        returnValue = F("Grün Kordshagen-Hauptstr.");
        break;
    }
    case 124301:
    {
        returnValue = F("Grün-Geräumt");
        break;
    }
    case 124302:
    {
        returnValue = F("Grün-Häusle-Weg");
        break;
    }
    case 124303:
    {
        returnValue = F("Grün-Redder");
        break;
    }
    case 124304:
    {
        returnValue = F("Grüna");
        break;
    }
    case 124305:
    {
        returnValue = F("Grünabfallplatz");
        break;
    }
    case 124306:
    {
        returnValue = F("Grünach");
        break;
    }
    case 124307:
    {
        returnValue = F("Grünachse Neue Mitte");
        break;
    }
    case 124308:
    {
        returnValue = F("Grünackerstr.");
        break;
    }
    case 124309:
    {
        returnValue = F("Grünackerweg");
        break;
    }
    case 124310:
    {
        returnValue = F("Grünaer Str.");
        break;
    }
    case 124311:
    {
        returnValue = F("Grünaer Weg");
        break;
    }
    case 124312:
    {
        returnValue = F("Grünaggerstr.");
        break;
    }
    case 124313:
    {
        returnValue = F("Grünallee");
        break;
    }
    case 124314:
    {
        returnValue = F("Grünanger");
        break;
    }
    case 124315:
    {
        returnValue = F("Grünangerweg");
        break;
    }
    case 124316:
    {
        returnValue = F("Grünanlage");
        break;
    }
    case 124317:
    {
        returnValue = F("Grünanlage \"Denkmal");
        break;
    }
    case 124318:
    {
        returnValue = F("Grünanlage Alte Tongrube");
        break;
    }
    case 124319:
    {
        returnValue = F("Grünanlage Dornacher Feld");
        break;
    }
    case 124320:
    {
        returnValue = F("Grünanlage Ecke Heimstättenweg");
        break;
    }
    case 124321:
    {
        returnValue = F("Grünanlage Grünzug Pflugfelden");
        break;
    }
    case 124322:
    {
        returnValue = F("Grünanlage Hungerberg");
        break;
    }
    case 124323:
    {
        returnValue = F("Grünanlage Kellerberg");
        break;
    }
    case 124324:
    {
        returnValue = F("Grünanlage Rathaus");
        break;
    }
    case 124325:
    {
        returnValue = F("Grünanlage Schafhofweg");
        break;
    }
    case 124326:
    {
        returnValue = F("Grünanlage Werkingstr.");
        break;
    }
    case 124327:
    {
        returnValue = F("Grünanlage am Hessenplatz");
        break;
    }
    case 124328:
    {
        returnValue = F("Grünanlage der Grillhütte");
        break;
    }
    case 124329:
    {
        returnValue = F("Grünanlage des Neubaugebiets Nord");
        break;
    }
    case 124330:
    {
        returnValue = F("Grünanlage rund ums Josefskapellchen");
        break;
    }
    case 124331:
    {
        returnValue = F("Grünau");
        break;
    }
    case 124332:
    {
        returnValue = F("Grünaue");
        break;
    }
    case 124333:
    {
        returnValue = F("Grünauer Allee");
        break;
    }
    case 124334:
    {
        returnValue = F("Grünauer Berg");
        break;
    }
    case 124335:
    {
        returnValue = F("Grünauer Forst");
        break;
    }
    case 124336:
    {
        returnValue = F("Grünauer Park");
        break;
    }
    case 124337:
    {
        returnValue = F("Grünauer Str.");
        break;
    }
    case 124338:
    {
        returnValue = F("Grünauer Weg");
        break;
    }
    case 124339:
    {
        returnValue = F("Grünaustr.");
        break;
    }
    case 124340:
    {
        returnValue = F("Grünauweg");
        break;
    }
    case 124341:
    {
        returnValue = F("Grünbach");
        break;
    }
    case 124342:
    {
        returnValue = F("Grünbacher Ring");
        break;
    }
    case 124343:
    {
        returnValue = F("Grünbacher Str.");
        break;
    }
    case 124344:
    {
        returnValue = F("Grünbacher Weg");
        break;
    }
    case 124345:
    {
        returnValue = F("Grünbacher-Str.");
        break;
    }
    case 124346:
    {
        returnValue = F("Grünbachstr.");
        break;
    }
    case 124347:
    {
        returnValue = F("Grünbachweg");
        break;
    }
    case 124348:
    {
        returnValue = F("Grünbaum");
        break;
    }
    case 124349:
    {
        returnValue = F("Grünbaumberg");
        break;
    }
    case 124350:
    {
        returnValue = F("Grünbaumer Str.");
        break;
    }
    case 124351:
    {
        returnValue = F("Grünbaumgasse");
        break;
    }
    case 124352:
    {
        returnValue = F("Grünbaumwirtsgasse");
        break;
    }
    case 124353:
    {
        returnValue = F("Grünbek");
        break;
    }
    case 124354:
    {
        returnValue = F("Grünbereich Auf dem Kamp");
        break;
    }
    case 124355:
    {
        returnValue = F("Grünberg");
        break;
    }
    case 124356:
    {
        returnValue = F("Grünberg Süd");
        break;
    }
    case 124357:
    {
        returnValue = F("Grünberger Str.");
        break;
    }
    case 124358:
    {
        returnValue = F("Grünberger Weg");
        break;
    }
    case 124359:
    {
        returnValue = F("Grünbergerring");
        break;
    }
    case 124360:
    {
        returnValue = F("Grünbergfeld");
        break;
    }
    case 124361:
    {
        returnValue = F("Grünbergstr.");
        break;
    }
    case 124362:
    {
        returnValue = F("Grünbergsweg");
        break;
    }
    case 124363:
    {
        returnValue = F("Grünbergweg");
        break;
    }
    case 124364:
    {
        returnValue = F("Grünbichl");
        break;
    }
    case 124365:
    {
        returnValue = F("Grünbichlstr.");
        break;
    }
    case 124366:
    {
        returnValue = F("Grünborner Weg");
        break;
    }
    case 124367:
    {
        returnValue = F("Grünbrunnenfeld");
        break;
    }
    case 124368:
    {
        returnValue = F("Grünbrücke");
        break;
    }
    case 124369:
    {
        returnValue = F("Grünbrücke - Wilhelm-Hoegner-Anlage");
        break;
    }
    case 124370:
    {
        returnValue = F("Grünbrückenweg");
        break;
    }
    case 124371:
    {
        returnValue = F("Grünburgstr.");
        break;
    }
    case 124372:
    {
        returnValue = F("Grünbühl");
        break;
    }
    case 124373:
    {
        returnValue = F("Grünbühlstr.");
        break;
    }
    case 124374:
    {
        returnValue = F("Grünbürgstr.");
        break;
    }
    case 124375:
    {
        returnValue = F("Grünbüschelweg");
        break;
    }
    case 124376:
    {
        returnValue = F("Gründauer Str.");
        break;
    }
    case 124377:
    {
        returnValue = F("Gründaugasse");
        break;
    }
    case 124378:
    {
        returnValue = F("Gründchen");
        break;
    }
    case 124379:
    {
        returnValue = F("Gründchensweg");
        break;
    }
    case 124380:
    {
        returnValue = F("Gründchenweg");
        break;
    }
    case 124381:
    {
        returnValue = F("Gründchesweg");
        break;
    }
    case 124382:
    {
        returnValue = F("Gründeberg");
        break;
    }
    case 124383:
    {
        returnValue = F("Gründeich");
        break;
    }
    case 124384:
    {
        returnValue = F("Gründelallee");
        break;
    }
    case 124385:
    {
        returnValue = F("Gründelbach");
        break;
    }
    case 124386:
    {
        returnValue = F("Gründelbachstr.");
        break;
    }
    case 124387:
    {
        returnValue = F("Gründelbachtal");
        break;
    }
    case 124388:
    {
        returnValue = F("Gründelberg");
        break;
    }
    case 124389:
    {
        returnValue = F("Gründelbuchweg");
        break;
    }
    case 124390:
    {
        returnValue = F("Gründelingstr.");
        break;
    }
    case 124391:
    {
        returnValue = F("Gründelkeweg");
        break;
    }
    case 124392:
    {
        returnValue = F("Gründelln");
        break;
    }
    case 124393:
    {
        returnValue = F("Gründelpark");
        break;
    }
    case 124394:
    {
        returnValue = F("Gründelparkweg");
        break;
    }
    case 124395:
    {
        returnValue = F("Gründelsteig");
        break;
    }
    case 124396:
    {
        returnValue = F("Gründelstr.");
        break;
    }
    case 124397:
    {
        returnValue = F("Gründelsweg");
        break;
    }
    case 124398:
    {
        returnValue = F("Gründeltorstr.");
        break;
    }
    case 124399:
    {
        returnValue = F("Gründelweg");
        break;
    }
    case 124400:
    {
        returnValue = F("Gründeläckerstr.");
        break;
    }
    case 124401:
    {
        returnValue = F("Gründenbühlstr.");
        break;
    }
    case 124402:
    {
        returnValue = F("Gründenwaldstr.");
        break;
    }
    case 124403:
    {
        returnValue = F("Gründerhammer");
        break;
    }
    case 124404:
    {
        returnValue = F("Gründerstr.");
        break;
    }
    case 124405:
    {
        returnValue = F("Gründerweg");
        break;
    }
    case 124406:
    {
        returnValue = F("Gründeweg");
        break;
    }
    case 124407:
    {
        returnValue = F("Gründholmer Str.");
        break;
    }
    case 124408:
    {
        returnValue = F("Gründige Bäume");
        break;
    }
    case 124409:
    {
        returnValue = F("Gründischer Weg");
        break;
    }
    case 124410:
    {
        returnValue = F("Gründkenliet");
        break;
    }
    case 124411:
    {
        returnValue = F("Gründl");
        break;
    }
    case 124412:
    {
        returnValue = F("Gründl-Schreiner-Weg");
        break;
    }
    case 124413:
    {
        returnValue = F("Gründlachbrücke");
        break;
    }
    case 124414:
    {
        returnValue = F("Gründlacher Str.");
        break;
    }
    case 124415:
    {
        returnValue = F("Gründlachstr.");
        break;
    }
    case 124416:
    {
        returnValue = F("Gründlbach");
        break;
    }
    case 124417:
    {
        returnValue = F("Gründle");
        break;
    }
    case 124418:
    {
        returnValue = F("Gründlein");
        break;
    }
    case 124419:
    {
        returnValue = F("Gründleinsstr.");
        break;
    }
    case 124420:
    {
        returnValue = F("Gründleinstr.");
        break;
    }
    case 124421:
    {
        returnValue = F("Gründleinsweg");
        break;
    }
    case 124422:
    {
        returnValue = F("Gründleinweg");
        break;
    }
    case 124423:
    {
        returnValue = F("Gründler Str.");
        break;
    }
    case 124424:
    {
        returnValue = F("Gründlerstr.");
        break;
    }
    case 124425:
    {
        returnValue = F("Gründlersweg");
        break;
    }
    case 124426:
    {
        returnValue = F("Gründlerweg");
        break;
    }
    case 124427:
    {
        returnValue = F("Gründlestr.");
        break;
    }
    case 124428:
    {
        returnValue = F("Gründlesweg");
        break;
    }
    case 124429:
    {
        returnValue = F("Gründleweg");
        break;
    }
    case 124430:
    {
        returnValue = F("Gründlich");
        break;
    }
    case 124431:
    {
        returnValue = F("Gründoblweg");
        break;
    }
    case 124432:
    {
        returnValue = F("Gründorf");
        break;
    }
    case 124433:
    {
        returnValue = F("Grüne");
        break;
    }
    case 124434:
    {
        returnValue = F("Grüne Achse \"Schwaleniederung");
        break;
    }
    case 124435:
    {
        returnValue = F("Grüne Allee");
        break;
    }
    case 124436:
    {
        returnValue = F("Grüne Au");
        break;
    }
    case 124437:
    {
        returnValue = F("Grüne Aue");
        break;
    }
    case 124438:
    {
        returnValue = F("Grüne Bache");
        break;
    }
    case 124439:
    {
        returnValue = F("Grüne Band Brücke");
        break;
    }
    case 124440:
    {
        returnValue = F("Grüne Bank");
        break;
    }
    case 124441:
    {
        returnValue = F("Grüne Baumgasse");
        break;
    }
    case 124442:
    {
        returnValue = F("Grüne Bette");
        break;
    }
    case 124443:
    {
        returnValue = F("Grüne Brücke");
        break;
    }
    case 124444:
    {
        returnValue = F("Grüne Delle");
        break;
    }
    case 124445:
    {
        returnValue = F("Grüne Delphin Gasse");
        break;
    }
    case 124446:
    {
        returnValue = F("Grüne Eiche");
        break;
    }
    case 124447:
    {
        returnValue = F("Grüne Eins");
        break;
    }
    case 124448:
    {
        returnValue = F("Grüne Gasse");
        break;
    }
    case 124449:
    {
        returnValue = F("Grüne Grenze");
        break;
    }
    case 124450:
    {
        returnValue = F("Grüne Grund");
        break;
    }
    case 124451:
    {
        returnValue = F("Grüne Gärtel");
        break;
    }
    case 124452:
    {
        returnValue = F("Grüne Harfe");
        break;
    }
    case 124453:
    {
        returnValue = F("Grüne Hecke");
        break;
    }
    case 124454:
    {
        returnValue = F("Grüne Hellmer");
        break;
    }
    case 124455:
    {
        returnValue = F("Grüne Hufe");
        break;
    }
    case 124456:
    {
        returnValue = F("Grüne Höfe");
        break;
    }
    case 124457:
    {
        returnValue = F("Grüne Höhe");
        break;
    }
    case 124458:
    {
        returnValue = F("Grüne Insel mit verschiedenen Spielobjekten für Kinder");
        break;
    }
    case 124459:
    {
        returnValue = F("Grüne Jägerschneise");
        break;
    }
    case 124460:
    {
        returnValue = F("Grüne Kante");
        break;
    }
    case 124461:
    {
        returnValue = F("Grüne Kehle");
        break;
    }
    case 124462:
    {
        returnValue = F("Grüne Linde");
        break;
    }
    case 124463:
    {
        returnValue = F("Grüne Linie");
        break;
    }
    case 124464:
    {
        returnValue = F("Grüne Lohe");
        break;
    }
    case 124465:
    {
        returnValue = F("Grüne Lunge");
        break;
    }
    case 124466:
    {
        returnValue = F("Grüne Mitte");
        break;
    }
    case 124467:
    {
        returnValue = F("Grüne Mitte Untermeitingen");
        break;
    }
    case 124468:
    {
        returnValue = F("Grüne Mühle");
        break;
    }
    case 124469:
    {
        returnValue = F("Grüne Oase");
        break;
    }
    case 124470:
    {
        returnValue = F("Grüne Pforte");
        break;
    }
    case 124471:
    {
        returnValue = F("Grüne Riede");
        break;
    }
    case 124472:
    {
        returnValue = F("Grüne Riedeweg");
        break;
    }
    case 124473:
    {
        returnValue = F("Grüne Schleite");
        break;
    }
    case 124474:
    {
        returnValue = F("Grüne Schneise");
        break;
    }
    case 124475:
    {
        returnValue = F("Grüne Schweiz");
        break;
    }
    case 124476:
    {
        returnValue = F("Grüne Senke");
        break;
    }
    case 124477:
    {
        returnValue = F("Grüne Siedlung");
        break;
    }
    case 124478:
    {
        returnValue = F("Grüne Spange");
        break;
    }
    case 124479:
    {
        returnValue = F("Grüne Steige");
        break;
    }
    case 124480:
    {
        returnValue = F("Grüne Stiege");
        break;
    }
    case 124481:
    {
        returnValue = F("Grüne Str.");
        break;
    }
    case 124482:
    {
        returnValue = F("Grüne Tanne");
        break;
    }
    case 124483:
    {
        returnValue = F("Grüne Telle");
        break;
    }
    case 124484:
    {
        returnValue = F("Grüne Telle - Weg");
        break;
    }
    case 124485:
    {
        returnValue = F("Grüne Trift");
        break;
    }
    case 124486:
    {
        returnValue = F("Grüne Twiete");
        break;
    }
    case 124487:
    {
        returnValue = F("Grüne Waldstr.");
        break;
    }
    case 124488:
    {
        returnValue = F("Grüne Warte");
        break;
    }
    case 124489:
    {
        returnValue = F("Grüne Weg");
        break;
    }
    case 124490:
    {
        returnValue = F("Grüne Welle");
        break;
    }
    case 124491:
    {
        returnValue = F("Grüne Wiese");
        break;
    }
    case 124492:
    {
        returnValue = F("Grüne Wiesenstr.");
        break;
    }
    case 124493:
    {
        returnValue = F("Grüne Wurth");
        break;
    }
    case 124494:
    {
        returnValue = F("Grüne-Grund-Str.");
        break;
    }
    case 124495:
    {
        returnValue = F("Grüne-Jäger-Str.");
        break;
    }
    case 124496:
    {
        returnValue = F("Grünearmstr.");
        break;
    }
    case 124497:
    {
        returnValue = F("Grünebachstr.");
        break;
    }
    case 124498:
    {
        returnValue = F("Grünebaumstr.");
        break;
    }
    case 124499:
    {
        returnValue = F("Grüneberger Str.");
        break;
    }
    case 124500:
    {
        returnValue = F("Grünebergstr.");
        break;
    }
    case 124501:
    {
        returnValue = F("Grüneburgstr.");
        break;
    }
    case 124502:
    {
        returnValue = F("Grüneburgweg");
        break;
    }
    case 124503:
    {
        returnValue = F("Grüneck");
        break;
    }
    case 124504:
    {
        returnValue = F("Grünecken");
        break;
    }
    case 124505:
    {
        returnValue = F("Grünecker Str.");
        break;
    }
    case 124506:
    {
        returnValue = F("Grüneckhof");
        break;
    }
    case 124507:
    {
        returnValue = F("Grüneckweg");
        break;
    }
    case 124508:
    {
        returnValue = F("Grünefelder Dorfstr.");
        break;
    }
    case 124509:
    {
        returnValue = F("Grünefelder Str.");
        break;
    }
    case 124510:
    {
        returnValue = F("Grünegg");
        break;
    }
    case 124511:
    {
        returnValue = F("Grünegger Str.");
        break;
    }
    case 124512:
    {
        returnValue = F("Grünegras");
        break;
    }
    case 124513:
    {
        returnValue = F("Grünegräser Weg");
        break;
    }
    case 124514:
    {
        returnValue = F("Grüneiche");
        break;
    }
    case 124515:
    {
        returnValue = F("Grünelinde");
        break;
    }
    case 124516:
    {
        returnValue = F("Grünemannsgasse");
        break;
    }
    case 124517:
    {
        returnValue = F("Grünen Deich");
        break;
    }
    case 124518:
    {
        returnValue = F("Grünenanger");
        break;
    }
    case 124519:
    {
        returnValue = F("Grünenbacher Str.");
        break;
    }
    case 124520:
    {
        returnValue = F("Grünenbaind");
        break;
    }
    case 124521:
    {
        returnValue = F("Grünenbaum");
        break;
    }
    case 124522:
    {
        returnValue = F("Grünenbecke");
        break;
    }
    case 124523:
    {
        returnValue = F("Grünenbecker Weg");
        break;
    }
    case 124524:
    {
        returnValue = F("Grünenberg");
        break;
    }
    case 124525:
    {
        returnValue = F("Grünenberger Str.");
        break;
    }
    case 124526:
    {
        returnValue = F("Grünenbergstr.");
        break;
    }
    case 124527:
    {
        returnValue = F("Grünenbergweg");
        break;
    }
    case 124528:
    {
        returnValue = F("Grünenborn");
        break;
    }
    case 124529:
    {
        returnValue = F("Grünenbäumchen");
        break;
    }
    case 124530:
    {
        returnValue = F("Grünendahlstr.");
        break;
    }
    case 124531:
    {
        returnValue = F("Grünendeicher Str.");
        break;
    }
    case 124532:
    {
        returnValue = F("Grüneneck");
        break;
    }
    case 124533:
    {
        returnValue = F("Grünenfurter Str.");
        break;
    }
    case 124534:
    {
        returnValue = F("Grünengrase");
        break;
    }
    case 124535:
    {
        returnValue = F("Grünenkamper Str.");
        break;
    }
    case 124536:
    {
        returnValue = F("Grünenkamper Weg");
        break;
    }
    case 124537:
    {
        returnValue = F("Grünenplaner Str.");
        break;
    }
    case 124538:
    {
        returnValue = F("Grünenplatz");
        break;
    }
    case 124539:
    {
        returnValue = F("Grünenplatzstr.");
        break;
    }
    case 124540:
    {
        returnValue = F("Grünental");
        break;
    }
    case 124541:
    {
        returnValue = F("Grünentaler Str.");
        break;
    }
    case 124542:
    {
        returnValue = F("Grünentalstr.");
        break;
    }
    case 124543:
    {
        returnValue = F("Grünenthal");
        break;
    }
    case 124544:
    {
        returnValue = F("Grünenthaler Str.");
        break;
    }
    case 124545:
    {
        returnValue = F("Grünepleistr.");
        break;
    }
    case 124546:
    {
        returnValue = F("Grüner Anger");
        break;
    }
    case 124547:
    {
        returnValue = F("Grüner Auweg");
        break;
    }
    case 124548:
    {
        returnValue = F("Grüner Baum");
        break;
    }
    case 124549:
    {
        returnValue = F("Grüner Baum-Weg");
        break;
    }
    case 124550:
    {
        returnValue = F("Grüner Berg");
        break;
    }
    case 124551:
    {
        returnValue = F("Grüner Bogen");
        break;
    }
    case 124552:
    {
        returnValue = F("Grüner Born");
        break;
    }
    case 124553:
    {
        returnValue = F("Grüner Brink");
        break;
    }
    case 124554:
    {
        returnValue = F("Grüner Damm");
        break;
    }
    case 124555:
    {
        returnValue = F("Grüner Deich");
        break;
    }
    case 124556:
    {
        returnValue = F("Grüner Dyk");
        break;
    }
    case 124557:
    {
        returnValue = F("Grüner Esel");
        break;
    }
    case 124558:
    {
        returnValue = F("Grüner Fleck");
        break;
    }
    case 124559:
    {
        returnValue = F("Grüner Flur");
        break;
    }
    case 124560:
    {
        returnValue = F("Grüner Gang");
        break;
    }
    case 124561:
    {
        returnValue = F("Grüner Garten");
        break;
    }
    case 124562:
    {
        returnValue = F("Grüner Graben");
        break;
    }
    case 124563:
    {
        returnValue = F("Grüner Grund");
        break;
    }
    case 124564:
    {
        returnValue = F("Grüner Grund Redder");
        break;
    }
    case 124565:
    {
        returnValue = F("Grüner Hain");
        break;
    }
    case 124566:
    {
        returnValue = F("Grüner Hang");
        break;
    }
    case 124567:
    {
        returnValue = F("Grüner Heideberg");
        break;
    }
    case 124568:
    {
        returnValue = F("Grüner Hirsch");
        break;
    }
    case 124569:
    {
        returnValue = F("Grüner Hof");
        break;
    }
    case 124570:
    {
        returnValue = F("Grüner Höhe");
        break;
    }
    case 124571:
    {
        returnValue = F("Grüner Hörsaal");
        break;
    }
    case 124572:
    {
        returnValue = F("Grüner Innweg");
        break;
    }
    case 124573:
    {
        returnValue = F("Grüner Jaeger");
        break;
    }
    case 124574:
    {
        returnValue = F("Grüner Jäger");
        break;
    }
    case 124575:
    {
        returnValue = F("Grüner Kamp");
        break;
    }
    case 124576:
    {
        returnValue = F("Grüner Markenweg");
        break;
    }
    case 124577:
    {
        returnValue = F("Grüner Markt");
        break;
    }
    case 124578:
    {
        returnValue = F("Grüner Pfad");
        break;
    }
    case 124579:
    {
        returnValue = F("Grüner Placken");
        break;
    }
    case 124580:
    {
        returnValue = F("Grüner Plan");
        break;
    }
    case 124581:
    {
        returnValue = F("Grüner Platz");
        break;
    }
    case 124582:
    {
        returnValue = F("Grüner Rasen");
        break;
    }
    case 124583:
    {
        returnValue = F("Grüner Redder");
        break;
    }
    case 124584:
    {
        returnValue = F("Grüner Ring");
        break;
    }
    case 124585:
    {
        returnValue = F("Grüner Sand");
        break;
    }
    case 124586:
    {
        returnValue = F("Grüner Schla");
        break;
    }
    case 124587:
    {
        returnValue = F("Grüner Spanweg");
        break;
    }
    case 124588:
    {
        returnValue = F("Grüner Specken");
        break;
    }
    case 124589:
    {
        returnValue = F("Grüner Steg");
        break;
    }
    case 124590:
    {
        returnValue = F("Grüner Stegel");
        break;
    }
    case 124591:
    {
        returnValue = F("Grüner Steig");
        break;
    }
    case 124592:
    {
        returnValue = F("Grüner Stieg");
        break;
    }
    case 124593:
    {
        returnValue = F("Grüner Strand");
        break;
    }
    case 124594:
    {
        returnValue = F("Grüner Strich");
        break;
    }
    case 124595:
    {
        returnValue = F("Grüner Talstr.");
        break;
    }
    case 124596:
    {
        returnValue = F("Grüner Talweg");
        break;
    }
    case 124597:
    {
        returnValue = F("Grüner Torweg");
        break;
    }
    case 124598:
    {
        returnValue = F("Grüner Wald");
        break;
    }
    case 124599:
    {
        returnValue = F("Grüner Wasen");
        break;
    }
    case 124600:
    {
        returnValue = F("Grüner Weg");
        break;
    }
    case 124601:
    {
        returnValue = F("Grüner Weg Badel");
        break;
    }
    case 124602:
    {
        returnValue = F("Grüner Wenzel");
        break;
    }
    case 124603:
    {
        returnValue = F("Grüner Wg");
        break;
    }
    case 124604:
    {
        returnValue = F("Grüner Winkel");
        break;
    }
    case 124605:
    {
        returnValue = F("Grüner Zierdenweg");
        break;
    }
    case 124606:
    {
        returnValue = F("Grüner Zweig");
        break;
    }
    case 124607:
    {
        returnValue = F("Grüner-Baum-Weg");
        break;
    }
    case 124608:
    {
        returnValue = F("Grüner-Hof-Str.");
        break;
    }
    case 124609:
    {
        returnValue = F("Grüner-Jäger-Weg");
        break;
    }
    case 124610:
    {
        returnValue = F("Grüner-Turm-Str.");
        break;
    }
    case 124611:
    {
        returnValue = F("GrünerWeg");
        break;
    }
    case 124612:
    {
        returnValue = F("Grünerbergweg");
        break;
    }
    case 124613:
    {
        returnValue = F("Grünerlinder Weg");
        break;
    }
    case 124614:
    {
        returnValue = F("Grünerstr.");
        break;
    }
    case 124615:
    {
        returnValue = F("Grünerweg");
        break;
    }
    case 124616:
    {
        returnValue = F("Grünes \"C\" - Baumreihe");
        break;
    }
    case 124617:
    {
        returnValue = F("Grünes 'C' - Ausgleichsfläche");
        break;
    }
    case 124618:
    {
        returnValue = F("Grünes 'C' - Landschaftstor");
        break;
    }
    case 124619:
    {
        returnValue = F("Grünes 'C' - Zehntfreiacker");
        break;
    }
    case 124620:
    {
        returnValue = F("Grünes C");
        break;
    }
    case 124621:
    {
        returnValue = F("Grünes Dreieck");
        break;
    }
    case 124622:
    {
        returnValue = F("Grünes Eck");
        break;
    }
    case 124623:
    {
        returnValue = F("Grünes Ende");
        break;
    }
    case 124624:
    {
        returnValue = F("Grünes Feld");
        break;
    }
    case 124625:
    {
        returnValue = F("Grünes Herz");
        break;
    }
    case 124626:
    {
        returnValue = F("Grünes Klassenzimmer");
        break;
    }
    case 124627:
    {
        returnValue = F("Grünes Kreuz");
        break;
    }
    case 124628:
    {
        returnValue = F("Grünes Meer");
        break;
    }
    case 124629:
    {
        returnValue = F("Grünes Pfädchen");
        break;
    }
    case 124630:
    {
        returnValue = F("Grünes Tal");
        break;
    }
    case 124631:
    {
        returnValue = F("Grünes Tälchen");
        break;
    }
    case 124632:
    {
        returnValue = F("Grüneschildplatz");
        break;
    }
    case 124633:
    {
        returnValue = F("Grüneshof");
        break;
    }
    case 124634:
    {
        returnValue = F("Grünestr.");
        break;
    }
    case 124635:
    {
        returnValue = F("Grünetal");
        break;
    }
    case 124636:
    {
        returnValue = F("Grünewald");
        break;
    }
    case 124637:
    {
        returnValue = F("Grünewald Rundweg Nr 34");
        break;
    }
    case 124638:
    {
        returnValue = F("Grünewald-Schneise");
        break;
    }
    case 124639:
    {
        returnValue = F("Grünewalder Str.");
        break;
    }
    case 124640:
    {
        returnValue = F("Grünewalder Weg");
        break;
    }
    case 124641:
    {
        returnValue = F("Grünewaldplatz");
        break;
    }
    case 124642:
    {
        returnValue = F("Grünewaldring");
        break;
    }
    case 124643:
    {
        returnValue = F("Grünewaldsgarten");
        break;
    }
    case 124644:
    {
        returnValue = F("Grünewaldstr.");
        break;
    }
    case 124645:
    {
        returnValue = F("Grünewaldtrail");
        break;
    }
    case 124646:
    {
        returnValue = F("Grünewaldweg");
        break;
    }
    case 124647:
    {
        returnValue = F("Grüneweg");
        break;
    }
    case 124648:
    {
        returnValue = F("Grünewiese");
        break;
    }
    case 124649:
    {
        returnValue = F("Grünfelde");
        break;
    }
    case 124650:
    {
        returnValue = F("Grünfelder Park");
        break;
    }
    case 124651:
    {
        returnValue = F("Grünfelder Str.");
        break;
    }
    case 124652:
    {
        returnValue = F("Grünfeldstr.");
        break;
    }
    case 124653:
    {
        returnValue = F("Grünfinkenstr.");
        break;
    }
    case 124654:
    {
        returnValue = F("Grünfinkenweg");
        break;
    }
    case 124655:
    {
        returnValue = F("Grünfleckstr.");
        break;
    }
    case 124656:
    {
        returnValue = F("Grünfläche");
        break;
    }
    case 124657:
    {
        returnValue = F("Grünfläche (ehemals Spielplatz) Laubke");
        break;
    }
    case 124658:
    {
        returnValue = F("Grünfläche Gemeinde");
        break;
    }
    case 124659:
    {
        returnValue = F("Grünfläche Grünrathstr.");
        break;
    }
    case 124660:
    {
        returnValue = F("Grünfläche Ragniter Ring");
        break;
    }
    case 124661:
    {
        returnValue = F("Grünfläche Schwarzbach");
        break;
    }
    case 124662:
    {
        returnValue = F("Grünfläche am Kindergarten");
        break;
    }
    case 124663:
    {
        returnValue = F("Grünfläche am Wolfgangsee");
        break;
    }
    case 124664:
    {
        returnValue = F("Grünfläche an der Hohenzollernstr.");
        break;
    }
    case 124665:
    {
        returnValue = F("Grünfläche an der Mühle");
        break;
    }
    case 124666:
    {
        returnValue = F("Grünfläche an der Versöhnungskirche");
        break;
    }
    case 124667:
    {
        returnValue = F("Grünfläche bei Kriegerdenkmal");
        break;
    }
    case 124668:
    {
        returnValue = F("Grünfläche zur freien Nutzung");
        break;
    }
    case 124669:
    {
        returnValue = F("Grüngang");
        break;
    }
    case 124670:
    {
        returnValue = F("Grüngasse");
        break;
    }
    case 124671:
    {
        returnValue = F("Grüngerger Steg");
        break;
    }
    case 124672:
    {
        returnValue = F("Grüngiebing");
        break;
    }
    case 124673:
    {
        returnValue = F("Grüngraben");
        break;
    }
    case 124674:
    {
        returnValue = F("Grüngrabenstr.");
        break;
    }
    case 124675:
    {
        returnValue = F("Grüngutsammelstelle");
        break;
    }
    case 124676:
    {
        returnValue = F("Grüngärtenweg");
        break;
    }
    case 124677:
    {
        returnValue = F("Grüngürtel");
        break;
    }
    case 124678:
    {
        returnValue = F("Grüngürtel Großbüllesheim");
        break;
    }
    case 124679:
    {
        returnValue = F("Grüngürtel Süd");
        break;
    }
    case 124680:
    {
        returnValue = F("Grüngürtelpark");
        break;
    }
    case 124681:
    {
        returnValue = F("Grüngürtelweg");
        break;
    }
    case 124682:
    {
        returnValue = F("Grünhagener Str.");
        break;
    }
    case 124683:
    {
        returnValue = F("Grünhagens Garten");
        break;
    }
    case 124684:
    {
        returnValue = F("Grünhagenstr.");
        break;
    }
    case 124685:
    {
        returnValue = F("Grünhagensweg");
        break;
    }
    case 124686:
    {
        returnValue = F("Grünhagstr.");
        break;
    }
    case 124687:
    {
        returnValue = F("Grünhaid");
        break;
    }
    case 124688:
    {
        returnValue = F("Grünhaider Str.");
        break;
    }
    case 124689:
    {
        returnValue = F("Grünhain");
        break;
    }
    case 124690:
    {
        returnValue = F("Grünhainer Str.");
        break;
    }
    case 124691:
    {
        returnValue = F("Grünhainer Weg");
        break;
    }
    case 124692:
    {
        returnValue = F("Grünhainichener Str.");
        break;
    }
    case 124693:
    {
        returnValue = F("Grünhaus");
        break;
    }
    case 124694:
    {
        returnValue = F("Grünhauser Str.");
        break;
    }
    case 124695:
    {
        returnValue = F("Grünhausweg");
        break;
    }
    case 124696:
    {
        returnValue = F("Grünheckenweg");
        break;
    }
    case 124697:
    {
        returnValue = F("Grünheckstr.");
        break;
    }
    case 124698:
    {
        returnValue = F("Grünheide");
        break;
    }
    case 124699:
    {
        returnValue = F("Grünheider Str.");
        break;
    }
    case 124700:
    {
        returnValue = F("Grünheider Weg");
        break;
    }
    case 124701:
    {
        returnValue = F("Grünhof");
        break;
    }
    case 124702:
    {
        returnValue = F("Grünhofer Str.");
        break;
    }
    case 124703:
    {
        returnValue = F("Grünhofer Weg");
        break;
    }
    case 124704:
    {
        returnValue = F("Grünhoffstr.");
        break;
    }
    case 124705:
    {
        returnValue = F("Grünhofweg");
        break;
    }
    case 124706:
    {
        returnValue = F("Grünholderstr.");
        break;
    }
    case 124707:
    {
        returnValue = F("Grünholz");
        break;
    }
    case 124708:
    {
        returnValue = F("Grünholz-Helle");
        break;
    }
    case 124709:
    {
        returnValue = F("Grünholzweg");
        break;
    }
    case 124710:
    {
        returnValue = F("Grünhorster Weg");
        break;
    }
    case 124711:
    {
        returnValue = F("Grünhufe");
        break;
    }
    case 124712:
    {
        returnValue = F("Grünhufer Bogen");
        break;
    }
    case 124713:
    {
        returnValue = F("Grünhundsbrunnen");
        break;
    }
    case 124714:
    {
        returnValue = F("Grünhundstr.");
        break;
    }
    case 124715:
    {
        returnValue = F("Grünhundweg");
        break;
    }
    case 124716:
    {
        returnValue = F("Grünhütlstr.");
        break;
    }
    case 124717:
    {
        returnValue = F("Grünhüttenweg");
        break;
    }
    case 124718:
    {
        returnValue = F("Grünhütter Steige");
        break;
    }
    case 124719:
    {
        returnValue = F("Grünigsgasse");
        break;
    }
    case 124720:
    {
        returnValue = F("Grünigsgäßchen");
        break;
    }
    case 124721:
    {
        returnValue = F("Grüninger Dorfstr.");
        break;
    }
    case 124722:
    {
        returnValue = F("Grüninger Landstr.");
        break;
    }
    case 124723:
    {
        returnValue = F("Grüninger Str.");
        break;
    }
    case 124724:
    {
        returnValue = F("Grüninger Weg");
        break;
    }
    case 124725:
    {
        returnValue = F("Grüningerstr.");
        break;
    }
    case 124726:
    {
        returnValue = F("Grünitzmühlstr.");
        break;
    }
    case 124727:
    {
        returnValue = F("Grünkamp");
        break;
    }
    case 124728:
    {
        returnValue = F("Grünkernstr.");
        break;
    }
    case 124729:
    {
        returnValue = F("Grünkesweg");
        break;
    }
    case 124730:
    {
        returnValue = F("Grünkopfstr.");
        break;
    }
    case 124731:
    {
        returnValue = F("Grünkrauter Str.");
        break;
    }
    case 124732:
    {
        returnValue = F("Grünkreuzweg");
        break;
    }
    case 124733:
    {
        returnValue = F("Grünlandstr.");
        break;
    }
    case 124734:
    {
        returnValue = F("Grünlandweg");
        break;
    }
    case 124735:
    {
        returnValue = F("Grünlas");
        break;
    }
    case 124736:
    {
        returnValue = F("Grünle");
        break;
    }
    case 124737:
    {
        returnValue = F("Grünleite");
        break;
    }
    case 124738:
    {
        returnValue = F("Grünleiten");
        break;
    }
    case 124739:
    {
        returnValue = F("Grünleithenweg");
        break;
    }
    case 124740:
    {
        returnValue = F("Grünlerstr.");
        break;
    }
    case 124741:
    {
        returnValue = F("Grünlestr.");
        break;
    }
    case 124742:
    {
        returnValue = F("Grünleweg");
        break;
    }
    case 124743:
    {
        returnValue = F("Grünlinger Steige");
        break;
    }
    case 124744:
    {
        returnValue = F("Grünlinger Str.");
        break;
    }
    case 124745:
    {
        returnValue = F("Grünlingstr.");
        break;
    }
    case 124746:
    {
        returnValue = F("Grünlingsweg");
        break;
    }
    case 124747:
    {
        returnValue = F("Grünlingweg");
        break;
    }
    case 124748:
    {
        returnValue = F("Grünlohweg");
        break;
    }
    case 124749:
    {
        returnValue = F("Grünmatten");
        break;
    }
    case 124750:
    {
        returnValue = F("Grünmettstetter Str.");
        break;
    }
    case 124751:
    {
        returnValue = F("Grünmetzweg");
        break;
    }
    case 124752:
    {
        returnValue = F("Grünmoosstr.");
        break;
    }
    case 124753:
    {
        returnValue = F("Grünnersweg");
        break;
    }
    case 124754:
    {
        returnValue = F("Grünower Chaussee");
        break;
    }
    case 124755:
    {
        returnValue = F("Grünower Dorfstr.");
        break;
    }
    case 124756:
    {
        returnValue = F("Grünower Str.");
        break;
    }
    case 124757:
    {
        returnValue = F("Grünower Weg");
        break;
    }
    case 124758:
    {
        returnValue = F("Grünpark");
        break;
    }
    case 124759:
    {
        returnValue = F("Grünplan");
        break;
    }
    case 124760:
    {
        returnValue = F("Grünplattweg");
        break;
    }
    case 124761:
    {
        returnValue = F("Grünplatz");
        break;
    }
    case 124762:
    {
        returnValue = F("Grünplätzweg");
        break;
    }
    case 124763:
    {
        returnValue = F("Grünrathstr.");
        break;
    }
    case 124764:
    {
        returnValue = F("Grünredder");
        break;
    }
    case 124765:
    {
        returnValue = F("Grünring");
        break;
    }
    case 124766:
    {
        returnValue = F("Grüns Gängele");
        break;
    }
    case 124767:
    {
        returnValue = F("Grüns Weg");
        break;
    }
    case 124768:
    {
        returnValue = F("Grünsandsteinweg");
        break;
    }
    case 124769:
    {
        returnValue = F("Grünsberger Str.");
        break;
    }
    case 124770:
    {
        returnValue = F("Grünscheid");
        break;
    }
    case 124771:
    {
        returnValue = F("Grünscheider Mühle");
        break;
    }
    case 124772:
    {
        returnValue = F("Grünschiebel");
        break;
    }
    case 124773:
    {
        returnValue = F("Grünschlader Str.");
        break;
    }
    case 124774:
    {
        returnValue = F("Grünschönbergweg");
        break;
    }
    case 124775:
    {
        returnValue = F("Grünsee");
        break;
    }
    case 124776:
    {
        returnValue = F("Grünseestr.");
        break;
    }
    case 124777:
    {
        returnValue = F("Grünseiboldsdorfer Weg");
        break;
    }
    case 124778:
    {
        returnValue = F("Grünsfelder Str.");
        break;
    }
    case 124779:
    {
        returnValue = F("Grünsink");
        break;
    }
    case 124780:
    {
        returnValue = F("Grünspechtweg");
        break;
    }
    case 124781:
    {
        returnValue = F("Grünstadt");
        break;
    }
    case 124782:
    {
        returnValue = F("Grünstadter Str.");
        break;
    }
    case 124783:
    {
        returnValue = F("Grünstadter Weg");
        break;
    }
    case 124784:
    {
        returnValue = F("Grünstaude");
        break;
    }
    case 124785:
    {
        returnValue = F("Grünsteiner Str.");
        break;
    }
    case 124786:
    {
        returnValue = F("Grünsteinstr.");
        break;
    }
    case 124787:
    {
        returnValue = F("Grünsteinweg");
        break;
    }
    case 124788:
    {
        returnValue = F("Grünstr.");
        break;
    }
    case 124789:
    {
        returnValue = F("Grünstr. / Leipziger Str.");
        break;
    }
    case 124790:
    {
        returnValue = F("Grünstreekendamm");
        break;
    }
    case 124791:
    {
        returnValue = F("Grünstreifen");
        break;
    }
    case 124792:
    {
        returnValue = F("Grünstreifen Fronhof 1");
        break;
    }
    case 124793:
    {
        returnValue = F("Grünstreifen Fronhof II");
        break;
    }
    case 124794:
    {
        returnValue = F("Grünstreifen am Gröbenbach");
        break;
    }
    case 124795:
    {
        returnValue = F("Grünstädter Platz");
        break;
    }
    case 124796:
    {
        returnValue = F("Grünstädter Str.");
        break;
    }
    case 124797:
    {
        returnValue = F("Grünstädtler Str.");
        break;
    }
    case 124798:
    {
        returnValue = F("Grünstückenweg");
        break;
    }
    case 124799:
    {
        returnValue = F("Grüntal");
        break;
    }
    case 124800:
    {
        returnValue = F("Grüntaler Str.");
        break;
    }
    case 124801:
    {
        returnValue = F("Grüntaler Weg");
        break;
    }
    case 124802:
    {
        returnValue = F("Grüntalmühle");
        break;
    }
    case 124803:
    {
        returnValue = F("Grüntalmühlweg");
        break;
    }
    case 124804:
    {
        returnValue = F("Grüntalstr.");
        break;
    }
    case 124805:
    {
        returnValue = F("Grüntalsweg");
        break;
    }
    case 124806:
    {
        returnValue = F("Grüntalweg");
        break;
    }
    case 124807:
    {
        returnValue = F("Grüntannlweg");
        break;
    }
    case 124808:
    {
        returnValue = F("Grüntenring");
        break;
    }
    case 124809:
    {
        returnValue = F("Grüntenseestr.");
        break;
    }
    case 124810:
    {
        returnValue = F("Grüntenstr.");
        break;
    }
    case 124811:
    {
        returnValue = F("Grüntenweg");
        break;
    }
    case 124812:
    {
        returnValue = F("Grünthal");
        break;
    }
    case 124813:
    {
        returnValue = F("Grünthaler Hof");
        break;
    }
    case 124814:
    {
        returnValue = F("Grünthaler Str.");
        break;
    }
    case 124815:
    {
        returnValue = F("Grünthaler Weg");
        break;
    }
    case 124816:
    {
        returnValue = F("Grünthalstr.");
        break;
    }
    case 124817:
    {
        returnValue = F("Grünthalweg");
        break;
    }
    case 124818:
    {
        returnValue = F("Grüntorstr.");
        break;
    }
    case 124819:
    {
        returnValue = F("Grüntäleinstr.");
        break;
    }
    case 124820:
    {
        returnValue = F("Grünungsbuckelweg");
        break;
    }
    case 124821:
    {
        returnValue = F("Grünwald");
        break;
    }
    case 124822:
    {
        returnValue = F("Grünwalder Brücke");
        break;
    }
    case 124823:
    {
        returnValue = F("Grünwalder Str.");
        break;
    }
    case 124824:
    {
        returnValue = F("Grünwalder Weg");
        break;
    }
    case 124825:
    {
        returnValue = F("Grünwalderweg");
        break;
    }
    case 124826:
    {
        returnValue = F("Grünwaldstr.");
        break;
    }
    case 124827:
    {
        returnValue = F("Grünwaldweg");
        break;
    }
    case 124828:
    {
        returnValue = F("Grünwanger Str.");
        break;
    }
    case 124829:
    {
        returnValue = F("Grünweg");
        break;
    }
    case 124830:
    {
        returnValue = F("Grünwehr");
        break;
    }
    case 124831:
    {
        returnValue = F("Grünweiler");
        break;
    }
    case 124832:
    {
        returnValue = F("Grünwettersbacher Str.");
        break;
    }
    case 124833:
    {
        returnValue = F("Grünwettersbacherweg");
        break;
    }
    case 124834:
    {
        returnValue = F("Grünwies");
        break;
    }
    case 124835:
    {
        returnValue = F("Grünwiesen");
        break;
    }
    case 124836:
    {
        returnValue = F("Grünwiesenstr.");
        break;
    }
    case 124837:
    {
        returnValue = F("Grünwiesenweg");
        break;
    }
    case 124838:
    {
        returnValue = F("Grünwiesweg");
        break;
    }
    case 124839:
    {
        returnValue = F("Grünwinkel");
        break;
    }
    case 124840:
    {
        returnValue = F("Grünwinkelstr.");
        break;
    }
    case 124841:
    {
        returnValue = F("Grünwinkelweg");
        break;
    }
    case 124842:
    {
        returnValue = F("Grünwinkler Str.");
        break;
    }
    case 124843:
    {
        returnValue = F("Grünwälder Str.");
        break;
    }
    case 124844:
    {
        returnValue = F("Grünzeile");
        break;
    }
    case 124845:
    {
        returnValue = F("Grünzer Str.");
        break;
    }
    case 124846:
    {
        returnValue = F("Grünzer Weg");
        break;
    }
    case 124847:
    {
        returnValue = F("Grünzug Bonn Nord/ Alfter");
        break;
    }
    case 124848:
    {
        returnValue = F("Grünzug Ost");
        break;
    }
    case 124849:
    {
        returnValue = F("Grünzug S-Bahntunnel");
        break;
    }
    case 124850:
    {
        returnValue = F("Grünzug Wallgasse Abschnitt West");
        break;
    }
    case 124851:
    {
        returnValue = F("Grünzweigstr.");
        break;
    }
    case 124852:
    {
        returnValue = F("Grünäckerstr.");
        break;
    }
    case 124853:
    {
        returnValue = F("Grüppenbührener Landstr.");
        break;
    }
    case 124854:
    {
        returnValue = F("Grüppenbührener Str.");
        break;
    }
    case 124855:
    {
        returnValue = F("Grüppenkoppel");
        break;
    }
    case 124856:
    {
        returnValue = F("Grüppfotsgang");
        break;
    }
    case 124857:
    {
        returnValue = F("Grürmannsheider Str.");
        break;
    }
    case 124858:
    {
        returnValue = F("Grürmannstr.");
        break;
    }
    case 124859:
    {
        returnValue = F("Grüselhornstr.");
        break;
    }
    case 124860:
    {
        returnValue = F("Grüsener Str.");
        break;
    }
    case 124861:
    {
        returnValue = F("Grüssauer Str.");
        break;
    }
    case 124862:
    {
        returnValue = F("Grüsselbacher Str.");
        break;
    }
    case 124863:
    {
        returnValue = F("Grüssower Str.");
        break;
    }
    case 124864:
    {
        returnValue = F("Grüte");
        break;
    }
    case 124865:
    {
        returnValue = F("Grütenstieg");
        break;
    }
    case 124866:
    {
        returnValue = F("Grütergasse");
        break;
    }
    case 124867:
    {
        returnValue = F("Grüteringsfeld");
        break;
    }
    case 124868:
    {
        returnValue = F("Grüterstr.");
        break;
    }
    case 124869:
    {
        returnValue = F("Grütersweg");
        break;
    }
    case 124870:
    {
        returnValue = F("Grüthweg");
        break;
    }
    case 124871:
    {
        returnValue = F("Grütlohner Weg");
        break;
    }
    case 124872:
    {
        returnValue = F("Grütstr.");
        break;
    }
    case 124873:
    {
        returnValue = F("Grütterstr.");
        break;
    }
    case 124874:
    {
        returnValue = F("Grüttkopf");
        break;
    }
    case 124875:
    {
        returnValue = F("Grüttower Grund");
        break;
    }
    case 124876:
    {
        returnValue = F("Grüttweg");
        break;
    }
    case 124877:
    {
        returnValue = F("Grützemühle");
        break;
    }
    case 124878:
    {
        returnValue = F("Grützer Chaussee");
        break;
    }
    case 124879:
    {
        returnValue = F("Grützer Dorfstr.");
        break;
    }
    case 124880:
    {
        returnValue = F("Grützer Havelweg");
        break;
    }
    case 124881:
    {
        returnValue = F("Grützeweg");
        break;
    }
    case 124882:
    {
        returnValue = F("Grützmacherstr.");
        break;
    }
    case 124883:
    {
        returnValue = F("Grützmühle");
        break;
    }
    case 124884:
    {
        returnValue = F("Grützmühlenweg");
        break;
    }
    case 124885:
    {
        returnValue = F("Grüwwel");
        break;
    }
    case 124886:
    {
        returnValue = F("Grüß Gott Weg");
        break;
    }
    case 124887:
    {
        returnValue = F("Grüß-Gott-Weg");
        break;
    }
    case 124888:
    {
        returnValue = F("Gsand");
        break;
    }
    case 124889:
    {
        returnValue = F("Gschaid");
        break;
    }
    case 124890:
    {
        returnValue = F("Gschaidstr.");
        break;
    }
    case 124891:
    {
        returnValue = F("Gschasikopfweg");
        break;
    }
    case 124892:
    {
        returnValue = F("Gschasiweg");
        break;
    }
    case 124893:
    {
        returnValue = F("Gscheid");
        break;
    }
    case 124894:
    {
        returnValue = F("Gscheiderberg");
        break;
    }
    case 124895:
    {
        returnValue = F("Gscheiderbrückl");
        break;
    }
    case 124896:
    {
        returnValue = F("Gscheidstr.");
        break;
    }
    case 124897:
    {
        returnValue = F("Gschierbergstr.");
        break;
    }
    case 124898:
    {
        returnValue = F("Gschindweg");
        break;
    }
    case 124899:
    {
        returnValue = F("Gschlavers");
        break;
    }
    case 124900:
    {
        returnValue = F("Gschliefweg");
        break;
    }
    case 124901:
    {
        returnValue = F("Gschlößlweg");
        break;
    }
    case 124902:
    {
        returnValue = F("Gschmeidmachergasse");
        break;
    }
    case 124903:
    {
        returnValue = F("Gschnaidtstr.");
        break;
    }
    case 124904:
    {
        returnValue = F("Gschneitmannweg");
        break;
    }
    case 124905:
    {
        returnValue = F("Gschornerstr.");
        break;
    }
    case 124906:
    {
        returnValue = F("Gschraiweg");
        break;
    }
    case 124907:
    {
        returnValue = F("Gschröfbruck");
        break;
    }
    case 124908:
    {
        returnValue = F("Gschwand");
        break;
    }
    case 124909:
    {
        returnValue = F("Gschwandlaine");
        break;
    }
    case 124910:
    {
        returnValue = F("Gschwandlerweg");
        break;
    }
    case 124911:
    {
        returnValue = F("Gschwandnerweg");
        break;
    }
    case 124912:
    {
        returnValue = F("Gschweinweg");
        break;
    }
    case 124913:
    {
        returnValue = F("Gschwelltalstr.");
        break;
    }
    case 124914:
    {
        returnValue = F("Gschwend");
        break;
    }
    case 124915:
    {
        returnValue = F("Gschwender Str.");
        break;
    }
    case 124916:
    {
        returnValue = F("Gschwenderstr.");
        break;
    }
    case 124917:
    {
        returnValue = F("Gschwenderweg");
        break;
    }
    case 124918:
    {
        returnValue = F("Gschwendetsteg");
        break;
    }
    case 124919:
    {
        returnValue = F("Gschwendeweg");
        break;
    }
    case 124920:
    {
        returnValue = F("Gschwendhof");
        break;
    }
    case 124921:
    {
        returnValue = F("Gschwendloipe");
        break;
    }
    case 124922:
    {
        returnValue = F("Gschwendnerweg");
        break;
    }
    case 124923:
    {
        returnValue = F("Gschwendstr.");
        break;
    }
    case 124924:
    {
        returnValue = F("Gschwendt");
        break;
    }
    case 124925:
    {
        returnValue = F("Gschwendthannet");
        break;
    }
    case 124926:
    {
        returnValue = F("Gschwendtweg");
        break;
    }
    case 124927:
    {
        returnValue = F("Gschwengwaldweg");
        break;
    }
    case 124928:
    {
        returnValue = F("Gschwengweg");
        break;
    }
    case 124929:
    {
        returnValue = F("Gschwindengasse");
        break;
    }
    case 124930:
    {
        returnValue = F("Gschönweg");
        break;
    }
    case 124931:
    {
        returnValue = F("Gsellmuehlweg");
        break;
    }
    case 124932:
    {
        returnValue = F("Gsengertsteigstr.");
        break;
    }
    case 124933:
    {
        returnValue = F("Gsieser Weg");
        break;
    }
    case 124934:
    {
        returnValue = F("Gsod");
        break;
    }
    case 124935:
    {
        returnValue = F("Gspannallee");
        break;
    }
    case 124936:
    {
        returnValue = F("Gspannberg");
        break;
    }
    case 124937:
    {
        returnValue = F("Gspannberger Str.");
        break;
    }
    case 124938:
    {
        returnValue = F("Gsprait");
        break;
    }
    case 124939:
    {
        returnValue = F("Gstadt");
        break;
    }
    case 124940:
    {
        returnValue = F("Gstadter Str.");
        break;
    }
    case 124941:
    {
        returnValue = F("Gstadweg");
        break;
    }
    case 124942:
    {
        returnValue = F("Gstaigkircherl");
        break;
    }
    case 124943:
    {
        returnValue = F("Gstaller Weg");
        break;
    }
    case 124944:
    {
        returnValue = F("Gstangen");
        break;
    }
    case 124945:
    {
        returnValue = F("Gstatter Au");
        break;
    }
    case 124946:
    {
        returnValue = F("Gstatterberg");
        break;
    }
    case 124947:
    {
        returnValue = F("Gstaudach");
        break;
    }
    case 124948:
    {
        returnValue = F("Gstaudacher Str.");
        break;
    }
    case 124949:
    {
        returnValue = F("Gstaudleweg");
        break;
    }
    case 124950:
    {
        returnValue = F("Gsteigstr.");
        break;
    }
    case 124951:
    {
        returnValue = F("Gsteigweg");
        break;
    }
    case 124952:
    {
        returnValue = F("Gsteinacher Str.");
        break;
    }
    case 124953:
    {
        returnValue = F("Gsteinetriegel");
        break;
    }
    case 124954:
    {
        returnValue = F("Gsteinetstr.");
        break;
    }
    case 124955:
    {
        returnValue = F("Gsteinig");
        break;
    }
    case 124956:
    {
        returnValue = F("Gstettenstr.");
        break;
    }
    case 124957:
    {
        returnValue = F("Gsteuge");
        break;
    }
    case 124958:
    {
        returnValue = F("Gstocketwiesenstr.");
        break;
    }
    case 124959:
    {
        returnValue = F("Gstoiner Bruck");
        break;
    }
    case 124960:
    {
        returnValue = F("Gstreifeter Str.");
        break;
    }
    case 124961:
    {
        returnValue = F("Gstädtstr.");
        break;
    }
    case 124962:
    {
        returnValue = F("Gstäudweg");
        break;
    }
    case 124963:
    {
        returnValue = F("Gstöttmühle");
        break;
    }
    case 124964:
    {
        returnValue = F("Gsundbrunnenweg");
        break;
    }
    case 124965:
    {
        returnValue = F("Gsälzbärenweg");
        break;
    }
    case 124966:
    {
        returnValue = F("Gsängstr.");
        break;
    }
    case 124967:
    {
        returnValue = F("Guaitastr.");
        break;
    }
    case 124968:
    {
        returnValue = F("Gualbert-Wälder-Str.");
        break;
    }
    case 124969:
    {
        returnValue = F("Guardastr.");
        break;
    }
    case 124970:
    {
        returnValue = F("Guardianstr.");
        break;
    }
    case 124971:
    {
        returnValue = F("Guatingwai");
        break;
    }
    case 124972:
    {
        returnValue = F("Gubberather Str.");
        break;
    }
    case 124973:
    {
        returnValue = F("Gubbiostr.");
        break;
    }
    case 124974:
    {
        returnValue = F("Gubener Str.");
        break;
    }
    case 124975:
    {
        returnValue = F("Gubener Vorstadt");
        break;
    }
    case 124976:
    {
        returnValue = F("Gubener Weg");
        break;
    }
    case 124977:
    {
        returnValue = F("Gubenstr.");
        break;
    }
    case 124978:
    {
        returnValue = F("Gubenweg / Weg auf Guben");
        break;
    }
    case 124979:
    {
        returnValue = F("Gubiner Str.");
        break;
    }
    case 124980:
    {
        returnValue = F("Gubisrath");
        break;
    }
    case 124981:
    {
        returnValue = F("Gubisrather Str.");
        break;
    }
    case 124982:
    {
        returnValue = F("Gubisrather Weg");
        break;
    }
    case 124983:
    {
        returnValue = F("Gubkower Str.");
        break;
    }
    case 124984:
    {
        returnValue = F("Guck ins Land");
        break;
    }
    case 124985:
    {
        returnValue = F("Guck- und Putschelweg");
        break;
    }
    case 124986:
    {
        returnValue = F("Guckai");
        break;
    }
    case 124987:
    {
        returnValue = F("Guckallee");
        break;
    }
    case 124988:
    {
        returnValue = F("Guckasweg");
        break;
    }
    case 124989:
    {
        returnValue = F("Guckelsby");
        break;
    }
    case 124990:
    {
        returnValue = F("Guckenbergweg");
        break;
    }
    case 124991:
    {
        returnValue = F("Guckenbühl");
        break;
    }
    case 124992:
    {
        returnValue = F("Guckenbühlstr.");
        break;
    }
    case 124993:
    {
        returnValue = F("Guckengäßle");
        break;
    }
    case 124994:
    {
        returnValue = F("Guckenhartstr.");
        break;
    }
    case 124995:
    {
        returnValue = F("Guckenhauser Weg");
        break;
    }
    case 124996:
    {
        returnValue = F("Guckentalweg");
        break;
    }
    case 124997:
    {
        returnValue = F("Guckenweg");
        break;
    }
    case 124998:
    {
        returnValue = F("Guckergasse");
        break;
    }
    case 124999:
    {
        returnValue = F("Guckerweg");
        break;
    }
    case 125000:
    {
        returnValue = F("Gudastr.");
        break;
    }
    case 125001:
    {
        returnValue = F("Gudderitz");
        break;
    }
    case 125002:
    {
        returnValue = F("Gudehus-Weg");
        break;
    }
    case 125003:
    {
        returnValue = F("Gudehusweg");
        break;
    }
    case 125004:
    {
        returnValue = F("Gudehäuser Str.");
        break;
    }
    case 125005:
    {
        returnValue = F("Gudenauer Allee");
        break;
    }
    case 125006:
    {
        returnValue = F("Gudenauer Busch");
        break;
    }
    case 125007:
    {
        returnValue = F("Gudenauer Weg");
        break;
    }
    case 125008:
    {
        returnValue = F("Gudenauring");
        break;
    }
    case 125009:
    {
        returnValue = F("Gudenbergstr.");
        break;
    }
    case 125010:
    {
        returnValue = F("Gudendorf-Feld");
        break;
    }
    case 125011:
    {
        returnValue = F("Gudendorfer Landweg");
        break;
    }
    case 125012:
    {
        returnValue = F("Gudendorfer Weg");
        break;
    }
    case 125013:
    {
        returnValue = F("Gudenkaufweg");
        break;
    }
    case 125014:
    {
        returnValue = F("Gudensberger Pfad");
        break;
    }
    case 125015:
    {
        returnValue = F("Gudensberger Str.");
        break;
    }
    case 125016:
    {
        returnValue = F("Gudenslau");
        break;
    }
    case 125017:
    {
        returnValue = F("Gudenusweg");
        break;
    }
    case 125018:
    {
        returnValue = F("Guderadisweg");
        break;
    }
    case 125019:
    {
        returnValue = F("Guderhandviertel");
        break;
    }
    case 125020:
    {
        returnValue = F("Guderoder Weg");
        break;
    }
    case 125021:
    {
        returnValue = F("Guderslebener Str.");
        break;
    }
    case 125022:
    {
        returnValue = F("Gudesstr.");
        break;
    }
    case 125023:
    {
        returnValue = F("Gudestr.");
        break;
    }
    case 125024:
    {
        returnValue = F("Gudeweg");
        break;
    }
    case 125025:
    {
        returnValue = F("Gudewerdtstr.");
        break;
    }
    case 125026:
    {
        returnValue = F("Gudewerdtweg");
        break;
    }
    case 125027:
    {
        returnValue = F("Gudewillstr.");
        break;
    }
    case 125028:
    {
        returnValue = F("Gudinburger Weg");
        break;
    }
    case 125029:
    {
        returnValue = F("Gudinger Gasse");
        break;
    }
    case 125030:
    {
        returnValue = F("Gudower Mühle");
        break;
    }
    case 125031:
    {
        returnValue = F("Gudower Ring");
        break;
    }
    case 125032:
    {
        returnValue = F("Gudower Str.");
        break;
    }
    case 125033:
    {
        returnValue = F("Gudower Weg");
        break;
    }
    case 125034:
    {
        returnValue = F("Gudrun-Krüger-Str.");
        break;
    }
    case 125035:
    {
        returnValue = F("Gudrun-Kuhlmann-Allee");
        break;
    }
    case 125036:
    {
        returnValue = F("Gudrun-Pausewang-Str.");
        break;
    }
    case 125037:
    {
        returnValue = F("Gudrunstr.");
        break;
    }
    case 125038:
    {
        returnValue = F("Gudrunweg");
        break;
    }
    case 125039:
    {
        returnValue = F("Gudula-Clasen-Platz");
        break;
    }
    case 125040:
    {
        returnValue = F("Gudulastr.");
        break;
    }
    case 125041:
    {
        returnValue = F("Guentgenburgweg");
        break;
    }
    case 125042:
    {
        returnValue = F("Guerickestr.");
        break;
    }
    case 125043:
    {
        returnValue = F("Guernseyallee");
        break;
    }
    case 125044:
    {
        returnValue = F("Guester Str.");
        break;
    }
    case 125045:
    {
        returnValue = F("Guester Weg");
        break;
    }
    case 125046:
    {
        returnValue = F("Guffertstr.");
        break;
    }
    case 125047:
    {
        returnValue = F("Guffertweg");
        break;
    }
    case 125048:
    {
        returnValue = F("Gufidauner Str.");
        break;
    }
    case 125049:
    {
        returnValue = F("Gugelerweg");
        break;
    }
    case 125050:
    {
        returnValue = F("Gugelhammerweg");
        break;
    }
    case 125051:
    {
        returnValue = F("Gugelitze");
        break;
    }
    case 125052:
    {
        returnValue = F("Gugelmeierstr.");
        break;
    }
    case 125053:
    {
        returnValue = F("Gugelmühle");
        break;
    }
    case 125054:
    {
        returnValue = F("Gugelmühler Str.");
        break;
    }
    case 125055:
    {
        returnValue = F("Gugelstr.");
        break;
    }
    case 125056:
    {
        returnValue = F("Gugenmusweg");
        break;
    }
    case 125057:
    {
        returnValue = F("Guggelesgraben");
        break;
    }
    case 125058:
    {
        returnValue = F("Guggemoos");
        break;
    }
    case 125059:
    {
        returnValue = F("Guggemoosen");
        break;
    }
    case 125060:
    {
        returnValue = F("Guggemosweg");
        break;
    }
    case 125061:
    {
        returnValue = F("Guggenberg");
        break;
    }
    case 125062:
    {
        returnValue = F("Guggenberger Str.");
        break;
    }
    case 125063:
    {
        returnValue = F("Guggenbergstr.");
        break;
    }
    case 125064:
    {
        returnValue = F("Guggenbergweg");
        break;
    }
    case 125065:
    {
        returnValue = F("Guggenbichel");
        break;
    }
    case 125066:
    {
        returnValue = F("Guggenbichl");
        break;
    }
    case 125067:
    {
        returnValue = F("Guggenbühelstr.");
        break;
    }
    case 125068:
    {
        returnValue = F("Guggenhauser Weg");
        break;
    }
    case 125069:
    {
        returnValue = F("Guggenheimerstr.");
        break;
    }
    case 125070:
    {
        returnValue = F("Guggenmoosgasse");
        break;
    }
    case 125071:
    {
        returnValue = F("Guggenmühle");
        break;
    }
    case 125072:
    {
        returnValue = F("Guggenweg");
        break;
    }
    case 125073:
    {
        returnValue = F("Guggenwiesweg");
        break;
    }
    case 125074:
    {
        returnValue = F("Guggerberg");
        break;
    }
    case 125075:
    {
        returnValue = F("Gugglbergweg");
        break;
    }
    case 125076:
    {
        returnValue = F("Guggmühleweg");
        break;
    }
    case 125077:
    {
        returnValue = F("Guggucks-Plätzel");
        break;
    }
    case 125078:
    {
        returnValue = F("Gugishöhe");
        break;
    }
    case 125079:
    {
        returnValue = F("Guglberger Au");
        break;
    }
    case 125080:
    {
        returnValue = F("Guglerweg");
        break;
    }
    case 125081:
    {
        returnValue = F("Guglhör");
        break;
    }
    case 125082:
    {
        returnValue = F("Guglweiterstr.");
        break;
    }
    case 125083:
    {
        returnValue = F("Guhleitz");
        break;
    }
    case 125084:
    {
        returnValue = F("Guhlsdorf");
        break;
    }
    case 125085:
    {
        returnValue = F("Guhlsdorfer Str.");
        break;
    }
    case 125086:
    {
        returnValue = F("Guhlstedt");
        break;
    }
    case 125087:
    {
        returnValue = F("Guhmannstr.");
        break;
    }
    case 125088:
    {
        returnValue = F("Guidelplatz");
        break;
    }
    case 125089:
    {
        returnValue = F("Guido-Brescius-Weg");
        break;
    }
    case 125090:
    {
        returnValue = F("Guido-Halbig-Str.");
        break;
    }
    case 125091:
    {
        returnValue = F("Guido-Oberdorfer-Str.");
        break;
    }
    case 125092:
    {
        returnValue = F("Guidostr.");
        break;
    }
    case 125093:
    {
        returnValue = F("Guigenweg");
        break;
    }
    case 125094:
    {
        returnValue = F("Guignicourt-Ring");
        break;
    }
    case 125095:
    {
        returnValue = F("Guilleaumestr.");
        break;
    }
    case 125096:
    {
        returnValue = F("Guinbertstr.");
        break;
    }
    case 125097:
    {
        returnValue = F("Guipavasring");
        break;
    }
    case 125098:
    {
        returnValue = F("Guissener Str.");
        break;
    }
    case 125099:
    {
        returnValue = F("Guitres Str.");
        break;
    }
    case 125100:
    {
        returnValue = F("Guizettistr.");
        break;
    }
    case 125101:
    {
        returnValue = F("Gulbranssonstr.");
        break;
    }
    case 125102:
    {
        returnValue = F("Gulchweg");
        break;
    }
    case 125103:
    {
        returnValue = F("Gulde");
        break;
    }
    case 125104:
    {
        returnValue = F("Guldeholz");
        break;
    }
    case 125105:
    {
        returnValue = F("Guldenbachstr.");
        break;
    }
    case 125106:
    {
        returnValue = F("Guldenbergstr.");
        break;
    }
    case 125107:
    {
        returnValue = F("Guldenbergweg");
        break;
    }
    case 125108:
    {
        returnValue = F("Guldenbrücke");
        break;
    }
    case 125109:
    {
        returnValue = F("Guldener Kamp");
        break;
    }
    case 125110:
    {
        returnValue = F("Guldengasse");
        break;
    }
    case 125111:
    {
        returnValue = F("Guldengewann");
        break;
    }
    case 125112:
    {
        returnValue = F("Guldenhardt");
        break;
    }
    case 125113:
    {
        returnValue = F("Guldenmannstr.");
        break;
    }
    case 125114:
    {
        returnValue = F("Guldenpfad");
        break;
    }
    case 125115:
    {
        returnValue = F("Guldensteig");
        break;
    }
    case 125116:
    {
        returnValue = F("Guldenstr.");
        break;
    }
    case 125117:
    {
        returnValue = F("Guldentaler Weg");
        break;
    }
    case 125118:
    {
        returnValue = F("Guldenweg");
        break;
    }
    case 125119:
    {
        returnValue = F("Guldismühlweg");
        break;
    }
    case 125120:
    {
        returnValue = F("Guldnergasse");
        break;
    }
    case 125121:
    {
        returnValue = F("Gule");
        break;
    }
    case 125122:
    {
        returnValue = F("Guleitzer Str.");
        break;
    }
    case 125123:
    {
        returnValue = F("Gulfpadd");
        break;
    }
    case 125124:
    {
        returnValue = F("Gulielminettistr.");
        break;
    }
    case 125125:
    {
        returnValue = F("Gulisastr.");
        break;
    }
    case 125126:
    {
        returnValue = F("Gullenbachstr.");
        break;
    }
    case 125127:
    {
        returnValue = F("Gullergraben");
        break;
    }
    case 125128:
    {
        returnValue = F("Gullerhisliweg");
        break;
    }
    case 125129:
    {
        returnValue = F("Gumattenkirchen");
        break;
    }
    case 125130:
    {
        returnValue = F("Gumberg");
        break;
    }
    case 125131:
    {
        returnValue = F("Gumbertseestr.");
        break;
    }
    case 125132:
    {
        returnValue = F("Gumbertstr.");
        break;
    }
    case 125133:
    {
        returnValue = F("Gumbertsweg");
        break;
    }
    case 125134:
    {
        returnValue = F("Gumbertusweg");
        break;
    }
    case 125135:
    {
        returnValue = F("Gumbinnener Str.");
        break;
    }
    case 125136:
    {
        returnValue = F("Gumbinner Str.");
        break;
    }
    case 125137:
    {
        returnValue = F("Gumbinner Weg");
        break;
    }
    case 125138:
    {
        returnValue = F("Gumbisweg");
        break;
    }
    case 125139:
    {
        returnValue = F("Gumboldsleite");
        break;
    }
    case 125140:
    {
        returnValue = F("Gumbsheimer Str.");
        break;
    }
    case 125141:
    {
        returnValue = F("Gumbsheimer Weg");
        break;
    }
    case 125142:
    {
        returnValue = F("Gumlichstr.");
        break;
    }
    case 125143:
    {
        returnValue = F("Gumm-Häusle-Weg");
        break;
    }
    case 125144:
    {
        returnValue = F("Gummanz");
        break;
    }
    case 125145:
    {
        returnValue = F("Gummanzer Str.");
        break;
    }
    case 125146:
    {
        returnValue = F("Gummarstr.");
        break;
    }
    case 125147:
    {
        returnValue = F("Gummastr.");
        break;
    }
    case 125148:
    {
        returnValue = F("Gummel");
        break;
    }
    case 125149:
    {
        returnValue = F("Gummelsteder Str.");
        break;
    }
    case 125150:
    {
        returnValue = F("Gummenbergweg");
        break;
    }
    case 125151:
    {
        returnValue = F("Gummenstr.");
        break;
    }
    case 125152:
    {
        returnValue = F("Gummeringer Str.");
        break;
    }
    case 125153:
    {
        returnValue = F("Gummeringer Weg");
        break;
    }
    case 125154:
    {
        returnValue = F("Gummeringerau");
        break;
    }
    case 125155:
    {
        returnValue = F("Gummerother Str.");
        break;
    }
    case 125156:
    {
        returnValue = F("Gummersbacher Str.");
        break;
    }
    case 125157:
    {
        returnValue = F("Gummersbachstr.");
        break;
    }
    case 125158:
    {
        returnValue = F("Gummershardter Weg");
        break;
    }
    case 125159:
    {
        returnValue = F("Gummibahn - Alter Bahndamm");
        break;
    }
    case 125160:
    {
        returnValue = F("Gummistr.");
        break;
    }
    case 125161:
    {
        returnValue = F("Gummiweg");
        break;
    }
    case 125162:
    {
        returnValue = F("Gummiwerkstr.");
        break;
    }
    case 125163:
    {
        returnValue = F("Gummweg");
        break;
    }
    case 125164:
    {
        returnValue = F("Gumnitz");
        break;
    }
    case 125165:
    {
        returnValue = F("Gumpacker Str.");
        break;
    }
    case 125166:
    {
        returnValue = F("Gumpe");
        break;
    }
    case 125167:
    {
        returnValue = F("Gumpelseeweg");
        break;
    }
    case 125168:
    {
        returnValue = F("Gumpen");
        break;
    }
    case 125169:
    {
        returnValue = F("Gumpenau");
        break;
    }
    case 125170:
    {
        returnValue = F("Gumpenbergstr.");
        break;
    }
    case 125171:
    {
        returnValue = F("Gumpenbergweg");
        break;
    }
    case 125172:
    {
        returnValue = F("Gumpener Str.");
        break;
    }
    case 125173:
    {
        returnValue = F("Gumpener Weg");
        break;
    }
    case 125174:
    {
        returnValue = F("Gumpener-Kreuz-Str.");
        break;
    }
    case 125175:
    {
        returnValue = F("Gumpengasse");
        break;
    }
    case 125176:
    {
        returnValue = F("Gumpenhalde");
        break;
    }
    case 125177:
    {
        returnValue = F("Gumpenstr.");
        break;
    }
    case 125178:
    {
        returnValue = F("Gumpenweg");
        break;
    }
    case 125179:
    {
        returnValue = F("Gumpenweihergäßle");
        break;
    }
    case 125180:
    {
        returnValue = F("Gumpenäckerstr.");
        break;
    }
    case 125181:
    {
        returnValue = F("Gumpersberger Str.");
        break;
    }
    case 125182:
    {
        returnValue = F("Gumpersdorf");
        break;
    }
    case 125183:
    {
        returnValue = F("Gumpersdorfer Str.");
        break;
    }
    case 125184:
    {
        returnValue = F("Gumpersdorfer Weg");
        break;
    }
    case 125185:
    {
        returnValue = F("Gumpertinger Str.");
        break;
    }
    case 125186:
    {
        returnValue = F("Gumpertsham");
        break;
    }
    case 125187:
    {
        returnValue = F("Gumpertshamer -Str.");
        break;
    }
    case 125188:
    {
        returnValue = F("Gumpertsreuther Str.");
        break;
    }
    case 125189:
    {
        returnValue = F("Gumpertstr.");
        break;
    }
    case 125190:
    {
        returnValue = F("Gumperzweg");
        break;
    }
    case 125191:
    {
        returnValue = F("Gumpestr.");
        break;
    }
    case 125192:
    {
        returnValue = F("Gumpinger Str.");
        break;
    }
    case 125193:
    {
        returnValue = F("Gumppenbergstr.");
        break;
    }
    case 125194:
    {
        returnValue = F("Gumppenstr.");
        break;
    }
    case 125195:
    {
        returnValue = F("Gumppstr.");
        break;
    }
    case 125196:
    {
        returnValue = F("Gumstr.");
        break;
    }
    case 125197:
    {
        returnValue = F("Gumtower Str.");
        break;
    }
    case 125198:
    {
        returnValue = F("Gumtower Weg");
        break;
    }
    case 125199:
    {
        returnValue = F("Gund");
        break;
    }
    case 125200:
    {
        returnValue = F("Gundackersdorf");
        break;
    }
    case 125201:
    {
        returnValue = F("Gundastr.");
        break;
    }
    case 125202:
    {
        returnValue = F("Gundbach Park");
        break;
    }
    case 125203:
    {
        returnValue = F("Gundbachstr.");
        break;
    }
    case 125204:
    {
        returnValue = F("Gundekarstr.");
        break;
    }
    case 125205:
    {
        returnValue = F("Gundelachstr.");
        break;
    }
    case 125206:
    {
        returnValue = F("Gundelandstr.");
        break;
    }
    case 125207:
    {
        returnValue = F("Gundelauer Str.");
        break;
    }
    case 125208:
    {
        returnValue = F("Gundelfingenstr.");
        break;
    }
    case 125209:
    {
        returnValue = F("Gundelfinger Str.");
        break;
    }
    case 125210:
    {
        returnValue = F("Gundelfinger Weg");
        break;
    }
    case 125211:
    {
        returnValue = F("Gundelgasse");
        break;
    }
    case 125212:
    {
        returnValue = F("Gundelhardstr.");
        break;
    }
    case 125213:
    {
        returnValue = F("Gundelsbacher Str.");
        break;
    }
    case 125214:
    {
        returnValue = F("Gundelsberger Str.");
        break;
    }
    case 125215:
    {
        returnValue = F("Gundelsberger Weg");
        break;
    }
    case 125216:
    {
        returnValue = F("Gundelsby");
        break;
    }
    case 125217:
    {
        returnValue = F("Gundelsdorfer Str.");
        break;
    }
    case 125218:
    {
        returnValue = F("Gundelshausener Str.");
        break;
    }
    case 125219:
    {
        returnValue = F("Gundelshauser Steige");
        break;
    }
    case 125220:
    {
        returnValue = F("Gundelshauser Str.");
        break;
    }
    case 125221:
    {
        returnValue = F("Gundelsheimer Schleuse");
        break;
    }
    case 125222:
    {
        returnValue = F("Gundelsheimer Str.");
        break;
    }
    case 125223:
    {
        returnValue = F("Gundelslebener Weg");
        break;
    }
    case 125224:
    {
        returnValue = F("Gundelswind");
        break;
    }
    case 125225:
    {
        returnValue = F("Gundelswinder Weg");
        break;
    }
    case 125226:
    {
        returnValue = F("Gundelweinstr.");
        break;
    }
    case 125227:
    {
        returnValue = F("Gunderhausenstr.");
        break;
    }
    case 125228:
    {
        returnValue = F("Gundermann Plaza");
        break;
    }
    case 125229:
    {
        returnValue = F("Gundermannstr.");
        break;
    }
    case 125230:
    {
        returnValue = F("Gundernhäuser Str.");
        break;
    }
    case 125231:
    {
        returnValue = F("Gundersaalschneise");
        break;
    }
    case 125232:
    {
        returnValue = F("Gundersheimerweg");
        break;
    }
    case 125233:
    {
        returnValue = F("Gunderslebener Str.");
        break;
    }
    case 125234:
    {
        returnValue = F("Gundersleber Str.");
        break;
    }
    case 125235:
    {
        returnValue = F("Gunderstall");
        break;
    }
    case 125236:
    {
        returnValue = F("Gundertshausener Str.");
        break;
    }
    case 125237:
    {
        returnValue = F("Gundertweg");
        break;
    }
    case 125238:
    {
        returnValue = F("Gundgasse");
        break;
    }
    case 125239:
    {
        returnValue = F("Gundharstr.");
        break;
    }
    case 125240:
    {
        returnValue = F("Gundheimer Gasse");
        break;
    }
    case 125241:
    {
        returnValue = F("Gundheimer Hohl");
        break;
    }
    case 125242:
    {
        returnValue = F("Gundheimer Str.");
        break;
    }
    case 125243:
    {
        returnValue = F("Gundheimer Weg");
        break;
    }
    case 125244:
    {
        returnValue = F("Gundheimerhof");
        break;
    }
    case 125245:
    {
        returnValue = F("Gundhelmer Str.");
        break;
    }
    case 125246:
    {
        returnValue = F("Gundhofstr.");
        break;
    }
    case 125247:
    {
        returnValue = F("Gundhöring");
        break;
    }
    case 125248:
    {
        returnValue = F("Gundlachweg");
        break;
    }
    case 125249:
    {
        returnValue = F("Gundolfstr.");
        break;
    }
    case 125250:
    {
        returnValue = F("Gundorfer Linie");
        break;
    }
    case 125251:
    {
        returnValue = F("Gundoweg");
        break;
    }
    case 125252:
    {
        returnValue = F("Gundremminger Str.");
        break;
    }
    case 125253:
    {
        returnValue = F("Gundringhausen");
        break;
    }
    case 125254:
    {
        returnValue = F("Gundstr.");
        break;
    }
    case 125255:
    {
        returnValue = F("Gundwaldstr.");
        break;
    }
    case 125256:
    {
        returnValue = F("Gundweg");
        break;
    }
    case 125257:
    {
        returnValue = F("Gunerfing");
        break;
    }
    case 125258:
    {
        returnValue = F("Gunethe");
        break;
    }
    case 125259:
    {
        returnValue = F("Gunetsrain");
        break;
    }
    case 125260:
    {
        returnValue = F("Gunetzrhainerstr.");
        break;
    }
    case 125261:
    {
        returnValue = F("Gunezrhainerweg");
        break;
    }
    case 125262:
    {
        returnValue = F("Gungelsbrunnen");
        break;
    }
    case 125263:
    {
        returnValue = F("Gunggasse");
        break;
    }
    case 125264:
    {
        returnValue = F("Gungoldinger Str.");
        break;
    }
    case 125265:
    {
        returnValue = F("Gungstr.");
        break;
    }
    case 125266:
    {
        returnValue = F("Gunkeleiweg");
        break;
    }
    case 125267:
    {
        returnValue = F("Gunkelsgasse");
        break;
    }
    case 125268:
    {
        returnValue = F("Gunkelsrainstr.");
        break;
    }
    case 125269:
    {
        returnValue = F("Gunnar-Wester-Str.");
        break;
    }
    case 125270:
    {
        returnValue = F("Gunneby");
        break;
    }
    case 125271:
    {
        returnValue = F("Gunnentalstr.");
        break;
    }
    case 125272:
    {
        returnValue = F("Gunnersdorfer Str.");
        break;
    }
    case 125273:
    {
        returnValue = F("Gunnersdorfer Weg");
        break;
    }
    case 125274:
    {
        returnValue = F("Gunninger Str.");
        break;
    }
    case 125275:
    {
        returnValue = F("Gunoldinger Weg");
        break;
    }
    case 125276:
    {
        returnValue = F("Gunoldstr.");
        break;
    }
    case 125277:
    {
        returnValue = F("Gunort");
        break;
    }
    case 125278:
    {
        returnValue = F("Gunskirchner Str.");
        break;
    }
    case 125279:
    {
        returnValue = F("Gunt");
        break;
    }
    case 125280:
    {
        returnValue = F("Gunta-Stölzl-Str.");
        break;
    }
    case 125281:
    {
        returnValue = F("Guntendorf");
        break;
    }
    case 125282:
    {
        returnValue = F("Gunter-Böhmer-Weg");
        break;
    }
    case 125283:
    {
        returnValue = F("Gunter-Domschke-Weg");
        break;
    }
    case 125284:
    {
        returnValue = F("Guntermannsborn Schneise");
        break;
    }
    case 125285:
    {
        returnValue = F("Guntermannstr.");
        break;
    }
    case 125286:
    {
        returnValue = F("Gunterring");
        break;
    }
    case 125287:
    {
        returnValue = F("Guntersblumer Str.");
        break;
    }
    case 125288:
    {
        returnValue = F("Guntersdorfer Str.");
        break;
    }
    case 125289:
    {
        returnValue = F("Guntershäuser Str.");
        break;
    }
    case 125290:
    {
        returnValue = F("Guntersriether Str.");
        break;
    }
    case 125291:
    {
        returnValue = F("Gunterstr.");
        break;
    }
    case 125292:
    {
        returnValue = F("Gunterweg");
        break;
    }
    case 125293:
    {
        returnValue = F("Guntherkircherl");
        break;
    }
    case 125294:
    {
        returnValue = F("Gunthersteig");
        break;
    }
    case 125295:
    {
        returnValue = F("Guntherstr.");
        break;
    }
    case 125296:
    {
        returnValue = F("Guntherweg");
        break;
    }
    case 125297:
    {
        returnValue = F("Gunting");
        break;
    }
    case 125298:
    {
        returnValue = F("Guntinger Str.");
        break;
    }
    case 125299:
    {
        returnValue = F("Guntiusweg");
        break;
    }
    case 125300:
    {
        returnValue = F("Guntramweg");
        break;
    }
    case 125301:
    {
        returnValue = F("Guntsberg");
        break;
    }
    case 125302:
    {
        returnValue = F("Gunzbergweg");
        break;
    }
    case 125303:
    {
        returnValue = F("Gunzelinstr.");
        break;
    }
    case 125304:
    {
        returnValue = F("Gunzelinweg");
        break;
    }
    case 125305:
    {
        returnValue = F("Gunzenauer Str.");
        break;
    }
    case 125306:
    {
        returnValue = F("Gunzenbacher Weg");
        break;
    }
    case 125307:
    {
        returnValue = F("Gunzenbachstr.");
        break;
    }
    case 125308:
    {
        returnValue = F("Gunzenbachweg");
        break;
    }
    case 125309:
    {
        returnValue = F("Gunzenberg");
        break;
    }
    case 125310:
    {
        returnValue = F("Gunzendorfer Weg");
        break;
    }
    case 125311:
    {
        returnValue = F("Gunzener Str.");
        break;
    }
    case 125312:
    {
        returnValue = F("Gunzengraben");
        break;
    }
    case 125313:
    {
        returnValue = F("Gunzengrabengasse");
        break;
    }
    case 125314:
    {
        returnValue = F("Gunzenham");
        break;
    }
    case 125315:
    {
        returnValue = F("Gunzenhausener Str.");
        break;
    }
    case 125316:
    {
        returnValue = F("Gunzenhauser Str.");
        break;
    }
    case 125317:
    {
        returnValue = F("Gunzenheimer Str.");
        break;
    }
    case 125318:
    {
        returnValue = F("Gunzenhof");
        break;
    }
    case 125319:
    {
        returnValue = F("Gunzenhäuser Str.");
        break;
    }
    case 125320:
    {
        returnValue = F("Gunzenleestr.");
        break;
    }
    case 125321:
    {
        returnValue = F("Gunzenweg");
        break;
    }
    case 125322:
    {
        returnValue = F("Gunzing");
        break;
    }
    case 125323:
    {
        returnValue = F("Gunzostr.");
        break;
    }
    case 125324:
    {
        returnValue = F("Gunzoweg");
        break;
    }
    case 125325:
    {
        returnValue = F("Gupfen");
        break;
    }
    case 125326:
    {
        returnValue = F("Gupfenbühlweg");
        break;
    }
    case 125327:
    {
        returnValue = F("Gupfengasse");
        break;
    }
    case 125328:
    {
        returnValue = F("Gupfenplatz");
        break;
    }
    case 125329:
    {
        returnValue = F("Gupfenstr.");
        break;
    }
    case 125330:
    {
        returnValue = F("Gupfweg");
        break;
    }
    case 125331:
    {
        returnValue = F("Guppenberg");
        break;
    }
    case 125332:
    {
        returnValue = F("Gurgel");
        break;
    }
    case 125333:
    {
        returnValue = F("Gurgelgäßchen");
        break;
    }
    case 125334:
    {
        returnValue = F("Gurgelheusträßchen");
        break;
    }
    case 125335:
    {
        returnValue = F("Gurgelweg");
        break;
    }
    case 125336:
    {
        returnValue = F("Gurkenallee");
        break;
    }
    case 125337:
    {
        returnValue = F("Gurkengasse");
        break;
    }
    case 125338:
    {
        returnValue = F("Gurkenstr.");
        break;
    }
    case 125339:
    {
        returnValue = F("Gurlittstr.");
        break;
    }
    case 125340:
    {
        returnValue = F("Gurlittweg");
        break;
    }
    case 125341:
    {
        returnValue = F("Gurnemanzstr.");
        break;
    }
    case 125342:
    {
        returnValue = F("Gurstr.");
        break;
    }
    case 125343:
    {
        returnValue = F("Gurtdeel");
        break;
    }
    case 125344:
    {
        returnValue = F("Gurtecstr.");
        break;
    }
    case 125345:
    {
        returnValue = F("Gurthbusch");
        break;
    }
    case 125346:
    {
        returnValue = F("Gurtmuasem");
        break;
    }
    case 125347:
    {
        returnValue = F("Gurtstein");
        break;
    }
    case 125348:
    {
        returnValue = F("Gurtstig");
        break;
    }
    case 125349:
    {
        returnValue = F("Gurtweiler Str.");
        break;
    }
    case 125350:
    {
        returnValue = F("Gusbeek");
        break;
    }
    case 125351:
    {
        returnValue = F("Gusbergstr.");
        break;
    }
    case 125352:
    {
        returnValue = F("Gusborner Str.");
        break;
    }
    case 125353:
    {
        returnValue = F("Gusborner Weg");
        break;
    }
    case 125354:
    {
        returnValue = F("Guschi-Voß-Weg");
        break;
    }
    case 125355:
    {
        returnValue = F("Gusenburger Str.");
        break;
    }
    case 125356:
    {
        returnValue = F("Gusenburger Weg");
        break;
    }
    case 125357:
    {
        returnValue = F("Gusneitz");
        break;
    }
    case 125358:
    {
        returnValue = F("Gusower Loose");
        break;
    }
    case 125359:
    {
        returnValue = F("Gusower Str.");
        break;
    }
    case 125360:
    {
        returnValue = F("Gusower Weg");
        break;
    }
    case 125361:
    {
        returnValue = F("Gussenfeld");
        break;
    }
    case 125362:
    {
        returnValue = F("Gussenstadter Str.");
        break;
    }
    case 125363:
    {
        returnValue = F("Gusso-Reuss-Str.");
        break;
    }
    case 125364:
    {
        returnValue = F("Gussower Birkenweg");
        break;
    }
    case 125365:
    {
        returnValue = F("Gussower Dorfstr.");
        break;
    }
    case 125366:
    {
        returnValue = F("Gussower Seekorso");
        break;
    }
    case 125367:
    {
        returnValue = F("Gussower Str.");
        break;
    }
    case 125368:
    {
        returnValue = F("Gustaf-de-Lattin-Gasse");
        break;
    }
    case 125369:
    {
        returnValue = F("Gustav-Adolf-Klingelnberg-Str.");
        break;
    }
    case 125370:
    {
        returnValue = F("Gustav-Adolf-Platz");
        break;
    }
    case 125371:
    {
        returnValue = F("Gustav-Adolf-Rist-Str.");
        break;
    }
    case 125372:
    {
        returnValue = F("Gustav-Adolf-Str.");
        break;
    }
    case 125373:
    {
        returnValue = F("Gustav-Adolf-Zeidler-Str.");
        break;
    }
    case 125374:
    {
        returnValue = F("Gustav-Albert-Str.");
        break;
    }
    case 125375:
    {
        returnValue = F("Gustav-Altenhain-Str.");
        break;
    }
    case 125376:
    {
        returnValue = F("Gustav-Arndt-Str.");
        break;
    }
    case 125377:
    {
        returnValue = F("Gustav-Augustin-Str.");
        break;
    }
    case 125378:
    {
        returnValue = F("Gustav-Bandmann-Weg");
        break;
    }
    case 125379:
    {
        returnValue = F("Gustav-Barth-Weg");
        break;
    }
    case 125380:
    {
        returnValue = F("Gustav-Beck-Str.");
        break;
    }
    case 125381:
    {
        returnValue = F("Gustav-Becker-Str.");
        break;
    }
    case 125382:
    {
        returnValue = F("Gustav-Bergmann-Str.");
        break;
    }
    case 125383:
    {
        returnValue = F("Gustav-Bergt-Str.");
        break;
    }
    case 125384:
    {
        returnValue = F("Gustav-Berlet-Str.");
        break;
    }
    case 125385:
    {
        returnValue = F("Gustav-Bermann-Str.");
        break;
    }
    case 125386:
    {
        returnValue = F("Gustav-Blickle-Str.");
        break;
    }
    case 125387:
    {
        returnValue = F("Gustav-Blum-Str.");
        break;
    }
    case 125388:
    {
        returnValue = F("Gustav-Blume-Weg");
        break;
    }
    case 125389:
    {
        returnValue = F("Gustav-Blüthgen-Str.");
        break;
    }
    case 125390:
    {
        returnValue = F("Gustav-Bohm-Str.");
        break;
    }
    case 125391:
    {
        returnValue = F("Gustav-Bosselmann-Ring");
        break;
    }
    case 125392:
    {
        returnValue = F("Gustav-Brandauer-Str.");
        break;
    }
    case 125393:
    {
        returnValue = F("Gustav-Braubach-Str.");
        break;
    }
    case 125394:
    {
        returnValue = F("Gustav-Bregenzer-Str.");
        break;
    }
    case 125395:
    {
        returnValue = F("Gustav-Bruhn-Str.");
        break;
    }
    case 125396:
    {
        returnValue = F("Gustav-Brückner-Weg");
        break;
    }
    case 125397:
    {
        returnValue = F("Gustav-Bunge-Str.");
        break;
    }
    case 125398:
    {
        returnValue = F("Gustav-Burghard-Str.");
        break;
    }
    case 125399:
    {
        returnValue = F("Gustav-Böcker-Str.");
        break;
    }
    case 125400:
    {
        returnValue = F("Gustav-Böttcher-Weg");
        break;
    }
    case 125401:
    {
        returnValue = F("Gustav-Büchsenschütz-Weg");
        break;
    }
    case 125402:
    {
        returnValue = F("Gustav-Clauss-Anlage");
        break;
    }
    case 125403:
    {
        returnValue = F("Gustav-Comberg-Park");
        break;
    }
    case 125404:
    {
        returnValue = F("Gustav-Dehnhard-Str.");
        break;
    }
    case 125405:
    {
        returnValue = F("Gustav-Deiters-Str.");
        break;
    }
    case 125406:
    {
        returnValue = F("Gustav-Delle-Str.");
        break;
    }
    case 125407:
    {
        returnValue = F("Gustav-Dempzin-Str.");
        break;
    }
    case 125408:
    {
        returnValue = F("Gustav-Diener-Str.");
        break;
    }
    case 125409:
    {
        returnValue = F("Gustav-Dietrich-Weg");
        break;
    }
    case 125410:
    {
        returnValue = F("Gustav-Dobberkau-Str.");
        break;
    }
    case 125411:
    {
        returnValue = F("Gustav-Düsterloh-Str.");
        break;
    }
    case 125412:
    {
        returnValue = F("Gustav-Ebenbach-Allee");
        break;
    }
    case 125413:
    {
        returnValue = F("Gustav-Eberth-Str.");
        break;
    }
    case 125414:
    {
        returnValue = F("Gustav-Eichhorn-Str.");
        break;
    }
    case 125415:
    {
        returnValue = F("Gustav-Eiffel-Str.");
        break;
    }
    case 125416:
    {
        returnValue = F("Gustav-Eirich-Str.");
        break;
    }
    case 125417:
    {
        returnValue = F("Gustav-Eisenlohr-Weg");
        break;
    }
    case 125418:
    {
        returnValue = F("Gustav-Elster-Str.");
        break;
    }
    case 125419:
    {
        returnValue = F("Gustav-F.-Höfling-Str.");
        break;
    }
    case 125420:
    {
        returnValue = F("Gustav-Faber-Str.");
        break;
    }
    case 125421:
    {
        returnValue = F("Gustav-Falke-Str.");
        break;
    }
    case 125422:
    {
        returnValue = F("Gustav-Fecht-Str.");
        break;
    }
    case 125423:
    {
        returnValue = F("Gustav-Fimpel-Str.");
        break;
    }
    case 125424:
    {
        returnValue = F("Gustav-Fischer-Str.");
        break;
    }
    case 125425:
    {
        returnValue = F("Gustav-Flügge-Str.");
        break;
    }
    case 125426:
    {
        returnValue = F("Gustav-Frank-Weg");
        break;
    }
    case 125427:
    {
        returnValue = F("Gustav-Frenssen-Weg");
        break;
    }
    case 125428:
    {
        returnValue = F("Gustav-Freytag-Park");
        break;
    }
    case 125429:
    {
        returnValue = F("Gustav-Freytag-Str.");
        break;
    }
    case 125430:
    {
        returnValue = F("Gustav-Freytag-Weg");
        break;
    }
    case 125431:
    {
        returnValue = F("Gustav-Friedrich-Meyer-Str.");
        break;
    }
    case 125432:
    {
        returnValue = F("Gustav-Friedrich-Siedlung");
        break;
    }
    case 125433:
    {
        returnValue = F("Gustav-Friedrich-Weg");
        break;
    }
    case 125434:
    {
        returnValue = F("Gustav-Froelich-Str.");
        break;
    }
    case 125435:
    {
        returnValue = F("Gustav-Fränkel-Weg");
        break;
    }
    case 125436:
    {
        returnValue = F("Gustav-Frölich-Allee");
        break;
    }
    case 125437:
    {
        returnValue = F("Gustav-Fuchs-Str.");
        break;
    }
    case 125438:
    {
        returnValue = F("Gustav-Gabriel-Str.");
        break;
    }
    case 125439:
    {
        returnValue = F("Gustav-Gerster-Str.");
        break;
    }
    case 125440:
    {
        returnValue = F("Gustav-Getto-Str.");
        break;
    }
    case 125441:
    {
        returnValue = F("Gustav-Gloe-Weg");
        break;
    }
    case 125442:
    {
        returnValue = F("Gustav-Gläser-Str.");
        break;
    }
    case 125443:
    {
        returnValue = F("Gustav-Graf-Str.");
        break;
    }
    case 125444:
    {
        returnValue = F("Gustav-Grathwohl-Str.");
        break;
    }
    case 125445:
    {
        returnValue = F("Gustav-Grossmann-Str.");
        break;
    }
    case 125446:
    {
        returnValue = F("Gustav-Görner-Allee");
        break;
    }
    case 125447:
    {
        returnValue = F("Gustav-Hackenberg-Weg");
        break;
    }
    case 125448:
    {
        returnValue = F("Gustav-Hacker-Weg");
        break;
    }
    case 125449:
    {
        returnValue = F("Gustav-Hartung-Str.");
        break;
    }
    case 125450:
    {
        returnValue = F("Gustav-Haubold-Siedlung");
        break;
    }
    case 125451:
    {
        returnValue = F("Gustav-Haupt-Weg");
        break;
    }
    case 125452:
    {
        returnValue = F("Gustav-Hauser-Str.");
        break;
    }
    case 125453:
    {
        returnValue = F("Gustav-Haydn-Str.");
        break;
    }
    case 125454:
    {
        returnValue = F("Gustav-Hegler-Ring");
        break;
    }
    case 125455:
    {
        returnValue = F("Gustav-Heinemann Str.");
        break;
    }
    case 125456:
    {
        returnValue = F("Gustav-Heinemann-Allee");
        break;
    }
    case 125457:
    {
        returnValue = F("Gustav-Heinemann-Brücke");
        break;
    }
    case 125458:
    {
        returnValue = F("Gustav-Heinemann-Promenade");
        break;
    }
    case 125459:
    {
        returnValue = F("Gustav-Heinemann-Ring");
        break;
    }
    case 125460:
    {
        returnValue = F("Gustav-Heinemann-Str.");
        break;
    }
    case 125461:
    {
        returnValue = F("Gustav-Heinemann-Weg");
        break;
    }
    case 125462:
    {
        returnValue = F("Gustav-Heinrich-Str.");
        break;
    }
    case 125463:
    {
        returnValue = F("Gustav-Hennigs-Str.");
        break;
    }
    case 125464:
    {
        returnValue = F("Gustav-Hensel-Str.");
        break;
    }
    case 125465:
    {
        returnValue = F("Gustav-Herbster-Str.");
        break;
    }
    case 125466:
    {
        returnValue = F("Gustav-Hermann-Halbach-Str.");
        break;
    }
    case 125467:
    {
        returnValue = F("Gustav-Hermann-Str.");
        break;
    }
    case 125468:
    {
        returnValue = F("Gustav-Herrmann-Str.");
        break;
    }
    case 125469:
    {
        returnValue = F("Gustav-Hertz-Str.");
        break;
    }
    case 125470:
    {
        returnValue = F("Gustav-Hetzer-Str.");
        break;
    }
    case 125471:
    {
        returnValue = F("Gustav-Heusinger-Str.");
        break;
    }
    case 125472:
    {
        returnValue = F("Gustav-Heyer-Weg");
        break;
    }
    case 125473:
    {
        returnValue = F("Gustav-Heß-Str.");
        break;
    }
    case 125474:
    {
        returnValue = F("Gustav-Hirsch-Platz");
        break;
    }
    case 125475:
    {
        returnValue = F("Gustav-Hirschfeld-Ring");
        break;
    }
    case 125476:
    {
        returnValue = F("Gustav-Hobraeck-Str.");
        break;
    }
    case 125477:
    {
        returnValue = F("Gustav-Hoch-Str.");
        break;
    }
    case 125478:
    {
        returnValue = F("Gustav-Holle-Weg");
        break;
    }
    case 125479:
    {
        returnValue = F("Gustav-Holthusen-Str.");
        break;
    }
    case 125480:
    {
        returnValue = F("Gustav-Hugo-Str.");
        break;
    }
    case 125481:
    {
        returnValue = F("Gustav-Hummel-Str.");
        break;
    }
    case 125482:
    {
        returnValue = F("Gustav-Humpfer-Str.");
        break;
    }
    case 125483:
    {
        returnValue = F("Gustav-Hänjes-Str.");
        break;
    }
    case 125484:
    {
        returnValue = F("Gustav-Jahn-Str.");
        break;
    }
    case 125485:
    {
        returnValue = F("Gustav-Jeuthe-Str.");
        break;
    }
    case 125486:
    {
        returnValue = F("Gustav-Jourdan-Weg");
        break;
    }
    case 125487:
    {
        returnValue = F("Gustav-Justi-Str.");
        break;
    }
    case 125488:
    {
        returnValue = F("Gustav-Kammerer-Str.");
        break;
    }
    case 125489:
    {
        returnValue = F("Gustav-Kammrath-Siedlung");
        break;
    }
    case 125490:
    {
        returnValue = F("Gustav-Kapaun-Str.");
        break;
    }
    case 125491:
    {
        returnValue = F("Gustav-Kastropp-Str.");
        break;
    }
    case 125492:
    {
        returnValue = F("Gustav-Kayser-Str.");
        break;
    }
    case 125493:
    {
        returnValue = F("Gustav-Kietz-Str.");
        break;
    }
    case 125494:
    {
        returnValue = F("Gustav-Kipp-Weg");
        break;
    }
    case 125495:
    {
        returnValue = F("Gustav-Kirchhoff-Str.");
        break;
    }
    case 125496:
    {
        returnValue = F("Gustav-Kirchoff-Platz");
        break;
    }
    case 125497:
    {
        returnValue = F("Gustav-Klaue-Str.");
        break;
    }
    case 125498:
    {
        returnValue = F("Gustav-Klemme-Weg");
        break;
    }
    case 125499:
    {
        returnValue = F("Gustav-Klimpel-Str.");
        break;
    }
    case 125500:
    {
        returnValue = F("Gustav-Klimt-Str.");
        break;
    }
    case 125501:
    {
        returnValue = F("Gustav-Koch-Str.");
        break;
    }
    case 125502:
    {
        returnValue = F("Gustav-Kohne-Str.");
        break;
    }
    case 125503:
    {
        returnValue = F("Gustav-Kottsieper-Steg");
        break;
    }
    case 125504:
    {
        returnValue = F("Gustav-Kramer-Weg");
        break;
    }
    case 125505:
    {
        returnValue = F("Gustav-Krüger-Str.");
        break;
    }
    case 125506:
    {
        returnValue = F("Gustav-Krüger-Weg");
        break;
    }
    case 125507:
    {
        returnValue = F("Gustav-Kurtze-Promemade");
        break;
    }
    case 125508:
    {
        returnValue = F("Gustav-Kurtze-Promenade");
        break;
    }
    case 125509:
    {
        returnValue = F("Gustav-König-Str.");
        break;
    }
    case 125510:
    {
        returnValue = F("Gustav-Könsen-Str.");
        break;
    }
    case 125511:
    {
        returnValue = F("Gustav-Laforsch-Str.");
        break;
    }
    case 125512:
    {
        returnValue = F("Gustav-Lampe-Str.");
        break;
    }
    case 125513:
    {
        returnValue = F("Gustav-Leutelt-Platz");
        break;
    }
    case 125514:
    {
        returnValue = F("Gustav-Leutelt-Str.");
        break;
    }
    case 125515:
    {
        returnValue = F("Gustav-Leutelt-Weg");
        break;
    }
    case 125516:
    {
        returnValue = F("Gustav-Lilienthal-Str.");
        break;
    }
    case 125517:
    {
        returnValue = F("Gustav-Linden-Str.");
        break;
    }
    case 125518:
    {
        returnValue = F("Gustav-Lorenz-Weg");
        break;
    }
    case 125519:
    {
        returnValue = F("Gustav-Ludwig-Hertz-Str.");
        break;
    }
    case 125520:
    {
        returnValue = F("Gustav-Ludwig-Str.");
        break;
    }
    case 125521:
    {
        returnValue = F("Gustav-Lübbe-Str.");
        break;
    }
    case 125522:
    {
        returnValue = F("Gustav-Lück-Str.");
        break;
    }
    case 125523:
    {
        returnValue = F("Gustav-Maerz-Str.");
        break;
    }
    case 125524:
    {
        returnValue = F("Gustav-Magenwirth-Weg");
        break;
    }
    case 125525:
    {
        returnValue = F("Gustav-Mahler-Ring");
        break;
    }
    case 125526:
    {
        returnValue = F("Gustav-Mahler-Str.");
        break;
    }
    case 125527:
    {
        returnValue = F("Gustav-Mahler-Weg");
        break;
    }
    case 125528:
    {
        returnValue = F("Gustav-Maier-Str.");
        break;
    }
    case 125529:
    {
        returnValue = F("Gustav-Martin-Weg");
        break;
    }
    case 125530:
    {
        returnValue = F("Gustav-Matthias-Weg");
        break;
    }
    case 125531:
    {
        returnValue = F("Gustav-Mayer-Zentrum");
        break;
    }
    case 125532:
    {
        returnValue = F("Gustav-Meisel-Str.");
        break;
    }
    case 125533:
    {
        returnValue = F("Gustav-Melkert-Str.");
        break;
    }
    case 125534:
    {
        returnValue = F("Gustav-Menne-Str.");
        break;
    }
    case 125535:
    {
        returnValue = F("Gustav-Menzel-Str.");
        break;
    }
    case 125536:
    {
        returnValue = F("Gustav-Mesch-Weg");
        break;
    }
    case 125537:
    {
        returnValue = F("Gustav-Mettin-Str.");
        break;
    }
    case 125538:
    {
        returnValue = F("Gustav-Metz-Str.");
        break;
    }
    case 125539:
    {
        returnValue = F("Gustav-Meurer-Weg");
        break;
    }
    case 125540:
    {
        returnValue = F("Gustav-Meyer-Platz");
        break;
    }
    case 125541:
    {
        returnValue = F("Gustav-Meyer-Str.");
        break;
    }
    case 125542:
    {
        returnValue = F("Gustav-Meyer-Weg");
        break;
    }
    case 125543:
    {
        returnValue = F("Gustav-Meyrink-Str.");
        break;
    }
    case 125544:
    {
        returnValue = F("Gustav-Michel-Weg");
        break;
    }
    case 125545:
    {
        returnValue = F("Gustav-Moll-Str.");
        break;
    }
    case 125546:
    {
        returnValue = F("Gustav-Moritz-Weg");
        break;
    }
    case 125547:
    {
        returnValue = F("Gustav-Mosen-Str.");
        break;
    }
    case 125548:
    {
        returnValue = F("Gustav-Mönch-Weg");
        break;
    }
    case 125549:
    {
        returnValue = F("Gustav-Müller-Str.");
        break;
    }
    case 125550:
    {
        returnValue = F("Gustav-Nachtigal-Str.");
        break;
    }
    case 125551:
    {
        returnValue = F("Gustav-Nachtigall-Weg");
        break;
    }
    case 125552:
    {
        returnValue = F("Gustav-Niermann-Weg");
        break;
    }
    case 125553:
    {
        returnValue = F("Gustav-Nikolaus-Tiedemann-Str.");
        break;
    }
    case 125554:
    {
        returnValue = F("Gustav-Noske-Str.");
        break;
    }
    case 125555:
    {
        returnValue = F("Gustav-Ohm-Str.");
        break;
    }
    case 125556:
    {
        returnValue = F("Gustav-Ott-Weg");
        break;
    }
    case 125557:
    {
        returnValue = F("Gustav-Otto-Str.");
        break;
    }
    case 125558:
    {
        returnValue = F("Gustav-Overhoff-Str.");
        break;
    }
    case 125559:
    {
        returnValue = F("Gustav-Peters-Platz");
        break;
    }
    case 125560:
    {
        returnValue = F("Gustav-Petri-Str.");
        break;
    }
    case 125561:
    {
        returnValue = F("Gustav-Pfarrius-Str.");
        break;
    }
    case 125562:
    {
        returnValue = F("Gustav-Pfingsten-Str.");
        break;
    }
    case 125563:
    {
        returnValue = F("Gustav-Philipp-Str.");
        break;
    }
    case 125564:
    {
        returnValue = F("Gustav-Pinkus-Str.");
        break;
    }
    case 125565:
    {
        returnValue = F("Gustav-Pries-Str.");
        break;
    }
    case 125566:
    {
        returnValue = F("Gustav-Radbruch-Str.");
        break;
    }
    case 125567:
    {
        returnValue = F("Gustav-Rapp-Weg");
        break;
    }
    case 125568:
    {
        returnValue = F("Gustav-Rau-Str.");
        break;
    }
    case 125569:
    {
        returnValue = F("Gustav-Raute-Str.");
        break;
    }
    case 125570:
    {
        returnValue = F("Gustav-Reese-Weg");
        break;
    }
    case 125571:
    {
        returnValue = F("Gustav-Regler-Weg");
        break;
    }
    case 125572:
    {
        returnValue = F("Gustav-Reich-Str.");
        break;
    }
    case 125573:
    {
        returnValue = F("Gustav-Reimann-Str.");
        break;
    }
    case 125574:
    {
        returnValue = F("Gustav-Reinhard-Str.");
        break;
    }
    case 125575:
    {
        returnValue = F("Gustav-Rivinius-Platz");
        break;
    }
    case 125576:
    {
        returnValue = F("Gustav-Robert-Kirchhoff-Str.");
        break;
    }
    case 125577:
    {
        returnValue = F("Gustav-Rockholtz-Weg");
        break;
    }
    case 125578:
    {
        returnValue = F("Gustav-Rommel-Str.");
        break;
    }
    case 125579:
    {
        returnValue = F("Gustav-Rothbart-Ring");
        break;
    }
    case 125580:
    {
        returnValue = F("Gustav-Rotkopf-Str.");
        break;
    }
    case 125581:
    {
        returnValue = F("Gustav-Ruhnau-Str.");
        break;
    }
    case 125582:
    {
        returnValue = F("Gustav-Ruthe-Str.");
        break;
    }
    case 125583:
    {
        returnValue = F("Gustav-Rée-Anlage");
        break;
    }
    case 125584:
    {
        returnValue = F("Gustav-Röhl-Uferweg");
        break;
    }
    case 125585:
    {
        returnValue = F("Gustav-Rösler-Str.");
        break;
    }
    case 125586:
    {
        returnValue = F("Gustav-Sack-Str.");
        break;
    }
    case 125587:
    {
        returnValue = F("Gustav-Samuel-Str.");
        break;
    }
    case 125588:
    {
        returnValue = F("Gustav-Schalk-Str.");
        break;
    }
    case 125589:
    {
        returnValue = F("Gustav-Schatz-Weg");
        break;
    }
    case 125590:
    {
        returnValue = F("Gustav-Scheinpflug-Str.");
        break;
    }
    case 125591:
    {
        returnValue = F("Gustav-Schippers-Weg");
        break;
    }
    case 125592:
    {
        returnValue = F("Gustav-Schmenger-Str.");
        break;
    }
    case 125593:
    {
        returnValue = F("Gustav-Schmidt-Str.");
        break;
    }
    case 125594:
    {
        returnValue = F("Gustav-Schmidt-Weg");
        break;
    }
    case 125595:
    {
        returnValue = F("Gustav-Schmiedgen-Weg");
        break;
    }
    case 125596:
    {
        returnValue = F("Gustav-Schneeclaus-Platz");
        break;
    }
    case 125597:
    {
        returnValue = F("Gustav-Schormann-Str.");
        break;
    }
    case 125598:
    {
        returnValue = F("Gustav-Schreck-Str.");
        break;
    }
    case 125599:
    {
        returnValue = F("Gustav-Schuberth-Str.");
        break;
    }
    case 125600:
    {
        returnValue = F("Gustav-Schwab-Str.");
        break;
    }
    case 125601:
    {
        returnValue = F("Gustav-Schwab-Strasse");
        break;
    }
    case 125602:
    {
        returnValue = F("Gustav-Schwab-Weg");
        break;
    }
    case 125603:
    {
        returnValue = F("Gustav-Schwannecke-Str.");
        break;
    }
    case 125604:
    {
        returnValue = F("Gustav-Schwantes-Str.");
        break;
    }
    case 125605:
    {
        returnValue = F("Gustav-Schöller-Str.");
        break;
    }
    case 125606:
    {
        returnValue = F("Gustav-Schönleber-Str.");
        break;
    }
    case 125607:
    {
        returnValue = F("Gustav-Schönleber-Weg");
        break;
    }
    case 125608:
    {
        returnValue = F("Gustav-Seebich-Str.");
        break;
    }
    case 125609:
    {
        returnValue = F("Gustav-Selve-Str.");
        break;
    }
    case 125610:
    {
        returnValue = F("Gustav-Siegel-Str.");
        break;
    }
    case 125611:
    {
        returnValue = F("Gustav-Siegle-Str.");
        break;
    }
    case 125612:
    {
        returnValue = F("Gustav-Sigloch-Str.");
        break;
    }
    case 125613:
    {
        returnValue = F("Gustav-Sobottka-Str.");
        break;
    }
    case 125614:
    {
        returnValue = F("Gustav-Sommer-Str.");
        break;
    }
    case 125615:
    {
        returnValue = F("Gustav-Steeg-Str.");
        break;
    }
    case 125616:
    {
        returnValue = F("Gustav-Stein-Str.");
        break;
    }
    case 125617:
    {
        returnValue = F("Gustav-Steinbrecher-Str.");
        break;
    }
    case 125618:
    {
        returnValue = F("Gustav-Stoll-Weg");
        break;
    }
    case 125619:
    {
        returnValue = F("Gustav-Stolze-Str.");
        break;
    }
    case 125620:
    {
        returnValue = F("Gustav-Streseman-Str.");
        break;
    }
    case 125621:
    {
        returnValue = F("Gustav-Stresemann-Ring");
        break;
    }
    case 125622:
    {
        returnValue = F("Gustav-Stresemann-Str.");
        break;
    }
    case 125623:
    {
        returnValue = F("Gustav-Stresemann-Weg");
        break;
    }
    case 125624:
    {
        returnValue = F("Gustav-Strobel-Ring");
        break;
    }
    case 125625:
    {
        returnValue = F("Gustav-Stroh-Str.");
        break;
    }
    case 125626:
    {
        returnValue = F("Gustav-Strohm-Str.");
        break;
    }
    case 125627:
    {
        returnValue = F("Gustav-Struve-Str.");
        break;
    }
    case 125628:
    {
        returnValue = F("Gustav-Struve-Weg");
        break;
    }
    case 125629:
    {
        returnValue = F("Gustav-Sybrecht-Str.");
        break;
    }
    case 125630:
    {
        returnValue = F("Gustav-Taute-Str.");
        break;
    }
    case 125631:
    {
        returnValue = F("Gustav-Thoke-Weg");
        break;
    }
    case 125632:
    {
        returnValue = F("Gustav-Throm-Str.");
        break;
    }
    case 125633:
    {
        returnValue = F("Gustav-Tiggemann-Str.");
        break;
    }
    case 125634:
    {
        returnValue = F("Gustav-Troll-Str.");
        break;
    }
    case 125635:
    {
        returnValue = F("Gustav-Töpfer-Str.");
        break;
    }
    case 125636:
    {
        returnValue = F("Gustav-Ullrich-Str.");
        break;
    }
    case 125637:
    {
        returnValue = F("Gustav-Vetter-Str.");
        break;
    }
    case 125638:
    {
        returnValue = F("Gustav-Vogel-Str.");
        break;
    }
    case 125639:
    {
        returnValue = F("Gustav-Vogelmann-Str.");
        break;
    }
    case 125640:
    {
        returnValue = F("Gustav-Vogt-Weg");
        break;
    }
    case 125641:
    {
        returnValue = F("Gustav-Voigt-Platz");
        break;
    }
    case 125642:
    {
        returnValue = F("Gustav-Vollmer-Str.");
        break;
    }
    case 125643:
    {
        returnValue = F("Gustav-Wahler-Str.");
        break;
    }
    case 125644:
    {
        returnValue = F("Gustav-Wallraff-Str.");
        break;
    }
    case 125645:
    {
        returnValue = F("Gustav-Warnek-Str.");
        break;
    }
    case 125646:
    {
        returnValue = F("Gustav-Weeke-Str.");
        break;
    }
    case 125647:
    {
        returnValue = F("Gustav-Wegge-Str.");
        break;
    }
    case 125648:
    {
        returnValue = F("Gustav-Weil-Str.");
        break;
    }
    case 125649:
    {
        returnValue = F("Gustav-Weis-Str.");
        break;
    }
    case 125650:
    {
        returnValue = F("Gustav-Weiß-Str.");
        break;
    }
    case 125651:
    {
        returnValue = F("Gustav-Weißkopf-Str.");
        break;
    }
    case 125652:
    {
        returnValue = F("Gustav-Werner-Str.");
        break;
    }
    case 125653:
    {
        returnValue = F("Gustav-Werner-Weg");
        break;
    }
    case 125654:
    {
        returnValue = F("Gustav-Wick-Str.");
        break;
    }
    case 125655:
    {
        returnValue = F("Gustav-Will-Str.");
        break;
    }
    case 125656:
    {
        returnValue = F("Gustav-Winkler-Str.");
        break;
    }
    case 125657:
    {
        returnValue = F("Gustav-Wolf-Str.");
        break;
    }
    case 125658:
    {
        returnValue = F("Gustav-Zeuner-Str.");
        break;
    }
    case 125659:
    {
        returnValue = F("Gustav-Zimmermann-Str.");
        break;
    }
    case 125660:
    {
        returnValue = F("Gustav-van-Beek-Allee");
        break;
    }
    case 125661:
    {
        returnValue = F("Gustav-von-Bohlen-Str.");
        break;
    }
    case 125662:
    {
        returnValue = F("Gustav-von-Ewers-Str.");
        break;
    }
    case 125663:
    {
        returnValue = F("Gustav-von-Schlör-Str.");
        break;
    }
    case 125664:
    {
        returnValue = F("Gustav-von-Stein-Str.");
        break;
    }
    case 125665:
    {
        returnValue = F("Gustav-von-Struve-Str.");
        break;
    }
    case 125666:
    {
        returnValue = F("Gustave-Courbet-Str.");
        break;
    }
    case 125667:
    {
        returnValue = F("Gustave-Eiffel-Str.");
        break;
    }
    case 125668:
    {
        returnValue = F("Gustave-Eiffel-Weg");
        break;
    }
    case 125669:
    {
        returnValue = F("Gustave-Fecht-Str.");
        break;
    }
    case 125670:
    {
        returnValue = F("Gustave-Fecht-Weg");
        break;
    }
    case 125671:
    {
        returnValue = F("Gustavsburger Str.");
        break;
    }
    case 125672:
    {
        returnValue = F("Gustavsgarten");
        break;
    }
    case 125673:
    {
        returnValue = F("Gustavstr.");
        break;
    }
    case 125674:
    {
        returnValue = F("Gustavsweg");
        break;
    }
    case 125675:
    {
        returnValue = F("Gustavweg");
        break;
    }
    case 125676:
    {
        returnValue = F("Gustchen-Stolberg-Promenade");
        break;
    }
    case 125677:
    {
        returnValue = F("Guste's Huk");
        break;
    }
    case 125678:
    {
        returnValue = F("Gustebiner Damm");
        break;
    }
    case 125679:
    {
        returnValue = F("Gustebiner Wende");
        break;
    }
    case 125680:
    {
        returnValue = F("Gustel-Töpfer-Str.");
        break;
    }
    case 125681:
    {
        returnValue = F("Gustelsgasse");
        break;
    }
    case 125682:
    {
        returnValue = F("Gustengasse");
        break;
    }
    case 125683:
    {
        returnValue = F("Gustenmännchen");
        break;
    }
    case 125684:
    {
        returnValue = F("Gusterather Str.");
        break;
    }
    case 125685:
    {
        returnValue = F("Gusterei");
        break;
    }
    case 125686:
    {
        returnValue = F("Gusternhainer Str.");
        break;
    }
    case 125687:
    {
        returnValue = F("Gusternhainer Weg");
        break;
    }
    case 125688:
    {
        returnValue = F("Gustewitzbreite");
        break;
    }
    case 125689:
    {
        returnValue = F("Gustl-Bayrhammer-Weg");
        break;
    }
    case 125690:
    {
        returnValue = F("Gustl-Fuchs-Weg");
        break;
    }
    case 125691:
    {
        returnValue = F("Gustl-Kirchner-Str.");
        break;
    }
    case 125692:
    {
        returnValue = F("Gustl-Sandtner-Str.");
        break;
    }
    case 125693:
    {
        returnValue = F("Gustl-Waldau-Str.");
        break;
    }
    case 125694:
    {
        returnValue = F("Gustorfer Str.");
        break;
    }
    case 125695:
    {
        returnValue = F("Gustower Weg");
        break;
    }
    case 125696:
    {
        returnValue = F("Gustäveler Weg");
        break;
    }
    case 125697:
    {
        returnValue = F("Gut");
        break;
    }
    case 125698:
    {
        returnValue = F("Gut \"Deutschhof");
        break;
    }
    case 125699:
    {
        returnValue = F("Gut Adelsried");
        break;
    }
    case 125700:
    {
        returnValue = F("Gut Adolphshof");
        break;
    }
    case 125701:
    {
        returnValue = F("Gut Alt Bülk");
        break;
    }
    case 125702:
    {
        returnValue = F("Gut Altenhof");
        break;
    }
    case 125703:
    {
        returnValue = F("Gut Altscherbitz");
        break;
    }
    case 125704:
    {
        returnValue = F("Gut Ascheberg");
        break;
    }
    case 125705:
    {
        returnValue = F("Gut Asselborn");
        break;
    }
    case 125706:
    {
        returnValue = F("Gut Atzenau");
        break;
    }
    case 125707:
    {
        returnValue = F("Gut Aupitz");
        break;
    }
    case 125708:
    {
        returnValue = F("Gut Badersfeld");
        break;
    }
    case 125709:
    {
        returnValue = F("Gut Bandelstorf");
        break;
    }
    case 125710:
    {
        returnValue = F("Gut Barbarastein");
        break;
    }
    case 125711:
    {
        returnValue = F("Gut Basthorst");
        break;
    }
    case 125712:
    {
        returnValue = F("Gut Berkenbusch");
        break;
    }
    case 125713:
    {
        returnValue = F("Gut Bietikow");
        break;
    }
    case 125714:
    {
        returnValue = F("Gut Bilstein");
        break;
    }
    case 125715:
    {
        returnValue = F("Gut Bimberg");
        break;
    }
    case 125716:
    {
        returnValue = F("Gut Blomberg");
        break;
    }
    case 125717:
    {
        returnValue = F("Gut Bockerode");
        break;
    }
    case 125718:
    {
        returnValue = F("Gut Bodenhausen");
        break;
    }
    case 125719:
    {
        returnValue = F("Gut Bomhof");
        break;
    }
    case 125720:
    {
        returnValue = F("Gut Boxerode");
        break;
    }
    case 125721:
    {
        returnValue = F("Gut Boyneburgk");
        break;
    }
    case 125722:
    {
        returnValue = F("Gut Brandlecht");
        break;
    }
    case 125723:
    {
        returnValue = F("Gut Brockwinkel");
        break;
    }
    case 125724:
    {
        returnValue = F("Gut Brösa");
        break;
    }
    case 125725:
    {
        returnValue = F("Gut Buchenhof");
        break;
    }
    case 125726:
    {
        returnValue = F("Gut Burghof");
        break;
    }
    case 125727:
    {
        returnValue = F("Gut Böckelühr");
        break;
    }
    case 125728:
    {
        returnValue = F("Gut Bölkow");
        break;
    }
    case 125729:
    {
        returnValue = F("Gut Büstorf");
        break;
    }
    case 125730:
    {
        returnValue = F("Gut Capellen");
        break;
    }
    case 125731:
    {
        returnValue = F("Gut Clef");
        break;
    }
    case 125732:
    {
        returnValue = F("Gut Deixlfurt");
        break;
    }
    case 125733:
    {
        returnValue = F("Gut Donnerstedt");
        break;
    }
    case 125734:
    {
        returnValue = F("Gut Dyckhof");
        break;
    }
    case 125735:
    {
        returnValue = F("Gut Dächheim");
        break;
    }
    case 125736:
    {
        returnValue = F("Gut Düring");
        break;
    }
    case 125737:
    {
        returnValue = F("Gut Echtringhausen");
        break;
    }
    case 125738:
    {
        returnValue = F("Gut Eichenberg");
        break;
    }
    case 125739:
    {
        returnValue = F("Gut Eilhausen");
        break;
    }
    case 125740:
    {
        returnValue = F("Gut Ennenbach");
        break;
    }
    case 125741:
    {
        returnValue = F("Gut Etgendorf");
        break;
    }
    case 125742:
    {
        returnValue = F("Gut Falkenberg");
        break;
    }
    case 125743:
    {
        returnValue = F("Gut Falkenhöhe");
        break;
    }
    case 125744:
    {
        returnValue = F("Gut Falkenmoor");
        break;
    }
    case 125745:
    {
        returnValue = F("Gut Farve");
        break;
    }
    case 125746:
    {
        returnValue = F("Gut Faßdorf");
        break;
    }
    case 125747:
    {
        returnValue = F("Gut Freienhagen");
        break;
    }
    case 125748:
    {
        returnValue = F("Gut Friedrichsthal");
        break;
    }
    case 125749:
    {
        returnValue = F("Gut Frielinghausen");
        break;
    }
    case 125750:
    {
        returnValue = F("Gut Frohberg Gäste Weg");
        break;
    }
    case 125751:
    {
        returnValue = F("Gut Frühscheid");
        break;
    }
    case 125752:
    {
        returnValue = F("Gut Gaarde");
        break;
    }
    case 125753:
    {
        returnValue = F("Gut Gernlinden");
        break;
    }
    case 125754:
    {
        returnValue = F("Gut Gollin");
        break;
    }
    case 125755:
    {
        returnValue = F("Gut Gollma");
        break;
    }
    case 125756:
    {
        returnValue = F("Gut Grasbeck");
        break;
    }
    case 125757:
    {
        returnValue = F("Gut Gremmelin");
        break;
    }
    case 125758:
    {
        returnValue = F("Gut Groß Viegeln");
        break;
    }
    case 125759:
    {
        returnValue = F("Gut Groß-Engershausen");
        break;
    }
    case 125760:
    {
        returnValue = F("Gut Güldenstein");
        break;
    }
    case 125761:
    {
        returnValue = F("Gut Gülzow");
        break;
    }
    case 125762:
    {
        returnValue = F("Gut Haberg");
        break;
    }
    case 125763:
    {
        returnValue = F("Gut Hahn");
        break;
    }
    case 125764:
    {
        returnValue = F("Gut Hardesse");
        break;
    }
    case 125765:
    {
        returnValue = F("Gut Hauerhof");
        break;
    }
    case 125766:
    {
        returnValue = F("Gut Heeg");
        break;
    }
    case 125767:
    {
        returnValue = F("Gut Heidhof");
        break;
    }
    case 125768:
    {
        returnValue = F("Gut Heinrichshof");
        break;
    }
    case 125769:
    {
        returnValue = F("Gut Heistert");
        break;
    }
    case 125770:
    {
        returnValue = F("Gut Helpensen");
        break;
    }
    case 125771:
    {
        returnValue = F("Gut Herkenbusch");
        break;
    }
    case 125772:
    {
        returnValue = F("Gut Heyderhof");
        break;
    }
    case 125773:
    {
        returnValue = F("Gut Hilperdingen");
        break;
    }
    case 125774:
    {
        returnValue = F("Gut Hollern");
        break;
    }
    case 125775:
    {
        returnValue = F("Gut Hommelsheim");
        break;
    }
    case 125776:
    {
        returnValue = F("Gut Horner Str.");
        break;
    }
    case 125777:
    {
        returnValue = F("Gut Horst");
        break;
    }
    case 125778:
    {
        returnValue = F("Gut Hospelt");
        break;
    }
    case 125779:
    {
        returnValue = F("Gut Häusern");
        break;
    }
    case 125780:
    {
        returnValue = F("Gut Hörst");
        break;
    }
    case 125781:
    {
        returnValue = F("Gut Ilkahöhe");
        break;
    }
    case 125782:
    {
        returnValue = F("Gut Ingenfeld");
        break;
    }
    case 125783:
    {
        returnValue = F("Gut Karlshof");
        break;
    }
    case 125784:
    {
        returnValue = F("Gut Kirschbaum");
        break;
    }
    case 125785:
    {
        returnValue = F("Gut Knoop");
        break;
    }
    case 125786:
    {
        returnValue = F("Gut Krahwinkel");
        break;
    }
    case 125787:
    {
        returnValue = F("Gut Krampfer");
        break;
    }
    case 125788:
    {
        returnValue = F("Gut Krieseby");
        break;
    }
    case 125789:
    {
        returnValue = F("Gut Krummbek");
        break;
    }
    case 125790:
    {
        returnValue = F("Gut Langen");
        break;
    }
    case 125791:
    {
        returnValue = F("Gut Langwaden");
        break;
    }
    case 125792:
    {
        returnValue = F("Gut Lemshausen");
        break;
    }
    case 125793:
    {
        returnValue = F("Gut Levershausen");
        break;
    }
    case 125794:
    {
        returnValue = F("Gut Lindau");
        break;
    }
    case 125795:
    {
        returnValue = F("Gut Lorsbeck");
        break;
    }
    case 125796:
    {
        returnValue = F("Gut Mallendarer Berg");
        break;
    }
    case 125797:
    {
        returnValue = F("Gut Minihof");
        break;
    }
    case 125798:
    {
        returnValue = F("Gut Muchhausen");
        break;
    }
    case 125799:
    {
        returnValue = F("Gut Mönchhof");
        break;
    }
    case 125800:
    {
        returnValue = F("Gut Nethen");
        break;
    }
    case 125801:
    {
        returnValue = F("Gut Netzow");
        break;
    }
    case 125802:
    {
        returnValue = F("Gut Neuhaus");
        break;
    }
    case 125803:
    {
        returnValue = F("Gut Neuhöfchen");
        break;
    }
    case 125804:
    {
        returnValue = F("Gut Nienbüttel");
        break;
    }
    case 125805:
    {
        returnValue = F("Gut Nierhof");
        break;
    }
    case 125806:
    {
        returnValue = F("Gut Norbisrath");
        break;
    }
    case 125807:
    {
        returnValue = F("Gut Oelbergen");
        break;
    }
    case 125808:
    {
        returnValue = F("Gut Oenigstedt");
        break;
    }
    case 125809:
    {
        returnValue = F("Gut Oeynhausen");
        break;
    }
    case 125810:
    {
        returnValue = F("Gut Oldendorf");
        break;
    }
    case 125811:
    {
        returnValue = F("Gut Onnau");
        break;
    }
    case 125812:
    {
        returnValue = F("Gut Ophoven");
        break;
    }
    case 125813:
    {
        returnValue = F("Gut Plausdorf");
        break;
    }
    case 125814:
    {
        returnValue = F("Gut Quarnstedt");
        break;
    }
    case 125815:
    {
        returnValue = F("Gut Radau");
        break;
    }
    case 125816:
    {
        returnValue = F("Gut Radenhausen");
        break;
    }
    case 125817:
    {
        returnValue = F("Gut Reusa");
        break;
    }
    case 125818:
    {
        returnValue = F("Gut Reuschenberg");
        break;
    }
    case 125819:
    {
        returnValue = F("Gut Rheinfels");
        break;
    }
    case 125820:
    {
        returnValue = F("Gut Rimmerode");
        break;
    }
    case 125821:
    {
        returnValue = F("Gut Ringe");
        break;
    }
    case 125822:
    {
        returnValue = F("Gut Rocholz");
        break;
    }
    case 125823:
    {
        returnValue = F("Gut Rodenberg");
        break;
    }
    case 125824:
    {
        returnValue = F("Gut Sautmannshausen");
        break;
    }
    case 125825:
    {
        returnValue = F("Gut Schierke");
        break;
    }
    case 125826:
    {
        returnValue = F("Gut Schirmeke");
        break;
    }
    case 125827:
    {
        returnValue = F("Gut Schlüsen");
        break;
    }
    case 125828:
    {
        returnValue = F("Gut Schwaige");
        break;
    }
    case 125829:
    {
        returnValue = F("Gut Schönthal");
        break;
    }
    case 125830:
    {
        returnValue = F("Gut Schützfeld");
        break;
    }
    case 125831:
    {
        returnValue = F("Gut Sonnenberg");
        break;
    }
    case 125832:
    {
        returnValue = F("Gut Sophienhof");
        break;
    }
    case 125833:
    {
        returnValue = F("Gut Spascher Sand");
        break;
    }
    case 125834:
    {
        returnValue = F("Gut Sprakel");
        break;
    }
    case 125835:
    {
        returnValue = F("Gut Staltach");
        break;
    }
    case 125836:
    {
        returnValue = F("Gut Stein");
        break;
    }
    case 125837:
    {
        returnValue = F("Gut Stikelkamp");
        break;
    }
    case 125838:
    {
        returnValue = F("Gut Stockhausen");
        break;
    }
    case 125839:
    {
        returnValue = F("Gut Stockum");
        break;
    }
    case 125840:
    {
        returnValue = F("Gut Uhlenhorst");
        break;
    }
    case 125841:
    {
        returnValue = F("Gut Ungershausen");
        break;
    }
    case 125842:
    {
        returnValue = F("Gut Varste");
        break;
    }
    case 125843:
    {
        returnValue = F("Gut Velgast");
        break;
    }
    case 125844:
    {
        returnValue = F("Gut Velpe");
        break;
    }
    case 125845:
    {
        returnValue = F("Gut Weidenhausen");
        break;
    }
    case 125846:
    {
        returnValue = F("Gut Weihershof");
        break;
    }
    case 125847:
    {
        returnValue = F("Gut Weyern");
        break;
    }
    case 125848:
    {
        returnValue = F("Gut Widdauen");
        break;
    }
    case 125849:
    {
        returnValue = F("Gut Wiede");
        break;
    }
    case 125850:
    {
        returnValue = F("Gut Wienebüttel");
        break;
    }
    case 125851:
    {
        returnValue = F("Gut Wietzenbruch");
        break;
    }
    case 125852:
    {
        returnValue = F("Gut Wilhelmsburg");
        break;
    }
    case 125853:
    {
        returnValue = F("Gut Windhausen");
        break;
    }
    case 125854:
    {
        returnValue = F("Gut Wormsthal");
        break;
    }
    case 125855:
    {
        returnValue = F("Gut Wöllried");
        break;
    }
    case 125856:
    {
        returnValue = F("Gut Zollhaus");
        break;
    }
    case 125857:
    {
        returnValue = F("Gut-Betha-Platz");
        break;
    }
    case 125858:
    {
        returnValue = F("Gut-Bohlen-Weg");
        break;
    }
    case 125859:
    {
        returnValue = F("Gut-Heim-Str.");
        break;
    }
    case 125860:
    {
        returnValue = F("Gutacher Weg");
        break;
    }
    case 125861:
    {
        returnValue = F("Gutachhaldenweg");
        break;
    }
    case 125862:
    {
        returnValue = F("Gutachstr.");
        break;
    }
    case 125863:
    {
        returnValue = F("Gutastr.");
        break;
    }
    case 125864:
    {
        returnValue = F("Gutbergstr.");
        break;
    }
    case 125865:
    {
        returnValue = F("Gutbergweg");
        break;
    }
    case 125866:
    {
        returnValue = F("Gutbierstr.");
        break;
    }
    case 125867:
    {
        returnValue = F("Gutbrod");
        break;
    }
    case 125868:
    {
        returnValue = F("Gutbrodstr.");
        break;
    }
    case 125869:
    {
        returnValue = F("Gutbrodweg");
        break;
    }
    case 125870:
    {
        returnValue = F("Gute Aussicht");
        break;
    }
    case 125871:
    {
        returnValue = F("Gute Hoffnung");
        break;
    }
    case 125872:
    {
        returnValue = F("Gute Hofstatt");
        break;
    }
    case 125873:
    {
        returnValue = F("Gute Klingen Weg");
        break;
    }
    case 125874:
    {
        returnValue = F("Gute Morgenmatt");
        break;
    }
    case 125875:
    {
        returnValue = F("Gute Str.");
        break;
    }
    case 125876:
    {
        returnValue = F("Gute Zeit");
        break;
    }
    case 125877:
    {
        returnValue = F("Gute-Luise-Weg");
        break;
    }
    case 125878:
    {
        returnValue = F("Guteborner Allee");
        break;
    }
    case 125879:
    {
        returnValue = F("Guteborner Str.");
        break;
    }
    case 125880:
    {
        returnValue = F("Gutedelstr.");
        break;
    }
    case 125881:
    {
        returnValue = F("Gutedelweg");
        break;
    }
    case 125882:
    {
        returnValue = F("Gutegasse");
        break;
    }
    case 125883:
    {
        returnValue = F("Gutehoffnungsring");
        break;
    }
    case 125884:
    {
        returnValue = F("Gutekunststr.");
        break;
    }
    case 125885:
    {
        returnValue = F("Gutenau");
        break;
    }
    case 125886:
    {
        returnValue = F("Gutenauertalweg");
        break;
    }
    case 125887:
    {
        returnValue = F("Gutenbacher Weg");
        break;
    }
    case 125888:
    {
        returnValue = F("Gutenbacherhof");
        break;
    }
    case 125889:
    {
        returnValue = F("Gutenbacherstr.");
        break;
    }
    case 125890:
    {
        returnValue = F("Gutenbachweg");
        break;
    }
    case 125891:
    {
        returnValue = F("Gutenberfgstr.");
        break;
    }
    case 125892:
    {
        returnValue = F("Gutenbergallee");
        break;
    }
    case 125893:
    {
        returnValue = F("Gutenberger Dorfstr.");
        break;
    }
    case 125894:
    {
        returnValue = F("Gutenberger Str.");
        break;
    }
    case 125895:
    {
        returnValue = F("Gutenbergerstr.");
        break;
    }
    case 125896:
    {
        returnValue = F("Gutenberggasse");
        break;
    }
    case 125897:
    {
        returnValue = F("Gutenberggäßle");
        break;
    }
    case 125898:
    {
        returnValue = F("Gutenbergplatz");
        break;
    }
    case 125899:
    {
        returnValue = F("Gutenbergring");
        break;
    }
    case 125900:
    {
        returnValue = F("Gutenbergstr.");
        break;
    }
    case 125901:
    {
        returnValue = F("Gutenbergweg");
        break;
    }
    case 125902:
    {
        returnValue = F("Gutenborner Hof");
        break;
    }
    case 125903:
    {
        returnValue = F("Gutenbrunnen");
        break;
    }
    case 125904:
    {
        returnValue = F("Gutenbrunnenallee");
        break;
    }
    case 125905:
    {
        returnValue = F("Gutenbrunnenstr.");
        break;
    }
    case 125906:
    {
        returnValue = F("Gutenbrunnstr.");
        break;
    }
    case 125907:
    {
        returnValue = F("Gutenburgweg");
        break;
    }
    case 125908:
    {
        returnValue = F("Gutenbühlstr.");
        break;
    }
    case 125909:
    {
        returnValue = F("Gutendorf");
        break;
    }
    case 125910:
    {
        returnValue = F("Gutendorfer Str.");
        break;
    }
    case 125911:
    {
        returnValue = F("Gutenecker Str.");
        break;
    }
    case 125912:
    {
        returnValue = F("Gutenfelsstr.");
        break;
    }
    case 125913:
    {
        returnValue = F("Gutenfürster Allee");
        break;
    }
    case 125914:
    {
        returnValue = F("Gutenfürster Str.");
        break;
    }
    case 125915:
    {
        returnValue = F("Gutengermendorf");
        break;
    }
    case 125916:
    {
        returnValue = F("Gutengermendorfer Str.");
        break;
    }
    case 125917:
    {
        returnValue = F("Gutenpaarener Chaussee");
        break;
    }
    case 125918:
    {
        returnValue = F("Gutenpaarener Dorfstr.");
        break;
    }
    case 125919:
    {
        returnValue = F("Gutenpaarener Havelweg");
        break;
    }
    case 125920:
    {
        returnValue = F("Gutenpaarener Str.");
        break;
    }
    case 125921:
    {
        returnValue = F("Gutensteinstr.");
        break;
    }
    case 125922:
    {
        returnValue = F("Gutenstettener Str.");
        break;
    }
    case 125923:
    {
        returnValue = F("Gutenstr.");
        break;
    }
    case 125924:
    {
        returnValue = F("Gutensweger Str.");
        break;
    }
    case 125925:
    {
        returnValue = F("Gutensweger Weg");
        break;
    }
    case 125926:
    {
        returnValue = F("Gutentalstr.");
        break;
    }
    case 125927:
    {
        returnValue = F("Gutentalweg");
        break;
    }
    case 125928:
    {
        returnValue = F("Gutenteichweg");
        break;
    }
    case 125929:
    {
        returnValue = F("Gutenthaler Weg");
        break;
    }
    case 125930:
    {
        returnValue = F("Gutenzeller Str.");
        break;
    }
    case 125931:
    {
        returnValue = F("Guter Ort");
        break;
    }
    case 125932:
    {
        returnValue = F("Guter-Mann-Str.");
        break;
    }
    case 125933:
    {
        returnValue = F("Guterbrunnenweg");
        break;
    }
    case 125934:
    {
        returnValue = F("Gutermann-Promenade");
        break;
    }
    case 125935:
    {
        returnValue = F("Gutermannstr.");
        break;
    }
    case 125936:
    {
        returnValue = F("Gutermannsweg");
        break;
    }
    case 125937:
    {
        returnValue = F("Gutermannweg");
        break;
    }
    case 125938:
    {
        returnValue = F("Gutermuthstr.");
        break;
    }
    case 125939:
    {
        returnValue = F("Gutershofer Weg");
        break;
    }
    case 125940:
    {
        returnValue = F("Guterstr.");
        break;
    }
    case 125941:
    {
        returnValue = F("Gutes Tal");
        break;
    }
    case 125942:
    {
        returnValue = F("Gutfeld");
        break;
    }
    case 125943:
    {
        returnValue = F("Gutfeldweg");
        break;
    }
    case 125944:
    {
        returnValue = F("Gutfleischstr.");
        break;
    }
    case 125945:
    {
        returnValue = F("Gutgasse");
        break;
    }
    case 125946:
    {
        returnValue = F("Gutgesellentorplatz");
        break;
    }
    case 125947:
    {
        returnValue = F("Guthaltweg");
        break;
    }
    case 125948:
    {
        returnValue = F("Guthammerles");
        break;
    }
    case 125949:
    {
        returnValue = F("Guthardtstr.");
        break;
    }
    case 125950:
    {
        returnValue = F("Gutharterweg");
        break;
    }
    case 125951:
    {
        returnValue = F("Gutheilgasse");
        break;
    }
    case 125952:
    {
        returnValue = F("Guthendorfer Weg");
        break;
    }
    case 125953:
    {
        returnValue = F("Guthmannshausener Str.");
        break;
    }
    case 125954:
    {
        returnValue = F("Guthmannshäuser Weg");
        break;
    }
    case 125955:
    {
        returnValue = F("GuthsMuthsstr.");
        break;
    }
    case 125956:
    {
        returnValue = F("Gutjahrstr.");
        break;
    }
    case 125957:
    {
        returnValue = F("Gutjüchertenweg");
        break;
    }
    case 125958:
    {
        returnValue = F("Gutlay");
        break;
    }
    case 125959:
    {
        returnValue = F("Gutleutgarten");
        break;
    }
    case 125960:
    {
        returnValue = F("Gutleuthausstr.");
        break;
    }
    case 125961:
    {
        returnValue = F("Gutleuthausweg");
        break;
    }
    case 125962:
    {
        returnValue = F("Gutleutstr.");
        break;
    }
    case 125963:
    {
        returnValue = F("Gutleutweg");
        break;
    }
    case 125964:
    {
        returnValue = F("Gutmachhof");
        break;
    }
    case 125965:
    {
        returnValue = F("Gutmadinger Str.");
        break;
    }
    case 125966:
    {
        returnValue = F("Gutmaninger Str.");
        break;
    }
    case 125967:
    {
        returnValue = F("Gutmannsgäßchen");
        break;
    }
    case 125968:
    {
        returnValue = F("Gutmannweg");
        break;
    }
    case 125969:
    {
        returnValue = F("Gutmeisterweg");
        break;
    }
    case 125970:
    {
        returnValue = F("Gutmühlenweg");
        break;
    }
    case 125971:
    {
        returnValue = F("Gutnauweg");
        break;
    }
    case 125972:
    {
        returnValue = F("Gutower Str.");
        break;
    }
    case 125973:
    {
        returnValue = F("Gutrunestr.");
        break;
    }
    case 125974:
    {
        returnValue = F("Guts-Muths-Str.");
        break;
    }
    case 125975:
    {
        returnValue = F("GutsMuths-Platz");
        break;
    }
    case 125976:
    {
        returnValue = F("GutsMuthsplatz");
        break;
    }
    case 125977:
    {
        returnValue = F("GutsMuthsstr.");
        break;
    }
    case 125978:
    {
        returnValue = F("Gutsallee");
        break;
    }
    case 125979:
    {
        returnValue = F("Gutsbahntrasse");
        break;
    }
    case 125980:
    {
        returnValue = F("Gutsberg");
        break;
    }
    case 125981:
    {
        returnValue = F("Gutsbezirk");
        break;
    }
    case 125982:
    {
        returnValue = F("Gutschbach");
        break;
    }
    case 125983:
    {
        returnValue = F("Gutschenhofzufahrt");
        break;
    }
    case 125984:
    {
        returnValue = F("Gutsfeld");
        break;
    }
    case 125985:
    {
        returnValue = F("Gutsgarten");
        break;
    }
    case 125986:
    {
        returnValue = F("Gutsgasse");
        break;
    }
    case 125987:
    {
        returnValue = F("Gutsgärten");
        break;
    }
    case 125988:
    {
        returnValue = F("Gutsgärtnerei Sierhagen");
        break;
    }
    case 125989:
    {
        returnValue = F("Gutshaus");
        break;
    }
    case 125990:
    {
        returnValue = F("Gutshausallee");
        break;
    }
    case 125991:
    {
        returnValue = F("Gutshauspark");
        break;
    }
    case 125992:
    {
        returnValue = F("Gutshausweg");
        break;
    }
    case 125993:
    {
        returnValue = F("Gutsherrenstr.");
        break;
    }
    case 125994:
    {
        returnValue = F("Gutshof");
        break;
    }
    case 125995:
    {
        returnValue = F("Gutshof Bandelstorf");
        break;
    }
    case 125996:
    {
        returnValue = F("Gutshof Oppeln");
        break;
    }
    case 125997:
    {
        returnValue = F("Gutshofallee");
        break;
    }
    case 125998:
    {
        returnValue = F("Gutshofring");
        break;
    }
    case 125999:
    {
        returnValue = F("Gutshofstr.");
        break;
    }
    case 126000:
    {
        returnValue = F("Gutshofweg");
        break;
    }
    case 126001:
    {
        returnValue = F("Gutskoppel");
        break;
    }
    case 126002:
    {
        returnValue = F("Gutsmüthlstr.");
        break;
    }
    case 126003:
    {
        returnValue = F("Gutspark");
        break;
    }
    case 126004:
    {
        returnValue = F("Gutspark \"von Arendorf");
        break;
    }
    case 126005:
    {
        returnValue = F("Gutspark (privat)");
        break;
    }
    case 126006:
    {
        returnValue = F("Gutspark Bodenburg");
        break;
    }
    case 126007:
    {
        returnValue = F("Gutspark Böckel");
        break;
    }
    case 126008:
    {
        returnValue = F("Gutspark Dahlewitz");
        break;
    }
    case 126009:
    {
        returnValue = F("Gutspark Dambeck");
        break;
    }
    case 126010:
    {
        returnValue = F("Gutspark Dehlitz Saale");
        break;
    }
    case 126011:
    {
        returnValue = F("Gutspark Diestelow");
        break;
    }
    case 126012:
    {
        returnValue = F("Gutspark Gatterstädt");
        break;
    }
    case 126013:
    {
        returnValue = F("Gutspark Gevezin");
        break;
    }
    case 126014:
    {
        returnValue = F("Gutspark Glambeck");
        break;
    }
    case 126015:
    {
        returnValue = F("Gutspark Groß Gievitz");
        break;
    }
    case 126016:
    {
        returnValue = F("Gutspark Großjena");
        break;
    }
    case 126017:
    {
        returnValue = F("Gutspark Holzdorf");
        break;
    }
    case 126018:
    {
        returnValue = F("Gutspark Kartzitz");
        break;
    }
    case 126019:
    {
        returnValue = F("Gutspark Kilver");
        break;
    }
    case 126020:
    {
        returnValue = F("Gutspark Klausdorf");
        break;
    }
    case 126021:
    {
        returnValue = F("Gutspark Kummerow");
        break;
    }
    case 126022:
    {
        returnValue = F("Gutspark Last");
        break;
    }
    case 126023:
    {
        returnValue = F("Gutspark Minsleben");
        break;
    }
    case 126024:
    {
        returnValue = F("Gutspark Neuhof");
        break;
    }
    case 126025:
    {
        returnValue = F("Gutspark Oberbehme");
        break;
    }
    case 126026:
    {
        returnValue = F("Gutspark Peckatel");
        break;
    }
    case 126027:
    {
        returnValue = F("Gutspark Puchow");
        break;
    }
    case 126028:
    {
        returnValue = F("Gutspark Quadenschönfeld");
        break;
    }
    case 126029:
    {
        returnValue = F("Gutspark Rittergut Adelwitz");
        break;
    }
    case 126030:
    {
        returnValue = F("Gutspark Rogeez");
        break;
    }
    case 126031:
    {
        returnValue = F("Gutspark Steinlake (Steinlacke)");
        break;
    }
    case 126032:
    {
        returnValue = F("Gutspark Westenbrügge");
        break;
    }
    case 126033:
    {
        returnValue = F("Gutspark Weßnig");
        break;
    }
    case 126034:
    {
        returnValue = F("Gutspark Wietzow");
        break;
    }
    case 126035:
    {
        returnValue = F("Gutspark der Gemeinde Zell");
        break;
    }
    case 126036:
    {
        returnValue = F("Gutspark von Grone");
        break;
    }
    case 126037:
    {
        returnValue = F("Gutsplatz");
        break;
    }
    case 126038:
    {
        returnValue = F("Gutsstr.");
        break;
    }
    case 126039:
    {
        returnValue = F("Gutsstr. 5a");
        break;
    }
    case 126040:
    {
        returnValue = F("Gutstedtstr.");
        break;
    }
    case 126041:
    {
        returnValue = F("Gutstr.");
        break;
    }
    case 126042:
    {
        returnValue = F("Gutsweg");
        break;
    }
    case 126043:
    {
        returnValue = F("Gutswiese");
        break;
    }
    case 126044:
    {
        returnValue = F("Gutswiesen");
        break;
    }
    case 126045:
    {
        returnValue = F("Gutswiesenweg");
        break;
    }
    case 126046:
    {
        returnValue = F("Guttauer Hauptstr.");
        break;
    }
    case 126047:
    {
        returnValue = F("Guttauer Landstr.");
        break;
    }
    case 126048:
    {
        returnValue = F("Guttauer Str.");
        break;
    }
    case 126049:
    {
        returnValue = F("Guttaweg");
        break;
    }
    case 126050:
    {
        returnValue = F("Guttenbacher Pfad");
        break;
    }
    case 126051:
    {
        returnValue = F("Guttenberg");
        break;
    }
    case 126052:
    {
        returnValue = F("Guttenberger Grund");
        break;
    }
    case 126053:
    {
        returnValue = F("Guttenberger Str.");
        break;
    }
    case 126054:
    {
        returnValue = F("Guttenberger-Wald-Str.");
        break;
    }
    case 126055:
    {
        returnValue = F("Guttenbergerstr.");
        break;
    }
    case 126056:
    {
        returnValue = F("Guttenbergstr.");
        break;
    }
    case 126057:
    {
        returnValue = F("Guttenbergweg");
        break;
    }
    case 126058:
    {
        returnValue = F("Guttenbrunnstr.");
        break;
    }
    case 126059:
    {
        returnValue = F("Guttenbrunnweg");
        break;
    }
    case 126060:
    {
        returnValue = F("Guttenburger Str.");
        break;
    }
    case 126061:
    {
        returnValue = F("Guttenburger Weg");
        break;
    }
    case 126062:
    {
        returnValue = F("Guttensteinerstr.");
        break;
    }
    case 126063:
    {
        returnValue = F("Guttentag-Loben-Str.");
        break;
    }
    case 126064:
    {
        returnValue = F("Gutterstätt");
        break;
    }
    case 126065:
    {
        returnValue = F("Guttstädter Str.");
        break;
    }
    case 126066:
    {
        returnValue = F("Guttzeit-Ring");
        break;
    }
    case 126067:
    {
        returnValue = F("Gutwasserstr.");
        break;
    }
    case 126068:
    {
        returnValue = F("Gutwerkstr.");
        break;
    }
    case 126069:
    {
        returnValue = F("Gutwiese");
        break;
    }
    case 126070:
    {
        returnValue = F("Gutwiesen-Schneise");
        break;
    }
    case 126071:
    {
        returnValue = F("Gutwiesenweg");
        break;
    }
    case 126072:
    {
        returnValue = F("Gutzberger Str.");
        break;
    }
    case 126073:
    {
        returnValue = F("Gutzberger Weg");
        break;
    }
    case 126074:
    {
        returnValue = F("Gutzkowstr.");
        break;
    }
    case 126075:
    {
        returnValue = F("Gutzmannstr.");
        break;
    }
    case 126076:
    {
        returnValue = F("Gutzwarder Weg");
        break;
    }
    case 126077:
    {
        returnValue = F("Guwastr.");
        break;
    }
    case 126078:
    {
        returnValue = F("Guxhagener Str.");
        break;
    }
    case 126079:
    {
        returnValue = F("Guxhauser Weg");
        break;
    }
    case 126080:
    {
        returnValue = F("Guxmühlen");
        break;
    }
    case 126081:
    {
        returnValue = F("Guyancourt-Brücke");
        break;
    }
    case 126082:
    {
        returnValue = F("Gußberg");
        break;
    }
    case 126083:
    {
        returnValue = F("Gußelweg");
        break;
    }
    case 126084:
    {
        returnValue = F("Gußhof");
        break;
    }
    case 126085:
    {
        returnValue = F("Gußmannstr.");
        break;
    }
    case 126086:
    {
        returnValue = F("Guérandestr.");
        break;
    }
    case 126087:
    {
        returnValue = F("Gwand");
        break;
    }
    case 126088:
    {
        returnValue = F("Gwande");
        break;
    }
    case 126089:
    {
        returnValue = F("Gwandenweg");
        break;
    }
    case 126090:
    {
        returnValue = F("Gwatweg");
        break;
    }
    case 126091:
    {
        returnValue = F("Gwendfeld");
        break;
    }
    case 126092:
    {
        returnValue = F("Gwendweg");
        break;
    }
    case 126093:
    {
        returnValue = F("Gyhumer Str.");
        break;
    }
    case 126094:
    {
        returnValue = F("Gykelbergstr.");
        break;
    }
    case 126095:
    {
        returnValue = F("Gymnasialgasse");
        break;
    }
    case 126096:
    {
        returnValue = F("Gymnasialstr.");
        break;
    }
    case 126097:
    {
        returnValue = F("Gymnasiumsgasse");
        break;
    }
    case 126098:
    {
        returnValue = F("Gymnasiumstege");
        break;
    }
    case 126099:
    {
        returnValue = F("Gymnasiumstr.");
        break;
    }
    case 126100:
    {
        returnValue = F("Gymnasiumswiese");
        break;
    }
    case 126101:
    {
        returnValue = F("Gymnastikgeräteplatz");
        break;
    }
    case 126102:
    {
        returnValue = F("Gymnicher Hauptstr.");
        break;
    }
    case 126103:
    {
        returnValue = F("Gymnicher Mühle");
        break;
    }
    case 126104:
    {
        returnValue = F("Gymnicher Str.");
        break;
    }
    case 126105:
    {
        returnValue = F("Gymnichweg");
        break;
    }
    case 126106:
    {
        returnValue = F("Gynettistr.");
        break;
    }
    case 126107:
    {
        returnValue = F("Gypsmühlstr.");
        break;
    }
    case 126108:
    {
        returnValue = F("Gysemans-Weg");
        break;
    }
    case 126109:
    {
        returnValue = F("Gysenbergstr.");
        break;
    }
    case 126110:
    {
        returnValue = F("Gyula-Horn-Str.");
        break;
    }
    case 126111:
    {
        returnValue = F("Gyulaer Platz");
        break;
    }
    case 126112:
    {
        returnValue = F("Gyönker Str.");
        break;
    }
    case 126113:
    {
        returnValue = F("Györer Platz");
        break;
    }
    case 126114:
    {
        returnValue = F("Gäbelesbronnen");
        break;
    }
    case 126115:
    {
        returnValue = F("Gäbelesweg");
        break;
    }
    case 126116:
    {
        returnValue = F("Gäberswang");
        break;
    }
    case 126117:
    {
        returnValue = F("Gäbler-Weg");
        break;
    }
    case 126118:
    {
        returnValue = F("Gächinger Str.");
        break;
    }
    case 126119:
    {
        returnValue = F("Gächinger Weg");
        break;
    }
    case 126120:
    {
        returnValue = F("Gächt");
        break;
    }
    case 126121:
    {
        returnValue = F("Gächtstr.");
        break;
    }
    case 126122:
    {
        returnValue = F("Gädebehner Str.");
        break;
    }
    case 126123:
    {
        returnValue = F("Gägelower Weg");
        break;
    }
    case 126124:
    {
        returnValue = F("Gähdestr.");
        break;
    }
    case 126125:
    {
        returnValue = F("Gähe Halde");
        break;
    }
    case 126126:
    {
        returnValue = F("Gähhaldeweg");
        break;
    }
    case 126127:
    {
        returnValue = F("Gähkopf");
        break;
    }
    case 126128:
    {
        returnValue = F("Gählenweg");
        break;
    }
    case 126129:
    {
        returnValue = F("Gähneweg");
        break;
    }
    case 126130:
    {
        returnValue = F("Gährenweg");
        break;
    }
    case 126131:
    {
        returnValue = F("Gähsnitzer Ring");
        break;
    }
    case 126132:
    {
        returnValue = F("Gäldrichweg");
        break;
    }
    case 126133:
    {
        returnValue = F("Gälgleweg");
        break;
    }
    case 126134:
    {
        returnValue = F("Gälkenheide");
        break;
    }
    case 126135:
    {
        returnValue = F("Gällelegässle");
        break;
    }
    case 126136:
    {
        returnValue = F("Gällerstr.");
        break;
    }
    case 126137:
    {
        returnValue = F("Gämsenbergstr.");
        break;
    }
    case 126138:
    {
        returnValue = F("Gämsenweg");
        break;
    }
    case 126139:
    {
        returnValue = F("Gängchen");
        break;
    }
    case 126140:
    {
        returnValue = F("Gängel");
        break;
    }
    case 126141:
    {
        returnValue = F("Gängelchen");
        break;
    }
    case 126142:
    {
        returnValue = F("Gängele");
        break;
    }
    case 126143:
    {
        returnValue = F("Gängelstockweg");
        break;
    }
    case 126144:
    {
        returnValue = F("Gängelweg");
        break;
    }
    case 126145:
    {
        returnValue = F("Gängerweg");
        break;
    }
    case 126146:
    {
        returnValue = F("Gängesken");
        break;
    }
    case 126147:
    {
        returnValue = F("Gängle");
        break;
    }
    case 126148:
    {
        returnValue = F("Gänglein");
        break;
    }
    case 126149:
    {
        returnValue = F("Gänsacker");
        break;
    }
    case 126150:
    {
        returnValue = F("Gänsackergäßle");
        break;
    }
    case 126151:
    {
        returnValue = F("Gänsackerring");
        break;
    }
    case 126152:
    {
        returnValue = F("Gänsackerstr.");
        break;
    }
    case 126153:
    {
        returnValue = F("Gänsackerweg");
        break;
    }
    case 126154:
    {
        returnValue = F("Gänsanger");
        break;
    }
    case 126155:
    {
        returnValue = F("Gänsangerstr.");
        break;
    }
    case 126156:
    {
        returnValue = F("Gänsangerweg");
        break;
    }
    case 126157:
    {
        returnValue = F("Gänsau");
        break;
    }
    case 126158:
    {
        returnValue = F("Gänsauweg");
        break;
    }
    case 126159:
    {
        returnValue = F("Gänsbach");
        break;
    }
    case 126160:
    {
        returnValue = F("Gänsbachlweg");
        break;
    }
    case 126161:
    {
        returnValue = F("Gänsbachstr.");
        break;
    }
    case 126162:
    {
        returnValue = F("Gänsbachweg");
        break;
    }
    case 126163:
    {
        returnValue = F("Gänsbaumstr.");
        break;
    }
    case 126164:
    {
        returnValue = F("Gänsberg");
        break;
    }
    case 126165:
    {
        returnValue = F("Gänsbergring");
        break;
    }
    case 126166:
    {
        returnValue = F("Gänsbergstr.");
        break;
    }
    case 126167:
    {
        returnValue = F("Gänsbergweg");
        break;
    }
    case 126168:
    {
        returnValue = F("Gänsbornweg");
        break;
    }
    case 126169:
    {
        returnValue = F("Gänsbrunnen");
        break;
    }
    case 126170:
    {
        returnValue = F("Gänsbrunnenweg");
        break;
    }
    case 126171:
    {
        returnValue = F("Gänsbrünleweg");
        break;
    }
    case 126172:
    {
        returnValue = F("Gänsbuckel");
        break;
    }
    case 126173:
    {
        returnValue = F("Gänsbuckelweg");
        break;
    }
    case 126174:
    {
        returnValue = F("Gänsburggasse");
        break;
    }
    case 126175:
    {
        returnValue = F("Gänsbühl");
        break;
    }
    case 126176:
    {
        returnValue = F("Gänsbühlboden");
        break;
    }
    case 126177:
    {
        returnValue = F("Gänsbühlstr.");
        break;
    }
    case 126178:
    {
        returnValue = F("Gänsbühlweg");
        break;
    }
    case 126179:
    {
        returnValue = F("Gänsdreckweg");
        break;
    }
    case 126180:
    {
        returnValue = F("Gänse");
        break;
    }
    case 126181:
    {
        returnValue = F("Gänse-Damm");
        break;
    }
    case 126182:
    {
        returnValue = F("Gänseacker");
        break;
    }
    case 126183:
    {
        returnValue = F("Gänseanger");
        break;
    }
    case 126184:
    {
        returnValue = F("Gänsebachweg");
        break;
    }
    case 126185:
    {
        returnValue = F("Gänseberg");
        break;
    }
    case 126186:
    {
        returnValue = F("Gänsebergstr.");
        break;
    }
    case 126187:
    {
        returnValue = F("Gänsebergweg");
        break;
    }
    case 126188:
    {
        returnValue = F("Gänsebleek");
        break;
    }
    case 126189:
    {
        returnValue = F("Gänseblumenweg");
        break;
    }
    case 126190:
    {
        returnValue = F("Gänseblümchenring");
        break;
    }
    case 126191:
    {
        returnValue = F("Gänseblümchenweg");
        break;
    }
    case 126192:
    {
        returnValue = F("Gänseborn");
        break;
    }
    case 126193:
    {
        returnValue = F("Gänsebrede");
        break;
    }
    case 126194:
    {
        returnValue = F("Gänsebreite");
        break;
    }
    case 126195:
    {
        returnValue = F("Gänsebrink");
        break;
    }
    case 126196:
    {
        returnValue = F("Gänsebruch");
        break;
    }
    case 126197:
    {
        returnValue = F("Gänsebrunnen");
        break;
    }
    case 126198:
    {
        returnValue = F("Gänsebrunnenweg");
        break;
    }
    case 126199:
    {
        returnValue = F("Gänsebrücke");
        break;
    }
    case 126200:
    {
        returnValue = F("Gänseburg");
        break;
    }
    case 126201:
    {
        returnValue = F("Gänsebühlboden");
        break;
    }
    case 126202:
    {
        returnValue = F("Gänsebühlstr.");
        break;
    }
    case 126203:
    {
        returnValue = F("Gänsedeichsweg");
        break;
    }
    case 126204:
    {
        returnValue = F("Gänsediek");
        break;
    }
    case 126205:
    {
        returnValue = F("Gänsedistelweg");
        break;
    }
    case 126206:
    {
        returnValue = F("Gänseeck");
        break;
    }
    case 126207:
    {
        returnValue = F("Gänseeiweg");
        break;
    }
    case 126208:
    {
        returnValue = F("Gänsefarm");
        break;
    }
    case 126209:
    {
        returnValue = F("Gänsefeldstr.");
        break;
    }
    case 126210:
    {
        returnValue = F("Gänsefurth");
        break;
    }
    case 126211:
    {
        returnValue = F("Gänsefurther Str.");
        break;
    }
    case 126212:
    {
        returnValue = F("Gänsefuß");
        break;
    }
    case 126213:
    {
        returnValue = F("Gänsefußweg");
        break;
    }
    case 126214:
    {
        returnValue = F("Gänsefüße");
        break;
    }
    case 126215:
    {
        returnValue = F("Gänsegarten");
        break;
    }
    case 126216:
    {
        returnValue = F("Gänsegartenweg");
        break;
    }
    case 126217:
    {
        returnValue = F("Gänsegasse");
        break;
    }
    case 126218:
    {
        returnValue = F("Gänsegraben");
        break;
    }
    case 126219:
    {
        returnValue = F("Gänsehals");
        break;
    }
    case 126220:
    {
        returnValue = F("Gänsehalsstr.");
        break;
    }
    case 126221:
    {
        returnValue = F("Gänsehügel");
        break;
    }
    case 126222:
    {
        returnValue = F("Gänseiweg");
        break;
    }
    case 126223:
    {
        returnValue = F("Gänsekamp");
        break;
    }
    case 126224:
    {
        returnValue = F("Gänsekiez");
        break;
    }
    case 126225:
    {
        returnValue = F("Gänsekopf");
        break;
    }
    case 126226:
    {
        returnValue = F("Gänsekrugredder");
        break;
    }
    case 126227:
    {
        returnValue = F("Gänselandweg");
        break;
    }
    case 126228:
    {
        returnValue = F("Gänselbergstr.");
        break;
    }
    case 126229:
    {
        returnValue = F("Gänseleite");
        break;
    }
    case 126230:
    {
        returnValue = F("Gänselieselplatz");
        break;
    }
    case 126231:
    {
        returnValue = F("Gänselieselstr.");
        break;
    }
    case 126232:
    {
        returnValue = F("Gänselieselweg");
        break;
    }
    case 126233:
    {
        returnValue = F("Gänsemagdweg");
        break;
    }
    case 126234:
    {
        returnValue = F("Gänsemarkt");
        break;
    }
    case 126235:
    {
        returnValue = F("Gänsemarsch");
        break;
    }
    case 126236:
    {
        returnValue = F("Gänsemate");
        break;
    }
    case 126237:
    {
        returnValue = F("Gänsematenring");
        break;
    }
    case 126238:
    {
        returnValue = F("Gänsemäsche");
        break;
    }
    case 126239:
    {
        returnValue = F("Gänseort");
        break;
    }
    case 126240:
    {
        returnValue = F("Gänsepatt");
        break;
    }
    case 126241:
    {
        returnValue = F("Gänsepfad");
        break;
    }
    case 126242:
    {
        returnValue = F("Gänsepforte");
        break;
    }
    case 126243:
    {
        returnValue = F("Gänsepfuhl");
        break;
    }
    case 126244:
    {
        returnValue = F("Gänsepfuhlweg");
        break;
    }
    case 126245:
    {
        returnValue = F("Gänseplan");
        break;
    }
    case 126246:
    {
        returnValue = F("Gänseplatz");
        break;
    }
    case 126247:
    {
        returnValue = F("Gänserain");
        break;
    }
    case 126248:
    {
        returnValue = F("Gänserasen");
        break;
    }
    case 126249:
    {
        returnValue = F("Gänsereitplatz");
        break;
    }
    case 126250:
    {
        returnValue = F("Gänseried");
        break;
    }
    case 126251:
    {
        returnValue = F("Gänseriedstr.");
        break;
    }
    case 126252:
    {
        returnValue = F("Gänseriedweg");
        break;
    }
    case 126253:
    {
        returnValue = F("Gänsertshälden");
        break;
    }
    case 126254:
    {
        returnValue = F("Gänseschneise");
        break;
    }
    case 126255:
    {
        returnValue = F("Gänsespen");
        break;
    }
    case 126256:
    {
        returnValue = F("Gänsestieg");
        break;
    }
    case 126257:
    {
        returnValue = F("Gänsestr.");
        break;
    }
    case 126258:
    {
        returnValue = F("Gänsestück");
        break;
    }
    case 126259:
    {
        returnValue = F("Gänseteich");
        break;
    }
    case 126260:
    {
        returnValue = F("Gänsetor");
        break;
    }
    case 126261:
    {
        returnValue = F("Gänsetrift");
        break;
    }
    case 126262:
    {
        returnValue = F("Gänsevoede");
        break;
    }
    case 126263:
    {
        returnValue = F("Gänsevorlingen");
        break;
    }
    case 126264:
    {
        returnValue = F("Gänsewasen");
        break;
    }
    case 126265:
    {
        returnValue = F("Gänseweg");
        break;
    }
    case 126266:
    {
        returnValue = F("Gänsewegle");
        break;
    }
    case 126267:
    {
        returnValue = F("Gänseweide");
        break;
    }
    case 126268:
    {
        returnValue = F("Gänsewiese");
        break;
    }
    case 126269:
    {
        returnValue = F("Gänsewiesenweg");
        break;
    }
    case 126270:
    {
        returnValue = F("Gänsewinkel");
        break;
    }
    case 126271:
    {
        returnValue = F("Gänseäckerstr.");
        break;
    }
    case 126272:
    {
        returnValue = F("Gänsfeld");
        break;
    }
    case 126273:
    {
        returnValue = F("Gänsfelderstr.");
        break;
    }
    case 126274:
    {
        returnValue = F("Gänsfurt");
        break;
    }
    case 126275:
    {
        returnValue = F("Gänsfußallee");
        break;
    }
    case 126276:
    {
        returnValue = F("Gänsfußweg");
        break;
    }
    case 126277:
    {
        returnValue = F("Gänsfüßerstr.");
        break;
    }
    case 126278:
    {
        returnValue = F("Gänsgarten");
        break;
    }
    case 126279:
    {
        returnValue = F("Gänsgartenweg");
        break;
    }
    case 126280:
    {
        returnValue = F("Gänsgasse");
        break;
    }
    case 126281:
    {
        returnValue = F("Gänsgraben");
        break;
    }
    case 126282:
    {
        returnValue = F("Gänsgrabenweg");
        break;
    }
    case 126283:
    {
        returnValue = F("Gänsgrubenweg");
        break;
    }
    case 126284:
    {
        returnValue = F("Gänsgärtenweg");
        break;
    }
    case 126285:
    {
        returnValue = F("Gänsgäßchen");
        break;
    }
    case 126286:
    {
        returnValue = F("Gänshaldenweg");
        break;
    }
    case 126287:
    {
        returnValue = F("Gänshaldestr.");
        break;
    }
    case 126288:
    {
        returnValue = F("Gänshaller Str.");
        break;
    }
    case 126289:
    {
        returnValue = F("Gänshecke");
        break;
    }
    case 126290:
    {
        returnValue = F("Gänsheide");
        break;
    }
    case 126291:
    {
        returnValue = F("Gänsheidestr.");
        break;
    }
    case 126292:
    {
        returnValue = F("Gänshof");
        break;
    }
    case 126293:
    {
        returnValue = F("Gänshornstr.");
        break;
    }
    case 126294:
    {
        returnValue = F("Gänshübel");
        break;
    }
    case 126295:
    {
        returnValue = F("Gänshülbweg");
        break;
    }
    case 126296:
    {
        returnValue = F("Gänsig");
        break;
    }
    case 126297:
    {
        returnValue = F("Gänsklingenweg");
        break;
    }
    case 126298:
    {
        returnValue = F("Gänskragenweg");
        break;
    }
    case 126299:
    {
        returnValue = F("Gänslachweg");
        break;
    }
    case 126300:
    {
        returnValue = F("Gänsleinsweg");
        break;
    }
    case 126301:
    {
        returnValue = F("Gänsleite");
        break;
    }
    case 126302:
    {
        returnValue = F("Gänslerweg");
        break;
    }
    case 126303:
    {
        returnValue = F("Gänslände");
        break;
    }
    case 126304:
    {
        returnValue = F("Gänsländerweg");
        break;
    }
    case 126305:
    {
        returnValue = F("Gänsmahd");
        break;
    }
    case 126306:
    {
        returnValue = F("Gänsmarkt");
        break;
    }
    case 126307:
    {
        returnValue = F("Gänsmattenweg");
        break;
    }
    case 126308:
    {
        returnValue = F("Gänsmattweg");
        break;
    }
    case 126309:
    {
        returnValue = F("Gänsmorgen");
        break;
    }
    case 126310:
    {
        returnValue = F("Gänsmühlenweg");
        break;
    }
    case 126311:
    {
        returnValue = F("Gänsrainweg");
        break;
    }
    case 126312:
    {
        returnValue = F("Gänsree");
        break;
    }
    case 126313:
    {
        returnValue = F("Gänsried");
        break;
    }
    case 126314:
    {
        returnValue = F("Gänsruh");
        break;
    }
    case 126315:
    {
        returnValue = F("Gänssaalweg");
        break;
    }
    case 126316:
    {
        returnValue = F("Gänsseestr.");
        break;
    }
    case 126317:
    {
        returnValue = F("Gänsseeweiherweg");
        break;
    }
    case 126318:
    {
        returnValue = F("Gänsstr.");
        break;
    }
    case 126319:
    {
        returnValue = F("Gänsstücke");
        break;
    }
    case 126320:
    {
        returnValue = F("Gänsteichweg");
        break;
    }
    case 126321:
    {
        returnValue = F("Gänstorbrücke");
        break;
    }
    case 126322:
    {
        returnValue = F("Gänstränkschneise");
        break;
    }
    case 126323:
    {
        returnValue = F("Gänswad");
        break;
    }
    case 126324:
    {
        returnValue = F("Gänswald");
        break;
    }
    case 126325:
    {
        returnValue = F("Gänswaldweg");
        break;
    }
    case 126326:
    {
        returnValue = F("Gänswasen");
        break;
    }
    case 126327:
    {
        returnValue = F("Gänsweg");
        break;
    }
    case 126328:
    {
        returnValue = F("Gänsweid");
        break;
    }
    case 126329:
    {
        returnValue = F("Gänsweide");
        break;
    }
    case 126330:
    {
        returnValue = F("Gänsweidestr.");
        break;
    }
    case 126331:
    {
        returnValue = F("Gänsweidle");
        break;
    }
    case 126332:
    {
        returnValue = F("Gänsweidstr.");
        break;
    }
    case 126333:
    {
        returnValue = F("Gänsweidweg");
        break;
    }
    case 126334:
    {
        returnValue = F("Gänsweiherweg");
        break;
    }
    case 126335:
    {
        returnValue = F("Gänswetteweg");
        break;
    }
    case 126336:
    {
        returnValue = F("Gänswies");
        break;
    }
    case 126337:
    {
        returnValue = F("Gänswiesenweg");
        break;
    }
    case 126338:
    {
        returnValue = F("Gänswinkel");
        break;
    }
    case 126339:
    {
        returnValue = F("Gänswinkl");
        break;
    }
    case 126340:
    {
        returnValue = F("Gänswirthsgasse");
        break;
    }
    case 126341:
    {
        returnValue = F("Gänsäcker");
        break;
    }
    case 126342:
    {
        returnValue = F("Gänsäckerstr.");
        break;
    }
    case 126343:
    {
        returnValue = F("Gänsäckerweg");
        break;
    }
    case 126344:
    {
        returnValue = F("Gänzerberg");
        break;
    }
    case 126345:
    {
        returnValue = F("Gänßleweg");
        break;
    }
    case 126346:
    {
        returnValue = F("Gärdesstr.");
        break;
    }
    case 126347:
    {
        returnValue = F("Gärenweg");
        break;
    }
    case 126348:
    {
        returnValue = F("Gärhof");
        break;
    }
    case 126349:
    {
        returnValue = F("Gärmersdorfer Weg");
        break;
    }
    case 126350:
    {
        returnValue = F("Gärngasse");
        break;
    }
    case 126351:
    {
        returnValue = F("Gärsbronnhüttenweg");
        break;
    }
    case 126352:
    {
        returnValue = F("Gärtchenlinie");
        break;
    }
    case 126353:
    {
        returnValue = F("Gärten");
        break;
    }
    case 126354:
    {
        returnValue = F("Gärten an der Pferdebucht");
        break;
    }
    case 126355:
    {
        returnValue = F("Gärten im Wandel");
        break;
    }
    case 126356:
    {
        returnValue = F("Gärtenrother Str.");
        break;
    }
    case 126357:
    {
        returnValue = F("Gärtensoth");
        break;
    }
    case 126358:
    {
        returnValue = F("Gärtenstr.");
        break;
    }
    case 126359:
    {
        returnValue = F("Gärtenweg");
        break;
    }
    case 126360:
    {
        returnValue = F("Gärtenwiesen");
        break;
    }
    case 126361:
    {
        returnValue = F("Gärtigweg");
        break;
    }
    case 126362:
    {
        returnValue = F("Gärtitzer Str.");
        break;
    }
    case 126363:
    {
        returnValue = F("Gärtle");
        break;
    }
    case 126364:
    {
        returnValue = F("Gärtlen");
        break;
    }
    case 126365:
    {
        returnValue = F("Gärtlersgraben");
        break;
    }
    case 126366:
    {
        returnValue = F("Gärtlesrain");
        break;
    }
    case 126367:
    {
        returnValue = F("Gärtlesweg");
        break;
    }
    case 126368:
    {
        returnValue = F("Gärtlesäcker");
        break;
    }
    case 126369:
    {
        returnValue = F("Gärtleweg");
        break;
    }
    case 126370:
    {
        returnValue = F("Gärtling");
        break;
    }
    case 126371:
    {
        returnValue = F("Gärtlingsweg");
        break;
    }
    case 126372:
    {
        returnValue = F("Gärtner Park Heubach");
        break;
    }
    case 126373:
    {
        returnValue = F("Gärtner Str.");
        break;
    }
    case 126374:
    {
        returnValue = F("Gärtner-Schmid-Str.");
        break;
    }
    case 126375:
    {
        returnValue = F("Gärtner-Schmidt-Str.");
        break;
    }
    case 126376:
    {
        returnValue = F("Gärtnerberg");
        break;
    }
    case 126377:
    {
        returnValue = F("Gärtnerei");
        break;
    }
    case 126378:
    {
        returnValue = F("Gärtnerei Kieslich");
        break;
    }
    case 126379:
    {
        returnValue = F("Gärtnerei Kist");
        break;
    }
    case 126380:
    {
        returnValue = F("Gärtnerei Wolfsbrunnen");
        break;
    }
    case 126381:
    {
        returnValue = F("Gärtnereigasse");
        break;
    }
    case 126382:
    {
        returnValue = F("Gärtnereistr.");
        break;
    }
    case 126383:
    {
        returnValue = F("Gärtnereiweg");
        break;
    }
    case 126384:
    {
        returnValue = F("Gärtnerfantasien");
        break;
    }
    case 126385:
    {
        returnValue = F("Gärtnergang");
        break;
    }
    case 126386:
    {
        returnValue = F("Gärtnergasse");
        break;
    }
    case 126387:
    {
        returnValue = F("Gärtnergassl");
        break;
    }
    case 126388:
    {
        returnValue = F("Gärtnerhof");
        break;
    }
    case 126389:
    {
        returnValue = F("Gärtnerinweg");
        break;
    }
    case 126390:
    {
        returnValue = F("Gärtnerkoppel");
        break;
    }
    case 126391:
    {
        returnValue = F("Gärtnerplatz");
        break;
    }
    case 126392:
    {
        returnValue = F("Gärtnerring");
        break;
    }
    case 126393:
    {
        returnValue = F("Gärtnersberg");
        break;
    }
    case 126394:
    {
        returnValue = F("Gärtnersgrund");
        break;
    }
    case 126395:
    {
        returnValue = F("Gärtnershaldeweg");
        break;
    }
    case 126396:
    {
        returnValue = F("Gärtnershof");
        break;
    }
    case 126397:
    {
        returnValue = F("Gärtnershofweg");
        break;
    }
    case 126398:
    {
        returnValue = F("Gärtnersiedlung");
        break;
    }
    case 126399:
    {
        returnValue = F("Gärtnersleite");
        break;
    }
    case 126400:
    {
        returnValue = F("Gärtnersteg");
        break;
    }
    case 126401:
    {
        returnValue = F("Gärtnersteig");
        break;
    }
    case 126402:
    {
        returnValue = F("Gärtnerstieg");
        break;
    }
    case 126403:
    {
        returnValue = F("Gärtnerstr.");
        break;
    }
    case 126404:
    {
        returnValue = F("Gärtnersweg");
        break;
    }
    case 126405:
    {
        returnValue = F("Gärtnertwiete");
        break;
    }
    case 126406:
    {
        returnValue = F("Gärtnerweg");
        break;
    }
    case 126407:
    {
        returnValue = F("Gärtnerwinkel");
        break;
    }
    case 126408:
    {
        returnValue = F("Gärtringer Str.");
        break;
    }
    case 126409:
    {
        returnValue = F("Gärtringer Weg");
        break;
    }
    case 126410:
    {
        returnValue = F("Gäsegaß");
        break;
    }
    case 126411:
    {
        returnValue = F("Gäss'chen");
        break;
    }
    case 126412:
    {
        returnValue = F("Gässchen");
        break;
    }
    case 126413:
    {
        returnValue = F("Gässel");
        break;
    }
    case 126414:
    {
        returnValue = F("Gässele");
        break;
    }
    case 126415:
    {
        returnValue = F("Gässeleberg");
        break;
    }
    case 126416:
    {
        returnValue = F("Gässelersgässle");
        break;
    }
    case 126417:
    {
        returnValue = F("Gässelstr.");
        break;
    }
    case 126418:
    {
        returnValue = F("Gässelweg");
        break;
    }
    case 126419:
    {
        returnValue = F("Gässeläcker");
        break;
    }
    case 126420:
    {
        returnValue = F("Gässerei");
        break;
    }
    case 126421:
    {
        returnValue = F("Gässigweg");
        break;
    }
    case 126422:
    {
        returnValue = F("Gässje");
        break;
    }
    case 126423:
    {
        returnValue = F("Gässla");
        break;
    }
    case 126424:
    {
        returnValue = F("Gässle");
        break;
    }
    case 126425:
    {
        returnValue = F("Gässleacker");
        break;
    }
    case 126426:
    {
        returnValue = F("Gässlein");
        break;
    }
    case 126427:
    {
        returnValue = F("Gässlenswiesen");
        break;
    }
    case 126428:
    {
        returnValue = F("Gässlerstr.");
        break;
    }
    case 126429:
    {
        returnValue = F("Gässlesallee");
        break;
    }
    case 126430:
    {
        returnValue = F("Gässlesfeld");
        break;
    }
    case 126431:
    {
        returnValue = F("Gässleshof");
        break;
    }
    case 126432:
    {
        returnValue = F("Gässlestr.");
        break;
    }
    case 126433:
    {
        returnValue = F("Gässlesweg");
        break;
    }
    case 126434:
    {
        returnValue = F("Gässlewaldweg");
        break;
    }
    case 126435:
    {
        returnValue = F("Gässleweg");
        break;
    }
    case 126436:
    {
        returnValue = F("Gästepark");
        break;
    }
    case 126437:
    {
        returnValue = F("Gäthkenhäger Weg");
        break;
    }
    case 126438:
    {
        returnValue = F("Gätkestr.");
        break;
    }
    case 126439:
    {
        returnValue = F("Gäuallee");
        break;
    }
    case 126440:
    {
        returnValue = F("Gäubahnstr.");
        break;
    }
    case 126441:
    {
        returnValue = F("Gäublick");
        break;
    }
    case 126442:
    {
        returnValue = F("Gäublickstr.");
        break;
    }
    case 126443:
    {
        returnValue = F("Gäuchlesweg");
        break;
    }
    case 126444:
    {
        returnValue = F("Gäufeldener Str.");
        break;
    }
    case 126445:
    {
        returnValue = F("Gäugässle");
        break;
    }
    case 126446:
    {
        returnValue = F("Gäulenwaldstr.");
        break;
    }
    case 126447:
    {
        returnValue = F("Gäulgraben");
        break;
    }
    case 126448:
    {
        returnValue = F("Gäulhimmelweg");
        break;
    }
    case 126449:
    {
        returnValue = F("Gäulsgasse");
        break;
    }
    case 126450:
    {
        returnValue = F("Gäulsweg");
        break;
    }
    case 126451:
    {
        returnValue = F("Gäurandsteige");
        break;
    }
    case 126452:
    {
        returnValue = F("Gäuseland");
        break;
    }
    case 126453:
    {
        returnValue = F("Gäustr.");
        break;
    }
    case 126454:
    {
        returnValue = F("Gäuweg");
        break;
    }
    case 126455:
    {
        returnValue = F("Gävernitzer Landstr.");
        break;
    }
    case 126456:
    {
        returnValue = F("Gävernitzer Str.");
        break;
    }
    case 126457:
    {
        returnValue = F("Gäwelestr.");
        break;
    }
    case 126458:
    {
        returnValue = F("Gäßchen");
        break;
    }
    case 126459:
    {
        returnValue = F("Gäßchen ohne End");
        break;
    }
    case 126460:
    {
        returnValue = F("Gäßchesweg");
        break;
    }
    case 126461:
    {
        returnValue = F("Gäßele");
        break;
    }
    case 126462:
    {
        returnValue = F("Gäßla");
        break;
    }
    case 126463:
    {
        returnValue = F("Gäßle");
        break;
    }
    case 126464:
    {
        returnValue = F("Gäßlein");
        break;
    }
    case 126465:
    {
        returnValue = F("Gäßleinsau");
        break;
    }
    case 126466:
    {
        returnValue = F("Gäßleinsgärten");
        break;
    }
    case 126467:
    {
        returnValue = F("Gäßleinsweg");
        break;
    }
    case 126468:
    {
        returnValue = F("Gäßlesfeld");
        break;
    }
    case 126469:
    {
        returnValue = F("Gäßlesländer");
        break;
    }
    case 126470:
    {
        returnValue = F("Gäßlesweg");
        break;
    }
    case 126471:
    {
        returnValue = F("Gäßlesäcker");
        break;
    }
    case 126472:
    {
        returnValue = F("Gäßling");
        break;
    }
    case 126473:
    {
        returnValue = F("Gäßpfad");
        break;
    }
    case 126474:
    {
        returnValue = F("Göbelbastei");
        break;
    }
    case 126475:
    {
        returnValue = F("Göbeler Weg");
        break;
    }
    case 126476:
    {
        returnValue = F("Göbelnröder Str.");
        break;
    }
    case 126477:
    {
        returnValue = F("Göbelsbergstr.");
        break;
    }
    case 126478:
    {
        returnValue = F("Göbelsgasse");
        break;
    }
    case 126479:
    {
        returnValue = F("Göbelsgäßle");
        break;
    }
    case 126480:
    {
        returnValue = F("Göbelslehenstr.");
        break;
    }
    case 126481:
    {
        returnValue = F("Göbelspitz");
        break;
    }
    case 126482:
    {
        returnValue = F("Göbelsrainsträßchen");
        break;
    }
    case 126483:
    {
        returnValue = F("Göbelstr.");
        break;
    }
    case 126484:
    {
        returnValue = F("Göbelweg");
        break;
    }
    case 126485:
    {
        returnValue = F("Göbenhausener Str.");
        break;
    }
    case 126486:
    {
        returnValue = F("Göbenstr.");
        break;
    }
    case 126487:
    {
        returnValue = F("Göbersgasse");
        break;
    }
    case 126488:
    {
        returnValue = F("Göbertsham");
        break;
    }
    case 126489:
    {
        returnValue = F("Göbitzer Str.");
        break;
    }
    case 126490:
    {
        returnValue = F("Göblweg");
        break;
    }
    case 126491:
    {
        returnValue = F("Göbricher Str.");
        break;
    }
    case 126492:
    {
        returnValue = F("Göbweg");
        break;
    }
    case 126493:
    {
        returnValue = F("Göckelebadweg");
        break;
    }
    case 126494:
    {
        returnValue = F("Göckelhof");
        break;
    }
    case 126495:
    {
        returnValue = F("Göckelmannweg");
        break;
    }
    case 126496:
    {
        returnValue = F("Göckelsweg");
        break;
    }
    case 126497:
    {
        returnValue = F("Göckelweg");
        break;
    }
    case 126498:
    {
        returnValue = F("Göckersgrabenweg");
        break;
    }
    case 126499:
    {
        returnValue = F("Göckinghofstr.");
        break;
    }
    case 126500:
    {
        returnValue = F("Göckingkstr.");
        break;
    }
    case 126501:
    {
        returnValue = F("Göcklinger Weg");
        break;
    }
    case 126502:
    {
        returnValue = F("Göddeckenroder Str.");
        break;
    }
    case 126503:
    {
        returnValue = F("Göddeldorfer Weg");
        break;
    }
    case 126504:
    {
        returnValue = F("Göddenhoff");
        break;
    }
    case 126505:
    {
        returnValue = F("Gödderner Weg");
        break;
    }
    case 126506:
    {
        returnValue = F("Göddernstr.");
        break;
    }
    case 126507:
    {
        returnValue = F("Göddertchen");
        break;
    }
    case 126508:
    {
        returnValue = F("Göddertzgarten");
        break;
    }
    case 126509:
    {
        returnValue = F("Göddinger Str.");
        break;
    }
    case 126510:
    {
        returnValue = F("Gödebusch");
        break;
    }
    case 126511:
    {
        returnValue = F("Gödeckenkopfweg");
        break;
    }
    case 126512:
    {
        returnValue = F("Gödeckentalsweg");
        break;
    }
    case 126513:
    {
        returnValue = F("Gödeke-Michael-Str.");
        break;
    }
    case 126514:
    {
        returnValue = F("Gödeke-Michel-Str.");
        break;
    }
    case 126515:
    {
        returnValue = F("Gödekenhausen");
        break;
    }
    case 126516:
    {
        returnValue = F("Gödelitz");
        break;
    }
    case 126517:
    {
        returnValue = F("Gödenrother Gärten");
        break;
    }
    case 126518:
    {
        returnValue = F("Gödenrother Str.");
        break;
    }
    case 126519:
    {
        returnValue = F("Gödens");
        break;
    }
    case 126520:
    {
        returnValue = F("Gödenser Str.");
        break;
    }
    case 126521:
    {
        returnValue = F("Gödenstr.");
        break;
    }
    case 126522:
    {
        returnValue = F("Göderner Str.");
        break;
    }
    case 126523:
    {
        returnValue = F("Göderner Weg");
        break;
    }
    case 126524:
    {
        returnValue = F("Gödersdorfer Weg");
        break;
    }
    case 126525:
    {
        returnValue = F("Gödersheimer Weg");
        break;
    }
    case 126526:
    {
        returnValue = F("Gödersweg");
        break;
    }
    case 126527:
    {
        returnValue = F("Gödertskoppel");
        break;
    }
    case 126528:
    {
        returnValue = F("Gödestorfer Damm");
        break;
    }
    case 126529:
    {
        returnValue = F("Gödestorfer Str.");
        break;
    }
    case 126530:
    {
        returnValue = F("Gödewitzer Str.");
        break;
    }
    case 126531:
    {
        returnValue = F("Gödewitzer Teich");
        break;
    }
    case 126532:
    {
        returnValue = F("Gödewitzer Weg");
        break;
    }
    case 126533:
    {
        returnValue = F("Gödicke-Michel-Stieg");
        break;
    }
    case 126534:
    {
        returnValue = F("Gödinghover Weg");
        break;
    }
    case 126535:
    {
        returnValue = F("Gödissa");
        break;
    }
    case 126536:
    {
        returnValue = F("Gödnitzer Weg");
        break;
    }
    case 126537:
    {
        returnValue = F("Gödrestr.");
        break;
    }
    case 126538:
    {
        returnValue = F("Gödringer Str.");
        break;
    }
    case 126539:
    {
        returnValue = F("Göffelshof");
        break;
    }
    case 126540:
    {
        returnValue = F("Göffinger Str.");
        break;
    }
    case 126541:
    {
        returnValue = F("Gögerl");
        break;
    }
    case 126542:
    {
        returnValue = F("Gögerlstr.");
        break;
    }
    case 126543:
    {
        returnValue = F("Gögerlweg");
        break;
    }
    case 126544:
    {
        returnValue = F("Göggelsbucher Hauptstr.");
        break;
    }
    case 126545:
    {
        returnValue = F("Göggelsbucher Westring");
        break;
    }
    case 126546:
    {
        returnValue = F("Göggenhofener Kirchweg");
        break;
    }
    case 126547:
    {
        returnValue = F("Göggenwäldlesgrabenweg");
        break;
    }
    case 126548:
    {
        returnValue = F("Gögging");
        break;
    }
    case 126549:
    {
        returnValue = F("Gögginger Str.");
        break;
    }
    case 126550:
    {
        returnValue = F("Gögginger Weg");
        break;
    }
    case 126551:
    {
        returnValue = F("Gögglbacher Ring");
        break;
    }
    case 126552:
    {
        returnValue = F("Göhlen");
        break;
    }
    case 126553:
    {
        returnValue = F("Göhlen See");
        break;
    }
    case 126554:
    {
        returnValue = F("Göhlener Weg");
        break;
    }
    case 126555:
    {
        returnValue = F("Göhlenkamp");
        break;
    }
    case 126556:
    {
        returnValue = F("Göhler Str.");
        break;
    }
    case 126557:
    {
        returnValue = F("Göhlers Weg");
        break;
    }
    case 126558:
    {
        returnValue = F("Göhlitzsch");
        break;
    }
    case 126559:
    {
        returnValue = F("Göhlmannsweg");
        break;
    }
    case 126560:
    {
        returnValue = F("Göhlmühle");
        break;
    }
    case 126561:
    {
        returnValue = F("Göhlsdorfer Str.");
        break;
    }
    case 126562:
    {
        returnValue = F("Göhnerstr.");
        break;
    }
    case 126563:
    {
        returnValue = F("Göhraer Str.");
        break;
    }
    case 126564:
    {
        returnValue = F("Göhrder Bahnhofstr.");
        break;
    }
    case 126565:
    {
        returnValue = F("Göhrder Str.");
        break;
    }
    case 126566:
    {
        returnValue = F("Göhrder Weg");
        break;
    }
    case 126567:
    {
        returnValue = F("Göhrdestr.");
        break;
    }
    case 126568:
    {
        returnValue = F("Göhren");
        break;
    }
    case 126569:
    {
        returnValue = F("Göhrendorfer Str.");
        break;
    }
    case 126570:
    {
        returnValue = F("Göhrener Chaussee");
        break;
    }
    case 126571:
    {
        returnValue = F("Göhrener Str.");
        break;
    }
    case 126572:
    {
        returnValue = F("Göhrener Weg");
        break;
    }
    case 126573:
    {
        returnValue = F("Göhrengasse");
        break;
    }
    case 126574:
    {
        returnValue = F("Göhrensbergweg");
        break;
    }
    case 126575:
    {
        returnValue = F("Göhrenscher Weg");
        break;
    }
    case 126576:
    {
        returnValue = F("Göhrenstr.");
        break;
    }
    case 126577:
    {
        returnValue = F("Göhrenzer Str.");
        break;
    }
    case 126578:
    {
        returnValue = F("Göhringsgasse");
        break;
    }
    case 126579:
    {
        returnValue = F("Göhrischgärtnerei");
        break;
    }
    case 126580:
    {
        returnValue = F("Göhritzer Str.");
        break;
    }
    case 126581:
    {
        returnValue = F("Göhrleweg");
        break;
    }
    case 126582:
    {
        returnValue = F("Göhrnweg");
        break;
    }
    case 126583:
    {
        returnValue = F("Göhrumstr.");
        break;
    }
    case 126584:
    {
        returnValue = F("Göingsweg");
        break;
    }
    case 126585:
    {
        returnValue = F("Göjläjer");
        break;
    }
    case 126586:
    {
        returnValue = F("Gökerkamp");
        break;
    }
    case 126587:
    {
        returnValue = F("Gökerstr.");
        break;
    }
    case 126588:
    {
        returnValue = F("Gölbitzer Str.");
        break;
    }
    case 126589:
    {
        returnValue = F("Göldenbühlstr.");
        break;
    }
    case 126590:
    {
        returnValue = F("Göldnerstr.");
        break;
    }
    case 126591:
    {
        returnValue = F("Göldnerweg");
        break;
    }
    case 126592:
    {
        returnValue = F("Göldschen");
        break;
    }
    case 126593:
    {
        returnValue = F("Gölenkamper Str.");
        break;
    }
    case 126594:
    {
        returnValue = F("Göler-von-Ravensburg-Str.");
        break;
    }
    case 126595:
    {
        returnValue = F("Gölertzstr.");
        break;
    }
    case 126596:
    {
        returnValue = F("Gölkweg");
        break;
    }
    case 126597:
    {
        returnValue = F("Göllerhöh");
        break;
    }
    case 126598:
    {
        returnValue = F("Göllersreuth");
        break;
    }
    case 126599:
    {
        returnValue = F("Göllerweg");
        break;
    }
    case 126600:
    {
        returnValue = F("Göllesbergweg");
        break;
    }
    case 126601:
    {
        returnValue = F("Göllesheimer Weg");
        break;
    }
    case 126602:
    {
        returnValue = F("Göllheimer Str.");
        break;
    }
    case 126603:
    {
        returnValue = F("Göllinger Hauptstr.");
        break;
    }
    case 126604:
    {
        returnValue = F("Göllinger Str.");
        break;
    }
    case 126605:
    {
        returnValue = F("Göllinger Weg");
        break;
    }
    case 126606:
    {
        returnValue = F("Göllingsweg");
        break;
    }
    case 126607:
    {
        returnValue = F("Göllmitz");
        break;
    }
    case 126608:
    {
        returnValue = F("Göllsdorfer Str.");
        break;
    }
    case 126609:
    {
        returnValue = F("Göllsteinbichl");
        break;
    }
    case 126610:
    {
        returnValue = F("Göllstr.");
        break;
    }
    case 126611:
    {
        returnValue = F("Göllweg");
        break;
    }
    case 126612:
    {
        returnValue = F("Gölmer Weg");
        break;
    }
    case 126613:
    {
        returnValue = F("Gölsdorf");
        break;
    }
    case 126614:
    {
        returnValue = F("Gölsdorfer Gartenstr.");
        break;
    }
    case 126615:
    {
        returnValue = F("Gölsdorfer Str.");
        break;
    }
    case 126616:
    {
        returnValue = F("Gölsdorfer Weg");
        break;
    }
    case 126617:
    {
        returnValue = F("Gölsenbrunnenstr.");
        break;
    }
    case 126618:
    {
        returnValue = F("Gölshäuser Lücke");
        break;
    }
    case 126619:
    {
        returnValue = F("Gölswiesen");
        break;
    }
    case 126620:
    {
        returnValue = F("Göltzscha");
        break;
    }
    case 126621:
    {
        returnValue = F("Göltzschplatz");
        break;
    }
    case 126622:
    {
        returnValue = F("Göltzschstr.");
        break;
    }
    case 126623:
    {
        returnValue = F("Göltzschtalblick");
        break;
    }
    case 126624:
    {
        returnValue = F("Göltzschtalstr.");
        break;
    }
    case 126625:
    {
        returnValue = F("Göltzschweg");
        break;
    }
    case 126626:
    {
        returnValue = F("Gölzstr.");
        break;
    }
    case 126627:
    {
        returnValue = F("Gölzweg");
        break;
    }
    case 126628:
    {
        returnValue = F("Gömnitzer Weg");
        break;
    }
    case 126629:
    {
        returnValue = F("Gönheimer Weg");
        break;
    }
    case 126630:
    {
        returnValue = F("Gönnabach");
        break;
    }
    case 126631:
    {
        returnValue = F("Gönne");
        break;
    }
    case 126632:
    {
        returnValue = F("Gönnebeker Ring");
        break;
    }
    case 126633:
    {
        returnValue = F("Gönnebeker Str.");
        break;
    }
    case 126634:
    {
        returnValue = F("Gönnebeker Weg");
        break;
    }
    case 126635:
    {
        returnValue = F("Gönneranlage");
        break;
    }
    case 126636:
    {
        returnValue = F("Gönnersbohlstr.");
        break;
    }
    case 126637:
    {
        returnValue = F("Gönnersdorfer Str.");
        break;
    }
    case 126638:
    {
        returnValue = F("Gönnerstr.");
        break;
    }
    case 126639:
    {
        returnValue = F("Gönnheimer Str.");
        break;
    }
    case 126640:
    {
        returnValue = F("Gönninger Str.");
        break;
    }
    case 126641:
    {
        returnValue = F("Gönninger Weg");
        break;
    }
    case 126642:
    {
        returnValue = F("Gönrather Str.");
        break;
    }
    case 126643:
    {
        returnValue = F("Gönser Str.");
        break;
    }
    case 126644:
    {
        returnValue = F("Göntgenstr.");
        break;
    }
    case 126645:
    {
        returnValue = F("Göpelweg");
        break;
    }
    case 126646:
    {
        returnValue = F("Göpenstr.");
        break;
    }
    case 126647:
    {
        returnValue = F("Göppelberg");
        break;
    }
    case 126648:
    {
        returnValue = F("Göppersdorfer Str.");
        break;
    }
    case 126649:
    {
        returnValue = F("Göppertshausen");
        break;
    }
    case 126650:
    {
        returnValue = F("Göppertshausener Weg");
        break;
    }
    case 126651:
    {
        returnValue = F("Göppinger Str.");
        break;
    }
    case 126652:
    {
        returnValue = F("Göppinger Weg");
        break;
    }
    case 126653:
    {
        returnValue = F("Göppnerstr.");
        break;
    }
    case 126654:
    {
        returnValue = F("Göpringhauser Str.");
        break;
    }
    case 126655:
    {
        returnValue = F("Görau");
        break;
    }
    case 126656:
    {
        returnValue = F("Görauer Weg");
        break;
    }
    case 126657:
    {
        returnValue = F("Görbelheimer Grund");
        break;
    }
    case 126658:
    {
        returnValue = F("Görbelheimer Hohl");
        break;
    }
    case 126659:
    {
        returnValue = F("Görbelheimer Weg");
        break;
    }
    case 126660:
    {
        returnValue = F("Görbelmoosweg");
        break;
    }
    case 126661:
    {
        returnValue = F("Görbersdorfer Hohle");
        break;
    }
    case 126662:
    {
        returnValue = F("Görbersdorfer Str.");
        break;
    }
    case 126663:
    {
        returnValue = F("Görbitzer Dorfstr.");
        break;
    }
    case 126664:
    {
        returnValue = F("Görbitzer Weg");
        break;
    }
    case 126665:
    {
        returnValue = F("Görbleeksweg");
        break;
    }
    case 126666:
    {
        returnValue = F("Gördelerstr.");
        break;
    }
    case 126667:
    {
        returnValue = F("Gördenallee");
        break;
    }
    case 126668:
    {
        returnValue = F("Gördenitzer Platz");
        break;
    }
    case 126669:
    {
        returnValue = F("Gördenitzer Str.");
        break;
    }
    case 126670:
    {
        returnValue = F("Gördenitzer Weg");
        break;
    }
    case 126671:
    {
        returnValue = F("Gördesweg");
        break;
    }
    case 126672:
    {
        returnValue = F("Görenweg");
        break;
    }
    case 126673:
    {
        returnValue = F("Göretzenstr.");
        break;
    }
    case 126674:
    {
        returnValue = F("Görgeneck");
        break;
    }
    case 126675:
    {
        returnValue = F("Görgengasse");
        break;
    }
    case 126676:
    {
        returnValue = F("Görgenstr.");
        break;
    }
    case 126677:
    {
        returnValue = F("Görgesheideweg");
        break;
    }
    case 126678:
    {
        returnValue = F("Görgeskamp");
        break;
    }
    case 126679:
    {
        returnValue = F("Görgesstr.");
        break;
    }
    case 126680:
    {
        returnValue = F("Görglaser Str.");
        break;
    }
    case 126681:
    {
        returnValue = F("Görgweg");
        break;
    }
    case 126682:
    {
        returnValue = F("Göriacher Str.");
        break;
    }
    case 126683:
    {
        returnValue = F("Görickestr.");
        break;
    }
    case 126684:
    {
        returnValue = F("Göriker Dorfstr.");
        break;
    }
    case 126685:
    {
        returnValue = F("Göriker Str.");
        break;
    }
    case 126686:
    {
        returnValue = F("Göringsgasse");
        break;
    }
    case 126687:
    {
        returnValue = F("Göringsgraben");
        break;
    }
    case 126688:
    {
        returnValue = F("Göringsreuth");
        break;
    }
    case 126689:
    {
        returnValue = F("Göringsreuther Gäßchen");
        break;
    }
    case 126690:
    {
        returnValue = F("Göringsreuther Str.");
        break;
    }
    case 126691:
    {
        returnValue = F("Görisgräben");
        break;
    }
    case 126692:
    {
        returnValue = F("Göritz");
        break;
    }
    case 126693:
    {
        returnValue = F("Göritz-Klepzig-Raben");
        break;
    }
    case 126694:
    {
        returnValue = F("Göritz-Klepzig-Zehrendorf-Raben");
        break;
    }
    case 126695:
    {
        returnValue = F("Göritzenstr.");
        break;
    }
    case 126696:
    {
        returnValue = F("Göritzer Dorfstr.");
        break;
    }
    case 126697:
    {
        returnValue = F("Göritzer Forsthaus");
        break;
    }
    case 126698:
    {
        returnValue = F("Göritzer Landstr.");
        break;
    }
    case 126699:
    {
        returnValue = F("Göritzer Weg");
        break;
    }
    case 126700:
    {
        returnValue = F("Göritzhainer Str.");
        break;
    }
    case 126701:
    {
        returnValue = F("Göritzweg");
        break;
    }
    case 126702:
    {
        returnValue = F("Görkauer Str.");
        break;
    }
    case 126703:
    {
        returnValue = F("Görke");
        break;
    }
    case 126704:
    {
        returnValue = F("Görkenstr.");
        break;
    }
    case 126705:
    {
        returnValue = F("Görkeskamp");
        break;
    }
    case 126706:
    {
        returnValue = F("Görkwitzer Unterweg");
        break;
    }
    case 126707:
    {
        returnValue = F("Görkwitzer Weg");
        break;
    }
    case 126708:
    {
        returnValue = F("Görlitzer Allee");
        break;
    }
    case 126709:
    {
        returnValue = F("Görlitzer Hof");
        break;
    }
    case 126710:
    {
        returnValue = F("Görlitzer Landstr.");
        break;
    }
    case 126711:
    {
        returnValue = F("Görlitzer Platz");
        break;
    }
    case 126712:
    {
        returnValue = F("Görlitzer Ring");
        break;
    }
    case 126713:
    {
        returnValue = F("Görlitzer Steg");
        break;
    }
    case 126714:
    {
        returnValue = F("Görlitzer Str.");
        break;
    }
    case 126715:
    {
        returnValue = F("Görlitzer Weg");
        break;
    }
    case 126716:
    {
        returnValue = F("Görlitzerweg");
        break;
    }
    case 126717:
    {
        returnValue = F("Görlitzstr.");
        break;
    }
    case 126718:
    {
        returnValue = F("Görlitzweg");
        break;
    }
    case 126719:
    {
        returnValue = F("Görlsdorfer Dorfstr.");
        break;
    }
    case 126720:
    {
        returnValue = F("Görlsdorfer Lange Str.");
        break;
    }
    case 126721:
    {
        returnValue = F("Görlsdorfer Schulstr.");
        break;
    }
    case 126722:
    {
        returnValue = F("Görlsdorfer Str.");
        break;
    }
    case 126723:
    {
        returnValue = F("Görlsdorfer Weg");
        break;
    }
    case 126724:
    {
        returnValue = F("Görmarsche Höhle");
        break;
    }
    case 126725:
    {
        returnValue = F("Görmarstr.");
        break;
    }
    case 126726:
    {
        returnValue = F("Görmin Ausbau");
        break;
    }
    case 126727:
    {
        returnValue = F("Görmitzer Weg");
        break;
    }
    case 126728:
    {
        returnValue = F("Görna");
        break;
    }
    case 126729:
    {
        returnValue = F("Görneweg");
        break;
    }
    case 126730:
    {
        returnValue = F("Görngasse");
        break;
    }
    case 126731:
    {
        returnValue = F("Görnische Gasse");
        break;
    }
    case 126732:
    {
        returnValue = F("Görnitz");
        break;
    }
    case 126733:
    {
        returnValue = F("Görnitzer Brücke");
        break;
    }
    case 126734:
    {
        returnValue = F("Görnitzer Redder");
        break;
    }
    case 126735:
    {
        returnValue = F("Görnitzer Str.");
        break;
    }
    case 126736:
    {
        returnValue = F("Görnitzer Weg");
        break;
    }
    case 126737:
    {
        returnValue = F("Görnitzweg");
        break;
    }
    case 126738:
    {
        returnValue = F("Görnsche Bruch");
        break;
    }
    case 126739:
    {
        returnValue = F("Görnseestr.");
        break;
    }
    case 126740:
    {
        returnValue = F("Görnstr.");
        break;
    }
    case 126741:
    {
        returnValue = F("Görnweg");
        break;
    }
    case 126742:
    {
        returnValue = F("Görreshof");
        break;
    }
    case 126743:
    {
        returnValue = F("Görreshofstr.");
        break;
    }
    case 126744:
    {
        returnValue = F("Görreshöhle");
        break;
    }
    case 126745:
    {
        returnValue = F("Görresplatz");
        break;
    }
    case 126746:
    {
        returnValue = F("Görresstr.");
        break;
    }
    case 126747:
    {
        returnValue = F("Görresweg");
        break;
    }
    case 126748:
    {
        returnValue = F("Görretstr.");
        break;
    }
    case 126749:
    {
        returnValue = F("Görrieser Weg");
        break;
    }
    case 126750:
    {
        returnValue = F("Görrisauer Weg");
        break;
    }
    case 126751:
    {
        returnValue = F("Görsbachstr.");
        break;
    }
    case 126752:
    {
        returnValue = F("Görscheider Weg");
        break;
    }
    case 126753:
    {
        returnValue = F("Görschelweg");
        break;
    }
    case 126754:
    {
        returnValue = F("Görschen");
        break;
    }
    case 126755:
    {
        returnValue = F("Görschlitzer Str.");
        break;
    }
    case 126756:
    {
        returnValue = F("Görschlitzer Weg");
        break;
    }
    case 126757:
    {
        returnValue = F("Görschlitzer Weinberge");
        break;
    }
    case 126758:
    {
        returnValue = F("Görschnitz");
        break;
    }
    case 126759:
    {
        returnValue = F("Görschnitzberg");
        break;
    }
    case 126760:
    {
        returnValue = F("Görsdorf");
        break;
    }
    case 126761:
    {
        returnValue = F("Görsdorfer Str.");
        break;
    }
    case 126762:
    {
        returnValue = F("Görsdorfer Weg");
        break;
    }
    case 126763:
    {
        returnValue = F("Görsenkothen");
        break;
    }
    case 126764:
    {
        returnValue = F("Görsgrund");
        break;
    }
    case 126765:
    {
        returnValue = F("Görslower Str.");
        break;
    }
    case 126766:
    {
        returnValue = F("Görsmannstr.");
        break;
    }
    case 126767:
    {
        returnValue = F("Görsrother Weg");
        break;
    }
    case 126768:
    {
        returnValue = F("Görtestr.");
        break;
    }
    case 126769:
    {
        returnValue = F("Görtitzberg");
        break;
    }
    case 126770:
    {
        returnValue = F("Görtstr.");
        break;
    }
    case 126771:
    {
        returnValue = F("Görtze-Woy");
        break;
    }
    case 126772:
    {
        returnValue = F("Görtzens Gaderum");
        break;
    }
    case 126773:
    {
        returnValue = F("Görtzheide");
        break;
    }
    case 126774:
    {
        returnValue = F("Görtzhof");
        break;
    }
    case 126775:
    {
        returnValue = F("Görtzstr.");
        break;
    }
    case 126776:
    {
        returnValue = F("Görwihler Weg");
        break;
    }
    case 126777:
    {
        returnValue = F("Görwitzstr.");
        break;
    }
    case 126778:
    {
        returnValue = F("Görzbornstr.");
        break;
    }
    case 126779:
    {
        returnValue = F("Görzhainer Weg");
        break;
    }
    case 126780:
    {
        returnValue = F("Görzhäuser Weg");
        break;
    }
    case 126781:
    {
        returnValue = F("Görziger Dorfstelle");
        break;
    }
    case 126782:
    {
        returnValue = F("Görziger Str.");
        break;
    }
    case 126783:
    {
        returnValue = F("Görzker Str.");
        break;
    }
    case 126784:
    {
        returnValue = F("Görzstr.");
        break;
    }
    case 126785:
    {
        returnValue = F("Görßscher Hof");
        break;
    }
    case 126786:
    {
        returnValue = F("Gösauer Str.");
        break;
    }
    case 126787:
    {
        returnValue = F("Gösbergstr.");
        break;
    }
    case 126788:
    {
        returnValue = F("Göschbeekweg");
        break;
    }
    case 126789:
    {
        returnValue = F("Göschenholl");
        break;
    }
    case 126790:
    {
        returnValue = F("Göschenkampweg");
        break;
    }
    case 126791:
    {
        returnValue = F("Göschenstr.");
        break;
    }
    case 126792:
    {
        returnValue = F("Göschlstr.");
        break;
    }
    case 126793:
    {
        returnValue = F("Göschlweg");
        break;
    }
    case 126794:
    {
        returnValue = F("Göschweiler Str.");
        break;
    }
    case 126795:
    {
        returnValue = F("Göschweilerstr.");
        break;
    }
    case 126796:
    {
        returnValue = F("Göschwitzer Str.");
        break;
    }
    case 126797:
    {
        returnValue = F("Gösdorf");
        break;
    }
    case 126798:
    {
        returnValue = F("Gösebree");
        break;
    }
    case 126799:
    {
        returnValue = F("Gösekamp");
        break;
    }
    case 126800:
    {
        returnValue = F("Göselake");
        break;
    }
    case 126801:
    {
        returnValue = F("Göselaue");
        break;
    }
    case 126802:
    {
        returnValue = F("Göselcanyon-Brücke");
        break;
    }
    case 126803:
    {
        returnValue = F("Gösen");
        break;
    }
    case 126804:
    {
        returnValue = F("Gösener Str.");
        break;
    }
    case 126805:
    {
        returnValue = F("Göslingstr.");
        break;
    }
    case 126806:
    {
        returnValue = F("Göslmühlweg");
        break;
    }
    case 126807:
    {
        returnValue = F("Göspe");
        break;
    }
    case 126808:
    {
        returnValue = F("Gösselbarg");
        break;
    }
    case 126809:
    {
        returnValue = F("Gösselberg");
        break;
    }
    case 126810:
    {
        returnValue = F("Gösselborn");
        break;
    }
    case 126811:
    {
        returnValue = F("Gösseldorf");
        break;
    }
    case 126812:
    {
        returnValue = F("Gösselgrund");
        break;
    }
    case 126813:
    {
        returnValue = F("Gösselkamp");
        break;
    }
    case 126814:
    {
        returnValue = F("Gösselnpfad");
        break;
    }
    case 126815:
    {
        returnValue = F("Gösselsdorf");
        break;
    }
    case 126816:
    {
        returnValue = F("Gösselstieg");
        break;
    }
    case 126817:
    {
        returnValue = F("Gösselweg");
        break;
    }
    case 126818:
    {
        returnValue = F("Gösselwiesen");
        break;
    }
    case 126819:
    {
        returnValue = F("Gössenheimer Weg");
        break;
    }
    case 126820:
    {
        returnValue = F("Gössenreuth");
        break;
    }
    case 126821:
    {
        returnValue = F("Gössitzer Weg");
        break;
    }
    case 126822:
    {
        returnValue = F("Gössleswiesen");
        break;
    }
    case 126823:
    {
        returnValue = F("Gösslinger Str.");
        break;
    }
    case 126824:
    {
        returnValue = F("Gösstr.");
        break;
    }
    case 126825:
    {
        returnValue = F("Göstrastr.");
        break;
    }
    case 126826:
    {
        returnValue = F("Göstruper Str.");
        break;
    }
    case 126827:
    {
        returnValue = F("Göteborger Str.");
        break;
    }
    case 126828:
    {
        returnValue = F("Göteborger Weg");
        break;
    }
    case 126829:
    {
        returnValue = F("Göteborgring");
        break;
    }
    case 126830:
    {
        returnValue = F("Göteborgstr.");
        break;
    }
    case 126831:
    {
        returnValue = F("Götenhof");
        break;
    }
    case 126832:
    {
        returnValue = F("Götensberg");
        break;
    }
    case 126833:
    {
        returnValue = F("Götenweg");
        break;
    }
    case 126834:
    {
        returnValue = F("Götgengasse");
        break;
    }
    case 126835:
    {
        returnValue = F("Göthelweg");
        break;
    }
    case 126836:
    {
        returnValue = F("Göthen");
        break;
    }
    case 126837:
    {
        returnValue = F("Göthener Str.");
        break;
    }
    case 126838:
    {
        returnValue = F("Göthener Weg");
        break;
    }
    case 126839:
    {
        returnValue = F("Göthewitzer Str.");
        break;
    }
    case 126840:
    {
        returnValue = F("Göthewitzer Weg");
        break;
    }
    case 126841:
    {
        returnValue = F("Göthsbachstr.");
        break;
    }
    case 126842:
    {
        returnValue = F("Götkers Hof");
        break;
    }
    case 126843:
    {
        returnValue = F("Götschenbeck");
        break;
    }
    case 126844:
    {
        returnValue = F("Götschendorf");
        break;
    }
    case 126845:
    {
        returnValue = F("Götschenhalde");
        break;
    }
    case 126846:
    {
        returnValue = F("Götschenweg");
        break;
    }
    case 126847:
    {
        returnValue = F("Götscher Weg");
        break;
    }
    case 126848:
    {
        returnValue = F("Götschetalstr.");
        break;
    }
    case 126849:
    {
        returnValue = F("Götscheweg");
        break;
    }
    case 126850:
    {
        returnValue = F("Götschisackerweg");
        break;
    }
    case 126851:
    {
        returnValue = F("Götschlerweg");
        break;
    }
    case 126852:
    {
        returnValue = F("Götschweg");
        break;
    }
    case 126853:
    {
        returnValue = F("Göttchenskamp");
        break;
    }
    case 126854:
    {
        returnValue = F("Göttchesweg");
        break;
    }
    case 126855:
    {
        returnValue = F("Götte");
        break;
    }
    case 126856:
    {
        returnValue = F("Göttelbachstr.");
        break;
    }
    case 126857:
    {
        returnValue = F("Göttelbachweg");
        break;
    }
    case 126858:
    {
        returnValue = F("Göttelborner Str.");
        break;
    }
    case 126859:
    {
        returnValue = F("Göttelfinger Str.");
        break;
    }
    case 126860:
    {
        returnValue = F("Göttelfinger Weg");
        break;
    }
    case 126861:
    {
        returnValue = F("Göttelhoffeld");
        break;
    }
    case 126862:
    {
        returnValue = F("Göttelmannstr.");
        break;
    }
    case 126863:
    {
        returnValue = F("Göttenbergstr.");
        break;
    }
    case 126864:
    {
        returnValue = F("Göttendorf");
        break;
    }
    case 126865:
    {
        returnValue = F("Göttendorfer Weg");
        break;
    }
    case 126866:
    {
        returnValue = F("Götteneck");
        break;
    }
    case 126867:
    {
        returnValue = F("Göttengasse");
        break;
    }
    case 126868:
    {
        returnValue = F("Göttengrün");
        break;
    }
    case 126869:
    {
        returnValue = F("Götterhüttentrail");
        break;
    }
    case 126870:
    {
        returnValue = F("Götterrondell");
        break;
    }
    case 126871:
    {
        returnValue = F("Göttersberg");
        break;
    }
    case 126872:
    {
        returnValue = F("Göttersberger Str.");
        break;
    }
    case 126873:
    {
        returnValue = F("Göttersdorf");
        break;
    }
    case 126874:
    {
        returnValue = F("Göttfricker Weg");
        break;
    }
    case 126875:
    {
        returnValue = F("Göttgang");
        break;
    }
    case 126876:
    {
        returnValue = F("Göttien-Oldemühle");
        break;
    }
    case 126877:
    {
        returnValue = F("Göttiener Str.");
        break;
    }
    case 126878:
    {
        returnValue = F("Göttin");
        break;
    }
    case 126879:
    {
        returnValue = F("Göttiner Bahnhofstr.");
        break;
    }
    case 126880:
    {
        returnValue = F("Göttiner Landstr.");
        break;
    }
    case 126881:
    {
        returnValue = F("Göttiner Schulstr.");
        break;
    }
    case 126882:
    {
        returnValue = F("Göttiner Steig");
        break;
    }
    case 126883:
    {
        returnValue = F("Göttiner Str.");
        break;
    }
    case 126884:
    {
        returnValue = F("Göttiner Weg");
        break;
    }
    case 126885:
    {
        returnValue = F("Göttinger Breede");
        break;
    }
    case 126886:
    {
        returnValue = F("Göttinger Landstr.");
        break;
    }
    case 126887:
    {
        returnValue = F("Göttinger Stieg");
        break;
    }
    case 126888:
    {
        returnValue = F("Göttinger Str.");
        break;
    }
    case 126889:
    {
        returnValue = F("Göttinger Weg");
        break;
    }
    case 126890:
    {
        returnValue = F("Göttingerhöfen");
        break;
    }
    case 126891:
    {
        returnValue = F("Göttingeroder Str.");
        break;
    }
    case 126892:
    {
        returnValue = F("Göttingeröder Str.");
        break;
    }
    case 126893:
    {
        returnValue = F("Göttingstr.");
        break;
    }
    case 126894:
    {
        returnValue = F("Göttlerstr.");
        break;
    }
    case 126895:
    {
        returnValue = F("Göttlerweg");
        break;
    }
    case 126896:
    {
        returnValue = F("Göttlesgrund");
        break;
    }
    case 126897:
    {
        returnValue = F("Göttlesgrundweg");
        break;
    }
    case 126898:
    {
        returnValue = F("Göttliner Chaussee");
        break;
    }
    case 126899:
    {
        returnValue = F("Göttliner Dorfstr.");
        break;
    }
    case 126900:
    {
        returnValue = F("Göttliner Kiefernweg");
        break;
    }
    case 126901:
    {
        returnValue = F("Göttliner Str.");
        break;
    }
    case 126902:
    {
        returnValue = F("Göttling");
        break;
    }
    case 126903:
    {
        returnValue = F("Göttlinger Str.");
        break;
    }
    case 126904:
    {
        returnValue = F("Göttlingkstr.");
        break;
    }
    case 126905:
    {
        returnValue = F("Göttlishofer Str.");
        break;
    }
    case 126906:
    {
        returnValue = F("Göttlitzweg");
        break;
    }
    case 126907:
    {
        returnValue = F("Göttlkofen");
        break;
    }
    case 126908:
    {
        returnValue = F("Göttlzug");
        break;
    }
    case 126909:
    {
        returnValue = F("Göttnitzer Str.");
        break;
    }
    case 126910:
    {
        returnValue = F("Göttnitzer Weg");
        break;
    }
    case 126911:
    {
        returnValue = F("Göttrikstr.");
        break;
    }
    case 126912:
    {
        returnValue = F("Göttsch-Hof");
        break;
    }
    case 126913:
    {
        returnValue = F("Göttscheider Str.");
        break;
    }
    case 126914:
    {
        returnValue = F("Göttschieder Str.");
        break;
    }
    case 126915:
    {
        returnValue = F("Göttschlag");
        break;
    }
    case 126916:
    {
        returnValue = F("Göttweiger Str.");
        break;
    }
    case 126917:
    {
        returnValue = F("Götz-Briefs-Weg");
        break;
    }
    case 126918:
    {
        returnValue = F("Götz-von-Berlichingen-Weg");
        break;
    }
    case 126919:
    {
        returnValue = F("Götzbachweg");
        break;
    }
    case 126920:
    {
        returnValue = F("Götzberger Str.");
        break;
    }
    case 126921:
    {
        returnValue = F("Götzdorf");
        break;
    }
    case 126922:
    {
        returnValue = F("Götzdorfer Str.");
        break;
    }
    case 126923:
    {
        returnValue = F("Götzelmannstr.");
        break;
    }
    case 126924:
    {
        returnValue = F("Götzelshard");
        break;
    }
    case 126925:
    {
        returnValue = F("Götzenacker");
        break;
    }
    case 126926:
    {
        returnValue = F("Götzenbachstr.");
        break;
    }
    case 126927:
    {
        returnValue = F("Götzenbachweg");
        break;
    }
    case 126928:
    {
        returnValue = F("Götzenberg");
        break;
    }
    case 126929:
    {
        returnValue = F("Götzenbergstr.");
        break;
    }
    case 126930:
    {
        returnValue = F("Götzenbergtalweg");
        break;
    }
    case 126931:
    {
        returnValue = F("Götzenbergweg");
        break;
    }
    case 126932:
    {
        returnValue = F("Götzenbreite");
        break;
    }
    case 126933:
    {
        returnValue = F("Götzenbrunnenstr.");
        break;
    }
    case 126934:
    {
        returnValue = F("Götzenburg");
        break;
    }
    case 126935:
    {
        returnValue = F("Götzenbühlweg");
        break;
    }
    case 126936:
    {
        returnValue = F("Götzendorfer Str.");
        break;
    }
    case 126937:
    {
        returnValue = F("Götzendorfertal");
        break;
    }
    case 126938:
    {
        returnValue = F("Götzener Weg");
        break;
    }
    case 126939:
    {
        returnValue = F("Götzenfeld");
        break;
    }
    case 126940:
    {
        returnValue = F("Götzenfelsstr.");
        break;
    }
    case 126941:
    {
        returnValue = F("Götzengasse");
        break;
    }
    case 126942:
    {
        returnValue = F("Götzenhainer Mühle");
        break;
    }
    case 126943:
    {
        returnValue = F("Götzenhainer Pfädchen");
        break;
    }
    case 126944:
    {
        returnValue = F("Götzenhainer Str.");
        break;
    }
    case 126945:
    {
        returnValue = F("Götzenhainer Weg");
        break;
    }
    case 126946:
    {
        returnValue = F("Götzenhainweg");
        break;
    }
    case 126947:
    {
        returnValue = F("Götzenhof");
        break;
    }
    case 126948:
    {
        returnValue = F("Götzenkirchener Str.");
        break;
    }
    case 126949:
    {
        returnValue = F("Götzenkirchener Weg");
        break;
    }
    case 126950:
    {
        returnValue = F("Götzenloch");
        break;
    }
    case 126951:
    {
        returnValue = F("Götzenmühlweg");
        break;
    }
    case 126952:
    {
        returnValue = F("Götzenrain");
        break;
    }
    case 126953:
    {
        returnValue = F("Götzenrainweg");
        break;
    }
    case 126954:
    {
        returnValue = F("Götzensteinstr.");
        break;
    }
    case 126955:
    {
        returnValue = F("Götzenstr.");
        break;
    }
    case 126956:
    {
        returnValue = F("Götzentaler Weg");
        break;
    }
    case 126957:
    {
        returnValue = F("Götzentalstr.");
        break;
    }
    case 126958:
    {
        returnValue = F("Götzentalweg");
        break;
    }
    case 126959:
    {
        returnValue = F("Götzenthal");
        break;
    }
    case 126960:
    {
        returnValue = F("Götzentor");
        break;
    }
    case 126961:
    {
        returnValue = F("Götzenturmstr.");
        break;
    }
    case 126962:
    {
        returnValue = F("Götzenweg");
        break;
    }
    case 126963:
    {
        returnValue = F("Götzenwiesenweg");
        break;
    }
    case 126964:
    {
        returnValue = F("Götzenäcker");
        break;
    }
    case 126965:
    {
        returnValue = F("Götzeroth");
        break;
    }
    case 126966:
    {
        returnValue = F("Götzestr.");
        break;
    }
    case 126967:
    {
        returnValue = F("Götzeweg");
        break;
    }
    case 126968:
    {
        returnValue = F("Götzfriedstr.");
        break;
    }
    case 126969:
    {
        returnValue = F("Götzgasse");
        break;
    }
    case 126970:
    {
        returnValue = F("Götzinger Str.");
        break;
    }
    case 126971:
    {
        returnValue = F("Götzingerstr.");
        break;
    }
    case 126972:
    {
        returnValue = F("Götzkendorf");
        break;
    }
    case 126973:
    {
        returnValue = F("Götzmannsgrün");
        break;
    }
    case 126974:
    {
        returnValue = F("Götzmannsgrüner Str.");
        break;
    }
    case 126975:
    {
        returnValue = F("Götzsteig");
        break;
    }
    case 126976:
    {
        returnValue = F("Götzstr.");
        break;
    }
    case 126977:
    {
        returnValue = F("Götzweg");
        break;
    }
    case 126978:
    {
        returnValue = F("Göxer Landstr.");
        break;
    }
    case 126979:
    {
        returnValue = F("Göxer Str.");
        break;
    }
    case 126980:
    {
        returnValue = F("Göxer Weg");
        break;
    }
    case 126981:
    {
        returnValue = F("Gößbach");
        break;
    }
    case 126982:
    {
        returnValue = F("Gößenreuther Weg");
        break;
    }
    case 126983:
    {
        returnValue = F("Gößlinger Str.");
        break;
    }
    case 126984:
    {
        returnValue = F("Gößmannsberg");
        break;
    }
    case 126985:
    {
        returnValue = F("Gößnitzer Str.");
        break;
    }
    case 126986:
    {
        returnValue = F("Gößweinsteiner Str.");
        break;
    }
    case 126987:
    {
        returnValue = F("Gößweinstr.");
        break;
    }
    case 126988:
    {
        returnValue = F("Gößweinweg");
        break;
    }
    case 126989:
    {
        returnValue = F("Göösmark");
        break;
    }
    case 126990:
    {
        returnValue = F("Gööstraat");
        break;
    }
    case 126991:
    {
        returnValue = F("Gübecke");
        break;
    }
    case 126992:
    {
        returnValue = F("Güberichweg");
        break;
    }
    case 126993:
    {
        returnValue = F("Gübser Weg");
        break;
    }
    case 126994:
    {
        returnValue = F("Güchenbacher Str.");
        break;
    }
    case 126995:
    {
        returnValue = F("Güchenbacher Weg");
        break;
    }
    case 126996:
    {
        returnValue = F("Gücherweg");
        break;
    }
    case 126997:
    {
        returnValue = F("Güchthalde");
        break;
    }
    case 126998:
    {
        returnValue = F("Güchtweg");
        break;
    }
    case 126999:
    {
        returnValue = F("Gückelhut");
        break;
    }
    case 127000:
    {
        returnValue = F("Gückelsberg");
        break;
    }
    case 127001:
    {
        returnValue = F("Gückelsbergstr.");
        break;
    }
    case 127002:
    {
        returnValue = F("Gückenhühle");
        break;
    }
    case 127003:
    {
        returnValue = F("Güdeckenweg");
        break;
    }
    case 127004:
    {
        returnValue = F("Güderkircher Str.");
        break;
    }
    case 127005:
    {
        returnValue = F("Güderott");
        break;
    }
    case 127006:
    {
        returnValue = F("Güdesweilerstr.");
        break;
    }
    case 127007:
    {
        returnValue = F("Gügelblick");
        break;
    }
    case 127008:
    {
        returnValue = F("Gügelweg");
        break;
    }
    case 127009:
    {
        returnValue = F("Güglinger Mostbirnbaum");
        break;
    }
    case 127010:
    {
        returnValue = F("Güglinger Str.");
        break;
    }
    case 127011:
    {
        returnValue = F("Güglinger Weg");
        break;
    }
    case 127012:
    {
        returnValue = F("Gühlenbrücke");
        break;
    }
    case 127013:
    {
        returnValue = F("Gühneschachtstr.");
        break;
    }
    case 127014:
    {
        returnValue = F("Güholz");
        break;
    }
    case 127015:
    {
        returnValue = F("Gührnweg");
        break;
    }
    case 127016:
    {
        returnValue = F("Gülchackerstr.");
        break;
    }
    case 127017:
    {
        returnValue = F("Gülchsheimer Str.");
        break;
    }
    case 127018:
    {
        returnValue = F("Gülchsheimer Weg");
        break;
    }
    case 127019:
    {
        returnValue = F("Gülden Camern");
        break;
    }
    case 127020:
    {
        returnValue = F("Güldenacker");
        break;
    }
    case 127021:
    {
        returnValue = F("Güldenberg");
        break;
    }
    case 127022:
    {
        returnValue = F("Güldenbergstr.");
        break;
    }
    case 127023:
    {
        returnValue = F("Güldenboden");
        break;
    }
    case 127024:
    {
        returnValue = F("Güldenbuschweg");
        break;
    }
    case 127025:
    {
        returnValue = F("Güldene Aue");
        break;
    }
    case 127026:
    {
        returnValue = F("Güldene Ecke");
        break;
    }
    case 127027:
    {
        returnValue = F("Güldene Kammer");
        break;
    }
    case 127028:
    {
        returnValue = F("Güldene Mine");
        break;
    }
    case 127029:
    {
        returnValue = F("Güldene Pforte");
        break;
    }
    case 127030:
    {
        returnValue = F("Güldene Tröge");
        break;
    }
    case 127031:
    {
        returnValue = F("Güldener Ort");
        break;
    }
    case 127032:
    {
        returnValue = F("Güldener Str.");
        break;
    }
    case 127033:
    {
        returnValue = F("Güldener Trog");
        break;
    }
    case 127034:
    {
        returnValue = F("Güldener Weg");
        break;
    }
    case 127035:
    {
        returnValue = F("Güldener Winkel");
        break;
    }
    case 127036:
    {
        returnValue = F("Güldenes Stift");
        break;
    }
    case 127037:
    {
        returnValue = F("Güldenfeld");
        break;
    }
    case 127038:
    {
        returnValue = F("Güldenfeldstr.");
        break;
    }
    case 127039:
    {
        returnValue = F("Güldengossa Wendestelle");
        break;
    }
    case 127040:
    {
        returnValue = F("Güldengossaer Str.");
        break;
    }
    case 127041:
    {
        returnValue = F("Güldengossaer Weg");
        break;
    }
    case 127042:
    {
        returnValue = F("Güldengrund");
        break;
    }
    case 127043:
    {
        returnValue = F("Güldenhauptsheide");
        break;
    }
    case 127044:
    {
        returnValue = F("Güldenholm");
        break;
    }
    case 127045:
    {
        returnValue = F("Güldenholmer Weg");
        break;
    }
    case 127046:
    {
        returnValue = F("Güldenhorn");
        break;
    }
    case 127047:
    {
        returnValue = F("Güldenklingenweg");
        break;
    }
    case 127048:
    {
        returnValue = F("Güldenpoth");
        break;
    }
    case 127049:
    {
        returnValue = F("Güldenspring");
        break;
    }
    case 127050:
    {
        returnValue = F("Güldenstadt");
        break;
    }
    case 127051:
    {
        returnValue = F("Güldenstein");
        break;
    }
    case 127052:
    {
        returnValue = F("Güldensteiner Weg");
        break;
    }
    case 127053:
    {
        returnValue = F("Güldenstern");
        break;
    }
    case 127054:
    {
        returnValue = F("Güldensternweg");
        break;
    }
    case 127055:
    {
        returnValue = F("Güldenstr.");
        break;
    }
    case 127056:
    {
        returnValue = F("Güldensöllerweg");
        break;
    }
    case 127057:
    {
        returnValue = F("Güldenweg");
        break;
    }
    case 127058:
    {
        returnValue = F("Güldenwerth");
        break;
    }
    case 127059:
    {
        returnValue = F("Güldenwerther Bahnhofstr.");
        break;
    }
    case 127060:
    {
        returnValue = F("Güldenwinkel");
        break;
    }
    case 127061:
    {
        returnValue = F("Gülder Weg");
        break;
    }
    case 127062:
    {
        returnValue = F("Güldigstr.");
        break;
    }
    case 127063:
    {
        returnValue = F("Güldnerstr.");
        break;
    }
    case 127064:
    {
        returnValue = F("Güldnerweg");
        break;
    }
    case 127065:
    {
        returnValue = F("Gülichstr.");
        break;
    }
    case 127066:
    {
        returnValue = F("Gülitzer Str.");
        break;
    }
    case 127067:
    {
        returnValue = F("Gülixweg");
        break;
    }
    case 127068:
    {
        returnValue = F("Güllesheimer Weg");
        break;
    }
    case 127069:
    {
        returnValue = F("Güllgasse");
        break;
    }
    case 127070:
    {
        returnValue = F("Güllstr.");
        break;
    }
    case 127071:
    {
        returnValue = F("Gülper Hauptstr.");
        break;
    }
    case 127072:
    {
        returnValue = F("Gülser Str.");
        break;
    }
    case 127073:
    {
        returnValue = F("Gülshof");
        break;
    }
    case 127074:
    {
        returnValue = F("Gülthausstr.");
        break;
    }
    case 127075:
    {
        returnValue = F("Gülthofgasse");
        break;
    }
    case 127076:
    {
        returnValue = F("Gültlinger Str.");
        break;
    }
    case 127077:
    {
        returnValue = F("Gültlinger Weg");
        break;
    }
    case 127078:
    {
        returnValue = F("Gültlingsweg");
        break;
    }
    case 127079:
    {
        returnValue = F("Gültsteiner Planie");
        break;
    }
    case 127080:
    {
        returnValue = F("Gültsteiner Str.");
        break;
    }
    case 127081:
    {
        returnValue = F("Gülzauer Weg");
        break;
    }
    case 127082:
    {
        returnValue = F("Gülzer Weg");
        break;
    }
    case 127083:
    {
        returnValue = F("Gülzow Dorf");
        break;
    }
    case 127084:
    {
        returnValue = F("Gülzow Parkanlage");
        break;
    }
    case 127085:
    {
        returnValue = F("Gülzower Damm");
        break;
    }
    case 127086:
    {
        returnValue = F("Gülzower Str.");
        break;
    }
    case 127087:
    {
        returnValue = F("Gülzower Weg");
        break;
    }
    case 127088:
    {
        returnValue = F("Gülzowshof");
        break;
    }
    case 127089:
    {
        returnValue = F("Gümbel Weg");
        break;
    }
    case 127090:
    {
        returnValue = F("Gümbelstr.");
        break;
    }
    case 127091:
    {
        returnValue = F("Gümmerdamm");
        break;
    }
    case 127092:
    {
        returnValue = F("Gümmerskamp");
        break;
    }
    case 127093:
    {
        returnValue = F("Gümpelesgasse");
        break;
    }
    case 127094:
    {
        returnValue = F("Gümpelhof");
        break;
    }
    case 127095:
    {
        returnValue = F("Günchinger Str.");
        break;
    }
    case 127096:
    {
        returnValue = F("Gündelbacher Str.");
        break;
    }
    case 127097:
    {
        returnValue = F("Gündelbacher Weg");
        break;
    }
    case 127098:
    {
        returnValue = F("Gündenhausen");
        break;
    }
    case 127099:
    {
        returnValue = F("Günderodestr.");
        break;
    }
    case 127100:
    {
        returnValue = F("Gündersbach");
        break;
    }
    case 127101:
    {
        returnValue = F("Gündigsträßle");
        break;
    }
    case 127102:
    {
        returnValue = F("Gündinger Weg");
        break;
    }
    case 127103:
    {
        returnValue = F("Gündlensbachweg");
        break;
    }
    case 127104:
    {
        returnValue = F("Gündlinger Str.");
        break;
    }
    case 127105:
    {
        returnValue = F("Gündlingerstr.");
        break;
    }
    case 127106:
    {
        returnValue = F("Gündringer Str.");
        break;
    }
    case 127107:
    {
        returnValue = F("Güner Weg");
        break;
    }
    case 127108:
    {
        returnValue = F("Günksberg");
        break;
    }
    case 127109:
    {
        returnValue = F("Günne");
        break;
    }
    case 127110:
    {
        returnValue = F("Günnekamp");
        break;
    }
    case 127111:
    {
        returnValue = F("Günnels Heuweg");
        break;
    }
    case 127112:
    {
        returnValue = F("Günnelsweg");
        break;
    }
    case 127113:
    {
        returnValue = F("Günnenbacher Str.");
        break;
    }
    case 127114:
    {
        returnValue = F("Günnende");
        break;
    }
    case 127115:
    {
        returnValue = F("Günnenfelde");
        break;
    }
    case 127116:
    {
        returnValue = F("Günnenfelder Weg");
        break;
    }
    case 127117:
    {
        returnValue = F("Günnenweg");
        break;
    }
    case 127118:
    {
        returnValue = F("Günner Str.");
        break;
    }
    case 127119:
    {
        returnValue = F("Günnersdorfer Str.");
        break;
    }
    case 127120:
    {
        returnValue = F("Günnetsmättle");
        break;
    }
    case 127121:
    {
        returnValue = F("Günneweg");
        break;
    }
    case 127122:
    {
        returnValue = F("Günnigfelder Str.");
        break;
    }
    case 127123:
    {
        returnValue = F("Günninghauser Str.");
        break;
    }
    case 127124:
    {
        returnValue = F("Günsbacher Str.");
        break;
    }
    case 127125:
    {
        returnValue = F("Günsbachweg");
        break;
    }
    case 127126:
    {
        returnValue = F("Günsberg");
        break;
    }
    case 127127:
    {
        returnValue = F("Günsdorfer Weg");
        break;
    }
    case 127128:
    {
        returnValue = F("Günselstr.");
        break;
    }
    case 127129:
    {
        returnValue = F("Günselweg");
        break;
    }
    case 127130:
    {
        returnValue = F("Günsen");
        break;
    }
    case 127131:
    {
        returnValue = F("Günser Schlade");
        break;
    }
    case 127132:
    {
        returnValue = F("Günsestr.");
        break;
    }
    case 127133:
    {
        returnValue = F("Günstedter Str.");
        break;
    }
    case 127134:
    {
        returnValue = F("Günsterbergstr.");
        break;
    }
    case 127135:
    {
        returnValue = F("Günsteröder Str.");
        break;
    }
    case 127136:
    {
        returnValue = F("Güntenbecke");
        break;
    }
    case 127137:
    {
        returnValue = F("Günter Leuken Weg");
        break;
    }
    case 127138:
    {
        returnValue = F("Günter Liebich Weg");
        break;
    }
    case 127139:
    {
        returnValue = F("Günter-Altenburg-Weg");
        break;
    }
    case 127140:
    {
        returnValue = F("Günter-Bankmann-Steg");
        break;
    }
    case 127141:
    {
        returnValue = F("Günter-Bauer-Str.");
        break;
    }
    case 127142:
    {
        returnValue = F("Günter-Boas-Str.");
        break;
    }
    case 127143:
    {
        returnValue = F("Günter-Boller-Weg");
        break;
    }
    case 127144:
    {
        returnValue = F("Günter-Diederichs-Str.");
        break;
    }
    case 127145:
    {
        returnValue = F("Günter-Eich-Str.");
        break;
    }
    case 127146:
    {
        returnValue = F("Günter-Gottlebe-Str.");
        break;
    }
    case 127147:
    {
        returnValue = F("Günter-Grass-Weg");
        break;
    }
    case 127148:
    {
        returnValue = F("Günter-Groenhoff-Str.");
        break;
    }
    case 127149:
    {
        returnValue = F("Günter-Harder-Ring");
        break;
    }
    case 127150:
    {
        returnValue = F("Günter-Hartenstein-Str.");
        break;
    }
    case 127151:
    {
        returnValue = F("Günter-Haußmann-Str.");
        break;
    }
    case 127152:
    {
        returnValue = F("Günter-Heinemann-Str.");
        break;
    }
    case 127153:
    {
        returnValue = F("Günter-Henrich-Weg");
        break;
    }
    case 127154:
    {
        returnValue = F("Günter-Hetmank-Weg");
        break;
    }
    case 127155:
    {
        returnValue = F("Günter-Jakobs-Str.");
        break;
    }
    case 127156:
    {
        returnValue = F("Günter-Junkes-Str.");
        break;
    }
    case 127157:
    {
        returnValue = F("Günter-Kleine-Str.");
        break;
    }
    case 127158:
    {
        returnValue = F("Günter-Kock-Allee");
        break;
    }
    case 127159:
    {
        returnValue = F("Günter-Köppe-Weg");
        break;
    }
    case 127160:
    {
        returnValue = F("Günter-Mayr-Weg");
        break;
    }
    case 127161:
    {
        returnValue = F("Günter-Neurohr-Brücke");
        break;
    }
    case 127162:
    {
        returnValue = F("Günter-Rackwitz-Weg");
        break;
    }
    case 127163:
    {
        returnValue = F("Günter-Raphael-Str.");
        break;
    }
    case 127164:
    {
        returnValue = F("Günter-Rehse-Weg");
        break;
    }
    case 127165:
    {
        returnValue = F("Günter-Remien-Ring");
        break;
    }
    case 127166:
    {
        returnValue = F("Günter-Remien-Weg");
        break;
    }
    case 127167:
    {
        returnValue = F("Günter-Rode-Weg");
        break;
    }
    case 127168:
    {
        returnValue = F("Günter-Rühle-Platz");
        break;
    }
    case 127169:
    {
        returnValue = F("Günter-Weißflog-Weg");
        break;
    }
    case 127170:
    {
        returnValue = F("Günter-Wiebke-Str.");
        break;
    }
    case 127171:
    {
        returnValue = F("Günter-Wuckel-Str.");
        break;
    }
    case 127172:
    {
        returnValue = F("Günter-Wüllner-Str.");
        break;
    }
    case 127173:
    {
        returnValue = F("Günterau");
        break;
    }
    case 127174:
    {
        returnValue = F("Günteringer Str.");
        break;
    }
    case 127175:
    {
        returnValue = F("Günteroder Str.");
        break;
    }
    case 127176:
    {
        returnValue = F("Günteroder Weg");
        break;
    }
    case 127177:
    {
        returnValue = F("Güntersberg");
        break;
    }
    case 127178:
    {
        returnValue = F("Güntersberger Stolberger Stadtweg");
        break;
    }
    case 127179:
    {
        returnValue = F("Güntersberger Str.");
        break;
    }
    case 127180:
    {
        returnValue = F("Günterscheider Str.");
        break;
    }
    case 127181:
    {
        returnValue = F("Güntersgasse");
        break;
    }
    case 127182:
    {
        returnValue = F("Güntersgärtchen");
        break;
    }
    case 127183:
    {
        returnValue = F("Güntersholz");
        break;
    }
    case 127184:
    {
        returnValue = F("Güntershöhe");
        break;
    }
    case 127185:
    {
        returnValue = F("Günterslebener Str.");
        break;
    }
    case 127186:
    {
        returnValue = F("Günterslohe");
        break;
    }
    case 127187:
    {
        returnValue = F("Güntersteiner Weg");
        break;
    }
    case 127188:
    {
        returnValue = F("Güntersthal");
        break;
    }
    case 127189:
    {
        returnValue = F("Günterstr.");
        break;
    }
    case 127190:
    {
        returnValue = F("Günteröder Str.");
        break;
    }
    case 127191:
    {
        returnValue = F("Günther Bethke Weg");
        break;
    }
    case 127192:
    {
        returnValue = F("Günther-Bischoff-Platz");
        break;
    }
    case 127193:
    {
        returnValue = F("Günther-Caracciola-Str.");
        break;
    }
    case 127194:
    {
        returnValue = F("Günther-Detert-Str.");
        break;
    }
    case 127195:
    {
        returnValue = F("Günther-Erhorn-Str.");
        break;
    }
    case 127196:
    {
        returnValue = F("Günther-Fielmann-Platz");
        break;
    }
    case 127197:
    {
        returnValue = F("Günther-Grass-Str.");
        break;
    }
    case 127198:
    {
        returnValue = F("Günther-Grell-Ring");
        break;
    }
    case 127199:
    {
        returnValue = F("Günther-Hepp-Str.");
        break;
    }
    case 127200:
    {
        returnValue = F("Günther-Hinnenthal-Str.");
        break;
    }
    case 127201:
    {
        returnValue = F("Günther-Hochgartz-Ring");
        break;
    }
    case 127202:
    {
        returnValue = F("Günther-Irmscher-Str.");
        break;
    }
    case 127203:
    {
        returnValue = F("Günther-Kluß-Weg");
        break;
    }
    case 127204:
    {
        returnValue = F("Günther-Koch-Str.");
        break;
    }
    case 127205:
    {
        returnValue = F("Günther-Kuhlke-Str.");
        break;
    }
    case 127206:
    {
        returnValue = F("Günther-Lauffs-Promenade");
        break;
    }
    case 127207:
    {
        returnValue = F("Günther-Laukien-Str.");
        break;
    }
    case 127208:
    {
        returnValue = F("Günther-Mayr-Str.");
        break;
    }
    case 127209:
    {
        returnValue = F("Günther-Mayr-Weg");
        break;
    }
    case 127210:
    {
        returnValue = F("Günther-Peill-Str.");
        break;
    }
    case 127211:
    {
        returnValue = F("Günther-Peters-Str.");
        break;
    }
    case 127212:
    {
        returnValue = F("Günther-Prien-Str.");
        break;
    }
    case 127213:
    {
        returnValue = F("Günther-Röhl-Str.");
        break;
    }
    case 127214:
    {
        returnValue = F("Günther-Scharowsky-Str.");
        break;
    }
    case 127215:
    {
        returnValue = F("Günther-Stecklum-Str.");
        break;
    }
    case 127216:
    {
        returnValue = F("Günther-Strube-Weg");
        break;
    }
    case 127217:
    {
        returnValue = F("Günther-Stumpe-Weg");
        break;
    }
    case 127218:
    {
        returnValue = F("Günther-Tietjen-Ring");
        break;
    }
    case 127219:
    {
        returnValue = F("Günther-Weber-Str.");
        break;
    }
    case 127220:
    {
        returnValue = F("Günther-Weisenborn-Str.");
        break;
    }
    case 127221:
    {
        returnValue = F("Günther-Ziehl-Str.");
        break;
    }
    case 127222:
    {
        returnValue = F("Günther-Zöller-Weg");
        break;
    }
    case 127223:
    {
        returnValue = F("Günther-von-Maltzahn-Str.");
        break;
    }
    case 127224:
    {
        returnValue = F("Güntherallee");
        break;
    }
    case 127225:
    {
        returnValue = F("Güntherberg");
        break;
    }
    case 127226:
    {
        returnValue = F("Günthergasse");
        break;
    }
    case 127227:
    {
        returnValue = F("Güntheritzer Str.");
        break;
    }
    case 127228:
    {
        returnValue = F("Günthers Gasse");
        break;
    }
    case 127229:
    {
        returnValue = F("Günthersbühler Hauptstr.");
        break;
    }
    case 127230:
    {
        returnValue = F("Günthersbühler Str.");
        break;
    }
    case 127231:
    {
        returnValue = F("Günthersbühler Weg");
        break;
    }
    case 127232:
    {
        returnValue = F("Günthersdorf");
        break;
    }
    case 127233:
    {
        returnValue = F("Günthersgasse");
        break;
    }
    case 127234:
    {
        returnValue = F("Günthersgraben");
        break;
    }
    case 127235:
    {
        returnValue = F("Günthersleber Str.");
        break;
    }
    case 127236:
    {
        returnValue = F("Günthersstr.");
        break;
    }
    case 127237:
    {
        returnValue = F("Güntherstr.");
        break;
    }
    case 127238:
    {
        returnValue = F("Günthersweiherweg");
        break;
    }
    case 127239:
    {
        returnValue = F("Güntherweg");
        break;
    }
    case 127240:
    {
        returnValue = F("Güntsiet");
        break;
    }
    case 127241:
    {
        returnValue = F("Güntterstr.");
        break;
    }
    case 127242:
    {
        returnValue = F("Güntzelstr.");
        break;
    }
    case 127243:
    {
        returnValue = F("Günzacher Str.");
        break;
    }
    case 127244:
    {
        returnValue = F("Günzblick");
        break;
    }
    case 127245:
    {
        returnValue = F("Günzburger Str.");
        break;
    }
    case 127246:
    {
        returnValue = F("Günzelburgstr.");
        break;
    }
    case 127247:
    {
        returnValue = F("Günzelham");
        break;
    }
    case 127248:
    {
        returnValue = F("Günzelweg");
        break;
    }
    case 127249:
    {
        returnValue = F("Günzenhausener Str.");
        break;
    }
    case 127250:
    {
        returnValue = F("Günzenhauser Str.");
        break;
    }
    case 127251:
    {
        returnValue = F("Günzenhofen");
        break;
    }
    case 127252:
    {
        returnValue = F("Günzer Str.");
        break;
    }
    case 127253:
    {
        returnValue = F("Günzer Weg");
        break;
    }
    case 127254:
    {
        returnValue = F("Günzersreuth");
        break;
    }
    case 127255:
    {
        returnValue = F("Günzeröder Hauptstr.");
        break;
    }
    case 127256:
    {
        returnValue = F("Günzeröder Str.");
        break;
    }
    case 127257:
    {
        returnValue = F("Günzkofer Str.");
        break;
    }
    case 127258:
    {
        returnValue = F("Günzsiedlung");
        break;
    }
    case 127259:
    {
        returnValue = F("Günzstr.");
        break;
    }
    case 127260:
    {
        returnValue = F("Günztalblick");
        break;
    }
    case 127261:
    {
        returnValue = F("Günztalradweg Umleitung");
        break;
    }
    case 127262:
    {
        returnValue = F("Günztalstr.");
        break;
    }
    case 127263:
    {
        returnValue = F("Günzweg");
        break;
    }
    case 127264:
    {
        returnValue = F("Gürather Str.");
        break;
    }
    case 127265:
    {
        returnValue = F("Gürgele");
        break;
    }
    case 127266:
    {
        returnValue = F("Güritzer Weg");
        break;
    }
    case 127267:
    {
        returnValue = F("Gürrelstr.");
        break;
    }
    case 127268:
    {
        returnValue = F("Gürtelstr.");
        break;
    }
    case 127269:
    {
        returnValue = F("Gürtelweg");
        break;
    }
    case 127270:
    {
        returnValue = F("Gürtenau");
        break;
    }
    case 127271:
    {
        returnValue = F("Gürther Str.");
        break;
    }
    case 127272:
    {
        returnValue = F("Gürther Weg");
        break;
    }
    case 127273:
    {
        returnValue = F("Gürtlergasse");
        break;
    }
    case 127274:
    {
        returnValue = F("Gürtlerstr.");
        break;
    }
    case 127275:
    {
        returnValue = F("Gürtlerweg");
        break;
    }
    case 127276:
    {
        returnValue = F("Gürzelweg");
        break;
    }
    case 127277:
    {
        returnValue = F("Gürzenicher Str.");
        break;
    }
    case 127278:
    {
        returnValue = F("Güsener Str.");
        break;
    }
    case 127279:
    {
        returnValue = F("Güsenweg");
        break;
    }
    case 127280:
    {
        returnValue = F("Güssefelder Achterstr.");
        break;
    }
    case 127281:
    {
        returnValue = F("Güssefelder Dorfstr.");
        break;
    }
    case 127282:
    {
        returnValue = F("Güsseldorfer Str.");
        break;
    }
    case 127283:
    {
        returnValue = F("Güssenholzsträßchen");
        break;
    }
    case 127284:
    {
        returnValue = F("Güssenholzweg");
        break;
    }
    case 127285:
    {
        returnValue = F("Güssenstr.");
        break;
    }
    case 127286:
    {
        returnValue = F("Güssübelstr.");
        break;
    }
    case 127287:
    {
        returnValue = F("Güstauer Str.");
        break;
    }
    case 127288:
    {
        returnValue = F("Güstebieser Loose");
        break;
    }
    case 127289:
    {
        returnValue = F("Güstelitz");
        break;
    }
    case 127290:
    {
        returnValue = F("Güstelitzer Str.");
        break;
    }
    case 127291:
    {
        returnValue = F("Güstenbrook");
        break;
    }
    case 127292:
    {
        returnValue = F("Güstener Allee");
        break;
    }
    case 127293:
    {
        returnValue = F("Güstener Chaussee");
        break;
    }
    case 127294:
    {
        returnValue = F("Güstener Str.");
        break;
    }
    case 127295:
    {
        returnValue = F("Güstener Weg");
        break;
    }
    case 127296:
    {
        returnValue = F("Güsterer Str.");
        break;
    }
    case 127297:
    {
        returnValue = F("Güsterer Weg");
        break;
    }
    case 127298:
    {
        returnValue = F("Güstfenner Str.");
        break;
    }
    case 127299:
    {
        returnValue = F("Güsthohn");
        break;
    }
    case 127300:
    {
        returnValue = F("Güstow");
        break;
    }
    case 127301:
    {
        returnValue = F("Güstow Werder");
        break;
    }
    case 127302:
    {
        returnValue = F("Güstower Str.");
        break;
    }
    case 127303:
    {
        returnValue = F("Güstower Weg");
        break;
    }
    case 127304:
    {
        returnValue = F("Güstritzer Rundling");
        break;
    }
    case 127305:
    {
        returnValue = F("Güstrower Chaussee");
        break;
    }
    case 127306:
    {
        returnValue = F("Güstrower Landstr.");
        break;
    }
    case 127307:
    {
        returnValue = F("Güstrower Landweg");
        break;
    }
    case 127308:
    {
        returnValue = F("Güstrower Str.");
        break;
    }
    case 127309:
    {
        returnValue = F("Güstrower Weg");
        break;
    }
    case 127310:
    {
        returnValue = F("Güstweider Weg");
        break;
    }
    case 127311:
    {
        returnValue = F("Gütchen");
        break;
    }
    case 127312:
    {
        returnValue = F("Gütchenweg");
        break;
    }
    case 127313:
    {
        returnValue = F("Gütebohlweg");
        break;
    }
    case 127314:
    {
        returnValue = F("Gütelhofen");
        break;
    }
    case 127315:
    {
        returnValue = F("Gütenland");
        break;
    }
    case 127316:
    {
        returnValue = F("Güterbahnhof");
        break;
    }
    case 127317:
    {
        returnValue = F("Güterbahnhofstr.");
        break;
    }
    case 127318:
    {
        returnValue = F("Güterberg");
        break;
    }
    case 127319:
    {
        returnValue = F("Güterberger Weg");
        break;
    }
    case 127320:
    {
        returnValue = F("Güterbodenstr.");
        break;
    }
    case 127321:
    {
        returnValue = F("Güterfelder Damm");
        break;
    }
    case 127322:
    {
        returnValue = F("Güterfelder Str.");
        break;
    }
    case 127323:
    {
        returnValue = F("Güterglücker Str.");
        break;
    }
    case 127324:
    {
        returnValue = F("Gütergotzer Weg");
        break;
    }
    case 127325:
    {
        returnValue = F("Güterhallenstr.");
        break;
    }
    case 127326:
    {
        returnValue = F("Güterhallenweg");
        break;
    }
    case 127327:
    {
        returnValue = F("Güterhofstr.");
        break;
    }
    case 127328:
    {
        returnValue = F("Güterreihe");
        break;
    }
    case 127329:
    {
        returnValue = F("Gütersbachweg");
        break;
    }
    case 127330:
    {
        returnValue = F("Gütersbergstr.");
        break;
    }
    case 127331:
    {
        returnValue = F("Gütersdorf");
        break;
    }
    case 127332:
    {
        returnValue = F("Gütersloher Str.");
        break;
    }
    case 127333:
    {
        returnValue = F("Güterstr.");
        break;
    }
    case 127334:
    {
        returnValue = F("Güterweg");
        break;
    }
    case 127335:
    {
        returnValue = F("Güthelweg");
        break;
    }
    case 127336:
    {
        returnValue = F("Güthlerstr.");
        break;
    }
    case 127337:
    {
        returnValue = F("Güthstr.");
        break;
    }
    case 127338:
    {
        returnValue = F("Gütighofen");
        break;
    }
    case 127339:
    {
        returnValue = F("Gütlbauerweg");
        break;
    }
    case 127340:
    {
        returnValue = F("Gütle");
        break;
    }
    case 127341:
    {
        returnValue = F("Gütleackerstr.");
        break;
    }
    case 127342:
    {
        returnValue = F("Gütleinsweg");
        break;
    }
    case 127343:
    {
        returnValue = F("Gütlestr.");
        break;
    }
    case 127344:
    {
        returnValue = F("Gütleweg");
        break;
    }
    case 127345:
    {
        returnValue = F("Gütlstr.");
        break;
    }
    case 127346:
    {
        returnValue = F("Gütschowstr.");
        break;
    }
    case 127347:
    {
        returnValue = F("Gütsmerstr.");
        break;
    }
    case 127348:
    {
        returnValue = F("Güttenberger Str.");
        break;
    }
    case 127349:
    {
        returnValue = F("Güttenhausen");
        break;
    }
    case 127350:
    {
        returnValue = F("Gütterlitz");
        break;
    }
    case 127351:
    {
        returnValue = F("Gütterner Str.");
        break;
    }
    case 127352:
    {
        returnValue = F("Güttersbacher Str.");
        break;
    }
    case 127353:
    {
        returnValue = F("Güttersbacher Weg");
        break;
    }
    case 127354:
    {
        returnValue = F("Gütteweg");
        break;
    }
    case 127355:
    {
        returnValue = F("Güttgeshof");
        break;
    }
    case 127356:
    {
        returnValue = F("Güttigheim");
        break;
    }
    case 127357:
    {
        returnValue = F("Güttin");
        break;
    }
    case 127358:
    {
        returnValue = F("Güttinger Dorfplatz");
        break;
    }
    case 127359:
    {
        returnValue = F("Güttinger Str.");
        break;
    }
    case 127360:
    {
        returnValue = F("Güttlerweg");
        break;
    }
    case 127361:
    {
        returnValue = F("Güttloh");
        break;
    }
    case 127362:
    {
        returnValue = F("Gützenberg");
        break;
    }
    case 127363:
    {
        returnValue = F("Gützenrather Bruch");
        break;
    }
    case 127364:
    {
        returnValue = F("Gützenrather Weg");
        break;
    }
    case 127365:
    {
        returnValue = F("Gützer Höhe");
        break;
    }
    case 127366:
    {
        returnValue = F("Gützer Str.");
        break;
    }
    case 127367:
    {
        returnValue = F("Gützinger Weg");
        break;
    }
    case 127368:
    {
        returnValue = F("Gützkower Landstr.");
        break;
    }
    case 127369:
    {
        returnValue = F("Gützkower Ring");
        break;
    }
    case 127370:
    {
        returnValue = F("Gützkower Str.");
        break;
    }
    case 127371:
    {
        returnValue = F("Gützlaffshagen");
        break;
    }
    case 127372:
    {
        returnValue = F("Güßgraben");
        break;
    }
    case 127373:
    {
        returnValue = F("Güßhübel");
        break;
    }
    }
    return returnValue;
}
