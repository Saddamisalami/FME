#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameB4(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 70007:
    {
        returnValue = F("Bürgermeister-Gierl-Str.");
        break;
    }
    case 70008:
    {
        returnValue = F("Bürgermeister-Gießbeck-Str.");
        break;
    }
    case 70009:
    {
        returnValue = F("Bürgermeister-Glade-Str.");
        break;
    }
    case 70010:
    {
        returnValue = F("Bürgermeister-Glatz-Str.");
        break;
    }
    case 70011:
    {
        returnValue = F("Bürgermeister-Goetz-Str.");
        break;
    }
    case 70012:
    {
        returnValue = F("Bürgermeister-Golz-Platz");
        break;
    }
    case 70013:
    {
        returnValue = F("Bürgermeister-Grabmeier-Str.");
        break;
    }
    case 70014:
    {
        returnValue = F("Bürgermeister-Graf-Ring");
        break;
    }
    case 70015:
    {
        returnValue = F("Bürgermeister-Graf-Str.");
        break;
    }
    case 70016:
    {
        returnValue = F("Bürgermeister-Grandauer-Str.");
        break;
    }
    case 70017:
    {
        returnValue = F("Bürgermeister-Granich-Weg");
        break;
    }
    case 70018:
    {
        returnValue = F("Bürgermeister-Gremmer-Str.");
        break;
    }
    case 70019:
    {
        returnValue = F("Bürgermeister-Grenzebach-Str.");
        break;
    }
    case 70020:
    {
        returnValue = F("Bürgermeister-Gretschmann-Str.");
        break;
    }
    case 70021:
    {
        returnValue = F("Bürgermeister-Grichter-Str.");
        break;
    }
    case 70022:
    {
        returnValue = F("Bürgermeister-Grob-Str.");
        break;
    }
    case 70023:
    {
        returnValue = F("Bürgermeister-Gropp-Str.");
        break;
    }
    case 70024:
    {
        returnValue = F("Bürgermeister-Grothmann-Weg");
        break;
    }
    case 70025:
    {
        returnValue = F("Bürgermeister-Groß-Str.");
        break;
    }
    case 70026:
    {
        returnValue = F("Bürgermeister-Grube-Str.");
        break;
    }
    case 70027:
    {
        returnValue = F("Bürgermeister-Gruber-Str.");
        break;
    }
    case 70028:
    {
        returnValue = F("Bürgermeister-Grundkötter-Weg");
        break;
    }
    case 70029:
    {
        returnValue = F("Bürgermeister-Gruner-Str.");
        break;
    }
    case 70030:
    {
        returnValue = F("Bürgermeister-Grässmann-Str.");
        break;
    }
    case 70031:
    {
        returnValue = F("Bürgermeister-Gröne-Str.");
        break;
    }
    case 70032:
    {
        returnValue = F("Bürgermeister-Grüner-Str.");
        break;
    }
    case 70033:
    {
        returnValue = F("Bürgermeister-Grüning-Str.");
        break;
    }
    case 70034:
    {
        returnValue = F("Bürgermeister-Gschwilm-Str.");
        break;
    }
    case 70035:
    {
        returnValue = F("Bürgermeister-Gustav-Erhorn-Str.");
        break;
    }
    case 70036:
    {
        returnValue = F("Bürgermeister-Gustl-Fürst-Str.");
        break;
    }
    case 70037:
    {
        returnValue = F("Bürgermeister-Gutzeit-Weg");
        break;
    }
    case 70038:
    {
        returnValue = F("Bürgermeister-Göhringer-Str.");
        break;
    }
    case 70039:
    {
        returnValue = F("Bürgermeister-Götz-Str.");
        break;
    }
    case 70040:
    {
        returnValue = F("Bürgermeister-Haas-Weg");
        break;
    }
    case 70041:
    {
        returnValue = F("Bürgermeister-Haberl-Str.");
        break;
    }
    case 70042:
    {
        returnValue = F("Bürgermeister-Haff-Str.");
        break;
    }
    case 70043:
    {
        returnValue = F("Bürgermeister-Haffner-Str.");
        break;
    }
    case 70044:
    {
        returnValue = F("Bürgermeister-Hafner-Str.");
        break;
    }
    case 70045:
    {
        returnValue = F("Bürgermeister-Hagemann-Weg");
        break;
    }
    case 70046:
    {
        returnValue = F("Bürgermeister-Hagl-Str.");
        break;
    }
    case 70047:
    {
        returnValue = F("Bürgermeister-Haidacher-Str.");
        break;
    }
    case 70048:
    {
        returnValue = F("Bürgermeister-Haide-Str.");
        break;
    }
    case 70049:
    {
        returnValue = F("Bürgermeister-Hailer-Str.");
        break;
    }
    case 70050:
    {
        returnValue = F("Bürgermeister-Hainz-Str.");
        break;
    }
    case 70051:
    {
        returnValue = F("Bürgermeister-Haisch-Str.");
        break;
    }
    case 70052:
    {
        returnValue = F("Bürgermeister-Haller-Str.");
        break;
    }
    case 70053:
    {
        returnValue = F("Bürgermeister-Haller-Weg");
        break;
    }
    case 70054:
    {
        returnValue = F("Bürgermeister-Handelshauser-Str.");
        break;
    }
    case 70055:
    {
        returnValue = F("Bürgermeister-Hans-Kraus-Str.");
        break;
    }
    case 70056:
    {
        returnValue = F("Bürgermeister-Hans-Kuffer-Park");
        break;
    }
    case 70057:
    {
        returnValue = F("Bürgermeister-Hans-Lämmermann-Platz");
        break;
    }
    case 70058:
    {
        returnValue = F("Bürgermeister-Hans-Schemela-Str.");
        break;
    }
    case 70059:
    {
        returnValue = F("Bürgermeister-Hans-Tauber-Weg");
        break;
    }
    case 70060:
    {
        returnValue = F("Bürgermeister-Hansen-Weg");
        break;
    }
    case 70061:
    {
        returnValue = F("Bürgermeister-Harms-Ensink-Str.");
        break;
    }
    case 70062:
    {
        returnValue = F("Bürgermeister-Harriehausen-Weg");
        break;
    }
    case 70063:
    {
        returnValue = F("Bürgermeister-Hartl-Str.");
        break;
    }
    case 70064:
    {
        returnValue = F("Bürgermeister-Hartmann-Str.");
        break;
    }
    case 70065:
    {
        returnValue = F("Bürgermeister-Hasberg-Str.");
        break;
    }
    case 70066:
    {
        returnValue = F("Bürgermeister-Hasel-Str.");
        break;
    }
    case 70067:
    {
        returnValue = F("Bürgermeister-Hasselhoff-Str.");
        break;
    }
    case 70068:
    {
        returnValue = F("Bürgermeister-Hatzold-Str.");
        break;
    }
    case 70069:
    {
        returnValue = F("Bürgermeister-Hauffe-Weg");
        break;
    }
    case 70070:
    {
        returnValue = F("Bürgermeister-Haupt-Str.");
        break;
    }
    case 70071:
    {
        returnValue = F("Bürgermeister-Hausmann-Str.");
        break;
    }
    case 70072:
    {
        returnValue = F("Bürgermeister-Heber-Str.");
        break;
    }
    case 70073:
    {
        returnValue = F("Bürgermeister-Heckner-Str.");
        break;
    }
    case 70074:
    {
        returnValue = F("Bürgermeister-Heidenreich-Str.");
        break;
    }
    case 70075:
    {
        returnValue = F("Bürgermeister-Heinlein-Str.");
        break;
    }
    case 70076:
    {
        returnValue = F("Bürgermeister-Heinrich-Braun-Weg");
        break;
    }
    case 70077:
    {
        returnValue = F("Bürgermeister-Heinrich-Str.");
        break;
    }
    case 70078:
    {
        returnValue = F("Bürgermeister-Heins-Str.");
        break;
    }
    case 70079:
    {
        returnValue = F("Bürgermeister-Heinzlmeir-Weg");
        break;
    }
    case 70080:
    {
        returnValue = F("Bürgermeister-Heise-Str.");
        break;
    }
    case 70081:
    {
        returnValue = F("Bürgermeister-Heitmann-Str.");
        break;
    }
    case 70082:
    {
        returnValue = F("Bürgermeister-Heldman-Str.");
        break;
    }
    case 70083:
    {
        returnValue = F("Bürgermeister-Helmling-Str.");
        break;
    }
    case 70084:
    {
        returnValue = F("Bürgermeister-Hengeler-Str.");
        break;
    }
    case 70085:
    {
        returnValue = F("Bürgermeister-Henke-Str.");
        break;
    }
    case 70086:
    {
        returnValue = F("Bürgermeister-Henn-Str.");
        break;
    }
    case 70087:
    {
        returnValue = F("Bürgermeister-Hennings-Str.");
        break;
    }
    case 70088:
    {
        returnValue = F("Bürgermeister-Hensen-Weg");
        break;
    }
    case 70089:
    {
        returnValue = F("Bürgermeister-Herb-Str.");
        break;
    }
    case 70090:
    {
        returnValue = F("Bürgermeister-Hergenhan-Str.");
        break;
    }
    case 70091:
    {
        returnValue = F("Bürgermeister-Herklotz-Str.");
        break;
    }
    case 70092:
    {
        returnValue = F("Bürgermeister-Hermann-Hofmann-Str.");
        break;
    }
    case 70093:
    {
        returnValue = F("Bürgermeister-Hermann-Meyer-Platz");
        break;
    }
    case 70094:
    {
        returnValue = F("Bürgermeister-Hermann-Schmidt-Weg");
        break;
    }
    case 70095:
    {
        returnValue = F("Bürgermeister-Hermanns-Str.");
        break;
    }
    case 70096:
    {
        returnValue = F("Bürgermeister-Hermannsdörfer-Str.");
        break;
    }
    case 70097:
    {
        returnValue = F("Bürgermeister-Herold-Str.");
        break;
    }
    case 70098:
    {
        returnValue = F("Bürgermeister-Herpich-Str.");
        break;
    }
    case 70099:
    {
        returnValue = F("Bürgermeister-Herreiner-Str.");
        break;
    }
    case 70100:
    {
        returnValue = F("Bürgermeister-Hertlein-Str.");
        break;
    }
    case 70101:
    {
        returnValue = F("Bürgermeister-Herz-Platz");
        break;
    }
    case 70102:
    {
        returnValue = F("Bürgermeister-Herzog-Str.");
        break;
    }
    case 70103:
    {
        returnValue = F("Bürgermeister-Hesse-Str.");
        break;
    }
    case 70104:
    {
        returnValue = F("Bürgermeister-Hettlage-Str.");
        break;
    }
    case 70105:
    {
        returnValue = F("Bürgermeister-Heukamp-Str.");
        break;
    }
    case 70106:
    {
        returnValue = F("Bürgermeister-Hey-Str.");
        break;
    }
    case 70107:
    {
        returnValue = F("Bürgermeister-Heyer-Str.");
        break;
    }
    case 70108:
    {
        returnValue = F("Bürgermeister-Hilker-Str.");
        break;
    }
    case 70109:
    {
        returnValue = F("Bürgermeister-Hindelang-Str.");
        break;
    }
    case 70110:
    {
        returnValue = F("Bürgermeister-Hinrich-Warjes-Str.");
        break;
    }
    case 70111:
    {
        returnValue = F("Bürgermeister-Hischmann-Ring");
        break;
    }
    case 70112:
    {
        returnValue = F("Bürgermeister-Hofberger-Str.");
        break;
    }
    case 70113:
    {
        returnValue = F("Bürgermeister-Hogrefe-Str.");
        break;
    }
    case 70114:
    {
        returnValue = F("Bürgermeister-Holle-Str.");
        break;
    }
    case 70115:
    {
        returnValue = F("Bürgermeister-Hollinger-Platz");
        break;
    }
    case 70116:
    {
        returnValue = F("Bürgermeister-Hollnberger-Park");
        break;
    }
    case 70117:
    {
        returnValue = F("Bürgermeister-Hollweck-Str.");
        break;
    }
    case 70118:
    {
        returnValue = F("Bürgermeister-Holst-Str.");
        break;
    }
    case 70119:
    {
        returnValue = F("Bürgermeister-Hommel-Str.");
        break;
    }
    case 70120:
    {
        returnValue = F("Bürgermeister-Horneff-Str.");
        break;
    }
    case 70121:
    {
        returnValue = F("Bürgermeister-Horst-Str.");
        break;
    }
    case 70122:
    {
        returnValue = F("Bürgermeister-Horstmann-Str.");
        break;
    }
    case 70123:
    {
        returnValue = F("Bürgermeister-Hottejan-Str.");
        break;
    }
    case 70124:
    {
        returnValue = F("Bürgermeister-Hubaleck-Str.");
        break;
    }
    case 70125:
    {
        returnValue = F("Bürgermeister-Huber-Str.");
        break;
    }
    case 70126:
    {
        returnValue = F("Bürgermeister-Huber-Weg");
        break;
    }
    case 70127:
    {
        returnValue = F("Bürgermeister-Hugl-Weg");
        break;
    }
    case 70128:
    {
        returnValue = F("Bürgermeister-Humbs-Str.");
        break;
    }
    case 70129:
    {
        returnValue = F("Bürgermeister-Hund-Str.");
        break;
    }
    case 70130:
    {
        returnValue = F("Bürgermeister-Hundegger-Str.");
        break;
    }
    case 70131:
    {
        returnValue = F("Bürgermeister-Hundseder-Str.");
        break;
    }
    case 70132:
    {
        returnValue = F("Bürgermeister-Hupfauer-Str.");
        break;
    }
    case 70133:
    {
        returnValue = F("Bürgermeister-Härth-Str.");
        break;
    }
    case 70134:
    {
        returnValue = F("Bürgermeister-Högl-Str.");
        break;
    }
    case 70135:
    {
        returnValue = F("Bürgermeister-Hölzl-Str.");
        break;
    }
    case 70136:
    {
        returnValue = F("Bürgermeister-Höppner-Str.");
        break;
    }
    case 70137:
    {
        returnValue = F("Bürgermeister-Hörl-Str.");
        break;
    }
    case 70138:
    {
        returnValue = F("Bürgermeister-Hörmann-Str.");
        break;
    }
    case 70139:
    {
        returnValue = F("Bürgermeister-Hülsemann-Weg");
        break;
    }
    case 70140:
    {
        returnValue = F("Bürgermeister-Hümmer-Str.");
        break;
    }
    case 70141:
    {
        returnValue = F("Bürgermeister-Igl-Str.");
        break;
    }
    case 70142:
    {
        returnValue = F("Bürgermeister-Immoor-Str.");
        break;
    }
    case 70143:
    {
        returnValue = F("Bürgermeister-Itzen-Str.");
        break;
    }
    case 70144:
    {
        returnValue = F("Bürgermeister-Iversen-Bogen");
        break;
    }
    case 70145:
    {
        returnValue = F("Bürgermeister-Jacob-Str.");
        break;
    }
    case 70146:
    {
        returnValue = F("Bürgermeister-Jahn-Str.");
        break;
    }
    case 70147:
    {
        returnValue = F("Bürgermeister-Jahn-Weg");
        break;
    }
    case 70148:
    {
        returnValue = F("Bürgermeister-Jakob-Karg-Str.");
        break;
    }
    case 70149:
    {
        returnValue = F("Bürgermeister-Jakob-Kübler-Weg");
        break;
    }
    case 70150:
    {
        returnValue = F("Bürgermeister-Jakob-Lämmler-Str.");
        break;
    }
    case 70151:
    {
        returnValue = F("Bürgermeister-Jantzen-Str.");
        break;
    }
    case 70152:
    {
        returnValue = F("Bürgermeister-Johann-Müller-Str.");
        break;
    }
    case 70153:
    {
        returnValue = F("Bürgermeister-Josef-Haug-Str.");
        break;
    }
    case 70154:
    {
        returnValue = F("Bürgermeister-Josef-Kirschner-Str.");
        break;
    }
    case 70155:
    {
        returnValue = F("Bürgermeister-Josef-Wittmann-Str.");
        break;
    }
    case 70156:
    {
        returnValue = F("Bürgermeister-Juister-Str.");
        break;
    }
    case 70157:
    {
        returnValue = F("Bürgermeister-Junghans-Str.");
        break;
    }
    case 70158:
    {
        returnValue = F("Bürgermeister-Jungvogel-Str.");
        break;
    }
    case 70159:
    {
        returnValue = F("Bürgermeister-Jungwirth-Str.");
        break;
    }
    case 70160:
    {
        returnValue = F("Bürgermeister-Junkers-Str.");
        break;
    }
    case 70161:
    {
        returnValue = F("Bürgermeister-Jäger-Str.");
        break;
    }
    case 70162:
    {
        returnValue = F("Bürgermeister-Jörg-Str.");
        break;
    }
    case 70163:
    {
        returnValue = F("Bürgermeister-Kahn-Str.");
        break;
    }
    case 70164:
    {
        returnValue = F("Bürgermeister-Kaifer-Str.");
        break;
    }
    case 70165:
    {
        returnValue = F("Bürgermeister-Kamhuber-Str.");
        break;
    }
    case 70166:
    {
        returnValue = F("Bürgermeister-Karl-Fritz-Str.");
        break;
    }
    case 70167:
    {
        returnValue = F("Bürgermeister-Karl-Heindtel-Str.");
        break;
    }
    case 70168:
    {
        returnValue = F("Bürgermeister-Karl-Huber-Str.");
        break;
    }
    case 70169:
    {
        returnValue = F("Bürgermeister-Karl-Zinn-Str.");
        break;
    }
    case 70170:
    {
        returnValue = F("Bürgermeister-Kassebeere-Str.");
        break;
    }
    case 70171:
    {
        returnValue = F("Bürgermeister-Kastl-Weg");
        break;
    }
    case 70172:
    {
        returnValue = F("Bürgermeister-Kattenbeck-Str.");
        break;
    }
    case 70173:
    {
        returnValue = F("Bürgermeister-Kaufmann-Platz");
        break;
    }
    case 70174:
    {
        returnValue = F("Bürgermeister-Kawalek-Str.");
        break;
    }
    case 70175:
    {
        returnValue = F("Bürgermeister-Keck-Str.");
        break;
    }
    case 70176:
    {
        returnValue = F("Bürgermeister-Keckl-Str.");
        break;
    }
    case 70177:
    {
        returnValue = F("Bürgermeister-Keis-Ring");
        break;
    }
    case 70178:
    {
        returnValue = F("Bürgermeister-Keis-Weg");
        break;
    }
    case 70179:
    {
        returnValue = F("Bürgermeister-Keisinger-Str.");
        break;
    }
    case 70180:
    {
        returnValue = F("Bürgermeister-Kemper-Str.");
        break;
    }
    case 70181:
    {
        returnValue = F("Bürgermeister-Kempf-Str.");
        break;
    }
    case 70182:
    {
        returnValue = F("Bürgermeister-Kempfle-Str.");
        break;
    }
    case 70183:
    {
        returnValue = F("Bürgermeister-Kemps-Str.");
        break;
    }
    case 70184:
    {
        returnValue = F("Bürgermeister-Kerler-Str.");
        break;
    }
    case 70185:
    {
        returnValue = F("Bürgermeister-Kermer-Weg");
        break;
    }
    case 70186:
    {
        returnValue = F("Bürgermeister-Kief-Str.");
        break;
    }
    case 70187:
    {
        returnValue = F("Bürgermeister-Kiefersauer-Str.");
        break;
    }
    case 70188:
    {
        returnValue = F("Bürgermeister-Kiener-Str.");
        break;
    }
    case 70189:
    {
        returnValue = F("Bürgermeister-Kiermeier-Str.");
        break;
    }
    case 70190:
    {
        returnValue = F("Bürgermeister-Kiesl-Str.");
        break;
    }
    case 70191:
    {
        returnValue = F("Bürgermeister-Kinder-Str.");
        break;
    }
    case 70192:
    {
        returnValue = F("Bürgermeister-Kirchberger-Str.");
        break;
    }
    case 70193:
    {
        returnValue = F("Bürgermeister-Kircher-Str.");
        break;
    }
    case 70194:
    {
        returnValue = F("Bürgermeister-Kirchheck-Str.");
        break;
    }
    case 70195:
    {
        returnValue = F("Bürgermeister-Kirchner-Str.");
        break;
    }
    case 70196:
    {
        returnValue = F("Bürgermeister-Kirsch-Anlage");
        break;
    }
    case 70197:
    {
        returnValue = F("Bürgermeister-Kissel-Weg");
        break;
    }
    case 70198:
    {
        returnValue = F("Bürgermeister-Klaußner-Str.");
        break;
    }
    case 70199:
    {
        returnValue = F("Bürgermeister-Kleinlein-Str.");
        break;
    }
    case 70200:
    {
        returnValue = F("Bürgermeister-Kleinmaier-Str.");
        break;
    }
    case 70201:
    {
        returnValue = F("Bürgermeister-Klingler-Str.");
        break;
    }
    case 70202:
    {
        returnValue = F("Bürgermeister-Kloth-Weg");
        break;
    }
    case 70203:
    {
        returnValue = F("Bürgermeister-Klute-Str.");
        break;
    }
    case 70204:
    {
        returnValue = F("Bürgermeister-Klöckner-Weg");
        break;
    }
    case 70205:
    {
        returnValue = F("Bürgermeister-Knelangen-Str.");
        break;
    }
    case 70206:
    {
        returnValue = F("Bürgermeister-Knestel-Str.");
        break;
    }
    case 70207:
    {
        returnValue = F("Bürgermeister-Knobel-Str.");
        break;
    }
    case 70208:
    {
        returnValue = F("Bürgermeister-Knoll-Str.");
        break;
    }
    case 70209:
    {
        returnValue = F("Bürgermeister-Knutzen-Weg");
        break;
    }
    case 70210:
    {
        returnValue = F("Bürgermeister-Koch-Str.");
        break;
    }
    case 70211:
    {
        returnValue = F("Bürgermeister-Kock-Str.");
        break;
    }
    case 70212:
    {
        returnValue = F("Bürgermeister-Kohröde-Str.");
        break;
    }
    case 70213:
    {
        returnValue = F("Bürgermeister-Kolb-Ring");
        break;
    }
    case 70214:
    {
        returnValue = F("Bürgermeister-Kolb-Str.");
        break;
    }
    case 70215:
    {
        returnValue = F("Bürgermeister-Konrad-Weg");
        break;
    }
    case 70216:
    {
        returnValue = F("Bürgermeister-Koopmann-Str.");
        break;
    }
    case 70217:
    {
        returnValue = F("Bürgermeister-Kopp-Str.");
        break;
    }
    case 70218:
    {
        returnValue = F("Bürgermeister-Korn-Str.");
        break;
    }
    case 70219:
    {
        returnValue = F("Bürgermeister-Korte-Weg");
        break;
    }
    case 70220:
    {
        returnValue = F("Bürgermeister-Kothmayer-Str.");
        break;
    }
    case 70221:
    {
        returnValue = F("Bürgermeister-Krach-Str.");
        break;
    }
    case 70222:
    {
        returnValue = F("Bürgermeister-Krafft-Str.");
        break;
    }
    case 70223:
    {
        returnValue = F("Bürgermeister-Krafft-Weg");
        break;
    }
    case 70224:
    {
        returnValue = F("Bürgermeister-Kraft-Str.");
        break;
    }
    case 70225:
    {
        returnValue = F("Bürgermeister-Krahn-Str.");
        break;
    }
    case 70226:
    {
        returnValue = F("Bürgermeister-Krainhöfner-Str.");
        break;
    }
    case 70227:
    {
        returnValue = F("Bürgermeister-Kraus-Str.");
        break;
    }
    case 70228:
    {
        returnValue = F("Bürgermeister-Krebs-Str.");
        break;
    }
    case 70229:
    {
        returnValue = F("Bürgermeister-Kreck-Str.");
        break;
    }
    case 70230:
    {
        returnValue = F("Bürgermeister-Kreiter-Str.");
        break;
    }
    case 70231:
    {
        returnValue = F("Bürgermeister-Kreke-Str.");
        break;
    }
    case 70232:
    {
        returnValue = F("Bürgermeister-Krose-Str.");
        break;
    }
    case 70233:
    {
        returnValue = F("Bürgermeister-Kruse-Str.");
        break;
    }
    case 70234:
    {
        returnValue = F("Bürgermeister-Kröger-Str.");
        break;
    }
    case 70235:
    {
        returnValue = F("Bürgermeister-Kuchenbaur-Str.");
        break;
    }
    case 70236:
    {
        returnValue = F("Bürgermeister-Kuhn-Str.");
        break;
    }
    case 70237:
    {
        returnValue = F("Bürgermeister-Kuner-Str.");
        break;
    }
    case 70238:
    {
        returnValue = F("Bürgermeister-Kunzmann-Weg");
        break;
    }
    case 70239:
    {
        returnValue = F("Bürgermeister-Kuppe-Weg");
        break;
    }
    case 70240:
    {
        returnValue = F("Bürgermeister-Kutscher-Str.");
        break;
    }
    case 70241:
    {
        returnValue = F("Bürgermeister-Kämmerer-Str.");
        break;
    }
    case 70242:
    {
        returnValue = F("Bürgermeister-Köhler-Str.");
        break;
    }
    case 70243:
    {
        returnValue = F("Bürgermeister-Köhler-Weg");
        break;
    }
    case 70244:
    {
        returnValue = F("Bürgermeister-Kühl-Str.");
        break;
    }
    case 70245:
    {
        returnValue = F("Bürgermeister-Kühlwein-Str.");
        break;
    }
    case 70246:
    {
        returnValue = F("Bürgermeister-Lackmaier-Str.");
        break;
    }
    case 70247:
    {
        returnValue = F("Bürgermeister-Lafrenz-Str.");
        break;
    }
    case 70248:
    {
        returnValue = F("Bürgermeister-Lamberth-Str.");
        break;
    }
    case 70249:
    {
        returnValue = F("Bürgermeister-Lampe-Str.");
        break;
    }
    case 70250:
    {
        returnValue = F("Bürgermeister-Lampl-Str.");
        break;
    }
    case 70251:
    {
        returnValue = F("Bürgermeister-Landgraf-Str.");
        break;
    }
    case 70252:
    {
        returnValue = F("Bürgermeister-Landmann-Platz");
        break;
    }
    case 70253:
    {
        returnValue = F("Bürgermeister-Landt-Str.");
        break;
    }
    case 70254:
    {
        returnValue = F("Bürgermeister-Laneus-Str.");
        break;
    }
    case 70255:
    {
        returnValue = F("Bürgermeister-Lang-Str.");
        break;
    }
    case 70256:
    {
        returnValue = F("Bürgermeister-Lange-Str.");
        break;
    }
    case 70257:
    {
        returnValue = F("Bürgermeister-Langhans-Str.");
        break;
    }
    case 70258:
    {
        returnValue = F("Bürgermeister-Langwieder-Str.");
        break;
    }
    case 70259:
    {
        returnValue = F("Bürgermeister-Lass-Weg");
        break;
    }
    case 70260:
    {
        returnValue = F("Bürgermeister-Lauter-Str.");
        break;
    }
    case 70261:
    {
        returnValue = F("Bürgermeister-Lechenbauer-Str.");
        break;
    }
    case 70262:
    {
        returnValue = F("Bürgermeister-Lederer-Str.");
        break;
    }
    case 70263:
    {
        returnValue = F("Bürgermeister-Lederer-Weg");
        break;
    }
    case 70264:
    {
        returnValue = F("Bürgermeister-Lederle-Weg");
        break;
    }
    case 70265:
    {
        returnValue = F("Bürgermeister-Ledermann-Str.");
        break;
    }
    case 70266:
    {
        returnValue = F("Bürgermeister-Lehmeier-Str.");
        break;
    }
    case 70267:
    {
        returnValue = F("Bürgermeister-Leibold-Str.");
        break;
    }
    case 70268:
    {
        returnValue = F("Bürgermeister-Leikeim-Str.");
        break;
    }
    case 70269:
    {
        returnValue = F("Bürgermeister-Lenk-Str.");
        break;
    }
    case 70270:
    {
        returnValue = F("Bürgermeister-Lenz-Str.");
        break;
    }
    case 70271:
    {
        returnValue = F("Bürgermeister-Lettenmeyer-Str.");
        break;
    }
    case 70272:
    {
        returnValue = F("Bürgermeister-Leuthold-Str.");
        break;
    }
    case 70273:
    {
        returnValue = F("Bürgermeister-Lickenberg-Str.");
        break;
    }
    case 70274:
    {
        returnValue = F("Bürgermeister-Lienhop-Str.");
        break;
    }
    case 70275:
    {
        returnValue = F("Bürgermeister-Limmer-Weg");
        break;
    }
    case 70276:
    {
        returnValue = F("Bürgermeister-Lindinger-Str.");
        break;
    }
    case 70277:
    {
        returnValue = F("Bürgermeister-Lindloff-Platz");
        break;
    }
    case 70278:
    {
        returnValue = F("Bürgermeister-Lingg-Str.");
        break;
    }
    case 70279:
    {
        returnValue = F("Bürgermeister-Lochner-Str.");
        break;
    }
    case 70280:
    {
        returnValue = F("Bürgermeister-Loderer-Str.");
        break;
    }
    case 70281:
    {
        returnValue = F("Bürgermeister-Lofner-Str.");
        break;
    }
    case 70282:
    {
        returnValue = F("Bürgermeister-Lohmeier-Ring");
        break;
    }
    case 70283:
    {
        returnValue = F("Bürgermeister-Lohr-Str.");
        break;
    }
    case 70284:
    {
        returnValue = F("Bürgermeister-Loidl-Str.");
        break;
    }
    case 70285:
    {
        returnValue = F("Bürgermeister-Lorentz-Str.");
        break;
    }
    case 70286:
    {
        returnValue = F("Bürgermeister-Lutz-Str.");
        break;
    }
    case 70287:
    {
        returnValue = F("Bürgermeister-Löhden-Str.");
        break;
    }
    case 70288:
    {
        returnValue = F("Bürgermeister-Lübben-Weg");
        break;
    }
    case 70289:
    {
        returnValue = F("Bürgermeister-Lüken-Platz");
        break;
    }
    case 70290:
    {
        returnValue = F("Bürgermeister-Mader-Str.");
        break;
    }
    case 70291:
    {
        returnValue = F("Bürgermeister-Magnus-Str.");
        break;
    }
    case 70292:
    {
        returnValue = F("Bürgermeister-Mahler-Str.");
        break;
    }
    case 70293:
    {
        returnValue = F("Bürgermeister-Mahr-Str.");
        break;
    }
    case 70294:
    {
        returnValue = F("Bürgermeister-Mang-Str.");
        break;
    }
    case 70295:
    {
        returnValue = F("Bürgermeister-Marahrens-Str.");
        break;
    }
    case 70296:
    {
        returnValue = F("Bürgermeister-Martin-Maier-Str.");
        break;
    }
    case 70297:
    {
        returnValue = F("Bürgermeister-Martin-Meier-Str.");
        break;
    }
    case 70298:
    {
        returnValue = F("Bürgermeister-Martin-Str.");
        break;
    }
    case 70299:
    {
        returnValue = F("Bürgermeister-Mathias-Krauß-Str.");
        break;
    }
    case 70300:
    {
        returnValue = F("Bürgermeister-Matthias-Weg");
        break;
    }
    case 70301:
    {
        returnValue = F("Bürgermeister-Matzeder-Str.");
        break;
    }
    case 70302:
    {
        returnValue = F("Bürgermeister-Mauerer-Weg");
        break;
    }
    case 70303:
    {
        returnValue = F("Bürgermeister-Maurer-Str.");
        break;
    }
    case 70304:
    {
        returnValue = F("Bürgermeister-Maxen-Str.");
        break;
    }
    case 70305:
    {
        returnValue = F("Bürgermeister-Mayer-Str.");
        break;
    }
    case 70306:
    {
        returnValue = F("Bürgermeister-Mayer-Weg");
        break;
    }
    case 70307:
    {
        returnValue = F("Bürgermeister-Mayr-Str.");
        break;
    }
    case 70308:
    {
        returnValue = F("Bürgermeister-Mayr-Weg");
        break;
    }
    case 70309:
    {
        returnValue = F("Bürgermeister-Mayrhans-Str.");
        break;
    }
    case 70310:
    {
        returnValue = F("Bürgermeister-Mecke-Str.");
        break;
    }
    case 70311:
    {
        returnValue = F("Bürgermeister-Meindl-Str.");
        break;
    }
    case 70312:
    {
        returnValue = F("Bürgermeister-Meixner-Str.");
        break;
    }
    case 70313:
    {
        returnValue = F("Bürgermeister-Meißner-Str.");
        break;
    }
    case 70314:
    {
        returnValue = F("Bürgermeister-Meldau-Str.");
        break;
    }
    case 70315:
    {
        returnValue = F("Bürgermeister-Menacher-Ring");
        break;
    }
    case 70316:
    {
        returnValue = F("Bürgermeister-Merkl-Str.");
        break;
    }
    case 70317:
    {
        returnValue = F("Bürgermeister-Mertel-Str.");
        break;
    }
    case 70318:
    {
        returnValue = F("Bürgermeister-Mertl-Str.");
        break;
    }
    case 70319:
    {
        returnValue = F("Bürgermeister-Metzger-Weg");
        break;
    }
    case 70320:
    {
        returnValue = F("Bürgermeister-Meyer-Borstel-Weg");
        break;
    }
    case 70321:
    {
        returnValue = F("Bürgermeister-Meyer-Str.");
        break;
    }
    case 70322:
    {
        returnValue = F("Bürgermeister-Meyer-Weg");
        break;
    }
    case 70323:
    {
        returnValue = F("Bürgermeister-Meyeringh-Park");
        break;
    }
    case 70324:
    {
        returnValue = F("Bürgermeister-Meyr-Str.");
        break;
    }
    case 70325:
    {
        returnValue = F("Bürgermeister-Miller-Str.");
        break;
    }
    case 70326:
    {
        returnValue = F("Bürgermeister-Mittenmeier-Str.");
        break;
    }
    case 70327:
    {
        returnValue = F("Bürgermeister-Morgenroth-Str.");
        break;
    }
    case 70328:
    {
        returnValue = F("Bürgermeister-Muggenthaler-Str.");
        break;
    }
    case 70329:
    {
        returnValue = F("Bürgermeister-Muhr-Weg");
        break;
    }
    case 70330:
    {
        returnValue = F("Bürgermeister-März-Weg");
        break;
    }
    case 70331:
    {
        returnValue = F("Bürgermeister-Möckel-Str.");
        break;
    }
    case 70332:
    {
        returnValue = F("Bürgermeister-Möller-Platz");
        break;
    }
    case 70333:
    {
        returnValue = F("Bürgermeister-Mörtl-Str.");
        break;
    }
    case 70334:
    {
        returnValue = F("Bürgermeister-Mösl-Str.");
        break;
    }
    case 70335:
    {
        returnValue = F("Bürgermeister-Mücklich-Weg");
        break;
    }
    case 70336:
    {
        returnValue = F("Bürgermeister-Müller-Bargloy-Str.");
        break;
    }
    case 70337:
    {
        returnValue = F("Bürgermeister-Müller-Str.");
        break;
    }
    case 70338:
    {
        returnValue = F("Bürgermeister-Münch-Str.");
        break;
    }
    case 70339:
    {
        returnValue = F("Bürgermeister-Mützel-Str.");
        break;
    }
    case 70340:
    {
        returnValue = F("Bürgermeister-Müßig-Str.");
        break;
    }
    case 70341:
    {
        returnValue = F("Bürgermeister-Nadler-Str.");
        break;
    }
    case 70342:
    {
        returnValue = F("Bürgermeister-Naglmeier-Str.");
        break;
    }
    case 70343:
    {
        returnValue = F("Bürgermeister-Nastvogel-Str.");
        break;
    }
    case 70344:
    {
        returnValue = F("Bürgermeister-Nee-Str.");
        break;
    }
    case 70345:
    {
        returnValue = F("Bürgermeister-Neff-Weg");
        break;
    }
    case 70346:
    {
        returnValue = F("Bürgermeister-Neidlinger-Platz");
        break;
    }
    case 70347:
    {
        returnValue = F("Bürgermeister-Neuber-Str.");
        break;
    }
    case 70348:
    {
        returnValue = F("Bürgermeister-Neumeyr-Str.");
        break;
    }
    case 70349:
    {
        returnValue = F("Bürgermeister-Neuwirth-Str.");
        break;
    }
    case 70350:
    {
        returnValue = F("Bürgermeister-Niemann-Str.");
        break;
    }
    case 70351:
    {
        returnValue = F("Bürgermeister-Nitschke-Ring");
        break;
    }
    case 70352:
    {
        returnValue = F("Bürgermeister-Nolte-Str.");
        break;
    }
    case 70353:
    {
        returnValue = F("Bürgermeister-Notz-Str.");
        break;
    }
    case 70354:
    {
        returnValue = F("Bürgermeister-Nuß-Weg");
        break;
    }
    case 70355:
    {
        returnValue = F("Bürgermeister-Nägele-Str.");
        break;
    }
    case 70356:
    {
        returnValue = F("Bürgermeister-Nöbauer-Str.");
        break;
    }
    case 70357:
    {
        returnValue = F("Bürgermeister-Obenauf-Str.");
        break;
    }
    case 70358:
    {
        returnValue = F("Bürgermeister-Oberhettinger-Str.");
        break;
    }
    case 70359:
    {
        returnValue = F("Bürgermeister-Ochs-Str.");
        break;
    }
    case 70360:
    {
        returnValue = F("Bürgermeister-Ocker-Str.");
        break;
    }
    case 70361:
    {
        returnValue = F("Bürgermeister-Oetken-Str.");
        break;
    }
    case 70362:
    {
        returnValue = F("Bürgermeister-Oettle-Str.");
        break;
    }
    case 70363:
    {
        returnValue = F("Bürgermeister-Ohlendorf-Weg");
        break;
    }
    case 70364:
    {
        returnValue = F("Bürgermeister-Ohlms-Str.");
        break;
    }
    case 70365:
    {
        returnValue = F("Bürgermeister-Olberding-Str.");
        break;
    }
    case 70366:
    {
        returnValue = F("Bürgermeister-Oldewurtel-Str.");
        break;
    }
    case 70367:
    {
        returnValue = F("Bürgermeister-Osterholzer-Str.");
        break;
    }
    case 70368:
    {
        returnValue = F("Bürgermeister-Osterloh-Str.");
        break;
    }
    case 70369:
    {
        returnValue = F("Bürgermeister-Ott-Str.");
        break;
    }
    case 70370:
    {
        returnValue = F("Bürgermeister-Otto-Falk-Str.");
        break;
    }
    case 70371:
    {
        returnValue = F("Bürgermeister-Panzer-Str.");
        break;
    }
    case 70372:
    {
        returnValue = F("Bürgermeister-Paul-Str.");
        break;
    }
    case 70373:
    {
        returnValue = F("Bürgermeister-Paulus-Str.");
        break;
    }
    case 70374:
    {
        returnValue = F("Bürgermeister-Penzkofer-Str.");
        break;
    }
    case 70375:
    {
        returnValue = F("Bürgermeister-Pergande-Str.");
        break;
    }
    case 70376:
    {
        returnValue = F("Bürgermeister-Pernat-Str.");
        break;
    }
    case 70377:
    {
        returnValue = F("Bürgermeister-Peter-Str.");
        break;
    }
    case 70378:
    {
        returnValue = F("Bürgermeister-Peters-Str.");
        break;
    }
    case 70379:
    {
        returnValue = F("Bürgermeister-Petersen-Weg");
        break;
    }
    case 70380:
    {
        returnValue = F("Bürgermeister-Petzold-Str.");
        break;
    }
    case 70381:
    {
        returnValue = F("Bürgermeister-Pfanzelt-Str.");
        break;
    }
    case 70382:
    {
        returnValue = F("Bürgermeister-Pfeiffer-Str.");
        break;
    }
    case 70383:
    {
        returnValue = F("Bürgermeister-Pflaumer-Str.");
        break;
    }
    case 70384:
    {
        returnValue = F("Bürgermeister-Philipp-Reber-Str.");
        break;
    }
    case 70385:
    {
        returnValue = F("Bürgermeister-Piehler-Str.");
        break;
    }
    case 70386:
    {
        returnValue = F("Bürgermeister-Plambeck-Str.");
        break;
    }
    case 70387:
    {
        returnValue = F("Bürgermeister-Plößl-Str.");
        break;
    }
    case 70388:
    {
        returnValue = F("Bürgermeister-Pohlmann-Str.");
        break;
    }
    case 70389:
    {
        returnValue = F("Bürgermeister-Popfinger-Str.");
        break;
    }
    case 70390:
    {
        returnValue = F("Bürgermeister-Poschacher-Str.");
        break;
    }
    case 70391:
    {
        returnValue = F("Bürgermeister-Poschacht-Str.");
        break;
    }
    case 70392:
    {
        returnValue = F("Bürgermeister-Pouzaud-Str.");
        break;
    }
    case 70393:
    {
        returnValue = F("Bürgermeister-Poxleitner-Str.");
        break;
    }
    case 70394:
    {
        returnValue = F("Bürgermeister-Pramps-Str.");
        break;
    }
    case 70395:
    {
        returnValue = F("Bürgermeister-Precht-Str.");
        break;
    }
    case 70396:
    {
        returnValue = F("Bürgermeister-Prechtel-Str.");
        break;
    }
    case 70397:
    {
        returnValue = F("Bürgermeister-Preißer-Ring");
        break;
    }
    case 70398:
    {
        returnValue = F("Bürgermeister-Preißler-Str.");
        break;
    }
    case 70399:
    {
        returnValue = F("Bürgermeister-Prell-Str.");
        break;
    }
    case 70400:
    {
        returnValue = F("Bürgermeister-Prenn-Str.");
        break;
    }
    case 70401:
    {
        returnValue = F("Bürgermeister-Prummer-Str.");
        break;
    }
    case 70402:
    {
        returnValue = F("Bürgermeister-Präger-Str.");
        break;
    }
    case 70403:
    {
        returnValue = F("Bürgermeister-Puls-Weg");
        break;
    }
    case 70404:
    {
        returnValue = F("Bürgermeister-Pustau-Str.");
        break;
    }
    case 70405:
    {
        returnValue = F("Bürgermeister-Pöhlmann-Str.");
        break;
    }
    case 70406:
    {
        returnValue = F("Bürgermeister-Püls-Str.");
        break;
    }
    case 70407:
    {
        returnValue = F("Bürgermeister-Raab-Str.");
        break;
    }
    case 70408:
    {
        returnValue = F("Bürgermeister-Rabus-Str.");
        break;
    }
    case 70409:
    {
        returnValue = F("Bürgermeister-Rachinger-Str.");
        break;
    }
    case 70410:
    {
        returnValue = F("Bürgermeister-Raiffeisen-Schule");
        break;
    }
    case 70411:
    {
        returnValue = F("Bürgermeister-Rampl-Str.");
        break;
    }
    case 70412:
    {
        returnValue = F("Bürgermeister-Rasch-Str.");
        break;
    }
    case 70413:
    {
        returnValue = F("Bürgermeister-Rasche-Str.");
        break;
    }
    case 70414:
    {
        returnValue = F("Bürgermeister-Rathmann-Str.");
        break;
    }
    case 70415:
    {
        returnValue = F("Bürgermeister-Rau-Str.");
        break;
    }
    case 70416:
    {
        returnValue = F("Bürgermeister-Rauch-Str.");
        break;
    }
    case 70417:
    {
        returnValue = F("Bürgermeister-Reck-Str.");
        break;
    }
    case 70418:
    {
        returnValue = F("Bürgermeister-Reger-Str.");
        break;
    }
    case 70419:
    {
        returnValue = F("Bürgermeister-Reichel-Str.");
        break;
    }
    case 70420:
    {
        returnValue = F("Bürgermeister-Reichl-Str.");
        break;
    }
    case 70421:
    {
        returnValue = F("Bürgermeister-Reichlmayr-Str.");
        break;
    }
    case 70422:
    {
        returnValue = F("Bürgermeister-Reiger-Str.");
        break;
    }
    case 70423:
    {
        returnValue = F("Bürgermeister-Reindl-Str.");
        break;
    }
    case 70424:
    {
        returnValue = F("Bürgermeister-Reischl-Weg");
        break;
    }
    case 70425:
    {
        returnValue = F("Bürgermeister-Reisenbach-Str.");
        break;
    }
    case 70426:
    {
        returnValue = F("Bürgermeister-Renner-Str.r");
        break;
    }
    case 70427:
    {
        returnValue = F("Bürgermeister-Riedl-Str.");
        break;
    }
    case 70428:
    {
        returnValue = F("Bürgermeister-Riedl-Weg");
        break;
    }
    case 70429:
    {
        returnValue = F("Bürgermeister-Rippe-Str.");
        break;
    }
    case 70430:
    {
        returnValue = F("Bürgermeister-Ritter-Str.");
        break;
    }
    case 70431:
    {
        returnValue = F("Bürgermeister-Rohrmüller-Str.");
        break;
    }
    case 70432:
    {
        returnValue = F("Bürgermeister-Rose-Str.");
        break;
    }
    case 70433:
    {
        returnValue = F("Bürgermeister-Roth-Str.");
        break;
    }
    case 70434:
    {
        returnValue = F("Bürgermeister-Rothenbach-Str.");
        break;
    }
    case 70435:
    {
        returnValue = F("Bürgermeister-Rothenfußer-Str.");
        break;
    }
    case 70436:
    {
        returnValue = F("Bürgermeister-Rothlauf-Str.");
        break;
    }
    case 70437:
    {
        returnValue = F("Bürgermeister-Roßmann-Str.");
        break;
    }
    case 70438:
    {
        returnValue = F("Bürgermeister-Rudolph-Ring");
        break;
    }
    case 70439:
    {
        returnValue = F("Bürgermeister-Ruffing-Str.");
        break;
    }
    case 70440:
    {
        returnValue = F("Bürgermeister-Ruhe-Weg");
        break;
    }
    case 70441:
    {
        returnValue = F("Bürgermeister-Ruhl-Str.");
        break;
    }
    case 70442:
    {
        returnValue = F("Bürgermeister-Ruisinger-Str.");
        break;
    }
    case 70443:
    {
        returnValue = F("Bürgermeister-Rukwid-Str.");
        break;
    }
    case 70444:
    {
        returnValue = F("Bürgermeister-Rummer-Str.");
        break;
    }
    case 70445:
    {
        returnValue = F("Bürgermeister-Rusch-Str.");
        break;
    }
    case 70446:
    {
        returnValue = F("Bürgermeister-Ruthus-Str.");
        break;
    }
    case 70447:
    {
        returnValue = F("Bürgermeister-Röbke-Str.");
        break;
    }
    case 70448:
    {
        returnValue = F("Bürgermeister-Römpert-Str.");
        break;
    }
    case 70449:
    {
        returnValue = F("Bürgermeister-Rösch-Str.");
        break;
    }
    case 70450:
    {
        returnValue = F("Bürgermeister-Rößner-Str.");
        break;
    }
    case 70451:
    {
        returnValue = F("Bürgermeister-Rühl-Str.");
        break;
    }
    case 70452:
    {
        returnValue = F("Bürgermeister-Rüttinger-Str.");
        break;
    }
    case 70453:
    {
        returnValue = F("Bürgermeister-Saager-Str.");
        break;
    }
    case 70454:
    {
        returnValue = F("Bürgermeister-Sailer-Str.");
        break;
    }
    case 70455:
    {
        returnValue = F("Bürgermeister-Salzsäuler-Platz");
        break;
    }
    case 70456:
    {
        returnValue = F("Bürgermeister-Sammann-Str.");
        break;
    }
    case 70457:
    {
        returnValue = F("Bürgermeister-Sander-Str.");
        break;
    }
    case 70458:
    {
        returnValue = F("Bürgermeister-Sandtel-Str.");
        break;
    }
    case 70459:
    {
        returnValue = F("Bürgermeister-Sappl-Str.");
        break;
    }
    case 70460:
    {
        returnValue = F("Bürgermeister-Sarg-Str.");
        break;
    }
    case 70461:
    {
        returnValue = F("Bürgermeister-Sauter-Str.");
        break;
    }
    case 70462:
    {
        returnValue = F("Bürgermeister-Schaffner-Str.");
        break;
    }
    case 70463:
    {
        returnValue = F("Bürgermeister-Schall-Weg");
        break;
    }
    case 70464:
    {
        returnValue = F("Bürgermeister-Schallenkammer-Weg");
        break;
    }
    case 70465:
    {
        returnValue = F("Bürgermeister-Schallermayer-Str.");
        break;
    }
    case 70466:
    {
        returnValue = F("Bürgermeister-Schallhammer-Weg");
        break;
    }
    case 70467:
    {
        returnValue = F("Bürgermeister-Schamp-Str.");
        break;
    }
    case 70468:
    {
        returnValue = F("Bürgermeister-Schaper-Str.");
        break;
    }
    case 70469:
    {
        returnValue = F("Bürgermeister-Scharl-Str.");
        break;
    }
    case 70470:
    {
        returnValue = F("Bürgermeister-Schaudi-Str.");
        break;
    }
    case 70471:
    {
        returnValue = F("Bürgermeister-Schauer-Str.");
        break;
    }
    case 70472:
    {
        returnValue = F("Bürgermeister-Scheiner-Str.");
        break;
    }
    case 70473:
    {
        returnValue = F("Bürgermeister-Schelchshorn-Str.");
        break;
    }
    case 70474:
    {
        returnValue = F("Bürgermeister-Schell-Str.");
        break;
    }
    case 70475:
    {
        returnValue = F("Bürgermeister-Scheller-Str.");
        break;
    }
    case 70476:
    {
        returnValue = F("Bürgermeister-Scherm-Str.");
        break;
    }
    case 70477:
    {
        returnValue = F("Bürgermeister-Scherp-Str.");
        break;
    }
    case 70478:
    {
        returnValue = F("Bürgermeister-Schetter-Str.");
        break;
    }
    case 70479:
    {
        returnValue = F("Bürgermeister-Schießl-Str.");
        break;
    }
    case 70480:
    {
        returnValue = F("Bürgermeister-Schilling-Str.");
        break;
    }
    case 70481:
    {
        returnValue = F("Bürgermeister-Schinkel-Str.");
        break;
    }
    case 70482:
    {
        returnValue = F("Bürgermeister-Schirmer-Str.");
        break;
    }
    case 70483:
    {
        returnValue = F("Bürgermeister-Schlag-Str.");
        break;
    }
    case 70484:
    {
        returnValue = F("Bürgermeister-Schlatter-Str.");
        break;
    }
    case 70485:
    {
        returnValue = F("Bürgermeister-Schless-Platz");
        break;
    }
    case 70486:
    {
        returnValue = F("Bürgermeister-Schlüterbusch-Str.");
        break;
    }
    case 70487:
    {
        returnValue = F("Bürgermeister-Schmalberger-Str.");
        break;
    }
    case 70488:
    {
        returnValue = F("Bürgermeister-Schmelzing-Str.");
        break;
    }
    case 70489:
    {
        returnValue = F("Bürgermeister-Schmid-Str.");
        break;
    }
    case 70490:
    {
        returnValue = F("Bürgermeister-Schmidt-Platz");
        break;
    }
    case 70491:
    {
        returnValue = F("Bürgermeister-Schmidt-Str.");
        break;
    }
    case 70492:
    {
        returnValue = F("Bürgermeister-Schmölz-Weg");
        break;
    }
    case 70493:
    {
        returnValue = F("Bürgermeister-Schneider-Weg");
        break;
    }
    case 70494:
    {
        returnValue = F("Bürgermeister-Schnell-Str.");
        break;
    }
    case 70495:
    {
        returnValue = F("Bürgermeister-Schoeller-Str.");
        break;
    }
    case 70496:
    {
        returnValue = F("Bürgermeister-Scholl-Str.");
        break;
    }
    case 70497:
    {
        returnValue = F("Bürgermeister-Schoon-Str.");
        break;
    }
    case 70498:
    {
        returnValue = F("Bürgermeister-Schorer-Weg");
        break;
    }
    case 70499:
    {
        returnValue = F("Bürgermeister-Schottdorf-Str.");
        break;
    }
    case 70500:
    {
        returnValue = F("Bürgermeister-Schrader-Str.");
        break;
    }
    case 70501:
    {
        returnValue = F("Bürgermeister-Schreiber-Str.");
        break;
    }
    case 70502:
    {
        returnValue = F("Bürgermeister-Schrodt-Str.");
        break;
    }
    case 70503:
    {
        returnValue = F("Bürgermeister-Schräfl-Str.");
        break;
    }
    case 70504:
    {
        returnValue = F("Bürgermeister-Schröder-Str.");
        break;
    }
    case 70505:
    {
        returnValue = F("Bürgermeister-Schröer-Str.");
        break;
    }
    case 70506:
    {
        returnValue = F("Bürgermeister-Schrötzlmair-Str.");
        break;
    }
    case 70507:
    {
        returnValue = F("Bürgermeister-Schuh-Str.");
        break;
    }
    case 70508:
    {
        returnValue = F("Bürgermeister-Schuler-Str.");
        break;
    }
    case 70509:
    {
        returnValue = F("Bürgermeister-Schultz-Str.");
        break;
    }
    case 70510:
    {
        returnValue = F("Bürgermeister-Schulze-Str.");
        break;
    }
    case 70511:
    {
        returnValue = F("Bürgermeister-Schumacher-Str.");
        break;
    }
    case 70512:
    {
        returnValue = F("Bürgermeister-Schwaiger-Str.");
        break;
    }
    case 70513:
    {
        returnValue = F("Bürgermeister-Schwarzmann-Str.");
        break;
    }
    case 70514:
    {
        returnValue = F("Bürgermeister-Schweier-Str.");
        break;
    }
    case 70515:
    {
        returnValue = F("Bürgermeister-Schweiger-Str.");
        break;
    }
    case 70516:
    {
        returnValue = F("Bürgermeister-Schwinghammer-Str.");
        break;
    }
    case 70517:
    {
        returnValue = F("Bürgermeister-Schäfer-Str.");
        break;
    }
    case 70518:
    {
        returnValue = F("Bürgermeister-Schäferling-Str.");
        break;
    }
    case 70519:
    {
        returnValue = F("Bürgermeister-Schäffer-Str.");
        break;
    }
    case 70520:
    {
        returnValue = F("Bürgermeister-Schöck-Str.");
        break;
    }
    case 70521:
    {
        returnValue = F("Bürgermeister-Schöll-Weg");
        break;
    }
    case 70522:
    {
        returnValue = F("Bürgermeister-Schön-Str.");
        break;
    }
    case 70523:
    {
        returnValue = F("Bürgermeister-Schönbauer-Str.");
        break;
    }
    case 70524:
    {
        returnValue = F("Bürgermeister-Schönitz-Str.");
        break;
    }
    case 70525:
    {
        returnValue = F("Bürgermeister-Schöpf-Str.");
        break;
    }
    case 70526:
    {
        returnValue = F("Bürgermeister-Schöps-Str.");
        break;
    }
    case 70527:
    {
        returnValue = F("Bürgermeister-Schöttl-Str.");
        break;
    }
    case 70528:
    {
        returnValue = F("Bürgermeister-Sedlmair-Weg");
        break;
    }
    case 70529:
    {
        returnValue = F("Bürgermeister-Seibold-Str.");
        break;
    }
    case 70530:
    {
        returnValue = F("Bürgermeister-Seidl-Str.");
        break;
    }
    case 70531:
    {
        returnValue = F("Bürgermeister-Seidler-Str.");
        break;
    }
    case 70532:
    {
        returnValue = F("Bürgermeister-Seitz-Str.");
        break;
    }
    case 70533:
    {
        returnValue = F("Bürgermeister-Seißler-Str.");
        break;
    }
    case 70534:
    {
        returnValue = F("Bürgermeister-Senker-Weg");
        break;
    }
    case 70535:
    {
        returnValue = F("Bürgermeister-Sepp-Str.");
        break;
    }
    case 70536:
    {
        returnValue = F("Bürgermeister-Seubert-Str.");
        break;
    }
    case 70537:
    {
        returnValue = F("Bürgermeister-Seyfried-Str.");
        break;
    }
    case 70538:
    {
        returnValue = F("Bürgermeister-Sgoff-Str.");
        break;
    }
    case 70539:
    {
        returnValue = F("Bürgermeister-Sidler-Str.");
        break;
    }
    case 70540:
    {
        returnValue = F("Bürgermeister-Siebert-Str.");
        break;
    }
    case 70541:
    {
        returnValue = F("Bürgermeister-Siegel-Str.");
        break;
    }
    case 70542:
    {
        returnValue = F("Bürgermeister-Siegler-Str.");
        break;
    }
    case 70543:
    {
        returnValue = F("Bürgermeister-Silbermann-Str.");
        break;
    }
    case 70544:
    {
        returnValue = F("Bürgermeister-Simeth-Str.");
        break;
    }
    case 70545:
    {
        returnValue = F("Bürgermeister-Sing-Str.");
        break;
    }
    case 70546:
    {
        returnValue = F("Bürgermeister-Singer-Str.");
        break;
    }
    case 70547:
    {
        returnValue = F("Bürgermeister-Smid-Str.");
        break;
    }
    case 70548:
    {
        returnValue = F("Bürgermeister-Smit-Str.");
        break;
    }
    case 70549:
    {
        returnValue = F("Bürgermeister-Soetebier-Str.");
        break;
    }
    case 70550:
    {
        returnValue = F("Bürgermeister-Sommer-Str.");
        break;
    }
    case 70551:
    {
        returnValue = F("Bürgermeister-Spengler-Str.");
        break;
    }
    case 70552:
    {
        returnValue = F("Bürgermeister-Sprengel-Str.");
        break;
    }
    case 70553:
    {
        returnValue = F("Bürgermeister-Stamm-Str.");
        break;
    }
    case 70554:
    {
        returnValue = F("Bürgermeister-Stange-Weg");
        break;
    }
    case 70555:
    {
        returnValue = F("Bürgermeister-Steenbock-Str.");
        break;
    }
    case 70556:
    {
        returnValue = F("Bürgermeister-Stegmüller-Str.");
        break;
    }
    case 70557:
    {
        returnValue = F("Bürgermeister-Stein-Str.");
        break;
    }
    case 70558:
    {
        returnValue = F("Bürgermeister-Steinberg-Ring");
        break;
    }
    case 70559:
    {
        returnValue = F("Bürgermeister-Steiner-Str.");
        break;
    }
    case 70560:
    {
        returnValue = F("Bürgermeister-Steinkamp-Str.");
        break;
    }
    case 70561:
    {
        returnValue = F("Bürgermeister-Steinweden-Str.");
        break;
    }
    case 70562:
    {
        returnValue = F("Bürgermeister-Stern-Str.");
        break;
    }
    case 70563:
    {
        returnValue = F("Bürgermeister-Stetter-Str.");
        break;
    }
    case 70564:
    {
        returnValue = F("Bürgermeister-Stier-Str.");
        break;
    }
    case 70565:
    {
        returnValue = F("Bürgermeister-Stock-Str.");
        break;
    }
    case 70566:
    {
        returnValue = F("Bürgermeister-Stocker-Ring");
        break;
    }
    case 70567:
    {
        returnValue = F("Bürgermeister-Stoll-Str.");
        break;
    }
    case 70568:
    {
        returnValue = F("Bürgermeister-Stollberg-Siedlung");
        break;
    }
    case 70569:
    {
        returnValue = F("Bürgermeister-Stollreither-Promenade");
        break;
    }
    case 70570:
    {
        returnValue = F("Bürgermeister-Stolzenberg-Str.");
        break;
    }
    case 70571:
    {
        returnValue = F("Bürgermeister-Strauß-Str.");
        break;
    }
    case 70572:
    {
        returnValue = F("Bürgermeister-Straß-Weg");
        break;
    }
    case 70573:
    {
        returnValue = F("Bürgermeister-Strebel-Str.");
        break;
    }
    case 70574:
    {
        returnValue = F("Bürgermeister-Streif-Str.");
        break;
    }
    case 70575:
    {
        returnValue = F("Bürgermeister-Streitle-Str.");
        break;
    }
    case 70576:
    {
        returnValue = F("Bürgermeister-Strobel-Str.");
        break;
    }
    case 70577:
    {
        returnValue = F("Bürgermeister-Strobl-Str.");
        break;
    }
    case 70578:
    {
        returnValue = F("Bürgermeister-Strähnz-Str.");
        break;
    }
    case 70579:
    {
        returnValue = F("Bürgermeister-Ströh-Platz");
        break;
    }
    case 70580:
    {
        returnValue = F("Bürgermeister-Stuhlberger-Str.");
        break;
    }
    case 70581:
    {
        returnValue = F("Bürgermeister-Stuiber-Str.");
        break;
    }
    case 70582:
    {
        returnValue = F("Bürgermeister-Stumpf-Str.");
        break;
    }
    case 70583:
    {
        returnValue = F("Bürgermeister-Stöcklein-Str.");
        break;
    }
    case 70584:
    {
        returnValue = F("Bürgermeister-Stöfen-Str.");
        break;
    }
    case 70585:
    {
        returnValue = F("Bürgermeister-Stötter-Str.");
        break;
    }
    case 70586:
    {
        returnValue = F("Bürgermeister-Syree-Platz");
        break;
    }
    case 70587:
    {
        returnValue = F("Bürgermeister-Söhl-Str.");
        break;
    }
    case 70588:
    {
        returnValue = F("Bürgermeister-Söhlke-Str.");
        break;
    }
    case 70589:
    {
        returnValue = F("Bürgermeister-Temmen-Str.");
        break;
    }
    case 70590:
    {
        returnValue = F("Bürgermeister-Tempel-Str.");
        break;
    }
    case 70591:
    {
        returnValue = F("Bürgermeister-Templer-Ring");
        break;
    }
    case 70592:
    {
        returnValue = F("Bürgermeister-Tepe-Str.");
        break;
    }
    case 70593:
    {
        returnValue = F("Bürgermeister-Tesch-Str.");
        break;
    }
    case 70594:
    {
        returnValue = F("Bürgermeister-Thies-Weg");
        break;
    }
    case 70595:
    {
        returnValue = F("Bürgermeister-Tholen-Weg");
        break;
    }
    case 70596:
    {
        returnValue = F("Bürgermeister-Thomann-Weg");
        break;
    }
    case 70597:
    {
        returnValue = F("Bürgermeister-Tiessen-Ring");
        break;
    }
    case 70598:
    {
        returnValue = F("Bürgermeister-Timm-Kehre");
        break;
    }
    case 70599:
    {
        returnValue = F("Bürgermeister-Tochtermann-Str.");
        break;
    }
    case 70600:
    {
        returnValue = F("Bürgermeister-Todt-Str.");
        break;
    }
    case 70601:
    {
        returnValue = F("Bürgermeister-Trapp-Ring");
        break;
    }
    case 70602:
    {
        returnValue = F("Bürgermeister-Trautner-Weg");
        break;
    }
    case 70603:
    {
        returnValue = F("Bürgermeister-Trautwein-Str.");
        break;
    }
    case 70604:
    {
        returnValue = F("Bürgermeister-Tretow-Str.");
        break;
    }
    case 70605:
    {
        returnValue = F("Bürgermeister-Truelsen-Weg");
        break;
    }
    case 70606:
    {
        returnValue = F("Bürgermeister-Tschepke-Str.");
        break;
    }
    case 70607:
    {
        returnValue = F("Bürgermeister-Ullrich-Str.");
        break;
    }
    case 70608:
    {
        returnValue = F("Bürgermeister-Vogel-Str.");
        break;
    }
    case 70609:
    {
        returnValue = F("Bürgermeister-Vogel-Weg");
        break;
    }
    case 70610:
    {
        returnValue = F("Bürgermeister-Vogl-Stra0e");
        break;
    }
    case 70611:
    {
        returnValue = F("Bürgermeister-Volk-Weg");
        break;
    }
    case 70612:
    {
        returnValue = F("Bürgermeister-Vonbrunn-Str.");
        break;
    }
    case 70613:
    {
        returnValue = F("Bürgermeister-Völk-Str.");
        break;
    }
    case 70614:
    {
        returnValue = F("Bürgermeister-Waelder-Weg");
        break;
    }
    case 70615:
    {
        returnValue = F("Bürgermeister-Wagner-Str.");
        break;
    }
    case 70616:
    {
        returnValue = F("Bürgermeister-Waibel-Weg");
        break;
    }
    case 70617:
    {
        returnValue = F("Bürgermeister-Wallbach-Str.");
        break;
    }
    case 70618:
    {
        returnValue = F("Bürgermeister-Wallner-Str.");
        break;
    }
    case 70619:
    {
        returnValue = F("Bürgermeister-Waltenberger-Str.");
        break;
    }
    case 70620:
    {
        returnValue = F("Bürgermeister-Walter-Meier-Str.");
        break;
    }
    case 70621:
    {
        returnValue = F("Bürgermeister-Walter-Str.");
        break;
    }
    case 70622:
    {
        returnValue = F("Bürgermeister-Wanner-Str.");
        break;
    }
    case 70623:
    {
        returnValue = F("Bürgermeister-Weber-Str.");
        break;
    }
    case 70624:
    {
        returnValue = F("Bürgermeister-Weber-Weg");
        break;
    }
    case 70625:
    {
        returnValue = F("Bürgermeister-Weeber-Str.");
        break;
    }
    case 70626:
    {
        returnValue = F("Bürgermeister-Weger-Ring");
        break;
    }
    case 70627:
    {
        returnValue = F("Bürgermeister-Weger-Weg");
        break;
    }
    case 70628:
    {
        returnValue = F("Bürgermeister-Wegerer-Str.");
        break;
    }
    case 70629:
    {
        returnValue = F("Bürgermeister-Wegmann-Str.");
        break;
    }
    case 70630:
    {
        returnValue = F("Bürgermeister-Wehrmann-Str.");
        break;
    }
    case 70631:
    {
        returnValue = F("Bürgermeister-Weid-Str.");
        break;
    }
    case 70632:
    {
        returnValue = F("Bürgermeister-Weidemaier-Str.");
        break;
    }
    case 70633:
    {
        returnValue = F("Bürgermeister-Weidner-Str.");
        break;
    }
    case 70634:
    {
        returnValue = F("Bürgermeister-Weigel-Str.");
        break;
    }
    case 70635:
    {
        returnValue = F("Bürgermeister-Weikmann-Ring");
        break;
    }
    case 70636:
    {
        returnValue = F("Bürgermeister-Weimer-Str.");
        break;
    }
    case 70637:
    {
        returnValue = F("Bürgermeister-Weiß-Str.");
        break;
    }
    case 70638:
    {
        returnValue = F("Bürgermeister-Welzenbach-Weg");
        break;
    }
    case 70639:
    {
        returnValue = F("Bürgermeister-Wendler-Str.");
        break;
    }
    case 70640:
    {
        returnValue = F("Bürgermeister-Wenglein-Str.");
        break;
    }
    case 70641:
    {
        returnValue = F("Bürgermeister-Wenig-Str.");
        break;
    }
    case 70642:
    {
        returnValue = F("Bürgermeister-Werle-Str.");
        break;
    }
    case 70643:
    {
        returnValue = F("Bürgermeister-Werner-Grampp-Str.");
        break;
    }
    case 70644:
    {
        returnValue = F("Bürgermeister-Werner-Str.");
        break;
    }
    case 70645:
    {
        returnValue = F("Bürgermeister-Werner-Weick-Str.");
        break;
    }
    case 70646:
    {
        returnValue = F("Bürgermeister-Westerhausen-Weg");
        break;
    }
    case 70647:
    {
        returnValue = F("Bürgermeister-Wever-Str.");
        break;
    }
    case 70648:
    {
        returnValue = F("Bürgermeister-Wewers-Str.");
        break;
    }
    case 70649:
    {
        returnValue = F("Bürgermeister-Widemann-Str.");
        break;
    }
    case 70650:
    {
        returnValue = F("Bürgermeister-Widmann-Str.");
        break;
    }
    case 70651:
    {
        returnValue = F("Bürgermeister-Wiebalck-Weg");
        break;
    }
    case 70652:
    {
        returnValue = F("Bürgermeister-Wiedenmann-Str.");
        break;
    }
    case 70653:
    {
        returnValue = F("Bürgermeister-Wiederer-Str.");
        break;
    }
    case 70654:
    {
        returnValue = F("Bürgermeister-Wiese-Str.");
        break;
    }
    case 70655:
    {
        returnValue = F("Bürgermeister-Wieser-Str.");
        break;
    }
    case 70656:
    {
        returnValue = F("Bürgermeister-Wild-Str.");
        break;
    }
    case 70657:
    {
        returnValue = F("Bürgermeister-Wilde-Str.");
        break;
    }
    case 70658:
    {
        returnValue = F("Bürgermeister-Wilhelm-Dresel-Park");
        break;
    }
    case 70659:
    {
        returnValue = F("Bürgermeister-Wilke-Str.");
        break;
    }
    case 70660:
    {
        returnValue = F("Bürgermeister-Wilkens-Str.");
        break;
    }
    case 70661:
    {
        returnValue = F("Bürgermeister-Will-Weg");
        break;
    }
    case 70662:
    {
        returnValue = F("Bürgermeister-Willand-Str.");
        break;
    }
    case 70663:
    {
        returnValue = F("Bürgermeister-Willi-Lührs-Str.");
        break;
    }
    case 70664:
    {
        returnValue = F("Bürgermeister-Willinger-Str.");
        break;
    }
    case 70665:
    {
        returnValue = F("Bürgermeister-Windl-Str.");
        break;
    }
    case 70666:
    {
        returnValue = F("Bürgermeister-Wingerter-Str.");
        break;
    }
    case 70667:
    {
        returnValue = F("Bürgermeister-Wink-Str.");
        break;
    }
    case 70668:
    {
        returnValue = F("Bürgermeister-Winkler-Str.");
        break;
    }
    case 70669:
    {
        returnValue = F("Bürgermeister-Wischhoff-Str.");
        break;
    }
    case 70670:
    {
        returnValue = F("Bürgermeister-Wittwer-Weg");
        break;
    }
    case 70671:
    {
        returnValue = F("Bürgermeister-Wocken-Str.");
        break;
    }
    case 70672:
    {
        returnValue = F("Bürgermeister-Wohlfarth-Str.");
        break;
    }
    case 70673:
    {
        returnValue = F("Bürgermeister-Wohlmuth-Str.");
        break;
    }
    case 70674:
    {
        returnValue = F("Bürgermeister-Wolf-Str.");
        break;
    }
    case 70675:
    {
        returnValue = F("Bürgermeister-Wucherer-Str.");
        break;
    }
    case 70676:
    {
        returnValue = F("Bürgermeister-Wulf-Str.");
        break;
    }
    case 70677:
    {
        returnValue = F("Bürgermeister-Wunderle-Str.");
        break;
    }
    case 70678:
    {
        returnValue = F("Bürgermeister-Wutz-Str.");
        break;
    }
    case 70679:
    {
        returnValue = F("Bürgermeister-Wutzelhofer-Str.");
        break;
    }
    case 70680:
    {
        returnValue = F("Bürgermeister-Wörl-Str.");
        break;
    }
    case 70681:
    {
        returnValue = F("Bürgermeister-Würmseher-Str.");
        break;
    }
    case 70682:
    {
        returnValue = F("Bürgermeister-Würzbach-Allee");
        break;
    }
    case 70683:
    {
        returnValue = F("Bürgermeister-Xaver-Reinhard-Str.");
        break;
    }
    case 70684:
    {
        returnValue = F("Bürgermeister-Zahn-Str.");
        break;
    }
    case 70685:
    {
        returnValue = F("Bürgermeister-Zauner-Ring");
        break;
    }
    case 70686:
    {
        returnValue = F("Bürgermeister-Zausinger-Str.");
        break;
    }
    case 70687:
    {
        returnValue = F("Bürgermeister-Zeck-Str.");
        break;
    }
    case 70688:
    {
        returnValue = F("Bürgermeister-Zeiler-Str.");
        break;
    }
    case 70689:
    {
        returnValue = F("Bürgermeister-Zeilhofer-Str.");
        break;
    }
    case 70690:
    {
        returnValue = F("Bürgermeister-Zeiner-Ring");
        break;
    }
    case 70691:
    {
        returnValue = F("Bürgermeister-Zeiß-Platz");
        break;
    }
    case 70692:
    {
        returnValue = F("Bürgermeister-Zeller-Str.");
        break;
    }
    case 70693:
    {
        returnValue = F("Bürgermeister-Zeller-Weg");
        break;
    }
    case 70694:
    {
        returnValue = F("Bürgermeister-Zellmeier-Str.");
        break;
    }
    case 70695:
    {
        returnValue = F("Bürgermeister-Zetlmeisl-Str.");
        break;
    }
    case 70696:
    {
        returnValue = F("Bürgermeister-Zeuner-Str.");
        break;
    }
    case 70697:
    {
        returnValue = F("Bürgermeister-Ziegler-Str.");
        break;
    }
    case 70698:
    {
        returnValue = F("Bürgermeister-Zimmermann-Str.");
        break;
    }
    case 70699:
    {
        returnValue = F("Bürgermeister-Zinder-Str.");
        break;
    }
    case 70700:
    {
        returnValue = F("Bürgermeister-Zitterer-Str.");
        break;
    }
    case 70701:
    {
        returnValue = F("Bürgermeister-Zobel-Ring");
        break;
    }
    case 70702:
    {
        returnValue = F("Bürgermeister-Zoch-Str.");
        break;
    }
    case 70703:
    {
        returnValue = F("Bürgermeister-zum-Felde-Weg");
        break;
    }
    case 70704:
    {
        returnValue = F("Bürgermeisterallee");
        break;
    }
    case 70705:
    {
        returnValue = F("Bürgermeistergang");
        break;
    }
    case 70706:
    {
        returnValue = F("Bürgermeistergarten");
        break;
    }
    case 70707:
    {
        returnValue = F("Bürgermeistergässchen");
        break;
    }
    case 70708:
    {
        returnValue = F("Bürgermeisterin-Reithmeier-Weg");
        break;
    }
    case 70709:
    {
        returnValue = F("Bürgermeisterkamp");
        break;
    }
    case 70710:
    {
        returnValue = F("Bürgermeisterkoppel");
        break;
    }
    case 70711:
    {
        returnValue = F("Bürgermeisterring");
        break;
    }
    case 70712:
    {
        returnValue = F("Bürgermeisterstr.");
        break;
    }
    case 70713:
    {
        returnValue = F("Bürgermeisterweg");
        break;
    }
    case 70714:
    {
        returnValue = F("Bürgermmeister-Allescher-Str.");
        break;
    }
    case 70715:
    {
        returnValue = F("Bürgermühle");
        break;
    }
    case 70716:
    {
        returnValue = F("Bürgerpark");
        break;
    }
    case 70717:
    {
        returnValue = F("Bürgerpark Altes Grün");
        break;
    }
    case 70718:
    {
        returnValue = F("Bürgerpark Bleiche");
        break;
    }
    case 70719:
    {
        returnValue = F("Bürgerpark Emstek");
        break;
    }
    case 70720:
    {
        returnValue = F("Bürgerpark Eschede");
        break;
    }
    case 70721:
    {
        returnValue = F("Bürgerpark Gotha");
        break;
    }
    case 70722:
    {
        returnValue = F("Bürgerpark Herrschaftsgärten");
        break;
    }
    case 70723:
    {
        returnValue = F("Bürgerpark Horstmar");
        break;
    }
    case 70724:
    {
        returnValue = F("Bürgerpark Molbergen");
        break;
    }
    case 70725:
    {
        returnValue = F("Bürgerpark Niederfischbach");
        break;
    }
    case 70726:
    {
        returnValue = F("Bürgerpark Remshalden");
        break;
    }
    case 70727:
    {
        returnValue = F("Bürgerpark Ringheim");
        break;
    }
    case 70728:
    {
        returnValue = F("Bürgerpark Seelze");
        break;
    }
    case 70729:
    {
        returnValue = F("Bürgerpark Stölln (BUGA 2015)");
        break;
    }
    case 70730:
    {
        returnValue = F("Bürgerpark Sulzbach-Rosenberg");
        break;
    }
    case 70731:
    {
        returnValue = F("Bürgerpark Twedt");
        break;
    }
    case 70732:
    {
        returnValue = F("Bürgerpark Wernigerode");
        break;
    }
    case 70733:
    {
        returnValue = F("Bürgerpark am Dorfteich");
        break;
    }
    case 70734:
    {
        returnValue = F("Bürgerpark am Ententeich");
        break;
    }
    case 70735:
    {
        returnValue = F("Bürgerpark „Alter Friedhof“");
        break;
    }
    case 70736:
    {
        returnValue = F("Bürgerparkstr.");
        break;
    }
    case 70737:
    {
        returnValue = F("Bürgerplatz");
        break;
    }
    case 70738:
    {
        returnValue = F("Bürgerplatz am Wehr");
        break;
    }
    case 70739:
    {
        returnValue = F("Bürgerreuther Str.");
        break;
    }
    case 70740:
    {
        returnValue = F("Bürgerschachtstr.");
        break;
    }
    case 70741:
    {
        returnValue = F("Bürgerschaft");
        break;
    }
    case 70742:
    {
        returnValue = F("Bürgerschwaige");
        break;
    }
    case 70743:
    {
        returnValue = F("Bürgerschützenstr.");
        break;
    }
    case 70744:
    {
        returnValue = F("Bürgerseesträßle");
        break;
    }
    case 70745:
    {
        returnValue = F("Bürgerseeweg");
        break;
    }
    case 70746:
    {
        returnValue = F("Bürgersgarten");
        break;
    }
    case 70747:
    {
        returnValue = F("Bürgersteig");
        break;
    }
    case 70748:
    {
        returnValue = F("Bürgerstiege");
        break;
    }
    case 70749:
    {
        returnValue = F("Bürgerstr.");
        break;
    }
    case 70750:
    {
        returnValue = F("Bürgerswalder Str.");
        break;
    }
    case 70751:
    {
        returnValue = F("Bürgertal");
        break;
    }
    case 70752:
    {
        returnValue = F("Bürgertalstr.");
        break;
    }
    case 70753:
    {
        returnValue = F("Bürgerturmplatz");
        break;
    }
    case 70754:
    {
        returnValue = F("Bürgerturmstr.");
        break;
    }
    case 70755:
    {
        returnValue = F("Bürgerwald");
        break;
    }
    case 70756:
    {
        returnValue = F("Bürgerwald Langen");
        break;
    }
    case 70757:
    {
        returnValue = F("Bürgerwald Radbruch");
        break;
    }
    case 70758:
    {
        returnValue = F("Bürgerwaldstr.");
        break;
    }
    case 70759:
    {
        returnValue = F("Bürgerwaldweg");
        break;
    }
    case 70760:
    {
        returnValue = F("Bürgerweg");
        break;
    }
    case 70761:
    {
        returnValue = F("Bürgerwehrstr.");
        break;
    }
    case 70762:
    {
        returnValue = F("Bürgerweide");
        break;
    }
    case 70763:
    {
        returnValue = F("Bürgerwendemark");
        break;
    }
    case 70764:
    {
        returnValue = F("Bürgerwiese");
        break;
    }
    case 70765:
    {
        returnValue = F("Bürgerwiese Danndorf");
        break;
    }
    case 70766:
    {
        returnValue = F("Bürgerwiesen");
        break;
    }
    case 70767:
    {
        returnValue = F("Bürgerwäldchen");
        break;
    }
    case 70768:
    {
        returnValue = F("Bürgeräcker");
        break;
    }
    case 70769:
    {
        returnValue = F("Bürggasse");
        break;
    }
    case 70770:
    {
        returnValue = F("Bürglaß");
        break;
    }
    case 70771:
    {
        returnValue = F("Bürgle 7a, 7b, 9");
        break;
    }
    case 70772:
    {
        returnValue = F("Bürglebuckstr.");
        break;
    }
    case 70773:
    {
        returnValue = F("Bürglein");
        break;
    }
    case 70774:
    {
        returnValue = F("Bürgleiner Str.");
        break;
    }
    case 70775:
    {
        returnValue = F("Bürgleinsweg");
        break;
    }
    case 70776:
    {
        returnValue = F("Bürglen");
        break;
    }
    case 70777:
    {
        returnValue = F("Bürgler Str.");
        break;
    }
    case 70778:
    {
        returnValue = F("Bürglerweg");
        break;
    }
    case 70779:
    {
        returnValue = F("Bürglesrain");
        break;
    }
    case 70780:
    {
        returnValue = F("Bürglestr.");
        break;
    }
    case 70781:
    {
        returnValue = F("Bürglestr. 6 und 8");
        break;
    }
    case 70782:
    {
        returnValue = F("Bürglesweg");
        break;
    }
    case 70783:
    {
        returnValue = F("Bürgleweg");
        break;
    }
    case 70784:
    {
        returnValue = F("Bürgstadter Str.");
        break;
    }
    case 70785:
    {
        returnValue = F("Bürgstr.");
        break;
    }
    case 70786:
    {
        returnValue = F("Bürgstädter Str.");
        break;
    }
    case 70787:
    {
        returnValue = F("Bürgweg");
        break;
    }
    case 70788:
    {
        returnValue = F("Bürkelweg");
        break;
    }
    case 70789:
    {
        returnValue = F("Bürkhofstr.");
        break;
    }
    case 70790:
    {
        returnValue = F("Bürkigweg");
        break;
    }
    case 70791:
    {
        returnValue = F("Bürklenweg");
        break;
    }
    case 70792:
    {
        returnValue = F("Bürklesrückensackweg");
        break;
    }
    case 70793:
    {
        returnValue = F("Bürkleweg");
        break;
    }
    case 70794:
    {
        returnValue = F("Bürklin-Wolf-Str.");
        break;
    }
    case 70795:
    {
        returnValue = F("Bürklinstr.");
        break;
    }
    case 70796:
    {
        returnValue = F("Bürlehofweg");
        break;
    }
    case 70797:
    {
        returnValue = F("Bürresheimer Gasse");
        break;
    }
    case 70798:
    {
        returnValue = F("Bürresheimer Str.");
        break;
    }
    case 70799:
    {
        returnValue = F("Bürrleweg");
        break;
    }
    case 70800:
    {
        returnValue = F("Bürser Str.");
        break;
    }
    case 70801:
    {
        returnValue = F("Bürsteler Feld");
        break;
    }
    case 70802:
    {
        returnValue = F("Bürsteler Richtweg");
        break;
    }
    case 70803:
    {
        returnValue = F("Bürsteler Str.");
        break;
    }
    case 70804:
    {
        returnValue = F("Bürstleinshegeschneise");
        break;
    }
    case 70805:
    {
        returnValue = F("Bürstlingweg");
        break;
    }
    case 70806:
    {
        returnValue = F("Bürststr.");
        break;
    }
    case 70807:
    {
        returnValue = F("Bürstädter Str.");
        break;
    }
    case 70808:
    {
        returnValue = F("Bürstädter Weg");
        break;
    }
    case 70809:
    {
        returnValue = F("Bürtel");
        break;
    }
    case 70810:
    {
        returnValue = F("Bürtleinsweg");
        break;
    }
    case 70811:
    {
        returnValue = F("Bürtsch-Geräumt");
        break;
    }
    case 70812:
    {
        returnValue = F("Bürvenicher Str.");
        break;
    }
    case 70813:
    {
        returnValue = F("Büsbergweg");
        break;
    }
    case 70814:
    {
        returnValue = F("Büschbrück");
        break;
    }
    case 70815:
    {
        returnValue = F("Büscheck");
        break;
    }
    case 70816:
    {
        returnValue = F("Büscheicher Str.");
        break;
    }
    case 70817:
    {
        returnValue = F("Büscheid");
        break;
    }
    case 70818:
    {
        returnValue = F("Büscheider-Weg");
        break;
    }
    case 70819:
    {
        returnValue = F("Büschelbacherweg");
        break;
    }
    case 70820:
    {
        returnValue = F("Büschelberg");
        break;
    }
    case 70821:
    {
        returnValue = F("Büschelchen");
        break;
    }
    case 70822:
    {
        returnValue = F("Büscheler Str.");
        break;
    }
    case 70823:
    {
        returnValue = F("Büschelhofer Str.");
        break;
    }
    case 70824:
    {
        returnValue = F("Büschelmannstr.");
        break;
    }
    case 70825:
    {
        returnValue = F("Büschelskamp");
        break;
    }
    case 70826:
    {
        returnValue = F("Büschelstr.");
        break;
    }
    case 70827:
    {
        returnValue = F("Büschem");
        break;
    }
    case 70828:
    {
        returnValue = F("Büschen");
        break;
    }
    case 70829:
    {
        returnValue = F("Büschenberg");
        break;
    }
    case 70830:
    {
        returnValue = F("Büschenloh");
        break;
    }
    case 70831:
    {
        returnValue = F("Büschenweg");
        break;
    }
    case 70832:
    {
        returnValue = F("Büscher Bruch");
        break;
    }
    case 70833:
    {
        returnValue = F("Büscher Str.");
        break;
    }
    case 70834:
    {
        returnValue = F("Büscher-Eilert-Str.");
        break;
    }
    case 70835:
    {
        returnValue = F("Büscherfeld");
        break;
    }
    case 70836:
    {
        returnValue = F("Büscherhöfchen");
        break;
    }
    case 70837:
    {
        returnValue = F("Büscherkieler Hof");
        break;
    }
    case 70838:
    {
        returnValue = F("Büscherstr.");
        break;
    }
    case 70839:
    {
        returnValue = F("Büscherweg");
        break;
    }
    case 70840:
    {
        returnValue = F("Büschfelder Str.");
        break;
    }
    case 70841:
    {
        returnValue = F("Büschhausen");
        break;
    }
    case 70842:
    {
        returnValue = F("Büschhof");
        break;
    }
    case 70843:
    {
        returnValue = F("Büschingstr.");
        break;
    }
    case 70844:
    {
        returnValue = F("Büschjeasje");
        break;
    }
    case 70845:
    {
        returnValue = F("Büschleinweg");
        break;
    }
    case 70846:
    {
        returnValue = F("Büschlesweg");
        break;
    }
    case 70847:
    {
        returnValue = F("Büschweg");
        break;
    }
    case 70848:
    {
        returnValue = F("Büschwiesenweg");
        break;
    }
    case 70849:
    {
        returnValue = F("Büsdorfer Str.");
        break;
    }
    case 70850:
    {
        returnValue = F("Büsenbergstr.");
        break;
    }
    case 70851:
    {
        returnValue = F("Büsensieden");
        break;
    }
    case 70852:
    {
        returnValue = F("Büsenteich");
        break;
    }
    case 70853:
    {
        returnValue = F("Büsgang");
        break;
    }
    case 70854:
    {
        returnValue = F("Büsinger Str.");
        break;
    }
    case 70855:
    {
        returnValue = F("Büskerweg");
        break;
    }
    case 70856:
    {
        returnValue = F("Büsnauer Str.");
        break;
    }
    case 70857:
    {
        returnValue = F("Büssenbarg");
        break;
    }
    case 70858:
    {
        returnValue = F("Büssengasse");
        break;
    }
    case 70859:
    {
        returnValue = F("Büssenschüttstr.");
        break;
    }
    case 70860:
    {
        returnValue = F("Büssingstr.");
        break;
    }
    case 70861:
    {
        returnValue = F("Büssow");
        break;
    }
    case 70862:
    {
        returnValue = F("Büstedt");
        break;
    }
    case 70863:
    {
        returnValue = F("Büsumer Ring");
        break;
    }
    case 70864:
    {
        returnValue = F("Büsumer Str.");
        break;
    }
    case 70865:
    {
        returnValue = F("Büsäge");
        break;
    }
    case 70866:
    {
        returnValue = F("Bütenhorst");
        break;
    }
    case 70867:
    {
        returnValue = F("Bütenweg");
        break;
    }
    case 70868:
    {
        returnValue = F("Bütepage-Weg");
        break;
    }
    case 70869:
    {
        returnValue = F("Bütervenn");
        break;
    }
    case 70870:
    {
        returnValue = F("Büterweg");
        break;
    }
    case 70871:
    {
        returnValue = F("Bütferingstr.");
        break;
    }
    case 70872:
    {
        returnValue = F("Büthberg");
        break;
    }
    case 70873:
    {
        returnValue = F("Büthweg");
        break;
    }
    case 70874:
    {
        returnValue = F("Bütj Dik");
        break;
    }
    case 70875:
    {
        returnValue = F("Bütjestr.");
        break;
    }
    case 70876:
    {
        returnValue = F("Bütjthaarep Nuurd");
        break;
    }
    case 70877:
    {
        returnValue = F("Bütjthaarep Süüd");
        break;
    }
    case 70878:
    {
        returnValue = F("Bütlinger Str.");
        break;
    }
    case 70879:
    {
        returnValue = F("Bütlinger Weg");
        break;
    }
    case 70880:
    {
        returnValue = F("Bütower Str.");
        break;
    }
    case 70881:
    {
        returnValue = F("Bütower Weg");
        break;
    }
    case 70882:
    {
        returnValue = F("Bütt-Soll-Weg");
        break;
    }
    case 70883:
    {
        returnValue = F("Büttel");
        break;
    }
    case 70884:
    {
        returnValue = F("Büttelbaum");
        break;
    }
    case 70885:
    {
        returnValue = F("Büttelbergstr.");
        break;
    }
    case 70886:
    {
        returnValue = F("Büttelborner Str.");
        break;
    }
    case 70887:
    {
        returnValue = F("Büttelborner Weg");
        break;
    }
    case 70888:
    {
        returnValue = F("Büttelbronner Str.");
        break;
    }
    case 70889:
    {
        returnValue = F("Büttelbrunner Pfad");
        break;
    }
    case 70890:
    {
        returnValue = F("Bütteler Specken");
        break;
    }
    case 70891:
    {
        returnValue = F("Bütteler Str.");
        break;
    }
    case 70892:
    {
        returnValue = F("Bütteler Weg");
        break;
    }
    case 70893:
    {
        returnValue = F("Büttelgasse");
        break;
    }
    case 70894:
    {
        returnValue = F("Büttellochweg");
        break;
    }
    case 70895:
    {
        returnValue = F("Büttelsbergweg");
        break;
    }
    case 70896:
    {
        returnValue = F("Büttelsgasse");
        break;
    }
    case 70897:
    {
        returnValue = F("Büttelstr.");
        break;
    }
    case 70898:
    {
        returnValue = F("Büttelsweg");
        break;
    }
    case 70899:
    {
        returnValue = F("Büttelweg");
        break;
    }
    case 70900:
    {
        returnValue = F("Büttelwiesschneise");
        break;
    }
    case 70901:
    {
        returnValue = F("Büttemerweg");
        break;
    }
    case 70902:
    {
        returnValue = F("Büttenbarg");
        break;
    }
    case 70903:
    {
        returnValue = F("Büttenberger Str.");
        break;
    }
    case 70904:
    {
        returnValue = F("Büttendorfer Str.");
        break;
    }
    case 70905:
    {
        returnValue = F("Büttenstr.");
        break;
    }
    case 70906:
    {
        returnValue = F("Büttensülzenweg");
        break;
    }
    case 70907:
    {
        returnValue = F("Büttentalweg");
        break;
    }
    case 70908:
    {
        returnValue = F("Büttenweg");
        break;
    }
    case 70909:
    {
        returnValue = F("Bütternweg");
        break;
    }
    case 70910:
    {
        returnValue = F("Büttgener Buscherhöfe");
        break;
    }
    case 70911:
    {
        returnValue = F("Büttgener Str.");
        break;
    }
    case 70912:
    {
        returnValue = F("Büttgener Weg");
        break;
    }
    case 70913:
    {
        returnValue = F("Büttger Weg");
        break;
    }
    case 70914:
    {
        returnValue = F("Büttgerwald");
        break;
    }
    case 70915:
    {
        returnValue = F("Büttharder Str.");
        break;
    }
    case 70916:
    {
        returnValue = F("Büttinghauser Feldweg");
        break;
    }
    case 70917:
    {
        returnValue = F("Büttjebüller Kirchenweg");
        break;
    }
    case 70918:
    {
        returnValue = F("Büttmecker Weg");
        break;
    }
    case 70919:
    {
        returnValue = F("Büttnaustr.");
        break;
    }
    case 70920:
    {
        returnValue = F("Büttnergasse");
        break;
    }
    case 70921:
    {
        returnValue = F("Büttnerloch");
        break;
    }
    case 70922:
    {
        returnValue = F("Büttnerplatz");
        break;
    }
    case 70923:
    {
        returnValue = F("Büttnersberg");
        break;
    }
    case 70924:
    {
        returnValue = F("Büttnersgasse");
        break;
    }
    case 70925:
    {
        returnValue = F("Büttnersgrund");
        break;
    }
    case 70926:
    {
        returnValue = F("Büttnerstr.");
        break;
    }
    case 70927:
    {
        returnValue = F("Büttnerszeche");
        break;
    }
    case 70928:
    {
        returnValue = F("Büttnerweg");
        break;
    }
    case 70929:
    {
        returnValue = F("Büttpedderweg");
        break;
    }
    case 70930:
    {
        returnValue = F("Büttrup");
        break;
    }
    case 70931:
    {
        returnValue = F("Büttstedter Str.");
        break;
    }
    case 70932:
    {
        returnValue = F("Büttweg");
        break;
    }
    case 70933:
    {
        returnValue = F("Bütze");
        break;
    }
    case 70934:
    {
        returnValue = F("Bützen");
        break;
    }
    case 70935:
    {
        returnValue = F("Bützenrainweg");
        break;
    }
    case 70936:
    {
        returnValue = F("Bützenweg");
        break;
    }
    case 70937:
    {
        returnValue = F("Bütziweg");
        break;
    }
    case 70938:
    {
        returnValue = F("Bützkamp");
        break;
    }
    case 70939:
    {
        returnValue = F("Bützleinsweg");
        break;
    }
    case 70940:
    {
        returnValue = F("Bützmattweg");
        break;
    }
    case 70941:
    {
        returnValue = F("Bützower Chaussee");
        break;
    }
    case 70942:
    {
        returnValue = F("Bützower Landeg");
        break;
    }
    case 70943:
    {
        returnValue = F("Bützower Ring");
        break;
    }
    case 70944:
    {
        returnValue = F("Bützower Str.");
        break;
    }
    case 70945:
    {
        returnValue = F("Bützower Str. Ausbau Penzin");
        break;
    }
    case 70946:
    {
        returnValue = F("Bützower Str.-Ausbau");
        break;
    }
    case 70947:
    {
        returnValue = F("Büxter Weg");
        break;
    }
    case 70948:
    {
        returnValue = F("Büßergasse");
        break;
    }
    case 70949:
    {
        returnValue = F("Büßertal");
        break;
    }
    case 70950:
    {
        returnValue = F("Büßfelder Str.");
        break;
    }
    case 70951:
    {
        returnValue = F("Büßlinger Str.");
        break;
    }
    case 70952:
    {
        returnValue = F("Büürlön");
        break;
    }
    case 70953:
    {
        returnValue = F("Büüschjässje");
        break;
    }
    }
    return returnValue;
}
