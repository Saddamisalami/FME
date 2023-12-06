#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameM2(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 220022:
    {
        returnValue = F("Melsung Weg");
        break;
    }
    case 220023:
    {
        returnValue = F("Melsunger Str.");
        break;
    }
    case 220024:
    {
        returnValue = F("Melsunger Weg");
        break;
    }
    case 220025:
    {
        returnValue = F("Meltendorf");
        break;
    }
    case 220026:
    {
        returnValue = F("Meltendorfer Str.");
        break;
    }
    case 220027:
    {
        returnValue = F("Melters");
        break;
    }
    case 220028:
    {
        returnValue = F("Melterweg");
        break;
    }
    case 220029:
    {
        returnValue = F("Meltewitzer Str.");
        break;
    }
    case 220030:
    {
        returnValue = F("Meltitz");
        break;
    }
    case 220031:
    {
        returnValue = F("Meltzerstr.");
        break;
    }
    case 220032:
    {
        returnValue = F("Melwiese");
        break;
    }
    case 220033:
    {
        returnValue = F("Melzdorfer Str.");
        break;
    }
    case 220034:
    {
        returnValue = F("Melzergrundweg");
        break;
    }
    case 220035:
    {
        returnValue = F("Melzerstr.");
        break;
    }
    case 220036:
    {
        returnValue = F("Melzerweg");
        break;
    }
    case 220037:
    {
        returnValue = F("Melzgarten");
        break;
    }
    case 220038:
    {
        returnValue = F("Melzower Damm");
        break;
    }
    case 220039:
    {
        returnValue = F("Melzower Str.");
        break;
    }
    case 220040:
    {
        returnValue = F("Melzwiger Str.");
        break;
    }
    case 220041:
    {
        returnValue = F("Membacher Linie");
        break;
    }
    case 220042:
    {
        returnValue = F("Membacher Steg");
        break;
    }
    case 220043:
    {
        returnValue = F("Membacher Str.");
        break;
    }
    case 220044:
    {
        returnValue = F("Membacher Weg");
        break;
    }
    case 220045:
    {
        returnValue = F("Membergstr.");
        break;
    }
    case 220046:
    {
        returnValue = F("Membrodsweg");
        break;
    }
    case 220047:
    {
        returnValue = F("Memeler Platz");
        break;
    }
    case 220048:
    {
        returnValue = F("Memeler Ring");
        break;
    }
    case 220049:
    {
        returnValue = F("Memeler Stieg");
        break;
    }
    case 220050:
    {
        returnValue = F("Memeler Str.");
        break;
    }
    case 220051:
    {
        returnValue = F("Memeler Weg");
        break;
    }
    case 220052:
    {
        returnValue = F("Memelerstr.");
        break;
    }
    case 220053:
    {
        returnValue = F("Memellandstr.");
        break;
    }
    case 220054:
    {
        returnValue = F("Memellandweg");
        break;
    }
    case 220055:
    {
        returnValue = F("Memelländer Str.");
        break;
    }
    case 220056:
    {
        returnValue = F("Memelplatz");
        break;
    }
    case 220057:
    {
        returnValue = F("Memelring");
        break;
    }
    case 220058:
    {
        returnValue = F("Memelstr.");
        break;
    }
    case 220059:
    {
        returnValue = F("Memelweg");
        break;
    }
    case 220060:
    {
        returnValue = F("Memeringweg");
        break;
    }
    case 220061:
    {
        returnValue = F("Memgaster Weg");
        break;
    }
    case 220062:
    {
        returnValue = F("Memhardtweg");
        break;
    }
    case 220063:
    {
        returnValue = F("Meminger Str.");
        break;
    }
    case 220064:
    {
        returnValue = F("Memlebener Str.");
        break;
    }
    case 220065:
    {
        returnValue = F("Memlebenstr.");
        break;
    }
    case 220066:
    {
        returnValue = F("Memlingstr.");
        break;
    }
    case 220067:
    {
        returnValue = F("Memlingweg");
        break;
    }
    case 220068:
    {
        returnValue = F("Memmelers Wiese");
        break;
    }
    case 220069:
    {
        returnValue = F("Memmelsdorfer Str.");
        break;
    }
    case 220070:
    {
        returnValue = F("Memmenhauser Str.");
        break;
    }
    case 220071:
    {
        returnValue = F("Memmertbalje");
        break;
    }
    case 220072:
    {
        returnValue = F("Memmertstr.");
        break;
    }
    case 220073:
    {
        returnValue = F("Memmertweg");
        break;
    }
    case 220074:
    {
        returnValue = F("Memmhauser Str.");
        break;
    }
    case 220075:
    {
        returnValue = F("Memming");
        break;
    }
    case 220076:
    {
        returnValue = F("Memminger Ach Weg");
        break;
    }
    case 220077:
    {
        returnValue = F("Memminger Platz");
        break;
    }
    case 220078:
    {
        returnValue = F("Memminger Str.");
        break;
    }
    case 220079:
    {
        returnValue = F("Memminger Torplatz");
        break;
    }
    case 220080:
    {
        returnValue = F("Memminger Torstr.");
        break;
    }
    case 220081:
    {
        returnValue = F("Memminger Weg");
        break;
    }
    case 220082:
    {
        returnValue = F("Memmingerhauweg");
        break;
    }
    case 220083:
    {
        returnValue = F("Memmingerstr.");
        break;
    }
    case 220084:
    {
        returnValue = F("Memmings Lohne");
        break;
    }
    case 220085:
    {
        returnValue = F("Memmostr.");
        break;
    }
    case 220086:
    {
        returnValue = F("Memser Kirchweg");
        break;
    }
    case 220087:
    {
        returnValue = F("Menachem-Begin-Str.");
        break;
    }
    case 220088:
    {
        returnValue = F("Menantesstr.");
        break;
    }
    case 220089:
    {
        returnValue = F("Menanusstr.");
        break;
    }
    case 220090:
    {
        returnValue = F("Menchendahler Str.");
        break;
    }
    case 220091:
    {
        returnValue = F("Menchestr.");
        break;
    }
    case 220092:
    {
        returnValue = F("Menchsgasse");
        break;
    }
    case 220093:
    {
        returnValue = F("Menckestr.");
        break;
    }
    case 220094:
    {
        returnValue = F("Mende-Ring");
        break;
    }
    case 220095:
    {
        returnValue = F("Mendegrundweg");
        break;
    }
    case 220096:
    {
        returnValue = F("Mendegässchen");
        break;
    }
    case 220097:
    {
        returnValue = F("Mendel-Grundmann-Str.");
        break;
    }
    case 220098:
    {
        returnValue = F("Mendel-Rosenbaum-Weg");
        break;
    }
    case 220099:
    {
        returnValue = F("Mendelejewplatz");
        break;
    }
    case 220100:
    {
        returnValue = F("Mendelejewstr.");
        break;
    }
    case 220101:
    {
        returnValue = F("Mendelejewweg");
        break;
    }
    case 220102:
    {
        returnValue = F("Mendelsohn-Bartholdy-Platz");
        break;
    }
    case 220103:
    {
        returnValue = F("Mendelsohnstr.");
        break;
    }
    case 220104:
    {
        returnValue = F("Mendelsohnweg");
        break;
    }
    case 220105:
    {
        returnValue = F("Mendelsonplatz");
        break;
    }
    case 220106:
    {
        returnValue = F("Mendelssohn-Bartholdy-Str.");
        break;
    }
    case 220107:
    {
        returnValue = F("Mendelssohn-Bartholdy-Weg");
        break;
    }
    case 220108:
    {
        returnValue = F("Mendelssohnplatz");
        break;
    }
    case 220109:
    {
        returnValue = F("Mendelssohnstr.");
        break;
    }
    case 220110:
    {
        returnValue = F("Mendelssohnweg");
        break;
    }
    case 220111:
    {
        returnValue = F("Mendelssonweg");
        break;
    }
    case 220112:
    {
        returnValue = F("Mendelstr.");
        break;
    }
    case 220113:
    {
        returnValue = F("Mendelweg");
        break;
    }
    case 220114:
    {
        returnValue = F("Mendener Brücke");
        break;
    }
    case 220115:
    {
        returnValue = F("Mendener Höhe");
        break;
    }
    case 220116:
    {
        returnValue = F("Mendener Landstr.");
        break;
    }
    case 220117:
    {
        returnValue = F("Mendener Str.");
        break;
    }
    case 220118:
    {
        returnValue = F("Mendener Weg");
        break;
    }
    case 220119:
    {
        returnValue = F("Mendestr.");
        break;
    }
    case 220120:
    {
        returnValue = F("Mendhäuser Hauptstr.");
        break;
    }
    case 220121:
    {
        returnValue = F("Mendhäuser Str.");
        break;
    }
    case 220122:
    {
        returnValue = F("Mendiger Str.");
        break;
    }
    case 220123:
    {
        returnValue = F("Mendlerstr.");
        break;
    }
    case 220124:
    {
        returnValue = F("Mendlstr.");
        break;
    }
    case 220125:
    {
        returnValue = F("Mendorfer Str.");
        break;
    }
    case 220126:
    {
        returnValue = F("Mendorferbucher Str.");
        break;
    }
    case 220127:
    {
        returnValue = F("Mendried");
        break;
    }
    case 220128:
    {
        returnValue = F("Mendsgasse");
        break;
    }
    case 220129:
    {
        returnValue = F("Mendt");
        break;
    }
    case 220130:
    {
        returnValue = F("Mendter Str.");
        break;
    }
    case 220131:
    {
        returnValue = F("Menelzhofen");
        break;
    }
    case 220132:
    {
        returnValue = F("Mengeder Str.");
        break;
    }
    case 220133:
    {
        returnValue = F("Mengelbacher Pfad");
        break;
    }
    case 220134:
    {
        returnValue = F("Mengelbergstr.");
        break;
    }
    case 220135:
    {
        returnValue = F("Mengelestr.");
        break;
    }
    case 220136:
    {
        returnValue = F("Mengelingscher Weg");
        break;
    }
    case 220137:
    {
        returnValue = F("Mengelröder Weg");
        break;
    }
    case 220138:
    {
        returnValue = F("Mengelsdorf");
        break;
    }
    case 220139:
    {
        returnValue = F("Mengelsgasse");
        break;
    }
    case 220140:
    {
        returnValue = F("Mengelshainer Str.");
        break;
    }
    case 220141:
    {
        returnValue = F("Mengelshäuser Teiche");
        break;
    }
    case 220142:
    {
        returnValue = F("Mengelsiepen");
        break;
    }
    case 220143:
    {
        returnValue = F("Mengelsweg");
        break;
    }
    case 220144:
    {
        returnValue = F("Mengener Str.");
        break;
    }
    case 220145:
    {
        returnValue = F("Mengenicher Str.");
        break;
    }
    case 220146:
    {
        returnValue = F("Mengenweg");
        break;
    }
    case 220147:
    {
        returnValue = F("Mengerberg");
        break;
    }
    case 220148:
    {
        returnValue = F("Mengeringhäuser Str.");
        break;
    }
    case 220149:
    {
        returnValue = F("Mengersenstr.");
        break;
    }
    case 220150:
    {
        returnValue = F("Mengerser Str.");
        break;
    }
    case 220151:
    {
        returnValue = F("Mengershausen");
        break;
    }
    case 220152:
    {
        returnValue = F("Mengershäuser Str.");
        break;
    }
    case 220153:
    {
        returnValue = F("Mengershäuser Weg");
        break;
    }
    case 220154:
    {
        returnValue = F("Mengerskircher Weg");
        break;
    }
    case 220155:
    {
        returnValue = F("Mengersreuth");
        break;
    }
    case 220156:
    {
        returnValue = F("Mengersreuther Str.");
        break;
    }
    case 220157:
    {
        returnValue = F("Mengerts Garten");
        break;
    }
    case 220158:
    {
        returnValue = F("Mengertstr.");
        break;
    }
    case 220159:
    {
        returnValue = F("Mengestr.");
        break;
    }
    case 220160:
    {
        returnValue = F("Mengesweg");
        break;
    }
    case 220161:
    {
        returnValue = F("Mengeweg");
        break;
    }
    case 220162:
    {
        returnValue = F("Mengkofener Str.");
        break;
    }
    case 220163:
    {
        returnValue = F("Menglers");
        break;
    }
    case 220164:
    {
        returnValue = F("Menglersche Weg");
        break;
    }
    case 220165:
    {
        returnValue = F("Mengsberger Str.");
        break;
    }
    case 220166:
    {
        returnValue = F("Mengshofstr.");
        break;
    }
    case 220167:
    {
        returnValue = F("Mengshäuser Str.");
        break;
    }
    case 220168:
    {
        returnValue = F("Mengshäuser Weg");
        break;
    }
    case 220169:
    {
        returnValue = F("Mengstr.");
        break;
    }
    case 220170:
    {
        returnValue = F("Mengweide");
        break;
    }
    case 220171:
    {
        returnValue = F("Menhardsweiler");
        break;
    }
    case 220172:
    {
        returnValue = F("Menhoferweg");
        break;
    }
    case 220173:
    {
        returnValue = F("Menimaneweg");
        break;
    }
    case 220174:
    {
        returnValue = F("Meningen");
        break;
    }
    case 220175:
    {
        returnValue = F("Meninger Weg");
        break;
    }
    case 220176:
    {
        returnValue = F("Meniusstr.");
        break;
    }
    case 220177:
    {
        returnValue = F("Menizhoferweg");
        break;
    }
    case 220178:
    {
        returnValue = F("Menke Highway");
        break;
    }
    case 220179:
    {
        returnValue = F("Menkebachweg");
        break;
    }
    case 220180:
    {
        returnValue = F("Menkelweg");
        break;
    }
    case 220181:
    {
        returnValue = F("Menken Weg");
        break;
    }
    case 220182:
    {
        returnValue = F("Menkenberg");
        break;
    }
    case 220183:
    {
        returnValue = F("Menkenbruch");
        break;
    }
    case 220184:
    {
        returnValue = F("Menkendorfer Str.");
        break;
    }
    case 220185:
    {
        returnValue = F("Menkendorfer Weg");
        break;
    }
    case 220186:
    {
        returnValue = F("Menkenfeld");
        break;
    }
    case 220187:
    {
        returnValue = F("Menkenkamp");
        break;
    }
    case 220188:
    {
        returnValue = F("Menkenorde");
        break;
    }
    case 220189:
    {
        returnValue = F("Menkenstr.");
        break;
    }
    case 220190:
    {
        returnValue = F("Menkenweg");
        break;
    }
    case 220191:
    {
        returnValue = F("Menkestr.");
        break;
    }
    case 220192:
    {
        returnValue = F("Menkeweg");
        break;
    }
    case 220193:
    {
        returnValue = F("Menkhausen");
        break;
    }
    case 220194:
    {
        returnValue = F("Menkhauser Weg");
        break;
    }
    case 220195:
    {
        returnValue = F("Menkin");
        break;
    }
    case 220196:
    {
        returnValue = F("Menkin Alleeberg");
        break;
    }
    case 220197:
    {
        returnValue = F("Menkin An der Chaussee");
        break;
    }
    case 220198:
    {
        returnValue = F("Menkin Hofstr.");
        break;
    }
    case 220199:
    {
        returnValue = F("Menkiner Str.");
        break;
    }
    case 220200:
    {
        returnValue = F("Menkinger Weg");
        break;
    }
    case 220201:
    {
        returnValue = F("Menndorfer Weg");
        break;
    }
    case 220202:
    {
        returnValue = F("Mennegarten");
        break;
    }
    case 220203:
    {
        returnValue = F("Mennekrath");
        break;
    }
    case 220204:
    {
        returnValue = F("Mennekrather Kirchweg");
        break;
    }
    case 220205:
    {
        returnValue = F("Mennekrather Weg");
        break;
    }
    case 220206:
    {
        returnValue = F("Menner Str.");
        break;
    }
    case 220207:
    {
        returnValue = F("Menner Weg");
        break;
    }
    case 220208:
    {
        returnValue = F("Mennersbergweg");
        break;
    }
    case 220209:
    {
        returnValue = F("Mennertalstr.");
        break;
    }
    case 220210:
    {
        returnValue = F("Mennewitz");
        break;
    }
    case 220211:
    {
        returnValue = F("Mennhausen");
        break;
    }
    case 220212:
    {
        returnValue = F("Mennhauser Weg");
        break;
    }
    case 220213:
    {
        returnValue = F("Menni-Rosendahl-Str.");
        break;
    }
    case 220214:
    {
        returnValue = F("Mennighüffener Str.");
        break;
    }
    case 220215:
    {
        returnValue = F("Menninger Str.");
        break;
    }
    case 220216:
    {
        returnValue = F("Menningerstr.");
        break;
    }
    case 220217:
    {
        returnValue = F("Menninghauser Str.");
        break;
    }
    case 220218:
    {
        returnValue = F("Mennkausener Str.");
        break;
    }
    case 220219:
    {
        returnValue = F("Menno-Dirks-Straat");
        break;
    }
    case 220220:
    {
        returnValue = F("Menno-Peters-Str.");
        break;
    }
    case 220221:
    {
        returnValue = F("Menno-Simons-Str.");
        break;
    }
    case 220222:
    {
        returnValue = F("Menno-Simons-Weg");
        break;
    }
    case 220223:
    {
        returnValue = F("Mennoniten-Kirch-Str.");
        break;
    }
    case 220224:
    {
        returnValue = F("Mennonitenhofstr.");
        break;
    }
    case 220225:
    {
        returnValue = F("Mennonitenlohne");
        break;
    }
    case 220226:
    {
        returnValue = F("Mennonitenstr.");
        break;
    }
    case 220227:
    {
        returnValue = F("Mennonitenweg");
        break;
    }
    case 220228:
    {
        returnValue = F("Mennonnitenstiege");
        break;
    }
    case 220229:
    {
        returnValue = F("Mennostr.");
        break;
    }
    case 220230:
    {
        returnValue = F("Mennrath");
        break;
    }
    case 220231:
    {
        returnValue = F("Mennrather Str.");
        break;
    }
    case 220232:
    {
        returnValue = F("Mennrathheide");
        break;
    }
    case 220233:
    {
        returnValue = F("Mennrathhött");
        break;
    }
    case 220234:
    {
        returnValue = F("Mennrathschmidt");
        break;
    }
    case 220235:
    {
        returnValue = F("Mennsdorf");
        break;
    }
    case 220236:
    {
        returnValue = F("Mennstr.");
        break;
    }
    case 220237:
    {
        returnValue = F("Mennwangen");
        break;
    }
    case 220238:
    {
        returnValue = F("Mennwanger Str.");
        break;
    }
    case 220239:
    {
        returnValue = F("Mennäckerweg");
        break;
    }
    case 220240:
    {
        returnValue = F("Menrathstr.");
        break;
    }
    case 220241:
    {
        returnValue = F("Menricusstr.");
        break;
    }
    case 220242:
    {
        returnValue = F("Mensasteg");
        break;
    }
    case 220243:
    {
        returnValue = F("Mensastr.");
        break;
    }
    case 220244:
    {
        returnValue = F("Mensaweg");
        break;
    }
    case 220245:
    {
        returnValue = F("Menschenaffen");
        break;
    }
    case 220246:
    {
        returnValue = F("Menschenberg");
        break;
    }
    case 220247:
    {
        returnValue = F("Menschentrappe");
        break;
    }
    case 220248:
    {
        returnValue = F("Mensenkamp");
        break;
    }
    case 220249:
    {
        returnValue = F("Mensfelder Str.");
        break;
    }
    case 220250:
    {
        returnValue = F("Mensingstift");
        break;
    }
    case 220251:
    {
        returnValue = F("Mensingstr.");
        break;
    }
    case 220252:
    {
        returnValue = F("Menslager Str.");
        break;
    }
    case 220253:
    {
        returnValue = F("Menso-Alting-Str.");
        break;
    }
    case 220254:
    {
        returnValue = F("Mensteder Weg");
        break;
    }
    case 220255:
    {
        returnValue = F("Mentemoor");
        break;
    }
    case 220256:
    {
        returnValue = F("Mentenweg");
        break;
    }
    case 220257:
    {
        returnValue = F("Menteröder Str.");
        break;
    }
    case 220258:
    {
        returnValue = F("Mentestr.");
        break;
    }
    case 220259:
    {
        returnValue = F("Menteweg");
        break;
    }
    case 220260:
    {
        returnValue = F("Menthstr.");
        break;
    }
    case 220261:
    {
        returnValue = F("Mentiner Str.");
        break;
    }
    case 220262:
    {
        returnValue = F("Menton-Ring");
        break;
    }
    case 220263:
    {
        returnValue = F("Mentorstr.");
        break;
    }
    case 220264:
    {
        returnValue = F("Mentropstr.");
        break;
    }
    case 220265:
    {
        returnValue = F("Mentruper Esch");
        break;
    }
    case 220266:
    {
        returnValue = F("Mentwieschen");
        break;
    }
    case 220267:
    {
        returnValue = F("Mentzelstr.");
        break;
    }
    case 220268:
    {
        returnValue = F("Mentzhauser Str.");
        break;
    }
    case 220269:
    {
        returnValue = F("Mentzinger Str.");
        break;
    }
    case 220270:
    {
        returnValue = F("Mentzstr.");
        break;
    }
    case 220271:
    {
        returnValue = F("Menzbühndstr.");
        break;
    }
    case 220272:
    {
        returnValue = F("Menzel-Steg");
        break;
    }
    case 220273:
    {
        returnValue = F("Menzelbuschweg");
        break;
    }
    case 220274:
    {
        returnValue = F("Menzelener Feld");
        break;
    }
    case 220275:
    {
        returnValue = F("Menzelenerheide");
        break;
    }
    case 220276:
    {
        returnValue = F("Menzeler Str.");
        break;
    }
    case 220277:
    {
        returnValue = F("Menzeler Weg");
        break;
    }
    case 220278:
    {
        returnValue = F("Menzelplatz");
        break;
    }
    case 220279:
    {
        returnValue = F("Menzelstr.");
        break;
    }
    case 220280:
    {
        returnValue = F("Menzelweg");
        break;
    }
    case 220281:
    {
        returnValue = F("Menzenberg");
        break;
    }
    case 220282:
    {
        returnValue = F("Menzenberger Str.");
        break;
    }
    case 220283:
    {
        returnValue = F("Menzendorf");
        break;
    }
    case 220284:
    {
        returnValue = F("Menzengraben");
        break;
    }
    case 220285:
    {
        returnValue = F("Menzenpriel");
        break;
    }
    case 220286:
    {
        returnValue = F("Menzenschwander Geißenpfad");
        break;
    }
    case 220287:
    {
        returnValue = F("Menzenschwander Str.");
        break;
    }
    case 220288:
    {
        returnValue = F("Menzenweg");
        break;
    }
    case 220289:
    {
        returnValue = F("Menzer Damm");
        break;
    }
    case 220290:
    {
        returnValue = F("Menzer Str.");
        break;
    }
    case 220291:
    {
        returnValue = F("Menzer Weg");
        break;
    }
    case 220292:
    {
        returnValue = F("Menzerath");
        break;
    }
    case 220293:
    {
        returnValue = F("Menzerather Weg");
        break;
    }
    case 220294:
    {
        returnValue = F("Menzeraths Fahrt");
        break;
    }
    case 220295:
    {
        returnValue = F("Menzerpark");
        break;
    }
    case 220296:
    {
        returnValue = F("Menzestr.");
        break;
    }
    case 220297:
    {
        returnValue = F("Menzhausen-Gasse");
        break;
    }
    case 220298:
    {
        returnValue = F("Menzinger Str.");
        break;
    }
    case 220299:
    {
        returnValue = F("Menzingerstr.");
        break;
    }
    case 220300:
    {
        returnValue = F("Menzlaser Str.");
        break;
    }
    case 220301:
    {
        returnValue = F("Menzles");
        break;
    }
    case 220302:
    {
        returnValue = F("Menzlhof");
        break;
    }
    case 220303:
    {
        returnValue = F("Menzlin");
        break;
    }
    case 220304:
    {
        returnValue = F("Menzlingen");
        break;
    }
    case 220305:
    {
        returnValue = F("Menzlinger Weg");
        break;
    }
    case 220306:
    {
        returnValue = F("Mepker Weg");
        break;
    }
    case 220307:
    {
        returnValue = F("Meppenburger Weg");
        break;
    }
    case 220308:
    {
        returnValue = F("Meppener Hochzeitswald");
        break;
    }
    case 220309:
    {
        returnValue = F("Meppener Str.");
        break;
    }
    case 220310:
    {
        returnValue = F("Meraner Str.");
        break;
    }
    case 220311:
    {
        returnValue = F("Meraner Weg");
        break;
    }
    case 220312:
    {
        returnValue = F("Meranierring");
        break;
    }
    case 220313:
    {
        returnValue = F("Meranierstr.");
        break;
    }
    case 220314:
    {
        returnValue = F("Meranierweg");
        break;
    }
    case 220315:
    {
        returnValue = F("Meranweg");
        break;
    }
    case 220316:
    {
        returnValue = F("Meratebogen");
        break;
    }
    case 220317:
    {
        returnValue = F("Merazhofer Str.");
        break;
    }
    case 220318:
    {
        returnValue = F("Merbachsgasse");
        break;
    }
    case 220319:
    {
        returnValue = F("Merbachstr.");
        break;
    }
    case 220320:
    {
        returnValue = F("Merbecker Str.");
        break;
    }
    case 220321:
    {
        returnValue = F("Merbelsroder Str.");
        break;
    }
    case 220322:
    {
        returnValue = F("Merbelsröder Weg");
        break;
    }
    case 220323:
    {
        returnValue = F("Merberener Weg");
        break;
    }
    case 220324:
    {
        returnValue = F("Merberenkamp");
        break;
    }
    case 220325:
    {
        returnValue = F("Merbericher Weg");
        break;
    }
    case 220326:
    {
        returnValue = F("Merbishof");
        break;
    }
    case 220327:
    {
        returnValue = F("Merbisstr.");
        break;
    }
    case 220328:
    {
        returnValue = F("Merbitzer Berg");
        break;
    }
    case 220329:
    {
        returnValue = F("Merbitzer Weg");
        break;
    }
    case 220330:
    {
        returnValue = F("Mercatorstr.");
        break;
    }
    case 220331:
    {
        returnValue = F("Mercatorweg");
        break;
    }
    case 220332:
    {
        returnValue = F("Mercedes-Benz-Platz");
        break;
    }
    case 220333:
    {
        returnValue = F("Mercedes-Benz-Str.");
        break;
    }
    case 220334:
    {
        returnValue = F("Mercedesring");
        break;
    }
    case 220335:
    {
        returnValue = F("Mercedesstr.");
        break;
    }
    case 220336:
    {
        returnValue = F("Merchinger Hangweg");
        break;
    }
    case 220337:
    {
        returnValue = F("Merchinger Steige");
        break;
    }
    case 220338:
    {
        returnValue = F("Merchinger Str.");
        break;
    }
    case 220339:
    {
        returnValue = F("Merchinger Weg");
        break;
    }
    case 220340:
    {
        returnValue = F("Mercimek-Platz");
        break;
    }
    case 220341:
    {
        returnValue = F("Merckelbachweg");
        break;
    }
    case 220342:
    {
        returnValue = F("Mercklinghausstr.");
        break;
    }
    case 220343:
    {
        returnValue = F("Mercklinweg");
        break;
    }
    case 220344:
    {
        returnValue = F("Merckstr.");
        break;
    }
    case 220345:
    {
        returnValue = F("Mercurstr.");
        break;
    }
    case 220346:
    {
        returnValue = F("Mercuryweg");
        break;
    }
    case 220347:
    {
        returnValue = F("Mercyscher Hof");
        break;
    }
    case 220348:
    {
        returnValue = F("Mercystr.");
        break;
    }
    case 220349:
    {
        returnValue = F("Mercédès-Jellinek-Str.");
        break;
    }
    case 220350:
    {
        returnValue = F("Merdes Ecke");
        break;
    }
    case 220351:
    {
        returnValue = F("Merdinger Str.");
        break;
    }
    case 220352:
    {
        returnValue = F("Merdinger Weg");
        break;
    }
    case 220353:
    {
        returnValue = F("Merdingerstr.");
        break;
    }
    case 220354:
    {
        returnValue = F("Mere-Hoog");
        break;
    }
    case 220355:
    {
        returnValue = F("Merehusenstr.");
        break;
    }
    case 220356:
    {
        returnValue = F("Mereienheck");
        break;
    }
    case 220357:
    {
        returnValue = F("Merenberger Str.");
        break;
    }
    case 220358:
    {
        returnValue = F("Merensiepen");
        break;
    }
    case 220359:
    {
        returnValue = F("Meretsreute");
        break;
    }
    case 220360:
    {
        returnValue = F("Merfelder Esch");
        break;
    }
    case 220361:
    {
        returnValue = F("Merfelder Str.");
        break;
    }
    case 220362:
    {
        returnValue = F("Merfeldtstr.");
        break;
    }
    case 220363:
    {
        returnValue = F("Mergbachstr.");
        break;
    }
    case 220364:
    {
        returnValue = F("Mergebuckel");
        break;
    }
    case 220365:
    {
        returnValue = F("Mergel");
        break;
    }
    case 220366:
    {
        returnValue = F("Mergelberg");
        break;
    }
    case 220367:
    {
        returnValue = F("Mergelbruch");
        break;
    }
    case 220368:
    {
        returnValue = F("Mergelfeld");
        break;
    }
    case 220369:
    {
        returnValue = F("Mergelgasse");
        break;
    }
    case 220370:
    {
        returnValue = F("Mergelgraben");
        break;
    }
    case 220371:
    {
        returnValue = F("Mergelgrube");
        break;
    }
    case 220372:
    {
        returnValue = F("Mergelgrubenweg");
        break;
    }
    case 220373:
    {
        returnValue = F("Mergelgrund");
        break;
    }
    case 220374:
    {
        returnValue = F("Mergelheide");
        break;
    }
    case 220375:
    {
        returnValue = F("Mergelkamp");
        break;
    }
    case 220376:
    {
        returnValue = F("Mergelkaut");
        break;
    }
    case 220377:
    {
        returnValue = F("Mergelkuhle");
        break;
    }
    case 220378:
    {
        returnValue = F("Mergelkuhlen");
        break;
    }
    case 220379:
    {
        returnValue = F("Mergelkuhlenweg");
        break;
    }
    case 220380:
    {
        returnValue = F("Mergelsbrink");
        break;
    }
    case 220381:
    {
        returnValue = F("Mergelsgartenweg");
        break;
    }
    case 220382:
    {
        returnValue = F("Mergelskaul");
        break;
    }
    case 220383:
    {
        returnValue = F("Mergelskull");
        break;
    }
    case 220384:
    {
        returnValue = F("Mergelstetter Str.");
        break;
    }
    case 220385:
    {
        returnValue = F("Mergelstr.");
        break;
    }
    case 220386:
    {
        returnValue = F("Mergelsweg");
        break;
    }
    case 220387:
    {
        returnValue = F("Mergelwaldstr.");
        break;
    }
    case 220388:
    {
        returnValue = F("Mergelwaldweg");
        break;
    }
    case 220389:
    {
        returnValue = F("Mergelweg");
        break;
    }
    case 220390:
    {
        returnValue = F("Mergeläcker");
        break;
    }
    case 220391:
    {
        returnValue = F("Mergendorfer Weg");
        break;
    }
    case 220392:
    {
        returnValue = F("Mergenhofweg");
        break;
    }
    case 220393:
    {
        returnValue = F("Mergenthal");
        break;
    }
    case 220394:
    {
        returnValue = F("Mergenthaler Weg");
        break;
    }
    case 220395:
    {
        returnValue = F("Mergenthalerstr.");
        break;
    }
    case 220396:
    {
        returnValue = F("Mergenthalerweg");
        break;
    }
    case 220397:
    {
        returnValue = F("Mergenthauer Weg");
        break;
    }
    case 220398:
    {
        returnValue = F("Mergentheimer Str.");
        break;
    }
    case 220399:
    {
        returnValue = F("Mergentheimer Weg");
        break;
    }
    case 220400:
    {
        returnValue = F("Mergenwiesenstr.");
        break;
    }
    case 220401:
    {
        returnValue = F("Mergisbacher Ring");
        break;
    }
    case 220402:
    {
        returnValue = F("Mergnersgasse");
        break;
    }
    case 220403:
    {
        returnValue = F("Mergstr.");
        break;
    }
    case 220404:
    {
        returnValue = F("Merian-Passage");
        break;
    }
    case 220405:
    {
        returnValue = F("Merianblick");
        break;
    }
    case 220406:
    {
        returnValue = F("Merianstr.");
        break;
    }
    case 220407:
    {
        returnValue = F("Merianweg");
        break;
    }
    case 220408:
    {
        returnValue = F("Meringer Str.");
        break;
    }
    case 220409:
    {
        returnValue = F("Meringerzeller Str.");
        break;
    }
    case 220410:
    {
        returnValue = F("Meringstr.");
        break;
    }
    case 220411:
    {
        returnValue = F("Merinostr.");
        break;
    }
    case 220412:
    {
        returnValue = F("Merishausener Str.");
        break;
    }
    case 220413:
    {
        returnValue = F("Meritzer Weg");
        break;
    }
    case 220414:
    {
        returnValue = F("Merjenhemmsweg");
        break;
    }
    case 220415:
    {
        returnValue = F("Merkatorstr.");
        break;
    }
    case 220416:
    {
        returnValue = F("Merkausener Str.");
        break;
    }
    case 220417:
    {
        returnValue = F("Merkel'scher Park");
        break;
    }
    case 220418:
    {
        returnValue = F("Merkelbuckel");
        break;
    }
    case 220419:
    {
        returnValue = F("Merkelheider Weg");
        break;
    }
    case 220420:
    {
        returnValue = F("Merkelrain");
        break;
    }
    case 220421:
    {
        returnValue = F("Merkelstr.");
        break;
    }
    case 220422:
    {
        returnValue = F("Merkelweg");
        break;
    }
    case 220423:
    {
        returnValue = F("Merkenbacher Weg");
        break;
    }
    case 220424:
    {
        returnValue = F("Merkenbachstr.");
        break;
    }
    case 220425:
    {
        returnValue = F("Merkendorf");
        break;
    }
    case 220426:
    {
        returnValue = F("Merkendorfer Redder");
        break;
    }
    case 220427:
    {
        returnValue = F("Merkendorfer Str.");
        break;
    }
    case 220428:
    {
        returnValue = F("Merkener Weg");
        break;
    }
    case 220429:
    {
        returnValue = F("Merkenfritzer Str.");
        break;
    }
    case 220430:
    {
        returnValue = F("Merkenfritzer Weg");
        break;
    }
    case 220431:
    {
        returnValue = F("Merkensweg");
        break;
    }
    case 220432:
    {
        returnValue = F("Merkerser Weg");
        break;
    }
    case 220433:
    {
        returnValue = F("Merkeshausener Str.");
        break;
    }
    case 220434:
    {
        returnValue = F("Merketalstr.");
        break;
    }
    case 220435:
    {
        returnValue = F("Merkewitzer Winkel");
        break;
    }
    case 220436:
    {
        returnValue = F("Merkinger Str.");
        break;
    }
    case 220437:
    {
        returnValue = F("Merklach");
        break;
    }
    case 220438:
    {
        returnValue = F("Merkleinstr.");
        break;
    }
    case 220439:
    {
        returnValue = F("Merklesplanken");
        break;
    }
    case 220440:
    {
        returnValue = F("Merkleweg");
        break;
    }
    case 220441:
    {
        returnValue = F("Merklinder Str.");
        break;
    }
    case 220442:
    {
        returnValue = F("Merklinger Pfad");
        break;
    }
    case 220443:
    {
        returnValue = F("Merklinger Str.");
        break;
    }
    case 220444:
    {
        returnValue = F("Merklinger Weg");
        break;
    }
    case 220445:
    {
        returnValue = F("Merklinghauser Str.");
        break;
    }
    case 220446:
    {
        returnValue = F("Merklinghäuser Weg");
        break;
    }
    case 220447:
    {
        returnValue = F("Merklingser Weg");
        break;
    }
    case 220448:
    {
        returnValue = F("Merklinstr.");
        break;
    }
    case 220449:
    {
        returnValue = F("Merklmooslohe");
        break;
    }
    case 220450:
    {
        returnValue = F("Merklsteig");
        break;
    }
    case 220451:
    {
        returnValue = F("Merklweg");
        break;
    }
    case 220452:
    {
        returnValue = F("Merkoole");
        break;
    }
    case 220453:
    {
        returnValue = F("Merksteiner Str.");
        break;
    }
    case 220454:
    {
        returnValue = F("Merksteinstr.");
        break;
    }
    case 220455:
    {
        returnValue = F("Merkstr.");
        break;
    }
    case 220456:
    {
        returnValue = F("Merktweg");
        break;
    }
    case 220457:
    {
        returnValue = F("Merkur-Allee");
        break;
    }
    case 220458:
    {
        returnValue = F("Merkuriusberg");
        break;
    }
    case 220459:
    {
        returnValue = F("Merkurplatz");
        break;
    }
    case 220460:
    {
        returnValue = F("Merkurring");
        break;
    }
    case 220461:
    {
        returnValue = F("Merkursteinweg");
        break;
    }
    case 220462:
    {
        returnValue = F("Merkurstr.");
        break;
    }
    case 220463:
    {
        returnValue = F("Merkurweg");
        break;
    }
    case 220464:
    {
        returnValue = F("Merkwitz");
        break;
    }
    case 220465:
    {
        returnValue = F("Merkwitzer Str.");
        break;
    }
    case 220466:
    {
        returnValue = F("Merlach");
        break;
    }
    case 220467:
    {
        returnValue = F("Merlacher Weg");
        break;
    }
    case 220468:
    {
        returnValue = F("Merlagerweg");
        break;
    }
    case 220469:
    {
        returnValue = F("Merlauer Str.");
        break;
    }
    case 220470:
    {
        returnValue = F("Merlbacherstr.");
        break;
    }
    case 220471:
    {
        returnValue = F("Merlebacher Str.");
        break;
    }
    case 220472:
    {
        returnValue = F("Merleheimer Weg");
        break;
    }
    case 220473:
    {
        returnValue = F("Merleinsgartenweg");
        break;
    }
    case 220474:
    {
        returnValue = F("Merleinsgasse");
        break;
    }
    case 220475:
    {
        returnValue = F("Merlenbach");
        break;
    }
    case 220476:
    {
        returnValue = F("Merlenhofstr.");
        break;
    }
    case 220477:
    {
        returnValue = F("Merlenweg");
        break;
    }
    case 220478:
    {
        returnValue = F("Merler Bahn");
        break;
    }
    case 220479:
    {
        returnValue = F("Merler Ring");
        break;
    }
    case 220480:
    {
        returnValue = F("Merler Str.");
        break;
    }
    case 220481:
    {
        returnValue = F("Merler Winkel");
        break;
    }
    case 220482:
    {
        returnValue = F("Merlesbrücke");
        break;
    }
    case 220483:
    {
        returnValue = F("Merlinhang");
        break;
    }
    case 220484:
    {
        returnValue = F("Merlinring");
        break;
    }
    case 220485:
    {
        returnValue = F("Merlinstr.");
        break;
    }
    case 220486:
    {
        returnValue = F("Merlinweg");
        break;
    }
    case 220487:
    {
        returnValue = F("Merlos");
        break;
    }
    case 220488:
    {
        returnValue = F("Merlostr.");
        break;
    }
    case 220489:
    {
        returnValue = F("Merlotweg");
        break;
    }
    case 220490:
    {
        returnValue = F("Merlsheimer Weg");
        break;
    }
    case 220491:
    {
        returnValue = F("Merlstr.");
        break;
    }
    case 220492:
    {
        returnValue = F("Mermbacher Str.");
        break;
    }
    case 220493:
    {
        returnValue = F("Mermicherhof");
        break;
    }
    case 220494:
    {
        returnValue = F("Mermoser Str.");
        break;
    }
    case 220495:
    {
        returnValue = F("Merneser Weg");
        break;
    }
    case 220496:
    {
        returnValue = F("Mernham");
        break;
    }
    case 220497:
    {
        returnValue = F("Merode");
        break;
    }
    case 220498:
    {
        returnValue = F("Meroder Str.");
        break;
    }
    case 220499:
    {
        returnValue = F("Meroderhofstr.");
        break;
    }
    case 220500:
    {
        returnValue = F("Merodestr.");
        break;
    }
    case 220501:
    {
        returnValue = F("Merodeweg");
        break;
    }
    case 220502:
    {
        returnValue = F("Merowinger Höhe");
        break;
    }
    case 220503:
    {
        returnValue = F("Merowinger Str.");
        break;
    }
    case 220504:
    {
        returnValue = F("Merowingerplatz");
        break;
    }
    case 220505:
    {
        returnValue = F("Merowingerring");
        break;
    }
    case 220506:
    {
        returnValue = F("Merowingerstr.");
        break;
    }
    case 220507:
    {
        returnValue = F("Merowingerweg");
        break;
    }
    case 220508:
    {
        returnValue = F("Merret-Lassen-Wai");
        break;
    }
    case 220509:
    {
        returnValue = F("Merreter");
        break;
    }
    case 220510:
    {
        returnValue = F("Merreter Weg");
        break;
    }
    case 220511:
    {
        returnValue = F("Merricher Str.");
        break;
    }
    case 220512:
    {
        returnValue = F("Mersbachweg");
        break;
    }
    case 220513:
    {
        returnValue = F("Mersbend");
        break;
    }
    case 220514:
    {
        returnValue = F("Mersberg");
        break;
    }
    case 220515:
    {
        returnValue = F("Mersburdenstr.");
        break;
    }
    case 220516:
    {
        returnValue = F("Mersch");
        break;
    }
    case 220517:
    {
        returnValue = F("Merschdamm");
        break;
    }
    case 220518:
    {
        returnValue = F("Merscheider Busch");
        break;
    }
    case 220519:
    {
        returnValue = F("Merscheider Str.");
        break;
    }
    case 220520:
    {
        returnValue = F("Merscheider Weg");
        break;
    }
    case 220521:
    {
        returnValue = F("Merscher Gracht");
        break;
    }
    case 220522:
    {
        returnValue = F("Merscher Höhe");
        break;
    }
    case 220523:
    {
        returnValue = F("Merscher Str.");
        break;
    }
    case 220524:
    {
        returnValue = F("Merscher Weg");
        break;
    }
    case 220525:
    {
        returnValue = F("Merschfeld");
        break;
    }
    case 220526:
    {
        returnValue = F("Merschgarten");
        break;
    }
    case 220527:
    {
        returnValue = F("Merschhove");
        break;
    }
    case 220528:
    {
        returnValue = F("Merschkamp");
        break;
    }
    case 220529:
    {
        returnValue = F("Merschkensheideweg");
        break;
    }
    case 220530:
    {
        returnValue = F("Merschmanns Weg");
        break;
    }
    case 220531:
    {
        returnValue = F("Merschroder Str.");
        break;
    }
    case 220532:
    {
        returnValue = F("Merschsiedlung");
        break;
    }
    case 220533:
    {
        returnValue = F("Merschstr.");
        break;
    }
    case 220534:
    {
        returnValue = F("Merschstrich");
        break;
    }
    case 220535:
    {
        returnValue = F("Merschweg");
        break;
    }
    case 220536:
    {
        returnValue = F("Merschweiler Weg");
        break;
    }
    case 220537:
    {
        returnValue = F("Merschwiese");
        break;
    }
    case 220538:
    {
        returnValue = F("Merschwitz");
        break;
    }
    case 220539:
    {
        returnValue = F("Merschwitzer Elbstr.");
        break;
    }
    case 220540:
    {
        returnValue = F("Merschwitzer Str.");
        break;
    }
    case 220541:
    {
        returnValue = F("Merschwitzer Weg");
        break;
    }
    case 220542:
    {
        returnValue = F("Merschützer Str.");
        break;
    }
    case 220543:
    {
        returnValue = F("Mersdalstr.");
        break;
    }
    case 220544:
    {
        returnValue = F("Merseburg Bergmannsring");
        break;
    }
    case 220545:
    {
        returnValue = F("Merseburger Chaussee");
        break;
    }
    case 220546:
    {
        returnValue = F("Merseburger Landstr.");
        break;
    }
    case 220547:
    {
        returnValue = F("Merseburger Ring");
        break;
    }
    case 220548:
    {
        returnValue = F("Merseburger Str.");
        break;
    }
    case 220549:
    {
        returnValue = F("Merseburger Weg");
        break;
    }
    case 220550:
    {
        returnValue = F("Mersheim");
        break;
    }
    case 220551:
    {
        returnValue = F("Mersinweg");
        break;
    }
    case 220552:
    {
        returnValue = F("Mersmanns Stiege");
        break;
    }
    case 220553:
    {
        returnValue = F("Mersmannstr.");
        break;
    }
    case 220554:
    {
        returnValue = F("Mertal");
        break;
    }
    case 220555:
    {
        returnValue = F("Mertelacker");
        break;
    }
    case 220556:
    {
        returnValue = F("Mertelstr.");
        break;
    }
    case 220557:
    {
        returnValue = F("Mertenberger-Str.");
        break;
    }
    case 220558:
    {
        returnValue = F("Mertendorfer Weg");
        break;
    }
    case 220559:
    {
        returnValue = F("Mertener Pfad");
        break;
    }
    case 220560:
    {
        returnValue = F("Mertener Str.");
        break;
    }
    case 220561:
    {
        returnValue = F("Mertener Weg");
        break;
    }
    case 220562:
    {
        returnValue = F("Mertensberg");
        break;
    }
    case 220563:
    {
        returnValue = F("Mertensdorfer Feld");
        break;
    }
    case 220564:
    {
        returnValue = F("Mertensdorfer Weg");
        break;
    }
    case 220565:
    {
        returnValue = F("Mertenseifer Grund");
        break;
    }
    case 220566:
    {
        returnValue = F("Mertensgasse");
        break;
    }
    case 220567:
    {
        returnValue = F("Mertenshöhe");
        break;
    }
    case 220568:
    {
        returnValue = F("Mertenskamp");
        break;
    }
    case 220569:
    {
        returnValue = F("Mertensplatz");
        break;
    }
    case 220570:
    {
        returnValue = F("Mertensstr.");
        break;
    }
    case 220571:
    {
        returnValue = F("Mertensweg");
        break;
    }
    case 220572:
    {
        returnValue = F("Mertenweg");
        break;
    }
    case 220573:
    {
        returnValue = F("Mertesdorfer Str.");
        break;
    }
    case 220574:
    {
        returnValue = F("Mertesheimer Str.");
        break;
    }
    case 220575:
    {
        returnValue = F("Mertesheimer Weg");
        break;
    }
    case 220576:
    {
        returnValue = F("Mertesweg");
        break;
    }
    case 220577:
    {
        returnValue = F("Merteswiese");
        break;
    }
    case 220578:
    {
        returnValue = F("Mertheswies");
        break;
    }
    case 220579:
    {
        returnValue = F("Mertigsweg");
        break;
    }
    case 220580:
    {
        returnValue = F("Mertingen Bahnhof");
        break;
    }
    case 220581:
    {
        returnValue = F("Mertinger Str.");
        break;
    }
    case 220582:
    {
        returnValue = F("Mertitz");
        break;
    }
    case 220583:
    {
        returnValue = F("Mertitzer Str.");
        break;
    }
    case 220584:
    {
        returnValue = F("Mertlocher Str.");
        break;
    }
    case 220585:
    {
        returnValue = F("Mertmannshof");
        break;
    }
    case 220586:
    {
        returnValue = F("Mertonweg");
        break;
    }
    case 220587:
    {
        returnValue = F("Mertseestr.");
        break;
    }
    case 220588:
    {
        returnValue = F("Mertshain");
        break;
    }
    case 220589:
    {
        returnValue = F("Mertwies");
        break;
    }
    case 220590:
    {
        returnValue = F("Mertzgarten");
        break;
    }
    case 220591:
    {
        returnValue = F("Mertzstr.");
        break;
    }
    case 220592:
    {
        returnValue = F("Mertzweg");
        break;
    }
    case 220593:
    {
        returnValue = F("Mertzwiller Str.");
        break;
    }
    case 220594:
    {
        returnValue = F("Meruer Str.");
        break;
    }
    case 220595:
    {
        returnValue = F("Merveldstr.");
        break;
    }
    case 220596:
    {
        returnValue = F("Merveldtstr.");
        break;
    }
    case 220597:
    {
        returnValue = F("Merx Weg");
        break;
    }
    case 220598:
    {
        returnValue = F("Merxhausener Str.");
        break;
    }
    case 220599:
    {
        returnValue = F("Merxheimer Str.");
        break;
    }
    case 220600:
    {
        returnValue = F("Merxhäuser Str.");
        break;
    }
    case 220601:
    {
        returnValue = F("Merxlebener Hauptstr.");
        break;
    }
    case 220602:
    {
        returnValue = F("Merxlebener Weg");
        break;
    }
    case 220603:
    {
        returnValue = F("Merxleber Str.");
        break;
    }
    case 220604:
    {
        returnValue = F("Merxlesweg");
        break;
    }
    case 220605:
    {
        returnValue = F("Merxstr.");
        break;
    }
    case 220606:
    {
        returnValue = F("Mery-Str.");
        break;
    }
    case 220607:
    {
        returnValue = F("Merzanger");
        break;
    }
    case 220608:
    {
        returnValue = F("Merzbach Brücke");
        break;
    }
    case 220609:
    {
        returnValue = F("Merzbacher Str.");
        break;
    }
    case 220610:
    {
        returnValue = F("Merzbacher Weg");
        break;
    }
    case 220611:
    {
        returnValue = F("Merzbacherstr.");
        break;
    }
    case 220612:
    {
        returnValue = F("Merzbachstr.");
        break;
    }
    case 220613:
    {
        returnValue = F("Merzbergstr.");
        break;
    }
    case 220614:
    {
        returnValue = F("Merzbrück");
        break;
    }
    case 220615:
    {
        returnValue = F("Merzbrücker Str.");
        break;
    }
    case 220616:
    {
        returnValue = F("Merzbrücker Weg");
        break;
    }
    case 220617:
    {
        returnValue = F("Merzdorf");
        break;
    }
    case 220618:
    {
        returnValue = F("Merzdorfer Bahnhof");
        break;
    }
    case 220619:
    {
        returnValue = F("Merzdorfer Bahnhofstr.");
        break;
    }
    case 220620:
    {
        returnValue = F("Merzdorfer Gartenstr.");
        break;
    }
    case 220621:
    {
        returnValue = F("Merzdorfer Hauptstr.");
        break;
    }
    case 220622:
    {
        returnValue = F("Merzdorfer Ring");
        break;
    }
    case 220623:
    {
        returnValue = F("Merzdorfer Str.");
        break;
    }
    case 220624:
    {
        returnValue = F("Merzdorfer Waldstr.");
        break;
    }
    case 220625:
    {
        returnValue = F("Merzdorfer Weg");
        break;
    }
    case 220626:
    {
        returnValue = F("Merzdorfer Wiesenstr.");
        break;
    }
    case 220627:
    {
        returnValue = F("Merzel-Schneise");
        break;
    }
    case 220628:
    {
        returnValue = F("Merzenbachstr.");
        break;
    }
    case 220629:
    {
        returnValue = F("Merzenbachweg");
        break;
    }
    case 220630:
    {
        returnValue = F("Merzenberg");
        break;
    }
    case 220631:
    {
        returnValue = F("Merzenberganlage");
        break;
    }
    case 220632:
    {
        returnValue = F("Merzenbergstr.");
        break;
    }
    case 220633:
    {
        returnValue = F("Merzenbergweg");
        break;
    }
    case 220634:
    {
        returnValue = F("Merzener Str.");
        break;
    }
    case 220635:
    {
        returnValue = F("Merzengasse");
        break;
    }
    case 220636:
    {
        returnValue = F("Merzengraben");
        break;
    }
    case 220637:
    {
        returnValue = F("Merzengäßchen");
        break;
    }
    case 220638:
    {
        returnValue = F("Merzenicher Str.");
        break;
    }
    case 220639:
    {
        returnValue = F("Merzenicher Weg");
        break;
    }
    case 220640:
    {
        returnValue = F("Merzennestweg");
        break;
    }
    case 220641:
    {
        returnValue = F("Merzenteichweg");
        break;
    }
    case 220642:
    {
        returnValue = F("Merzenwiesen");
        break;
    }
    case 220643:
    {
        returnValue = F("Merzenäcker");
        break;
    }
    case 220644:
    {
        returnValue = F("Merzer Chaussee");
        break;
    }
    case 220645:
    {
        returnValue = F("Merzer Weg");
        break;
    }
    case 220646:
    {
        returnValue = F("Merzerfeld");
        break;
    }
    case 220647:
    {
        returnValue = F("Merzerweg");
        break;
    }
    case 220648:
    {
        returnValue = F("Merzgasse");
        break;
    }
    case 220649:
    {
        returnValue = F("Merzhausener Str.");
        break;
    }
    case 220650:
    {
        returnValue = F("Merzhäuser Str.");
        break;
    }
    case 220651:
    {
        returnValue = F("Merzhäuser Weg");
        break;
    }
    case 220652:
    {
        returnValue = F("Merziener Str.");
        break;
    }
    case 220653:
    {
        returnValue = F("Merziger Str.");
        break;
    }
    case 220654:
    {
        returnValue = F("Merziger Weg");
        break;
    }
    case 220655:
    {
        returnValue = F("Merzinger Str.");
        break;
    }
    case 220656:
    {
        returnValue = F("Merzlicher Str.");
        break;
    }
    case 220657:
    {
        returnValue = F("Merzlweg");
        break;
    }
    case 220658:
    {
        returnValue = F("Merzpark");
        break;
    }
    case 220659:
    {
        returnValue = F("Merzstr.");
        break;
    }
    case 220660:
    {
        returnValue = F("Merzweg");
        break;
    }
    case 220661:
    {
        returnValue = F("Merzwiesen Schneise");
        break;
    }
    case 220662:
    {
        returnValue = F("Mescheder Landstr.");
        break;
    }
    case 220663:
    {
        returnValue = F("Mescheder Schling");
        break;
    }
    case 220664:
    {
        returnValue = F("Mescheder Str.");
        break;
    }
    case 220665:
    {
        returnValue = F("Mescheder Weg");
        break;
    }
    case 220666:
    {
        returnValue = F("Mescheider Str.");
        break;
    }
    case 220667:
    {
        returnValue = F("Meschenbach");
        break;
    }
    case 220668:
    {
        returnValue = F("Meschendörferweg");
        break;
    }
    case 220669:
    {
        returnValue = F("Meschenicher Str.");
        break;
    }
    case 220670:
    {
        returnValue = F("Meschenicher Weg");
        break;
    }
    case 220671:
    {
        returnValue = F("Mescheriner Weg");
        break;
    }
    case 220672:
    {
        returnValue = F("Meschers Hof");
        break;
    }
    case 220673:
    {
        returnValue = F("Meschgärten");
        break;
    }
    case 220674:
    {
        returnValue = F("Meschleinsgraben");
        break;
    }
    case 220675:
    {
        returnValue = F("Meschweg");
        break;
    }
    case 220676:
    {
        returnValue = F("Meseberger Dorfstr.");
        break;
    }
    case 220677:
    {
        returnValue = F("Meseberger Str.");
        break;
    }
    case 220678:
    {
        returnValue = F("Meseberger Weg");
        break;
    }
    case 220679:
    {
        returnValue = F("Mesekower Dorfstr.");
        break;
    }
    case 220680:
    {
        returnValue = F("Meselter Str.");
        break;
    }
    case 220681:
    {
        returnValue = F("Mesenbecke");
        break;
    }
    case 220682:
    {
        returnValue = F("Mesenbrink");
        break;
    }
    case 220683:
    {
        returnValue = F("Mesenburg");
        break;
    }
    case 220684:
    {
        returnValue = F("Mesenhagen");
        break;
    }
    case 220685:
    {
        returnValue = F("Mesenhofstr.");
        break;
    }
    case 220686:
    {
        returnValue = F("Mesenhohl");
        break;
    }
    case 220687:
    {
        returnValue = F("Mesenicher Str.");
        break;
    }
    case 220688:
    {
        returnValue = F("Mesenwaldstr.");
        break;
    }
    case 220689:
    {
        returnValue = F("Meserkrempe");
        break;
    }
    case 220690:
    {
        returnValue = F("Mesewinkler Weg");
        break;
    }
    case 220691:
    {
        returnValue = F("Meskens Stiege");
        break;
    }
    case 220692:
    {
        returnValue = F("Mesker Brouk");
        break;
    }
    case 220693:
    {
        returnValue = F("Meskesweide");
        break;
    }
    case 220694:
    {
        returnValue = F("Meslay-du-Maine-Str.");
        break;
    }
    case 220695:
    {
        returnValue = F("Mesloher Weg");
        break;
    }
    case 220696:
    {
        returnValue = F("Mesmering");
        break;
    }
    case 220697:
    {
        returnValue = F("Mesmeringer Str.");
        break;
    }
    case 220698:
    {
        returnValue = F("Mesmeroder Str.");
        break;
    }
    case 220699:
    {
        returnValue = F("Mesmerstr.");
        break;
    }
    case 220700:
    {
        returnValue = F("Mesner-Zapf-Str.");
        break;
    }
    case 220701:
    {
        returnValue = F("Mesner-Zapf-Weg");
        break;
    }
    case 220702:
    {
        returnValue = F("Mesneracker");
        break;
    }
    case 220703:
    {
        returnValue = F("Mesneramt");
        break;
    }
    case 220704:
    {
        returnValue = F("Mesnerfeld");
        break;
    }
    case 220705:
    {
        returnValue = F("Mesnergasse");
        break;
    }
    case 220706:
    {
        returnValue = F("Mesnergassl");
        break;
    }
    case 220707:
    {
        returnValue = F("Mesnergässle");
        break;
    }
    case 220708:
    {
        returnValue = F("Mesnergäßle");
        break;
    }
    case 220709:
    {
        returnValue = F("Mesnerhang");
        break;
    }
    case 220710:
    {
        returnValue = F("Mesnerhauser Str.");
        break;
    }
    case 220711:
    {
        returnValue = F("Mesnerhausweg");
        break;
    }
    case 220712:
    {
        returnValue = F("Mesnersgäßle");
        break;
    }
    case 220713:
    {
        returnValue = F("Mesnerstr.");
        break;
    }
    case 220714:
    {
        returnValue = F("Mesnerwald");
        break;
    }
    case 220715:
    {
        returnValue = F("Mesnerweg");
        break;
    }
    case 220716:
    {
        returnValue = F("Mesnerwiesenstr.");
        break;
    }
    case 220717:
    {
        returnValue = F("Mespelhop");
        break;
    }
    case 220718:
    {
        returnValue = F("Messaer Str.");
        break;
    }
    case 220719:
    {
        returnValue = F("Messbachweg");
        break;
    }
    case 220720:
    {
        returnValue = F("Messbrückle");
        break;
    }
    case 220721:
    {
        returnValue = F("Messeallee");
        break;
    }
    case 220722:
    {
        returnValue = F("Messeberg");
        break;
    }
    case 220723:
    {
        returnValue = F("Messebrücke");
        break;
    }
    case 220724:
    {
        returnValue = F("Messekreisel");
        break;
    }
    case 220725:
    {
        returnValue = F("Messelbergsteige");
        break;
    }
    case 220726:
    {
        returnValue = F("Messelbergstr.");
        break;
    }
    case 220727:
    {
        returnValue = F("Messeler Grenzschneise");
        break;
    }
    case 220728:
    {
        returnValue = F("Messeler Schneise");
        break;
    }
    case 220729:
    {
        returnValue = F("Messeler Str.");
        break;
    }
    case 220730:
    {
        returnValue = F("Messeler Weg");
        break;
    }
    case 220731:
    {
        returnValue = F("Messeler-Park-Str.");
        break;
    }
    case 220732:
    {
        returnValue = F("Messelhäuser Str.");
        break;
    }
    case 220733:
    {
        returnValue = F("Messelskampstr.");
        break;
    }
    case 220734:
    {
        returnValue = F("Messelsteinstr.");
        break;
    }
    case 220735:
    {
        returnValue = F("Messelweg");
        break;
    }
    case 220736:
    {
        returnValue = F("Messenberg");
        break;
    }
    case 220737:
    {
        returnValue = F("Messenhäuser Str.");
        break;
    }
    case 220738:
    {
        returnValue = F("Messenhöh");
        break;
    }
    case 220739:
    {
        returnValue = F("Messenkamp");
        break;
    }
    case 220740:
    {
        returnValue = F("Messenkämper Str.");
        break;
    }
    case 220741:
    {
        returnValue = F("Messenweg");
        break;
    }
    case 220742:
    {
        returnValue = F("Messepfädchen");
        break;
    }
    case 220743:
    {
        returnValue = F("Messeplatz");
        break;
    }
    case 220744:
    {
        returnValue = F("Messerergasse");
        break;
    }
    case 220745:
    {
        returnValue = F("Messererstr.");
        break;
    }
    case 220746:
    {
        returnValue = F("Messergasse");
        break;
    }
    case 220747:
    {
        returnValue = F("Messericher Str.");
        break;
    }
    case 220748:
    {
        returnValue = F("Messerpaint");
        break;
    }
    case 220749:
    {
        returnValue = F("Messerschmidstr.");
        break;
    }
    case 220750:
    {
        returnValue = F("Messerschmiedestr.");
        break;
    }
    case 220751:
    {
        returnValue = F("Messerschmiedgasse");
        break;
    }
    case 220752:
    {
        returnValue = F("Messerschmiedstr.");
        break;
    }
    case 220753:
    {
        returnValue = F("Messerschmitt-Str.");
        break;
    }
    case 220754:
    {
        returnValue = F("Messerschmittring");
        break;
    }
    case 220755:
    {
        returnValue = F("Messerschmittstr.");
        break;
    }
    case 220756:
    {
        returnValue = F("Messerschmittweg");
        break;
    }
    case 220757:
    {
        returnValue = F("Messerschwanderhof");
        break;
    }
    case 220758:
    {
        returnValue = F("Messerstr.");
        break;
    }
    case 220759:
    {
        returnValue = F("Messerzeile");
        break;
    }
    case 220760:
    {
        returnValue = F("Messeschnellweg");
        break;
    }
    case 220761:
    {
        returnValue = F("Messestr.");
        break;
    }
    case 220762:
    {
        returnValue = F("Messetunnel");
        break;
    }
    case 220763:
    {
        returnValue = F("Messeweg");
        break;
    }
    case 220764:
    {
        returnValue = F("Messfelder Weg");
        break;
    }
    case 220765:
    {
        returnValue = F("Messigny-Et-Vantoux-Platz");
        break;
    }
    case 220766:
    {
        returnValue = F("Messingbergstr.");
        break;
    }
    case 220767:
    {
        returnValue = F("Messinger Str.");
        break;
    }
    case 220768:
    {
        returnValue = F("Messingerseeschneise");
        break;
    }
    case 220769:
    {
        returnValue = F("Messingfeldstr.");
        break;
    }
    case 220770:
    {
        returnValue = F("Messinggasse");
        break;
    }
    case 220771:
    {
        returnValue = F("Messinghof");
        break;
    }
    case 220772:
    {
        returnValue = F("Messingsfeld");
        break;
    }
    case 220773:
    {
        returnValue = F("Messingstr.");
        break;
    }
    case 220774:
    {
        returnValue = F("Messingweg");
        break;
    }
    case 220775:
    {
        returnValue = F("Messingwerk");
        break;
    }
    case 220776:
    {
        returnValue = F("Messingwerkstr.");
        break;
    }
    case 220777:
    {
        returnValue = F("Messkernweg");
        break;
    }
    case 220778:
    {
        returnValue = F("Messkornweg");
        break;
    }
    case 220779:
    {
        returnValue = F("Messmannstr.");
        break;
    }
    case 220780:
    {
        returnValue = F("Messmäckerweg");
        break;
    }
    case 220781:
    {
        returnValue = F("Messnergasse");
        break;
    }
    case 220782:
    {
        returnValue = F("Messnerstr.");
        break;
    }
    case 220783:
    {
        returnValue = F("Messnerweg");
        break;
    }
    case 220784:
    {
        returnValue = F("Messostr.");
        break;
    }
    case 220785:
    {
        returnValue = F("Messplatz");
        break;
    }
    case 220786:
    {
        returnValue = F("Messstrecke");
        break;
    }
    case 220787:
    {
        returnValue = F("Messtor");
        break;
    }
    case 220788:
    {
        returnValue = F("Messweg");
        break;
    }
    case 220789:
    {
        returnValue = F("Mestefeld");
        break;
    }
    case 220790:
    {
        returnValue = F("Mester-Everts-Weg");
        break;
    }
    case 220791:
    {
        returnValue = F("Mester-Godert-Weg");
        break;
    }
    case 220792:
    {
        returnValue = F("Mester-Peterssen-Str.");
        break;
    }
    case 220793:
    {
        returnValue = F("Mesterbruch");
        break;
    }
    case 220794:
    {
        returnValue = F("Mesterfeld");
        break;
    }
    case 220795:
    {
        returnValue = F("Mesternberg");
        break;
    }
    case 220796:
    {
        returnValue = F("Mesterngrund");
        break;
    }
    case 220797:
    {
        returnValue = F("Mesternstr.");
        break;
    }
    case 220798:
    {
        returnValue = F("Mesters Hof");
        break;
    }
    case 220799:
    {
        returnValue = F("Mesterscheid");
        break;
    }
    case 220800:
    {
        returnValue = F("Mesterscheider Weg");
        break;
    }
    case 220801:
    {
        returnValue = F("Mesterskamp");
        break;
    }
    case 220802:
    {
        returnValue = F("Mesterweg");
        break;
    }
    case 220803:
    {
        returnValue = F("Mestliner Querstr.");
        break;
    }
    case 220804:
    {
        returnValue = F("Mestliner Str.");
        break;
    }
    case 220805:
    {
        returnValue = F("Mestliner Weg");
        break;
    }
    case 220806:
    {
        returnValue = F("Mestrenger Weg");
        break;
    }
    case 220807:
    {
        returnValue = F("Mestwartstr.");
        break;
    }
    case 220808:
    {
        returnValue = F("Mesumer Damm");
        break;
    }
    case 220809:
    {
        returnValue = F("Mesumer Str.");
        break;
    }
    case 220810:
    {
        returnValue = F("Meta-Böhnert-Platz");
        break;
    }
    case 220811:
    {
        returnValue = F("Meta-Frank-Str.");
        break;
    }
    case 220812:
    {
        returnValue = F("Meta-Gadesmann-Str.");
        break;
    }
    case 220813:
    {
        returnValue = F("Meta-Grube-Weg");
        break;
    }
    case 220814:
    {
        returnValue = F("Meta-Herz-Str.");
        break;
    }
    case 220815:
    {
        returnValue = F("Meta-Muscat-Str.");
        break;
    }
    case 220816:
    {
        returnValue = F("Meta-Sander-Str.");
        break;
    }
    case 220817:
    {
        returnValue = F("Metabo-Allee");
        break;
    }
    case 220818:
    {
        returnValue = F("Metallhütte");
        break;
    }
    case 220819:
    {
        returnValue = F("Metallstr.");
        break;
    }
    case 220820:
    {
        returnValue = F("Metallweberstr.");
        break;
    }
    case 220821:
    {
        returnValue = F("Metallweg");
        break;
    }
    case 220822:
    {
        returnValue = F("Metaruheweg");
        break;
    }
    case 220823:
    {
        returnValue = F("Metasequoia-Allee");
        break;
    }
    case 220824:
    {
        returnValue = F("Metastr.");
        break;
    }
    case 220825:
    {
        returnValue = F("Metaweg");
        break;
    }
    case 220826:
    {
        returnValue = F("Metelener Damm");
        break;
    }
    case 220827:
    {
        returnValue = F("Metelener Landstr.");
        break;
    }
    case 220828:
    {
        returnValue = F("Metelener Str.");
        break;
    }
    case 220829:
    {
        returnValue = F("Metelener Weg");
        break;
    }
    case 220830:
    {
        returnValue = F("Meteler Stiege");
        break;
    }
    case 220831:
    {
        returnValue = F("Meteler Str.");
        break;
    }
    case 220832:
    {
        returnValue = F("Metelner Str.");
        break;
    }
    case 220833:
    {
        returnValue = F("Metelner Weg");
        break;
    }
    case 220834:
    {
        returnValue = F("Metelsdorfer Str.");
        break;
    }
    case 220835:
    {
        returnValue = F("Metenwiesen");
        break;
    }
    case 220836:
    {
        returnValue = F("Meteorstr.");
        break;
    }
    case 220837:
    {
        returnValue = F("Meteriker Str.");
        break;
    }
    case 220838:
    {
        returnValue = F("Meterstr.");
        break;
    }
    case 220839:
    {
        returnValue = F("Metgesheide");
        break;
    }
    case 220840:
    {
        returnValue = F("Methestr.");
        break;
    }
    case 220841:
    {
        returnValue = F("Metheweg");
        break;
    }
    case 220842:
    {
        returnValue = F("Methewitz");
        break;
    }
    case 220843:
    {
        returnValue = F("Methfesselstr.");
        break;
    }
    case 220844:
    {
        returnValue = F("Methlerweg");
        break;
    }
    case 220845:
    {
        returnValue = F("Methmühlweg");
        break;
    }
    case 220846:
    {
        returnValue = F("Methodistenweg");
        break;
    }
    case 220847:
    {
        returnValue = F("Metjendorfer Landstr.");
        break;
    }
    case 220848:
    {
        returnValue = F("Metjendorfer Str.");
        break;
    }
    case 220849:
    {
        returnValue = F("Metjengerdesweg");
        break;
    }
    case 220850:
    {
        returnValue = F("Metjenkamp");
        break;
    }
    case 220851:
    {
        returnValue = F("Metjensande");
        break;
    }
    case 220852:
    {
        returnValue = F("Metjenweg");
        break;
    }
    case 220853:
    {
        returnValue = F("Metkenberg");
        break;
    }
    case 220854:
    {
        returnValue = F("Metkenmoorweg");
        break;
    }
    case 220855:
    {
        returnValue = F("Metkers Pättken");
        break;
    }
    case 220856:
    {
        returnValue = F("Metlanger Weg");
        break;
    }
    case 220857:
    {
        returnValue = F("Metnitzer Str.");
        break;
    }
    case 220858:
    {
        returnValue = F("Metschert");
        break;
    }
    case 220859:
    {
        returnValue = F("Metschow");
        break;
    }
    case 220860:
    {
        returnValue = F("Metsiederweg");
        break;
    }
    case 220861:
    {
        returnValue = F("Mettberg");
        break;
    }
    case 220862:
    {
        returnValue = F("Mettebrink");
        break;
    }
    case 220863:
    {
        returnValue = F("Mettegangweg");
        break;
    }
    case 220864:
    {
        returnValue = F("Mettelbach");
        break;
    }
    case 220865:
    {
        returnValue = F("Mettelbacher Vicinalweg");
        break;
    }
    case 220866:
    {
        returnValue = F("Mettelbachstr.");
        break;
    }
    case 220867:
    {
        returnValue = F("Mettelberg");
        break;
    }
    case 220868:
    {
        returnValue = F("Mettelberger Mühle");
        break;
    }
    case 220869:
    {
        returnValue = F("Mettelgrundweg");
        break;
    }
    case 220870:
    {
        returnValue = F("Mettelmühle");
        break;
    }
    case 220871:
    {
        returnValue = F("Mettelsiefen");
        break;
    }
    case 220872:
    {
        returnValue = F("Mettelstr.");
        break;
    }
    case 220873:
    {
        returnValue = F("Mettelwitz");
        break;
    }
    case 220874:
    {
        returnValue = F("Mettenbacher Str.");
        break;
    }
    case 220875:
    {
        returnValue = F("Mettenbachweg");
        break;
    }
    case 220876:
    {
        returnValue = F("Mettenberger Str.");
        break;
    }
    case 220877:
    {
        returnValue = F("Mettenberger Weg");
        break;
    }
    case 220878:
    {
        returnValue = F("Mettenbergstr.");
        break;
    }
    case 220879:
    {
        returnValue = F("Mettenbergweg");
        break;
    }
    case 220880:
    {
        returnValue = F("Mettendorfer Str.");
        break;
    }
    case 220881:
    {
        returnValue = F("Mettendorfer Weg");
        break;
    }
    case 220882:
    {
        returnValue = F("Mettener Str.");
        break;
    }
    case 220883:
    {
        returnValue = F("Mettengasse");
        break;
    }
    case 220884:
    {
        returnValue = F("Mettenhaldenstr.");
        break;
    }
    case 220885:
    {
        returnValue = F("Mettenheimer Weg");
        break;
    }
    case 220886:
    {
        returnValue = F("Mettenheimerstr.");
        break;
    }
    case 220887:
    {
        returnValue = F("Mettenhof");
        break;
    }
    case 220888:
    {
        returnValue = F("Mettenhofer Weg");
        break;
    }
    case 220889:
    {
        returnValue = F("Mettenhofzubringer");
        break;
    }
    case 220890:
    {
        returnValue = F("Mettenleiterstr.");
        break;
    }
    case 220891:
    {
        returnValue = F("Mettenuferstr.");
        break;
    }
    case 220892:
    {
        returnValue = F("Mettenöschstr.");
        break;
    }
    case 220893:
    {
        returnValue = F("Metteranlagen");
        break;
    }
    case 220894:
    {
        returnValue = F("Metterhangweg");
        break;
    }
    case 220895:
    {
        returnValue = F("Mettericher Str.");
        break;
    }
    case 220896:
    {
        returnValue = F("Metterkampstr.");
        break;
    }
    case 220897:
    {
        returnValue = F("Mettermichstr.");
        break;
    }
    case 220898:
    {
        returnValue = F("Metternicher Str.");
        break;
    }
    case 220899:
    {
        returnValue = F("Metternicher Weg");
        break;
    }
    case 220900:
    {
        returnValue = F("Metternichstr.");
        break;
    }
    case 220901:
    {
        returnValue = F("Metternichweg");
        break;
    }
    case 220902:
    {
        returnValue = F("Mettersche");
        break;
    }
    case 220903:
    {
        returnValue = F("Mettersdorfer Weg");
        break;
    }
    case 220904:
    {
        returnValue = F("Metterstr.");
        break;
    }
    case 220905:
    {
        returnValue = F("Metterweg");
        break;
    }
    case 220906:
    {
        returnValue = F("Metterzimmerer Str.");
        break;
    }
    case 220907:
    {
        returnValue = F("Mettestr.");
        break;
    }
    case 220908:
    {
        returnValue = F("Metting");
        break;
    }
    case 220909:
    {
        returnValue = F("Mettinger Grenze");
        break;
    }
    case 220910:
    {
        returnValue = F("Mettinger Str.");
        break;
    }
    case 220911:
    {
        returnValue = F("Mettinger Weg");
        break;
    }
    case 220912:
    {
        returnValue = F("Mettingerweg");
        break;
    }
    case 220913:
    {
        returnValue = F("Mettinghauser Str.");
        break;
    }
    case 220914:
    {
        returnValue = F("Mettjeweg");
        break;
    }
    case 220915:
    {
        returnValue = F("Mettlacher Str.");
        break;
    }
    case 220916:
    {
        returnValue = F("Mettlachstr.");
        break;
    }
    case 220917:
    {
        returnValue = F("Mettlau");
        break;
    }
    case 220918:
    {
        returnValue = F("Mettlenweg");
        break;
    }
    case 220919:
    {
        returnValue = F("Mettlerhofweg");
        break;
    }
    case 220920:
    {
        returnValue = F("Mettlermühle");
        break;
    }
    case 220921:
    {
        returnValue = F("Mettlerweg");
        break;
    }
    case 220922:
    {
        returnValue = F("Mettmanner Str.");
        break;
    }
    case 220923:
    {
        returnValue = F("Mettmannsgasse");
        break;
    }
    case 220924:
    {
        returnValue = F("Mettmatalstr.");
        break;
    }
    case 220925:
    {
        returnValue = F("Mettmatalweg");
        break;
    }
    case 220926:
    {
        returnValue = F("Mettmaweg");
        break;
    }
    case 220927:
    {
        returnValue = F("Mettmeerweg");
        break;
    }
    case 220928:
    {
        returnValue = F("Mettnaublick");
        break;
    }
    case 220929:
    {
        returnValue = F("Mettnaukreisel");
        break;
    }
    case 220930:
    {
        returnValue = F("Mettnaupark");
        break;
    }
    case 220931:
    {
        returnValue = F("Mettnaustr.");
        break;
    }
    case 220932:
    {
        returnValue = F("Mettnauweg");
        break;
    }
    case 220933:
    {
        returnValue = F("Mettnicher Str.");
        break;
    }
    case 220934:
    {
        returnValue = F("Mettseiferweg");
        break;
    }
    case 220935:
    {
        returnValue = F("Mettwinkel");
        break;
    }
    case 220936:
    {
        returnValue = F("Mettwinkelhalde");
        break;
    }
    case 220937:
    {
        returnValue = F("Metzdorf");
        break;
    }
    case 220938:
    {
        returnValue = F("Metzdorfer Str.");
        break;
    }
    case 220939:
    {
        returnValue = F("Metzdorfstr.");
        break;
    }
    case 220940:
    {
        returnValue = F("Metzebacher Str.");
        break;
    }
    case 220941:
    {
        returnValue = F("Metzekathweg");
        break;
    }
    case 220942:
    {
        returnValue = F("Metzelbach");
        break;
    }
    case 220943:
    {
        returnValue = F("Metzelberger Weg");
        break;
    }
    case 220944:
    {
        returnValue = F("Metzelbergstr.");
        break;
    }
    case 220945:
    {
        returnValue = F("Metzelplatz");
        break;
    }
    case 220946:
    {
        returnValue = F("Metzelser Str.");
        break;
    }
    case 220947:
    {
        returnValue = F("Metzelser Weg");
        break;
    }
    case 220948:
    {
        returnValue = F("Metzelstr.");
        break;
    }
    case 220949:
    {
        returnValue = F("Metzelthin");
        break;
    }
    case 220950:
    {
        returnValue = F("Metzelthiner Str.");
        break;
    }
    case 220951:
    {
        returnValue = F("Metzeläcker");
        break;
    }
    case 220952:
    {
        returnValue = F("Metzen Tannen");
        break;
    }
    case 220953:
    {
        returnValue = F("Metzenackerweg");
        break;
    }
    case 220954:
    {
        returnValue = F("Metzenbach");
        break;
    }
    case 220955:
    {
        returnValue = F("Metzenbachweg");
        break;
    }
    case 220956:
    {
        returnValue = F("Metzenbergstr.");
        break;
    }
    case 220957:
    {
        returnValue = F("Metzenburger Weg");
        break;
    }
    case 220958:
    {
        returnValue = F("Metzenbühlstr.");
        break;
    }
    case 220959:
    {
        returnValue = F("Metzendorfer Str.");
        break;
    }
    case 220960:
    {
        returnValue = F("Metzendorfer Weg");
        break;
    }
    case 220961:
    {
        returnValue = F("Metzenfeldstr.");
        break;
    }
    case 220962:
    {
        returnValue = F("Metzengarten");
        break;
    }
    case 220963:
    {
        returnValue = F("Metzengasse");
        break;
    }
    case 220964:
    {
        returnValue = F("Metzenhalde");
        break;
    }
    case 220965:
    {
        returnValue = F("Metzenhausener Str.");
        break;
    }
    case 220966:
    {
        returnValue = F("Metzenhausener Weg");
        break;
    }
    case 220967:
    {
        returnValue = F("Metzenhof");
        break;
    }
    case 220968:
    {
        returnValue = F("Metzenholz");
        break;
    }
    case 220969:
    {
        returnValue = F("Metzenleitenweg");
        break;
    }
    case 220970:
    {
        returnValue = F("Metzenmacherweg");
        break;
    }
    case 220971:
    {
        returnValue = F("Metzenrain");
        break;
    }
    case 220972:
    {
        returnValue = F("Metzenried");
        break;
    }
    case 220973:
    {
        returnValue = F("Metzenrieder Str.");
        break;
    }
    case 220974:
    {
        returnValue = F("Metzental");
        break;
    }
    case 220975:
    {
        returnValue = F("Metzentalstr.");
        break;
    }
    case 220976:
    {
        returnValue = F("Metzenweg");
        break;
    }
    case 220977:
    {
        returnValue = F("Metzenwiesenstr.");
        break;
    }
    case 220978:
    {
        returnValue = F("Metzenäcker");
        break;
    }
    case 220979:
    {
        returnValue = F("Metzer Allee");
        break;
    }
    case 220980:
    {
        returnValue = F("Metzer Platz");
        break;
    }
    case 220981:
    {
        returnValue = F("Metzer Str.");
        break;
    }
    case 220982:
    {
        returnValue = F("Metzer Weg");
        break;
    }
    case 220983:
    {
        returnValue = F("Metzerbachweg");
        break;
    }
    case 220984:
    {
        returnValue = F("Metzerstr.");
        break;
    }
    case 220985:
    {
        returnValue = F("Metzgarten");
        break;
    }
    case 220986:
    {
        returnValue = F("Metzgasse");
        break;
    }
    case 220987:
    {
        returnValue = F("Metzger-Gutjahr-Str.");
        break;
    }
    case 220988:
    {
        returnValue = F("Metzgerallmend");
        break;
    }
    case 220989:
    {
        returnValue = F("Metzgerberg");
        break;
    }
    case 220990:
    {
        returnValue = F("Metzgerbräustr.");
        break;
    }
    case 220991:
    {
        returnValue = F("Metzgerfeld");
        break;
    }
    case 220992:
    {
        returnValue = F("Metzgerfeldweg");
        break;
    }
    case 220993:
    {
        returnValue = F("Metzgergasse");
        break;
    }
    case 220994:
    {
        returnValue = F("Metzgergässle");
        break;
    }
    case 220995:
    {
        returnValue = F("Metzgergäßle");
        break;
    }
    case 220996:
    {
        returnValue = F("Metzgerpfad");
        break;
    }
    case 220997:
    {
        returnValue = F("Metzgersbauernhöfe");
        break;
    }
    case 220998:
    {
        returnValue = F("Metzgersbrunnweg");
        break;
    }
    case 220999:
    {
        returnValue = F("Metzgersbuschrundweg");
        break;
    }
    case 221000:
    {
        returnValue = F("Metzgerschlag");
        break;
    }
    case 221001:
    {
        returnValue = F("Metzgersgasse");
        break;
    }
    case 221002:
    {
        returnValue = F("Metzgersteg");
        break;
    }
    case 221003:
    {
        returnValue = F("Metzgerstr.");
        break;
    }
    case 221004:
    {
        returnValue = F("Metzgerweg");
        break;
    }
    case 221005:
    {
        returnValue = F("Metzgerwegerl");
        break;
    }
    case 221006:
    {
        returnValue = F("Metzgerwiesen");
        break;
    }
    case 221007:
    {
        returnValue = F("Metzgeräckerstr.");
        break;
    }
    case 221008:
    {
        returnValue = F("Metzgeshauser Weg");
        break;
    }
    case 221009:
    {
        returnValue = F("Metzholz");
        break;
    }
    case 221010:
    {
        returnValue = F("Metzholzer Str.");
        break;
    }
    case 221011:
    {
        returnValue = F("Metziggasse");
        break;
    }
    case 221012:
    {
        returnValue = F("Metzinger Str.");
        break;
    }
    case 221013:
    {
        returnValue = F("Metzinger Weg");
        break;
    }
    case 221014:
    {
        returnValue = F("Metzingsberg");
        break;
    }
    case 221015:
    {
        returnValue = F("Metzkausener Str.");
        break;
    }
    case 221016:
    {
        returnValue = F("Metzlasreuther Str.");
        break;
    }
    case 221017:
    {
        returnValue = F("Metzlensbühlweg");
        break;
    }
    case 221018:
    {
        returnValue = F("Metzlenshof");
        break;
    }
    case 221019:
    {
        returnValue = F("Metzlersreuth");
        break;
    }
    case 221020:
    {
        returnValue = F("Metzlersreuther Str.");
        break;
    }
    case 221021:
    {
        returnValue = F("Metzlerstr.");
        break;
    }
    case 221022:
    {
        returnValue = F("Metzlesberg");
        break;
    }
    case 221023:
    {
        returnValue = F("Metzlkellerweg");
        break;
    }
    case 221024:
    {
        returnValue = F("Metzlochweg");
        break;
    }
    case 221025:
    {
        returnValue = F("Metzlos-Gehaager-Str.");
        break;
    }
    case 221026:
    {
        returnValue = F("Metzloser Str.");
        break;
    }
    case 221027:
    {
        returnValue = F("Metzmacherstr.");
        break;
    }
    case 221028:
    {
        returnValue = F("Metznergasse");
        break;
    }
    case 221029:
    {
        returnValue = F("Metznerstr.");
        break;
    }
    case 221030:
    {
        returnValue = F("Metzroth-Str.");
        break;
    }
    case 221031:
    {
        returnValue = F("Metzstr.");
        break;
    }
    case 221032:
    {
        returnValue = F("Metzwieschen");
        break;
    }
    case 221033:
    {
        returnValue = F("Meucha");
        break;
    }
    case 221034:
    {
        returnValue = F("Meuchener Str.");
        break;
    }
    case 221035:
    {
        returnValue = F("Meuchener Weg");
        break;
    }
    case 221036:
    {
        returnValue = F("Meuchner Str.");
        break;
    }
    case 221037:
    {
        returnValue = F("Meudonstr.");
        break;
    }
    case 221038:
    {
        returnValue = F("Meudter Str.");
        break;
    }
    case 221039:
    {
        returnValue = F("Meulanstr.");
        break;
    }
    case 221040:
    {
        returnValue = F("Meulenberghstr.");
        break;
    }
    case 221041:
    {
        returnValue = F("Meulenstr.");
        break;
    }
    case 221042:
    {
        returnValue = F("Meuraer Weg");
        break;
    }
    case 221043:
    {
        returnValue = F("Meurastr.");
        break;
    }
    case 221044:
    {
        returnValue = F("Meurerstr.");
        break;
    }
    case 221045:
    {
        returnValue = F("Meurich");
        break;
    }
    case 221046:
    {
        returnValue = F("Meuro");
        break;
    }
    case 221047:
    {
        returnValue = F("Meuroer Str.");
        break;
    }
    case 221048:
    {
        returnValue = F("Meuroer Weg");
        break;
    }
    case 221049:
    {
        returnValue = F("Meursfeldstr.");
        break;
    }
    case 221050:
    {
        returnValue = F("Meuschablick");
        break;
    }
    case 221051:
    {
        returnValue = F("Meuschaer Weg");
        break;
    }
    case 221052:
    {
        returnValue = F("Meuschauer Str.");
        break;
    }
    case 221053:
    {
        returnValue = F("Meusdorf");
        break;
    }
    case 221054:
    {
        returnValue = F("Meuselko");
        break;
    }
    case 221055:
    {
        returnValue = F("Meuselstr.");
        break;
    }
    case 221056:
    {
        returnValue = F("Meuselwitzer Dorfstr.");
        break;
    }
    case 221057:
    {
        returnValue = F("Meuselwitzer Hauptstr.");
        break;
    }
    case 221058:
    {
        returnValue = F("Meuselwitzer Str.");
        break;
    }
    case 221059:
    {
        returnValue = F("Meuselwitzer Weg");
        break;
    }
    case 221060:
    {
        returnValue = F("Meuserlengefeld");
        break;
    }
    case 221061:
    {
        returnValue = F("Meuserlengefelder Str.");
        break;
    }
    case 221062:
    {
        returnValue = F("Meuserweg");
        break;
    }
    case 221063:
    {
        returnValue = F("Meuspather Weg");
        break;
    }
    case 221064:
    {
        returnValue = F("Meusweg");
        break;
    }
    case 221065:
    {
        returnValue = F("Meutemühle");
        break;
    }
    case 221066:
    {
        returnValue = F("Meutershecke");
        break;
    }
    case 221067:
    {
        returnValue = F("Meutersweg");
        break;
    }
    case 221068:
    {
        returnValue = F("Meuthstr.");
        break;
    }
    case 221069:
    {
        returnValue = F("Meußelsdorfer Str.");
        break;
    }
    case 221070:
    {
        returnValue = F("Meußerlsdorferstr.");
        break;
    }
    case 221071:
    {
        returnValue = F("Mevenheide");
        break;
    }
    case 221072:
    {
        returnValue = F("Mevenstedter Str.");
        break;
    }
    case 221073:
    {
        returnValue = F("Meves-Berns-Str.");
        break;
    }
    case 221074:
    {
        returnValue = F("Mevissenstr.");
        break;
    }
    case 221075:
    {
        returnValue = F("Mevlana-Rumi-Str.");
        break;
    }
    case 221076:
    {
        returnValue = F("Mewegener Str.");
        break;
    }
    case 221077:
    {
        returnValue = F("Mewer Ring");
        break;
    }
    case 221078:
    {
        returnValue = F("Mewes-Ovens-Weg");
        break;
    }
    case 221079:
    {
        returnValue = F("Meweskoppel");
        break;
    }
    case 221080:
    {
        returnValue = F("Mewesstr.");
        break;
    }
    case 221081:
    {
        returnValue = F("Mexiko");
        break;
    }
    case 221082:
    {
        returnValue = F("Mexikostr.");
        break;
    }
    case 221083:
    {
        returnValue = F("Meybohmstr.");
        break;
    }
    case 221084:
    {
        returnValue = F("Meyburginsel");
        break;
    }
    case 221085:
    {
        returnValue = F("Meydenbauerweg");
        break;
    }
    case 221086:
    {
        returnValue = F("Meydeweg");
        break;
    }
    case 221087:
    {
        returnValue = F("Meyelheide");
        break;
    }
    case 221088:
    {
        returnValue = F("Meyenbergstr.");
        break;
    }
    case 221089:
    {
        returnValue = F("Meyenburger Allee");
        break;
    }
    case 221090:
    {
        returnValue = F("Meyenburger Chaussee");
        break;
    }
    case 221091:
    {
        returnValue = F("Meyenburger Damm");
        break;
    }
    case 221092:
    {
        returnValue = F("Meyenburger Hang");
        break;
    }
    case 221093:
    {
        returnValue = F("Meyenburger Str.");
        break;
    }
    case 221094:
    {
        returnValue = F("Meyenburger Str. Falkenhagen");
        break;
    }
    case 221095:
    {
        returnValue = F("Meyenburger Tor");
        break;
    }
    case 221096:
    {
        returnValue = F("Meyenburgstr.");
        break;
    }
    case 221097:
    {
        returnValue = F("Meyendorfer Weg");
        break;
    }
    case 221098:
    {
        returnValue = F("Meyendorffstr.");
        break;
    }
    case 221099:
    {
        returnValue = F("Meyenfelder Str.");
        break;
    }
    case 221100:
    {
        returnValue = F("Meyengrün");
        break;
    }
    case 221101:
    {
        returnValue = F("Meyenkrebs");
        break;
    }
    case 221102:
    {
        returnValue = F("Meyer Esch");
        break;
    }
    case 221103:
    {
        returnValue = F("Meyer-Allee");
        break;
    }
    case 221104:
    {
        returnValue = F("Meyer-Behr-Str.");
        break;
    }
    case 221105:
    {
        returnValue = F("Meyer-Eckhardt-Str.");
        break;
    }
    case 221106:
    {
        returnValue = F("Meyer-Gerngroß-Str.");
        break;
    }
    case 221107:
    {
        returnValue = F("Meyer-Kämpe");
        break;
    }
    case 221108:
    {
        returnValue = F("Meyer-Lippinghausen-Str.");
        break;
    }
    case 221109:
    {
        returnValue = F("Meyer-Olbersleben-Str.");
        break;
    }
    case 221110:
    {
        returnValue = F("Meyer-Peters Hof");
        break;
    }
    case 221111:
    {
        returnValue = F("Meyer-Seeken-Str.");
        break;
    }
    case 221112:
    {
        returnValue = F("Meyer-Wellmann-Str.");
        break;
    }
    case 221113:
    {
        returnValue = F("Meyer-zum-Gottesberge-Str.");
        break;
    }
    case 221114:
    {
        returnValue = F("Meyerbeerstr.");
        break;
    }
    case 221115:
    {
        returnValue = F("Meyerbeerweg");
        break;
    }
    case 221116:
    {
        returnValue = F("Meyerberg");
        break;
    }
    case 221117:
    {
        returnValue = F("Meyerdamm");
        break;
    }
    case 221118:
    {
        returnValue = F("Meyerfeld");
        break;
    }
    case 221119:
    {
        returnValue = F("Meyerfelder Weg");
        break;
    }
    case 221120:
    {
        returnValue = F("Meyerfeldstr.");
        break;
    }
    case 221121:
    {
        returnValue = F("Meyergasse");
        break;
    }
    case 221122:
    {
        returnValue = F("Meyergäßchen");
        break;
    }
    case 221123:
    {
        returnValue = F("Meyerhof");
        break;
    }
    case 221124:
    {
        returnValue = F("Meyerhof zum Wischhoff");
        break;
    }
    case 221125:
    {
        returnValue = F("Meyerhoffstr.");
        break;
    }
    case 221126:
    {
        returnValue = F("Meyerhofgang");
        break;
    }
    case 221127:
    {
        returnValue = F("Meyerhofstr.");
        break;
    }
    case 221128:
    {
        returnValue = F("Meyerhofsweg");
        break;
    }
    case 221129:
    {
        returnValue = F("Meyerhofweg");
        break;
    }
    case 221130:
    {
        returnValue = F("Meyerholz");
        break;
    }
    case 221131:
    {
        returnValue = F("Meyerholzweg");
        break;
    }
    case 221132:
    {
        returnValue = F("Meyerhopsweg");
        break;
    }
    case 221133:
    {
        returnValue = F("Meyerhöfen");
        break;
    }
    case 221134:
    {
        returnValue = F("Meyerhöfener Str.");
        break;
    }
    case 221135:
    {
        returnValue = F("Meyericher Kirchfeld");
        break;
    }
    case 221136:
    {
        returnValue = F("Meyeriethe");
        break;
    }
    case 221137:
    {
        returnValue = F("Meyerings Busch");
        break;
    }
    case 221138:
    {
        returnValue = F("Meyerings Kirchweg");
        break;
    }
    case 221139:
    {
        returnValue = F("Meyerkamp");
        break;
    }
    case 221140:
    {
        returnValue = F("Meyerkampstr.");
        break;
    }
    case 221141:
    {
        returnValue = F("Meyermannsweg");
        break;
    }
    case 221142:
    {
        returnValue = F("Meyermathe");
        break;
    }
    case 221143:
    {
        returnValue = F("Meyernberger Park");
        break;
    }
    case 221144:
    {
        returnValue = F("Meyernberger Str.");
        break;
    }
    case 221145:
    {
        returnValue = F("Meyernreuth");
        break;
    }
    case 221146:
    {
        returnValue = F("Meyers Bruch");
        break;
    }
    case 221147:
    {
        returnValue = F("Meyers Gasse");
        break;
    }
    case 221148:
    {
        returnValue = F("Meyers Grund");
        break;
    }
    case 221149:
    {
        returnValue = F("Meyers Hagen");
        break;
    }
    case 221150:
    {
        returnValue = F("Meyers Hausstelle");
        break;
    }
    case 221151:
    {
        returnValue = F("Meyers Hausstellen Weg");
        break;
    }
    case 221152:
    {
        returnValue = F("Meyers Kamp");
        break;
    }
    case 221153:
    {
        returnValue = F("Meyers Land");
        break;
    }
    case 221154:
    {
        returnValue = F("Meyers Patt");
        break;
    }
    case 221155:
    {
        returnValue = F("Meyers Tannen");
        break;
    }
    case 221156:
    {
        returnValue = F("Meyers Weg");
        break;
    }
    case 221157:
    {
        returnValue = F("Meyers-Linde-Str.");
        break;
    }
    case 221158:
    {
        returnValue = F("Meyersberg");
        break;
    }
    case 221159:
    {
        returnValue = F("Meyersche Weg");
        break;
    }
    case 221160:
    {
        returnValue = F("Meyersgasse");
        break;
    }
    case 221161:
    {
        returnValue = F("Meyersgrund");
        break;
    }
    case 221162:
    {
        returnValue = F("Meyershausstellenschneise");
        break;
    }
    case 221163:
    {
        returnValue = F("Meyershofenstr.");
        break;
    }
    case 221164:
    {
        returnValue = F("Meyerskamp");
        break;
    }
    case 221165:
    {
        returnValue = F("Meyersoygasse");
        break;
    }
    case 221166:
    {
        returnValue = F("Meyerstede");
        break;
    }
    case 221167:
    {
        returnValue = F("Meyersteinweg");
        break;
    }
    case 221168:
    {
        returnValue = F("Meyerstr.");
        break;
    }
    case 221169:
    {
        returnValue = F("Meyersweg");
        break;
    }
    case 221170:
    {
        returnValue = F("Meyertwiete");
        break;
    }
    case 221171:
    {
        returnValue = F("Meyerweg");
        break;
    }
    case 221172:
    {
        returnValue = F("Meyeshofstr.");
        break;
    }
    case 221173:
    {
        returnValue = F("Meyfried");
        break;
    }
    case 221174:
    {
        returnValue = F("Meygner Busch");
        break;
    }
    case 221175:
    {
        returnValue = F("Meyhener Str.");
        break;
    }
    case 221176:
    {
        returnValue = F("Meyhengraben");
        break;
    }
    case 221177:
    {
        returnValue = F("Meymacstr.");
        break;
    }
    case 221178:
    {
        returnValue = F("Meynardweg");
        break;
    }
    case 221179:
    {
        returnValue = F("Meynautal");
        break;
    }
    case 221180:
    {
        returnValue = F("Meynens Moor");
        break;
    }
    case 221181:
    {
        returnValue = F("Meyner Str.");
        break;
    }
    case 221182:
    {
        returnValue = F("Meynfeld-Süd");
        break;
    }
    case 221183:
    {
        returnValue = F("Meynfeld-West");
        break;
    }
    case 221184:
    {
        returnValue = F("Meyns Hof");
        break;
    }
    case 221185:
    {
        returnValue = F("Meyns Hof 13");
        break;
    }
    case 221186:
    {
        returnValue = F("Meyns Hof 15");
        break;
    }
    case 221187:
    {
        returnValue = F("Meyns Hof 17");
        break;
    }
    case 221188:
    {
        returnValue = F("Meyns Hof 19");
        break;
    }
    case 221189:
    {
        returnValue = F("Meyns Hof 21");
        break;
    }
    case 221190:
    {
        returnValue = F("Meyns Hof 23");
        break;
    }
    case 221191:
    {
        returnValue = F("Meyns Hof 25");
        break;
    }
    case 221192:
    {
        returnValue = F("Meynstr.");
        break;
    }
    case 221193:
    {
        returnValue = F("Meyra-Ring");
        break;
    }
    case 221194:
    {
        returnValue = F("Meyringstr.");
        break;
    }
    case 221195:
    {
        returnValue = F("Meyscheperstr.");
        break;
    }
    case 221196:
    {
        returnValue = F("Meysenbugring");
        break;
    }
    case 221197:
    {
        returnValue = F("Meysenbugweg");
        break;
    }
    case 221198:
    {
        returnValue = F("Meyserweg");
        break;
    }
    case 221199:
    {
        returnValue = F("Meyweg");
        break;
    }
    case 221200:
    {
        returnValue = F("Mezelhöhenweg");
        break;
    }
    case 221201:
    {
        returnValue = F("Mezenäckerweg");
        break;
    }
    case 221202:
    {
        returnValue = F("Mezgerstr.");
        break;
    }
    case 221203:
    {
        returnValue = F("Mezgerwaidring");
        break;
    }
    case 221204:
    {
        returnValue = F("Mezzagoring");
        break;
    }
    case 221205:
    {
        returnValue = F("Mezzstr.");
        break;
    }
    case 221206:
    {
        returnValue = F("Meßbach");
        break;
    }
    case 221207:
    {
        returnValue = F("Meßbacher Str.");
        break;
    }
    case 221208:
    {
        returnValue = F("Meßbacher Weg");
        break;
    }
    case 221209:
    {
        returnValue = F("Meßbeuel");
        break;
    }
    case 221210:
    {
        returnValue = F("Meßdornstr.");
        break;
    }
    case 221211:
    {
        returnValue = F("Meßdorweg");
        break;
    }
    case 221212:
    {
        returnValue = F("Meßdunker Str.");
        break;
    }
    case 221213:
    {
        returnValue = F("Meßflur");
        break;
    }
    case 221214:
    {
        returnValue = F("Meßgäßchen");
        break;
    }
    case 221215:
    {
        returnValue = F("Meßhagen");
        break;
    }
    case 221216:
    {
        returnValue = F("Meßhausen");
        break;
    }
    case 221217:
    {
        returnValue = F("Meßhofer Weg");
        break;
    }
    case 221218:
    {
        returnValue = F("Meßhorn");
        break;
    }
    case 221219:
    {
        returnValue = F("Meßhäuser Kirchweg");
        break;
    }
    case 221220:
    {
        returnValue = F("Meßhäuser Weg");
        break;
    }
    case 221221:
    {
        returnValue = F("Meßkircher Str.");
        break;
    }
    case 221222:
    {
        returnValue = F("Meßleite");
        break;
    }
    case 221223:
    {
        returnValue = F("Meßlenweg");
        break;
    }
    case 221224:
    {
        returnValue = F("Meßlinger Dorfstr.");
        break;
    }
    case 221225:
    {
        returnValue = F("Meßlinger Mühle");
        break;
    }
    case 221226:
    {
        returnValue = F("Meßlinger Str.");
        break;
    }
    case 221227:
    {
        returnValue = F("Meßloher Weg");
        break;
    }
    case 221228:
    {
        returnValue = F("Meßmerstr.");
        break;
    }
    case 221229:
    {
        returnValue = F("Meßmerweg");
        break;
    }
    case 221230:
    {
        returnValue = F("Meßnerschlagerwaide");
        break;
    }
    case 221231:
    {
        returnValue = F("Meßnerstr.");
        break;
    }
    case 221232:
    {
        returnValue = F("Meßnerweg");
        break;
    }
    case 221233:
    {
        returnValue = F("Meßplatz");
        break;
    }
    case 221234:
    {
        returnValue = F("Meßplatzstr.");
        break;
    }
    case 221235:
    {
        returnValue = F("Meßstetter Str.");
        break;
    }
    case 221236:
    {
        returnValue = F("Meßstr.");
        break;
    }
    case 221237:
    {
        returnValue = F("Meßterfeld");
        break;
    }
    case 221238:
    {
        returnValue = F("Meßtor");
        break;
    }
    case 221239:
    {
        returnValue = F("Meßtorffstr.");
        break;
    }
    case 221240:
    {
        returnValue = F("Meßtorffweg");
        break;
    }
    case 221241:
    {
        returnValue = F("Meßweg");
        break;
    }
    case 221242:
    {
        returnValue = F("Mia-Ketelsen-Weg");
        break;
    }
    case 221243:
    {
        returnValue = F("Miadwai");
        break;
    }
    case 221244:
    {
        returnValue = F("Miastkoerstr.");
        break;
    }
    case 221245:
    {
        returnValue = F("Michaeilstr.");
        break;
    }
    case 221246:
    {
        returnValue = F("Michael Ende Kurpark");
        break;
    }
    case 221247:
    {
        returnValue = F("Michael Kurz Weg");
        break;
    }
    case 221248:
    {
        returnValue = F("Michael-Armbruster-Str.");
        break;
    }
    case 221249:
    {
        returnValue = F("Michael-Aumüller-Str.");
        break;
    }
    case 221250:
    {
        returnValue = F("Michael-Babel-Str.");
        break;
    }
    case 221251:
    {
        returnValue = F("Michael-Bach-Str.");
        break;
    }
    case 221252:
    {
        returnValue = F("Michael-Bachmaier-Weg");
        break;
    }
    case 221253:
    {
        returnValue = F("Michael-Bauer-Str.");
        break;
    }
    case 221254:
    {
        returnValue = F("Michael-Beck-Str.");
        break;
    }
    case 221255:
    {
        returnValue = F("Michael-Bedrich-Str.");
        break;
    }
    case 221256:
    {
        returnValue = F("Michael-Beer-Str.");
        break;
    }
    case 221257:
    {
        returnValue = F("Michael-Beheim-Str.");
        break;
    }
    case 221258:
    {
        returnValue = F("Michael-Berger-Str.");
        break;
    }
    case 221259:
    {
        returnValue = F("Michael-Beuther-Weg");
        break;
    }
    case 221260:
    {
        returnValue = F("Michael-Biebl-Weg");
        break;
    }
    case 221261:
    {
        returnValue = F("Michael-Bienlein-Str.");
        break;
    }
    case 221262:
    {
        returnValue = F("Michael-Birk-Str.");
        break;
    }
    case 221263:
    {
        returnValue = F("Michael-Bitzer-Str.");
        break;
    }
    case 221264:
    {
        returnValue = F("Michael-Blatter-Str.");
        break;
    }
    case 221265:
    {
        returnValue = F("Michael-Brand-Str.");
        break;
    }
    case 221266:
    {
        returnValue = F("Michael-Braun-Ring");
        break;
    }
    case 221267:
    {
        returnValue = F("Michael-Braun-Str.");
        break;
    }
    case 221268:
    {
        returnValue = F("Michael-Breunig-Str.");
        break;
    }
    case 221269:
    {
        returnValue = F("Michael-Burgau-Str.");
        break;
    }
    case 221270:
    {
        returnValue = F("Michael-Buyx-Str.");
        break;
    }
    case 221271:
    {
        returnValue = F("Michael-Büttgen-Str.");
        break;
    }
    case 221272:
    {
        returnValue = F("Michael-Christ-Str.");
        break;
    }
    case 221273:
    {
        returnValue = F("Michael-Clare-Str.");
        break;
    }
    case 221274:
    {
        returnValue = F("Michael-Dacher-Str.");
        break;
    }
    case 221275:
    {
        returnValue = F("Michael-Datzl-Str.");
        break;
    }
    case 221276:
    {
        returnValue = F("Michael-Dechant-Str.");
        break;
    }
    case 221277:
    {
        returnValue = F("Michael-Dengg-Weg");
        break;
    }
    case 221278:
    {
        returnValue = F("Michael-Diemer-Str.");
        break;
    }
    case 221279:
    {
        returnValue = F("Michael-Dießle-Str.");
        break;
    }
    case 221280:
    {
        returnValue = F("Michael-Diller-Str.");
        break;
    }
    case 221281:
    {
        returnValue = F("Michael-Dirnberger-Weg");
        break;
    }
    case 221282:
    {
        returnValue = F("Michael-Dobler-Str.");
        break;
    }
    case 221283:
    {
        returnValue = F("Michael-Doser-Str.");
        break;
    }
    case 221284:
    {
        returnValue = F("Michael-Eckert-Str.");
        break;
    }
    case 221285:
    {
        returnValue = F("Michael-Eifinger-Str.");
        break;
    }
    case 221286:
    {
        returnValue = F("Michael-Ende-Ring");
        break;
    }
    case 221287:
    {
        returnValue = F("Michael-Ende-Str.");
        break;
    }
    case 221288:
    {
        returnValue = F("Michael-Ende-Weg");
        break;
    }
    case 221289:
    {
        returnValue = F("Michael-Eresinger-Str.");
        break;
    }
    case 221290:
    {
        returnValue = F("Michael-Erhard-Str.");
        break;
    }
    case 221291:
    {
        returnValue = F("Michael-Faist-Str.");
        break;
    }
    case 221292:
    {
        returnValue = F("Michael-Faraday-Str.");
        break;
    }
    case 221293:
    {
        returnValue = F("Michael-Felke-Str.");
        break;
    }
    case 221294:
    {
        returnValue = F("Michael-Fischer-Platz");
        break;
    }
    case 221295:
    {
        returnValue = F("Michael-Fischer-Str.");
        break;
    }
    case 221296:
    {
        returnValue = F("Michael-Geißler-Str.");
        break;
    }
    case 221297:
    {
        returnValue = F("Michael-Gerber-Str.");
        break;
    }
    case 221298:
    {
        returnValue = F("Michael-Glaser-Weg");
        break;
    }
    case 221299:
    {
        returnValue = F("Michael-Gloßner-Str.");
        break;
    }
    case 221300:
    {
        returnValue = F("Michael-Greif-Str.");
        break;
    }
    case 221301:
    {
        returnValue = F("Michael-Grimm-Weg");
        break;
    }
    case 221302:
    {
        returnValue = F("Michael-Grossarth-Str.");
        break;
    }
    case 221303:
    {
        returnValue = F("Michael-Groß-Str.");
        break;
    }
    case 221304:
    {
        returnValue = F("Michael-Gärtner-Str.");
        break;
    }
    case 221305:
    {
        returnValue = F("Michael-Göbel-Str.");
        break;
    }
    case 221306:
    {
        returnValue = F("Michael-Götz-Str.");
        break;
    }
    case 221307:
    {
        returnValue = F("Michael-Haas-Str.");
        break;
    }
    case 221308:
    {
        returnValue = F("Michael-Haf-Str.");
        break;
    }
    case 221309:
    {
        returnValue = F("Michael-Hagen-Str.");
        break;
    }
    case 221310:
    {
        returnValue = F("Michael-Haslbeck-Str.");
        break;
    }
    case 221311:
    {
        returnValue = F("Michael-Hauser-Str.");
        break;
    }
    case 221312:
    {
        returnValue = F("Michael-Haydn-Weg");
        break;
    }
    case 221313:
    {
        returnValue = F("Michael-Heigl-Str.");
        break;
    }
    case 221314:
    {
        returnValue = F("Michael-Henkel-Str.");
        break;
    }
    case 221315:
    {
        returnValue = F("Michael-Herr-Str.");
        break;
    }
    case 221316:
    {
        returnValue = F("Michael-Heuffner-Str.");
        break;
    }
    case 221317:
    {
        returnValue = F("Michael-Hierl-Str.");
        break;
    }
    case 221318:
    {
        returnValue = F("Michael-Hofer-Str.");
        break;
    }
    case 221319:
    {
        returnValue = F("Michael-Holzhay-Str.");
        break;
    }
    case 221320:
    {
        returnValue = F("Michael-Hornig-Str.");
        break;
    }
    case 221321:
    {
        returnValue = F("Michael-Huber-Weg");
        break;
    }
    case 221322:
    {
        returnValue = F("Michael-Häckel-Weg");
        break;
    }
    case 221323:
    {
        returnValue = F("Michael-Häußler-Weg");
        break;
    }
    case 221324:
    {
        returnValue = F("Michael-Höhbauer-Str.");
        break;
    }
    case 221325:
    {
        returnValue = F("Michael-Hörauf-Weg");
        break;
    }
    case 221326:
    {
        returnValue = F("Michael-Hösch-Platz");
        break;
    }
    case 221327:
    {
        returnValue = F("Michael-Ignaz-Schmitt-Str.");
        break;
    }
    case 221328:
    {
        returnValue = F("Michael-Imhof-Str.");
        break;
    }
    case 221329:
    {
        returnValue = F("Michael-Irl-Str.");
        break;
    }
    case 221330:
    {
        returnValue = F("Michael-Jais-Str.");
        break;
    }
    case 221331:
    {
        returnValue = F("Michael-Juris-Str.");
        break;
    }
    case 221332:
    {
        returnValue = F("Michael-Jäger-Str.");
        break;
    }
    case 221333:
    {
        returnValue = F("Michael-Kalb-Str.");
        break;
    }
    case 221334:
    {
        returnValue = F("Michael-Keller-Str.");
        break;
    }
    case 221335:
    {
        returnValue = F("Michael-Keller-Weg");
        break;
    }
    case 221336:
    {
        returnValue = F("Michael-Kern-Str.");
        break;
    }
    case 221337:
    {
        returnValue = F("Michael-Kiefer-Weg");
        break;
    }
    case 221338:
    {
        returnValue = F("Michael-Kievelitz-Str.");
        break;
    }
    case 221339:
    {
        returnValue = F("Michael-Kitzelmann-Str.");
        break;
    }
    case 221340:
    {
        returnValue = F("Michael-Kitzelmann-Weg");
        break;
    }
    case 221341:
    {
        returnValue = F("Michael-Klafki-Weg");
        break;
    }
    case 221342:
    {
        returnValue = F("Michael-Knauer-Ring");
        break;
    }
    case 221343:
    {
        returnValue = F("Michael-Knoll-Str.");
        break;
    }
    case 221344:
    {
        returnValue = F("Michael-Kohlhaas-Str.");
        break;
    }
    case 221345:
    {
        returnValue = F("Michael-Kometer-Ring");
        break;
    }
    case 221346:
    {
        returnValue = F("Michael-Kotz-Str.");
        break;
    }
    case 221347:
    {
        returnValue = F("Michael-Kraf-Str.");
        break;
    }
    case 221348:
    {
        returnValue = F("Michael-Kreß-Str.");
        break;
    }
    case 221349:
    {
        returnValue = F("Michael-Kreß-Weg");
        break;
    }
    case 221350:
    {
        returnValue = F("Michael-Kupfer-Str.");
        break;
    }
    case 221351:
    {
        returnValue = F("Michael-Kurz-Str.");
        break;
    }
    case 221352:
    {
        returnValue = F("Michael-Kölbl-Str.");
        break;
    }
    case 221353:
    {
        returnValue = F("Michael-Küchel-Str.");
        break;
    }
    case 221354:
    {
        returnValue = F("Michael-Lang-Str.");
        break;
    }
    case 221355:
    {
        returnValue = F("Michael-Lanz-Str.");
        break;
    }
    case 221356:
    {
        returnValue = F("Michael-Laux-Weg");
        break;
    }
    case 221357:
    {
        returnValue = F("Michael-Lorch-Weg");
        break;
    }
    case 221358:
    {
        returnValue = F("Michael-Lotter-Str.");
        break;
    }
    case 221359:
    {
        returnValue = F("Michael-Ludwig-Rohrer-Str.");
        break;
    }
    case 221360:
    {
        returnValue = F("Michael-Maier-Str.");
        break;
    }
    case 221361:
    {
        returnValue = F("Michael-Mappes-Str.");
        break;
    }
    case 221362:
    {
        returnValue = F("Michael-Mayer-Str.");
        break;
    }
    case 221363:
    {
        returnValue = F("Michael-Mayr-Weg");
        break;
    }
    case 221364:
    {
        returnValue = F("Michael-Meindl-Str.");
        break;
    }
    case 221365:
    {
        returnValue = F("Michael-Meurer-Str.");
        break;
    }
    case 221366:
    {
        returnValue = F("Michael-Meyenburg-Weg");
        break;
    }
    case 221367:
    {
        returnValue = F("Michael-Meyer-Strasse");
        break;
    }
    case 221368:
    {
        returnValue = F("Michael-Mohr-Weg");
        break;
    }
    case 221369:
    {
        returnValue = F("Michael-Müller-Ring");
        break;
    }
    case 221370:
    {
        returnValue = F("Michael-Nocker-Str.");
        break;
    }
    case 221371:
    {
        returnValue = F("Michael-Oettel-Str.");
        break;
    }
    case 221372:
    {
        returnValue = F("Michael-Ostendorfer-Str.");
        break;
    }
    case 221373:
    {
        returnValue = F("Michael-Ott-Str.");
        break;
    }
    case 221374:
    {
        returnValue = F("Michael-Pacher-Str.");
        break;
    }
    case 221375:
    {
        returnValue = F("Michael-Pacher-Weg");
        break;
    }
    case 221376:
    {
        returnValue = F("Michael-Pfalzgraf-Platz");
        break;
    }
    case 221377:
    {
        returnValue = F("Michael-Piller-Str.");
        break;
    }
    case 221378:
    {
        returnValue = F("Michael-Praetorius-Platz");
        break;
    }
    case 221379:
    {
        returnValue = F("Michael-Prätorius-Str.");
        break;
    }
    case 221380:
    {
        returnValue = F("Michael-Rackl-Str.");
        break;
    }
    case 221381:
    {
        returnValue = F("Michael-Rasten-Str.");
        break;
    }
    case 221382:
    {
        returnValue = F("Michael-Rauck-Str.");
        break;
    }
    case 221383:
    {
        returnValue = F("Michael-Rehklau-Str.");
        break;
    }
    case 221384:
    {
        returnValue = F("Michael-Rehle-Str.");
        break;
    }
    case 221385:
    {
        returnValue = F("Michael-Rehm-Str.");
        break;
    }
    case 221386:
    {
        returnValue = F("Michael-Reingruber-Str.");
        break;
    }
    case 221387:
    {
        returnValue = F("Michael-Reng-Str.");
        break;
    }
    case 221388:
    {
        returnValue = F("Michael-Riehm-Weg");
        break;
    }
    case 221389:
    {
        returnValue = F("Michael-Roiger-Weg");
        break;
    }
    case 221390:
    {
        returnValue = F("Michael-Romstöck-Str.");
        break;
    }
    case 221391:
    {
        returnValue = F("Michael-Ruck-Str.");
        break;
    }
    case 221392:
    {
        returnValue = F("Michael-Ruhdorfer-Str.");
        break;
    }
    case 221393:
    {
        returnValue = F("Michael-Rümmer-Str.");
        break;
    }
    case 221394:
    {
        returnValue = F("Michael-Sailer-Str.");
        break;
    }
    case 221395:
    {
        returnValue = F("Michael-Salberg-Str.");
        break;
    }
    case 221396:
    {
        returnValue = F("Michael-Sallinger-Weg");
        break;
    }
    case 221397:
    {
        returnValue = F("Michael-Sandner-Str.");
        break;
    }
    case 221398:
    {
        returnValue = F("Michael-Scherer-Str.");
        break;
    }
    case 221399:
    {
        returnValue = F("Michael-Schiffer-Weg");
        break;
    }
    case 221400:
    {
        returnValue = F("Michael-Schnabrich-Str.");
        break;
    }
    case 221401:
    {
        returnValue = F("Michael-Schnell-Weg");
        break;
    }
    case 221402:
    {
        returnValue = F("Michael-Schober-Ring");
        break;
    }
    case 221403:
    {
        returnValue = F("Michael-Schreiber-Weg");
        break;
    }
    case 221404:
    {
        returnValue = F("Michael-Schumacher-Platz");
        break;
    }
    case 221405:
    {
        returnValue = F("Michael-Schumacher-Str.");
        break;
    }
    case 221406:
    {
        returnValue = F("Michael-Schäffer-Str.");
        break;
    }
    case 221407:
    {
        returnValue = F("Michael-Selig-Str.");
        break;
    }
    case 221408:
    {
        returnValue = F("Michael-Sirl-Str.");
        break;
    }
    case 221409:
    {
        returnValue = F("Michael-Sommer-Str.");
        break;
    }
    case 221410:
    {
        returnValue = F("Michael-Spanner-Str.");
        break;
    }
    case 221411:
    {
        returnValue = F("Michael-Sperling-Platz");
        break;
    }
    case 221412:
    {
        returnValue = F("Michael-Stapfer-Str.");
        break;
    }
    case 221413:
    {
        returnValue = F("Michael-Stapirius-Str.");
        break;
    }
    case 221414:
    {
        returnValue = F("Michael-Steiger-Str.");
        break;
    }
    case 221415:
    {
        returnValue = F("Michael-Stein-Str.");
        break;
    }
    case 221416:
    {
        returnValue = F("Michael-Steinberger-Str.");
        break;
    }
    case 221417:
    {
        returnValue = F("Michael-Steinherr-Str.");
        break;
    }
    case 221418:
    {
        returnValue = F("Michael-Stifel-Platz");
        break;
    }
    case 221419:
    {
        returnValue = F("Michael-Sutor-Str.");
        break;
    }
    case 221420:
    {
        returnValue = F("Michael-Thalhofer-Str.");
        break;
    }
    case 221421:
    {
        returnValue = F("Michael-Traßl-Str.");
        break;
    }
    case 221422:
    {
        returnValue = F("Michael-Tritz-Str.");
        break;
    }
    case 221423:
    {
        returnValue = F("Michael-Uhrmann-Str.");
        break;
    }
    case 221424:
    {
        returnValue = F("Michael-Ulmer-Weg");
        break;
    }
    case 221425:
    {
        returnValue = F("Michael-Urlaub-Str.");
        break;
    }
    case 221426:
    {
        returnValue = F("Michael-Uwer-Str.");
        break;
    }
    case 221427:
    {
        returnValue = F("Michael-Vehe-Str.");
        break;
    }
    case 221428:
    {
        returnValue = F("Michael-Vogel-Str.");
        break;
    }
    case 221429:
    {
        returnValue = F("Michael-Vogl-Str.");
        break;
    }
    case 221430:
    {
        returnValue = F("Michael-Waffler-Str.");
        break;
    }
    case 221431:
    {
        returnValue = F("Michael-Weise-Str.");
        break;
    }
    case 221432:
    {
        returnValue = F("Michael-Welte-Str.");
        break;
    }
    case 221433:
    {
        returnValue = F("Michael-Wening-Str.");
        break;
    }
    case 221434:
    {
        returnValue = F("Michael-Wenz-Str.");
        break;
    }
    case 221435:
    {
        returnValue = F("Michael-Wiendl-Str.");
        break;
    }
    case 221436:
    {
        returnValue = F("Michael-Wiendl-Wegl");
        break;
    }
    case 221437:
    {
        returnValue = F("Michael-Wild-Str.");
        break;
    }
    case 221438:
    {
        returnValue = F("Michael-Witzlinger-Str.");
        break;
    }
    case 221439:
    {
        returnValue = F("Michael-Wolgemut-Str.");
        break;
    }
    case 221440:
    {
        returnValue = F("Michael-Wolgemut-Weg");
        break;
    }
    case 221441:
    {
        returnValue = F("Michael-Zehetbauer-Str.");
        break;
    }
    case 221442:
    {
        returnValue = F("Michael-Zenger-Ring");
        break;
    }
    case 221443:
    {
        returnValue = F("Michael-Zettl-Weg");
        break;
    }
    case 221444:
    {
        returnValue = F("Michael-von-Deinlein-Str.");
        break;
    }
    case 221445:
    {
        returnValue = F("Michael-von-Jung-Str.");
        break;
    }
    case 221446:
    {
        returnValue = F("Michael-Öchsner-Str.");
        break;
    }
    case 221447:
    {
        returnValue = F("Michael-Ötschmann-Str.");
        break;
    }
    case 221448:
    {
        returnValue = F("Michael-Ötschmann-Weg");
        break;
    }
    case 221449:
    {
        returnValue = F("Michaelbacher Str.");
        break;
    }
    case 221450:
    {
        returnValue = F("Michaeligasse");
        break;
    }
    case 221451:
    {
        returnValue = F("Michaelis Rundweg");
        break;
    }
    case 221452:
    {
        returnValue = F("Michaelis-Jena-Weg");
        break;
    }
    case 221453:
    {
        returnValue = F("Michaelisallee");
        break;
    }
    case 221454:
    {
        returnValue = F("Michaelisanger");
        break;
    }
    case 221455:
    {
        returnValue = F("Michaelisgäßlein");
        break;
    }
    case 221456:
    {
        returnValue = F("Michaelispark");
        break;
    }
    case 221457:
    {
        returnValue = F("Michaelisplatz");
        break;
    }
    case 221458:
    {
        returnValue = F("Michaelisstr.");
        break;
    }
    case 221459:
    {
        returnValue = F("Michaelisteichweg");
        break;
    }
    case 221460:
    {
        returnValue = F("Michaelistr.");
        break;
    }
    case 221461:
    {
        returnValue = F("Michaelisweg");
        break;
    }
    case 221462:
    {
        returnValue = F("Michaeliweg");
        break;
    }
    case 221463:
    {
        returnValue = F("Michaelplatz");
        break;
    }
    case 221464:
    {
        returnValue = F("Michaelsberg");
        break;
    }
    case 221465:
    {
        returnValue = F("Michaelsberger Weg");
        break;
    }
    case 221466:
    {
        returnValue = F("Michaelsbergstr.");
        break;
    }
    case 221467:
    {
        returnValue = F("Michaelsbergweg");
        break;
    }
    case 221468:
    {
        returnValue = F("Michaelsbucher Str.");
        break;
    }
    case 221469:
    {
        returnValue = F("Michaelsbucherstr.");
        break;
    }
    case 221470:
    {
        returnValue = F("Michaelsgasse");
        break;
    }
    case 221471:
    {
        returnValue = F("Michaelshöhe");
        break;
    }
    case 221472:
    {
        returnValue = F("Michaelspfad");
        break;
    }
    case 221473:
    {
        returnValue = F("Michaelsplatz");
        break;
    }
    case 221474:
    {
        returnValue = F("Michaelssteg");
        break;
    }
    case 221475:
    {
        returnValue = F("Michaelsstr.");
        break;
    }
    case 221476:
    {
        returnValue = F("Michaelstein");
        break;
    }
    case 221477:
    {
        returnValue = F("Michaelsteiner Str.");
        break;
    }
    case 221478:
    {
        returnValue = F("Michaelstr.");
        break;
    }
    case 221479:
    {
        returnValue = F("Michaelstunnel");
        break;
    }
    case 221480:
    {
        returnValue = F("Michaelsweg");
        break;
    }
    case 221481:
    {
        returnValue = F("Michaelweg");
        break;
    }
    case 221482:
    {
        returnValue = F("Michail A. Bakunin Weg");
        break;
    }
    case 221483:
    {
        returnValue = F("Michail-Lomonossow-Str.");
        break;
    }
    case 221484:
    {
        returnValue = F("Michal-Jörg-Str.");
        break;
    }
    case 221485:
    {
        returnValue = F("Michalidesstr.");
        break;
    }
    case 221486:
    {
        returnValue = F("Michalkener Weg");
        break;
    }
    case 221487:
    {
        returnValue = F("Michel's Hof");
        break;
    }
    case 221488:
    {
        returnValue = F("Michel-Antoni-Str.");
        break;
    }
    case 221489:
    {
        returnValue = F("Michel-Bosche-Str.");
        break;
    }
    case 221490:
    {
        returnValue = F("Michel-Bréal-Str.");
        break;
    }
    case 221491:
    {
        returnValue = F("Michel-Buck-Str.");
        break;
    }
    case 221492:
    {
        returnValue = F("Michel-Buck-Weg");
        break;
    }
    case 221493:
    {
        returnValue = F("Michel-Ernst-Str.");
        break;
    }
    case 221494:
    {
        returnValue = F("Michel-Marti-Str.");
        break;
    }
    case 221495:
    {
        returnValue = F("Michel-Mort-Gasse");
        break;
    }
    case 221496:
    {
        returnValue = F("Michel-Mort-Str.");
        break;
    }
    case 221497:
    {
        returnValue = F("Michel-Obentraut-Str.");
        break;
    }
    case 221498:
    {
        returnValue = F("Michel-Reineke-Platz");
        break;
    }
    case 221499:
    {
        returnValue = F("Michel-Reineke-Str.");
        break;
    }
    case 221500:
    {
        returnValue = F("Michel-Schäfer-Str.");
        break;
    }
    case 221501:
    {
        returnValue = F("Michel-Souty-Str.");
        break;
    }
    case 221502:
    {
        returnValue = F("Michel-Stapf-Str.");
        break;
    }
    case 221503:
    {
        returnValue = F("Michel-Vauthrin-Park");
        break;
    }
    case 221504:
    {
        returnValue = F("Michel-Vesta-Ring");
        break;
    }
    case 221505:
    {
        returnValue = F("Michel-Weiß-Str.");
        break;
    }
    case 221506:
    {
        returnValue = F("Michelangeloplatz");
        break;
    }
    case 221507:
    {
        returnValue = F("Michelangelostr.");
        break;
    }
    case 221508:
    {
        returnValue = F("Michelau");
        break;
    }
    case 221509:
    {
        returnValue = F("Michelauer Str.");
        break;
    }
    case 221510:
    {
        returnValue = F("Michelauer Weg");
        break;
    }
    case 221511:
    {
        returnValue = F("Michelbach");
        break;
    }
    case 221512:
    {
        returnValue = F("Michelbacher Allee");
        break;
    }
    case 221513:
    {
        returnValue = F("Michelbacher Str.");
        break;
    }
    case 221514:
    {
        returnValue = F("Michelbacher Weg");
        break;
    }
    case 221515:
    {
        returnValue = F("Michelbachstr.");
        break;
    }
    case 221516:
    {
        returnValue = F("Michelbachweg");
        break;
    }
    case 221517:
    {
        returnValue = F("Michelberg");
        break;
    }
    case 221518:
    {
        returnValue = F("Michelbergstr.");
        break;
    }
    case 221519:
    {
        returnValue = F("Michelbergweg");
        break;
    }
    case 221520:
    {
        returnValue = F("Michelbeuge");
        break;
    }
    case 221521:
    {
        returnValue = F("Michelbuch");
        break;
    }
    case 221522:
    {
        returnValue = F("Michelbucher Str.");
        break;
    }
    case 221523:
    {
        returnValue = F("Michelbuchweg");
        break;
    }
    case 221524:
    {
        returnValue = F("Michelbächle");
        break;
    }
    case 221525:
    {
        returnValue = F("Michelbächlestr.");
        break;
    }
    case 221526:
    {
        returnValue = F("Michele-Ferrero-Str.");
        break;
    }
    case 221527:
    {
        returnValue = F("Michelende");
        break;
    }
    case 221528:
    {
        returnValue = F("Michelenweg");
        break;
    }
    case 221529:
    {
        returnValue = F("Michelerstr.");
        break;
    }
    case 221530:
    {
        returnValue = F("Michelesweg");
        break;
    }
    case 221531:
    {
        returnValue = F("Micheletalweg");
        break;
    }
    case 221532:
    {
        returnValue = F("Michelfeld");
        break;
    }
    case 221533:
    {
        returnValue = F("Michelfelder Hof");
        break;
    }
    case 221534:
    {
        returnValue = F("Michelfelder Str.");
        break;
    }
    case 221535:
    {
        returnValue = F("Michelfelder Weg");
        break;
    }
    case 221536:
    {
        returnValue = F("Michelfeldweg");
        break;
    }
    case 221537:
    {
        returnValue = F("Michelgrube");
        break;
    }
    case 221538:
    {
        returnValue = F("Michelgrundweg");
        break;
    }
    case 221539:
    {
        returnValue = F("Michelhölzle");
        break;
    }
    case 221540:
    {
        returnValue = F("Michelhözle");
        break;
    }
    case 221541:
    {
        returnValue = F("Michelinstr.");
        break;
    }
    case 221542:
    {
        returnValue = F("Michelistr.");
        break;
    }
    case 221543:
    {
        returnValue = F("Michelnauer Str.");
        break;
    }
    case 221544:
    {
        returnValue = F("Michelner Blumenstr.");
        break;
    }
    case 221545:
    {
        returnValue = F("Michelner Schlippe");
        break;
    }
    case 221546:
    {
        returnValue = F("Michelner Str.");
        break;
    }
    case 221547:
    {
        returnValue = F("Michelner Weg");
        break;
    }
    case 221548:
    {
        returnValue = F("Michelriether Str.");
        break;
    }
    case 221549:
    {
        returnValue = F("Michels Hof");
        break;
    }
    case 221550:
    {
        returnValue = F("Michels Kamp");
        break;
    }
    case 221551:
    {
        returnValue = F("Michels Stiege");
        break;
    }
    case 221552:
    {
        returnValue = F("Michelsberg");
        break;
    }
    case 221553:
    {
        returnValue = F("Michelsberger Hohl");
        break;
    }
    case 221554:
    {
        returnValue = F("Michelsberger Str.");
        break;
    }
    case 221555:
    {
        returnValue = F("Michelsberger Weg");
        break;
    }
    case 221556:
    {
        returnValue = F("Michelsbergstr.");
        break;
    }
    case 221557:
    {
        returnValue = F("Michelsbergweg");
        break;
    }
    case 221558:
    {
        returnValue = F("Michelsbrücke");
        break;
    }
    case 221559:
    {
        returnValue = F("Michelsdick");
        break;
    }
    case 221560:
    {
        returnValue = F("Michelsdorf");
        break;
    }
    case 221561:
    {
        returnValue = F("Michelsdorfer Str.");
        break;
    }
    case 221562:
    {
        returnValue = F("Michelsdorfer Weg");
        break;
    }
    case 221563:
    {
        returnValue = F("Michelsdyk");
        break;
    }
    case 221564:
    {
        returnValue = F("Michelsenstr.");
        break;
    }
    case 221565:
    {
        returnValue = F("Michelsfeld");
        break;
    }
    case 221566:
    {
        returnValue = F("Michelsfels");
        break;
    }
    case 221567:
    {
        returnValue = F("Michelsgang");
        break;
    }
    case 221568:
    {
        returnValue = F("Michelsgarten");
        break;
    }
    case 221569:
    {
        returnValue = F("Michelsgasse");
        break;
    }
    case 221570:
    {
        returnValue = F("Michelsgraben");
        break;
    }
    case 221571:
    {
        returnValue = F("Michelsgrundweg");
        break;
    }
    case 221572:
    {
        returnValue = F("Michelsheide");
        break;
    }
    case 221573:
    {
        returnValue = F("Michelsholzweg");
        break;
    }
    case 221574:
    {
        returnValue = F("Michelsohnweg");
        break;
    }
    case 221575:
    {
        returnValue = F("Michelspfad");
        break;
    }
    case 221576:
    {
        returnValue = F("Michelsrankweg");
        break;
    }
    case 221577:
    {
        returnValue = F("Michelsreuther Str.");
        break;
    }
    case 221578:
    {
        returnValue = F("Michelsreuther Weg");
        break;
    }
    case 221579:
    {
        returnValue = F("Michelsrombacher Str.");
        break;
    }
    case 221580:
    {
        returnValue = F("Michelsrotweg");
        break;
    }
    case 221581:
    {
        returnValue = F("Michelsstr.");
        break;
    }
    case 221582:
    {
        returnValue = F("Michelstadter Str.");
        break;
    }
    case 221583:
    {
        returnValue = F("Michelstein-Str.");
        break;
    }
    case 221584:
    {
        returnValue = F("Michelsteinstr.");
        break;
    }
    case 221585:
    {
        returnValue = F("Michelstr.");
        break;
    }
    case 221586:
    {
        returnValue = F("Michelstädter Str.");
        break;
    }
    case 221587:
    {
        returnValue = F("Michelstädter Weg");
        break;
    }
    case 221588:
    {
        returnValue = F("Michelsweg");
        break;
    }
    case 221589:
    {
        returnValue = F("Michelswiese");
        break;
    }
    case 221590:
    {
        returnValue = F("Michelweg");
        break;
    }
    case 221591:
    {
        returnValue = F("Michelwingertweg");
        break;
    }
    case 221592:
    {
        returnValue = F("Michelwitz");
        break;
    }
    case 221593:
    {
        returnValue = F("Michelwörth");
        break;
    }
    case 221594:
    {
        returnValue = F("Michely-Str.");
        break;
    }
    case 221595:
    {
        returnValue = F("Micheläckerweg");
        break;
    }
    case 221596:
    {
        returnValue = F("Michendorfer Chaussee");
        break;
    }
    case 221597:
    {
        returnValue = F("Michendorfer Forstweg");
        break;
    }
    case 221598:
    {
        returnValue = F("Michendorfer Gartenstr.");
        break;
    }
    case 221599:
    {
        returnValue = F("Michendorfer Heideweg");
        break;
    }
    case 221600:
    {
        returnValue = F("Michendorfer Platz");
        break;
    }
    case 221601:
    {
        returnValue = F("Michendorfer Weg");
        break;
    }
    case 221602:
    {
        returnValue = F("Michentalweg");
        break;
    }
    case 221603:
    {
        returnValue = F("Michigan Court");
        break;
    }
    case 221604:
    {
        returnValue = F("Michiganstr.");
        break;
    }
    case 221605:
    {
        returnValue = F("Michl-Ehbauer-Ring");
        break;
    }
    case 221606:
    {
        returnValue = F("Michl-Emmerling-Str.");
        break;
    }
    case 221607:
    {
        returnValue = F("Michl-Kaiser-Weg");
        break;
    }
    case 221608:
    {
        returnValue = F("Michl-Lang-Str.");
        break;
    }
    case 221609:
    {
        returnValue = F("Michl-Natter-Str.");
        break;
    }
    case 221610:
    {
        returnValue = F("Michl-Sirch-Weg");
        break;
    }
    case 221611:
    {
        returnValue = F("Michl-Streit-Platz");
        break;
    }
    case 221612:
    {
        returnValue = F("Michlbacher Str.");
        break;
    }
    case 221613:
    {
        returnValue = F("Michlbauerstr.");
        break;
    }
    case 221614:
    {
        returnValue = F("Michlbauerweg");
        break;
    }
    case 221615:
    {
        returnValue = F("Michlstr.");
        break;
    }
    case 221616:
    {
        returnValue = F("Mickenbarger Weg");
        break;
    }
    case 221617:
    {
        returnValue = F("Mickenlochstr.");
        break;
    }
    case 221618:
    {
        returnValue = F("Mickenpad");
        break;
    }
    case 221619:
    {
        returnValue = F("Mickhauser Str.");
        break;
    }
    case 221620:
    {
        returnValue = F("Mickiewiczstr.");
        break;
    }
    case 221621:
    {
        returnValue = F("Middefeitz");
        break;
    }
    case 221622:
    {
        returnValue = F("Middelbrink");
        break;
    }
    case 221623:
    {
        returnValue = F("Middelburger Str.");
        break;
    }
    case 221624:
    {
        returnValue = F("Middeldiek");
        break;
    }
    case 221625:
    {
        returnValue = F("Middeldor");
        break;
    }
    case 221626:
    {
        returnValue = F("Middelenn");
        break;
    }
    case 221627:
    {
        returnValue = F("Middelfartallee");
        break;
    }
    case 221628:
    {
        returnValue = F("Middelgretsweg");
        break;
    }
    case 221629:
    {
        returnValue = F("Middelhagen");
        break;
    }
    case 221630:
    {
        returnValue = F("Middelicher Str.");
        break;
    }
    case 221631:
    {
        returnValue = F("Middelkerker Str.");
        break;
    }
    case 221632:
    {
        returnValue = F("Middelpadd");
        break;
    }
    case 221633:
    {
        returnValue = F("Middelpennig");
        break;
    }
    case 221634:
    {
        returnValue = F("Middelreeg");
        break;
    }
    case 221635:
    {
        returnValue = F("Middelschulteweg");
        break;
    }
    case 221636:
    {
        returnValue = F("Middelser Grenzweg");
        break;
    }
    case 221637:
    {
        returnValue = F("Middelser Weg");
        break;
    }
    case 221638:
    {
        returnValue = F("Middelsfährer Landstr.");
        break;
    }
    case 221639:
    {
        returnValue = F("Middelsfährstr.");
        break;
    }
    case 221640:
    {
        returnValue = F("Middelsmöhl");
        break;
    }
    case 221641:
    {
        returnValue = F("Middelstenborgum");
        break;
    }
    case 221642:
    {
        returnValue = F("Middelstenweg");
        break;
    }
    case 221643:
    {
        returnValue = F("Middelsterborger Weg");
        break;
    }
    case 221644:
    {
        returnValue = F("Middelstewehrster Weg");
        break;
    }
    case 221645:
    {
        returnValue = F("Middelstr.");
        break;
    }
    case 221646:
    {
        returnValue = F("Middelswarfen");
        break;
    }
    case 221647:
    {
        returnValue = F("Middelung");
        break;
    }
    case 221648:
    {
        returnValue = F("Middelweg");
        break;
    }
    case 221649:
    {
        returnValue = F("Middelwegg");
        break;
    }
    case 221650:
    {
        returnValue = F("Middemoorweg");
        break;
    }
    case 221651:
    {
        returnValue = F("Middendorf");
        break;
    }
    case 221652:
    {
        returnValue = F("Middendorfstr.");
        break;
    }
    case 221653:
    {
        returnValue = F("Middendorfweg");
        break;
    }
    case 221654:
    {
        returnValue = F("Middenkamp");
        break;
    }
    case 221655:
    {
        returnValue = F("Middenstr.");
        break;
    }
    case 221656:
    {
        returnValue = F("Middenweg");
        break;
    }
    case 221657:
    {
        returnValue = F("Middewand");
        break;
    }
    case 221658:
    {
        returnValue = F("Middeweg");
        break;
    }
    case 221659:
    {
        returnValue = F("Middoger Weg");
        break;
    }
    case 221660:
    {
        returnValue = F("Midfield Expo Gardens");
        break;
    }
    case 221661:
    {
        returnValue = F("Midgardstr.");
        break;
    }
    case 221662:
    {
        returnValue = F("Midlich");
        break;
    }
    case 221663:
    {
        returnValue = F("Midlicher Bach");
        break;
    }
    case 221664:
    {
        returnValue = F("Midlicher Kamp");
        break;
    }
    case 221665:
    {
        returnValue = F("Midlicher Str.");
        break;
    }
    case 221666:
    {
        returnValue = F("Midlumer Dorfstr.");
        break;
    }
    case 221667:
    {
        returnValue = F("Midlumer Reihe");
        break;
    }
    case 221668:
    {
        returnValue = F("Midlumer Str.");
        break;
    }
    case 221669:
    {
        returnValue = F("Midlumer Weg");
        break;
    }
    case 221670:
    {
        returnValue = F("Midlumweg");
        break;
    }
    case 221671:
    {
        returnValue = F("Miebacher Weg");
        break;
    }
    case 221672:
    {
        returnValue = F("Miebachstr.");
        break;
    }
    case 221673:
    {
        returnValue = F("Miechen");
        break;
    }
    case 221674:
    {
        returnValue = F("Mieckenhäger Weg");
        break;
    }
    case 221675:
    {
        returnValue = F("Mieckower Weg");
        break;
    }
    case 221676:
    {
        returnValue = F("Miedanerstr.");
        break;
    }
    case 221677:
    {
        returnValue = F("Miedelpark");
        break;
    }
    case 221678:
    {
        returnValue = F("Miedelsbacher Str.");
        break;
    }
    case 221679:
    {
        returnValue = F("Miedelstr.");
        break;
    }
    case 221680:
    {
        returnValue = F("Miederinger Str.");
        break;
    }
    case 221681:
    {
        returnValue = F("Miedersweg");
        break;
    }
    case 221682:
    {
        returnValue = F("Miedziankit");
        break;
    }
    case 221683:
    {
        returnValue = F("Miegelstr.");
        break;
    }
    case 221684:
    {
        returnValue = F("Miegelweg");
        break;
    }
    case 221685:
    {
        returnValue = F("Miehlener Str.");
        break;
    }
    case 221686:
    {
        returnValue = F("Miehlener Weg");
        break;
    }
    case 221687:
    {
        returnValue = F("Miehnsteige");
        break;
    }
    case 221688:
    {
        returnValue = F("Miekenhäger Weg");
        break;
    }
    case 221689:
    {
        returnValue = F("Miele");
        break;
    }
    case 221690:
    {
        returnValue = F("Miele-Gosche-Platz");
        break;
    }
    case 221691:
    {
        returnValue = F("Miele-Platz");
        break;
    }
    case 221692:
    {
        returnValue = F("Miele-Str.");
        break;
    }
    case 221693:
    {
        returnValue = F("Mielecer Str.");
        break;
    }
    case 221694:
    {
        returnValue = F("Mieler Str.");
        break;
    }
    case 221695:
    {
        returnValue = F("Mieler Sträßchen");
        break;
    }
    case 221696:
    {
        returnValue = F("Mieler Weg");
        break;
    }
    case 221697:
    {
        returnValue = F("Mielerstede");
        break;
    }
    case 221698:
    {
        returnValue = F("Mielestr.");
        break;
    }
    case 221699:
    {
        returnValue = F("Mielingweg");
        break;
    }
    case 221700:
    {
        returnValue = F("Mielitzweg");
        break;
    }
    case 221701:
    {
        returnValue = F("Mielkendorfer Weg");
        break;
    }
    case 221702:
    {
        returnValue = F("Miellener Weg");
        break;
    }
    case 221703:
    {
        returnValue = F("Mielsberg");
        break;
    }
    case 221704:
    {
        returnValue = F("Mielsdorfer Dorfstr.");
        break;
    }
    case 221705:
    {
        returnValue = F("Mielsdorfer Str.");
        break;
    }
    case 221706:
    {
        returnValue = F("Mielweg");
        break;
    }
    case 221707:
    {
        returnValue = F("Mieminger Weg");
        break;
    }
    case 221708:
    {
        returnValue = F("Mienenbütteler Weg");
        break;
    }
    case 221709:
    {
        returnValue = F("Miep-Gies-Str.");
        break;
    }
    case 221710:
    {
        returnValue = F("Mierendorf");
        break;
    }
    case 221711:
    {
        returnValue = F("Mierendorffstr.");
        break;
    }
    case 221712:
    {
        returnValue = F("Mierendorffweg");
        break;
    }
    case 221713:
    {
        returnValue = F("Mierensiek");
        break;
    }
    case 221714:
    {
        returnValue = F("Mierscheid");
        break;
    }
    case 221715:
    {
        returnValue = F("Miersdorfer Chaussee");
        break;
    }
    case 221716:
    {
        returnValue = F("Miersdorfer Str.");
        break;
    }
    case 221717:
    {
        returnValue = F("Miersdorfer Weg");
        break;
    }
    case 221718:
    {
        returnValue = F("Miersenfeldgen");
        break;
    }
    case 221719:
    {
        returnValue = F("Mierwerder Weg");
        break;
    }
    case 221720:
    {
        returnValue = F("Mies-Pilsener-Str.");
        break;
    }
    case 221721:
    {
        returnValue = F("Mies-van-der-Rohe-Str.");
        break;
    }
    case 221722:
    {
        returnValue = F("Mies-van-der-Rohe-Weg");
        break;
    }
    case 221723:
    {
        returnValue = F("Miesauer Str.");
        break;
    }
    case 221724:
    {
        returnValue = F("Miesbacher Str.");
        break;
    }
    case 221725:
    {
        returnValue = F("Miesbergallee");
        break;
    }
    case 221726:
    {
        returnValue = F("Miesbergweg");
        break;
    }
    case 221727:
    {
        returnValue = F("Miesbrunn");
        break;
    }
    case 221728:
    {
        returnValue = F("Miesbrunner Str.");
        break;
    }
    case 221729:
    {
        returnValue = F("Miescheider Heide");
        break;
    }
    case 221730:
    {
        returnValue = F("Miescheider Str.");
        break;
    }
    case 221731:
    {
        returnValue = F("Miesenbacher Str.");
        break;
    }
    case 221732:
    {
        returnValue = F("Miesenbacher Weg");
        break;
    }
    case 221733:
    {
        returnValue = F("Miesenheimer Str.");
        break;
    }
    case 221734:
    {
        returnValue = F("Miesenheimer Weg");
        break;
    }
    case 221735:
    {
        returnValue = F("Miesgesweg");
        break;
    }
    case 221736:
    {
        returnValue = F("Miesheimer Weg");
        break;
    }
    case 221737:
    {
        returnValue = F("Miesingstr.");
        break;
    }
    case 221738:
    {
        returnValue = F("Miesle Haldenweg");
        break;
    }
    case 221739:
    {
        returnValue = F("Miesleuthenweg");
        break;
    }
    case 221740:
    {
        returnValue = F("Mieslötzweg");
        break;
    }
    case 221741:
    {
        returnValue = F("Miesners Hof");
        break;
    }
    case 221742:
    {
        returnValue = F("Mieste Bretteiche");
        break;
    }
    case 221743:
    {
        returnValue = F("Mieste-Breiteiche");
        break;
    }
    case 221744:
    {
        returnValue = F("Miester Bahnhofstr.");
        break;
    }
    case 221745:
    {
        returnValue = F("Miester Str.");
        break;
    }
    case 221746:
    {
        returnValue = F("Miester Weg");
        break;
    }
    case 221747:
    {
        returnValue = F("Miesterhorster Bahnhof");
        break;
    }
    case 221748:
    {
        returnValue = F("Miesterhorster Str.");
        break;
    }
    case 221749:
    {
        returnValue = F("Miesterhorster Weg");
        break;
    }
    case 221750:
    {
        returnValue = F("Mieswarz");
        break;
    }
    case 221751:
    {
        returnValue = F("Mieswarzer Str.");
        break;
    }
    case 221752:
    {
        returnValue = F("Miesweg");
        break;
    }
    case 221753:
    {
        returnValue = F("Miesweidach");
        break;
    }
    case 221754:
    {
        returnValue = F("Mietenberg");
        break;
    }
    case 221755:
    {
        returnValue = F("Mietenkamer Str.");
        break;
    }
    case 221756:
    {
        returnValue = F("Mietenweg");
        break;
    }
    case 221757:
    {
        returnValue = F("Mieterkinger Str.");
        break;
    }
    case 221758:
    {
        returnValue = F("Mietersheimer Friedhofstr.");
        break;
    }
    case 221759:
    {
        returnValue = F("Mietersheimer Hauptstr.");
        break;
    }
    case 221760:
    {
        returnValue = F("Mietfeld");
        break;
    }
    case 221761:
    {
        returnValue = F("Mietgendorfer Ring");
        break;
    }
    case 221762:
    {
        returnValue = F("Mietgendorfer Weg");
        break;
    }
    case 221763:
    {
        returnValue = F("Miethenweg");
        break;
    }
    case 221764:
    {
        returnValue = F("Mietherweg");
        break;
    }
    case 221765:
    {
        returnValue = F("Miethkestr.");
        break;
    }
    case 221766:
    {
        returnValue = F("Mietholzsträßchen");
        break;
    }
    case 221767:
    {
        returnValue = F("Mietinger Str.");
        break;
    }
    case 221768:
    {
        returnValue = F("Mietrachinger Str.");
        break;
    }
    case 221769:
    {
        returnValue = F("Mietzing");
        break;
    }
    case 221770:
    {
        returnValue = F("Mietzschallee");
        break;
    }
    case 221771:
    {
        returnValue = F("Miezenstr.");
        break;
    }
    case 221772:
    {
        returnValue = F("Migennesstr.");
        break;
    }
    case 221773:
    {
        returnValue = F("Mihlaer Str.");
        break;
    }
    case 221774:
    {
        returnValue = F("Mikadoplatz");
        break;
    }
    case 221775:
    {
        returnValue = F("Miklos-Klein-Platz");
        break;
    }
    case 221776:
    {
        returnValue = F("Mikroforum-Ring");
        break;
    }
    case 221777:
    {
        returnValue = F("Milanhorst");
        break;
    }
    case 221778:
    {
        returnValue = F("Milanhöhe");
        break;
    }
    case 221779:
    {
        returnValue = F("Milanring");
        break;
    }
    case 221780:
    {
        returnValue = F("Milanstr.");
        break;
    }
    case 221781:
    {
        returnValue = F("Milanweg");
        break;
    }
    case 221782:
    {
        returnValue = F("Milbach");
        break;
    }
    case 221783:
    {
        returnValue = F("Milbenweg");
        break;
    }
    case 221784:
    {
        returnValue = F("Milbigsweg");
        break;
    }
    case 221785:
    {
        returnValue = F("Milbinger Str.");
        break;
    }
    case 221786:
    {
        returnValue = F("Milbitz bei Teichel");
        break;
    }
    case 221787:
    {
        returnValue = F("Milbitzer Str.");
        break;
    }
    case 221788:
    {
        returnValue = F("Milbitzer Weg");
        break;
    }
    case 221789:
    {
        returnValue = F("Milchbachweg");
        break;
    }
    case 221790:
    {
        returnValue = F("Milchberg");
        break;
    }
    case 221791:
    {
        returnValue = F("Milchbergweg");
        break;
    }
    case 221792:
    {
        returnValue = F("Milchbitz");
        break;
    }
    case 221793:
    {
        returnValue = F("Milchbockweg");
        break;
    }
    case 221794:
    {
        returnValue = F("Milchbornhöhe");
        break;
    }
    case 221795:
    {
        returnValue = F("Milchborntalweg");
        break;
    }
    case 221796:
    {
        returnValue = F("Milchbänkle");
        break;
    }
    case 221797:
    {
        returnValue = F("Milchdamm");
        break;
    }
    case 221798:
    {
        returnValue = F("Milcherberg");
        break;
    }
    case 221799:
    {
        returnValue = F("Milcheshohl");
        break;
    }
    case 221800:
    {
        returnValue = F("Milchfeldstr.");
        break;
    }
    case 221801:
    {
        returnValue = F("Milchflussweg");
        break;
    }
    case 221802:
    {
        returnValue = F("Milchgasse");
        break;
    }
    case 221803:
    {
        returnValue = F("Milchgrube");
        break;
    }
    case 221804:
    {
        returnValue = F("Milchgrund");
        break;
    }
    case 221805:
    {
        returnValue = F("Milchgrundstr.");
        break;
    }
    case 221806:
    {
        returnValue = F("Milchgäßle");
        break;
    }
    case 221807:
    {
        returnValue = F("Milchhausgässchen");
        break;
    }
    case 221808:
    {
        returnValue = F("Milchhausstr.");
        break;
    }
    case 221809:
    {
        returnValue = F("Milchhof");
        break;
    }
    case 221810:
    {
        returnValue = F("Milchhofstr.");
        break;
    }
    case 221811:
    {
        returnValue = F("Milchhorst");
        break;
    }
    case 221812:
    {
        returnValue = F("Milchhäusleweg");
        break;
    }
    case 221813:
    {
        returnValue = F("Milchhäuslstr.");
        break;
    }
    case 221814:
    {
        returnValue = F("Milchhöfer Str.");
        break;
    }
    case 221815:
    {
        returnValue = F("Milchkammer");
        break;
    }
    case 221816:
    {
        returnValue = F("Milchkutscherweg");
        break;
    }
    case 221817:
    {
        returnValue = F("Milchlingstr.");
        break;
    }
    case 221818:
    {
        returnValue = F("Milchmarkt");
        break;
    }
    case 221819:
    {
        returnValue = F("Milchpfad");
        break;
    }
    case 221820:
    {
        returnValue = F("Milchplatz");
        break;
    }
    case 221821:
    {
        returnValue = F("Milchpützweg");
        break;
    }
    case 221822:
    {
        returnValue = F("Milchreeke");
        break;
    }
    case 221823:
    {
        returnValue = F("Milchsteig");
        break;
    }
    case 221824:
    {
        returnValue = F("Milchstr.");
        break;
    }
    case 221825:
    {
        returnValue = F("Milchstr.nweg");
        break;
    }
    case 221826:
    {
        returnValue = F("Milchweg");
        break;
    }
    case 221827:
    {
        returnValue = F("Milchwegerl");
        break;
    }
    case 221828:
    {
        returnValue = F("Milchwerkstr.");
        break;
    }
    case 221829:
    {
        returnValue = F("Mildenauer Str.");
        break;
    }
    case 221830:
    {
        returnValue = F("Mildenauer Weg");
        break;
    }
    case 221831:
    {
        returnValue = F("Mildenberger Dorfstr.");
        break;
    }
    case 221832:
    {
        returnValue = F("Mildenberger Str.");
        break;
    }
    case 221833:
    {
        returnValue = F("Mildenitzweg");
        break;
    }
    case 221834:
    {
        returnValue = F("Mildenseer Str.");
        break;
    }
    case 221835:
    {
        returnValue = F("Mildental");
        break;
    }
    case 221836:
    {
        returnValue = F("Mildersbachweg");
        break;
    }
    case 221837:
    {
        returnValue = F("Mildestr.");
        break;
    }
    case 221838:
    {
        returnValue = F("Mildre-Scheel-Str.");
        break;
    }
    case 221839:
    {
        returnValue = F("Mildred-Harnack-Str.");
        break;
    }
    case 221840:
    {
        returnValue = F("Mildred-Harnack-Weg");
        break;
    }
    case 221841:
    {
        returnValue = F("Mildred-Scheel-Str.");
        break;
    }
    case 221842:
    {
        returnValue = F("Mildred-Scheel-Weg");
        break;
    }
    case 221843:
    {
        returnValue = F("Mildsiefen");
        break;
    }
    case 221844:
    {
        returnValue = F("Mildstedter Landstr.");
        break;
    }
    case 221845:
    {
        returnValue = F("Mildstedter Str.");
        break;
    }
    case 221846:
    {
        returnValue = F("Mildstedtfeld");
        break;
    }
    case 221847:
    {
        returnValue = F("Mildstedthof");
        break;
    }
    case 221848:
    {
        returnValue = F("Mildterkoog");
        break;
    }
    case 221849:
    {
        returnValue = F("Miletweg");
        break;
    }
    case 221850:
    {
        returnValue = F("Milichstr.");
        break;
    }
    case 221851:
    {
        returnValue = F("Militsch-Trachenberger-Str.");
        break;
    }
    case 221852:
    {
        returnValue = F("Militscher Str.");
        break;
    }
    case 221853:
    {
        returnValue = F("Militärlinie");
        break;
    }
    case 221854:
    {
        returnValue = F("Militärschlagweg");
        break;
    }
    case 221855:
    {
        returnValue = F("Militärstr.");
        break;
    }
    case 221856:
    {
        returnValue = F("Militärweg");
        break;
    }
    case 221857:
    {
        returnValue = F("Militärwegbrücke");
        break;
    }
    case 221858:
    {
        returnValue = F("Milkastr.");
        break;
    }
    case 221859:
    {
        returnValue = F("Milkauer Str.");
        break;
    }
    case 221860:
    {
        returnValue = F("Milkler Str.");
        break;
    }
    case 221861:
    {
        returnValue = F("Milkmannstr.");
        break;
    }
    case 221862:
    {
        returnValue = F("Milkwitzer Weg");
        break;
    }
    case 221863:
    {
        returnValue = F("Millauerstr.");
        break;
    }
    case 221864:
    {
        returnValue = F("Millauerweg");
        break;
    }
    case 221865:
    {
        returnValue = F("Millendorfer Str.");
        break;
    }
    case 221866:
    {
        returnValue = F("Millener Weg");
        break;
    }
    case 221867:
    {
        returnValue = F("Millenkamp");
        break;
    }
    case 221868:
    {
        returnValue = F("Millenstr.");
        break;
    }
    case 221869:
    {
        returnValue = F("Millergasse");
        break;
    }
    case 221870:
    {
        returnValue = F("Millerscheid");
        break;
    }
    case 221871:
    {
        returnValue = F("Millerstr.");
        break;
    }
    case 221872:
    {
        returnValue = F("Millerweg");
        break;
    }
    case 221873:
    {
        returnValue = F("Milliardenweg");
        break;
    }
    case 221874:
    {
        returnValue = F("Millicher Str.");
        break;
    }
    case 221875:
    {
        returnValue = F("Milliehausen");
        break;
    }
    case 221876:
    {
        returnValue = F("Milliehäuser Str.");
        break;
    }
    case 221877:
    {
        returnValue = F("Millinger Str.");
        break;
    }
    case 221878:
    {
        returnValue = F("Millinger Weg");
        break;
    }
    case 221879:
    {
        returnValue = F("Millingsdorfer Weg");
        break;
    }
    case 221880:
    {
        returnValue = F("Millingsweg");
        break;
    }
    case 221881:
    {
        returnValue = F("Millionenbrückle");
        break;
    }
    case 221882:
    {
        returnValue = F("Millionengäßchen");
        break;
    }
    case 221883:
    {
        returnValue = F("Millionenstr.");
        break;
    }
    case 221884:
    {
        returnValue = F("Millionensträßle");
        break;
    }
    case 221885:
    {
        returnValue = F("Millionenweg");
        break;
    }
    case 221886:
    {
        returnValue = F("Milliongäßli");
        break;
    }
    case 221887:
    {
        returnValue = F("Millkreiterstr.");
        break;
    }
    case 221888:
    {
        returnValue = F("Millnitz");
        break;
    }
    case 221889:
    {
        returnValue = F("Millotstr.");
        break;
    }
    case 221890:
    {
        returnValue = F("Millrather Str.");
        break;
    }
    case 221891:
    {
        returnValue = F("Millrather Weg");
        break;
    }
    case 221892:
    {
        returnValue = F("Milly-May-Weg");
        break;
    }
    case 221893:
    {
        returnValue = F("Milly-Steger-Weg");
        break;
    }
    case 221894:
    {
        returnValue = F("Millöckerstr.");
        break;
    }
    case 221895:
    {
        returnValue = F("Millöckerweg");
        break;
    }
    case 221896:
    {
        returnValue = F("Milmersdorf");
        break;
    }
    case 221897:
    {
        returnValue = F("Milmersdorfer Chaussee");
        break;
    }
    case 221898:
    {
        returnValue = F("Milmersdorfer Weg");
        break;
    }
    case 221899:
    {
        returnValue = F("Milmertweg");
        break;
    }
    case 221900:
    {
        returnValue = F("Milmet");
        break;
    }
    case 221901:
    {
        returnValue = F("Milostr.");
        break;
    }
    case 221902:
    {
        returnValue = F("Milow");
        break;
    }
    case 221903:
    {
        returnValue = F("Milower Landstr.");
        break;
    }
    case 221904:
    {
        returnValue = F("Milower Schulstr.");
        break;
    }
    case 221905:
    {
        returnValue = F("Milower Str.");
        break;
    }
    case 221906:
    {
        returnValue = F("Milower Weg");
        break;
    }
    case 221907:
    {
        returnValue = F("Milowsgang");
        break;
    }
    case 221908:
    {
        returnValue = F("Milseberg");
        break;
    }
    case 221909:
    {
        returnValue = F("Milseburg");
        break;
    }
    case 221910:
    {
        returnValue = F("Milseburgblick");
        break;
    }
    case 221911:
    {
        returnValue = F("Milseburgradweg");
        break;
    }
    case 221912:
    {
        returnValue = F("Milseburgstr.");
        break;
    }
    case 221913:
    {
        returnValue = F("Milseburgweg");
        break;
    }
    case 221914:
    {
        returnValue = F("Milsenkamp");
        break;
    }
    case 221915:
    {
        returnValue = F("Milser Heide");
        break;
    }
    case 221916:
    {
        returnValue = F("Milser Ring");
        break;
    }
    case 221917:
    {
        returnValue = F("Milser Str.");
        break;
    }
    case 221918:
    {
        returnValue = F("Milskotter Str.");
        break;
    }
    case 221919:
    {
        returnValue = F("Milspe");
        break;
    }
    case 221920:
    {
        returnValue = F("Milsper Str.");
        break;
    }
    case 221921:
    {
        returnValue = F("Milstenau");
        break;
    }
    case 221922:
    {
        returnValue = F("Milstenauer Str.");
        break;
    }
    case 221923:
    {
        returnValue = F("Miltacher Str.");
        break;
    }
    case 221924:
    {
        returnValue = F("Miltenberger Kirchenpfad");
        break;
    }
    case 221925:
    {
        returnValue = F("Miltenberger Str.");
        break;
    }
    case 221926:
    {
        returnValue = F("Miltenberger Weg");
        break;
    }
    case 221927:
    {
        returnValue = F("Milter Mühlenpatt");
        break;
    }
    case 221928:
    {
        returnValue = F("Milter Str.");
        break;
    }
    case 221929:
    {
        returnValue = F("Milter Weg");
        break;
    }
    case 221930:
    {
        returnValue = F("Miltitzer Kirchstr.");
        break;
    }
    case 221931:
    {
        returnValue = F("Miltitzer Str.");
        break;
    }
    case 221932:
    {
        returnValue = F("Miltitzplatz");
        break;
    }
    case 221933:
    {
        returnValue = F("Miltitzwalde");
        break;
    }
    case 221934:
    {
        returnValue = F("Miltzowstr.");
        break;
    }
    case 221935:
    {
        returnValue = F("Milzau");
        break;
    }
    case 221936:
    {
        returnValue = F("Milzauer Str.");
        break;
    }
    case 221937:
    {
        returnValue = F("Milzbachstr.");
        break;
    }
    case 221938:
    {
        returnValue = F("Milzedamm");
        break;
    }
    case 221939:
    {
        returnValue = F("Milzer Gartenstr.");
        break;
    }
    case 221940:
    {
        returnValue = F("Milzer Gleichbergstr.");
        break;
    }
    case 221941:
    {
        returnValue = F("Milzer Hauptstr.");
        break;
    }
    case 221942:
    {
        returnValue = F("Milzer Mühlpfad");
        break;
    }
    case 221943:
    {
        returnValue = F("Milzer Neue Str.");
        break;
    }
    case 221944:
    {
        returnValue = F("Milzer Steinweg");
        break;
    }
    case 221945:
    {
        returnValue = F("Milzer Str.");
        break;
    }
    case 221946:
    {
        returnValue = F("Milzer Weg");
        break;
    }
    case 221947:
    {
        returnValue = F("Milzgrundstr.");
        break;
    }
    case 221948:
    {
        returnValue = F("Milzweg");
        break;
    }
    case 221949:
    {
        returnValue = F("Mimastr.");
        break;
    }
    case 221950:
    {
        returnValue = F("Mimbach");
        break;
    }
    case 221951:
    {
        returnValue = F("Mimbacher Str.");
        break;
    }
    case 221952:
    {
        returnValue = F("Mimbachstr.");
        break;
    }
    case 221953:
    {
        returnValue = F("Mimberge");
        break;
    }
    case 221954:
    {
        returnValue = F("Mimberger Str.");
        break;
    }
    case 221955:
    {
        returnValue = F("Mimmelager Str.");
        break;
    }
    case 221956:
    {
        returnValue = F("Mimmenhauser Str.");
        break;
    }
    case 221957:
    {
        returnValue = F("Mimminger Str.");
        break;
    }
    case 221958:
    {
        returnValue = F("Mimosenweg");
        break;
    }
    case 221959:
    {
        returnValue = F("Min Hüsing");
        break;
    }
    case 221960:
    {
        returnValue = F("Min Hüsung");
        break;
    }
    case 221961:
    {
        returnValue = F("Mina-Cyrus-Weg");
        break;
    }
    case 221962:
    {
        returnValue = F("Mina-Hagenbusch-Str.");
        break;
    }
    case 221963:
    {
        returnValue = F("Mina-Helfer-Str.");
        break;
    }
    case 221964:
    {
        returnValue = F("Mina-Karcher-Platz");
        break;
    }
    case 221965:
    {
        returnValue = F("Mina-Witkojc-Str.");
        break;
    }
    case 221966:
    {
        returnValue = F("Minanoring");
        break;
    }
    case 221967:
    {
        returnValue = F("Minartzstr.");
        break;
    }
    case 221968:
    {
        returnValue = F("Mindbuch");
        break;
    }
    case 221969:
    {
        returnValue = F("Mindel-Hochwasserschutzdamm");
        break;
    }
    case 221970:
    {
        returnValue = F("Mindelauer Str.");
        break;
    }
    case 221971:
    {
        returnValue = F("Mindelbergstr.");
        break;
    }
    case 221972:
    {
        returnValue = F("Mindelburgweg");
        break;
    }
    case 221973:
    {
        returnValue = F("Mindeleck");
        break;
    }
    case 221974:
    {
        returnValue = F("Mindelgarten");
        break;
    }
    case 221975:
    {
        returnValue = F("Mindelgasse");
        break;
    }
    case 221976:
    {
        returnValue = F("Mindelheimer Str.");
        break;
    }
    case 221977:
    {
        returnValue = F("Mindelholz");
        break;
    }
    case 221978:
    {
        returnValue = F("Mindelholzweg");
        break;
    }
    case 221979:
    {
        returnValue = F("Mindelmähderweg");
        break;
    }
    case 221980:
    {
        returnValue = F("Mindelseestr.");
        break;
    }
    case 221981:
    {
        returnValue = F("Mindelstettener Str.");
        break;
    }
    case 221982:
    {
        returnValue = F("Mindelstr.");
        break;
    }
    case 221983:
    {
        returnValue = F("Mindeltalstr.");
        break;
    }
    case 221984:
    {
        returnValue = F("Mindelweg");
        break;
    }
    case 221985:
    {
        returnValue = F("Mindelzeller Str.");
        break;
    }
    case 221986:
    {
        returnValue = F("Minden-Weseler Weg");
        break;
    }
    case 221987:
    {
        returnValue = F("Mindener Landstr.");
        break;
    }
    case 221988:
    {
        returnValue = F("Mindener Postweg");
        break;
    }
    case 221989:
    {
        returnValue = F("Mindener Ring");
        break;
    }
    case 221990:
    {
        returnValue = F("Mindener Str.");
        break;
    }
    case 221991:
    {
        returnValue = F("Mindener Weg");
        break;
    }
    case 221992:
    {
        returnValue = F("Mindenerwaldstr.");
        break;
    }
    case 221993:
    {
        returnValue = F("Minderbetzigau");
        break;
    }
    case 221994:
    {
        returnValue = F("Minderheider Str.");
        break;
    }
    case 221995:
    {
        returnValue = F("Minderheideweg");
        break;
    }
    case 221996:
    {
        returnValue = F("Minderoth");
        break;
    }
    case 221997:
    {
        returnValue = F("Mindersbacher Str.");
        break;
    }
    case 221998:
    {
        returnValue = F("Mindersbacher Weg");
        break;
    }
    case 221999:
    {
        returnValue = F("Mindersdorfer Str.");
        break;
    }
    case 222000:
    {
        returnValue = F("Mindeweg");
        break;
    }
    case 222001:
    {
        returnValue = F("Mindorf A");
        break;
    }
    case 222002:
    {
        returnValue = F("Mindorf B");
        break;
    }
    case 222003:
    {
        returnValue = F("Mindorf C");
        break;
    }
    case 222004:
    {
        returnValue = F("Mindorf D");
        break;
    }
    case 222005:
    {
        returnValue = F("Mindorf E");
        break;
    }
    case 222006:
    {
        returnValue = F("Mindorf F");
        break;
    }
    case 222007:
    {
        returnValue = F("Mine-Heimat-Weg");
        break;
    }
    case 222008:
    {
        returnValue = F("Mineckstr.");
        break;
    }
    case 222009:
    {
        returnValue = F("Minengang");
        break;
    }
    case 222010:
    {
        returnValue = F("Minenlagerweg");
        break;
    }
    case 222011:
    {
        returnValue = F("Minenplattweg");
        break;
    }
    case 222012:
    {
        returnValue = F("Mineralienschlucht");
        break;
    }
    case 222013:
    {
        returnValue = F("Minerbe-Str.");
        break;
    }
    case 222014:
    {
        returnValue = F("Minervastr.");
        break;
    }
    case 222015:
    {
        returnValue = F("Minervaweg");
        break;
    }
    case 222016:
    {
        returnValue = F("Mineseck");
        break;
    }
    case 222017:
    {
        returnValue = F("Minetsgasse");
        break;
    }
    case 222018:
    {
        returnValue = F("Minfelder Str.");
        break;
    }
    case 222019:
    {
        returnValue = F("Mingeroder Str.");
        break;
    }
    case 222020:
    {
        returnValue = F("Mingolsheimer Str.");
        break;
    }
    case 222021:
    {
        returnValue = F("Mingolsheimer Weg");
        break;
    }
    case 222022:
    {
        returnValue = F("Minhausenstr.");
        break;
    }
    case 222023:
    {
        returnValue = F("Minhorstweg");
        break;
    }
    case 222024:
    {
        returnValue = F("Mini Bike Park");
        break;
    }
    case 222025:
    {
        returnValue = F("Mini Park an der Schule");
        break;
    }
    case 222026:
    {
        returnValue = F("Mini-Parkanlage");
        break;
    }
    case 222027:
    {
        returnValue = F("MiniTec-Allee");
        break;
    }
    case 222028:
    {
        returnValue = F("Miniaturpark „Klein-Erzgebirge“");
        break;
    }
    case 222029:
    {
        returnValue = F("Miniaturschauanlage \"Klein Vogtland");
        break;
    }
    case 222030:
    {
        returnValue = F("Minibike");
        break;
    }
    case 222031:
    {
        returnValue = F("Miniergraben");
        break;
    }
    case 222032:
    {
        returnValue = F("Minigolf");
        break;
    }
    case 222033:
    {
        returnValue = F("Minigolf Anlage");
        break;
    }
    case 222034:
    {
        returnValue = F("Minigolfanlage");
        break;
    }
    case 222035:
    {
        returnValue = F("Minihofstr.");
        break;
    }
    case 222036:
    {
        returnValue = F("Minimaxstr.");
        break;
    }
    case 222037:
    {
        returnValue = F("Miningweg");
        break;
    }
    case 222038:
    {
        returnValue = F("Minister-Karl-Möller-Str.");
        break;
    }
    case 222039:
    {
        returnValue = F("Minister-Schmid-Str.");
        break;
    }
    case 222040:
    {
        returnValue = F("Ministerweg");
        break;
    }
    case 222041:
    {
        returnValue = F("Minkel");
        break;
    }
    case 222042:
    {
        returnValue = F("Minkeldonk");
        break;
    }
    case 222043:
    {
        returnValue = F("Minkelfeld");
        break;
    }
    case 222044:
    {
        returnValue = F("Minkelsches Feld");
        break;
    }
    case 222045:
    {
        returnValue = F("Minkener Str.");
        break;
    }
    case 222046:
    {
        returnValue = F("Minkenkuhle");
        break;
    }
    case 222047:
    {
        returnValue = F("Minkenstieg");
        break;
    }
    case 222048:
    {
        returnValue = F("Minkespfädchen");
        break;
    }
    case 222049:
    {
        returnValue = F("Minkholzweg");
        break;
    }
    case 222050:
    {
        returnValue = F("Minkosberg");
        break;
    }
    case 222051:
    {
        returnValue = F("Minkowskiweg");
        break;
    }
    case 222052:
    {
        returnValue = F("Minksweg");
        break;
    }
    case 222053:
    {
        returnValue = F("Minkweg");
        break;
    }
    case 222054:
    {
        returnValue = F("Minkwitz Siedlung");
        break;
    }
    case 222055:
    {
        returnValue = F("Minkwitzer Dorfstr.");
        break;
    }
    case 222056:
    {
        returnValue = F("Minkwitzer Landstr.");
        break;
    }
    case 222057:
    {
        returnValue = F("Minkwitzer Str.");
        break;
    }
    case 222058:
    {
        returnValue = F("Minköfe");
        break;
    }
    case 222059:
    {
        returnValue = F("Minna-Anna");
        break;
    }
    case 222060:
    {
        returnValue = F("Minna-Bollmann-Str.");
        break;
    }
    case 222061:
    {
        returnValue = F("Minna-Bothe-Str.");
        break;
    }
    case 222062:
    {
        returnValue = F("Minna-Busch-Weg");
        break;
    }
    case 222063:
    {
        returnValue = F("Minna-Cauer-Ring");
        break;
    }
    case 222064:
    {
        returnValue = F("Minna-Cauer-Str.");
        break;
    }
    case 222065:
    {
        returnValue = F("Minna-Cauer-Weg");
        break;
    }
    case 222066:
    {
        returnValue = F("Minna-Hankel-Str.");
        break;
    }
    case 222067:
    {
        returnValue = F("Minna-Hemken-Str.");
        break;
    }
    case 222068:
    {
        returnValue = F("Minna-Herzlieb-Str.");
        break;
    }
    case 222069:
    {
        returnValue = F("Minna-Hollenbach-Weg");
        break;
    }
    case 222070:
    {
        returnValue = F("Minna-Marcus-Str.");
        break;
    }
    case 222071:
    {
        returnValue = F("Minna-Meckel-Str.");
        break;
    }
    case 222072:
    {
        returnValue = F("Minna-Naumann-Weg");
        break;
    }
    case 222073:
    {
        returnValue = F("Minna-Neuburger-Str.");
        break;
    }
    case 222074:
    {
        returnValue = F("Minna-Planer-Weg");
        break;
    }
    case 222075:
    {
        returnValue = F("Minna-Rattay-Weg");
        break;
    }
    case 222076:
    {
        returnValue = F("Minna-Riefe-Str.");
        break;
    }
    case 222077:
    {
        returnValue = F("Minna-Simon-Str.");
        break;
    }
    case 222078:
    {
        returnValue = F("Minna-Specht-Eck");
        break;
    }
    case 222079:
    {
        returnValue = F("Minna-Vortisch-Str.");
        break;
    }
    case 222080:
    {
        returnValue = F("Minnacker");
        break;
    }
    case 222081:
    {
        returnValue = F("Minnastr.");
        break;
    }
    case 222082:
    {
        returnValue = F("Minneburgstr.");
        break;
    }
    case 222083:
    {
        returnValue = F("Minneburgweg");
        break;
    }
    case 222084:
    {
        returnValue = F("Minnefeld");
        break;
    }
    case 222085:
    {
        returnValue = F("Minnefelder Seestr.");
        break;
    }
    case 222086:
    {
        returnValue = F("Minneggstr.");
        break;
    }
    case 222087:
    {
        returnValue = F("Minnekenstege");
        break;
    }
    case 222088:
    {
        returnValue = F("Minnenstr.");
        break;
    }
    case 222089:
    {
        returnValue = F("Minnepfad");
        break;
    }
    case 222090:
    {
        returnValue = F("Minnesotastr.");
        break;
    }
    case 222091:
    {
        returnValue = F("Minnesängerstr.");
        break;
    }
    case 222092:
    {
        returnValue = F("Minnesängerweg");
        break;
    }
    case 222093:
    {
        returnValue = F("Minneweg");
        break;
    }
    case 222094:
    {
        returnValue = F("Minneörter Str.");
        break;
    }
    case 222095:
    {
        returnValue = F("Minnholzweg");
        break;
    }
    case 222096:
    {
        returnValue = F("Minni-Boh-Weg");
        break;
    }
    case 222097:
    {
        returnValue = F("Minoritengasse");
        break;
    }
    case 222098:
    {
        returnValue = F("Minoritenplatz");
        break;
    }
    case 222099:
    {
        returnValue = F("Minoritenstr.");
        break;
    }
    case 222100:
    {
        returnValue = F("Minot Way");
        break;
    }
    case 222101:
    {
        returnValue = F("Minsener Oog");
        break;
    }
    case 222102:
    {
        returnValue = F("Minser Birkenweg");
        break;
    }
    case 222103:
    {
        returnValue = F("Minser Osteraltendeich");
        break;
    }
    case 222104:
    {
        returnValue = F("Minsk Terrassen");
        break;
    }
    case 222105:
    {
        returnValue = F("Minske Pad");
        break;
    }
    case 222106:
    {
        returnValue = F("Minsker Str.");
        break;
    }
    case 222107:
    {
        returnValue = F("Minslebener Str.");
        break;
    }
    case 222108:
    {
        returnValue = F("Minstedter Str.");
        break;
    }
    case 222109:
    {
        returnValue = F("Mintarder Berg");
        break;
    }
    case 222110:
    {
        returnValue = F("Mintarder Dorfstr.");
        break;
    }
    case 222111:
    {
        returnValue = F("Mintarder Str.");
        break;
    }
    case 222112:
    {
        returnValue = F("Mintarder Weg");
        break;
    }
    case 222113:
    {
        returnValue = F("Mintenbecker Str.");
        break;
    }
    case 222114:
    {
        returnValue = F("Mintenburger Str.");
        break;
    }
    case 222115:
    {
        returnValue = F("Mintrachinger Str.");
        break;
    }
    case 222116:
    {
        returnValue = F("Minuitstr.");
        break;
    }
    case 222117:
    {
        returnValue = F("Minzenweg");
        break;
    }
    case 222118:
    {
        returnValue = F("Minzestr.");
        break;
    }
    case 222119:
    {
        returnValue = F("Minzeweg");
        break;
    }
    case 222120:
    {
        returnValue = F("Minzstr.");
        break;
    }
    case 222121:
    {
        returnValue = F("Minzweg");
        break;
    }
    case 222122:
    {
        returnValue = F("Minzägassla");
        break;
    }
    case 222123:
    {
        returnValue = F("Miquelstr.");
        break;
    }
    case 222124:
    {
        returnValue = F("Mirabeauweg");
        break;
    }
    case 222125:
    {
        returnValue = F("Mirabellen-Hof");
        break;
    }
    case 222126:
    {
        returnValue = F("Mirabellenbaumweg");
        break;
    }
    case 222127:
    {
        returnValue = F("Mirabellengarten");
        break;
    }
    case 222128:
    {
        returnValue = F("Mirabellenstr.");
        break;
    }
    case 222129:
    {
        returnValue = F("Mirabellenweg");
        break;
    }
    case 222130:
    {
        returnValue = F("Mirabilisweg");
        break;
    }
    case 222131:
    {
        returnValue = F("Mirahof");
        break;
    }
    case 222132:
    {
        returnValue = F("Mirander Str.");
        break;
    }
    case 222133:
    {
        returnValue = F("Mirandolaweg");
        break;
    }
    case 222134:
    {
        returnValue = F("Mirastr.");
        break;
    }
    case 222135:
    {
        returnValue = F("Mirbach-Wäldchen");
        break;
    }
    case 222136:
    {
        returnValue = F("Mirbacher Str.");
        break;
    }
    case 222137:
    {
        returnValue = F("Mirbacher Weg");
        break;
    }
    case 222138:
    {
        returnValue = F("Mirbachstr.");
        break;
    }
    case 222139:
    {
        returnValue = F("Mirdes Gang");
        break;
    }
    case 222140:
    {
        returnValue = F("Mirebeaustr.");
        break;
    }
    case 222141:
    {
        returnValue = F("Miremswai");
        break;
    }
    case 222142:
    {
        returnValue = F("Mirgelweg");
        break;
    }
    case 222143:
    {
        returnValue = F("Miriam-Sander-Str.");
        break;
    }
    case 222144:
    {
        returnValue = F("Mirkelweg");
        break;
    }
    case 222145:
    {
        returnValue = F("Mirkenweg");
        break;
    }
    case 222146:
    {
        returnValue = F("Mirkstr.");
        break;
    }
    case 222147:
    {
        returnValue = F("Mirmelbergweg");
        break;
    }
    case 222148:
    {
        returnValue = F("Miroldesstr.");
        break;
    }
    case 222149:
    {
        returnValue = F("Mirower Bogen");
        break;
    }
    case 222150:
    {
        returnValue = F("Mirower Chaussee");
        break;
    }
    case 222151:
    {
        returnValue = F("Mirower Landstr.");
        break;
    }
    case 222152:
    {
        returnValue = F("Mirower Ring");
        break;
    }
    case 222153:
    {
        returnValue = F("Mirower Str.");
        break;
    }
    case 222154:
    {
        returnValue = F("Mirsdorfer Waldgrund");
        break;
    }
    case 222155:
    {
        returnValue = F("Mirskofener Str.");
        break;
    }
    case 222156:
    {
        returnValue = F("Mirtlspergerstr.");
        break;
    }
    case 222157:
    {
        returnValue = F("Miruspark");
        break;
    }
    case 222158:
    {
        returnValue = F("Mirweilerhof");
        break;
    }
    case 222159:
    {
        returnValue = F("Misburger Weg");
        break;
    }
    case 222160:
    {
        returnValue = F("Mischebachstr.");
        break;
    }
    case 222161:
    {
        returnValue = F("Mischelbachweg");
        break;
    }
    case 222162:
    {
        returnValue = F("Mischelsweg");
        break;
    }
    case 222163:
    {
        returnValue = F("Mischenbachstr.");
        break;
    }
    case 222164:
    {
        returnValue = F("Mischenberg");
        break;
    }
    case 222165:
    {
        returnValue = F("Mischenrieder Weg");
        break;
    }
    case 222166:
    {
        returnValue = F("Mischheid");
        break;
    }
    case 222167:
    {
        returnValue = F("Mischkeweg");
        break;
    }
    case 222168:
    {
        returnValue = F("Mischwitz");
        break;
    }
    case 222169:
    {
        returnValue = F("Misdroyer Str.");
        break;
    }
    case 222170:
    {
        returnValue = F("Miselohestr.");
        break;
    }
    case 222171:
    {
        returnValue = F("Misgeldstr.");
        break;
    }
    case 222172:
    {
        returnValue = F("Miskolczi-Str.");
        break;
    }
    case 222173:
    {
        returnValue = F("Mislag");
        break;
    }
    case 222174:
    {
        returnValue = F("Mispel");
        break;
    }
    case 222175:
    {
        returnValue = F("Mispelkamp");
        break;
    }
    case 222176:
    {
        returnValue = F("Mispelstr.");
        break;
    }
    case 222177:
    {
        returnValue = F("Mispelweg");
        break;
    }
    case 222178:
    {
        returnValue = F("Misplietweg");
        break;
    }
    case 222179:
    {
        returnValue = F("Miss-Grainger-Weg");
        break;
    }
    case 222180:
    {
        returnValue = F("Misselbachstr.");
        break;
    }
    case 222181:
    {
        returnValue = F("Misselhorn");
        break;
    }
    case 222182:
    {
        returnValue = F("Misselwardener Dorfstr.");
        break;
    }
    case 222183:
    {
        returnValue = F("Misselwardener Grabenweg");
        break;
    }
    case 222184:
    {
        returnValue = F("Misselwardener Landstr.");
        break;
    }
    case 222185:
    {
        returnValue = F("Misselwardener Niederstrich");
        break;
    }
    case 222186:
    {
        returnValue = F("Misselwardener Specken");
        break;
    }
    case 222187:
    {
        returnValue = F("Missener Str.");
        break;
    }
    case 222188:
    {
        returnValue = F("Missenharterweg");
        break;
    }
    case 222189:
    {
        returnValue = F("Missenweg");
        break;
    }
    case 222190:
    {
        returnValue = F("Missepaad");
        break;
    }
    case 222191:
    {
        returnValue = F("Missionsstr.");
        break;
    }
    case 222192:
    {
        returnValue = F("Missionsweg");
        break;
    }
    case 222193:
    {
        returnValue = F("Mississippi");
        break;
    }
    case 222194:
    {
        returnValue = F("Mississippi Avenue");
        break;
    }
    case 222195:
    {
        returnValue = F("Mississippi Drive");
        break;
    }
    case 222196:
    {
        returnValue = F("Missiwaldweg");
        break;
    }
    case 222197:
    {
        returnValue = F("Missloh");
        break;
    }
    case 222198:
    {
        returnValue = F("Missouri Drive");
        break;
    }
    case 222199:
    {
        returnValue = F("Missouristr.");
        break;
    }
    case 222200:
    {
        returnValue = F("Missunder Fährstr.");
        break;
    }
    case 222201:
    {
        returnValue = F("Missunder Weg");
        break;
    }
    case 222202:
    {
        returnValue = F("Missundestr.");
        break;
    }
    case 222203:
    {
        returnValue = F("Missweg");
        break;
    }
    case 222204:
    {
        returnValue = F("Mist-/Bierweg");
        break;
    }
    case 222205:
    {
        returnValue = F("Mistegasse");
        break;
    }
    case 222206:
    {
        returnValue = F("Mistelbacher Str.");
        break;
    }
    case 222207:
    {
        returnValue = F("Mistelbacher Weg");
        break;
    }
    case 222208:
    {
        returnValue = F("Mistelbachweg");
        break;
    }
    case 222209:
    {
        returnValue = F("Mistelbergweg");
        break;
    }
    case 222210:
    {
        returnValue = F("Mistelbrunner Str.");
        break;
    }
    case 222211:
    {
        returnValue = F("Mistelgauer Str.");
        break;
    }
    case 222212:
    {
        returnValue = F("Mistelhof");
        break;
    }
    case 222213:
    {
        returnValue = F("Mistelstr.");
        break;
    }
    case 222214:
    {
        returnValue = F("Mistelweg");
        break;
    }
    case 222215:
    {
        returnValue = F("Mistgasse");
        break;
    }
    case 222216:
    {
        returnValue = F("Mistorfer Landweg");
        break;
    }
    case 222217:
    {
        returnValue = F("Mistorfer Weg");
        break;
    }
    case 222218:
    {
        returnValue = F("Mistralstr.");
        break;
    }
    case 222219:
    {
        returnValue = F("Mistralweg");
        break;
    }
    case 222220:
    {
        returnValue = F("Mistschänkenweg");
        break;
    }
    case 222221:
    {
        returnValue = F("Miststräßchen");
        break;
    }
    case 222222:
    {
        returnValue = F("Misttal");
        break;
    }
    case 222223:
    {
        returnValue = F("Mistweg");
        break;
    }
    case 222224:
    {
        returnValue = F("Mitauer Str.");
        break;
    }
    case 222225:
    {
        returnValue = F("Mitauweg");
        break;
    }
    case 222226:
    {
        returnValue = F("Mitberg");
        break;
    }
    case 222227:
    {
        returnValue = F("Mitberstr.");
        break;
    }
    case 222228:
    {
        returnValue = F("Mitfeld");
        break;
    }
    case 222229:
    {
        returnValue = F("Mitgaustr.");
        break;
    }
    case 222230:
    {
        returnValue = F("Mithauweg");
        break;
    }
    case 222231:
    {
        returnValue = F("Mithoffstr.");
        break;
    }
    case 222232:
    {
        returnValue = F("Mithoffweg");
        break;
    }
    case 222233:
    {
        returnValue = F("Mithrasstr.");
        break;
    }
    case 222234:
    {
        returnValue = F("Mithrasweg");
        break;
    }
    case 222235:
    {
        returnValue = F("Mitlauweg");
        break;
    }
    case 222236:
    {
        returnValue = F("Mitlechterner Str.");
        break;
    }
    case 222237:
    {
        returnValue = F("Mitlerer Bernsteinweg");
        break;
    }
    case 222238:
    {
        returnValue = F("Mitlinger Heuweg");
        break;
    }
    case 222239:
    {
        returnValue = F("Mitlinger Kirchweg");
        break;
    }
    case 222240:
    {
        returnValue = F("Mitllerer Kircheckweg");
        break;
    }
    case 222241:
    {
        returnValue = F("Mitlosheimer Str.");
        break;
    }
    case 222242:
    {
        returnValue = F("Mitlosheimer Weg");
        break;
    }
    case 222243:
    {
        returnValue = F("Mitländerstr.");
        break;
    }
    case 222244:
    {
        returnValue = F("Mitobiusweg");
        break;
    }
    case 222245:
    {
        returnValue = F("Mitsche Gässchen");
        break;
    }
    case 222246:
    {
        returnValue = F("Mitschelenstr.");
        break;
    }
    case 222247:
    {
        returnValue = F("Mitscherlichplatz");
        break;
    }
    case 222248:
    {
        returnValue = F("Mitscherlichstr.");
        break;
    }
    case 222249:
    {
        returnValue = F("Mitscherlichweg");
        break;
    }
    case 222250:
    {
        returnValue = F("Mitschurinsiedlung");
        break;
    }
    case 222251:
    {
        returnValue = F("Mitschurinskweg");
        break;
    }
    case 222252:
    {
        returnValue = F("Mitschurinstr.");
        break;
    }
    case 222253:
    {
        returnValue = F("Mitschurinweg");
        break;
    }
    case 222254:
    {
        returnValue = F("Mittag Winterrodelbahn");
        break;
    }
    case 222255:
    {
        returnValue = F("Mittagbühlweg");
        break;
    }
    case 222256:
    {
        returnValue = F("Mittagleite");
        break;
    }
    case 222257:
    {
        returnValue = F("Mittagsberg");
        break;
    }
    case 222258:
    {
        returnValue = F("Mittagskamp");
        break;
    }
    case 222259:
    {
        returnValue = F("Mittagsplatzweg");
        break;
    }
    case 222260:
    {
        returnValue = F("Mittagsteinstr.");
        break;
    }
    case 222261:
    {
        returnValue = F("Mittagstr.");
        break;
    }
    case 222262:
    {
        returnValue = F("Mittagweg");
        break;
    }
    case 222263:
    {
        returnValue = F("Mittal");
        break;
    }
    case 222264:
    {
        returnValue = F("Mittaschstr.");
        break;
    }
    case 222265:
    {
        returnValue = F("Mittbach");
        break;
    }
    case 222266:
    {
        returnValue = F("Mittbacher Hof");
        break;
    }
    case 222267:
    {
        returnValue = F("Mittbachweg");
        break;
    }
    case 222268:
    {
        returnValue = F("Mittbergweg");
        break;
    }
    case 222269:
    {
        returnValue = F("Mitte Feld");
        break;
    }
    case 222270:
    {
        returnValue = F("Mitte Großharthau");
        break;
    }
    case 222271:
    {
        returnValue = F("Mittebruch");
        break;
    }
    case 222272:
    {
        returnValue = F("Mittel");
        break;
    }
    case 222273:
    {
        returnValue = F("Mittel Carthausen");
        break;
    }
    case 222274:
    {
        returnValue = F("Mittel Feld");
        break;
    }
    case 222275:
    {
        returnValue = F("Mittel Reihe");
        break;
    }
    case 222276:
    {
        returnValue = F("Mittel Schneise");
        break;
    }
    case 222277:
    {
        returnValue = F("Mittel-Gründauer Str.");
        break;
    }
    case 222278:
    {
        returnValue = F("Mittel-Seemer-Str.");
        break;
    }
    case 222279:
    {
        returnValue = F("Mittel-Str.");
        break;
    }
    case 222280:
    {
        returnValue = F("Mittelacker");
        break;
    }
    case 222281:
    {
        returnValue = F("Mittelahrer Weg");
        break;
    }
    case 222282:
    {
        returnValue = F("Mittelallee");
        break;
    }
    case 222283:
    {
        returnValue = F("Mittelalterliche Strasse");
        break;
    }
    case 222284:
    {
        returnValue = F("Mittelanger");
        break;
    }
    case 222285:
    {
        returnValue = F("Mittelangerweg");
        break;
    }
    case 222286:
    {
        returnValue = F("Mittelau");
        break;
    }
    case 222287:
    {
        returnValue = F("Mittelauel");
        break;
    }
    case 222288:
    {
        returnValue = F("Mittelaustr.");
        break;
    }
    case 222289:
    {
        returnValue = F("Mittelauweg");
        break;
    }
    case 222290:
    {
        returnValue = F("Mittelbach");
        break;
    }
    case 222291:
    {
        returnValue = F("Mittelbacher Dorfstr.");
        break;
    }
    case 222292:
    {
        returnValue = F("Mittelbacher Feldstr.");
        break;
    }
    case 222293:
    {
        returnValue = F("Mittelbacher Siedlung");
        break;
    }
    case 222294:
    {
        returnValue = F("Mittelbacher Str.");
        break;
    }
    case 222295:
    {
        returnValue = F("Mittelbachstr.");
        break;
    }
    case 222296:
    {
        returnValue = F("Mittelbachtal");
        break;
    }
    case 222297:
    {
        returnValue = F("Mittelbachweg");
        break;
    }
    case 222298:
    {
        returnValue = F("Mittelbauer");
        break;
    }
    case 222299:
    {
        returnValue = F("Mittelbech");
        break;
    }
    case 222300:
    {
        returnValue = F("Mittelbeck");
        break;
    }
    case 222301:
    {
        returnValue = F("Mittelberg");
        break;
    }
    case 222302:
    {
        returnValue = F("Mittelberg-Weg");
        break;
    }
    case 222303:
    {
        returnValue = F("Mittelberge");
        break;
    }
    case 222304:
    {
        returnValue = F("Mittelberger Allee");
        break;
    }
    case 222305:
    {
        returnValue = F("Mittelberger Hohl");
        break;
    }
    case 222306:
    {
        returnValue = F("Mittelberger Str.");
        break;
    }
    case 222307:
    {
        returnValue = F("Mittelbergring");
        break;
    }
    case 222308:
    {
        returnValue = F("Mittelbergsgrund");
        break;
    }
    case 222309:
    {
        returnValue = F("Mittelbergsteige");
        break;
    }
    case 222310:
    {
        returnValue = F("Mittelbergstieg");
        break;
    }
    case 222311:
    {
        returnValue = F("Mittelbergstr.");
        break;
    }
    case 222312:
    {
        returnValue = F("Mittelbergsweg");
        break;
    }
    case 222313:
    {
        returnValue = F("Mittelbergweg");
        break;
    }
    case 222314:
    {
        returnValue = F("Mittelbeune");
        break;
    }
    case 222315:
    {
        returnValue = F("Mittelbiberacher Steige");
        break;
    }
    case 222316:
    {
        returnValue = F("Mittelbiberacher Str.");
        break;
    }
    case 222317:
    {
        returnValue = F("Mittelbollenbacher Str.");
        break;
    }
    case 222318:
    {
        returnValue = F("Mittelbrede");
        break;
    }
    case 222319:
    {
        returnValue = F("Mittelbreede");
        break;
    }
    case 222320:
    {
        returnValue = F("Mittelbreite");
        break;
    }
    case 222321:
    {
        returnValue = F("Mittelbrink");
        break;
    }
    case 222322:
    {
        returnValue = F("Mittelbruchweg");
        break;
    }
    case 222323:
    {
        returnValue = F("Mittelbrunner Str.");
        break;
    }
    case 222324:
    {
        returnValue = F("Mittelbrunnweg");
        break;
    }
    case 222325:
    {
        returnValue = F("Mittelbrücke");
        break;
    }
    case 222326:
    {
        returnValue = F("Mittelbrüdener Str.");
        break;
    }
    case 222327:
    {
        returnValue = F("Mittelbrühlweg");
        break;
    }
    case 222328:
    {
        returnValue = F("Mittelbuchener Str.");
        break;
    }
    case 222329:
    {
        returnValue = F("Mittelbucher Str.");
        break;
    }
    case 222330:
    {
        returnValue = F("Mittelbuhlweg");
        break;
    }
    case 222331:
    {
        returnValue = F("Mittelburg");
        break;
    }
    case 222332:
    {
        returnValue = F("Mittelburger Weg");
        break;
    }
    case 222333:
    {
        returnValue = F("Mittelburgerweg");
        break;
    }
    case 222334:
    {
        returnValue = F("Mittelburgstr.");
        break;
    }
    case 222335:
    {
        returnValue = F("Mittelburgweg");
        break;
    }
    case 222336:
    {
        returnValue = F("Mittelburrenweg");
        break;
    }
    case 222337:
    {
        returnValue = F("Mittelbusch");
        break;
    }
    case 222338:
    {
        returnValue = F("Mittelbuschstr.");
        break;
    }
    case 222339:
    {
        returnValue = F("Mittelbügweg");
        break;
    }
    case 222340:
    {
        returnValue = F("Mittelbühlstr.");
        break;
    }
    case 222341:
    {
        returnValue = F("Mittelbühlweg");
        break;
    }
    case 222342:
    {
        returnValue = F("Mitteldamm");
        break;
    }
    case 222343:
    {
        returnValue = F("Mitteldeich");
        break;
    }
    case 222344:
    {
        returnValue = F("Mitteldeichweg");
        break;
    }
    case 222345:
    {
        returnValue = F("Mitteldicker Allee");
        break;
    }
    case 222346:
    {
        returnValue = F("Mitteldicker Schneise");
        break;
    }
    case 222347:
    {
        returnValue = F("Mitteldicker Weg");
        break;
    }
    case 222348:
    {
        returnValue = F("Mitteldiek");
        break;
    }
    case 222349:
    {
        returnValue = F("Mitteldorf");
        break;
    }
    case 222350:
    {
        returnValue = F("Mitteldorfer Str.");
        break;
    }
    case 222351:
    {
        returnValue = F("Mitteldorfer Weg");
        break;
    }
    case 222352:
    {
        returnValue = F("Mitteldorfstr.");
        break;
    }
    case 222353:
    {
        returnValue = F("Mitteldrift");
        break;
    }
    case 222354:
    {
        returnValue = F("Mitteleckweg");
        break;
    }
    case 222355:
    {
        returnValue = F("Mittelehrenbach");
        break;
    }
    case 222356:
    {
        returnValue = F("Mittelehrenbacher Str.");
        break;
    }
    case 222357:
    {
        returnValue = F("Mitteleinzel");
        break;
    }
    case 222358:
    {
        returnValue = F("Mittelende");
        break;
    }
    case 222359:
    {
        returnValue = F("Mittelende Nord");
        break;
    }
    case 222360:
    {
        returnValue = F("Mittelende Süd");
        break;
    }
    case 222361:
    {
        returnValue = F("Mittelerer Hartungsweg");
        break;
    }
    case 222362:
    {
        returnValue = F("Mittelerlen");
        break;
    }
    case 222363:
    {
        returnValue = F("Mittelesch");
        break;
    }
    case 222364:
    {
        returnValue = F("Mitteleschenbacher Str.");
        break;
    }
    case 222365:
    {
        returnValue = F("Mitteleschle");
        break;
    }
    case 222366:
    {
        returnValue = F("Mitteleschweg");
        break;
    }
    case 222367:
    {
        returnValue = F("Mittelfangweg");
        break;
    }
    case 222368:
    {
        returnValue = F("Mittelfeld");
        break;
    }
    case 222369:
    {
        returnValue = F("Mittelfeld-Nord");
        break;
    }
    case 222370:
    {
        returnValue = F("Mittelfeld-Süd");
        break;
    }
    case 222371:
    {
        returnValue = F("Mittelfeldbogen");
        break;
    }
    case 222372:
    {
        returnValue = F("Mittelfelder Str.");
        break;
    }
    case 222373:
    {
        returnValue = F("Mittelfeldring");
        break;
    }
    case 222374:
    {
        returnValue = F("Mittelfeldstr.");
        break;
    }
    case 222375:
    {
        returnValue = F("Mittelfeldweg");
        break;
    }
    case 222376:
    {
        returnValue = F("Mittelfeldwende");
        break;
    }
    case 222377:
    {
        returnValue = F("Mittelfischbach");
        break;
    }
    case 222378:
    {
        returnValue = F("Mittelflage");
        break;
    }
    case 222379:
    {
        returnValue = F("Mittelflegge");
        break;
    }
    case 222380:
    {
        returnValue = F("Mittelflur");
        break;
    }
    case 222381:
    {
        returnValue = F("Mittelflügel");
        break;
    }
    case 222382:
    {
        returnValue = F("Mittelflügelweg");
        break;
    }
    case 222383:
    {
        returnValue = F("Mittelfuhre");
        break;
    }
    case 222384:
    {
        returnValue = F("Mittelfurtweg");
        break;
    }
    case 222385:
    {
        returnValue = F("Mittelfürkelt");
        break;
    }
    case 222386:
    {
        returnValue = F("Mittelgang");
        break;
    }
    case 222387:
    {
        returnValue = F("Mittelgarschagen");
        break;
    }
    case 222388:
    {
        returnValue = F("Mittelgartenstr.");
        break;
    }
    case 222389:
    {
        returnValue = F("Mittelgasse");
        break;
    }
    case 222390:
    {
        returnValue = F("Mittelgast");
        break;
    }
    case 222391:
    {
        returnValue = F("Mittelgastenweg");
        break;
    }
    case 222392:
    {
        returnValue = F("Mittelgavenweg");
        break;
    }
    case 222393:
    {
        returnValue = F("Mittelgebirgsstr.");
        break;
    }
    case 222394:
    {
        returnValue = F("Mittelgewann");
        break;
    }
    case 222395:
    {
        returnValue = F("Mittelgewannweg");
        break;
    }
    case 222396:
    {
        returnValue = F("Mittelgewänd");
        break;
    }
    case 222397:
    {
        returnValue = F("Mittelgraben");
        break;
    }
    case 222398:
    {
        returnValue = F("Mittelgrabenstr.");
        break;
    }
    case 222399:
    {
        returnValue = F("Mittelgrenzweg");
        break;
    }
    case 222400:
    {
        returnValue = F("Mittelgrund");
        break;
    }
    case 222401:
    {
        returnValue = F("Mittelgrundstr.");
        break;
    }
    case 222402:
    {
        returnValue = F("Mittelgrundweg");
        break;
    }
    case 222403:
    {
        returnValue = F("Mittelgründauer Weg");
        break;
    }
    case 222404:
    {
        returnValue = F("Mittelgurt");
        break;
    }
    case 222405:
    {
        returnValue = F("Mittelgutweg");
        break;
    }
    case 222406:
    {
        returnValue = F("Mittelgwand");
        break;
    }
    case 222407:
    {
        returnValue = F("Mittelgönrather Str.");
        break;
    }
    case 222408:
    {
        returnValue = F("Mittelgörleweg");
        break;
    }
    case 222409:
    {
        returnValue = F("Mittelhagen");
        break;
    }
    case 222410:
    {
        returnValue = F("Mittelhaide");
        break;
    }
    case 222411:
    {
        returnValue = F("Mittelhain");
        break;
    }
    case 222412:
    {
        returnValue = F("Mittelhambacher Str.");
        break;
    }
    case 222413:
    {
        returnValue = F("Mittelhammer");
        break;
    }
    case 222414:
    {
        returnValue = F("Mittelhammerstr.");
        break;
    }
    case 222415:
    {
        returnValue = F("Mittelhang");
        break;
    }
    case 222416:
    {
        returnValue = F("Mittelhangweg");
        break;
    }
    case 222417:
    {
        returnValue = F("Mittelhankweg");
        break;
    }
    case 222418:
    {
        returnValue = F("Mittelhaucksbergweg");
        break;
    }
    case 222419:
    {
        returnValue = F("Mittelhaugweg");
        break;
    }
    case 222420:
    {
        returnValue = F("Mittelhauk");
        break;
    }
    case 222421:
    {
        returnValue = F("Mittelhauptweg");
        break;
    }
    case 222422:
    {
        returnValue = F("Mittelhausen");
        break;
    }
    case 222423:
    {
        returnValue = F("Mittelhegge");
        break;
    }
    case 222424:
    {
        returnValue = F("Mittelheggenstr.");
        break;
    }
    case 222425:
    {
        returnValue = F("Mittelheide");
        break;
    }
    case 222426:
    {
        returnValue = F("Mittelheimer Str.");
        break;
    }
    case 222427:
    {
        returnValue = F("Mittelhembacher Weg");
        break;
    }
    case 222428:
    {
        returnValue = F("Mittelhesterberg");
        break;
    }
    case 222429:
    {
        returnValue = F("Mittelheubronn");
        break;
    }
    case 222430:
    {
        returnValue = F("Mittelheverstr.");
        break;
    }
    case 222431:
    {
        returnValue = F("Mittelhof");
        break;
    }
    case 222432:
    {
        returnValue = F("Mittelhofen");
        break;
    }
    case 222433:
    {
        returnValue = F("Mittelhofenstr.");
        break;
    }
    case 222434:
    {
        returnValue = F("Mittelhofer Platz");
        break;
    }
    case 222435:
    {
        returnValue = F("Mittelhofer Weg");
        break;
    }
    case 222436:
    {
        returnValue = F("Mittelhoferweg");
        break;
    }
    case 222437:
    {
        returnValue = F("Mittelhofstr.");
        break;
    }
    case 222438:
    {
        returnValue = F("Mittelhofweg");
        break;
    }
    case 222439:
    {
        returnValue = F("Mittelholzweg");
        break;
    }
    case 222440:
    {
        returnValue = F("Mittelhombrechen");
        break;
    }
    case 222441:
    {
        returnValue = F("Mittelhorst");
        break;
    }
    case 222442:
    {
        returnValue = F("Mittelhäuser");
        break;
    }
    case 222443:
    {
        returnValue = F("Mittelhäuser Bäckergasse");
        break;
    }
    case 222444:
    {
        returnValue = F("Mittelhäuser Dorfstr.");
        break;
    }
    case 222445:
    {
        returnValue = F("Mittelhäuser Hauptstr.");
        break;
    }
    case 222446:
    {
        returnValue = F("Mittelhäuser Str.");
        break;
    }
    case 222447:
    {
        returnValue = F("Mittelhäuser Weg");
        break;
    }
    case 222448:
    {
        returnValue = F("Mittelhöfer Str.");
        break;
    }
    case 222449:
    {
        returnValue = F("Mittelhöhe");
        break;
    }
    case 222450:
    {
        returnValue = F("Mittelhöhscheid");
        break;
    }
    case 222451:
    {
        returnValue = F("Mittelirsener Str.");
        break;
    }
    case 222452:
    {
        returnValue = F("Mitteljörn");
        break;
    }
    case 222453:
    {
        returnValue = F("Mittelkalbacher Str.");
        break;
    }
    case 222454:
    {
        returnValue = F("Mittelkamp");
        break;
    }
    case 222455:
    {
        returnValue = F("Mittelkampstr.");
        break;
    }
    case 222456:
    {
        returnValue = F("Mittelkampsweg");
        break;
    }
    case 222457:
    {
        returnValue = F("Mittelkanal links");
        break;
    }
    case 222458:
    {
        returnValue = F("Mittelkanal rechts");
        break;
    }
    case 222459:
    {
        returnValue = F("Mittelkopfweg");
        break;
    }
    case 222460:
    {
        returnValue = F("Mittelkreis");
        break;
    }
    case 222461:
    {
        returnValue = F("Mittelkämmererstr.");
        break;
    }
    case 222462:
    {
        returnValue = F("Mittellandstr.");
        break;
    }
    case 222463:
    {
        returnValue = F("Mittellandsweg");
        break;
    }
    case 222464:
    {
        returnValue = F("Mittellangenbach");
        break;
    }
    case 222465:
    {
        returnValue = F("Mittelleimbachshof");
        break;
    }
    case 222466:
    {
        returnValue = F("Mittelleite");
        break;
    }
    case 222467:
    {
        returnValue = F("Mittellinie");
        break;
    }
    case 222468:
    {
        returnValue = F("Mittellohne");
        break;
    }
    case 222469:
    {
        returnValue = F("Mittelländer Weg");
        break;
    }
    case 222470:
    {
        returnValue = F("Mittellängenweg");
        break;
    }
    case 222471:
    {
        returnValue = F("Mittellöh");
        break;
    }
    case 222472:
    {
        returnValue = F("Mittelmahdweg");
        break;
    }
    case 222473:
    {
        returnValue = F("Mittelmannstr.");
        break;
    }
    case 222474:
    {
        returnValue = F("Mittelmark");
        break;
    }
    case 222475:
    {
        returnValue = F("Mittelmarkstr.");
        break;
    }
    case 222476:
    {
        returnValue = F("Mittelmarterhof");
        break;
    }
    case 222477:
    {
        returnValue = F("Mittelmatenweg");
        break;
    }
    case 222478:
    {
        returnValue = F("Mittelmatten");
        break;
    }
    case 222479:
    {
        returnValue = F("Mittelmoorweg");
        break;
    }
    case 222480:
    {
        returnValue = F("Mittelmähder");
        break;
    }
    case 222481:
    {
        returnValue = F("Mittelmühle");
        break;
    }
    case 222482:
    {
        returnValue = F("Mittelmühlenweg");
        break;
    }
    case 222483:
    {
        returnValue = F("Mittelmühler Weg");
        break;
    }
    case 222484:
    {
        returnValue = F("Mittelmühlgasse");
        break;
    }
    case 222485:
    {
        returnValue = F("Mittelmühlstr.");
        break;
    }
    case 222486:
    {
        returnValue = F("Mittelmühlweg");
        break;
    }
    case 222487:
    {
        returnValue = F("Mittelnaifermühle");
        break;
    }
    case 222488:
    {
        returnValue = F("Mittelneufnacher Str.");
        break;
    }
    case 222489:
    {
        returnValue = F("Mittelnkirchener Str.");
        break;
    }
    case 222490:
    {
        returnValue = F("Mittelochsenplatz");
        break;
    }
    case 222491:
    {
        returnValue = F("Mittelorbroich");
        break;
    }
    case 222492:
    {
        returnValue = F("Mittelort");
        break;
    }
    case 222493:
    {
        returnValue = F("Mittelort-Siedlung");
        break;
    }
    case 222494:
    {
        returnValue = F("Mittelorter Str.");
        break;
    }
    case 222495:
    {
        returnValue = F("Mittelottersbach");
        break;
    }
    case 222496:
    {
        returnValue = F("Mittelpartstr.");
        break;
    }
    case 222497:
    {
        returnValue = F("Mittelpatt");
        break;
    }
    case 222498:
    {
        returnValue = F("Mittelpaß");
        break;
    }
    case 222499:
    {
        returnValue = F("Mittelpfad");
        break;
    }
    case 222500:
    {
        returnValue = F("Mittelpfadweg");
        break;
    }
    case 222501:
    {
        returnValue = F("Mittelpfadäcker");
        break;
    }
    case 222502:
    {
        returnValue = F("Mittelpforte");
        break;
    }
    case 222503:
    {
        returnValue = F("Mittelplacken");
        break;
    }
    case 222504:
    {
        returnValue = F("Mittelplate");
        break;
    }
    case 222505:
    {
        returnValue = F("Mittelplatz");
        break;
    }
    case 222506:
    {
        returnValue = F("Mittelpriel");
        break;
    }
    case 222507:
    {
        returnValue = F("Mittelpromenade");
        break;
    }
    case 222508:
    {
        returnValue = F("Mittelpunkt Deutschlands");
        break;
    }
    case 222509:
    {
        returnValue = F("Mittelpunktstr.");
        break;
    }
    case 222510:
    {
        returnValue = F("Mittelpöllnitzer Str.");
        break;
    }
    case 222511:
    {
        returnValue = F("Mittelquerspange");
        break;
    }
    case 222512:
    {
        returnValue = F("Mittelrain");
        break;
    }
    case 222513:
    {
        returnValue = F("Mittelrainstr.");
        break;
    }
    case 222514:
    {
        returnValue = F("Mittelreihe");
        break;
    }
    case 222515:
    {
        returnValue = F("Mittelrheinstr.");
        break;
    }
    case 222516:
    {
        returnValue = F("Mittelricht");
        break;
    }
    case 222517:
    {
        returnValue = F("Mittelrieder Str.");
        break;
    }
    case 222518:
    {
        returnValue = F("Mittelriedstr.");
        break;
    }
    case 222519:
    {
        returnValue = F("Mittelring");
        break;
    }
    case 222520:
    {
        returnValue = F("Mittelroder Str.");
        break;
    }
    case 222521:
    {
        returnValue = F("Mittelrookstallerweg");
        break;
    }
    case 222522:
    {
        returnValue = F("Mittelroter Weg");
        break;
    }
    case 222523:
    {
        returnValue = F("Mittelröder Weg");
        break;
    }
    case 222524:
    {
        returnValue = F("Mittelrüsselbach");
        break;
    }
    case 222525:
    {
        returnValue = F("Mittelsaidaer Str.");
        break;
    }
    case 222526:
    {
        returnValue = F("Mittelsand");
        break;
    }
    case 222527:
    {
        returnValue = F("Mittelsand-Ayle-Str.");
        break;
    }
    case 222528:
    {
        returnValue = F("Mittelsandweg");
        break;
    }
    case 222529:
    {
        returnValue = F("Mittelsbach");
        break;
    }
    case 222530:
    {
        returnValue = F("Mittelsberg");
        break;
    }
    case 222531:
    {
        returnValue = F("Mittelsbergweg");
        break;
    }
    case 222532:
    {
        returnValue = F("Mittelscheid");
        break;
    }
    case 222533:
    {
        returnValue = F("Mittelschlagweg");
        break;
    }
    case 222534:
    {
        returnValue = F("Mittelschlenke");
        break;
    }
    case 222535:
    {
        returnValue = F("Mittelschleuse");
        break;
    }
    case 222536:
    {
        returnValue = F("Mittelschloss");
        break;
    }
    case 222537:
    {
        returnValue = F("Mittelschlupfen");
        break;
    }
    case 222538:
    {
        returnValue = F("Mittelschneise");
        break;
    }
    case 222539:
    {
        returnValue = F("Mittelschneppen");
        break;
    }
    case 222540:
    {
        returnValue = F("Mittelschulstr.");
        break;
    }
    case 222541:
    {
        returnValue = F("Mittelschulwall");
        break;
    }
    case 222542:
    {
        returnValue = F("Mittelschulweg");
        break;
    }
    case 222543:
    {
        returnValue = F("Mittelschönbronner Str.");
        break;
    }
    case 222544:
    {
        returnValue = F("Mittelsdorfer Str.");
        break;
    }
    case 222545:
    {
        returnValue = F("Mittelsdorfer Weg");
        break;
    }
    case 222546:
    {
        returnValue = F("Mittelseestr.");
        break;
    }
    case 222547:
    {
        returnValue = F("Mittelseeweg");
        break;
    }
    case 222548:
    {
        returnValue = F("Mittelshof");
        break;
    }
    case 222549:
    {
        returnValue = F("Mittelshofer Weg");
        break;
    }
    case 222550:
    {
        returnValue = F("Mittelsiek");
        break;
    }
    case 222551:
    {
        returnValue = F("Mittelsinner Str.");
        break;
    }
    case 222552:
    {
        returnValue = F("Mittelskamp");
        break;
    }
    case 222553:
    {
        returnValue = F("Mittelsmoorer Str.");
        break;
    }
    case 222554:
    {
        returnValue = F("Mittelstadt");
        break;
    }
    case 222555:
    {
        returnValue = F("Mittelstadtstr.");
        break;
    }
    case 222556:
    {
        returnValue = F("Mittelste Binde");
        break;
    }
    case 222557:
    {
        returnValue = F("Mittelste Heide");
        break;
    }
    case 222558:
    {
        returnValue = F("Mittelste Str.");
        break;
    }
    case 222559:
    {
        returnValue = F("Mittelstebeckestr.");
        break;
    }
    case 222560:
    {
        returnValue = F("Mittelstedter Weg");
        break;
    }
    case 222561:
    {
        returnValue = F("Mittelsteeg");
        break;
    }
    case 222562:
    {
        returnValue = F("Mittelsteg");
        break;
    }
    case 222563:
    {
        returnValue = F("Mittelsteggraben");
        break;
    }
    case 222564:
    {
        returnValue = F("Mittelsteig");
        break;
    }
    case 222565:
    {
        returnValue = F("Mittelstein");
        break;
    }
    case 222566:
    {
        returnValue = F("Mittelsteinacher Str.");
        break;
    }
    case 222567:
    {
        returnValue = F("Mittelsteinbacher Str.");
        break;
    }
    case 222568:
    {
        returnValue = F("Mittelsteinwald");
        break;
    }
    case 222569:
    {
        returnValue = F("Mittelstellberg");
        break;
    }
    case 222570:
    {
        returnValue = F("Mittelstelle");
        break;
    }
    case 222571:
    {
        returnValue = F("Mittelstellweg");
        break;
    }
    case 222572:
    {
        returnValue = F("Mittelstenaher Str.");
        break;
    }
    case 222573:
    {
        returnValue = F("Mittelstendorf");
        break;
    }
    case 222574:
    {
        returnValue = F("Mittelster Berg");
        break;
    }
    case 222575:
    {
        returnValue = F("Mittelster Damm");
        break;
    }
    case 222576:
    {
        returnValue = F("Mittelster Weg");
        break;
    }
    case 222577:
    {
        returnValue = F("Mittelsterwiesenweg");
        break;
    }
    case 222578:
    {
        returnValue = F("Mittelstettener Str.");
        break;
    }
    case 222579:
    {
        returnValue = F("Mittelstetter Str.");
        break;
    }
    case 222580:
    {
        returnValue = F("Mittelstetter Weg");
        break;
    }
    case 222581:
    {
        returnValue = F("Mittelstieg");
        break;
    }
    case 222582:
    {
        returnValue = F("Mittelstr.");
        break;
    }
    case 222583:
    {
        returnValue = F("Mittelstr. Abberode");
        break;
    }
    case 222584:
    {
        returnValue = F("Mittelstr. Großörner");
        break;
    }
    case 222585:
    {
        returnValue = F("Mittelstraat");
        break;
    }
    case 222586:
    {
        returnValue = F("Mittelstroth");
        break;
    }
    case 222587:
    {
        returnValue = F("Mittelstädter Str.");
        break;
    }
    case 222588:
    {
        returnValue = F("Mittelstück");
        break;
    }
    case 222589:
    {
        returnValue = F("Mittelsömmersche Str.");
        break;
    }
    case 222590:
    {
        returnValue = F("Mitteltal");
        break;
    }
    case 222591:
    {
        returnValue = F("Mitteltal-Krokus-Weg");
        break;
    }
    case 222592:
    {
        returnValue = F("Mitteltalstr.");
        break;
    }
    case 222593:
    {
        returnValue = F("Mitteltalweg");
        break;
    }
    case 222594:
    {
        returnValue = F("Mitteltanne");
        break;
    }
    case 222595:
    {
        returnValue = F("Mittelteichweg");
        break;
    }
    case 222596:
    {
        returnValue = F("Mittelteil");
        break;
    }
    case 222597:
    {
        returnValue = F("Mittelteiler Weg");
        break;
    }
    case 222598:
    {
        returnValue = F("Mittelthüler Str.");
        break;
    }
    case 222599:
    {
        returnValue = F("Mitteltor");
        break;
    }
    case 222600:
    {
        returnValue = F("Mitteltorschneuse");
        break;
    }
    case 222601:
    {
        returnValue = F("Mitteltorstr.");
        break;
    }
    case 222602:
    {
        returnValue = F("Mitteltrift");
        break;
    }
    case 222603:
    {
        returnValue = F("Mittelwalder Str.");
        break;
    }
    case 222604:
    {
        returnValue = F("Mittelwaldstr.");
        break;
    }
    case 222605:
    {
        returnValue = F("Mittelwaldweg");
        break;
    }
    case 222606:
    {
        returnValue = F("Mittelwall");
        break;
    }
    case 222607:
    {
        returnValue = F("Mittelwallstr.");
        break;
    }
    case 222608:
    {
        returnValue = F("Mittelwand");
        break;
    }
    case 222609:
    {
        returnValue = F("Mittelwandweg");
        break;
    }
    case 222610:
    {
        returnValue = F("Mittelwech");
        break;
    }
    case 222611:
    {
        returnValue = F("Mittelweg");
        break;
    }
    case 222612:
    {
        returnValue = F("Mittelweg 17");
        break;
    }
    case 222613:
    {
        returnValue = F("Mittelweg 18");
        break;
    }
    case 222614:
    {
        returnValue = F("Mittelweg 19");
        break;
    }
    case 222615:
    {
        returnValue = F("Mittelweg 21");
        break;
    }
    case 222616:
    {
        returnValue = F("Mittelweg Odelshofen");
        break;
    }
    case 222617:
    {
        returnValue = F("Mittelweg Querbach");
        break;
    }
    case 222618:
    {
        returnValue = F("Mittelwegbrücke");
        break;
    }
    case 222619:
    {
        returnValue = F("Mittelweggasse");
        break;
    }
    case 222620:
    {
        returnValue = F("Mittelweide");
        break;
    }
    case 222621:
    {
        returnValue = F("Mittelweiler");
        break;
    }
    case 222622:
    {
        returnValue = F("Mittelweiler Str.");
        break;
    }
    case 222623:
    {
        returnValue = F("Mittelwieke");
        break;
    }
    case 222624:
    {
        returnValue = F("Mittelwies");
        break;
    }
    case 222625:
    {
        returnValue = F("Mittelwiese");
        break;
    }
    case 222626:
    {
        returnValue = F("Mittelwiesenstr.");
        break;
    }
    case 222627:
    {
        returnValue = F("Mittelwiesenweg");
        break;
    }
    case 222628:
    {
        returnValue = F("Mittelwinkelweg");
        break;
    }
    case 222629:
    {
        returnValue = F("Mittelworbscheid");
        break;
    }
    case 222630:
    {
        returnValue = F("Mittelzell");
        break;
    }
    case 222631:
    {
        returnValue = F("Mittelzeller Str.");
        break;
    }
    case 222632:
    {
        returnValue = F("Mittelziegenfurther Mühle");
        break;
    }
    case 222633:
    {
        returnValue = F("Mitteläckerring");
        break;
    }
    case 222634:
    {
        returnValue = F("Mittelösch");
        break;
    }
    case 222635:
    {
        returnValue = F("Mittelöschstr.");
        break;
    }
    case 222636:
    {
        returnValue = F("Mittelöschweg");
        break;
    }
    case 222637:
    {
        returnValue = F("Mitten Im Hof");
        break;
    }
    case 222638:
    {
        returnValue = F("Mitten im Feld");
        break;
    }
    case 222639:
    {
        returnValue = F("Mitten-Dorfshelmer");
        break;
    }
    case 222640:
    {
        returnValue = F("Mittenbrink");
        break;
    }
    case 222641:
    {
        returnValue = F("Mittenbuch");
        break;
    }
    case 222642:
    {
        returnValue = F("Mittenbühlstr.");
        break;
    }
    case 222643:
    {
        returnValue = F("Mittendorfs Hellmer");
        break;
    }
    case 222644:
    {
        returnValue = F("Mittenfeld");
        break;
    }
    case 222645:
    {
        returnValue = F("Mittenfeldstaffel");
        break;
    }
    case 222646:
    {
        returnValue = F("Mittenfeldstr.");
        break;
    }
    case 222647:
    {
        returnValue = F("Mittengäßle");
        break;
    }
    case 222648:
    {
        returnValue = F("Mittenheim");
        break;
    }
    case 222649:
    {
        returnValue = F("Mittenheimer Str.");
        break;
    }
    case 222650:
    {
        returnValue = F("Mittenhuberstr.");
        break;
    }
    case 222651:
    {
        returnValue = F("Mittenkamp");
        break;
    }
    case 222652:
    {
        returnValue = F("Mittenkirchener Str.");
        break;
    }
    case 222653:
    {
        returnValue = F("Mittenkirchner Str.");
        break;
    }
    case 222654:
    {
        returnValue = F("Mittensteige");
        break;
    }
    case 222655:
    {
        returnValue = F("Mittenteicher Str.");
        break;
    }
    case 222656:
    {
        returnValue = F("Mittenwalder Allee");
        break;
    }
    case 222657:
    {
        returnValue = F("Mittenwalder Aue");
        break;
    }
    case 222658:
    {
        returnValue = F("Mittenwalder Chaussee");
        break;
    }
    case 222659:
    {
        returnValue = F("Mittenwalder Str.");
        break;
    }
    case 222660:
    {
        returnValue = F("Mittenwalder Weg");
        break;
    }
    case 222661:
    {
        returnValue = F("Mittenweg");
        break;
    }
    case 222662:
    {
        returnValue = F("Mittenzweistr.");
        break;
    }
    case 222663:
    {
        returnValue = F("Mitter Au");
        break;
    }
    case 222664:
    {
        returnValue = F("Mitter-Geräumt");
        break;
    }
    case 222665:
    {
        returnValue = F("Mitteralmweg");
        break;
    }
    case 222666:
    {
        returnValue = F("Mitterauerbach");
        break;
    }
    case 222667:
    {
        returnValue = F("Mitterbachweg");
        break;
    }
    case 222668:
    {
        returnValue = F("Mitterberg");
        break;
    }
    case 222669:
    {
        returnValue = F("Mitterbergstr.");
        break;
    }
    case 222670:
    {
        returnValue = F("Mitterbreiten");
        break;
    }
    case 222671:
    {
        returnValue = F("Mitterdorfer Str.");
        break;
    }
    case 222672:
    {
        returnValue = F("Mittereckweg");
        break;
    }
    case 222673:
    {
        returnValue = F("Mitterer Geräumtweg");
        break;
    }
    case 222674:
    {
        returnValue = F("Mitterer Weg");
        break;
    }
    case 222675:
    {
        returnValue = F("Mittererstr.");
        break;
    }
    case 222676:
    {
        returnValue = F("Mittereschweg");
        break;
    }
    case 222677:
    {
        returnValue = F("Mitterfeckinger Str.");
        break;
    }
    case 222678:
    {
        returnValue = F("Mitterfeld");
        break;
    }
    case 222679:
    {
        returnValue = F("Mitterfeldallee");
        break;
    }
    case 222680:
    {
        returnValue = F("Mitterfeldring");
        break;
    }
    case 222681:
    {
        returnValue = F("Mitterfeldstr.");
        break;
    }
    case 222682:
    {
        returnValue = F("Mitterfeldweg");
        break;
    }
    case 222683:
    {
        returnValue = F("Mitterfelser Str.");
        break;
    }
    case 222684:
    {
        returnValue = F("Mittergasse");
        break;
    }
    case 222685:
    {
        returnValue = F("Mittergret");
        break;
    }
    case 222686:
    {
        returnValue = F("Mitterhaidstr.");
        break;
    }
    case 222687:
    {
        returnValue = F("Mitterham");
        break;
    }
    case 222688:
    {
        returnValue = F("Mitterhamer Str.");
        break;
    }
    case 222689:
    {
        returnValue = F("Mitterhart");
        break;
    }
    case 222690:
    {
        returnValue = F("Mitterharter Str.");
        break;
    }
    case 222691:
    {
        returnValue = F("Mitterhausen");
        break;
    }
    case 222692:
    {
        returnValue = F("Mitterhauser Weg");
        break;
    }
    case 222693:
    {
        returnValue = F("Mitterhoferweg");
        break;
    }
    case 222694:
    {
        returnValue = F("Mitterhöll");
        break;
    }
    case 222695:
    {
        returnValue = F("Mitterkreither Str.");
        break;
    }
    case 222696:
    {
        returnValue = F("Mitterlacher Weg");
        break;
    }
    case 222697:
    {
        returnValue = F("Mitterlangau");
        break;
    }
    case 222698:
    {
        returnValue = F("Mitterleinbach");
        break;
    }
    case 222699:
    {
        returnValue = F("Mitterlinder Str.");
        break;
    }
    case 222700:
    {
        returnValue = F("Mitterling");
        break;
    }
    case 222701:
    {
        returnValue = F("Mitterlinger Weg");
        break;
    }
    case 222702:
    {
        returnValue = F("Mitterloh");
        break;
    }
    case 222703:
    {
        returnValue = F("Mitterlohe");
        break;
    }
    case 222704:
    {
        returnValue = F("Mitterlug");
        break;
    }
    case 222705:
    {
        returnValue = F("Mitterlängstr.");
        break;
    }
    case 222706:
    {
        returnValue = F("Mittermaierstr.");
        break;
    }
    case 222707:
    {
        returnValue = F("Mittermairstr.");
        break;
    }
    case 222708:
    {
        returnValue = F("Mittermarchenbach");
        break;
    }
    case 222709:
    {
        returnValue = F("Mittermayerstr.");
        break;
    }
    case 222710:
    {
        returnValue = F("Mittermeierweg");
        break;
    }
    case 222711:
    {
        returnValue = F("Mittermurnthal");
        break;
    }
    case 222712:
    {
        returnValue = F("Mittermühl");
        break;
    }
    case 222713:
    {
        returnValue = F("Mittermühlenweg");
        break;
    }
    case 222714:
    {
        returnValue = F("Mittermühlstr.");
        break;
    }
    case 222715:
    {
        returnValue = F("Mittermüllerstr.");
        break;
    }
    case 222716:
    {
        returnValue = F("Mitternacht");
        break;
    }
    case 222717:
    {
        returnValue = F("Mitternachtsbrücke");
        break;
    }
    case 222718:
    {
        returnValue = F("Mitternachtsgasse");
        break;
    }
    case 222719:
    {
        returnValue = F("Mitterndorf");
        break;
    }
    case 222720:
    {
        returnValue = F("Mitterndorferweg");
        break;
    }
    case 222721:
    {
        returnValue = F("Mitterring");
        break;
    }
    case 222722:
    {
        returnValue = F("Mittersberg");
        break;
    }
    case 222723:
    {
        returnValue = F("Mitterschneidhart");
        break;
    }
    case 222724:
    {
        returnValue = F("Mitterseepark");
        break;
    }
    case 222725:
    {
        returnValue = F("Mittershäuser Weg");
        break;
    }
    case 222726:
    {
        returnValue = F("Mittersiller Str.");
        break;
    }
    case 222727:
    {
        returnValue = F("Mittersiller Weg");
        break;
    }
    case 222728:
    {
        returnValue = F("Mittersteig");
        break;
    }
    case 222729:
    {
        returnValue = F("Mittersteigweg");
        break;
    }
    case 222730:
    {
        returnValue = F("Mitterstr.");
        break;
    }
    case 222731:
    {
        returnValue = F("Mitterstraßweg");
        break;
    }
    case 222732:
    {
        returnValue = F("Mitterteicher Str.");
        break;
    }
    case 222733:
    {
        returnValue = F("Mittertorstr.");
        break;
    }
    case 222734:
    {
        returnValue = F("Mitterweg");
        break;
    }
    case 222735:
    {
        returnValue = F("Mitterweg-Geräumt");
        break;
    }
    case 222736:
    {
        returnValue = F("Mitterwegen");
        break;
    }
    case 222737:
    {
        returnValue = F("Mitterwegstr.");
        break;
    }
    case 222738:
    {
        returnValue = F("Mitterweidach");
        break;
    }
    case 222739:
    {
        returnValue = F("Mitterzellweg");
        break;
    }
    case 222740:
    {
        returnValue = F("Mitteräcker");
        break;
    }
    case 222741:
    {
        returnValue = F("Mitterösch");
        break;
    }
    case 222742:
    {
        returnValue = F("Mittestr.");
        break;
    }
    case 222743:
    {
        returnValue = F("Mitteweg");
        break;
    }
    case 222744:
    {
        returnValue = F("Mittfeldredder");
        break;
    }
    case 222745:
    {
        returnValue = F("Mitthoffstr.");
        break;
    }
    case 222746:
    {
        returnValue = F("Mittishauser Str.");
        break;
    }
    case 222747:
    {
        returnValue = F("Mittl. Bickelhausenweg");
        break;
    }
    case 222748:
    {
        returnValue = F("Mittl. Griesklingenweg");
        break;
    }
    case 222749:
    {
        returnValue = F("Mittl. Steckhofweg");
        break;
    }
    case 222750:
    {
        returnValue = F("Mittl. Stockertweg");
        break;
    }
    case 222751:
    {
        returnValue = F("Mittl. Triebweg");
        break;
    }
    case 222752:
    {
        returnValue = F("Mittl. Winterhohlenweg");
        break;
    }
    case 222753:
    {
        returnValue = F("Mittl.-Bodenweg");
        break;
    }
    case 222754:
    {
        returnValue = F("Mittlau");
        break;
    }
    case 222755:
    {
        returnValue = F("Mittlauer Weg");
        break;
    }
    case 222756:
    {
        returnValue = F("Mittlemattweg");
        break;
    }
    case 222757:
    {
        returnValue = F("Mittler Eckfeld");
        break;
    }
    case 222758:
    {
        returnValue = F("Mittlere Angelgasse");
        break;
    }
    case 222759:
    {
        returnValue = F("Mittlere Angerstr.");
        break;
    }
    case 222760:
    {
        returnValue = F("Mittlere Au");
        break;
    }
    case 222761:
    {
        returnValue = F("Mittlere Aubergstr.");
        break;
    }
    case 222762:
    {
        returnValue = F("Mittlere Aue");
        break;
    }
    case 222763:
    {
        returnValue = F("Mittlere Auen");
        break;
    }
    case 222764:
    {
        returnValue = F("Mittlere Augartenstr.");
        break;
    }
    case 222765:
    {
        returnValue = F("Mittlere Bachgasse");
        break;
    }
    case 222766:
    {
        returnValue = F("Mittlere Bachstr.");
        break;
    }
    case 222767:
    {
        returnValue = F("Mittlere Badgasse");
        break;
    }
    case 222768:
    {
        returnValue = F("Mittlere Bahn");
        break;
    }
    case 222769:
    {
        returnValue = F("Mittlere Bennstr.");
        break;
    }
    case 222770:
    {
        returnValue = F("Mittlere Berggasse");
        break;
    }
    case 222771:
    {
        returnValue = F("Mittlere Berghofstr.");
        break;
    }
    case 222772:
    {
        returnValue = F("Mittlere Bergstr.");
        break;
    }
    case 222773:
    {
        returnValue = F("Mittlere Beutau");
        break;
    }
    case 222774:
    {
        returnValue = F("Mittlere Bildgasse");
        break;
    }
    case 222775:
    {
        returnValue = F("Mittlere Bleiche");
        break;
    }
    case 222776:
    {
        returnValue = F("Mittlere Blenz");
        break;
    }
    case 222777:
    {
        returnValue = F("Mittlere Bornholzstr.");
        break;
    }
    case 222778:
    {
        returnValue = F("Mittlere Boxgasse");
        break;
    }
    case 222779:
    {
        returnValue = F("Mittlere Breede");
        break;
    }
    case 222780:
    {
        returnValue = F("Mittlere Breite");
        break;
    }
    case 222781:
    {
        returnValue = F("Mittlere Brücke");
        break;
    }
    case 222782:
    {
        returnValue = F("Mittlere Burg");
        break;
    }
    case 222783:
    {
        returnValue = F("Mittlere Burghalde");
        break;
    }
    case 222784:
    {
        returnValue = F("Mittlere Dickne");
        break;
    }
    case 222785:
    {
        returnValue = F("Mittlere Dorfgasse");
        break;
    }
    case 222786:
    {
        returnValue = F("Mittlere Dorfstr.");
        break;
    }
    case 222787:
    {
        returnValue = F("Mittlere Ebene Weg");
        break;
    }
    case 222788:
    {
        returnValue = F("Mittlere Ebenhalde");
        break;
    }
    case 222789:
    {
        returnValue = F("Mittlere Eckenbergstr.");
        break;
    }
    case 222790:
    {
        returnValue = F("Mittlere Eichehalde");
        break;
    }
    case 222791:
    {
        returnValue = F("Mittlere Eichen");
        break;
    }
    case 222792:
    {
        returnValue = F("Mittlere Feldstr.");
        break;
    }
    case 222793:
    {
        returnValue = F("Mittlere Fischäckergasse");
        break;
    }
    case 222794:
    {
        returnValue = F("Mittlere Flur");
        break;
    }
    case 222795:
    {
        returnValue = F("Mittlere Gass");
        break;
    }
    case 222796:
    {
        returnValue = F("Mittlere Gasse");
        break;
    }
    case 222797:
    {
        returnValue = F("Mittlere Gehrnstr.");
        break;
    }
    case 222798:
    {
        returnValue = F("Mittlere Gemeinde");
        break;
    }
    case 222799:
    {
        returnValue = F("Mittlere Gerbergasse");
        break;
    }
    case 222800:
    {
        returnValue = F("Mittlere Greut");
        break;
    }
    case 222801:
    {
        returnValue = F("Mittlere Gräbengasse");
        break;
    }
    case 222802:
    {
        returnValue = F("Mittlere Haardtstr.");
        break;
    }
    case 222803:
    {
        returnValue = F("Mittlere Hangstr.");
        break;
    }
    case 222804:
    {
        returnValue = F("Mittlere Hasengasse");
        break;
    }
    case 222805:
    {
        returnValue = F("Mittlere Hauptschneise");
        break;
    }
    case 222806:
    {
        returnValue = F("Mittlere Hauptstr.");
        break;
    }
    case 222807:
    {
        returnValue = F("Mittlere Heerbergstr.");
        break;
    }
    case 222808:
    {
        returnValue = F("Mittlere Heide");
        break;
    }
    case 222809:
    {
        returnValue = F("Mittlere Hochstr.");
        break;
    }
    case 222810:
    {
        returnValue = F("Mittlere Hofgasse");
        break;
    }
    case 222811:
    {
        returnValue = F("Mittlere Holdergasse");
        break;
    }
    case 222812:
    {
        returnValue = F("Mittlere Holzbergstr.");
        break;
    }
    case 222813:
    {
        returnValue = F("Mittlere Hornbergstr.");
        break;
    }
    case 222814:
    {
        returnValue = F("Mittlere Hägenisbuschweg");
        break;
    }
    case 222815:
    {
        returnValue = F("Mittlere Johannisbergstr.");
        break;
    }
    case 222816:
    {
        returnValue = F("Mittlere Karlstr.");
        break;
    }
    case 222817:
    {
        returnValue = F("Mittlere Keltergasse");
        break;
    }
    case 222818:
    {
        returnValue = F("Mittlere Kirchenhalde");
        break;
    }
    case 222819:
    {
        returnValue = F("Mittlere Kirchgasse");
        break;
    }
    case 222820:
    {
        returnValue = F("Mittlere Klinge");
        break;
    }
    case 222821:
    {
        returnValue = F("Mittlere Kohlenstr.");
        break;
    }
    case 222822:
    {
        returnValue = F("Mittlere Kordel");
        break;
    }
    case 222823:
    {
        returnValue = F("Mittlere Kreuzlinie");
        break;
    }
    case 222824:
    {
        returnValue = F("Mittlere Lange Schläge");
        break;
    }
    case 222825:
    {
        returnValue = F("Mittlere Laugasse");
        break;
    }
    case 222826:
    {
        returnValue = F("Mittlere Letten");
        break;
    }
    case 222827:
    {
        returnValue = F("Mittlere Maingasse");
        break;
    }
    case 222828:
    {
        returnValue = F("Mittlere Manggasse");
        break;
    }
    case 222829:
    {
        returnValue = F("Mittlere Mark");
        break;
    }
    case 222830:
    {
        returnValue = F("Mittlere Marktgasse");
        break;
    }
    case 222831:
    {
        returnValue = F("Mittlere Marktstaße");
        break;
    }
    case 222832:
    {
        returnValue = F("Mittlere Matten");
        break;
    }
    case 222833:
    {
        returnValue = F("Mittlere Mauergasse");
        break;
    }
    case 222834:
    {
        returnValue = F("Mittlere Mauerstr.");
        break;
    }
    case 222835:
    {
        returnValue = F("Mittlere Mühle");
        break;
    }
    case 222836:
    {
        returnValue = F("Mittlere Mühlstr.");
        break;
    }
    case 222837:
    {
        returnValue = F("Mittlere Oberaustr.");
        break;
    }
    case 222838:
    {
        returnValue = F("Mittlere Ortsstr.");
        break;
    }
    case 222839:
    {
        returnValue = F("Mittlere Pforte");
        break;
    }
    case 222840:
    {
        returnValue = F("Mittlere Planie");
        break;
    }
    case 222841:
    {
        returnValue = F("Mittlere Prielstr.");
        break;
    }
    case 222842:
    {
        returnValue = F("Mittlere Ramseestr.");
        break;
    }
    case 222843:
    {
        returnValue = F("Mittlere Redersgasse");
        break;
    }
    case 222844:
    {
        returnValue = F("Mittlere Reihe");
        break;
    }
    case 222845:
    {
        returnValue = F("Mittlere Reute");
        break;
    }
    case 222846:
    {
        returnValue = F("Mittlere Rheinstr.");
        break;
    }
    case 222847:
    {
        returnValue = F("Mittlere Richtstatt");
        break;
    }
    case 222848:
    {
        returnValue = F("Mittlere Ringstr.");
        break;
    }
    case 222849:
    {
        returnValue = F("Mittlere Röde");
        break;
    }
    case 222850:
    {
        returnValue = F("Mittlere Röderweg");
        break;
    }
    case 222851:
    {
        returnValue = F("Mittlere Sackgasse");
        break;
    }
    case 222852:
    {
        returnValue = F("Mittlere Schafstr.");
        break;
    }
    case 222853:
    {
        returnValue = F("Mittlere Schneise");
        break;
    }
    case 222854:
    {
        returnValue = F("Mittlere Schrot");
        break;
    }
    case 222855:
    {
        returnValue = F("Mittlere Schulstr.");
        break;
    }
    case 222856:
    {
        returnValue = F("Mittlere Schweizergasse");
        break;
    }
    case 222857:
    {
        returnValue = F("Mittlere Seelgasse");
        break;
    }
    case 222858:
    {
        returnValue = F("Mittlere Siedlung");
        break;
    }
    case 222859:
    {
        returnValue = F("Mittlere Siedlungsstr.");
        break;
    }
    case 222860:
    {
        returnValue = F("Mittlere Sonnenhalde");
        break;
    }
    case 222861:
    {
        returnValue = F("Mittlere Spielershalde");
        break;
    }
    case 222862:
    {
        returnValue = F("Mittlere Spitalgasse");
        break;
    }
    case 222863:
    {
        returnValue = F("Mittlere Steige");
        break;
    }
    case 222864:
    {
        returnValue = F("Mittlere Stelle");
        break;
    }
    case 222865:
    {
        returnValue = F("Mittlere Str.");
        break;
    }
    case 222866:
    {
        returnValue = F("Mittlere Struth");
        break;
    }
    case 222867:
    {
        returnValue = F("Mittlere Stämmig");
        break;
    }
    case 222868:
    {
        returnValue = F("Mittlere Stöckstr.");
        break;
    }
    case 222869:
    {
        returnValue = F("Mittlere Sägbergweg");
        break;
    }
    case 222870:
    {
        returnValue = F("Mittlere Talstr.");
        break;
    }
    case 222871:
    {
        returnValue = F("Mittlere Teichgasse");
        break;
    }
    case 222872:
    {
        returnValue = F("Mittlere Terrasse");
        break;
    }
    case 222873:
    {
        returnValue = F("Mittlere Torstr.");
        break;
    }
    case 222874:
    {
        returnValue = F("Mittlere Trift");
        break;
    }
    case 222875:
    {
        returnValue = F("Mittlere Uferstr.");
        break;
    }
    case 222876:
    {
        returnValue = F("Mittlere Volperstr.");
        break;
    }
    case 222877:
    {
        returnValue = F("Mittlere Waldparkstr.");
        break;
    }
    case 222878:
    {
        returnValue = F("Mittlere Wanne");
        break;
    }
    case 222879:
    {
        returnValue = F("Mittlere Weinbergstr.");
        break;
    }
    case 222880:
    {
        returnValue = F("Mittlere Weinleite");
        break;
    }
    case 222881:
    {
        returnValue = F("Mittlere Werten");
        break;
    }
    case 222882:
    {
        returnValue = F("Mittlere Wiese");
        break;
    }
    case 222883:
    {
        returnValue = F("Mittlere Zwingergasse");
        break;
    }
    case 222884:
    {
        returnValue = F("Mittlere-Motsch-Str.");
        break;
    }
    case 222885:
    {
        returnValue = F("Mittlere-Trift-Str.");
        break;
    }
    case 222886:
    {
        returnValue = F("Mittlereinzel");
        break;
    }
    case 222887:
    {
        returnValue = F("Mittlerer Altweg");
        break;
    }
    case 222888:
    {
        returnValue = F("Mittlerer Anger");
        break;
    }
    case 222889:
    {
        returnValue = F("Mittlerer Angerweg");
        break;
    }
    case 222890:
    {
        returnValue = F("Mittlerer Apfelskopfweg");
        break;
    }
    case 222891:
    {
        returnValue = F("Mittlerer Auweg");
        break;
    }
    case 222892:
    {
        returnValue = F("Mittlerer Axtlohweg");
        break;
    }
    case 222893:
    {
        returnValue = F("Mittlerer Bachhangweg");
        break;
    }
    case 222894:
    {
        returnValue = F("Mittlerer Bachseitenweg");
        break;
    }
    case 222895:
    {
        returnValue = F("Mittlerer Bachwiesenweg");
        break;
    }
    case 222896:
    {
        returnValue = F("Mittlerer Bahnweg");
        break;
    }
    case 222897:
    {
        returnValue = F("Mittlerer Baschgweg");
        break;
    }
    case 222898:
    {
        returnValue = F("Mittlerer Berggrabenweg");
        break;
    }
    case 222899:
    {
        returnValue = F("Mittlerer Bergweg");
        break;
    }
    case 222900:
    {
        returnValue = F("Mittlerer Birkenwaldweg");
        break;
    }
    case 222901:
    {
        returnValue = F("Mittlerer Birkenweg");
        break;
    }
    case 222902:
    {
        returnValue = F("Mittlerer Bischofsberger Weg");
        break;
    }
    case 222903:
    {
        returnValue = F("Mittlerer Blosenbergweg");
        break;
    }
    case 222904:
    {
        returnValue = F("Mittlerer Bogen");
        break;
    }
    case 222905:
    {
        returnValue = F("Mittlerer Bomberg");
        break;
    }
    case 222906:
    {
        returnValue = F("Mittlerer Bornsweg");
        break;
    }
    case 222907:
    {
        returnValue = F("Mittlerer Botenweg");
        break;
    }
    case 222908:
    {
        returnValue = F("Mittlerer Brand");
        break;
    }
    case 222909:
    {
        returnValue = F("Mittlerer Brandweg");
        break;
    }
    case 222910:
    {
        returnValue = F("Mittlerer Breitendobelweg");
        break;
    }
    case 222911:
    {
        returnValue = F("Mittlerer Breitstockweg");
        break;
    }
    case 222912:
    {
        returnValue = F("Mittlerer Brettweg");
        break;
    }
    case 222913:
    {
        returnValue = F("Mittlerer Brunnenbergweg");
        break;
    }
    case 222914:
    {
        returnValue = F("Mittlerer Brunnenteich");
        break;
    }
    case 222915:
    {
        returnValue = F("Mittlerer Buchbergweg");
        break;
    }
    case 222916:
    {
        returnValue = F("Mittlerer Buchhelleweg");
        break;
    }
    case 222917:
    {
        returnValue = F("Mittlerer Buchholzweg");
        break;
    }
    case 222918:
    {
        returnValue = F("Mittlerer Buchwaldweg");
        break;
    }
    case 222919:
    {
        returnValue = F("Mittlerer Buchweg");
        break;
    }
    case 222920:
    {
        returnValue = F("Mittlerer Bärlach");
        break;
    }
    case 222921:
    {
        returnValue = F("Mittlerer Büchigweg");
        break;
    }
    case 222922:
    {
        returnValue = F("Mittlerer Bühl");
        break;
    }
    case 222923:
    {
        returnValue = F("Mittlerer Dachsbergweg");
        break;
    }
    case 222924:
    {
        returnValue = F("Mittlerer Dallenbergweg");
        break;
    }
    case 222925:
    {
        returnValue = F("Mittlerer Dammbergweg");
        break;
    }
    case 222926:
    {
        returnValue = F("Mittlerer Daxstein");
        break;
    }
    case 222927:
    {
        returnValue = F("Mittlerer Dorfweg");
        break;
    }
    case 222928:
    {
        returnValue = F("Mittlerer Drachenhöhlenweg");
        break;
    }
    case 222929:
    {
        returnValue = F("Mittlerer Drehscheibenweg");
        break;
    }
    case 222930:
    {
        returnValue = F("Mittlerer Dreierweg");
        break;
    }
    case 222931:
    {
        returnValue = F("Mittlerer Dunkeleweg");
        break;
    }
    case 222932:
    {
        returnValue = F("Mittlerer Därmleinsweg");
        break;
    }
    case 222933:
    {
        returnValue = F("Mittlerer Ehrenberg");
        break;
    }
    case 222934:
    {
        returnValue = F("Mittlerer Ehwaldweg");
        break;
    }
    case 222935:
    {
        returnValue = F("Mittlerer Eichenbergsweg");
        break;
    }
    case 222936:
    {
        returnValue = F("Mittlerer Eichköpfleweg");
        break;
    }
    case 222937:
    {
        returnValue = F("Mittlerer Eichwaldweg");
        break;
    }
    case 222938:
    {
        returnValue = F("Mittlerer Engelsbuckelweg");
        break;
    }
    case 222939:
    {
        returnValue = F("Mittlerer Erlachweg");
        break;
    }
    case 222940:
    {
        returnValue = F("Mittlerer Erzbuck Weg");
        break;
    }
    case 222941:
    {
        returnValue = F("Mittlerer Esch");
        break;
    }
    case 222942:
    {
        returnValue = F("Mittlerer Eschachweg");
        break;
    }
    case 222943:
    {
        returnValue = F("Mittlerer Esperweg");
        break;
    }
    case 222944:
    {
        returnValue = F("Mittlerer Eßlichweg");
        break;
    }
    case 222945:
    {
        returnValue = F("Mittlerer Fenschenbergweg");
        break;
    }
    case 222946:
    {
        returnValue = F("Mittlerer Finstergrundweg");
        break;
    }
    case 222947:
    {
        returnValue = F("Mittlerer Finsterlochweg");
        break;
    }
    case 222948:
    {
        returnValue = F("Mittlerer Flechter Weg");
        break;
    }
    case 222949:
    {
        returnValue = F("Mittlerer Flurweg");
        break;
    }
    case 222950:
    {
        returnValue = F("Mittlerer Flügel");
        break;
    }
    case 222951:
    {
        returnValue = F("Mittlerer Föhrbergweg");
        break;
    }
    case 222952:
    {
        returnValue = F("Mittlerer Gaisberg");
        break;
    }
    case 222953:
    {
        returnValue = F("Mittlerer Gaisbergweg");
        break;
    }
    case 222954:
    {
        returnValue = F("Mittlerer Gaishaldenweg");
        break;
    }
    case 222955:
    {
        returnValue = F("Mittlerer Galgenberger Weg");
        break;
    }
    case 222956:
    {
        returnValue = F("Mittlerer Gehrenweg");
        break;
    }
    case 222957:
    {
        returnValue = F("Mittlerer Geisberg");
        break;
    }
    case 222958:
    {
        returnValue = F("Mittlerer Geisbergweg");
        break;
    }
    case 222959:
    {
        returnValue = F("Mittlerer Gewannweg");
        break;
    }
    case 222960:
    {
        returnValue = F("Mittlerer Giesen-Weg");
        break;
    }
    case 222961:
    {
        returnValue = F("Mittlerer Graben");
        break;
    }
    case 222962:
    {
        returnValue = F("Mittlerer Grabenholzweg");
        break;
    }
    case 222963:
    {
        returnValue = F("Mittlerer Grasweg");
        break;
    }
    case 222964:
    {
        returnValue = F("Mittlerer Grimms");
        break;
    }
    case 222965:
    {
        returnValue = F("Mittlerer Gruberweg");
        break;
    }
    case 222966:
    {
        returnValue = F("Mittlerer Grund");
        break;
    }
    case 222967:
    {
        returnValue = F("Mittlerer Grundweg");
        break;
    }
    case 222968:
    {
        returnValue = F("Mittlerer Guckkastenweg");
        break;
    }
    case 222969:
    {
        returnValue = F("Mittlerer Gähhaldeweg");
        break;
    }
    case 222970:
    {
        returnValue = F("Mittlerer Hainberg");
        break;
    }
    case 222971:
    {
        returnValue = F("Mittlerer Hainbergweg");
        break;
    }
    case 222972:
    {
        returnValue = F("Mittlerer Hainweg");
        break;
    }
    case 222973:
    {
        returnValue = F("Mittlerer Haldenweg");
        break;
    }
    case 222974:
    {
        returnValue = F("Mittlerer Hang");
        break;
    }
    case 222975:
    {
        returnValue = F("Mittlerer Hangertweg");
        break;
    }
    case 222976:
    {
        returnValue = F("Mittlerer Hangweg");
        break;
    }
    case 222977:
    {
        returnValue = F("Mittlerer Hardweg");
        break;
    }
    case 222978:
    {
        returnValue = F("Mittlerer Hartheweg");
        break;
    }
    case 222979:
    {
        returnValue = F("Mittlerer Hasenknuck");
        break;
    }
    case 222980:
    {
        returnValue = F("Mittlerer Haubenbergweg");
        break;
    }
    case 222981:
    {
        returnValue = F("Mittlerer Hauptweg");
        break;
    }
    case 222982:
    {
        returnValue = F("Mittlerer Hauserweg");
        break;
    }
    case 222983:
    {
        returnValue = F("Mittlerer Hauswang");
        break;
    }
    case 222984:
    {
        returnValue = F("Mittlerer Hauweg");
        break;
    }
    case 222985:
    {
        returnValue = F("Mittlerer Heddesbacher Kopfweg");
        break;
    }
    case 222986:
    {
        returnValue = F("Mittlerer Heegweg");
        break;
    }
    case 222987:
    {
        returnValue = F("Mittlerer Heinzbergweg");
        break;
    }
    case 222988:
    {
        returnValue = F("Mittlerer Herrlesbergweg");
        break;
    }
    case 222989:
    {
        returnValue = F("Mittlerer Herzogweg");
        break;
    }
    case 222990:
    {
        returnValue = F("Mittlerer Heukopfweg");
        break;
    }
    case 222991:
    {
        returnValue = F("Mittlerer Heuweg");
        break;
    }
    case 222992:
    {
        returnValue = F("Mittlerer Heßmannsgrundweg");
        break;
    }
    case 222993:
    {
        returnValue = F("Mittlerer Hinterbergweg");
        break;
    }
    case 222994:
    {
        returnValue = F("Mittlerer Hintermattweg");
        break;
    }
    case 222995:
    {
        returnValue = F("Mittlerer Hochwald");
        break;
    }
    case 222996:
    {
        returnValue = F("Mittlerer Hofhauweg");
        break;
    }
    case 222997:
    {
        returnValue = F("Mittlerer Hohwaldweg");
        break;
    }
    case 222998:
    {
        returnValue = F("Mittlerer Holzbergweg");
        break;
    }
    case 222999:
    {
        returnValue = F("Mittlerer Horbachweg");
        break;
    }
    case 223000:
    {
        returnValue = F("Mittlerer Hornweg");
        break;
    }
    case 223001:
    {
        returnValue = F("Mittlerer Hubweg");
        break;
    }
    case 223002:
    {
        returnValue = F("Mittlerer Hulbenweg");
        break;
    }
    case 223003:
    {
        returnValue = F("Mittlerer Häldenweg");
        break;
    }
    case 223004:
    {
        returnValue = F("Mittlerer Häuserweg");
        break;
    }
    case 223005:
    {
        returnValue = F("Mittlerer Höhenweg");
        break;
    }
    case 223006:
    {
        returnValue = F("Mittlerer Höhweg");
        break;
    }
    case 223007:
    {
        returnValue = F("Mittlerer Hühnerbergweg");
        break;
    }
    case 223008:
    {
        returnValue = F("Mittlerer Illsbergweg");
        break;
    }
    case 223009:
    {
        returnValue = F("Mittlerer Jagdhausweg");
        break;
    }
    case 223010:
    {
        returnValue = F("Mittlerer Josumsattweg");
        break;
    }
    case 223011:
    {
        returnValue = F("Mittlerer Jägerweg");
        break;
    }
    case 223012:
    {
        returnValue = F("Mittlerer Kammweg");
        break;
    }
    case 223013:
    {
        returnValue = F("Mittlerer Kapellenweg");
        break;
    }
    case 223014:
    {
        returnValue = F("Mittlerer Karwiedenweg");
        break;
    }
    case 223015:
    {
        returnValue = F("Mittlerer Katzenlochweg");
        break;
    }
    case 223016:
    {
        returnValue = F("Mittlerer Kaulberg");
        break;
    }
    case 223017:
    {
        returnValue = F("Mittlerer Kelchenweg");
        break;
    }
    case 223018:
    {
        returnValue = F("Mittlerer Kiesweg");
        break;
    }
    case 223019:
    {
        returnValue = F("Mittlerer Kirchacker");
        break;
    }
    case 223020:
    {
        returnValue = F("Mittlerer Kirchweg");
        break;
    }
    case 223021:
    {
        returnValue = F("Mittlerer Kirschbäumlebuck");
        break;
    }
    case 223022:
    {
        returnValue = F("Mittlerer Klebweg");
        break;
    }
    case 223023:
    {
        returnValue = F("Mittlerer Klingenbergweg");
        break;
    }
    case 223024:
    {
        returnValue = F("Mittlerer Klingenweg");
        break;
    }
    case 223025:
    {
        returnValue = F("Mittlerer Klötzbergweg");
        break;
    }
    case 223026:
    {
        returnValue = F("Mittlerer Kohlgrubenweg");
        break;
    }
    case 223027:
    {
        returnValue = F("Mittlerer Kohlwaldweg");
        break;
    }
    case 223028:
    {
        returnValue = F("Mittlerer Konnenbergweg");
        break;
    }
    case 223029:
    {
        returnValue = F("Mittlerer Kostbachweg");
        break;
    }
    case 223030:
    {
        returnValue = F("Mittlerer Kreuzweg");
        break;
    }
    case 223031:
    {
        returnValue = F("Mittlerer Kuhbachweg");
        break;
    }
    case 223032:
    {
        returnValue = F("Mittlerer Kulturweg");
        break;
    }
    case 223033:
    {
        returnValue = F("Mittlerer Kurpark");
        break;
    }
    case 223034:
    {
        returnValue = F("Mittlerer Königsberg");
        break;
    }
    case 223035:
    {
        returnValue = F("Mittlerer Köppel");
        break;
    }
    case 223036:
    {
        returnValue = F("Mittlerer Kühlweg");
        break;
    }
    case 223037:
    {
        returnValue = F("Mittlerer Küppelweg");
        break;
    }
    case 223038:
    {
        returnValue = F("Mittlerer Laileweg");
        break;
    }
    case 223039:
    {
        returnValue = F("Mittlerer Langackerweg");
        break;
    }
    case 223040:
    {
        returnValue = F("Mittlerer Lechfeldweg");
        break;
    }
    case 223041:
    {
        returnValue = F("Mittlerer Leideckweg");
        break;
    }
    case 223042:
    {
        returnValue = F("Mittlerer Leimengrubenweg");
        break;
    }
    case 223043:
    {
        returnValue = F("Mittlerer Lettenweg");
        break;
    }
    case 223044:
    {
        returnValue = F("Mittlerer Linngruber Weg");
        break;
    }
    case 223045:
    {
        returnValue = F("Mittlerer Lockersbergweg");
        break;
    }
    case 223046:
    {
        returnValue = F("Mittlerer Lohbuckelweg");
        break;
    }
    case 223047:
    {
        returnValue = F("Mittlerer Lohebeneweg");
        break;
    }
    case 223048:
    {
        returnValue = F("Mittlerer Lohweg");
        break;
    }
    case 223049:
    {
        returnValue = F("Mittlerer Lus");
        break;
    }
    case 223050:
    {
        returnValue = F("Mittlerer Löhleweg");
        break;
    }
    case 223051:
    {
        returnValue = F("Mittlerer Maienbergweg");
        break;
    }
    case 223052:
    {
        returnValue = F("Mittlerer Maienbühlweg");
        break;
    }
    case 223053:
    {
        returnValue = F("Mittlerer Mainzer Weg");
        break;
    }
    case 223054:
    {
        returnValue = F("Mittlerer Marchbrunnweg");
        break;
    }
    case 223055:
    {
        returnValue = F("Mittlerer Markt");
        break;
    }
    case 223056:
    {
        returnValue = F("Mittlerer Mittelhiebweg");
        break;
    }
    case 223057:
    {
        returnValue = F("Mittlerer Moosweg");
        break;
    }
    case 223058:
    {
        returnValue = F("Mittlerer Mühlwald");
        break;
    }
    case 223059:
    {
        returnValue = F("Mittlerer Mühlwaldweg");
        break;
    }
    case 223060:
    {
        returnValue = F("Mittlerer Mühlweg");
        break;
    }
    case 223061:
    {
        returnValue = F("Mittlerer Mühlweg (nicht mehr passierbar)");
        break;
    }
    case 223062:
    {
        returnValue = F("Mittlerer Nebenweg");
        break;
    }
    case 223063:
    {
        returnValue = F("Mittlerer Neubrunnenweg");
        break;
    }
    case 223064:
    {
        returnValue = F("Mittlerer Neuer Weg");
        break;
    }
    case 223065:
    {
        returnValue = F("Mittlerer Niederbergweg");
        break;
    }
    case 223066:
    {
        returnValue = F("Mittlerer Nistlerweg");
        break;
    }
    case 223067:
    {
        returnValue = F("Mittlerer Nonnenbrunnenweg");
        break;
    }
    case 223068:
    {
        returnValue = F("Mittlerer Ottenbronner Hangweg");
        break;
    }
    case 223069:
    {
        returnValue = F("Mittlerer Ottengrubenweg");
        break;
    }
    case 223070:
    {
        returnValue = F("Mittlerer Palmerweg");
        break;
    }
    case 223071:
    {
        returnValue = F("Mittlerer Pfaffensteinweg");
        break;
    }
    case 223072:
    {
        returnValue = F("Mittlerer Pfarracker");
        break;
    }
    case 223073:
    {
        returnValue = F("Mittlerer Pfitzhof");
        break;
    }
    case 223074:
    {
        returnValue = F("Mittlerer Pfülbenweg");
        break;
    }
    case 223075:
    {
        returnValue = F("Mittlerer Platzer Weg");
        break;
    }
    case 223076:
    {
        returnValue = F("Mittlerer Plätzereckweg");
        break;
    }
    case 223077:
    {
        returnValue = F("Mittlerer Pochweg");
        break;
    }
    case 223078:
    {
        returnValue = F("Mittlerer Pürschweg");
        break;
    }
    case 223079:
    {
        returnValue = F("Mittlerer Quellberg");
        break;
    }
    case 223080:
    {
        returnValue = F("Mittlerer Querweg");
        break;
    }
    case 223081:
    {
        returnValue = F("Mittlerer Rain");
        break;
    }
    case 223082:
    {
        returnValue = F("Mittlerer Rainbrunnen");
        break;
    }
    case 223083:
    {
        returnValue = F("Mittlerer Rainweg");
        break;
    }
    case 223084:
    {
        returnValue = F("Mittlerer Ratzschbachweg");
        break;
    }
    case 223085:
    {
        returnValue = F("Mittlerer Reisberg");
        break;
    }
    case 223086:
    {
        returnValue = F("Mittlerer Rennbrunnenweg");
        break;
    }
    case 223087:
    {
        returnValue = F("Mittlerer Rennweg");
        break;
    }
    case 223088:
    {
        returnValue = F("Mittlerer Ring");
        break;
    }
    case 223089:
    {
        returnValue = F("Mittlerer Rixweg");
        break;
    }
    case 223090:
    {
        returnValue = F("Mittlerer Rohrbergweg");
        break;
    }
    case 223091:
    {
        returnValue = F("Mittlerer Rohrwaldweg");
        break;
    }
    case 223092:
    {
        returnValue = F("Mittlerer Rosenbergweg");
        break;
    }
    case 223093:
    {
        returnValue = F("Mittlerer Rossbergweg");
        break;
    }
    case 223094:
    {
        returnValue = F("Mittlerer Rossbodenweg");
        break;
    }
    case 223095:
    {
        returnValue = F("Mittlerer Rödlsdellenweg");
        break;
    }
    case 223096:
    {
        returnValue = F("Mittlerer Römerstallweg");
        break;
    }
    case 223097:
    {
        returnValue = F("Mittlerer Rückwaldweg");
        break;
    }
    case 223098:
    {
        returnValue = F("Mittlerer Salltalweg");
        break;
    }
    case 223099:
    {
        returnValue = F("Mittlerer Sandbichelweg");
        break;
    }
    case 223100:
    {
        returnValue = F("Mittlerer Schachbaumweg");
        break;
    }
    case 223101:
    {
        returnValue = F("Mittlerer Schafweg");
        break;
    }
    case 223102:
    {
        returnValue = F("Mittlerer Scheuerlewaldweg");
        break;
    }
    case 223103:
    {
        returnValue = F("Mittlerer Schlangengraben");
        break;
    }
    case 223104:
    {
        returnValue = F("Mittlerer Schleifweg");
        break;
    }
    case 223105:
    {
        returnValue = F("Mittlerer Schlossbergweg");
        break;
    }
    case 223106:
    {
        returnValue = F("Mittlerer Schloßweg");
        break;
    }
    case 223107:
    {
        returnValue = F("Mittlerer Schlößlesweg");
        break;
    }
    case 223108:
    {
        returnValue = F("Mittlerer Schmierofenweg");
        break;
    }
    case 223109:
    {
        returnValue = F("Mittlerer Schnaigbühlweg");
        break;
    }
    case 223110:
    {
        returnValue = F("Mittlerer Schnaithaldenweg");
        break;
    }
    case 223111:
    {
        returnValue = F("Mittlerer Schochenbachweg");
        break;
    }
    case 223112:
    {
        returnValue = F("Mittlerer Schornsteinweg");
        break;
    }
    case 223113:
    {
        returnValue = F("Mittlerer Schupißweg");
        break;
    }
    case 223114:
    {
        returnValue = F("Mittlerer Schönenbergweg");
        break;
    }
    case 223115:
    {
        returnValue = F("Mittlerer Sengelenweg");
        break;
    }
    case 223116:
    {
        returnValue = F("Mittlerer Siedlungsweg");
        break;
    }
    case 223117:
    {
        returnValue = F("Mittlerer Spiesslingweg");
        break;
    }
    case 223118:
    {
        returnValue = F("Mittlerer Spitzwaldweg");
        break;
    }
    case 223119:
    {
        returnValue = F("Mittlerer Stadtweg");
        break;
    }
    case 223120:
    {
        returnValue = F("Mittlerer Stallgrabenweg");
        break;
    }
    case 223121:
    {
        returnValue = F("Mittlerer Steig");
        break;
    }
    case 223122:
    {
        returnValue = F("Mittlerer Steigweg");
        break;
    }
    case 223123:
    {
        returnValue = F("Mittlerer Steinbruchweg");
        break;
    }
    case 223124:
    {
        returnValue = F("Mittlerer Steinenbergweg");
        break;
    }
    case 223125:
    {
        returnValue = F("Mittlerer Studentenhüttenweg");
        break;
    }
    case 223126:
    {
        returnValue = F("Mittlerer Studweg");
        break;
    }
    case 223127:
    {
        returnValue = F("Mittlerer Stuhlwaldweg");
        break;
    }
    case 223128:
    {
        returnValue = F("Mittlerer Sulzschlagweg");
        break;
    }
    case 223129:
    {
        returnValue = F("Mittlerer Talweg");
        break;
    }
    case 223130:
    {
        returnValue = F("Mittlerer Tannenbergweg");
        break;
    }
    case 223131:
    {
        returnValue = F("Mittlerer Tannenwaldweg");
        break;
    }
    case 223132:
    {
        returnValue = F("Mittlerer Tannhaldeweg");
        break;
    }
    case 223133:
    {
        returnValue = F("Mittlerer Teufelsmühlweg");
        break;
    }
    case 223134:
    {
        returnValue = F("Mittlerer Thie");
        break;
    }
    case 223135:
    {
        returnValue = F("Mittlerer Tiergartenbergweg");
        break;
    }
    case 223136:
    {
        returnValue = F("Mittlerer Triebweg");
        break;
    }
    case 223137:
    {
        returnValue = F("Mittlerer Tränkegarten");
        break;
    }
    case 223138:
    {
        returnValue = F("Mittlerer Viehgrundweg");
        break;
    }
    case 223139:
    {
        returnValue = F("Mittlerer Vogelsandweg");
        break;
    }
    case 223140:
    {
        returnValue = F("Mittlerer Vorderwaldweg");
        break;
    }
    case 223141:
    {
        returnValue = F("Mittlerer Waldweg");
        break;
    }
    case 223142:
    {
        returnValue = F("Mittlerer Wasen");
        break;
    }
    case 223143:
    {
        returnValue = F("Mittlerer Wassergang");
        break;
    }
    case 223144:
    {
        returnValue = F("Mittlerer Watzenbach");
        break;
    }
    case 223145:
    {
        returnValue = F("Mittlerer Weg");
        break;
    }
    case 223146:
    {
        returnValue = F("Mittlerer Weichselbergweg");
        break;
    }
    case 223147:
    {
        returnValue = F("Mittlerer Weiler");
        break;
    }
    case 223148:
    {
        returnValue = F("Mittlerer Weinberg");
        break;
    }
    case 223149:
    {
        returnValue = F("Mittlerer Weinbergweg");
        break;
    }
    case 223150:
    {
        returnValue = F("Mittlerer Wemmbergweg");
        break;
    }
    case 223151:
    {
        returnValue = F("Mittlerer Wengertsbergweg");
        break;
    }
    case 223152:
    {
        returnValue = F("Mittlerer Wengertweg");
        break;
    }
    case 223153:
    {
        returnValue = F("Mittlerer Wetschbergweg");
        break;
    }
    case 223154:
    {
        returnValue = F("Mittlerer Wiesenhaldenweg");
        break;
    }
    case 223155:
    {
        returnValue = F("Mittlerer Winkel");
        break;
    }
    case 223156:
    {
        returnValue = F("Mittlerer Winterhaldeweg");
        break;
    }
    case 223157:
    {
        returnValue = F("Mittlerer Winterhelleweg");
        break;
    }
    case 223158:
    {
        returnValue = F("Mittlerer Worthhagen");
        break;
    }
    case 223159:
    {
        returnValue = F("Mittlerer Wüster Weg");
        break;
    }
    case 223160:
    {
        returnValue = F("Mittlerer Zeidlerweg");
        break;
    }
    case 223161:
    {
        returnValue = F("Mittlerer Zwiebelrainweg");
        break;
    }
    case 223162:
    {
        returnValue = F("Mittlerer großer Ackerweg");
        break;
    }
    case 223163:
    {
        returnValue = F("Mittlerer weg");
        break;
    }
    case 223164:
    {
        returnValue = F("Mittlerer Ölbergweg");
        break;
    }
    case 223165:
    {
        returnValue = F("Mittlerer-Fuchsberg-Weg");
        break;
    }
    case 223166:
    {
        returnValue = F("Mittlerer-Hohle-Buche-Weg");
        break;
    }
    case 223167:
    {
        returnValue = F("Mittlerer-Weg");
        break;
    }
    case 223168:
    {
        returnValue = F("Mittlererweg");
        break;
    }
    case 223169:
    {
        returnValue = F("Mittleres Dorf");
        break;
    }
    case 223170:
    {
        returnValue = F("Mittleres Esch");
        break;
    }
    case 223171:
    {
        returnValue = F("Mittleres Feld");
        break;
    }
    case 223172:
    {
        returnValue = F("Mittleres Geräumt");
        break;
    }
    case 223173:
    {
        returnValue = F("Mittleres Gewand");
        break;
    }
    case 223174:
    {
        returnValue = F("Mittleres Gewend");
        break;
    }
    case 223175:
    {
        returnValue = F("Mittleres Gässle");
        break;
    }
    case 223176:
    {
        returnValue = F("Mittleres Gäßle");
        break;
    }
    case 223177:
    {
        returnValue = F("Mittleres Hasental");
        break;
    }
    case 223178:
    {
        returnValue = F("Mittleres Holz");
        break;
    }
    case 223179:
    {
        returnValue = F("Mittleres Höfle");
        break;
    }
    case 223180:
    {
        returnValue = F("Mittleres Kirchgäßlein");
        break;
    }
    case 223181:
    {
        returnValue = F("Mittleres Korngäßchen");
        break;
    }
    case 223182:
    {
        returnValue = F("Mittleres Meierfeld");
        break;
    }
    case 223183:
    {
        returnValue = F("Mittlergrünweg");
        break;
    }
    case 223184:
    {
        returnValue = F("Mittlerholzweg");
        break;
    }
    case 223185:
    {
        returnValue = F("Mittlernhammer");
        break;
    }
    case 223186:
    {
        returnValue = F("Mittlerpfadweg");
        break;
    }
    case 223187:
    {
        returnValue = F("Mittlerweg");
        break;
    }
    case 223188:
    {
        returnValue = F("Mittletahlstr.");
        break;
    }
    case 223189:
    {
        returnValue = F("Mittlethalstr.");
        break;
    }
    case 223190:
    {
        returnValue = F("Mittlinger Weg");
        break;
    }
    case 223191:
    {
        returnValue = F("Mittlingstr.");
        break;
    }
    case 223192:
    {
        returnValue = F("Mittlishardt");
        break;
    }
    case 223193:
    {
        returnValue = F("Mittnach");
        break;
    }
    case 223194:
    {
        returnValue = F("Mittnachtstr.");
        break;
    }
    case 223195:
    {
        returnValue = F("Mittoft");
        break;
    }
    case 223196:
    {
        returnValue = F("Mittvoertelbergweg");
        break;
    }
    case 223197:
    {
        returnValue = F("Mittweg");
        break;
    }
    case 223198:
    {
        returnValue = F("Mittweidaer Str.");
        break;
    }
    case 223199:
    {
        returnValue = F("Mittweilerhof");
        break;
    }
    case 223200:
    {
        returnValue = F("Mittwochsträßle");
        break;
    }
    case 223201:
    {
        returnValue = F("Mitwitzer Str.");
        break;
    }
    case 223202:
    {
        returnValue = F("Mitzelwerderstr.");
        break;
    }
    case 223203:
    {
        returnValue = F("Mitzenbroich");
        break;
    }
    case 223204:
    {
        returnValue = F("Mius-Kiefer-Str.");
        break;
    }
    case 223205:
    {
        returnValue = F("Miwepa");
        break;
    }
    case 223206:
    {
        returnValue = F("Mixdorfer Landstr.");
        break;
    }
    case 223207:
    {
        returnValue = F("Mixdorfer Str.");
        break;
    }
    case 223208:
    {
        returnValue = F("Mixed Pickels (jeweils 1. Sommerferienwoche)");
        break;
    }
    case 223209:
    {
        returnValue = F("Mixsieper Str.");
        break;
    }
    case 223210:
    {
        returnValue = F("Mizlerstr.");
        break;
    }
    case 223211:
    {
        returnValue = F("Mißbergstr.");
        break;
    }
    case 223212:
    {
        returnValue = F("Mißbrookredder");
        break;
    }
    case 223213:
    {
        returnValue = F("Mißgunst");
        break;
    }
    case 223214:
    {
        returnValue = F("Mißgunster Weg");
        break;
    }
    case 223215:
    {
        returnValue = F("Mißgunsterweg");
        break;
    }
    case 223216:
    {
        returnValue = F("Mißkampsweg");
        break;
    }
    case 223217:
    {
        returnValue = F("Mißlareuth");
        break;
    }
    case 223218:
    {
        returnValue = F("Mißlareuther Str.");
        break;
    }
    case 223219:
    {
        returnValue = F("Mißlbeckstr.");
        break;
    }
    case 223220:
    {
        returnValue = F("Mißlesgrundweg");
        break;
    }
    case 223221:
    {
        returnValue = F("Mißweg");
        break;
    }
    case 223222:
    {
        returnValue = F("Mjölbystr.");
        break;
    }
    case 223223:
    {
        returnValue = F("Mlada-Boleslav-Weg");
        break;
    }
    case 223224:
    {
        returnValue = F("Mlada-Boleslaver-Str.");
        break;
    }
    case 223225:
    {
        returnValue = F("Moabiter Str.");
        break;
    }
    case 223226:
    {
        returnValue = F("Moalenkamp");
        break;
    }
    case 223227:
    {
        returnValue = F("Moar-Anger");
        break;
    }
    case 223228:
    {
        returnValue = F("Moaranger");
        break;
    }
    case 223229:
    {
        returnValue = F("Moargasse");
        break;
    }
    case 223230:
    {
        returnValue = F("Moarhof");
        break;
    }
    case 223231:
    {
        returnValue = F("Moarsiedlung");
        break;
    }
    case 223232:
    {
        returnValue = F("Moarstr.");
        break;
    }
    case 223233:
    {
        returnValue = F("Moarweg");
        break;
    }
    case 223234:
    {
        returnValue = F("Moatdiek");
        break;
    }
    case 223235:
    {
        returnValue = F("Moate");
        break;
    }
    case 223236:
    {
        returnValue = F("Mobendorfer Str.");
        break;
    }
    case 223237:
    {
        returnValue = F("Mobil-Oil-Str.");
        break;
    }
    case 223238:
    {
        returnValue = F("Mobilheimplatz Aukamp");
        break;
    }
    case 223239:
    {
        returnValue = F("Mobilstr.");
        break;
    }
    case 223240:
    {
        returnValue = F("Mobäreweg");
        break;
    }
    case 223241:
    {
        returnValue = F("Mochauer Hauptstr.");
        break;
    }
    case 223242:
    {
        returnValue = F("Mochauer Weg");
        break;
    }
    case 223243:
    {
        returnValue = F("Mochentaler Weg");
        break;
    }
    case 223244:
    {
        returnValue = F("Mochenwangener Str.");
        break;
    }
    case 223245:
    {
        returnValue = F("Mochenwanger Str.");
        break;
    }
    case 223246:
    {
        returnValue = F("Mocherwitzer Str.");
        break;
    }
    case 223247:
    {
        returnValue = F("Mochheidestr.");
        break;
    }
    case 223248:
    {
        returnValue = F("Mochlitzer Dorfstr.");
        break;
    }
    case 223249:
    {
        returnValue = F("Mochlitzer Kirchsteig");
        break;
    }
    case 223250:
    {
        returnValue = F("Mochlitzer Weg");
        break;
    }
    case 223251:
    {
        returnValue = F("Mochweg");
        break;
    }
    case 223252:
    {
        returnValue = F("Mockenackerweg");
        break;
    }
    case 223253:
    {
        returnValue = F("Mockenmühlweg");
        break;
    }
    case 223254:
    {
        returnValue = F("Mockenroth");
        break;
    }
    case 223255:
    {
        returnValue = F("Mockenstr.");
        break;
    }
    case 223256:
    {
        returnValue = F("Mockerner Str.");
        break;
    }
    case 223257:
    {
        returnValue = F("Mockrehnaer Str.");
        break;
    }
    case 223258:
    {
        returnValue = F("Mockstädter Str.");
        break;
    }
    case 223259:
    {
        returnValue = F("Mockziger Str.");
        break;
    }
    case 223260:
    {
        returnValue = F("Modaustr.");
        break;
    }
    case 223261:
    {
        returnValue = F("Moddemannskamp");
        break;
    }
    case 223262:
    {
        returnValue = F("Moddenborgstr.");
        break;
    }
    case 223263:
    {
        returnValue = F("Moddenteich");
        break;
    }
    case 223264:
    {
        returnValue = F("Modderspitze");
        break;
    }
    case 223265:
    {
        returnValue = F("Model");
        break;
    }
    case 223266:
    {
        returnValue = F("Modellbau-Park 1:8");
        break;
    }
    case 223267:
    {
        returnValue = F("Modellfliegerclubweg");
        break;
    }
    case 223268:
    {
        returnValue = F("Modellfluggelände Gissigheim");
        break;
    }
    case 223269:
    {
        returnValue = F("Modellflugplatz");
        break;
    }
    case 223270:
    {
        returnValue = F("Modellflugplatzweg");
        break;
    }
    case 223271:
    {
        returnValue = F("Modelwitzer Gasse");
        break;
    }
    case 223272:
    {
        returnValue = F("Modelwitzer Str.");
        break;
    }
    case 223273:
    {
        returnValue = F("Modemannskamp");
        break;
    }
    case 223274:
    {
        returnValue = F("Modenbachstr.");
        break;
    }
    case 223275:
    {
        returnValue = F("Modereggweg");
        break;
    }
    case 223276:
    {
        returnValue = F("Moderhorstweg");
        break;
    }
    case 223277:
    {
        returnValue = F("Modersohn-Becker-Hof");
        break;
    }
    case 223278:
    {
        returnValue = F("Modersohn-Becker-Ring");
        break;
    }
    case 223279:
    {
        returnValue = F("Modersohn-Becker-Str.");
        break;
    }
    case 223280:
    {
        returnValue = F("Modersohn-Becker-Weg");
        break;
    }
    case 223281:
    {
        returnValue = F("Modersohnstr.");
        break;
    }
    case 223282:
    {
        returnValue = F("Modersohnweg");
        break;
    }
    case 223283:
    {
        returnValue = F("Modleinsgasse");
        break;
    }
    case 223284:
    {
        returnValue = F("Modlerstr.");
        break;
    }
    case 223285:
    {
        returnValue = F("Modlerweg");
        break;
    }
    case 223286:
    {
        returnValue = F("Modlmaiergäßchen");
        break;
    }
    case 223287:
    {
        returnValue = F("Modloser Str.");
        break;
    }
    case 223288:
    {
        returnValue = F("Modoscher Str.");
        break;
    }
    case 223289:
    {
        returnValue = F("Modschlade");
        break;
    }
    case 223290:
    {
        returnValue = F("Moehringweg");
        break;
    }
    case 223291:
    {
        returnValue = F("Moekerweg");
        break;
    }
    case 223292:
    {
        returnValue = F("Moelerweg");
        break;
    }
    case 223293:
    {
        returnValue = F("Moellenbicker Weg");
        break;
    }
    case 223294:
    {
        returnValue = F("Moellerweg");
        break;
    }
    case 223295:
    {
        returnValue = F("Moengalstr.");
        break;
    }
    case 223296:
    {
        returnValue = F("Moennichpark");
        break;
    }
    case 223297:
    {
        returnValue = F("Moersenhof");
        break;
    }
    case 223298:
    {
        returnValue = F("Moersenstr.");
        break;
    }
    case 223299:
    {
        returnValue = F("Moerser Benden");
        break;
    }
    case 223300:
    {
        returnValue = F("Moerser Heide");
        break;
    }
    case 223301:
    {
        returnValue = F("Moerser Landstr.");
        break;
    }
    case 223302:
    {
        returnValue = F("Moerser Platz");
        break;
    }
    case 223303:
    {
        returnValue = F("Moerser Str.");
        break;
    }
    case 223304:
    {
        returnValue = F("Moersstr.");
        break;
    }
    case 223305:
    {
        returnValue = F("Moerstorper Str.");
        break;
    }
    case 223306:
    {
        returnValue = F("Moeschlerweg");
        break;
    }
    case 223307:
    {
        returnValue = F("Moese");
        break;
    }
    case 223308:
    {
        returnValue = F("Moesmangstr.");
        break;
    }
    case 223309:
    {
        returnValue = F("Moesstr.");
        break;
    }
    case 223310:
    {
        returnValue = F("Moestelstr.");
        break;
    }
    case 223311:
    {
        returnValue = F("Mogendorfer Str.");
        break;
    }
    case 223312:
    {
        returnValue = F("Moggaster Hauptstr.");
        break;
    }
    case 223313:
    {
        returnValue = F("Moggenbrunner Str.");
        break;
    }
    case 223314:
    {
        returnValue = F("Moggerer Ortsstr.");
        break;
    }
    case 223315:
    {
        returnValue = F("Moggerer Str.");
        break;
    }
    case 223316:
    {
        returnValue = F("Mogkstr.");
        break;
    }
    case 223317:
    {
        returnValue = F("Mohastr.");
        break;
    }
    case 223318:
    {
        returnValue = F("Mohlachstr.");
        break;
    }
    case 223319:
    {
        returnValue = F("Mohlaweg");
        break;
    }
    case 223320:
    {
        returnValue = F("Mohlbergstr.");
        break;
    }
    case 223321:
    {
        returnValue = F("Mohlenstieg");
        break;
    }
    case 223322:
    {
        returnValue = F("Mohlenstr.");
        break;
    }
    case 223323:
    {
        returnValue = F("Mohlenweg");
        break;
    }
    case 223324:
    {
        returnValue = F("Mohlgasse");
        break;
    }
    case 223325:
    {
        returnValue = F("Mohliser Str.");
        break;
    }
    case 223326:
    {
        returnValue = F("Mohliser Weg");
        break;
    }
    case 223327:
    {
        returnValue = F("Mohliser-Str.");
        break;
    }
    case 223328:
    {
        returnValue = F("Mohlpesch");
        break;
    }
    case 223329:
    {
        returnValue = F("Mohlsdorfer Bahnhofstr.");
        break;
    }
    case 223330:
    {
        returnValue = F("Mohlsdorfer Str.");
        break;
    }
    case 223331:
    {
        returnValue = F("Mohlstr.");
        break;
    }
    case 223332:
    {
        returnValue = F("Mohnackerweg");
        break;
    }
    case 223333:
    {
        returnValue = F("Mohnberg");
        break;
    }
    case 223334:
    {
        returnValue = F("Mohnblumenring");
        break;
    }
    case 223335:
    {
        returnValue = F("Mohnblumenstr.");
        break;
    }
    case 223336:
    {
        returnValue = F("Mohnblumenweg");
        break;
    }
    case 223337:
    {
        returnValue = F("Mohnbruchweg");
        break;
    }
    case 223338:
    {
        returnValue = F("Mohnfeld");
        break;
    }
    case 223339:
    {
        returnValue = F("Mohnfeldstr.");
        break;
    }
    case 223340:
    {
        returnValue = F("Mohngarten");
        break;
    }
    case 223341:
    {
        returnValue = F("Mohngasse");
        break;
    }
    case 223342:
    {
        returnValue = F("Mohnheimer Str.");
        break;
    }
    case 223343:
    {
        returnValue = F("Mohnhofstr.");
        break;
    }
    case 223344:
    {
        returnValue = F("Mohnhäcksweg");
        break;
    }
    case 223345:
    {
        returnValue = F("Mohnikestr.");
        break;
    }
    case 223346:
    {
        returnValue = F("Mohnkampweg");
        break;
    }
    case 223347:
    {
        returnValue = F("Mohnpfuhlweg");
        break;
    }
    case 223348:
    {
        returnValue = F("Mohnring");
        break;
    }
    case 223349:
    {
        returnValue = F("Mohns Park");
        break;
    }
    case 223350:
    {
        returnValue = F("Mohnstieg");
        break;
    }
    case 223351:
    {
        returnValue = F("Mohnstr.");
        break;
    }
    case 223352:
    {
        returnValue = F("Mohnstrauch");
        break;
    }
    case 223353:
    {
        returnValue = F("Mohnweg");
        break;
    }
    case 223354:
    {
        returnValue = F("Mohnwiesenwald");
        break;
    }
    case 223355:
    {
        returnValue = F("Mohnwiesenweg");
        break;
    }
    case 223356:
    {
        returnValue = F("Mohnwinkel");
        break;
    }
    case 223357:
    {
        returnValue = F("Moholz-Sandtrail");
        break;
    }
    case 223358:
    {
        returnValue = F("Mohorner Str.");
        break;
    }
    case 223359:
    {
        returnValue = F("Mohr Eichweg");
        break;
    }
    case 223360:
    {
        returnValue = F("Mohrbachweg");
        break;
    }
    case 223361:
    {
        returnValue = F("Mohrberger Weg");
        break;
    }
    case 223362:
    {
        returnValue = F("Mohrbrunner Str.");
        break;
    }
    case 223363:
    {
        returnValue = F("Mohrenbacher Str.");
        break;
    }
    case 223364:
    {
        returnValue = F("Mohrenberg");
        break;
    }
    case 223365:
    {
        returnValue = F("Mohrendobeltraufweg");
        break;
    }
    case 223366:
    {
        returnValue = F("Mohrenfalterweg");
        break;
    }
    case 223367:
    {
        returnValue = F("Mohrengarten");
        break;
    }
    case 223368:
    {
        returnValue = F("Mohrengasse");
        break;
    }
    case 223369:
    {
        returnValue = F("Mohrengässchen");
        break;
    }
    case 223370:
    {
        returnValue = F("Mohrengäßle");
        break;
    }
    case 223371:
    {
        returnValue = F("Mohrenhähne");
        break;
    }
    case 223372:
    {
        returnValue = F("Mohrenhügel");
        break;
    }
    case 223373:
    {
        returnValue = F("Mohrenkamp");
        break;
    }
    case 223374:
    {
        returnValue = F("Mohrenkopfstr.");
        break;
    }
    case 223375:
    {
        returnValue = F("Mohrenplatz");
        break;
    }
    case 223376:
    {
        returnValue = F("Mohrensattelweg");
        break;
    }
    case 223377:
    {
        returnValue = F("Mohrenstr.");
        break;
    }
    case 223378:
    {
        returnValue = F("Mohrental");
        break;
    }
    case 223379:
    {
        returnValue = F("Mohrentaler Str.");
        break;
    }
    case 223380:
    {
        returnValue = F("Mohrenweg");
        break;
    }
    case 223381:
    {
        returnValue = F("Mohrenwiesenweg");
        break;
    }
    case 223382:
    {
        returnValue = F("Mohrenäcker");
        break;
    }
    case 223383:
    {
        returnValue = F("Mohrgasse");
        break;
    }
    case 223384:
    {
        returnValue = F("Mohrhalde");
        break;
    }
    case 223385:
    {
        returnValue = F("Mohrhardtgässchen");
        break;
    }
    case 223386:
    {
        returnValue = F("Mohrhofer Str.");
        break;
    }
    case 223387:
    {
        returnValue = F("Mohrhoffstr.");
        break;
    }
    case 223388:
    {
        returnValue = F("Mohringhook");
        break;
    }
    case 223389:
    {
        returnValue = F("Mohrkirchen");
        break;
    }
    case 223390:
    {
        returnValue = F("Mohrmannshofer Str.");
        break;
    }
    case 223391:
    {
        returnValue = F("Mohrmannsweg");
        break;
    }
    case 223392:
    {
        returnValue = F("Mohrmühle");
        break;
    }
    case 223393:
    {
        returnValue = F("Mohrmühlgasse");
        break;
    }
    case 223394:
    {
        returnValue = F("Mohrsche Koppel");
        break;
    }
    case 223395:
    {
        returnValue = F("Mohrsgarten");
        break;
    }
    case 223396:
    {
        returnValue = F("Mohrsmühle");
        break;
    }
    case 223397:
    {
        returnValue = F("Mohrsmühlenweg");
        break;
    }
    case 223398:
    {
        returnValue = F("Mohrstr.");
        break;
    }
    case 223399:
    {
        returnValue = F("Mohrunger Str.");
        break;
    }
    case 223400:
    {
        returnValue = F("Mohrunger Weg");
        break;
    }
    case 223401:
    {
        returnValue = F("Mohrweg");
        break;
    }
    case 223402:
    {
        returnValue = F("Mohsdorf Chemnitztal");
        break;
    }
    case 223403:
    {
        returnValue = F("Mohsdorfer Str.");
        break;
    }
    case 223404:
    {
        returnValue = F("Mohseichenweg");
        break;
    }
    case 223405:
    {
        returnValue = F("Mohsstr.");
        break;
    }
    case 223406:
    {
        returnValue = F("Mohács-Platz");
        break;
    }
    case 223407:
    {
        returnValue = F("Moidentiner Weg");
        break;
    }
    case 223408:
    {
        returnValue = F("Moider Mühlenweg");
        break;
    }
    case 223409:
    {
        returnValue = F("Moiergasse");
        break;
    }
    case 223410:
    {
        returnValue = F("Moirweg");
        break;
    }
    case 223411:
    {
        returnValue = F("Moisburger Landstr.");
        break;
    }
    case 223412:
    {
        returnValue = F("Moisburger Str.");
        break;
    }
    case 223413:
    {
        returnValue = F("Moischeider Str.");
        break;
    }
    case 223414:
    {
        returnValue = F("Moischter Str.");
        break;
    }
    case 223415:
    {
        returnValue = F("Moislingen");
        break;
    }
    case 223416:
    {
        returnValue = F("Moissy-Cramayel-Str.");
        break;
    }
    case 223417:
    {
        returnValue = F("Moitiner Str.");
        break;
    }
    case 223418:
    {
        returnValue = F("Moitzfeld");
        break;
    }
    case 223419:
    {
        returnValue = F("Mojenhörn");
        break;
    }
    case 223420:
    {
        returnValue = F("Mojerfeldweg");
        break;
    }
    case 223421:
    {
        returnValue = F("Mojergasse");
        break;
    }
    case 223422:
    {
        returnValue = F("Mojerweg");
        break;
    }
    case 223423:
    {
        returnValue = F("Mojeweg");
        break;
    }
    case 223424:
    {
        returnValue = F("Mokeweg");
        break;
    }
    case 223425:
    {
        returnValue = F("Mokwastr.");
        break;
    }
    case 223426:
    {
        returnValue = F("Molanusweg");
        break;
    }
    case 223427:
    {
        returnValue = F("Molbach");
        break;
    }
    case 223428:
    {
        returnValue = F("Molbachstr.");
        break;
    }
    case 223429:
    {
        returnValue = F("Molbachweg");
        break;
    }
    case 223430:
    {
        returnValue = F("Molbath");
        break;
    }
    case 223431:
    {
        returnValue = F("Molbather Weg");
        break;
    }
    case 223432:
    {
        returnValue = F("Molbeckeweg");
        break;
    }
    case 223433:
    {
        returnValue = F("Molberger Str.");
        break;
    }
    case 223434:
    {
        returnValue = F("Molbertinger Str.");
        break;
    }
    case 223435:
    {
        returnValue = F("Molbitzer Str.");
        break;
    }
    case 223436:
    {
        returnValue = F("Molchgrund");
        break;
    }
    case 223437:
    {
        returnValue = F("Molchweg");
        break;
    }
    case 223438:
    {
        returnValue = F("Moldauer Str.");
        break;
    }
    case 223439:
    {
        returnValue = F("Moldaustr.");
        break;
    }
    case 223440:
    {
        returnValue = F("Moldauweg");
        break;
    }
    case 223441:
    {
        returnValue = F("Moldeberg");
        break;
    }
    case 223442:
    {
        returnValue = F("Moldenberg");
        break;
    }
    case 223443:
    {
        returnValue = F("Moldenhütten");
        break;
    }
    case 223444:
    {
        returnValue = F("Moldeniter Weg");
        break;
    }
    case 223445:
    {
        returnValue = F("Moldenweg");
        break;
    }
    case 223446:
    {
        returnValue = F("Molderamweg");
        break;
    }
    case 223447:
    {
        returnValue = F("Moldestr.");
        break;
    }
    case 223448:
    {
        returnValue = F("Mole");
        break;
    }
    case 223449:
    {
        returnValue = F("Molenbrede");
        break;
    }
    case 223450:
    {
        returnValue = F("Molenkiekergang");
        break;
    }
    case 223451:
    {
        returnValue = F("Molenstr.");
        break;
    }
    case 223452:
    {
        returnValue = F("Molenweg");
        break;
    }
    case 223453:
    {
        returnValue = F("Molerstieg");
        break;
    }
    case 223454:
    {
        returnValue = F("Molierestr.");
        break;
    }
    case 223455:
    {
        returnValue = F("Moliereweg");
        break;
    }
    case 223456:
    {
        returnValue = F("Molinder Grasweg");
        break;
    }
    case 223457:
    {
        returnValue = F("Molini-Rumann-Str.");
        break;
    }
    case 223458:
    {
        returnValue = F("Molitorstr.");
        break;
    }
    case 223459:
    {
        returnValue = F("Molière-Weg");
        break;
    }
    case 223460:
    {
        returnValue = F("Molkebrunnenweg");
        break;
    }
    case 223461:
    {
        returnValue = F("Molkegasse");
        break;
    }
    case 223462:
    {
        returnValue = F("Molkegässle");
        break;
    }
    case 223463:
    {
        returnValue = F("Molkegäßle");
        break;
    }
    case 223464:
    {
        returnValue = F("Molkenberg");
        break;
    }
    case 223465:
    {
        returnValue = F("Molkenberg Weg");
        break;
    }
    case 223466:
    {
        returnValue = F("Molkenberger Str.");
        break;
    }
    case 223467:
    {
        returnValue = F("Molkenberger Weg");
        break;
    }
    case 223468:
    {
        returnValue = F("Molkenbergstr.");
        break;
    }
    case 223469:
    {
        returnValue = F("Molkenborn");
        break;
    }
    case 223470:
    {
        returnValue = F("Molkenborn Schneise");
        break;
    }
    case 223471:
    {
        returnValue = F("Molkenborn-Schneise");
        break;
    }
    case 223472:
    {
        returnValue = F("Molkenbornschneise");
        break;
    }
    case 223473:
    {
        returnValue = F("Molkenbornstr.");
        break;
    }
    case 223474:
    {
        returnValue = F("Molkenbrunnenweg");
        break;
    }
    case 223475:
    {
        returnValue = F("Molkenbrunner Str.");
        break;
    }
    case 223476:
    {
        returnValue = F("Molkenbuhrstr.");
        break;
    }
    case 223477:
    {
        returnValue = F("Molkenbänke");
        break;
    }
    case 223478:
    {
        returnValue = F("Molkengasse");
        break;
    }
    case 223479:
    {
        returnValue = F("Molkenhaus-Chaussee");
        break;
    }
    case 223480:
    {
        returnValue = F("Molkenkamp");
        break;
    }
    case 223481:
    {
        returnValue = F("Molkenkeller");
        break;
    }
    case 223482:
    {
        returnValue = F("Molkenmarkt");
        break;
    }
    case 223483:
    {
        returnValue = F("Molkenpfad");
        break;
    }
    case 223484:
    {
        returnValue = F("Molkenreithsweg");
        break;
    }
    case 223485:
    {
        returnValue = F("Molkenstr.");
        break;
    }
    case 223486:
    {
        returnValue = F("Molkenstäh");
        break;
    }
    case 223487:
    {
        returnValue = F("Molkensumpfweg");
        break;
    }
    case 223488:
    {
        returnValue = F("Molkerei");
        break;
    }
    case 223489:
    {
        returnValue = F("Molkerei Altgarmssiel");
        break;
    }
    case 223490:
    {
        returnValue = F("Molkereiberg");
        break;
    }
    case 223491:
    {
        returnValue = F("Molkereigasse");
        break;
    }
    case 223492:
    {
        returnValue = F("Molkereigässle");
        break;
    }
    case 223493:
    {
        returnValue = F("Molkereigäßchen");
        break;
    }
    case 223494:
    {
        returnValue = F("Molkereilohne");
        break;
    }
    case 223495:
    {
        returnValue = F("Molkereiplatz");
        break;
    }
    case 223496:
    {
        returnValue = F("Molkereistr.");
        break;
    }
    case 223497:
    {
        returnValue = F("Molkereiweg");
        break;
    }
    case 223498:
    {
        returnValue = F("Molkeriebarg");
        break;
    }
    case 223499:
    {
        returnValue = F("Molkestr.");
        break;
    }
    case 223500:
    {
        returnValue = F("Molkeweg");
        break;
    }
    case 223501:
    {
        returnValue = F("Moll-Berczy-Str.");
        break;
    }
    case 223502:
    {
        returnValue = F("Mollartshof");
        break;
    }
    case 223503:
    {
        returnValue = F("Mollberg");
        break;
    }
    case 223504:
    {
        returnValue = F("Mollberger Feld");
        break;
    }
    case 223505:
    {
        returnValue = F("Mollberger Weg");
        break;
    }
    case 223506:
    {
        returnValue = F("Mollbergstr.");
        break;
    }
    case 223507:
    {
        returnValue = F("Mollbornsweg");
        break;
    }
    case 223508:
    {
        returnValue = F("Molldamm");
        break;
    }
    case 223509:
    {
        returnValue = F("Mollebuschallee");
        break;
    }
    case 223510:
    {
        returnValue = F("Mollenackerstr.");
        break;
    }
    case 223511:
    {
        returnValue = F("Mollenbachstr.");
        break;
    }
    case 223512:
    {
        returnValue = F("Mollenberg");
        break;
    }
    case 223513:
    {
        returnValue = F("Mollenfelder Str.");
        break;
    }
    case 223514:
    {
        returnValue = F("Mollengasse");
        break;
    }
    case 223515:
    {
        returnValue = F("Mollengrund");
        break;
    }
    case 223516:
    {
        returnValue = F("Mollenheidchen");
        break;
    }
    case 223517:
    {
        returnValue = F("Mollenhof");
        break;
    }
    case 223518:
    {
        returnValue = F("Mollenklinge");
        break;
    }
    case 223519:
    {
        returnValue = F("Mollenkopfweg");
        break;
    }
    case 223520:
    {
        returnValue = F("Mollenkotten");
        break;
    }
    case 223521:
    {
        returnValue = F("Mollenkämpe");
        break;
    }
    case 223522:
    {
        returnValue = F("Mollenmatt");
        break;
    }
    case 223523:
    {
        returnValue = F("Mollenmühle");
        break;
    }
    case 223524:
    {
        returnValue = F("Mollensteinstr.");
        break;
    }
    case 223525:
    {
        returnValue = F("Mollenstorfer Str.");
        break;
    }
    case 223526:
    {
        returnValue = F("Mollerstr.");
        break;
    }
    case 223527:
    {
        returnValue = F("Mollhagener Str.");
        break;
    }
    case 223528:
    {
        returnValue = F("Molli-Museum");
        break;
    }
    case 223529:
    {
        returnValue = F("Mollischweg");
        break;
    }
    case 223530:
    {
        returnValue = F("Mollistr.");
        break;
    }
    case 223531:
    {
        returnValue = F("Mollner Str.");
        break;
    }
    case 223532:
    {
        returnValue = F("Mollocherweg");
        break;
    }
    case 223533:
    {
        returnValue = F("Mollplatz");
        break;
    }
    case 223534:
    {
        returnValue = F("Mollseifener Str.");
        break;
    }
    case 223535:
    {
        returnValue = F("Mollsend");
        break;
    }
    case 223536:
    {
        returnValue = F("Mollsfeld");
        break;
    }
    case 223537:
    {
        returnValue = F("Mollsgasse");
        break;
    }
    case 223538:
    {
        returnValue = F("Mollsiepen");
        break;
    }
    case 223539:
    {
        returnValue = F("Mollstr.");
        break;
    }
    case 223540:
    {
        returnValue = F("Mollweg");
        break;
    }
    case 223541:
    {
        returnValue = F("Mollwitzer Str.");
        break;
    }
    case 223542:
    {
        returnValue = F("Molläckerweg");
        break;
    }
    case 223543:
    {
        returnValue = F("Molmecker Str.");
        break;
    }
    case 223544:
    {
        returnValue = F("Molmke");
        break;
    }
    case 223545:
    {
        returnValue = F("Molmker Str.");
        break;
    }
    case 223546:
    {
        returnValue = F("Molmsche");
        break;
    }
    case 223547:
    {
        returnValue = F("Molochsberg");
        break;
    }
    case 223548:
    {
        returnValue = F("Molostr.");
        break;
    }
    case 223549:
    {
        returnValue = F("Molpertshauser Str.");
        break;
    }
    case 223550:
    {
        returnValue = F("Molsbachweg");
        break;
    }
    case 223551:
    {
        returnValue = F("Molsberg");
        break;
    }
    case 223552:
    {
        returnValue = F("Molsberger Str.");
        break;
    }
    case 223553:
    {
        returnValue = F("Molschlebener Weg");
        break;
    }
    case 223554:
    {
        returnValue = F("Molschleber Str.");
        break;
    }
    case 223555:
    {
        returnValue = F("Molsdorfer Gasthofweg");
        break;
    }
    case 223556:
    {
        returnValue = F("Molsdorfer Lindenweg");
        break;
    }
    case 223557:
    {
        returnValue = F("Molsdorfer Str.");
        break;
    }
    case 223558:
    {
        returnValue = F("Molsenkoppel");
        break;
    }
    case 223559:
    {
        returnValue = F("Molsweg");
        break;
    }
    case 223560:
    {
        returnValue = F("Moltenow");
        break;
    }
    case 223561:
    {
        returnValue = F("Moltenower Str.");
        break;
    }
    case 223562:
    {
        returnValue = F("Moltenower Weg");
        break;
    }
    case 223563:
    {
        returnValue = F("Moltenwaldweg");
        break;
    }
    case 223564:
    {
        returnValue = F("Molterpfad");
        break;
    }
    case 223565:
    {
        returnValue = F("Molterplatz");
        break;
    }
    case 223566:
    {
        returnValue = F("Moltkeallee");
        break;
    }
    case 223567:
    {
        returnValue = F("Moltkebahn");
        break;
    }
    case 223568:
    {
        returnValue = F("Moltkenburg");
        break;
    }
    case 223569:
    {
        returnValue = F("Moltkeplatz");
        break;
    }
    case 223570:
    {
        returnValue = F("Moltkesiedlung");
        break;
    }
    case 223571:
    {
        returnValue = F("Moltkestr.");
        break;
    }
    case 223572:
    {
        returnValue = F("Moltkeweg");
        break;
    }
    case 223573:
    {
        returnValue = F("Moltzahn");
        break;
    }
    case 223574:
    {
        returnValue = F("Moltzower Dorfstr.");
        break;
    }
    case 223575:
    {
        returnValue = F("Molwitzstr.");
        break;
    }
    case 223576:
    {
        returnValue = F("Molzahner Str.");
        break;
    }
    case 223577:
    {
        returnValue = F("Molzahner Weg");
        break;
    }
    case 223578:
    {
        returnValue = F("Molzaustr.");
        break;
    }
    case 223579:
    {
        returnValue = F("Molzbacher Str.");
        break;
    }
    case 223580:
    {
        returnValue = F("Molzbergstr.");
        break;
    }
    case 223581:
    {
        returnValue = F("Molzener Bergstr.");
        break;
    }
    case 223582:
    {
        returnValue = F("Molzener Kirchstr.");
        break;
    }
    case 223583:
    {
        returnValue = F("Molzener Sandweg");
        break;
    }
    case 223584:
    {
        returnValue = F("Molzener Schulstr.");
        break;
    }
    case 223585:
    {
        returnValue = F("Molzener Str.");
        break;
    }
    case 223586:
    {
        returnValue = F("Molzer Str.");
        break;
    }
    case 223587:
    {
        returnValue = F("Molzgasse");
        break;
    }
    case 223588:
    {
        returnValue = F("Molzhausweg");
        break;
    }
    case 223589:
    {
        returnValue = F("Molziger Str.");
        break;
    }
    case 223590:
    {
        returnValue = F("Molzmühlenweg");
        break;
    }
    case 223591:
    {
        returnValue = F("Momarter Str.");
        break;
    }
    case 223592:
    {
        returnValue = F("Momarter Weg");
        break;
    }
    case 223593:
    {
        returnValue = F("Mombacher Str.");
        break;
    }
    case 223594:
    {
        returnValue = F("Momberger Str.");
        break;
    }
    case 223595:
    {
        returnValue = F("Mombergstr.");
        break;
    }
    case 223596:
    {
        returnValue = F("Mombertplatz");
        break;
    }
    case 223597:
    {
        returnValue = F("Momecketal");
        break;
    }
    case 223598:
    {
        returnValue = F("Mommartzstr.");
        break;
    }
    case 223599:
    {
        returnValue = F("Mommbornstr.");
        break;
    }
    case 223600:
    {
        returnValue = F("Momme-Nissen-Weg");
        break;
    }
    case 223601:
    {
        returnValue = F("Mommelsteinstr.");
        break;
    }
    case 223602:
    {
        returnValue = F("Mommenheimer Str.");
        break;
    }
    case 223603:
    {
        returnValue = F("Mommer Str.");
        break;
    }
    case 223604:
    {
        returnValue = F("Mommertzhäuschen");
        break;
    }
    case 223605:
    {
        returnValue = F("Mommkamp");
        break;
    }
    case 223606:
    {
        returnValue = F("Mommsenstr.");
        break;
    }
    case 223607:
    {
        returnValue = F("Mommstr.");
        break;
    }
    case 223608:
    {
        returnValue = F("Momsenstr.");
        break;
    }
    case 223609:
    {
        returnValue = F("Monakamer Berg");
        break;
    }
    case 223610:
    {
        returnValue = F("Monakamer Hangweg");
        break;
    }
    case 223611:
    {
        returnValue = F("Monakamer Hütte / Kühnloch");
        break;
    }
    case 223612:
    {
        returnValue = F("Monakamer Kirchweg");
        break;
    }
    case 223613:
    {
        returnValue = F("Monakamer Str.");
        break;
    }
    case 223614:
    {
        returnValue = F("Monakamer Weg");
        break;
    }
    case 223615:
    {
        returnValue = F("Monatshausener Str.");
        break;
    }
    case 223616:
    {
        returnValue = F("Monatshauser Str.");
        break;
    }
    case 223617:
    {
        returnValue = F("Monatswiese");
        break;
    }
    case 223618:
    {
        returnValue = F("Monbachstr.");
        break;
    }
    case 223619:
    {
        returnValue = F("Monbachweg");
        break;
    }
    case 223620:
    {
        returnValue = F("Monbijou");
        break;
    }
    case 223621:
    {
        returnValue = F("Monbrunner Str.");
        break;
    }
    case 223622:
    {
        returnValue = F("Monburger Str.");
        break;
    }
    case 223623:
    {
        returnValue = F("Moncalieristr.");
        break;
    }
    case 223624:
    {
        returnValue = F("Monckeshofer Str.");
        break;
    }
    case 223625:
    {
        returnValue = F("Mondallee");
        break;
    }
    case 223626:
    {
        returnValue = F("Mondelanger Str.");
        break;
    }
    case 223627:
    {
        returnValue = F("Mondenberg");
        break;
    }
    case 223628:
    {
        returnValue = F("Mondeviller Str.");
        break;
    }
    case 223629:
    {
        returnValue = F("Mondfängerplatz");
        break;
    }
    case 223630:
    {
        returnValue = F("Mondgässchen");
        break;
    }
    case 223631:
    {
        returnValue = F("Mondhagen");
        break;
    }
    case 223632:
    {
        returnValue = F("Mondhahnstr.");
        break;
    }
    case 223633:
    {
        returnValue = F("Mondorfer Str.");
        break;
    }
    case 223634:
    {
        returnValue = F("Mondorfer Weg");
        break;
    }
    case 223635:
    {
        returnValue = F("Mondorfstr.");
        break;
    }
    case 223636:
    {
        returnValue = F("Mondrauteweg");
        break;
    }
    case 223637:
    {
        returnValue = F("Mondring");
        break;
    }
    case 223638:
    {
        returnValue = F("Mondscheinbrücke");
        break;
    }
    case 223639:
    {
        returnValue = F("Mondscheinstr.");
        break;
    }
    case 223640:
    {
        returnValue = F("Mondscheinweg");
        break;
    }
    case 223641:
    {
        returnValue = F("Mondschirmbreite");
        break;
    }
    case 223642:
    {
        returnValue = F("Mondseestr.");
        break;
    }
    case 223643:
    {
        returnValue = F("Mondseeweg");
        break;
    }
    case 223644:
    {
        returnValue = F("Mondsteinstr.");
        break;
    }
    case 223645:
    {
        returnValue = F("Mondstieg");
        break;
    }
    case 223646:
    {
        returnValue = F("Mondstr.");
        break;
    }
    case 223647:
    {
        returnValue = F("Mondweg");
        break;
    }
    case 223648:
    {
        returnValue = F("Monesfeld");
        break;
    }
    case 223649:
    {
        returnValue = F("Monestr.");
        break;
    }
    case 223650:
    {
        returnValue = F("Monetstr.");
        break;
    }
    case 223651:
    {
        returnValue = F("Monforter Str.");
        break;
    }
    case 223652:
    {
        returnValue = F("Monfortstr.");
        break;
    }
    case 223653:
    {
        returnValue = F("Mongsgasse");
        break;
    }
    case 223654:
    {
        returnValue = F("Monham");
        break;
    }
    case 223655:
    {
        returnValue = F("Monhamer Weg");
        break;
    }
    case 223656:
    {
        returnValue = F("Monhardt");
        break;
    }
    case 223657:
    {
        returnValue = F("Monhardter Berg");
        break;
    }
    case 223658:
    {
        returnValue = F("Monhardter Weg");
        break;
    }
    case 223659:
    {
        returnValue = F("Monheimer Str.");
        break;
    }
    case 223660:
    {
        returnValue = F("Moniberg");
        break;
    }
    case 223661:
    {
        returnValue = F("Monichstr.");
        break;
    }
    case 223662:
    {
        returnValue = F("Monierstr.");
        break;
    }
    case 223663:
    {
        returnValue = F("Monifelderstr.");
        break;
    }
    case 223664:
    {
        returnValue = F("Monika-Linkenheil-Str.");
        break;
    }
    case 223665:
    {
        returnValue = F("Monika-Seemüller-Str.");
        break;
    }
    case 223666:
    {
        returnValue = F("Monikastr.");
        break;
    }
    case 223667:
    {
        returnValue = F("Monikaweg");
        break;
    }
    case 223668:
    {
        returnValue = F("Moningerstr.");
        break;
    }
    case 223669:
    {
        returnValue = F("Monkstr.");
        break;
    }
    case 223670:
    {
        returnValue = F("Monmouthplatz");
        break;
    }
    case 223671:
    {
        returnValue = F("Monnikeborgum");
        break;
    }
    case 223672:
    {
        returnValue = F("Monopterosweg");
        break;
    }
    case 223673:
    {
        returnValue = F("Monopterusweg");
        break;
    }
    case 223674:
    {
        returnValue = F("Monplaisir");
        break;
    }
    case 223675:
    {
        returnValue = F("Monplaisirstr.");
        break;
    }
    case 223676:
    {
        returnValue = F("Monrealer Str.");
        break;
    }
    case 223677:
    {
        returnValue = F("Monrealer Weg");
        break;
    }
    case 223678:
    {
        returnValue = F("Monrepos");
        break;
    }
    case 223679:
    {
        returnValue = F("Monreposstr.");
        break;
    }
    case 223680:
    {
        returnValue = F("Monrestr.");
        break;
    }
    case 223681:
    {
        returnValue = F("Monroestr.");
        break;
    }
    case 223682:
    {
        returnValue = F("Mons Hof");
        break;
    }
    case 223683:
    {
        returnValue = F("Mons-Tabor-Str.");
        break;
    }
    case 223684:
    {
        returnValue = F("Monsau");
        break;
    }
    case 223685:
    {
        returnValue = F("Monsberg");
        break;
    }
    case 223686:
    {
        returnValue = F("Monschauer Landstr.");
        break;
    }
    case 223687:
    {
        returnValue = F("Monschauer Str.");
        break;
    }
    case 223688:
    {
        returnValue = F("Monschauer Weg");
        break;
    }
    case 223689:
    {
        returnValue = F("Monschein");
        break;
    }
    case 223690:
    {
        returnValue = F("Monscheinmühle");
        break;
    }
    case 223691:
    {
        returnValue = F("Monsheimer Str.");
        break;
    }
    case 223692:
    {
        returnValue = F("Monsignore-Aichele-Weg");
        break;
    }
    case 223693:
    {
        returnValue = F("Monsignore-Bollenbach-Str.");
        break;
    }
    case 223694:
    {
        returnValue = F("Monsignore-Böhm-Str.");
        break;
    }
    case 223695:
    {
        returnValue = F("Monsignore-Eberth-Str.");
        break;
    }
    case 223696:
    {
        returnValue = F("Monsignore-Heilig-Str.");
        break;
    }
    case 223697:
    {
        returnValue = F("Monsignore-Hornung-Weg");
        break;
    }
    case 223698:
    {
        returnValue = F("Monsignore-Klinger-Ring");
        break;
    }
    case 223699:
    {
        returnValue = F("Monsignore-Kohl-Str.");
        break;
    }
    case 223700:
    {
        returnValue = F("Monsignore-Miller-Str.");
        break;
    }
    case 223701:
    {
        returnValue = F("Monsignore-Schmid-Str.");
        break;
    }
    case 223702:
    {
        returnValue = F("Monsignore-Schrenk-Weg");
        break;
    }
    case 223703:
    {
        returnValue = F("Monsignore-Seidinger-Str.");
        break;
    }
    case 223704:
    {
        returnValue = F("Monsignore-Winter-Weg");
        break;
    }
    case 223705:
    {
        returnValue = F("Monsilienweg");
        break;
    }
    case 223706:
    {
        returnValue = F("Mont-Cenis-Str.");
        break;
    }
    case 223707:
    {
        returnValue = F("Montabaurer Str.");
        break;
    }
    case 223708:
    {
        returnValue = F("Montafoner Str.");
        break;
    }
    case 223709:
    {
        returnValue = F("Montafonstr.");
        break;
    }
    case 223710:
    {
        returnValue = F("Montafonweg");
        break;
    }
    case 223711:
    {
        returnValue = F("Montalweg");
        break;
    }
    case 223712:
    {
        returnValue = F("Montanastr.");
        break;
    }
    case 223713:
    {
        returnValue = F("Montanaweg");
        break;
    }
    case 223714:
    {
        returnValue = F("Montanhydraulikstr.");
        break;
    }
    case 223715:
    {
        returnValue = F("Montaniastr.");
        break;
    }
    case 223716:
    {
        returnValue = F("Montanistr.");
        break;
    }
    case 223717:
    {
        returnValue = F("Montanstr.");
        break;
    }
    case 223718:
    {
        returnValue = F("Montanushof");
        break;
    }
    case 223719:
    {
        returnValue = F("Montanusplatz");
        break;
    }
    case 223720:
    {
        returnValue = F("Montanusstr.");
        break;
    }
    case 223721:
    {
        returnValue = F("Montanusweg");
        break;
    }
    case 223722:
    {
        returnValue = F("Montargisstr.");
        break;
    }
    case 223723:
    {
        returnValue = F("Montastr.");
        break;
    }
    case 223724:
    {
        returnValue = F("Montchaninstr.");
        break;
    }
    case 223725:
    {
        returnValue = F("Monte Bello");
        break;
    }
    case 223726:
    {
        returnValue = F("Monte Mare Andernach");
        break;
    }
    case 223727:
    {
        returnValue = F("Montebellunastr.");
        break;
    }
    case 223728:
    {
        returnValue = F("Montecorvino-Rovella-Brücke");
        break;
    }
    case 223729:
    {
        returnValue = F("Montel-Allee");
        break;
    }
    case 223730:
    {
        returnValue = F("Montelabbateplatz");
        break;
    }
    case 223731:
    {
        returnValue = F("Montelimarstr.");
        break;
    }
    case 223732:
    {
        returnValue = F("Montendre-Str.");
        break;
    }
    case 223733:
    {
        returnValue = F("Montepulcianoweg");
        break;
    }
    case 223734:
    {
        returnValue = F("Monter Wiese");
        break;
    }
    case 223735:
    {
        returnValue = F("Montereau-Allee");
        break;
    }
    case 223736:
    {
        returnValue = F("Monterkampweg");
        break;
    }
    case 223737:
    {
        returnValue = F("Montessori-Str.");
        break;
    }
    case 223738:
    {
        returnValue = F("Montessoristr.");
        break;
    }
    case 223739:
    {
        returnValue = F("Montessoriweg");
        break;
    }
    case 223740:
    {
        returnValue = F("Monteuxstr.");
        break;
    }
    case 223741:
    {
        returnValue = F("Montforter Str.");
        break;
    }
    case 223742:
    {
        returnValue = F("Montforterhof");
        break;
    }
    case 223743:
    {
        returnValue = F("Montfortstr.");
        break;
    }
    case 223744:
    {
        returnValue = F("Montfortweg");
        break;
    }
    case 223745:
    {
        returnValue = F("Montgelas-Geräumt");
        break;
    }
    case 223746:
    {
        returnValue = F("Montgelasstr.");
        break;
    }
    case 223747:
    {
        returnValue = F("Montgelasweg");
        break;
    }
    case 223748:
    {
        returnValue = F("Montgolfier-Weg");
        break;
    }
    case 223749:
    {
        returnValue = F("Montgolfierstr.");
        break;
    }
    case 223750:
    {
        returnValue = F("Montgolfierweg");
        break;
    }
    case 223751:
    {
        returnValue = F("Montgomery Weg");
        break;
    }
    case 223752:
    {
        returnValue = F("Monthermeerstr.");
        break;
    }
    case 223753:
    {
        returnValue = F("Monticello Court");
        break;
    }
    case 223754:
    {
        returnValue = F("Montier-en-Der-Platz");
        break;
    }
    case 223755:
    {
        returnValue = F("Montigny Platz");
        break;
    }
    case 223756:
    {
        returnValue = F("Montigny-Allee");
        break;
    }
    case 223757:
    {
        returnValue = F("Montistr.");
        break;
    }
    case 223758:
    {
        returnValue = F("Montlouisring");
        break;
    }
    case 223759:
    {
        returnValue = F("Montluelweg");
        break;
    }
    case 223760:
    {
        returnValue = F("Montmeyraner Str.");
        break;
    }
    case 223761:
    {
        returnValue = F("Montoirestr.");
        break;
    }
    case 223762:
    {
        returnValue = F("Montplanetstr.");
        break;
    }
    case 223763:
    {
        returnValue = F("Montreal-Platz");
        break;
    }
    case 223764:
    {
        returnValue = F("Montrealstr.");
        break;
    }
    case 223765:
    {
        returnValue = F("Montrelaiser Str.");
        break;
    }
    case 223766:
    {
        returnValue = F("Montreulweg");
        break;
    }
    case 223767:
    {
        returnValue = F("Montsstr.");
        break;
    }
    case 223768:
    {
        returnValue = F("Montzstr.");
        break;
    }
    case 223769:
    {
        returnValue = F("Monumenthausweg");
        break;
    }
    case 223770:
    {
        returnValue = F("Monumentweg");
        break;
    }
    case 223771:
    {
        returnValue = F("Monzelfelder Weg");
        break;
    }
    case 223772:
    {
        returnValue = F("Monzelt");
        break;
    }
    case 223773:
    {
        returnValue = F("Monzenbend");
        break;
    }
    case 223774:
    {
        returnValue = F("Monzernheimer Str.");
        break;
    }
    case 223775:
    {
        returnValue = F("Monzinger Str.");
        break;
    }
    case 223776:
    {
        returnValue = F("Monäckerweg");
        break;
    }
    case 223777:
    {
        returnValue = F("Moodweg");
        break;
    }
    case 223778:
    {
        returnValue = F("Mookweg");
        break;
    }
    case 223779:
    {
        returnValue = F("Moolberg");
        break;
    }
    case 223780:
    {
        returnValue = F("Moolenweg");
        break;
    }
    case 223781:
    {
        returnValue = F("Moolsfeld");
        break;
    }
    case 223782:
    {
        returnValue = F("Moonwisch");
        break;
    }
    case 223783:
    {
        returnValue = F("Moor");
        break;
    }
    case 223784:
    {
        returnValue = F("Moor Erlebnispfad");
        break;
    }
    case 223785:
    {
        returnValue = F("Moor Lehrpfad");
        break;
    }
    case 223786:
    {
        returnValue = F("Mooracker");
        break;
    }
    case 223787:
    {
        returnValue = F("Moorackerweg");
        break;
    }
    case 223788:
    {
        returnValue = F("Mooranger");
        break;
    }
    case 223789:
    {
        returnValue = F("Moorbachstr.");
        break;
    }
    case 223790:
    {
        returnValue = F("Moorbachweg");
        break;
    }
    case 223791:
    {
        returnValue = F("Moorbadplatz");
        break;
    }
    case 223792:
    {
        returnValue = F("Moorbadstr.");
        break;
    }
    case 223793:
    {
        returnValue = F("Moorbadweg");
        break;
    }
    case 223794:
    {
        returnValue = F("Moorbecke");
        break;
    }
    case 223795:
    {
        returnValue = F("Moorbeerenweg");
        break;
    }
    case 223796:
    {
        returnValue = F("Moorbeker Str.");
        break;
    }
    case 223797:
    {
        returnValue = F("Moorbekring");
        break;
    }
    case 223798:
    {
        returnValue = F("Moorbekstr.");
        break;
    }
    case 223799:
    {
        returnValue = F("Moorbektwiete");
        break;
    }
    case 223800:
    {
        returnValue = F("Moorbekweg");
        break;
    }
    case 223801:
    {
        returnValue = F("Moorberg");
        break;
    }
    case 223802:
    {
        returnValue = F("Moorberge");
        break;
    }
    case 223803:
    {
        returnValue = F("Moorbirke");
        break;
    }
    case 223804:
    {
        returnValue = F("Moorbirkenweg");
        break;
    }
    case 223805:
    {
        returnValue = F("Moorblek");
        break;
    }
    case 223806:
    {
        returnValue = F("Moorblick");
        break;
    }
    case 223807:
    {
        returnValue = F("Moorblöcken");
        break;
    }
    case 223808:
    {
        returnValue = F("Moorbreede");
        break;
    }
    case 223809:
    {
        returnValue = F("Moorbreite");
        break;
    }
    case 223810:
    {
        returnValue = F("Moorbrinker Weg");
        break;
    }
    case 223811:
    {
        returnValue = F("Moorbrook");
        break;
    }
    case 223812:
    {
        returnValue = F("Moorbrooksredder");
        break;
    }
    case 223813:
    {
        returnValue = F("Moorbruch");
        break;
    }
    case 223814:
    {
        returnValue = F("Moorbruchsweg");
        break;
    }
    case 223815:
    {
        returnValue = F("Moorbruchweg");
        break;
    }
    case 223816:
    {
        returnValue = F("Moorbrücke");
        break;
    }
    case 223817:
    {
        returnValue = F("Moorbrückenkreisel");
        break;
    }
    case 223818:
    {
        returnValue = F("Moorbrückenstr.");
        break;
    }
    case 223819:
    {
        returnValue = F("Moorburg");
        break;
    }
    case 223820:
    {
        returnValue = F("Moorburger Holz");
        break;
    }
    case 223821:
    {
        returnValue = F("Moorburger Str.");
        break;
    }
    case 223822:
    {
        returnValue = F("Moorbusch");
        break;
    }
    case 223823:
    {
        returnValue = F("Moorbäksweg");
        break;
    }
    case 223824:
    {
        returnValue = F("Moorchaussee");
        break;
    }
    case 223825:
    {
        returnValue = F("Moordamm");
        break;
    }
    case 223826:
    {
        returnValue = F("Moordamm I");
        break;
    }
    case 223827:
    {
        returnValue = F("Moordamm II");
        break;
    }
    case 223828:
    {
        returnValue = F("Moordammtwiete");
        break;
    }
    case 223829:
    {
        returnValue = F("Moordeele");
        break;
    }
    case 223830:
    {
        returnValue = F("Moordeich");
        break;
    }
    case 223831:
    {
        returnValue = F("Moordeicher Landstr.");
        break;
    }
    case 223832:
    {
        returnValue = F("Moordeichsweg");
        break;
    }
    case 223833:
    {
        returnValue = F("Moordiek");
        break;
    }
    case 223834:
    {
        returnValue = F("Moordorf");
        break;
    }
    case 223835:
    {
        returnValue = F("Moordorfer Brink");
        break;
    }
    case 223836:
    {
        returnValue = F("Moordorfer Gaste");
        break;
    }
    case 223837:
    {
        returnValue = F("Moordorfer Hellmer");
        break;
    }
    case 223838:
    {
        returnValue = F("Moordorfer Str.");
        break;
    }
    case 223839:
    {
        returnValue = F("Moordorfer Weg");
        break;
    }
    case 223840:
    {
        returnValue = F("Moordrift");
        break;
    }
    case 223841:
    {
        returnValue = F("Mooregge");
        break;
    }
    case 223842:
    {
        returnValue = F("Mooreiche");
        break;
    }
    case 223843:
    {
        returnValue = F("Mooreichenweg");
        break;
    }
    case 223844:
    {
        returnValue = F("Moorend");
        break;
    }
    case 223845:
    {
        returnValue = F("Moorende");
        break;
    }
    case 223846:
    {
        returnValue = F("Moorender Str.");
        break;
    }
    case 223847:
    {
        returnValue = F("Moorender Weg");
        break;
    }
    case 223848:
    {
        returnValue = F("Moorengasse");
        break;
    }
    case 223849:
    {
        returnValue = F("Moorenne");
        break;
    }
    case 223850:
    {
        returnValue = F("Moorennweg");
        break;
    }
    case 223851:
    {
        returnValue = F("Moorenring");
        break;
    }
    case 223852:
    {
        returnValue = F("Moorenringgasse");
        break;
    }
    case 223853:
    {
        returnValue = F("Moorenstr.");
        break;
    }
    case 223854:
    {
        returnValue = F("Moorentaler Str.");
        break;
    }
    case 223855:
    {
        returnValue = F("Moorentenstr.");
        break;
    }
    case 223856:
    {
        returnValue = F("Moorentenweg");
        break;
    }
    case 223857:
    {
        returnValue = F("Moorenweiser Str.");
        break;
    }
    case 223858:
    {
        returnValue = F("Moorer Damm");
        break;
    }
    case 223859:
    {
        returnValue = F("Moorer Str.");
        break;
    }
    case 223860:
    {
        returnValue = F("Moorer Weg");
        break;
    }
    case 223861:
    {
        returnValue = F("Moorerlebnispfad");
        break;
    }
    case 223862:
    {
        returnValue = F("Moorerlebnispfad Huvenhoopsmoor");
        break;
    }
    case 223863:
    {
        returnValue = F("Moorestr.");
        break;
    }
    case 223864:
    {
        returnValue = F("Mooresville-Platz");
        break;
    }
    case 223865:
    {
        returnValue = F("Moorfeld");
        break;
    }
    case 223866:
    {
        returnValue = F("Moorfeldweg");
        break;
    }
    case 223867:
    {
        returnValue = F("Moorfennenweg");
        break;
    }
    case 223868:
    {
        returnValue = F("Moorgarten");
        break;
    }
    case 223869:
    {
        returnValue = F("Moorgarten Hagenburg");
        break;
    }
    case 223870:
    {
        returnValue = F("Moorgartenstr.");
        break;
    }
    case 223871:
    {
        returnValue = F("Moorgartenweg");
        break;
    }
    case 223872:
    {
        returnValue = F("Moorgasse");
        break;
    }
    case 223873:
    {
        returnValue = F("Moorgrabendeich");
        break;
    }
    case 223874:
    {
        returnValue = F("Moorgrabenstr.");
        break;
    }
    case 223875:
    {
        returnValue = F("Moorgrabenweg");
        break;
    }
    case 223876:
    {
        returnValue = F("Moorgrund");
        break;
    }
    case 223877:
    {
        returnValue = F("Moorgrundstr.");
        break;
    }
    case 223878:
    {
        returnValue = F("Moorgutsstr.");
        break;
    }
    case 223879:
    {
        returnValue = F("Moorgutsweg");
        break;
    }
    case 223880:
    {
        returnValue = F("Moorgärten");
        break;
    }
    case 223881:
    {
        returnValue = F("Moorhaldenstr.");
        break;
    }
    case 223882:
    {
        returnValue = F("Moorhausen");
        break;
    }
    case 223883:
    {
        returnValue = F("Moorhausener Weg");
        break;
    }
    case 223884:
    {
        returnValue = F("Moorhauser Brink");
        break;
    }
    case 223885:
    {
        returnValue = F("Moorhauser Helmer");
        break;
    }
    case 223886:
    {
        returnValue = F("Moorhauser Landstr.");
        break;
    }
    case 223887:
    {
        returnValue = F("Moorhauser Str.");
        break;
    }
    case 223888:
    {
        returnValue = F("Moorhauser Weg");
        break;
    }
    case 223889:
    {
        returnValue = F("Moorheide");
        break;
    }
    case 223890:
    {
        returnValue = F("Moorhelmer");
        break;
    }
    case 223891:
    {
        returnValue = F("Moorhelmer Weg");
        break;
    }
    case 223892:
    {
        returnValue = F("Moorhestern");
        break;
    }
    case 223893:
    {
        returnValue = F("Moorhof");
        break;
    }
    case 223894:
    {
        returnValue = F("Moorhofsweg");
        break;
    }
    case 223895:
    {
        returnValue = F("Moorhofweg");
        break;
    }
    case 223896:
    {
        returnValue = F("Moorholt");
        break;
    }
    case 223897:
    {
        returnValue = F("Moorhook");
        break;
    }
    case 223898:
    {
        returnValue = F("Moorhusen");
        break;
    }
    case 223899:
    {
        returnValue = F("Moorhuser Dorfstr.");
        break;
    }
    case 223900:
    {
        returnValue = F("Moorhuser Str.");
        break;
    }
    case 223901:
    {
        returnValue = F("Moorhäuser");
        break;
    }
    case 223902:
    {
        returnValue = F("Moorhäuser Str.");
        break;
    }
    case 223903:
    {
        returnValue = F("Moorhöfe");
        break;
    }
    case 223904:
    {
        returnValue = F("Moorhöfen");
        break;
    }
    case 223905:
    {
        returnValue = F("Moorhörnsweg");
        break;
    }
    case 223906:
    {
        returnValue = F("Mooringer Wäi");
        break;
    }
    case 223907:
    {
        returnValue = F("Mooritzenweg");
        break;
    }
    case 223908:
    {
        returnValue = F("Moorkamp");
        break;
    }
    case 223909:
    {
        returnValue = F("Moorkamps Kreuz");
        break;
    }
    case 223910:
    {
        returnValue = F("Moorkamps Tannen");
        break;
    }
    case 223911:
    {
        returnValue = F("Moorkampsgrund");
        break;
    }
    case 223912:
    {
        returnValue = F("Moorkampshöhe");
        break;
    }
    case 223913:
    {
        returnValue = F("Moorkampsring");
        break;
    }
    case 223914:
    {
        returnValue = F("Moorkampstr.");
        break;
    }
    case 223915:
    {
        returnValue = F("Moorkampsweg");
        break;
    }
    case 223916:
    {
        returnValue = F("Moorkanalweg");
        break;
    }
    case 223917:
    {
        returnValue = F("Moorkante");
        break;
    }
    case 223918:
    {
        returnValue = F("Moorkate");
        break;
    }
    case 223919:
    {
        returnValue = F("Moorkaten");
        break;
    }
    case 223920:
    {
        returnValue = F("Moorkatenweg");
        break;
    }
    case 223921:
    {
        returnValue = F("Moorkehre");
        break;
    }
    case 223922:
    {
        returnValue = F("Moorkiefernweg");
        break;
    }
    case 223923:
    {
        returnValue = F("Moorkieferweg");
        break;
    }
    case 223924:
    {
        returnValue = F("Moorkopfer Planweg");
        break;
    }
    case 223925:
    {
        returnValue = F("Moorkoppel");
        break;
    }
    case 223926:
    {
        returnValue = F("Moorkoppel Redder");
        break;
    }
    case 223927:
    {
        returnValue = F("Moorkoppeldamm");
        break;
    }
    case 223928:
    {
        returnValue = F("Moorkultur");
        break;
    }
    case 223929:
    {
        returnValue = F("Moorkämpe");
        break;
    }
    case 223930:
    {
        returnValue = F("Moorkämpen");
        break;
    }
    case 223931:
    {
        returnValue = F("Moorlage");
        break;
    }
    case 223932:
    {
        returnValue = F("Moorlager Str.");
        break;
    }
    case 223933:
    {
        returnValue = F("Moorlager Weg");
        break;
    }
    case 223934:
    {
        returnValue = F("Moorlageweg");
        break;
    }
    case 223935:
    {
        returnValue = F("Moorland");
        break;
    }
    case 223936:
    {
        returnValue = F("Moorlander Weg");
        break;
    }
    case 223937:
    {
        returnValue = F("Moorlandstr.");
        break;
    }
    case 223938:
    {
        returnValue = F("Moorlandsweg");
        break;
    }
    case 223939:
    {
        returnValue = F("Moorlandweg");
        break;
    }
    case 223940:
    {
        returnValue = F("Moorleegde");
        break;
    }
    case 223941:
    {
        returnValue = F("Moorlehrpfad");
        break;
    }
    case 223942:
    {
        returnValue = F("Moorlehrpfad Stengelhaide");
        break;
    }
    case 223943:
    {
        returnValue = F("Moorlilienweg");
        break;
    }
    case 223944:
    {
        returnValue = F("Moorling");
        break;
    }
    case 223945:
    {
        returnValue = F("Moorloge");
        break;
    }
    case 223946:
    {
        returnValue = F("Moorloh");
        break;
    }
    case 223947:
    {
        returnValue = F("Moorloher Str.");
        break;
    }
    case 223948:
    {
        returnValue = F("Moorloop");
        break;
    }
    case 223949:
    {
        returnValue = F("Moorlücke");
        break;
    }
    case 223950:
    {
        returnValue = F("Moormeedenweg");
        break;
    }
    case 223951:
    {
        returnValue = F("Moormerlander Str.");
        break;
    }
    case 223952:
    {
        returnValue = F("Moormerlanderstr.");
        break;
    }
    case 223953:
    {
        returnValue = F("Moormerlandstr.");
        break;
    }
    case 223954:
    {
        returnValue = F("Moormuseum Moordorf");
        break;
    }
    case 223955:
    {
        returnValue = F("Moormühlenweg");
        break;
    }
    case 223956:
    {
        returnValue = F("Moororter Heide");
        break;
    }
    case 223957:
    {
        returnValue = F("Moororter Str.");
        break;
    }
    case 223958:
    {
        returnValue = F("Moorpadd");
        break;
    }
    case 223959:
    {
        returnValue = F("Moorpfad");
        break;
    }
    case 223960:
    {
        returnValue = F("Moorplaatzen");
        break;
    }
    case 223961:
    {
        returnValue = F("Moorrainweg");
        break;
    }
    case 223962:
    {
        returnValue = F("Moorrandweg");
        break;
    }
    case 223963:
    {
        returnValue = F("Moorredder");
        break;
    }
    case 223964:
    {
        returnValue = F("Moorreger Chaussee");
        break;
    }
    case 223965:
    {
        returnValue = F("Moorreger Weg");
        break;
    }
    case 223966:
    {
        returnValue = F("Moorrehmen");
        break;
    }
    case 223967:
    {
        returnValue = F("Moorreihe");
        break;
    }
    case 223968:
    {
        returnValue = F("Moorremen");
        break;
    }
    case 223969:
    {
        returnValue = F("Moorriemer Weg");
        break;
    }
    case 223970:
    {
        returnValue = F("Moorrundweg");
        break;
    }
    case 223971:
    {
        returnValue = F("Moorrundweg Pietzmoor");
        break;
    }
    case 223972:
    {
        returnValue = F("Moorsberg");
        break;
    }
    case 223973:
    {
        returnValue = F("Moorsbergstr.");
        break;
    }
    case 223974:
    {
        returnValue = F("Moorscher Weg");
        break;
    }
    case 223975:
    {
        returnValue = F("Moorschlag");
        break;
    }
    case 223976:
    {
        returnValue = F("Moorschlatt");
        break;
    }
    case 223977:
    {
        returnValue = F("Moorseebachweg");
        break;
    }
    case 223978:
    {
        returnValue = F("Moorsehdener Weg");
        break;
    }
    case 223979:
    {
        returnValue = F("Moorseiter Str.");
        break;
    }
    case 223980:
    {
        returnValue = F("Moorsiedlung");
        break;
    }
    case 223981:
    {
        returnValue = F("Moorsinger Str.");
        break;
    }
    case 223982:
    {
        returnValue = F("Moorsoll");
        break;
    }
    case 223983:
    {
        returnValue = F("Moorsteg");
        break;
    }
    case 223984:
    {
        returnValue = F("Moorsteig");
        break;
    }
    case 223985:
    {
        returnValue = F("Moorstein");
        break;
    }
    case 223986:
    {
        returnValue = F("Moorstieg");
        break;
    }
    case 223987:
    {
        returnValue = F("Moorstr.");
        break;
    }
    case 223988:
    {
        returnValue = F("Moorstr. Nord");
        break;
    }
    case 223989:
    {
        returnValue = F("Moorstr. Süd");
        break;
    }
    case 223990:
    {
        returnValue = F("Moorstrich");
        break;
    }
    case 223991:
    {
        returnValue = F("Moorstricher Weg");
        break;
    }
    case 223992:
    {
        returnValue = F("Moorstücke");
        break;
    }
    case 223993:
    {
        returnValue = F("Moorstücken");
        break;
    }
    case 223994:
    {
        returnValue = F("Moorstückenweg");
        break;
    }
    case 223995:
    {
        returnValue = F("Moorsumer Str.");
        break;
    }
    case 223996:
    {
        returnValue = F("Moortalsheide");
        break;
    }
    case 223997:
    {
        returnValue = F("Moortalstr.");
        break;
    }
    case 223998:
    {
        returnValue = F("Moorteich");
        break;
    }
    case 223999:
    {
        returnValue = F("Moorteichstr.");
        break;
    }
    case 224000:
    {
        returnValue = F("Moorteichweg");
        break;
    }
    case 224001:
    {
        returnValue = F("Moorteilsweg");
        break;
    }
    case 224002:
    {
        returnValue = F("Moorteufel-Gasse");
        break;
    }
    case 224003:
    {
        returnValue = F("Moortgatstr.");
        break;
    }
    case 224004:
    {
        returnValue = F("Moortorstr.");
        break;
    }
    case 224005:
    {
        returnValue = F("Moortrift");
        break;
    }
    case 224006:
    {
        returnValue = F("Moortunweg");
        break;
    }
    case 224007:
    {
        returnValue = F("Moortwiete");
        break;
    }
    case 224008:
    {
        returnValue = F("Moortümpelweg");
        break;
    }
    case 224009:
    {
        returnValue = F("Moorvilla");
        break;
    }
    case 224010:
    {
        returnValue = F("Moorvogtei");
        break;
    }
    case 224011:
    {
        returnValue = F("Moorvogtstr.");
        break;
    }
    case 224012:
    {
        returnValue = F("Moorvogtsweg");
        break;
    }
    case 224013:
    {
        returnValue = F("Moorwaldweg");
        break;
    }
    case 224014:
    {
        returnValue = F("Moorwanderweg");
        break;
    }
    case 224015:
    {
        returnValue = F("Moorwarfer Gastweg");
        break;
    }
    case 224016:
    {
        returnValue = F("Moorweg");
        break;
    }
    case 224017:
    {
        returnValue = F("Moorweg Eisten");
        break;
    }
    case 224018:
    {
        returnValue = F("Moorweg I");
        break;
    }
    case 224019:
    {
        returnValue = F("Moorweg II");
        break;
    }
    case 224020:
    {
        returnValue = F("Moorweg Nr. 1");
        break;
    }
    case 224021:
    {
        returnValue = F("Moorweg Nr. 10");
        break;
    }
    case 224022:
    {
        returnValue = F("Moorweg Nr. 2");
        break;
    }
    case 224023:
    {
        returnValue = F("Moorweg Nr. 3");
        break;
    }
    case 224024:
    {
        returnValue = F("Moorweg Nr. 4");
        break;
    }
    case 224025:
    {
        returnValue = F("Moorweg Nr. 5");
        break;
    }
    case 224026:
    {
        returnValue = F("Moorweg Nr. 6");
        break;
    }
    case 224027:
    {
        returnValue = F("Moorweg Nr. 7");
        break;
    }
    case 224028:
    {
        returnValue = F("Moorweg Nr. 8");
        break;
    }
    case 224029:
    {
        returnValue = F("Moorweg Nr. 9");
        break;
    }
    case 224030:
    {
        returnValue = F("Moorwege");
        break;
    }
    case 224031:
    {
        returnValue = F("Moorweide");
        break;
    }
    case 224032:
    {
        returnValue = F("Moorweidendamm");
        break;
    }
    case 224033:
    {
        returnValue = F("Moorwettern");
        break;
    }
    case 224034:
    {
        returnValue = F("Moorwiese");
        break;
    }
    case 224035:
    {
        returnValue = F("Moorwiesen");
        break;
    }
    case 224036:
    {
        returnValue = F("Moorwiesendamm");
        break;
    }
    case 224037:
    {
        returnValue = F("Moorwiesenweg");
        break;
    }
    case 224038:
    {
        returnValue = F("Moorwinkel");
        break;
    }
    case 224039:
    {
        returnValue = F("Moorwirtschaft MVV8430");
        break;
    }
    case 224040:
    {
        returnValue = F("Moorwischpark");
        break;
    }
    case 224041:
    {
        returnValue = F("Mooräcker");
        break;
    }
    case 224042:
    {
        returnValue = F("Mooräckerweg");
        break;
    }
    case 224043:
    {
        returnValue = F("Moorästeweg");
        break;
    }
    case 224044:
    {
        returnValue = F("Moos");
        break;
    }
    case 224045:
    {
        returnValue = F("Moos Str.");
        break;
    }
    case 224046:
    {
        returnValue = F("Moosacher Weg");
        break;
    }
    case 224047:
    {
        returnValue = F("Moosachstr.");
        break;
    }
    case 224048:
    {
        returnValue = F("Moosachweg");
        break;
    }
    case 224049:
    {
        returnValue = F("Moosacker");
        break;
    }
    case 224050:
    {
        returnValue = F("Moosackerstr.");
        break;
    }
    case 224051:
    {
        returnValue = F("Moosackerweg");
        break;
    }
    case 224052:
    {
        returnValue = F("Moosalbstr.");
        break;
    }
    case 224053:
    {
        returnValue = F("Moosalbtalstr.");
        break;
    }
    case 224054:
    {
        returnValue = F("Moosalbwanderweg");
        break;
    }
    case 224055:
    {
        returnValue = F("Moosalbweg");
        break;
    }
    case 224056:
    {
        returnValue = F("Moosallee");
        break;
    }
    case 224057:
    {
        returnValue = F("Moosalmstr.");
        break;
    }
    case 224058:
    {
        returnValue = F("Moosanger");
        break;
    }
    case 224059:
    {
        returnValue = F("Moosangerstr.");
        break;
    }
    case 224060:
    {
        returnValue = F("Moosangerweg");
        break;
    }
    case 224061:
    {
        returnValue = F("Moosauhütte");
        break;
    }
    case 224062:
    {
        returnValue = F("Moosausiedlung");
        break;
    }
    case 224063:
    {
        returnValue = F("Moosaustr.");
        break;
    }
    case 224064:
    {
        returnValue = F("Moosbach");
        break;
    }
    case 224065:
    {
        returnValue = F("Moosbacher Hauptstr.");
        break;
    }
    case 224066:
    {
        returnValue = F("Moosbacher Str.");
        break;
    }
    case 224067:
    {
        returnValue = F("Moosbachgrund");
        break;
    }
    case 224068:
    {
        returnValue = F("Moosbachsteig");
        break;
    }
    case 224069:
    {
        returnValue = F("Moosbachstr.");
        break;
    }
    case 224070:
    {
        returnValue = F("Moosbachtal");
        break;
    }
    case 224071:
    {
        returnValue = F("Moosbachwandweg");
        break;
    }
    case 224072:
    {
        returnValue = F("Moosbachweg");
        break;
    }
    case 224073:
    {
        returnValue = F("Moosbauerplatz");
        break;
    }
    case 224074:
    {
        returnValue = F("Moosbauerweg");
        break;
    }
    case 224075:
    {
        returnValue = F("Moosbeerensteig");
        break;
    }
    case 224076:
    {
        returnValue = F("Moosbeerenstr.");
        break;
    }
    case 224077:
    {
        returnValue = F("Moosbeerenweg");
        break;
    }
    case 224078:
    {
        returnValue = F("Moosbeerweg");
        break;
    }
    case 224079:
    {
        returnValue = F("Moosberg");
        break;
    }
    case 224080:
    {
        returnValue = F("Moosberg-Rundweg");
        break;
    }
    case 224081:
    {
        returnValue = F("Moosbergblick");
        break;
    }
    case 224082:
    {
        returnValue = F("Moosberger Str.");
        break;
    }
    case 224083:
    {
        returnValue = F("Moosbergstr.");
        break;
    }
    case 224084:
    {
        returnValue = F("Moosbergweg");
        break;
    }
    case 224085:
    {
        returnValue = F("Moosbeurer Str.");
        break;
    }
    case 224086:
    {
        returnValue = F("Moosbichlstr.");
        break;
    }
    case 224087:
    {
        returnValue = F("Moosbichlweg");
        break;
    }
    case 224088:
    {
        returnValue = F("Moosblick");
        break;
    }
    case 224089:
    {
        returnValue = F("Moosbroksweg");
        break;
    }
    case 224090:
    {
        returnValue = F("Moosbronner Str.");
        break;
    }
    case 224091:
    {
        returnValue = F("Moosbronner Weg");
        break;
    }
    case 224092:
    {
        returnValue = F("Moosbruch");
        break;
    }
    case 224093:
    {
        returnValue = F("Moosbruchstr.");
        break;
    }
    case 224094:
    {
        returnValue = F("Moosbruchweg");
        break;
    }
    case 224095:
    {
        returnValue = F("Moosbruggerstr.");
        break;
    }
    case 224096:
    {
        returnValue = F("Moosbrunnen");
        break;
    }
    case 224097:
    {
        returnValue = F("Moosbrunnenweg");
        break;
    }
    case 224098:
    {
        returnValue = F("Moosbrunner Str.");
        break;
    }
    case 224099:
    {
        returnValue = F("Moosbrücke");
        break;
    }
    case 224100:
    {
        returnValue = F("Moosburger Str.");
        break;
    }
    case 224101:
    {
        returnValue = F("Moosburger Weg");
        break;
    }
    case 224102:
    {
        returnValue = F("Moosburgstr.");
        break;
    }
    case 224103:
    {
        returnValue = F("Moosbügelstr.");
        break;
    }
    case 224104:
    {
        returnValue = F("Moosbügelweg");
        break;
    }
    case 224105:
    {
        returnValue = F("Moosbühl");
        break;
    }
    case 224106:
    {
        returnValue = F("Moosbürg");
        break;
    }
    case 224107:
    {
        returnValue = F("Moosbürger Str.");
        break;
    }
    case 224108:
    {
        returnValue = F("Moosdamm");
        break;
    }
    case 224109:
    {
        returnValue = F("Moosdorfer Weg");
        break;
    }
    case 224110:
    {
        returnValue = F("Moosdorfstr.");
        break;
    }
    case 224111:
    {
        returnValue = F("Moosdünen");
        break;
    }
    case 224112:
    {
        returnValue = F("Moose Wäi");
        break;
    }
    case 224113:
    {
        returnValue = F("Mooseck");
        break;
    }
    case 224114:
    {
        returnValue = F("Moosecker Str.");
        break;
    }
    case 224115:
    {
        returnValue = F("Moosen");
        break;
    }
    case 224116:
    {
        returnValue = F("Moosener Str.");
        break;
    }
    case 224117:
    {
        returnValue = F("Moosenweg");
        break;
    }
    case 224118:
    {
        returnValue = F("Mooser Str.");
        break;
    }
    case 224119:
    {
        returnValue = F("Mooser Weg");
        break;
    }
    case 224120:
    {
        returnValue = F("Moosestr.");
        break;
    }
    case 224121:
    {
        returnValue = F("Mooseurach Boschhof");
        break;
    }
    case 224122:
    {
        returnValue = F("Mooseuracher Str.");
        break;
    }
    case 224123:
    {
        returnValue = F("Moosfeld");
        break;
    }
    case 224124:
    {
        returnValue = F("Moosfelder Bogen");
        break;
    }
    case 224125:
    {
        returnValue = F("Moosfelder Höhe");
        break;
    }
    case 224126:
    {
        returnValue = F("Moosfelder Ring");
        break;
    }
    case 224127:
    {
        returnValue = F("Moosfelder Weg");
        break;
    }
    case 224128:
    {
        returnValue = F("Moosfeldring");
        break;
    }
    case 224129:
    {
        returnValue = F("Moosfeldstr.");
        break;
    }
    case 224130:
    {
        returnValue = F("Moosfeldweg");
        break;
    }
    case 224131:
    {
        returnValue = F("Moosfennstr.");
        break;
    }
    case 224132:
    {
        returnValue = F("Moosflecklweg");
        break;
    }
    case 224133:
    {
        returnValue = F("Moosfurtsiedlung");
        break;
    }
    case 224134:
    {
        returnValue = F("Moosfurtstr.");
        break;
    }
    case 224135:
    {
        returnValue = F("Moosfürther Str.");
        break;
    }
    case 224136:
    {
        returnValue = F("Moosgaard");
        break;
    }
    case 224137:
    {
        returnValue = F("Moosgarten");
        break;
    }
    case 224138:
    {
        returnValue = F("Moosgartenstr.");
        break;
    }
    case 224139:
    {
        returnValue = F("Moosgartenweg");
        break;
    }
    case 224140:
    {
        returnValue = F("Moosgasse");
        break;
    }
    case 224141:
    {
        returnValue = F("Moosgaßl");
        break;
    }
    case 224142:
    {
        returnValue = F("Moosglöckchen");
        break;
    }
    case 224143:
    {
        returnValue = F("Moosgraben");
        break;
    }
    case 224144:
    {
        returnValue = F("Moosgrabenstr.");
        break;
    }
    case 224145:
    {
        returnValue = F("Moosgrabenweg");
        break;
    }
    case 224146:
    {
        returnValue = F("Moosgrund");
        break;
    }
    case 224147:
    {
        returnValue = F("Moosgrundstr.");
        break;
    }
    case 224148:
    {
        returnValue = F("Moosgrundweg");
        break;
    }
    case 224149:
    {
        returnValue = F("Moosgäßlein");
        break;
    }
    case 224150:
    {
        returnValue = F("Mooshaide");
        break;
    }
    case 224151:
    {
        returnValue = F("Mooshaldenweg");
        break;
    }
    case 224152:
    {
        returnValue = F("Moosham");
        break;
    }
    case 224153:
    {
        returnValue = F("Mooshamer Str.");
        break;
    }
    case 224154:
    {
        returnValue = F("Mooshamer Weg");
        break;
    }
    case 224155:
    {
        returnValue = F("Mooshappen");
        break;
    }
    case 224156:
    {
        returnValue = F("Mooshappener Str.");
        break;
    }
    case 224157:
    {
        returnValue = F("Mooshauptenweg");
        break;
    }
    case 224158:
    {
        returnValue = F("Mooshaus");
        break;
    }
    case 224159:
    {
        returnValue = F("Mooshauser Str.");
        break;
    }
    case 224160:
    {
        returnValue = F("Mooshauweg");
        break;
    }
    case 224161:
    {
        returnValue = F("Mooshecke");
        break;
    }
    case 224162:
    {
        returnValue = F("Moosheide");
        break;
    }
    case 224163:
    {
        returnValue = F("Moosheimer Str.");
        break;
    }
    case 224164:
    {
        returnValue = F("Mooshell");
        break;
    }
    case 224165:
    {
        returnValue = F("Mooshof");
        break;
    }
    case 224166:
    {
        returnValue = F("Mooshofweg");
        break;
    }
    case 224167:
    {
        returnValue = F("Moosholzweg");
        break;
    }
    case 224168:
    {
        returnValue = F("Mooshöhenweg");
        break;
    }
    case 224169:
    {
        returnValue = F("Mooshütter Weg");
        break;
    }
    case 224170:
    {
        returnValue = F("Moosinninger Str.");
        break;
    }
    case 224171:
    {
        returnValue = F("Moosinninger Weg");
        break;
    }
    case 224172:
    {
        returnValue = F("Mooskammerweg");
        break;
    }
    case 224173:
    {
        returnValue = F("Mooskamp");
        break;
    }
    case 224174:
    {
        returnValue = F("Mooskampweg");
        break;
    }
    case 224175:
    {
        returnValue = F("Mooskaule");
        break;
    }
    case 224176:
    {
        returnValue = F("Moosklingenweg");
        break;
    }
    case 224177:
    {
        returnValue = F("Mooskoppel");
        break;
    }
    case 224178:
    {
        returnValue = F("Mooskorb Nr: 19 und 20");
        break;
    }
    case 224179:
    {
        returnValue = F("Mooskramerweg");
        break;
    }
    case 224180:
    {
        returnValue = F("Mooslachenstr.");
        break;
    }
    case 224181:
    {
        returnValue = F("Mooslandstr.");
        break;
    }
    case 224182:
    {
        returnValue = F("Moosleitenweg");
        break;
    }
    case 224183:
    {
        returnValue = F("Mooslethstr.");
        break;
    }
    case 224184:
    {
        returnValue = F("Mooslindlweg");
        break;
    }
    case 224185:
    {
        returnValue = F("Mooslohstr.");
        break;
    }
    case 224186:
    {
        returnValue = F("Mooslängenweg");
        break;
    }
    case 224187:
    {
        returnValue = F("Mooslängstr.");
        break;
    }
    case 224188:
    {
        returnValue = F("Moosmahd");
        break;
    }
    case 224189:
    {
        returnValue = F("Moosmangstr.");
        break;
    }
    case 224190:
    {
        returnValue = F("Moosmatt");
        break;
    }
    case 224191:
    {
        returnValue = F("Moosmattenweg");
        break;
    }
    case 224192:
    {
        returnValue = F("Moosmattstr.");
        break;
    }
    case 224193:
    {
        returnValue = F("Moosmattweg");
        break;
    }
    case 224194:
    {
        returnValue = F("Moosmühle");
        break;
    }
    case 224195:
    {
        returnValue = F("Moosmühlenweg");
        break;
    }
    case 224196:
    {
        returnValue = F("Moosmühlweg");
        break;
    }
    case 224197:
    {
        returnValue = F("Moosmüller-Geräumt");
        break;
    }
    case 224198:
    {
        returnValue = F("Moospfad");
        break;
    }
    case 224199:
    {
        returnValue = F("Moospfarrerweg");
        break;
    }
    case 224200:
    {
        returnValue = F("Moospfuhl");
        break;
    }
    case 224201:
    {
        returnValue = F("Moosplattenweg");
        break;
    }
    case 224202:
    {
        returnValue = F("Moospoint");
        break;
    }
    case 224203:
    {
        returnValue = F("Moospointweg");
        break;
    }
    case 224204:
    {
        returnValue = F("Moospott");
        break;
    }
    case 224205:
    {
        returnValue = F("Moosrain");
        break;
    }
    case 224206:
    {
        returnValue = F("Moosrainer Weg");
        break;
    }
    case 224207:
    {
        returnValue = F("Moosreuterweg");
        break;
    }
    case 224208:
    {
        returnValue = F("Moosring");
        break;
    }
    case 224209:
    {
        returnValue = F("Moosschlagweg");
        break;
    }
    case 224210:
    {
        returnValue = F("Moosschleifweg");
        break;
    }
    case 224211:
    {
        returnValue = F("Moosschneiderweg");
        break;
    }
    case 224212:
    {
        returnValue = F("Moosspringstr.");
        break;
    }
    case 224213:
    {
        returnValue = F("Moosstefflstr.");
        break;
    }
    case 224214:
    {
        returnValue = F("Moosstiege");
        break;
    }
    case 224215:
    {
        returnValue = F("Moosstr.");
        break;
    }
    case 224216:
    {
        returnValue = F("Moossträßle");
        break;
    }
    case 224217:
    {
        returnValue = F("Moosteich");
        break;
    }
    case 224218:
    {
        returnValue = F("Moosterstr.");
        break;
    }
    case 224219:
    {
        returnValue = F("Moosturmstr.");
        break;
    }
    case 224220:
    {
        returnValue = F("Moosturmweg");
        break;
    }
    case 224221:
    {
        returnValue = F("Moosuferstr.");
        break;
    }
    case 224222:
    {
        returnValue = F("Moosvennstr.");
        break;
    }
    case 224223:
    {
        returnValue = F("Mooswaldstr.");
        break;
    }
    case 224224:
    {
        returnValue = F("Mooswaldweg");
        break;
    }
    case 224225:
    {
        returnValue = F("Moosweg");
        break;
    }
    case 224226:
    {
        returnValue = F("Moosweiher");
        break;
    }
    case 224227:
    {
        returnValue = F("Moosweiher Str.");
        break;
    }
    case 224228:
    {
        returnValue = F("Moosweiherstr.");
        break;
    }
    case 224229:
    {
        returnValue = F("Mooswiese");
        break;
    }
    case 224230:
    {
        returnValue = F("Mooswiesen");
        break;
    }
    case 224231:
    {
        returnValue = F("Mooswiesen Weg");
        break;
    }
    case 224232:
    {
        returnValue = F("Mooswiesenring");
        break;
    }
    case 224233:
    {
        returnValue = F("Mooswiesenstr.");
        break;
    }
    case 224234:
    {
        returnValue = F("Mooswiesenweg");
        break;
    }
    case 224235:
    {
        returnValue = F("Mooswiesertal");
        break;
    }
    case 224236:
    {
        returnValue = F("Mooswiesstr.");
        break;
    }
    case 224237:
    {
        returnValue = F("Mooswinkel");
        break;
    }
    case 224238:
    {
        returnValue = F("Mooswinkeln");
        break;
    }
    case 224239:
    {
        returnValue = F("Mooswinkl");
        break;
    }
    case 224240:
    {
        returnValue = F("Moosäcker");
        break;
    }
    case 224241:
    {
        returnValue = F("Moosäckerstr.");
        break;
    }
    case 224242:
    {
        returnValue = F("Moosänger");
        break;
    }
    case 224243:
    {
        returnValue = F("Moosängerstr.");
        break;
    }
    case 224244:
    {
        returnValue = F("Mootjesweg");
        break;
    }
    case 224245:
    {
        returnValue = F("Mootzenstr.");
        break;
    }
    case 224246:
    {
        returnValue = F("Mooweiler Str.");
        break;
    }
    case 224247:
    {
        returnValue = F("Moppelweg");
        break;
    }
    case 224248:
    {
        returnValue = F("Moppenstr.");
        break;
    }
    case 224249:
    {
        returnValue = F("Moraaser Weg");
        break;
    }
    case 224250:
    {
        returnValue = F("Moraltpark");
        break;
    }
    case 224251:
    {
        returnValue = F("Morandweg");
        break;
    }
    case 224252:
    {
        returnValue = F("Morangiser Str.");
        break;
    }
    case 224253:
    {
        returnValue = F("Morastweg");
        break;
    }
    case 224254:
    {
        returnValue = F("Moratzentwiete");
        break;
    }
    case 224255:
    {
        returnValue = F("Morawekstr.");
        break;
    }
    case 224256:
    {
        returnValue = F("Morbach");
        break;
    }
    case 224257:
    {
        returnValue = F("Morbacher Park");
        break;
    }
    case 224258:
    {
        returnValue = F("Morbacher Str.");
        break;
    }
    case 224259:
    {
        returnValue = F("Morbacherweg");
        break;
    }
    case 224260:
    {
        returnValue = F("Morbihanweg");
        break;
    }
    case 224261:
    {
        returnValue = F("Morchelweg");
        break;
    }
    case 224262:
    {
        returnValue = F("Morchensterner Str.");
        break;
    }
    case 224263:
    {
        returnValue = F("Mordallee");
        break;
    }
    case 224264:
    {
        returnValue = F("Mordbrücke");
        break;
    }
    case 224265:
    {
        returnValue = F("Mordbudenweg");
        break;
    }
    case 224266:
    {
        returnValue = F("Mordgrubenweg");
        break;
    }
    case 224267:
    {
        returnValue = F("Mordgrundweg");
        break;
    }
    case 224268:
    {
        returnValue = F("Mordgründel");
        break;
    }
    case 224269:
    {
        returnValue = F("Mordhorstweg");
        break;
    }
    case 224270:
    {
        returnValue = F("Mordian-Loer-Weg");
        break;
    }
    case 224271:
    {
        returnValue = F("Mordiogäßle");
        break;
    }
    case 224272:
    {
        returnValue = F("Mordklingenweg");
        break;
    }
    case 224273:
    {
        returnValue = F("Mordlauer Weg");
        break;
    }
    case 224274:
    {
        returnValue = F("Mordmühle");
        break;
    }
    case 224275:
    {
        returnValue = F("Mordsteinweg");
        break;
    }
    case 224276:
    {
        returnValue = F("Mordstockweg");
        break;
    }
    case 224277:
    {
        returnValue = F("Mordtalweg");
        break;
    }
    case 224278:
    {
        returnValue = F("Mordthalweg");
        break;
    }
    case 224279:
    {
        returnValue = F("Mordweg");
        break;
    }
    case 224280:
    {
        returnValue = F("Moreaustr.");
        break;
    }
    case 224281:
    {
        returnValue = F("Morellenberg");
        break;
    }
    case 224282:
    {
        returnValue = F("Morellenweg");
        break;
    }
    case 224283:
    {
        returnValue = F("Morellostr.");
        break;
    }
    case 224284:
    {
        returnValue = F("Morenhovener Str.");
        break;
    }
    case 224285:
    {
        returnValue = F("Morethgasse");
        break;
    }
    case 224286:
    {
        returnValue = F("Morethsgut");
        break;
    }
    case 224287:
    {
        returnValue = F("Moretschneise");
        break;
    }
    case 224288:
    {
        returnValue = F("Moretstr.");
        break;
    }
    case 224289:
    {
        returnValue = F("Moretzstr.");
        break;
    }
    case 224290:
    {
        returnValue = F("Morezstr.");
        break;
    }
    case 224291:
    {
        returnValue = F("Morfstr.");
        break;
    }
    case 224292:
    {
        returnValue = F("Morgelen");
        break;
    }
    case 224293:
    {
        returnValue = F("Morgenacker");
        break;
    }
    case 224294:
    {
        returnValue = F("Morgenbach");
        break;
    }
    case 224295:
    {
        returnValue = F("Morgenbacher Str.");
        break;
    }
    case 224296:
    {
        returnValue = F("Morgenbacher Weg");
        break;
    }
    case 224297:
    {
        returnValue = F("Morgenbergstr.");
        break;
    }
    case 224298:
    {
        returnValue = F("Morgenbergweg");
        break;
    }
    case 224299:
    {
        returnValue = F("Morgenbitz");
        break;
    }
    case 224300:
    {
        returnValue = F("Morgenblick");
        break;
    }
    case 224301:
    {
        returnValue = F("Morgenbrodtstaler Graben");
        break;
    }
    case 224302:
    {
        returnValue = F("Morgenbrunnenweg");
        break;
    }
    case 224303:
    {
        returnValue = F("Morgengabe");
        break;
    }
    case 224304:
    {
        returnValue = F("Morgengasse");
        break;
    }
    case 224305:
    {
        returnValue = F("Morgenhornweg");
        break;
    }
    case 224306:
    {
        returnValue = F("Morgenhöhe");
        break;
    }
    case 224307:
    {
        returnValue = F("Morgenitzer Berg");
        break;
    }
    case 224308:
    {
        returnValue = F("Morgenland");
        break;
    }
    case 224309:
    {
        returnValue = F("Morgenlandstr.");
        break;
    }
    case 224310:
    {
        returnValue = F("Morgenleite");
        break;
    }
    case 224311:
    {
        returnValue = F("Morgenleithe");
        break;
    }
    case 224312:
    {
        returnValue = F("Morgenleithenweg");
        break;
    }
    case 224313:
    {
        returnValue = F("Morgenländer Str.");
        break;
    }
    case 224314:
    {
        returnValue = F("Morgenmoor");
        break;
    }
    case 224315:
    {
        returnValue = F("Morgenrot");
        break;
    }
    case 224316:
    {
        returnValue = F("Morgenrothweg");
        break;
    }
    case 224317:
    {
        returnValue = F("Morgenröte");
        break;
    }
    case 224318:
    {
        returnValue = F("Morgenröthe");
        break;
    }
    case 224319:
    {
        returnValue = F("Morgenröthe-Carlsfelder-Weg");
        break;
    }
    case 224320:
    {
        returnValue = F("Morgenröther Str.");
        break;
    }
    case 224321:
    {
        returnValue = F("Morgensegen");
        break;
    }
    case 224322:
    {
        returnValue = F("Morgenseite");
        break;
    }
    case 224323:
    {
        returnValue = F("Morgensonne");
        break;
    }
    case 224324:
    {
        returnValue = F("Morgensonnenweg");
        break;
    }
    case 224325:
    {
        returnValue = F("Morgenstern");
        break;
    }
    case 224326:
    {
        returnValue = F("Morgensterngasse");
        break;
    }
    case 224327:
    {
        returnValue = F("Morgensternstr.");
        break;
    }
    case 224328:
    {
        returnValue = F("Morgensternweg");
        break;
    }
    case 224329:
    {
        returnValue = F("Morgenstr.");
        break;
    }
    case 224330:
    {
        returnValue = F("Morgenstücke");
        break;
    }
    case 224331:
    {
        returnValue = F("Morgenstückshelmer");
        break;
    }
    case 224332:
    {
        returnValue = F("Morgentaustr.");
        break;
    }
    case 224333:
    {
        returnValue = F("Morgenweg");
        break;
    }
    case 224334:
    {
        returnValue = F("Morgenweide");
        break;
    }
    case 224335:
    {
        returnValue = F("Morgenwiese");
        break;
    }
    case 224336:
    {
        returnValue = F("Morgenzeile");
        break;
    }
    case 224337:
    {
        returnValue = F("Morgenäcker");
        break;
    }
    case 224338:
    {
        returnValue = F("Morgenäckerweg");
        break;
    }
    case 224339:
    {
        returnValue = F("Morgethofweg");
        break;
    }
    case 224340:
    {
        returnValue = F("Morgnerstr.");
        break;
    }
    case 224341:
    {
        returnValue = F("Morhoffstr.");
        break;
    }
    case 224342:
    {
        returnValue = F("Morianstr.");
        break;
    }
    case 224343:
    {
        returnValue = F("Moribo");
        break;
    }
    case 224344:
    {
        returnValue = F("Morier Str.");
        break;
    }
    case 224345:
    {
        returnValue = F("Morinckweg");
        break;
    }
    case 224346:
    {
        returnValue = F("Moringer Str.");
        break;
    }
    case 224347:
    {
        returnValue = F("Morio-Muskat-Str.");
        break;
    }
    case 224348:
    {
        returnValue = F("Moriostr.");
        break;
    }
    case 224349:
    {
        returnValue = F("Morioweg");
        break;
    }
    case 224350:
    {
        returnValue = F("Morisse");
        break;
    }
    case 224351:
    {
        returnValue = F("Morissestr.");
        break;
    }
    case 224352:
    {
        returnValue = F("Moritz-Abend-Str.");
        break;
    }
    case 224353:
    {
        returnValue = F("Moritz-Allee");
        break;
    }
    case 224354:
    {
        returnValue = F("Moritz-Bayer-Str.");
        break;
    }
    case 224355:
    {
        returnValue = F("Moritz-Becherer-Str.");
        break;
    }
    case 224356:
    {
        returnValue = F("Moritz-Braun-Str.");
        break;
    }
    case 224357:
    {
        returnValue = F("Moritz-Brüll-Str.");
        break;
    }
    case 224358:
    {
        returnValue = F("Moritz-Budge-Str.");
        break;
    }
    case 224359:
    {
        returnValue = F("Moritz-Cohen-Str.");
        break;
    }
    case 224360:
    {
        returnValue = F("Moritz-Fernbacher-Str.");
        break;
    }
    case 224361:
    {
        returnValue = F("Moritz-Fischer-Berg");
        break;
    }
    case 224362:
    {
        returnValue = F("Moritz-Fischer-Str.");
        break;
    }
    case 224363:
    {
        returnValue = F("Moritz-Garte-Steg");
        break;
    }
    case 224364:
    {
        returnValue = F("Moritz-Großmann-Platz");
        break;
    }
    case 224365:
    {
        returnValue = F("Moritz-Hanser-Weg");
        break;
    }
    case 224366:
    {
        returnValue = F("Moritz-Henle-Str.");
        break;
    }
    case 224367:
    {
        returnValue = F("Moritz-Hensoldt-Str.");
        break;
    }
    case 224368:
    {
        returnValue = F("Moritz-Hilf-Str.");
        break;
    }
    case 224369:
    {
        returnValue = F("Moritz-Hill-Str.");
        break;
    }
    case 224370:
    {
        returnValue = F("Moritz-Kabaker-Str.");
        break;
    }
    case 224371:
    {
        returnValue = F("Moritz-Katz-Str.");
        break;
    }
    case 224372:
    {
        returnValue = F("Moritz-Kaufmann-Weg");
        break;
    }
    case 224373:
    {
        returnValue = F("Moritz-Korn-Str.");
        break;
    }
    case 224374:
    {
        returnValue = F("Moritz-Kuhl-Str.");
        break;
    }
    case 224375:
    {
        returnValue = F("Moritz-Löscher-Str.");
        break;
    }
    case 224376:
    {
        returnValue = F("Moritz-Meissen-Str.");
        break;
    }
    case 224377:
    {
        returnValue = F("Moritz-Meyer-Str.");
        break;
    }
    case 224378:
    {
        returnValue = F("Moritz-Mohl-Weg");
        break;
    }
    case 224379:
    {
        returnValue = F("Moritz-Müller-Str.");
        break;
    }
    case 224380:
    {
        returnValue = F("Moritz-Müller-Weg");
        break;
    }
    case 224381:
    {
        returnValue = F("Moritz-Nebe-Weg");
        break;
    }
    case 224382:
    {
        returnValue = F("Moritz-Nietzel-Str.");
        break;
    }
    case 224383:
    {
        returnValue = F("Moritz-Ostwalt-Str.");
        break;
    }
    case 224384:
    {
        returnValue = F("Moritz-Richter-Str.");
        break;
    }
    case 224385:
    {
        returnValue = F("Moritz-Rülf-Str.");
        break;
    }
    case 224386:
    {
        returnValue = F("Moritz-Schauenburg-Str.");
        break;
    }
    case 224387:
    {
        returnValue = F("Moritz-Schreber-Str.");
        break;
    }
    case 224388:
    {
        returnValue = F("Moritz-Schweig-Weg");
        break;
    }
    case 224389:
    {
        returnValue = F("Moritz-Seebeck-Allee");
        break;
    }
    case 224390:
    {
        returnValue = F("Moritz-Seebeck-Str.");
        break;
    }
    case 224391:
    {
        returnValue = F("Moritz-Unger-Allee");
        break;
    }
    case 224392:
    {
        returnValue = F("Moritz-Vierfelder-Str.");
        break;
    }
    case 224393:
    {
        returnValue = F("Moritz-Walther-Weg");
        break;
    }
    case 224394:
    {
        returnValue = F("Moritz-Wandt-Str.");
        break;
    }
    case 224395:
    {
        returnValue = F("Moritz-Werner-Str.");
        break;
    }
    case 224396:
    {
        returnValue = F("Moritz-Wesermann-Str.");
        break;
    }
    case 224397:
    {
        returnValue = F("Moritz-Wiggers-Str.");
        break;
    }
    case 224398:
    {
        returnValue = F("Moritz-Zahnwetzer-Str.");
        break;
    }
    case 224399:
    {
        returnValue = F("Moritz-von-Berlepsch-Str.");
        break;
    }
    case 224400:
    {
        returnValue = F("Moritz-von-Hutten-Str.");
        break;
    }
    case 224401:
    {
        returnValue = F("Moritz-von-Nassau-Str.");
        break;
    }
    case 224402:
    {
        returnValue = F("Moritz-von-Oranien-Str.");
        break;
    }
    case 224403:
    {
        returnValue = F("Moritz-von-Rohr-Str.");
        break;
    }
    case 224404:
    {
        returnValue = F("Moritz-von-Sachsen-Platz");
        break;
    }
    case 224405:
    {
        returnValue = F("Moritz-von-Schwind-Str.");
        break;
    }
    case 224406:
    {
        returnValue = F("Moritz-von-Schwind-Weg");
        break;
    }
    case 224407:
    {
        returnValue = F("Moritzanger");
        break;
    }
    case 224408:
    {
        returnValue = F("Moritzberg");
        break;
    }
    case 224409:
    {
        returnValue = F("Moritzberger Weg");
        break;
    }
    case 224410:
    {
        returnValue = F("Moritzbergstr.");
        break;
    }
    case 224411:
    {
        returnValue = F("Moritzbergweg");
        break;
    }
    case 224412:
    {
        returnValue = F("Moritzburger Landstr.");
        break;
    }
    case 224413:
    {
        returnValue = F("Moritzburger Platz");
        break;
    }
    case 224414:
    {
        returnValue = F("Moritzburger Str.");
        break;
    }
    case 224415:
    {
        returnValue = F("Moritzburgstr.");
        break;
    }
    case 224416:
    {
        returnValue = F("Moritzdorf");
        break;
    }
    case 224417:
    {
        returnValue = F("Moritzer Str.");
        break;
    }
    case 224418:
    {
        returnValue = F("Moritzer Weg");
        break;
    }
    case 224419:
    {
        returnValue = F("Moritzfelder Str.");
        break;
    }
    case 224420:
    {
        returnValue = F("Moritzgasse");
        break;
    }
    case 224421:
    {
        returnValue = F("Moritzgraben");
        break;
    }
    case 224422:
    {
        returnValue = F("Moritzgrundweg");
        break;
    }
    case 224423:
    {
        returnValue = F("Moritzhagen");
        break;
    }
    case 224424:
    {
        returnValue = F("Moritzhof");
        break;
    }
    case 224425:
    {
        returnValue = F("Moritzhöfen");
        break;
    }
    case 224426:
    {
        returnValue = F("Moritzkirchhof");
        break;
    }
    case 224427:
    {
        returnValue = F("Moritzplan");
        break;
    }
    case 224428:
    {
        returnValue = F("Moritzplatz");
        break;
    }
    case 224429:
    {
        returnValue = F("Moritzstr.");
        break;
    }
    case 224430:
    {
        returnValue = F("Moritztal");
        break;
    }
    case 224431:
    {
        returnValue = F("Moritzweg");
        break;
    }
    case 224432:
    {
        returnValue = F("Moritzwiesen");
        break;
    }
    case 224433:
    {
        returnValue = F("Moriweg");
        break;
    }
    case 224434:
    {
        returnValue = F("Moriz-Miller-Str.");
        break;
    }
    case 224435:
    {
        returnValue = F("Moriz-Miller-Weg");
        break;
    }
    case 224436:
    {
        returnValue = F("Morizanenstr.");
        break;
    }
    case 224437:
    {
        returnValue = F("Morkener Str.");
        break;
    }
    case 224438:
    {
        returnValue = F("Morkensiefen");
        break;
    }
    case 224439:
    {
        returnValue = F("Morkepützer Str.");
        break;
    }
    case 224440:
    {
        returnValue = F("Morlaasstr. Ost");
        break;
    }
    case 224441:
    {
        returnValue = F("Morlaasstr. West");
        break;
    }
    case 224442:
    {
        returnValue = F("Morlauterer Str.");
        break;
    }
    case 224443:
    {
        returnValue = F("Morler Dorfstr.");
        break;
    }
    case 224444:
    {
        returnValue = F("Morler Mühlberg");
        break;
    }
    case 224445:
    {
        returnValue = F("Morlesauer Str.");
        break;
    }
    case 224446:
    {
        returnValue = F("Morleser Str.");
        break;
    }
    case 224447:
    {
        returnValue = F("Morleystr.");
        break;
    }
    case 224448:
    {
        returnValue = F("Morlinge");
        break;
    }
    case 224449:
    {
        returnValue = F("Morlstr.");
        break;
    }
    case 224450:
    {
        returnValue = F("Mornauerweg");
        break;
    }
    case 224451:
    {
        returnValue = F("Mornshäuser Str.");
        break;
    }
    case 224452:
    {
        returnValue = F("Mornsweg");
        break;
    }
    case 224453:
    {
        returnValue = F("Morper Allee");
        break;
    }
    case 224454:
    {
        returnValue = F("Morra");
        break;
    }
    case 224455:
    {
        returnValue = F("Morrieder Str.");
        break;
    }
    case 224456:
    {
        returnValue = F("Morrienweg");
        break;
    }
    case 224457:
    {
        returnValue = F("Morrstr.");
        break;
    }
    case 224458:
    {
        returnValue = F("Morsbach");
        break;
    }
    case 224459:
    {
        returnValue = F("Morsbacher Str.");
        break;
    }
    case 224460:
    {
        returnValue = F("Morsbacherstr.");
        break;
    }
    case 224461:
    {
        returnValue = F("Morsbachplatz");
        break;
    }
    case 224462:
    {
        returnValue = F("Morsbachtalstr.");
        break;
    }
    case 224463:
    {
        returnValue = F("Morsbachweg");
        break;
    }
    case 224464:
    {
        returnValue = F("Morsbergstr.");
        break;
    }
    case 224465:
    {
        returnValue = F("Morsbergweg");
        break;
    }
    case 224466:
    {
        returnValue = F("Morsbroicher Str.");
        break;
    }
    case 224467:
    {
        returnValue = F("Morschborn");
        break;
    }
    case 224468:
    {
        returnValue = F("Morscheider Str.");
        break;
    }
    case 224469:
    {
        returnValue = F("Morschener Str.");
        break;
    }
    case 224470:
    {
        returnValue = F("Morschenicher Str.");
        break;
    }
    case 224471:
    {
        returnValue = F("Morscher Weg");
        break;
    }
    case 224472:
    {
        returnValue = F("Morschfeldweg");
        break;
    }
    case 224473:
    {
        returnValue = F("Morschheimer Str.");
        break;
    }
    case 224474:
    {
        returnValue = F("Morschheimer Weg");
        break;
    }
    case 224475:
    {
        returnValue = F("Morscholzer Str.");
        break;
    }
    case 224476:
    {
        returnValue = F("Morscholzer Weg");
        break;
    }
    case 224477:
    {
        returnValue = F("Morschreuther Weg");
        break;
    }
    case 224478:
    {
        returnValue = F("Morschweiler Str.");
        break;
    }
    case 224479:
    {
        returnValue = F("Morsestr.");
        break;
    }
    case 224480:
    {
        returnValue = F("Morseweg");
        break;
    }
    case 224481:
    {
        returnValue = F("Morsinksweg");
        break;
    }
    case 224482:
    {
        returnValue = F("Morslebener Str.");
        break;
    }
    case 224483:
    {
        returnValue = F("Morsstiege");
        break;
    }
    case 224484:
    {
        returnValue = F("Morsstr.");
        break;
    }
    case 224485:
    {
        returnValue = F("Morsteiner Weg");
        break;
    }
    case 224486:
    {
        returnValue = F("Morsteinstr.");
        break;
    }
    case 224487:
    {
        returnValue = F("Morsteinweg");
        break;
    }
    case 224488:
    {
        returnValue = F("Morstr.");
        break;
    }
    case 224489:
    {
        returnValue = F("Morsum Hallig");
        break;
    }
    case 224490:
    {
        returnValue = F("Morsum Kliff - NSG");
        break;
    }
    case 224491:
    {
        returnValue = F("Morsumer Eichenweg");
        break;
    }
    case 224492:
    {
        returnValue = F("Morsumer Eschweg");
        break;
    }
    case 224493:
    {
        returnValue = F("Morsumer Schulstr.");
        break;
    }
    case 224494:
    {
        returnValue = F("Morsumkoogstr.");
        break;
    }
    case 224495:
    {
        returnValue = F("Mortagneweg");
        break;
    }
    case 224496:
    {
        returnValue = F("Morteaustr.");
        break;
    }
    case 224497:
    {
        returnValue = F("Mortelbachstr.");
        break;
    }
    case 224498:
    {
        returnValue = F("Mortelgrund");
        break;
    }
    case 224499:
    {
        returnValue = F("Morteln");
        break;
    }
    case 224500:
    {
        returnValue = F("Mortelstr.");
        break;
    }
    case 224501:
    {
        returnValue = F("Morthorststr.");
        break;
    }
    case 224502:
    {
        returnValue = F("Morungen");
        break;
    }
    case 224503:
    {
        returnValue = F("Morungenstr.");
        break;
    }
    case 224504:
    {
        returnValue = F("Morunger Str.");
        break;
    }
    case 224505:
    {
        returnValue = F("Moränenhöhe");
        break;
    }
    case 224506:
    {
        returnValue = F("Moränenstr.");
        break;
    }
    case 224507:
    {
        returnValue = F("Moränenweg");
        break;
    }
    case 224508:
    {
        returnValue = F("Mosaikstr.");
        break;
    }
    case 224509:
    {
        returnValue = F("Mosaikweg");
        break;
    }
    case 224510:
    {
        returnValue = F("Mosauerweg");
        break;
    }
    case 224511:
    {
        returnValue = F("Mosbach");
        break;
    }
    case 224512:
    {
        returnValue = F("Mosbacher Marktweg");
        break;
    }
    case 224513:
    {
        returnValue = F("Mosbacher Str.");
        break;
    }
    case 224514:
    {
        returnValue = F("Mosbacher Weg");
        break;
    }
    case 224515:
    {
        returnValue = F("Mosbacher Weg - M3");
        break;
    }
    case 224516:
    {
        returnValue = F("Mosbichlstr.");
        break;
    }
    case 224517:
    {
        returnValue = F("Mosbruggerstr.");
        break;
    }
    case 224518:
    {
        returnValue = F("Moschauer Damm");
        break;
    }
    case 224519:
    {
        returnValue = F("Mosche-Merzig-Str.");
        break;
    }
    case 224520:
    {
        returnValue = F("Moscheestr.");
        break;
    }
    case 224521:
    {
        returnValue = F("Moscheeweg");
        break;
    }
    case 224522:
    {
        returnValue = F("Moschelhalde");
        break;
    }
    case 224523:
    {
        returnValue = F("Moschellandsberg");
        break;
    }
    case 224524:
    {
        returnValue = F("Moschelmühle");
        break;
    }
    case 224525:
    {
        returnValue = F("Moschelstr.");
        break;
    }
    case 224526:
    {
        returnValue = F("Moschen");
        break;
    }
    case 224527:
    {
        returnValue = F("Moschendorf");
        break;
    }
    case 224528:
    {
        returnValue = F("Moschenwiese");
        break;
    }
    case 224529:
    {
        returnValue = F("Moschenäckerweg");
        break;
    }
    case 224530:
    {
        returnValue = F("Moscheroschstr.");
        break;
    }
    case 224531:
    {
        returnValue = F("Moscheroschweg");
        break;
    }
    case 224532:
    {
        returnValue = F("Moscheweg");
        break;
    }
    case 224533:
    {
        returnValue = F("Moschheimer Str.");
        break;
    }
    case 224534:
    {
        returnValue = F("Moschwiger Str.");
        break;
    }
    case 224535:
    {
        returnValue = F("Moschwitzer Str.");
        break;
    }
    case 224536:
    {
        returnValue = F("Moschützweg");
        break;
    }
    case 224537:
    {
        returnValue = F("Mosebach-Steg");
        break;
    }
    case 224538:
    {
        returnValue = F("Mosebergstr.");
        break;
    }
    case 224539:
    {
        returnValue = F("Mosebergweg");
        break;
    }
    case 224540:
    {
        returnValue = F("Mosebolle");
        break;
    }
    case 224541:
    {
        returnValue = F("Mosegraben");
        break;
    }
    case 224542:
    {
        returnValue = F("Mosel");
        break;
    }
    case 224543:
    {
        returnValue = F("Mosel Our Weg");
        break;
    }
    case 224544:
    {
        returnValue = F("Mosel-Our-Weg");
        break;
    }
    case 224545:
    {
        returnValue = F("Moselallee");
        break;
    }
    case 224546:
    {
        returnValue = F("Moselaue");
        break;
    }
    case 224547:
    {
        returnValue = F("Moselbahnstr.");
        break;
    }
    case 224548:
    {
        returnValue = F("Moselblick");
        break;
    }
    case 224549:
    {
        returnValue = F("Moselblickstr.");
        break;
    }
    case 224550:
    {
        returnValue = F("Moselbruchweg");
        break;
    }
    case 224551:
    {
        returnValue = F("Moseler Allee");
        break;
    }
    case 224552:
    {
        returnValue = F("Moseler Schulstr.");
        break;
    }
    case 224553:
    {
        returnValue = F("Moseler Str.");
        break;
    }
    case 224554:
    {
        returnValue = F("Moseler Weg");
        break;
    }
    case 224555:
    {
        returnValue = F("Moselerberg");
        break;
    }
    case 224556:
    {
        returnValue = F("Moselgrund");
        break;
    }
    case 224557:
    {
        returnValue = F("Moselhöhenradweg");
        break;
    }
    case 224558:
    {
        returnValue = F("Moselhöhenweg");
        break;
    }
    case 224559:
    {
        returnValue = F("Mosellaschacht");
        break;
    }
    case 224560:
    {
        returnValue = F("Moselpesch");
        break;
    }
    case 224561:
    {
        returnValue = F("Moselpromenade");
        break;
    }
    case 224562:
    {
        returnValue = F("Moselpromenade Alf");
        break;
    }
    case 224563:
    {
        returnValue = F("Moselstr.");
        break;
    }
    case 224564:
    {
        returnValue = F("Moseltal");
        break;
    }
    case 224565:
    {
        returnValue = F("Moseltalstr.");
        break;
    }
    case 224566:
    {
        returnValue = F("Moselufer");
        break;
    }
    case 224567:
    {
        returnValue = F("Moseluferpromenade");
        break;
    }
    case 224568:
    {
        returnValue = F("Moseluferstr.");
        break;
    }
    case 224569:
    {
        returnValue = F("Moselweg");
        break;
    }
    case 224570:
    {
        returnValue = F("Moselweinstr.");
        break;
    }
    case 224571:
    {
        returnValue = F("Moselweißer Str.");
        break;
    }
    case 224572:
    {
        returnValue = F("Mosen");
        break;
    }
    case 224573:
    {
        returnValue = F("Mosenberg");
        break;
    }
    case 224574:
    {
        returnValue = F("Mosenbergstr.");
        break;
    }
    case 224575:
    {
        returnValue = F("Mosenbergsweg");
        break;
    }
    case 224576:
    {
        returnValue = F("Mosenbuck");
        break;
    }
    case 224577:
    {
        returnValue = F("Mosener Weg");
        break;
    }
    case 224578:
    {
        returnValue = F("Mosenhof");
        break;
    }
    case 224579:
    {
        returnValue = F("Mosenstr.");
        break;
    }
    case 224580:
    {
        returnValue = F("Mosenweg");
        break;
    }
    case 224581:
    {
        returnValue = F("Moser");
        break;
    }
    case 224582:
    {
        returnValue = F("Moser Weg");
        break;
    }
    case 224583:
    {
        returnValue = F("Moser-Säge");
        break;
    }
    case 224584:
    {
        returnValue = F("Moserberg");
        break;
    }
    case 224585:
    {
        returnValue = F("Moserbergweg");
        break;
    }
    case 224586:
    {
        returnValue = F("Mosergässchen");
        break;
    }
    case 224587:
    {
        returnValue = F("Moserkopfweg");
        break;
    }
    case 224588:
    {
        returnValue = F("Mosersbruchweg");
        break;
    }
    case 224589:
    {
        returnValue = F("Moserstr.");
        break;
    }
    case 224590:
    {
        returnValue = F("Moserweg");
        break;
    }
    case 224591:
    {
        returnValue = F("Moserwiesn");
        break;
    }
    case 224592:
    {
        returnValue = F("Moserösche");
        break;
    }
    case 224593:
    {
        returnValue = F("Moses Krug");
        break;
    }
    case 224594:
    {
        returnValue = F("Moses-Gumbrich-Str.");
        break;
    }
    case 224595:
    {
        returnValue = F("Mosesbrunnenweg");
        break;
    }
    case 224596:
    {
        returnValue = F("Mosewaldstr.");
        break;
    }
    case 224597:
    {
        returnValue = F("Mosewarfer Weg");
        break;
    }
    case 224598:
    {
        returnValue = F("Moseweg");
        break;
    }
    case 224599:
    {
        returnValue = F("Moshainweg");
        break;
    }
    case 224600:
    {
        returnValue = F("Mosheimer Str.");
        break;
    }
    case 224601:
    {
        returnValue = F("Mosheimstr.");
        break;
    }
    case 224602:
    {
        returnValue = F("Mosheimweg");
        break;
    }
    case 224603:
    {
        returnValue = F("Mosigkauer Str.");
        break;
    }
    case 224604:
    {
        returnValue = F("Mosigkauer Weg");
        break;
    }
    case 224605:
    {
        returnValue = F("Mosigkauer-Heide-Randweg");
        break;
    }
    case 224606:
    {
        returnValue = F("Mosigweg");
        break;
    }
    case 224607:
    {
        returnValue = F("Mosinger Str.");
        break;
    }
    case 224608:
    {
        returnValue = F("Mosinger Weg");
        break;
    }
    case 224609:
    {
        returnValue = F("Moskamp");
        break;
    }
    case 224610:
    {
        returnValue = F("Moskauer Str.");
        break;
    }
    case 224611:
    {
        returnValue = F("Moskaustr.");
        break;
    }
    case 224612:
    {
        returnValue = F("Mosleshöhe");
        break;
    }
    case 224613:
    {
        returnValue = F("Moslinie");
        break;
    }
    case 224614:
    {
        returnValue = F("Mospurgerstr.");
        break;
    }
    case 224615:
    {
        returnValue = F("Mosraberg");
        break;
    }
    case 224616:
    {
        returnValue = F("Mosrinstr.");
        break;
    }
    case 224617:
    {
        returnValue = F("Mossauer Str.");
        break;
    }
    case 224618:
    {
        returnValue = F("Mosse");
        break;
    }
    case 224619:
    {
        returnValue = F("Mossenberger Str.");
        break;
    }
    case 224620:
    {
        returnValue = F("Mossendorfer Str.");
        break;
    }
    case 224621:
    {
        returnValue = F("Mosskamp");
        break;
    }
    case 224622:
    {
        returnValue = F("Mossweg");
        break;
    }
    case 224623:
    {
        returnValue = F("Mostbirnenlehrpfad");
        break;
    }
    case 224624:
    {
        returnValue = F("Mostenbach Äckerweg");
        break;
    }
    case 224625:
    {
        returnValue = F("Mostenbergweg");
        break;
    }
    case 224626:
    {
        returnValue = F("Mostereiweg");
        break;
    }
    case 224627:
    {
        returnValue = F("Mosterhagen");
        break;
    }
    case 224628:
    {
        returnValue = F("Mosterstr.");
        break;
    }
    case 224629:
    {
        returnValue = F("Mostertplatz");
        break;
    }
    case 224630:
    {
        returnValue = F("Mosterzstr.");
        break;
    }
    case 224631:
    {
        returnValue = F("Mostgasse");
        break;
    }
    case 224632:
    {
        returnValue = F("Mostholzstr.");
        break;
    }
    case 224633:
    {
        returnValue = F("Mostplatz");
        break;
    }
    case 224634:
    {
        returnValue = F("Moststeig");
        break;
    }
    case 224635:
    {
        returnValue = F("Moststr.");
        break;
    }
    case 224636:
    {
        returnValue = F("Mostwanderweg");
        break;
    }
    case 224637:
    {
        returnValue = F("Mostweg");
        break;
    }
    case 224638:
    {
        returnValue = F("Mosäcker Weg");
        break;
    }
    case 224639:
    {
        returnValue = F("Motelredder");
        break;
    }
    case 224640:
    {
        returnValue = F("Motenhof");
        break;
    }
    case 224641:
    {
        returnValue = F("Motharistr.");
        break;
    }
    case 224642:
    {
        returnValue = F("Mothariweg");
        break;
    }
    case 224643:
    {
        returnValue = F("Mothe");
        break;
    }
    case 224644:
    {
        returnValue = F("Motheimchen");
        break;
    }
    case 224645:
    {
        returnValue = F("Mothen");
        break;
    }
    case 224646:
    {
        returnValue = F("Motherson Str.");
        break;
    }
    case 224647:
    {
        returnValue = F("Motherwell-Park");
        break;
    }
    case 224648:
    {
        returnValue = F("Mothmecke");
        break;
    }
    case 224649:
    {
        returnValue = F("Moto-Cross-Strecke");
        break;
    }
    case 224650:
    {
        returnValue = F("Moto-Cross-Weg");
        break;
    }
    case 224651:
    {
        returnValue = F("Motocross Rennstrecke");
        break;
    }
    case 224652:
    {
        returnValue = F("Motocrossstrecke Hamma");
        break;
    }
    case 224653:
    {
        returnValue = F("Motorenhausweg");
        break;
    }
    case 224654:
    {
        returnValue = F("Motorenstr.");
        break;
    }
    case 224655:
    {
        returnValue = F("Motorikpark");
        break;
    }
    case 224656:
    {
        returnValue = F("Motricher Str.");
        break;
    }
    case 224657:
    {
        returnValue = F("Motricher Weg");
        break;
    }
    case 224658:
    {
        returnValue = F("Motsch Grillhutte Nordic Trails");
        break;
    }
    case 224659:
    {
        returnValue = F("Motschenbacher Weg");
        break;
    }
    case 224660:
    {
        returnValue = F("Motte Broichhausen");
        break;
    }
    case 224661:
    {
        returnValue = F("Mottelerstr.");
        break;
    }
    case 224662:
    {
        returnValue = F("Mottener Str.");
        break;
    }
    case 224663:
    {
        returnValue = F("Motterwitz");
        break;
    }
    case 224664:
    {
        returnValue = F("Mottgerser Str.");
        break;
    }
    case 224665:
    {
        returnValue = F("Mottlauweg");
        break;
    }
    case 224666:
    {
        returnValue = F("Mottmannstr.");
        break;
    }
    case 224667:
    {
        returnValue = F("Motzacher Haldenweg");
        break;
    }
    case 224668:
    {
        returnValue = F("Motzacher Weg");
        break;
    }
    case 224669:
    {
        returnValue = F("Motzenbrunn");
        break;
    }
    case 224670:
    {
        returnValue = F("Motzener Dorfstr.");
        break;
    }
    case 224671:
    {
        returnValue = F("Motzener Fähre");
        break;
    }
    case 224672:
    {
        returnValue = F("Motzener Str.");
        break;
    }
    case 224673:
    {
        returnValue = F("Motzengasse");
        break;
    }
    case 224674:
    {
        returnValue = F("Motzenhaus");
        break;
    }
    case 224675:
    {
        returnValue = F("Motzenhofener Weg");
        break;
    }
    case 224676:
    {
        returnValue = F("Motzenroder Str.");
        break;
    }
    case 224677:
    {
        returnValue = F("Motzenseeweg");
        break;
    }
    case 224678:
    {
        returnValue = F("Motzerfeld");
        break;
    }
    case 224679:
    {
        returnValue = F("Motzersreuth");
        break;
    }
    case 224680:
    {
        returnValue = F("Motzerstr.");
        break;
    }
    case 224681:
    {
        returnValue = F("Motzfelder Str.");
        break;
    }
    case 224682:
    {
        returnValue = F("Motzfeldstr.");
        break;
    }
    case 224683:
    {
        returnValue = F("Motzinger Weg");
        break;
    }
    case 224684:
    {
        returnValue = F("Motzküppel");
        break;
    }
    case 224685:
    {
        returnValue = F("Motzlarer Str.");
        break;
    }
    case 224686:
    {
        returnValue = F("Moubisstr.");
        break;
    }
    case 224687:
    {
        returnValue = F("Mouginsstr.");
        break;
    }
    case 224688:
    {
        returnValue = F("Moulineauxplatz");
        break;
    }
    case 224689:
    {
        returnValue = F("Moulinsring");
        break;
    }
    case 224690:
    {
        returnValue = F("Mount Vernon Court");
        break;
    }
    case 224691:
    {
        returnValue = F("Mountainbike-Dirt-Parcour");
        break;
    }
    case 224692:
    {
        returnValue = F("Moureauxstr.");
        break;
    }
    case 224693:
    {
        returnValue = F("Mousonring");
        break;
    }
    case 224694:
    {
        returnValue = F("Moutingerstr.");
        break;
    }
    case 224695:
    {
        returnValue = F("Mouvauxstr.");
        break;
    }
    case 224696:
    {
        returnValue = F("Mover Str.");
        break;
    }
    case 224697:
    {
        returnValue = F("Mowenbusch");
        break;
    }
    case 224698:
    {
        returnValue = F("Moyaux-Allee");
        break;
    }
    case 224699:
    {
        returnValue = F("Moyländer Allee");
        break;
    }
    case 224700:
    {
        returnValue = F("Moyländer Str.");
        break;
    }
    case 224701:
    {
        returnValue = F("Mozart-Weg");
        break;
    }
    case 224702:
    {
        returnValue = F("Mozartallee");
        break;
    }
    case 224703:
    {
        returnValue = F("Mozartplatz");
        break;
    }
    case 224704:
    {
        returnValue = F("Mozartring");
        break;
    }
    case 224705:
    {
        returnValue = F("Mozartsteg");
        break;
    }
    case 224706:
    {
        returnValue = F("Mozartstiege");
        break;
    }
    case 224707:
    {
        returnValue = F("Mozartstr.");
        break;
    }
    case 224708:
    {
        returnValue = F("Mozartweg");
        break;
    }
    case 224709:
    {
        returnValue = F("Mozartwinkel");
        break;
    }
    case 224710:
    {
        returnValue = F("Mozenborner Str.");
        break;
    }
    case 224711:
    {
        returnValue = F("Mozenrechweg");
        break;
    }
    case 224712:
    {
        returnValue = F("Mozenweg");
        break;
    }
    case 224713:
    {
        returnValue = F("Moßbacher Str.");
        break;
    }
    case 224714:
    {
        returnValue = F("Moßdamm");
        break;
    }
    case 224715:
    {
        returnValue = F("Moßhagenweg");
        break;
    }
    case 224716:
    {
        returnValue = F("Moßkampweg");
        break;
    }
    case 224717:
    {
        returnValue = F("Moßlerstr.");
        break;
    }
    case 224718:
    {
        returnValue = F("Moßweg");
        break;
    }
    case 224719:
    {
        returnValue = F("Mragowo-Str.");
        break;
    }
    case 224720:
    {
        returnValue = F("Muasem Gaat");
        break;
    }
    case 224721:
    {
        returnValue = F("Muasem Hüs");
        break;
    }
    case 224722:
    {
        returnValue = F("Muchallstr.");
        break;
    }
    case 224723:
    {
        returnValue = F("Muchelndorf");
        break;
    }
    case 224724:
    {
        returnValue = F("Muchelsdorf");
        break;
    }
    case 224725:
    {
        returnValue = F("Muchelwitzer Weg");
        break;
    }
    case 224726:
    {
        returnValue = F("Muchenländer Brücke");
        break;
    }
    case 224727:
    {
        returnValue = F("Muchenländer Str.");
        break;
    }
    case 224728:
    {
        returnValue = F("Muchenländer Weg");
        break;
    }
    case 224729:
    {
        returnValue = F("Mucher Kreisverkehr");
        break;
    }
    case 224730:
    {
        returnValue = F("Mucher Str.");
        break;
    }
    case 224731:
    {
        returnValue = F("Mucherwiesenweg");
        break;
    }
    case 224732:
    {
        returnValue = F("Mucheweg");
        break;
    }
    case 224733:
    {
        returnValue = F("Muchhausener Str.");
        break;
    }
    case 224734:
    {
        returnValue = F("Muchhauser Str.");
        break;
    }
    case 224735:
    {
        returnValue = F("Muchower Heubrücke");
        break;
    }
    case 224736:
    {
        returnValue = F("Muchower Str.");
        break;
    }
    case 224737:
    {
        returnValue = F("Muchowshof");
        break;
    }
    case 224738:
    {
        returnValue = F("Muchtweg");
        break;
    }
    case 224739:
    {
        returnValue = F("Muck-Lamberty-Weg");
        break;
    }
    case 224740:
    {
        returnValue = F("Muckbachweg");
        break;
    }
    case 224741:
    {
        returnValue = F("Muckbergweg");
        break;
    }
    case 224742:
    {
        returnValue = F("Muckbertweg");
        break;
    }
    case 224743:
    {
        returnValue = F("Muckenbach");
        break;
    }
    case 224744:
    {
        returnValue = F("Muckenbacher Weg");
        break;
    }
    case 224745:
    {
        returnValue = F("Muckenbaumstr.");
        break;
    }
    case 224746:
    {
        returnValue = F("Muckenbrünnlein");
        break;
    }
    case 224747:
    {
        returnValue = F("Muckenbühlstr.");
        break;
    }
    case 224748:
    {
        returnValue = F("Muckendorf");
        break;
    }
    case 224749:
    {
        returnValue = F("Muckenloch");
        break;
    }
    case 224750:
    {
        returnValue = F("Muckenlochlinie");
        break;
    }
    case 224751:
    {
        returnValue = F("Muckenlochweg");
        break;
    }
    case 224752:
    {
        returnValue = F("Muckenmühle");
        break;
    }
    case 224753:
    {
        returnValue = F("Muckenmühlenweg");
        break;
    }
    case 224754:
    {
        returnValue = F("Muckenreuth");
        break;
    }
    case 224755:
    {
        returnValue = F("Muckenreuther Str.");
        break;
    }
    case 224756:
    {
        returnValue = F("Muckenreuther Sträßchen");
        break;
    }
    case 224757:
    {
        returnValue = F("Muckenschopfer Str.");
        break;
    }
    case 224758:
    {
        returnValue = F("Muckenseestr.");
        break;
    }
    case 224759:
    {
        returnValue = F("Muckenseeweg");
        break;
    }
    case 224760:
    {
        returnValue = F("Muckensturmer Str.");
        break;
    }
    case 224761:
    {
        returnValue = F("Muckental");
        break;
    }
    case 224762:
    {
        returnValue = F("Muckentaler Str.");
        break;
    }
    case 224763:
    {
        returnValue = F("Muckenthal");
        break;
    }
    case 224764:
    {
        returnValue = F("Muckenwinkel");
        break;
    }
    case 224765:
    {
        returnValue = F("Muckhorster Weg");
        break;
    }
    case 224766:
    {
        returnValue = F("Muckileinweg");
        break;
    }
    case 224767:
    {
        returnValue = F("Muckmißplanie");
        break;
    }
    case 224768:
    {
        returnValue = F("Muckrower Dorfstr.");
        break;
    }
    case 224769:
    {
        returnValue = F("Muckrower Str.");
        break;
    }
    case 224770:
    {
        returnValue = F("Muckrower Waldweg");
        break;
    }
    case 224771:
    {
        returnValue = F("Muckrower Weg");
        break;
    }
    case 224772:
    {
        returnValue = F("Mudamm");
        break;
    }
    case 224773:
    {
        returnValue = F("Mudauer Str.");
        break;
    }
    case 224774:
    {
        returnValue = F("Muddeberg");
        break;
    }
    case 224775:
    {
        returnValue = F("Muddelkampsweg");
        break;
    }
    case 224776:
    {
        returnValue = F("Muddenhagener Str.");
        break;
    }
    case 224777:
    {
        returnValue = F("Muddenhagener Weg");
        break;
    }
    case 224778:
    {
        returnValue = F("Muddenkamp");
        break;
    }
    case 224779:
    {
        returnValue = F("Mudder-Schulten-Str.");
        break;
    }
    case 224780:
    {
        returnValue = F("Mudder-Schulten-Straat");
        break;
    }
    case 224781:
    {
        returnValue = F("Muddewiese");
        break;
    }
    case 224782:
    {
        returnValue = F("Muddweg");
        break;
    }
    case 224783:
    {
        returnValue = F("Muderbolz");
        break;
    }
    case 224784:
    {
        returnValue = F("Mudersbacher Str.");
        break;
    }
    case 224785:
    {
        returnValue = F("Mudershäuser Str.");
        break;
    }
    case 224786:
    {
        returnValue = F("Mudrowweg");
        break;
    }
    case 224787:
    {
        returnValue = F("Mudtalstr.");
        break;
    }
    case 224788:
    {
        returnValue = F("Mudweg");
        break;
    }
    case 224789:
    {
        returnValue = F("Muehlenstr.");
        break;
    }
    case 224790:
    {
        returnValue = F("Muellersteigle");
        break;
    }
    case 224791:
    {
        returnValue = F("Muellerstr.");
        break;
    }
    case 224792:
    {
        returnValue = F("Muellerweg");
        break;
    }
    case 224793:
    {
        returnValue = F("Muenchstr.");
        break;
    }
    case 224794:
    {
        returnValue = F("Muerenbruch");
        break;
    }
    case 224795:
    {
        returnValue = F("Muesfeldstr.");
        break;
    }
    case 224796:
    {
        returnValue = F("Mueß Ausbau");
        break;
    }
    case 224797:
    {
        returnValue = F("Mueßer Bucht");
        break;
    }
    case 224798:
    {
        returnValue = F("Mueßer Str.");
        break;
    }
    case 224799:
    {
        returnValue = F("Mueßloh");
        break;
    }
    case 224800:
    {
        returnValue = F("Muffatstr.");
        break;
    }
    case 224801:
    {
        returnValue = F("Muffelstr.");
        break;
    }
    case 224802:
    {
        returnValue = F("Muffelweg");
        break;
    }
    case 224803:
    {
        returnValue = F("Muffenheimer Weg");
        break;
    }
    case 224804:
    {
        returnValue = F("Muffenschlagweg");
        break;
    }
    case 224805:
    {
        returnValue = F("Muffgasse");
        break;
    }
    case 224806:
    {
        returnValue = F("Mufflon-Downhill");
        break;
    }
    case 224807:
    {
        returnValue = F("Mufflonweg");
        break;
    }
    case 224808:
    {
        returnValue = F("Muflon");
        break;
    }
    case 224809:
    {
        returnValue = F("Muggardt");
        break;
    }
    case 224810:
    {
        returnValue = F("Muggelweg");
        break;
    }
    case 224811:
    {
        returnValue = F("Muggenbach");
        break;
    }
    case 224812:
    {
        returnValue = F("Muggengärtlestr.");
        break;
    }
    case 224813:
    {
        returnValue = F("Muggenheuweg");
        break;
    }
    case 224814:
    {
        returnValue = F("Muggensturmer Landstr.");
        break;
    }
    case 224815:
    {
        returnValue = F("Muggensturmer Str.");
        break;
    }
    case 224816:
    {
        returnValue = F("Muggensturmstr.");
        break;
    }
    case 224817:
    {
        returnValue = F("Muggentalerstr.");
        break;
    }
    case 224818:
    {
        returnValue = F("Muggenthal");
        break;
    }
    case 224819:
    {
        returnValue = F("Muggenthaler Str.");
        break;
    }
    case 224820:
    {
        returnValue = F("Muggenthalerstr.");
        break;
    }
    case 224821:
    {
        returnValue = F("Muggenwinkel");
        break;
    }
    case 224822:
    {
        returnValue = F("Muggeserweg");
        break;
    }
    case 224823:
    {
        returnValue = F("Muggesfelder Str.");
        break;
    }
    case 224824:
    {
        returnValue = F("Muglhof");
        break;
    }
    case 224825:
    {
        returnValue = F("Muglhofer Str.");
        break;
    }
    case 224826:
    {
        returnValue = F("Muglitz");
        break;
    }
    case 224827:
    {
        returnValue = F("Muglitzer Weg");
        break;
    }
    case 224828:
    {
        returnValue = F("Muhder Heuweg");
        break;
    }
    case 224829:
    {
        returnValue = F("Muhlbrücken");
        break;
    }
    case 224830:
    {
        returnValue = F("Muhlburg");
        break;
    }
    case 224831:
    {
        returnValue = F("Muhle");
        break;
    }
    case 224832:
    {
        returnValue = F("Muhler Str.");
        break;
    }
    case 224833:
    {
        returnValue = F("Muhlerhagen");
        break;
    }
    case 224834:
    {
        returnValue = F("Muhlhufstr.");
        break;
    }
    case 224835:
    {
        returnValue = F("Muhlitz");
        break;
    }
    case 224836:
    {
        returnValue = F("Muhlitzer Str.");
        break;
    }
    case 224837:
    {
        returnValue = F("Muhlstieg");
        break;
    }
    case 224838:
    {
        returnValue = F("Muhlystr.");
        break;
    }
    case 224839:
    {
        returnValue = F("Muhrbergstr.");
        break;
    }
    case 224840:
    {
        returnValue = F("Muhre-Wipp-Platz");
        break;
    }
    case 224841:
    {
        returnValue = F("Muhren");
        break;
    }
    case 224842:
    {
        returnValue = F("Muhrfeldstr.");
        break;
    }
    case 224843:
    {
        returnValue = F("Muhrgassbühnd");
        break;
    }
    case 224844:
    {
        returnValue = F("Muhrstr.");
        break;
    }
    case 224845:
    {
        returnValue = F("Muhrweg");
        break;
    }
    case 224846:
    {
        returnValue = F("Muhs'sche Koppel");
        break;
    }
    case 224847:
    {
        returnValue = F("Muizonerplatz");
        break;
    }
    case 224848:
    {
        returnValue = F("Mukenweg");
        break;
    }
    case 224849:
    {
        returnValue = F("Mukran");
        break;
    }
    case 224850:
    {
        returnValue = F("Mukraner Str.");
        break;
    }
    case 224851:
    {
        returnValue = F("Mulartshütter Schneise");
        break;
    }
    case 224852:
    {
        returnValue = F("Mulbacher Str.");
        break;
    }
    case 224853:
    {
        returnValue = F("Muldaer Str.");
        break;
    }
    case 224854:
    {
        returnValue = F("Muldebrücke");
        break;
    }
    case 224855:
    {
        returnValue = F("Muldebrücke Wurzen");
        break;
    }
    case 224856:
    {
        returnValue = F("Muldenaue");
        break;
    }
    case 224857:
    {
        returnValue = F("Muldenauer Str.");
        break;
    }
    case 224858:
    {
        returnValue = F("Muldenauer Weg");
        break;
    }
    case 224859:
    {
        returnValue = F("Muldenbachstr.");
        break;
    }
    case 224860:
    {
        returnValue = F("Muldenberger Str.");
        break;
    }
    case 224861:
    {
        returnValue = F("Muldenblick");
        break;
    }
    case 224862:
    {
        returnValue = F("Muldenbrandweg");
        break;
    }
    case 224863:
    {
        returnValue = F("Muldenbrücke");
        break;
    }
    case 224864:
    {
        returnValue = F("Muldenbrücke Bockau");
        break;
    }
    case 224865:
    {
        returnValue = F("Muldenbrücke Remse");
        break;
    }
    case 224866:
    {
        returnValue = F("Muldenebenweg");
        break;
    }
    case 224867:
    {
        returnValue = F("Muldengasse");
        break;
    }
    case 224868:
    {
        returnValue = F("Muldenhammerstr.");
        break;
    }
    case 224869:
    {
        returnValue = F("Muldenhof");
        break;
    }
    case 224870:
    {
        returnValue = F("Muldenhäuser");
        break;
    }
    case 224871:
    {
        returnValue = F("Muldenhütten");
        break;
    }
    case 224872:
    {
        returnValue = F("Muldeninsel");
        break;
    }
    case 224873:
    {
        returnValue = F("Muldenpfad");
        break;
    }
    case 224874:
    {
        returnValue = F("Muldenradweg");
        break;
    }
    case 224875:
    {
        returnValue = F("Muldenscherre");
        break;
    }
    case 224876:
    {
        returnValue = F("Muldensiedlung");
        break;
    }
    case 224877:
    {
        returnValue = F("Muldensteiner Str.");
        break;
    }
    case 224878:
    {
        returnValue = F("Muldenstr.");
        break;
    }
    case 224879:
    {
        returnValue = F("Muldentalbrücke");
        break;
    }
    case 224880:
    {
        returnValue = F("Muldentalsiedlung");
        break;
    }
    case 224881:
    {
        returnValue = F("Muldentalstr.");
        break;
    }
    case 224882:
    {
        returnValue = F("Muldentalweg");
        break;
    }
    case 224883:
    {
        returnValue = F("Muldenterrasse");
        break;
    }
    case 224884:
    {
        returnValue = F("Muldenufer");
        break;
    }
    case 224885:
    {
        returnValue = F("Muldenwanderweg");
        break;
    }
    case 224886:
    {
        returnValue = F("Muldenweg");
        break;
    }
    case 224887:
    {
        returnValue = F("Muldenäcker");
        break;
    }
    case 224888:
    {
        returnValue = F("Muldestr.");
        break;
    }
    case 224889:
    {
        returnValue = F("Muldewasserüberleitung");
        break;
    }
    case 224890:
    {
        returnValue = F("Muldeweg");
        break;
    }
    case 224891:
    {
        returnValue = F("Muldgasse");
        break;
    }
    case 224892:
    {
        returnValue = F("Muldstr.");
        break;
    }
    case 224893:
    {
        returnValue = F("Muldweg");
        break;
    }
    case 224894:
    {
        returnValue = F("Mulfinger Str.");
        break;
    }
    case 224895:
    {
        returnValue = F("Muliweg");
        break;
    }
    case 224896:
    {
        returnValue = F("Mullbarg");
        break;
    }
    case 224897:
    {
        returnValue = F("Mullbarger Str.");
        break;
    }
    case 224898:
    {
        returnValue = F("Mullberger Str.");
        break;
    }
    case 224899:
    {
        returnValue = F("Mullberger Weg");
        break;
    }
    case 224900:
    {
        returnValue = F("Mulldamm");
        break;
    }
    case 224901:
    {
        returnValue = F("Mulle");
        break;
    }
    case 224902:
    {
        returnValue = F("Mullegrund");
        break;
    }
    case 224903:
    {
        returnValue = F("Mullerkopfweg");
        break;
    }
    case 224904:
    {
        returnValue = F("Mullhagen");
        break;
    }
    case 224905:
    {
        returnValue = F("Mullhörn");
        break;
    }
    case 224906:
    {
        returnValue = F("Mullstr.");
        break;
    }
    case 224907:
    {
        returnValue = F("Mullwarf");
        break;
    }
    case 224908:
    {
        returnValue = F("Mullwehen");
        break;
    }
    case 224909:
    {
        returnValue = F("Mullwerder");
        break;
    }
    case 224910:
    {
        returnValue = F("Mulmke");
        break;
    }
    case 224911:
    {
        returnValue = F("Mulmker Weg");
        break;
    }
    case 224912:
    {
        returnValue = F("Mulmshorner Str.");
        break;
    }
    case 224913:
    {
        returnValue = F("Mulmshorner Weg");
        break;
    }
    case 224914:
    {
        returnValue = F("Mulsanner Str.");
        break;
    }
    case 224915:
    {
        returnValue = F("Mulsowstr.");
        break;
    }
    case 224916:
    {
        returnValue = F("Mulsterberg");
        break;
    }
    case 224917:
    {
        returnValue = F("Mulsumer Großer Specken");
        break;
    }
    case 224918:
    {
        returnValue = F("Mulsumer Landstr.");
        break;
    }
    case 224919:
    {
        returnValue = F("Mulsumer Weg");
        break;
    }
    case 224920:
    {
        returnValue = F("Multatulistr.");
        break;
    }
    case 224921:
    {
        returnValue = F("Multhamer Str.");
        break;
    }
    case 224922:
    {
        returnValue = F("Multhöpen");
        break;
    }
    case 224923:
    {
        returnValue = F("Multring");
        break;
    }
    case 224924:
    {
        returnValue = F("Multscherweg");
        break;
    }
    case 224925:
    {
        returnValue = F("Mulvanyring");
        break;
    }
    case 224926:
    {
        returnValue = F("Mulvanystr.");
        break;
    }
    case 224927:
    {
        returnValue = F("Mulzergraben");
        break;
    }
    case 224928:
    {
        returnValue = F("Mulzerstr.");
        break;
    }
    case 224929:
    {
        returnValue = F("Mulzerweg");
        break;
    }
    case 224930:
    {
        returnValue = F("Mulzgasse");
        break;
    }
    case 224931:
    {
        returnValue = F("Mulzhausweg");
        break;
    }
    case 224932:
    {
        returnValue = F("Mulzstr.");
        break;
    }
    case 224933:
    {
        returnValue = F("Mumbacher Str.");
        break;
    }
    case 224934:
    {
        returnValue = F("Mumbacher Talstr.");
        break;
    }
    case 224935:
    {
        returnValue = F("Mummelseestr.");
        break;
    }
    case 224936:
    {
        returnValue = F("Mummelseeweg");
        break;
    }
    case 224937:
    {
        returnValue = F("Mummendorf");
        break;
    }
    case 224938:
    {
        returnValue = F("Mummendorfer Str.");
        break;
    }
    case 224939:
    {
        returnValue = F("Mummendorfer Weg");
        break;
    }
    case 224940:
    {
        returnValue = F("Mummenhofstr.");
        break;
    }
    case 224941:
    {
        returnValue = F("Mummenroth");
        break;
    }
    case 224942:
    {
        returnValue = F("Mummenröther Str.");
        break;
    }
    case 224943:
    {
        returnValue = F("Mummental");
        break;
    }
    case 224944:
    {
        returnValue = F("Mumpferfährstr.");
        break;
    }
    case 224945:
    {
        returnValue = F("Mumsdorfer Str.");
        break;
    }
    case 224946:
    {
        returnValue = F("Munastr.");
        break;
    }
    case 224947:
    {
        returnValue = F("Munaweg");
        break;
    }
    case 224948:
    {
        returnValue = F("Munckerstr.");
        break;
    }
    case 224949:
    {
        returnValue = F("Muncloh");
        break;
    }
    case 224950:
    {
        returnValue = F("Mundahn");
        break;
    }
    case 224951:
    {
        returnValue = F("Mundatstr.");
        break;
    }
    case 224952:
    {
        returnValue = F("Mundatweg");
        break;
    }
    case 224953:
    {
        returnValue = F("Munde");
        break;
    }
    case 224954:
    {
        returnValue = F("Mundelfinger Str.");
        break;
    }
    case 224955:
    {
        returnValue = F("Mundelsheimer Str.");
        break;
    }
    case 224956:
    {
        returnValue = F("Mundelsheimer Weg");
        break;
    }
    case 224957:
    {
        returnValue = F("Mundenheimer Weg");
        break;
    }
    case 224958:
    {
        returnValue = F("Mundenhofer Weg");
        break;
    }
    case 224959:
    {
        returnValue = F("Munderkinger Str.");
        break;
    }
    case 224960:
    {
        returnValue = F("Munderloher Str.");
        break;
    }
    case 224961:
    {
        returnValue = F("Mundersumer Weg");
        break;
    }
    case 224962:
    {
        returnValue = F("Mundinger Str.");
        break;
    }
    case 224963:
    {
        returnValue = F("Mundinger Weg");
        break;
    }
    case 224964:
    {
        returnValue = F("Mundinggasse");
        break;
    }
    case 224965:
    {
        returnValue = F("Mundostr.");
        break;
    }
    case 224966:
    {
        returnValue = F("Mundschenkweg");
        break;
    }
    case 224967:
    {
        returnValue = F("Mundstückenweg");
        break;
    }
    case 224968:
    {
        returnValue = F("Mundwald");
        break;
    }
    case 224969:
    {
        returnValue = F("Mungelter Weg");
        break;
    }
    case 224970:
    {
        returnValue = F("Mungenhofen");
        break;
    }
    case 224971:
    {
        returnValue = F("Munibuckweg");
        break;
    }
    case 224972:
    {
        returnValue = F("Muniswindweg");
        break;
    }
    case 224973:
    {
        returnValue = F("Munkenholt");
        break;
    }
    case 224974:
    {
        returnValue = F("Munkenstr.");
        break;
    }
    case 224975:
    {
        returnValue = F("Munketal");
        break;
    }
    case 224976:
    {
        returnValue = F("Munketoft");
        break;
    }
    case 224977:
    {
        returnValue = F("Munkfenne");
        break;
    }
    case 224978:
    {
        returnValue = F("Munkhoog");
        break;
    }
    case 224979:
    {
        returnValue = F("Munkmarscher Chaussee");
        break;
    }
    case 224980:
    {
        returnValue = F("Munkmarscher Str.");
        break;
    }
    case 224981:
    {
        returnValue = F("Munkwai");
        break;
    }
    case 224982:
    {
        returnValue = F("Munkwolstruper Weg");
        break;
    }
    case 224983:
    {
        returnValue = F("Munninger Str.");
        break;
    }
    case 224984:
    {
        returnValue = F("Munninger Weg");
        break;
    }
    case 224985:
    {
        returnValue = F("Munolfstr.");
        break;
    }
    case 224986:
    {
        returnValue = F("Munsbacher Str.");
        break;
    }
    case 224987:
    {
        returnValue = F("Munscheidstr.");
        break;
    }
    case 224988:
    {
        returnValue = F("Munschwitz");
        break;
    }
    case 224989:
    {
        returnValue = F("Munscon Circle");
        break;
    }
    case 224990:
    {
        returnValue = F("Munstergasse");
        break;
    }
    case 224991:
    {
        returnValue = F("Munstermannskamp");
        break;
    }
    case 224992:
    {
        returnValue = F("Munsterplatz");
        break;
    }
    case 224993:
    {
        returnValue = F("Munsterstr.");
        break;
    }
    case 224994:
    {
        returnValue = F("Munsterweg");
        break;
    }
    case 224995:
    {
        returnValue = F("Muntenriedstr.");
        break;
    }
    case 224996:
    {
        returnValue = F("Munterbachstr.");
        break;
    }
    case 224997:
    {
        returnValue = F("Munterburg");
        break;
    }
    case 224998:
    {
        returnValue = F("Muntpratstr.");
        break;
    }
    case 224999:
    {
        returnValue = F("Muntscha");
        break;
    }
    case 225000:
    {
        returnValue = F("Munzeler Str.");
        break;
    }
    case 225001:
    {
        returnValue = F("Munzeler Weg");
        break;
    }
    case 225002:
    {
        returnValue = F("Munzels Gang");
        break;
    }
    case 225003:
    {
        returnValue = F("Munzelwiese");
        break;
    }
    case 225004:
    {
        returnValue = F("Munzenbergweg");
        break;
    }
    case 225005:
    {
        returnValue = F("Munzengasse");
        break;
    }
    case 225006:
    {
        returnValue = F("Munzertstr.");
        break;
    }
    case 225007:
    {
        returnValue = F("Munziger Hauptstr.");
        break;
    }
    case 225008:
    {
        returnValue = F("Munzinger Str.");
        break;
    }
    case 225009:
    {
        returnValue = F("Munzinger Weg");
        break;
    }
    case 225010:
    {
        returnValue = F("Munzingers Pfädchen");
        break;
    }
    case 225011:
    {
        returnValue = F("Munzstr.");
        break;
    }
    case 225012:
    {
        returnValue = F("Muotisweg");
        break;
    }
    case 225013:
    {
        returnValue = F("Mupperger Str.");
        break;
    }
    case 225014:
    {
        returnValue = F("Mupperger Weg");
        break;
    }
    case 225015:
    {
        returnValue = F("Muracher Str.");
        break;
    }
    case 225016:
    {
        returnValue = F("Muracher Weg");
        break;
    }
    case 225017:
    {
        returnValue = F("Murachstr.");
        break;
    }
    case 225018:
    {
        returnValue = F("Murbacher Str.");
        break;
    }
    case 225019:
    {
        returnValue = F("Murbachstr.");
        break;
    }
    case 225020:
    {
        returnValue = F("Murber Steige");
        break;
    }
    case 225021:
    {
        returnValue = F("Murdockweg");
        break;
    }
    case 225022:
    {
        returnValue = F("Murgdamm");
        break;
    }
    case 225023:
    {
        returnValue = F("Murger Weg");
        break;
    }
    case 225024:
    {
        returnValue = F("Murgerstal");
        break;
    }
    case 225025:
    {
        returnValue = F("Murggarten");
        break;
    }
    case 225026:
    {
        returnValue = F("Murghaldenweg");
        break;
    }
    case 225027:
    {
        returnValue = F("Murglhof");
        break;
    }
    case 225028:
    {
        returnValue = F("Murgpfad");
        break;
    }
    case 225029:
    {
        returnValue = F("Murgring");
        break;
    }
    case 225030:
    {
        returnValue = F("Murgstr.");
        break;
    }
    case 225031:
    {
        returnValue = F("Murgtalbrücke");
        break;
    }
    case 225032:
    {
        returnValue = F("Murgtalperlenweg");
        break;
    }
    case 225033:
    {
        returnValue = F("Murgtalpfad");
        break;
    }
    case 225034:
    {
        returnValue = F("Murgtalstr.");
        break;
    }
    case 225035:
    {
        returnValue = F("Murgweg");
        break;
    }
    case 225036:
    {
        returnValue = F("Murhammerstr.");
        break;
    }
    case 225037:
    {
        returnValue = F("Murhau");
        break;
    }
    case 225038:
    {
        returnValue = F("Muristr.");
        break;
    }
    case 225039:
    {
        returnValue = F("Murkenbachweg");
        break;
    }
    case 225040:
    {
        returnValue = F("Murkenweg");
        break;
    }
    case 225041:
    {
        returnValue = F("Murmannstr.");
        break;
    }
    case 225042:
    {
        returnValue = F("Murmeckeweg");
        break;
    }
    case 225043:
    {
        returnValue = F("Murmeles-Kreisel");
        break;
    }
    case 225044:
    {
        returnValue = F("Murmelstr.");
        break;
    }
    case 225045:
    {
        returnValue = F("Murmeltierweg");
        break;
    }
    case 225046:
    {
        returnValue = F("Murn");
        break;
    }
    case 225047:
    {
        returnValue = F("Murnauer Str.");
        break;
    }
    case 225048:
    {
        returnValue = F("Murner-Seestr.");
        break;
    }
    case 225049:
    {
        returnValue = F("Murnstr.");
        break;
    }
    case 225050:
    {
        returnValue = F("Murnthaler Str.");
        break;
    }
    case 225051:
    {
        returnValue = F("Murowana-Goslina-Park");
        break;
    }
    case 225052:
    {
        returnValue = F("Murrengasse");
        break;
    }
    case 225053:
    {
        returnValue = F("Murrental");
        break;
    }
    case 225054:
    {
        returnValue = F("Murrenweg");
        break;
    }
    case 225055:
    {
        returnValue = F("Murrer Str.");
        break;
    }
    case 225056:
    {
        returnValue = F("Murrgasse");
        break;
    }
    case 225057:
    {
        returnValue = F("Murrhalde-Sträßchen");
        break;
    }
    case 225058:
    {
        returnValue = F("Murrhardter Str.");
        break;
    }
    case 225059:
    {
        returnValue = F("Murrhardter Weg");
        break;
    }
    case 225060:
    {
        returnValue = F("Murrpromenade");
        break;
    }
    case 225061:
    {
        returnValue = F("Murrstr.");
        break;
    }
    case 225062:
    {
        returnValue = F("Murrtalstr.");
        break;
    }
    case 225063:
    {
        returnValue = F("Murrtalviadukt");
        break;
    }
    case 225064:
    {
        returnValue = F("Murrweg");
        break;
    }
    case 225065:
    {
        returnValue = F("Murrwiesenstr.");
        break;
    }
    case 225066:
    {
        returnValue = F("Murrwinkel");
        break;
    }
    case 225067:
    {
        returnValue = F("Murschall");
        break;
    }
    case 225068:
    {
        returnValue = F("Murschnitz");
        break;
    }
    case 225069:
    {
        returnValue = F("Murschrottplatz");
        break;
    }
    case 225070:
    {
        returnValue = F("Mursewiek");
        break;
    }
    case 225071:
    {
        returnValue = F("Mursewieker Boddenblick");
        break;
    }
    case 225072:
    {
        returnValue = F("Murstr.");
        break;
    }
    case 225073:
    {
        returnValue = F("Murtener Str.");
        break;
    }
    case 225074:
    {
        returnValue = F("Murtenstr.");
        break;
    }
    case 225075:
    {
        returnValue = F("Muruner Str.");
        break;
    }
    case 225076:
    {
        returnValue = F("Murweg");
        break;
    }
    case 225077:
    {
        returnValue = F("Murxenpesch");
        break;
    }
    case 225078:
    {
        returnValue = F("Murzengasse");
        break;
    }
    case 225079:
    {
        returnValue = F("Musbacher Str.");
        break;
    }
    case 225080:
    {
        returnValue = F("Musbacherweg");
        break;
    }
    case 225081:
    {
        returnValue = F("Musbachstr.");
        break;
    }
    case 225082:
    {
        returnValue = F("Musbeker Weg");
        break;
    }
    case 225083:
    {
        returnValue = F("Musberg");
        break;
    }
    case 225084:
    {
        returnValue = F("Musberger Str.");
        break;
    }
    case 225085:
    {
        returnValue = F("Musberger Sträßchen");
        break;
    }
    case 225086:
    {
        returnValue = F("Musberger Weg");
        break;
    }
    case 225087:
    {
        returnValue = F("Musbergerstr.");
        break;
    }
    case 225088:
    {
        returnValue = F("Musbrink");
        break;
    }
    case 225089:
    {
        returnValue = F("Muschau");
        break;
    }
    case 225090:
    {
        returnValue = F("Muschauer Grund");
        break;
    }
    case 225091:
    {
        returnValue = F("Muschaweckgasse");
        break;
    }
    case 225092:
    {
        returnValue = F("Muscheider Str.");
        break;
    }
    case 225093:
    {
        returnValue = F("Muscheider Weg");
        break;
    }
    case 225094:
    {
        returnValue = F("Muschel");
        break;
    }
    case 225095:
    {
        returnValue = F("Muschelbank");
        break;
    }
    case 225096:
    {
        returnValue = F("Muschelgasse");
        break;
    }
    case 225097:
    {
        returnValue = F("Muschelgrund");
        break;
    }
    case 225098:
    {
        returnValue = F("Muschelkalkweg");
        break;
    }
    case 225099:
    {
        returnValue = F("Muschelpadd");
        break;
    }
    case 225100:
    {
        returnValue = F("Muschelquellenweg");
        break;
    }
    case 225101:
    {
        returnValue = F("Muschelring");
        break;
    }
    case 225102:
    {
        returnValue = F("Muschelstieg");
        break;
    }
    case 225103:
    {
        returnValue = F("Muschelstr.");
        break;
    }
    case 225104:
    {
        returnValue = F("Muschelweg");
        break;
    }
    case 225105:
    {
        returnValue = F("Muschenweg");
        break;
    }
    case 225106:
    {
        returnValue = F("Muscherstr.");
        break;
    }
    case 225107:
    {
        returnValue = F("Muschgaystr.");
        break;
    }
    case 225108:
    {
        returnValue = F("Muschwitzer Str.");
        break;
    }
    case 225109:
    {
        returnValue = F("Musdorf");
        break;
    }
    case 225110:
    {
        returnValue = F("Musebergweg");
        break;
    }
    case 225111:
    {
        returnValue = F("Musel");
        break;
    }
    case 225112:
    {
        returnValue = F("Muselgasse");
        break;
    }
    case 225113:
    {
        returnValue = F("Muselowstr.");
        break;
    }
    case 225114:
    {
        returnValue = F("Muselstr.");
        break;
    }
    case 225115:
    {
        returnValue = F("Muselweg");
        break;
    }
    case 225116:
    {
        returnValue = F("Musendorf");
        break;
    }
    case 225117:
    {
        returnValue = F("Musengasse");
        break;
    }
    case 225118:
    {
        returnValue = F("Museninsel");
        break;
    }
    case 225119:
    {
        returnValue = F("Musennaweg");
        break;
    }
    case 225120:
    {
        returnValue = F("Musenredder");
        break;
    }
    case 225121:
    {
        returnValue = F("Musergasse");
        break;
    }
    case 225122:
    {
        returnValue = F("Musestieg");
        break;
    }
    case 225123:
    {
        returnValue = F("Musestr.");
        break;
    }
    case 225124:
    {
        returnValue = F("Museum Barockscheune");
        break;
    }
    case 225125:
    {
        returnValue = F("Museumsacker");
        break;
    }
    case 225126:
    {
        returnValue = F("Museumsbahnstr.");
        break;
    }
    case 225127:
    {
        returnValue = F("Museumsgarten");
        break;
    }
    case 225128:
    {
        returnValue = F("Museumsgasse");
        break;
    }
    case 225129:
    {
        returnValue = F("Museumsgässle");
        break;
    }
    case 225130:
    {
        returnValue = F("Museumsinsel / Bleicher-Ravelin");
        break;
    }
    case 225131:
    {
        returnValue = F("Museumslay");
        break;
    }
    case 225132:
    {
        returnValue = F("Museumspark");
        break;
    }
    case 225133:
    {
        returnValue = F("Museumspark Seppensen");
        break;
    }
    case 225134:
    {
        returnValue = F("Museumsplatz");
        break;
    }
    case 225135:
    {
        returnValue = F("Museumsstr.");
        break;
    }
    case 225136:
    {
        returnValue = F("Museumstr.");
        break;
    }
    case 225137:
    {
        returnValue = F("Museumsweg");
        break;
    }
    case 225138:
    {
        returnValue = F("Musfeldtkoppel");
        break;
    }
    case 225139:
    {
        returnValue = F("Musfeldweg");
        break;
    }
    case 225140:
    {
        returnValue = F("Musgasse");
        break;
    }
    case 225141:
    {
        returnValue = F("Mushardstr.");
        break;
    }
    case 225142:
    {
        returnValue = F("Mushardweg");
        break;
    }
    case 225143:
    {
        returnValue = F("Mushecke");
        break;
    }
    case 225144:
    {
        returnValue = F("Mushof");
        break;
    }
    case 225145:
    {
        returnValue = F("Mushopweg");
        break;
    }
    case 225146:
    {
        returnValue = F("Mushöhn");
        break;
    }
    case 225147:
    {
        returnValue = F("Musik-Meinl-Str.");
        break;
    }
    case 225148:
    {
        returnValue = F("Musikantengasse");
        break;
    }
    case 225149:
    {
        returnValue = F("Musikantenradweg");
        break;
    }
    case 225150:
    {
        returnValue = F("Musikantenstieg");
        break;
    }
    case 225151:
    {
        returnValue = F("Musikantenstr.");
        break;
    }
    case 225152:
    {
        returnValue = F("Musikantenweg");
        break;
    }
    case 225153:
    {
        returnValue = F("Musikerplatz");
        break;
    }
    case 225154:
    {
        returnValue = F("Musikgasse");
        break;
    }
    case 225155:
    {
        returnValue = F("Musikheimstr.");
        break;
    }
    case 225156:
    {
        returnValue = F("Musikmeister-Reil-Weg");
        break;
    }
    case 225157:
    {
        returnValue = F("Musikschulweg");
        break;
    }
    case 225158:
    {
        returnValue = F("Musil");
        break;
    }
    case 225159:
    {
        returnValue = F("Muskatellerstr.");
        break;
    }
    case 225160:
    {
        returnValue = F("Muskatellerweg");
        break;
    }
    case 225161:
    {
        returnValue = F("Muskatstr.");
        break;
    }
    case 225162:
    {
        returnValue = F("Muskauer Chaussee");
        break;
    }
    case 225163:
    {
        returnValue = F("Muskauer Platz");
        break;
    }
    case 225164:
    {
        returnValue = F("Muskauer Str.");
        break;
    }
    case 225165:
    {
        returnValue = F("Musketierstr.");
        break;
    }
    case 225166:
    {
        returnValue = F("Musnest");
        break;
    }
    case 225167:
    {
        returnValue = F("Musselmoor");
        break;
    }
    case 225168:
    {
        returnValue = F("Mussen");
        break;
    }
    case 225169:
    {
        returnValue = F("Mussener Weg");
        break;
    }
    case 225170:
    {
        returnValue = F("Mussenmühle");
        break;
    }
    case 225171:
    {
        returnValue = F("Musserstr.");
        break;
    }
    case 225172:
    {
        returnValue = F("Mussinanstr.");
        break;
    }
    case 225173:
    {
        returnValue = F("Mussinger Str.");
        break;
    }
    case 225174:
    {
        returnValue = F("Mussorgskiweg");
        break;
    }
    case 225175:
    {
        returnValue = F("Mussumer Esch");
        break;
    }
    case 225176:
    {
        returnValue = F("Mussumer Höfgraben");
        break;
    }
    case 225177:
    {
        returnValue = F("Mussumer Kirchweg");
        break;
    }
    case 225178:
    {
        returnValue = F("Mussumer Ringstr.");
        break;
    }
    case 225179:
    {
        returnValue = F("Mussumer Str.");
        break;
    }
    case 225180:
    {
        returnValue = F("Mustergarten RINN Beton und Naturstein GmbH");
        break;
    }
    case 225181:
    {
        returnValue = F("Musterhauspark");
        break;
    }
    case 225182:
    {
        returnValue = F("Mustersiedlung");
        break;
    }
    case 225183:
    {
        returnValue = F("Mustersteinstr.");
        break;
    }
    case 225184:
    {
        returnValue = F("Musterweg");
        break;
    }
    case 225185:
    {
        returnValue = F("Mustitzer Allee");
        break;
    }
    case 225186:
    {
        returnValue = F("Musweilerweg");
        break;
    }
    case 225187:
    {
        returnValue = F("Muswiese");
        break;
    }
    case 225188:
    {
        returnValue = F("Muswischenweg");
        break;
    }
    case 225189:
    {
        returnValue = F("Musäusring");
        break;
    }
    case 225190:
    {
        returnValue = F("Musäusstr.");
        break;
    }
    case 225191:
    {
        returnValue = F("Mutbrunnengasse");
        break;
    }
    case 225192:
    {
        returnValue = F("Mutecke");
        break;
    }
    case 225193:
    {
        returnValue = F("Mutental");
        break;
    }
    case 225194:
    {
        returnValue = F("Muthental");
        break;
    }
    case 225195:
    {
        returnValue = F("Muthesiusstr.");
        break;
    }
    case 225196:
    {
        returnValue = F("Muthilostr.");
        break;
    }
    case 225197:
    {
        returnValue = F("Muthofer Str.");
        break;
    }
    case 225198:
    {
        returnValue = F("Mutholz");
        break;
    }
    case 225199:
    {
        returnValue = F("Muthstr.");
        break;
    }
    case 225200:
    {
        returnValue = F("Mutiger Weg");
        break;
    }
    case 225201:
    {
        returnValue = F("Mutlanger Berg");
        break;
    }
    case 225202:
    {
        returnValue = F("Mutlanger Str.");
        break;
    }
    case 225203:
    {
        returnValue = F("Mutschachweg");
        break;
    }
    case 225204:
    {
        returnValue = F("Mutschauer Weg");
        break;
    }
    case 225205:
    {
        returnValue = F("Mutscheider Weg");
        break;
    }
    case 225206:
    {
        returnValue = F("Mutschel");
        break;
    }
    case 225207:
    {
        returnValue = F("Mutschelbacher Grenzweg");
        break;
    }
    case 225208:
    {
        returnValue = F("Mutschelbacher Str.");
        break;
    }
    case 225209:
    {
        returnValue = F("Mutschenweg");
        break;
    }
    case 225210:
    {
        returnValue = F("Mutschergasse");
        break;
    }
    case 225211:
    {
        returnValue = F("Mutschlenaer Str.");
        break;
    }
    case 225212:
    {
        returnValue = F("Mutschlerweg");
        break;
    }
    case 225213:
    {
        returnValue = F("Muttacker");
        break;
    }
    case 225214:
    {
        returnValue = F("Muttenshofen");
        break;
    }
    case 225215:
    {
        returnValue = F("Muttensweilerweg");
        break;
    }
    case 225216:
    {
        returnValue = F("Muttenzer Str.");
        break;
    }
    case 225217:
    {
        returnValue = F("Mutter-Euken-Weg");
        break;
    }
    case 225218:
    {
        returnValue = F("Mutter-Möller-Weg");
        break;
    }
    case 225219:
    {
        returnValue = F("Mutter-Rosa-Str.");
        break;
    }
    case 225220:
    {
        returnValue = F("Mutter-Rosa-Weg");
        break;
    }
    case 225221:
    {
        returnValue = F("Mutter-Teresa-Str.");
        break;
    }
    case 225222:
    {
        returnValue = F("Mutter-Teresa-Weg");
        break;
    }
    case 225223:
    {
        returnValue = F("Mutter-Theresa-Str.");
        break;
    }
    case 225224:
    {
        returnValue = F("Mutter-Theresa-Weg");
        break;
    }
    case 225225:
    {
        returnValue = F("Mutterbachweg");
        break;
    }
    case 225226:
    {
        returnValue = F("Muttergottesbildweg");
        break;
    }
    case 225227:
    {
        returnValue = F("Muttergottespfad");
        break;
    }
    case 225228:
    {
        returnValue = F("Muttergutweg");
        break;
    }
    case 225229:
    {
        returnValue = F("Mutterkamp");
        break;
    }
    case 225230:
    {
        returnValue = F("Muttersbachstr.");
        break;
    }
    case 225231:
    {
        returnValue = F("Mutterschieder Str.");
        break;
    }
    case 225232:
    {
        returnValue = F("Muttersdorfer Weg");
        break;
    }
    case 225233:
    {
        returnValue = F("Muttershofen");
        break;
    }
    case 225234:
    {
        returnValue = F("Muttershofener Str.");
        break;
    }
    case 225235:
    {
        returnValue = F("Muttersholtzer Str.");
        break;
    }
    case 225236:
    {
        returnValue = F("Mutterslehen");
        break;
    }
    case 225237:
    {
        returnValue = F("Mutterstadter Str.");
        break;
    }
    case 225238:
    {
        returnValue = F("Mutterstadter Weg");
        break;
    }
    case 225239:
    {
        returnValue = F("Muttertal");
        break;
    }
    case 225240:
    {
        returnValue = F("Muttertalstr.");
        break;
    }
    case 225241:
    {
        returnValue = F("Mutterweg");
        break;
    }
    case 225242:
    {
        returnValue = F("Muttighofer Str.");
        break;
    }
    case 225243:
    {
        returnValue = F("Muttlau");
        break;
    }
    case 225244:
    {
        returnValue = F("Muttmoorweg");
        break;
    }
    case 225245:
    {
        returnValue = F("Muttonestr.");
        break;
    }
    case 225246:
    {
        returnValue = F("Muttweg");
        break;
    }
    case 225247:
    {
        returnValue = F("Mutzbacher Talweg");
        break;
    }
    case 225248:
    {
        returnValue = F("Mutzbroicher Str.");
        break;
    }
    case 225249:
    {
        returnValue = F("Mutzenbühlstr.");
        break;
    }
    case 225250:
    {
        returnValue = F("Mutzenhof");
        break;
    }
    case 225251:
    {
        returnValue = F("Mutzenrather Weg");
        break;
    }
    case 225252:
    {
        returnValue = F("Mutzenreisstr.");
        break;
    }
    case 225253:
    {
        returnValue = F("Mutzenweg");
        break;
    }
    case 225254:
    {
        returnValue = F("Mutzer Feld");
        break;
    }
    case 225255:
    {
        returnValue = F("Mutzer Gestell");
        break;
    }
    case 225256:
    {
        returnValue = F("Mutzer Heide");
        break;
    }
    case 225257:
    {
        returnValue = F("Mutzer Plan");
        break;
    }
    case 225258:
    {
        returnValue = F("Mutzer Str.");
        break;
    }
    case 225259:
    {
        returnValue = F("Mutzer Weg");
        break;
    }
    case 225260:
    {
        returnValue = F("Mutzershof");
        break;
    }
    case 225261:
    {
        returnValue = F("Mutzigstr.");
        break;
    }
    case 225262:
    {
        returnValue = F("Mutznerweg");
        break;
    }
    case 225263:
    {
        returnValue = F("Mutzschener Bahnhofstr.");
        break;
    }
    case 225264:
    {
        returnValue = F("Mutzschener Str.");
        break;
    }
    case 225265:
    {
        returnValue = F("Mutzscheroda");
        break;
    }
    case 225266:
    {
        returnValue = F("Mutzschken");
        break;
    }
    case 225267:
    {
        returnValue = F("Muuloap-Platz");
        break;
    }
    case 225268:
    {
        returnValue = F("Muusbeerenkaten");
        break;
    }
    case 225269:
    {
        returnValue = F("Muusweg");
        break;
    }
    case 225270:
    {
        returnValue = F("Mußacker");
        break;
    }
    case 225271:
    {
        returnValue = F("Mußbach");
        break;
    }
    case 225272:
    {
        returnValue = F("Mußbacher Landstr.");
        break;
    }
    case 225273:
    {
        returnValue = F("Mußbacher Str.");
        break;
    }
    case 225274:
    {
        returnValue = F("Mußbacher Weg");
        break;
    }
    case 225275:
    {
        returnValue = F("Mußbachstr.");
        break;
    }
    case 225276:
    {
        returnValue = F("Mußhofstr.");
        break;
    }
    case 225277:
    {
        returnValue = F("Mußkamp");
        break;
    }
    case 225278:
    {
        returnValue = F("Mußmächerstr.");
        break;
    }
    case 225279:
    {
        returnValue = F("Mußteilswall");
        break;
    }
    case 225280:
    {
        returnValue = F("Mußweg");
        break;
    }
    case 225281:
    {
        returnValue = F("Mybergstr.");
        break;
    }
    case 225282:
    {
        returnValue = F("Myconiusplatz");
        break;
    }
    case 225283:
    {
        returnValue = F("Myconiusstr.");
        break;
    }
    case 225284:
    {
        returnValue = F("Myhler Heide");
        break;
    }
    case 225285:
    {
        returnValue = F("Myhler Str.");
        break;
    }
    case 225286:
    {
        returnValue = F("Myhlerfeld");
        break;
    }
    case 225287:
    {
        returnValue = F("Mylauer Berg");
        break;
    }
    case 225288:
    {
        returnValue = F("Mylauer Str.");
        break;
    }
    case 225289:
    {
        returnValue = F("Mylauer Tor");
        break;
    }
    case 225290:
    {
        returnValue = F("Mylinghauser Str.");
        break;
    }
    case 225291:
    {
        returnValue = F("Myliusstr.");
        break;
    }
    case 225292:
    {
        returnValue = F("Myllendonker Str.");
        break;
    }
    case 225293:
    {
        returnValue = F("Myrtenring");
        break;
    }
    case 225294:
    {
        returnValue = F("Myrtenweg");
        break;
    }
    case 225295:
    {
        returnValue = F("Myslenicestr.");
        break;
    }
    case 225296:
    {
        returnValue = F("Myslowitzer Str.");
        break;
    }
    case 225297:
    {
        returnValue = F("Mythenpfad");
        break;
    }
    case 225298:
    {
        returnValue = F("Mywilerweg");
        break;
    }
    case 225299:
    {
        returnValue = F("Mäanderbrücke");
        break;
    }
    case 225300:
    {
        returnValue = F("Mäbenberger Str.");
        break;
    }
    case 225301:
    {
        returnValue = F("Mächelweg");
        break;
    }
    case 225302:
    {
        returnValue = F("Mächlerweg");
        break;
    }
    case 225303:
    {
        returnValue = F("Mäckersee");
        break;
    }
    case 225304:
    {
        returnValue = F("Mädachweg");
        break;
    }
    case 225305:
    {
        returnValue = F("Mädachäckerweg");
        break;
    }
    case 225306:
    {
        returnValue = F("Mädchenberg");
        break;
    }
    case 225307:
    {
        returnValue = F("Mädchenhaldeweg");
        break;
    }
    case 225308:
    {
        returnValue = F("Mädchenland");
        break;
    }
    case 225309:
    {
        returnValue = F("Mädchenschulstr.");
        break;
    }
    case 225310:
    {
        returnValue = F("Mädelegabelstr.");
        break;
    }
    case 225311:
    {
        returnValue = F("Mädelegabelweg");
        break;
    }
    case 225312:
    {
        returnValue = F("Mädelegasse");
        break;
    }
    case 225313:
    {
        returnValue = F("Mädelhofer Str.");
        break;
    }
    case 225314:
    {
        returnValue = F("Mädelhofer Weg");
        break;
    }
    case 225315:
    {
        returnValue = F("Mäderhof");
        break;
    }
    case 225316:
    {
        returnValue = F("Mäderhofstr.");
        break;
    }
    case 225317:
    {
        returnValue = F("Mäderplanie");
        break;
    }
    case 225318:
    {
        returnValue = F("Mäderstr.");
        break;
    }
    case 225319:
    {
        returnValue = F("Mädertal");
        break;
    }
    case 225320:
    {
        returnValue = F("Mädesüßweg");
        break;
    }
    case 225321:
    {
        returnValue = F("Mädigweg");
        break;
    }
    case 225322:
    {
        returnValue = F("Mädlachweg");
        break;
    }
    case 225323:
    {
        returnValue = F("Mädlerpassage");
        break;
    }
    case 225324:
    {
        returnValue = F("Mädlerstr.");
        break;
    }
    case 225325:
    {
        returnValue = F("Mädlesbrück");
        break;
    }
    case 225326:
    {
        returnValue = F("Mädlesteinstr.");
        break;
    }
    case 225327:
    {
        returnValue = F("Mägdeberge");
        break;
    }
    case 225328:
    {
        returnValue = F("Mägdebergstr.");
        break;
    }
    case 225329:
    {
        returnValue = F("Mägdebrink");
        break;
    }
    case 225330:
    {
        returnValue = F("Mägdefrau-Weg");
        break;
    }
    case 225331:
    {
        returnValue = F("Mägdesprunger Str.");
        break;
    }
    case 225332:
    {
        returnValue = F("Mägdestieg");
        break;
    }
    case 225333:
    {
        returnValue = F("Mägdestiege");
        break;
    }
    case 225334:
    {
        returnValue = F("Mägdestr.");
        break;
    }
    case 225335:
    {
        returnValue = F("Mähackerweg");
        break;
    }
    case 225336:
    {
        returnValue = F("Mähbinderweg");
        break;
    }
    case 225337:
    {
        returnValue = F("Mähdachstr.");
        break;
    }
    case 225338:
    {
        returnValue = F("Mähdelweg");
        break;
    }
    case 225339:
    {
        returnValue = F("Mähder");
        break;
    }
    case 225340:
    {
        returnValue = F("Mähderhaldeweg");
        break;
    }
    case 225341:
    {
        returnValue = F("Mähderstr.");
        break;
    }
    case 225342:
    {
        returnValue = F("Mähdertalweg");
        break;
    }
    case 225343:
    {
        returnValue = F("Mähderweg");
        break;
    }
    case 225344:
    {
        returnValue = F("Mähdlenweg");
        break;
    }
    case 225345:
    {
        returnValue = F("Mähdleshauweg");
        break;
    }
    case 225346:
    {
        returnValue = F("Mähdlesäcker");
        break;
    }
    case 225347:
    {
        returnValue = F("Mähdrescherweg");
        break;
    }
    case 225348:
    {
        returnValue = F("Mähengäßchen");
        break;
    }
    case 225349:
    {
        returnValue = F("Mähenkamp");
        break;
    }
    case 225350:
    {
        returnValue = F("Mähfeldstr.");
        break;
    }
    case 225351:
    {
        returnValue = F("Mähgasse");
        break;
    }
    case 225352:
    {
        returnValue = F("Mähgrund");
        break;
    }
    case 225353:
    {
        returnValue = F("Mähland");
        break;
    }
    case 225354:
    {
        returnValue = F("Mählbachstr.");
        break;
    }
    case 225355:
    {
        returnValue = F("Mählersbeck");
        break;
    }
    case 225356:
    {
        returnValue = F("Mählersgrund");
        break;
    }
    case 225357:
    {
        returnValue = F("Mählerstr.");
        break;
    }
    case 225358:
    {
        returnValue = F("Mählerweg");
        break;
    }
    case 225359:
    {
        returnValue = F("Mählsweg");
        break;
    }
    case 225360:
    {
        returnValue = F("Mähne");
        break;
    }
    case 225361:
    {
        returnValue = F("Mähnstr.");
        break;
    }
    case 225362:
    {
        returnValue = F("Mährecke");
        break;
    }
    case 225363:
    {
        returnValue = F("Mährenhäuser Str.");
        break;
    }
    case 225364:
    {
        returnValue = F("Mährenstr.");
        break;
    }
    case 225365:
    {
        returnValue = F("Mährfeldstr.");
        break;
    }
    case 225366:
    {
        returnValue = F("Mähringer Str.");
        break;
    }
    case 225367:
    {
        returnValue = F("Mähringer Weg");
        break;
    }
    case 225368:
    {
        returnValue = F("Mährisch-Neustädter-Str.");
        break;
    }
    case 225369:
    {
        returnValue = F("Mährisch-Schönberger-Str.");
        break;
    }
    case 225370:
    {
        returnValue = F("Mährische Str.");
        break;
    }
    case 225371:
    {
        returnValue = F("Mährmetseifen");
        break;
    }
    case 225372:
    {
        returnValue = F("Mäleßkircherstr.");
        break;
    }
    case 225373:
    {
        returnValue = F("Mälo");
        break;
    }
    case 225374:
    {
        returnValue = F("Mälzelweg");
        break;
    }
    case 225375:
    {
        returnValue = F("Mälzereistr.");
        break;
    }
    case 225376:
    {
        returnValue = F("Mälzereiweg");
        break;
    }
    case 225377:
    {
        returnValue = F("Mälzergasse");
        break;
    }
    case 225378:
    {
        returnValue = F("Mälzerstr.");
        break;
    }
    case 225379:
    {
        returnValue = F("Mälzerweg");
        break;
    }
    case 225380:
    {
        returnValue = F("Mälzhausgasse");
        break;
    }
    case 225381:
    {
        returnValue = F("Mängersgraben");
        break;
    }
    case 225382:
    {
        returnValue = F("Männchesberg");
        break;
    }
    case 225383:
    {
        returnValue = F("Männchesgasse");
        break;
    }
    case 225384:
    {
        returnValue = F("Männekengrund");
        break;
    }
    case 225385:
    {
        returnValue = F("Männerholz");
        break;
    }
    case 225386:
    {
        returnValue = F("Männerstatt");
        break;
    }
    case 225387:
    {
        returnValue = F("Männertreuweg");
        break;
    }
    case 225388:
    {
        returnValue = F("Männleswaldweg (1870)");
        break;
    }
    case 225389:
    {
        returnValue = F("Mänttä-Vilppula-Str.");
        break;
    }
    case 225390:
    {
        returnValue = F("Märchenallee");
        break;
    }
    case 225391:
    {
        returnValue = F("Märchengarten");
        break;
    }
    case 225392:
    {
        returnValue = F("Märchengrund");
        break;
    }
    case 225393:
    {
        returnValue = F("Märchenhain");
        break;
    }
    case 225394:
    {
        returnValue = F("Märchenhainstr.");
        break;
    }
    case 225395:
    {
        returnValue = F("Märchenkreis");
        break;
    }
    case 225396:
    {
        returnValue = F("Märchenlandweg");
        break;
    }
    case 225397:
    {
        returnValue = F("Märchenpark Mackenrode");
        break;
    }
    case 225398:
    {
        returnValue = F("Märchenpark der Brüder Grimm");
        break;
    }
    case 225399:
    {
        returnValue = F("Märchenpfad Bischofswiesen");
        break;
    }
    case 225400:
    {
        returnValue = F("Märchenplatz-B6");
        break;
    }
    case 225401:
    {
        returnValue = F("Märchenring");
        break;
    }
    case 225402:
    {
        returnValue = F("Märchenrundweg Haselsee");
        break;
    }
    case 225403:
    {
        returnValue = F("Märchenseestr.");
        break;
    }
    case 225404:
    {
        returnValue = F("Märchenstr.");
        break;
    }
    case 225405:
    {
        returnValue = F("Märchenwald");
        break;
    }
    case 225406:
    {
        returnValue = F("Märchenwald Surwold");
        break;
    }
    case 225407:
    {
        returnValue = F("Märchenwaldschleife");
        break;
    }
    case 225408:
    {
        returnValue = F("Märchenwaldweg");
        break;
    }
    case 225409:
    {
        returnValue = F("Märchenweg");
        break;
    }
    case 225410:
    {
        returnValue = F("Märchenwiese");
        break;
    }
    case 225411:
    {
        returnValue = F("Märckerstr.");
        break;
    }
    case 225412:
    {
        returnValue = F("Märendamm");
        break;
    }
    case 225413:
    {
        returnValue = F("Märheldstr.");
        break;
    }
    case 225414:
    {
        returnValue = F("Märien");
        break;
    }
    case 225415:
    {
        returnValue = F("Märienstr.");
        break;
    }
    case 225416:
    {
        returnValue = F("Märkenstück");
        break;
    }
    case 225417:
    {
        returnValue = F("Märker Feld");
        break;
    }
    case 225418:
    {
        returnValue = F("Märker Grund");
        break;
    }
    case 225419:
    {
        returnValue = F("Märker Höhe");
        break;
    }
    case 225420:
    {
        returnValue = F("Märker Park");
        break;
    }
    case 225421:
    {
        returnValue = F("Märker Querschlag");
        break;
    }
    case 225422:
    {
        returnValue = F("Märker Stahlweg");
        break;
    }
    case 225423:
    {
        returnValue = F("Märker Str.");
        break;
    }
    case 225424:
    {
        returnValue = F("Märker Weg");
        break;
    }
    case 225425:
    {
        returnValue = F("Märkerring");
        break;
    }
    case 225426:
    {
        returnValue = F("Märkerstr.");
        break;
    }
    case 225427:
    {
        returnValue = F("Märkerwaldstr.");
        break;
    }
    case 225428:
    {
        returnValue = F("Märkerweg");
        break;
    }
    case 225429:
    {
        returnValue = F("Märkisch Buchholzer Str.");
        break;
    }
    case 225430:
    {
        returnValue = F("Märkisch Buchholzer Weg");
        break;
    }
    case 225431:
    {
        returnValue = F("Märkisch Wilmersdorfer Weg");
        break;
    }
    case 225432:
    {
        returnValue = F("Märkische Allee");
        break;
    }
    case 225433:
    {
        returnValue = F("Märkische Aue");
        break;
    }
    case 225434:
    {
        returnValue = F("Märkische Heide");
        break;
    }
    case 225435:
    {
        returnValue = F("Märkische Promenade");
        break;
    }
    case 225436:
    {
        returnValue = F("Märkische Str.");
        break;
    }
    case 225437:
    {
        returnValue = F("Märkische Zeile");
        break;
    }
    case 225438:
    {
        returnValue = F("Märkischer Park");
        break;
    }
    case 225439:
    {
        returnValue = F("Märkischer Platz");
        break;
    }
    case 225440:
    {
        returnValue = F("Märkischer Ring");
        break;
    }
    case 225441:
    {
        returnValue = F("Märkischer Weg");
        break;
    }
    case 225442:
    {
        returnValue = F("Märkisches Haus des Waldes");
        break;
    }
    case 225443:
    {
        returnValue = F("Märkleweg");
        break;
    }
    case 225444:
    {
        returnValue = F("Märklinstr.");
        break;
    }
    case 225445:
    {
        returnValue = F("Märklinweg");
        break;
    }
    case 225446:
    {
        returnValue = F("Märklweg");
        break;
    }
    case 225447:
    {
        returnValue = F("Märkter Str.");
        break;
    }
    case 225448:
    {
        returnValue = F("Märktweg");
        break;
    }
    case 225449:
    {
        returnValue = F("Märschberg");
        break;
    }
    case 225450:
    {
        returnValue = F("Märsche");
        break;
    }
    case 225451:
    {
        returnValue = F("Märschendorfer Str.");
        break;
    }
    case 225452:
    {
        returnValue = F("Märschweg");
        break;
    }
    case 225453:
    {
        returnValue = F("Märtelwiese");
        break;
    }
    case 225454:
    {
        returnValue = F("Märtensstr.");
        break;
    }
    case 225455:
    {
        returnValue = F("Märtenweg");
        break;
    }
    case 225456:
    {
        returnValue = F("Märterleinsweg");
        break;
    }
    case 225457:
    {
        returnValue = F("Märther Str.");
        break;
    }
    case 225458:
    {
        returnValue = F("Märtishofweg");
        break;
    }
    case 225459:
    {
        returnValue = F("Märxle");
        break;
    }
    case 225460:
    {
        returnValue = F("Märzacker");
        break;
    }
    case 225461:
    {
        returnValue = F("Märzackerweg");
        break;
    }
    case 225462:
    {
        returnValue = F("Märzbecherweg");
        break;
    }
    case 225463:
    {
        returnValue = F("Märzberg");
        break;
    }
    case 225464:
    {
        returnValue = F("Märzbrunnenweg");
        break;
    }
    case 225465:
    {
        returnValue = F("Märzbrunner Weg");
        break;
    }
    case 225466:
    {
        returnValue = F("Märzbrückenweg");
        break;
    }
    case 225467:
    {
        returnValue = F("Märzeller Weg");
        break;
    }
    case 225468:
    {
        returnValue = F("Märzenbachstr.");
        break;
    }
    case 225469:
    {
        returnValue = F("Märzenbachweg");
        break;
    }
    case 225470:
    {
        returnValue = F("Märzenbecher");
        break;
    }
    case 225471:
    {
        returnValue = F("Märzenbecherpfad");
        break;
    }
    case 225472:
    {
        returnValue = F("Märzenbecherstr.");
        break;
    }
    case 225473:
    {
        returnValue = F("Märzenbecherweg");
        break;
    }
    case 225474:
    {
        returnValue = F("Märzenberg");
        break;
    }
    case 225475:
    {
        returnValue = F("Märzenborn");
        break;
    }
    case 225476:
    {
        returnValue = F("Märzenburgweg");
        break;
    }
    case 225477:
    {
        returnValue = F("Märzengasse");
        break;
    }
    case 225478:
    {
        returnValue = F("Märzengraben");
        break;
    }
    case 225479:
    {
        returnValue = F("Märzengrundweg");
        break;
    }
    case 225480:
    {
        returnValue = F("Märzengärten");
        break;
    }
    case 225481:
    {
        returnValue = F("Märzenhaus");
        break;
    }
    case 225482:
    {
        returnValue = F("Märzenhöfle");
        break;
    }
    case 225483:
    {
        returnValue = F("Märzenkopf");
        break;
    }
    case 225484:
    {
        returnValue = F("Märzenquelle");
        break;
    }
    case 225485:
    {
        returnValue = F("Märzenstr.");
        break;
    }
    case 225486:
    {
        returnValue = F("Märzenweg");
        break;
    }
    case 225487:
    {
        returnValue = F("Märzenäcker");
        break;
    }
    case 225488:
    {
        returnValue = F("Märzfeld");
        break;
    }
    case 225489:
    {
        returnValue = F("Märzgasse");
        break;
    }
    case 225490:
    {
        returnValue = F("Märzgässchen");
        break;
    }
    case 225491:
    {
        returnValue = F("Märzgäßchen");
        break;
    }
    case 225492:
    {
        returnValue = F("Märzhalde");
        break;
    }
    case 225493:
    {
        returnValue = F("Märzrasen");
        break;
    }
    case 225494:
    {
        returnValue = F("Märzschäferei");
        break;
    }
    case 225495:
    {
        returnValue = F("Märzstr.");
        break;
    }
    case 225496:
    {
        returnValue = F("Märzweg");
        break;
    }
    case 225497:
    {
        returnValue = F("Märzweiher");
        break;
    }
    case 225498:
    {
        returnValue = F("Märzwiese");
        break;
    }
    case 225499:
    {
        returnValue = F("Märzwiesenweg");
        break;
    }
    case 225500:
    {
        returnValue = F("Mäsche");
        break;
    }
    case 225501:
    {
        returnValue = F("Mäscher");
        break;
    }
    case 225502:
    {
        returnValue = F("Mäscherstr.");
        break;
    }
    case 225503:
    {
        returnValue = F("Mäslinstr.");
        break;
    }
    case 225504:
    {
        returnValue = F("Mässdiek");
        break;
    }
    case 225505:
    {
        returnValue = F("Mästlinstr.");
        break;
    }
    case 225506:
    {
        returnValue = F("Mäthus");
        break;
    }
    case 225507:
    {
        returnValue = F("Mättich");
        break;
    }
    case 225508:
    {
        returnValue = F("Mättigstr.");
        break;
    }
    case 225509:
    {
        returnValue = F("Mättiweg");
        break;
    }
    case 225510:
    {
        returnValue = F("Mättledobelweg");
        break;
    }
    case 225511:
    {
        returnValue = F("Mättlestr.");
        break;
    }
    case 225512:
    {
        returnValue = F("Mättlesweg");
        break;
    }
    case 225513:
    {
        returnValue = F("Mättlewaldweg");
        break;
    }
    case 225514:
    {
        returnValue = F("Mättleweg");
        break;
    }
    case 225515:
    {
        returnValue = F("Mäuerachstr.");
        break;
    }
    case 225516:
    {
        returnValue = F("Mäuerchen");
        break;
    }
    case 225517:
    {
        returnValue = F("Mäuerchenstr.");
        break;
    }
    case 225518:
    {
        returnValue = F("Mäuerchensweg");
        break;
    }
    case 225519:
    {
        returnValue = F("Mäuerchenweg");
        break;
    }
    case 225520:
    {
        returnValue = F("Mäuerken");
        break;
    }
    case 225521:
    {
        returnValue = F("Mäuerle");
        break;
    }
    case 225522:
    {
        returnValue = F("Mäuerlein");
        break;
    }
    case 225523:
    {
        returnValue = F("Mäuerleinspfad");
        break;
    }
    case 225524:
    {
        returnValue = F("Mäuerleinsweg");
        break;
    }
    case 225525:
    {
        returnValue = F("Mäuerlenstr.");
        break;
    }
    case 225526:
    {
        returnValue = F("Mäuerlesgang");
        break;
    }
    case 225527:
    {
        returnValue = F("Mäuerlesgasse");
        break;
    }
    case 225528:
    {
        returnValue = F("Mäuerlesstr.");
        break;
    }
    case 225529:
    {
        returnValue = F("Mäuerlesweg");
        break;
    }
    case 225530:
    {
        returnValue = F("Mäuernstr.");
        break;
    }
    case 225531:
    {
        returnValue = F("Mäurach");
        break;
    }
    case 225532:
    {
        returnValue = F("Mäurachsteige");
        break;
    }
    case 225533:
    {
        returnValue = F("Mäurachweg");
        break;
    }
    case 225534:
    {
        returnValue = F("Mäurichstr.");
        break;
    }
    case 225535:
    {
        returnValue = F("Mäusberger Str.");
        break;
    }
    case 225536:
    {
        returnValue = F("Mäusbergstr.");
        break;
    }
    case 225537:
    {
        returnValue = F("Mäusbronner Weg");
        break;
    }
    case 225538:
    {
        returnValue = F("Mäusdorfer Str.");
        break;
    }
    case 225539:
    {
        returnValue = F("Mäusebachweg");
        break;
    }
    case 225540:
    {
        returnValue = F("Mäusebornweg");
        break;
    }
    case 225541:
    {
        returnValue = F("Mäuseburg");
        break;
    }
    case 225542:
    {
        returnValue = F("Mäusegang");
        break;
    }
    case 225543:
    {
        returnValue = F("Mäusegasse");
        break;
    }
    case 225544:
    {
        returnValue = F("Mäusensee");
        break;
    }
    case 225545:
    {
        returnValue = F("Mäusepfad");
        break;
    }
    case 225546:
    {
        returnValue = F("Mäusering");
        break;
    }
    case 225547:
    {
        returnValue = F("Mäusermühle");
        break;
    }
    case 225548:
    {
        returnValue = F("Mäuseturmstr.");
        break;
    }
    case 225549:
    {
        returnValue = F("Mäuseweg");
        break;
    }
    case 225550:
    {
        returnValue = F("Mäusfall");
        break;
    }
    case 225551:
    {
        returnValue = F("Mäusgasse");
        break;
    }
    case 225552:
    {
        returnValue = F("Mäusheckerweg");
        break;
    }
    case 225553:
    {
        returnValue = F("Mäuskarl");
        break;
    }
    case 225554:
    {
        returnValue = F("Mäuslachschneise");
        break;
    }
    case 225555:
    {
        returnValue = F("Mäusling");
        break;
    }
    case 225556:
    {
        returnValue = F("Mäuslpoint");
        break;
    }
    case 225557:
    {
        returnValue = F("Mäuswedel");
        break;
    }
    case 225558:
    {
        returnValue = F("Mäuswäldchen");
        break;
    }
    case 225559:
    {
        returnValue = F("Mäverstr.");
        break;
    }
    case 225560:
    {
        returnValue = F("Mäversweg");
        break;
    }
    case 225561:
    {
        returnValue = F("Mäzenhellesweg");
        break;
    }
    case 225562:
    {
        returnValue = F("Mórer Platz");
        break;
    }
    case 225563:
    {
        returnValue = F("Möbel-Hübner-Str.");
        break;
    }
    case 225564:
    {
        returnValue = F("Möbiskruger Weg");
        break;
    }
    case 225565:
    {
        returnValue = F("Möbiusstr.");
        break;
    }
    case 225566:
    {
        returnValue = F("Möbusstr.");
        break;
    }
    case 225567:
    {
        returnValue = F("Möchser Weg");
        break;
    }
    case 225568:
    {
        returnValue = F("Möckels Gang");
        break;
    }
    case 225569:
    {
        returnValue = F("Möckelstr.");
        break;
    }
    case 225570:
    {
        returnValue = F("Möckenitzer Damm");
        break;
    }
    case 225571:
    {
        returnValue = F("Möckenloher Str.");
        break;
    }
    case 225572:
    {
        returnValue = F("Möckenloher Weg");
        break;
    }
    case 225573:
    {
        returnValue = F("Möckenweg");
        break;
    }
    case 225574:
    {
        returnValue = F("Möckeraner Str.");
        break;
    }
    case 225575:
    {
        returnValue = F("Möckeraner Weg");
        break;
    }
    case 225576:
    {
        returnValue = F("Möckerner Str.");
        break;
    }
    case 225577:
    {
        returnValue = F("Möckernsche Str.");
        break;
    }
    case 225578:
    {
        returnValue = F("Möckerser Berg");
        break;
    }
    case 225579:
    {
        returnValue = F("Möckmühler Str.");
        break;
    }
    case 225580:
    {
        returnValue = F("Möckwitzer Weg");
        break;
    }
    case 225581:
    {
        returnValue = F("Möddericher Str.");
        break;
    }
    case 225582:
    {
        returnValue = F("Mödenweg");
        break;
    }
    case 225583:
    {
        returnValue = F("Möderitzer Weg");
        break;
    }
    case 225584:
    {
        returnValue = F("Mödesser Str.");
        break;
    }
    case 225585:
    {
        returnValue = F("Mödesser Weg");
        break;
    }
    case 225586:
    {
        returnValue = F("Mödigsweg");
        break;
    }
    case 225587:
    {
        returnValue = F("Mödinger Str.");
        break;
    }
    case 225588:
    {
        returnValue = F("Mödishofer Str.");
        break;
    }
    case 225589:
    {
        returnValue = F("Mödlareuth");
        break;
    }
    case 225590:
    {
        returnValue = F("Mödlareuther Str.");
        break;
    }
    case 225591:
    {
        returnValue = F("Mödlenreuth");
        break;
    }
    case 225592:
    {
        returnValue = F("Mödlicher Weg");
        break;
    }
    case 225593:
    {
        returnValue = F("Mödlingstr.");
        break;
    }
    case 225594:
    {
        returnValue = F("Mödlitzer Str.");
        break;
    }
    case 225595:
    {
        returnValue = F("Mödlitzer Weg");
        break;
    }
    case 225596:
    {
        returnValue = F("Mödlsbacher Feldstr.");
        break;
    }
    case 225597:
    {
        returnValue = F("Mödnitzer Weg");
        break;
    }
    case 225598:
    {
        returnValue = F("Mödrather Str.");
        break;
    }
    case 225599:
    {
        returnValue = F("Mögelheuweg");
        break;
    }
    case 225600:
    {
        returnValue = F("Mögeliner Bahnhofstr.");
        break;
    }
    case 225601:
    {
        returnValue = F("Mögeliner Chaussee");
        break;
    }
    case 225602:
    {
        returnValue = F("Mögeliner Heideweg");
        break;
    }
    case 225603:
    {
        returnValue = F("Mögeliner Lindenweg");
        break;
    }
    case 225604:
    {
        returnValue = F("Mögelinstr.");
        break;
    }
    case 225605:
    {
        returnValue = F("Mögen");
        break;
    }
    case 225606:
    {
        returnValue = F("Mögendorf");
        break;
    }
    case 225607:
    {
        returnValue = F("Mögener Str.");
        break;
    }
    case 225608:
    {
        returnValue = F("Möggenhausen Trail");
        break;
    }
    case 225609:
    {
        returnValue = F("Möggenweilerstr.");
        break;
    }
    case 225610:
    {
        returnValue = F("Möggingen");
        break;
    }
    case 225611:
    {
        returnValue = F("Mögginger Steig");
        break;
    }
    case 225612:
    {
        returnValue = F("Mögginger Str.");
        break;
    }
    case 225613:
    {
        returnValue = F("Mögglinger Str.");
        break;
    }
    case 225614:
    {
        returnValue = F("Mögistorstr.");
        break;
    }
    case 225615:
    {
        returnValue = F("Möglin");
        break;
    }
    case 225616:
    {
        returnValue = F("Mögliner Str.");
        break;
    }
    case 225617:
    {
        returnValue = F("Mögliner Weg");
        break;
    }
    case 225618:
    {
        returnValue = F("Möglinger Pfad");
        break;
    }
    case 225619:
    {
        returnValue = F("Möglinger Str.");
        break;
    }
    case 225620:
    {
        returnValue = F("Möglinger Weg");
        break;
    }
    case 225621:
    {
        returnValue = F("Möglingshöhe");
        break;
    }
    case 225622:
    {
        returnValue = F("Möglingstr.");
        break;
    }
    case 225623:
    {
        returnValue = F("Mögstetten");
        break;
    }
    case 225624:
    {
        returnValue = F("Möhlacker");
        break;
    }
    case 225625:
    {
        returnValue = F("Möhlaer Str.");
        break;
    }
    case 225626:
    {
        returnValue = F("Möhlauer Str.");
        break;
    }
    case 225627:
    {
        returnValue = F("Möhlbarg");
        break;
    }
    case 225628:
    {
        returnValue = F("Möhlenau");
        break;
    }
    case 225629:
    {
        returnValue = F("Möhlenbarg");
        break;
    }
    case 225630:
    {
        returnValue = F("Möhlenbecker Weg");
        break;
    }
    case 225631:
    {
        returnValue = F("Möhlenbek");
        break;
    }
    case 225632:
    {
        returnValue = F("Möhlenbleek");
        break;
    }
    case 225633:
    {
        returnValue = F("Möhlenbraken");
        break;
    }
    case 225634:
    {
        returnValue = F("Möhlenbreede");
        break;
    }
    case 225635:
    {
        returnValue = F("Möhlenbrehe");
        break;
    }
    case 225636:
    {
        returnValue = F("Möhlenbrinkstr.");
        break;
    }
    case 225637:
    {
        returnValue = F("Möhlenbrocksfeld");
        break;
    }
    case 225638:
    {
        returnValue = F("Möhlend");
        break;
    }
    case 225639:
    {
        returnValue = F("Möhlendamm");
        break;
    }
    case 225640:
    {
        returnValue = F("Möhlendiek");
        break;
    }
    case 225641:
    {
        returnValue = F("Möhlendieken");
        break;
    }
    case 225642:
    {
        returnValue = F("Möhlendoorstraat");
        break;
    }
    case 225643:
    {
        returnValue = F("Möhlendyck");
        break;
    }
    case 225644:
    {
        returnValue = F("Möhleneck");
        break;
    }
    case 225645:
    {
        returnValue = F("Möhlenflögel");
        break;
    }
    case 225646:
    {
        returnValue = F("Möhlengang");
        break;
    }
    case 225647:
    {
        returnValue = F("Möhlenholt");
        break;
    }
    case 225648:
    {
        returnValue = F("Möhlenhöpen");
        break;
    }
    case 225649:
    {
        returnValue = F("Möhlenhörn");
        break;
    }
    case 225650:
    {
        returnValue = F("Möhlenkamp");
        break;
    }
    case 225651:
    {
        returnValue = F("Möhlenkampstr.");
        break;
    }
    case 225652:
    {
        returnValue = F("Möhlenkampsweg");
        break;
    }
    case 225653:
    {
        returnValue = F("Möhlenkoppel");
        break;
    }
    case 225654:
    {
        returnValue = F("Möhlenpad");
        break;
    }
    case 225655:
    {
        returnValue = F("Möhlenpadd");
        break;
    }
    case 225656:
    {
        returnValue = F("Möhlenpatt");
        break;
    }
    case 225657:
    {
        returnValue = F("Möhlenredder");
        break;
    }
    case 225658:
    {
        returnValue = F("Möhlenriede");
        break;
    }
    case 225659:
    {
        returnValue = F("Möhlenring");
        break;
    }
    case 225660:
    {
        returnValue = F("Möhlenschleede");
        break;
    }
    case 225661:
    {
        returnValue = F("Möhlensoll");
        break;
    }
    case 225662:
    {
        returnValue = F("Möhlenstedt");
        break;
    }
    case 225663:
    {
        returnValue = F("Möhlensteen");
        break;
    }
    case 225664:
    {
        returnValue = F("Möhlenstieg");
        break;
    }
    case 225665:
    {
        returnValue = F("Möhlenstraat");
        break;
    }
    case 225666:
    {
        returnValue = F("Möhlenstroot");
        break;
    }
    case 225667:
    {
        returnValue = F("Möhlenstrot");
        break;
    }
    case 225668:
    {
        returnValue = F("Möhlenstärtstr.");
        break;
    }
    case 225669:
    {
        returnValue = F("Möhlentangen");
        break;
    }
    case 225670:
    {
        returnValue = F("Möhlentogten");
        break;
    }
    case 225671:
    {
        returnValue = F("Möhlenwarf");
        break;
    }
    case 225672:
    {
        returnValue = F("Möhlenweg");
        break;
    }
    case 225673:
    {
        returnValue = F("Möhlenwisch");
        break;
    }
    case 225674:
    {
        returnValue = F("Möhlerplatz");
        break;
    }
    case 225675:
    {
        returnValue = F("Möhlerstr.");
        break;
    }
    case 225676:
    {
        returnValue = F("Möhlestr.");
        break;
    }
    case 225677:
    {
        returnValue = F("Möhlhorster Weg");
        break;
    }
    case 225678:
    {
        returnValue = F("Möhlinstr.");
        break;
    }
    case 225679:
    {
        returnValue = F("Möhlmannsweg");
        break;
    }
    case 225680:
    {
        returnValue = F("Möhlnbarg");
        break;
    }
    case 225681:
    {
        returnValue = F("Möhneburg");
        break;
    }
    case 225682:
    {
        returnValue = F("Möhnedamm");
        break;
    }
    case 225683:
    {
        returnValue = F("Möhnepforte");
        break;
    }
    case 225684:
    {
        returnValue = F("Möhner Weg");
        break;
    }
    case 225685:
    {
        returnValue = F("Möhnerfeld");
        break;
    }
    case 225686:
    {
        returnValue = F("Möhnering");
        break;
    }
    case 225687:
    {
        returnValue = F("Möhnestr.");
        break;
    }
    case 225688:
    {
        returnValue = F("Möhnetal");
        break;
    }
    case 225689:
    {
        returnValue = F("Möhneufer");
        break;
    }
    case 225690:
    {
        returnValue = F("Möhneweg");
        break;
    }
    case 225691:
    {
        returnValue = F("Möhnstr.");
        break;
    }
    case 225692:
    {
        returnValue = F("Möhntal");
        break;
    }
    case 225693:
    {
        returnValue = F("Möhraer Str.");
        break;
    }
    case 225694:
    {
        returnValue = F("Möhraer Weg");
        break;
    }
    case 225695:
    {
        returnValue = F("Möhrenbachstr.");
        break;
    }
    case 225696:
    {
        returnValue = F("Möhrenbachtal");
        break;
    }
    case 225697:
    {
        returnValue = F("Möhrenbachweg");
        break;
    }
    case 225698:
    {
        returnValue = F("Möhrenblick");
        break;
    }
    case 225699:
    {
        returnValue = F("Möhrendorfer Str.");
        break;
    }
    case 225700:
    {
        returnValue = F("Möhrendorfer Weg");
        break;
    }
    case 225701:
    {
        returnValue = F("Möhrener Str.");
        break;
    }
    case 225702:
    {
        returnValue = F("Möhrengarten");
        break;
    }
    case 225703:
    {
        returnValue = F("Möhrengasse");
        break;
    }
    case 225704:
    {
        returnValue = F("Möhrensaat");
        break;
    }
    case 225705:
    {
        returnValue = F("Möhrenstieg");
        break;
    }
    case 225706:
    {
        returnValue = F("Möhrenstr.");
        break;
    }
    case 225707:
    {
        returnValue = F("Möhrenweg");
        break;
    }
    case 225708:
    {
        returnValue = F("Möhriger Str.");
        break;
    }
    case 225709:
    {
        returnValue = F("Möhringer Str.");
        break;
    }
    case 225710:
    {
        returnValue = F("Möhringer Täle");
        break;
    }
    case 225711:
    {
        returnValue = F("Möhringer Weg");
        break;
    }
    case 225712:
    {
        returnValue = F("Möhringstr.");
        break;
    }
    case 225713:
    {
        returnValue = F("Möhringsweg");
        break;
    }
    case 225714:
    {
        returnValue = F("Möhringswiesen-Schneise");
        break;
    }
    case 225715:
    {
        returnValue = F("Möhrkestr.");
        break;
    }
    case 225716:
    {
        returnValue = F("Möhrleinsweg");
        break;
    }
    case 225717:
    {
        returnValue = F("Möhrlinstr.");
        break;
    }
    case 225718:
    {
        returnValue = F("Mölbiser Hauptstr.");
        break;
    }
    case 225719:
    {
        returnValue = F("Mölbiser Str.");
        break;
    }
    case 225720:
    {
        returnValue = F("Mölbitzer Hauptstr.");
        break;
    }
    case 225721:
    {
        returnValue = F("Mölbitzer Weg");
        break;
    }
    case 225722:
    {
        returnValue = F("Mölderplatz");
        break;
    }
    case 225723:
    {
        returnValue = F("Möldersstr.");
        break;
    }
    case 225724:
    {
        returnValue = F("Möldersweg");
        break;
    }
    case 225725:
    {
        returnValue = F("Mölderweg");
        break;
    }
    case 225726:
    {
        returnValue = F("Mölenkamp");
        break;
    }
    case 225727:
    {
        returnValue = F("Mölenkoppel");
        break;
    }
    case 225728:
    {
        returnValue = F("Mölhornweg");
        break;
    }
    case 225729:
    {
        returnValue = F("Mölken");
        break;
    }
    case 225730:
    {
        returnValue = F("Mölkenweg");
        break;
    }
    case 225731:
    {
        returnValue = F("Mölkjerstr.");
        break;
    }
    case 225732:
    {
        returnValue = F("Möllbachstr.");
        break;
    }
    case 225733:
    {
        returnValue = F("Möllberger Heide");
        break;
    }
    case 225734:
    {
        returnValue = F("Möllberger Str.");
        break;
    }
    case 225735:
    {
        returnValue = F("Mölleberg");
        break;
    }
    case 225736:
    {
        returnValue = F("Möllekensfeld");
        break;
    }
    case 225737:
    {
        returnValue = F("Möllen");
        break;
    }
    case 225738:
    {
        returnValue = F("Möllenbecker Weg");
        break;
    }
    case 225739:
    {
        returnValue = F("Möllenberg");
        break;
    }
    case 225740:
    {
        returnValue = F("Möllenbreede");
        break;
    }
    case 225741:
    {
        returnValue = F("Möllendick");
        break;
    }
    case 225742:
    {
        returnValue = F("Möllendiek");
        break;
    }
    case 225743:
    {
        returnValue = F("Möllendorf");
        break;
    }
    case 225744:
    {
        returnValue = F("Möllendorfer Chaussee");
        break;
    }
    case 225745:
    {
        returnValue = F("Möllendorfer Dorfstr.");
        break;
    }
    case 225746:
    {
        returnValue = F("Möllendorfer Str.");
        break;
    }
    case 225747:
    {
        returnValue = F("Möllendorfer Weg");
        break;
    }
    case 225748:
    {
        returnValue = F("Möllendorfring");
        break;
    }
    case 225749:
    {
        returnValue = F("Möllendorfstr.");
        break;
    }
    case 225750:
    {
        returnValue = F("Möllenflier");
        break;
    }
    case 225751:
    {
        returnValue = F("Möllengasse");
        break;
    }
    case 225752:
    {
        returnValue = F("Möllenhagener Str.");
        break;
    }
    case 225753:
    {
        returnValue = F("Möllenholt");
        break;
    }
    case 225754:
    {
        returnValue = F("Möllenkamp");
        break;
    }
    case 225755:
    {
        returnValue = F("Möllenkampweg");
        break;
    }
    case 225756:
    {
        returnValue = F("Möllenkotter Str.");
        break;
    }
    case 225757:
    {
        returnValue = F("Möllenschendall");
        break;
    }
    case 225758:
    {
        returnValue = F("Möllensdorfer Breite");
        break;
    }
    case 225759:
    {
        returnValue = F("Möllensdorfer Dorfstr.");
        break;
    }
    case 225760:
    {
        returnValue = F("Möllensdorfer Landstr.");
        break;
    }
    case 225761:
    {
        returnValue = F("Möllensdorfer Str.");
        break;
    }
    case 225762:
    {
        returnValue = F("Möllenser Weg");
        break;
    }
    case 225763:
    {
        returnValue = F("Möllenstegge");
        break;
    }
    case 225764:
    {
        returnValue = F("Möllenstr.");
        break;
    }
    case 225765:
    {
        returnValue = F("Möllenweg");
        break;
    }
    case 225766:
    {
        returnValue = F("Möllenwegg");
        break;
    }
    case 225767:
    {
        returnValue = F("Möller-Brücke");
        break;
    }
    case 225768:
    {
        returnValue = F("Möllerbarg");
        break;
    }
    case 225769:
    {
        returnValue = F("Möllerberg");
        break;
    }
    case 225770:
    {
        returnValue = F("Möllerdamm");
        break;
    }
    case 225771:
    {
        returnValue = F("Möllerdiek");
        break;
    }
    case 225772:
    {
        returnValue = F("Möllereiweg");
        break;
    }
    case 225773:
    {
        returnValue = F("Mölleringstr.");
        break;
    }
    case 225774:
    {
        returnValue = F("Möllerkamp");
        break;
    }
    case 225775:
    {
        returnValue = F("Möllers Garten");
        break;
    }
    case 225776:
    {
        returnValue = F("Möllers Hof");
        break;
    }
    case 225777:
    {
        returnValue = F("Möllers Hoff");
        break;
    }
    case 225778:
    {
        returnValue = F("Möllers Kamp");
        break;
    }
    case 225779:
    {
        returnValue = F("Möllers Park");
        break;
    }
    case 225780:
    {
        returnValue = F("Möllers Weg");
        break;
    }
    case 225781:
    {
        returnValue = F("Möllersbaum");
        break;
    }
    case 225782:
    {
        returnValue = F("Möllersgasse");
        break;
    }
    case 225783:
    {
        returnValue = F("Möllersgrund");
        break;
    }
    case 225784:
    {
        returnValue = F("Möllerskamp");
        break;
    }
    case 225785:
    {
        returnValue = F("Möllersstieg");
        break;
    }
    case 225786:
    {
        returnValue = F("Möllerstr.");
        break;
    }
    case 225787:
    {
        returnValue = F("Möllersweg");
        break;
    }
    case 225788:
    {
        returnValue = F("Möllertwiete");
        break;
    }
    case 225789:
    {
        returnValue = F("Möllerweg");
        break;
    }
    case 225790:
    {
        returnValue = F("Mölleweg");
        break;
    }
    case 225791:
    {
        returnValue = F("Möllewääsch");
        break;
    }
    case 225792:
    {
        returnValue = F("Möllhagen");
        break;
    }
    case 225793:
    {
        returnValue = F("Möllhofstr.");
        break;
    }
    case 225794:
    {
        returnValue = F("Möllhye");
        break;
    }
    case 225795:
    {
        returnValue = F("Möllin");
        break;
    }
    case 225796:
    {
        returnValue = F("Mölling");
        break;
    }
    case 225797:
    {
        returnValue = F("Möllingerstr.");
        break;
    }
    case 225798:
    {
        returnValue = F("Möllings Siek");
        break;
    }
    case 225799:
    {
        returnValue = F("Möllingstr.");
        break;
    }
    case 225800:
    {
        returnValue = F("Möllmanns Feld");
        break;
    }
    case 225801:
    {
        returnValue = F("Möllmanns Kamp");
        break;
    }
    case 225802:
    {
        returnValue = F("Möllmarkheck");
        break;
    }
    case 225803:
    {
        returnValue = F("Möllnbergsweg");
        break;
    }
    case 225804:
    {
        returnValue = F("Möllner Eck");
        break;
    }
    case 225805:
    {
        returnValue = F("Möllner Landstr.");
        break;
    }
    case 225806:
    {
        returnValue = F("Möllner Str.");
        break;
    }
    case 225807:
    {
        returnValue = F("Möllner Weg");
        break;
    }
    case 225808:
    {
        returnValue = F("Möllnsche Str.");
        break;
    }
    case 225809:
    {
        returnValue = F("Möllricher Str.");
        break;
    }
    case 225810:
    {
        returnValue = F("Möllricher Warte");
        break;
    }
    case 225811:
    {
        returnValue = F("Mölmer Ring");
        break;
    }
    case 225812:
    {
        returnValue = F("Mölmer Str.");
        break;
    }
    case 225813:
    {
        returnValue = F("Mölmeshof");
        break;
    }
    case 225814:
    {
        returnValue = F("Mölmeshöfer Str.");
        break;
    }
    case 225815:
    {
        returnValue = F("Mölmkestieg");
        break;
    }
    case 225816:
    {
        returnValue = F("Mölmsweg");
        break;
    }
    case 225817:
    {
        returnValue = F("Mölmweg");
        break;
    }
    case 225818:
    {
        returnValue = F("Mölndalstr.");
        break;
    }
    case 225819:
    {
        returnValue = F("Mölschbacher Str.");
        break;
    }
    case 225820:
    {
        returnValue = F("Mölschbacher Weg");
        break;
    }
    case 225821:
    {
        returnValue = F("Mölschbacherhof");
        break;
    }
    case 225822:
    {
        returnValue = F("Mölschower Weg");
        break;
    }
    case 225823:
    {
        returnValue = F("Mölsheimer Str.");
        break;
    }
    case 225824:
    {
        returnValue = F("Mölsheimerstr.");
        break;
    }
    case 225825:
    {
        returnValue = F("Möltenorter Weg");
        break;
    }
    case 225826:
    {
        returnValue = F("Mölzer Str.");
        break;
    }
    case 225827:
    {
        returnValue = F("Mömbriser Str.");
        break;
    }
    case 225828:
    {
        returnValue = F("Mömelshof");
        break;
    }
    case 225829:
    {
        returnValue = F("Mömlinger Str.");
        break;
    }
    case 225830:
    {
        returnValue = F("Mömlinger Weg");
        break;
    }
    case 225831:
    {
        returnValue = F("Mömmelnkoppel");
        break;
    }
    case 225832:
    {
        returnValue = F("Mömmespötzje");
        break;
    }
    case 225833:
    {
        returnValue = F("Mömpelgarder Weg");
        break;
    }
    case 225834:
    {
        returnValue = F("Mömpelgardgasse");
        break;
    }
    case 225835:
    {
        returnValue = F("Mömpelgardstr.");
        break;
    }
    case 225836:
    {
        returnValue = F("Mömpelgardweg");
        break;
    }
    case 225837:
    {
        returnValue = F("Mömshardt");
        break;
    }
    case 225838:
    {
        returnValue = F("Mönaustr.");
        break;
    }
    case 225839:
    {
        returnValue = F("Mönauweg");
        break;
    }
    case 225840:
    {
        returnValue = F("Mönblick");
        break;
    }
    case 225841:
    {
        returnValue = F("Mönch Ernestus-Wanderweg");
        break;
    }
    case 225842:
    {
        returnValue = F("Mönch-Siegfried-Str.");
        break;
    }
    case 225843:
    {
        returnValue = F("Mönchackerstr.");
        break;
    }
    case 225844:
    {
        returnValue = F("Mönchallee");
        break;
    }
    case 225845:
    {
        returnValue = F("Mönchbachweg");
        break;
    }
    case 225846:
    {
        returnValue = F("Mönchberg");
        break;
    }
    case 225847:
    {
        returnValue = F("Mönchberger Str.");
        break;
    }
    case 225848:
    {
        returnValue = F("Mönchberger Weg");
        break;
    }
    case 225849:
    {
        returnValue = F("Mönchbergerhof");
        break;
    }
    case 225850:
    {
        returnValue = F("Mönchbergstr.");
        break;
    }
    case 225851:
    {
        returnValue = F("Mönchbruchallee");
        break;
    }
    case 225852:
    {
        returnValue = F("Mönchbruchpfad");
        break;
    }
    case 225853:
    {
        returnValue = F("Mönchbruchstr.");
        break;
    }
    case 225854:
    {
        returnValue = F("Mönchbruchweg");
        break;
    }
    case 225855:
    {
        returnValue = F("Mönchbrunnenweg");
        break;
    }
    case 225856:
    {
        returnValue = F("Mönchbuckelweg");
        break;
    }
    case 225857:
    {
        returnValue = F("Mönchbusch");
        break;
    }
    case 225858:
    {
        returnValue = F("Mönchebergstr.");
        break;
    }
    case 225859:
    {
        returnValue = F("Mönchebornweg");
        break;
    }
    case 225860:
    {
        returnValue = F("Mönchebreite");
        break;
    }
    case 225861:
    {
        returnValue = F("Mönchehof");
        break;
    }
    case 225862:
    {
        returnValue = F("Mönchehofer Str.");
        break;
    }
    case 225863:
    {
        returnValue = F("Mönchehofer Weg");
        break;
    }
    case 225864:
    {
        returnValue = F("Möncheholzring");
        break;
    }
    case 225865:
    {
        returnValue = F("Mönchelenweg");
        break;
    }
    case 225866:
    {
        returnValue = F("Mönchelsstr.");
        break;
    }
    case 225867:
    {
        returnValue = F("Mönchenberg");
        break;
    }
    case 225868:
    {
        returnValue = F("Mönchenbusch");
        break;
    }
    case 225869:
    {
        returnValue = F("Mönchenfrei");
        break;
    }
    case 225870:
    {
        returnValue = F("Mönchengladbacher Str.");
        break;
    }
    case 225871:
    {
        returnValue = F("Mönchenkamp");
        break;
    }
    case 225872:
    {
        returnValue = F("Mönchenmühle");
        break;
    }
    case 225873:
    {
        returnValue = F("Mönchenort");
        break;
    }
    case 225874:
    {
        returnValue = F("Mönchenpfad");
        break;
    }
    case 225875:
    {
        returnValue = F("Mönchenstr.");
        break;
    }
    case 225876:
    {
        returnValue = F("Mönchepfad");
        break;
    }
    case 225877:
    {
        returnValue = F("Mönchepfuhl");
        break;
    }
    case 225878:
    {
        returnValue = F("Möncheplatz");
        break;
    }
    case 225879:
    {
        returnValue = F("Möncherderweg");
        break;
    }
    case 225880:
    {
        returnValue = F("Mönchereistr.");
        break;
    }
    case 225881:
    {
        returnValue = F("Mönchescher Weg");
        break;
    }
    case 225882:
    {
        returnValue = F("Mönchestieg");
        break;
    }
    case 225883:
    {
        returnValue = F("Mönchestr.");
        break;
    }
    case 225884:
    {
        returnValue = F("Mönchesweg");
        break;
    }
    case 225885:
    {
        returnValue = F("Mönchevahlberger Str.");
        break;
    }
    case 225886:
    {
        returnValue = F("Möncheweg");
        break;
    }
    case 225887:
    {
        returnValue = F("Mönchewerder");
        break;
    }
    case 225888:
    {
        returnValue = F("Mönchewinkel");
        break;
    }
    case 225889:
    {
        returnValue = F("Mönchfeldstr.");
        break;
    }
    case 225890:
    {
        returnValue = F("Mönchgasse");
        break;
    }
    case 225891:
    {
        returnValue = F("Mönchgrün");
        break;
    }
    case 225892:
    {
        returnValue = F("Mönchgrüner Weg");
        break;
    }
    case 225893:
    {
        returnValue = F("Mönchguter Str.");
        break;
    }
    case 225894:
    {
        returnValue = F("Mönchguter Weg");
        break;
    }
    case 225895:
    {
        returnValue = F("Mönchhaldenstr.");
        break;
    }
    case 225896:
    {
        returnValue = F("Mönchhaldestr.");
        break;
    }
    case 225897:
    {
        returnValue = F("Mönchhausgasse");
        break;
    }
    case 225898:
    {
        returnValue = F("Mönchhof");
        break;
    }
    case 225899:
    {
        returnValue = F("Mönchhofbergstr.");
        break;
    }
    case 225900:
    {
        returnValue = F("Mönchhofer Gasse");
        break;
    }
    case 225901:
    {
        returnValue = F("Mönchhofgasse");
        break;
    }
    case 225902:
    {
        returnValue = F("Mönchhofschneise");
        break;
    }
    case 225903:
    {
        returnValue = F("Mönchhofstr.");
        break;
    }
    case 225904:
    {
        returnValue = F("Mönchhofweg");
        break;
    }
    case 225905:
    {
        returnValue = F("Mönchholzweg");
        break;
    }
    case 225906:
    {
        returnValue = F("Mönchhöfer Str.");
        break;
    }
    case 225907:
    {
        returnValue = F("Mönchhütteweg");
        break;
    }
    case 225908:
    {
        returnValue = F("Mönchkirchhof");
        break;
    }
    case 225909:
    {
        returnValue = F("Mönchkopfstr.");
        break;
    }
    case 225910:
    {
        returnValue = F("Mönchlandstr.");
        break;
    }
    case 225911:
    {
        returnValue = F("Mönchlesweg");
        break;
    }
    case 225912:
    {
        returnValue = F("Mönchmühlenallee");
        break;
    }
    case 225913:
    {
        returnValue = F("Mönchmühlenstr.");
        break;
    }
    case 225914:
    {
        returnValue = F("Mönchort");
        break;
    }
    case 225915:
    {
        returnValue = F("Mönchow");
        break;
    }
    case 225916:
    {
        returnValue = F("Mönchpark");
        break;
    }
    case 225917:
    {
        returnValue = F("Mönchpfiffeler Str.");
        break;
    }
    case 225918:
    {
        returnValue = F("Mönchpforte");
        break;
    }
    case 225919:
    {
        returnValue = F("Mönchrödener Str.");
        break;
    }
    case 225920:
    {
        returnValue = F("Mönchsbachstr.");
        break;
    }
    case 225921:
    {
        returnValue = F("Mönchsberg");
        break;
    }
    case 225922:
    {
        returnValue = F("Mönchsberger Str.");
        break;
    }
    case 225923:
    {
        returnValue = F("Mönchsbergstr.");
        break;
    }
    case 225924:
    {
        returnValue = F("Mönchsbergweg");
        break;
    }
    case 225925:
    {
        returnValue = F("Mönchsbrück");
        break;
    }
    case 225926:
    {
        returnValue = F("Mönchsbrückenweg");
        break;
    }
    case 225927:
    {
        returnValue = F("Mönchsbuchstr.");
        break;
    }
    case 225928:
    {
        returnValue = F("Mönchsbuchweg");
        break;
    }
    case 225929:
    {
        returnValue = F("Mönchsfeld");
        break;
    }
    case 225930:
    {
        returnValue = F("Mönchsfeldstr.");
        break;
    }
    case 225931:
    {
        returnValue = F("Mönchsgarten");
        break;
    }
    case 225932:
    {
        returnValue = F("Mönchsgasse");
        break;
    }
    case 225933:
    {
        returnValue = F("Mönchsgrund");
        break;
    }
    case 225934:
    {
        returnValue = F("Mönchsgrundstr.");
        break;
    }
    case 225935:
    {
        returnValue = F("Mönchsgrundweg");
        break;
    }
    case 225936:
    {
        returnValue = F("Mönchshaldestr.");
        break;
    }
    case 225937:
    {
        returnValue = F("Mönchshang");
        break;
    }
    case 225938:
    {
        returnValue = F("Mönchshaustr.");
        break;
    }
    case 225939:
    {
        returnValue = F("Mönchsheide");
        break;
    }
    case 225940:
    {
        returnValue = F("Mönchsheider Weg");
        break;
    }
    case 225941:
    {
        returnValue = F("Mönchsheimer Weg");
        break;
    }
    case 225942:
    {
        returnValue = F("Mönchshof");
        break;
    }
    case 225943:
    {
        returnValue = F("Mönchshofenweg");
        break;
    }
    case 225944:
    {
        returnValue = F("Mönchshofstr.");
        break;
    }
    case 225945:
    {
        returnValue = F("Mönchshofweg");
        break;
    }
    case 225946:
    {
        returnValue = F("Mönchsholzweg");
        break;
    }
    case 225947:
    {
        returnValue = F("Mönchshöflein");
        break;
    }
    case 225948:
    {
        returnValue = F("Mönchskappenweg");
        break;
    }
    case 225949:
    {
        returnValue = F("Mönchskirchhof");
        break;
    }
    case 225950:
    {
        returnValue = F("Mönchsklingenweg");
        break;
    }
    case 225951:
    {
        returnValue = F("Mönchskopfstr.");
        break;
    }
    case 225952:
    {
        returnValue = F("Mönchskopfweg");
        break;
    }
    case 225953:
    {
        returnValue = F("Mönchslehne");
        break;
    }
    case 225954:
    {
        returnValue = F("Mönchsleite");
        break;
    }
    case 225955:
    {
        returnValue = F("Mönchsmatten");
        break;
    }
    case 225956:
    {
        returnValue = F("Mönchsondheimer Str.");
        break;
    }
    case 225957:
    {
        returnValue = F("Mönchspfad");
        break;
    }
    case 225958:
    {
        returnValue = F("Mönchspfad (Heidenstr.)");
        break;
    }
    case 225959:
    {
        returnValue = F("Mönchspforte");
        break;
    }
    case 225960:
    {
        returnValue = F("Mönchsrain");
        break;
    }
    case 225961:
    {
        returnValue = F("Mönchsrainweg");
        break;
    }
    case 225962:
    {
        returnValue = F("Mönchsreihe");
        break;
    }
    case 225963:
    {
        returnValue = F("Mönchsrother Str.");
        break;
    }
    case 225964:
    {
        returnValue = F("Mönchssiepen");
        break;
    }
    case 225965:
    {
        returnValue = F("Mönchssteig");
        break;
    }
    case 225966:
    {
        returnValue = F("Mönchsstr.");
        break;
    }
    case 225967:
    {
        returnValue = F("Mönchstalweg");
        break;
    }
    case 225968:
    {
        returnValue = F("Mönchsteig");
        break;
    }
    case 225969:
    {
        returnValue = F("Mönchsteige");
        break;
    }
    case 225970:
    {
        returnValue = F("Mönchstieg");
        break;
    }
    case 225971:
    {
        returnValue = F("Mönchstockheimer Str.");
        break;
    }
    case 225972:
    {
        returnValue = F("Mönchstr.");
        break;
    }
    case 225973:
    {
        returnValue = F("Mönchswalder Str.");
        break;
    }
    case 225974:
    {
        returnValue = F("Mönchswaldstr.");
        break;
    }
    case 225975:
    {
        returnValue = F("Mönchsweg");
        break;
    }
    case 225976:
    {
        returnValue = F("Mönchswiese");
        break;
    }
    case 225977:
    {
        returnValue = F("Mönchswiesen");
        break;
    }
    case 225978:
    {
        returnValue = F("Mönchswiesenstr.");
        break;
    }
    case 225979:
    {
        returnValue = F("Mönchswiesenweg");
        break;
    }
    case 225980:
    {
        returnValue = F("Mönchtal");
        break;
    }
    case 225981:
    {
        returnValue = F("Mönchteich");
        break;
    }
    case 225982:
    {
        returnValue = F("Mönchtor");
        break;
    }
    case 225983:
    {
        returnValue = F("Mönchwaldstr.");
        break;
    }
    case 225984:
    {
        returnValue = F("Mönchwaldweg");
        break;
    }
    case 225985:
    {
        returnValue = F("Mönchwarf");
        break;
    }
    case 225986:
    {
        returnValue = F("Mönchweg");
        break;
    }
    case 225987:
    {
        returnValue = F("Mönchweilerstr.");
        break;
    }
    case 225988:
    {
        returnValue = F("Mönchwiese");
        break;
    }
    case 225989:
    {
        returnValue = F("Mönchzeller Steg");
        break;
    }
    case 225990:
    {
        returnValue = F("Mönchzeller Weg");
        break;
    }
    case 225991:
    {
        returnValue = F("Mönchzellerweg");
        break;
    }
    case 225992:
    {
        returnValue = F("Mönchäcker");
        break;
    }
    case 225993:
    {
        returnValue = F("Mönchäckerweg");
        break;
    }
    case 225994:
    {
        returnValue = F("Möndenweg");
        break;
    }
    case 225995:
    {
        returnValue = F("Mönekind");
        break;
    }
    case 225996:
    {
        returnValue = F("Mönengasse");
        break;
    }
    case 225997:
    {
        returnValue = F("Mönicher Heck");
        break;
    }
    case 225998:
    {
        returnValue = F("Mönichsfeld");
        break;
    }
    case 225999:
    {
        returnValue = F("Mönigstr.");
        break;
    }
    case 226000:
    {
        returnValue = F("Möninger Str.");
        break;
    }
    case 226001:
    {
        returnValue = F("Mönkbergseck");
        break;
    }
    case 226002:
    {
        returnValue = F("Mönkeberg");
        break;
    }
    case 226003:
    {
        returnValue = F("Mönkeberger Allee");
        break;
    }
    case 226004:
    {
        returnValue = F("Mönkeberger Weg");
        break;
    }
    case 226005:
    {
        returnValue = F("Mönkebergstr.");
        break;
    }
    case 226006:
    {
        returnValue = F("Mönkebergweg");
        break;
    }
    case 226007:
    {
        returnValue = F("Mönkebrede");
        break;
    }
    case 226008:
    {
        returnValue = F("Mönkeburgstr.");
        break;
    }
    case 226009:
    {
        returnValue = F("Mönkebüller Str.");
        break;
    }
    case 226010:
    {
        returnValue = F("Mönkebüller Weg");
        break;
    }
    case 226011:
    {
        returnValue = F("Mönkediek");
        break;
    }
    case 226012:
    {
        returnValue = F("Mönkehöfener Str.");
        break;
    }
    case 226013:
    {
        returnValue = F("Mönkehörner Lohne");
        break;
    }
    case 226014:
    {
        returnValue = F("Mönkehütte");
        break;
    }
    case 226015:
    {
        returnValue = F("Mönkehüttenring");
        break;
    }
    case 226016:
    {
        returnValue = F("Mönkemöllerweg");
        break;
    }
    case 226017:
    {
        returnValue = F("Mönkenbarg");
        break;
    }
    case 226018:
    {
        returnValue = F("Mönkenbrook");
        break;
    }
    case 226019:
    {
        returnValue = F("Mönkenstiege");
        break;
    }
    case 226020:
    {
        returnValue = F("Mönkenweg");
        break;
    }
    case 226021:
    {
        returnValue = F("Mönkesstück");
        break;
    }
    case 226022:
    {
        returnValue = F("Mönkestr.");
        break;
    }
    case 226023:
    {
        returnValue = F("Mönkesweg");
        break;
    }
    case 226024:
    {
        returnValue = F("Mönkeweg");
        break;
    }
    case 226025:
    {
        returnValue = F("Mönkhagener Redder");
        break;
    }
    case 226026:
    {
        returnValue = F("Mönkingheide");
        break;
    }
    case 226027:
    {
        returnValue = F("Mönkingstr.");
        break;
    }
    case 226028:
    {
        returnValue = F("Mönkloher Str.");
        break;
    }
    case 226029:
    {
        returnValue = F("Mönkloher Weg");
        break;
    }
    case 226030:
    {
        returnValue = F("Mönkvitz");
        break;
    }
    case 226031:
    {
        returnValue = F("Mönkwedener Weg");
        break;
    }
    case 226032:
    {
        returnValue = F("Mönlaser Str.");
        break;
    }
    case 226033:
    {
        returnValue = F("Mönneckenstr.");
        break;
    }
    case 226034:
    {
        returnValue = F("Mönnekendamm");
        break;
    }
    case 226035:
    {
        returnValue = F("Mönnekenwald");
        break;
    }
    case 226036:
    {
        returnValue = F("Mönneker Breite");
        break;
    }
    case 226037:
    {
        returnValue = F("Mönnigskamp");
        break;
    }
    case 226038:
    {
        returnValue = F("Mönnigweg");
        break;
    }
    case 226039:
    {
        returnValue = F("Mönninghausen");
        break;
    }
    case 226040:
    {
        returnValue = F("Mönninghof");
        break;
    }
    case 226041:
    {
        returnValue = F("Mönninghofer Weg");
        break;
    }
    case 226042:
    {
        returnValue = F("Mönninghoffs Feld");
        break;
    }
    case 226043:
    {
        returnValue = F("Mönnkehop");
        break;
    }
    case 226044:
    {
        returnValue = F("Möns");
        break;
    }
    case 226045:
    {
        returnValue = F("Mönser Weg");
        break;
    }
    case 226046:
    {
        returnValue = F("Mönsheimer Steige");
        break;
    }
    case 226047:
    {
        returnValue = F("Mönsheimer Str.");
        break;
    }
    case 226048:
    {
        returnValue = F("Mönsheimer Weg");
        break;
    }
    case 226049:
    {
        returnValue = F("Mönstadter Weg");
        break;
    }
    case 226050:
    {
        returnValue = F("Mönsterweg");
        break;
    }
    case 226051:
    {
        returnValue = F("Mönstettener Str.");
        break;
    }
    case 226052:
    {
        returnValue = F("Mönstädter Str.");
        break;
    }
    case 226053:
    {
        returnValue = F("Möntgeweg");
        break;
    }
    case 226054:
    {
        returnValue = F("Möntkeweg");
        break;
    }
    case 226055:
    {
        returnValue = F("Mönweg");
        break;
    }
    case 226056:
    {
        returnValue = F("Möplü-Park");
        break;
    }
    case 226057:
    {
        returnValue = F("Möpschenberg");
        break;
    }
    case 226058:
    {
        returnValue = F("Mörbacher Weg");
        break;
    }
    case 226059:
    {
        returnValue = F("Mörburgstr.");
        break;
    }
    case 226060:
    {
        returnValue = F("Mörchenstr.");
        break;
    }
    case 226061:
    {
        returnValue = F("Mörderbachtal");
        break;
    }
    case 226062:
    {
        returnValue = F("Mörderdobelweg");
        break;
    }
    case 226063:
    {
        returnValue = F("Mörderlochweg");
        break;
    }
    case 226064:
    {
        returnValue = F("Mörekesiedlung");
        break;
    }
    case 226065:
    {
        returnValue = F("Mörendamm");
        break;
    }
    case 226066:
    {
        returnValue = F("Mörfelder Str.");
        break;
    }
    case 226067:
    {
        returnValue = F("Mörfelder Weg");
        break;
    }
    case 226068:
    {
        returnValue = F("Mörgelacker");
        break;
    }
    case 226069:
    {
        returnValue = F("Mörgener Str.");
        break;
    }
    case 226070:
    {
        returnValue = F("Mörgesweg");
        break;
    }
    case 226071:
    {
        returnValue = F("Mörick");
        break;
    }
    case 226072:
    {
        returnValue = F("Mörickestr.");
        break;
    }
    case 226073:
    {
        returnValue = F("Mörike Weg");
        break;
    }
    case 226074:
    {
        returnValue = F("Mörike-Str.");
        break;
    }
    case 226075:
    {
        returnValue = F("Mörikeplatz");
        break;
    }
    case 226076:
    {
        returnValue = F("Mörikestr.");
        break;
    }
    case 226077:
    {
        returnValue = F("Mörikestrasse");
        break;
    }
    case 226078:
    {
        returnValue = F("Mörikeweg");
        break;
    }
    case 226079:
    {
        returnValue = F("Möringen");
        break;
    }
    case 226080:
    {
        returnValue = F("Möringer Dorfstr.");
        break;
    }
    case 226081:
    {
        returnValue = F("Möringer Str.");
        break;
    }
    case 226082:
    {
        returnValue = F("Möringer Weg");
        break;
    }
    case 226083:
    {
        returnValue = F("Möringstr.");
        break;
    }
    case 226084:
    {
        returnValue = F("Möritzsch");
        break;
    }
    case 226085:
    {
        returnValue = F("Möritzscher Str.");
        break;
    }
    case 226086:
    {
        returnValue = F("Mörken");
        break;
    }
    case 226087:
    {
        returnValue = F("Mörkenstr.");
        break;
    }
    case 226088:
    {
        returnValue = F("Mörkeweg");
        break;
    }
    case 226089:
    {
        returnValue = F("Mörla");
        break;
    }
    case 226090:
    {
        returnValue = F("Mörlach A");
        break;
    }
    case 226091:
    {
        returnValue = F("Mörlach B");
        break;
    }
    case 226092:
    {
        returnValue = F("Mörlach C");
        break;
    }
    case 226093:
    {
        returnValue = F("Mörlach D");
        break;
    }
    case 226094:
    {
        returnValue = F("Mörlach E");
        break;
    }
    case 226095:
    {
        returnValue = F("Mörlach F");
        break;
    }
    case 226096:
    {
        returnValue = F("Mörlaer Str.");
        break;
    }
    case 226097:
    {
        returnValue = F("Mörlaweg");
        break;
    }
    case 226098:
    {
        returnValue = F("Mörlbacher Str.");
        break;
    }
    case 226099:
    {
        returnValue = F("Mörlbacher Weg");
        break;
    }
    case 226100:
    {
        returnValue = F("Mörlenbacher Str.");
        break;
    }
    case 226101:
    {
        returnValue = F("Mörler Grund");
        break;
    }
    case 226102:
    {
        returnValue = F("Mörler Str.");
        break;
    }
    case 226103:
    {
        returnValue = F("Mörler Weg");
        break;
    }
    case 226104:
    {
        returnValue = F("Mörlheimer Hauptstr.");
        break;
    }
    case 226105:
    {
        returnValue = F("Mörlheimer Str.");
        break;
    }
    case 226106:
    {
        returnValue = F("Mörlheimer Weg");
        break;
    }
    case 226107:
    {
        returnValue = F("Mörliehäuser Str.");
        break;
    }
    case 226108:
    {
        returnValue = F("Mörmelsbach");
        break;
    }
    case 226109:
    {
        returnValue = F("Mörmoosener Str.");
        break;
    }
    case 226110:
    {
        returnValue = F("Mörmterer Str.");
        break;
    }
    case 226111:
    {
        returnValue = F("Mörnbachstr.");
        break;
    }
    case 226112:
    {
        returnValue = F("Mörnbachweg");
        break;
    }
    case 226113:
    {
        returnValue = F("Mörnerstr.");
        break;
    }
    case 226114:
    {
        returnValue = F("Mörntalstr.");
        break;
    }
    case 226115:
    {
        returnValue = F("Mörsbacher Str.");
        break;
    }
    case 226116:
    {
        returnValue = F("Mörsbachweg");
        break;
    }
    case 226117:
    {
        returnValue = F("Mörsberg");
        break;
    }
    case 226118:
    {
        returnValue = F("Mörsbergstr.");
        break;
    }
    case 226119:
    {
        returnValue = F("Mörscher Str.");
        break;
    }
    case 226120:
    {
        returnValue = F("Mörscher Weg");
        break;
    }
    case 226121:
    {
        returnValue = F("Mörschgasse");
        break;
    }
    case 226122:
    {
        returnValue = F("Mörschhof");
        break;
    }
    case 226123:
    {
        returnValue = F("Mörschieder Str.");
        break;
    }
    case 226124:
    {
        returnValue = F("Mörschstr.");
        break;
    }
    case 226125:
    {
        returnValue = F("Mörschweg");
        break;
    }
    case 226126:
    {
        returnValue = F("Mörschweide");
        break;
    }
    case 226127:
    {
        returnValue = F("Mörsener Kirchweg");
        break;
    }
    case 226128:
    {
        returnValue = F("Mörser Str.");
        break;
    }
    case 226129:
    {
        returnValue = F("Mörser Weg");
        break;
    }
    case 226130:
    {
        returnValue = F("Mörser Winkel");
        break;
    }
    case 226131:
    {
        returnValue = F("Mörserstr.");
        break;
    }
    case 226132:
    {
        returnValue = F("Mörserweg");
        break;
    }
    case 226133:
    {
        returnValue = F("Mörsfelder Str.");
        break;
    }
    case 226134:
    {
        returnValue = F("Mörshäuser Str.");
        break;
    }
    case 226135:
    {
        returnValue = F("Mörsinger Weg");
        break;
    }
    case 226136:
    {
        returnValue = F("Mörslinger Str.");
        break;
    }
    case 226137:
    {
        returnValue = F("Mörspfad");
        break;
    }
    case 226138:
    {
        returnValue = F("Mörsstr.");
        break;
    }
    case 226139:
    {
        returnValue = F("Mörstädter Str.");
        break;
    }
    case 226140:
    {
        returnValue = F("Mörsweg");
        break;
    }
    case 226141:
    {
        returnValue = F("Mörtelsstr.");
        break;
    }
    case 226142:
    {
        returnValue = F("Mörtelsteiner Str.");
        break;
    }
    case 226143:
    {
        returnValue = F("Mörtelstr.");
        break;
    }
    case 226144:
    {
        returnValue = F("Mörtelsweg");
        break;
    }
    case 226145:
    {
        returnValue = F("Mörtelweg");
        break;
    }
    case 226146:
    {
        returnValue = F("Mörterfeld");
        break;
    }
    case 226147:
    {
        returnValue = F("Mörtestr.");
        break;
    }
    case 226148:
    {
        returnValue = F("Mörthstr.");
        break;
    }
    case 226149:
    {
        returnValue = F("Mörtinger Weg");
        break;
    }
    case 226150:
    {
        returnValue = F("Mörtlstr.");
        break;
    }
    case 226151:
    {
        returnValue = F("Mörzer Konn");
        break;
    }
    case 226152:
    {
        returnValue = F("Mörzheimer Hauptstr.");
        break;
    }
    case 226153:
    {
        returnValue = F("Mörzheimer Str.");
        break;
    }
    case 226154:
    {
        returnValue = F("Mösackerweg");
        break;
    }
    case 226155:
    {
        returnValue = F("Mösbach-Oberachern");
        break;
    }
    case 226156:
    {
        returnValue = F("Mösbacher Höf");
        break;
    }
    case 226157:
    {
        returnValue = F("Mösbacher Str.");
        break;
    }
    case 226158:
    {
        returnValue = F("Mösberg");
        break;
    }
    case 226159:
    {
        returnValue = F("Mösch");
        break;
    }
    case 226160:
    {
        returnValue = F("Möschbachstr.");
        break;
    }
    case 226161:
    {
        returnValue = F("Möschen");
        break;
    }
    case 226162:
    {
        returnValue = F("Möschenfeld");
        break;
    }
    case 226163:
    {
        returnValue = F("Möschenfelder Str.");
        break;
    }
    case 226164:
    {
        returnValue = F("Möschengasse");
        break;
    }
    case 226165:
    {
        returnValue = F("Möschenheck");
        break;
    }
    case 226166:
    {
        returnValue = F("Möschepfad");
        break;
    }
    case 226167:
    {
        returnValue = F("Möschlitzer Str.");
        break;
    }
    case 226168:
    {
        returnValue = F("Möschlitzgasse");
        break;
    }
    case 226169:
    {
        returnValue = F("Möschwitzer Str.");
        break;
    }
    case 226170:
    {
        returnValue = F("Möselstr.");
        break;
    }
    case 226171:
    {
        returnValue = F("Möselweg");
        break;
    }
    case 226172:
    {
        returnValue = F("Mösenthin");
        break;
    }
    case 226173:
    {
        returnValue = F("Möserhöhe");
        break;
    }
    case 226174:
    {
        returnValue = F("Möserstr.");
        break;
    }
    case 226175:
    {
        returnValue = F("Möserweg");
        break;
    }
    case 226176:
    {
        returnValue = F("Mösgesweg");
        break;
    }
    case 226177:
    {
        returnValue = F("Mösich");
        break;
    }
    case 226178:
    {
        returnValue = F("Mösigstr.");
        break;
    }
    case 226179:
    {
        returnValue = F("Mösingerstr.");
        break;
    }
    case 226180:
    {
        returnValue = F("Möskensiepen");
        break;
    }
    case 226181:
    {
        returnValue = F("Möskenweg");
        break;
    }
    case 226182:
    {
        returnValue = F("Möskesweg");
        break;
    }
    case 226183:
    {
        returnValue = F("Mösl");
        break;
    }
    case 226184:
    {
        returnValue = F("Mösle");
        break;
    }
    case 226185:
    {
        returnValue = F("Möslebrunnweg");
        break;
    }
    case 226186:
    {
        returnValue = F("Möslegasse");
        break;
    }
    case 226187:
    {
        returnValue = F("Möslein");
        break;
    }
    case 226188:
    {
        returnValue = F("Möslestr.");
        break;
    }
    case 226189:
    {
        returnValue = F("Mösleweg");
        break;
    }
    case 226190:
    {
        returnValue = F("Mösliweg");
        break;
    }
    case 226191:
    {
        returnValue = F("Möslreit");
        break;
    }
    case 226192:
    {
        returnValue = F("Möslstr.");
        break;
    }
    case 226193:
    {
        returnValue = F("Möslweg");
        break;
    }
    case 226194:
    {
        returnValue = F("Mössekiep");
        break;
    }
    case 226195:
    {
        returnValue = F("Mösselbachweg");
        break;
    }
    case 226196:
    {
        returnValue = F("Mössenbergweg");
        break;
    }
    case 226197:
    {
        returnValue = F("Mössinger Str.");
        break;
    }
    case 226198:
    {
        returnValue = F("Mössingerstr.");
        break;
    }
    case 226199:
    {
        returnValue = F("Mössnang Passage");
        break;
    }
    case 226200:
    {
        returnValue = F("Mössnerhalde");
        break;
    }
    case 226201:
    {
        returnValue = F("Möst");
        break;
    }
    case 226202:
    {
        returnValue = F("Möster Hauptstr.");
        break;
    }
    case 226203:
    {
        returnValue = F("Möster Str.");
        break;
    }
    case 226204:
    {
        returnValue = F("Mösthinsdorfer Str.");
        break;
    }
    case 226205:
    {
        returnValue = F("Mötelsweg");
        break;
    }
    case 226206:
    {
        returnValue = F("Möthe");
        break;
    }
    case 226207:
    {
        returnValue = F("Möthengasse");
        break;
    }
    case 226208:
    {
        returnValue = F("Möthenpfad");
        break;
    }
    case 226209:
    {
        returnValue = F("Möthlitzer Hauptstr.");
        break;
    }
    case 226210:
    {
        returnValue = F("Möthlower Hauptstr.");
        break;
    }
    case 226211:
    {
        returnValue = F("Mötscher Str.");
        break;
    }
    case 226212:
    {
        returnValue = F("Möttauer Str.");
        break;
    }
    case 226213:
    {
        returnValue = F("Möttbachweg");
        break;
    }
    case 226214:
    {
        returnValue = F("Möttelinstr.");
        break;
    }
    case 226215:
    {
        returnValue = F("Möttelistr.");
        break;
    }
    case 226216:
    {
        returnValue = F("Möttlinger Bergweg");
        break;
    }
    case 226217:
    {
        returnValue = F("Möttlinger Str.");
        break;
    }
    case 226218:
    {
        returnValue = F("Möttlinger Weg");
        break;
    }
    case 226219:
    {
        returnValue = F("Mötzelbach");
        break;
    }
    case 226220:
    {
        returnValue = F("Mötzelbacher Str.");
        break;
    }
    case 226221:
    {
        returnValue = F("Mötzinger Str.");
        break;
    }
    case 226222:
    {
        returnValue = F("Mötzlicher Str.");
        break;
    }
    case 226223:
    {
        returnValue = F("Mötzower Dorfstr.");
        break;
    }
    case 226224:
    {
        returnValue = F("Mötzower Landstr.");
        break;
    }
    case 226225:
    {
        returnValue = F("Mötzower Weg");
        break;
    }
    case 226226:
    {
        returnValue = F("Möve");
        break;
    }
    case 226227:
    {
        returnValue = F("Mövenberg");
        break;
    }
    case 226228:
    {
        returnValue = F("Mövenbergstr.");
        break;
    }
    case 226229:
    {
        returnValue = F("Mövengrund");
        break;
    }
    case 226230:
    {
        returnValue = F("Mövenstr.");
        break;
    }
    case 226231:
    {
        returnValue = F("Mövenweg");
        break;
    }
    case 226232:
    {
        returnValue = F("Mövenwischredder");
        break;
    }
    case 226233:
    {
        returnValue = F("Mövesfeld");
        break;
    }
    case 226234:
    {
        returnValue = F("Möwenberg");
        break;
    }
    case 226235:
    {
        returnValue = F("Möwenblick");
        break;
    }
    case 226236:
    {
        returnValue = F("Möwenburgring");
        break;
    }
    case 226237:
    {
        returnValue = F("Möwenburgstr.");
        break;
    }
    case 226238:
    {
        returnValue = F("Möwengasse");
        break;
    }
    case 226239:
    {
        returnValue = F("Möwengrund");
        break;
    }
    case 226240:
    {
        returnValue = F("Möweninsel");
        break;
    }
    case 226241:
    {
        returnValue = F("Möwenkamp");
        break;
    }
    case 226242:
    {
        returnValue = F("Möwennest");
        break;
    }
    case 226243:
    {
        returnValue = F("Möwenring");
        break;
    }
    case 226244:
    {
        returnValue = F("Möwensteert");
        break;
    }
    case 226245:
    {
        returnValue = F("Möwensteg");
        break;
    }
    case 226246:
    {
        returnValue = F("Möwensteig");
        break;
    }
    case 226247:
    {
        returnValue = F("Möwenstieg");
        break;
    }
    case 226248:
    {
        returnValue = F("Möwenstr.");
        break;
    }
    case 226249:
    {
        returnValue = F("Möwentrift");
        break;
    }
    case 226250:
    {
        returnValue = F("Möwenweg");
        break;
    }
    case 226251:
    {
        returnValue = F("Mößdiek");
        break;
    }
    case 226252:
    {
        returnValue = F("Mößlinger Str.");
        break;
    }
    case 226253:
    {
        returnValue = F("Mößlitz");
        break;
    }
    case 226254:
    {
        returnValue = F("Mößlitzer Weg");
        break;
    }
    case 226255:
    {
        returnValue = F("Mößmerstr.");
        break;
    }
    case 226256:
    {
        returnValue = F("Mößnerstr.");
        break;
    }
    case 226257:
    {
        returnValue = F("Mößnerweg");
        break;
    }
    case 226258:
    {
        returnValue = F("Möörkenweg");
        break;
    }
    case 226259:
    {
        returnValue = F("Möörte");
        break;
    }
    case 226260:
    {
        returnValue = F("Möörweg");
        break;
    }
    case 226261:
    {
        returnValue = F("Möösgraav");
        break;
    }
    case 226262:
    {
        returnValue = F("Müchauer Mühle");
        break;
    }
    case 226263:
    {
        returnValue = F("Müchelner Str.");
        break;
    }
    case 226264:
    {
        returnValue = F("Müchelstr.");
        break;
    }
    case 226265:
    {
        returnValue = F("Mückenallee");
        break;
    }
    case 226266:
    {
        returnValue = F("Mückenbachhauptweg");
        break;
    }
    case 226267:
    {
        returnValue = F("Mückenbachweg");
        break;
    }
    case 226268:
    {
        returnValue = F("Mückenbarg");
        break;
    }
    case 226269:
    {
        returnValue = F("Mückenberg");
        break;
    }
    case 226270:
    {
        returnValue = F("Mückenberger Str.");
        break;
    }
    case 226271:
    {
        returnValue = F("Mückenbergerstr.");
        break;
    }
    case 226272:
    {
        returnValue = F("Mückenbergstr.");
        break;
    }
    case 226273:
    {
        returnValue = F("Mückenbroich");
        break;
    }
    case 226274:
    {
        returnValue = F("Mückenbrook");
        break;
    }
    case 226275:
    {
        returnValue = F("Mückenburg");
        break;
    }
    case 226276:
    {
        returnValue = F("Mückenbusch");
        break;
    }
    case 226277:
    {
        returnValue = F("Mückener Str.");
        break;
    }
    case 226278:
    {
        returnValue = F("Mückenfang");
        break;
    }
    case 226279:
    {
        returnValue = F("Mückengasse");
        break;
    }
    case 226280:
    {
        returnValue = F("Mückengrundweg");
        break;
    }
    case 226281:
    {
        returnValue = F("Mückenhainer Str.");
        break;
    }
    case 226282:
    {
        returnValue = F("Mückenhainer Weg");
        break;
    }
    case 226283:
    {
        returnValue = F("Mückenheim");
        break;
    }
    case 226284:
    {
        returnValue = F("Mückenhohlweg");
        break;
    }
    case 226285:
    {
        returnValue = F("Mückenhörn");
        break;
    }
    case 226286:
    {
        returnValue = F("Mückenkamp");
        break;
    }
    case 226287:
    {
        returnValue = F("Mückenkoppelweg");
        break;
    }
    case 226288:
    {
        returnValue = F("Mückenlocher Str.");
        break;
    }
    case 226289:
    {
        returnValue = F("Mückenlocher Weg");
        break;
    }
    case 226290:
    {
        returnValue = F("Mückenmarkt");
        break;
    }
    case 226291:
    {
        returnValue = F("Mückenstich");
        break;
    }
    case 226292:
    {
        returnValue = F("Mückenstr.");
        break;
    }
    case 226293:
    {
        returnValue = F("Mückenstrauch");
        break;
    }
    case 226294:
    {
        returnValue = F("Mückental");
        break;
    }
    case 226295:
    {
        returnValue = F("Mückentwiete");
        break;
    }
    case 226296:
    {
        returnValue = F("Mückenweg");
        break;
    }
    case 226297:
    {
        returnValue = F("Mückenwerder");
        break;
    }
    case 226298:
    {
        returnValue = F("Mückenwiese");
        break;
    }
    case 226299:
    {
        returnValue = F("Mückern");
        break;
    }
    case 226300:
    {
        returnValue = F("Mückernsche Str.");
        break;
    }
    case 226301:
    {
        returnValue = F("Mückernscher Weg");
        break;
    }
    case 226302:
    {
        returnValue = F("Mückestr.");
        break;
    }
    case 226303:
    {
        returnValue = F("Mücklingen");
        break;
    }
    case 226304:
    {
        returnValue = F("Müddersheimer Str.");
        break;
    }
    case 226305:
    {
        returnValue = F("Müddersheimer Weg");
        break;
    }
    case 226306:
    {
        returnValue = F("Müdener Str.");
        break;
    }
    case 226307:
    {
        returnValue = F("Müdener Weg");
        break;
    }
    case 226308:
    {
        returnValue = F("Müdenkamp");
        break;
    }
    case 226309:
    {
        returnValue = F("Müdersbergstr.");
        break;
    }
    case 226310:
    {
        returnValue = F("Müdichstr.");
        break;
    }
    case 226311:
    {
        returnValue = F("Müdisdorfer Grenzweg");
        break;
    }
    case 226312:
    {
        returnValue = F("Müdisdorfer Str.");
        break;
    }
    case 226313:
    {
        returnValue = F("Müdisdorfer Weg");
        break;
    }
    case 226314:
    {
        returnValue = F("Müernstr.");
        break;
    }
    case 226315:
    {
        returnValue = F("Müfflingstr.");
        break;
    }
    case 226316:
    {
        returnValue = F("Mügelner Landstr.");
        break;
    }
    case 226317:
    {
        returnValue = F("Mügelner Str.");
        break;
    }
    case 226318:
    {
        returnValue = F("Müggelheimer Str.");
        break;
    }
    case 226319:
    {
        returnValue = F("Müggelheimer Weg");
        break;
    }
    case 226320:
    {
        returnValue = F("Müggelseeweg");
        break;
    }
    case 226321:
    {
        returnValue = F("Müggelstr.");
        break;
    }
    case 226322:
    {
        returnValue = F("Müggelweg");
        break;
    }
    case 226323:
    {
        returnValue = F("Müggenbach");
        break;
    }
    case 226324:
    {
        returnValue = F("Müggenberg");
        break;
    }
    case 226325:
    {
        returnValue = F("Müggenbergring");
        break;
    }
    case 226326:
    {
        returnValue = F("Müggenbergstr.");
        break;
    }
    case 226327:
    {
        returnValue = F("Müggenbicke");
        break;
    }
    case 226328:
    {
        returnValue = F("Müggenborn");
        break;
    }
    case 226329:
    {
        returnValue = F("Müggenbruch");
        break;
    }
    case 226330:
    {
        returnValue = F("Müggenbrucher Weg");
        break;
    }
    case 226331:
    {
        returnValue = F("Müggenburg");
        break;
    }
    case 226332:
    {
        returnValue = F("Müggenburger Schneise");
        break;
    }
    case 226333:
    {
        returnValue = F("Müggenburger Str.");
        break;
    }
    case 226334:
    {
        returnValue = F("Müggenburger Weg");
        break;
    }
    case 226335:
    {
        returnValue = F("Müggenburgpark");
        break;
    }
    case 226336:
    {
        returnValue = F("Müggenburgstr.");
        break;
    }
    case 226337:
    {
        returnValue = F("Müggenburgweg");
        break;
    }
    case 226338:
    {
        returnValue = F("Müggenbusch");
        break;
    }
    case 226339:
    {
        returnValue = F("Müggenbuschweg");
        break;
    }
    case 226340:
    {
        returnValue = F("Müggendahlweg");
        break;
    }
    case 226341:
    {
        returnValue = F("Müggendorf");
        break;
    }
    case 226342:
    {
        returnValue = F("Müggendorfer Str.");
        break;
    }
    case 226343:
    {
        returnValue = F("Müggendorfer Weg");
        break;
    }
    case 226344:
    {
        returnValue = F("Müggenfang");
        break;
    }
    case 226345:
    {
        returnValue = F("Müggenhall");
        break;
    }
    case 226346:
    {
        returnValue = F("Müggenhausener Str.");
        break;
    }
    case 226347:
    {
        returnValue = F("Müggenhorst");
        break;
    }
    case 226348:
    {
        returnValue = F("Müggenkruger Str.");
        break;
    }
    case 226349:
    {
        returnValue = F("Müggenort");
        break;
    }
    case 226350:
    {
        returnValue = F("Müggenwalde");
        break;
    }
    case 226351:
    {
        returnValue = F("Müggenwarf");
        break;
    }
    case 226352:
    {
        returnValue = F("Müggenwinkel");
        break;
    }
    case 226353:
    {
        returnValue = F("Müglenzer Dorfstr.");
        break;
    }
    case 226354:
    {
        returnValue = F("Müglenzer Str.");
        break;
    }
    case 226355:
    {
        returnValue = F("Müglitzer Weg");
        break;
    }
    case 226356:
    {
        returnValue = F("Müglitztalstr.");
        break;
    }
    case 226357:
    {
        returnValue = F("Mühedeich");
        break;
    }
    case 226358:
    {
        returnValue = F("Mühenweg");
        break;
    }
    case 226359:
    {
        returnValue = F("Mühestr.");
        break;
    }
    case 226360:
    {
        returnValue = F("Mühgrund");
        break;
    }
    case 226361:
    {
        returnValue = F("Mühlacker");
        break;
    }
    case 226362:
    {
        returnValue = F("Mühlacker Stadtgarten");
        break;
    }
    case 226363:
    {
        returnValue = F("Mühlacker Str.");
        break;
    }
    case 226364:
    {
        returnValue = F("Mühlackerstr.");
        break;
    }
    case 226365:
    {
        returnValue = F("Mühlackerweg");
        break;
    }
    case 226366:
    {
        returnValue = F("Mühlanger");
        break;
    }
    case 226367:
    {
        returnValue = F("Mühlangerstr.");
        break;
    }
    case 226368:
    {
        returnValue = F("Mühlangerweg");
        break;
    }
    case 226369:
    {
        returnValue = F("Mühlau");
        break;
    }
    case 226370:
    {
        returnValue = F("Mühlaue");
        break;
    }
    case 226371:
    {
        returnValue = F("Mühlauer Freie");
        break;
    }
    case 226372:
    {
        returnValue = F("Mühlauer Str.");
        break;
    }
    case 226373:
    {
        returnValue = F("Mühlauer Weg");
        break;
    }
    case 226374:
    {
        returnValue = F("Mühlauerweg");
        break;
    }
    case 226375:
    {
        returnValue = F("Mühlaustr.");
        break;
    }
    case 226376:
    {
        returnValue = F("Mühlauweg");
        break;
    }
    case 226377:
    {
        returnValue = F("Mühlbach");
        break;
    }
    case 226378:
    {
        returnValue = F("Mühlbach-Wiede Weg");
        break;
    }
    case 226379:
    {
        returnValue = F("Mühlbachbogen");
        break;
    }
    case 226380:
    {
        returnValue = F("Mühlbachbrücke");
        break;
    }
    case 226381:
    {
        returnValue = F("Mühlbacher Gasse");
        break;
    }
    case 226382:
    {
        returnValue = F("Mühlbacher Pfad");
        break;
    }
    case 226383:
    {
        returnValue = F("Mühlbacher Str.");
        break;
    }
    case 226384:
    {
        returnValue = F("Mühlbacher Weg");
        break;
    }
    case 226385:
    {
        returnValue = F("Mühlbachgarten");
        break;
    }
    case 226386:
    {
        returnValue = F("Mühlbachgasse");
        break;
    }
    case 226387:
    {
        returnValue = F("Mühlbachgraben");
        break;
    }
    case 226388:
    {
        returnValue = F("Mühlbachhof");
        break;
    }
    case 226389:
    {
        returnValue = F("Mühlbachleite");
        break;
    }
    case 226390:
    {
        returnValue = F("Mühlbachmitte");
        break;
    }
    case 226391:
    {
        returnValue = F("Mühlbachpark");
        break;
    }
    case 226392:
    {
        returnValue = F("Mühlbachpassage");
        break;
    }
    case 226393:
    {
        returnValue = F("Mühlbachring");
        break;
    }
    case 226394:
    {
        returnValue = F("Mühlbachs Kopfweg");
        break;
    }
    case 226395:
    {
        returnValue = F("Mühlbachskopfweg");
        break;
    }
    case 226396:
    {
        returnValue = F("Mühlbachstr.");
        break;
    }
    case 226397:
    {
        returnValue = F("Mühlbachsweg");
        break;
    }
    case 226398:
    {
        returnValue = F("Mühlbachswinkel");
        break;
    }
    case 226399:
    {
        returnValue = F("Mühlbachtal");
        break;
    }
    case 226400:
    {
        returnValue = F("Mühlbachweg");
        break;
    }
    case 226401:
    {
        returnValue = F("Mühlbachwiesen");
        break;
    }
    case 226402:
    {
        returnValue = F("Mühlbachäckerstr.");
        break;
    }
    case 226403:
    {
        returnValue = F("Mühlbauerstr.");
        break;
    }
    case 226404:
    {
        returnValue = F("Mühlbecker Str.");
        break;
    }
    case 226405:
    {
        returnValue = F("Mühlberg");
        break;
    }
    case 226406:
    {
        returnValue = F("Mühlbergblick");
        break;
    }
    case 226407:
    {
        returnValue = F("Mühlberger Allee");
        break;
    }
    case 226408:
    {
        returnValue = F("Mühlberger Str.");
        break;
    }
    case 226409:
    {
        returnValue = F("Mühlberger Weg");
        break;
    }
    case 226410:
    {
        returnValue = F("Mühlbergerhof");
        break;
    }
    case 226411:
    {
        returnValue = F("Mühlbergerstr.");
        break;
    }
    case 226412:
    {
        returnValue = F("Mühlberggasse");
        break;
    }
    case 226413:
    {
        returnValue = F("Mühlbergle");
        break;
    }
    case 226414:
    {
        returnValue = F("Mühlbergring");
        break;
    }
    case 226415:
    {
        returnValue = F("Mühlbergstr.");
        break;
    }
    case 226416:
    {
        returnValue = F("Mühlbergsweg");
        break;
    }
    case 226417:
    {
        returnValue = F("Mühlbergtunnel");
        break;
    }
    case 226418:
    {
        returnValue = F("Mühlbergweg");
        break;
    }
    case 226419:
    {
        returnValue = F("Mühlbierlweg");
        break;
    }
    case 226420:
    {
        returnValue = F("Mühlbogenstr.");
        break;
    }
    case 226421:
    {
        returnValue = F("Mühlbornstr.");
        break;
    }
    case 226422:
    {
        returnValue = F("Mühlbosch");
        break;
    }
    case 226423:
    {
        returnValue = F("Mühlbreite");
        break;
    }
    case 226424:
    {
        returnValue = F("Mühlbruckstr.");
        break;
    }
    case 226425:
    {
        returnValue = F("Mühlbrunnen");
        break;
    }
    case 226426:
    {
        returnValue = F("Mühlbrunnenstr.");
        break;
    }
    case 226427:
    {
        returnValue = F("Mühlbrücke");
        break;
    }
    case 226428:
    {
        returnValue = F("Mühlbrückenweg");
        break;
    }
    case 226429:
    {
        returnValue = F("Mühlbrückla");
        break;
    }
    case 226430:
    {
        returnValue = F("Mühlbuck");
        break;
    }
    case 226431:
    {
        returnValue = F("Mühlbuckel");
        break;
    }
    case 226432:
    {
        returnValue = F("Mühlburger Str.");
        break;
    }
    case 226433:
    {
        returnValue = F("Mühlburgweg");
        break;
    }
    case 226434:
    {
        returnValue = F("Mühlburren");
        break;
    }
    case 226435:
    {
        returnValue = F("Mühlbühelweg");
        break;
    }
    case 226436:
    {
        returnValue = F("Mühlbühl");
        break;
    }
    case 226437:
    {
        returnValue = F("Mühlbühlstr.");
        break;
    }
    case 226438:
    {
        returnValue = F("Mühlbühlweg");
        break;
    }
    case 226439:
    {
        returnValue = F("Mühlchenstr.");
        break;
    }
    case 226440:
    {
        returnValue = F("Mühldamm");
        break;
    }
    case 226441:
    {
        returnValue = F("Mühldobelweg");
        break;
    }
    case 226442:
    {
        returnValue = F("Mühldorf");
        break;
    }
    case 226443:
    {
        returnValue = F("Mühldorfer Str.");
        break;
    }
    case 226444:
    {
        returnValue = F("Mühldorfer Weg");
        break;
    }
    case 226445:
    {
        returnValue = F("Mühldörfchen");
        break;
    }
    case 226446:
    {
        returnValue = F("Mühldörfle");
        break;
    }
    case 226447:
    {
        returnValue = F("Mühldörflstr.");
        break;
    }
    case 226448:
    {
        returnValue = F("Mühle");
        break;
    }
    case 226449:
    {
        returnValue = F("Mühle Heuchlingen");
        break;
    }
    case 226450:
    {
        returnValue = F("Mühle Metz");
        break;
    }
    case 226451:
    {
        returnValue = F("Mühle Waldweg");
        break;
    }
    case 226452:
    {
        returnValue = F("Mühlebacher Feld");
        break;
    }
    case 226453:
    {
        returnValue = F("Mühleberg");
        break;
    }
    case 226454:
    {
        returnValue = F("Mühlebergstr.");
        break;
    }
    case 226455:
    {
        returnValue = F("Mühlebergweg");
        break;
    }
    case 226456:
    {
        returnValue = F("Mühleboden");
        break;
    }
    case 226457:
    {
        returnValue = F("Mühlebächle");
        break;
    }
    case 226458:
    {
        returnValue = F("Mühleck");
        break;
    }
    case 226459:
    {
        returnValue = F("Mühlecke");
        break;
    }
    case 226460:
    {
        returnValue = F("Mühleckerstr.");
        break;
    }
    case 226461:
    {
        returnValue = F("Mühleckle");
        break;
    }
    case 226462:
    {
        returnValue = F("Mühleckstr.");
        break;
    }
    case 226463:
    {
        returnValue = F("Mühledobel");
        break;
    }
    case 226464:
    {
        returnValue = F("Mühlefeld");
        break;
    }
    case 226465:
    {
        returnValue = F("Mühlefeldstr.");
        break;
    }
    case 226466:
    {
        returnValue = F("Mühlegasse");
        break;
    }
    case 226467:
    {
        returnValue = F("Mühlegraben");
        break;
    }
    case 226468:
    {
        returnValue = F("Mühlegrabenweg");
        break;
    }
    case 226469:
    {
        returnValue = F("Mühlegrünstr.");
        break;
    }
    case 226470:
    {
        returnValue = F("Mühlegärten");
        break;
    }
    case 226471:
    {
        returnValue = F("Mühlegärtle");
        break;
    }
    case 226472:
    {
        returnValue = F("Mühlegäßchen");
        break;
    }
    case 226473:
    {
        returnValue = F("Mühlegäßle");
        break;
    }
    case 226474:
    {
        returnValue = F("Mühlehalden");
        break;
    }
    case 226475:
    {
        returnValue = F("Mühlehof");
        break;
    }
    case 226476:
    {
        returnValue = F("Mühleiche");
        break;
    }
    case 226477:
    {
        returnValue = F("Mühleinsel");
        break;
    }
    case 226478:
    {
        returnValue = F("Mühleiper Str.");
        break;
    }
    case 226479:
    {
        returnValue = F("Mühleisenstr.");
        break;
    }
    case 226480:
    {
        returnValue = F("Mühleisenweg");
        break;
    }
    case 226481:
    {
        returnValue = F("Mühleller");
        break;
    }
    case 226482:
    {
        returnValue = F("Mühlematt");
        break;
    }
    case 226483:
    {
        returnValue = F("Mühlematten");
        break;
    }
    case 226484:
    {
        returnValue = F("Mühlemattstr.");
        break;
    }
    case 226485:
    {
        returnValue = F("Mühlemattweg");
        break;
    }
    case 226486:
    {
        returnValue = F("Mühlen");
        break;
    }
    case 226487:
    {
        returnValue = F("Mühlen Eichsener Str.");
        break;
    }
    case 226488:
    {
        returnValue = F("Mühlen-Schneise");
        break;
    }
    case 226489:
    {
        returnValue = F("Mühlen-Weg");
        break;
    }
    case 226490:
    {
        returnValue = F("Mühlenacker");
        break;
    }
    case 226491:
    {
        returnValue = F("Mühlenackerweg");
        break;
    }
    case 226492:
    {
        returnValue = F("Mühlenallee");
        break;
    }
    case 226493:
    {
        returnValue = F("Mühlenanger");
        break;
    }
    case 226494:
    {
        returnValue = F("Mühlenau");
        break;
    }
    case 226495:
    {
        returnValue = F("Mühlenaue");
        break;
    }
    case 226496:
    {
        returnValue = F("Mühlenauel");
        break;
    }
    case 226497:
    {
        returnValue = F("Mühlenauer Str.");
        break;
    }
    case 226498:
    {
        returnValue = F("Mühlenaupark");
        break;
    }
    case 226499:
    {
        returnValue = F("Mühlenausbau");
        break;
    }
    case 226500:
    {
        returnValue = F("Mühlenaustr.");
        break;
    }
    case 226501:
    {
        returnValue = F("Mühlenbach");
        break;
    }
    case 226502:
    {
        returnValue = F("Mühlenbachaue");
        break;
    }
    case 226503:
    {
        returnValue = F("Mühlenbacher Str.");
        break;
    }
    case 226504:
    {
        returnValue = F("Mühlenbachstr.");
        break;
    }
    case 226505:
    {
        returnValue = F("Mühlenbachtal");
        break;
    }
    case 226506:
    {
        returnValue = F("Mühlenbachweg");
        break;
    }
    case 226507:
    {
        returnValue = F("Mühlenbachwegle");
        break;
    }
    case 226508:
    {
        returnValue = F("Mühlenbauerweg");
        break;
    }
    case 226509:
    {
        returnValue = F("Mühlenbecker Chaussee");
        break;
    }
    case 226510:
    {
        returnValue = F("Mühlenbecker Damm");
        break;
    }
    case 226511:
    {
        returnValue = F("Mühlenbecker Ende");
        break;
    }
    case 226512:
    {
        returnValue = F("Mühlenbecker Str.");
        break;
    }
    case 226513:
    {
        returnValue = F("Mühlenbecker Weg");
        break;
    }
    case 226514:
    {
        returnValue = F("Mühlenbek");
        break;
    }
    case 226515:
    {
        returnValue = F("Mühlenbeker Str.");
        break;
    }
    case 226516:
    {
        returnValue = F("Mühlenbenden");
        break;
    }
    case 226517:
    {
        returnValue = F("Mühlenbendstr.");
        break;
    }
    case 226518:
    {
        returnValue = F("Mühlenberg");
        break;
    }
    case 226519:
    {
        returnValue = F("Mühlenbergblick");
        break;
    }
    case 226520:
    {
        returnValue = F("Mühlenberghöhe");
        break;
    }
    case 226521:
    {
        returnValue = F("Mühlenbergpfad");
        break;
    }
    case 226522:
    {
        returnValue = F("Mühlenbergring");
        break;
    }
    case 226523:
    {
        returnValue = F("Mühlenbergshufe");
        break;
    }
    case 226524:
    {
        returnValue = F("Mühlenbergsiedlung");
        break;
    }
    case 226525:
    {
        returnValue = F("Mühlenbergstr.");
        break;
    }
    case 226526:
    {
        returnValue = F("Mühlenbergsweg");
        break;
    }
    case 226527:
    {
        returnValue = F("Mühlenbergweg");
        break;
    }
    case 226528:
    {
        returnValue = F("Mühlenbichlweg");
        break;
    }
    case 226529:
    {
        returnValue = F("Mühlenbitze");
        break;
    }
    case 226530:
    {
        returnValue = F("Mühlenblick");
        break;
    }
    case 226531:
    {
        returnValue = F("Mühlenblöcken");
        break;
    }
    case 226532:
    {
        returnValue = F("Mühlenboden");
        break;
    }
    case 226533:
    {
        returnValue = F("Mühlenbogen");
        break;
    }
    case 226534:
    {
        returnValue = F("Mühlenborn");
        break;
    }
    case 226535:
    {
        returnValue = F("Mühlenbrede");
        break;
    }
    case 226536:
    {
        returnValue = F("Mühlenbreede");
        break;
    }
    case 226537:
    {
        returnValue = F("Mühlenbreite");
        break;
    }
    case 226538:
    {
        returnValue = F("Mühlenbrey");
        break;
    }
    case 226539:
    {
        returnValue = F("Mühlenbrink");
        break;
    }
    case 226540:
    {
        returnValue = F("Mühlenbrinkstr.");
        break;
    }
    case 226541:
    {
        returnValue = F("Mühlenbrinkweg");
        break;
    }
    case 226542:
    {
        returnValue = F("Mühlenbroicher Weg");
        break;
    }
    case 226543:
    {
        returnValue = F("Mühlenbrok");
        break;
    }
    case 226544:
    {
        returnValue = F("Mühlenbrook");
        break;
    }
    case 226545:
    {
        returnValue = F("Mühlenbruch");
        break;
    }
    case 226546:
    {
        returnValue = F("Mühlenbruchdamm");
        break;
    }
    case 226547:
    {
        returnValue = F("Mühlenbruchstr.");
        break;
    }
    case 226548:
    {
        returnValue = F("Mühlenbruchsweg");
        break;
    }
    case 226549:
    {
        returnValue = F("Mühlenbruchweg");
        break;
    }
    case 226550:
    {
        returnValue = F("Mühlenbrücke");
        break;
    }
    case 226551:
    {
        returnValue = F("Mühlenbrücken");
        break;
    }
    case 226552:
    {
        returnValue = F("Mühlenbrückenweg");
        break;
    }
    case 226553:
    {
        returnValue = F("Mühlenburg");
        break;
    }
    case 226554:
    {
        returnValue = F("Mühlenburger Str.");
        break;
    }
    case 226555:
    {
        returnValue = F("Mühlenbusch");
        break;
    }
    case 226556:
    {
        returnValue = F("Mühlenbuschweg");
        break;
    }
    case 226557:
    {
        returnValue = F("Mühlenbächer");
        break;
    }
    case 226558:
    {
        returnValue = F("Mühlenchaussee");
        break;
    }
    case 226559:
    {
        returnValue = F("Mühlendamm");
        break;
    }
    case 226560:
    {
        returnValue = F("Mühlende");
        break;
    }
    case 226561:
    {
        returnValue = F("Mühlendeich");
        break;
    }
    case 226562:
    {
        returnValue = F("Mühlendiekerredder");
        break;
    }
    case 226563:
    {
        returnValue = F("Mühlendorf");
        break;
    }
    case 226564:
    {
        returnValue = F("Mühlendorfer Str.");
        break;
    }
    case 226565:
    {
        returnValue = F("Mühlendriesch");
        break;
    }
    case 226566:
    {
        returnValue = F("Mühlendrift");
        break;
    }
    case 226567:
    {
        returnValue = F("Mühleneck");
        break;
    }
    case 226568:
    {
        returnValue = F("Mühlenecke");
        break;
    }
    case 226569:
    {
        returnValue = F("Mühlenecken");
        break;
    }
    case 226570:
    {
        returnValue = F("Mühlenend");
        break;
    }
    case 226571:
    {
        returnValue = F("Mühlenende");
        break;
    }
    case 226572:
    {
        returnValue = F("Mühlener Kirchenweg");
        break;
    }
    case 226573:
    {
        returnValue = F("Mühlener Str.");
        break;
    }
    case 226574:
    {
        returnValue = F("Mühlener Torweg");
        break;
    }
    case 226575:
    {
        returnValue = F("Mühlenesch");
        break;
    }
    case 226576:
    {
        returnValue = F("Mühleneschstr.");
        break;
    }
    case 226577:
    {
        returnValue = F("Mühlenfalder");
        break;
    }
    case 226578:
    {
        returnValue = F("Mühlenfeld");
        break;
    }
    case 226579:
    {
        returnValue = F("Mühlenfeldholz");
        break;
    }
    case 226580:
    {
        returnValue = F("Mühlenfeldstr.");
        break;
    }
    case 226581:
    {
        returnValue = F("Mühlenfeldweg");
        break;
    }
    case 226582:
    {
        returnValue = F("Mühlenfenne");
        break;
    }
    case 226583:
    {
        returnValue = F("Mühlenfichten");
        break;
    }
    case 226584:
    {
        returnValue = F("Mühlenfließ");
        break;
    }
    case 226585:
    {
        returnValue = F("Mühlenflur");
        break;
    }
    case 226586:
    {
        returnValue = F("Mühlenflut");
        break;
    }
    case 226587:
    {
        returnValue = F("Mühlenflötte");
        break;
    }
    case 226588:
    {
        returnValue = F("Mühlenflößstr.");
        break;
    }
    case 226589:
    {
        returnValue = F("Mühlenflügelweg");
        break;
    }
    case 226590:
    {
        returnValue = F("Mühlenfuhren");
        break;
    }
    case 226591:
    {
        returnValue = F("Mühlenfurt");
        break;
    }
    case 226592:
    {
        returnValue = F("Mühlengang");
        break;
    }
    case 226593:
    {
        returnValue = F("Mühlengarten");
        break;
    }
    case 226594:
    {
        returnValue = F("Mühlengasse");
        break;
    }
    case 226595:
    {
        returnValue = F("Mühlengastweg");
        break;
    }
    case 226596:
    {
        returnValue = F("Mühlengaßl");
        break;
    }
    case 226597:
    {
        returnValue = F("Mühlengeist");
        break;
    }
    case 226598:
    {
        returnValue = F("Mühlengraben");
        break;
    }
    case 226599:
    {
        returnValue = F("Mühlengrabenstr.");
        break;
    }
    case 226600:
    {
        returnValue = F("Mühlengrabenweg");
        break;
    }
    case 226601:
    {
        returnValue = F("Mühlengracht");
        break;
    }
    case 226602:
    {
        returnValue = F("Mühlengrube");
        break;
    }
    case 226603:
    {
        returnValue = F("Mühlengrund");
        break;
    }
    case 226604:
    {
        returnValue = F("Mühlengrundstr.");
        break;
    }
    case 226605:
    {
        returnValue = F("Mühlengrundweg");
        break;
    }
    case 226606:
    {
        returnValue = F("Mühlengrün");
        break;
    }
    case 226607:
    {
        returnValue = F("Mühlengutsweg");
        break;
    }
    case 226608:
    {
        returnValue = F("Mühlengärten");
        break;
    }
    case 226609:
    {
        returnValue = F("Mühlengässchen");
        break;
    }
    case 226610:
    {
        returnValue = F("Mühlengäßchen");
        break;
    }
    case 226611:
    {
        returnValue = F("Mühlenhafener Str.");
        break;
    }
    case 226612:
    {
        returnValue = F("Mühlenhagen");
        break;
    }
    case 226613:
    {
        returnValue = F("Mühlenhang");
        break;
    }
    case 226614:
    {
        returnValue = F("Mühlenhardstr.");
        break;
    }
    case 226615:
    {
        returnValue = F("Mühlenhardt");
        break;
    }
    case 226616:
    {
        returnValue = F("Mühlenhardtstr.");
        break;
    }
    case 226617:
    {
        returnValue = F("Mühlenharth");
        break;
    }
    case 226618:
    {
        returnValue = F("Mühlenhaus");
        break;
    }
    case 226619:
    {
        returnValue = F("Mühlenhecke");
        break;
    }
    case 226620:
    {
        returnValue = F("Mühlenheckenstr.");
        break;
    }
    case 226621:
    {
        returnValue = F("Mühlenheide");
        break;
    }
    case 226622:
    {
        returnValue = F("Mühlenheider Str.");
        break;
    }
    case 226623:
    {
        returnValue = F("Mühlenheiderweg");
        break;
    }
    case 226624:
    {
        returnValue = F("Mühlenhelder Weg");
        break;
    }
    case 226625:
    {
        returnValue = F("Mühlenhellmer");
        break;
    }
    case 226626:
    {
        returnValue = F("Mühlenheuweg");
        break;
    }
    case 226627:
    {
        returnValue = F("Mühlenhoch");
        break;
    }
    case 226628:
    {
        returnValue = F("Mühlenhoek");
        break;
    }
    case 226629:
    {
        returnValue = F("Mühlenhoeksweg");
        break;
    }
    case 226630:
    {
        returnValue = F("Mühlenhof");
        break;
    }
    case 226631:
    {
        returnValue = F("Mühlenhofer Weg");
        break;
    }
    case 226632:
    {
        returnValue = F("Mühlenhofgasse");
        break;
    }
    case 226633:
    {
        returnValue = F("Mühlenhofpark");
        break;
    }
    case 226634:
    {
        returnValue = F("Mühlenhofstr.");
        break;
    }
    case 226635:
    {
        returnValue = F("Mühlenhofweg");
        break;
    }
    case 226636:
    {
        returnValue = F("Mühlenholz");
        break;
    }
    case 226637:
    {
        returnValue = F("Mühlenholzer Weg");
        break;
    }
    case 226638:
    {
        returnValue = F("Mühlenholzstr.");
        break;
    }
    case 226639:
    {
        returnValue = F("Mühlenholzweg");
        break;
    }
    case 226640:
    {
        returnValue = F("Mühlenhorster Weg");
        break;
    }
    case 226641:
    {
        returnValue = F("Mühlenhostert");
        break;
    }
    case 226642:
    {
        returnValue = F("Mühlenhämmerstr.");
        break;
    }
    case 226643:
    {
        returnValue = F("Mühlenhäuser Str.");
        break;
    }
    case 226644:
    {
        returnValue = F("Mühlenhöfe");
        break;
    }
    case 226645:
    {
        returnValue = F("Mühlenhöhe");
        break;
    }
    case 226646:
    {
        returnValue = F("Mühlenhölzchen");
        break;
    }
    case 226647:
    {
        returnValue = F("Mühlenhügel");
        break;
    }
    case 226648:
    {
        returnValue = F("Mühleninsel");
        break;
    }
    case 226649:
    {
        returnValue = F("Mühlenkamp");
        break;
    }
    case 226650:
    {
        returnValue = F("Mühlenkampsredder");
        break;
    }
    case 226651:
    {
        returnValue = F("Mühlenkampstr.");
        break;
    }
    case 226652:
    {
        returnValue = F("Mühlenkampsweg");
        break;
    }
    case 226653:
    {
        returnValue = F("Mühlenkappe");
        break;
    }
    case 226654:
    {
        returnValue = F("Mühlenkath");
        break;
    }
    case 226655:
    {
        returnValue = F("Mühlenkaul");
        break;
    }
    case 226656:
    {
        returnValue = F("Mühlenkietz");
        break;
    }
    case 226657:
    {
        returnValue = F("Mühlenknapp");
        break;
    }
    case 226658:
    {
        returnValue = F("Mühlenknippstr.");
        break;
    }
    case 226659:
    {
        returnValue = F("Mühlenkolk");
        break;
    }
    case 226660:
    {
        returnValue = F("Mühlenkopfstr.");
        break;
    }
    case 226661:
    {
        returnValue = F("Mühlenkopfweg");
        break;
    }
    case 226662:
    {
        returnValue = F("Mühlenkoppel");
        break;
    }
    case 226663:
    {
        returnValue = F("Mühlenkreisel");
        break;
    }
    case 226664:
    {
        returnValue = F("Mühlenkämpchen");
        break;
    }
    case 226665:
    {
        returnValue = F("Mühlenkämpe");
        break;
    }
    case 226666:
    {
        returnValue = F("Mühlenlager");
        break;
    }
    case 226667:
    {
        returnValue = F("Mühlenlbergblick");
        break;
    }
    case 226668:
    {
        returnValue = F("Mühlenley");
        break;
    }
    case 226669:
    {
        returnValue = F("Mühlenloch");
        break;
    }
    case 226670:
    {
        returnValue = F("Mühlenlohne");
        break;
    }
    case 226671:
    {
        returnValue = F("Mühlenloog");
        break;
    }
    case 226672:
    {
        returnValue = F("Mühlenlängtstr.");
        break;
    }
    case 226673:
    {
        returnValue = F("Mühlenmaat");
        break;
    }
    case 226674:
    {
        returnValue = F("Mühlenmasch");
        break;
    }
    case 226675:
    {
        returnValue = F("Mühlenmatt");
        break;
    }
    case 226676:
    {
        returnValue = F("Mühlenmatten");
        break;
    }
    case 226677:
    {
        returnValue = F("Mühlenmeile");
        break;
    }
    case 226678:
    {
        returnValue = F("Mühlenmersch");
        break;
    }
    case 226679:
    {
        returnValue = F("Mühlenmoor");
        break;
    }
    case 226680:
    {
        returnValue = F("Mühlenort");
        break;
    }
    case 226681:
    {
        returnValue = F("Mühlenpad");
        break;
    }
    case 226682:
    {
        returnValue = F("Mühlenpark");
        break;
    }
    case 226683:
    {
        returnValue = F("Mühlenpatt");
        break;
    }
    case 226684:
    {
        returnValue = F("Mühlenpeterweg");
        break;
    }
    case 226685:
    {
        returnValue = F("Mühlenpfad");
        break;
    }
    case 226686:
    {
        returnValue = F("Mühlenpforte");
        break;
    }
    case 226687:
    {
        returnValue = F("Mühlenpfädchen");
        break;
    }
    case 226688:
    {
        returnValue = F("Mühlenplan");
        break;
    }
    case 226689:
    {
        returnValue = F("Mühlenplatz");
        break;
    }
    case 226690:
    {
        returnValue = F("Mühlenpättken");
        break;
    }
    case 226691:
    {
        returnValue = F("Mühlenrader Weg");
        break;
    }
    case 226692:
    {
        returnValue = F("Mühlenrahmeder Str.");
        break;
    }
    case 226693:
    {
        returnValue = F("Mühlenrain");
        break;
    }
    case 226694:
    {
        returnValue = F("Mühlenredder");
        break;
    }
    case 226695:
    {
        returnValue = F("Mühlenreihe");
        break;
    }
    case 226696:
    {
        returnValue = F("Mühlenreiher Weg");
        break;
    }
    case 226697:
    {
        returnValue = F("Mühlenreith");
        break;
    }
    case 226698:
    {
        returnValue = F("Mühlenrieder Weg");
        break;
    }
    case 226699:
    {
        returnValue = F("Mühlenriedeweg");
        break;
    }
    case 226700:
    {
        returnValue = F("Mühlenring");
        break;
    }
    case 226701:
    {
        returnValue = F("Mühlenrott");
        break;
    }
    case 226702:
    {
        returnValue = F("Mühlenrottstr.");
        break;
    }
    case 226703:
    {
        returnValue = F("Mühlenrundweg");
        break;
    }
    case 226704:
    {
        returnValue = F("Mühlenrär");
        break;
    }
    case 226705:
    {
        returnValue = F("Mühlenscharrn");
        break;
    }
    case 226706:
    {
        returnValue = F("Mühlenschlad");
        break;
    }
    case 226707:
    {
        returnValue = F("Mühlenschlade");
        break;
    }
    case 226708:
    {
        returnValue = F("Mühlenschlader Str.");
        break;
    }
    case 226709:
    {
        returnValue = F("Mühlenschlag");
        break;
    }
    case 226710:
    {
        returnValue = F("Mühlenschleide");
        break;
    }
    case 226711:
    {
        returnValue = F("Mühlenschulweg");
        break;
    }
    case 226712:
    {
        returnValue = F("Mühlensee Ausbau");
        break;
    }
    case 226713:
    {
        returnValue = F("Mühlenseifen");
        break;
    }
    case 226714:
    {
        returnValue = F("Mühlenseite");
        break;
    }
    case 226715:
    {
        returnValue = F("Mühlensenner Str.");
        break;
    }
    case 226716:
    {
        returnValue = F("Mühlenseßmarstr.");
        break;
    }
    case 226717:
    {
        returnValue = F("Mühlensiedlung");
        break;
    }
    case 226718:
    {
        returnValue = F("Mühlensiek");
        break;
    }
    case 226719:
    {
        returnValue = F("Mühlensohlweg");
        break;
    }
    case 226720:
    {
        returnValue = F("Mühlenspiegel");
        break;
    }
    case 226721:
    {
        returnValue = F("Mühlensteg");
        break;
    }
    case 226722:
    {
        returnValue = F("Mühlenstege");
        break;
    }
    case 226723:
    {
        returnValue = F("Mühlensteig");
        break;
    }
    case 226724:
    {
        returnValue = F("Mühlensteige");
        break;
    }
    case 226725:
    {
        returnValue = F("Mühlenstein");
        break;
    }
    case 226726:
    {
        returnValue = F("Mühlensteinweg");
        break;
    }
    case 226727:
    {
        returnValue = F("Mühlenstelle");
        break;
    }
    case 226728:
    {
        returnValue = F("Mühlenstieg");
        break;
    }
    case 226729:
    {
        returnValue = F("Mühlenstiege");
        break;
    }
    case 226730:
    {
        returnValue = F("Mühlenstr.");
        break;
    }
    case 226731:
    {
        returnValue = F("Mühlenstr. - Petergensfeld");
        break;
    }
    case 226732:
    {
        returnValue = F("Mühlenstrich");
        break;
    }
    case 226733:
    {
        returnValue = F("Mühlenstätte");
        break;
    }
    case 226734:
    {
        returnValue = F("Mühlenstücke");
        break;
    }
    case 226735:
    {
        returnValue = F("Mühlenstückenweg");
        break;
    }
    case 226736:
    {
        returnValue = F("Mühlental");
        break;
    }
    case 226737:
    {
        returnValue = F("Mühlentalblick");
        break;
    }
    case 226738:
    {
        returnValue = F("Mühlentalstr.");
        break;
    }
    case 226739:
    {
        returnValue = F("Mühlentalweg");
        break;
    }
    case 226740:
    {
        returnValue = F("Mühlentannen");
        break;
    }
    case 226741:
    {
        returnValue = F("Mühlenteich");
        break;
    }
    case 226742:
    {
        returnValue = F("Mühlenteichplatz");
        break;
    }
    case 226743:
    {
        returnValue = F("Mühlenteichstr.");
        break;
    }
    case 226744:
    {
        returnValue = F("Mühlenthal");
        break;
    }
    case 226745:
    {
        returnValue = F("Mühlentheaterstr.");
        break;
    }
    case 226746:
    {
        returnValue = F("Mühlentor");
        break;
    }
    case 226747:
    {
        returnValue = F("Mühlentorsiedlung");
        break;
    }
    case 226748:
    {
        returnValue = F("Mühlentorstr.");
        break;
    }
    case 226749:
    {
        returnValue = F("Mühlentorvorstadt");
        break;
    }
    case 226750:
    {
        returnValue = F("Mühlentorweg");
        break;
    }
    case 226751:
    {
        returnValue = F("Mühlentreppen");
        break;
    }
    case 226752:
    {
        returnValue = F("Mühlentrift");
        break;
    }
    case 226753:
    {
        returnValue = F("Mühlentwiete");
        break;
    }
    case 226754:
    {
        returnValue = F("Mühlentäfelum");
        break;
    }
    case 226755:
    {
        returnValue = F("Mühlenufer");
        break;
    }
    case 226756:
    {
        returnValue = F("Mühlenviertel");
        break;
    }
    case 226757:
    {
        returnValue = F("Mühlenwaldstr.");
        break;
    }
    case 226758:
    {
        returnValue = F("Mühlenwall");
        break;
    }
    case 226759:
    {
        returnValue = F("Mühlenwanderweg");
        break;
    }
    case 226760:
    {
        returnValue = F("Mühlenwarf");
        break;
    }
    case 226761:
    {
        returnValue = F("Mühlenwarft");
        break;
    }
    case 226762:
    {
        returnValue = F("Mühlenweg");
        break;
    }
    case 226763:
    {
        returnValue = F("Mühlenweg Buchholz");
        break;
    }
    case 226764:
    {
        returnValue = F("Mühlenweg Schönhagen");
        break;
    }
    case 226765:
    {
        returnValue = F("Mühlenwehr");
        break;
    }
    case 226766:
    {
        returnValue = F("Mühlenwehrgang");
        break;
    }
    case 226767:
    {
        returnValue = F("Mühlenwehrstr.");
        break;
    }
    case 226768:
    {
        returnValue = F("Mühlenweid");
        break;
    }
    case 226769:
    {
        returnValue = F("Mühlenweide");
        break;
    }
    case 226770:
    {
        returnValue = F("Mühlenweiher");
        break;
    }
    case 226771:
    {
        returnValue = F("Mühlenweiherstr.");
        break;
    }
    case 226772:
    {
        returnValue = F("Mühlenwerder");
        break;
    }
    case 226773:
    {
        returnValue = F("Mühlenwerth");
        break;
    }
    case 226774:
    {
        returnValue = F("Mühlenwerthweg");
        break;
    }
    case 226775:
    {
        returnValue = F("Mühlenwiese");
        break;
    }
    case 226776:
    {
        returnValue = F("Mühlenwiesen");
        break;
    }
    case 226777:
    {
        returnValue = F("Mühlenwinkel");
        break;
    }
    case 226778:
    {
        returnValue = F("Mühlenwirft");
        break;
    }
    case 226779:
    {
        returnValue = F("Mühlenworthweg");
        break;
    }
    case 226780:
    {
        returnValue = F("Mühlenwurth");
        break;
    }
    case 226781:
    {
        returnValue = F("Mühlenwörth");
        break;
    }
    case 226782:
    {
        returnValue = F("Mühlenäckerweg");
        break;
    }
    case 226783:
    {
        returnValue = F("Mühlepfad");
        break;
    }
    case 226784:
    {
        returnValue = F("Mühleplatz");
        break;
    }
    case 226785:
    {
        returnValue = F("Mühler Weg");
        break;
    }
    case 226786:
    {
        returnValue = F("Mühlerain");
        break;
    }
    case 226787:
    {
        returnValue = F("Mühlerget");
        break;
    }
    case 226788:
    {
        returnValue = F("Mühlerlenweg");
        break;
    }
    case 226789:
    {
        returnValue = F("Mühlersfeldstr.");
        break;
    }
    case 226790:
    {
        returnValue = F("Mühlerstr.");
        break;
    }
    case 226791:
    {
        returnValue = F("Mühlesch");
        break;
    }
    case 226792:
    {
        returnValue = F("Mühleschweg");
        break;
    }
    case 226793:
    {
        returnValue = F("Mühlesgäßle");
        break;
    }
    case 226794:
    {
        returnValue = F("Mühlesteig");
        break;
    }
    case 226795:
    {
        returnValue = F("Mühlesteigle");
        break;
    }
    case 226796:
    {
        returnValue = F("Mühlesteigstr.");
        break;
    }
    case 226797:
    {
        returnValue = F("Mühlestr.");
        break;
    }
    case 226798:
    {
        returnValue = F("Mühlestückweg");
        break;
    }
    case 226799:
    {
        returnValue = F("Mühleuwer");
        break;
    }
    case 226800:
    {
        returnValue = F("Mühleweg");
        break;
    }
    case 226801:
    {
        returnValue = F("Mühlewies");
        break;
    }
    case 226802:
    {
        returnValue = F("Mühlewiesen");
        break;
    }
    case 226803:
    {
        returnValue = F("Mühlewiesweg");
        break;
    }
    case 226804:
    {
        returnValue = F("Mühlezielstr.");
        break;
    }
    case 226805:
    {
        returnValue = F("Mühlfeld");
        break;
    }
    case 226806:
    {
        returnValue = F("Mühlfelder Str.");
        break;
    }
    case 226807:
    {
        returnValue = F("Mühlfeldgasse");
        break;
    }
    case 226808:
    {
        returnValue = F("Mühlfeldlein");
        break;
    }
    case 226809:
    {
        returnValue = F("Mühlfeldring");
        break;
    }
    case 226810:
    {
        returnValue = F("Mühlfeldsiedlung");
        break;
    }
    case 226811:
    {
        returnValue = F("Mühlfeldstr.");
        break;
    }
    case 226812:
    {
        returnValue = F("Mühlfeldweg");
        break;
    }
    case 226813:
    {
        returnValue = F("Mühlfleck");
        break;
    }
    case 226814:
    {
        returnValue = F("Mühlflügel");
        break;
    }
    case 226815:
    {
        returnValue = F("Mühlgalle");
        break;
    }
    case 226816:
    {
        returnValue = F("Mühlgang");
        break;
    }
    case 226817:
    {
        returnValue = F("Mühlgarten");
        break;
    }
    case 226818:
    {
        returnValue = F("Mühlgartenstr.");
        break;
    }
    case 226819:
    {
        returnValue = F("Mühlgartenweg");
        break;
    }
    case 226820:
    {
        returnValue = F("Mühlgasse");
        break;
    }
    case 226821:
    {
        returnValue = F("Mühlgassenweg");
        break;
    }
    case 226822:
    {
        returnValue = F("Mühlgebreite");
        break;
    }
    case 226823:
    {
        returnValue = F("Mühlgewannweg");
        break;
    }
    case 226824:
    {
        returnValue = F("Mühlgraben");
        break;
    }
    case 226825:
    {
        returnValue = F("Mühlgrabenbrücke");
        break;
    }
    case 226826:
    {
        returnValue = F("Mühlgrabensteg");
        break;
    }
    case 226827:
    {
        returnValue = F("Mühlgrabensteig");
        break;
    }
    case 226828:
    {
        returnValue = F("Mühlgrabenstr.");
        break;
    }
    case 226829:
    {
        returnValue = F("Mühlgrabenweg");
        break;
    }
    case 226830:
    {
        returnValue = F("Mühlgrund");
        break;
    }
    case 226831:
    {
        returnValue = F("Mühlgrundweg");
        break;
    }
    case 226832:
    {
        returnValue = F("Mühlgründel");
        break;
    }
    case 226833:
    {
        returnValue = F("Mühlgründelweg");
        break;
    }
    case 226834:
    {
        returnValue = F("Mühlgutstr.");
        break;
    }
    case 226835:
    {
        returnValue = F("Mühlgärten");
        break;
    }
    case 226836:
    {
        returnValue = F("Mühlgärtenweg");
        break;
    }
    case 226837:
    {
        returnValue = F("Mühlgässchen");
        break;
    }
    case 226838:
    {
        returnValue = F("Mühlgässel");
        break;
    }
    case 226839:
    {
        returnValue = F("Mühlgässle");
        break;
    }
    case 226840:
    {
        returnValue = F("Mühlgäßchen");
        break;
    }
    case 226841:
    {
        returnValue = F("Mühlgäßle");
        break;
    }
    case 226842:
    {
        returnValue = F("Mühlgäßlein");
        break;
    }
    case 226843:
    {
        returnValue = F("Mühlhagener Str.");
        break;
    }
    case 226844:
    {
        returnValue = F("Mühlhagener Weg");
        break;
    }
    case 226845:
    {
        returnValue = F("Mühlhak");
        break;
    }
    case 226846:
    {
        returnValue = F("Mühlhalde");
        break;
    }
    case 226847:
    {
        returnValue = F("Mühlhalden");
        break;
    }
    case 226848:
    {
        returnValue = F("Mühlhaldenstr.");
        break;
    }
    case 226849:
    {
        returnValue = F("Mühlhaldenweg");
        break;
    }
    case 226850:
    {
        returnValue = F("Mühlhaldesträßle");
        break;
    }
    case 226851:
    {
        returnValue = F("Mühlhaldeweg");
        break;
    }
    case 226852:
    {
        returnValue = F("Mühlhamer Str.");
        break;
    }
    case 226853:
    {
        returnValue = F("Mühlhangweg");
        break;
    }
    case 226854:
    {
        returnValue = F("Mühlhardt");
        break;
    }
    case 226855:
    {
        returnValue = F("Mühlhardtstr.");
        break;
    }
    case 226856:
    {
        returnValue = F("Mühlhau");
        break;
    }
    case 226857:
    {
        returnValue = F("Mühlhausen");
        break;
    }
    case 226858:
    {
        returnValue = F("Mühlhausener Dorfstr.");
        break;
    }
    case 226859:
    {
        returnValue = F("Mühlhausener Grenzweg");
        break;
    }
    case 226860:
    {
        returnValue = F("Mühlhausener Hellweg");
        break;
    }
    case 226861:
    {
        returnValue = F("Mühlhausener Kirchsteig");
        break;
    }
    case 226862:
    {
        returnValue = F("Mühlhausener Str.");
        break;
    }
    case 226863:
    {
        returnValue = F("Mühlhausener Weg");
        break;
    }
    case 226864:
    {
        returnValue = F("Mühlhausenstr.");
        break;
    }
    case 226865:
    {
        returnValue = F("Mühlhausenweg");
        break;
    }
    case 226866:
    {
        returnValue = F("Mühlhauser Berg");
        break;
    }
    case 226867:
    {
        returnValue = F("Mühlhauser Feld");
        break;
    }
    case 226868:
    {
        returnValue = F("Mühlhauser Str.");
        break;
    }
    case 226869:
    {
        returnValue = F("Mühlhauser Weg");
        break;
    }
    case 226870:
    {
        returnValue = F("Mühlhaustr.");
        break;
    }
    case 226871:
    {
        returnValue = F("Mühlhecke");
        break;
    }
    case 226872:
    {
        returnValue = F("Mühlheimer Hauptstr.");
        break;
    }
    case 226873:
    {
        returnValue = F("Mühlheimer Hof");
        break;
    }
    case 226874:
    {
        returnValue = F("Mühlheimer Pfad");
        break;
    }
    case 226875:
    {
        returnValue = F("Mühlheimer Str.");
        break;
    }
    case 226876:
    {
        returnValue = F("Mühlheimer Weg");
        break;
    }
    case 226877:
    {
        returnValue = F("Mühlheller Weg");
        break;
    }
    case 226878:
    {
        returnValue = F("Mühlhof");
        break;
    }
    case 226879:
    {
        returnValue = F("Mühlhofe");
        break;
    }
    case 226880:
    {
        returnValue = F("Mühlhofener Str.");
        break;
    }
    case 226881:
    {
        returnValue = F("Mühlhofer Str.");
        break;
    }
    case 226882:
    {
        returnValue = F("Mühlhofer Weg");
        break;
    }
    case 226883:
    {
        returnValue = F("Mühlhoff");
        break;
    }
    case 226884:
    {
        returnValue = F("Mühlhoffer Landstr.");
        break;
    }
    case 226885:
    {
        returnValue = F("Mühlhoffstr.");
        break;
    }
    case 226886:
    {
        returnValue = F("Mühlhofstr.");
        break;
    }
    case 226887:
    {
        returnValue = F("Mühlhofsweg");
        break;
    }
    case 226888:
    {
        returnValue = F("Mühlhofweg");
        break;
    }
    case 226889:
    {
        returnValue = F("Mühlhohl");
        break;
    }
    case 226890:
    {
        returnValue = F("Mühlhohlstr.");
        break;
    }
    case 226891:
    {
        returnValue = F("Mühlholz");
        break;
    }
    case 226892:
    {
        returnValue = F("Mühlholzergasse");
        break;
    }
    case 226893:
    {
        returnValue = F("Mühlholzstr.");
        break;
    }
    case 226894:
    {
        returnValue = F("Mühlholzweg");
        break;
    }
    case 226895:
    {
        returnValue = F("Mühlhovener Str.");
        break;
    }
    case 226896:
    {
        returnValue = F("Mühlhälde");
        break;
    }
    case 226897:
    {
        returnValue = F("Mühlhäldenweg");
        break;
    }
    case 226898:
    {
        returnValue = F("Mühlhälderlestr.");
        break;
    }
    case 226899:
    {
        returnValue = F("Mühlhäule");
        break;
    }
    case 226900:
    {
        returnValue = F("Mühlhäuser");
        break;
    }
    case 226901:
    {
        returnValue = F("Mühlhäuser Chaussee");
        break;
    }
    case 226902:
    {
        returnValue = F("Mühlhäuser Gasse");
        break;
    }
    case 226903:
    {
        returnValue = F("Mühlhäuser Landstr.");
        break;
    }
    case 226904:
    {
        returnValue = F("Mühlhäuser Landstrasse");
        break;
    }
    case 226905:
    {
        returnValue = F("Mühlhäuser Steige");
        break;
    }
    case 226906:
    {
        returnValue = F("Mühlhäuser Str.");
        break;
    }
    case 226907:
    {
        returnValue = F("Mühlhäuser Tor");
        break;
    }
    case 226908:
    {
        returnValue = F("Mühlhäuser Weg");
        break;
    }
    case 226909:
    {
        returnValue = F("Mühlhäuserstr.");
        break;
    }
    case 226910:
    {
        returnValue = F("Mühlhöfle");
        break;
    }
    case 226911:
    {
        returnValue = F("Mühlhög");
        break;
    }
    case 226912:
    {
        returnValue = F("Mühlhöllweg");
        break;
    }
    case 226913:
    {
        returnValue = F("Mühlhölzl");
        break;
    }
    case 226914:
    {
        returnValue = F("Mühlhölzle");
        break;
    }
    case 226915:
    {
        returnValue = F("Mühlhölzlesweg");
        break;
    }
    case 226916:
    {
        returnValue = F("Mühlhübelweg");
        break;
    }
    case 226917:
    {
        returnValue = F("Mühlhügel");
        break;
    }
    case 226918:
    {
        returnValue = F("Mühlhügelgasse");
        break;
    }
    case 226919:
    {
        returnValue = F("Mühlichstr.");
        break;
    }
    case 226920:
    {
        returnValue = F("Mühligass");
        break;
    }
    case 226921:
    {
        returnValue = F("Mühlingen");
        break;
    }
    case 226922:
    {
        returnValue = F("Mühlinger Weg");
        break;
    }
    case 226923:
    {
        returnValue = F("Mühlinsel");
        break;
    }
    case 226924:
    {
        returnValue = F("Mühlkanalsteg");
        break;
    }
    case 226925:
    {
        returnValue = F("Mühlkanalstr.");
        break;
    }
    case 226926:
    {
        returnValue = F("Mühlkapfweg");
        break;
    }
    case 226927:
    {
        returnValue = F("Mühlkopf");
        break;
    }
    case 226928:
    {
        returnValue = F("Mühlkopfweg");
        break;
    }
    case 226929:
    {
        returnValue = F("Mühlkoppe");
        break;
    }
    case 226930:
    {
        returnValue = F("Mühlkoppenweg");
        break;
    }
    case 226931:
    {
        returnValue = F("Mühlkreuzweg");
        break;
    }
    case 226932:
    {
        returnValue = F("Mühlköppelstr.");
        break;
    }
    case 226933:
    {
        returnValue = F("Mühllach");
        break;
    }
    case 226934:
    {
        returnValue = F("Mühllachenring");
        break;
    }
    case 226935:
    {
        returnValue = F("Mühllandweg");
        break;
    }
    case 226936:
    {
        returnValue = F("Mühllehen");
        break;
    }
    case 226937:
    {
        returnValue = F("Mühllehenweg");
        break;
    }
    case 226938:
    {
        returnValue = F("Mühlleite");
        break;
    }
    case 226939:
    {
        returnValue = F("Mühlleitenstr.");
        break;
    }
    case 226940:
    {
        returnValue = F("Mühlleitenweg");
        break;
    }
    case 226941:
    {
        returnValue = F("Mühlleithe");
        break;
    }
    case 226942:
    {
        returnValue = F("Mühlleithen");
        break;
    }
    case 226943:
    {
        returnValue = F("Mühlleithener Weg");
        break;
    }
    case 226944:
    {
        returnValue = F("Mühllohweg");
        break;
    }
    case 226945:
    {
        returnValue = F("Mühlläufer");
        break;
    }
    case 226946:
    {
        returnValue = F("Mühlmadweg");
        break;
    }
    case 226947:
    {
        returnValue = F("Mühlmahd");
        break;
    }
    case 226948:
    {
        returnValue = F("Mühlmahdweg");
        break;
    }
    case 226949:
    {
        returnValue = F("Mühlmannstr.");
        break;
    }
    case 226950:
    {
        returnValue = F("Mühlmatt");
        break;
    }
    case 226951:
    {
        returnValue = F("Mühlmatten");
        break;
    }
    case 226952:
    {
        returnValue = F("Mühlmattstr.");
        break;
    }
    case 226953:
    {
        returnValue = F("Mühlmattweg");
        break;
    }
    case 226954:
    {
        returnValue = F("Mühlmoos");
        break;
    }
    case 226955:
    {
        returnValue = F("Mühlmoosstr.");
        break;
    }
    case 226956:
    {
        returnValue = F("Mühlmähder");
        break;
    }
    case 226957:
    {
        returnValue = F("Mühlobstr.");
        break;
    }
    case 226958:
    {
        returnValue = F("Mühloh");
        break;
    }
    case 226959:
    {
        returnValue = F("Mühlpaint");
        break;
    }
    case 226960:
    {
        returnValue = F("Mühlpaulusweg");
        break;
    }
    case 226961:
    {
        returnValue = F("Mühlpfad");
        break;
    }
    case 226962:
    {
        returnValue = F("Mühlpfadweg");
        break;
    }
    case 226963:
    {
        returnValue = F("Mühlpforte");
        break;
    }
    case 226964:
    {
        returnValue = F("Mühlpfortstr.");
        break;
    }
    case 226965:
    {
        returnValue = F("Mühlplan");
        break;
    }
    case 226966:
    {
        returnValue = F("Mühlplanweg");
        break;
    }
    case 226967:
    {
        returnValue = F("Mühlplatz");
        break;
    }
    case 226968:
    {
        returnValue = F("Mühlplatzweg");
        break;
    }
    case 226969:
    {
        returnValue = F("Mühlpointstr.");
        break;
    }
    case 226970:
    {
        returnValue = F("Mühlpointweg");
        break;
    }
    case 226971:
    {
        returnValue = F("Mühlradweg");
        break;
    }
    case 226972:
    {
        returnValue = F("Mühlrain");
        break;
    }
    case 226973:
    {
        returnValue = F("Mühlrainchen");
        break;
    }
    case 226974:
    {
        returnValue = F("Mühlraingasse");
        break;
    }
    case 226975:
    {
        returnValue = F("Mühlrainstr.");
        break;
    }
    case 226976:
    {
        returnValue = F("Mühlrainweg");
        break;
    }
    case 226977:
    {
        returnValue = F("Mühlrainwegle");
        break;
    }
    case 226978:
    {
        returnValue = F("Mühlrangen");
        break;
    }
    case 226979:
    {
        returnValue = F("Mühlrangenstr.");
        break;
    }
    case 226980:
    {
        returnValue = F("Mühlrangenweg");
        break;
    }
    case 226981:
    {
        returnValue = F("Mühlrasen");
        break;
    }
    case 226982:
    {
        returnValue = F("Mühlrather Mühle");
        break;
    }
    case 226983:
    {
        returnValue = F("Mühlrather Str.");
        break;
    }
    case 226984:
    {
        returnValue = F("Mühlrebenweg");
        break;
    }
    case 226985:
    {
        returnValue = F("Mühlreit");
        break;
    }
    case 226986:
    {
        returnValue = F("Mühlreiterweg");
        break;
    }
    case 226987:
    {
        returnValue = F("Mühlricht");
        break;
    }
    case 226988:
    {
        returnValue = F("Mühlrieder Weg");
        break;
    }
    case 226989:
    {
        returnValue = F("Mühlriedle");
        break;
    }
    case 226990:
    {
        returnValue = F("Mühlriegelweg");
        break;
    }
    case 226991:
    {
        returnValue = F("Mühlring");
        break;
    }
    case 226992:
    {
        returnValue = F("Mühlroser Str.");
        break;
    }
    case 226993:
    {
        returnValue = F("Mühlsbach");
        break;
    }
    case 226994:
    {
        returnValue = F("Mühlsbachweg");
        break;
    }
    case 226995:
    {
        returnValue = F("Mühlschartenweg");
        break;
    }
    case 226996:
    {
        returnValue = F("Mühlscheider Str.");
        break;
    }
    case 226997:
    {
        returnValue = F("Mühlschied");
        break;
    }
    case 226998:
    {
        returnValue = F("Mühlschlager Str.");
        break;
    }
    case 226999:
    {
        returnValue = F("Mühlschneise");
        break;
    }
    case 227000:
    {
        returnValue = F("Mühlschutzweg");
        break;
    }
    case 227001:
    {
        returnValue = F("Mühlschüt");
        break;
    }
    case 227002:
    {
        returnValue = F("Mühlsdorf");
        break;
    }
    case 227003:
    {
        returnValue = F("Mühlsdorfer Str.");
        break;
    }
    case 227004:
    {
        returnValue = F("Mühlsdorfer Weg");
        break;
    }
    case 227005:
    {
        returnValue = F("Mühlsee");
        break;
    }
    case 227006:
    {
        returnValue = F("Mühlseifenweg");
        break;
    }
    case 227007:
    {
        returnValue = F("Mühlseite");
        break;
    }
    case 227008:
    {
        returnValue = F("Mühlsgasse");
        break;
    }
    case 227009:
    {
        returnValue = F("Mühlsiedlung");
        break;
    }
    case 227010:
    {
        returnValue = F("Mühlstatt");
        break;
    }
    case 227011:
    {
        returnValue = F("Mühlstedter Str.");
        break;
    }
    case 227012:
    {
        returnValue = F("Mühlstedter Weg");
        break;
    }
    case 227013:
    {
        returnValue = F("Mühlsteg");
        break;
    }
    case 227014:
    {
        returnValue = F("Mühlsteig");
        break;
    }
    case 227015:
    {
        returnValue = F("Mühlsteige");
        break;
    }
    case 227016:
    {
        returnValue = F("Mühlsteigleweg");
        break;
    }
    case 227017:
    {
        returnValue = F("Mühlsteigstr.");
        break;
    }
    case 227018:
    {
        returnValue = F("Mühlsteigweg");
        break;
    }
    case 227019:
    {
        returnValue = F("Mühlsteingasse");
        break;
    }
    case 227020:
    {
        returnValue = F("Mühlsteinring");
        break;
    }
    case 227021:
    {
        returnValue = F("Mühlsteinsteg");
        break;
    }
    case 227022:
    {
        returnValue = F("Mühlsteinstr.");
        break;
    }
    case 227023:
    {
        returnValue = F("Mühlsteinweg");
        break;
    }
    case 227024:
    {
        returnValue = F("Mühlstetten");
        break;
    }
    case 227025:
    {
        returnValue = F("Mühlstettener Str.");
        break;
    }
    case 227026:
    {
        returnValue = F("Mühlstetter Weg");
        break;
    }
    case 227027:
    {
        returnValue = F("Mühlstetterfeld");
        break;
    }
    case 227028:
    {
        returnValue = F("Mühlstr.");
        break;
    }
    case 227029:
    {
        returnValue = F("Mühlstraßl");
        break;
    }
    case 227030:
    {
        returnValue = F("Mühlstädtle");
        break;
    }
    case 227031:
    {
        returnValue = F("Mühlstück");
        break;
    }
    case 227032:
    {
        returnValue = F("Mühlsäuresteig");
        break;
    }
    case 227033:
    {
        returnValue = F("Mühltal");
        break;
    }
    case 227034:
    {
        returnValue = F("Mühltaler Str.");
        break;
    }
    case 227035:
    {
        returnValue = F("Mühltalstr.");
        break;
    }
    case 227036:
    {
        returnValue = F("Mühltalsweg");
        break;
    }
    case 227037:
    {
        returnValue = F("Mühltalweg");
        break;
    }
    case 227038:
    {
        returnValue = F("Mühlteich");
        break;
    }
    case 227039:
    {
        returnValue = F("Mühlteichplatz");
        break;
    }
    case 227040:
    {
        returnValue = F("Mühlteichstr.");
        break;
    }
    case 227041:
    {
        returnValue = F("Mühlteichweg");
        break;
    }
    case 227042:
    {
        returnValue = F("Mühltelle");
        break;
    }
    case 227043:
    {
        returnValue = F("Mühlthal");
        break;
    }
    case 227044:
    {
        returnValue = F("Mühlthaler Weg");
        break;
    }
    case 227045:
    {
        returnValue = F("Mühlthalweg");
        break;
    }
    case 227046:
    {
        returnValue = F("Mühltobelstr.");
        break;
    }
    case 227047:
    {
        returnValue = F("Mühltor");
        break;
    }
    case 227048:
    {
        returnValue = F("Mühltorberg");
        break;
    }
    case 227049:
    {
        returnValue = F("Mühltorgasse");
        break;
    }
    case 227050:
    {
        returnValue = F("Mühltorring");
        break;
    }
    case 227051:
    {
        returnValue = F("Mühltorstr.");
        break;
    }
    case 227052:
    {
        returnValue = F("Mühltorweg");
        break;
    }
    case 227053:
    {
        returnValue = F("Mühltrathstr.");
        break;
    }
    case 227054:
    {
        returnValue = F("Mühltratweg");
        break;
    }
    case 227055:
    {
        returnValue = F("Mühltreppe");
        break;
    }
    case 227056:
    {
        returnValue = F("Mühltrift");
        break;
    }
    case 227057:
    {
        returnValue = F("Mühltroffer Str.");
        break;
    }
    case 227058:
    {
        returnValue = F("Mühlturmpark");
        break;
    }
    case 227059:
    {
        returnValue = F("Mühlturmpassage");
        break;
    }
    case 227060:
    {
        returnValue = F("Mühlturmstr.");
        break;
    }
    case 227061:
    {
        returnValue = F("Mühltürlein");
        break;
    }
    case 227062:
    {
        returnValue = F("Mühlviertelstr.");
        break;
    }
    case 227063:
    {
        returnValue = F("Mühlvorstadt");
        break;
    }
    case 227064:
    {
        returnValue = F("Mühlwald");
        break;
    }
    case 227065:
    {
        returnValue = F("Mühlwaldstr.");
        break;
    }
    case 227066:
    {
        returnValue = F("Mühlwaldweg");
        break;
    }
    case 227067:
    {
        returnValue = F("Mühlwaldweg 1");
        break;
    }
    case 227068:
    {
        returnValue = F("Mühlwander Berg");
        break;
    }
    case 227069:
    {
        returnValue = F("Mühlwander Str.");
        break;
    }
    case 227070:
    {
        returnValue = F("Mühlwandweg");
        break;
    }
    case 227071:
    {
        returnValue = F("Mühlwang");
        break;
    }
    case 227072:
    {
        returnValue = F("Mühlwangenweg");
        break;
    }
    case 227073:
    {
        returnValue = F("Mühlwasen");
        break;
    }
    case 227074:
    {
        returnValue = F("Mühlwasser");
        break;
    }
    case 227075:
    {
        returnValue = F("Mühlweg");
        break;
    }
    case 227076:
    {
        returnValue = F("Mühlwegkreisel");
        break;
    }
    case 227077:
    {
        returnValue = F("Mühlwegstr.");
        break;
    }
    case 227078:
    {
        returnValue = F("Mühlwegtunnel");
        break;
    }
    case 227079:
    {
        returnValue = F("Mühlwehr");
        break;
    }
    case 227080:
    {
        returnValue = F("Mühlwehrstr.");
        break;
    }
    case 227081:
    {
        returnValue = F("Mühlweideweg");
        break;
    }
    case 227082:
    {
        returnValue = F("Mühlweiher");
        break;
    }
    case 227083:
    {
        returnValue = F("Mühlweiher Süd");
        break;
    }
    case 227084:
    {
        returnValue = F("Mühlweiherstr.");
        break;
    }
    case 227085:
    {
        returnValue = F("Mühlweiherweg");
        break;
    }
    case 227086:
    {
        returnValue = F("Mühlweiler");
        break;
    }
    case 227087:
    {
        returnValue = F("Mühlweinbergstr.");
        break;
    }
    case 227088:
    {
        returnValue = F("Mühlweingärten");
        break;
    }
    case 227089:
    {
        returnValue = F("Mühlwengert");
        break;
    }
    case 227090:
    {
        returnValue = F("Mühlwerder");
        break;
    }
    case 227091:
    {
        returnValue = F("Mühlwerthstr.");
        break;
    }
    case 227092:
    {
        returnValue = F("Mühlwies");
        break;
    }
    case 227093:
    {
        returnValue = F("Mühlwiese");
        break;
    }
    case 227094:
    {
        returnValue = F("Mühlwieseck");
        break;
    }
    case 227095:
    {
        returnValue = F("Mühlwiesen");
        break;
    }
    case 227096:
    {
        returnValue = F("Mühlwiesenanger");
        break;
    }
    case 227097:
    {
        returnValue = F("Mühlwiesenhof");
        break;
    }
    case 227098:
    {
        returnValue = F("Mühlwiesenring");
        break;
    }
    case 227099:
    {
        returnValue = F("Mühlwiesenstr.");
        break;
    }
    case 227100:
    {
        returnValue = F("Mühlwiesenweg");
        break;
    }
    case 227101:
    {
        returnValue = F("Mühlwiesstr.");
        break;
    }
    case 227102:
    {
        returnValue = F("Mühlwingertweg");
        break;
    }
    case 227103:
    {
        returnValue = F("Mühlwinglestr.");
        break;
    }
    case 227104:
    {
        returnValue = F("Mühlwinkel");
        break;
    }
    case 227105:
    {
        returnValue = F("Mühlwinkl");
        break;
    }
    case 227106:
    {
        returnValue = F("Mühlwise");
        break;
    }
    case 227107:
    {
        returnValue = F("Mühlworth");
        break;
    }
    case 227108:
    {
        returnValue = F("Mühlwärts");
        break;
    }
    case 227109:
    {
        returnValue = F("Mühlwärtser Str.");
        break;
    }
    case 227110:
    {
        returnValue = F("Mühlwörth");
        break;
    }
    case 227111:
    {
        returnValue = F("Mühlwörthweg");
        break;
    }
    case 227112:
    {
        returnValue = F("Mühlwörtstr.");
        break;
    }
    case 227113:
    {
        returnValue = F("Mühläcker");
        break;
    }
    case 227114:
    {
        returnValue = F("Mühläckerring");
        break;
    }
    case 227115:
    {
        returnValue = F("Mühläckerstr.");
        break;
    }
    case 227116:
    {
        returnValue = F("Mühläckerweg");
        break;
    }
    case 227117:
    {
        returnValue = F("Mühlöschstr.");
        break;
    }
    case 227118:
    {
        returnValue = F("Mühnen Dyck");
        break;
    }
    case 227119:
    {
        returnValue = F("Mühnweg");
        break;
    }
    case 227120:
    {
        returnValue = F("Mührberg");
        break;
    }
    case 227121:
    {
        returnValue = F("Mührener Weg");
        break;
    }
    case 227122:
    {
        returnValue = F("Mührenplatz");
        break;
    }
    case 227123:
    {
        returnValue = F("Mührichstr.");
        break;
    }
    case 227124:
    {
        returnValue = F("Mührigstr.");
        break;
    }
    case 227125:
    {
        returnValue = F("Mühringer Str.");
        break;
    }
    case 227126:
    {
        returnValue = F("Mühsol");
        break;
    }
    case 227127:
    {
        returnValue = F("Mülbener Str.");
        break;
    }
    case 227128:
    {
        returnValue = F("Mülbenhangweg");
        break;
    }
    case 227129:
    {
        returnValue = F("Mülbenweg");
        break;
    }
    case 227130:
    {
        returnValue = F("Mülbergerstr.");
        break;
    }
    case 227131:
    {
        returnValue = F("Mülbitzer Str.");
        break;
    }
    case 227132:
    {
        returnValue = F("Mülchenstr.");
        break;
    }
    case 227133:
    {
        returnValue = F("Müldenerstr.");
        break;
    }
    case 227134:
    {
        returnValue = F("Müldersbusch");
        break;
    }
    case 227135:
    {
        returnValue = F("Mülderspfad");
        break;
    }
    case 227136:
    {
        returnValue = F("Müldersweg");
        break;
    }
    case 227137:
    {
        returnValue = F("Mülgauweg");
        break;
    }
    case 227138:
    {
        returnValue = F("Mülhausener Str.");
        break;
    }
    case 227139:
    {
        returnValue = F("Mülhauser Str.");
        break;
    }
    case 227140:
    {
        returnValue = F("Mülhauser Weg");
        break;
    }
    case 227141:
    {
        returnValue = F("Mülheimer Str.");
        break;
    }
    case 227142:
    {
        returnValue = F("Mülheimer Weg");
        break;
    }
    case 227143:
    {
        returnValue = F("Mülhofener Str.");
        break;
    }
    case 227144:
    {
        returnValue = F("Mülhöfe");
        break;
    }
    case 227145:
    {
        returnValue = F("Mülldorfer Str.");
        break;
    }
    case 227146:
    {
        returnValue = F("Müllekovener Str.");
        break;
    }
    case 227147:
    {
        returnValue = F("Müllemer Str.");
        break;
    }
    case 227148:
    {
        returnValue = F("Müllemich");
        break;
    }
    case 227149:
    {
        returnValue = F("Müllenbach");
        break;
    }
    case 227150:
    {
        returnValue = F("Müllenbacher Str.");
        break;
    }
    case 227151:
    {
        returnValue = F("Müllenberg");
        break;
    }
    case 227152:
    {
        returnValue = F("Müllenbildstr.");
        break;
    }
    case 227153:
    {
        returnValue = F("Müllenborner Str.");
        break;
    }
    case 227154:
    {
        returnValue = F("Müllenburg");
        break;
    }
    case 227155:
    {
        returnValue = F("Müllendorfer Str.");
        break;
    }
    case 227156:
    {
        returnValue = F("Müllendorffstr.");
        break;
    }
    case 227157:
    {
        returnValue = F("Müllener Schleuse");
        break;
    }
    case 227158:
    {
        returnValue = F("Müllener Str.");
        break;
    }
    case 227159:
    {
        returnValue = F("Müllenhoffweg");
        break;
    }
    case 227160:
    {
        returnValue = F("Müllensiefenstr.");
        break;
    }
    case 227161:
    {
        returnValue = F("Müllepädche");
        break;
    }
    case 227162:
    {
        returnValue = F("Müller zu Kasten");
        break;
    }
    case 227163:
    {
        returnValue = F("Müller-Armack-Str.");
        break;
    }
    case 227164:
    {
        returnValue = F("Müller-Belecke-Weg");
        break;
    }
    case 227165:
    {
        returnValue = F("Müller-Blattau-Str.");
        break;
    }
    case 227166:
    {
        returnValue = F("Müller-Bogena-Ring");
        break;
    }
    case 227167:
    {
        returnValue = F("Müller-Brauel-Weg");
        break;
    }
    case 227168:
    {
        returnValue = F("Müller-Dachau-Weg");
        break;
    }
    case 227169:
    {
        returnValue = F("Müller-Gerdes-Str.");
        break;
    }
    case 227170:
    {
        returnValue = F("Müller-Gnadenegg-Weg");
        break;
    }
    case 227171:
    {
        returnValue = F("Müller-Grählert-Str.");
        break;
    }
    case 227172:
    {
        returnValue = F("Müller-Gutenbrunn-Weg");
        break;
    }
    case 227173:
    {
        returnValue = F("Müller-Guttenbrunn-Str.");
        break;
    }
    case 227174:
    {
        returnValue = F("Müller-Guttenbrunn-Weg");
        break;
    }
    case 227175:
    {
        returnValue = F("Müller-Gögler-Weg");
        break;
    }
    case 227176:
    {
        returnValue = F("Müller-Hahl-Str.");
        break;
    }
    case 227177:
    {
        returnValue = F("Müller-Hase-Str.");
        break;
    }
    case 227178:
    {
        returnValue = F("Müller-Johann-Weg");
        break;
    }
    case 227179:
    {
        returnValue = F("Müller-Jung-Str.");
        break;
    }
    case 227180:
    {
        returnValue = F("Müller-Ludwig-Str.");
        break;
    }
    case 227181:
    {
        returnValue = F("Müller-Mühlenbein-Str.");
        break;
    }
    case 227182:
    {
        returnValue = F("Müller-Post-Ring");
        break;
    }
    case 227183:
    {
        returnValue = F("Müller-Thaden-Weg");
        break;
    }
    case 227184:
    {
        returnValue = F("Müller-Thurgau-Ring");
        break;
    }
    case 227185:
    {
        returnValue = F("Müller-Thurgau-Str.");
        break;
    }
    case 227186:
    {
        returnValue = F("Müller-Thurgau-Weg");
        break;
    }
    case 227187:
    {
        returnValue = F("Müller-Thurgauweg");
        break;
    }
    case 227188:
    {
        returnValue = F("Müller-Tjarks-Str.");
        break;
    }
    case 227189:
    {
        returnValue = F("Müller-Weg");
        break;
    }
    case 227190:
    {
        returnValue = F("Müller-am-Baum-Weg");
        break;
    }
    case 227191:
    {
        returnValue = F("Müller-zu-Bruck-Str.");
        break;
    }
    case 227192:
    {
        returnValue = F("Mülleranger");
        break;
    }
    case 227193:
    {
        returnValue = F("Müllerbaum");
        break;
    }
    case 227194:
    {
        returnValue = F("Müllerberg");
        break;
    }
    case 227195:
    {
        returnValue = F("Müllerbergweg");
        break;
    }
    case 227196:
    {
        returnValue = F("Müllerbleiche");
        break;
    }
    case 227197:
    {
        returnValue = F("Müllerbreite");
        break;
    }
    case 227198:
    {
        returnValue = F("Müllerbühlstr.");
        break;
    }
    case 227199:
    {
        returnValue = F("Müllerdorf");
        break;
    }
    case 227200:
    {
        returnValue = F("Müllerecke");
        break;
    }
    case 227201:
    {
        returnValue = F("Müllerfeldweg");
        break;
    }
    case 227202:
    {
        returnValue = F("Müllergang");
        break;
    }
    case 227203:
    {
        returnValue = F("Müllergasse");
        break;
    }
    case 227204:
    {
        returnValue = F("Müllergründchen");
        break;
    }
    case 227205:
    {
        returnValue = F("Müllergässle");
        break;
    }
    case 227206:
    {
        returnValue = F("Müllergäßchen");
        break;
    }
    case 227207:
    {
        returnValue = F("Müllergäßle");
        break;
    }
    case 227208:
    {
        returnValue = F("Müllerhag");
        break;
    }
    case 227209:
    {
        returnValue = F("Müllerhainweg");
        break;
    }
    case 227210:
    {
        returnValue = F("Müllerhartungstr.");
        break;
    }
    case 227211:
    {
        returnValue = F("Müllerhof");
        break;
    }
    case 227212:
    {
        returnValue = F("Müllerhofweg");
        break;
    }
    case 227213:
    {
        returnValue = F("Müllerholzweg");
        break;
    }
    case 227214:
    {
        returnValue = F("Müllerhöhstr.");
        break;
    }
    case 227215:
    {
        returnValue = F("Mülleringshof");
        break;
    }
    case 227216:
    {
        returnValue = F("Müllerkoppel");
        break;
    }
    case 227217:
    {
        returnValue = F("Müllerland");
        break;
    }
    case 227218:
    {
        returnValue = F("Müllerloh");
        break;
    }
    case 227219:
    {
        returnValue = F("Müllernstr.");
        break;
    }
    case 227220:
    {
        returnValue = F("Müllerpfad");
        break;
    }
    case 227221:
    {
        returnValue = F("Müllerpoint");
        break;
    }
    case 227222:
    {
        returnValue = F("Müllerring");
        break;
    }
    case 227223:
    {
        returnValue = F("Müllers Berg");
        break;
    }
    case 227224:
    {
        returnValue = F("Müllers Kamp");
        break;
    }
    case 227225:
    {
        returnValue = F("Müllers Mühle");
        break;
    }
    case 227226:
    {
        returnValue = F("Müllers Pad");
        break;
    }
    case 227227:
    {
        returnValue = F("Müllers Teich");
        break;
    }
    case 227228:
    {
        returnValue = F("Müllers Torweg");
        break;
    }
    case 227229:
    {
        returnValue = F("Müllers Weg");
        break;
    }
    case 227230:
    {
        returnValue = F("Müllers Wiese");
        break;
    }
    case 227231:
    {
        returnValue = F("Müllers Winkel");
        break;
    }
    case 227232:
    {
        returnValue = F("Müllersbaum");
        break;
    }
    case 227233:
    {
        returnValue = F("Müllersberg");
        break;
    }
    case 227234:
    {
        returnValue = F("Müllersbergstr.");
        break;
    }
    case 227235:
    {
        returnValue = F("Müllersbergweg");
        break;
    }
    case 227236:
    {
        returnValue = F("Müllersborn");
        break;
    }
    case 227237:
    {
        returnValue = F("Müllerschneise");
        break;
    }
    case 227238:
    {
        returnValue = F("Müllersgasse");
        break;
    }
    case 227239:
    {
        returnValue = F("Müllersgehrenweg");
        break;
    }
    case 227240:
    {
        returnValue = F("Müllersgrund");
        break;
    }
    case 227241:
    {
        returnValue = F("Müllersgäßchen");
        break;
    }
    case 227242:
    {
        returnValue = F("Müllersgäßle");
        break;
    }
    case 227243:
    {
        returnValue = F("Müllershalde");
        break;
    }
    case 227244:
    {
        returnValue = F("Müllershammer");
        break;
    }
    case 227245:
    {
        returnValue = F("Müllershausen");
        break;
    }
    case 227246:
    {
        returnValue = F("Müllersheckstr.");
        break;
    }
    case 227247:
    {
        returnValue = F("Müllershöhe");
        break;
    }
    case 227248:
    {
        returnValue = F("Müllershörn");
        break;
    }
    case 227249:
    {
        returnValue = F("Müllershübel");
        break;
    }
    case 227250:
    {
        returnValue = F("Müllerskamp");
        break;
    }
    case 227251:
    {
        returnValue = F("Müllersommer");
        break;
    }
    case 227252:
    {
        returnValue = F("Müllersteg");
        break;
    }
    case 227253:
    {
        returnValue = F("Müllersteig");
        break;
    }
    case 227254:
    {
        returnValue = F("Müllersteige");
        break;
    }
    case 227255:
    {
        returnValue = F("Müllerstieg");
        break;
    }
    case 227256:
    {
        returnValue = F("Müllerstiege");
        break;
    }
    case 227257:
    {
        returnValue = F("Müllerstr.");
        break;
    }
    case 227258:
    {
        returnValue = F("Müllersträssle");
        break;
    }
    case 227259:
    {
        returnValue = F("Müllerstück");
        break;
    }
    case 227260:
    {
        returnValue = F("Müllersweg");
        break;
    }
    case 227261:
    {
        returnValue = F("Müllerswiesenweg");
        break;
    }
    case 227262:
    {
        returnValue = F("Müllersäckerweg");
        break;
    }
    case 227263:
    {
        returnValue = F("Müllerthann");
        break;
    }
    case 227264:
    {
        returnValue = F("Müllertor");
        break;
    }
    case 227265:
    {
        returnValue = F("Müllertsweg");
        break;
    }
    case 227266:
    {
        returnValue = F("Müllertwete");
        break;
    }
    case 227267:
    {
        returnValue = F("Müllerwaldweg");
        break;
    }
    case 227268:
    {
        returnValue = F("Müllerwall");
        break;
    }
    case 227269:
    {
        returnValue = F("Müllerweg");
        break;
    }
    case 227270:
    {
        returnValue = F("Müllerwegstannen");
        break;
    }
    case 227271:
    {
        returnValue = F("Müllerwies");
        break;
    }
    case 227272:
    {
        returnValue = F("Müllerwiese");
        break;
    }
    case 227273:
    {
        returnValue = F("Müllerwiesen-Schneise");
        break;
    }
    case 227274:
    {
        returnValue = F("Müllerwiesenweg");
        break;
    }
    case 227275:
    {
        returnValue = F("Mülleräcker");
        break;
    }
    case 227276:
    {
        returnValue = F("Müllheimer Platz");
        break;
    }
    case 227277:
    {
        returnValue = F("Müllheimer Str.");
        break;
    }
    case 227278:
    {
        returnValue = F("Müllheimer Talstr.");
        break;
    }
    case 227279:
    {
        returnValue = F("Müllheimerweg");
        break;
    }
    case 227280:
    {
        returnValue = F("Müllhofener Str.");
        break;
    }
    case 227281:
    {
        returnValue = F("Müllhoff");
        break;
    }
    case 227282:
    {
        returnValue = F("Müllinger Str.");
        break;
    }
    case 227283:
    {
        returnValue = F("Müllinger Weg");
        break;
    }
    case 227284:
    {
        returnValue = F("Müllingser Weg");
        break;
    }
    case 227285:
    {
        returnValue = F("Müllmersberg");
        break;
    }
    case 227286:
    {
        returnValue = F("Müllnerbergweg");
        break;
    }
    case 227287:
    {
        returnValue = F("Müllnergasse");
        break;
    }
    case 227288:
    {
        returnValue = F("Müllnerhorngasse");
        break;
    }
    case 227289:
    {
        returnValue = F("Müllnerhornstr.");
        break;
    }
    case 227290:
    {
        returnValue = F("Müllnerstr.");
        break;
    }
    case 227291:
    {
        returnValue = F("Müllnerweg");
        break;
    }
    case 227292:
    {
        returnValue = F("Müllplatzweg");
        break;
    }
    case 227293:
    {
        returnValue = F("Müllrain");
        break;
    }
    case 227294:
    {
        returnValue = F("Müllroser Chaussee");
        break;
    }
    case 227295:
    {
        returnValue = F("Müllroser Str.");
        break;
    }
    case 227296:
    {
        returnValue = F("Mülmkestr.");
        break;
    }
    case 227297:
    {
        returnValue = F("Mülsborner Str.");
        break;
    }
    case 227298:
    {
        returnValue = F("Mülsener Str.");
        break;
    }
    case 227299:
    {
        returnValue = F("Mülstege");
        break;
    }
    case 227300:
    {
        returnValue = F("Mülverstedter Str.");
        break;
    }
    case 227301:
    {
        returnValue = F("Mülverstedterchaussee");
        break;
    }
    case 227302:
    {
        returnValue = F("Mümlingstr.");
        break;
    }
    case 227303:
    {
        returnValue = F("Mümlingtalstr.");
        break;
    }
    case 227304:
    {
        returnValue = F("Mümlingweg");
        break;
    }
    case 227305:
    {
        returnValue = F("Mümmelmannsbarg");
        break;
    }
    case 227306:
    {
        returnValue = F("Mümmelmannstr.");
        break;
    }
    case 227307:
    {
        returnValue = F("Mümmelmannsweg");
        break;
    }
    case 227308:
    {
        returnValue = F("Mümmelmannweg");
        break;
    }
    case 227309:
    {
        returnValue = F("Münch-Braun-Str.");
        break;
    }
    case 227310:
    {
        returnValue = F("Münch-Leuseler-Str.");
        break;
    }
    case 227311:
    {
        returnValue = F("Münchackerstr.");
        break;
    }
    case 227312:
    {
        returnValue = F("Münchauer Str.");
        break;
    }
    case 227313:
    {
        returnValue = F("Münchauracher Str.");
        break;
    }
    case 227314:
    {
        returnValue = F("Münchbachweg");
        break;
    }
    case 227315:
    {
        returnValue = F("Münchberg");
        break;
    }
    case 227316:
    {
        returnValue = F("Münchberger Str.");
        break;
    }
    case 227317:
    {
        returnValue = F("Münchbergstr.");
        break;
    }
    case 227318:
    {
        returnValue = F("Münchbergweg");
        break;
    }
    case 227319:
    {
        returnValue = F("Münchbornstr.");
        break;
    }
    case 227320:
    {
        returnValue = F("Münchbusch");
        break;
    }
    case 227321:
    {
        returnValue = F("Müncheberg");
        break;
    }
    case 227322:
    {
        returnValue = F("Müncheberger Chaussee");
        break;
    }
    case 227323:
    {
        returnValue = F("Müncheberger Str.");
        break;
    }
    case 227324:
    {
        returnValue = F("Müncheberger Weg");
        break;
    }
    case 227325:
    {
        returnValue = F("Münchehofer Str.");
        break;
    }
    case 227326:
    {
        returnValue = F("Münchehofer Weg");
        break;
    }
    case 227327:
    {
        returnValue = F("Münchehäger Str.");
        break;
    }
    case 227328:
    {
        returnValue = F("Münchener Allee");
        break;
    }
    case 227329:
    {
        returnValue = F("Münchener Ring");
        break;
    }
    case 227330:
    {
        returnValue = F("Münchener Str.");
        break;
    }
    case 227331:
    {
        returnValue = F("Münchener Str. 66-70");
        break;
    }
    case 227332:
    {
        returnValue = F("Münchener Vormarkt");
        break;
    }
    case 227333:
    {
        returnValue = F("Münchengosserstädter Str.");
        break;
    }
    case 227334:
    {
        returnValue = F("Münchenhellerfeld");
        break;
    }
    case 227335:
    {
        returnValue = F("Münchenhof");
        break;
    }
    case 227336:
    {
        returnValue = F("Münchenhäuslweg");
        break;
    }
    case 227337:
    {
        returnValue = F("Münchenpfad");
        break;
    }
    case 227338:
    {
        returnValue = F("Münchenreuter Kirchweg");
        break;
    }
    case 227339:
    {
        returnValue = F("Münchenreuter Str.");
        break;
    }
    case 227340:
    {
        returnValue = F("Münchenreuth");
        break;
    }
    case 227341:
    {
        returnValue = F("Münchenreuther Str.");
        break;
    }
    case 227342:
    {
        returnValue = F("Münchenroda");
        break;
    }
    case 227343:
    {
        returnValue = F("Münchenrodaer Grund");
        break;
    }
    case 227344:
    {
        returnValue = F("Münchenrodaer Str.");
        break;
    }
    case 227345:
    {
        returnValue = F("Münchentor");
        break;
    }
    case 227346:
    {
        returnValue = F("Müncherather Str.");
        break;
    }
    case 227347:
    {
        returnValue = F("Müncherlbach");
        break;
    }
    case 227348:
    {
        returnValue = F("Müncherlbacher Str.");
        break;
    }
    case 227349:
    {
        returnValue = F("Müncheroda");
        break;
    }
    case 227350:
    {
        returnValue = F("Münchewiese");
        break;
    }
    case 227351:
    {
        returnValue = F("Münchfeldstr.");
        break;
    }
    case 227352:
    {
        returnValue = F("Münchgartenweg");
        break;
    }
    case 227353:
    {
        returnValue = F("Münchgasse");
        break;
    }
    case 227354:
    {
        returnValue = F("Münchgraben");
        break;
    }
    case 227355:
    {
        returnValue = F("Münchgrabenstr.");
        break;
    }
    case 227356:
    {
        returnValue = F("Münchhamer Str.");
        break;
    }
    case 227357:
    {
        returnValue = F("Münchhausen Allee");
        break;
    }
    case 227358:
    {
        returnValue = F("Münchhausen-Ring");
        break;
    }
    case 227359:
    {
        returnValue = F("Münchhausenallee");
        break;
    }
    case 227360:
    {
        returnValue = F("Münchhausener Str.");
        break;
    }
    case 227361:
    {
        returnValue = F("Münchhausenhof");
        break;
    }
    case 227362:
    {
        returnValue = F("Münchhausenplatz");
        break;
    }
    case 227363:
    {
        returnValue = F("Münchhausenring");
        break;
    }
    case 227364:
    {
        returnValue = F("Münchhausenstieg");
        break;
    }
    case 227365:
    {
        returnValue = F("Münchhausenstr.");
        break;
    }
    case 227366:
    {
        returnValue = F("Münchhausenweg");
        break;
    }
    case 227367:
    {
        returnValue = F("Münchhecke");
        break;
    }
    case 227368:
    {
        returnValue = F("Münchheide");
        break;
    }
    case 227369:
    {
        returnValue = F("Münchhof");
        break;
    }
    case 227370:
    {
        returnValue = F("Münchhofe");
        break;
    }
    case 227371:
    {
        returnValue = F("Münchhofer Str.");
        break;
    }
    case 227372:
    {
        returnValue = F("Münchhofpforte");
        break;
    }
    case 227373:
    {
        returnValue = F("Münchhofstr.");
        break;
    }
    case 227374:
    {
        returnValue = F("Münchholzhäuser Str.");
        break;
    }
    case 227375:
    {
        returnValue = F("Münchhäuser Weg");
        break;
    }
    case 227376:
    {
        returnValue = F("Münchinger Bündten");
        break;
    }
    case 227377:
    {
        returnValue = F("Münchinger Schloss");
        break;
    }
    case 227378:
    {
        returnValue = F("Münchinger Str.");
        break;
    }
    case 227379:
    {
        returnValue = F("Münchinger Weg");
        break;
    }
    case 227380:
    {
        returnValue = F("Münchner Allee");
        break;
    }
    case 227381:
    {
        returnValue = F("Münchner Platz");
        break;
    }
    case 227382:
    {
        returnValue = F("Münchner Ring");
        break;
    }
    case 227383:
    {
        returnValue = F("Münchner Str.");
        break;
    }
    case 227384:
    {
        returnValue = F("Münchner Torweg");
        break;
    }
    case 227385:
    {
        returnValue = F("Münchner Weg");
        break;
    }
    case 227386:
    {
        returnValue = F("Münchnerau");
        break;
    }
    case 227387:
    {
        returnValue = F("Münchnerauer Str.");
        break;
    }
    case 227388:
    {
        returnValue = F("Münchrather Str.");
        break;
    }
    case 227389:
    {
        returnValue = F("Münchsberg");
        break;
    }
    case 227390:
    {
        returnValue = F("Münchschwanderhof");
        break;
    }
    case 227391:
    {
        returnValue = F("Münchsdorfer Str.");
        break;
    }
    case 227392:
    {
        returnValue = F("Münchseeweg");
        break;
    }
    case 227393:
    {
        returnValue = F("Münchsgasse");
        break;
    }
    case 227394:
    {
        returnValue = F("Münchsgrün");
        break;
    }
    case 227395:
    {
        returnValue = F("Münchshecke");
        break;
    }
    case 227396:
    {
        returnValue = F("Münchshof");
        break;
    }
    case 227397:
    {
        returnValue = F("Münchshofener Str.");
        break;
    }
    case 227398:
    {
        returnValue = F("Münchshöf");
        break;
    }
    case 227399:
    {
        returnValue = F("Münchshöfener Str.");
        break;
    }
    case 227400:
    {
        returnValue = F("Münchshöfener Weg");
        break;
    }
    case 227401:
    {
        returnValue = F("Münchshöfenerweg");
        break;
    }
    case 227402:
    {
        returnValue = F("Münchsmühle");
        break;
    }
    case 227403:
    {
        returnValue = F("Münchsteinacher Str.");
        break;
    }
    case 227404:
    {
        returnValue = F("Münchstr.");
        break;
    }
    case 227405:
    {
        returnValue = F("Münchsträßle");
        break;
    }
    case 227406:
    {
        returnValue = F("Münchstücksweg");
        break;
    }
    case 227407:
    {
        returnValue = F("Münchsufer");
        break;
    }
    case 227408:
    {
        returnValue = F("Münchsweg");
        break;
    }
    case 227409:
    {
        returnValue = F("Münchsäckerstr.");
        break;
    }
    case 227410:
    {
        returnValue = F("Münchtalstr.");
        break;
    }
    case 227411:
    {
        returnValue = F("Münchteichweg");
        break;
    }
    case 227412:
    {
        returnValue = F("Münchweg");
        break;
    }
    case 227413:
    {
        returnValue = F("Münchweierer Str.");
        break;
    }
    case 227414:
    {
        returnValue = F("Münchweiler");
        break;
    }
    case 227415:
    {
        returnValue = F("Münchweiler Weg");
        break;
    }
    case 227416:
    {
        returnValue = F("Münchweilerstr.");
        break;
    }
    case 227417:
    {
        returnValue = F("Münchwiesen");
        break;
    }
    case 227418:
    {
        returnValue = F("Münchwiesenstr.");
        break;
    }
    case 227419:
    {
        returnValue = F("Münchwieser Str.");
        break;
    }
    case 227420:
    {
        returnValue = F("Münchäckerstr.");
        break;
    }
    case 227421:
    {
        returnValue = F("Münchäckerweg");
        break;
    }
    case 227422:
    {
        returnValue = F("Mündel");
        break;
    }
    case 227423:
    {
        returnValue = F("Mündelstr.");
        break;
    }
    case 227424:
    {
        returnValue = F("Mündener Str.");
        break;
    }
    case 227425:
    {
        returnValue = F("Mündener Weg");
        break;
    }
    case 227426:
    {
        returnValue = F("Münder Heerstr.");
        break;
    }
    case 227427:
    {
        returnValue = F("Mündersbacher Str.");
        break;
    }
    case 227428:
    {
        returnValue = F("Mündersche Str.");
        break;
    }
    case 227429:
    {
        returnValue = F("Münderstr.");
        break;
    }
    case 227430:
    {
        returnValue = F("Mündlinger Str.");
        break;
    }
    case 227431:
    {
        returnValue = F("Mündungsweg");
        break;
    }
    case 227432:
    {
        returnValue = F("Müneckstr.");
        break;
    }
    case 227433:
    {
        returnValue = F("Müngstener Str.");
        break;
    }
    case 227434:
    {
        returnValue = F("Münkeburg");
        break;
    }
    case 227435:
    {
        returnValue = F("Münkeland");
        break;
    }
    case 227436:
    {
        returnValue = F("Münkelandweg");
        break;
    }
    case 227437:
    {
        returnValue = F("Münkenlander Weg");
        break;
    }
    case 227438:
    {
        returnValue = F("Münkenmeedeweg");
        break;
    }
    case 227439:
    {
        returnValue = F("Münker Weg");
        break;
    }
    case 227440:
    {
        returnValue = F("Münkershütten");
        break;
    }
    case 227441:
    {
        returnValue = F("Münkeweg");
        break;
    }
    case 227442:
    {
        returnValue = F("Münklinger Str.");
        break;
    }
    case 227443:
    {
        returnValue = F("Münnekessiepen");
        break;
    }
    case 227444:
    {
        returnValue = F("Münnerstadter Str.");
        break;
    }
    case 227445:
    {
        returnValue = F("Münnerstädter Str.");
        break;
    }
    case 227446:
    {
        returnValue = F("Münnerstädter Weg");
        break;
    }
    case 227447:
    {
        returnValue = F("Münnigstücksweg");
        break;
    }
    case 227448:
    {
        returnValue = F("Münningsweg");
        break;
    }
    case 227449:
    {
        returnValue = F("Münsaer Str.");
        break;
    }
    case 227450:
    {
        returnValue = F("Münscherstr.");
        break;
    }
    case 227451:
    {
        returnValue = F("Münscherweg");
        break;
    }
    case 227452:
    {
        returnValue = F("Münsing");
        break;
    }
    case 227453:
    {
        returnValue = F("Münsinger Str.");
        break;
    }
    case 227454:
    {
        returnValue = F("Münsinger Weg");
        break;
    }
    case 227455:
    {
        returnValue = F("Münstedter Str.");
        break;
    }
    case 227456:
    {
        returnValue = F("Münstedter Weg");
        break;
    }
    case 227457:
    {
        returnValue = F("Münster");
        break;
    }
    case 227458:
    {
        returnValue = F("Münster Str.");
        break;
    }
    case 227459:
    {
        returnValue = F("Münsterberg");
        break;
    }
    case 227460:
    {
        returnValue = F("Münsterberger Str.");
        break;
    }
    case 227461:
    {
        returnValue = F("Münsterbergstr.");
        break;
    }
    case 227462:
    {
        returnValue = F("Münsterbildchen");
        break;
    }
    case 227463:
    {
        returnValue = F("Münsterblick");
        break;
    }
    case 227464:
    {
        returnValue = F("Münsterblickstr.");
        break;
    }
    case 227465:
    {
        returnValue = F("Münsterbrock");
        break;
    }
    case 227466:
    {
        returnValue = F("Münsterdamm");
        break;
    }
    case 227467:
    {
        returnValue = F("Münsterdeich");
        break;
    }
    case 227468:
    {
        returnValue = F("Münsterdorfer Str.");
        break;
    }
    case 227469:
    {
        returnValue = F("Münstereifeler Str.");
        break;
    }
    case 227470:
    {
        returnValue = F("Münsterer Hohl");
        break;
    }
    case 227471:
    {
        returnValue = F("Münsterer Hohl Weg");
        break;
    }
    case 227472:
    {
        returnValue = F("Münsterer Schleichweg");
        break;
    }
    case 227473:
    {
        returnValue = F("Münsterer Str.");
        break;
    }
    case 227474:
    {
        returnValue = F("Münsterer Weg");
        break;
    }
    case 227475:
    {
        returnValue = F("Münstererstr.");
        break;
    }
    case 227476:
    {
        returnValue = F("Münsterfort");
        break;
    }
    case 227477:
    {
        returnValue = F("Münstergarten");
        break;
    }
    case 227478:
    {
        returnValue = F("Münstergasse");
        break;
    }
    case 227479:
    {
        returnValue = F("Münstergrabenweg");
        break;
    }
    case 227480:
    {
        returnValue = F("Münstergäßchen");
        break;
    }
    case 227481:
    {
        returnValue = F("Münsterhauser Str.");
        break;
    }
    case 227482:
    {
        returnValue = F("Münsterkamp");
        break;
    }
    case 227483:
    {
        returnValue = F("Münsterlanddamm");
        break;
    }
    case 227484:
    {
        returnValue = F("Münsterlandstr.");
        break;
    }
    case 227485:
    {
        returnValue = F("Münsterlandtor");
        break;
    }
    case 227486:
    {
        returnValue = F("Münsterlandweg");
        break;
    }
    case 227487:
    {
        returnValue = F("Münsterländer Str.");
        break;
    }
    case 227488:
    {
        returnValue = F("Münstermannstr.");
        break;
    }
    case 227489:
    {
        returnValue = F("Münstermannsweg");
        break;
    }
    case 227490:
    {
        returnValue = F("Münstermannweg");
        break;
    }
    case 227491:
    {
        returnValue = F("Münstermauer");
        break;
    }
    case 227492:
    {
        returnValue = F("Münsterplatz");
        break;
    }
    case 227493:
    {
        returnValue = F("Münsterpolderweg");
        break;
    }
    case 227494:
    {
        returnValue = F("Münsters Feld");
        break;
    }
    case 227495:
    {
        returnValue = F("Münstersche Str.");
        break;
    }
    case 227496:
    {
        returnValue = F("Münsterscher Damm");
        break;
    }
    case 227497:
    {
        returnValue = F("Münstersteinweg");
        break;
    }
    case 227498:
    {
        returnValue = F("Münsterstiege");
        break;
    }
    case 227499:
    {
        returnValue = F("Münsterstr.");
        break;
    }
    case 227500:
    {
        returnValue = F("Münstertalstr.");
        break;
    }
    case 227501:
    {
        returnValue = F("Münstertalweg");
        break;
    }
    case 227502:
    {
        returnValue = F("Münsterthaler Str.");
        break;
    }
    case 227503:
    {
        returnValue = F("Münstertor");
        break;
    }
    case 227504:
    {
        returnValue = F("Münstertäler Str.");
        break;
    }
    case 227505:
    {
        returnValue = F("Münstertälerweg");
        break;
    }
    case 227506:
    {
        returnValue = F("Münsterwall");
        break;
    }
    case 227507:
    {
        returnValue = F("Münsterweg");
        break;
    }
    case 227508:
    {
        returnValue = F("Münte");
        break;
    }
    case 227509:
    {
        returnValue = F("Müntepark");
        break;
    }
    case 227510:
    {
        returnValue = F("Münterhof");
        break;
    }
    case 227511:
    {
        returnValue = F("Münterstr.");
        break;
    }
    case 227512:
    {
        returnValue = F("Münterweg");
        break;
    }
    case 227513:
    {
        returnValue = F("Müntestr.");
        break;
    }
    case 227514:
    {
        returnValue = F("Müntingas Heuweg");
        break;
    }
    case 227515:
    {
        returnValue = F("Müntjedorf");
        break;
    }
    case 227516:
    {
        returnValue = F("Müntjehelmer");
        break;
    }
    case 227517:
    {
        returnValue = F("Müntzer Gäßchen");
        break;
    }
    case 227518:
    {
        returnValue = F("Müntzer Str.");
        break;
    }
    case 227519:
    {
        returnValue = F("Müntzer Weg");
        break;
    }
    case 227520:
    {
        returnValue = F("Müntzerstr.");
        break;
    }
    case 227521:
    {
        returnValue = F("Müntzerweg");
        break;
    }
    case 227522:
    {
        returnValue = F("Münzacker");
        break;
    }
    case 227523:
    {
        returnValue = F("Münzackerhof");
        break;
    }
    case 227524:
    {
        returnValue = F("Münzbachtal");
        break;
    }
    case 227525:
    {
        returnValue = F("Münzbachweg");
        break;
    }
    case 227526:
    {
        returnValue = F("Münzbergweg");
        break;
    }
    case 227527:
    {
        returnValue = F("Münzbrücke");
        break;
    }
    case 227528:
    {
        returnValue = F("Münze");
        break;
    }
    case 227529:
    {
        returnValue = F("Münzelweg");
        break;
    }
    case 227530:
    {
        returnValue = F("Münzenbachweg");
        break;
    }
    case 227531:
    {
        returnValue = F("Münzenberg");
        break;
    }
    case 227532:
    {
        returnValue = F("Münzenberger Pfad");
        break;
    }
    case 227533:
    {
        returnValue = F("Münzenberger Str.");
        break;
    }
    case 227534:
    {
        returnValue = F("Münzenberger Weg");
        break;
    }
    case 227535:
    {
        returnValue = F("Münzenbergerstr.");
        break;
    }
    case 227536:
    {
        returnValue = F("Münzenbergstr.");
        break;
    }
    case 227537:
    {
        returnValue = F("Münzenfeldstr.");
        break;
    }
    case 227538:
    {
        returnValue = F("Münzenhalde");
        break;
    }
    case 227539:
    {
        returnValue = F("Münzenmühle");
        break;
    }
    case 227540:
    {
        returnValue = F("Münzenstr.");
        break;
    }
    case 227541:
    {
        returnValue = F("Münzerstr.");
        break;
    }
    case 227542:
    {
        returnValue = F("Münzesheimer Weg");
        break;
    }
    case 227543:
    {
        returnValue = F("Münzestr.");
        break;
    }
    case 227544:
    {
        returnValue = F("Münzgasse");
        break;
    }
    case 227545:
    {
        returnValue = F("Münzgäßchen");
        break;
    }
    case 227546:
    {
        returnValue = F("Münzhalde");
        break;
    }
    case 227547:
    {
        returnValue = F("Münzhof");
        break;
    }
    case 227548:
    {
        returnValue = F("Münzhofstr.");
        break;
    }
    case 227549:
    {
        returnValue = F("Münzinger Weg");
        break;
    }
    case 227550:
    {
        returnValue = F("Münzingerstr.");
        break;
    }
    case 227551:
    {
        returnValue = F("Münzinghof");
        break;
    }
    case 227552:
    {
        returnValue = F("Münzkamp");
        break;
    }
    case 227553:
    {
        returnValue = F("Münzlochstr.");
        break;
    }
    case 227554:
    {
        returnValue = F("Münzlochweg");
        break;
    }
    case 227555:
    {
        returnValue = F("Münzlochweg, Rettungssektor L");
        break;
    }
    case 227556:
    {
        returnValue = F("Münzmeisterstr.");
        break;
    }
    case 227557:
    {
        returnValue = F("Münzplatz");
        break;
    }
    case 227558:
    {
        returnValue = F("Münzstr.");
        break;
    }
    case 227559:
    {
        returnValue = F("Münzthaler Grund");
        break;
    }
    case 227560:
    {
        returnValue = F("Münzwaldstr.");
        break;
    }
    case 227561:
    {
        returnValue = F("Münzweg");
        break;
    }
    case 227562:
    {
        returnValue = F("Münzäcker");
        break;
    }
    case 227563:
    {
        returnValue = F("Mürbe Äcker");
        break;
    }
    case 227564:
    {
        returnValue = F("Mürelweg");
        break;
    }
    case 227565:
    {
        returnValue = F("Mürholm");
        break;
    }
    case 227566:
    {
        returnValue = F("Müritzblick");
        break;
    }
    case 227567:
    {
        returnValue = F("Müritzer Str.");
        break;
    }
    case 227568:
    {
        returnValue = F("Müritzpromenade");
        break;
    }
    case 227569:
    {
        returnValue = F("Müritzstr.");
        break;
    }
    case 227570:
    {
        returnValue = F("Müritztörn");
        break;
    }
    case 227571:
    {
        returnValue = F("Müritzweg");
        break;
    }
    case 227572:
    {
        returnValue = F("Mürle");
        break;
    }
    case 227573:
    {
        returnValue = F("Mürlenbacher Str.");
        break;
    }
    case 227574:
    {
        returnValue = F("Mürleweg links");
        break;
    }
    case 227575:
    {
        returnValue = F("Mürleweg recht");
        break;
    }
    case 227576:
    {
        returnValue = F("Mürmeln");
        break;
    }
    case 227577:
    {
        returnValue = F("Mürmesweg");
        break;
    }
    case 227578:
    {
        returnValue = F("Mürower Landstr.");
        break;
    }
    case 227579:
    {
        returnValue = F("Mürower Str.");
        break;
    }
    case 227580:
    {
        returnValue = F("Mürower Str. Ausbau");
        break;
    }
    case 227581:
    {
        returnValue = F("Mürower Weg");
        break;
    }
    case 227582:
    {
        returnValue = F("Mürrwarder Burmeidsweg");
        break;
    }
    case 227583:
    {
        returnValue = F("Mürrwarder Str.");
        break;
    }
    case 227584:
    {
        returnValue = F("Mürrwarder-Burmeidsweg");
        break;
    }
    case 227585:
    {
        returnValue = F("Mürschnitzer Str.");
        break;
    }
    case 227586:
    {
        returnValue = F("Mürtinger Str.");
        break;
    }
    case 227587:
    {
        returnValue = F("Mürwiker Str.");
        break;
    }
    case 227588:
    {
        returnValue = F("Müschbungert");
        break;
    }
    case 227589:
    {
        returnValue = F("Müscheder Weg");
        break;
    }
    case 227590:
    {
        returnValue = F("Müschederweg");
        break;
    }
    case 227591:
    {
        returnValue = F("Müschelenweg");
        break;
    }
    case 227592:
    {
        returnValue = F("Müschenau");
        break;
    }
    case 227593:
    {
        returnValue = F("Müschendörp");
        break;
    }
    case 227594:
    {
        returnValue = F("Müschenend");
        break;
    }
    case 227595:
    {
        returnValue = F("Müschener Str.");
        break;
    }
    case 227596:
    {
        returnValue = F("Müschenfeld");
        break;
    }
    case 227597:
    {
        returnValue = F("Müschensteg");
        break;
    }
    case 227598:
    {
        returnValue = F("Müscher Hüttenpfad");
        break;
    }
    case 227599:
    {
        returnValue = F("Müschers Kamp");
        break;
    }
    case 227600:
    {
        returnValue = F("Müselerstr.");
        break;
    }
    case 227601:
    {
        returnValue = F("Müsendrei");
        break;
    }
    case 227602:
    {
        returnValue = F("Müsener Bruch");
        break;
    }
    case 227603:
    {
        returnValue = F("Müsener Str.");
        break;
    }
    case 227604:
    {
        returnValue = F("Müser Str.");
        break;
    }
    case 227605:
    {
        returnValue = F("Müserstr.");
        break;
    }
    case 227606:
    {
        returnValue = F("Müsgesauel");
        break;
    }
    case 227607:
    {
        returnValue = F("Müsinger Str.");
        break;
    }
    case 227608:
    {
        returnValue = F("Müsingsweg");
        break;
    }
    case 227609:
    {
        returnValue = F("Müskesweg");
        break;
    }
    case 227610:
    {
        returnValue = F("Müsleringer Driften");
        break;
    }
    case 227611:
    {
        returnValue = F("Müsleringer Holt");
        break;
    }
    case 227612:
    {
        returnValue = F("Müsleringer Str.");
        break;
    }
    case 227613:
    {
        returnValue = F("Müsleringer Weserweg");
        break;
    }
    case 227614:
    {
        returnValue = F("Müslüttens Damm");
        break;
    }
    case 227615:
    {
        returnValue = F("Müsselberg");
        break;
    }
    case 227616:
    {
        returnValue = F("Müsselmower Str.");
        break;
    }
    case 227617:
    {
        returnValue = F("Müssenbergstr.");
        break;
    }
    case 227618:
    {
        returnValue = F("Müssener Stieg");
        break;
    }
    case 227619:
    {
        returnValue = F("Müssener Str.");
        break;
    }
    case 227620:
    {
        returnValue = F("Müssenkamp");
        break;
    }
    case 227621:
    {
        returnValue = F("Müssenredder");
        break;
    }
    case 227622:
    {
        returnValue = F("Müssentin");
        break;
    }
    case 227623:
    {
        returnValue = F("Müssentiner Weg");
        break;
    }
    case 227624:
    {
        returnValue = F("Müssenweg");
        break;
    }
    case 227625:
    {
        returnValue = F("Müsseweg");
        break;
    }
    case 227626:
    {
        returnValue = F("Müssigerstr.");
        break;
    }
    case 227627:
    {
        returnValue = F("Müssigweg");
        break;
    }
    case 227628:
    {
        returnValue = F("Müssingen");
        break;
    }
    case 227629:
    {
        returnValue = F("Müssinger Str.");
        break;
    }
    case 227630:
    {
        returnValue = F("Müssinger Weg");
        break;
    }
    case 227631:
    {
        returnValue = F("Müsterter Str.");
        break;
    }
    case 227632:
    {
        returnValue = F("Müthelstr.");
        break;
    }
    case 227633:
    {
        returnValue = F("Müthers Kamp");
        break;
    }
    case 227634:
    {
        returnValue = F("Müttersheimerstr.");
        break;
    }
    case 227635:
    {
        returnValue = F("Mützdorf");
        break;
    }
    case 227636:
    {
        returnValue = F("Mützeler Str.");
        break;
    }
    case 227637:
    {
        returnValue = F("Mützeler Weg");
        break;
    }
    case 227638:
    {
        returnValue = F("Mützelsberg");
        break;
    }
    case 227639:
    {
        returnValue = F("Mützelstr.");
        break;
    }
    case 227640:
    {
        returnValue = F("Mützen");
        break;
    }
    case 227641:
    {
        returnValue = F("Mützenau");
        break;
    }
    case 227642:
    {
        returnValue = F("Mützenweg");
        break;
    }
    case 227643:
    {
        returnValue = F("Mützlitzer Str.");
        break;
    }
    case 227644:
    {
        returnValue = F("Müßentwiete");
        break;
    }
    case 227645:
    {
        returnValue = F("Müßgasse");
        break;
    }
    case 227646:
    {
        returnValue = F("Müßiggang");
        break;
    }
    case 227647:
    {
        returnValue = F("Müßweg");
        break;
    }
    }
    return returnValue;
}
