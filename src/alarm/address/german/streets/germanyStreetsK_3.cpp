#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameK3(unsigned int streetKey)
{
String returnValue = "";
switch (streetKey)
{
case 190019:
{
returnValue = F("Kloster-Langheim-Str.");
break;
}
case 190020:
{
returnValue = F("Kloster-Limburg-Weg");
break;
}
case 190021:
{
returnValue = F("Kloster-Lorsch-Str.");
break;
}
case 190022:
{
returnValue = F("Kloster-Lorsch-Weg");
break;
}
case 190023:
{
returnValue = F("Kloster-Marienborn-Platz");
break;
}
case 190024:
{
returnValue = F("Kloster-Marienstern-Str.");
break;
}
case 190025:
{
returnValue = F("Kloster-Meer-Str.");
break;
}
case 190026:
{
returnValue = F("Kloster-Mondsee-Str.");
break;
}
case 190027:
{
returnValue = F("Kloster-Neustift-Str.");
break;
}
case 190028:
{
returnValue = F("Kloster-Prüll-Weg");
break;
}
case 190029:
{
returnValue = F("Kloster-Prüm-Str.");
break;
}
case 190030:
{
returnValue = F("Kloster-Reichenau-Ring");
break;
}
case 190031:
{
returnValue = F("Kloster-Rohr-Str.");
break;
}
case 190032:
{
returnValue = F("Kloster-Rosenthal-Str.");
break;
}
case 190033:
{
returnValue = F("Kloster-Stams-Str.");
break;
}
case 190034:
{
returnValue = F("Kloster-Stuben-Str.");
break;
}
case 190035:
{
returnValue = F("Kloster-Weißenburg-Str.");
break;
}
case 190036:
{
returnValue = F("Klosteracker");
break;
}
case 190037:
{
returnValue = F("Klosterackerweg");
break;
}
case 190038:
{
returnValue = F("Klosterallee");
break;
}
case 190039:
{
returnValue = F("Klosteranger");
break;
}
case 190040:
{
returnValue = F("Klosteraue");
break;
}
case 190041:
{
returnValue = F("Klosterbach");
break;
}
case 190042:
{
returnValue = F("Klosterbachsiedlung");
break;
}
case 190043:
{
returnValue = F("Klosterbachweg");
break;
}
case 190044:
{
returnValue = F("Klosterbauerschafter Str.");
break;
}
case 190045:
{
returnValue = F("Klosterberg");
break;
}
case 190046:
{
returnValue = F("Klosterbergenstr.");
break;
}
case 190047:
{
returnValue = F("Klosterberglein");
break;
}
case 190048:
{
returnValue = F("Klosterbergstr.");
break;
}
case 190049:
{
returnValue = F("Klosterbergsträssle");
break;
}
case 190050:
{
returnValue = F("Klosterbergsträßle");
break;
}
case 190051:
{
returnValue = F("Klosterbergweg");
break;
}
case 190052:
{
returnValue = F("Klosterbeurer Str.");
break;
}
case 190053:
{
returnValue = F("Klosterblick");
break;
}
case 190054:
{
returnValue = F("Klosterblickweg");
break;
}
case 190055:
{
returnValue = F("Klosterbogen");
break;
}
case 190056:
{
returnValue = F("Klosterbosch Fußweg");
break;
}
case 190057:
{
returnValue = F("Klosterboschweg");
break;
}
case 190058:
{
returnValue = F("Klosterbreite");
break;
}
case 190059:
{
returnValue = F("Klosterbrunnen");
break;
}
case 190060:
{
returnValue = F("Klosterbrücke");
break;
}
case 190061:
{
returnValue = F("Klosterbrückenweg");
break;
}
case 190062:
{
returnValue = F("Klosterbuch");
break;
}
case 190063:
{
returnValue = F("Klosterbucher Str.");
break;
}
case 190064:
{
returnValue = F("Klosterbuchstr.");
break;
}
case 190065:
{
returnValue = F("Klosterburg");
break;
}
case 190066:
{
returnValue = F("Klosterbusch");
break;
}
case 190067:
{
returnValue = F("Klosterdamm");
break;
}
case 190068:
{
returnValue = F("Klosterdorfer Chaussee");
break;
}
case 190069:
{
returnValue = F("Klosterdorfer Str.");
break;
}
case 190070:
{
returnValue = F("Klosterdorfer Weg");
break;
}
case 190071:
{
returnValue = F("Klosterdorfer Weg Süd");
break;
}
case 190072:
{
returnValue = F("Klostereck");
break;
}
case 190073:
{
returnValue = F("Klosterecke");
break;
}
case 190074:
{
returnValue = F("Klostereichen");
break;
}
case 190075:
{
returnValue = F("Klosterfeld");
break;
}
case 190076:
{
returnValue = F("Klosterfelder Chaussee");
break;
}
case 190077:
{
returnValue = F("Klosterfelder Damm");
break;
}
case 190078:
{
returnValue = F("Klosterfelder Hauptstr.");
break;
}
case 190079:
{
returnValue = F("Klosterfelder Str.");
break;
}
case 190080:
{
returnValue = F("Klosterfeldstr.");
break;
}
case 190081:
{
returnValue = F("Klosterfeldweg");
break;
}
case 190082:
{
returnValue = F("Klosterfilzweg");
break;
}
case 190083:
{
returnValue = F("Klosterforst");
break;
}
case 190084:
{
returnValue = F("Klosterfreiheit");
break;
}
case 190085:
{
returnValue = F("Klostergang");
break;
}
case 190086:
{
returnValue = F("Klostergang II");
break;
}
case 190087:
{
returnValue = F("Klostergarten");
break;
}
case 190088:
{
returnValue = F("Klostergarten Aldersbach");
break;
}
case 190089:
{
returnValue = F("Klostergarten Dietenborn");
break;
}
case 190090:
{
returnValue = F("Klostergarten Lobenfeld");
break;
}
case 190091:
{
returnValue = F("Klostergarten Schöntal");
break;
}
case 190092:
{
returnValue = F("Klostergarten Stetten");
break;
}
case 190093:
{
returnValue = F("Klostergartenstr.");
break;
}
case 190094:
{
returnValue = F("Klostergartenweg");
break;
}
case 190095:
{
returnValue = F("Klostergasse");
break;
}
case 190096:
{
returnValue = F("Klostergewannstr.");
break;
}
case 190097:
{
returnValue = F("Klostergrenzweg");
break;
}
case 190098:
{
returnValue = F("Klostergut");
break;
}
case 190099:
{
returnValue = F("Klostergut Willerding");
break;
}
case 190100:
{
returnValue = F("Klostergutweg");
break;
}
case 190101:
{
returnValue = F("Klostergängle");
break;
}
case 190102:
{
returnValue = F("Klostergärten");
break;
}
case 190103:
{
returnValue = F("Klostergässle");
break;
}
case 190104:
{
returnValue = F("Klostergäßchen");
break;
}
case 190105:
{
returnValue = F("Klosterhaldenweg");
break;
}
case 190106:
{
returnValue = F("Klosterhang");
break;
}
case 190107:
{
returnValue = F("Klosterhausweg");
break;
}
case 190108:
{
returnValue = F("Klosterheide");
break;
}
case 190109:
{
returnValue = F("Klosterheuweg");
break;
}
case 190110:
{
returnValue = F("Klosterhof");
break;
}
case 190111:
{
returnValue = F("Klosterhof Sankt Peter");
break;
}
case 190112:
{
returnValue = F("Klosterhofer Str.");
break;
}
case 190113:
{
returnValue = F("Klosterhofgasse");
break;
}
case 190114:
{
returnValue = F("Klosterhofstr.");
break;
}
case 190115:
{
returnValue = F("Klosterholter Str.");
break;
}
case 190116:
{
returnValue = F("Klosterholz");
break;
}
case 190117:
{
returnValue = F("Klosterholzstr.");
break;
}
case 190118:
{
returnValue = F("Klosterholzweg");
break;
}
case 190119:
{
returnValue = F("Klosterhook");
break;
}
case 190120:
{
returnValue = F("Klosterhufe");
break;
}
case 190121:
{
returnValue = F("Klosterhöfe");
break;
}
case 190122:
{
returnValue = F("Klosterhöhe");
break;
}
case 190123:
{
returnValue = F("Klosterhörn");
break;
}
case 190124:
{
returnValue = F("Klosterhügel");
break;
}
case 190125:
{
returnValue = F("Klosterhütte");
break;
}
case 190126:
{
returnValue = F("Klosterjägerweg");
break;
}
case 190127:
{
returnValue = F("Klosterkammerstr.");
break;
}
case 190128:
{
returnValue = F("Klosterkamp");
break;
}
case 190129:
{
returnValue = F("Klosterkirchhof");
break;
}
case 190130:
{
returnValue = F("Klosterkirchplatz");
break;
}
case 190131:
{
returnValue = F("Klosterkoppel");
break;
}
case 190132:
{
returnValue = F("Klosterkuppe");
break;
}
case 190133:
{
returnValue = F("Klosterlander Weg");
break;
}
case 190134:
{
returnValue = F("Klosterlangheimer Str.");
break;
}
case 190135:
{
returnValue = F("Klosterlausnitzer Str.");
break;
}
case 190136:
{
returnValue = F("Klosterlehen");
break;
}
case 190137:
{
returnValue = F("Klosterlohne");
break;
}
case 190138:
{
returnValue = F("Klostermannstr.");
break;
}
case 190139:
{
returnValue = F("Klostermansfelder Str.");
break;
}
case 190140:
{
returnValue = F("Klostermarkt");
break;
}
case 190141:
{
returnValue = F("Klostermarkt-Passage");
break;
}
case 190142:
{
returnValue = F("Klostermatt");
break;
}
case 190143:
{
returnValue = F("Klostermattenstr.");
break;
}
case 190144:
{
returnValue = F("Klostermattenweg");
break;
}
case 190145:
{
returnValue = F("Klostermauer");
break;
}
case 190146:
{
returnValue = F("Klostermauerweg");
break;
}
case 190147:
{
returnValue = F("Klostermeyergasse");
break;
}
case 190148:
{
returnValue = F("Klostermitteldeich");
break;
}
case 190149:
{
returnValue = F("Klostermoorer Str.");
break;
}
case 190150:
{
returnValue = F("Klostermoorweg");
break;
}
case 190151:
{
returnValue = F("Klostermühle");
break;
}
case 190152:
{
returnValue = F("Klostermühlenstr.");
break;
}
case 190153:
{
returnValue = F("Klostermühlenweg");
break;
}
case 190154:
{
returnValue = F("Klostermühlgasse");
break;
}
case 190155:
{
returnValue = F("Klosternaundorf");
break;
}
case 190156:
{
returnValue = F("Klosterode");
break;
}
case 190157:
{
returnValue = F("Klosterpadd");
break;
}
case 190158:
{
returnValue = F("Klosterpark");
break;
}
case 190159:
{
returnValue = F("Klosterpark Gerlachsheim");
break;
}
case 190160:
{
returnValue = F("Klosterpfad");
break;
}
case 190161:
{
returnValue = F("Klosterpforte");
break;
}
case 190162:
{
returnValue = F("Klosterplatz");
break;
}
case 190163:
{
returnValue = F("Klosterrain");
break;
}
case 190164:
{
returnValue = F("Klosterrainstr.");
break;
}
case 190165:
{
returnValue = F("Klosterrather Str.");
break;
}
case 190166:
{
returnValue = F("Klosterrather Weg");
break;
}
case 190167:
{
returnValue = F("Klosterredder");
break;
}
case 190168:
{
returnValue = F("Klosterreihe");
break;
}
case 190169:
{
returnValue = F("Klosterrichterweg");
break;
}
case 190170:
{
returnValue = F("Klosterring");
break;
}
case 190171:
{
returnValue = F("Klosterruine Eldena");
break;
}
case 190172:
{
returnValue = F("Klosterrundweg");
break;
}
case 190173:
{
returnValue = F("Klosterrunsstr.");
break;
}
case 190174:
{
returnValue = F("Klostersande");
break;
}
case 190175:
{
returnValue = F("Klosterschwaige");
break;
}
case 190176:
{
returnValue = F("Klostersee");
break;
}
case 190177:
{
returnValue = F("Klosterseelter Str.");
break;
}
case 190178:
{
returnValue = F("Klosterseeweg");
break;
}
case 190179:
{
returnValue = F("Klostersiedlung");
break;
}
case 190180:
{
returnValue = F("Klosterstaffel");
break;
}
case 190181:
{
returnValue = F("Klosterstege");
break;
}
case 190182:
{
returnValue = F("Klostersteig");
break;
}
case 190183:
{
returnValue = F("Klostersteige");
break;
}
case 190184:
{
returnValue = F("Klosterstieg");
break;
}
case 190185:
{
returnValue = F("Klosterstr.");
break;
}
case 190186:
{
returnValue = F("Klosterteich");
break;
}
case 190187:
{
returnValue = F("Klostertor");
break;
}
case 190188:
{
returnValue = F("Klostertreppe");
break;
}
case 190189:
{
returnValue = F("Klostertrift");
break;
}
case 190190:
{
returnValue = F("Klostertwiete");
break;
}
case 190191:
{
returnValue = F("Klosterufer");
break;
}
case 190192:
{
returnValue = F("Klostervorwerk");
break;
}
case 190193:
{
returnValue = F("Klosterwachtstr.");
break;
}
case 190194:
{
returnValue = F("Klosterwald");
break;
}
case 190195:
{
returnValue = F("Klosterwalder Dorfstr.");
break;
}
case 190196:
{
returnValue = F("Klosterwalder Hauptstr.");
break;
}
case 190197:
{
returnValue = F("Klosterwalder Koppelweg");
break;
}
case 190198:
{
returnValue = F("Klosterwaldschneise");
break;
}
case 190199:
{
returnValue = F("Klosterwaldstr.");
break;
}
case 190200:
{
returnValue = F("Klosterwaldsträßle");
break;
}
case 190201:
{
returnValue = F("Klosterwaldweg");
break;
}
case 190202:
{
returnValue = F("Klosterwall");
break;
}
case 190203:
{
returnValue = F("Klosterwasem");
break;
}
case 190204:
{
returnValue = F("Klosterweg");
break;
}
case 190205:
{
returnValue = F("Klosterweide");
break;
}
case 190206:
{
returnValue = F("Klosterweiherweg");
break;
}
case 190207:
{
returnValue = F("Klosterweinberg");
break;
}
case 190208:
{
returnValue = F("Klosterweth");
break;
}
case 190209:
{
returnValue = F("Klosterwiese");
break;
}
case 190210:
{
returnValue = F("Klosterwiesen");
break;
}
case 190211:
{
returnValue = F("Klosterwiesenweg");
break;
}
case 190212:
{
returnValue = F("Klosterwinkel");
break;
}
case 190213:
{
returnValue = F("Klosterwisch");
break;
}
case 190214:
{
returnValue = F("Klosterworth");
break;
}
case 190215:
{
returnValue = F("Klosteräcker");
break;
}
case 190216:
{
returnValue = F("Klosteräckerstr.");
break;
}
case 190217:
{
returnValue = F("Klosteräckerweg");
break;
}
case 190218:
{
returnValue = F("Klotenstr.");
break;
}
case 190219:
{
returnValue = F("Klothgasse");
break;
}
case 190220:
{
returnValue = F("Klothkamp");
break;
}
case 190221:
{
returnValue = F("Klothmanns Kamp");
break;
}
case 190222:
{
returnValue = F("Klothof");
break;
}
case 190223:
{
returnValue = F("Klothweg");
break;
}
case 190224:
{
returnValue = F("Klotinger Heide");
break;
}
case 190225:
{
returnValue = F("Klotinger Str.");
break;
}
case 190226:
{
returnValue = F("Klottener Str.");
break;
}
case 190227:
{
returnValue = F("Klottengasse");
break;
}
case 190228:
{
returnValue = F("Klotzbachstr.");
break;
}
case 190229:
{
returnValue = F("Klotzbahn");
break;
}
case 190230:
{
returnValue = F("Klotzbergstr.");
break;
}
case 190231:
{
returnValue = F("Klotzegrund");
break;
}
case 190232:
{
returnValue = F("Klotzen");
break;
}
case 190233:
{
returnValue = F("Klotzenhof");
break;
}
case 190234:
{
returnValue = F("Klotzenkuhle");
break;
}
case 190235:
{
returnValue = F("Klotzenstr.");
break;
}
case 190236:
{
returnValue = F("Klotzersiedlung");
break;
}
case 190237:
{
returnValue = F("Klotzholzäcker");
break;
}
case 190238:
{
returnValue = F("Klotzhöfe");
break;
}
case 190239:
{
returnValue = F("Klotzing");
break;
}
case 190240:
{
returnValue = F("Klotzow-Wangelkow");
break;
}
case 190241:
{
returnValue = F("Klotzschesweg");
break;
}
case 190242:
{
returnValue = F("Klotzstr.");
break;
}
case 190243:
{
returnValue = F("Klotzweg");
break;
}
case 190244:
{
returnValue = F("Klowerkamp");
break;
}
case 190245:
{
returnValue = F("Kloweskirchhof");
break;
}
case 190246:
{
returnValue = F("Kloßbergweg");
break;
}
case 190247:
{
returnValue = F("Kloßgasse");
break;
}
case 190248:
{
returnValue = F("Klubhausstr.");
break;
}
case 190249:
{
returnValue = F("Klubhausweg");
break;
}
case 190250:
{
returnValue = F("Kluckbachsbrücke");
break;
}
case 190251:
{
returnValue = F("Kluckhofer Weg");
break;
}
case 190252:
{
returnValue = F("Kluckhorn");
break;
}
case 190253:
{
returnValue = F("Klucksborn");
break;
}
case 190254:
{
returnValue = F("Kluckweg");
break;
}
case 190255:
{
returnValue = F("Kludenbacher Str.");
break;
}
case 190256:
{
returnValue = F("Kluegheimerstr.");
break;
}
case 190257:
{
returnValue = F("Klues");
break;
}
case 190258:
{
returnValue = F("Klueser Weg");
break;
}
case 190259:
{
returnValue = F("Klueser Winkel");
break;
}
case 190260:
{
returnValue = F("Kluftenbäume");
break;
}
case 190261:
{
returnValue = F("Klufterner Str.");
break;
}
case 190262:
{
returnValue = F("Klugham");
break;
}
case 190263:
{
returnValue = F("Klughardtstr.");
break;
}
case 190264:
{
returnValue = F("Klughäuser Weg");
break;
}
case 190265:
{
returnValue = F("Kluhs");
break;
}
case 190266:
{
returnValue = F("Klummgasse");
break;
}
case 190267:
{
returnValue = F("Klumpbahn");
break;
}
case 190268:
{
returnValue = F("Klumpen");
break;
}
case 190269:
{
returnValue = F("Klumpertal");
break;
}
case 190270:
{
returnValue = F("Klumpertalstr.");
break;
}
case 190271:
{
returnValue = F("Klumpweg");
break;
}
case 190272:
{
returnValue = F("Klunderburglohne");
break;
}
case 190273:
{
returnValue = F("Klunderburgstr.");
break;
}
case 190274:
{
returnValue = F("Klunkau");
break;
}
case 190275:
{
returnValue = F("Klunkersteig");
break;
}
case 190276:
{
returnValue = F("Klunkert");
break;
}
case 190277:
{
returnValue = F("Klunkhardshof");
break;
}
case 190278:
{
returnValue = F("Klunnerbarger Weg");
break;
}
case 190279:
{
returnValue = F("Kluntjepad");
break;
}
case 190280:
{
returnValue = F("Klunzingerstr.");
break;
}
case 190281:
{
returnValue = F("Kluppenstr.");
break;
}
case 190282:
{
returnValue = F("Kluptow");
break;
}
case 190283:
{
returnValue = F("Klur's Weg");
break;
}
case 190284:
{
returnValue = F("Klus");
break;
}
case 190285:
{
returnValue = F("Klus Eddessen");
break;
}
case 190286:
{
returnValue = F("Klusangerstr.");
break;
}
case 190287:
{
returnValue = F("Klusberg");
break;
}
case 190288:
{
returnValue = F("Klusbergstr.");
break;
}
case 190289:
{
returnValue = F("Klusblick");
break;
}
case 190290:
{
returnValue = F("Klusbreite");
break;
}
case 190291:
{
returnValue = F("Klusbrinkweg");
break;
}
case 190292:
{
returnValue = F("Klusdamm");
break;
}
case 190293:
{
returnValue = F("Kluse");
break;
}
case 190294:
{
returnValue = F("Klusemannstr.");
break;
}
case 190295:
{
returnValue = F("Klusenberg");
break;
}
case 190296:
{
returnValue = F("Klusenbitze");
break;
}
case 190297:
{
returnValue = F("Klusenbreede");
break;
}
case 190298:
{
returnValue = F("Klusenerweg");
break;
}
case 190299:
{
returnValue = F("Klusenhaldeweg");
break;
}
case 190300:
{
returnValue = F("Klusenhof");
break;
}
case 190301:
{
returnValue = F("Klusenkamp");
break;
}
case 190302:
{
returnValue = F("Klusenstein");
break;
}
case 190303:
{
returnValue = F("Klusensteiner Weg");
break;
}
case 190304:
{
returnValue = F("Klusenstr.");
break;
}
case 190305:
{
returnValue = F("Klusenwaldweg");
break;
}
case 190306:
{
returnValue = F("Klusenweg");
break;
}
case 190307:
{
returnValue = F("Klusenwitteweg");
break;
}
case 190308:
{
returnValue = F("Kluser Platz");
break;
}
case 190309:
{
returnValue = F("Kluser Str.");
break;
}
case 190310:
{
returnValue = F("Kluser Weg");
break;
}
case 190311:
{
returnValue = F("Kluserweg");
break;
}
case 190312:
{
returnValue = F("Klusestr.");
break;
}
case 190313:
{
returnValue = F("Klusetor");
break;
}
case 190314:
{
returnValue = F("Kluseweg");
break;
}
case 190315:
{
returnValue = F("Klusfeld");
break;
}
case 190316:
{
returnValue = F("Klusforderstr.");
break;
}
case 190317:
{
returnValue = F("Klusgestell");
break;
}
case 190318:
{
returnValue = F("Klusgrund");
break;
}
case 190319:
{
returnValue = F("Klusheideweg");
break;
}
case 190320:
{
returnValue = F("Klushofstr.");
break;
}
case 190321:
{
returnValue = F("Kluskamp");
break;
}
case 190322:
{
returnValue = F("Kluskampstr.");
break;
}
case 190323:
{
returnValue = F("Klusmannweg");
break;
}
case 190324:
{
returnValue = F("Klusmoor");
break;
}
case 190325:
{
returnValue = F("Klusring");
break;
}
case 190326:
{
returnValue = F("Klussiedlung");
break;
}
case 190327:
{
returnValue = F("Klussiepen");
break;
}
case 190328:
{
returnValue = F("Klusstr.");
break;
}
case 190329:
{
returnValue = F("Kluste");
break;
}
case 190330:
{
returnValue = F("Klusterriede");
break;
}
case 190331:
{
returnValue = F("Klusweg");
break;
}
case 190332:
{
returnValue = F("Klutenbrinkstr.");
break;
}
case 190333:
{
returnValue = F("Klutenhof");
break;
}
case 190334:
{
returnValue = F("Klutenscheuer");
break;
}
case 190335:
{
returnValue = F("Klutenweg");
break;
}
case 190336:
{
returnValue = F("Klutertstr.");
break;
}
case 190337:
{
returnValue = F("Kluth");
break;
}
case 190338:
{
returnValue = F("Kluthkämpe");
break;
}
case 190339:
{
returnValue = F("Klutstein");
break;
}
case 190340:
{
returnValue = F("Kluven");
break;
}
case 190341:
{
returnValue = F("Kluß");
break;
}
case 190342:
{
returnValue = F("Klußbrink");
break;
}
case 190343:
{
returnValue = F("Klußer Damm");
break;
}
case 190344:
{
returnValue = F("Klußfeld");
break;
}
case 190345:
{
returnValue = F("Klußkamp");
break;
}
case 190346:
{
returnValue = F("Klußmannstr.");
break;
}
case 190347:
{
returnValue = F("Klußweg");
break;
}
case 190348:
{
returnValue = F("Klw X11 XE");
break;
}
case 190349:
{
returnValue = F("Klybeckstr.");
break;
}
case 190350:
{
returnValue = F("Kläfferkopfweg");
break;
}
case 190351:
{
returnValue = F("Klägerweg");
break;
}
case 190352:
{
returnValue = F("Klährweg");
break;
}
case 190353:
{
returnValue = F("Kläkamp");
break;
}
case 190354:
{
returnValue = F("Klämmleweg");
break;
}
case 190355:
{
returnValue = F("Klängeweg");
break;
}
case 190356:
{
returnValue = F("Klänhammer-Weg");
break;
}
case 190357:
{
returnValue = F("Kläperbreite");
break;
}
case 190358:
{
returnValue = F("Kläperhagen");
break;
}
case 190359:
{
returnValue = F("Kläperstadt");
break;
}
case 190360:
{
returnValue = F("Kläpperweg");
break;
}
case 190361:
{
returnValue = F("Kläranlage");
break;
}
case 190362:
{
returnValue = F("Kläranlagenstr.");
break;
}
case 190363:
{
returnValue = F("Kläranlagenweg");
break;
}
case 190364:
{
returnValue = F("Klärchens-Ruh-Weg");
break;
}
case 190365:
{
returnValue = F("Klärchenweg");
break;
}
case 190366:
{
returnValue = F("Kläre-Kluge-Weg");
break;
}
case 190367:
{
returnValue = F("Klärenweg");
break;
}
case 190368:
{
returnValue = F("Klärstr.");
break;
}
case 190369:
{
returnValue = F("Klärweg");
break;
}
case 190370:
{
returnValue = F("Klärwerk");
break;
}
case 190371:
{
returnValue = F("Klärwerk Herne (ehemaliges)");
break;
}
case 190372:
{
returnValue = F("Klärwerkstr.");
break;
}
case 190373:
{
returnValue = F("Kläschenbrunnen");
break;
}
case 190374:
{
returnValue = F("Kläsengasse");
break;
}
case 190375:
{
returnValue = F("Klätergasse");
break;
}
case 190376:
{
returnValue = F("Klöckelsbergstr.");
break;
}
case 190377:
{
returnValue = F("Klöckerstr.");
break;
}
case 190378:
{
returnValue = F("Klöckner-Mannstaedt-Str.");
break;
}
case 190379:
{
returnValue = F("Klöcknersecke");
break;
}
case 190380:
{
returnValue = F("Klöcknerstr.");
break;
}
case 190381:
{
returnValue = F("Klöffelweg");
break;
}
case 190382:
{
returnValue = F("Klön Ecke");
break;
}
case 190383:
{
returnValue = F("Klöngasse");
break;
}
case 190384:
{
returnValue = F("Klönnerei");
break;
}
case 190385:
{
returnValue = F("Klönpad");
break;
}
case 190386:
{
returnValue = F("Klönstieg");
break;
}
case 190387:
{
returnValue = F("Klöntrupstr.");
break;
}
case 190388:
{
returnValue = F("Klönweg");
break;
}
case 190389:
{
returnValue = F("Klöpfbachstr.");
break;
}
case 190390:
{
returnValue = F("Klöpfelweg");
break;
}
case 190391:
{
returnValue = F("Klöpflesberg");
break;
}
case 190392:
{
returnValue = F("Klöpflgraben");
break;
}
case 190393:
{
returnValue = F("Klöpfstr.");
break;
}
case 190394:
{
returnValue = F("Klöppchen");
break;
}
case 190395:
{
returnValue = F("Klöppelflügel");
break;
}
case 190396:
{
returnValue = F("Klöppelsberg");
break;
}
case 190397:
{
returnValue = F("Klöppelschule");
break;
}
case 190398:
{
returnValue = F("Klöppelschulstr.");
break;
}
case 190399:
{
returnValue = F("Klöppelsgasse");
break;
}
case 190400:
{
returnValue = F("Klöppelstiege");
break;
}
case 190401:
{
returnValue = F("Klöppelstr.");
break;
}
case 190402:
{
returnValue = F("Klöppelweg");
break;
}
case 190403:
{
returnValue = F("Klöpperort");
break;
}
case 190404:
{
returnValue = F("Klöpperschneise");
break;
}
case 190405:
{
returnValue = F("Klörather Steg");
break;
}
case 190406:
{
returnValue = F("Klösgeskamp");
break;
}
case 190407:
{
returnValue = F("Klösterle");
break;
}
case 190408:
{
returnValue = F("Klösterlein");
break;
}
case 190409:
{
returnValue = F("Klösterlestr.");
break;
}
case 190410:
{
returnValue = F("Klösterlesträßle");
break;
}
case 190411:
{
returnValue = F("Klösterlesweg");
break;
}
case 190412:
{
returnValue = F("Klösterleweg");
break;
}
case 190413:
{
returnValue = F("Klösterpad");
break;
}
case 190414:
{
returnValue = F("Klöstitzer Weg");
break;
}
case 190415:
{
returnValue = F("Klöstnerstr.");
break;
}
case 190416:
{
returnValue = F("Klöterbarg");
break;
}
case 190417:
{
returnValue = F("Klöterbek");
break;
}
case 190418:
{
returnValue = F("Klöterbusch");
break;
}
case 190419:
{
returnValue = F("Klöterheide");
break;
}
case 190420:
{
returnValue = F("Klöterhörn");
break;
}
case 190421:
{
returnValue = F("Klöterpott");
break;
}
case 190422:
{
returnValue = F("Klöterpottsweg");
break;
}
case 190423:
{
returnValue = F("Klötitzer Str.");
break;
}
case 190424:
{
returnValue = F("Klötitzer Weg");
break;
}
case 190425:
{
returnValue = F("Klötjesweg");
break;
}
case 190426:
{
returnValue = F("Klöttener Weg");
break;
}
case 190427:
{
returnValue = F("Klötterhof");
break;
}
case 190428:
{
returnValue = F("Klötzbergsteige");
break;
}
case 190429:
{
returnValue = F("Klötzbuckelweg");
break;
}
case 190430:
{
returnValue = F("Klötzenhornweg");
break;
}
case 190431:
{
returnValue = F("Klötzer Chaussee");
break;
}
case 190432:
{
returnValue = F("Klötzer Str.");
break;
}
case 190433:
{
returnValue = F("Klötzer Weg");
break;
}
case 190434:
{
returnValue = F("Klötzerplan");
break;
}
case 190435:
{
returnValue = F("Klötzerstr.");
break;
}
case 190436:
{
returnValue = F("Klötzerweg");
break;
}
case 190437:
{
returnValue = F("Klötzlamühlweg");
break;
}
case 190438:
{
returnValue = F("Klötzle");
break;
}
case 190439:
{
returnValue = F("Klötzleweg");
break;
}
case 190440:
{
returnValue = F("Klötzlmüllerstr.");
break;
}
case 190441:
{
returnValue = F("Klötzweg");
break;
}
case 190442:
{
returnValue = F("Klövekorns Helle");
break;
}
case 190443:
{
returnValue = F("Klövekornstr.");
break;
}
case 190444:
{
returnValue = F("Klövensteen");
break;
}
case 190445:
{
returnValue = F("Klöverstücken");
break;
}
case 190446:
{
returnValue = F("Klövinghausen");
break;
}
case 190447:
{
returnValue = F("Klückenhofstr.");
break;
}
case 190448:
{
returnValue = F("Klüdener Str.");
break;
}
case 190449:
{
returnValue = F("Klüferstr.");
break;
}
case 190450:
{
returnValue = F("Klüft");
break;
}
case 190451:
{
returnValue = F("Klüftel");
break;
}
case 190452:
{
returnValue = F("Klüftelweg");
break;
}
case 190453:
{
returnValue = F("Klühnmarkt");
break;
}
case 190454:
{
returnValue = F("Klümoorsweg");
break;
}
case 190455:
{
returnValue = F("Klümpenweg");
break;
}
case 190456:
{
returnValue = F("Klümperstr.");
break;
}
case 190457:
{
returnValue = F("Klümpken");
break;
}
case 190458:
{
returnValue = F("Klünderbach");
break;
}
case 190459:
{
returnValue = F("Klünderberg");
break;
}
case 190460:
{
returnValue = F("Klünenberg");
break;
}
case 190461:
{
returnValue = F("Klünersweg");
break;
}
case 190462:
{
returnValue = F("Klüngelkamp");
break;
}
case 190463:
{
returnValue = F("Klünig");
break;
}
case 190464:
{
returnValue = F("Klünnersholz");
break;
}
case 190465:
{
returnValue = F("Klünnerskamp");
break;
}
case 190466:
{
returnValue = F("Klünstr.");
break;
}
case 190467:
{
returnValue = F("Klüppelkamp");
break;
}
case 190468:
{
returnValue = F("Klüppelstr.");
break;
}
case 190469:
{
returnValue = F("Klüschenberg");
break;
}
case 190470:
{
returnValue = F("Klüschenberggrund");
break;
}
case 190471:
{
returnValue = F("Klüschenbergstr.");
break;
}
case 190472:
{
returnValue = F("Klüschenweg");
break;
}
case 190473:
{
returnValue = F("Klüsenborn");
break;
}
case 190474:
{
returnValue = F("Klüskoppel");
break;
}
case 190475:
{
returnValue = F("Klüsserather Bergweg");
break;
}
case 190476:
{
returnValue = F("Klüsserather Str.");
break;
}
case 190477:
{
returnValue = F("Klüster");
break;
}
case 190478:
{
returnValue = F("Klütenblock");
break;
}
case 190479:
{
returnValue = F("Klütenstieg");
break;
}
case 190480:
{
returnValue = F("Klüter Heide");
break;
}
case 190481:
{
returnValue = F("Klüter Str.");
break;
}
case 190482:
{
returnValue = F("Klüterfeld");
break;
}
case 190483:
{
returnValue = F("Klüterstr.");
break;
}
case 190484:
{
returnValue = F("Klütschpfad");
break;
}
case 190485:
{
returnValue = F("Klütstr.");
break;
}
case 190486:
{
returnValue = F("Klüttenweg");
break;
}
case 190487:
{
returnValue = F("Klütters-Stiege");
break;
}
case 190488:
{
returnValue = F("Klütweg");
break;
}
case 190489:
{
returnValue = F("Klützer Stadtgarten");
break;
}
case 190490:
{
returnValue = F("Klützer Str.");
break;
}
case 190491:
{
returnValue = F("Klüver Kamp");
break;
}
case 190492:
{
returnValue = F("Klüverbaum");
break;
}
case 190493:
{
returnValue = F("Klüßenberg");
break;
}
case 190494:
{
returnValue = F("Klüßer Mühle");
break;
}
case 190495:
{
returnValue = F("Klüßer Str.");
break;
}
case 190496:
{
returnValue = F("Kmehlener Str.");
break;
}
case 190497:
{
returnValue = F("Knaacksche Koppel");
break;
}
case 190498:
{
returnValue = F("Knabbachweg");
break;
}
case 190499:
{
returnValue = F("Knabbeleweg");
break;
}
case 190500:
{
returnValue = F("Knabbenweg");
break;
}
case 190501:
{
returnValue = F("Knabelgutstr.");
break;
}
case 190502:
{
returnValue = F("Knabenbach");
break;
}
case 190503:
{
returnValue = F("Knabenburg");
break;
}
case 190504:
{
returnValue = F("Knabenkrautstr.");
break;
}
case 190505:
{
returnValue = F("Knabenkrautweg");
break;
}
case 190506:
{
returnValue = F("Knabenstieg");
break;
}
case 190507:
{
returnValue = F("Knabenweg");
break;
}
case 190508:
{
returnValue = F("Knaberkrautweg");
break;
}
case 190509:
{
returnValue = F("Knabweg");
break;
}
case 190510:
{
returnValue = F("Knackenberg");
break;
}
case 190511:
{
returnValue = F("Knackenburg");
break;
}
case 190512:
{
returnValue = F("Knackendöffelstr.");
break;
}
case 190513:
{
returnValue = F("Knackstedts Kamp");
break;
}
case 190514:
{
returnValue = F("Knackweg");
break;
}
case 190515:
{
returnValue = F("Knakenburg");
break;
}
case 190516:
{
returnValue = F("Knakenbörg");
break;
}
case 190517:
{
returnValue = F("Knakenhof");
break;
}
case 190518:
{
returnValue = F("Knakenstr.");
break;
}
case 190519:
{
returnValue = F("Knakes Kiel");
break;
}
case 190520:
{
returnValue = F("Knallenbrink");
break;
}
case 190521:
{
returnValue = F("Knallhütter Str.");
break;
}
case 190522:
{
returnValue = F("Knapendorfer Weg");
break;
}
case 190523:
{
returnValue = F("Knapp");
break;
}
case 190524:
{
returnValue = F("Knappe Gasse");
break;
}
case 190525:
{
returnValue = F("Knappen Berg");
break;
}
case 190526:
{
returnValue = F("Knappenberg");
break;
}
case 190527:
{
returnValue = F("Knappenbergstr.");
break;
}
case 190528:
{
returnValue = F("Knappenbergweg");
break;
}
case 190529:
{
returnValue = F("Knappenborngasse");
break;
}
case 190530:
{
returnValue = F("Knappenburg");
break;
}
case 190531:
{
returnValue = F("Knappenburger Weg");
break;
}
case 190532:
{
returnValue = F("Knappengasse");
break;
}
case 190533:
{
returnValue = F("Knappenhäusl");
break;
}
case 190534:
{
returnValue = F("Knappenhöfe");
break;
}
case 190535:
{
returnValue = F("Knappenleite");
break;
}
case 190536:
{
returnValue = F("Knappensprung");
break;
}
case 190537:
{
returnValue = F("Knappensteig");
break;
}
case 190538:
{
returnValue = F("Knappenstiege");
break;
}
case 190539:
{
returnValue = F("Knappenstr.");
break;
}
case 190540:
{
returnValue = F("Knappenwaldweg");
break;
}
case 190541:
{
returnValue = F("Knappenweg");
break;
}
case 190542:
{
returnValue = F("Knapper Str.");
break;
}
case 190543:
{
returnValue = F("Knapper Weg");
break;
}
case 190544:
{
returnValue = F("Knapperei");
break;
}
case 190545:
{
returnValue = F("Knappertsbuschstr.");
break;
}
case 190546:
{
returnValue = F("Knappheide");
break;
}
case 190547:
{
returnValue = F("Knappsbrink");
break;
}
case 190548:
{
returnValue = F("Knappschaft-Str.");
break;
}
case 190549:
{
returnValue = F("Knappschaftsallee");
break;
}
case 190550:
{
returnValue = F("Knappschaftshof");
break;
}
case 190551:
{
returnValue = F("Knappschaftsstr.");
break;
}
case 190552:
{
returnValue = F("Knappschaftstr.");
break;
}
case 190553:
{
returnValue = F("Knappschaftsweg");
break;
}
case 190554:
{
returnValue = F("Knappstockberg");
break;
}
case 190555:
{
returnValue = F("Knappstr.");
break;
}
case 190556:
{
returnValue = F("Knappweg");
break;
}
case 190557:
{
returnValue = F("Knapsackstr.");
break;
}
case 190558:
{
returnValue = F("Knapsbrink");
break;
}
case 190559:
{
returnValue = F("Knapshusenweg");
break;
}
case 190560:
{
returnValue = F("Knarrberg");
break;
}
case 190561:
{
returnValue = F("Knarrbergweg");
break;
}
case 190562:
{
returnValue = F("Knarrhügel");
break;
}
case 190563:
{
returnValue = F("Knastwinkel");
break;
}
case 190564:
{
returnValue = F("Knatenser Weg");
break;
}
case 190565:
{
returnValue = F("Knaudenheimer Str.");
break;
}
case 190566:
{
returnValue = F("Knaudtstr.");
break;
}
case 190567:
{
returnValue = F("Knauer");
break;
}
case 190568:
{
returnValue = F("Knauerliebweg");
break;
}
case 190569:
{
returnValue = F("Knauffstr.");
break;
}
case 190570:
{
returnValue = F("Knaufgasse");
break;
}
case 190571:
{
returnValue = F("Knaufmühle");
break;
}
case 190572:
{
returnValue = F("Knaufspescher Str.");
break;
}
case 190573:
{
returnValue = F("Knaufstr.");
break;
}
case 190574:
{
returnValue = F("Knaumühlenweg");
break;
}
case 190575:
{
returnValue = F("Knaupengässle");
break;
}
case 190576:
{
returnValue = F("Knaupenweg");
break;
}
case 190577:
{
returnValue = F("Knaupes");
break;
}
case 190578:
{
returnValue = F("Knaupscher Weg");
break;
}
case 190579:
{
returnValue = F("Knausbergsteige");
break;
}
case 190580:
{
returnValue = F("Knausbergstr.");
break;
}
case 190581:
{
returnValue = F("Knausche Str.");
break;
}
case 190582:
{
returnValue = F("Knausholzer Str.");
break;
}
case 190583:
{
returnValue = F("Knausstr.");
break;
}
case 190584:
{
returnValue = F("Knautgasse");
break;
}
case 190585:
{
returnValue = F("Knautnaundorfer Weg");
break;
}
case 190586:
{
returnValue = F("Knauzengracht");
break;
}
case 190587:
{
returnValue = F("Knebelbornerweg");
break;
}
case 190588:
{
returnValue = F("Knebelpforte");
break;
}
case 190589:
{
returnValue = F("Knebelseckweg");
break;
}
case 190590:
{
returnValue = F("Knebelshorst");
break;
}
case 190591:
{
returnValue = F("Knebelstorfer Weg");
break;
}
case 190592:
{
returnValue = F("Knebelstr.");
break;
}
case 190593:
{
returnValue = F("Knebelweg");
break;
}
case 190594:
{
returnValue = F("Knebis");
break;
}
case 190595:
{
returnValue = F("Kneblersgasse");
break;
}
case 190596:
{
returnValue = F("Kneblinghauser Weg");
break;
}
case 190597:
{
returnValue = F("Knebuschstieg");
break;
}
case 190598:
{
returnValue = F("Knechtdamm");
break;
}
case 190599:
{
returnValue = F("Knechtenberg");
break;
}
case 190600:
{
returnValue = F("Knechtenweg");
break;
}
case 190601:
{
returnValue = F("Knechtlstr.");
break;
}
case 190602:
{
returnValue = F("Knechtsand");
break;
}
case 190603:
{
returnValue = F("Knechtsbachtal");
break;
}
case 190604:
{
returnValue = F("Knechtstedener Str.");
break;
}
case 190605:
{
returnValue = F("Knechtsteder Weg");
break;
}
case 190606:
{
returnValue = F("Knechtsteeg");
break;
}
case 190607:
{
returnValue = F("Knechtstr.");
break;
}
case 190608:
{
returnValue = F("Knechtsäcker");
break;
}
case 190609:
{
returnValue = F("Kneebuschweg");
break;
}
case 190610:
{
returnValue = F("Kneeden");
break;
}
case 190611:
{
returnValue = F("Kneeheide");
break;
}
case 190612:
{
returnValue = F("Kneeser Str.");
break;
}
case 190613:
{
returnValue = F("Kneeser Str. Groß Thurow");
break;
}
case 190614:
{
returnValue = F("Kneeser Str. Roggendorf");
break;
}
case 190615:
{
returnValue = F("Knefelskamp");
break;
}
case 190616:
{
returnValue = F("Knefferbek");
break;
}
case 190617:
{
returnValue = F("Knegendorf");
break;
}
case 190618:
{
returnValue = F("Knehdener Str.");
break;
}
case 190619:
{
returnValue = F("Kneheimer Str.");
break;
}
case 190620:
{
returnValue = F("Kneheimer Weg");
break;
}
case 190621:
{
returnValue = F("Knehems Garten");
break;
}
case 190622:
{
returnValue = F("Kneibengraben");
break;
}
case 190623:
{
returnValue = F("Kneibenweg");
break;
}
case 190624:
{
returnValue = F("Kneiblitzweg");
break;
}
case 190625:
{
returnValue = F("Kneifelspitzweg");
break;
}
case 190626:
{
returnValue = F("Kneinstr.");
break;
}
case 190627:
{
returnValue = F("Kneipbecken Oberwerrn");
break;
}
case 190628:
{
returnValue = F("Kneiperdor");
break;
}
case 190629:
{
returnValue = F("Kneipp - Rundweg");
break;
}
case 190630:
{
returnValue = F("Kneipp Anlage");
break;
}
case 190631:
{
returnValue = F("Kneipp'scher Barfußpfad");
break;
}
case 190632:
{
returnValue = F("Kneipp-Aktiv-Park");
break;
}
case 190633:
{
returnValue = F("Kneipp-Anlage");
break;
}
case 190634:
{
returnValue = F("Kneipp-Anlage Gonbach");
break;
}
case 190635:
{
returnValue = F("Kneipp-Gesundheitsanlage");
break;
}
case 190636:
{
returnValue = F("Kneipp-Kuranlage Arenarisquelle");
break;
}
case 190637:
{
returnValue = F("Kneippallee");
break;
}
case 190638:
{
returnValue = F("Kneippanlage");
break;
}
case 190639:
{
returnValue = F("Kneippanlage Heiertalbrücke");
break;
}
case 190640:
{
returnValue = F("Kneippanlage Ilminsel");
break;
}
case 190641:
{
returnValue = F("Kneippanlage Kalte Quelle (9°)");
break;
}
case 190642:
{
returnValue = F("Kneippanlage Mühlbuch");
break;
}
case 190643:
{
returnValue = F("Kneippanlage Ostpark (16°)");
break;
}
case 190644:
{
returnValue = F("Kneippanlage Schöneschacher Str. (14°)");
break;
}
case 190645:
{
returnValue = F("Kneippanlage Stockheimer Gesundheitsschwert");
break;
}
case 190646:
{
returnValue = F("Kneippanlage bei Schlingen (14°)");
break;
}
case 190647:
{
returnValue = F("Kneippanlage im Lechpark Pössinger Au");
break;
}
case 190648:
{
returnValue = F("Kneippanlage und Garten der Sinne");
break;
}
case 190649:
{
returnValue = F("Kneippanlagezutritt");
break;
}
case 190650:
{
returnValue = F("Kneippbad Aufen");
break;
}
case 190651:
{
returnValue = F("Kneippbecken");
break;
}
case 190652:
{
returnValue = F("Kneippring");
break;
}
case 190653:
{
returnValue = F("Kneippsgasse");
break;
}
case 190654:
{
returnValue = F("Kneippstr.");
break;
}
case 190655:
{
returnValue = F("Kneipptretbecken");
break;
}
case 190656:
{
returnValue = F("Kneippweg");
break;
}
case 190657:
{
returnValue = F("Kneipstr.");
break;
}
case 190658:
{
returnValue = F("Kneistinger Str.");
break;
}
case 190659:
{
returnValue = F("Kneitinger Weiher");
break;
}
case 190660:
{
returnValue = F("Kneißlstr.");
break;
}
case 190661:
{
returnValue = F("Knellendorf");
break;
}
case 190662:
{
returnValue = F("Kneppchensweg");
break;
}
case 190663:
{
returnValue = F("Kneppelbergstr.");
break;
}
case 190664:
{
returnValue = F("Kneppergasse");
break;
}
case 190665:
{
returnValue = F("Kneppers Gäßchen");
break;
}
case 190666:
{
returnValue = F("Knesberich");
break;
}
case 190667:
{
returnValue = F("Knesebeckbrücke");
break;
}
case 190668:
{
returnValue = F("Knesebecker Str.");
break;
}
case 190669:
{
returnValue = F("Knesebecker Weg");
break;
}
case 190670:
{
returnValue = F("Knesebeckstr.");
break;
}
case 190671:
{
returnValue = F("Knesestr.");
break;
}
case 190672:
{
returnValue = F("Knesheckenweg");
break;
}
case 190673:
{
returnValue = F("Knesinger Str.");
break;
}
case 190674:
{
returnValue = F("Kneteisen");
break;
}
case 190675:
{
returnValue = F("Kneter Sand");
break;
}
case 190676:
{
returnValue = F("Knets Kamp");
break;
}
case 190677:
{
returnValue = F("Knetterhauser Str.");
break;
}
case 190678:
{
returnValue = F("Knetzbergstr.");
break;
}
case 190679:
{
returnValue = F("Kneuelweg");
break;
}
case 190680:
{
returnValue = F("Kneusgenweg");
break;
}
case 190681:
{
returnValue = F("Knibbeshof");
break;
}
case 190682:
{
returnValue = F("Knick");
break;
}
case 190683:
{
returnValue = F("Knickberg");
break;
}
case 190684:
{
returnValue = F("Knickbornstr.");
break;
}
case 190685:
{
returnValue = F("Knickbuschweg");
break;
}
case 190686:
{
returnValue = F("Knickebrink");
break;
}
case 190687:
{
returnValue = F("Knickelbergstr.");
break;
}
case 190688:
{
returnValue = F("Knickelsdorf");
break;
}
case 190689:
{
returnValue = F("Knickenau");
break;
}
case 190690:
{
returnValue = F("Knickenderweide");
break;
}
case 190691:
{
returnValue = F("Knickenhagen");
break;
}
case 190692:
{
returnValue = F("Knickenhagenschneise");
break;
}
case 190693:
{
returnValue = F("Knickenhöfle");
break;
}
case 190694:
{
returnValue = F("Knickenwaldweg");
break;
}
case 190695:
{
returnValue = F("Knickerbusch");
break;
}
case 190696:
{
returnValue = F("Knickerweg");
break;
}
case 190697:
{
returnValue = F("Knickfeld");
break;
}
case 190698:
{
returnValue = F("Knickgasse");
break;
}
case 190699:
{
returnValue = F("Knickhagen");
break;
}
case 190700:
{
returnValue = F("Knickhagener Weg");
break;
}
case 190701:
{
returnValue = F("Knickhof");
break;
}
case 190702:
{
returnValue = F("Knickhörn");
break;
}
case 190703:
{
returnValue = F("Knickhütte");
break;
}
case 190704:
{
returnValue = F("Knickkamp");
break;
}
case 190705:
{
returnValue = F("Knickmühlenstr.");
break;
}
case 190706:
{
returnValue = F("Knickpromenade");
break;
}
case 190707:
{
returnValue = F("Knickrehm");
break;
}
case 190708:
{
returnValue = F("Knicksiek");
break;
}
case 190709:
{
returnValue = F("Knickstr.");
break;
}
case 190710:
{
returnValue = F("Knicksweg");
break;
}
case 190711:
{
returnValue = F("Knickswiese");
break;
}
case 190712:
{
returnValue = F("Knicktwiete");
break;
}
case 190713:
{
returnValue = F("Knickwall");
break;
}
case 190714:
{
returnValue = F("Knickweg");
break;
}
case 190715:
{
returnValue = F("Knickwisch");
break;
}
case 190716:
{
returnValue = F("Knieacker");
break;
}
case 190717:
{
returnValue = F("Kniebachweg");
break;
}
case 190718:
{
returnValue = F("Kniebelerpark");
break;
}
case 190719:
{
returnValue = F("Kniebelerstr.");
break;
}
case 190720:
{
returnValue = F("Knieberg");
break;
}
case 190721:
{
returnValue = F("Kniebergstr.");
break;
}
case 190722:
{
returnValue = F("Kniebigweg");
break;
}
case 190723:
{
returnValue = F("Kniebingweg");
break;
}
case 190724:
{
returnValue = F("Kniebis");
break;
}
case 190725:
{
returnValue = F("Kniebisgründle");
break;
}
case 190726:
{
returnValue = F("Kniebisstr.");
break;
}
case 190727:
{
returnValue = F("Kniebissträßle");
break;
}
case 190728:
{
returnValue = F("Kniebisweg");
break;
}
case 190729:
{
returnValue = F("Kniebos");
break;
}
case 190730:
{
returnValue = F("Kniebrech");
break;
}
case 190731:
{
returnValue = F("Kniebreche");
break;
}
case 190732:
{
returnValue = F("Kniebrecher");
break;
}
case 190733:
{
returnValue = F("Kniebrecherweg");
break;
}
case 190734:
{
returnValue = F("Kniebrecheweg");
break;
}
case 190735:
{
returnValue = F("Kniebrechtstr.");
break;
}
case 190736:
{
returnValue = F("Kniebrechweg");
break;
}
case 190737:
{
returnValue = F("Kniebuschweg");
break;
}
case 190738:
{
returnValue = F("Kniegasse");
break;
}
case 190739:
{
returnValue = F("Knielohpark");
break;
}
case 190740:
{
returnValue = F("Knielohstr.");
break;
}
case 190741:
{
returnValue = F("Knielstr.");
break;
}
case 190742:
{
returnValue = F("Knielweg");
break;
}
case 190743:
{
returnValue = F("Kniendorfer Weg");
break;
}
case 190744:
{
returnValue = F("Kniep");
break;
}
case 190745:
{
returnValue = F("Kniepen");
break;
}
case 190746:
{
returnValue = F("Kniepenbarg");
break;
}
case 190747:
{
returnValue = F("Kniepenburg");
break;
}
case 190748:
{
returnValue = F("Kniepenkamp");
break;
}
case 190749:
{
returnValue = F("Kniepenort");
break;
}
case 190750:
{
returnValue = F("Knieperdamm");
break;
}
case 190751:
{
returnValue = F("Knieperstr.");
break;
}
case 190752:
{
returnValue = F("Knieperwall");
break;
}
case 190753:
{
returnValue = F("Kniepgang");
break;
}
case 190754:
{
returnValue = F("Kniepow");
break;
}
case 190755:
{
returnValue = F("Kniepsand");
break;
}
case 190756:
{
returnValue = F("Kniepsoll");
break;
}
case 190757:
{
returnValue = F("Kniepstr.");
break;
}
case 190758:
{
returnValue = F("Kniepweg");
break;
}
case 190759:
{
returnValue = F("Kniepwieke");
break;
}
case 190760:
{
returnValue = F("Knierimsdelle");
break;
}
case 190761:
{
returnValue = F("Knieschnaepperle");
break;
}
case 190762:
{
returnValue = F("Knieschnapperweg");
break;
}
case 190763:
{
returnValue = F("Knieschneise");
break;
}
case 190764:
{
returnValue = F("Kniesegarten");
break;
}
case 190765:
{
returnValue = F("Knieselweg");
break;
}
case 190766:
{
returnValue = F("Kniestedter Buschweg");
break;
}
case 190767:
{
returnValue = F("Kniestedtstr.");
break;
}
case 190768:
{
returnValue = F("Kniesteige");
break;
}
case 190769:
{
returnValue = F("Kniesteinweg");
break;
}
case 190770:
{
returnValue = F("Kniestr.");
break;
}
case 190771:
{
returnValue = F("Knietschstr.");
break;
}
case 190772:
{
returnValue = F("Knietschweg");
break;
}
case 190773:
{
returnValue = F("Knieweg");
break;
}
case 190774:
{
returnValue = F("Kniewiesenstr.");
break;
}
case 190775:
{
returnValue = F("Knießensgasse");
break;
}
case 190776:
{
returnValue = F("Kniggenbrink");
break;
}
case 190777:
{
returnValue = F("Kniggenstr.");
break;
}
case 190778:
{
returnValue = F("Knill");
break;
}
case 190779:
{
returnValue = F("Kningelbach");
break;
}
case 190780:
{
returnValue = F("Kninkenbarg");
break;
}
case 190781:
{
returnValue = F("Knipfelesweg");
break;
}
case 190782:
{
returnValue = F("Knipferstr.");
break;
}
case 190783:
{
returnValue = F("Knipflbergerstr.");
break;
}
case 190784:
{
returnValue = F("Kniphagener Weg");
break;
}
case 190785:
{
returnValue = F("Kniphauser Deich");
break;
}
case 190786:
{
returnValue = F("Kniphauser Str.");
break;
}
case 190787:
{
returnValue = F("Kniphauser Weg");
break;
}
case 190788:
{
returnValue = F("Kniphauserwald");
break;
}
case 190789:
{
returnValue = F("Knippchen");
break;
}
case 190790:
{
returnValue = F("Knippe");
break;
}
case 190791:
{
returnValue = F("Knippe Jässje");
break;
}
case 190792:
{
returnValue = F("Knippejässje");
break;
}
case 190793:
{
returnValue = F("Knippelingstr.");
break;
}
case 190794:
{
returnValue = F("Knippelkamp");
break;
}
case 190795:
{
returnValue = F("Knippelkuhle");
break;
}
case 190796:
{
returnValue = F("Knippelsdorf Siedlung");
break;
}
case 190797:
{
returnValue = F("Knippelsdorfer Weg");
break;
}
case 190798:
{
returnValue = F("Knippenberg");
break;
}
case 190799:
{
returnValue = F("Knippenbergstr.");
break;
}
case 190800:
{
returnValue = F("Knippenweg");
break;
}
case 190801:
{
returnValue = F("Knipperstr.");
break;
}
case 190802:
{
returnValue = F("Knipperweg");
break;
}
case 190803:
{
returnValue = F("Knippgarten");
break;
}
case 190804:
{
returnValue = F("Knippingweg");
break;
}
case 190805:
{
returnValue = F("Knippmühle");
break;
}
case 190806:
{
returnValue = F("Knipprather Str.");
break;
}
case 190807:
{
returnValue = F("Knippschildstr.");
break;
}
case 190808:
{
returnValue = F("Knippsgasse");
break;
}
case 190809:
{
returnValue = F("Knippstr.");
break;
}
case 190810:
{
returnValue = F("Knippweg");
break;
}
case 190811:
{
returnValue = F("Kniprodestr.");
break;
}
case 190812:
{
returnValue = F("Knipscherhof");
break;
}
case 190813:
{
returnValue = F("Knipschildstr.");
break;
}
case 190814:
{
returnValue = F("Knipsgasse");
break;
}
case 190815:
{
returnValue = F("Knipweg");
break;
}
case 190816:
{
returnValue = F("Knipweidenbahn");
break;
}
case 190817:
{
returnValue = F("Knirkweg");
break;
}
case 190818:
{
returnValue = F("Knisterbachweg");
break;
}
case 190819:
{
returnValue = F("Knittelbachweg");
break;
}
case 190820:
{
returnValue = F("Knittelholzweg");
break;
}
case 190821:
{
returnValue = F("Knittelsheimer Weg");
break;
}
case 190822:
{
returnValue = F("Knittkuhler Str.");
break;
}
case 190823:
{
returnValue = F("Knittlinger Landstr.");
break;
}
case 190824:
{
returnValue = F("Knittlinger Steige");
break;
}
case 190825:
{
returnValue = F("Knittlinger Str.");
break;
}
case 190826:
{
returnValue = F("Knittlinger Weg");
break;
}
case 190827:
{
returnValue = F("Knittswiesen");
break;
}
case 190828:
{
returnValue = F("Knivsbergring");
break;
}
case 190829:
{
returnValue = F("Knobbenallee");
break;
}
case 190830:
{
returnValue = F("Knobbenhof");
break;
}
case 190831:
{
returnValue = F("Knobbenkamp");
break;
}
case 190832:
{
returnValue = F("Knobbenweg");
break;
}
case 190833:
{
returnValue = F("Knobelacker");
break;
}
case 190834:
{
returnValue = F("Knobelsdorf");
break;
}
case 190835:
{
returnValue = F("Knobelsdorfer Str.");
break;
}
case 190836:
{
returnValue = F("Knobelsdorffallee");
break;
}
case 190837:
{
returnValue = F("Knobelsdorffstr.");
break;
}
case 190838:
{
returnValue = F("Knobelsdorffweg");
break;
}
case 190839:
{
returnValue = F("Knobelsweg");
break;
}
case 190840:
{
returnValue = F("Knobelweg");
break;
}
case 190841:
{
returnValue = F("Knobenesch");
break;
}
case 190842:
{
returnValue = F("Knobigasse");
break;
}
case 190843:
{
returnValue = F("Knoblaucher Str.");
break;
}
case 190844:
{
returnValue = F("Knoblaucher Weg");
break;
}
case 190845:
{
returnValue = F("Knoblauchgasse");
break;
}
case 190846:
{
returnValue = F("Knoblauchsberg");
break;
}
case 190847:
{
returnValue = F("Knoblauchweg");
break;
}
case 190848:
{
returnValue = F("Knoblochweg");
break;
}
case 190849:
{
returnValue = F("Knochenbachstr.");
break;
}
case 190850:
{
returnValue = F("Knochenberg");
break;
}
case 190851:
{
returnValue = F("Knochenbrecherweg");
break;
}
case 190852:
{
returnValue = F("Knochenburgstr.");
break;
}
case 190853:
{
returnValue = F("Knochenhauersgang");
break;
}
case 190854:
{
returnValue = F("Knochenhauerstr.");
break;
}
case 190855:
{
returnValue = F("Knochenhorst");
break;
}
case 190856:
{
returnValue = F("Knochenmühle");
break;
}
case 190857:
{
returnValue = F("Knochenmühlenweg");
break;
}
case 190858:
{
returnValue = F("Knochenpark");
break;
}
case 190859:
{
returnValue = F("Knochenstr.");
break;
}
case 190860:
{
returnValue = F("Knochenweg");
break;
}
case 190861:
{
returnValue = F("Knochenwinkel");
break;
}
case 190862:
{
returnValue = F("Knochstr.");
break;
}
case 190863:
{
returnValue = F("Knock");
break;
}
case 190864:
{
returnValue = F("Knockenwinkel");
break;
}
case 190865:
{
returnValue = F("Knockestr.");
break;
}
case 190866:
{
returnValue = F("Knockster Str.");
break;
}
case 190867:
{
returnValue = F("Knockstr.");
break;
}
case 190868:
{
returnValue = F("Knockweg");
break;
}
case 190869:
{
returnValue = F("Knockäcker");
break;
}
case 190870:
{
returnValue = F("Knoddelgass");
break;
}
case 190871:
{
returnValue = F("Knodelstaffel");
break;
}
case 190872:
{
returnValue = F("Knodener Höhenweg");
break;
}
case 190873:
{
returnValue = F("Knodener Kopfstr.");
break;
}
case 190874:
{
returnValue = F("Knodener Str.");
break;
}
case 190875:
{
returnValue = F("Knodestr.");
break;
}
case 190876:
{
returnValue = F("Knodzstr.");
break;
}
case 190877:
{
returnValue = F("Knoellingerstr.");
break;
}
case 190878:
{
returnValue = F("Knogelstr.");
break;
}
case 190879:
{
returnValue = F("Knoglerstr.");
break;
}
case 190880:
{
returnValue = F("Knoglerweg");
break;
}
case 190881:
{
returnValue = F("Knoglweg");
break;
}
case 190882:
{
returnValue = F("Knogshof");
break;
}
case 190883:
{
returnValue = F("Knohllweg");
break;
}
case 190884:
{
returnValue = F("Knoileweg");
break;
}
case 190885:
{
returnValue = F("Knokenriehe");
break;
}
case 190886:
{
returnValue = F("Knoll");
break;
}
case 190887:
{
returnValue = F("Knollbach");
break;
}
case 190888:
{
returnValue = F("Knollen");
break;
}
case 190889:
{
returnValue = F("Knollenberg");
break;
}
case 190890:
{
returnValue = F("Knollendiek");
break;
}
case 190891:
{
returnValue = F("Knollengraben");
break;
}
case 190892:
{
returnValue = F("Knollenhof");
break;
}
case 190893:
{
returnValue = F("Knollenkamp");
break;
}
case 190894:
{
returnValue = F("Knollenkampsweg");
break;
}
case 190895:
{
returnValue = F("Knollenrundweg");
break;
}
case 190896:
{
returnValue = F("Knollenstr.");
break;
}
case 190897:
{
returnValue = F("Knollenweg");
break;
}
case 190898:
{
returnValue = F("Knollenwiese");
break;
}
case 190899:
{
returnValue = F("Knoller Teichstr.");
break;
}
case 190900:
{
returnValue = F("Knollerweg");
break;
}
case 190901:
{
returnValue = F("Knollnburger Pröllersteig");
break;
}
case 190902:
{
returnValue = F("Knolls Wiesen");
break;
}
case 190903:
{
returnValue = F("Knollsgasse");
break;
}
case 190904:
{
returnValue = F("Knollstr.");
break;
}
case 190905:
{
returnValue = F("Knollweg");
break;
}
case 190906:
{
returnValue = F("Knonweg");
break;
}
case 190907:
{
returnValue = F("Knoop-Schellbach-Str.");
break;
}
case 190908:
{
returnValue = F("Knooper Dorfstr.");
break;
}
case 190909:
{
returnValue = F("Knooper Landstr.");
break;
}
case 190910:
{
returnValue = F("Knooper Weg");
break;
}
case 190911:
{
returnValue = F("Knoops Kamp");
break;
}
case 190912:
{
returnValue = F("Knoopskamp");
break;
}
case 190913:
{
returnValue = F("Knoopsland");
break;
}
case 190914:
{
returnValue = F("Knoopstr.");
break;
}
case 190915:
{
returnValue = F("Knoopsweg");
break;
}
case 190916:
{
returnValue = F("Knoopweg");
break;
}
case 190917:
{
returnValue = F("Knopensteg");
break;
}
case 190918:
{
returnValue = F("Knopfgasse");
break;
}
case 190919:
{
returnValue = F("Knopfhof");
break;
}
case 190920:
{
returnValue = F("Knopfmacherweg");
break;
}
case 190921:
{
returnValue = F("Knopfstr.");
break;
}
case 190922:
{
returnValue = F("Knopfweg");
break;
}
case 190923:
{
returnValue = F("Knopheider Weg");
break;
}
case 190924:
{
returnValue = F("Knopp");
break;
}
case 190925:
{
returnValue = F("Knopper Weg");
break;
}
case 190926:
{
returnValue = F("Knopperbrück");
break;
}
case 190927:
{
returnValue = F("Knoppstr.");
break;
}
case 190928:
{
returnValue = F("Knopsberg");
break;
}
case 190929:
{
returnValue = F("Knopshof");
break;
}
case 190930:
{
returnValue = F("Knopsstr.");
break;
}
case 190931:
{
returnValue = F("Knopsweg");
break;
}
case 190932:
{
returnValue = F("Knorburger Str.");
break;
}
case 190933:
{
returnValue = F("Knorpeliger Steinweg");
break;
}
case 190934:
{
returnValue = F("Knorpp-Allee");
break;
}
case 190935:
{
returnValue = F("Knorr-von-Rosenroth-Str.");
break;
}
case 190936:
{
returnValue = F("Knorre");
break;
}
case 190937:
{
returnValue = F("Knorreichenstieg");
break;
}
case 190938:
{
returnValue = F("Knorrenbergstr.");
break;
}
case 190939:
{
returnValue = F("Knorrenkamp");
break;
}
case 190940:
{
returnValue = F("Knorrenweg");
break;
}
case 190941:
{
returnValue = F("Knorrgrund");
break;
}
case 190942:
{
returnValue = F("Knorrhof");
break;
}
case 190943:
{
returnValue = F("Knorrstr.");
break;
}
case 190944:
{
returnValue = F("Knorrsweg");
break;
}
case 190945:
{
returnValue = F("Knorrweg");
break;
}
case 190946:
{
returnValue = F("Knorscheider Str.");
break;
}
case 190947:
{
returnValue = F("Knorweg");
break;
}
case 190948:
{
returnValue = F("Knorzbühlweg");
break;
}
case 190949:
{
returnValue = F("Knorzgarten");
break;
}
case 190950:
{
returnValue = F("Knoschenweg");
break;
}
case 190951:
{
returnValue = F("Knosenschneise");
break;
}
case 190952:
{
returnValue = F("Knospenweg");
break;
}
case 190953:
{
returnValue = F("Knospstr.");
break;
}
case 190954:
{
returnValue = F("Knotenfeldweg");
break;
}
case 190955:
{
returnValue = F("Knotenstieg");
break;
}
case 190956:
{
returnValue = F("Knotenstr.");
break;
}
case 190957:
{
returnValue = F("Knotenweg");
break;
}
case 190958:
{
returnValue = F("Knothgasse");
break;
}
case 190959:
{
returnValue = F("Knotstr.");
break;
}
case 190960:
{
returnValue = F("Knottenberg");
break;
}
case 190961:
{
returnValue = F("Knottengasse");
break;
}
case 190962:
{
returnValue = F("Knottenhof");
break;
}
case 190963:
{
returnValue = F("Knottenstr.");
break;
}
case 190964:
{
returnValue = F("Knottenöd");
break;
}
case 190965:
{
returnValue = F("Knotterkamp");
break;
}
case 190966:
{
returnValue = F("Knottrain");
break;
}
case 190967:
{
returnValue = F("Knud-Laward-Str.");
break;
}
case 190968:
{
returnValue = F("Knud-Rasmussen-Str.");
break;
}
case 190969:
{
returnValue = F("Knud-Rasmussen-Weg");
break;
}
case 190970:
{
returnValue = F("Knudelweg");
break;
}
case 190971:
{
returnValue = F("Knudsteen");
break;
}
case 190972:
{
returnValue = F("Knudtsenweg");
break;
}
case 190973:
{
returnValue = F("Knufbachstr.");
break;
}
case 190974:
{
returnValue = F("Knufstr.");
break;
}
case 190975:
{
returnValue = F("Knulenweg");
break;
}
case 190976:
{
returnValue = F("Knullkes Weg");
break;
}
case 190977:
{
returnValue = F("Knupfertal");
break;
}
case 190978:
{
returnValue = F("Knuppelweg");
break;
}
case 190979:
{
returnValue = F("Knuppertstr.");
break;
}
case 190980:
{
returnValue = F("Knupperweg");
break;
}
case 190981:
{
returnValue = F("Knuppweg");
break;
}
case 190982:
{
returnValue = F("Knurberger Weg");
break;
}
case 190983:
{
returnValue = F("Knurren");
break;
}
case 190984:
{
returnValue = F("Knusterweg");
break;
}
case 190985:
{
returnValue = F("Knusthöhe");
break;
}
case 190986:
{
returnValue = F("Knuthstr.");
break;
}
case 190987:
{
returnValue = F("Knuttenberg");
break;
}
case 190988:
{
returnValue = F("Knuttenbrink");
break;
}
case 190989:
{
returnValue = F("Knuttweg");
break;
}
case 190990:
{
returnValue = F("Knutzenweg");
break;
}
case 190991:
{
returnValue = F("Knutzweg");
break;
}
case 190992:
{
returnValue = F("Knyphausenstr.");
break;
}
case 190993:
{
returnValue = F("Knäckerderp");
break;
}
case 190994:
{
returnValue = F("Knäppenstr.");
break;
}
case 190995:
{
returnValue = F("Knäppken");
break;
}
case 190996:
{
returnValue = F("Knäpplenshof");
break;
}
case 190997:
{
returnValue = F("Knäuper Weg");
break;
}
case 190998:
{
returnValue = F("Knöbelweg");
break;
}
case 190999:
{
returnValue = F("Knöbling");
break;
}
case 191000:
{
returnValue = F("Knöchelsöhren");
break;
}
case 191001:
{
returnValue = F("Knöchernhorst");
break;
}
case 191002:
{
returnValue = F("Knöckerlgasse");
break;
}
case 191003:
{
returnValue = F("Knöcklestr.");
break;
}
case 191004:
{
returnValue = F("Knödelallee");
break;
}
case 191005:
{
returnValue = F("Knödlergasse");
break;
}
case 191006:
{
returnValue = F("Knöll");
break;
}
case 191007:
{
returnValue = F("Knöllenweg");
break;
}
case 191008:
{
returnValue = F("Knöpflegasse");
break;
}
case 191009:
{
returnValue = F("Knöpflesbrunnen");
break;
}
case 191010:
{
returnValue = F("Knöppelsbornweg");
break;
}
case 191011:
{
returnValue = F("Knöppers Kamp");
break;
}
case 191012:
{
returnValue = F("Knöpperskamp");
break;
}
case 191013:
{
returnValue = F("Knöringenstr.");
break;
}
case 191014:
{
returnValue = F("Knöringer Weg");
break;
}
case 191015:
{
returnValue = F("Knöringerstr.");
break;
}
case 191016:
{
returnValue = F("Knörlpatt");
break;
}
case 191017:
{
returnValue = F("Knörrgasse");
break;
}
case 191018:
{
returnValue = F("Knörstr.");
break;
}
case 191019:
{
returnValue = F("Knöspelen");
break;
}
case 191020:
{
returnValue = F("Knöterich-Stieg");
break;
}
case 191021:
{
returnValue = F("Knöterichweg");
break;
}
case 191022:
{
returnValue = F("Knüelweg");
break;
}
case 191023:
{
returnValue = F("Knükel");
break;
}
case 191024:
{
returnValue = F("Knüll");
break;
}
case 191025:
{
returnValue = F("Knüllbergstr.");
break;
}
case 191026:
{
returnValue = F("Knüllblick");
break;
}
case 191027:
{
returnValue = F("Knüllen");
break;
}
case 191028:
{
returnValue = F("Knüllring");
break;
}
case 191029:
{
returnValue = F("Knüllstr.");
break;
}
case 191030:
{
returnValue = F("Knüllweg");
break;
}
case 191031:
{
returnValue = F("Knülweg");
break;
}
case 191032:
{
returnValue = F("Knüppelbek");
break;
}
case 191033:
{
returnValue = F("Knüppelberg");
break;
}
case 191034:
{
returnValue = F("Knüppelbrücke");
break;
}
case 191035:
{
returnValue = F("Knüppeldamm");
break;
}
case 191036:
{
returnValue = F("Knüppelhof");
break;
}
case 191037:
{
returnValue = F("Knüppelhuus");
break;
}
case 191038:
{
returnValue = F("Knüppelhuusweg");
break;
}
case 191039:
{
returnValue = F("Knüppelsdorfer Weg");
break;
}
case 191040:
{
returnValue = F("Knüppelstiege");
break;
}
case 191041:
{
returnValue = F("Knüppelweg");
break;
}
case 191042:
{
returnValue = F("Knürshaus");
break;
}
case 191043:
{
returnValue = F("Knütgenstr.");
break;
}
case 191044:
{
returnValue = F("Knüttberge");
break;
}
case 191045:
{
returnValue = F("Knüttebühl");
break;
}
case 191046:
{
returnValue = F("Knüttelallee");
break;
}
case 191047:
{
returnValue = F("Knüttelkamp");
break;
}
case 191048:
{
returnValue = F("Knüttenbrink");
break;
}
case 191049:
{
returnValue = F("Knüvenstr.");
break;
}
case 191050:
{
returnValue = F("Knüvenweg");
break;
}
case 191051:
{
returnValue = F("Knüverdarp");
break;
}
case 191052:
{
returnValue = F("Knüvers Eck");
break;
}
case 191053:
{
returnValue = F("Knüversdiek");
break;
}
case 191054:
{
returnValue = F("Koalabärweg");
break;
}
case 191055:
{
returnValue = F("Koaseracker");
break;
}
case 191056:
{
returnValue = F("Koasters Tun");
break;
}
case 191057:
{
returnValue = F("Kobachstr.");
break;
}
case 191058:
{
returnValue = F("Kobachweg");
break;
}
case 191059:
{
returnValue = F("Kobaltplatz");
break;
}
case 191060:
{
returnValue = F("Kobaltstr.");
break;
}
case 191061:
{
returnValue = F("Kobaltweg");
break;
}
case 191062:
{
returnValue = F("Kobbelner Str.");
break;
}
case 191063:
{
returnValue = F("Kobbenser Str.");
break;
}
case 191064:
{
returnValue = F("Kobbenthaler Str.");
break;
}
case 191065:
{
returnValue = F("Kobbenweg");
break;
}
case 191066:
{
returnValue = F("Kobberreihe");
break;
}
case 191067:
{
returnValue = F("Kobel");
break;
}
case 191068:
{
returnValue = F("Kobelesweg");
break;
}
case 191069:
{
returnValue = F("Kobeliusweg");
break;
}
case 191070:
{
returnValue = F("Kobellstr.");
break;
}
case 191071:
{
returnValue = F("Kobellweg");
break;
}
case 191072:
{
returnValue = F("Kobelsbergweg");
break;
}
case 191073:
{
returnValue = F("Kobelstr.");
break;
}
case 191074:
{
returnValue = F("Kobeltstr.");
break;
}
case 191075:
{
returnValue = F("Kobelweg");
break;
}
case 191076:
{
returnValue = F("Kobenbachweg");
break;
}
case 191077:
{
returnValue = F("Kobenborn");
break;
}
case 191078:
{
returnValue = F("Kobeneck");
break;
}
case 191079:
{
returnValue = F("Kobenkamp");
break;
}
case 191080:
{
returnValue = F("Kobenmühle");
break;
}
case 191081:
{
returnValue = F("Koberger Str.");
break;
}
case 191082:
{
returnValue = F("Koberger Weg");
break;
}
case 191083:
{
returnValue = F("Kobergstr.");
break;
}
case 191084:
{
returnValue = F("Kobergweg");
break;
}
case 191085:
{
returnValue = F("Koberhof");
break;
}
case 191086:
{
returnValue = F("Koberleweg");
break;
}
case 191087:
{
returnValue = F("Koberner Weg");
break;
}
case 191088:
{
returnValue = F("Kobersberg");
break;
}
case 191089:
{
returnValue = F("Kobersdorfer Kreisel");
break;
}
case 191090:
{
returnValue = F("Kobersdorfer Ring");
break;
}
case 191091:
{
returnValue = F("Kobershainer Schildbergaufstieg");
break;
}
case 191092:
{
returnValue = F("Kobershainer Str.");
break;
}
case 191093:
{
returnValue = F("Koberstorfer Ring");
break;
}
case 191094:
{
returnValue = F("Koberstr.");
break;
}
case 191095:
{
returnValue = F("Koberstrebe");
break;
}
case 191096:
{
returnValue = F("Koberstädter Str.");
break;
}
case 191097:
{
returnValue = F("Koberweg");
break;
}
case 191098:
{
returnValue = F("Kobes-Derks-Weg");
break;
}
case 191099:
{
returnValue = F("Kobeshofener Str.");
break;
}
case 191100:
{
returnValue = F("Kobesstr.");
break;
}
case 191101:
{
returnValue = F("Kobesweg");
break;
}
case 191102:
{
returnValue = F("Kobitzschwalder Str.");
break;
}
case 191103:
{
returnValue = F("Kobl");
break;
}
case 191104:
{
returnValue = F("Koblberg");
break;
}
case 191105:
{
returnValue = F("Koblentzer Str.");
break;
}
case 191106:
{
returnValue = F("Koblenz-Olper-Str.");
break;
}
case 191107:
{
returnValue = F("Koblenzer Str.");
break;
}
case 191108:
{
returnValue = F("Koblenzer Weg");
break;
}
case 191109:
{
returnValue = F("Koblenzerstr.");
break;
}
case 191110:
{
returnValue = F("Koboldgarten");
break;
}
case 191111:
{
returnValue = F("Koboldsberg");
break;
}
case 191112:
{
returnValue = F("Koboldsteg");
break;
}
case 191113:
{
returnValue = F("Koboldstr.");
break;
}
case 191114:
{
returnValue = F("Koboldweg");
break;
}
case 191115:
{
returnValue = F("Koboltenhof");
break;
}
case 191116:
{
returnValue = F("Kobolzeller Steige");
break;
}
case 191117:
{
returnValue = F("Kobrower Str.");
break;
}
case 191118:
{
returnValue = F("Kobschachtweg");
break;
}
case 191119:
{
returnValue = F("Kobscheider Str.");
break;
}
case 191120:
{
returnValue = F("Kobschütz");
break;
}
case 191121:
{
returnValue = F("Koburger Str.");
break;
}
case 191122:
{
returnValue = F("Kobusstr.");
break;
}
case 191123:
{
returnValue = F("Kobusweg");
break;
}
case 191124:
{
returnValue = F("Koch's Weg");
break;
}
case 191125:
{
returnValue = F("Koch's Wiesen");
break;
}
case 191126:
{
returnValue = F("Koch'scher Markt");
break;
}
case 191127:
{
returnValue = F("Koch-Gotha-Platz");
break;
}
case 191128:
{
returnValue = F("Koch-Sternfeld-Str.");
break;
}
case 191129:
{
returnValue = F("Kochberghang");
break;
}
case 191130:
{
returnValue = F("Kochbrunnenweg");
break;
}
case 191131:
{
returnValue = F("Kochbäckergasse");
break;
}
case 191132:
{
returnValue = F("Kochelberg");
break;
}
case 191133:
{
returnValue = F("Kochelbergstr.");
break;
}
case 191134:
{
returnValue = F("Kocheler Str.");
break;
}
case 191135:
{
returnValue = F("Kochelseering");
break;
}
case 191136:
{
returnValue = F("Kochelseestr.");
break;
}
case 191137:
{
returnValue = F("Kochelseeweg");
break;
}
case 191138:
{
returnValue = F("Kochelstr.");
break;
}
case 191139:
{
returnValue = F("Kochenbacher Str.");
break;
}
case 191140:
{
returnValue = F("Kochenbrunnweg");
break;
}
case 191141:
{
returnValue = F("Kochenbütteler Weg");
break;
}
case 191142:
{
returnValue = F("Kochendorfer Str.");
break;
}
case 191143:
{
returnValue = F("Kochengasse");
break;
}
case 191144:
{
returnValue = F("Kochenheimstr.");
break;
}
case 191145:
{
returnValue = F("Kochenholzstr.");
break;
}
case 191146:
{
returnValue = F("Kochenmattweg");
break;
}
case 191147:
{
returnValue = F("Kochenmühlenstr.");
break;
}
case 191148:
{
returnValue = F("Kochenthal");
break;
}
case 191149:
{
returnValue = F("Kochenthaler Str.");
break;
}
case 191150:
{
returnValue = F("Kocher-Stollen-Str.");
break;
}
case 191151:
{
returnValue = F("Kocherbachweg");
break;
}
case 191152:
{
returnValue = F("Kocherblick");
break;
}
case 191153:
{
returnValue = F("Kochergarten");
break;
}
case 191154:
{
returnValue = F("Kochergasse");
break;
}
case 191155:
{
returnValue = F("Kochergässle");
break;
}
case 191156:
{
returnValue = F("Kocherhangweg");
break;
}
case 191157:
{
returnValue = F("Kocherhof");
break;
}
case 191158:
{
returnValue = F("Kocherntal");
break;
}
case 191159:
{
returnValue = F("Kocherrain");
break;
}
case 191160:
{
returnValue = F("Kochersbergweg");
break;
}
case 191161:
{
returnValue = F("Kochersteinsfelder Str.");
break;
}
case 191162:
{
returnValue = F("Kochersteinstr.");
break;
}
case 191163:
{
returnValue = F("Kocherstettener Str.");
break;
}
case 191164:
{
returnValue = F("Kocherstetter Str.");
break;
}
case 191165:
{
returnValue = F("Kocherstr.");
break;
}
case 191166:
{
returnValue = F("Kochertalblick");
break;
}
case 191167:
{
returnValue = F("Kochertalstr.");
break;
}
case 191168:
{
returnValue = F("Kocherwaldstr.");
break;
}
case 191169:
{
returnValue = F("Kocherweg");
break;
}
case 191170:
{
returnValue = F("Kocherwiesen");
break;
}
case 191171:
{
returnValue = F("Kochfeldstr.");
break;
}
case 191172:
{
returnValue = F("Kochgasse");
break;
}
case 191173:
{
returnValue = F("Kochgrabenring");
break;
}
case 191174:
{
returnValue = F("Kochgässle");
break;
}
case 191175:
{
returnValue = F("Kochhanselplatz");
break;
}
case 191176:
{
returnValue = F("Kochhecke");
break;
}
case 191177:
{
returnValue = F("Kochheimer Str.");
break;
}
case 191178:
{
returnValue = F("Kochholzweg");
break;
}
case 191179:
{
returnValue = F("Kochhorstweg");
break;
}
case 191180:
{
returnValue = F("Kochkoppel");
break;
}
case 191181:
{
returnValue = F("Kochler Str.");
break;
}
case 191182:
{
returnValue = F("Kochmatt");
break;
}
case 191183:
{
returnValue = F("Kochs Büsche");
break;
}
case 191184:
{
returnValue = F("Kochs Damm");
break;
}
case 191185:
{
returnValue = F("Kochs Feld");
break;
}
case 191186:
{
returnValue = F("Kochs Grund");
break;
}
case 191187:
{
returnValue = F("Kochs Höhe");
break;
}
case 191188:
{
returnValue = F("Kochs Kämpe");
break;
}
case 191189:
{
returnValue = F("Kochs Weg");
break;
}
case 191190:
{
returnValue = F("Kochsatreff");
break;
}
case 191191:
{
returnValue = F("Kochsaweg");
break;
}
case 191192:
{
returnValue = F("Kochsberg");
break;
}
case 191193:
{
returnValue = F("Kochsche Gasse");
break;
}
case 191194:
{
returnValue = F("Kochsdorfer Weg");
break;
}
case 191195:
{
returnValue = F("Kochseeschneise");
break;
}
case 191196:
{
returnValue = F("Kochsfeld");
break;
}
case 191197:
{
returnValue = F("Kochsgasse");
break;
}
case 191198:
{
returnValue = F("Kochsgut");
break;
}
case 191199:
{
returnValue = F("Kochshecke");
break;
}
case 191200:
{
returnValue = F("Kochslandweg");
break;
}
case 191201:
{
returnValue = F("Kochsmühle");
break;
}
case 191202:
{
returnValue = F("Kochstedter Kreisstr.");
break;
}
case 191203:
{
returnValue = F("Kochsteige");
break;
}
case 191204:
{
returnValue = F("Kochstor");
break;
}
case 191205:
{
returnValue = F("Kochstr.");
break;
}
case 191206:
{
returnValue = F("Kochsweg");
break;
}
case 191207:
{
returnValue = F("Kochswende");
break;
}
case 191208:
{
returnValue = F("Kochweg");
break;
}
case 191209:
{
returnValue = F("Kochwiesenweg");
break;
}
case 191210:
{
returnValue = F("Kochwinkelgasse");
break;
}
case 191211:
{
returnValue = F("Kock-und-Hunger-Weg");
break;
}
case 191212:
{
returnValue = F("Kockelsberg");
break;
}
case 191213:
{
returnValue = F("Kockenkamp");
break;
}
case 191214:
{
returnValue = F("Kockenmatt");
break;
}
case 191215:
{
returnValue = F("Kockerscheidtweg");
break;
}
case 191216:
{
returnValue = F("Kockisch");
break;
}
case 191217:
{
returnValue = F("Kockortweg");
break;
}
case 191218:
{
returnValue = F("Kocksbusch");
break;
}
case 191219:
{
returnValue = F("Kocksgasse");
break;
}
case 191220:
{
returnValue = F("Kockskamp");
break;
}
case 191221:
{
returnValue = F("Kockskottenweg");
break;
}
case 191222:
{
returnValue = F("Kockstege");
break;
}
case 191223:
{
returnValue = F("Kockstiege");
break;
}
case 191224:
{
returnValue = F("Kockstr.");
break;
}
case 191225:
{
returnValue = F("Kodenhöfer Weg");
break;
}
case 191226:
{
returnValue = F("Koebisstr.");
break;
}
case 191227:
{
returnValue = F("Koebkeweg");
break;
}
case 191228:
{
returnValue = F("Koechlinstr.");
break;
}
case 191229:
{
returnValue = F("Koekkoekstege");
break;
}
case 191230:
{
returnValue = F("Koelerstr.");
break;
}
case 191231:
{
returnValue = F("Koelle-Karmann-Str.");
break;
}
case 191232:
{
returnValue = F("Koellikerstr.");
break;
}
case 191233:
{
returnValue = F("Koellmannshorst");
break;
}
case 191234:
{
returnValue = F("Koelmanns Maate");
break;
}
case 191235:
{
returnValue = F("Koelsheid");
break;
}
case 191236:
{
returnValue = F("Koelverstr.");
break;
}
case 191237:
{
returnValue = F("Koempelstr.");
break;
}
case 191238:
{
returnValue = F("Koendersweg");
break;
}
case 191239:
{
returnValue = F("Koenenkreuzstr.");
break;
}
case 191240:
{
returnValue = F("Koenenstr.");
break;
}
case 191241:
{
returnValue = F("Koenenweg");
break;
}
case 191242:
{
returnValue = F("Koenigsmarckstr.");
break;
}
case 191243:
{
returnValue = F("Koenigsmühle");
break;
}
case 191244:
{
returnValue = F("Koeninger Weg");
break;
}
case 191245:
{
returnValue = F("Koenneckestr.");
break;
}
case 191246:
{
returnValue = F("Koepchenstr.");
break;
}
case 191247:
{
returnValue = F("Koepenweg");
break;
}
case 191248:
{
returnValue = F("Koepeplatz");
break;
}
case 191249:
{
returnValue = F("Koeperstr.");
break;
}
case 191250:
{
returnValue = F("Koepestr.");
break;
}
case 191251:
{
returnValue = F("Koepfleweg");
break;
}
case 191252:
{
returnValue = F("Koeppelstr.");
break;
}
case 191253:
{
returnValue = F("Koeppestr.");
break;
}
case 191254:
{
returnValue = F("Koeppstr.");
break;
}
case 191255:
{
returnValue = F("Koernickestr.");
break;
}
case 191256:
{
returnValue = F("Koesterskamp");
break;
}
case 191257:
{
returnValue = F("Koeth-Wanscheid'sches Schloss mit Park, Park im Englischen Garten Stil");
break;
}
case 191258:
{
returnValue = F("Koettling");
break;
}
case 191259:
{
returnValue = F("Kofelauweg");
break;
}
case 191260:
{
returnValue = F("Kofeln");
break;
}
case 191261:
{
returnValue = F("Kofelstr.");
break;
}
case 191262:
{
returnValue = F("Kofelweg");
break;
}
case 191263:
{
returnValue = F("Kofferener Str.");
break;
}
case 191264:
{
returnValue = F("Kofferer Str.");
break;
}
case 191265:
{
returnValue = F("Kofflerstr.");
break;
}
case 191266:
{
returnValue = F("Kogeler Mühle");
break;
}
case 191267:
{
returnValue = F("Kogeler Ring");
break;
}
case 191268:
{
returnValue = F("Kogeler Str.");
break;
}
case 191269:
{
returnValue = F("Kogeler Weg");
break;
}
case 191270:
{
returnValue = F("Kogelherrenstr.");
break;
}
case 191271:
{
returnValue = F("Kogelstr.");
break;
}
case 191272:
{
returnValue = F("Kogelweg");
break;
}
case 191273:
{
returnValue = F("Kogenbach");
break;
}
case 191274:
{
returnValue = F("Kogenbacher Weg");
break;
}
case 191275:
{
returnValue = F("Kogenbroich");
break;
}
case 191276:
{
returnValue = F("Kogenhalde");
break;
}
case 191277:
{
returnValue = F("Kogenwiese");
break;
}
case 191278:
{
returnValue = F("Kogenäcker");
break;
}
case 191279:
{
returnValue = F("Kogge");
break;
}
case 191280:
{
returnValue = F("Koggenweg");
break;
}
case 191281:
{
returnValue = F("Koggestr.");
break;
}
case 191282:
{
returnValue = F("Koggeweg");
break;
}
case 191283:
{
returnValue = F("Koglerweg");
break;
}
case 191284:
{
returnValue = F("Koglkopfstr.");
break;
}
case 191285:
{
returnValue = F("Koglring");
break;
}
case 191286:
{
returnValue = F("Koglweg");
break;
}
case 191287:
{
returnValue = F("Kohbachweg");
break;
}
case 191288:
{
returnValue = F("Kohbarg");
break;
}
case 191289:
{
returnValue = F("Kohbrede");
break;
}
case 191290:
{
returnValue = F("Kohbrügg");
break;
}
case 191291:
{
returnValue = F("Kohdener Weg");
break;
}
case 191292:
{
returnValue = F("Kohdiek");
break;
}
case 191293:
{
returnValue = F("Kohdiekskamp");
break;
}
case 191294:
{
returnValue = F("Kohdor");
break;
}
case 191295:
{
returnValue = F("Kohfurth");
break;
}
case 191296:
{
returnValue = F("Kohgang");
break;
}
case 191297:
{
returnValue = F("Kohgasse");
break;
}
case 191298:
{
returnValue = F("Kohkamp");
break;
}
case 191299:
{
returnValue = F("Kohkoppelredder");
break;
}
case 191300:
{
returnValue = F("Kohl");
break;
}
case 191301:
{
returnValue = F("Kohl-Larsen-Str.");
break;
}
case 191302:
{
returnValue = F("Kohl-Schneise");
break;
}
case 191303:
{
returnValue = F("Kohl-Weg");
break;
}
case 191304:
{
returnValue = F("Kohl-Weigand-Str.");
break;
}
case 191305:
{
returnValue = F("Kohlachstr.");
break;
}
case 191306:
{
returnValue = F("Kohlackersträßle");
break;
}
case 191307:
{
returnValue = F("Kohlackerweg");
break;
}
case 191308:
{
returnValue = F("Kohlandweg");
break;
}
case 191309:
{
returnValue = F("Kohlau");
break;
}
case 191310:
{
returnValue = F("Kohlaubachbrücke");
break;
}
case 191311:
{
returnValue = F("Kohlaustr.");
break;
}
case 191312:
{
returnValue = F("Kohlbacher Str.");
break;
}
case 191313:
{
returnValue = F("Kohlbachstr.");
break;
}
case 191314:
{
returnValue = F("Kohlbachsweg");
break;
}
case 191315:
{
returnValue = F("Kohlbachweg");
break;
}
case 191316:
{
returnValue = F("Kohlbauerngasse");
break;
}
case 191317:
{
returnValue = F("Kohlbauerplatz");
break;
}
case 191318:
{
returnValue = F("Kohlbeckstr.");
break;
}
case 191319:
{
returnValue = F("Kohlbeet");
break;
}
case 191320:
{
returnValue = F("Kohlberg");
break;
}
case 191321:
{
returnValue = F("Kohlbergen");
break;
}
case 191322:
{
returnValue = F("Kohlberger Richtweg");
break;
}
case 191323:
{
returnValue = F("Kohlberger Str.");
break;
}
case 191324:
{
returnValue = F("Kohlberggässchen");
break;
}
case 191325:
{
returnValue = F("Kohlbergsteige");
break;
}
case 191326:
{
returnValue = F("Kohlbergstr.");
break;
}
case 191327:
{
returnValue = F("Kohlbergsweg");
break;
}
case 191328:
{
returnValue = F("Kohlbergweg");
break;
}
case 191329:
{
returnValue = F("Kohlbetterhof");
break;
}
case 191330:
{
returnValue = F("Kohlbettstr.");
break;
}
case 191331:
{
returnValue = F("Kohlblattenweg");
break;
}
case 191332:
{
returnValue = F("Kohlbornsteig");
break;
}
case 191333:
{
returnValue = F("Kohlbornweg");
break;
}
case 191334:
{
returnValue = F("Kohlbreite");
break;
}
case 191335:
{
returnValue = F("Kohlbrink");
break;
}
case 191336:
{
returnValue = F("Kohlbruchschneise");
break;
}
case 191337:
{
returnValue = F("Kohlbruck");
break;
}
case 191338:
{
returnValue = F("Kohlbrunnengrund");
break;
}
case 191339:
{
returnValue = F("Kohlbrunnenstr.");
break;
}
case 191340:
{
returnValue = F("Kohlbrunnenweg");
break;
}
case 191341:
{
returnValue = F("Kohlbrunnstr.");
break;
}
case 191342:
{
returnValue = F("Kohlbrücke");
break;
}
case 191343:
{
returnValue = F("Kohlbrückenweg");
break;
}
case 191344:
{
returnValue = F("Kohlbuchweg");
break;
}
case 191345:
{
returnValue = F("Kohlbuck");
break;
}
case 191346:
{
returnValue = F("Kohlbucksträßchen");
break;
}
case 191347:
{
returnValue = F("Kohlbuschweg");
break;
}
case 191348:
{
returnValue = F("Kohlbühl");
break;
}
case 191349:
{
returnValue = F("Kohlbühlstr.");
break;
}
case 191350:
{
returnValue = F("Kohlbühlweg");
break;
}
case 191351:
{
returnValue = F("Kohldistelstr.");
break;
}
case 191352:
{
returnValue = F("Kohldölleweg");
break;
}
case 191353:
{
returnValue = F("Kohlebahnradweg");
break;
}
case 191354:
{
returnValue = F("Kohlebahnweg");
break;
}
case 191355:
{
returnValue = F("Kohlebeneweg");
break;
}
case 191356:
{
returnValue = F("Kohlebrennerpfad");
break;
}
case 191357:
{
returnValue = F("Kohleckstr.");
break;
}
case 191358:
{
returnValue = F("Kohlegleis");
break;
}
case 191359:
{
returnValue = F("Kohleichenstr.");
break;
}
case 191360:
{
returnValue = F("Kohleisenstr.");
break;
}
case 191361:
{
returnValue = F("Kohlen");
break;
}
case 191362:
{
returnValue = F("Kohlenallee");
break;
}
case 191363:
{
returnValue = F("Kohlenbach");
break;
}
case 191364:
{
returnValue = F("Kohlenbacher Str.");
break;
}
case 191365:
{
returnValue = F("Kohlenbacher Talstr.");
break;
}
case 191366:
{
returnValue = F("Kohlenbacher Weg");
break;
}
case 191367:
{
returnValue = F("Kohlenbachertalstr.");
break;
}
case 191368:
{
returnValue = F("Kohlenbachstr.");
break;
}
case 191369:
{
returnValue = F("Kohlenbahn Artern");
break;
}
case 191370:
{
returnValue = F("Kohlenbahn-Tunnel");
break;
}
case 191371:
{
returnValue = F("Kohlenbahnstr.");
break;
}
case 191372:
{
returnValue = F("Kohlenbauerweg");
break;
}
case 191373:
{
returnValue = F("Kohlenbek");
break;
}
case 191374:
{
returnValue = F("Kohlenberg");
break;
}
case 191375:
{
returnValue = F("Kohlenbergstr.");
break;
}
case 191376:
{
returnValue = F("Kohlenbergweg");
break;
}
case 191377:
{
returnValue = F("Kohlenbissener Grund");
break;
}
case 191378:
{
returnValue = F("Kohlenbissener Str.");
break;
}
case 191379:
{
returnValue = F("Kohlenbrennerweg");
break;
}
case 191380:
{
returnValue = F("Kohlenbruch");
break;
}
case 191381:
{
returnValue = F("Kohlenbrucher Weg");
break;
}
case 191382:
{
returnValue = F("Kohlenbrunnermühlstr.");
break;
}
case 191383:
{
returnValue = F("Kohlenförde");
break;
}
case 191384:
{
returnValue = F("Kohlengasse");
break;
}
case 191385:
{
returnValue = F("Kohlengrubenweg");
break;
}
case 191386:
{
returnValue = F("Kohlengrubstr.");
break;
}
case 191387:
{
returnValue = F("Kohlengäßchen");
break;
}
case 191388:
{
returnValue = F("Kohlenhansweg");
break;
}
case 191389:
{
returnValue = F("Kohlenhausen");
break;
}
case 191390:
{
returnValue = F("Kohlenhof");
break;
}
case 191391:
{
returnValue = F("Kohlenhofbrücke");
break;
}
case 191392:
{
returnValue = F("Kohlenhofstr.");
break;
}
case 191393:
{
returnValue = F("Kohlenhucker Weg");
break;
}
case 191394:
{
returnValue = F("Kohlenhusen");
break;
}
case 191395:
{
returnValue = F("Kohlenkamp");
break;
}
case 191396:
{
returnValue = F("Kohlenmagazin");
break;
}
case 191397:
{
returnValue = F("Kohlenmarkt");
break;
}
case 191398:
{
returnValue = F("Kohlenmeiler");
break;
}
case 191399:
{
returnValue = F("Kohlenmühlenweg");
break;
}
case 191400:
{
returnValue = F("Kohlenpfad");
break;
}
case 191401:
{
returnValue = F("Kohlenplatte");
break;
}
case 191402:
{
returnValue = F("Kohlenplatz");
break;
}
case 191403:
{
returnValue = F("Kohlenschachtweg");
break;
}
case 191404:
{
returnValue = F("Kohlenschneise");
break;
}
case 191405:
{
returnValue = F("Kohlenstatt");
break;
}
case 191406:
{
returnValue = F("Kohlenstr.");
break;
}
case 191407:
{
returnValue = F("Kohlenstrecke");
break;
}
case 191408:
{
returnValue = F("Kohlentor");
break;
}
case 191409:
{
returnValue = F("Kohlentreiberweg");
break;
}
case 191410:
{
returnValue = F("Kohlenweg");
break;
}
case 191411:
{
returnValue = F("Kohlenwegle");
break;
}
case 191412:
{
returnValue = F("Kohler Ausfahrt");
break;
}
case 191413:
{
returnValue = F("Kohlerbachstr.");
break;
}
case 191414:
{
returnValue = F("Kohlerberg");
break;
}
case 191415:
{
returnValue = F("Kohlerbergstr.");
break;
}
case 191416:
{
returnValue = F("Kohlerbückenweg");
break;
}
case 191417:
{
returnValue = F("Kohlergasse");
break;
}
case 191418:
{
returnValue = F("Kohlerhauweg");
break;
}
case 191419:
{
returnValue = F("Kohlerhecke");
break;
}
case 191420:
{
returnValue = F("Kohlerhof");
break;
}
case 191421:
{
returnValue = F("Kohlerhöfe");
break;
}
case 191422:
{
returnValue = F("Kohlerieweg");
break;
}
case 191423:
{
returnValue = F("Kohlerklingenweg");
break;
}
case 191424:
{
returnValue = F("Kohlerkopfweg");
break;
}
case 191425:
{
returnValue = F("Kohlermättleweg");
break;
}
case 191426:
{
returnValue = F("Kohlernweg");
break;
}
case 191427:
{
returnValue = F("Kohlerstr.");
break;
}
case 191428:
{
returnValue = F("Kohlert");
break;
}
case 191429:
{
returnValue = F("Kohlerweg");
break;
}
case 191430:
{
returnValue = F("Kohlestr.");
break;
}
case 191431:
{
returnValue = F("Kohleweg");
break;
}
case 191432:
{
returnValue = F("Kohlfahrtstr.");
break;
}
case 191433:
{
returnValue = F("Kohlfeld");
break;
}
case 191434:
{
returnValue = F("Kohlfirststr.");
break;
}
case 191435:
{
returnValue = F("Kohlfirstweg");
break;
}
case 191436:
{
returnValue = F("Kohlflage");
break;
}
case 191437:
{
returnValue = F("Kohlfurtweg");
break;
}
case 191438:
{
returnValue = F("Kohlfußstr.");
break;
}
case 191439:
{
returnValue = F("Kohlgarten");
break;
}
case 191440:
{
returnValue = F("Kohlgartenstr.");
break;
}
case 191441:
{
returnValue = F("Kohlgartenweg");
break;
}
case 191442:
{
returnValue = F("Kohlgartenwiedt");
break;
}
case 191443:
{
returnValue = F("Kohlgasse");
break;
}
case 191444:
{
returnValue = F("Kohlgaßweg");
break;
}
case 191445:
{
returnValue = F("Kohlgeest");
break;
}
case 191446:
{
returnValue = F("Kohlgraben-Str.");
break;
}
case 191447:
{
returnValue = F("Kohlgrabenbrücke");
break;
}
case 191448:
{
returnValue = F("Kohlgrabenstr.");
break;
}
case 191449:
{
returnValue = F("Kohlgrabenweg");
break;
}
case 191450:
{
returnValue = F("Kohlgrub");
break;
}
case 191451:
{
returnValue = F("Kohlgrube");
break;
}
case 191452:
{
returnValue = F("Kohlgrubenstr.");
break;
}
case 191453:
{
returnValue = F("Kohlgrubenweg");
break;
}
case 191454:
{
returnValue = F("Kohlgruber Str.");
break;
}
case 191455:
{
returnValue = F("Kohlgrubweg");
break;
}
case 191456:
{
returnValue = F("Kohlgrubäcker");
break;
}
case 191457:
{
returnValue = F("Kohlgrund");
break;
}
case 191458:
{
returnValue = F("Kohlgrunder Str.");
break;
}
case 191459:
{
returnValue = F("Kohlgrundweg");
break;
}
case 191460:
{
returnValue = F("Kohlgärten");
break;
}
case 191461:
{
returnValue = F("Kohlgäßle");
break;
}
case 191462:
{
returnValue = F("Kohlhaasstr.");
break;
}
case 191463:
{
returnValue = F("Kohlhagen");
break;
}
case 191464:
{
returnValue = F("Kohlhagener Weg");
break;
}
case 191465:
{
returnValue = F("Kohlhagenweg");
break;
}
case 191466:
{
returnValue = F("Kohlhain");
break;
}
case 191467:
{
returnValue = F("Kohlhalde");
break;
}
case 191468:
{
returnValue = F("Kohlhaldenweg");
break;
}
case 191469:
{
returnValue = F("Kohlhammerstr.");
break;
}
case 191470:
{
returnValue = F("Kohlhammerweg");
break;
}
case 191471:
{
returnValue = F("Kohlhardtstr.");
break;
}
case 191472:
{
returnValue = F("Kohlhartsweg");
break;
}
case 191473:
{
returnValue = F("Kohlhasengasse");
break;
}
case 191474:
{
returnValue = F("Kohlhauallee");
break;
}
case 191475:
{
returnValue = F("Kohlhaubilzweg");
break;
}
case 191476:
{
returnValue = F("Kohlhaufen");
break;
}
case 191477:
{
returnValue = F("Kohlhaufmühle");
break;
}
case 191478:
{
returnValue = F("Kohlhaukuppe");
break;
}
case 191479:
{
returnValue = F("Kohlhaus");
break;
}
case 191480:
{
returnValue = F("Kohlhausen");
break;
}
case 191481:
{
returnValue = F("Kohlhaustr.");
break;
}
case 191482:
{
returnValue = F("Kohlhausträßchen");
break;
}
case 191483:
{
returnValue = F("Kohlhauweg");
break;
}
case 191484:
{
returnValue = F("Kohlheppstr.");
break;
}
case 191485:
{
returnValue = F("Kohlhof");
break;
}
case 191486:
{
returnValue = F("Kohlhoff");
break;
}
case 191487:
{
returnValue = F("Kohlhofschneise");
break;
}
case 191488:
{
returnValue = F("Kohlhofstr.");
break;
}
case 191489:
{
returnValue = F("Kohlhofsweg");
break;
}
case 191490:
{
returnValue = F("Kohlhofweg");
break;
}
case 191491:
{
returnValue = F("Kohlholzlinie");
break;
}
case 191492:
{
returnValue = F("Kohlholzweg");
break;
}
case 191493:
{
returnValue = F("Kohlhoppenweg");
break;
}
case 191494:
{
returnValue = F("Kohlhorn");
break;
}
case 191495:
{
returnValue = F("Kohlhorstredder");
break;
}
case 191496:
{
returnValue = F("Kohlhuettenweg");
break;
}
case 191497:
{
returnValue = F("Kohlhäulesweg");
break;
}
case 191498:
{
returnValue = F("Kohlhäuleweg");
break;
}
case 191499:
{
returnValue = F("Kohlhäuser Str.");
break;
}
case 191500:
{
returnValue = F("Kohlhöfe");
break;
}
case 191501:
{
returnValue = F("Kohlhöfen");
break;
}
case 191502:
{
returnValue = F("Kohlhöfer Maschweg");
break;
}
case 191503:
{
returnValue = F("Kohlhöferweg");
break;
}
case 191504:
{
returnValue = F("Kohlhübel");
break;
}
case 191505:
{
returnValue = F("Kohlhüttenweg");
break;
}
case 191506:
{
returnValue = F("Kohlicht");
break;
}
case 191507:
{
returnValue = F("Kohlichtweg");
break;
}
case 191508:
{
returnValue = F("Kohlkammerweg");
break;
}
case 191509:
{
returnValue = F("Kohlkamp");
break;
}
case 191510:
{
returnValue = F("Kohlkampsweg");
break;
}
case 191511:
{
returnValue = F("Kohlkauler Str.");
break;
}
case 191512:
{
returnValue = F("Kohlkautstr.");
break;
}
case 191513:
{
returnValue = F("Kohlklinge");
break;
}
case 191514:
{
returnValue = F("Kohlklingensträßchen");
break;
}
case 191515:
{
returnValue = F("Kohlklingenweg");
break;
}
case 191516:
{
returnValue = F("Kohllachenstr.");
break;
}
case 191517:
{
returnValue = F("Kohllaineweg");
break;
}
case 191518:
{
returnValue = F("Kohllandsweg");
break;
}
case 191519:
{
returnValue = F("Kohlleite");
break;
}
case 191520:
{
returnValue = F("Kohllohstr.");
break;
}
case 191521:
{
returnValue = F("Kohlmahdstr.");
break;
}
case 191522:
{
returnValue = F("Kohlmannsweg");
break;
}
case 191523:
{
returnValue = F("Kohlmarkt");
break;
}
case 191524:
{
returnValue = F("Kohlmatt");
break;
}
case 191525:
{
returnValue = F("Kohlmeisenweg");
break;
}
case 191526:
{
returnValue = F("Kohlmenzinger Str.");
break;
}
case 191527:
{
returnValue = F("Kohlmeyerstr.");
break;
}
case 191528:
{
returnValue = F("Kohlmiesfeld");
break;
}
case 191529:
{
returnValue = F("Kohlmühle");
break;
}
case 191530:
{
returnValue = F("Kohlmühlweg");
break;
}
case 191531:
{
returnValue = F("Kohlpattenweg");
break;
}
case 191532:
{
returnValue = F("Kohlpfadweg");
break;
}
case 191533:
{
returnValue = F("Kohlplattallee");
break;
}
case 191534:
{
returnValue = F("Kohlplatte");
break;
}
case 191535:
{
returnValue = F("Kohlplattengasse");
break;
}
case 191536:
{
returnValue = F("Kohlplattenhau");
break;
}
case 191537:
{
returnValue = F("Kohlplattenstr.");
break;
}
case 191538:
{
returnValue = F("Kohlplattensträßle");
break;
}
case 191539:
{
returnValue = F("Kohlplattenweg");
break;
}
case 191540:
{
returnValue = F("Kohlplatteweg");
break;
}
case 191541:
{
returnValue = F("Kohlplattweg");
break;
}
case 191542:
{
returnValue = F("Kohlplatz");
break;
}
case 191543:
{
returnValue = F("Kohlplatzstr.");
break;
}
case 191544:
{
returnValue = F("Kohlplatzweg");
break;
}
case 191545:
{
returnValue = F("Kohlplätzle");
break;
}
case 191546:
{
returnValue = F("Kohlplätzleweg");
break;
}
case 191547:
{
returnValue = F("Kohlpläzle");
break;
}
case 191548:
{
returnValue = F("Kohlpottweg");
break;
}
case 191549:
{
returnValue = F("Kohlrain");
break;
}
case 191550:
{
returnValue = F("Kohlraisleweg");
break;
}
case 191551:
{
returnValue = F("Kohlrankweg");
break;
}
case 191552:
{
returnValue = F("Kohlreute-Linie");
break;
}
case 191553:
{
returnValue = F("Kohlriedenbach");
break;
}
case 191554:
{
returnValue = F("Kohlrieger Weg");
break;
}
case 191555:
{
returnValue = F("Kohlroterweg");
break;
}
case 191556:
{
returnValue = F("Kohlrütteweg");
break;
}
case 191557:
{
returnValue = F("Kohlrüttiweg");
break;
}
case 191558:
{
returnValue = F("Kohlschanze");
break;
}
case 191559:
{
returnValue = F("Kohlschanzstr.");
break;
}
case 191560:
{
returnValue = F("Kohlscheider Str.");
break;
}
case 191561:
{
returnValue = F("Kohlschied");
break;
}
case 191562:
{
returnValue = F("Kohlschlader Weg");
break;
}
case 191563:
{
returnValue = F("Kohlschlag");
break;
}
case 191564:
{
returnValue = F("Kohlschlagweg");
break;
}
case 191565:
{
returnValue = F("Kohlschneise");
break;
}
case 191566:
{
returnValue = F("Kohlschwarzweg");
break;
}
case 191567:
{
returnValue = F("Kohlsdorfer Chaussee");
break;
}
case 191568:
{
returnValue = F("Kohlsdorfer Str.");
break;
}
case 191569:
{
returnValue = F("Kohlsdorfweg");
break;
}
case 191570:
{
returnValue = F("Kohlseeweg");
break;
}
case 191571:
{
returnValue = F("Kohlstadt");
break;
}
case 191572:
{
returnValue = F("Kohlstatt");
break;
}
case 191573:
{
returnValue = F("Kohlstattgasse");
break;
}
case 191574:
{
returnValue = F("Kohlstattstr.");
break;
}
case 191575:
{
returnValue = F("Kohlstattweg");
break;
}
case 191576:
{
returnValue = F("Kohlstattäcker");
break;
}
case 191577:
{
returnValue = F("Kohlstedthof");
break;
}
case 191578:
{
returnValue = F("Kohlstedts Mühle");
break;
}
case 191579:
{
returnValue = F("Kohlsteg");
break;
}
case 191580:
{
returnValue = F("Kohlsteig");
break;
}
case 191581:
{
returnValue = F("Kohlsteige");
break;
}
case 191582:
{
returnValue = F("Kohlsteigle");
break;
}
case 191583:
{
returnValue = F("Kohlsteiner Str.");
break;
}
case 191584:
{
returnValue = F("Kohlstelle");
break;
}
case 191585:
{
returnValue = F("Kohlstetter Str.");
break;
}
case 191586:
{
returnValue = F("Kohlstieg");
break;
}
case 191587:
{
returnValue = F("Kohlstockstr.");
break;
}
case 191588:
{
returnValue = F("Kohlstorf");
break;
}
case 191589:
{
returnValue = F("Kohlstr.");
break;
}
case 191590:
{
returnValue = F("Kohlstrunk");
break;
}
case 191591:
{
returnValue = F("Kohlsträßchen");
break;
}
case 191592:
{
returnValue = F("Kohlstädter Str.");
break;
}
case 191593:
{
returnValue = F("Kohlstätt");
break;
}
case 191594:
{
returnValue = F("Kohlstätte");
break;
}
case 191595:
{
returnValue = F("Kohlstättweg");
break;
}
case 191596:
{
returnValue = F("Kohlstöcken");
break;
}
case 191597:
{
returnValue = F("Kohlstöcksweg");
break;
}
case 191598:
{
returnValue = F("Kohlstückering");
break;
}
case 191599:
{
returnValue = F("Kohlstückeweg");
break;
}
case 191600:
{
returnValue = F("Kohltalweg");
break;
}
case 191601:
{
returnValue = F("Kohlteichstr.");
break;
}
case 191602:
{
returnValue = F("Kohltellenweg");
break;
}
case 191603:
{
returnValue = F("Kohltor");
break;
}
case 191604:
{
returnValue = F("Kohltun");
break;
}
case 191605:
{
returnValue = F("Kohltunweg");
break;
}
case 191606:
{
returnValue = F("Kohlwald");
break;
}
case 191607:
{
returnValue = F("Kohlwaldaufstieg");
break;
}
case 191608:
{
returnValue = F("Kohlwaldbrücke");
break;
}
case 191609:
{
returnValue = F("Kohlwaldstr.");
break;
}
case 191610:
{
returnValue = F("Kohlwaldweg");
break;
}
case 191611:
{
returnValue = F("Kohlwasenweg");
break;
}
case 191612:
{
returnValue = F("Kohlweg");
break;
}
case 191613:
{
returnValue = F("Kohlwegflügel");
break;
}
case 191614:
{
returnValue = F("Kohlweide");
break;
}
case 191615:
{
returnValue = F("Kohlweiherweg");
break;
}
case 191616:
{
returnValue = F("Kohlweilerstr.");
break;
}
case 191617:
{
returnValue = F("Kohlweißlingsweg");
break;
}
case 191618:
{
returnValue = F("Kohlwerderblick");
break;
}
case 191619:
{
returnValue = F("Kohlwerk");
break;
}
case 191620:
{
returnValue = F("Kohlwiese");
break;
}
case 191621:
{
returnValue = F("Kohlwiesen");
break;
}
case 191622:
{
returnValue = F("Kohlwiesenstr.");
break;
}
case 191623:
{
returnValue = F("Kohlwinklstr.");
break;
}
case 191624:
{
returnValue = F("Kohlwoog");
break;
}
case 191625:
{
returnValue = F("Kohlwühren");
break;
}
case 191626:
{
returnValue = F("Kohläcker");
break;
}
case 191627:
{
returnValue = F("Kohläckerstr.");
break;
}
case 191628:
{
returnValue = F("Kohmark");
break;
}
case 191629:
{
returnValue = F("Kohmelkensweg");
break;
}
case 191630:
{
returnValue = F("Kohnacker");
break;
}
case 191631:
{
returnValue = F("Kohnental");
break;
}
case 191632:
{
returnValue = F("Kohnenweg");
break;
}
case 191633:
{
returnValue = F("Kohnes Kamp");
break;
}
case 191634:
{
returnValue = F("Kohneweg");
break;
}
case 191635:
{
returnValue = F("Kohnhofstr.");
break;
}
case 191636:
{
returnValue = F("Kohnlestr.");
break;
}
case 191637:
{
returnValue = F("Kohnser Str.");
break;
}
case 191638:
{
returnValue = F("Kohnser Weg");
break;
}
case 191639:
{
returnValue = F("Kohnsteinbrücke");
break;
}
case 191640:
{
returnValue = F("Kohnsteinsteg");
break;
}
case 191641:
{
returnValue = F("Kohnsteinweg");
break;
}
case 191642:
{
returnValue = F("Kohortenstr.");
break;
}
case 191643:
{
returnValue = F("Kohortenweg");
break;
}
case 191644:
{
returnValue = F("Kohpad");
break;
}
case 191645:
{
returnValue = F("Kohrams Moor");
break;
}
case 191646:
{
returnValue = F("Kohrener Markt");
break;
}
case 191647:
{
returnValue = F("Kohrener Str.");
break;
}
case 191648:
{
returnValue = F("Kohrings Schafweg");
break;
}
case 191649:
{
returnValue = F("Kohrockstr.");
break;
}
case 191650:
{
returnValue = F("Kohrsweg");
break;
}
case 191651:
{
returnValue = F("Kohrweg");
break;
}
case 191652:
{
returnValue = F("Kohschietgang");
break;
}
case 191653:
{
returnValue = F("Kohstegge");
break;
}
case 191654:
{
returnValue = F("Kohstieg");
break;
}
case 191655:
{
returnValue = F("Kohtla-Järve-Str.");
break;
}
case 191656:
{
returnValue = F("Kohues");
break;
}
case 191657:
{
returnValue = F("Kohwaldstr.");
break;
}
case 191658:
{
returnValue = F("Kohweg");
break;
}
case 191659:
{
returnValue = F("Kohweidsweg");
break;
}
case 191660:
{
returnValue = F("Koihgäßle");
break;
}
case 191661:
{
returnValue = F("Koinstatt");
break;
}
case 191662:
{
returnValue = F("Koipainterweg");
break;
}
case 191663:
{
returnValue = F("Koisdorfer Str.");
break;
}
case 191664:
{
returnValue = F("Koisers Weg");
break;
}
case 191665:
{
returnValue = F("Koiserweg");
break;
}
case 191666:
{
returnValue = F("Koislhof");
break;
}
case 191667:
{
returnValue = F("Koitendorf");
break;
}
case 191668:
{
returnValue = F("Koitendorfer Landweg");
break;
}
case 191669:
{
returnValue = F("Koitenhagen");
break;
}
case 191670:
{
returnValue = F("Koitenhäger Landstr.");
break;
}
case 191671:
{
returnValue = F("Koithanshöhe");
break;
}
case 191672:
{
returnValue = F("Kojendiek");
break;
}
case 191673:
{
returnValue = F("Kojenstr.");
break;
}
case 191674:
{
returnValue = F("Kojenweg");
break;
}
case 191675:
{
returnValue = F("Kokardenweg");
break;
}
case 191676:
{
returnValue = F("Kokeier Prosper Wiederverwertungsplatz");
break;
}
case 191677:
{
returnValue = F("Kokelake");
break;
}
case 191678:
{
returnValue = F("Kokelberg");
break;
}
case 191679:
{
returnValue = F("Kokeltal");
break;
}
case 191680:
{
returnValue = F("Koken Mühlenweg");
break;
}
case 191681:
{
returnValue = F("Kokenauers Kamp");
break;
}
case 191682:
{
returnValue = F("Kokenbergstr.");
break;
}
case 191683:
{
returnValue = F("Kokendorfer Weg");
break;
}
case 191684:
{
returnValue = F("Kokenger Weg");
break;
}
case 191685:
{
returnValue = F("Kokenhammer");
break;
}
case 191686:
{
returnValue = F("Kokenhorststr.");
break;
}
case 191687:
{
returnValue = F("Kokenkamp");
break;
}
case 191688:
{
returnValue = F("Kokenmühle");
break;
}
case 191689:
{
returnValue = F("Kokenmühlenstr.");
break;
}
case 191690:
{
returnValue = F("Kokenrottstr.");
break;
}
case 191691:
{
returnValue = F("Kokenstr.");
break;
}
case 191692:
{
returnValue = F("Kokerei Prosper Steinlager");
break;
}
case 191693:
{
returnValue = F("Kokereistr.");
break;
}
case 191694:
{
returnValue = F("Kokerweg");
break;
}
case 191695:
{
returnValue = F("Kokillenweg");
break;
}
case 191696:
{
returnValue = F("Kokisch-Liebenhainer Hängebrücke");
break;
}
case 191697:
{
returnValue = F("Kokkedahl");
break;
}
case 191698:
{
returnValue = F("Kokkedahler Weg");
break;
}
case 191699:
{
returnValue = F("Kokkelinksvenne");
break;
}
case 191700:
{
returnValue = F("Koklplattenweg");
break;
}
case 191701:
{
returnValue = F("Kokoschka-Weg");
break;
}
case 191702:
{
returnValue = F("Kokoschkastr.");
break;
}
case 191703:
{
returnValue = F("Kokoschkaweg");
break;
}
case 191704:
{
returnValue = F("Koksanger");
break;
}
case 191705:
{
returnValue = F("Koksberg");
break;
}
case 191706:
{
returnValue = F("Koksheide");
break;
}
case 191707:
{
returnValue = F("Koksjider Platz");
break;
}
case 191708:
{
returnValue = F("Koksstr.");
break;
}
case 191709:
{
returnValue = F("Kolbe-Weg");
break;
}
case 191710:
{
returnValue = F("Kolbenackerweg");
break;
}
case 191711:
{
returnValue = F("Kolbenbachweg");
break;
}
case 191712:
{
returnValue = F("Kolbenbergblick");
break;
}
case 191713:
{
returnValue = F("Kolbenbergstr.");
break;
}
case 191714:
{
returnValue = F("Kolbengarten");
break;
}
case 191715:
{
returnValue = F("Kolbengartenstr.");
break;
}
case 191716:
{
returnValue = F("Kolbengasse");
break;
}
case 191717:
{
returnValue = F("Kolbengärten");
break;
}
case 191718:
{
returnValue = F("Kolbenhalde");
break;
}
case 191719:
{
returnValue = F("Kolbenhofweg");
break;
}
case 191720:
{
returnValue = F("Kolbenkreuzweg");
break;
}
case 191721:
{
returnValue = F("Kolbenlochweg");
break;
}
case 191722:
{
returnValue = F("Kolbensteige");
break;
}
case 191723:
{
returnValue = F("Kolbenstr.");
break;
}
case 191724:
{
returnValue = F("Kolbental");
break;
}
case 191725:
{
returnValue = F("Kolbenweg");
break;
}
case 191726:
{
returnValue = F("Kolbenweiherweg");
break;
}
case 191727:
{
returnValue = F("Kolbenzeil");
break;
}
case 191728:
{
returnValue = F("Kolbenäcker");
break;
}
case 191729:
{
returnValue = F("Kolbenäckerweg");
break;
}
case 191730:
{
returnValue = F("Kolberg");
break;
}
case 191731:
{
returnValue = F("Kolberg-Körlin-Str.");
break;
}
case 191732:
{
returnValue = F("Kolberger Allee");
break;
}
case 191733:
{
returnValue = F("Kolberger Dorfstr.");
break;
}
case 191734:
{
returnValue = F("Kolberger Ring");
break;
}
case 191735:
{
returnValue = F("Kolberger Str.");
break;
}
case 191736:
{
returnValue = F("Kolberger Weg");
break;
}
case 191737:
{
returnValue = F("Kolbergstr.");
break;
}
case 191738:
{
returnValue = F("Kolbermoorer Str.");
break;
}
case 191739:
{
returnValue = F("Kolbersbach");
break;
}
case 191740:
{
returnValue = F("Kolbershecke");
break;
}
case 191741:
{
returnValue = F("Kolberstr.");
break;
}
case 191742:
{
returnValue = F("Kolberweg");
break;
}
case 191743:
{
returnValue = F("Kolbestr.");
break;
}
case 191744:
{
returnValue = F("Kolbeweg");
break;
}
case 191745:
{
returnValue = F("Kolbing");
break;
}
case 191746:
{
returnValue = F("Kolbinger Str.");
break;
}
case 191747:
{
returnValue = F("Kolbingerstr.");
break;
}
case 191748:
{
returnValue = F("Kolbismühle");
break;
}
case 191749:
{
returnValue = F("Kolborner Weg");
break;
}
case 191750:
{
returnValue = F("Kolbornstr.");
break;
}
case 191751:
{
returnValue = F("Kolbrain");
break;
}
case 191752:
{
returnValue = F("Kolbstr.");
break;
}
case 191753:
{
returnValue = F("Kolchenbachstr.");
break;
}
case 191754:
{
returnValue = F("Kolchstr.");
break;
}
case 191755:
{
returnValue = F("Kolde Würde");
break;
}
case 191756:
{
returnValue = F("Koldefeld");
break;
}
case 191757:
{
returnValue = F("Koldehörner Str.");
break;
}
case 191758:
{
returnValue = F("Koldenbüttler Str.");
break;
}
case 191759:
{
returnValue = F("Koldenfeld");
break;
}
case 191760:
{
returnValue = F("Koldestr.");
break;
}
case 191761:
{
returnValue = F("Koldevitz");
break;
}
case 191762:
{
returnValue = F("Koldeweystieg");
break;
}
case 191763:
{
returnValue = F("Koldinger Str.");
break;
}
case 191764:
{
returnValue = F("Koldinger Weg");
break;
}
case 191765:
{
returnValue = F("Koldingstr.");
break;
}
case 191766:
{
returnValue = F("Kold´n Hauk");
break;
}
case 191767:
{
returnValue = F("Kolenbeekstieg");
break;
}
case 191768:
{
returnValue = F("Kolenfelder Str.");
break;
}
case 191769:
{
returnValue = F("Kolerad");
break;
}
case 191770:
{
returnValue = F("Kolerholzweg");
break;
}
case 191771:
{
returnValue = F("Kolfhausen");
break;
}
case 191772:
{
returnValue = F("Kolfs Insel");
break;
}
case 191773:
{
returnValue = F("Kolgeweg");
break;
}
case 191774:
{
returnValue = F("Kolheider Weg");
break;
}
case 191775:
{
returnValue = F("Kolheimer Str.");
break;
}
case 191776:
{
returnValue = F("Kolibristr.");
break;
}
case 191777:
{
returnValue = F("Koliner Str.");
break;
}
case 191778:
{
returnValue = F("Koling");
break;
}
case 191779:
{
returnValue = F("Kolingweg");
break;
}
case 191780:
{
returnValue = F("Kolinscher Weg");
break;
}
case 191781:
{
returnValue = F("Kolinweg");
break;
}
case 191782:
{
returnValue = F("Kolitzheimer Str.");
break;
}
case 191783:
{
returnValue = F("Kolitzheimer Weg");
break;
}
case 191784:
{
returnValue = F("Koljeweg");
break;
}
case 191785:
{
returnValue = F("Kolk");
break;
}
case 191786:
{
returnValue = F("Kolka");
break;
}
case 191787:
{
returnValue = F("Kolkauer Str.");
break;
}
case 191788:
{
returnValue = F("Kolkbrücker Weg");
break;
}
case 191789:
{
returnValue = F("Kolkdobbenweg");
break;
}
case 191790:
{
returnValue = F("Kolkebrede");
break;
}
case 191791:
{
returnValue = F("Kolkenbrockstr.");
break;
}
case 191792:
{
returnValue = F("Kolkende");
break;
}
case 191793:
{
returnValue = F("Kolkenweg");
break;
}
case 191794:
{
returnValue = F("Kolker Pool");
break;
}
case 191795:
{
returnValue = F("Kolkesch");
break;
}
case 191796:
{
returnValue = F("Kolkhagen");
break;
}
case 191797:
{
returnValue = F("Kolkhagener Weg");
break;
}
case 191798:
{
returnValue = F("Kolkkampweg");
break;
}
case 191799:
{
returnValue = F("Kolklandstr.");
break;
}
case 191800:
{
returnValue = F("Kolkort");
break;
}
case 191801:
{
returnValue = F("Kolkpfad");
break;
}
case 191802:
{
returnValue = F("Kolkschenstr.");
break;
}
case 191803:
{
returnValue = F("Kolkshoff");
break;
}
case 191804:
{
returnValue = F("Kolkstege");
break;
}
case 191805:
{
returnValue = F("Kolkstiege");
break;
}
case 191806:
{
returnValue = F("Kolkstr.");
break;
}
case 191807:
{
returnValue = F("Kolksweg");
break;
}
case 191808:
{
returnValue = F("Kolkweg");
break;
}
case 191809:
{
returnValue = F("Kolkwende");
break;
}
case 191810:
{
returnValue = F("Kolkwiese");
break;
}
case 191811:
{
returnValue = F("Kolkwinkel");
break;
}
case 191812:
{
returnValue = F("Kolkwischen");
break;
}
case 191813:
{
returnValue = F("Kolkwitz");
break;
}
case 191814:
{
returnValue = F("Kolkwitzer Str.");
break;
}
case 191815:
{
returnValue = F("Kollachenweg");
break;
}
case 191816:
{
returnValue = F("Kollage");
break;
}
case 191817:
{
returnValue = F("Kollase");
break;
}
case 191818:
{
returnValue = F("Kollau");
break;
}
case 191819:
{
returnValue = F("Kollauer Weg");
break;
}
case 191820:
{
returnValue = F("Kollbach-Radweg");
break;
}
case 191821:
{
returnValue = F("Kollbacher Str.");
break;
}
case 191822:
{
returnValue = F("Kollbachstr.");
break;
}
case 191823:
{
returnValue = F("Kollbachtalweg");
break;
}
case 191824:
{
returnValue = F("Kollbachweg");
break;
}
case 191825:
{
returnValue = F("Kollbeckersstegge");
break;
}
case 191826:
{
returnValue = F("Kollberg");
break;
}
case 191827:
{
returnValue = F("Kollberger Str.");
break;
}
case 191828:
{
returnValue = F("Kollbruchschneise");
break;
}
case 191829:
{
returnValue = F("Kollbruchweg");
break;
}
case 191830:
{
returnValue = F("Kollböckstr.");
break;
}
case 191831:
{
returnValue = F("Kolle Seele");
break;
}
case 191832:
{
returnValue = F("Kolle Weide");
break;
}
case 191833:
{
returnValue = F("Kolle-Avenue");
break;
}
case 191834:
{
returnValue = F("Kollegiengasse");
break;
}
case 191835:
{
returnValue = F("Kollegienhof");
break;
}
case 191836:
{
returnValue = F("Kollegienwall");
break;
}
case 191837:
{
returnValue = F("Kollektengasse");
break;
}
case 191838:
{
returnValue = F("Kollenbacher Str.");
break;
}
case 191839:
{
returnValue = F("Kollenbergstr.");
break;
}
case 191840:
{
returnValue = F("Kollenbey");
break;
}
case 191841:
{
returnValue = F("Kollenbeyer Weg");
break;
}
case 191842:
{
returnValue = F("Kollenbeyer Weg 4a - 4f");
break;
}
case 191843:
{
returnValue = F("Kollenbrink");
break;
}
case 191844:
{
returnValue = F("Kollenburger Weg");
break;
}
case 191845:
{
returnValue = F("Kollenbuscher Weg");
break;
}
case 191846:
{
returnValue = F("Kollengasse");
break;
}
case 191847:
{
returnValue = F("Kollenrodts Hof");
break;
}
case 191848:
{
returnValue = F("Kollepötz");
break;
}
case 191849:
{
returnValue = F("Kollerbachstr.");
break;
}
case 191850:
{
returnValue = F("Kollerbeck");
break;
}
case 191851:
{
returnValue = F("Kollerbergring");
break;
}
case 191852:
{
returnValue = F("Kollergang");
break;
}
case 191853:
{
returnValue = F("Kollerhammer Weg");
break;
}
case 191854:
{
returnValue = F("Kollerhausweg");
break;
}
case 191855:
{
returnValue = F("Kollermühlweg");
break;
}
case 191856:
{
returnValue = F("Kollerreuth");
break;
}
case 191857:
{
returnValue = F("Kollersberg");
break;
}
case 191858:
{
returnValue = F("Kollersberger Str.");
break;
}
case 191859:
{
returnValue = F("Kollersdorf");
break;
}
case 191860:
{
returnValue = F("Kollerstr.");
break;
}
case 191861:
{
returnValue = F("Kollerswiesen-Schneise");
break;
}
case 191862:
{
returnValue = F("Kollerswiesenschneise");
break;
}
case 191863:
{
returnValue = F("Kollersöd");
break;
}
case 191864:
{
returnValue = F("Kollertradte");
break;
}
case 191865:
{
returnValue = F("Kollerup");
break;
}
case 191866:
{
returnValue = F("Kollerweg");
break;
}
case 191867:
{
returnValue = F("Kollerwirtsgasse");
break;
}
case 191868:
{
returnValue = F("Kollesleuken-Kirf");
break;
}
case 191869:
{
returnValue = F("Kolleweg");
break;
}
case 191870:
{
returnValue = F("Kolleys Gosse");
break;
}
case 191871:
{
returnValue = F("Kollhof");
break;
}
case 191872:
{
returnValue = F("Kollhofe");
break;
}
case 191873:
{
returnValue = F("Kollhörn");
break;
}
case 191874:
{
returnValue = F("Kollhörner Weg");
break;
}
case 191875:
{
returnValue = F("Kollicker Ort");
break;
}
case 191876:
{
returnValue = F("Kolliestr.");
break;
}
case 191877:
{
returnValue = F("Kolligsbrunnen");
break;
}
case 191878:
{
returnValue = F("Kolling");
break;
}
case 191879:
{
returnValue = F("Kollinger Weg");
break;
}
case 191880:
{
returnValue = F("Kollmannspark");
break;
}
case 191881:
{
returnValue = F("Kollmannssträssle");
break;
}
case 191882:
{
returnValue = F("Kollmannstr.");
break;
}
case 191883:
{
returnValue = F("Kollmannsweg");
break;
}
case 191884:
{
returnValue = F("Kollmarsreuter Str.");
break;
}
case 191885:
{
returnValue = F("Kollmer Str.");
break;
}
case 191886:
{
returnValue = F("Kollmering");
break;
}
case 191887:
{
returnValue = F("Kollmeringer Str.");
break;
}
case 191888:
{
returnValue = F("Kollmerstr.");
break;
}
case 191889:
{
returnValue = F("Kollmitzstr.");
break;
}
case 191890:
{
returnValue = F("Kollmünzerstr.");
break;
}
case 191891:
{
returnValue = F("Kollnauer Str.");
break;
}
case 191892:
{
returnValue = F("Kollnburger Pröllersteig");
break;
}
case 191893:
{
returnValue = F("Kollnburger Str.");
break;
}
case 191894:
{
returnValue = F("Kollnbüschweg");
break;
}
case 191895:
{
returnValue = F("Kollostr.");
break;
}
case 191896:
{
returnValue = F("Kolloweg");
break;
}
case 191897:
{
returnValue = F("Kollower Str.");
break;
}
case 191898:
{
returnValue = F("Kollower Weg");
break;
}
case 191899:
{
returnValue = F("Kollriedenweg");
break;
}
case 191900:
{
returnValue = F("Kollrothstr.");
break;
}
case 191901:
{
returnValue = F("Kollsack");
break;
}
case 191902:
{
returnValue = F("Kollscher Hof");
break;
}
case 191903:
{
returnValue = F("Kollstedt");
break;
}
case 191904:
{
returnValue = F("Kollstr.");
break;
}
case 191905:
{
returnValue = F("Kollunder Str.");
break;
}
case 191906:
{
returnValue = F("Kollundfeld-Osten");
break;
}
case 191907:
{
returnValue = F("Kollundfeld-Westen");
break;
}
case 191908:
{
returnValue = F("Kollundweg");
break;
}
case 191909:
{
returnValue = F("Kollung");
break;
}
case 191910:
{
returnValue = F("Kollweg");
break;
}
case 191911:
{
returnValue = F("Kollweiler Str.");
break;
}
case 191912:
{
returnValue = F("Kollwitzring");
break;
}
case 191913:
{
returnValue = F("Kollwitzstr.");
break;
}
case 191914:
{
returnValue = F("Kollwitzweg");
break;
}
case 191915:
{
returnValue = F("Kolm");
break;
}
case 191916:
{
returnValue = F("Kolmannsecksträßle");
break;
}
case 191917:
{
returnValue = F("Kolmannsweg");
break;
}
case 191918:
{
returnValue = F("Kolmarer Str.");
break;
}
case 191919:
{
returnValue = F("Kolmberg");
break;
}
case 191920:
{
returnValue = F("Kolmberger Str.");
break;
}
case 191921:
{
returnValue = F("Kolmbergerstr.");
break;
}
case 191922:
{
returnValue = F("Kolmenlochweg");
break;
}
case 191923:
{
returnValue = F("Kolmergasse");
break;
}
case 191924:
{
returnValue = F("Kolmerswald");
break;
}
case 191925:
{
returnValue = F("Kolmesfeld");
break;
}
case 191926:
{
returnValue = F("Kolmhof");
break;
}
case 191927:
{
returnValue = F("Kolmhofstr.");
break;
}
case 191928:
{
returnValue = F("Kolmhub");
break;
}
case 191929:
{
returnValue = F("Kolmlohweg");
break;
}
case 191930:
{
returnValue = F("Kolmoorweg");
break;
}
case 191931:
{
returnValue = F("Kolmreuth");
break;
}
case 191932:
{
returnValue = F("Kolmreutherweg");
break;
}
case 191933:
{
returnValue = F("Kolmsdorfer Hauptstr.");
break;
}
case 191934:
{
returnValue = F("Kolmsdorfer Weg");
break;
}
case 191935:
{
returnValue = F("Kolmsweg");
break;
}
case 191936:
{
returnValue = F("Kolmöd");
break;
}
case 191937:
{
returnValue = F("Kolnhofer Str.");
break;
}
case 191938:
{
returnValue = F("Kolochauer Str.");
break;
}
case 191939:
{
returnValue = F("Koloman-Maurer-Str.");
break;
}
case 191940:
{
returnValue = F("Kolomannstr.");
break;
}
case 191941:
{
returnValue = F("Kolomanstr.");
break;
}
case 191942:
{
returnValue = F("Kolomanweg");
break;
}
case 191943:
{
returnValue = F("Kolon-Eggert-Str.");
break;
}
case 191944:
{
returnValue = F("Kolonatenweg");
break;
}
case 191945:
{
returnValue = F("Kolonatstr.");
break;
}
case 191946:
{
returnValue = F("Kolonatsweg");
break;
}
case 191947:
{
returnValue = F("Kolonialstr.");
break;
}
case 191948:
{
returnValue = F("Kolonie");
break;
}
case 191949:
{
returnValue = F("Kolonie Berg");
break;
}
case 191950:
{
returnValue = F("Kolonie Gniest");
break;
}
case 191951:
{
returnValue = F("Kolonie Hedwig");
break;
}
case 191952:
{
returnValue = F("Kolonie I");
break;
}
case 191953:
{
returnValue = F("Kolonie II");
break;
}
case 191954:
{
returnValue = F("Kolonie Immekath");
break;
}
case 191955:
{
returnValue = F("Kolonie Klein Eichholz");
break;
}
case 191956:
{
returnValue = F("Kolonie Ost");
break;
}
case 191957:
{
returnValue = F("Kolonie Weg");
break;
}
case 191958:
{
returnValue = F("Kolonie Zuckerwiesen");
break;
}
case 191959:
{
returnValue = F("Kolonie Ölfeld");
break;
}
case 191960:
{
returnValue = F("Kolonie-Friedensstr.");
break;
}
case 191961:
{
returnValue = F("Kolonie-Heidewinkel");
break;
}
case 191962:
{
returnValue = F("Kolonie-Waldweg");
break;
}
case 191963:
{
returnValue = F("Kolonienstr.");
break;
}
case 191964:
{
returnValue = F("Koloniestr.");
break;
}
case 191965:
{
returnValue = F("Kolonieweg");
break;
}
case 191966:
{
returnValue = F("Kolonistenberg");
break;
}
case 191967:
{
returnValue = F("Kolonistengärten");
break;
}
case 191968:
{
returnValue = F("Kolonistenkrug");
break;
}
case 191969:
{
returnValue = F("Kolonistenweg");
break;
}
case 191970:
{
returnValue = F("Kolonnadenweg");
break;
}
case 191971:
{
returnValue = F("Kolonnenweg");
break;
}
case 191972:
{
returnValue = F("Kolonnenweg (NVA Grenzweg)");
break;
}
case 191973:
{
returnValue = F("Kolonnenweg (ehem. innerdeutsche Grenze)");
break;
}
case 191974:
{
returnValue = F("Kolonnenweg DDR-Grenze");
break;
}
case 191975:
{
returnValue = F("Kolonnenweg DDR-Grenze (sehr steil)");
break;
}
case 191976:
{
returnValue = F("Koloseusstr.");
break;
}
case 191977:
{
returnValue = F("Kolosserweg");
break;
}
case 191978:
{
returnValue = F("Kolpien");
break;
}
case 191979:
{
returnValue = F("Kolpiner Str.");
break;
}
case 191980:
{
returnValue = F("Kolpiner Weg");
break;
}
case 191981:
{
returnValue = F("Kolping-Str.");
break;
}
case 191982:
{
returnValue = F("Kolpingplatz");
break;
}
case 191983:
{
returnValue = F("Kolpingring");
break;
}
case 191984:
{
returnValue = F("Kolpingsiedlung");
break;
}
case 191985:
{
returnValue = F("Kolpingsplatz");
break;
}
case 191986:
{
returnValue = F("Kolpingstr.");
break;
}
case 191987:
{
returnValue = F("Kolpingweg");
break;
}
case 191988:
{
returnValue = F("Kolreper Chaussee");
break;
}
case 191989:
{
returnValue = F("Kolreper Damm");
break;
}
case 191990:
{
returnValue = F("Kolreper Dorfstr.");
break;
}
case 191991:
{
returnValue = F("Kolreper Wiesenweg");
break;
}
case 191992:
{
returnValue = F("Kols Wiese");
break;
}
case 191993:
{
returnValue = F("Kolshorner Hof");
break;
}
case 191994:
{
returnValue = F("Kolshorner Str.");
break;
}
case 191995:
{
returnValue = F("Kolshorner Weg");
break;
}
case 191996:
{
returnValue = F("Koltermecke");
break;
}
case 191997:
{
returnValue = F("Koltermecker Weg");
break;
}
case 191998:
{
returnValue = F("Kolthoffsche Mühle");
break;
}
case 191999:
{
returnValue = F("Koltweg");
break;
}
case 192000:
{
returnValue = F("Kolumban Brücke");
break;
}
case 192001:
{
returnValue = F("Kolumban-Kayser-Str.");
break;
}
case 192002:
{
returnValue = F("Kolumban-Schnitzer-Str.");
break;
}
case 192003:
{
returnValue = F("Kolumbarium");
break;
}
case 192004:
{
returnValue = F("Kolumbusgasse");
break;
}
case 192005:
{
returnValue = F("Kolumbusring");
break;
}
case 192006:
{
returnValue = F("Kolumbusstr.");
break;
}
case 192007:
{
returnValue = F("Kolweg");
break;
}
case 192008:
{
returnValue = F("Kolzen Weg");
break;
}
case 192009:
{
returnValue = F("Kolzentalsträßle");
break;
}
case 192010:
{
returnValue = F("Komarowstr.");
break;
}
case 192011:
{
returnValue = F("Komberger Weg");
break;
}
case 192012:
{
returnValue = F("Kombergstr.");
break;
}
case 192013:
{
returnValue = F("Kombinatsstr.");
break;
}
case 192014:
{
returnValue = F("Kombinatsweg");
break;
}
case 192015:
{
returnValue = F("Komburgstr.");
break;
}
case 192016:
{
returnValue = F("Kombüsenstr.");
break;
}
case 192017:
{
returnValue = F("Kometenallee");
break;
}
case 192018:
{
returnValue = F("Kometenstr.");
break;
}
case 192019:
{
returnValue = F("Kometenweg");
break;
}
case 192020:
{
returnValue = F("Kometstr.");
break;
}
case 192021:
{
returnValue = F("Komiansweg");
break;
}
case 192022:
{
returnValue = F("Komiesenpatt");
break;
}
case 192023:
{
returnValue = F("Komisweg");
break;
}
case 192024:
{
returnValue = F("Komiteeflügel");
break;
}
case 192025:
{
returnValue = F("Komiteestr.");
break;
}
case 192026:
{
returnValue = F("Kommandantenstr.");
break;
}
case 192027:
{
returnValue = F("Kommandanturstr.");
break;
}
case 192028:
{
returnValue = F("Kommandeurallee");
break;
}
case 192029:
{
returnValue = F("Kommandeurstr.");
break;
}
case 192030:
{
returnValue = F("Kommandeursweg");
break;
}
case 192031:
{
returnValue = F("Kommandobrüch");
break;
}
case 192032:
{
returnValue = F("Kommend");
break;
}
case 192033:
{
returnValue = F("Kommende");
break;
}
case 192034:
{
returnValue = F("Kommendenstr.");
break;
}
case 192035:
{
returnValue = F("Kommendestr.");
break;
}
case 192036:
{
returnValue = F("Kommener Weg");
break;
}
case 192037:
{
returnValue = F("Kommentalstr.");
break;
}
case 192038:
{
returnValue = F("Kommenturei");
break;
}
case 192039:
{
returnValue = F("Kommenturgasse");
break;
}
case 192040:
{
returnValue = F("Kommerner Str.");
break;
}
case 192041:
{
returnValue = F("Kommerner Weg");
break;
}
case 192042:
{
returnValue = F("Kommerscheidter Str.");
break;
}
case 192043:
{
returnValue = F("Kommerstr.");
break;
}
case 192044:
{
returnValue = F("Kommerweg");
break;
}
case 192045:
{
returnValue = F("Kommerzienrat-Behrens-Str.");
break;
}
case 192046:
{
returnValue = F("Kommerzienrat-Dorfner-Str.");
break;
}
case 192047:
{
returnValue = F("Kommerzienrat-Hesse-Str.");
break;
}
case 192048:
{
returnValue = F("Kommerzienrat-Meindl-Str.");
break;
}
case 192049:
{
returnValue = F("Kommerzienrat-Meyer-Allee");
break;
}
case 192050:
{
returnValue = F("Kommerzienrat-Pflaum-Str.");
break;
}
case 192051:
{
returnValue = F("Kommerzienrat-Riexinger-Weg");
break;
}
case 192052:
{
returnValue = F("Kommerzienrat-Waldenfels-Str.");
break;
}
case 192053:
{
returnValue = F("Kommerzienrat-Zimmermann-Str.");
break;
}
case 192054:
{
returnValue = F("Kommgartenweg");
break;
}
case 192055:
{
returnValue = F("Kommischeidweg");
break;
}
case 192056:
{
returnValue = F("Kommissarsweg");
break;
}
case 192057:
{
returnValue = F("Kommissionsstr.");
break;
}
case 192058:
{
returnValue = F("Kommißstr.");
break;
}
case 192059:
{
returnValue = F("Kommlinger Weg");
break;
}
case 192060:
{
returnValue = F("Kommodore-Ahrens-Str.");
break;
}
case 192061:
{
returnValue = F("Kommodore-Bonte-Str.");
break;
}
case 192062:
{
returnValue = F("Kommodore-Johnsen-Str.");
break;
}
case 192063:
{
returnValue = F("Kommodore-Ziegenbein-Promenade");
break;
}
case 192064:
{
returnValue = F("Kommstr.");
break;
}
case 192065:
{
returnValue = F("Kommunalweg");
break;
}
case 192066:
{
returnValue = F("Kommunbrauhausweg");
break;
}
case 192067:
{
returnValue = F("Kommune");
break;
}
case 192068:
{
returnValue = F("Kommune-Chaussee");
break;
}
case 192069:
{
returnValue = F("Kommunikation");
break;
}
case 192070:
{
returnValue = F("Kommunikationsweg");
break;
}
case 192071:
{
returnValue = F("Kommunweg");
break;
}
case 192072:
{
returnValue = F("Kommweg");
break;
}
case 192073:
{
returnValue = F("Kommweidenstr.");
break;
}
case 192074:
{
returnValue = F("Komotauer Str.");
break;
}
case 192075:
{
returnValue = F("Komotauer Weg");
break;
}
case 192076:
{
returnValue = F("Kompagniegang");
break;
}
case 192077:
{
returnValue = F("Kompagniestr.");
break;
}
case 192078:
{
returnValue = F("Kompaniestr.");
break;
}
case 192079:
{
returnValue = F("Kompassweg");
break;
}
case 192080:
{
returnValue = F("Komper Str.");
break;
}
case 192081:
{
returnValue = F("Komperweg");
break;
}
case 192082:
{
returnValue = F("Kompsgasse");
break;
}
case 192083:
{
returnValue = F("Kompstr.");
break;
}
case 192084:
{
returnValue = F("Komptendorfer Dorfstr.");
break;
}
case 192085:
{
returnValue = F("Kompweg");
break;
}
case 192086:
{
returnValue = F("Komtureihof");
break;
}
case 192087:
{
returnValue = F("Komturgasse");
break;
}
case 192088:
{
returnValue = F("Komturhof");
break;
}
case 192089:
{
returnValue = F("Komturring");
break;
}
case 192090:
{
returnValue = F("Komtursteig");
break;
}
case 192091:
{
returnValue = F("Komturstr.");
break;
}
case 192092:
{
returnValue = F("Komturweg");
break;
}
case 192093:
{
returnValue = F("Komödchenstr.");
break;
}
case 192094:
{
returnValue = F("Konarskistr.");
break;
}
case 192095:
{
returnValue = F("Konauer Str.");
break;
}
case 192096:
{
returnValue = F("Kondelblick");
break;
}
case 192097:
{
returnValue = F("Kondelstr.");
break;
}
case 192098:
{
returnValue = F("Kondelweg");
break;
}
case 192099:
{
returnValue = F("Kondertal");
break;
}
case 192100:
{
returnValue = F("Kondikiller");
break;
}
case 192101:
{
returnValue = F("Konditorgaßl");
break;
}
case 192102:
{
returnValue = F("Kondorstr.");
break;
}
case 192103:
{
returnValue = F("Kondrauer Quellenweg");
break;
}
case 192104:
{
returnValue = F("Kondrauer Str.");
break;
}
case 192105:
{
returnValue = F("Kondringstr.");
break;
}
case 192106:
{
returnValue = F("Kondstr.");
break;
}
case 192107:
{
returnValue = F("Koneberg");
break;
}
case 192108:
{
returnValue = F("Koneberger Weg");
break;
}
case 192109:
{
returnValue = F("Konebergstr.");
break;
}
case 192110:
{
returnValue = F("Konenesch");
break;
}
case 192111:
{
returnValue = F("Konenhoek");
break;
}
case 192112:
{
returnValue = F("Konenpfad");
break;
}
case 192113:
{
returnValue = F("Konermannstr.");
break;
}
case 192114:
{
returnValue = F("Konerts Winkel");
break;
}
case 192115:
{
returnValue = F("Konertzweg");
break;
}
case 192116:
{
returnValue = F("Konfelder Str.");
break;
}
case 192117:
{
returnValue = F("Konferenzstr.");
break;
}
case 192118:
{
returnValue = F("Konfirmandenallee");
break;
}
case 192119:
{
returnValue = F("Konfurter Müller Weg");
break;
}
case 192120:
{
returnValue = F("Konfurter-Müller-Schneise");
break;
}
case 192121:
{
returnValue = F("Kong-Arrildshoj-Park");
break;
}
case 192122:
{
returnValue = F("Koniferenstr.");
break;
}
case 192123:
{
returnValue = F("Koniferenweg");
break;
}
case 192124:
{
returnValue = F("Konikweg");
break;
}
case 192125:
{
returnValue = F("Koniner Str.");
break;
}
case 192126:
{
returnValue = F("Konings-Iland");
break;
}
case 192127:
{
returnValue = F("Koningsstr.");
break;
}
case 192128:
{
returnValue = F("Koningsweg");
break;
}
case 192129:
{
returnValue = F("Konitzer Str.");
break;
}
case 192130:
{
returnValue = F("Konitzkyweg");
break;
}
case 192131:
{
returnValue = F("Konke-Oltmanns-Str.");
break;
}
case 192132:
{
returnValue = F("Konkenweg");
break;
}
case 192133:
{
returnValue = F("Konker Str.");
break;
}
case 192134:
{
returnValue = F("Konker Weg");
break;
}
case 192135:
{
returnValue = F("Konkordiasiedlung");
break;
}
case 192136:
{
returnValue = F("Konkordiastr.");
break;
}
case 192137:
{
returnValue = F("Konkordiaweg");
break;
}
case 192138:
{
returnValue = F("Konnefelder Str.");
break;
}
case 192139:
{
returnValue = F("Konnenbergstr.");
break;
}
case 192140:
{
returnValue = F("Konnenbergweg");
break;
}
case 192141:
{
returnValue = F("Konner Paradies");
break;
}
case 192142:
{
returnValue = F("Konner Pfad");
break;
}
case 192143:
{
returnValue = F("Konnersackerweg");
break;
}
case 192144:
{
returnValue = F("Konnersreuther Str.");
break;
}
case 192145:
{
returnValue = F("Konnersweg");
break;
}
case 192146:
{
returnValue = F("Konnstr.");
break;
}
case 192147:
{
returnValue = F("Konnwiese");
break;
}
case 192148:
{
returnValue = F("Konopkastr.");
break;
}
case 192149:
{
returnValue = F("Konower Weg");
break;
}
case 192150:
{
returnValue = F("Konrad-Adenauer Park");
break;
}
case 192151:
{
returnValue = F("Konrad-Adenauer-Allee");
break;
}
case 192152:
{
returnValue = F("Konrad-Adenauer-Anlage");
break;
}
case 192153:
{
returnValue = F("Konrad-Adenauer-Brücke");
break;
}
case 192154:
{
returnValue = F("Konrad-Adenauer-Damm");
break;
}
case 192155:
{
returnValue = F("Konrad-Adenauer-Höhe");
break;
}
case 192156:
{
returnValue = F("Konrad-Adenauer-Kreisel");
break;
}
case 192157:
{
returnValue = F("Konrad-Adenauer-Park");
break;
}
case 192158:
{
returnValue = F("Konrad-Adenauer-Platz");
break;
}
case 192159:
{
returnValue = F("Konrad-Adenauer-Promenade");
break;
}
case 192160:
{
returnValue = F("Konrad-Adenauer-Ring");
break;
}
case 192161:
{
returnValue = F("Konrad-Adenauer-Str.");
break;
}
case 192162:
{
returnValue = F("Konrad-Adenauer-Weg");
break;
}
case 192163:
{
returnValue = F("Konrad-Alt-Str.");
break;
}
case 192164:
{
returnValue = F("Konrad-Becker-Str.");
break;
}
case 192165:
{
returnValue = F("Konrad-Beste-Str.");
break;
}
case 192166:
{
returnValue = F("Konrad-Beste-Weg");
break;
}
case 192167:
{
returnValue = F("Konrad-Bloch-Str.");
break;
}
case 192168:
{
returnValue = F("Konrad-Buhmann-Str.");
break;
}
case 192169:
{
returnValue = F("Konrad-Böhner-Str.");
break;
}
case 192170:
{
returnValue = F("Konrad-Bürgel-Str.");
break;
}
case 192171:
{
returnValue = F("Konrad-Dorsel-Str.");
break;
}
case 192172:
{
returnValue = F("Konrad-Dreher-Str.");
break;
}
case 192173:
{
returnValue = F("Konrad-Duden-Allee");
break;
}
case 192174:
{
returnValue = F("Konrad-Duden-Str.");
break;
}
case 192175:
{
returnValue = F("Konrad-Eberhard-Weg");
break;
}
case 192176:
{
returnValue = F("Konrad-Engelhardt-Str.");
break;
}
case 192177:
{
returnValue = F("Konrad-Erlemann-Weg");
break;
}
case 192178:
{
returnValue = F("Konrad-Fahmüller-Str.");
break;
}
case 192179:
{
returnValue = F("Konrad-Ferdinand-Weg");
break;
}
case 192180:
{
returnValue = F("Konrad-Fink-Str.");
break;
}
case 192181:
{
returnValue = F("Konrad-Freudenstein-Str.");
break;
}
case 192182:
{
returnValue = F("Konrad-Frey-Str.");
break;
}
case 192183:
{
returnValue = F("Konrad-Fuchs-Str.");
break;
}
case 192184:
{
returnValue = F("Konrad-Förster-Gasse");
break;
}
case 192185:
{
returnValue = F("Konrad-Gaul-Str.");
break;
}
case 192186:
{
returnValue = F("Konrad-Geiger-Str.");
break;
}
case 192187:
{
returnValue = F("Konrad-Geißelbrecht-Str.");
break;
}
case 192188:
{
returnValue = F("Konrad-Groß-Str.");
break;
}
case 192189:
{
returnValue = F("Konrad-Haag-Str.");
break;
}
case 192190:
{
returnValue = F("Konrad-Haller-Str.");
break;
}
case 192191:
{
returnValue = F("Konrad-Haußmann-Weg");
break;
}
case 192192:
{
returnValue = F("Konrad-Haußner-Str.");
break;
}
case 192193:
{
returnValue = F("Konrad-Heby-Weg");
break;
}
case 192194:
{
returnValue = F("Konrad-Hegenauer-Str.");
break;
}
case 192195:
{
returnValue = F("Konrad-Heilig-Str.");
break;
}
case 192196:
{
returnValue = F("Konrad-Henrich-Str.");
break;
}
case 192197:
{
returnValue = F("Konrad-Hierthes-Str.");
break;
}
case 192198:
{
returnValue = F("Konrad-Hinze-Str.");
break;
}
case 192199:
{
returnValue = F("Konrad-Hofmann-Str.");
break;
}
case 192200:
{
returnValue = F("Konrad-Honings-Str.");
break;
}
case 192201:
{
returnValue = F("Konrad-Hornschuch-Str.");
break;
}
case 192202:
{
returnValue = F("Konrad-Huber-Str.");
break;
}
case 192203:
{
returnValue = F("Konrad-Huber-Weg");
break;
}
case 192204:
{
returnValue = F("Konrad-Häbe-Str.");
break;
}
case 192205:
{
returnValue = F("Konrad-Höhl-Str.");
break;
}
case 192206:
{
returnValue = F("Konrad-Kamm-Str.");
break;
}
case 192207:
{
returnValue = F("Konrad-Kappler-Str.");
break;
}
case 192208:
{
returnValue = F("Konrad-Kieser-Str.");
break;
}
case 192209:
{
returnValue = F("Konrad-Klotz-Str.");
break;
}
case 192210:
{
returnValue = F("Konrad-Knörr-Str.");
break;
}
case 192211:
{
returnValue = F("Konrad-Kocher-Str.");
break;
}
case 192212:
{
returnValue = F("Konrad-Koler-Weg");
break;
}
case 192213:
{
returnValue = F("Konrad-Kopp-Str.");
break;
}
case 192214:
{
returnValue = F("Konrad-Korte-Str.");
break;
}
case 192215:
{
returnValue = F("Konrad-Kramer-Str.");
break;
}
case 192216:
{
returnValue = F("Konrad-Krez-Str.");
break;
}
case 192217:
{
returnValue = F("Konrad-Krieger-Weg");
break;
}
case 192218:
{
returnValue = F("Konrad-Kuhn-Str.");
break;
}
case 192219:
{
returnValue = F("Konrad-Kurz-Str.");
break;
}
case 192220:
{
returnValue = F("Konrad-Kümmel-Weg");
break;
}
case 192221:
{
returnValue = F("Konrad-Lang-Str.");
break;
}
case 192222:
{
returnValue = F("Konrad-Lange-Str.");
break;
}
case 192223:
{
returnValue = F("Konrad-Lengenfelder-Str.");
break;
}
case 192224:
{
returnValue = F("Konrad-Lenzinger-Str.");
break;
}
case 192225:
{
returnValue = F("Konrad-Lerch-Ring");
break;
}
case 192226:
{
returnValue = F("Konrad-Lorenz-Weg");
break;
}
case 192227:
{
returnValue = F("Konrad-Luber-Str.");
break;
}
case 192228:
{
returnValue = F("Konrad-Lämmermann-Str.");
break;
}
case 192229:
{
returnValue = F("Konrad-Mager-Str.");
break;
}
case 192230:
{
returnValue = F("Konrad-Maisch-Str.");
break;
}
case 192231:
{
returnValue = F("Konrad-Manopp-Str.");
break;
}
case 192232:
{
returnValue = F("Konrad-Martin-Str.");
break;
}
case 192233:
{
returnValue = F("Konrad-Martin-Weg");
break;
}
case 192234:
{
returnValue = F("Konrad-Max-Kunz-Str.");
break;
}
case 192235:
{
returnValue = F("Konrad-Max-Kunz-Weg");
break;
}
case 192236:
{
returnValue = F("Konrad-Mayer-Str.");
break;
}
case 192237:
{
returnValue = F("Konrad-Miller-Str.");
break;
}
case 192238:
{
returnValue = F("Konrad-Muth-Str.");
break;
}
case 192239:
{
returnValue = F("Konrad-Müller-Str.");
break;
}
case 192240:
{
returnValue = F("Konrad-Naue-Str.");
break;
}
case 192241:
{
returnValue = F("Konrad-Nolte-Str.");
break;
}
case 192242:
{
returnValue = F("Konrad-Nägele-Str.");
break;
}
case 192243:
{
returnValue = F("Konrad-Oberst-Str.");
break;
}
case 192244:
{
returnValue = F("Konrad-Ott-Str.");
break;
}
case 192245:
{
returnValue = F("Konrad-Paulus-Weg");
break;
}
case 192246:
{
returnValue = F("Konrad-Popp-Platz");
break;
}
case 192247:
{
returnValue = F("Konrad-Potts-Allee");
break;
}
case 192248:
{
returnValue = F("Konrad-Prögel-Str.");
break;
}
case 192249:
{
returnValue = F("Konrad-Pürkel-Str.");
break;
}
case 192250:
{
returnValue = F("Konrad-Regler-Str.");
break;
}
case 192251:
{
returnValue = F("Konrad-Reichert-Str.");
break;
}
case 192252:
{
returnValue = F("Konrad-Reitz-Str.");
break;
}
case 192253:
{
returnValue = F("Konrad-Rimrod-Str.");
break;
}
case 192254:
{
returnValue = F("Konrad-Roos-Platz");
break;
}
case 192255:
{
returnValue = F("Konrad-Roth-Str.");
break;
}
case 192256:
{
returnValue = F("Konrad-Röntgen-Str.");
break;
}
case 192257:
{
returnValue = F("Konrad-Sam-Str.");
break;
}
case 192258:
{
returnValue = F("Konrad-Schardig-Str.");
break;
}
case 192259:
{
returnValue = F("Konrad-Scheidler-Str.");
break;
}
case 192260:
{
returnValue = F("Konrad-Schick-Str.");
break;
}
case 192261:
{
returnValue = F("Konrad-Schmalholz-Str.");
break;
}
case 192262:
{
returnValue = F("Konrad-Schmitt-Str.");
break;
}
case 192263:
{
returnValue = F("Konrad-Schnapp-Str.");
break;
}
case 192264:
{
returnValue = F("Konrad-Schneider-Weg");
break;
}
case 192265:
{
returnValue = F("Konrad-Schott-Str.");
break;
}
case 192266:
{
returnValue = F("Konrad-Schreiegg-Str.");
break;
}
case 192267:
{
returnValue = F("Konrad-Schrimpf-Str.");
break;
}
case 192268:
{
returnValue = F("Konrad-Schuler-Str.");
break;
}
case 192269:
{
returnValue = F("Konrad-Schwarz-Str.");
break;
}
case 192270:
{
returnValue = F("Konrad-Seel-Str.");
break;
}
case 192271:
{
returnValue = F("Konrad-Seifriz-Str.");
break;
}
case 192272:
{
returnValue = F("Konrad-Siebler-Str.");
break;
}
case 192273:
{
returnValue = F("Konrad-Sigl-Str.");
break;
}
case 192274:
{
returnValue = F("Konrad-Stecke-Weg");
break;
}
case 192275:
{
returnValue = F("Konrad-Steinbrecher-Str.");
break;
}
case 192276:
{
returnValue = F("Konrad-Struve-Str.");
break;
}
case 192277:
{
returnValue = F("Konrad-Stümer-Str.");
break;
}
case 192278:
{
returnValue = F("Konrad-Stürtzel-Str.");
break;
}
case 192279:
{
returnValue = F("Konrad-Thomas-Str.");
break;
}
case 192280:
{
returnValue = F("Konrad-Trageser-Str.");
break;
}
case 192281:
{
returnValue = F("Konrad-Triltsch-Str.");
break;
}
case 192282:
{
returnValue = F("Konrad-Utz-Str.");
break;
}
case 192283:
{
returnValue = F("Konrad-Veith-Weg");
break;
}
case 192284:
{
returnValue = F("Konrad-Wachsmann-Str.");
break;
}
case 192285:
{
returnValue = F("Konrad-Wagner-Str.");
break;
}
case 192286:
{
returnValue = F("Konrad-Wegner-Str.");
break;
}
case 192287:
{
returnValue = F("Konrad-Weichelt-Wanderweg");
break;
}
case 192288:
{
returnValue = F("Konrad-Weidner-Str.");
break;
}
case 192289:
{
returnValue = F("Konrad-Weiser-Str.");
break;
}
case 192290:
{
returnValue = F("Konrad-Weiß-Str.");
break;
}
case 192291:
{
returnValue = F("Konrad-Wenzel-Str.");
break;
}
case 192292:
{
returnValue = F("Konrad-Widerholt Grundschule Schulhof");
break;
}
case 192293:
{
returnValue = F("Konrad-Wilsdorf-Str.");
break;
}
case 192294:
{
returnValue = F("Konrad-Wirnhier-Str.");
break;
}
case 192295:
{
returnValue = F("Konrad-Wirt-Weg");
break;
}
case 192296:
{
returnValue = F("Konrad-Witz-Str.");
break;
}
case 192297:
{
returnValue = F("Konrad-Zehrt-Str.");
break;
}
case 192298:
{
returnValue = F("Konrad-Zeitler-Str.");
break;
}
case 192299:
{
returnValue = F("Konrad-Zeitlos-Str.");
break;
}
case 192300:
{
returnValue = F("Konrad-Ziegler-Str.");
break;
}
case 192301:
{
returnValue = F("Konrad-Zimmermann-Str.");
break;
}
case 192302:
{
returnValue = F("Konrad-Zirkel-Str.");
break;
}
case 192303:
{
returnValue = F("Konrad-Zuse-Allee");
break;
}
case 192304:
{
returnValue = F("Konrad-Zuse-Bogen");
break;
}
case 192305:
{
returnValue = F("Konrad-Zuse-Platz");
break;
}
case 192306:
{
returnValue = F("Konrad-Zuse-Ring");
break;
}
case 192307:
{
returnValue = F("Konrad-Zuse-Str.");
break;
}
case 192308:
{
returnValue = F("Konrad-Zuse-Weg");
break;
}
case 192309:
{
returnValue = F("Konrad-von-Bergheim-Weg");
break;
}
case 192310:
{
returnValue = F("Konrad-von-Brauneck-Str.");
break;
}
case 192311:
{
returnValue = F("Konrad-von-Daun-Str.");
break;
}
case 192312:
{
returnValue = F("Konrad-von-Dürn-Str.");
break;
}
case 192313:
{
returnValue = F("Konrad-von-Hageln-Str.");
break;
}
case 192314:
{
returnValue = F("Konrad-von-Hebel-Str.");
break;
}
case 192315:
{
returnValue = F("Konrad-von-Hochstaden-Platz");
break;
}
case 192316:
{
returnValue = F("Konrad-von-Hochstaden-Str.");
break;
}
case 192317:
{
returnValue = F("Konrad-von-Megenberg-Str.");
break;
}
case 192318:
{
returnValue = F("Konrad-von-Querfurt-Str.");
break;
}
case 192319:
{
returnValue = F("Konrad-von-Rötteln-Str.");
break;
}
case 192320:
{
returnValue = F("Konrad-von-Soest-Str.");
break;
}
case 192321:
{
returnValue = F("Konradgasse");
break;
}
case 192322:
{
returnValue = F("Konradigasse");
break;
}
case 192323:
{
returnValue = F("Konradin-Kreutzer-Str.");
break;
}
case 192324:
{
returnValue = F("Konradin-Kreutzer-Weg");
break;
}
case 192325:
{
returnValue = F("Konrading");
break;
}
case 192326:
{
returnValue = F("Konradinstr.");
break;
}
case 192327:
{
returnValue = F("Konradistr.");
break;
}
case 192328:
{
returnValue = F("Konradsburger Str.");
break;
}
case 192329:
{
returnValue = F("Konradsbühl");
break;
}
case 192330:
{
returnValue = F("Konradsdorfer Str.");
break;
}
case 192331:
{
returnValue = F("Konradsgraben");
break;
}
case 192332:
{
returnValue = F("Konradsgrund");
break;
}
case 192333:
{
returnValue = F("Konradshofer Str.");
break;
}
case 192334:
{
returnValue = F("Konradshofweg");
break;
}
case 192335:
{
returnValue = F("Konradshöhe");
break;
}
case 192336:
{
returnValue = F("Konradsreuth");
break;
}
case 192337:
{
returnValue = F("Konradsreuther Str.");
break;
}
case 192338:
{
returnValue = F("Konradstr.");
break;
}
case 192339:
{
returnValue = F("Konradsweg");
break;
}
case 192340:
{
returnValue = F("Konradusstr.");
break;
}
case 192341:
{
returnValue = F("Konradweg");
break;
}
case 192342:
{
returnValue = F("Konrathsbrand");
break;
}
case 192343:
{
returnValue = F("Konrektor-Walter-Str.");
break;
}
case 192344:
{
returnValue = F("Konroder Str.");
break;
}
case 192345:
{
returnValue = F("Konroder Weg");
break;
}
case 192346:
{
returnValue = F("Konrottstr.");
break;
}
case 192347:
{
returnValue = F("Konsages");
break;
}
case 192348:
{
returnValue = F("Konserheider Weg");
break;
}
case 192349:
{
returnValue = F("Konsistorium");
break;
}
case 192350:
{
returnValue = F("Konsortstr.");
break;
}
case 192351:
{
returnValue = F("Konstantin-Bader-Str.");
break;
}
case 192352:
{
returnValue = F("Konstantin-Dausch-Str.");
break;
}
case 192353:
{
returnValue = F("Konstantin-E.-Ziolkowski-Ring");
break;
}
case 192354:
{
returnValue = F("Konstantin-Fehrenbach-Str.");
break;
}
case 192355:
{
returnValue = F("Konstantin-Kempf-Str.");
break;
}
case 192356:
{
returnValue = F("Konstantin-Killmaier-Weg");
break;
}
case 192357:
{
returnValue = F("Konstantin-Noppel-Str.");
break;
}
case 192358:
{
returnValue = F("Konstantin-Pader-Str.");
break;
}
case 192359:
{
returnValue = F("Konstantin-Reich-Str.");
break;
}
case 192360:
{
returnValue = F("Konstantin-Schmäh-Str.");
break;
}
case 192361:
{
returnValue = F("Konstantin-Vanotti-Str.");
break;
}
case 192362:
{
returnValue = F("Konstantin-Ziolkowski-Str.");
break;
}
case 192363:
{
returnValue = F("Konstantin-Ziolkowsky-Str.");
break;
}
case 192364:
{
returnValue = F("Konstantinbader Str.");
break;
}
case 192365:
{
returnValue = F("Konstantinforst");
break;
}
case 192366:
{
returnValue = F("Konstantinshöhe");
break;
}
case 192367:
{
returnValue = F("Konstantinstr.");
break;
}
case 192368:
{
returnValue = F("Konstanzer");
break;
}
case 192369:
{
returnValue = F("Konstanzer Brücke");
break;
}
case 192370:
{
returnValue = F("Konstanzer Str.");
break;
}
case 192371:
{
returnValue = F("Konstanzer Weg");
break;
}
case 192372:
{
returnValue = F("Konstanzer Äcker");
break;
}
case 192373:
{
returnValue = F("Konstanzerweg");
break;
}
case 192374:
{
returnValue = F("Konsteiner Str.");
break;
}
case 192375:
{
returnValue = F("Konsul-Fokken-Str.");
break;
}
case 192376:
{
returnValue = F("Konsul-Lieder-Allee");
break;
}
case 192377:
{
returnValue = F("Konsul-Lindner-Str.");
break;
}
case 192378:
{
returnValue = F("Konsul-Lorentzen-Str.");
break;
}
case 192379:
{
returnValue = F("Konsul-Reiß-Str.");
break;
}
case 192380:
{
returnValue = F("Konsul-Rühmann-Str.");
break;
}
case 192381:
{
returnValue = F("Konsul-Uebele-Str.");
break;
}
case 192382:
{
returnValue = F("Konsul-Vejento-Str.");
break;
}
case 192383:
{
returnValue = F("Konsul-Wester-Str.");
break;
}
case 192384:
{
returnValue = F("Konsul-Wolff-Str.");
break;
}
case 192385:
{
returnValue = F("Konsulplatz");
break;
}
case 192386:
{
returnValue = F("Konsulstr.");
break;
}
case 192387:
{
returnValue = F("Konsulweg");
break;
}
case 192388:
{
returnValue = F("Konsum-Witte-Str.");
break;
}
case 192389:
{
returnValue = F("Konsumberg");
break;
}
case 192390:
{
returnValue = F("Konsumbrücke");
break;
}
case 192391:
{
returnValue = F("Konsumgasse");
break;
}
case 192392:
{
returnValue = F("Konsumgenossenschaftsweg");
break;
}
case 192393:
{
returnValue = F("Konsumring");
break;
}
case 192394:
{
returnValue = F("Konsumsgasse");
break;
}
case 192395:
{
returnValue = F("Konsumspättche");
break;
}
case 192396:
{
returnValue = F("Konsumstr.");
break;
}
case 192397:
{
returnValue = F("Konsumweg");
break;
}
case 192398:
{
returnValue = F("Konterschaft");
break;
}
case 192399:
{
returnValue = F("Kontorstr.");
break;
}
case 192400:
{
returnValue = F("Kontrastr.");
break;
}
case 192401:
{
returnValue = F("Kontzmairstr.");
break;
}
case 192402:
{
returnValue = F("Konvent");
break;
}
case 192403:
{
returnValue = F("Konventgarten");
break;
}
case 192404:
{
returnValue = F("Konventshof");
break;
}
case 192405:
{
returnValue = F("Konventsteig");
break;
}
case 192406:
{
returnValue = F("Konventstr.");
break;
}
case 192407:
{
returnValue = F("Konviktstr.");
break;
}
case 192408:
{
returnValue = F("Konviktsweg");
break;
}
case 192409:
{
returnValue = F("Konzeller Str.");
break;
}
case 192410:
{
returnValue = F("Konzenbergstr.");
break;
}
case 192411:
{
returnValue = F("Konzenbergweg");
break;
}
case 192412:
{
returnValue = F("Konzenbuck");
break;
}
case 192413:
{
returnValue = F("Konzendorfer Str.");
break;
}
case 192414:
{
returnValue = F("Konzenwiesweg");
break;
}
case 192415:
{
returnValue = F("Konzer Berg");
break;
}
case 192416:
{
returnValue = F("Konzer Str.");
break;
}
case 192417:
{
returnValue = F("Konzerberg");
break;
}
case 192418:
{
returnValue = F("Konzerbrück");
break;
}
case 192419:
{
returnValue = F("Konzertbühne im Kurpark");
break;
}
case 192420:
{
returnValue = F("Konzilstr.");
break;
}
case 192421:
{
returnValue = F("Koobenweg");
break;
}
case 192422:
{
returnValue = F("Koobes an `n Diek");
break;
}
case 192423:
{
returnValue = F("Koogchaussee");
break;
}
case 192424:
{
returnValue = F("Koogschaussee");
break;
}
case 192425:
{
returnValue = F("Koogskuhl");
break;
}
case 192426:
{
returnValue = F("Koogsmittelweg");
break;
}
case 192427:
{
returnValue = F("Koogsreihe");
break;
}
case 192428:
{
returnValue = F("Koogstr.");
break;
}
case 192429:
{
returnValue = F("Koogsweg");
break;
}
case 192430:
{
returnValue = F("Koogweg");
break;
}
case 192431:
{
returnValue = F("Kookamp");
break;
}
case 192432:
{
returnValue = F("Kookweg");
break;
}
case 192433:
{
returnValue = F("Kooperationsstr.");
break;
}
case 192434:
{
returnValue = F("Koopersand");
break;
}
case 192435:
{
returnValue = F("Koopfore");
break;
}
case 192436:
{
returnValue = F("Koopmannsfeld");
break;
}
case 192437:
{
returnValue = F("Koopmannstr.");
break;
}
case 192438:
{
returnValue = F("Koopmannsweg");
break;
}
case 192439:
{
returnValue = F("Koopskamp");
break;
}
case 192440:
{
returnValue = F("Koopsweg");
break;
}
case 192441:
{
returnValue = F("Koopweg");
break;
}
case 192442:
{
returnValue = F("Koosbüscher Str.");
break;
}
case 192443:
{
returnValue = F("Kooser Weg");
break;
}
case 192444:
{
returnValue = F("Kootweg");
break;
}
case 192445:
{
returnValue = F("Kop Nück");
break;
}
case 192446:
{
returnValue = F("Kopendorfer Weg");
break;
}
case 192447:
{
returnValue = F("Kopenhagener Allee");
break;
}
case 192448:
{
returnValue = F("Kopenhagener Str.");
break;
}
case 192449:
{
returnValue = F("Kopenhagener Weg");
break;
}
case 192450:
{
returnValue = F("Kopenhagenweg");
break;
}
case 192451:
{
returnValue = F("Kopenweg");
break;
}
case 192452:
{
returnValue = F("Kopernikushöhe");
break;
}
case 192453:
{
returnValue = F("Kopernikusplatz");
break;
}
case 192454:
{
returnValue = F("Kopernikusring");
break;
}
case 192455:
{
returnValue = F("Kopernikusstr.");
break;
}
case 192456:
{
returnValue = F("Kopernikusweg");
break;
}
case 192457:
{
returnValue = F("Kopersand");
break;
}
case 192458:
{
returnValue = F("Kopf Weg");
break;
}
case 192459:
{
returnValue = F("Kopf-Rundweg");
break;
}
case 192460:
{
returnValue = F("Kopfackerweg");
break;
}
case 192461:
{
returnValue = F("Kopfbergweg");
break;
}
case 192462:
{
returnValue = F("Kopfenstr.");
break;
}
case 192463:
{
returnValue = F("Kopfgäßchen");
break;
}
case 192464:
{
returnValue = F("Kopfham");
break;
}
case 192465:
{
returnValue = F("Kopfhausstr.");
break;
}
case 192466:
{
returnValue = F("Kopflesweg");
break;
}
case 192467:
{
returnValue = F("Kopflindenallee");
break;
}
case 192468:
{
returnValue = F("Kopframpe");
break;
}
case 192469:
{
returnValue = F("Kopfsiefen");
break;
}
case 192470:
{
returnValue = F("Kopfstattstr.");
break;
}
case 192471:
{
returnValue = F("Kopfsteiner Weg");
break;
}
case 192472:
{
returnValue = F("Kopfsteinstr.");
break;
}
case 192473:
{
returnValue = F("Kopfstr.");
break;
}
case 192474:
{
returnValue = F("Kopfweg");
break;
}
case 192475:
{
returnValue = F("Kopfweiden");
break;
}
case 192476:
{
returnValue = F("Kopfweidenweg");
break;
}
case 192477:
{
returnValue = F("Kopfzipfelweg");
break;
}
case 192478:
{
returnValue = F("Kopheisterweg");
break;
}
case 192479:
{
returnValue = F("Kopitzsch");
break;
}
case 192480:
{
returnValue = F("Koplinger Tor");
break;
}
case 192481:
{
returnValue = F("Koplingstr.");
break;
}
case 192482:
{
returnValue = F("Kopnück");
break;
}
case 192483:
{
returnValue = F("Koppachweg");
break;
}
case 192484:
{
returnValue = F("Koppatzer Ausbau");
break;
}
case 192485:
{
returnValue = F("Koppatzer Gasse");
break;
}
case 192486:
{
returnValue = F("Koppatzer Hauptstr.");
break;
}
case 192487:
{
returnValue = F("Koppatzer Str.");
break;
}
case 192488:
{
returnValue = F("Koppatzer Weg");
break;
}
case 192489:
{
returnValue = F("Koppbach");
break;
}
case 192490:
{
returnValue = F("Koppehlstr.");
break;
}
case 192491:
{
returnValue = F("Koppehof");
break;
}
case 192492:
{
returnValue = F("Koppehof bis Moorhof");
break;
}
case 192493:
{
returnValue = F("Koppel");
break;
}
case 192494:
{
returnValue = F("Koppel der Künste");
break;
}
case 192495:
{
returnValue = F("Koppelanger");
break;
}
case 192496:
{
returnValue = F("Koppelberg");
break;
}
case 192497:
{
returnValue = F("Koppelbergstr.");
break;
}
case 192498:
{
returnValue = F("Koppelbergweg");
break;
}
case 192499:
{
returnValue = F("Koppelbrede");
break;
}
case 192500:
{
returnValue = F("Koppelbrook");
break;
}
case 192501:
{
returnValue = F("Koppelbusch");
break;
}
case 192502:
{
returnValue = F("Koppeldamm");
break;
}
case 192503:
{
returnValue = F("Koppeldeich");
break;
}
case 192504:
{
returnValue = F("Koppeldiek");
break;
}
case 192505:
{
returnValue = F("Koppeler Busch");
break;
}
case 192506:
{
returnValue = F("Koppeler Höhe");
break;
}
case 192507:
{
returnValue = F("Koppelgang");
break;
}
case 192508:
{
returnValue = F("Koppelgasse");
break;
}
case 192509:
{
returnValue = F("Koppelheck");
break;
}
case 192510:
{
returnValue = F("Koppelheide");
break;
}
case 192511:
{
returnValue = F("Koppelhof");
break;
}
case 192512:
{
returnValue = F("Koppelingstiege");
break;
}
case 192513:
{
returnValue = F("Koppelkamp");
break;
}
case 192514:
{
returnValue = F("Koppelkampsweg");
break;
}
case 192515:
{
returnValue = F("Koppelkaten");
break;
}
case 192516:
{
returnValue = F("Koppelkaute");
break;
}
case 192517:
{
returnValue = F("Koppelknechtsdamm");
break;
}
case 192518:
{
returnValue = F("Koppelkämpe");
break;
}
case 192519:
{
returnValue = F("Koppelmannsweg");
break;
}
case 192520:
{
returnValue = F("Koppelow");
break;
}
case 192521:
{
returnValue = F("Koppelpfad");
break;
}
case 192522:
{
returnValue = F("Koppelreihe");
break;
}
case 192523:
{
returnValue = F("Koppelring");
break;
}
case 192524:
{
returnValue = F("Koppelsberg");
break;
}
case 192525:
{
returnValue = F("Koppelsbergweg");
break;
}
case 192526:
{
returnValue = F("Koppelsbruch");
break;
}
case 192527:
{
returnValue = F("Koppelsche Tannen");
break;
}
case 192528:
{
returnValue = F("Koppelsgrund");
break;
}
case 192529:
{
returnValue = F("Koppelstieg");
break;
}
case 192530:
{
returnValue = F("Koppelstr.");
break;
}
case 192531:
{
returnValue = F("Koppelteich");
break;
}
case 192532:
{
returnValue = F("Koppeltsgrundweg");
break;
}
case 192533:
{
returnValue = F("Koppeltwiete");
break;
}
case 192534:
{
returnValue = F("Koppelwasen");
break;
}
case 192535:
{
returnValue = F("Koppelweg");
break;
}
case 192536:
{
returnValue = F("Koppelweg I");
break;
}
case 192537:
{
returnValue = F("Koppelweg III");
break;
}
case 192538:
{
returnValue = F("Koppelwegle");
break;
}
case 192539:
{
returnValue = F("Koppelweide");
break;
}
case 192540:
{
returnValue = F("Koppelwiese");
break;
}
case 192541:
{
returnValue = F("Koppelwiesenweg");
break;
}
case 192542:
{
returnValue = F("Koppenackerweg");
break;
}
case 192543:
{
returnValue = F("Koppenalmweg");
break;
}
case 192544:
{
returnValue = F("Koppenbacher Str.");
break;
}
case 192545:
{
returnValue = F("Koppenbergs Hof");
break;
}
case 192546:
{
returnValue = F("Koppenbergweiher");
break;
}
case 192547:
{
returnValue = F("Koppenborgsweg");
break;
}
case 192548:
{
returnValue = F("Koppenbrück");
break;
}
case 192549:
{
returnValue = F("Koppenbrücker Str.");
break;
}
case 192550:
{
returnValue = F("Koppenbuck");
break;
}
case 192551:
{
returnValue = F("Koppenburgstr.");
break;
}
case 192552:
{
returnValue = F("Koppenbühlstr.");
break;
}
case 192553:
{
returnValue = F("Koppenfeldweg");
break;
}
case 192554:
{
returnValue = F("Koppengasse");
break;
}
case 192555:
{
returnValue = F("Koppengässle");
break;
}
case 192556:
{
returnValue = F("Koppenhagen");
break;
}
case 192557:
{
returnValue = F("Koppenhofer Str.");
break;
}
case 192558:
{
returnValue = F("Koppenkreutweg");
break;
}
case 192559:
{
returnValue = F("Koppenliede");
break;
}
case 192560:
{
returnValue = F("Koppenlohe");
break;
}
case 192561:
{
returnValue = F("Koppenplatz");
break;
}
case 192562:
{
returnValue = F("Koppenrain");
break;
}
case 192563:
{
returnValue = F("Koppenrodt");
break;
}
case 192564:
{
returnValue = F("Koppensteiner Weg");
break;
}
case 192565:
{
returnValue = F("Koppensteinstr.");
break;
}
case 192566:
{
returnValue = F("Koppensteinweg");
break;
}
case 192567:
{
returnValue = F("Koppenstr.");
break;
}
case 192568:
{
returnValue = F("Koppenwaldstr.");
break;
}
case 192569:
{
returnValue = F("Koppenwall");
break;
}
case 192570:
{
returnValue = F("Koppenwaller Weg");
break;
}
case 192571:
{
returnValue = F("Koppenweg");
break;
}
case 192572:
{
returnValue = F("Koppenzeller Str.");
break;
}
case 192573:
{
returnValue = F("Koppenzeller Weg");
break;
}
case 192574:
{
returnValue = F("Koppenäcker");
break;
}
case 192575:
{
returnValue = F("Kopper Str.");
break;
}
case 192576:
{
returnValue = F("Kopperhörner Str.");
break;
}
case 192577:
{
returnValue = F("Kopperpahler Allee");
break;
}
case 192578:
{
returnValue = F("Kopperpesch");
break;
}
case 192579:
{
returnValue = F("Koppers Fohre");
break;
}
case 192580:
{
returnValue = F("Kopperskamp");
break;
}
case 192581:
{
returnValue = F("Koppersmühle");
break;
}
case 192582:
{
returnValue = F("Kopperweg");
break;
}
case 192583:
{
returnValue = F("Koppeslandweg");
break;
}
case 192584:
{
returnValue = F("Koppestr.");
break;
}
case 192585:
{
returnValue = F("Koppetentorstr.");
break;
}
case 192586:
{
returnValue = F("Koppeweg");
break;
}
case 192587:
{
returnValue = F("Koppewiese");
break;
}
case 192588:
{
returnValue = F("Koppgasse");
break;
}
case 192589:
{
returnValue = F("Koppisrain");
break;
}
case 192590:
{
returnValue = F("Koppleiten");
break;
}
case 192591:
{
returnValue = F("Koppler Str.");
break;
}
case 192592:
{
returnValue = F("Kopplergasse");
break;
}
case 192593:
{
returnValue = F("Kopplersweij");
break;
}
case 192594:
{
returnValue = F("Kopplerweg");
break;
}
case 192595:
{
returnValue = F("Kopplowsweg");
break;
}
case 192596:
{
returnValue = F("Koppoldstr.");
break;
}
case 192597:
{
returnValue = F("Koppsgasse");
break;
}
case 192598:
{
returnValue = F("Koppstr.");
break;
}
case 192599:
{
returnValue = F("Koppwaldsträßle");
break;
}
case 192600:
{
returnValue = F("Kopscheid");
break;
}
case 192601:
{
returnValue = F("Kopscheider Str.");
break;
}
case 192602:
{
returnValue = F("Kopstedter Str.");
break;
}
case 192603:
{
returnValue = F("Korallenring");
break;
}
case 192604:
{
returnValue = F("Korallenstr.");
break;
}
case 192605:
{
returnValue = F("Korallenweg");
break;
}
case 192606:
{
returnValue = F("Korb");
break;
}
case 192607:
{
returnValue = F("Korb-Schneise");
break;
}
case 192608:
{
returnValue = F("Korbacher Landstr.");
break;
}
case 192609:
{
returnValue = F("Korbacher Ring");
break;
}
case 192610:
{
returnValue = F("Korbacher Str.");
break;
}
case 192611:
{
returnValue = F("Korbacher Weg");
break;
}
case 192612:
{
returnValue = F("Korbecke");
break;
}
case 192613:
{
returnValue = F("Korbecker Weg");
break;
}
case 192614:
{
returnValue = F("Korbeinering");
break;
}
case 192615:
{
returnValue = F("Korbeineweg");
break;
}
case 192616:
{
returnValue = F("Korber Steige");
break;
}
case 192617:
{
returnValue = F("Korber Str.");
break;
}
case 192618:
{
returnValue = F("Korber Weg");
break;
}
case 192619:
{
returnValue = F("Korber-Kopf-Weg");
break;
}
case 192620:
{
returnValue = F("Korberg");
break;
}
case 192621:
{
returnValue = F("Korberger Matt");
break;
}
case 192622:
{
returnValue = F("Korberweg");
break;
}
case 192623:
{
returnValue = F("Korbethaer Str.");
break;
}
case 192624:
{
returnValue = F("Korbfeilenweg");
break;
}
case 192625:
{
returnValue = F("Korbflechterstr.");
break;
}
case 192626:
{
returnValue = F("Korbgasse");
break;
}
case 192627:
{
returnValue = F("Korbgraben");
break;
}
case 192628:
{
returnValue = F("Korbheide");
break;
}
case 192629:
{
returnValue = F("Korbigt");
break;
}
case 192630:
{
returnValue = F("Korbinian-Aigner-Weg");
break;
}
case 192631:
{
returnValue = F("Korbinian-Penzl-Str.");
break;
}
case 192632:
{
returnValue = F("Korbinian-Westermair-Str.");
break;
}
case 192633:
{
returnValue = F("Korbinianplatz");
break;
}
case 192634:
{
returnValue = F("Korbinianstr.");
break;
}
case 192635:
{
returnValue = F("Korbiniansweg");
break;
}
case 192636:
{
returnValue = F("Korbinianweg");
break;
}
case 192637:
{
returnValue = F("Korbitzer Str.");
break;
}
case 192638:
{
returnValue = F("Korbmachersteg");
break;
}
case 192639:
{
returnValue = F("Korbmacherstr.");
break;
}
case 192640:
{
returnValue = F("Korbmacherweg");
break;
}
case 192641:
{
returnValue = F("Korbsgasse");
break;
}
case 192642:
{
returnValue = F("Korbsholz");
break;
}
case 192643:
{
returnValue = F("Korbstr.");
break;
}
case 192644:
{
returnValue = F("Korbußen");
break;
}
case 192645:
{
returnValue = F("Korbußener Chaussee");
break;
}
case 192646:
{
returnValue = F("Korbußener Weg");
break;
}
case 192647:
{
returnValue = F("Korbweg");
break;
}
case 192648:
{
returnValue = F("Korbweidenstr.");
break;
}
case 192649:
{
returnValue = F("Korbweidenweg");
break;
}
case 192650:
{
returnValue = F("Korczakstr.");
break;
}
case 192651:
{
returnValue = F("Korczakweg");
break;
}
case 192652:
{
returnValue = F("Kordeler Str.");
break;
}
case 192653:
{
returnValue = F("Kordelstr.");
break;
}
case 192654:
{
returnValue = F("Korder Weg");
break;
}
case 192655:
{
returnValue = F("Kordestr.");
break;
}
case 192656:
{
returnValue = F("Kordhankeweg");
break;
}
case 192657:
{
returnValue = F("Kordongasse");
break;
}
case 192658:
{
returnValue = F("Kordulastr.");
break;
}
case 192659:
{
returnValue = F("Korellengarten");
break;
}
case 192660:
{
returnValue = F("Korfesstr.");
break;
}
case 192661:
{
returnValue = F("Korffstr.");
break;
}
case 192662:
{
returnValue = F("Korfgasse");
break;
}
case 192663:
{
returnValue = F("Korfhageweg");
break;
}
case 192664:
{
returnValue = F("Korfmacherstr.");
break;
}
case 192665:
{
returnValue = F("Korfmakers Weg");
break;
}
case 192666:
{
returnValue = F("Korfskamp");
break;
}
case 192667:
{
returnValue = F("Korfskämper Schulweg");
break;
}
case 192668:
{
returnValue = F("Korfustr.");
break;
}
case 192669:
{
returnValue = F("Korgauer Str.");
break;
}
case 192670:
{
returnValue = F("Korianderweg");
break;
}
case 192671:
{
returnValue = F("Korinthenstr.");
break;
}
case 192672:
{
returnValue = F("Korinthenweg");
break;
}
case 192673:
{
returnValue = F("Korisstr.");
break;
}
case 192674:
{
returnValue = F("Korkeichenstr.");
break;
}
case 192675:
{
returnValue = F("Korkenstr.");
break;
}
case 192676:
{
returnValue = F("Korkenziehertrasse");
break;
}
case 192677:
{
returnValue = F("Korker Str.");
break;
}
case 192678:
{
returnValue = F("Korker Waldstr.");
break;
}
case 192679:
{
returnValue = F("Korkwisch");
break;
}
case 192680:
{
returnValue = F("Korl-Biegemann-Str.");
break;
}
case 192681:
{
returnValue = F("Korlenbergstr.");
break;
}
case 192682:
{
returnValue = F("Korlinger Mühle");
break;
}
case 192683:
{
returnValue = F("Kormannshausen");
break;
}
case 192684:
{
returnValue = F("Kormannstr.");
break;
}
case 192685:
{
returnValue = F("Kormorangang");
break;
}
case 192686:
{
returnValue = F("Kormoranstr.");
break;
}
case 192687:
{
returnValue = F("Kormoranweg");
break;
}
case 192688:
{
returnValue = F("Korna");
break;
}
case 192689:
{
returnValue = F("Kornacherstr.");
break;
}
case 192690:
{
returnValue = F("Kornacker");
break;
}
case 192691:
{
returnValue = F("Kornackerstr.");
break;
}
case 192692:
{
returnValue = F("Kornackerweg");
break;
}
case 192693:
{
returnValue = F("Kornaer Str.");
break;
}
case 192694:
{
returnValue = F("Kornaer Weg");
break;
}
case 192695:
{
returnValue = F("Kornanger");
break;
}
case 192696:
{
returnValue = F("Kornau");
break;
}
case 192697:
{
returnValue = F("Kornbach");
break;
}
case 192698:
{
returnValue = F("Kornbacher Str.");
break;
}
case 192699:
{
returnValue = F("Kornbacher Weg");
break;
}
case 192700:
{
returnValue = F("Kornbachtal");
break;
}
case 192701:
{
returnValue = F("Kornbeckstr.");
break;
}
case 192702:
{
returnValue = F("Kornbeektal");
break;
}
case 192703:
{
returnValue = F("Kornberg");
break;
}
case 192704:
{
returnValue = F("Kornbergblick");
break;
}
case 192705:
{
returnValue = F("Kornberger Weg");
break;
}
case 192706:
{
returnValue = F("Kornbergringweg");
break;
}
case 192707:
{
returnValue = F("Kornbergsiedlerstr.");
break;
}
case 192708:
{
returnValue = F("Kornbergstr.");
break;
}
case 192709:
{
returnValue = F("Kornbergsweg");
break;
}
case 192710:
{
returnValue = F("Kornbergweg");
break;
}
case 192711:
{
returnValue = F("Kornbeut");
break;
}
case 192712:
{
returnValue = F("Kornbichlstr.");
break;
}
case 192713:
{
returnValue = F("Kornbitz");
break;
}
case 192714:
{
returnValue = F("Kornbitze");
break;
}
case 192715:
{
returnValue = F("Kornbitzweg");
break;
}
case 192716:
{
returnValue = F("Kornblick");
break;
}
case 192717:
{
returnValue = F("Kornblumeneck");
break;
}
case 192718:
{
returnValue = F("Kornblumengasse");
break;
}
case 192719:
{
returnValue = F("Kornblumenkamp");
break;
}
case 192720:
{
returnValue = F("Kornblumenring");
break;
}
case 192721:
{
returnValue = F("Kornblumenstr.");
break;
}
case 192722:
{
returnValue = F("Kornblumenweg");
break;
}
case 192723:
{
returnValue = F("Kornborn");
break;
}
case 192724:
{
returnValue = F("Kornbrunnenstr.");
break;
}
case 192725:
{
returnValue = F("Kornbrunnenweg");
break;
}
case 192726:
{
returnValue = F("Kornbrühl");
break;
}
case 192727:
{
returnValue = F("Kornbuckelweg");
break;
}
case 192728:
{
returnValue = F("Kornburger Str.");
break;
}
case 192729:
{
returnValue = F("Kornburgsweg");
break;
}
case 192730:
{
returnValue = F("Kornbusch");
break;
}
case 192731:
{
returnValue = F("Kornbühl-Rundweg");
break;
}
case 192732:
{
returnValue = F("Kornbühlstr.");
break;
}
case 192733:
{
returnValue = F("Kornbühlweg");
break;
}
case 192734:
{
returnValue = F("Korndeich");
break;
}
case 192735:
{
returnValue = F("Korndeichsweg");
break;
}
case 192736:
{
returnValue = F("Korndiek");
break;
}
case 192737:
{
returnValue = F("Korndorffweg");
break;
}
case 192738:
{
returnValue = F("Korneck");
break;
}
case 192739:
{
returnValue = F("Kornegger Weg");
break;
}
case 192740:
{
returnValue = F("Kornelius-Feyen-Str.");
break;
}
case 192741:
{
returnValue = F("Korneliusgraben");
break;
}
case 192742:
{
returnValue = F("Korneliusstr.");
break;
}
case 192743:
{
returnValue = F("Kornfeld");
break;
}
case 192744:
{
returnValue = F("Kornfeldle");
break;
}
case 192745:
{
returnValue = F("Kornfeldstr.");
break;
}
case 192746:
{
returnValue = F("Kornfeldweg");
break;
}
case 192747:
{
returnValue = F("Kornflur");
break;
}
case 192748:
{
returnValue = F("Korngartenstr.");
break;
}
case 192749:
{
returnValue = F("Korngartenweg");
break;
}
case 192750:
{
returnValue = F("Korngasse");
break;
}
case 192751:
{
returnValue = F("Korngast");
break;
}
case 192752:
{
returnValue = F("Korngoldstr.");
break;
}
case 192753:
{
returnValue = F("Korngrundweg");
break;
}
case 192754:
{
returnValue = F("Korngärtenstr.");
break;
}
case 192755:
{
returnValue = F("Kornhahn");
break;
}
case 192756:
{
returnValue = F("Kornhahnstr.");
break;
}
case 192757:
{
returnValue = F("Kornhainer Str.");
break;
}
case 192758:
{
returnValue = F("Kornhalde");
break;
}
case 192759:
{
returnValue = F("Kornhardtweg");
break;
}
case 192760:
{
returnValue = F("Kornhausgasse");
break;
}
case 192761:
{
returnValue = F("Kornhausgäßle");
break;
}
case 192762:
{
returnValue = F("Kornhausplatz");
break;
}
case 192763:
{
returnValue = F("Kornhausstr.");
break;
}
case 192764:
{
returnValue = F("Kornhausweg");
break;
}
case 192765:
{
returnValue = F("Kornhochheimer Str.");
break;
}
case 192766:
{
returnValue = F("Kornhof");
break;
}
case 192767:
{
returnValue = F("Kornhoop");
break;
}
case 192768:
{
returnValue = F("Kornhorst Brücke");
break;
}
case 192769:
{
returnValue = F("Kornhängerweg");
break;
}
case 192770:
{
returnValue = F("Kornkammer");
break;
}
case 192771:
{
returnValue = F("Kornkamp");
break;
}
case 192772:
{
returnValue = F("Kornkamp-Süd");
break;
}
case 192773:
{
returnValue = F("Kornkoogsweg");
break;
}
case 192774:
{
returnValue = F("Kornkuugswäi");
break;
}
case 192775:
{
returnValue = F("Kornleite");
break;
}
case 192776:
{
returnValue = F("Kornlingen");
break;
}
case 192777:
{
returnValue = F("Kornlupferweg");
break;
}
case 192778:
{
returnValue = F("Kornmaas");
break;
}
case 192779:
{
returnValue = F("Kornmannstr.");
break;
}
case 192780:
{
returnValue = F("Kornmarkt");
break;
}
case 192781:
{
returnValue = F("Kornmarktstr.");
break;
}
case 192782:
{
returnValue = F("Kornmoor");
break;
}
case 192783:
{
returnValue = F("Kornmühlensteg");
break;
}
case 192784:
{
returnValue = F("Kornmühlenweg");
break;
}
case 192785:
{
returnValue = F("Kornpatt");
break;
}
case 192786:
{
returnValue = F("Kornrade");
break;
}
case 192787:
{
returnValue = F("Kornradenstieg");
break;
}
case 192788:
{
returnValue = F("Kornradeweg");
break;
}
case 192789:
{
returnValue = F("Kornrand");
break;
}
case 192790:
{
returnValue = F("Kornreschweg");
break;
}
case 192791:
{
returnValue = F("Kornreuteweg");
break;
}
case 192792:
{
returnValue = F("Kornring");
break;
}
case 192793:
{
returnValue = F("Kornsand");
break;
}
case 192794:
{
returnValue = F("Kornscheunen");
break;
}
case 192795:
{
returnValue = F("Kornschlagweg");
break;
}
case 192796:
{
returnValue = F("Kornschrannenstr.");
break;
}
case 192797:
{
returnValue = F("Kornsgarten");
break;
}
case 192798:
{
returnValue = F("Kornsgasse");
break;
}
case 192799:
{
returnValue = F("Kornstieg");
break;
}
case 192800:
{
returnValue = F("Kornstr.");
break;
}
case 192801:
{
returnValue = F("Kornstädter Weg");
break;
}
case 192802:
{
returnValue = F("Korntaler Str.");
break;
}
case 192803:
{
returnValue = F("Korntaler Weg");
break;
}
case 192804:
{
returnValue = F("Kornthan");
break;
}
case 192805:
{
returnValue = F("Kornweg");
break;
}
case 192806:
{
returnValue = F("Kornweihenweg");
break;
}
case 192807:
{
returnValue = F("Kornweiheweg");
break;
}
case 192808:
{
returnValue = F("Kornwestheimer Ring");
break;
}
case 192809:
{
returnValue = F("Kornwestheimer Str.");
break;
}
case 192810:
{
returnValue = F("Kornwiedstr.");
break;
}
case 192811:
{
returnValue = F("Kornwiesen");
break;
}
case 192812:
{
returnValue = F("Kornwinkel");
break;
}
case 192813:
{
returnValue = F("Kornäcker");
break;
}
case 192814:
{
returnValue = F("Kornäckerweg");
break;
}
case 192815:
{
returnValue = F("Korpitzsch");
break;
}
case 192816:
{
returnValue = F("Korrbäksweg");
break;
}
case 192817:
{
returnValue = F("Korreitz");
break;
}
case 192818:
{
returnValue = F("Korrenkamp");
break;
}
case 192819:
{
returnValue = F("Korrergasse");
break;
}
case 192820:
{
returnValue = F("Korretstr.");
break;
}
case 192821:
{
returnValue = F("Korretsweg");
break;
}
case 192822:
{
returnValue = F("Korrnpad");
break;
}
case 192823:
{
returnValue = F("Korrosstr.");
break;
}
case 192824:
{
returnValue = F("Korschenbroicher Str.");
break;
}
case 192825:
{
returnValue = F("Korschener Weg");
break;
}
case 192826:
{
returnValue = F("Korseifen");
break;
}
case 192827:
{
returnValue = F("Korseifener Str.");
break;
}
case 192828:
{
returnValue = F("Korselts Gasse");
break;
}
case 192829:
{
returnValue = F("Korseltweg");
break;
}
case 192830:
{
returnValue = F("Korshagener Redder");
break;
}
case 192831:
{
returnValue = F("Korsika");
break;
}
case 192832:
{
returnValue = F("Korsika Weg");
break;
}
case 192833:
{
returnValue = F("Korsikaweg");
break;
}
case 192834:
{
returnValue = F("Korsorsstr.");
break;
}
case 192835:
{
returnValue = F("Korssuner Ring");
break;
}
case 192836:
{
returnValue = F("Korstegge");
break;
}
case 192837:
{
returnValue = F("Korstenstr.");
break;
}
case 192838:
{
returnValue = F("Korswandter Weg");
break;
}
case 192839:
{
returnValue = F("Kort Twiet");
break;
}
case 192840:
{
returnValue = F("Kortdeelsweg");
break;
}
case 192841:
{
returnValue = F("Korte Asper");
break;
}
case 192842:
{
returnValue = F("Korte Breede");
break;
}
case 192843:
{
returnValue = F("Korte Heide");
break;
}
case 192844:
{
returnValue = F("Korte-Brehn-Str.");
break;
}
case 192845:
{
returnValue = F("Korte-Veens-Weg");
break;
}
case 192846:
{
returnValue = F("Kortebrügger Str.");
break;
}
case 192847:
{
returnValue = F("Kortekamp");
break;
}
case 192848:
{
returnValue = F("Kortemicke");
break;
}
case 192849:
{
returnValue = F("Kortemicker Str.");
break;
}
case 192850:
{
returnValue = F("Kortemickestr.");
break;
}
case 192851:
{
returnValue = F("Kortemühle");
break;
}
case 192852:
{
returnValue = F("Korten Busch");
break;
}
case 192853:
{
returnValue = F("Korten Oth");
break;
}
case 192854:
{
returnValue = F("Korten Reege");
break;
}
case 192855:
{
returnValue = F("Korten Rohr");
break;
}
case 192856:
{
returnValue = F("Kortenbacher Weg");
break;
}
case 192857:
{
returnValue = F("Kortenbeck");
break;
}
case 192858:
{
returnValue = F("Kortenberg");
break;
}
case 192859:
{
returnValue = F("Kortenbergweg");
break;
}
case 192860:
{
returnValue = F("Kortenbusch");
break;
}
case 192861:
{
returnValue = F("Kortendal");
break;
}
case 192862:
{
returnValue = F("Kortendorf");
break;
}
case 192863:
{
returnValue = F("Kortendorper Str.");
break;
}
case 192864:
{
returnValue = F("Kortendyck");
break;
}
case 192865:
{
returnValue = F("Kortenfohr");
break;
}
case 192866:
{
returnValue = F("Kortenhagen");
break;
}
case 192867:
{
returnValue = F("Kortenheide");
break;
}
case 192868:
{
returnValue = F("Kortenkamp");
break;
}
case 192869:
{
returnValue = F("Kortenmoorstr.");
break;
}
case 192870:
{
returnValue = F("Kortenstr.");
break;
}
case 192871:
{
returnValue = F("Kortes Esch");
break;
}
case 192872:
{
returnValue = F("Kortesteg");
break;
}
case 192873:
{
returnValue = F("Kortestr.");
break;
}
case 192874:
{
returnValue = F("Kortet End");
break;
}
case 192875:
{
returnValue = F("Korthauerstege");
break;
}
case 192876:
{
returnValue = F("Korthausen");
break;
}
case 192877:
{
returnValue = F("Korthauser Heide");
break;
}
case 192878:
{
returnValue = F("Kortheider Weg");
break;
}
case 192879:
{
returnValue = F("Kortjann Straat");
break;
}
case 192880:
{
returnValue = F("Kortjanweg");
break;
}
case 192881:
{
returnValue = F("Kortland");
break;
}
case 192882:
{
returnValue = F("Kortlund");
break;
}
case 192883:
{
returnValue = F("Kortrockweg");
break;
}
case 192884:
{
returnValue = F("Kortskamp");
break;
}
case 192885:
{
returnValue = F("Kortumstr.");
break;
}
case 192886:
{
returnValue = F("Kortüms-Esch");
break;
}
case 192887:
{
returnValue = F("Korvettenstr.");
break;
}
case 192888:
{
returnValue = F("Korvettenweg");
break;
}
case 192889:
{
returnValue = F("Korweg");
break;
}
case 192890:
{
returnValue = F("Korzmannstr.");
break;
}
case 192891:
{
returnValue = F("Korällchen");
break;
}
case 192892:
{
returnValue = F("Korügen");
break;
}
case 192893:
{
returnValue = F("Kosackenweg");
break;
}
case 192894:
{
returnValue = F("Kosakenallee");
break;
}
case 192895:
{
returnValue = F("Kosakenbrücke");
break;
}
case 192896:
{
returnValue = F("Kosakengasse");
break;
}
case 192897:
{
returnValue = F("Kosakenhook");
break;
}
case 192898:
{
returnValue = F("Kosakenschneise");
break;
}
case 192899:
{
returnValue = F("Kosakenweg");
break;
}
case 192900:
{
returnValue = F("Kosbachblick");
break;
}
case 192901:
{
returnValue = F("Kosbacher Str.");
break;
}
case 192902:
{
returnValue = F("Kosbachweg");
break;
}
case 192903:
{
returnValue = F("Kosberg");
break;
}
case 192904:
{
returnValue = F("Kosbrunner Weg");
break;
}
case 192905:
{
returnValue = F("Kosbühlstr.");
break;
}
case 192906:
{
returnValue = F("Koschelbergweg");
break;
}
case 192907:
{
returnValue = F("Koschewoi-Ring");
break;
}
case 192908:
{
returnValue = F("Kosebrokenstr.");
break;
}
case 192909:
{
returnValue = F("Kosebruchweg");
break;
}
case 192910:
{
returnValue = F("Kosegartenstr.");
break;
}
case 192911:
{
returnValue = F("Kosegartenweg");
break;
}
case 192912:
{
returnValue = F("Kosegasse");
break;
}
case 192913:
{
returnValue = F("Koselau-Ost");
break;
}
case 192914:
{
returnValue = F("Koseler Str.");
break;
}
case 192915:
{
returnValue = F("Koseler Weg");
break;
}
case 192916:
{
returnValue = F("Koselfeld");
break;
}
case 192917:
{
returnValue = F("Koselitzer Str.");
break;
}
case 192918:
{
returnValue = F("Koselitzer Weg");
break;
}
case 192919:
{
returnValue = F("Koselstein");
break;
}
case 192920:
{
returnValue = F("Kosenberg");
break;
}
case 192921:
{
returnValue = F("Koserower Str.");
break;
}
case 192922:
{
returnValue = F("Kosersrain");
break;
}
case 192923:
{
returnValue = F("Koserstr.");
break;
}
case 192924:
{
returnValue = F("Kosertal");
break;
}
case 192925:
{
returnValue = F("Koshauweg");
break;
}
case 192926:
{
returnValue = F("Kosilenziener Str.");
break;
}
case 192927:
{
returnValue = F("Kosilenzier Str.");
break;
}
case 192928:
{
returnValue = F("Koskauer Str.");
break;
}
case 192929:
{
returnValue = F("Koslarer Str.");
break;
}
case 192930:
{
returnValue = F("Koslinger Str.");
break;
}
case 192931:
{
returnValue = F("Kosmaer Str.");
break;
}
case 192932:
{
returnValue = F("Kosmas-Bohn-Str.");
break;
}
case 192933:
{
returnValue = F("Kosmas-Hauck-Weg");
break;
}
case 192934:
{
returnValue = F("Kosmonautenstr.");
break;
}
case 192935:
{
returnValue = F("Kosmonautenweg");
break;
}
case 192936:
{
returnValue = F("Kosmosradweg");
break;
}
case 192937:
{
returnValue = F("Kosmus-Str.");
break;
}
case 192938:
{
returnValue = F("Kospaer Landstr.");
break;
}
case 192939:
{
returnValue = F("Kospaer Str.");
break;
}
case 192940:
{
returnValue = F("Kospaer Weg");
break;
}
case 192941:
{
returnValue = F("Kospodaer Str.");
break;
}
case 192942:
{
returnValue = F("Kossaer Str.");
break;
}
case 192943:
{
returnValue = F("Kossatenstr.");
break;
}
case 192944:
{
returnValue = F("Kossberg");
break;
}
case 192945:
{
returnValue = F("Kossebader Weg");
break;
}
case 192946:
{
returnValue = F("Kossenkamp");
break;
}
case 192947:
{
returnValue = F("Kossenweg");
break;
}
case 192948:
{
returnValue = F("Kossgarten");
break;
}
case 192949:
{
returnValue = F("Kossmannstr.");
break;
}
case 192950:
{
returnValue = F("Kossow Krug");
break;
}
case 192951:
{
returnValue = F("Kossower Str.");
break;
}
case 192952:
{
returnValue = F("Kossower Weg");
break;
}
case 192953:
{
returnValue = F("Kossweg");
break;
}
case 192954:
{
returnValue = F("Kossätenweg");
break;
}
case 192955:
{
returnValue = F("Kossäthenweg");
break;
}
case 192956:
{
returnValue = F("Kost-im-Busch-Weg");
break;
}
case 192957:
{
returnValue = F("Kostaweg");
break;
}
case 192958:
{
returnValue = F("Kostbachweg");
break;
}
case 192959:
{
returnValue = F("Kostebrauer Str.");
break;
}
case 192960:
{
returnValue = F("Kostenbacher Str.");
break;
}
case 192961:
{
returnValue = F("Kostengarten");
break;
}
case 192962:
{
returnValue = F("Kostenzer Str.");
break;
}
case 192963:
{
returnValue = F("Kostenzer Weg");
break;
}
case 192964:
{
returnValue = F("Kosterbergstr.");
break;
}
case 192965:
{
returnValue = F("Kosterfeld");
break;
}
case 192966:
{
returnValue = F("Kostergasse");
break;
}
case 192967:
{
returnValue = F("Kostergäßchen");
break;
}
case 192968:
{
returnValue = F("Kosterkamp");
break;
}
case 192969:
{
returnValue = F("Kosterwiese");
break;
}
case 192970:
{
returnValue = F("Kostgfällweg");
break;
}
case 192971:
{
returnValue = F("Kostgrundweg");
break;
}
case 192972:
{
returnValue = F("Kostheimer Str.");
break;
}
case 192973:
{
returnValue = F("Kosthofstr.");
break;
}
case 192974:
{
returnValue = F("Kostitzer Str.");
break;
}
case 192975:
{
returnValue = F("Kostkreuzschneise");
break;
}
case 192976:
{
returnValue = F("Kostplatz");
break;
}
case 192977:
{
returnValue = F("Kostrotweg");
break;
}
case 192978:
{
returnValue = F("Kostspring");
break;
}
case 192979:
{
returnValue = F("Kostverloren");
break;
}
case 192980:
{
returnValue = F("Koszaliner Str.");
break;
}
case 192981:
{
returnValue = F("Kotauring");
break;
}
case 192982:
{
returnValue = F("Kotaustr.");
break;
}
case 192983:
{
returnValue = F("Kotelettpfad");
break;
}
case 192984:
{
returnValue = F("Kotelower Str.");
break;
}
case 192985:
{
returnValue = F("Kothaustr.");
break;
}
case 192986:
{
returnValue = F("Kothendorfer Str.");
break;
}
case 192987:
{
returnValue = F("Kothener Str.");
break;
}
case 192988:
{
returnValue = F("Kothenstr.");
break;
}
case 192989:
{
returnValue = F("Kothenweg");
break;
}
case 192990:
{
returnValue = F("Kothenwiese");
break;
}
case 192991:
{
returnValue = F("Kothenwiesenweg");
break;
}
case 192992:
{
returnValue = F("Kothersgasse");
break;
}
case 192993:
{
returnValue = F("Kothigenbibersbach");
break;
}
case 192994:
{
returnValue = F("Kothingdorfen");
break;
}
case 192995:
{
returnValue = F("Kothlaken");
break;
}
case 192996:
{
returnValue = F("Kothmaißling");
break;
}
case 192997:
{
returnValue = F("Kothmühlweg");
break;
}
case 192998:
{
returnValue = F("Kothwieselweg");
break;
}
case 192999:
{
returnValue = F("Kothwiesen-Weg");
break;
}
case 193000:
{
returnValue = F("Kothwiesstr.");
break;
}
case 193001:
{
returnValue = F("Kothäckerweg");
break;
}
case 193002:
{
returnValue = F("Kotkaring");
break;
}
case 193003:
{
returnValue = F("Kotschkaer Mittelweg");
break;
}
case 193004:
{
returnValue = F("Kotschkaer Str.");
break;
}
case 193005:
{
returnValue = F("Kotschkaer Weg");
break;
}
case 193006:
{
returnValue = F("Kotstr.");
break;
}
case 193007:
{
returnValue = F("Kottberg");
break;
}
case 193008:
{
returnValue = F("Kottbree");
break;
}
case 193009:
{
returnValue = F("Kotte Berge");
break;
}
case 193010:
{
returnValue = F("Kotte Kamp");
break;
}
case 193011:
{
returnValue = F("Kottebrink");
break;
}
case 193012:
{
returnValue = F("Kottelbrücker Allee");
break;
}
case 193013:
{
returnValue = F("Kottelbrücker Richtweg");
break;
}
case 193014:
{
returnValue = F("Kotten");
break;
}
case 193015:
{
returnValue = F("Kottenbachstr.");
break;
}
case 193016:
{
returnValue = F("Kottenberg");
break;
}
case 193017:
{
returnValue = F("Kottenbergweg");
break;
}
case 193018:
{
returnValue = F("Kottenbornerstr.");
break;
}
case 193019:
{
returnValue = F("Kottenbrede");
break;
}
case 193020:
{
returnValue = F("Kottenbrink");
break;
}
case 193021:
{
returnValue = F("Kottenbusch");
break;
}
case 193022:
{
returnValue = F("Kottendieck");
break;
}
case 193023:
{
returnValue = F("Kottendorfer Feld");
break;
}
case 193024:
{
returnValue = F("Kottendorfer Str.");
break;
}
case 193025:
{
returnValue = F("Kottener Str.");
break;
}
case 193026:
{
returnValue = F("Kottenfeldblick");
break;
}
case 193027:
{
returnValue = F("Kottenforststr.");
break;
}
case 193028:
{
returnValue = F("Kottengasse");
break;
}
case 193029:
{
returnValue = F("Kottengrüner Str.");
break;
}
case 193030:
{
returnValue = F("Kottenhain");
break;
}
case 193031:
{
returnValue = F("Kottenheider Str.");
break;
}
case 193032:
{
returnValue = F("Kottenheimer Str.");
break;
}
case 193033:
{
returnValue = F("Kottenheimer Weg");
break;
}
case 193034:
{
returnValue = F("Kottenhof");
break;
}
case 193035:
{
returnValue = F("Kottenkamp");
break;
}
case 193036:
{
returnValue = F("Kottenkamps Sand");
break;
}
case 193037:
{
returnValue = F("Kottenkämpe");
break;
}
case 193038:
{
returnValue = F("Kottenleite");
break;
}
case 193039:
{
returnValue = F("Kottensdorfer Hauptstr.");
break;
}
case 193040:
{
returnValue = F("Kottenstr.");
break;
}
case 193041:
{
returnValue = F("Kottenweg");
break;
}
case 193042:
{
returnValue = F("Kottenwendt");
break;
}
case 193043:
{
returnValue = F("Kotterhof");
break;
}
case 193044:
{
returnValue = F("Kotteritzer Str.");
break;
}
case 193045:
{
returnValue = F("Kotterstr.");
break;
}
case 193046:
{
returnValue = F("Kotterweg");
break;
}
case 193047:
{
returnValue = F("Kottesteig");
break;
}
case 193048:
{
returnValue = F("Kottewitzer Berg");
break;
}
case 193049:
{
returnValue = F("Kottewitzer Str.");
break;
}
case 193050:
{
returnValue = F("Kottgeiseringer Str.");
break;
}
case 193051:
{
returnValue = F("Kotthausen");
break;
}
case 193052:
{
returnValue = F("Kotthausener Str.");
break;
}
case 193053:
{
returnValue = F("Kotthauser Str.");
break;
}
case 193054:
{
returnValue = F("Kotthausstr.");
break;
}
case 193055:
{
returnValue = F("Kottingrohr");
break;
}
case 193056:
{
returnValue = F("Kottland");
break;
}
case 193057:
{
returnValue = F("Kottmairstr.");
break;
}
case 193058:
{
returnValue = F("Kottmannstr.");
break;
}
case 193059:
{
returnValue = F("Kottmarallee");
break;
}
case 193060:
{
returnValue = F("Kottmarhäuser");
break;
}
case 193061:
{
returnValue = F("Kottmarsdorfer Str.");
break;
}
case 193062:
{
returnValue = F("Kottmarweg");
break;
}
case 193063:
{
returnValue = F("Kottmeierpromenade");
break;
}
case 193064:
{
returnValue = F("Kottmeierstr.");
break;
}
case 193065:
{
returnValue = F("Kotts Stegge");
break;
}
case 193066:
{
returnValue = F("Kottspieler Str.");
break;
}
case 193067:
{
returnValue = F("Kottweiler Str.");
break;
}
case 193068:
{
returnValue = F("Kottweilerer Str.");
break;
}
case 193069:
{
returnValue = F("Kottwiesenring");
break;
}
case 193070:
{
returnValue = F("Kotzbuckel");
break;
}
case 193071:
{
returnValue = F("Kotzbuggl");
break;
}
case 193072:
{
returnValue = F("Kotzenbrühl");
break;
}
case 193073:
{
returnValue = F("Kotzenbüller Chaussee");
break;
}
case 193074:
{
returnValue = F("Kotzener Str.");
break;
}
case 193075:
{
returnValue = F("Kotzener Weg");
break;
}
case 193076:
{
returnValue = F("Kotzenhofer Weg");
break;
}
case 193077:
{
returnValue = F("Kotzinger Str.");
break;
}
case 193078:
{
returnValue = F("Kotzow");
break;
}
case 193079:
{
returnValue = F("Koudougou-Allee");
break;
}
case 193080:
{
returnValue = F("Koulerfeld");
break;
}
case 193081:
{
returnValue = F("Koupad");
break;
}
case 193082:
{
returnValue = F("Koveler Str.");
break;
}
case 193083:
{
returnValue = F("Kovelsberg");
break;
}
case 193084:
{
returnValue = F("Kovendamm");
break;
}
case 193085:
{
returnValue = F("Kovermühlenweg");
break;
}
case 193086:
{
returnValue = F("Koverpfad");
break;
}
case 193087:
{
returnValue = F("Koverstein");
break;
}
case 193088:
{
returnValue = F("Koversteiner Weg");
break;
}
case 193089:
{
returnValue = F("Kowall");
break;
}
case 193090:
{
returnValue = F("Kowallstr.");
break;
}
case 193091:
{
returnValue = F("Kowitzanger");
break;
}
case 193092:
{
returnValue = F("Koxberg");
break;
}
case 193093:
{
returnValue = F("Koxheidestr.");
break;
}
case 193094:
{
returnValue = F("Koxhof");
break;
}
case 193095:
{
returnValue = F("Koynestr.");
break;
}
case 193096:
{
returnValue = F("Koßdorfer Str.");
break;
}
case 193097:
{
returnValue = F("Koßdorfer Weg");
break;
}
case 193098:
{
returnValue = F("Koßmanns Hof");
break;
}
case 193099:
{
returnValue = F("Koßmannstr.");
break;
}
case 193100:
{
returnValue = F("Kraaker Landweg");
break;
}
case 193101:
{
returnValue = F("Kraaker Mühle");
break;
}
case 193102:
{
returnValue = F("Kraaker Str.");
break;
}
case 193103:
{
returnValue = F("Kraamer Str.");
break;
}
case 193104:
{
returnValue = F("Kraasaer Weg");
break;
}
case 193105:
{
returnValue = F("Kraatzer Weg");
break;
}
case 193106:
{
returnValue = F("Krabatenmoorweg");
break;
}
case 193107:
{
returnValue = F("Krabatstein");
break;
}
case 193108:
{
returnValue = F("Krabatweg");
break;
}
case 193109:
{
returnValue = F("Krabbe");
break;
}
case 193110:
{
returnValue = F("Krabbelspädchen");
break;
}
case 193111:
{
returnValue = F("Krabbeltunnel");
break;
}
case 193112:
{
returnValue = F("Krabben");
break;
}
case 193113:
{
returnValue = F("Krabbenburg");
break;
}
case 193114:
{
returnValue = F("Krabbengrund");
break;
}
case 193115:
{
returnValue = F("Krabbenheider Str.");
break;
}
case 193116:
{
returnValue = F("Krabbenhöhe");
break;
}
case 193117:
{
returnValue = F("Krabbenkamp");
break;
}
case 193118:
{
returnValue = F("Krabbenort");
break;
}
case 193119:
{
returnValue = F("Krabbenpadd");
break;
}
case 193120:
{
returnValue = F("Krabbensteg");
break;
}
case 193121:
{
returnValue = F("Krabbenstr.");
break;
}
case 193122:
{
returnValue = F("Krabbenweg");
break;
}
case 193123:
{
returnValue = F("Krabbeweg");
break;
}
case 193124:
{
returnValue = F("Krabichl");
break;
}
case 193125:
{
returnValue = F("Krablerstr.");
break;
}
case 193126:
{
returnValue = F("Kraburg");
break;
}
case 193127:
{
returnValue = F("Krachbaumgasse");
break;
}
case 193128:
{
returnValue = F("Krachbein");
break;
}
case 193129:
{
returnValue = F("Krachbeinweg");
break;
}
case 193130:
{
returnValue = F("Krachenberg");
break;
}
case 193131:
{
returnValue = F("Krachenberger Weg");
break;
}
case 193132:
{
returnValue = F("Kracheneckstr.");
break;
}
case 193133:
{
returnValue = F("Krachenhausener Weg");
break;
}
case 193134:
{
returnValue = F("Krachserlen");
break;
}
case 193135:
{
returnValue = F("Krachsnußbaumweg");
break;
}
case 193136:
{
returnValue = F("Krachtsheide");
break;
}
case 193137:
{
returnValue = F("Krackerstr.");
break;
}
case 193138:
{
returnValue = F("Krackertsberg");
break;
}
case 193139:
{
returnValue = F("Krackhardtstr.");
break;
}
case 193140:
{
returnValue = F("Krackhof");
break;
}
case 193141:
{
returnValue = F("Krackower Str.");
break;
}
case 193142:
{
returnValue = F("Kradenhövel");
break;
}
case 193143:
{
returnValue = F("Kradtstr.");
break;
}
case 193144:
{
returnValue = F("Kraelingstr.");
break;
}
case 193145:
{
returnValue = F("Kraepelinweg");
break;
}
case 193146:
{
returnValue = F("Krafft-von-Grünbach-Str.");
break;
}
case 193147:
{
returnValue = F("Krafftgasse");
break;
}
case 193148:
{
returnValue = F("Krafftstr.");
break;
}
case 193149:
{
returnValue = F("Kraftenbuckelweg");
break;
}
case 193150:
{
returnValue = F("Kraftgartenweg");
break;
}
case 193151:
{
returnValue = F("Kraftgasse");
break;
}
case 193152:
{
returnValue = F("Kraftholzweg");
break;
}
case 193153:
{
returnValue = F("Kraftsbucher Str.");
break;
}
case 193154:
{
returnValue = F("Kraftsdorfer Str.");
break;
}
case 193155:
{
returnValue = F("Kraftsholz");
break;
}
case 193156:
{
returnValue = F("Kraftshäuleweg");
break;
}
case 193157:
{
returnValue = F("Kraftskamp");
break;
}
case 193158:
{
returnValue = F("Kraftsolmser Str.");
break;
}
case 193159:
{
returnValue = F("Kraftstallweg");
break;
}
case 193160:
{
returnValue = F("Kraftsteinstr.");
break;
}
case 193161:
{
returnValue = F("Kraftsteinweg");
break;
}
case 193162:
{
returnValue = F("Kraftstr.");
break;
}
case 193163:
{
returnValue = F("Kraftverkehr");
break;
}
case 193164:
{
returnValue = F("Kraftwaldweg");
break;
}
case 193165:
{
returnValue = F("Kraftwerk");
break;
}
case 193166:
{
returnValue = F("Kraftwerksiedlung");
break;
}
case 193167:
{
returnValue = F("Kraftwerkstr.");
break;
}
case 193168:
{
returnValue = F("Kraftwerkweg");
break;
}
case 193169:
{
returnValue = F("Krafzig");
break;
}
case 193170:
{
returnValue = F("Kragdeel");
break;
}
case 193171:
{
returnValue = F("Kragelund");
break;
}
case 193172:
{
returnValue = F("Kragen");
break;
}
case 193173:
{
returnValue = F("Kragenbärweg");
break;
}
case 193174:
{
returnValue = F("Kragener Str.");
break;
}
case 193175:
{
returnValue = F("Kragenhof");
break;
}
case 193176:
{
returnValue = F("Kragenhofer Str.");
break;
}
case 193177:
{
returnValue = F("Kragenweg");
break;
}
case 193178:
{
returnValue = F("Kraggenau");
break;
}
case 193179:
{
returnValue = F("Kraggenauer Weg");
break;
}
case 193180:
{
returnValue = F("Kraglinger Str.");
break;
}
case 193181:
{
returnValue = F("Kragstedt");
break;
}
case 193182:
{
returnValue = F("Kragweg");
break;
}
case 193183:
{
returnValue = F("Krahenberg");
break;
}
case 193184:
{
returnValue = F("Krahenbrink");
break;
}
case 193185:
{
returnValue = F("Krahenstückenweg");
break;
}
case 193186:
{
returnValue = F("Krahestr.");
break;
}
case 193187:
{
returnValue = F("Krahforst");
break;
}
case 193188:
{
returnValue = F("Krahhöhe");
break;
}
case 193189:
{
returnValue = F("Krahkopfstr.");
break;
}
case 193190:
{
returnValue = F("Krahl-Alembik-Weg");
break;
}
case 193191:
{
returnValue = F("Krahm");
break;
}
case 193192:
{
returnValue = F("Krahmer Weg");
break;
}
case 193193:
{
returnValue = F("Krahnen-Gobbers-Str.");
break;
}
case 193194:
{
returnValue = F("Krahnenbergstr.");
break;
}
case 193195:
{
returnValue = F("Krahnenbergweg");
break;
}
case 193196:
{
returnValue = F("Krahnengasse");
break;
}
case 193197:
{
returnValue = F("Krahnenstr.");
break;
}
case 193198:
{
returnValue = F("Krahnenweg");
break;
}
case 193199:
{
returnValue = F("Krahner Hauptstr.");
break;
}
case 193200:
{
returnValue = F("Krahner Str.");
break;
}
case 193201:
{
returnValue = F("Krahnert Siedlung");
break;
}
case 193202:
{
returnValue = F("Krahnheide");
break;
}
case 193203:
{
returnValue = F("Krahnhofstr.");
break;
}
case 193204:
{
returnValue = F("Krahnkoppel");
break;
}
case 193205:
{
returnValue = F("Krahnshörenweg");
break;
}
case 193206:
{
returnValue = F("Krahnstr.");
break;
}
case 193207:
{
returnValue = F("Krahnweg");
break;
}
case 193208:
{
returnValue = F("Krahwinkel");
break;
}
case 193209:
{
returnValue = F("Krahwinkeler Str.");
break;
}
case 193210:
{
returnValue = F("Krahwinkelsweg");
break;
}
case 193211:
{
returnValue = F("Kraiberg");
break;
}
case 193212:
{
returnValue = F("Kraibergstr.");
break;
}
case 193213:
{
returnValue = F("Kraibrunnenstr.");
break;
}
case 193214:
{
returnValue = F("Kraiburger Str.");
break;
}
case 193215:
{
returnValue = F("Kraichbachstr.");
break;
}
case 193216:
{
returnValue = F("Kraichbachweg");
break;
}
case 193217:
{
returnValue = F("Kraichertsweg");
break;
}
case 193218:
{
returnValue = F("Kraichgauallee");
break;
}
case 193219:
{
returnValue = F("Kraichgaublick");
break;
}
case 193220:
{
returnValue = F("Kraichgaublickweg");
break;
}
case 193221:
{
returnValue = F("Kraichgauer Weinstr.");
break;
}
case 193222:
{
returnValue = F("Kraichgaustr.");
break;
}
case 193223:
{
returnValue = F("Kraichgauweg");
break;
}
case 193224:
{
returnValue = F("Kraichtaler Str.");
break;
}
case 193225:
{
returnValue = F("Kraichtalstr.");
break;
}
case 193226:
{
returnValue = F("Kraichwaldweg");
break;
}
case 193227:
{
returnValue = F("Kraichweg");
break;
}
case 193228:
{
returnValue = F("Kraienberg");
break;
}
case 193229:
{
returnValue = F("Kraienholt");
break;
}
case 193230:
{
returnValue = F("Kraienhopstr.");
break;
}
case 193231:
{
returnValue = F("Kraienkamp");
break;
}
case 193232:
{
returnValue = F("Kraikenweg");
break;
}
case 193233:
{
returnValue = F("Krailing");
break;
}
case 193234:
{
returnValue = F("Krailinger Str.");
break;
}
case 193235:
{
returnValue = F("Kraillinger Geräumt");
break;
}
case 193236:
{
returnValue = F("Kraillinger Route");
break;
}
case 193237:
{
returnValue = F("Kraillinger Str.");
break;
}
case 193238:
{
returnValue = F("Kraillinger Weg");
break;
}
case 193239:
{
returnValue = F("Krailshausener Str.");
break;
}
case 193240:
{
returnValue = F("Kraimoos");
break;
}
case 193241:
{
returnValue = F("Kraimühle");
break;
}
case 193242:
{
returnValue = F("Krain");
break;
}
case 193243:
{
returnValue = F("Krainberg");
break;
}
case 193244:
{
returnValue = F("Krainbergstr.");
break;
}
case 193245:
{
returnValue = F("Krainergasse");
break;
}
case 193246:
{
returnValue = F("Krainerweg");
break;
}
case 193247:
{
returnValue = F("Krainhäger Str.");
break;
}
case 193248:
{
returnValue = F("Krainhäger Weg");
break;
}
case 193249:
{
returnValue = F("Krainstr.");
break;
}
case 193250:
{
returnValue = F("Kraisweg");
break;
}
case 193251:
{
returnValue = F("Krajaer Str.");
break;
}
case 193252:
{
returnValue = F("Krakauer Dorfstr.");
break;
}
case 193253:
{
returnValue = F("Krakauer Landstr.");
break;
}
case 193254:
{
returnValue = F("Krakauer Str.");
break;
}
case 193255:
{
returnValue = F("Krakauer Weg");
break;
}
case 193256:
{
returnValue = F("Krakebüller Str.");
break;
}
case 193257:
{
returnValue = F("Krakelgrund");
break;
}
case 193258:
{
returnValue = F("Krakenhofweg");
break;
}
case 193259:
{
returnValue = F("Kraker");
break;
}
case 193260:
{
returnValue = F("Krakery");
break;
}
case 193261:
{
returnValue = F("Krakow");
break;
}
case 193262:
{
returnValue = F("Krakower Chaussee");
break;
}
case 193263:
{
returnValue = F("Krakower Str.");
break;
}
case 193264:
{
returnValue = F("Krakvitz");
break;
}
case 193265:
{
returnValue = F("Kralecke");
break;
}
case 193266:
{
returnValue = F("Kralkamp");
break;
}
case 193267:
{
returnValue = F("Krallersbachweg");
break;
}
case 193268:
{
returnValue = F("Kralupyer Str.");
break;
}
case 193269:
{
returnValue = F("Kram");
break;
}
case 193270:
{
returnValue = F("Krambachweg");
break;
}
case 193271:
{
returnValue = F("Krambek");
break;
}
case 193272:
{
returnValue = F("Krambeker Weg");
break;
}
case 193273:
{
returnValue = F("Krambekskoppel");
break;
}
case 193274:
{
returnValue = F("Krambeksweg");
break;
}
case 193275:
{
returnValue = F("Krambekweg");
break;
}
case 193276:
{
returnValue = F("Kramberg");
break;
}
case 193277:
{
returnValue = F("Krambergerweg");
break;
}
case 193278:
{
returnValue = F("Krambergstr.");
break;
}
case 193279:
{
returnValue = F("Krambergweg");
break;
}
case 193280:
{
returnValue = F("Krameramtsstr.");
break;
}
case 193281:
{
returnValue = F("Kramerberg");
break;
}
case 193282:
{
returnValue = F("Kramerbergstr.");
break;
}
case 193283:
{
returnValue = F("Kramerbergweg");
break;
}
case 193284:
{
returnValue = F("Kramerbuckel");
break;
}
case 193285:
{
returnValue = F("Kramerei");
break;
}
case 193286:
{
returnValue = F("Kramerfeld");
break;
}
case 193287:
{
returnValue = F("Kramergasse");
break;
}
case 193288:
{
returnValue = F("Kramergasserl");
break;
}
case 193289:
{
returnValue = F("Kramerhof");
break;
}
case 193290:
{
returnValue = F("Kramerhänge");
break;
}
case 193291:
{
returnValue = F("Kramerleithe");
break;
}
case 193292:
{
returnValue = F("Kramerplateauweg");
break;
}
case 193293:
{
returnValue = F("Kramerplatz");
break;
}
case 193294:
{
returnValue = F("Kramerringstr.");
break;
}
case 193295:
{
returnValue = F("Kramers Kamp");
break;
}
case 193296:
{
returnValue = F("Kramersbruch");
break;
}
case 193297:
{
returnValue = F("Kramersdorf");
break;
}
case 193298:
{
returnValue = F("Kramershagen");
break;
}
case 193299:
{
returnValue = F("Kramershof");
break;
}
case 193300:
{
returnValue = F("Kramersteig");
break;
}
case 193301:
{
returnValue = F("Kramerstr.");
break;
}
case 193302:
{
returnValue = F("Kramersweg");
break;
}
case 193303:
{
returnValue = F("Kramerswiesen");
break;
}
case 193304:
{
returnValue = F("Kramerweg");
break;
}
case 193305:
{
returnValue = F("Kramerwiese");
break;
}
case 193306:
{
returnValue = F("Krametshalde");
break;
}
case 193307:
{
returnValue = F("Kramgasse");
break;
}
case 193308:
{
returnValue = F("Kramhagenweg");
break;
}
case 193309:
{
returnValue = F("Kramichsgarten");
break;
}
case 193310:
{
returnValue = F("Krammbeerenstr.");
break;
}
case 193311:
{
returnValue = F("Krammerbergstr.");
break;
}
case 193312:
{
returnValue = F("Krammerweg");
break;
}
case 193313:
{
returnValue = F("Kramnitzer Weg");
break;
}
case 193314:
{
returnValue = F("Krampeneck");
break;
}
case 193315:
{
returnValue = F("Krampenfeld");
break;
}
case 193316:
{
returnValue = F("Krampenhöhe");
break;
}
case 193317:
{
returnValue = F("Krampenstr.");
break;
}
case 193318:
{
returnValue = F("Kramperstr.");
break;
}
case 193319:
{
returnValue = F("Krampfer Weg");
break;
}
case 193320:
{
returnValue = F("Kramphörner Weg");
break;
}
case 193321:
{
returnValue = F("Kramsbachweg");
break;
}
case 193322:
{
returnValue = F("Kramser Dorfstr.");
break;
}
case 193323:
{
returnValue = F("Kramser Lindenstr.");
break;
}
case 193324:
{
returnValue = F("Kramstr.");
break;
}
case 193325:
{
returnValue = F("Kranbergstr.");
break;
}
case 193326:
{
returnValue = F("Kranbächelweg");
break;
}
case 193327:
{
returnValue = F("Krandelstr.");
break;
}
case 193328:
{
returnValue = F("Krandelweg");
break;
}
case 193329:
{
returnValue = F("Krandorf");
break;
}
case 193330:
{
returnValue = F("Krandorfer Str.");
break;
}
case 193331:
{
returnValue = F("Kranebitterstr.");
break;
}
case 193332:
{
returnValue = F("Kraneburg");
break;
}
case 193333:
{
returnValue = F("Kraneburgstr.");
break;
}
case 193334:
{
returnValue = F("Kranenbruch");
break;
}
case 193335:
{
returnValue = F("Kranenbruchweg");
break;
}
case 193336:
{
returnValue = F("Kranenburger Str.");
break;
}
case 193337:
{
returnValue = F("Kranendeich");
break;
}
case 193338:
{
returnValue = F("Kranengasse");
break;
}
case 193339:
{
returnValue = F("Kranenkamp");
break;
}
case 193340:
{
returnValue = F("Kranenkamper Str.");
break;
}
case 193341:
{
returnValue = F("Kranenkamper Weg");
break;
}
case 193342:
{
returnValue = F("Kranenpohlstr.");
break;
}
case 193343:
{
returnValue = F("Kranenstr.");
break;
}
case 193344:
{
returnValue = F("Kranentalsmühle");
break;
}
case 193345:
{
returnValue = F("Kranenweide");
break;
}
case 193346:
{
returnValue = F("Kranepuhler Weg");
break;
}
case 193347:
{
returnValue = F("Kraner Hof");
break;
}
case 193348:
{
returnValue = F("Kraner Weg");
break;
}
case 193349:
{
returnValue = F("Kranerhöhe");
break;
}
case 193350:
{
returnValue = F("Kranewitweg");
break;
}
case 193351:
{
returnValue = F("Krangener Str.");
break;
}
case 193352:
{
returnValue = F("Krangener Weg");
break;
}
case 193353:
{
returnValue = F("Krangsbruch");
break;
}
case 193354:
{
returnValue = F("Kranich");
break;
}
case 193355:
{
returnValue = F("Kranichallee");
break;
}
case 193356:
{
returnValue = F("Kranichblick");
break;
}
case 193357:
{
returnValue = F("Kranichbogen");
break;
}
case 193358:
{
returnValue = F("Kranichborner Str.");
break;
}
case 193359:
{
returnValue = F("Kraniche");
break;
}
case 193360:
{
returnValue = F("Kranicheck");
break;
}
case 193361:
{
returnValue = F("Kranicherstr.");
break;
}
case 193362:
{
returnValue = F("Kranichfeld");
break;
}
case 193363:
{
returnValue = F("Kranichfelder Str.");
break;
}
case 193364:
{
returnValue = F("Kranichgang");
break;
}
case 193365:
{
returnValue = F("Kranichgrund");
break;
}
case 193366:
{
returnValue = F("Kranichhof");
break;
}
case 193367:
{
returnValue = F("Kranichholz");
break;
}
case 193368:
{
returnValue = F("Kranichhorst");
break;
}
case 193369:
{
returnValue = F("Kranichmoor");
break;
}
case 193370:
{
returnValue = F("Kranichplatz");
break;
}
case 193371:
{
returnValue = F("Kranichrast");
break;
}
case 193372:
{
returnValue = F("Kranichring");
break;
}
case 193373:
{
returnValue = F("Kranichseegasse");
break;
}
case 193374:
{
returnValue = F("Kranichseestr.");
break;
}
case 193375:
{
returnValue = F("Kranichskopp");
break;
}
case 193376:
{
returnValue = F("Kranichsteiner Str.");
break;
}
case 193377:
{
returnValue = F("Kranichstr.");
break;
}
case 193378:
{
returnValue = F("Kranichweg");
break;
}
case 193379:
{
returnValue = F("Kranichwiesen");
break;
}
case 193380:
{
returnValue = F("Kranichwinkel");
break;
}
case 193381:
{
returnValue = F("Kranichzug");
break;
}
case 193382:
{
returnValue = F("Kranigstr.");
break;
}
case 193383:
{
returnValue = F("Kranigsweg");
break;
}
case 193384:
{
returnValue = F("Kranisweg");
break;
}
case 193385:
{
returnValue = F("Kranitzweg");
break;
}
case 193386:
{
returnValue = F("Krankenhaus");
break;
}
case 193387:
{
returnValue = F("Krankenhaus Park");
break;
}
case 193388:
{
returnValue = F("Krankenhaus Park/Blumengarten");
break;
}
case 193389:
{
returnValue = F("Krankenhaus Parkanlage");
break;
}
case 193390:
{
returnValue = F("Krankenhaus Siedlung");
break;
}
case 193391:
{
returnValue = F("Krankenhaus-Park");
break;
}
case 193392:
{
returnValue = F("Krankenhaus-Pättken");
break;
}
case 193393:
{
returnValue = F("Krankenhaus-Str.");
break;
}
case 193394:
{
returnValue = F("Krankenhausgasse");
break;
}
case 193395:
{
returnValue = F("Krankenhausgässchen");
break;
}
case 193396:
{
returnValue = F("Krankenhauspark");
break;
}
case 193397:
{
returnValue = F("Krankenhauspark Vitos");
break;
}
case 193398:
{
returnValue = F("Krankenhaussstr.");
break;
}
case 193399:
{
returnValue = F("Krankenhausstr.");
break;
}
case 193400:
{
returnValue = F("Krankenhaustr.");
break;
}
case 193401:
{
returnValue = F("Krankenhausweg");
break;
}
case 193402:
{
returnValue = F("Krankenhäger Str.");
break;
}
case 193403:
{
returnValue = F("Krankenwagenzufahrt");
break;
}
case 193404:
{
returnValue = F("Krankower Str.");
break;
}
case 193405:
{
returnValue = F("Krankower Weg");
break;
}
case 193406:
{
returnValue = F("Kranlandsweg");
break;
}
case 193407:
{
returnValue = F("Kranluckener Str.");
break;
}
case 193408:
{
returnValue = F("Krannichsruhe");
break;
}
case 193409:
{
returnValue = F("Kranoldstr.");
break;
}
case 193410:
{
returnValue = F("Kransberger Str.");
break;
}
case 193411:
{
returnValue = F("Kransburger Str.");
break;
}
case 193412:
{
returnValue = F("Kransburger Weg");
break;
}
case 193413:
{
returnValue = F("Kransdorfer Weg");
break;
}
case 193414:
{
returnValue = F("Kransevitz");
break;
}
case 193415:
{
returnValue = F("Kranstr.");
break;
}
case 193416:
{
returnValue = F("Kranstr.ngang");
break;
}
case 193417:
{
returnValue = F("Krantal");
break;
}
case 193418:
{
returnValue = F("Krantor");
break;
}
case 193419:
{
returnValue = F("Krantorstr.");
break;
}
case 193420:
{
returnValue = F("Kranweg");
break;
}
case 193421:
{
returnValue = F("Kranwinkel");
break;
}
case 193422:
{
returnValue = F("Kranzachstr.");
break;
}
case 193423:
{
returnValue = F("Kranzbachstr.");
break;
}
case 193424:
{
returnValue = F("Kranzberg");
break;
}
case 193425:
{
returnValue = F("Kranzbergring");
break;
}
case 193426:
{
returnValue = F("Kranzbergstr.");
break;
}
case 193427:
{
returnValue = F("Kranzbergweg");
break;
}
case 193428:
{
returnValue = F("Kranzbichlstr.");
break;
}
case 193429:
{
returnValue = F("Kranzbichlweg");
break;
}
case 193430:
{
returnValue = F("Kranzbruchstr.");
break;
}
case 193431:
{
returnValue = F("Kranzegger Str.");
break;
}
case 193432:
{
returnValue = F("Kranzenaustr.");
break;
}
case 193433:
{
returnValue = F("Kranzenberg");
break;
}
case 193434:
{
returnValue = F("Kranzer");
break;
}
case 193435:
{
returnValue = F("Kranzerhöhe");
break;
}
case 193436:
{
returnValue = F("Kranzerstr.");
break;
}
case 193437:
{
returnValue = F("Kranzerweg");
break;
}
case 193438:
{
returnValue = F("Kranzes");
break;
}
case 193439:
{
returnValue = F("Kranzfelderhof");
break;
}
case 193440:
{
returnValue = F("Kranzgarten");
break;
}
case 193441:
{
returnValue = F("Kranzhornstr.");
break;
}
case 193442:
{
returnValue = F("Kranzhornweg");
break;
}
case 193443:
{
returnValue = F("Kranzkopfstr.");
break;
}
case 193444:
{
returnValue = F("Kranzlacher Weg");
break;
}
case 193445:
{
returnValue = F("Kranzlohäckerweg");
break;
}
case 193446:
{
returnValue = F("Kranzlstr.");
break;
}
case 193447:
{
returnValue = F("Kranzlweg");
break;
}
case 193448:
{
returnValue = F("Kranzlwegsiedlung");
break;
}
case 193449:
{
returnValue = F("Kranzmaarstr.");
break;
}
case 193450:
{
returnValue = F("Kranzweg");
break;
}
case 193451:
{
returnValue = F("Kranüchel");
break;
}
case 193452:
{
returnValue = F("Krapelsfelder Gässchen");
break;
}
case 193453:
{
returnValue = F("Krapenbergweg");
break;
}
case 193454:
{
returnValue = F("Krapendorfer Kämpe");
break;
}
case 193455:
{
returnValue = F("Krapendorfer Str.");
break;
}
case 193456:
{
returnValue = F("Krapendorfer Weg");
break;
}
case 193457:
{
returnValue = F("Krapfberg");
break;
}
case 193458:
{
returnValue = F("Krapfen");
break;
}
case 193459:
{
returnValue = F("Krapfenreuter Str.");
break;
}
case 193460:
{
returnValue = F("Krapfenweg");
break;
}
case 193461:
{
returnValue = F("Krapfenäckerweg");
break;
}
case 193462:
{
returnValue = F("Krapollweg");
break;
}
case 193463:
{
returnValue = F("Krappelroth");
break;
}
case 193464:
{
returnValue = F("Krappenbergweg");
break;
}
case 193465:
{
returnValue = F("Krappendörre");
break;
}
case 193466:
{
returnValue = F("Krappenweg");
break;
}
case 193467:
{
returnValue = F("Krappgartenstr.");
break;
}
case 193468:
{
returnValue = F("Krappäckerweg");
break;
}
case 193469:
{
returnValue = F("Kraschwitzer Str.");
break;
}
case 193470:
{
returnValue = F("Krasnaer Str.");
break;
}
case 193471:
{
returnValue = F("Kraspütt");
break;
}
case 193472:
{
returnValue = F("Krassen");
break;
}
case 193473:
{
returnValue = F("Krassens Wätken");
break;
}
case 193474:
{
returnValue = F("Krassig");
break;
}
case 193475:
{
returnValue = F("Krassiger Str.");
break;
}
case 193476:
{
returnValue = F("Krassolzheimer Str.");
break;
}
case 193477:
{
returnValue = F("Krassower Berg");
break;
}
case 193478:
{
returnValue = F("Krassower Weg");
break;
}
case 193479:
{
returnValue = F("Krasstr.");
break;
}
case 193480:
{
returnValue = F("Krasteler Str.");
break;
}
case 193481:
{
returnValue = F("Kratellen");
break;
}
case 193482:
{
returnValue = F("Krater");
break;
}
case 193483:
{
returnValue = F("Kraterstr.");
break;
}
case 193484:
{
returnValue = F("Krathberg");
break;
}
case 193485:
{
returnValue = F("Kratt");
break;
}
case 193486:
{
returnValue = F("Kratteichen");
break;
}
case 193487:
{
returnValue = F("Krattenweg");
break;
}
case 193488:
{
returnValue = F("Krattenweiler Str.");
break;
}
case 193489:
{
returnValue = F("Kratterstr.");
break;
}
case 193490:
{
returnValue = F("Krattkoppel");
break;
}
case 193491:
{
returnValue = F("Krattredder");
break;
}
case 193492:
{
returnValue = F("Krattweg");
break;
}
case 193493:
{
returnValue = F("Kratweg");
break;
}
case 193494:
{
returnValue = F("Kratzauer Str.");
break;
}
case 193495:
{
returnValue = F("Kratzbeersteig");
break;
}
case 193496:
{
returnValue = F("Kratzberg");
break;
}
case 193497:
{
returnValue = F("Kratzberger Str.");
break;
}
case 193498:
{
returnValue = F("Kratzdistelweg");
break;
}
case 193499:
{
returnValue = F("Kratzehof");
break;
}
case 193500:
{
returnValue = F("Kratzehofweg");
break;
}
case 193501:
{
returnValue = F("Kratzenberg");
break;
}
case 193502:
{
returnValue = F("Kratzenbergstr.");
break;
}
case 193503:
{
returnValue = F("Kratzenburg");
break;
}
case 193504:
{
returnValue = F("Kratzengasse");
break;
}
case 193505:
{
returnValue = F("Kratzenhof");
break;
}
case 193506:
{
returnValue = F("Kratzensteinring");
break;
}
case 193507:
{
returnValue = F("Kratzerach");
break;
}
case 193508:
{
returnValue = F("Kratzeranger");
break;
}
case 193509:
{
returnValue = F("Kratzerimbach");
break;
}
case 193510:
{
returnValue = F("Kratzeroda");
break;
}
case 193511:
{
returnValue = F("Kratzerott Schneise");
break;
}
case 193512:
{
returnValue = F("Kratzerstr.");
break;
}
case 193513:
{
returnValue = F("Kratzerweg");
break;
}
case 193514:
{
returnValue = F("Kratzgasse");
break;
}
case 193515:
{
returnValue = F("Kratzhammer");
break;
}
case 193516:
{
returnValue = F("Kratzhof");
break;
}
case 193517:
{
returnValue = F("Kratzlmühle");
break;
}
case 193518:
{
returnValue = F("Kratzmühler Str.");
break;
}
case 193519:
{
returnValue = F("Kratzmühlstr.");
break;
}
case 193520:
{
returnValue = F("Kratzweg");
break;
}
case 193521:
{
returnValue = F("Krauchelwiesen");
break;
}
case 193522:
{
returnValue = F("Krauchenwieser Str.");
break;
}
case 193523:
{
returnValue = F("Kraudorf");
break;
}
case 193524:
{
returnValue = F("Krauelei");
break;
}
case 193525:
{
returnValue = F("Krauelshorster Damm");
break;
}
case 193526:
{
returnValue = F("Kraugweg");
break;
}
case 193527:
{
returnValue = F("Krauheider Weg");
break;
}
case 193528:
{
returnValue = F("Kraunhof");
break;
}
case 193529:
{
returnValue = F("Kraunsdahl");
break;
}
case 193530:
{
returnValue = F("Kraunskamp");
break;
}
case 193531:
{
returnValue = F("Kraupaer Gartenweg");
break;
}
case 193532:
{
returnValue = F("Kraupaer Str.");
break;
}
case 193533:
{
returnValue = F("Kraupaer Weg");
break;
}
case 193534:
{
returnValue = F("Krausbitzchen");
break;
}
case 193535:
{
returnValue = F("Krauschaer Str.");
break;
}
case 193536:
{
returnValue = F("Krauschwitzer Bahnstr.");
break;
}
case 193537:
{
returnValue = F("Krauschwitzer Str.");
break;
}
case 193538:
{
returnValue = F("Krausegasse");
break;
}
case 193539:
{
returnValue = F("Krauseholz");
break;
}
case 193540:
{
returnValue = F("Krauseminzgasse");
break;
}
case 193541:
{
returnValue = F("Krausenbacher Str.");
break;
}
case 193542:
{
returnValue = F("Krausenbacher Weg");
break;
}
case 193543:
{
returnValue = F("Krausenbachstr.");
break;
}
case 193544:
{
returnValue = F("Krausenbechhofen");
break;
}
case 193545:
{
returnValue = F("Krausenburg");
break;
}
case 193546:
{
returnValue = F("Krausengasse");
break;
}
case 193547:
{
returnValue = F("Krausenhof");
break;
}
case 193548:
{
returnValue = F("Krausenstr.");
break;
}
case 193549:
{
returnValue = F("Krausentaler Weg");
break;
}
case 193550:
{
returnValue = F("Krausentor");
break;
}
case 193551:
{
returnValue = F("Krauseplatz");
break;
}
case 193552:
{
returnValue = F("Krauser Baum");
break;
}
case 193553:
{
returnValue = F("Krausestr.");
break;
}
case 193554:
{
returnValue = F("Krausgarten");
break;
}
case 193555:
{
returnValue = F("Krausgasse");
break;
}
case 193556:
{
returnValue = F("Krauskopfallee");
break;
}
case 193557:
{
returnValue = F("Krausnicker Weg");
break;
}
case 193558:
{
returnValue = F("Krausplatz");
break;
}
case 193559:
{
returnValue = F("Krauss-Maffei-Str.");
break;
}
case 193560:
{
returnValue = F("Kraussenbrücke Weg");
break;
}
case 193561:
{
returnValue = F("Krausstr.");
break;
}
case 193562:
{
returnValue = F("Krausweg");
break;
}
case 193563:
{
returnValue = F("Krautacker");
break;
}
case 193564:
{
returnValue = F("Krautackerstr.");
break;
}
case 193565:
{
returnValue = F("Krautackerweg");
break;
}
case 193566:
{
returnValue = F("Krautau");
break;
}
case 193567:
{
returnValue = F("Krautbachgasse");
break;
}
case 193568:
{
returnValue = F("Krautbergstr.");
break;
}
case 193569:
{
returnValue = F("Krautbergweg");
break;
}
case 193570:
{
returnValue = F("Krautbühlpark");
break;
}
case 193571:
{
returnValue = F("Krautelsbrunnenweg");
break;
}
case 193572:
{
returnValue = F("Krautenaustr.");
break;
}
case 193573:
{
returnValue = F("Krautergersheimer Platz");
break;
}
case 193574:
{
returnValue = F("Krautgarten");
break;
}
case 193575:
{
returnValue = F("Krautgarten Weg");
break;
}
case 193576:
{
returnValue = F("Krautgartenesch");
break;
}
case 193577:
{
returnValue = F("Krautgartenstr.");
break;
}
case 193578:
{
returnValue = F("Krautgartenweg");
break;
}
case 193579:
{
returnValue = F("Krautgartenwiesen");
break;
}
case 193580:
{
returnValue = F("Krautgartenäcker");
break;
}
case 193581:
{
returnValue = F("Krautgasse");
break;
}
case 193582:
{
returnValue = F("Krautgärten");
break;
}
case 193583:
{
returnValue = F("Krautgärtenstr.");
break;
}
case 193584:
{
returnValue = F("Krautgäßle");
break;
}
case 193585:
{
returnValue = F("Krauthausener Str.");
break;
}
case 193586:
{
returnValue = F("Krauthaustr.");
break;
}
case 193587:
{
returnValue = F("Krautheimer Str.");
break;
}
case 193588:
{
returnValue = F("Krautheimer Weg");
break;
}
case 193589:
{
returnValue = F("Krauthof");
break;
}
case 193590:
{
returnValue = F("Krauthofstr.");
break;
}
case 193591:
{
returnValue = F("Krauthohle");
break;
}
case 193592:
{
returnValue = F("Krauthöfe");
break;
}
case 193593:
{
returnValue = F("Krautklingenweg");
break;
}
case 193594:
{
returnValue = F("Krautlandweg");
break;
}
case 193595:
{
returnValue = F("Krautloidersteg");
break;
}
case 193596:
{
returnValue = F("Krautlose");
break;
}
case 193597:
{
returnValue = F("Krautlussweg");
break;
}
case 193598:
{
returnValue = F("Krautländer");
break;
}
case 193599:
{
returnValue = F("Krautländer Weg");
break;
}
case 193600:
{
returnValue = F("Krautländerstr.");
break;
}
case 193601:
{
returnValue = F("Krautländerweg");
break;
}
case 193602:
{
returnValue = F("Krautpoint");
break;
}
case 193603:
{
returnValue = F("Krautrain");
break;
}
case 193604:
{
returnValue = F("Krautsander Hafenstr.");
break;
}
case 193605:
{
returnValue = F("Krautsander Str.");
break;
}
case 193606:
{
returnValue = F("Krautschneise");
break;
}
case 193607:
{
returnValue = F("Krautschollenweg");
break;
}
case 193608:
{
returnValue = F("Krautsgasse");
break;
}
case 193609:
{
returnValue = F("Krautstr.");
break;
}
case 193610:
{
returnValue = F("Krautstückenweg");
break;
}
case 193611:
{
returnValue = F("Krautstücker Weg");
break;
}
case 193612:
{
returnValue = F("Krautstückerweg");
break;
}
case 193613:
{
returnValue = F("Krautteichweg");
break;
}
case 193614:
{
returnValue = F("Krautwall");
break;
}
case 193615:
{
returnValue = F("Krautwangerweg");
break;
}
case 193616:
{
returnValue = F("Krautweg");
break;
}
case 193617:
{
returnValue = F("Krautzberger Weg");
break;
}
case 193618:
{
returnValue = F("Krautze");
break;
}
case 193619:
{
returnValue = F("Krautäcker");
break;
}
case 193620:
{
returnValue = F("Krautäckerstr.");
break;
}
case 193621:
{
returnValue = F("Krautäckerweg");
break;
}
case 193622:
{
returnValue = F("Krauweg");
break;
}
case 193623:
{
returnValue = F("Kraußbergstr.");
break;
}
case 193624:
{
returnValue = F("Kraußengarten");
break;
}
case 193625:
{
returnValue = F("Kraußengasse");
break;
}
case 193626:
{
returnValue = F("Kraußenklinge");
break;
}
case 193627:
{
returnValue = F("Kraußnitzmühlenweg");
break;
}
case 193628:
{
returnValue = F("Kraußoldstr.");
break;
}
case 193629:
{
returnValue = F("Kraußstr.");
break;
}
case 193630:
{
returnValue = F("Krawehlstr.");
break;
}
case 193631:
{
returnValue = F("Krawinkel");
break;
}
case 193632:
{
returnValue = F("Krawinkeler Str.");
break;
}
case 193633:
{
returnValue = F("Krawinkeler Weg");
break;
}
case 193634:
{
returnValue = F("Krawinkelstr.");
break;
}
case 193635:
{
returnValue = F("Krawinkler Weg");
break;
}
case 193636:
{
returnValue = F("Kraxenbergweg");
break;
}
case 193637:
{
returnValue = F("Kraxnbichlweg");
break;
}
case 193638:
{
returnValue = F("Kraxweg");
break;
}
case 193639:
{
returnValue = F("Kray");
break;
}
case 193640:
{
returnValue = F("Krayenbergstr.");
break;
}
case 193641:
{
returnValue = F("Krayenburgstr.");
break;
}
case 193642:
{
returnValue = F("Krayenkamp");
break;
}
case 193643:
{
returnValue = F("Krayermühle");
break;
}
case 193644:
{
returnValue = F("Krayerstr.");
break;
}
case 193645:
{
returnValue = F("Kraywiesenweg");
break;
}
case 193646:
{
returnValue = F("Kraßhof");
break;
}
case 193647:
{
returnValue = F("Krebaer Str.");
break;
}
case 193648:
{
returnValue = F("Krebecker Landstr.");
break;
}
case 193649:
{
returnValue = F("Kreben");
break;
}
case 193650:
{
returnValue = F("Krebenfeld");
break;
}
case 193651:
{
returnValue = F("Krebengäßchen");
break;
}
case 193652:
{
returnValue = F("Krebenhalde");
break;
}
case 193653:
{
returnValue = F("Krebenrichtstatt");
break;
}
case 193654:
{
returnValue = F("Krebenstr.");
break;
}
case 193655:
{
returnValue = F("Krebenweg");
break;
}
case 193656:
{
returnValue = F("Krebenwiesen");
break;
}
case 193657:
{
returnValue = F("Krebenwiesenweg");
break;
}
case 193658:
{
returnValue = F("Krebergasse");
break;
}
case 193659:
{
returnValue = F("Kreberweg");
break;
}
case 193660:
{
returnValue = F("Krebeser Str.");
break;
}
case 193661:
{
returnValue = F("Krebitzschen");
break;
}
case 193662:
{
returnValue = F("Kreblitzer Str.");
break;
}
case 193663:
{
returnValue = F("Krebs");
break;
}
case 193664:
{
returnValue = F("Krebsallee");
break;
}
case 193665:
{
returnValue = F("Krebsaueler Str.");
break;
}
case 193666:
{
returnValue = F("Krebsbachbrücke");
break;
}
case 193667:
{
returnValue = F("Krebsbachpark");
break;
}
case 193668:
{
returnValue = F("Krebsbachring");
break;
}
case 193669:
{
returnValue = F("Krebsbachstr.");
break;
}
case 193670:
{
returnValue = F("Krebsbachtal");
break;
}
case 193671:
{
returnValue = F("Krebsbachweg");
break;
}
case 193672:
{
returnValue = F("Krebsberg Gang 1");
break;
}
case 193673:
{
returnValue = F("Krebsberg Gang 2");
break;
}
case 193674:
{
returnValue = F("Krebsberg Gang 3");
break;
}
case 193675:
{
returnValue = F("Krebsbrink");
break;
}
case 193676:
{
returnValue = F("Krebsbrücke");
break;
}
case 193677:
{
returnValue = F("Krebsel");
break;
}
case 193678:
{
returnValue = F("Krebsenberg");
break;
}
case 193679:
{
returnValue = F("Krebser Str.");
break;
}
case 193680:
{
returnValue = F("Krebserweg");
break;
}
case 193681:
{
returnValue = F("Krebsfeldstr.");
break;
}
case 193682:
{
returnValue = F("Krebsfördener Tannen");
break;
}
case 193683:
{
returnValue = F("Krebsfördener Weg");
break;
}
case 193684:
{
returnValue = F("Krebsgang");
break;
}
case 193685:
{
returnValue = F("Krebsgarten");
break;
}
case 193686:
{
returnValue = F("Krebsgasse");
break;
}
case 193687:
{
returnValue = F("Krebsgewann");
break;
}
case 193688:
{
returnValue = F("Krebsgrund");
break;
}
case 193689:
{
returnValue = F("Krebsgässle");
break;
}
case 193690:
{
returnValue = F("Krebsgäßchen");
break;
}
case 193691:
{
returnValue = F("Krebshalde");
break;
}
case 193692:
{
returnValue = F("Krebsheide");
break;
}
case 193693:
{
returnValue = F("Krebshäger Str.");
break;
}
case 193694:
{
returnValue = F("Krebskanal");
break;
}
case 193695:
{
returnValue = F("Krebslochweg");
break;
}
case 193696:
{
returnValue = F("Krebsmatt");
break;
}
case 193697:
{
returnValue = F("Krebsmühle");
break;
}
case 193698:
{
returnValue = F("Krebsmühlenring");
break;
}
case 193699:
{
returnValue = F("Krebsschere");
break;
}
case 193700:
{
returnValue = F("Krebsstein");
break;
}
case 193701:
{
returnValue = F("Krebsstr.");
break;
}
case 193702:
{
returnValue = F("Krebststr.");
break;
}
case 193703:
{
returnValue = F("Krebsufer");
break;
}
case 193704:
{
returnValue = F("Krebsweg");
break;
}
case 193705:
{
returnValue = F("Krebsweilerer Str.");
break;
}
case 193706:
{
returnValue = F("Krebsäckerweg");
break;
}
case 193707:
{
returnValue = F("Krebsöge");
break;
}
case 193708:
{
returnValue = F("Krebsögersteg");
break;
}
case 193709:
{
returnValue = F("Krebäckerstr.");
break;
}
case 193710:
{
returnValue = F("Krechelheimerstr.");
break;
}
case 193711:
{
returnValue = F("Krechels Eck");
break;
}
case 193712:
{
returnValue = F("Krechtinger Str.");
break;
}
case 193713:
{
returnValue = F("Kreckersweg");
break;
}
case 193714:
{
returnValue = F("Kreckeweg");
break;
}
case 193715:
{
returnValue = F("Kreckow");
break;
}
case 193716:
{
returnValue = F("Kreckwitzer Str.");
break;
}
case 193717:
{
returnValue = F("Kredenbach");
break;
}
case 193718:
{
returnValue = F("Kredenbacher Park");
break;
}
case 193719:
{
returnValue = F("Kredenbacher Str.");
break;
}
case 193720:
{
returnValue = F("Kredenburgstr.");
break;
}
case 193721:
{
returnValue = F("Kredererstr.");
break;
}
case 193722:
{
returnValue = F("Kreebenstr.");
break;
}
case 193723:
{
returnValue = F("Kreendamm");
break;
}
case 193724:
{
returnValue = F("Kreenheinstetter Str.");
break;
}
case 193725:
{
returnValue = F("Kreenrieder Str.");
break;
}
case 193726:
{
returnValue = F("Kreepener Dorfstr.");
break;
}
case 193727:
{
returnValue = F("Kreepener Hauptstr.");
break;
}
case 193728:
{
returnValue = F("Kreepener Str.");
break;
}
case 193729:
{
returnValue = F("Kreethof");
break;
}
case 193730:
{
returnValue = F("Krefelder Str.");
break;
}
case 193731:
{
returnValue = F("Krefelder Weg");
break;
}
case 193732:
{
returnValue = F("Kreftenscheerstr.");
break;
}
case 193733:
{
returnValue = F("Kreftenweg");
break;
}
case 193734:
{
returnValue = F("Krefters Busch");
break;
}
case 193735:
{
returnValue = F("Kreftingstr.");
break;
}
case 193736:
{
returnValue = F("Kregel");
break;
}
case 193737:
{
returnValue = F("Kregelstr.");
break;
}
case 193738:
{
returnValue = F("Kreggenbrink");
break;
}
case 193739:
{
returnValue = F("Kregweg");
break;
}
case 193740:
{
returnValue = F("Krehbergstr.");
break;
}
case 193741:
{
returnValue = F("Krehenberg");
break;
}
case 193742:
{
returnValue = F("Kreherstr.");
break;
}
case 193743:
{
returnValue = F("Krehlastr.");
break;
}
case 193744:
{
returnValue = F("Krehtalweg");
break;
}
case 193745:
{
returnValue = F("Krehwaldweg");
break;
}
case 193746:
{
returnValue = F("Krehwinkel");
break;
}
case 193747:
{
returnValue = F("Krehwinkler Höfe");
break;
}
case 193748:
{
returnValue = F("Krehwinkler Str.");
break;
}
case 193749:
{
returnValue = F("Krehwinkler Weg");
break;
}
case 193750:
{
returnValue = F("Kreichwichstr.");
break;
}
case 193751:
{
returnValue = F("Kreidacher Höhe");
break;
}
case 193752:
{
returnValue = F("Kreidacher Weg");
break;
}
case 193753:
{
returnValue = F("Kreidenbodenweg");
break;
}
case 193754:
{
returnValue = F("Kreidenfeld");
break;
}
case 193755:
{
returnValue = F("Kreidenweg");
break;
}
case 193756:
{
returnValue = F("Kreidestr.");
break;
}
case 193757:
{
returnValue = F("Kreideweg");
break;
}
case 193758:
{
returnValue = F("Kreidlerstr.");
break;
}
case 193759:
{
returnValue = F("Kreidweg");
break;
}
case 193760:
{
returnValue = F("Kreielsberg");
break;
}
case 193761:
{
returnValue = F("Kreienbarg");
break;
}
case 193762:
{
returnValue = F("Kreienberg");
break;
}
case 193763:
{
returnValue = F("Kreienberg Bahn");
break;
}
case 193764:
{
returnValue = F("Kreienborn");
break;
}
case 193765:
{
returnValue = F("Kreienbrand");
break;
}
case 193766:
{
returnValue = F("Kreienbrink");
break;
}
case 193767:
{
returnValue = F("Kreienböhl");
break;
}
case 193768:
{
returnValue = F("Kreiener Chaussee");
break;
}
case 193769:
{
returnValue = F("Kreiener Str.");
break;
}
case 193770:
{
returnValue = F("Kreienfeld");
break;
}
case 193771:
{
returnValue = F("Kreienholt");
break;
}
case 193772:
{
returnValue = F("Kreienhop");
break;
}
case 193773:
{
returnValue = F("Kreienhorst");
break;
}
case 193774:
{
returnValue = F("Kreienkamp");
break;
}
case 193775:
{
returnValue = F("Kreienmoor");
break;
}
case 193776:
{
returnValue = F("Kreiennest");
break;
}
case 193777:
{
returnValue = F("Kreienredder");
break;
}
case 193778:
{
returnValue = F("Kreienried");
break;
}
case 193779:
{
returnValue = F("Kreiensener Str.");
break;
}
case 193780:
{
returnValue = F("Kreienser Kamp");
break;
}
case 193781:
{
returnValue = F("Kreienstieg");
break;
}
case 193782:
{
returnValue = F("Kreienweg");
break;
}
case 193783:
{
returnValue = F("Kreier Weg");
break;
}
case 193784:
{
returnValue = F("Kreiersiepen");
break;
}
case 193785:
{
returnValue = F("Kreigenbarg");
break;
}
case 193786:
{
returnValue = F("Kreihgenweg");
break;
}
case 193787:
{
returnValue = F("Kreihnbrink");
break;
}
case 193788:
{
returnValue = F("Kreihüttenmoorweg");
break;
}
case 193789:
{
returnValue = F("Kreikenborn");
break;
}
case 193790:
{
returnValue = F("Kreikenhof");
break;
}
case 193791:
{
returnValue = F("Kreikental");
break;
}
case 193792:
{
returnValue = F("Kreiler Weg");
break;
}
case 193793:
{
returnValue = F("Kreilinger Str.");
break;
}
case 193794:
{
returnValue = F("Kreilings Weg");
break;
}
case 193795:
{
returnValue = F("Kreilmanstr.");
break;
}
case 193796:
{
returnValue = F("Kreimendahl");
break;
}
case 193797:
{
returnValue = F("Kreimers Kamp");
break;
}
case 193798:
{
returnValue = F("Kreinbarg");
break;
}
case 193799:
{
returnValue = F("Kreinberg");
break;
}
case 193800:
{
returnValue = F("Kreinfot");
break;
}
case 193801:
{
returnValue = F("Kreinfot-Siedlung");
break;
}
case 193802:
{
returnValue = F("Kreinhof");
break;
}
case 193803:
{
returnValue = F("Kreinzlweg");
break;
}
case 193804:
{
returnValue = F("Kreipe");
break;
}
case 193805:
{
returnValue = F("Kreipke");
break;
}
case 193806:
{
returnValue = F("Kreis Altenaer Eisenbahn");
break;
}
case 193807:
{
returnValue = F("Kreis-Jugendzeltplatz");
break;
}
case 193808:
{
returnValue = F("Kreisauer Str.");
break;
}
case 193809:
{
returnValue = F("Kreisauer Weg");
break;
}
case 193810:
{
returnValue = F("Kreisbachweg");
break;
}
case 193811:
{
returnValue = F("Kreisbahnhof");
break;
}
case 193812:
{
returnValue = F("Kreisbahnplatz");
break;
}
case 193813:
{
returnValue = F("Kreisbahnstr.");
break;
}
case 193814:
{
returnValue = F("Kreisch");
break;
}
case 193815:
{
returnValue = F("Kreischaer Str.");
break;
}
case 193816:
{
returnValue = F("Kreischaer Weg");
break;
}
case 193817:
{
returnValue = F("Kreischauer Str.");
break;
}
case 193818:
{
returnValue = F("Kreischaussee");
break;
}
case 193819:
{
returnValue = F("Kreisel");
break;
}
case 193820:
{
returnValue = F("Kreisel \"Rodheimer Düne");
break;
}
case 193821:
{
returnValue = F("Kreisel Aspacher Tor");
break;
}
case 193822:
{
returnValue = F("Kreisel Freistr.ntor");
break;
}
case 193823:
{
returnValue = F("Kreisel Hohentor");
break;
}
case 193824:
{
returnValue = F("Kreisel Irreler Mitte");
break;
}
case 193825:
{
returnValue = F("Kreisel Neckarsulm Ost");
break;
}
case 193826:
{
returnValue = F("Kreisel Sehnde Ost");
break;
}
case 193827:
{
returnValue = F("Kreisel Sehnde West");
break;
}
case 193828:
{
returnValue = F("Kreisel ev. Kirche");
break;
}
case 193829:
{
returnValue = F("Kreiselschneise");
break;
}
case 193830:
{
returnValue = F("Kreiselweg");
break;
}
case 193831:
{
returnValue = F("Kreisental");
break;
}
case 193832:
{
returnValue = F("Kreisfelder Gasse");
break;
}
case 193833:
{
returnValue = F("Kreisfelder Str.");
break;
}
case 193834:
{
returnValue = F("Kreisfelder Weg");
break;
}
case 193835:
{
returnValue = F("Kreisfeldstr.");
break;
}
case 193836:
{
returnValue = F("Kreisferienstr.");
break;
}
case 193837:
{
returnValue = F("Kreisgarten");
break;
}
case 193838:
{
returnValue = F("Kreisgasse");
break;
}
case 193839:
{
returnValue = F("Kreisgrenzweg");
break;
}
case 193840:
{
returnValue = F("Kreishauspfad");
break;
}
case 193841:
{
returnValue = F("Kreishausstr.");
break;
}
case 193842:
{
returnValue = F("Kreishäldeweg");
break;
}
case 193843:
{
returnValue = F("Kreisigstr.");
break;
}
case 193844:
{
returnValue = F("Kreisjugendhaus");
break;
}
case 193845:
{
returnValue = F("Kreiskönigsallee");
break;
}
case 193846:
{
returnValue = F("Kreislehrgarten");
break;
}
case 193847:
{
returnValue = F("Kreislerstr.");
break;
}
case 193848:
{
returnValue = F("Kreislerweg");
break;
}
case 193849:
{
returnValue = F("Kreismoorstr.");
break;
}
case 193850:
{
returnValue = F("Kreismoorweg");
break;
}
case 193851:
{
returnValue = F("Kreismuseum-Wolfsschlucht");
break;
}
case 193852:
{
returnValue = F("Kreisparkassen Wegle");
break;
}
case 193853:
{
returnValue = F("Kreisquerverbindung");
break;
}
case 193854:
{
returnValue = F("Kreissiedlung");
break;
}
case 193855:
{
returnValue = F("Kreisstr.");
break;
}
case 193856:
{
returnValue = F("Kreisstr. 55");
break;
}
case 193857:
{
returnValue = F("Kreisstr. NEA 14");
break;
}
case 193858:
{
returnValue = F("Kreisstr. NM-18");
break;
}
case 193859:
{
returnValue = F("Kreisverbindungsstr.");
break;
}
case 193860:
{
returnValue = F("Kreisverbindungstr.");
break;
}
case 193861:
{
returnValue = F("Kreisverkehr Bogen-Furth");
break;
}
case 193862:
{
returnValue = F("Kreisverkehr Mougins");
break;
}
case 193863:
{
returnValue = F("Kreisverkehr Rohrlache");
break;
}
case 193864:
{
returnValue = F("Kreisverkehr Schillerhöhe");
break;
}
case 193865:
{
returnValue = F("Kreisverkehr Schwabenstr.");
break;
}
case 193866:
{
returnValue = F("Kreiswaldstr.");
break;
}
case 193867:
{
returnValue = F("Kreiswaldweg");
break;
}
case 193868:
{
returnValue = F("Kreisweg");
break;
}
case 193869:
{
returnValue = F("Kreitenberg");
break;
}
case 193870:
{
returnValue = F("Kreitenkamp");
break;
}
case 193871:
{
returnValue = F("Kreith");
break;
}
case 193872:
{
returnValue = F("Kreither Str.");
break;
}
case 193873:
{
returnValue = F("Kreithof");
break;
}
case 193874:
{
returnValue = F("Kreithwinkel");
break;
}
case 193875:
{
returnValue = F("Kreitlappereiweg");
break;
}
case 193876:
{
returnValue = F("Kreitmayrgasse");
break;
}
case 193877:
{
returnValue = F("Kreitner Weg");
break;
}
case 193878:
{
returnValue = F("Kreitstr.");
break;
}
case 193879:
{
returnValue = F("Kreittmayrstr.");
break;
}
case 193880:
{
returnValue = F("Kreißa");
break;
}
case 193881:
{
returnValue = F("Kreißaer Str.");
break;
}
case 193882:
{
returnValue = F("Kreißmannstr.");
break;
}
case 193883:
{
returnValue = F("Krekelberger Hof");
break;
}
case 193884:
{
returnValue = F("Krekeler Str.");
break;
}
case 193885:
{
returnValue = F("Krekenkamp");
break;
}
case 193886:
{
returnValue = F("Krelinger Bruch");
break;
}
case 193887:
{
returnValue = F("Krelinger Damm");
break;
}
case 193888:
{
returnValue = F("Krelinger Weg");
break;
}
case 193889:
{
returnValue = F("Krelkauer Weg");
break;
}
case 193890:
{
returnValue = F("Krellenhäuser");
break;
}
case 193891:
{
returnValue = F("Krellstr.");
break;
}
case 193892:
{
returnValue = F("Kreloh");
break;
}
case 193893:
{
returnValue = F("Kremberg");
break;
}
case 193894:
{
returnValue = F("Krembzer Chaussee");
break;
}
case 193895:
{
returnValue = F("Krembzer Str.");
break;
}
case 193896:
{
returnValue = F("Kremel");
break;
}
case 193897:
{
returnValue = F("Kremelsdyck");
break;
}
case 193898:
{
returnValue = F("Kremelstr.");
break;
}
case 193899:
{
returnValue = F("Kremenholl");
break;
}
case 193900:
{
returnValue = F("Kremenholler Str.");
break;
}
case 193901:
{
returnValue = F("Kremensee");
break;
}
case 193902:
{
returnValue = F("Kremerbergredder");
break;
}
case 193903:
{
returnValue = F("Kremerpfad");
break;
}
case 193904:
{
returnValue = F("Kremersiefen");
break;
}
case 193905:
{
returnValue = F("Kremerstr.");
break;
}
case 193906:
{
returnValue = F("Kremerwisch");
break;
}
case 193907:
{
returnValue = F("Kremitzer Str.");
break;
}
case 193908:
{
returnValue = F("Kremitzstr.");
break;
}
case 193909:
{
returnValue = F("Kremkauer Weg");
break;
}
case 193910:
{
returnValue = F("Kremmel");
break;
}
case 193911:
{
returnValue = F("Kremmeldorfer Str.");
break;
}
case 193912:
{
returnValue = F("Kremmener Allee");
break;
}
case 193913:
{
returnValue = F("Kremmener Chaussee");
break;
}
case 193914:
{
returnValue = F("Kremmener Str.");
break;
}
case 193915:
{
returnValue = F("Kremmener Weg");
break;
}
case 193916:
{
returnValue = F("Kremmerspfad");
break;
}
case 193917:
{
returnValue = F("Kremminer Str.");
break;
}
case 193918:
{
returnValue = F("Kremnitzweg");
break;
}
case 193919:
{
returnValue = F("Kremp'sche Spitze");
break;
}
case 193920:
{
returnValue = F("Krempe");
break;
}
case 193921:
{
returnValue = F("Krempeler Str.");
break;
}
case 193922:
{
returnValue = F("Krempeler Weg");
break;
}
case 193923:
{
returnValue = F("Krempelfurt");
break;
}
case 193924:
{
returnValue = F("Krempelweg");
break;
}
case 193925:
{
returnValue = F("Krempen");
break;
}
case 193926:
{
returnValue = F("Krempenbrunnenweg");
break;
}
case 193927:
{
returnValue = F("Krempendorfer Chaussee");
break;
}
case 193928:
{
returnValue = F("Krempenweg");
break;
}
case 193929:
{
returnValue = F("Kremper Kamp");
break;
}
case 193930:
{
returnValue = F("Kremper Ort");
break;
}
case 193931:
{
returnValue = F("Kremper Weg");
break;
}
case 193932:
{
returnValue = F("Kremperkate");
break;
}
case 193933:
{
returnValue = F("Krempermarschwall");
break;
}
case 193934:
{
returnValue = F("Krempeweg");
break;
}
case 193935:
{
returnValue = F("Kremplschlag");
break;
}
case 193936:
{
returnValue = F("Kremplsetzerweg");
break;
}
case 193937:
{
returnValue = F("Kremptal");
break;
}
case 193938:
{
returnValue = F("Kremsdorf");
break;
}
case 193939:
{
returnValue = F("Kremser Str.");
break;
}
case 193940:
{
returnValue = F("Kremser Tann");
break;
}
case 193941:
{
returnValue = F("Kremser Weg");
break;
}
case 193942:
{
returnValue = F("Kremserweg");
break;
}
case 193943:
{
returnValue = F("Kremsmünsterstr.");
break;
}
case 193944:
{
returnValue = F("Kremstr.");
break;
}
case 193945:
{
returnValue = F("Kremsweg");
break;
}
case 193946:
{
returnValue = F("Krenacker");
break;
}
case 193947:
{
returnValue = F("Krenbühl");
break;
}
case 193948:
{
returnValue = F("Krendelstr.");
break;
}
case 193949:
{
returnValue = F("Krengarten");
break;
}
case 193950:
{
returnValue = F("Krengeljägerstr.");
break;
}
case 193951:
{
returnValue = F("Krengelstr.");
break;
}
case 193952:
{
returnValue = F("Krenkingen Rathaus");
break;
}
case 193953:
{
returnValue = F("Krenklstr.");
break;
}
case 193954:
{
returnValue = F("Krenmoosstr.");
break;
}
case 193955:
{
returnValue = F("Krennstr.");
break;
}
case 193956:
{
returnValue = F("Krennweg");
break;
}
case 193957:
{
returnValue = F("Krensberg");
break;
}
case 193958:
{
returnValue = F("Krensheimer Steige");
break;
}
case 193959:
{
returnValue = F("Krensheimer Str.");
break;
}
case 193960:
{
returnValue = F("Krensheimer Weg");
break;
}
case 193961:
{
returnValue = F("Krensitzer Str.");
break;
}
case 193962:
{
returnValue = F("Krentruper Str.");
break;
}
case 193963:
{
returnValue = F("Krentruperhagen");
break;
}
case 193964:
{
returnValue = F("Krentruperhagen-Kreisel");
break;
}
case 193965:
{
returnValue = F("Krenweg");
break;
}
case 193966:
{
returnValue = F("Krenzerstr.");
break;
}
case 193967:
{
returnValue = F("Krenzliner Str.");
break;
}
case 193968:
{
returnValue = F("Krenzow");
break;
}
case 193969:
{
returnValue = F("Krenzower Damm");
break;
}
case 193970:
{
returnValue = F("Kreolinenweg");
break;
}
case 193971:
{
returnValue = F("Krepelschroffenstr.");
break;
}
case 193972:
{
returnValue = F("Kreppachstr.");
break;
}
case 193973:
{
returnValue = F("Kreppe");
break;
}
case 193974:
{
returnValue = F("Kreppel");
break;
}
case 193975:
{
returnValue = F("Kreppelsberg");
break;
}
case 193976:
{
returnValue = F("Kreppelweg");
break;
}
case 193977:
{
returnValue = F("Kreppendorf");
break;
}
case 193978:
{
returnValue = F("Kreppendorfer Str.");
break;
}
case 193979:
{
returnValue = F("Kreppenstr.");
break;
}
case 193980:
{
returnValue = F("Kreppenweg");
break;
}
case 193981:
{
returnValue = F("Kreppenäcker");
break;
}
case 193982:
{
returnValue = F("Krepperweg");
break;
}
case 193983:
{
returnValue = F("Kreppgartenstr.");
break;
}
case 193984:
{
returnValue = F("Kreppstr.");
break;
}
case 193985:
{
returnValue = F("Krepta");
break;
}
case 193986:
{
returnValue = F("Kreptitz");
break;
}
case 193987:
{
returnValue = F("Kresenzerweg");
break;
}
case 193988:
{
returnValue = F("Kressbacher Str.");
break;
}
case 193989:
{
returnValue = F("Kressbronner Str.");
break;
}
case 193990:
{
returnValue = F("Kressehof");
break;
}
case 193991:
{
returnValue = F("Kresselstr.");
break;
}
case 193992:
{
returnValue = F("Kressen-Jacobs-Tal");
break;
}
case 193993:
{
returnValue = F("Kressenanger");
break;
}
case 193994:
{
returnValue = F("Kressenbacher Str.");
break;
}
case 193995:
{
returnValue = F("Kressenbachweg");
break;
}
case 193996:
{
returnValue = F("Kressenberg");
break;
}
case 193997:
{
returnValue = F("Kressenbrunner Weg");
break;
}
case 193998:
{
returnValue = F("Kressener Str.");
break;
}
case 193999:
{
returnValue = F("Kressenstein");
break;
}
case 194000:
{
returnValue = F("Kressensteinweg");
break;
}
case 194001:
{
returnValue = F("Kressenteichweg");
break;
}
case 194002:
{
returnValue = F("Kressenweg");
break;
}
case 194003:
{
returnValue = F("Kressenwiesenweg");
break;
}
case 194004:
{
returnValue = F("Kressiermühle");
break;
}
case 194005:
{
returnValue = F("Kresspfuhl");
break;
}
case 194006:
{
returnValue = F("Kressweg");
break;
}
case 194007:
{
returnValue = F("Kresswiesen");
break;
}
case 194008:
{
returnValue = F("Kresswiesenweg");
break;
}
case 194009:
{
returnValue = F("Krestenweg");
break;
}
case 194010:
{
returnValue = F("Kreszentiaheimstr.");
break;
}
case 194011:
{
returnValue = F("Kreszentiastr.");
break;
}
case 194012:
{
returnValue = F("Krete");
break;
}
case 194013:
{
returnValue = F("Kretenbergstr.");
break;
}
case 194014:
{
returnValue = F("Kretenbergweg");
break;
}
case 194015:
{
returnValue = F("Kreterholzweg");
break;
}
case 194016:
{
returnValue = F("Krethagen");
break;
}
case 194017:
{
returnValue = F("Krethof");
break;
}
case 194018:
{
returnValue = F("Kretholz");
break;
}
case 194019:
{
returnValue = F("Kretsch-Platz");
break;
}
case 194020:
{
returnValue = F("Kretscham");
break;
}
case 194021:
{
returnValue = F("Kretschamberg");
break;
}
case 194022:
{
returnValue = F("Kretschambrücke");
break;
}
case 194023:
{
returnValue = F("Kretschamweg");
break;
}
case 194024:
{
returnValue = F("Kretschiner Weg");
break;
}
case 194025:
{
returnValue = F("Kretschmar");
break;
}
case 194026:
{
returnValue = F("Kretschmerstr.");
break;
}
case 194027:
{
returnValue = F("Krettenbach");
break;
}
case 194028:
{
returnValue = F("Krettenbacher Str.");
break;
}
case 194029:
{
returnValue = F("Krettenbachstr.");
break;
}
case 194030:
{
returnValue = F("Krettenburgstr.");
break;
}
case 194031:
{
returnValue = F("Krettenhofweg");
break;
}
case 194032:
{
returnValue = F("Krettenlochweg");
break;
}
case 194033:
{
returnValue = F("Krettlerweg");
break;
}
case 194034:
{
returnValue = F("Krettnacher Str.");
break;
}
case 194035:
{
returnValue = F("Krettnerweg");
break;
}
case 194036:
{
returnValue = F("Krettnicher Weg");
break;
}
case 194037:
{
returnValue = F("Kretzenhof");
break;
}
case 194038:
{
returnValue = F("Kretzer Str.");
break;
}
case 194039:
{
returnValue = F("Kretzergang");
break;
}
case 194040:
{
returnValue = F("Kretzerstr.");
break;
}
case 194041:
{
returnValue = F("Kretzerweg");
break;
}
case 194042:
{
returnValue = F("Kretzeweg");
break;
}
case 194043:
{
returnValue = F("Kretzschamweg");
break;
}
case 194044:
{
returnValue = F("Kretzschmarstr.");
break;
}
case 194045:
{
returnValue = F("Kretzschmarweg");
break;
}
case 194046:
{
returnValue = F("Kreudnitzer Allee");
break;
}
case 194047:
{
returnValue = F("Kreudnitzer Str.");
break;
}
case 194048:
{
returnValue = F("Kreuelsstr.");
break;
}
case 194049:
{
returnValue = F("Kreuerplatz");
break;
}
case 194050:
{
returnValue = F("Kreuerstr.");
break;
}
case 194051:
{
returnValue = F("Kreugers Weg");
break;
}
case 194052:
{
returnValue = F("Kreugerstr.");
break;
}
case 194053:
{
returnValue = F("Kreulich-Str.");
break;
}
case 194054:
{
returnValue = F("Kreulkerhok");
break;
}
case 194055:
{
returnValue = F("Kreulshof");
break;
}
case 194056:
{
returnValue = F("Kreulstr.");
break;
}
case 194057:
{
returnValue = F("Kreumaer Dorfstr.");
break;
}
case 194058:
{
returnValue = F("Kreumaer Mühlenweg");
break;
}
case 194059:
{
returnValue = F("Kreumaer Str.");
break;
}
case 194060:
{
returnValue = F("Kreumaer Winkel");
break;
}
case 194061:
{
returnValue = F("Kreuschweg");
break;
}
case 194062:
{
returnValue = F("Kreuseweg");
break;
}
case 194063:
{
returnValue = F("Kreut");
break;
}
case 194064:
{
returnValue = F("Kreutberg");
break;
}
case 194065:
{
returnValue = F("Kreutbergstr.");
break;
}
case 194066:
{
returnValue = F("Kreutenbacher Str.");
break;
}
case 194067:
{
returnValue = F("Kreuter Str.");
break;
}
case 194068:
{
returnValue = F("Kreuter Weg");
break;
}
case 194069:
{
returnValue = F("Kreuterschneise");
break;
}
case 194070:
{
returnValue = F("Kreuterstr.");
break;
}
case 194071:
{
returnValue = F("Kreutfeld");
break;
}
case 194072:
{
returnValue = F("Kreuth");
break;
}
case 194073:
{
returnValue = F("Kreuther Str.");
break;
}
case 194074:
{
returnValue = F("Kreuthfeldstr.");
break;
}
case 194075:
{
returnValue = F("Kreuthof");
break;
}
case 194076:
{
returnValue = F("Kreuthofer Str.");
break;
}
case 194077:
{
returnValue = F("Kreuthofstr.");
break;
}
case 194078:
{
returnValue = F("Kreuthstr.");
break;
}
case 194079:
{
returnValue = F("Kreuthweg");
break;
}
case 194080:
{
returnValue = F("Kreutleinstr.");
break;
}
case 194081:
{
returnValue = F("Kreutmeierstr.");
break;
}
case 194082:
{
returnValue = F("Kreutstr.");
break;
}
case 194083:
{
returnValue = F("Kreutweg");
break;
}
case 194084:
{
returnValue = F("Kreutzacker");
break;
}
case 194085:
{
returnValue = F("Kreutzberger Str.");
break;
}
case 194086:
{
returnValue = F("Kreutzbergstr.");
break;
}
case 194087:
{
returnValue = F("Kreutzbreede");
break;
}
case 194088:
{
returnValue = F("Kreutzeckweg");
break;
}
case 194089:
{
returnValue = F("Kreutzersgrund");
break;
}
case 194090:
{
returnValue = F("Kreutzerstr.");
break;
}
case 194091:
{
returnValue = F("Kreutzerweg");
break;
}
case 194092:
{
returnValue = F("Kreutzfeld");
break;
}
case 194093:
{
returnValue = F("Kreutzhäuschen");
break;
}
case 194094:
{
returnValue = F("Kreutzkamp");
break;
}
case 194095:
{
returnValue = F("Kreutzkampswiese");
break;
}
case 194096:
{
returnValue = F("Kreutzmannshäger Damm");
break;
}
case 194097:
{
returnValue = F("Kreutzstr.");
break;
}
case 194098:
{
returnValue = F("Kreutzstr.nweg");
break;
}
case 194099:
{
returnValue = F("Kreutzweg");
break;
}
case 194100:
{
returnValue = F("Kreuz");
break;
}
case 194101:
{
returnValue = F("Kreuz-Geräumt");
break;
}
case 194102:
{
returnValue = F("Kreuz-Knippchen");
break;
}
case 194103:
{
returnValue = F("Kreuz-Schneise");
break;
}
case 194104:
{
returnValue = F("Kreuz-Schwestern-Str.");
break;
}
case 194105:
{
returnValue = F("Kreuz-Weiher-Str.");
break;
}
case 194106:
{
returnValue = F("Kreuzacherweg");
break;
}
case 194107:
{
returnValue = F("Kreuzacker");
break;
}
case 194108:
{
returnValue = F("Kreuzacker-Nord");
break;
}
case 194109:
{
returnValue = F("Kreuzackerstr.");
break;
}
case 194110:
{
returnValue = F("Kreuzackerweg");
break;
}
case 194111:
{
returnValue = F("Kreuzahlen");
break;
}
case 194112:
{
returnValue = F("Kreuzallee");
break;
}
case 194113:
{
returnValue = F("Kreuzanger");
break;
}
case 194114:
{
returnValue = F("Kreuzangerstr.");
break;
}
case 194115:
{
returnValue = F("Kreuzauer Str.");
break;
}
case 194116:
{
returnValue = F("Kreuzbach");
break;
}
case 194117:
{
returnValue = F("Kreuzbachstr.");
break;
}
case 194118:
{
returnValue = F("Kreuzbachweg");
break;
}
case 194119:
{
returnValue = F("Kreuzbauerschaft");
break;
}
case 194120:
{
returnValue = F("Kreuzbaumstr.");
break;
}
case 194121:
{
returnValue = F("Kreuzbaumweg");
break;
}
case 194122:
{
returnValue = F("Kreuzberg");
break;
}
case 194123:
{
returnValue = F("Kreuzberg-Anger");
break;
}
case 194124:
{
returnValue = F("Kreuzbergallee");
break;
}
case 194125:
{
returnValue = F("Kreuzbergblick");
break;
}
case 194126:
{
returnValue = F("Kreuzberge");
break;
}
case 194127:
{
returnValue = F("Kreuzberger Auel");
break;
}
case 194128:
{
returnValue = F("Kreuzberger Feld");
break;
}
case 194129:
{
returnValue = F("Kreuzberger Ring");
break;
}
case 194130:
{
returnValue = F("Kreuzberger Str.");
break;
}
case 194131:
{
returnValue = F("Kreuzberger Web");
break;
}
case 194132:
{
returnValue = F("Kreuzberger Weg");
break;
}
case 194133:
{
returnValue = F("Kreuzberghohlweg");
break;
}
case 194134:
{
returnValue = F("Kreuzbergring");
break;
}
case 194135:
{
returnValue = F("Kreuzbergstr.");
break;
}
case 194136:
{
returnValue = F("Kreuzbergweg");
break;
}
case 194137:
{
returnValue = F("Kreuzbichl");
break;
}
case 194138:
{
returnValue = F("Kreuzbichlstr.");
break;
}
case 194139:
{
returnValue = F("Kreuzbichlweg");
break;
}
case 194140:
{
returnValue = F("Kreuzbleek");
break;
}
case 194141:
{
returnValue = F("Kreuzborn");
break;
}
case 194142:
{
returnValue = F("Kreuzbornplatz");
break;
}
case 194143:
{
returnValue = F("Kreuzbrede");
break;
}
case 194144:
{
returnValue = F("Kreuzbree");
break;
}
case 194145:
{
returnValue = F("Kreuzbreite");
break;
}
case 194146:
{
returnValue = F("Kreuzbreiten");
break;
}
case 194147:
{
returnValue = F("Kreuzbreitlstr.");
break;
}
case 194148:
{
returnValue = F("Kreuzbrink");
break;
}
case 194149:
{
returnValue = F("Kreuzbroich");
break;
}
case 194150:
{
returnValue = F("Kreuzbruch");
break;
}
case 194151:
{
returnValue = F("Kreuzbrucher Str.");
break;
}
case 194152:
{
returnValue = F("Kreuzbrucher Weg");
break;
}
case 194153:
{
returnValue = F("Kreuzbrunnen");
break;
}
case 194154:
{
returnValue = F("Kreuzbrunnenstr.");
break;
}
case 194155:
{
returnValue = F("Kreuzbrunnenweg");
break;
}
case 194156:
{
returnValue = F("Kreuzbrüderstr.");
break;
}
case 194157:
{
returnValue = F("Kreuzbrünnelweg");
break;
}
case 194158:
{
returnValue = F("Kreuzbuche");
break;
}
case 194159:
{
returnValue = F("Kreuzbuche Weg");
break;
}
case 194160:
{
returnValue = F("Kreuzbuchenweg");
break;
}
case 194161:
{
returnValue = F("Kreuzburg");
break;
}
case 194162:
{
returnValue = F("Kreuzburger Str.");
break;
}
case 194163:
{
returnValue = F("Kreuzburgstr.");
break;
}
case 194164:
{
returnValue = F("Kreuzburgweg");
break;
}
case 194165:
{
returnValue = F("Kreuzbusch");
break;
}
case 194166:
{
returnValue = F("Kreuzbuschstr.");
break;
}
case 194167:
{
returnValue = F("Kreuzbuschweg");
break;
}
case 194168:
{
returnValue = F("Kreuzbächleweg");
break;
}
case 194169:
{
returnValue = F("Kreuzbäckstr.");
break;
}
case 194170:
{
returnValue = F("Kreuzbügel");
break;
}
case 194171:
{
returnValue = F("Kreuzbühl");
break;
}
case 194172:
{
returnValue = F("Kreuzbühler Str.");
break;
}
case 194173:
{
returnValue = F("Kreuzbühlgasse");
break;
}
case 194174:
{
returnValue = F("Kreuzbühlstr.");
break;
}
case 194175:
{
returnValue = F("Kreuzbühlweg");
break;
}
case 194176:
{
returnValue = F("Kreuzchen");
break;
}
case 194177:
{
returnValue = F("Kreuzchenweg");
break;
}
case 194178:
{
returnValue = F("Kreuzdamm");
break;
}
case 194179:
{
returnValue = F("Kreuzdeich");
break;
}
case 194180:
{
returnValue = F("Kreuzdelle");
break;
}
case 194181:
{
returnValue = F("Kreuzdornring");
break;
}
case 194182:
{
returnValue = F("Kreuzdornstr.");
break;
}
case 194183:
{
returnValue = F("Kreuzdornweg");
break;
}
case 194184:
{
returnValue = F("Kreuze");
break;
}
case 194185:
{
returnValue = F("Kreuzebraer Str.");
break;
}
case 194186:
{
returnValue = F("Kreuzeck");
break;
}
case 194187:
{
returnValue = F("Kreuzeckbahnstr.");
break;
}
case 194188:
{
returnValue = F("Kreuzeckstr.");
break;
}
case 194189:
{
returnValue = F("Kreuzeckweg");
break;
}
case 194190:
{
returnValue = F("Kreuzederstr.");
break;
}
case 194191:
{
returnValue = F("Kreuzegarten");
break;
}
case 194192:
{
returnValue = F("Kreuzegertenhof");
break;
}
case 194193:
{
returnValue = F("Kreuzegrund");
break;
}
case 194194:
{
returnValue = F("Kreuzeich");
break;
}
case 194195:
{
returnValue = F("Kreuzeiche");
break;
}
case 194196:
{
returnValue = F("Kreuzeichenstr.");
break;
}
case 194197:
{
returnValue = F("Kreuzeichenweg");
break;
}
case 194198:
{
returnValue = F("Kreuzeichstr.");
break;
}
case 194199:
{
returnValue = F("Kreuzelbergweg");
break;
}
case 194200:
{
returnValue = F("Kreuzelung");
break;
}
case 194201:
{
returnValue = F("Kreuzelweg");
break;
}
case 194202:
{
returnValue = F("Kreuzem");
break;
}
case 194203:
{
returnValue = F("Kreuzen");
break;
}
case 194204:
{
returnValue = F("Kreuzenstein");
break;
}
case 194205:
{
returnValue = F("Kreuzenstr.");
break;
}
case 194206:
{
returnValue = F("Kreuzenäckerstr.");
break;
}
case 194207:
{
returnValue = F("Kreuzenäckerweg");
break;
}
case 194208:
{
returnValue = F("Kreuzer Str.");
break;
}
case 194209:
{
returnValue = F("Kreuzer Weg");
break;
}
case 194210:
{
returnValue = F("Kreuzerberg");
break;
}
case 194211:
{
returnValue = F("Kreuzerbergstr.");
break;
}
case 194212:
{
returnValue = F("Kreuzergrabenweg");
break;
}
case 194213:
{
returnValue = F("Kreuzergärtle");
break;
}
case 194214:
{
returnValue = F("Kreuzernweg");
break;
}
case 194215:
{
returnValue = F("Kreuzerstr.");
break;
}
case 194216:
{
returnValue = F("Kreuzertalgasse");
break;
}
case 194217:
{
returnValue = F("Kreuzertalweg");
break;
}
case 194218:
{
returnValue = F("Kreuzerwasenstr.");
break;
}
case 194219:
{
returnValue = F("Kreuzerweg");
break;
}
case 194220:
{
returnValue = F("Kreuzerwiese");
break;
}
case 194221:
{
returnValue = F("Kreuzespanring");
break;
}
case 194222:
{
returnValue = F("Kreuzespanweg");
break;
}
case 194223:
{
returnValue = F("Kreuzfahrerstr.");
break;
}
case 194224:
{
returnValue = F("Kreuzfeld");
break;
}
case 194225:
{
returnValue = F("Kreuzfeldchen");
break;
}
case 194226:
{
returnValue = F("Kreuzfelder");
break;
}
case 194227:
{
returnValue = F("Kreuzfelder Str.");
break;
}
case 194228:
{
returnValue = F("Kreuzfelderstr.");
break;
}
case 194229:
{
returnValue = F("Kreuzfelderweg");
break;
}
case 194230:
{
returnValue = F("Kreuzfeldring");
break;
}
case 194231:
{
returnValue = F("Kreuzfeldstr.");
break;
}
case 194232:
{
returnValue = F("Kreuzfeldweg");
break;
}
case 194233:
{
returnValue = F("Kreuzfelsen");
break;
}
case 194234:
{
returnValue = F("Kreuzfelsenweg");
break;
}
case 194235:
{
returnValue = F("Kreuzfichte");
break;
}
case 194236:
{
returnValue = F("Kreuzgang");
break;
}
case 194237:
{
returnValue = F("Kreuzgang im Karmelitenkloster");
break;
}
case 194238:
{
returnValue = F("Kreuzgang mit Innenhof");
break;
}
case 194239:
{
returnValue = F("Kreuzganghof");
break;
}
case 194240:
{
returnValue = F("Kreuzgarten");
break;
}
case 194241:
{
returnValue = F("Kreuzgartenallee");
break;
}
case 194242:
{
returnValue = F("Kreuzgartenstr.");
break;
}
case 194243:
{
returnValue = F("Kreuzgartenweg");
break;
}
case 194244:
{
returnValue = F("Kreuzgass");
break;
}
case 194245:
{
returnValue = F("Kreuzgasse");
break;
}
case 194246:
{
returnValue = F("Kreuzgeräumt");
break;
}
case 194247:
{
returnValue = F("Kreuzgestell");
break;
}
case 194248:
{
returnValue = F("Kreuzgewänd");
break;
}
case 194249:
{
returnValue = F("Kreuzgraben");
break;
}
case 194250:
{
returnValue = F("Kreuzgrabenweg");
break;
}
case 194251:
{
returnValue = F("Kreuzgracht");
break;
}
case 194252:
{
returnValue = F("Kreuzgrund");
break;
}
case 194253:
{
returnValue = F("Kreuzgrundweg");
break;
}
case 194254:
{
returnValue = F("Kreuzgründel");
break;
}
case 194255:
{
returnValue = F("Kreuzgärten");
break;
}
case 194256:
{
returnValue = F("Kreuzgässchen");
break;
}
case 194257:
{
returnValue = F("Kreuzgässle");
break;
}
case 194258:
{
returnValue = F("Kreuzgäßchen");
break;
}
case 194259:
{
returnValue = F("Kreuzgäßle");
break;
}
case 194260:
{
returnValue = F("Kreuzgäßlein");
break;
}
case 194261:
{
returnValue = F("Kreuzhagestr.");
break;
}
case 194262:
{
returnValue = F("Kreuzhalde");
break;
}
case 194263:
{
returnValue = F("Kreuzhaldensträßchen");
break;
}
case 194264:
{
returnValue = F("Kreuzhaldenweg");
break;
}
case 194265:
{
returnValue = F("Kreuzhaldeweg");
break;
}
case 194266:
{
returnValue = F("Kreuzhamm");
break;
}
case 194267:
{
returnValue = F("Kreuzhardsweg");
break;
}
case 194268:
{
returnValue = F("Kreuzhausweg");
break;
}
case 194269:
{
returnValue = F("Kreuzhauweg");
break;
}
case 194270:
{
returnValue = F("Kreuzheck");
break;
}
case 194271:
{
returnValue = F("Kreuzheckenweg");
break;
}
case 194272:
{
returnValue = F("Kreuzhecker Str.");
break;
}
case 194273:
{
returnValue = F("Kreuzheide");
break;
}
case 194274:
{
returnValue = F("Kreuzheister");
break;
}
case 194275:
{
returnValue = F("Kreuzherrenpfad");
break;
}
case 194276:
{
returnValue = F("Kreuzherrenstr.");
break;
}
case 194277:
{
returnValue = F("Kreuzherrenweg");
break;
}
case 194278:
{
returnValue = F("Kreuzherrnstr.");
break;
}
case 194279:
{
returnValue = F("Kreuzhof");
break;
}
case 194280:
{
returnValue = F("Kreuzhofstr.");
break;
}
case 194281:
{
returnValue = F("Kreuzhohl");
break;
}
case 194282:
{
returnValue = F("Kreuzhohle");
break;
}
case 194283:
{
returnValue = F("Kreuzhohlstr.");
break;
}
case 194284:
{
returnValue = F("Kreuzholz");
break;
}
case 194285:
{
returnValue = F("Kreuzholzhauser Str.");
break;
}
case 194286:
{
returnValue = F("Kreuzholzstr.");
break;
}
case 194287:
{
returnValue = F("Kreuzholzweg");
break;
}
case 194288:
{
returnValue = F("Kreuzhornweg");
break;
}
case 194289:
{
returnValue = F("Kreuzhub");
break;
}
case 194290:
{
returnValue = F("Kreuzhähn");
break;
}
case 194291:
{
returnValue = F("Kreuzhäuschen");
break;
}
case 194292:
{
returnValue = F("Kreuzhöfe");
break;
}
case 194293:
{
returnValue = F("Kreuzhöhe");
break;
}
case 194294:
{
returnValue = F("Kreuzhöhstr.");
break;
}
case 194295:
{
returnValue = F("Kreuzhügel");
break;
}
case 194296:
{
returnValue = F("Kreuziger Mauer");
break;
}
case 194297:
{
returnValue = F("Kreuziger Str.");
break;
}
case 194298:
{
returnValue = F("Kreuzjochstr.");
break;
}
case 194299:
{
returnValue = F("Kreuzkamp");
break;
}
case 194300:
{
returnValue = F("Kreuzkampstr.");
break;
}
case 194301:
{
returnValue = F("Kreuzkampweg");
break;
}
case 194302:
{
returnValue = F("Kreuzkapelle");
break;
}
case 194303:
{
returnValue = F("Kreuzkapellenweg");
break;
}
case 194304:
{
returnValue = F("Kreuzkauler Weg");
break;
}
case 194305:
{
returnValue = F("Kreuzkellerweg");
break;
}
case 194306:
{
returnValue = F("Kreuzkirch Schneise");
break;
}
case 194307:
{
returnValue = F("Kreuzkirchenpark");
break;
}
case 194308:
{
returnValue = F("Kreuzkirchenstr.");
break;
}
case 194309:
{
returnValue = F("Kreuzkirchstr.");
break;
}
case 194310:
{
returnValue = F("Kreuzklingenweg");
break;
}
case 194311:
{
returnValue = F("Kreuzkopfstr.");
break;
}
case 194312:
{
returnValue = F("Kreuzkopfweg");
break;
}
case 194313:
{
returnValue = F("Kreuzkoppe");
break;
}
case 194314:
{
returnValue = F("Kreuzkoppel");
break;
}
case 194315:
{
returnValue = F("Kreuzkrug");
break;
}
case 194316:
{
returnValue = F("Kreuzkruger Str.");
break;
}
case 194317:
{
returnValue = F("Kreuzkuhlenweg");
break;
}
case 194318:
{
returnValue = F("Kreuzkämpchen");
break;
}
case 194319:
{
returnValue = F("Kreuzkämpe");
break;
}
case 194320:
{
returnValue = F("Kreuzlach");
break;
}
case 194321:
{
returnValue = F("Kreuzlachallee");
break;
}
case 194322:
{
returnValue = F("Kreuzlachschneise");
break;
}
case 194323:
{
returnValue = F("Kreuzlandstr.");
break;
}
case 194324:
{
returnValue = F("Kreuzlebrunnenweg");
break;
}
case 194325:
{
returnValue = F("Kreuzlehenstr.");
break;
}
case 194326:
{
returnValue = F("Kreuzleinstr.");
break;
}
case 194327:
{
returnValue = F("Kreuzleite");
break;
}
case 194328:
{
returnValue = F("Kreuzleithe");
break;
}
case 194329:
{
returnValue = F("Kreuzleitn");
break;
}
case 194330:
{
returnValue = F("Kreuzlensäckerweg");
break;
}
case 194331:
{
returnValue = F("Kreuzleweg");
break;
}
case 194332:
{
returnValue = F("Kreuzlinde");
break;
}
case 194333:
{
returnValue = F("Kreuzlinger Str.");
break;
}
case 194334:
{
returnValue = F("Kreuzlingerforststr.");
break;
}
case 194335:
{
returnValue = F("Kreuzloh");
break;
}
case 194336:
{
returnValue = F("Kreuzländerweg");
break;
}
case 194337:
{
returnValue = F("Kreuzlücke");
break;
}
case 194338:
{
returnValue = F("Kreuzmattenstr.");
break;
}
case 194339:
{
returnValue = F("Kreuzmattenweg");
break;
}
case 194340:
{
returnValue = F("Kreuzmattstr.");
break;
}
case 194341:
{
returnValue = F("Kreuzmattweg");
break;
}
case 194342:
{
returnValue = F("Kreuzmoor");
break;
}
case 194343:
{
returnValue = F("Kreuzmoorstr.");
break;
}
case 194344:
{
returnValue = F("Kreuzmönchstr.");
break;
}
case 194345:
{
returnValue = F("Kreuzmühle");
break;
}
case 194346:
{
returnValue = F("Kreuzmühlenweg");
break;
}
case 194347:
{
returnValue = F("Kreuznaaf");
break;
}
case 194348:
{
returnValue = F("Kreuznacher Hohl");
break;
}
case 194349:
{
returnValue = F("Kreuznacher Str.");
break;
}
case 194350:
{
returnValue = F("Kreuznacher Weg");
break;
}
case 194351:
{
returnValue = F("Kreuznücke");
break;
}
case 194352:
{
returnValue = F("Kreuzotternweg");
break;
}
case 194353:
{
returnValue = F("Kreuzpassage");
break;
}
case 194354:
{
returnValue = F("Kreuzpfad");
break;
}
case 194355:
{
returnValue = F("Kreuzpfahl");
break;
}
case 194356:
{
returnValue = F("Kreuzpforte");
break;
}
case 194357:
{
returnValue = F("Kreuzpfuhlweg");
break;
}
case 194358:
{
returnValue = F("Kreuzplatz");
break;
}
case 194359:
{
returnValue = F("Kreuzplatzweg");
break;
}
case 194360:
{
returnValue = F("Kreuzpullach");
break;
}
case 194361:
{
returnValue = F("Kreuzpullacher Weg");
break;
}
case 194362:
{
returnValue = F("Kreuzrain");
break;
}
case 194363:
{
returnValue = F("Kreuzrainweg");
break;
}
case 194364:
{
returnValue = F("Kreuzrichtstatt");
break;
}
case 194365:
{
returnValue = F("Kreuzricke");
break;
}
case 194366:
{
returnValue = F("Kreuzriethe");
break;
}
case 194367:
{
returnValue = F("Kreuzroggenstr.");
break;
}
case 194368:
{
returnValue = F("Kreuzschlag");
break;
}
case 194369:
{
returnValue = F("Kreuzschlag Park - Weizerstr.");
break;
}
case 194370:
{
returnValue = F("Kreuzschlagweg");
break;
}
case 194371:
{
returnValue = F("Kreuzschneise");
break;
}
case 194372:
{
returnValue = F("Kreuzseener Weg");
break;
}
case 194373:
{
returnValue = F("Kreuzseestr.");
break;
}
case 194374:
{
returnValue = F("Kreuzseige");
break;
}
case 194375:
{
returnValue = F("Kreuzstauden");
break;
}
case 194376:
{
returnValue = F("Kreuzsteg");
break;
}
case 194377:
{
returnValue = F("Kreuzsteig");
break;
}
case 194378:
{
returnValue = F("Kreuzsteige");
break;
}
case 194379:
{
returnValue = F("Kreuzstein");
break;
}
case 194380:
{
returnValue = F("Kreuzsteinstr.");
break;
}
case 194381:
{
returnValue = F("Kreuzsteinsträßchen");
break;
}
case 194382:
{
returnValue = F("Kreuzsteinweg");
break;
}
case 194383:
{
returnValue = F("Kreuzstieg");
break;
}
case 194384:
{
returnValue = F("Kreuzstr.");
break;
}
case 194385:
{
returnValue = F("Kreuzstr.ntunnel");
break;
}
case 194386:
{
returnValue = F("Kreuzsträsschen");
break;
}
case 194387:
{
returnValue = F("Kreuzsträßchen");
break;
}
case 194388:
{
returnValue = F("Kreuzstöckl");
break;
}
case 194389:
{
returnValue = F("Kreuzstücken");
break;
}
case 194390:
{
returnValue = F("Kreuzsäulenstr.");
break;
}
case 194391:
{
returnValue = F("Kreuzsäulenweg");
break;
}
case 194392:
{
returnValue = F("Kreuztal");
break;
}
case 194393:
{
returnValue = F("Kreuztaler Str.");
break;
}
case 194394:
{
returnValue = F("Kreuztanne");
break;
}
case 194395:
{
returnValue = F("Kreuztannenstr.");
break;
}
case 194396:
{
returnValue = F("Kreuzteilstr.");
break;
}
case 194397:
{
returnValue = F("Kreuzthaler Str.");
break;
}
case 194398:
{
returnValue = F("Kreuzthaler Weg");
break;
}
case 194399:
{
returnValue = F("Kreuztor");
break;
}
case 194400:
{
returnValue = F("Kreuztorstr.");
break;
}
case 194401:
{
returnValue = F("Kreuztwiete");
break;
}
case 194402:
{
returnValue = F("Kreuzvier");
break;
}
case 194403:
{
returnValue = F("Kreuzwalder Weg");
break;
}
case 194404:
{
returnValue = F("Kreuzwalder Weg SALZWEG");
break;
}
case 194405:
{
returnValue = F("Kreuzwaldstr.");
break;
}
case 194406:
{
returnValue = F("Kreuzwaldweg");
break;
}
case 194407:
{
returnValue = F("Kreuzweg");
break;
}
case 194408:
{
returnValue = F("Kreuzweg - Gemeinden St. Lambertus, Affeln + St. Lucia, Altenaffeln + St. Agatha, Blintrop");
break;
}
case 194409:
{
returnValue = F("Kreuzweg Feldafing");
break;
}
case 194410:
{
returnValue = F("Kreuzweg Kalvarienberg");
break;
}
case 194411:
{
returnValue = F("Kreuzweg Remblinghausen");
break;
}
case 194412:
{
returnValue = F("Kreuzweg Wasserliesch");
break;
}
case 194413:
{
returnValue = F("Kreuzweg [K1] [K9]");
break;
}
case 194414:
{
returnValue = F("Kreuzweg am Schröcksküppel");
break;
}
case 194415:
{
returnValue = F("Kreuzweg aus der zweiten Hälfte des 18. Jahrhunderts");
break;
}
case 194416:
{
returnValue = F("Kreuzweg zur Klause");
break;
}
case 194417:
{
returnValue = F("Kreuzwegbrücke");
break;
}
case 194418:
{
returnValue = F("Kreuzwege");
break;
}
case 194419:
{
returnValue = F("Kreuzwegle");
break;
}
case 194420:
{
returnValue = F("Kreuzweglein");
break;
}
case 194421:
{
returnValue = F("Kreuzwegstr.");
break;
}
case 194422:
{
returnValue = F("Kreuzweide");
break;
}
case 194423:
{
returnValue = F("Kreuzweidenstr.");
break;
}
case 194424:
{
returnValue = F("Kreuzweidstr.");
break;
}
case 194425:
{
returnValue = F("Kreuzweiherweg");
break;
}
case 194426:
{
returnValue = F("Kreuzweingartener Str.");
break;
}
case 194427:
{
returnValue = F("Kreuzweingartener Weg");
break;
}
case 194428:
{
returnValue = F("Kreuzwertheimer Str.");
break;
}
case 194429:
{
returnValue = F("Kreuzwiese");
break;
}
case 194430:
{
returnValue = F("Kreuzwiesen");
break;
}
case 194431:
{
returnValue = F("Kreuzwiesenstr.");
break;
}
case 194432:
{
returnValue = F("Kreuzwiesenweg");
break;
}
case 194433:
{
returnValue = F("Kreuzwiesstr.");
break;
}
case 194434:
{
returnValue = F("Kreuzwingert");
break;
}
case 194435:
{
returnValue = F("Kreuzwinkel");
break;
}
case 194436:
{
returnValue = F("Kreuzwinkelstr.");
break;
}
case 194437:
{
returnValue = F("Kreuzwippe");
break;
}
case 194438:
{
returnValue = F("Kreuzwoogstr.");
break;
}
case 194439:
{
returnValue = F("Kreuzwäldchen");
break;
}
case 194440:
{
returnValue = F("Kreuzäcker");
break;
}
case 194441:
{
returnValue = F("Kreuzäckerring");
break;
}
case 194442:
{
returnValue = F("Kreuzäckerstaffel");
break;
}
case 194443:
{
returnValue = F("Kreuzäckerstr.");
break;
}
case 194444:
{
returnValue = F("Kreuzäckerweg");
break;
}
case 194445:
{
returnValue = F("Kreußlerstr.");
break;
}
case 194446:
{
returnValue = F("Krevinghauser Str.");
break;
}
case 194447:
{
returnValue = F("Kreweliner Dorfstr.");
break;
}
case 194448:
{
returnValue = F("Kreweliner Weg");
break;
}
case 194449:
{
returnValue = F("Krewelstr.");
break;
}
case 194450:
{
returnValue = F("Kreweterweg");
break;
}
case 194451:
{
returnValue = F("Krewetstr.");
break;
}
case 194452:
{
returnValue = F("Krewitz");
break;
}
case 194453:
{
returnValue = F("Kreyenbergstr.");
break;
}
case 194454:
{
returnValue = F("Kreyenborg");
break;
}
case 194455:
{
returnValue = F("Kreyenburg");
break;
}
case 194456:
{
returnValue = F("Kreyengrund");
break;
}
case 194457:
{
returnValue = F("Kreyenhooper Str.");
break;
}
case 194458:
{
returnValue = F("Kreyenkamp");
break;
}
case 194459:
{
returnValue = F("Kreyenloch");
break;
}
case 194460:
{
returnValue = F("Kreyenpool");
break;
}
case 194461:
{
returnValue = F("Kreyenstr.");
break;
}
case 194462:
{
returnValue = F("Kreyenweg");
break;
}
case 194463:
{
returnValue = F("Kreyerner Str.");
break;
}
case 194464:
{
returnValue = F("Kreyernweg");
break;
}
case 194465:
{
returnValue = F("Kreyes Wiese");
break;
}
case 194466:
{
returnValue = F("Kreyhorn");
break;
}
case 194467:
{
returnValue = F("Kreymborgs Kamp");
break;
}
case 194468:
{
returnValue = F("Kreymborgstr.");
break;
}
case 194469:
{
returnValue = F("Kreymühlenweg");
break;
}
case 194470:
{
returnValue = F("Kreypauer Landstr.");
break;
}
case 194471:
{
returnValue = F("Kreypauer Str.");
break;
}
case 194472:
{
returnValue = F("Kreyssigstr.");
break;
}
case 194473:
{
returnValue = F("Kreystr.");
break;
}
case 194474:
{
returnValue = F("Kreywäldchen");
break;
}
case 194475:
{
returnValue = F("Krezengasse");
break;
}
case 194476:
{
returnValue = F("Kreßbacher Str.");
break;
}
case 194477:
{
returnValue = F("Kreßbachstr.");
break;
}
case 194478:
{
returnValue = F("Kreßbachweg");
break;
}
case 194479:
{
returnValue = F("Kreßnerstr.");
break;
}
case 194480:
{
returnValue = F("Kreßstr.");
break;
}
case 194481:
{
returnValue = F("Kreßäcker");
break;
}
case 194482:
{
returnValue = F("Kreßäcker-Brücke");
break;
}
case 194483:
{
returnValue = F("Kribber Dorfstr.");
break;
}
case 194484:
{
returnValue = F("Kribber Str.");
break;
}
case 194485:
{
returnValue = F("Krichauffstr.");
break;
}
case 194486:
{
returnValue = F("Krichelberg");
break;
}
case 194487:
{
returnValue = F("Krichelenberg");
break;
}
case 194488:
{
returnValue = F("Krichelnweg");
break;
}
case 194489:
{
returnValue = F("Krichingerstr.");
break;
}
case 194490:
{
returnValue = F("Krickel Krummer Wall");
break;
}
case 194491:
{
returnValue = F("Krickelberg");
break;
}
case 194492:
{
returnValue = F("Krickelberger Bruch");
break;
}
case 194493:
{
returnValue = F("Krickelberger Str.");
break;
}
case 194494:
{
returnValue = F("Krickelsberg");
break;
}
case 194495:
{
returnValue = F("Krickelsdorfer Str.");
break;
}
case 194496:
{
returnValue = F("Krickenbacher Str.");
break;
}
case 194497:
{
returnValue = F("Krickenbecker Allee");
break;
}
case 194498:
{
returnValue = F("Krickenbecker Str.");
break;
}
case 194499:
{
returnValue = F("Krickenpatt");
break;
}
case 194500:
{
returnValue = F("Krickenpohlstr.");
break;
}
case 194501:
{
returnValue = F("Krickerhauer Str.");
break;
}
case 194502:
{
returnValue = F("Krickmarkt");
break;
}
case 194503:
{
returnValue = F("Krickow");
break;
}
case 194504:
{
returnValue = F("Kridderbachweg");
break;
}
case 194505:
{
returnValue = F("Kridtstr.");
break;
}
case 194506:
{
returnValue = F("Kriebitzscher Str.");
break;
}
case 194507:
{
returnValue = F("Kriebitzscher Weg");
break;
}
case 194508:
{
returnValue = F("Kriebsteiner Str.");
break;
}
case 194509:
{
returnValue = F("Kriebweg");
break;
}
case 194510:
{
returnValue = F("Kriechauer Str.");
break;
}
case 194511:
{
returnValue = F("Kriechbaum");
break;
}
case 194512:
{
returnValue = F("Kriegbachweg");
break;
}
case 194513:
{
returnValue = F("Kriegen Kamp");
break;
}
case 194514:
{
returnValue = F("Kriegenbrunner Str.");
break;
}
case 194515:
{
returnValue = F("Kriegenbrunner Weg");
break;
}
case 194516:
{
returnValue = F("Kriegerbühlweg");
break;
}
case 194517:
{
returnValue = F("Kriegerdamm");
break;
}
case 194518:
{
returnValue = F("Kriegerdenkmal");
break;
}
case 194519:
{
returnValue = F("Kriegerdenkmal / Gedenkstätte");
break;
}
case 194520:
{
returnValue = F("Kriegerdenkmal 1. Weltkrieg");
break;
}
case 194521:
{
returnValue = F("Kriegerdenkmal Harperscheid");
break;
}
case 194522:
{
returnValue = F("Kriegerdenkmal-Park");
break;
}
case 194523:
{
returnValue = F("Kriegerdenkmal/ Gedenkstätte");
break;
}
case 194524:
{
returnValue = F("Kriegerdenkmalweg");
break;
}
case 194525:
{
returnValue = F("Kriegerehrenmal");
break;
}
case 194526:
{
returnValue = F("Kriegerfriedhofstr.");
break;
}
case 194527:
{
returnValue = F("Kriegergarten");
break;
}
case 194528:
{
returnValue = F("Kriegergasse");
break;
}
case 194529:
{
returnValue = F("Kriegergäßchen");
break;
}
case 194530:
{
returnValue = F("Kriegerheide");
break;
}
case 194531:
{
returnValue = F("Kriegerheim");
break;
}
case 194532:
{
returnValue = F("Kriegerkuhle");
break;
}
case 194533:
{
returnValue = F("Kriegerpfad");
break;
}
case 194534:
{
returnValue = F("Kriegersgarten");
break;
}
case 194535:
{
returnValue = F("Kriegersgasse");
break;
}
case 194536:
{
returnValue = F("Kriegershofer Str.");
break;
}
case 194537:
{
returnValue = F("Kriegersiedlung");
break;
}
case 194538:
{
returnValue = F("Kriegersteig");
break;
}
case 194539:
{
returnValue = F("Kriegerstieg");
break;
}
case 194540:
{
returnValue = F("Kriegerstr.");
break;
}
case 194541:
{
returnValue = F("Kriegersweg");
break;
}
case 194542:
{
returnValue = F("Kriegerweg");
break;
}
case 194543:
{
returnValue = F("Kriegholzring");
break;
}
case 194544:
{
returnValue = F("Krieglachring");
break;
}
case 194545:
{
returnValue = F("Krieglmeierweg");
break;
}
case 194546:
{
returnValue = F("Kriegsbergstr.");
break;
}
case 194547:
{
returnValue = F("Kriegsbäume");
break;
}
case 194548:
{
returnValue = F("Kriegsdorfer Str.");
break;
}
case 194549:
{
returnValue = F("Kriegsdorfer Weg");
break;
}
case 194550:
{
returnValue = F("Kriegsfelder Str.");
break;
}
case 194551:
{
returnValue = F("Kriegsfelder Weg");
break;
}
case 194552:
{
returnValue = F("Kriegsgrabenweg");
break;
}
case 194553:
{
returnValue = F("Kriegsgräberstätte");
break;
}
case 194554:
{
returnValue = F("Kriegsgründchen");
break;
}
case 194555:
{
returnValue = F("Kriegshaberstr.");
break;
}
case 194556:
{
returnValue = F("Kriegshaldenstr.");
break;
}
case 194557:
{
returnValue = F("Kriegsheimer Str.");
break;
}
case 194558:
{
returnValue = F("Kriegsmühle");
break;
}
case 194559:
{
returnValue = F("Kriegsopfergedenkstätte");
break;
}
case 194560:
{
returnValue = F("Kriegsopfersiedlung");
break;
}
case 194561:
{
returnValue = F("Kriegssoll");
break;
}
case 194562:
{
returnValue = F("Kriegsstr.");
break;
}
case 194563:
{
returnValue = F("Kriegstedter Str.");
break;
}
case 194564:
{
returnValue = F("Kriegstr.");
break;
}
case 194565:
{
returnValue = F("Kriegstötter Str.");
break;
}
case 194566:
{
returnValue = F("Kriegswaldstr.");
break;
}
case 194567:
{
returnValue = F("Kriegswaldweg");
break;
}
case 194568:
{
returnValue = F("Kriegsweg");
break;
}
case 194569:
{
returnValue = F("Kriegswies");
break;
}
case 194570:
{
returnValue = F("Kriegswiesenstr.");
break;
}
case 194571:
{
returnValue = F("Kriegsäcker");
break;
}
case 194572:
{
returnValue = F("Kriegwaldweg");
break;
}
case 194573:
{
returnValue = F("Kriegäckerstr.");
break;
}
case 194574:
{
returnValue = F("Kriegäckerweg");
break;
}
case 194575:
{
returnValue = F("Kriekauer Str.");
break;
}
case 194576:
{
returnValue = F("Kriekhausen");
break;
}
case 194577:
{
returnValue = F("Krieler Landweg");
break;
}
case 194578:
{
returnValue = F("Krieler Str.");
break;
}
case 194579:
{
returnValue = F("Krieler Weg");
break;
}
case 194580:
{
returnValue = F("Krielower Str.");
break;
}
case 194581:
{
returnValue = F("Kriemhildenstr.");
break;
}
case 194582:
{
returnValue = F("Kriemhildenweg");
break;
}
case 194583:
{
returnValue = F("Kriemhildestr.");
break;
}
case 194584:
{
returnValue = F("Kriemhildring");
break;
}
case 194585:
{
returnValue = F("Kriemhildstr.");
break;
}
case 194586:
{
returnValue = F("Kriemhildweg");
break;
}
case 194587:
{
returnValue = F("Krien Ausbau");
break;
}
case 194588:
{
returnValue = F("Krien-Horst");
break;
}
case 194589:
{
returnValue = F("Kriener Damm");
break;
}
case 194590:
{
returnValue = F("Kriener Landstr.");
break;
}
case 194591:
{
returnValue = F("Krienke");
break;
}
case 194592:
{
returnValue = F("Kriesacker");
break;
}
case 194593:
{
returnValue = F("Krieseby");
break;
}
case 194594:
{
returnValue = F("Kriesebyau");
break;
}
case 194595:
{
returnValue = F("Kriesenweg");
break;
}
case 194596:
{
returnValue = F("Kriesmannsweg");
break;
}
case 194597:
{
returnValue = F("Kriesmühle");
break;
}
case 194598:
{
returnValue = F("Kriestorfer Str.");
break;
}
case 194599:
{
returnValue = F("Kriesweg");
break;
}
case 194600:
{
returnValue = F("Krietenberg");
break;
}
case 194601:
{
returnValue = F("Krietenhof");
break;
}
case 194602:
{
returnValue = F("Krietenwiesenweg");
break;
}
case 194603:
{
returnValue = F("Krietschenweg");
break;
}
case 194604:
{
returnValue = F("Krietzenweg");
break;
}
case 194605:
{
returnValue = F("Krietzschwitz");
break;
}
case 194606:
{
returnValue = F("Krietzschwitzer Str.");
break;
}
case 194607:
{
returnValue = F("Krifteler Str.");
break;
}
case 194608:
{
returnValue = F("Krifteler Weg");
break;
}
case 194609:
{
returnValue = F("Krikedillweg");
break;
}
case 194610:
{
returnValue = F("Krim");
break;
}
case 194611:
{
returnValue = F("Krimderöder Str.");
break;
}
case 194612:
{
returnValue = F("Krimhildenstr.");
break;
}
case 194613:
{
returnValue = F("Krimhildstr.");
break;
}
case 194614:
{
returnValue = F("Kriminixstr.");
break;
}
case 194615:
{
returnValue = F("Krimling");
break;
}
case 194616:
{
returnValue = F("Krimlinger Weg");
break;
}
case 194617:
{
returnValue = F("Krimlingsweg");
break;
}
case 194618:
{
returnValue = F("Krimm");
break;
}
case 194619:
{
returnValue = F("Krimmelbergweg");
break;
}
case 194620:
{
returnValue = F("Krimmenser Weg");
break;
}
case 194621:
{
returnValue = F("Krimmer-Passage");
break;
}
case 194622:
{
returnValue = F("Krimmerstr.");
break;
}
case 194623:
{
returnValue = F("Krimmgasse");
break;
}
case 194624:
{
returnValue = F("Krimmitzschen");
break;
}
case 194625:
{
returnValue = F("Krimmler Weg");
break;
}
case 194626:
{
returnValue = F("Krimmstr.");
break;
}
case 194627:
{
returnValue = F("Krimmweg");
break;
}
case 194628:
{
returnValue = F("Krimnickallee");
break;
}
case 194629:
{
returnValue = F("Krimpenbruch");
break;
}
case 194630:
{
returnValue = F("Krimpenforter Berg");
break;
}
case 194631:
{
returnValue = F("Krimpenforter Str.");
break;
}
case 194632:
{
returnValue = F("Krimpenforter Weg");
break;
}
case 194633:
{
returnValue = F("Krimpeweg");
break;
}
case 194634:
{
returnValue = F("Krimphovenweg");
break;
}
case 194635:
{
returnValue = F("Krimpsgasse");
break;
}
case 194636:
{
returnValue = F("Krimstr.");
break;
}
case 194637:
{
returnValue = F("Krimvitz");
break;
}
case 194638:
{
returnValue = F("Krimweg");
break;
}
case 194639:
{
returnValue = F("Krimwer Greun");
break;
}
case 194640:
{
returnValue = F("Krinaer Landstr.");
break;
}
case 194641:
{
returnValue = F("Krinaer Str.");
break;
}
case 194642:
{
returnValue = F("Krinaer Weg");
break;
}
case 194643:
{
returnValue = F("Kring");
break;
}
case 194644:
{
returnValue = F("Kringel");
break;
}
case 194645:
{
returnValue = F("Kringelers");
break;
}
case 194646:
{
returnValue = F("Kringelfeld");
break;
}
case 194647:
{
returnValue = F("Kringelkamp");
break;
}
case 194648:
{
returnValue = F("Kringelkrug");
break;
}
case 194649:
{
returnValue = F("Kringelkrugweg");
break;
}
case 194650:
{
returnValue = F("Kringeller Str.");
break;
}
case 194651:
{
returnValue = F("Kringelrain");
break;
}
case 194652:
{
returnValue = F("Kringelsbergweg");
break;
}
case 194653:
{
returnValue = F("Kringelsburg");
break;
}
case 194654:
{
returnValue = F("Kringelstr.");
break;
}
case 194655:
{
returnValue = F("Kringelweg");
break;
}
case 194656:
{
returnValue = F("Kringsgarten");
break;
}
case 194657:
{
returnValue = F("Kringskamp");
break;
}
case 194658:
{
returnValue = F("Kringsstr.");
break;
}
case 194659:
{
returnValue = F("Kringstr.");
break;
}
case 194660:
{
returnValue = F("Kringsweg");
break;
}
case 194661:
{
returnValue = F("Kringweg");
break;
}
case 194662:
{
returnValue = F("Kringwehrumer Str.");
break;
}
case 194663:
{
returnValue = F("Krinitzenstr.");
break;
}
case 194664:
{
returnValue = F("Krinkhof");
break;
}
case 194665:
{
returnValue = F("Krinnenweg");
break;
}
case 194666:
{
returnValue = F("Krinnerweg");
break;
}
case 194667:
{
returnValue = F("Krinningerstr.");
break;
}
case 194668:
{
returnValue = F("Kripfling");
break;
}
case 194669:
{
returnValue = F("Kripflingstr.");
break;
}
case 194670:
{
returnValue = F("Krippackerstr.");
break;
}
case 194671:
{
returnValue = F("Krippackerweg");
break;
}
case 194672:
{
returnValue = F("Krippbachtal");
break;
}
case 194673:
{
returnValue = F("Krippehnaer Landstr.");
break;
}
case 194674:
{
returnValue = F("Krippenbachweg");
break;
}
case 194675:
{
returnValue = F("Krippenberg");
break;
}
case 194676:
{
returnValue = F("Krippendorfer Allee");
break;
}
case 194677:
{
returnValue = F("Krippenhangweg");
break;
}
case 194678:
{
returnValue = F("Krippenstr.");
break;
}
case 194679:
{
returnValue = F("Krippenweg");
break;
}
case 194680:
{
returnValue = F("Kripper Str.");
break;
}
case 194681:
{
returnValue = F("Krippfeldstr.");
break;
}
case 194682:
{
returnValue = F("Krippleinstr.");
break;
}
case 194683:
{
returnValue = F("Krippstr.");
break;
}
case 194684:
{
returnValue = F("Krippwiesstr.");
break;
}
case 194685:
{
returnValue = F("Krischan-Klammbüdel-Weg");
break;
}
case 194686:
{
returnValue = F("Krischan-Wolters-Pfad");
break;
}
case 194687:
{
returnValue = F("Krischansbarg");
break;
}
case 194688:
{
returnValue = F("Krischanweg");
break;
}
case 194689:
{
returnValue = F("Krischelsberg");
break;
}
case 194690:
{
returnValue = F("Krischelstr.");
break;
}
case 194691:
{
returnValue = F("Krischerstr.");
break;
}
case 194692:
{
returnValue = F("Krisenpfad");
break;
}
case 194693:
{
returnValue = F("Krisenstr.");
break;
}
case 194694:
{
returnValue = F("Krisinger Str.");
break;
}
case 194695:
{
returnValue = F("Kristallstr.");
break;
}
case 194696:
{
returnValue = F("Kristallweg");
break;
}
case 194697:
{
returnValue = F("Kristanplatz");
break;
}
case 194698:
{
returnValue = F("Kristeiner Weg");
break;
}
case 194699:
{
returnValue = F("Kristiansgarten");
break;
}
case 194700:
{
returnValue = F("Kristinbrücke");
break;
}
case 194701:
{
returnValue = F("Kristinusstr.");
break;
}
case 194702:
{
returnValue = F("Kriststr.");
break;
}
case 194703:
{
returnValue = F("Kritscherweg");
break;
}
case 194704:
{
returnValue = F("Krittelmoor");
break;
}
case 194705:
{
returnValue = F("Krittenhorst");
break;
}
case 194706:
{
returnValue = F("Krittweg");
break;
}
case 194707:
{
returnValue = F("Kritzegraben");
break;
}
case 194708:
{
returnValue = F("Kritzmannsgasse");
break;
}
case 194709:
{
returnValue = F("Kritzmower Str.");
break;
}
case 194710:
{
returnValue = F("Kritzmower Weg");
break;
}
case 194711:
{
returnValue = F("Kritzowburg");
break;
}
case 194712:
{
returnValue = F("Kritzower Str.");
break;
}
case 194713:
{
returnValue = F("Kritzower Weg");
break;
}
case 194714:
{
returnValue = F("Kritzraedtstr.");
break;
}
case 194715:
{
returnValue = F("Krißstr.");
break;
}
case 194716:
{
returnValue = F("Krnover Platz");
break;
}
case 194717:
{
returnValue = F("Kroatengasse");
break;
}
case 194718:
{
returnValue = F("Kroatengrund");
break;
}
case 194719:
{
returnValue = F("Kroatenschlucht");
break;
}
case 194720:
{
returnValue = F("Kroatenstr.");
break;
}
case 194721:
{
returnValue = F("Kroatenweg");
break;
}
case 194722:
{
returnValue = F("Kroatzbeerweg");
break;
}
case 194723:
{
returnValue = F("Kroatzbeerwinkel");
break;
}
case 194724:
{
returnValue = F("Kroauweg");
break;
}
case 194725:
{
returnValue = F("Krobarg");
break;
}
case 194726:
{
returnValue = F("Krobitz");
break;
}
case 194727:
{
returnValue = F("Krobitzschstr.");
break;
}
case 194728:
{
returnValue = F("Krobshof");
break;
}
case 194729:
{
returnValue = F("Krochteweg");
break;
}
case 194730:
{
returnValue = F("Krock");
break;
}
case 194731:
{
returnValue = F("Kroemer Dup");
break;
}
case 194732:
{
returnValue = F("Kroenstr.");
break;
}
case 194733:
{
returnValue = F("Kroepgatsweg");
break;
}
case 194734:
{
returnValue = F("Kroetchensweiden");
break;
}
case 194735:
{
returnValue = F("Kroetze");
break;
}
case 194736:
{
returnValue = F("Kroetzer Allee");
break;
}
case 194737:
{
returnValue = F("Kroetzmühle");
break;
}
case 194738:
{
returnValue = F("Krofdorfer Str.");
break;
}
case 194739:
{
returnValue = F("Krogbuschweg");
break;
}
case 194740:
{
returnValue = F("Krogdiek");
break;
}
case 194741:
{
returnValue = F("Kroge");
break;
}
case 194742:
{
returnValue = F("Kroger Landstr.");
break;
}
case 194743:
{
returnValue = F("Kroger Pickerweg");
break;
}
case 194744:
{
returnValue = F("Kroger Str.");
break;
}
case 194745:
{
returnValue = F("Kroghooger-Wai");
break;
}
case 194746:
{
returnValue = F("Krogkamp");
break;
}
case 194747:
{
returnValue = F("Krogkoppel");
break;
}
case 194748:
{
returnValue = F("Kroglitzweg");
break;
}
case 194749:
{
returnValue = F("Kroglücke");
break;
}
case 194750:
{
returnValue = F("Krogmanns Land");
break;
}
case 194751:
{
returnValue = F("Krogmannstr.");
break;
}
case 194752:
{
returnValue = F("Krogmannsweg");
break;
}
case 194753:
{
returnValue = F("Krogredder");
break;
}
case 194754:
{
returnValue = F("Krogstedt");
break;
}
case 194755:
{
returnValue = F("Krogstedtweg");
break;
}
case 194756:
{
returnValue = F("Krogtwiete");
break;
}
case 194757:
{
returnValue = F("Krogweg");
break;
}
case 194758:
{
returnValue = F("Krogwisch");
break;
}
case 194759:
{
returnValue = F("Krohbergschneise");
break;
}
case 194760:
{
returnValue = F("Krohbergweg");
break;
}
case 194761:
{
returnValue = F("Krohenberger Feld");
break;
}
case 194762:
{
returnValue = F("Krohenfeldweg");
break;
}
case 194763:
{
returnValue = F("Krohenhammerweg");
break;
}
case 194764:
{
returnValue = F("Krohenäckerweg");
break;
}
case 194765:
{
returnValue = F("Krohlswinkel");
break;
}
case 194766:
{
returnValue = F("Krohnenbergstr.");
break;
}
case 194767:
{
returnValue = F("Krohnenborn");
break;
}
case 194768:
{
returnValue = F("Krohnestr.");
break;
}
case 194769:
{
returnValue = F("Krohnshof");
break;
}
case 194770:
{
returnValue = F("Krohnskamp");
break;
}
case 194771:
{
returnValue = F("Krohnstr.");
break;
}
case 194772:
{
returnValue = F("Krohwinkelstr.");
break;
}
case 194773:
{
returnValue = F("Krohäckerstr.");
break;
}
case 194774:
{
returnValue = F("Kroisbacher Str.");
break;
}
case 194775:
{
returnValue = F("Krojering");
break;
}
case 194776:
{
returnValue = F("Krokamp");
break;
}
case 194777:
{
returnValue = F("Krokauer Weg");
break;
}
case 194778:
{
returnValue = F("Krokelstr.");
break;
}
case 194779:
{
returnValue = F("Krokholm");
break;
}
case 194780:
{
returnValue = F("Krokisgasse");
break;
}
case 194781:
{
returnValue = F("Krokodilsteinweg");
break;
}
case 194782:
{
returnValue = F("Krokodilweg");
break;
}
case 194783:
{
returnValue = F("Krokusgasse");
break;
}
case 194784:
{
returnValue = F("Krokuskehre");
break;
}
case 194785:
{
returnValue = F("Krokusplatz");
break;
}
case 194786:
{
returnValue = F("Krokusring");
break;
}
case 194787:
{
returnValue = F("Krokussteig");
break;
}
case 194788:
{
returnValue = F("Krokusstieg");
break;
}
case 194789:
{
returnValue = F("Krokusstr.");
break;
}
case 194790:
{
returnValue = F("Krokusweg");
break;
}
case 194791:
{
returnValue = F("Krollbrücke");
break;
}
case 194792:
{
returnValue = F("Krollshof");
break;
}
case 194793:
{
returnValue = F("Krollstr.");
break;
}
case 194794:
{
returnValue = F("Kromackerweg");
break;
}
case 194795:
{
returnValue = F("Krombacher Feld");
break;
}
case 194796:
{
returnValue = F("Krombacher Str.");
break;
}
case 194797:
{
returnValue = F("Krombachstr.");
break;
}
case 194798:
{
returnValue = F("Krombachweg");
break;
}
case 194799:
{
returnValue = F("Krombergsweg");
break;
}
case 194800:
{
returnValue = F("Kromenweg");
break;
}
case 194801:
{
returnValue = F("Kromersweg");
break;
}
case 194802:
{
returnValue = F("Kromertstr.");
break;
}
case 194803:
{
returnValue = F("Kromeswiese");
break;
}
case 194804:
{
returnValue = F("Kromlauer Weg");
break;
}
case 194805:
{
returnValue = F("Krommenthaler Str.");
break;
}
case 194806:
{
returnValue = F("Krommenthalweg");
break;
}
case 194807:
{
returnValue = F("Krommerter Str.");
break;
}
case 194808:
{
returnValue = F("Krommerter Weg");
break;
}
case 194809:
{
returnValue = F("Kromsdorfer Str.");
break;
}
case 194810:
{
returnValue = F("Kromsdorfer Weg");
break;
}
case 194811:
{
returnValue = F("Kromsteg");
break;
}
case 194812:
{
returnValue = F("Kronachallee");
break;
}
case 194813:
{
returnValue = F("Kronacher Pfad");
break;
}
case 194814:
{
returnValue = F("Kronacher Str.");
break;
}
case 194815:
{
returnValue = F("Kronacher Tor");
break;
}
case 194816:
{
returnValue = F("Kronacherstr.");
break;
}
case 194817:
{
returnValue = F("Kronachring");
break;
}
case 194818:
{
returnValue = F("Kronacker");
break;
}
case 194819:
{
returnValue = F("Kronacker Weg");
break;
}
case 194820:
{
returnValue = F("Kronackerring");
break;
}
case 194821:
{
returnValue = F("Kronackerstr.");
break;
}
case 194822:
{
returnValue = F("Kronastweg");
break;
}
case 194823:
{
returnValue = F("Kronau");
break;
}
case 194824:
{
returnValue = F("Kronauer Allee");
break;
}
case 194825:
{
returnValue = F("Kronauer Str.");
break;
}
case 194826:
{
returnValue = F("Kronauer Weg");
break;
}
case 194827:
{
returnValue = F("Kronaweg");
break;
}
case 194828:
{
returnValue = F("Kronawitten");
break;
}
case 194829:
{
returnValue = F("Kronberg");
break;
}
case 194830:
{
returnValue = F("Kronberger Str.");
break;
}
case 194831:
{
returnValue = F("Kronbergstr.");
break;
}
case 194832:
{
returnValue = F("Kronbergweg");
break;
}
case 194833:
{
returnValue = F("Kronbichl");
break;
}
case 194834:
{
returnValue = F("Kronbichlweg");
break;
}
case 194835:
{
returnValue = F("Kronbiegelpark");
break;
}
case 194836:
{
returnValue = F("Kronbohlstr.");
break;
}
case 194837:
{
returnValue = F("Kronbornweg");
break;
}
case 194838:
{
returnValue = F("Kronburgblick");
break;
}
case 194839:
{
returnValue = F("Kronburger Str.");
break;
}
case 194840:
{
returnValue = F("Kronbühlstr.");
break;
}
case 194841:
{
returnValue = F("Krondorf-Löllsanlage");
break;
}
case 194842:
{
returnValue = F("Krondorfer Str.");
break;
}
case 194843:
{
returnValue = F("Krone-Tunnel");
break;
}
case 194844:
{
returnValue = F("Kroneckstr.");
break;
}
case 194845:
{
returnValue = F("Kroneckweg");
break;
}
case 194846:
{
returnValue = F("Kroneichenweg");
break;
}
case 194847:
{
returnValue = F("Kronemannstr.");
break;
}
case 194848:
{
returnValue = F("Kronen Kreisel");
break;
}
case 194849:
{
returnValue = F("Kronenacker");
break;
}
case 194850:
{
returnValue = F("Kronenberg");
break;
}
case 194851:
{
returnValue = F("Kronenbergele");
break;
}
case 194852:
{
returnValue = F("Kronenberger Gasse");
break;
}
case 194853:
{
returnValue = F("Kronenberger Str.");
break;
}
case 194854:
{
returnValue = F("Kronenbergstr.");
break;
}
case 194855:
{
returnValue = F("Kronenbergsweg");
break;
}
case 194856:
{
returnValue = F("Kronenbergweg");
break;
}
case 194857:
{
returnValue = F("Kronenbrink");
break;
}
case 194858:
{
returnValue = F("Kronenbruch");
break;
}
case 194859:
{
returnValue = F("Kronenbuck");
break;
}
case 194860:
{
returnValue = F("Kronenburg");
break;
}
case 194861:
{
returnValue = F("Kronenburger Str.");
break;
}
case 194862:
{
returnValue = F("Kronenburger Weg");
break;
}
case 194863:
{
returnValue = F("Kronendamm");
break;
}
case 194864:
{
returnValue = F("Kronendriesch");
break;
}
case 194865:
{
returnValue = F("Kronengasse");
break;
}
case 194866:
{
returnValue = F("Kronengässle");
break;
}
case 194867:
{
returnValue = F("Kronengäßchen");
break;
}
case 194868:
{
returnValue = F("Kronengäßle");
break;
}
case 194869:
{
returnValue = F("Kronenhof");
break;
}
case 194870:
{
returnValue = F("Kronenhofallee");
break;
}
case 194871:
{
returnValue = F("Kronenhofer Str.");
break;
}
case 194872:
{
returnValue = F("Kronenhofstr.");
break;
}
case 194873:
{
returnValue = F("Kronenkamp");
break;
}
case 194874:
{
returnValue = F("Kronenkellerweg");
break;
}
case 194875:
{
returnValue = F("Kronenkranich");
break;
}
case 194876:
{
returnValue = F("Kronenpark");
break;
}
case 194877:
{
returnValue = F("Kronenpfuhlweg");
break;
}
case 194878:
{
returnValue = F("Kronenplatz");
break;
}
case 194879:
{
returnValue = F("Kronenpützchen");
break;
}
case 194880:
{
returnValue = F("Kronenrain");
break;
}
case 194881:
{
returnValue = F("Kronenring");
break;
}
case 194882:
{
returnValue = F("Kronenschleuse");
break;
}
case 194883:
{
returnValue = F("Kronenschulgasse");
break;
}
case 194884:
{
returnValue = F("Kronenstr.");
break;
}
case 194885:
{
returnValue = F("Kronensträßchen");
break;
}
case 194886:
{
returnValue = F("Kronenweg");
break;
}
case 194887:
{
returnValue = F("Kronenwerkstr.");
break;
}
case 194888:
{
returnValue = F("Kronenwirtsberg");
break;
}
case 194889:
{
returnValue = F("Kronepark");
break;
}
case 194890:
{
returnValue = F("Kronerweg");
break;
}
case 194891:
{
returnValue = F("Kronesch");
break;
}
case 194892:
{
returnValue = F("Kronesruhe");
break;
}
case 194893:
{
returnValue = F("Kronest");
break;
}
case 194894:
{
returnValue = F("Kronest-Geräumt");
break;
}
case 194895:
{
returnValue = F("Kroneweg");
break;
}
case 194896:
{
returnValue = F("Kronfeld");
break;
}
case 194897:
{
returnValue = F("Kronfeldstr.");
break;
}
case 194898:
{
returnValue = F("Krongasse");
break;
}
case 194899:
{
returnValue = F("Krongutstr.");
break;
}
case 194900:
{
returnValue = F("Kronhalden");
break;
}
case 194901:
{
returnValue = F("Kronheide");
break;
}
case 194902:
{
returnValue = F("Kronhofstr.");
break;
}
case 194903:
{
returnValue = F("Kronholzer Str.");
break;
}
case 194904:
{
returnValue = F("Kronhub");
break;
}
case 194905:
{
returnValue = F("Kronhus");
break;
}
case 194906:
{
returnValue = F("Kronhüttenweg");
break;
}
case 194907:
{
returnValue = F("Kronimusweg");
break;
}
case 194908:
{
returnValue = F("Kronkamp");
break;
}
case 194909:
{
returnValue = F("Kronmühlstr.");
break;
}
case 194910:
{
returnValue = F("Kronpfad");
break;
}
case 194911:
{
returnValue = F("Kronprinz Geräumt");
break;
}
case 194912:
{
returnValue = F("Kronprinz-Geräumt");
break;
}
case 194913:
{
returnValue = F("Kronprinz-Linie");
break;
}
case 194914:
{
returnValue = F("Kronprinz-Rupprecht-Str.");
break;
}
case 194915:
{
returnValue = F("Kronprinzengestell");
break;
}
case 194916:
{
returnValue = F("Kronprinzenstr.");
break;
}
case 194917:
{
returnValue = F("Kronprinzstr.");
break;
}
case 194918:
{
returnValue = F("Kronprinzwiesenweg");
break;
}
case 194919:
{
returnValue = F("Kronring");
break;
}
case 194920:
{
returnValue = F("Kronsaal");
break;
}
case 194921:
{
returnValue = F("Kronsbeerenweg");
break;
}
case 194922:
{
returnValue = F("Kronsbeernweg");
break;
}
case 194923:
{
returnValue = F("Kronsbeerweg");
break;
}
case 194924:
{
returnValue = F("Kronsbek");
break;
}
case 194925:
{
returnValue = F("Kronsberg");
break;
}
case 194926:
{
returnValue = F("Kronsbergstr.");
break;
}
case 194927:
{
returnValue = F("Kronsbergweg");
break;
}
case 194928:
{
returnValue = F("Kronsbrink");
break;
}
case 194929:
{
returnValue = F("Kronsbrok");
break;
}
case 194930:
{
returnValue = F("Kronsbrook");
break;
}
case 194931:
{
returnValue = F("Kronsbruch");
break;
}
case 194932:
{
returnValue = F("Kronsburg");
break;
}
case 194933:
{
returnValue = F("Kronsburg-Glinde");
break;
}
case 194934:
{
returnValue = F("Kronsburger Redder");
break;
}
case 194935:
{
returnValue = F("Kronsburger Weg");
break;
}
case 194936:
{
returnValue = F("Kronsdobbenweg");
break;
}
case 194937:
{
returnValue = F("Kronsdorf");
break;
}
case 194938:
{
returnValue = F("Kronseeschneise");
break;
}
case 194939:
{
returnValue = F("Kronsfelde");
break;
}
case 194940:
{
returnValue = F("Kronsgaarder Drecht");
break;
}
case 194941:
{
returnValue = F("Kronshagener Weg");
break;
}
case 194942:
{
returnValue = F("Kronshausen");
break;
}
case 194943:
{
returnValue = F("Kronshecke");
break;
}
case 194944:
{
returnValue = F("Kronsheider Str.");
break;
}
case 194945:
{
returnValue = F("Kronshof");
break;
}
case 194946:
{
returnValue = F("Kronshorster Brücke");
break;
}
case 194947:
{
returnValue = F("Kronshorster Weg");
break;
}
case 194948:
{
returnValue = F("Kronshusen");
break;
}
case 194949:
{
returnValue = F("Kronshörn");
break;
}
case 194950:
{
returnValue = F("Kronshörner Padd");
break;
}
case 194951:
{
returnValue = F("Kronskamp");
break;
}
case 194952:
{
returnValue = F("Kronskamper Str.");
break;
}
case 194953:
{
returnValue = F("Kronskamper Weg");
break;
}
case 194954:
{
returnValue = F("Kronskampweg");
break;
}
case 194955:
{
returnValue = F("Kronskoppelweg");
break;
}
case 194956:
{
returnValue = F("Kronsmoor");
break;
}
case 194957:
{
returnValue = F("Kronsnest");
break;
}
case 194958:
{
returnValue = F("Kronsredder");
break;
}
case 194959:
{
returnValue = F("Kronstadter Weg");
break;
}
case 194960:
{
returnValue = F("Kronsteg");
break;
}
case 194961:
{
returnValue = F("Kronsteig");
break;
}
case 194962:
{
returnValue = F("Kronsteinstr.");
break;
}
case 194963:
{
returnValue = F("Kronstettener Str.");
break;
}
case 194964:
{
returnValue = F("Kronstr.");
break;
}
case 194965:
{
returnValue = F("Kronstädter Gasse");
break;
}
case 194966:
{
returnValue = F("Kronstädter Str.");
break;
}
case 194967:
{
returnValue = F("Kronstädter Weg");
break;
}
case 194968:
{
returnValue = F("Kronsundern");
break;
}
case 194969:
{
returnValue = F("Kronsweg");
break;
}
case 194970:
{
returnValue = F("Kronsweideweg");
break;
}
case 194971:
{
returnValue = F("Kronswinkel");
break;
}
case 194972:
{
returnValue = F("Kronthaler Str.");
break;
}
case 194973:
{
returnValue = F("Kronthaler Weg");
break;
}
case 194974:
{
returnValue = F("Kronthalstr.");
break;
}
case 194975:
{
returnValue = F("Krontrieschstr.");
break;
}
case 194976:
{
returnValue = F("Kronunger Str.");
break;
}
case 194977:
{
returnValue = F("Kronunger Weg");
break;
}
case 194978:
{
returnValue = F("Kronwaldstr.");
break;
}
case 194979:
{
returnValue = F("Kronweg");
break;
}
case 194980:
{
returnValue = F("Kronweide");
break;
}
case 194981:
{
returnValue = F("Kronwerker Moor");
break;
}
case 194982:
{
returnValue = F("Kronwetterstr.");
break;
}
case 194983:
{
returnValue = F("Kronwidweg");
break;
}
case 194984:
{
returnValue = F("Kronwieckstr.");
break;
}
case 194985:
{
returnValue = F("Kronwiedstr.");
break;
}
case 194986:
{
returnValue = F("Kronwiekstr.");
break;
}
case 194987:
{
returnValue = F("Kronwinkl");
break;
}
case 194988:
{
returnValue = F("Kronwinkler Str.");
break;
}
case 194989:
{
returnValue = F("Kronwitter Str.");
break;
}
case 194990:
{
returnValue = F("Kronwittstr.");
break;
}
case 194991:
{
returnValue = F("Kronzenborner Weg");
break;
}
case 194992:
{
returnValue = F("Kronziegelei");
break;
}
case 194993:
{
returnValue = F("Kronäckerstr.");
break;
}
case 194994:
{
returnValue = F("Kronäckerweg");
break;
}
case 194995:
{
returnValue = F("Kroog");
break;
}
case 194996:
{
returnValue = F("Kroogredder");
break;
}
case 194997:
{
returnValue = F("Kroogweg");
break;
}
case 194998:
{
returnValue = F("Krool");
break;
}
case 194999:
{
returnValue = F("Kroonsberg");
break;
}
case 195000:
{
returnValue = F("Kroonsweg");
break;
}
case 195001:
{
returnValue = F("Krooscheld");
break;
}
case 195002:
{
returnValue = F("Kroosweg");
break;
}
case 195003:
{
returnValue = F("Kropbacher Weg");
break;
}
case 195004:
{
returnValue = F("Kropbachrundweg");
break;
}
case 195005:
{
returnValue = F("Kropelspfad");
break;
}
case 195006:
{
returnValue = F("Kropfbachtalstr.");
break;
}
case 195007:
{
returnValue = F("Kropfbuchenweg");
break;
}
case 195008:
{
returnValue = F("Kropfbühl");
break;
}
case 195009:
{
returnValue = F("Kropfersricht");
break;
}
case 195010:
{
returnValue = F("Kropfhöhe");
break;
}
case 195011:
{
returnValue = F("Kropfigweg");
break;
}
case 195012:
{
returnValue = F("Kropfingerweg");
break;
}
case 195013:
{
returnValue = F("Kroppacher Str.");
break;
}
case 195014:
{
returnValue = F("Kroppachstr.");
break;
}
case 195015:
{
returnValue = F("Kroppener Str.");
break;
}
case 195016:
{
returnValue = F("Kroppengaß");
break;
}
case 195017:
{
returnValue = F("Kroppenhofen");
break;
}
case 195018:
{
returnValue = F("Kroppenstedter Str.");
break;
}
case 195019:
{
returnValue = F("Kroppenstück");
break;
}
case 195020:
{
returnValue = F("Kroppental");
break;
}
case 195021:
{
returnValue = F("Kroppentalstr.");
break;
}
case 195022:
{
returnValue = F("Kropper Chaussee");
break;
}
case 195023:
{
returnValue = F("Kropper Str.");
break;
}
case 195024:
{
returnValue = F("Kropper Weg");
break;
}
case 195025:
{
returnValue = F("Kropplenberg");
break;
}
case 195026:
{
returnValue = F("Kroppstr.");
break;
}
case 195027:
{
returnValue = F("Kroppweg");
break;
}
case 195028:
{
returnValue = F("Kropsbachstr.");
break;
}
case 195029:
{
returnValue = F("Kropsbachweg");
break;
}
case 195030:
{
returnValue = F("Kropsburgring");
break;
}
case 195031:
{
returnValue = F("Kropsburgstr.");
break;
}
case 195032:
{
returnValue = F("Kropsburgweg");
break;
}
case 195033:
{
returnValue = F("Kropsheider Weg");
break;
}
case 195034:
{
returnValue = F("Kropskamp");
break;
}
case 195035:
{
returnValue = F("Kropstädter Str.");
break;
}
case 195036:
{
returnValue = F("Kropsöhler Weg");
break;
}
case 195037:
{
returnValue = F("Kroptewitz");
break;
}
case 195038:
{
returnValue = F("Kroschstr.");
break;
}
case 195039:
{
returnValue = F("Krosenbergweg");
break;
}
case 195040:
{
returnValue = F("Krosigker Str.");
break;
}
case 195041:
{
returnValue = F("Krossensee");
break;
}
case 195042:
{
returnValue = F("Krosshoff");
break;
}
case 195043:
{
returnValue = F("Krostitzer Str.");
break;
}
case 195044:
{
returnValue = F("Krotenäckerweg");
break;
}
case 195045:
{
returnValue = F("Krotoszyner Ring");
break;
}
case 195046:
{
returnValue = F("Krottenau");
break;
}
case 195047:
{
returnValue = F("Krottenbach");
break;
}
case 195048:
{
returnValue = F("Krottenbacher Str.");
break;
}
case 195049:
{
returnValue = F("Krottenbauerweg");
break;
}
case 195050:
{
returnValue = F("Krottenbächletrail");
break;
}
case 195051:
{
returnValue = F("Krottenhausmühlstr.");
break;
}
case 195052:
{
returnValue = F("Krottenkopfstr.");
break;
}
case 195053:
{
returnValue = F("Krottenkopfweg");
break;
}
case 195054:
{
returnValue = F("Krottenlochweg");
break;
}
case 195055:
{
returnValue = F("Krottensee");
break;
}
case 195056:
{
returnValue = F("Krottenseer Allee");
break;
}
case 195057:
{
returnValue = F("Krottenseer Auenweg");
break;
}
case 195058:
{
returnValue = F("Krottenseer Hauptstr.");
break;
}
case 195059:
{
returnValue = F("Krottenseer Hirtenweg");
break;
}
case 195060:
{
returnValue = F("Krottenseer Ring");
break;
}
case 195061:
{
returnValue = F("Krottenseer Weg");
break;
}
case 195062:
{
returnValue = F("Krottenseer Winkl");
break;
}
case 195063:
{
returnValue = F("Krottental");
break;
}
case 195064:
{
returnValue = F("Krottenthal");
break;
}
case 195065:
{
returnValue = F("Krottenthaler Str.");
break;
}
case 195066:
{
returnValue = F("Krottorfer Str.");
break;
}
case 195067:
{
returnValue = F("Krottorfer Weg");
break;
}
case 195068:
{
returnValue = F("Krottstr.");
break;
}
case 195069:
{
returnValue = F("Krotzenburger Str.");
break;
}
case 195070:
{
returnValue = F("Krouerswäi");
break;
}
case 195071:
{
returnValue = F("Krouw");
break;
}
case 195072:
{
returnValue = F("Kroy");
break;
}
case 195073:
{
returnValue = F("Krozinger Str.");
break;
}
case 195074:
{
returnValue = F("Krozinger Weg");
break;
}
case 195075:
{
returnValue = F("Kroßmannstr.");
break;
}
case 195076:
{
returnValue = F("Krubbeleck");
break;
}
case 195077:
{
returnValue = F("Krubberg");
break;
}
case 195078:
{
returnValue = F("Kruberger Str.");
break;
}
case 195079:
{
returnValue = F("Kruberger Weg");
break;
}
case 195080:
{
returnValue = F("Kruchenhausener Str.");
break;
}
case 195081:
{
returnValue = F("Kruchenhof");
break;
}
case 195082:
{
returnValue = F("Kruchenplan");
break;
}
case 195083:
{
returnValue = F("Kruchtener Str.");
break;
}
case 195084:
{
returnValue = F("Kruck");
break;
}
case 195085:
{
returnValue = F("Kruckenbergstr.");
break;
}
case 195086:
{
returnValue = F("Kruckentalstr.");
break;
}
case 195087:
{
returnValue = F("Kruckweg");
break;
}
case 195088:
{
returnValue = F("Krudenburger Str.");
break;
}
case 195089:
{
returnValue = F("Krudenweg");
break;
}
case 195090:
{
returnValue = F("Krudopp");
break;
}
case 195091:
{
returnValue = F("Krudops Busch");
break;
}
case 195092:
{
returnValue = F("Kruegarten");
break;
}
case 195093:
{
returnValue = F("Kruesbergweg");
break;
}
case 195094:
{
returnValue = F("Kruetz");
break;
}
case 195095:
{
returnValue = F("Krufslochweg");
break;
}
case 195096:
{
returnValue = F("Krufter Str.");
break;
}
case 195097:
{
returnValue = F("Krug-von-Nidda Str.");
break;
}
case 195098:
{
returnValue = F("Kruganger");
break;
}
case 195099:
{
returnValue = F("Krugberg");
break;
}
case 195100:
{
returnValue = F("Krugbergstr.");
break;
}
case 195101:
{
returnValue = F("Krugbergweg");
break;
}
case 195102:
{
returnValue = F("Krugbreite");
break;
}
case 195103:
{
returnValue = F("Krugbrink");
break;
}
case 195104:
{
returnValue = F("Krugbäckerstr.");
break;
}
case 195105:
{
returnValue = F("Krugdohlenweg");
break;
}
case 195106:
{
returnValue = F("Krugende");
break;
}
case 195107:
{
returnValue = F("Kruger Damm");
break;
}
case 195108:
{
returnValue = F("Kruger Str.");
break;
}
case 195109:
{
returnValue = F("Kruger Weg");
break;
}
case 195110:
{
returnValue = F("Krugerpfad");
break;
}
case 195111:
{
returnValue = F("Kruggang");
break;
}
case 195112:
{
returnValue = F("Kruggartenfeld");
break;
}
case 195113:
{
returnValue = F("Kruggasse");
break;
}
case 195114:
{
returnValue = F("Kruggasse zur Linde");
break;
}
case 195115:
{
returnValue = F("Kruggenberg");
break;
}
case 195116:
{
returnValue = F("Kruggenweg");
break;
}
case 195117:
{
returnValue = F("Krughof");
break;
}
case 195118:
{
returnValue = F("Krughofstr.");
break;
}
case 195119:
{
returnValue = F("Krugkamp");
break;
}
case 195120:
{
returnValue = F("Krugland");
break;
}
case 195121:
{
returnValue = F("Kruglandweg");
break;
}
case 195122:
{
returnValue = F("Kruglücke");
break;
}
case 195123:
{
returnValue = F("Krugmann-Kreisel");
break;
}
case 195124:
{
returnValue = F("Krugmorgen");
break;
}
case 195125:
{
returnValue = F("Krugmühle");
break;
}
case 195126:
{
returnValue = F("Krugplatz");
break;
}
case 195127:
{
returnValue = F("Krugs Heuweg");
break;
}
case 195128:
{
returnValue = F("Krugsche Gasse");
break;
}
case 195129:
{
returnValue = F("Krugsdamm");
break;
}
case 195130:
{
returnValue = F("Krugsdorfer Damm");
break;
}
case 195131:
{
returnValue = F("Krugsdorfer Str.");
break;
}
case 195132:
{
returnValue = F("Krugshof");
break;
}
case 195133:
{
returnValue = F("Krugsleite");
break;
}
case 195134:
{
returnValue = F("Krugsteig");
break;
}
case 195135:
{
returnValue = F("Krugstieg");
break;
}
case 195136:
{
returnValue = F("Krugstr.");
break;
}
case 195137:
{
returnValue = F("Krugsturmgäßlein");
break;
}
case 195138:
{
returnValue = F("Krugstücken");
break;
}
case 195139:
{
returnValue = F("Krugsweg");
break;
}
case 195140:
{
returnValue = F("Krugtorhohlweg");
break;
}
case 195141:
{
returnValue = F("Krugtorstr.");
break;
}
case 195142:
{
returnValue = F("Krugtwete");
break;
}
case 195143:
{
returnValue = F("Krugweg");
break;
}
case 195144:
{
returnValue = F("Krugwiese");
break;
}
case 195145:
{
returnValue = F("Krugwiesenweg");
break;
}
case 195146:
{
returnValue = F("Krugzeller Str.");
break;
}
case 195147:
{
returnValue = F("Kruhenkamp");
break;
}
case 195148:
{
returnValue = F("Kruhnskoppel");
break;
}
case 195149:
{
returnValue = F("Kruibeker Str.");
break;
}
case 195150:
{
returnValue = F("Kruichling");
break;
}
case 195151:
{
returnValue = F("Kruiner Tunnel");
break;
}
case 195152:
{
returnValue = F("Kruisvenn");
break;
}
case 195153:
{
returnValue = F("Kruitskamp");
break;
}
case 195154:
{
returnValue = F("Krukenbergstr.");
break;
}
case 195155:
{
returnValue = F("Krukenstieg");
break;
}
case 195156:
{
returnValue = F("Krukenstr.");
break;
}
case 195157:
{
returnValue = F("Krukower Weg");
break;
}
case 195158:
{
returnValue = F("Krukumer Str.");
break;
}
case 195159:
{
returnValue = F("Krulbrink");
break;
}
case 195160:
{
returnValue = F("Krullmannstr.");
break;
}
case 195161:
{
returnValue = F("Krullskamp");
break;
}
case 195162:
{
returnValue = F("Krullwarfen");
break;
}
case 195163:
{
returnValue = F("Krumackerfeld");
break;
}
case 195164:
{
returnValue = F("Krumackerweg");
break;
}
case 195165:
{
returnValue = F("Krumbach");
break;
}
case 195166:
{
returnValue = F("Krumbach Bahnhof");
break;
}
case 195167:
{
returnValue = F("Krumbacher Str.");
break;
}
case 195168:
{
returnValue = F("Krumbacher Traufweg");
break;
}
case 195169:
{
returnValue = F("Krumbacher Weg");
break;
}
case 195170:
{
returnValue = F("Krumbachsberg");
break;
}
case 195171:
{
returnValue = F("Krumbachstr.");
break;
}
case 195172:
{
returnValue = F("Krumbachtal");
break;
}
case 195173:
{
returnValue = F("Krumbachweg");
break;
}
case 195174:
{
returnValue = F("Krumbadweg");
break;
}
case 195175:
{
returnValue = F("Krumbecker Hof");
break;
}
case 195176:
{
returnValue = F("Krumbecker Str.");
break;
}
case 195177:
{
returnValue = F("Krumbeckstr.");
break;
}
case 195178:
{
returnValue = F("Krumbekkehre");
break;
}
case 195179:
{
returnValue = F("Krumbäken Kämpe");
break;
}
case 195180:
{
returnValue = F("Krumhermersdorfer Str.");
break;
}
case 195181:
{
returnValue = F("Krumholzstr.");
break;
}
case 195182:
{
returnValue = F("Krumhüttlstr.");
break;
}
case 195183:
{
returnValue = F("Krumland");
break;
}
case 195184:
{
returnValue = F("Krumlander Str.");
break;
}
case 195185:
{
returnValue = F("Krumlengenfeld");
break;
}
case 195186:
{
returnValue = F("Krumm Wand");
break;
}
case 195187:
{
returnValue = F("Krumm-Hohlweg");
break;
}
case 195188:
{
returnValue = F("Krumm-Schneise");
break;
}
case 195189:
{
returnValue = F("Krummacherstr.");
break;
}
case 195190:
{
returnValue = F("Krummachweg");
break;
}
case 195191:
{
returnValue = F("Krummacker");
break;
}
case 195192:
{
returnValue = F("Krummackerweg");
break;
}
case 195193:
{
returnValue = F("Krummaleiten");
break;
}
case 195194:
{
returnValue = F("Krummasel");
break;
}
case 195195:
{
returnValue = F("Krummattstr.");
break;
}
case 195196:
{
returnValue = F("Krummauer Str.");
break;
}
case 195197:
{
returnValue = F("Krummauer Weg");
break;
}
case 195198:
{
returnValue = F("Krummaustr.");
break;
}
case 195199:
{
returnValue = F("Krummbachbrücke");
break;
}
case 195200:
{
returnValue = F("Krummbacher Str.");
break;
}
case 195201:
{
returnValue = F("Krummbachstr.");
break;
}
case 195202:
{
returnValue = F("Krummbachweg");
break;
}
case 195203:
{
returnValue = F("Krummbeker Weg");
break;
}
case 195204:
{
returnValue = F("Krummbirkweg");
break;
}
case 195205:
{
returnValue = F("Krummbogen");
break;
}
case 195206:
{
returnValue = F("Krummbruchsweg");
break;
}
case 195207:
{
returnValue = F("Krummburg");
break;
}
case 195208:
{
returnValue = F("Krummbögen");
break;
}
case 195209:
{
returnValue = F("Krummdiek");
break;
}
case 195210:
{
returnValue = F("Krumme Ackern");
break;
}
case 195211:
{
returnValue = F("Krumme Allee");
break;
}
case 195212:
{
returnValue = F("Krumme Bahn");
break;
}
case 195213:
{
returnValue = F("Krumme Birkenweg");
break;
}
case 195214:
{
returnValue = F("Krumme Brede");
break;
}
case 195215:
{
returnValue = F("Krumme Damm");
break;
}
case 195216:
{
returnValue = F("Krumme Ecke");
break;
}
case 195217:
{
returnValue = F("Krumme Egerten");
break;
}
case 195218:
{
returnValue = F("Krumme Eiche");
break;
}
case 195219:
{
returnValue = F("Krumme Fohre");
break;
}
case 195220:
{
returnValue = F("Krumme Gass");
break;
}
case 195221:
{
returnValue = F("Krumme Gasse");
break;
}
case 195222:
{
returnValue = F("Krumme Gehren");
break;
}
case 195223:
{
returnValue = F("Krumme Gewand");
break;
}
case 195224:
{
returnValue = F("Krumme Gwand");
break;
}
case 195225:
{
returnValue = F("Krumme Hecken");
break;
}
case 195226:
{
returnValue = F("Krumme Heide");
break;
}
case 195227:
{
returnValue = F("Krumme Hohle");
break;
}
case 195228:
{
returnValue = F("Krumme Hufe");
break;
}
case 195229:
{
returnValue = F("Krumme Jauchert");
break;
}
case 195230:
{
returnValue = F("Krumme Kehr");
break;
}
case 195231:
{
returnValue = F("Krumme Lanke");
break;
}
case 195232:
{
returnValue = F("Krumme Leite");
break;
}
case 195233:
{
returnValue = F("Krumme Leiten");
break;
}
case 195234:
{
returnValue = F("Krumme Leithe");
break;
}
case 195235:
{
returnValue = F("Krumme Lohne");
break;
}
case 195236:
{
returnValue = F("Krumme Länge");
break;
}
case 195237:
{
returnValue = F("Krumme Längt");
break;
}
case 195238:
{
returnValue = F("Krumme Masch");
break;
}
case 195239:
{
returnValue = F("Krumme Meer");
break;
}
case 195240:
{
returnValue = F("Krumme Reihe");
break;
}
case 195241:
{
returnValue = F("Krumme Rieth");
break;
}
case 195242:
{
returnValue = F("Krumme Schlaufe");
break;
}
case 195243:
{
returnValue = F("Krumme Steig");
break;
}
case 195244:
{
returnValue = F("Krumme Steige");
break;
}
case 195245:
{
returnValue = F("Krumme Stellbahn / Süplinger Weg");
break;
}
case 195246:
{
returnValue = F("Krumme Str.");
break;
}
case 195247:
{
returnValue = F("Krumme Stroot");
break;
}
case 195248:
{
returnValue = F("Krumme Stück");
break;
}
case 195249:
{
returnValue = F("Krumme Trift");
break;
}
case 195250:
{
returnValue = F("Krumme Wanne");
break;
}
case 195251:
{
returnValue = F("Krumme Weide");
break;
}
case 195252:
{
returnValue = F("Krumme Wende");
break;
}
case 195253:
{
returnValue = F("Krumme Wiesen");
break;
}
case 195254:
{
returnValue = F("Krumme Wiesengasse");
break;
}
case 195255:
{
returnValue = F("Krumme Zeile");
break;
}
case 195256:
{
returnValue = F("Krumme Äcker");
break;
}
case 195257:
{
returnValue = F("Krumme-Jacken-Str.");
break;
}
case 195258:
{
returnValue = F("Krumme-Äcker-Weg");
break;
}
case 195259:
{
returnValue = F("Krummebergstr.");
break;
}
case 195260:
{
returnValue = F("Krummeck Weg");
break;
}
case 195261:
{
returnValue = F("Krummegrund");
break;
}
case 195262:
{
returnValue = F("Krummeichenweg");
break;
}
case 195263:
{
returnValue = F("Krummel");
break;
}
case 195264:
{
returnValue = F("Krummellenbogenstr.");
break;
}
case 195265:
{
returnValue = F("Krummelstr.");
break;
}
case 195266:
{
returnValue = F("Krummelwend");
break;
}
case 195267:
{
returnValue = F("Krummen");
break;
}
case 195268:
{
returnValue = F("Krummen Kamp");
break;
}
case 195269:
{
returnValue = F("Krummen Morgen");
break;
}
case 195270:
{
returnValue = F("Krummen Weg");
break;
}
case 195271:
{
returnValue = F("Krummenackerstr.");
break;
}
case 195272:
{
returnValue = F("Krummenauer Weg");
break;
}
case 195273:
{
returnValue = F("Krummenbachweg");
break;
}
case 195274:
{
returnValue = F("Krummenberg");
break;
}
case 195275:
{
returnValue = F("Krummenbuscher Weg");
break;
}
case 195276:
{
returnValue = F("Krummendammbrücke");
break;
}
case 195277:
{
returnValue = F("Krummende");
break;
}
case 195278:
{
returnValue = F("Krummendeicher Weg");
break;
}
case 195279:
{
returnValue = F("Krummendiek");
break;
}
case 195280:
{
returnValue = F("Krummenerl");
break;
}
case 195281:
{
returnValue = F("Krummenhagener Str.");
break;
}
case 195282:
{
returnValue = F("Krummenhennersdorfer Str.");
break;
}
case 195283:
{
returnValue = F("Krummenhäger Damm");
break;
}
case 195284:
{
returnValue = F("Krummenhäger Weg");
break;
}
case 195285:
{
returnValue = F("Krummenland");
break;
}
case 195286:
{
returnValue = F("Krummenlandweg");
break;
}
case 195287:
{
returnValue = F("Krummenluchstr.");
break;
}
case 195288:
{
returnValue = F("Krummenort B 77");
break;
}
case 195289:
{
returnValue = F("Krummenorter Heide");
break;
}
case 195290:
{
returnValue = F("Krummenpfahl");
break;
}
case 195291:
{
returnValue = F("Krummenried");
break;
}
case 195292:
{
returnValue = F("Krummenscheider Weg");
break;
}
case 195293:
{
returnValue = F("Krummenseer Chaussee");
break;
}
case 195294:
{
returnValue = F("Krummenseer Dorfstr.");
break;
}
case 195295:
{
returnValue = F("Krummenseer Str.");
break;
}
case 195296:
{
returnValue = F("Krummenseer Weg");
break;
}
case 195297:
{
returnValue = F("Krummenseestr.");
break;
}
case 195298:
{
returnValue = F("Krummensieck");
break;
}
case 195299:
{
returnValue = F("Krummensteg");
break;
}
case 195300:
{
returnValue = F("Krummenstr.");
break;
}
case 195301:
{
returnValue = F("Krummenstücken");
break;
}
case 195302:
{
returnValue = F("Krummenweg");
break;
}
case 195303:
{
returnValue = F("Krummenwege");
break;
}
case 195304:
{
returnValue = F("Krummenäcker");
break;
}
case 195305:
{
returnValue = F("Krummenäckerstr.");
break;
}
case 195306:
{
returnValue = F("Krummer Acker");
break;
}
case 195307:
{
returnValue = F("Krummer Arm");
break;
}
case 195308:
{
returnValue = F("Krummer Aschenweg");
break;
}
case 195309:
{
returnValue = F("Krummer Barkel");
break;
}
case 195310:
{
returnValue = F("Krummer Berg");
break;
}
case 195311:
{
returnValue = F("Krummer Blockweg");
break;
}
case 195312:
{
returnValue = F("Krummer Damm");
break;
}
case 195313:
{
returnValue = F("Krummer Dreh");
break;
}
case 195314:
{
returnValue = F("Krummer Eichweg");
break;
}
case 195315:
{
returnValue = F("Krummer Ellenbogen");
break;
}
case 195316:
{
returnValue = F("Krummer Flügel");
break;
}
case 195317:
{
returnValue = F("Krummer Gang");
break;
}
case 195318:
{
returnValue = F("Krummer Graben");
break;
}
case 195319:
{
returnValue = F("Krummer Kamp");
break;
}
case 195320:
{
returnValue = F("Krummer Kranz");
break;
}
case 195321:
{
returnValue = F("Krummer Luchweg");
break;
}
case 195322:
{
returnValue = F("Krummer Ort");
break;
}
case 195323:
{
returnValue = F("Krummer Redder");
break;
}
case 195324:
{
returnValue = F("Krummer Riedweg");
break;
}
case 195325:
{
returnValue = F("Krummer Soor");
break;
}
case 195326:
{
returnValue = F("Krummer Timpen");
break;
}
case 195327:
{
returnValue = F("Krummer Weg");
break;
}
case 195328:
{
returnValue = F("Krummer Winkel");
break;
}
case 195329:
{
returnValue = F("Krummer-Rank-Weg");
break;
}
case 195330:
{
returnValue = F("Krummerrankweg");
break;
}
case 195331:
{
returnValue = F("Krummerweg");
break;
}
case 195332:
{
returnValue = F("Krummes C");
break;
}
case 195333:
{
returnValue = F("Krummes Feld");
break;
}
case 195334:
{
returnValue = F("Krummes Fenn Gestell");
break;
}
case 195335:
{
returnValue = F("Krummes G");
break;
}
case 195336:
{
returnValue = F("Krummes J");
break;
}
case 195337:
{
returnValue = F("Krummes Land");
break;
}
case 195338:
{
returnValue = F("Krummes Ohr");
break;
}
case 195339:
{
returnValue = F("Krummes Steigle");
break;
}
case 195340:
{
returnValue = F("Krummes Sträßchen");
break;
}
case 195341:
{
returnValue = F("Krummes Wiese");
break;
}
case 195342:
{
returnValue = F("Krummeschneise");
break;
}
case 195343:
{
returnValue = F("Krummesser Moorweg");
break;
}
case 195344:
{
returnValue = F("Krummesser Mühlenweg");
break;
}
case 195345:
{
returnValue = F("Krummesser Weg");
break;
}
case 195346:
{
returnValue = F("Krummestr.");
break;
}
case 195347:
{
returnValue = F("Krummeweg");
break;
}
case 195348:
{
returnValue = F("Krummfoerleweg");
break;
}
case 195349:
{
returnValue = F("Krummfuß");
break;
}
case 195350:
{
returnValue = F("Krummgasse");
break;
}
case 195351:
{
returnValue = F("Krummgewann");
break;
}
case 195352:
{
returnValue = F("Krummgässle");
break;
}
case 195353:
{
returnValue = F("Krummhaarstr.");
break;
}
case 195354:
{
returnValue = F("Krummhaldenweg");
break;
}
case 195355:
{
returnValue = F("Krummhardter Str.");
break;
}
case 195356:
{
returnValue = F("Krummhardter Sträßle");
break;
}
case 195357:
{
returnValue = F("Krummheldenweg");
break;
}
case 195358:
{
returnValue = F("Krummhermsdorfer Weg");
break;
}
case 195359:
{
returnValue = F("Krummholzstr.");
break;
}
case 195360:
{
returnValue = F("Krummholzweg");
break;
}
case 195361:
{
returnValue = F("Krummhorn");
break;
}
case 195362:
{
returnValue = F("Krummhornsweg");
break;
}
case 195363:
{
returnValue = F("Krummhöcker");
break;
}
case 195364:
{
returnValue = F("Krummhörn");
break;
}
case 195365:
{
returnValue = F("Krummhörner Ring");
break;
}
case 195366:
{
returnValue = F("Krummhörner Str.");
break;
}
case 195367:
{
returnValue = F("Krummicker Weg");
break;
}
case 195368:
{
returnValue = F("Krummigstr.");
break;
}
case 195369:
{
returnValue = F("Krumminer Str.");
break;
}
case 195370:
{
returnValue = F("Krummkehr-Kronbuche");
break;
}
case 195371:
{
returnValue = F("Krummlachackerweg");
break;
}
case 195372:
{
returnValue = F("Krummland");
break;
}
case 195373:
{
returnValue = F("Krummlandsweg");
break;
}
case 195374:
{
returnValue = F("Krummlandweg");
break;
}
case 195375:
{
returnValue = F("Krummleite");
break;
}
case 195376:
{
returnValue = F("Krummrankweg");
break;
}
case 195377:
{
returnValue = F("Krummredder");
break;
}
case 195378:
{
returnValue = F("Krummried");
break;
}
case 195379:
{
returnValue = F("Krummränklesweg");
break;
}
case 195380:
{
returnValue = F("Krummsee");
break;
}
case 195381:
{
returnValue = F("Krummseer Str.");
break;
}
case 195382:
{
returnValue = F("Krummspät");
break;
}
case 195383:
{
returnValue = F("Krummsteig");
break;
}
case 195384:
{
returnValue = F("Krummstiege");
break;
}
case 195385:
{
returnValue = F("Krummstr.");
break;
}
case 195386:
{
returnValue = F("Krummstruth");
break;
}
case 195387:
{
returnValue = F("Krummstück");
break;
}
case 195388:
{
returnValue = F("Krummwallner Weg");
break;
}
case 195389:
{
returnValue = F("Krummweg");
break;
}
case 195390:
{
returnValue = F("Krummweiherweg");
break;
}
case 195391:
{
returnValue = F("Krummwiese");
break;
}
case 195392:
{
returnValue = F("Krummwiesen");
break;
}
case 195393:
{
returnValue = F("Krummwiesenstr.");
break;
}
case 195394:
{
returnValue = F("Krummwiesenweg");
break;
}
case 195395:
{
returnValue = F("Krummwisch");
break;
}
case 195396:
{
returnValue = F("Krummwundt");
break;
}
case 195397:
{
returnValue = F("Krummäcker");
break;
}
case 195398:
{
returnValue = F("Krummäckerstr.");
break;
}
case 195399:
{
returnValue = F("Krummäckerweg");
break;
}
case 195400:
{
returnValue = F("Krummähder");
break;
}
case 195401:
{
returnValue = F("Krummölser Str.");
break;
}
case 195402:
{
returnValue = F("Krummölser Weg");
break;
}
case 195403:
{
returnValue = F("Krummüm");
break;
}
case 195404:
{
returnValue = F("Krumpaer Landstr.");
break;
}
case 195405:
{
returnValue = F("Krumpenlochweg");
break;
}
case 195406:
{
returnValue = F("Krumper Allee");
break;
}
case 195407:
{
returnValue = F("Krumpeterweg");
break;
}
case 195408:
{
returnValue = F("Krumpfhalde");
break;
}
case 195409:
{
returnValue = F("Krumpperplatz");
break;
}
case 195410:
{
returnValue = F("Krumpperstr.");
break;
}
case 195411:
{
returnValue = F("Krumpstr.");
break;
}
case 195412:
{
returnValue = F("Krumscheid");
break;
}
case 195413:
{
returnValue = F("Krumsiekstr.");
break;
}
case 195414:
{
returnValue = F("Krumstück");
break;
}
case 195415:
{
returnValue = F("Krumwehl");
break;
}
case 195416:
{
returnValue = F("Krumwiesenweg");
break;
}
case 195417:
{
returnValue = F("Krunegässli");
break;
}
case 195418:
{
returnValue = F("Krunkelbachweg");
break;
}
case 195419:
{
returnValue = F("Krunkerfeld");
break;
}
case 195420:
{
returnValue = F("Kruppacher Str.");
break;
}
case 195421:
{
returnValue = F("Kruppacher Weg");
break;
}
case 195422:
{
returnValue = F("Kruppenweg");
break;
}
case 195423:
{
returnValue = F("Kruppstr.");
break;
}
case 195424:
{
returnValue = F("Kruppwinkel");
break;
}
case 195425:
{
returnValue = F("Krupunder Grund");
break;
}
case 195426:
{
returnValue = F("Krupunder Heide");
break;
}
case 195427:
{
returnValue = F("Krupunder Ring");
break;
}
case 195428:
{
returnValue = F("Krupunder Stieg");
break;
}
case 195429:
{
returnValue = F("Krus Eik");
break;
}
case 195430:
{
returnValue = F("Krusauer Str.");
break;
}
case 195431:
{
returnValue = F("Kruschegasse");
break;
}
case 195432:
{
returnValue = F("Kruschendamm");
break;
}
case 195433:
{
returnValue = F("Kruschendammbrücke");
break;
}
case 195434:
{
returnValue = F("Kruse Boom");
break;
}
case 195435:
{
returnValue = F("Kruse Weg");
break;
}
case 195436:
{
returnValue = F("Krusekoppel");
break;
}
case 195437:
{
returnValue = F("Krusemarker Str.");
break;
}
case 195438:
{
returnValue = F("Krusemarkshagen");
break;
}
case 195439:
{
returnValue = F("Krusen-Damm");
break;
}
case 195440:
{
returnValue = F("Krusenau");
break;
}
case 195441:
{
returnValue = F("Krusenberg");
break;
}
case 195442:
{
returnValue = F("Krusenbusch");
break;
}
case 195443:
{
returnValue = F("Krusendorfer Str.");
break;
}
case 195444:
{
returnValue = F("Krusengarten");
break;
}
case 195445:
{
returnValue = F("Krusenhagener Weg");
break;
}
case 195446:
{
returnValue = F("Krusenhausen Weg");
break;
}
case 195447:
{
returnValue = F("Krusenhof");
break;
}
case 195448:
{
returnValue = F("Krusenhofer Weg");
break;
}
case 195449:
{
returnValue = F("Krusenhorst");
break;
}
case 195450:
{
returnValue = F("Krusenkamp");
break;
}
case 195451:
{
returnValue = F("Krusenkrien");
break;
}
case 195452:
{
returnValue = F("Krusenplatz");
break;
}
case 195453:
{
returnValue = F("Krusenschlopp");
break;
}
case 195454:
{
returnValue = F("Krusensteiner Weg");
break;
}
case 195455:
{
returnValue = F("Krusenstr.");
break;
}
case 195456:
{
returnValue = F("Krusenweg");
break;
}
case 195457:
{
returnValue = F("Kruses Kamp");
break;
}
case 195458:
{
returnValue = F("Kruseshof");
break;
}
case 195459:
{
returnValue = F("Krusestr.");
break;
}
case 195460:
{
returnValue = F("Kruseweg");
break;
}
case 195461:
{
returnValue = F("Krusewitzstr.");
break;
}
case 195462:
{
returnValue = F("Krusfeld");
break;
}
case 195463:
{
returnValue = F("Kruskastr.");
break;
}
case 195464:
{
returnValue = F("Kruspad");
break;
}
case 195465:
{
returnValue = F("Kruspestr.");
break;
}
case 195466:
{
returnValue = F("Kruspiser Str.");
break;
}
case 195467:
{
returnValue = F("Krustenrainweg");
break;
}
case 195468:
{
returnValue = F("Krusweg");
break;
}
case 195469:
{
returnValue = F("Krutegasse");
break;
}
case 195470:
{
returnValue = F("Kruterberg");
break;
}
case 195471:
{
returnValue = F("Kruterbergelchen");
break;
}
case 195472:
{
returnValue = F("Kruthorst");
break;
}
case 195473:
{
returnValue = F("Kruthstr.");
break;
}
case 195474:
{
returnValue = F("Krutmühlenweg");
break;
}
case 195475:
{
returnValue = F("Krutschweg");
break;
}
case 195476:
{
returnValue = F("Kruttenaustr.");
break;
}
case 195477:
{
returnValue = F("Krutzschweg");
break;
}
case 195478:
{
returnValue = F("Kruwels Weg");
break;
}
case 195479:
{
returnValue = F("Kruzifixweg");
break;
}
case 195480:
{
returnValue = F("Krußtweg");
break;
}
case 195481:
{
returnValue = F("Kryxenbergweg");
break;
}
case 195482:
{
returnValue = F("Kräfftstr.");
break;
}
case 195483:
{
returnValue = F("Kräftenweg");
break;
}
case 195484:
{
returnValue = F("Kräfter Weg");
break;
}
case 195485:
{
returnValue = F("Krägerweg");
break;
}
case 195486:
{
returnValue = F("Krähbaum");
break;
}
case 195487:
{
returnValue = F("Krähberger Weg");
break;
}
case 195488:
{
returnValue = F("Krähbergstr.");
break;
}
case 195489:
{
returnValue = F("Krähbergweg");
break;
}
case 195490:
{
returnValue = F("Krähbrunnenstr.");
break;
}
case 195491:
{
returnValue = F("Krähbühlstr.");
break;
}
case 195492:
{
returnValue = F("Krähe");
break;
}
case 195493:
{
returnValue = F("Krähecke");
break;
}
case 195494:
{
returnValue = F("Krähenacker");
break;
}
case 195495:
{
returnValue = F("Krähenbachstr.");
break;
}
case 195496:
{
returnValue = F("Krähenbad");
break;
}
case 195497:
{
returnValue = F("Krähenbadberg");
break;
}
case 195498:
{
returnValue = F("Krähenbadstr.");
break;
}
case 195499:
{
returnValue = F("Krähenbaumstr.");
break;
}
case 195500:
{
returnValue = F("Krähenberg");
break;
}
case 195501:
{
returnValue = F("Krähenberger Holz");
break;
}
case 195502:
{
returnValue = F("Krähenbergstr.");
break;
}
case 195503:
{
returnValue = F("Krähenbergweg");
break;
}
case 195504:
{
returnValue = F("Krähenbrink");
break;
}
case 195505:
{
returnValue = F("Krähenbrinksweg");
break;
}
case 195506:
{
returnValue = F("Krähenbruch");
break;
}
case 195507:
{
returnValue = F("Krähenburg");
break;
}
case 195508:
{
returnValue = F("Krähenbusch");
break;
}
case 195509:
{
returnValue = F("Kräheneck");
break;
}
case 195510:
{
returnValue = F("Krähenfeld");
break;
}
case 195511:
{
returnValue = F("Krähenfichten");
break;
}
case 195512:
{
returnValue = F("Krähenfurt");
break;
}
case 195513:
{
returnValue = F("Krähengeschrei");
break;
}
case 195514:
{
returnValue = F("Krähengraben");
break;
}
case 195515:
{
returnValue = F("Krähengrund");
break;
}
case 195516:
{
returnValue = F("Krähenhahnenweg");
break;
}
case 195517:
{
returnValue = F("Krähenhardt");
break;
}
case 195518:
{
returnValue = F("Krähenhardtweg");
break;
}
case 195519:
{
returnValue = F("Krähenheck");
break;
}
case 195520:
{
returnValue = F("Krähenhof");
break;
}
case 195521:
{
returnValue = F("Krähenholzer Str.");
break;
}
case 195522:
{
returnValue = F("Krähenhop");
break;
}
case 195523:
{
returnValue = F("Krähenhorst");
break;
}
case 195524:
{
returnValue = F("Krähenhorststr.");
break;
}
case 195525:
{
returnValue = F("Krähenhöfen");
break;
}
case 195526:
{
returnValue = F("Krähenhübelstr.");
break;
}
case 195527:
{
returnValue = F("Krähenhügel");
break;
}
case 195528:
{
returnValue = F("Krähenhügelstr.");
break;
}
case 195529:
{
returnValue = F("Krähenhüttenweg");
break;
}
case 195530:
{
returnValue = F("Krähenkamp");
break;
}
case 195531:
{
returnValue = F("Krähenkoppel");
break;
}
case 195532:
{
returnValue = F("Krähenland");
break;
}
case 195533:
{
returnValue = F("Krähenmoor");
break;
}
case 195534:
{
returnValue = F("Krähennestergang");
break;
}
case 195535:
{
returnValue = F("Krähennocken");
break;
}
case 195536:
{
returnValue = F("Krähenort");
break;
}
case 195537:
{
returnValue = F("Krähenpötterweg");
break;
}
case 195538:
{
returnValue = F("Krähenrainweg");
break;
}
case 195539:
{
returnValue = F("Krähenried");
break;
}
case 195540:
{
returnValue = F("Krähensaal");
break;
}
case 195541:
{
returnValue = F("Krähenschmiede");
break;
}
case 195542:
{
returnValue = F("Krähenstieg");
break;
}
case 195543:
{
returnValue = F("Krähenstr.");
break;
}
case 195544:
{
returnValue = F("Krähenwald");
break;
}
case 195545:
{
returnValue = F("Krähenweg");
break;
}
case 195546:
{
returnValue = F("Krähenwiesenweg");
break;
}
case 195547:
{
returnValue = F("Krähenwinkel");
break;
}
case 195548:
{
returnValue = F("Krähenäckerweg");
break;
}
case 195549:
{
returnValue = F("Kräherweg");
break;
}
case 195550:
{
returnValue = F("Kräheweg");
break;
}
case 195551:
{
returnValue = F("Krähhöhlenweg");
break;
}
case 195552:
{
returnValue = F("Krähkopfweg");
break;
}
case 195553:
{
returnValue = F("Krählohweg");
break;
}
case 195554:
{
returnValue = F("Krähmerich");
break;
}
case 195555:
{
returnValue = F("Krähornsberg");
break;
}
case 195556:
{
returnValue = F("Krähsiefen");
break;
}
case 195557:
{
returnValue = F("Krähstein");
break;
}
case 195558:
{
returnValue = F("Krähwaldstr.");
break;
}
case 195559:
{
returnValue = F("Krähwinkel");
break;
}
case 195560:
{
returnValue = F("Krähwinkelweg");
break;
}
case 195561:
{
returnValue = F("Krälerstr.");
break;
}
case 195562:
{
returnValue = F("Krämelstr.");
break;
}
case 195563:
{
returnValue = F("Krämelweg");
break;
}
case 195564:
{
returnValue = F("Krämer");
break;
}
case 195565:
{
returnValue = F("Krämerberg");
break;
}
case 195566:
{
returnValue = F("Krämerbergstr.");
break;
}
case 195567:
{
returnValue = F("Krämerbrücke");
break;
}
case 195568:
{
returnValue = F("Krämergasse");
break;
}
case 195569:
{
returnValue = F("Krämergässle");
break;
}
case 195570:
{
returnValue = F("Krämergäßchen");
break;
}
case 195571:
{
returnValue = F("Krämerhof");
break;
}
case 195572:
{
returnValue = F("Krämerkopfstr.");
break;
}
case 195573:
{
returnValue = F("Krämersacker");
break;
}
case 195574:
{
returnValue = F("Krämersberg");
break;
}
case 195575:
{
returnValue = F("Krämersgarten");
break;
}
case 195576:
{
returnValue = F("Krämersgasse");
break;
}
case 195577:
{
returnValue = F("Krämersgrund");
break;
}
case 195578:
{
returnValue = F("Krämersheck");
break;
}
case 195579:
{
returnValue = F("Krämershohle");
break;
}
case 195580:
{
returnValue = F("Krämerskamp");
break;
}
case 195581:
{
returnValue = F("Krämerskreuzweg");
break;
}
case 195582:
{
returnValue = F("Krämerspfadschneise");
break;
}
case 195583:
{
returnValue = F("Krämersteen");
break;
}
case 195584:
{
returnValue = F("Krämerstr.");
break;
}
case 195585:
{
returnValue = F("Krämerstraat");
break;
}
case 195586:
{
returnValue = F("Krämersweg");
break;
}
case 195587:
{
returnValue = F("Krämersweide");
break;
}
case 195588:
{
returnValue = F("Krämersäckerstr.");
break;
}
case 195589:
{
returnValue = F("Krämertwete");
break;
}
case 195590:
{
returnValue = F("Krämerweg");
break;
}
case 195591:
{
returnValue = F("Krämoosweg");
break;
}
case 195592:
{
returnValue = F("Krängelweg");
break;
}
case 195593:
{
returnValue = F("Kränkelsweg");
break;
}
case 195594:
{
returnValue = F("Kränkweg");
break;
}
case 195595:
{
returnValue = F("Kränzelstr.");
break;
}
case 195596:
{
returnValue = F("Kränzliner Bahnhofstr.");
break;
}
case 195597:
{
returnValue = F("Kränzliner Str.");
break;
}
case 195598:
{
returnValue = F("Kränzliner Weg");
break;
}
case 195599:
{
returnValue = F("Kräpeliner Wende");
break;
}
case 195600:
{
returnValue = F("Kräppelweg");
break;
}
case 195601:
{
returnValue = F("Krätzenberg");
break;
}
case 195602:
{
returnValue = F("Krätzenbergweg");
break;
}
case 195603:
{
returnValue = F("Krätzental");
break;
}
case 195604:
{
returnValue = F("Krätzentalweg");
break;
}
case 195605:
{
returnValue = F("Krätzer Leite");
break;
}
case 195606:
{
returnValue = F("Krätzer Str.");
break;
}
case 195607:
{
returnValue = F("Krätzer Winkel");
break;
}
case 195608:
{
returnValue = F("Krätzersrasen");
break;
}
case 195609:
{
returnValue = F("Krätzstr.");
break;
}
case 195610:
{
returnValue = F("Kräugerweg");
break;
}
case 195611:
{
returnValue = F("Kräuselsgässchen");
break;
}
case 195612:
{
returnValue = F("Kräuslesallee");
break;
}
case 195613:
{
returnValue = F("Kräuterbergstr.");
break;
}
case 195614:
{
returnValue = F("Kräuterbronnenstr.");
break;
}
case 195615:
{
returnValue = F("Kräutererlebnispark");
break;
}
case 195616:
{
returnValue = F("Kräutergarten");
break;
}
case 195617:
{
returnValue = F("Kräutergasse");
break;
}
case 195618:
{
returnValue = F("Kräutergärten");
break;
}
case 195619:
{
returnValue = F("Kräuterhagen");
break;
}
case 195620:
{
returnValue = F("Kräuterhausweg");
break;
}
case 195621:
{
returnValue = F("Kräuterhexen Weg");
break;
}
case 195622:
{
returnValue = F("Kräuternweg");
break;
}
case 195623:
{
returnValue = F("Kräuterplatz");
break;
}
case 195624:
{
returnValue = F("Kräuterstr.");
break;
}
case 195625:
{
returnValue = F("Kräutert");
break;
}
case 195626:
{
returnValue = F("Kräuterwanderrweg");
break;
}
case 195627:
{
returnValue = F("Kräuterweg");
break;
}
case 195628:
{
returnValue = F("Kräuterwiese");
break;
}
case 195629:
{
returnValue = F("Kräutlein");
break;
}
case 195630:
{
returnValue = F("Kräutleinhof");
break;
}
case 195631:
{
returnValue = F("Kräutlerstr.");
break;
}
case 195632:
{
returnValue = F("Kräutleweg");
break;
}
case 195633:
{
returnValue = F("Kräutrichsgasse");
break;
}
case 195634:
{
returnValue = F("Kräwerweg");
break;
}
case 195635:
{
returnValue = F("Kräwigstr.");
break;
}
case 195636:
{
returnValue = F("Kräwinkel");
break;
}
case 195637:
{
returnValue = F("Kräwinklerbrücke");
break;
}
case 195638:
{
returnValue = F("Kröb");
break;
}
case 195639:
{
returnValue = F("Kröbelner Str.");
break;
}
case 195640:
{
returnValue = F("Kröberner Str.");
break;
}
case 195641:
{
returnValue = F("Kröblitzer Steig");
break;
}
case 195642:
{
returnValue = F("Kröblitzer Str.");
break;
}
case 195643:
{
returnValue = F("Kröchergasse");
break;
}
case 195644:
{
returnValue = F("Kröchlendorffer Weg");
break;
}
case 195645:
{
returnValue = F("Kröckelbacher Str.");
break;
}
case 195646:
{
returnValue = F("Kröcksweg");
break;
}
case 195647:
{
returnValue = F("Kröffelbacher Berg");
break;
}
case 195648:
{
returnValue = F("Kröffelbacher Str.");
break;
}
case 195649:
{
returnValue = F("Kröfteler Str.");
break;
}
case 195650:
{
returnValue = F("Kröfteler Weg");
break;
}
case 195651:
{
returnValue = F("Krögelhof");
break;
}
case 195652:
{
returnValue = F("Krögelhofer Weg");
break;
}
case 195653:
{
returnValue = F("Krögen");
break;
}
case 195654:
{
returnValue = F("Krögerberg");
break;
}
case 195655:
{
returnValue = F("Krögerdamm");
break;
}
case 195656:
{
returnValue = F("Krögereiweg");
break;
}
case 195657:
{
returnValue = F("Krögergang");
break;
}
case 195658:
{
returnValue = F("Krögerkamp");
break;
}
case 195659:
{
returnValue = F("Krögerkoppel");
break;
}
case 195660:
{
returnValue = F("Krögerredder");
break;
}
case 195661:
{
returnValue = F("Krögers Gang");
break;
}
case 195662:
{
returnValue = F("Krögers Kamp");
break;
}
case 195663:
{
returnValue = F("Krögers Kuhle");
break;
}
case 195664:
{
returnValue = F("Krögers Land");
break;
}
case 195665:
{
returnValue = F("Krögers Moor");
break;
}
case 195666:
{
returnValue = F("Krögers Mühle");
break;
}
case 195667:
{
returnValue = F("Krögers Padd");
break;
}
case 195668:
{
returnValue = F("Krögers Twachte");
break;
}
case 195669:
{
returnValue = F("Krögerskoppel");
break;
}
case 195670:
{
returnValue = F("Krögersstraat");
break;
}
case 195671:
{
returnValue = F("Krögerstr.");
break;
}
case 195672:
{
returnValue = F("Krögertoft");
break;
}
case 195673:
{
returnValue = F("Krögiser Weg");
break;
}
case 195674:
{
returnValue = F("Kröhn");
break;
}
case 195675:
{
returnValue = F("Kröhstorf");
break;
}
case 195676:
{
returnValue = F("Kröllchesgasse");
break;
}
case 195677:
{
returnValue = F("Kröllstr.");
break;
}
case 195678:
{
returnValue = F("Kröllwitz Siedlung");
break;
}
case 195679:
{
returnValue = F("Kröllwitzer Str.");
break;
}
case 195680:
{
returnValue = F("Krölpa");
break;
}
case 195681:
{
returnValue = F("Krölpaer Str.");
break;
}
case 195682:
{
returnValue = F("Krölstr.");
break;
}
case 195683:
{
returnValue = F("Krömerweg");
break;
}
case 195684:
{
returnValue = F("Krömmelbach");
break;
}
case 195685:
{
returnValue = F("Krönchenhagen");
break;
}
case 195686:
{
returnValue = F("Krönckesweg");
break;
}
case 195687:
{
returnValue = F("Krönckeweg");
break;
}
case 195688:
{
returnValue = F("Krönerei");
break;
}
case 195689:
{
returnValue = F("Krönersberg");
break;
}
case 195690:
{
returnValue = F("Krönerstr.");
break;
}
case 195691:
{
returnValue = F("Krönertstr.");
break;
}
case 195692:
{
returnValue = F("Krönerweg");
break;
}
case 195693:
{
returnValue = F("Kröngensgasse");
break;
}
case 195694:
{
returnValue = F("Kröning");
break;
}
case 195695:
{
returnValue = F("Kröninger Str.");
break;
}
case 195696:
{
returnValue = F("Kröninger Weg");
break;
}
case 195697:
{
returnValue = F("Krönkampsweg");
break;
}
case 195698:
{
returnValue = F("Krönken");
break;
}
case 195699:
{
returnValue = F("Krönkenhagen");
break;
}
case 195700:
{
returnValue = F("Krönlein");
break;
}
case 195701:
{
returnValue = F("Krönleinstr.");
break;
}
case 195702:
{
returnValue = F("Krönleinsweg");
break;
}
case 195703:
{
returnValue = F("Krönungsstr.");
break;
}
case 195704:
{
returnValue = F("Krönungsweg");
break;
}
case 195705:
{
returnValue = F("Kröpeliner Str.");
break;
}
case 195706:
{
returnValue = F("Kröpeliner Tor");
break;
}
case 195707:
{
returnValue = F("Kröpelpad");
break;
}
case 195708:
{
returnValue = F("Kröpelweg");
break;
}
case 195709:
{
returnValue = F("Kröpflweg");
break;
}
case 195710:
{
returnValue = F("Kröppelbeek");
break;
}
case 195711:
{
returnValue = F("Kröpper Str.");
break;
}
case 195712:
{
returnValue = F("Krösliner Chaussee");
break;
}
case 195713:
{
returnValue = F("Krösnitz");
break;
}
case 195714:
{
returnValue = F("Krösser Weg");
break;
}
case 195715:
{
returnValue = F("Kröstauer Berg");
break;
}
case 195716:
{
returnValue = F("Kröstauer Str.");
break;
}
case 195717:
{
returnValue = F("Kröstauer Weg");
break;
}
case 195718:
{
returnValue = F("Krötelberg");
break;
}
case 195719:
{
returnValue = F("Krötenbach");
break;
}
case 195720:
{
returnValue = F("Krötenbachgrund");
break;
}
case 195721:
{
returnValue = F("Krötenbachweg");
break;
}
case 195722:
{
returnValue = F("Krötenbruchschneise");
break;
}
case 195723:
{
returnValue = F("Krötenburgstr.");
break;
}
case 195724:
{
returnValue = F("Krötengasse");
break;
}
case 195725:
{
returnValue = F("Krötenheerdtstr.");
break;
}
case 195726:
{
returnValue = F("Krötenkamp");
break;
}
case 195727:
{
returnValue = F("Krötenleite");
break;
}
case 195728:
{
returnValue = F("Krötenmühlstr.");
break;
}
case 195729:
{
returnValue = F("Krötenpfuhl");
break;
}
case 195730:
{
returnValue = F("Krötenpfuhler Weg");
break;
}
case 195731:
{
returnValue = F("Krötenseestr.");
break;
}
case 195732:
{
returnValue = F("Krötenweg");
break;
}
case 195733:
{
returnValue = F("Krötleinstr.");
break;
}
case 195734:
{
returnValue = F("Krötseeschneise");
break;
}
case 195735:
{
returnValue = F("Kröttenhof");
break;
}
case 195736:
{
returnValue = F("Krötzing");
break;
}
case 195737:
{
returnValue = F("Kröver Str.");
break;
}
case 195738:
{
returnValue = F("Krößer Chaussee");
break;
}
case 195739:
{
returnValue = F("Krößwehrstr.");
break;
}
case 195740:
{
returnValue = F("Krübbenberg");
break;
}
case 195741:
{
returnValue = F("Krüchtens Str.");
break;
}
case 195742:
{
returnValue = F("Krück");
break;
}
case 195743:
{
returnValue = F("Krückauring");
break;
}
case 195744:
{
returnValue = F("Krückauweg");
break;
}
case 195745:
{
returnValue = F("Krückberg");
break;
}
case 195746:
{
returnValue = F("Krückeberg");
break;
}
case 195747:
{
returnValue = F("Krückebergstr.");
break;
}
case 195748:
{
returnValue = F("Krückemühle");
break;
}
case 195749:
{
returnValue = F("Krücken");
break;
}
case 195750:
{
returnValue = F("Krückenbergweg");
break;
}
case 195751:
{
returnValue = F("Krückenkrug");
break;
}
case 195752:
{
returnValue = F("Krückenweg");
break;
}
case 195753:
{
returnValue = F("Krückerle");
break;
}
case 195754:
{
returnValue = F("Krückerweg");
break;
}
case 195755:
{
returnValue = F("Krückkamp");
break;
}
case 195756:
{
returnValue = F("Krückmannstr.");
break;
}
case 195757:
{
returnValue = F("Krückweg");
break;
}
case 195758:
{
returnValue = F("Krüdener Weg");
break;
}
case 195759:
{
returnValue = F("Krüdenerstr.");
break;
}
case 195760:
{
returnValue = F("Krüdenscheider Weg");
break;
}
case 195761:
{
returnValue = F("Krügelsteinstr.");
break;
}
case 195762:
{
returnValue = F("Krügelsteinweg");
break;
}
case 195763:
{
returnValue = F("Krügelweg");
break;
}
case 195764:
{
returnValue = F("Krügerallee");
break;
}
case 195765:
{
returnValue = F("Krügerfeld");
break;
}
case 195766:
{
returnValue = F("Krügergasse");
break;
}
case 195767:
{
returnValue = F("Krügerkamp");
break;
}
case 195768:
{
returnValue = F("Krügerpark");
break;
}
case 195769:
{
returnValue = F("Krügers Garten");
break;
}
case 195770:
{
returnValue = F("Krügers Land");
break;
}
case 195771:
{
returnValue = F("Krügers Weg");
break;
}
case 195772:
{
returnValue = F("Krügersdorfer Chaussee");
break;
}
case 195773:
{
returnValue = F("Krügersdorfer Str.");
break;
}
case 195774:
{
returnValue = F("Krügersdorfer Weg");
break;
}
case 195775:
{
returnValue = F("Krügerskamp");
break;
}
case 195776:
{
returnValue = F("Krügerstr.");
break;
}
case 195777:
{
returnValue = F("Krügerstr. - Hägenmarkpfad");
break;
}
case 195778:
{
returnValue = F("Krügerweg");
break;
}
case 195779:
{
returnValue = F("Krüglmühle");
break;
}
case 195780:
{
returnValue = F("Krüglschneiderweg");
break;
}
case 195781:
{
returnValue = F("Krühlweg");
break;
}
case 195782:
{
returnValue = F("Krühstr.");
break;
}
case 195783:
{
returnValue = F("Krükelgasse");
break;
}
case 195784:
{
returnValue = F("Krüllsstr.");
break;
}
case 195785:
{
returnValue = F("Krüllstr.");
break;
}
case 195786:
{
returnValue = F("Krümke");
break;
}
case 195787:
{
returnValue = F("Krümme");
break;
}
case 195788:
{
returnValue = F("Krümmeler Str.");
break;
}
case 195789:
{
returnValue = F("Krümmeler Weg");
break;
}
case 195790:
{
returnValue = F("Krümmeling");
break;
}
case 195791:
{
returnValue = F("Krümmelinstr.");
break;
}
case 195792:
{
returnValue = F("Krümmelstr.");
break;
}
case 195793:
{
returnValue = F("Krümmelweg");
break;
}
case 195794:
{
returnValue = F("Krümmerstr.");
break;
}
case 195795:
{
returnValue = F("Krümmetal");
break;
}
case 195796:
{
returnValue = F("Krümmeweg");
break;
}
case 195797:
{
returnValue = F("Krümmleinsweg");
break;
}
case 195798:
{
returnValue = F("Krümmling");
break;
}
case 195799:
{
returnValue = F("Krümmlingstr.");
break;
}
case 195800:
{
returnValue = F("Krümmlingsweg");
break;
}
case 195801:
{
returnValue = F("Krümmpfad");
break;
}
case 195802:
{
returnValue = F("Krümpel");
break;
}
case 195803:
{
returnValue = F("Krümpelbeckstr.");
break;
}
case 195804:
{
returnValue = F("Krümpelmannstr.");
break;
}
case 195805:
{
returnValue = F("Krümpelstr.");
break;
}
case 195806:
{
returnValue = F("Krümser Str.");
break;
}
case 195807:
{
returnValue = F("Krümwai");
break;
}
case 195808:
{
returnValue = F("Krüner");
break;
}
case 195809:
{
returnValue = F("Krünsend");
break;
}
case 195810:
{
returnValue = F("Krüpelstr.");
break;
}
case 195811:
{
returnValue = F("Krüpelweg");
break;
}
case 195812:
{
returnValue = F("Krüperspatt");
break;
}
case 195813:
{
returnValue = F("Krüppeleichen");
break;
}
case 195814:
{
returnValue = F("Krüppelweg");
break;
}
case 195815:
{
returnValue = F("Krüsberg");
break;
}
case 195816:
{
returnValue = F("Krüschkamp");
break;
}
case 195817:
{
returnValue = F("Krüselblick");
break;
}
case 195818:
{
returnValue = F("Krüselstr.");
break;
}
case 195819:
{
returnValue = F("Krüshamm");
break;
}
case 195820:
{
returnValue = F("Krüskamp");
break;
}
case 195821:
{
returnValue = F("Krüssauer Weg");
break;
}
case 195822:
{
returnValue = F("Krütengasse");
break;
}
case 195823:
{
returnValue = F("Krüterblöcken");
break;
}
case 195824:
{
returnValue = F("Krüttengasse");
break;
}
case 195825:
{
returnValue = F("Krüttweg");
break;
}
case 195826:
{
returnValue = F("Krützbreede");
break;
}
case 195827:
{
returnValue = F("Krützfleth");
break;
}
case 195828:
{
returnValue = F("Krützkamp");
break;
}
case 195829:
{
returnValue = F("Krützmoor");
break;
}
case 195830:
{
returnValue = F("Krüzkamp");
break;
}
case 195831:
{
returnValue = F("Krüßhütt");
break;
}
case 195832:
{
returnValue = F("Kubacher Str.");
break;
}
case 195833:
{
returnValue = F("Kubacher Weg");
break;
}
case 195834:
{
returnValue = F("Kubachsgasse");
break;
}
case 195835:
{
returnValue = F("Kubastr.");
break;
}
case 195836:
{
returnValue = F("Kubeneck");
break;
}
case 195837:
{
returnValue = F("Kubigweg");
break;
}
case 195838:
{
returnValue = F("Kubinstr.");
break;
}
case 195839:
{
returnValue = F("Kubinweg");
break;
}
case 195840:
{
returnValue = F("Kubitzberger Weg");
break;
}
case 195841:
{
returnValue = F("Kubitzer Ring");
break;
}
case 195842:
{
returnValue = F("Kublanker Str.");
break;
}
case 195843:
{
returnValue = F("Kublanker Weg");
break;
}
case 195844:
{
returnValue = F("Kucha");
break;
}
case 195845:
{
returnValue = F("Kuchalber Weg");
break;
}
case 195846:
{
returnValue = F("Kuchalbstr.");
break;
}
case 195847:
{
returnValue = F("Kuchbach");
break;
}
case 195848:
{
returnValue = F("Kuchbergstr.");
break;
}
case 195849:
{
returnValue = F("Kuchbergweg");
break;
}
case 195850:
{
returnValue = F("Kuchelbacher Str.");
break;
}
case 195851:
{
returnValue = F("Kuchelmannweg");
break;
}
case 195852:
{
returnValue = F("Kuchelmißer Chaussee");
break;
}
case 195853:
{
returnValue = F("Kucheln");
break;
}
case 195854:
{
returnValue = F("Kuchenbach");
break;
}
case 195855:
{
returnValue = F("Kuchenbrückleweg");
break;
}
case 195856:
{
returnValue = F("Kuchener Tal");
break;
}
case 195857:
{
returnValue = F("Kuchener Weg");
break;
}
case 195858:
{
returnValue = F("Kuchengasse");
break;
}
case 195859:
{
returnValue = F("Kuchenheimer Weg");
break;
}
case 195860:
{
returnValue = F("Kuchenmühle");
break;
}
case 195861:
{
returnValue = F("Kuchenreuth");
break;
}
case 195862:
{
returnValue = F("Kuchenstr.");
break;
}
case 195863:
{
returnValue = F("Kuchentalweg");
break;
}
case 195864:
{
returnValue = F("Kuchgasse");
break;
}
case 195865:
{
returnValue = F("Kuchhausener Kirchweg");
break;
}
case 195866:
{
returnValue = F("Kuchhausener Str.");
break;
}
case 195867:
{
returnValue = F("Kuchlergasse");
break;
}
case 195868:
{
returnValue = F("Kuchlinger Str.");
break;
}
case 195869:
{
returnValue = F("Kuchlweg");
break;
}
case 195870:
{
returnValue = F("Kuchläcker");
break;
}
case 195871:
{
returnValue = F("Kuchshügel");
break;
}
case 195872:
{
returnValue = F("Kuckanstal");
break;
}
case 195873:
{
returnValue = F("Kuckeland");
break;
}
case 195874:
{
returnValue = F("Kuckelbeck");
break;
}
case 195875:
{
returnValue = F("Kuckelsberg");
break;
}
case 195876:
{
returnValue = F("Kuckenberg");
break;
}
case 195877:
{
returnValue = F("Kuckenburger Str.");
break;
}
case 195878:
{
returnValue = F("Kuckenburger Weg");
break;
}
case 195879:
{
returnValue = F("Kuckengasse");
break;
}
case 195880:
{
returnValue = F("Kuckesberg");
break;
}
case 195881:
{
returnValue = F("Kuckesweg");
break;
}
case 195882:
{
returnValue = F("Kuckhoffstr.");
break;
}
case 195883:
{
returnValue = F("Kuckkucksgasse");
break;
}
case 195884:
{
returnValue = F("Kucksberg");
break;
}
case 195885:
{
returnValue = F("Kuckshagen");
break;
}
case 195886:
{
returnValue = F("Kuckshardt");
break;
}
case 195887:
{
returnValue = F("Kuckshörner Weg");
break;
}
case 195888:
{
returnValue = F("Kucksmoordamm");
break;
}
case 195889:
{
returnValue = F("Kuckstein");
break;
}
case 195890:
{
returnValue = F("Kucksteinstr.");
break;
}
case 195891:
{
returnValue = F("Kuckuck");
break;
}
case 195892:
{
returnValue = F("Kuckucksallee");
break;
}
case 195893:
{
returnValue = F("Kuckucksaue");
break;
}
case 195894:
{
returnValue = F("Kuckucksbadstr.");
break;
}
case 195895:
{
returnValue = F("Kuckucksbarg");
break;
}
case 195896:
{
returnValue = F("Kuckucksberg");
break;
}
case 195897:
{
returnValue = F("Kuckucksberg Weg");
break;
}
case 195898:
{
returnValue = F("Kuckucksbergweg");
break;
}
case 195899:
{
returnValue = F("Kuckucksburg");
break;
}
case 195900:
{
returnValue = F("Kuckucksbusch");
break;
}
case 195901:
{
returnValue = F("Kuckuckschneise");
break;
}
case 195902:
{
returnValue = F("Kuckuckseck");
break;
}
case 195903:
{
returnValue = F("Kuckucksgasse");
break;
}
case 195904:
{
returnValue = F("Kuckuckshang");
break;
}
case 195905:
{
returnValue = F("Kuckucksheim");
break;
}
case 195906:
{
returnValue = F("Kuckuckshöhe");
break;
}
case 195907:
{
returnValue = F("Kuckuckshörner Weg");
break;
}
case 195908:
{
returnValue = F("Kuckuckskamp");
break;
}
case 195909:
{
returnValue = F("Kuckuckskiefer");
break;
}
case 195910:
{
returnValue = F("Kuckucksküchenschneise");
break;
}
case 195911:
{
returnValue = F("Kuckucksleegde");
break;
}
case 195912:
{
returnValue = F("Kuckucksmuehle Garden");
break;
}
case 195913:
{
returnValue = F("Kuckucksmühle");
break;
}
case 195914:
{
returnValue = F("Kuckucksnest");
break;
}
case 195915:
{
returnValue = F("Kuckuckspfad");
break;
}
case 195916:
{
returnValue = F("Kuckucksredder");
break;
}
case 195917:
{
returnValue = F("Kuckucksring");
break;
}
case 195918:
{
returnValue = F("Kuckucksruf");
break;
}
case 195919:
{
returnValue = F("Kuckuckssteig");
break;
}
case 195920:
{
returnValue = F("Kuckucksstieg");
break;
}
case 195921:
{
returnValue = F("Kuckucksteinstr.");
break;
}
case 195922:
{
returnValue = F("Kuckuckstr.");
break;
}
case 195923:
{
returnValue = F("Kuckuckstreff");
break;
}
case 195924:
{
returnValue = F("Kuckuckswald");
break;
}
case 195925:
{
returnValue = F("Kuckucksweg");
break;
}
case 195926:
{
returnValue = F("Kuckuckswinkel");
break;
}
case 195927:
{
returnValue = F("Kuckucksüber");
break;
}
case 195928:
{
returnValue = F("Kuckuckweg");
break;
}
case 195929:
{
returnValue = F("Kuckuksweg");
break;
}
case 195930:
{
returnValue = F("Kuckumer Acker");
break;
}
case 195931:
{
returnValue = F("Kuckumer Acker (neu)");
break;
}
case 195932:
{
returnValue = F("Kuckumer Niersstr.");
break;
}
case 195933:
{
returnValue = F("Kuckumer Niersstr. (neu)");
break;
}
case 195934:
{
returnValue = F("Kudacher Hof");
break;
}
case 195935:
{
returnValue = F("Kudacherweg");
break;
}
case 195936:
{
returnValue = F("Kudener Weg");
break;
}
case 195937:
{
returnValue = F("Kudlhub");
break;
}
case 195938:
{
returnValue = F("Kudlich Siedlung");
break;
}
case 195939:
{
returnValue = F("Kudlichstr.");
break;
}
case 195940:
{
returnValue = F("Kuechlerweg");
break;
}
case 195941:
{
returnValue = F("Kuehholzsträßle");
break;
}
case 195942:
{
returnValue = F("Kuehlbruecke");
break;
}
case 195943:
{
returnValue = F("Kuehlloch");
break;
}
case 195944:
{
returnValue = F("Kuenstr.");
break;
}
case 195945:
{
returnValue = F("Kueserwies");
break;
}
case 195946:
{
returnValue = F("Kufberger Str.");
break;
}
case 195947:
{
returnValue = F("Kufenweg");
break;
}
case 195948:
{
returnValue = F("Kuffenbergstr.");
break;
}
case 195949:
{
returnValue = F("Kufferather Platz");
break;
}
case 195950:
{
returnValue = F("Kuffstr.");
break;
}
case 195951:
{
returnValue = F("Kufnergasse");
break;
}
case 195952:
{
returnValue = F("Kufsteiner Str.");
break;
}
case 195953:
{
returnValue = F("Kufsteiner Weg");
break;
}
case 195954:
{
returnValue = F("Kufte");
break;
}
case 195955:
{
returnValue = F("Kuftenstr.");
break;
}
case 195956:
{
returnValue = F("Kuföd");
break;
}
case 195957:
{
returnValue = F("Kugel-Müller Str.");
break;
}
case 195958:
{
returnValue = F("Kugelacker");
break;
}
case 195959:
{
returnValue = F("Kugelbachstr.");
break;
}
case 195960:
{
returnValue = F("Kugelbachweg");
break;
}
case 195961:
{
returnValue = F("Kugelbeer");
break;
}
case 195962:
{
returnValue = F("Kugelbeerstr.");
break;
}
case 195963:
{
returnValue = F("Kugelberg");
break;
}
case 195964:
{
returnValue = F("Kugelberggasse");
break;
}
case 195965:
{
returnValue = F("Kugelbergpark");
break;
}
case 195966:
{
returnValue = F("Kugelbergring");
break;
}
case 195967:
{
returnValue = F("Kugelbergstr.");
break;
}
case 195968:
{
returnValue = F("Kugelbergweg");
break;
}
case 195969:
{
returnValue = F("Kugelbichlweg");
break;
}
case 195970:
{
returnValue = F("Kugelbreite");
break;
}
case 195971:
{
returnValue = F("Kugelbrücke");
break;
}
case 195972:
{
returnValue = F("Kugelbuckweg");
break;
}
case 195973:
{
returnValue = F("Kugelfang");
break;
}
case 195974:
{
returnValue = F("Kugelfangberg 1");
break;
}
case 195975:
{
returnValue = F("Kugelfangberg 2");
break;
}
case 195976:
{
returnValue = F("Kugelfangstr.");
break;
}
case 195977:
{
returnValue = F("Kugelfangweg");
break;
}
case 195978:
{
returnValue = F("Kugelfeldstr.");
break;
}
case 195979:
{
returnValue = F("Kugelgartenstr.");
break;
}
case 195980:
{
returnValue = F("Kugelgasse");
break;
}
case 195981:
{
returnValue = F("Kugelgraben");
break;
}
case 195982:
{
returnValue = F("Kugelhalde");
break;
}
case 195983:
{
returnValue = F("Kugelhammerweg");
break;
}
case 195984:
{
returnValue = F("Kugelhauweg");
break;
}
case 195985:
{
returnValue = F("Kugelherrenstr.");
break;
}
case 195986:
{
returnValue = F("Kugelherrnstr.");
break;
}
case 195987:
{
returnValue = F("Kugelholzstr.");
break;
}
case 195988:
{
returnValue = F("Kugelleich");
break;
}
case 195989:
{
returnValue = F("Kugelmühlstr.");
break;
}
case 195990:
{
returnValue = F("Kugelmühlweg");
break;
}
case 195991:
{
returnValue = F("Kugelplatz");
break;
}
case 195992:
{
returnValue = F("Kugelpoint");
break;
}
case 195993:
{
returnValue = F("Kugelrasen");
break;
}
case 195994:
{
returnValue = F("Kugelsberger Weg");
break;
}
case 195995:
{
returnValue = F("Kugelspielweg");
break;
}
case 195996:
{
returnValue = F("Kugelstr.");
break;
}
case 195997:
{
returnValue = F("Kugeltalweg");
break;
}
case 195998:
{
returnValue = F("Kugelthal");
break;
}
case 195999:
{
returnValue = F("Kugelwasen");
break;
}
case 196000:
{
returnValue = F("Kugelwasenweg");
break;
}
case 196001:
{
returnValue = F("Kugelweg");
break;
}
case 196002:
{
returnValue = F("Kugelweide");
break;
}
case 196003:
{
returnValue = F("Kugelweiher");
break;
}
case 196004:
{
returnValue = F("Kugelweiherweg");
break;
}
case 196005:
{
returnValue = F("Kugelweite");
break;
}
case 196006:
{
returnValue = F("Kuglerberg");
break;
}
case 196007:
{
returnValue = F("Kuglersberg");
break;
}
case 196008:
{
returnValue = F("Kuglerstr.");
break;
}
case 196009:
{
returnValue = F("Kuglerweg");
break;
}
case 196010:
{
returnValue = F("Kuglmoosstr.");
break;
}
case 196011:
{
returnValue = F("Kuglstadtstr.");
break;
}
case 196012:
{
returnValue = F("Kuglweg");
break;
}
case 196013:
{
returnValue = F("Kuh");
break;
}
case 196014:
{
returnValue = F("Kuh-Brücke");
break;
}
case 196015:
{
returnValue = F("Kuh-Damm");
break;
}
case 196016:
{
returnValue = F("Kuhackerweg");
break;
}
case 196017:
{
returnValue = F("Kuhallmand");
break;
}
case 196018:
{
returnValue = F("Kuhanger");
break;
}
case 196019:
{
returnValue = F("Kuhardter Str.");
break;
}
case 196020:
{
returnValue = F("Kuhbach");
break;
}
case 196021:
{
returnValue = F("Kuhbach-Ringweg");
break;
}
case 196022:
{
returnValue = F("Kuhbacher Hauptstr.");
break;
}
case 196023:
{
returnValue = F("Kuhbachhüttenweg");
break;
}
case 196024:
{
returnValue = F("Kuhbachsträßchen");
break;
}
case 196025:
{
returnValue = F("Kuhbachweg");
break;
}
case 196026:
{
returnValue = F("Kuhbadweg");
break;
}
case 196027:
{
returnValue = F("Kuhbahn");
break;
}
case 196028:
{
returnValue = F("Kuhbartsweg");
break;
}
case 196029:
{
returnValue = F("Kuhbaumweg");
break;
}
case 196030:
{
returnValue = F("Kuhbeekweg");
break;
}
case 196031:
{
returnValue = F("Kuhberg");
break;
}
case 196032:
{
returnValue = F("Kuhbergele");
break;
}
case 196033:
{
returnValue = F("Kuhbergsteige");
break;
}
case 196034:
{
returnValue = F("Kuhbergstr.");
break;
}
case 196035:
{
returnValue = F("Kuhbergweg");
break;
}
case 196036:
{
returnValue = F("Kuhbier Ausbau");
break;
}
case 196037:
{
returnValue = F("Kuhbierer Dorfstr.");
break;
}
case 196038:
{
returnValue = F("Kuhborn Schneise");
break;
}
case 196039:
{
returnValue = F("Kuhbornstr.");
break;
}
case 196040:
{
returnValue = F("Kuhbrunnenallee");
break;
}
case 196041:
{
returnValue = F("Kuhbrunnenteichweg");
break;
}
case 196042:
{
returnValue = F("Kuhbrunnenweg");
break;
}
case 196043:
{
returnValue = F("Kuhbrücke");
break;
}
case 196044:
{
returnValue = F("Kuhbrückenbreite");
break;
}
case 196045:
{
returnValue = F("Kuhbrückenweg");
break;
}
case 196046:
{
returnValue = F("Kuhbuck");
break;
}
case 196047:
{
returnValue = F("Kuhbusch");
break;
}
case 196048:
{
returnValue = F("Kuhbühl");
break;
}
case 196049:
{
returnValue = F("Kuhbühlweg");
break;
}
case 196050:
{
returnValue = F("Kuhbühlweg 3/1");
break;
}
case 196051:
{
returnValue = F("Kuhdamm");
break;
}
case 196052:
{
returnValue = F("Kuhdreckflussweg");
break;
}
case 196053:
{
returnValue = F("Kuhdrift");
break;
}
case 196054:
{
returnValue = F("Kuhdyck");
break;
}
case 196055:
{
returnValue = F("Kuhdyk");
break;
}
case 196056:
{
returnValue = F("Kuheidsberg");
break;
}
case 196057:
{
returnValue = F("Kuher Weg");
break;
}
case 196058:
{
returnValue = F("Kuhfehnweg");
break;
}
case 196059:
{
returnValue = F("Kuhfeld");
break;
}
case 196060:
{
returnValue = F("Kuhfennenweg");
break;
}
case 196061:
{
returnValue = F("Kuhfluchtweg");
break;
}
case 196062:
{
returnValue = F("Kuhfort");
break;
}
case 196063:
{
returnValue = F("Kuhgang");
break;
}
case 196064:
{
returnValue = F("Kuhgasse");
break;
}
case 196065:
{
returnValue = F("Kuhgraben");
break;
}
case 196066:
{
returnValue = F("Kuhgrund");
break;
}
case 196067:
{
returnValue = F("Kuhgräsung");
break;
}
case 196068:
{
returnValue = F("Kuhgässchen");
break;
}
case 196069:
{
returnValue = F("Kuhhaag");
break;
}
case 196070:
{
returnValue = F("Kuhhagen");
break;
}
case 196071:
{
returnValue = F("Kuhhaldenweg");
break;
}
case 196072:
{
returnValue = F("Kuhhamm");
break;
}
case 196073:
{
returnValue = F("Kuhhauser Weg");
break;
}
case 196074:
{
returnValue = F("Kuhhautweg");
break;
}
case 196075:
{
returnValue = F("Kuhheide");
break;
}
case 196076:
{
returnValue = F("Kuhhelle");
break;
}
case 196077:
{
returnValue = F("Kuhhirtengang");
break;
}
case 196078:
{
returnValue = F("Kuhhohle");
break;
}
case 196079:
{
returnValue = F("Kuhhohlweg");
break;
}
case 196080:
{
returnValue = F("Kuhhole");
break;
}
case 196081:
{
returnValue = F("Kuhholz");
break;
}
case 196082:
{
returnValue = F("Kuhholzberger Weg");
break;
}
case 196083:
{
returnValue = F("Kuhholzweg");
break;
}
case 196084:
{
returnValue = F("Kuhhornsweg");
break;
}
case 196085:
{
returnValue = F("Kuhhorster Str.");
break;
}
case 196086:
{
returnValue = F("Kuhhöhle");
break;
}
case 196087:
{
returnValue = F("Kuhhübelweg");
break;
}
case 196088:
{
returnValue = F("Kuhkamp");
break;
}
case 196089:
{
returnValue = F("Kuhkampsweg");
break;
}
case 196090:
{
returnValue = F("Kuhkaute");
break;
}
case 196091:
{
returnValue = F("Kuhkopfweg");
break;
}
case 196092:
{
returnValue = F("Kuhkoppel");
break;
}
case 196093:
{
returnValue = F("Kuhkämpe");
break;
}
case 196094:
{
returnValue = F("Kuhl");
break;
}
case 196095:
{
returnValue = F("Kuhlacker");
break;
}
case 196096:
{
returnValue = F("Kuhlackerweg");
break;
}
case 196097:
{
returnValue = F("Kuhlager");
break;
}
case 196098:
{
returnValue = F("Kuhlager Weg");
break;
}
case 196099:
{
returnValue = F("Kuhland");
break;
}
case 196100:
{
returnValue = F("Kuhlaustr.");
break;
}
case 196101:
{
returnValue = F("Kuhlbornstr.");
break;
}
case 196102:
{
returnValue = F("Kuhlbreite");
break;
}
case 196103:
{
returnValue = F("Kuhlbusch");
break;
}
case 196104:
{
returnValue = F("Kuhle");
break;
}
case 196105:
{
returnValue = F("Kuhlecke");
break;
}
case 196106:
{
returnValue = F("Kuhlegasse");
break;
}
case 196107:
{
returnValue = F("Kuhleger");
break;
}
case 196108:
{
returnValue = F("Kuhlen");
break;
}
case 196109:
{
returnValue = F("Kuhlenberg");
break;
}
case 196110:
{
returnValue = F("Kuhlenbergstr.");
break;
}
case 196111:
{
returnValue = F("Kuhlenbrink");
break;
}
case 196112:
{
returnValue = F("Kuhlenbruch");
break;
}
case 196113:
{
returnValue = F("Kuhlenburger Weg");
break;
}
case 196114:
{
returnValue = F("Kuhlendahler Str.");
break;
}
case 196115:
{
returnValue = F("Kuhlendamm");
break;
}
case 196116:
{
returnValue = F("Kuhleneck");
break;
}
case 196117:
{
returnValue = F("Kuhlener Gutsstr.");
break;
}
case 196118:
{
returnValue = F("Kuhlener Str.");
break;
}
case 196119:
{
returnValue = F("Kuhlener Weg");
break;
}
case 196120:
{
returnValue = F("Kuhlenfelder Weg");
break;
}
case 196121:
{
returnValue = F("Kuhlengasse");
break;
}
case 196122:
{
returnValue = F("Kuhlenhagen");
break;
}
case 196123:
{
returnValue = F("Kuhlenholz");
break;
}
case 196124:
{
returnValue = F("Kuhlenkamp");
break;
}
case 196125:
{
returnValue = F("Kuhlenkampstr.");
break;
}
case 196126:
{
returnValue = F("Kuhlenkeppig");
break;
}
case 196127:
{
returnValue = F("Kuhlenlot");
break;
}
case 196128:
{
returnValue = F("Kuhlenmoorweg");
break;
}
case 196129:
{
returnValue = F("Kuhlenreihe");
break;
}
case 196130:
{
returnValue = F("Kuhlenschlag");
break;
}
case 196131:
{
returnValue = F("Kuhlenstr.");
break;
}
case 196132:
{
returnValue = F("Kuhlenstück");
break;
}
case 196133:
{
returnValue = F("Kuhlenstücken");
break;
}
case 196134:
{
returnValue = F("Kuhlenweg");
break;
}
case 196135:
{
returnValue = F("Kuhler Berg");
break;
}
case 196136:
{
returnValue = F("Kuhler Gasse");
break;
}
case 196137:
{
returnValue = F("Kuhler Str.");
break;
}
case 196138:
{
returnValue = F("Kuhler Weg");
break;
}
case 196139:
{
returnValue = F("Kuhlerplatz");
break;
}
case 196140:
{
returnValue = F("Kuhlertgraben");
break;
}
case 196141:
{
returnValue = F("Kuhlerthang");
break;
}
case 196142:
{
returnValue = F("Kuhlertstr.");
break;
}
case 196143:
{
returnValue = F("Kuhley");
break;
}
case 196144:
{
returnValue = F("Kuhlfeldweg");
break;
}
case 196145:
{
returnValue = F("Kuhlgartenstr.");
break;
}
case 196146:
{
returnValue = F("Kuhlhammsweg");
break;
}
case 196147:
{
returnValue = F("Kuhlheck");
break;
}
case 196148:
{
returnValue = F("Kuhlhof");
break;
}
case 196149:
{
returnValue = F("Kuhlkamp");
break;
}
case 196150:
{
returnValue = F("Kuhlmanns Kamp");
break;
}
case 196151:
{
returnValue = F("Kuhlmanns Stamm");
break;
}
case 196152:
{
returnValue = F("Kuhlmanns Weg");
break;
}
case 196153:
{
returnValue = F("Kuhlmannsheider Weg");
break;
}
case 196154:
{
returnValue = F("Kuhlmannstr.");
break;
}
case 196155:
{
returnValue = F("Kuhlmannsweg");
break;
}
case 196156:
{
returnValue = F("Kuhlmaystr.");
break;
}
case 196157:
{
returnValue = F("Kuhlmersch");
break;
}
case 196158:
{
returnValue = F("Kuhlmoorsdamm");
break;
}
case 196159:
{
returnValue = F("Kuhlmorgen");
break;
}
case 196160:
{
returnValue = F("Kuhlmühler Str.");
break;
}
case 196161:
{
returnValue = F("Kuhloch Weg 3,4,8");
break;
}
case 196162:
{
returnValue = F("Kuhlort");
break;
}
case 196163:
{
returnValue = F("Kuhlostr.");
break;
}
case 196164:
{
returnValue = F("Kuhloweg");
break;
}
case 196165:
{
returnValue = F("Kuhlrader Str.");
break;
}
case 196166:
{
returnValue = F("Kuhlschmiede");
break;
}
case 196167:
{
returnValue = F("Kuhlseeweg");
break;
}
case 196168:
{
returnValue = F("Kuhlsmannsweg");
break;
}
case 196169:
{
returnValue = F("Kuhlstr.");
break;
}
case 196170:
{
returnValue = F("Kuhlstücken");
break;
}
case 196171:
{
returnValue = F("Kuhlsweg");
break;
}
case 196172:
{
returnValue = F("Kuhlvordel");
break;
}
case 196173:
{
returnValue = F("Kuhlweg");
break;
}
case 196174:
{
returnValue = F("Kuhlwiese");
break;
}
case 196175:
{
returnValue = F("Kuhlwiesenweg");
break;
}
case 196176:
{
returnValue = F("Kuhlworth");
break;
}
case 196177:
{
returnValue = F("Kuhläger");
break;
}
case 196178:
{
returnValue = F("Kuhländler Weg");
break;
}
case 196179:
{
returnValue = F("Kuhm");
break;
}
case 196180:
{
returnValue = F("Kuhmannsheide");
break;
}
case 196181:
{
returnValue = F("Kuhmarkt");
break;
}
case 196182:
{
returnValue = F("Kuhmoor");
break;
}
case 196183:
{
returnValue = F("Kuhmoosweg");
break;
}
case 196184:
{
returnValue = F("Kuhmplatz");
break;
}
case 196185:
{
returnValue = F("Kuhmättleweg");
break;
}
case 196186:
{
returnValue = F("Kuhmühler Weg");
break;
}
case 196187:
{
returnValue = F("Kuhnackerstr.");
break;
}
case 196188:
{
returnValue = F("Kuhnaustr.");
break;
}
case 196189:
{
returnValue = F("Kuhnauweg");
break;
}
case 196190:
{
returnValue = F("Kuhnbergstr.");
break;
}
case 196191:
{
returnValue = F("Kuhndorfer Dorfstr.");
break;
}
case 196192:
{
returnValue = F("Kuhndorfer Str.");
break;
}
case 196193:
{
returnValue = F("Kuhndorfer Teichweg");
break;
}
case 196194:
{
returnValue = F("Kuhndorfer Weg");
break;
}
case 196195:
{
returnValue = F("Kuhndorftal");
break;
}
case 196196:
{
returnValue = F("Kuhne-Weg");
break;
}
case 196197:
{
returnValue = F("Kuhnen");
break;
}
case 196198:
{
returnValue = F("Kuhnengasse");
break;
}
case 196199:
{
returnValue = F("Kuhnerseestr.");
break;
}
case 196200:
{
returnValue = F("Kuhnestr.");
break;
}
case 196201:
{
returnValue = F("Kuhnesträßel");
break;
}
case 196202:
{
returnValue = F("Kuhngasse");
break;
}
case 196203:
{
returnValue = F("Kuhnhöfer Str.");
break;
}
case 196204:
{
returnValue = F("Kuhnsgasse");
break;
}
case 196205:
{
returnValue = F("Kuhnshof");
break;
}
case 196206:
{
returnValue = F("Kuhnstr.");
break;
}
case 196207:
{
returnValue = F("Kuhnts Busch");
break;
}
case 196208:
{
returnValue = F("Kuhnweiler");
break;
}
case 196209:
{
returnValue = F("Kuhpaden");
break;
}
case 196210:
{
returnValue = F("Kuhpfad");
break;
}
case 196211:
{
returnValue = F("Kuhpfadstr.");
break;
}
case 196212:
{
returnValue = F("Kuhpfortenstr.");
break;
}
case 196213:
{
returnValue = F("Kuhplattenweg");
break;
}
case 196214:
{
returnValue = F("Kuhplatzweg");
break;
}
case 196215:
{
returnValue = F("Kuhrain");
break;
}
case 196216:
{
returnValue = F("Kuhrainweg");
break;
}
case 196217:
{
returnValue = F("Kuhrietsweg");
break;
}
case 196218:
{
returnValue = F("Kuhrtsmühle");
break;
}
case 196219:
{
returnValue = F("Kuhrtstr.");
break;
}
case 196220:
{
returnValue = F("Kuhschellenring");
break;
}
case 196221:
{
returnValue = F("Kuhschellenweg");
break;
}
case 196222:
{
returnValue = F("Kuhschlagweg");
break;
}
case 196223:
{
returnValue = F("Kuhschnappler Berg");
break;
}
case 196224:
{
returnValue = F("Kuhschnappler Weg");
break;
}
case 196225:
{
returnValue = F("Kuhschneise");
break;
}
case 196226:
{
returnValue = F("Kuhsdorf");
break;
}
case 196227:
{
returnValue = F("Kuhsdorfer Weg");
break;
}
case 196228:
{
returnValue = F("Kuhsenbarg");
break;
}
case 196229:
{
returnValue = F("Kuhsiefen");
break;
}
case 196230:
{
returnValue = F("Kuhsing");
break;
}
case 196231:
{
returnValue = F("Kuhsinggraben");
break;
}
case 196232:
{
returnValue = F("Kuhspring");
break;
}
case 196233:
{
returnValue = F("Kuhstallstr.");
break;
}
case 196234:
{
returnValue = F("Kuhstedter Str.");
break;
}
case 196235:
{
returnValue = F("Kuhsteeg");
break;
}
case 196236:
{
returnValue = F("Kuhsteig");
break;
}
case 196237:
{
returnValue = F("Kuhsteige");
break;
}
case 196238:
{
returnValue = F("Kuhstellenweg");
break;
}
case 196239:
{
returnValue = F("Kuhstiefelweg");
break;
}
case 196240:
{
returnValue = F("Kuhstirn");
break;
}
case 196241:
{
returnValue = F("Kuhstorfer Str.");
break;
}
case 196242:
{
returnValue = F("Kuhstr.");
break;
}
case 196243:
{
returnValue = F("Kuhstubenweg");
break;
}
case 196244:
{
returnValue = F("Kuhtal");
break;
}
case 196245:
{
returnValue = F("Kuhteich");
break;
}
case 196246:
{
returnValue = F("Kuhteichkreisel");
break;
}
case 196247:
{
returnValue = F("Kuhteichweg");
break;
}
case 196248:
{
returnValue = F("Kuhtor");
break;
}
case 196249:
{
returnValue = F("Kuhtorhauweg");
break;
}
case 196250:
{
returnValue = F("Kuhtorweg");
break;
}
case 196251:
{
returnValue = F("Kuhtotsbleiche");
break;
}
case 196252:
{
returnValue = F("Kuhtreppe");
break;
}
case 196253:
{
returnValue = F("Kuhtrieb");
break;
}
case 196254:
{
returnValue = F("Kuhtriebsweg");
break;
}
case 196255:
{
returnValue = F("Kuhtriebweg");
break;
}
case 196256:
{
returnValue = F("Kuhtrift");
break;
}
case 196257:
{
returnValue = F("Kuhtriftweg");
break;
}
case 196258:
{
returnValue = F("Kuhtrogweg");
break;
}
case 196259:
{
returnValue = F("Kuhtränke Str.");
break;
}
case 196260:
{
returnValue = F("Kuhtränken Graseweg");
break;
}
case 196261:
{
returnValue = F("Kuhtränkeweg");
break;
}
case 196262:
{
returnValue = F("Kuhtunnel");
break;
}
case 196263:
{
returnValue = F("Kuhwaldweg");
break;
}
case 196264:
{
returnValue = F("Kuhwasen");
break;
}
case 196265:
{
returnValue = F("Kuhweg");
break;
}
case 196266:
{
returnValue = F("Kuhweide");
break;
}
case 196267:
{
returnValue = F("Kuhweideckschneise");
break;
}
case 196268:
{
returnValue = F("Kuhweidenweg");
break;
}
case 196269:
{
returnValue = F("Kuhweider Weg");
break;
}
case 196270:
{
returnValue = F("Kuhweidesweg");
break;
}
case 196271:
{
returnValue = F("Kuhweidschneise");
break;
}
case 196272:
{
returnValue = F("Kuhwies");
break;
}
case 196273:
{
returnValue = F("Kuhwinkel");
break;
}
case 196274:
{
returnValue = F("Kuhwäldles Steige");
break;
}
case 196275:
{
returnValue = F("Kuhz");
break;
}
case 196276:
{
returnValue = F("Kuhzahl");
break;
}
case 196277:
{
returnValue = F("Kuhzell Schneise");
break;
}
case 196278:
{
returnValue = F("Kuhzer Str.");
break;
}
case 196279:
{
returnValue = F("Kuhzer Weg");
break;
}
case 196280:
{
returnValue = F("Kuhäckerstr.");
break;
}
case 196281:
{
returnValue = F("Kuiwoi");
break;
}
case 196282:
{
returnValue = F("Kukaner Str.");
break;
}
case 196283:
{
returnValue = F("Kukaner Weg");
break;
}
case 196284:
{
returnValue = F("Kukedeel");
break;
}
case 196285:
{
returnValue = F("Kukelke");
break;
}
case 196286:
{
returnValue = F("Kuks");
break;
}
case 196287:
{
returnValue = F("Kukshagen");
break;
}
case 196288:
{
returnValue = F("Kukshörner Weg");
break;
}
case 196289:
{
returnValue = F("Kukucksweg");
break;
}
case 196290:
{
returnValue = F("Kukuk");
break;
}
case 196291:
{
returnValue = F("Kukuker Weg");
break;
}
case 196292:
{
returnValue = F("Kukuksberg Weg");
break;
}
case 196293:
{
returnValue = F("Kukuksgasse");
break;
}
case 196294:
{
returnValue = F("Kukulau");
break;
}
case 196295:
{
returnValue = F("Kukulauer Str.");
break;
}
case 196296:
{
returnValue = F("Kulaer Str.");
break;
}
case 196297:
{
returnValue = F("Kulbitzring");
break;
}
case 196298:
{
returnValue = F("Kulbitzweg");
break;
}
case 196299:
{
returnValue = F("Kulch");
break;
}
case 196300:
{
returnValue = F("Kulchbergstr.");
break;
}
case 196301:
{
returnValue = F("Kulchring");
break;
}
case 196302:
{
returnValue = F("Kulenkamp");
break;
}
case 196303:
{
returnValue = F("Kulenkampweg");
break;
}
case 196304:
{
returnValue = F("Kulenweg");
break;
}
case 196305:
{
returnValue = F("Kulfstr.");
break;
}
case 196306:
{
returnValue = F("Kulinger");
break;
}
case 196307:
{
returnValue = F("Kulischstr.");
break;
}
case 196308:
{
returnValue = F("Kulistr.");
break;
}
case 196309:
{
returnValue = F("Kulk");
break;
}
case 196310:
{
returnValue = F("Kulkstr.");
break;
}
case 196311:
{
returnValue = F("Kulkwitzer Weg");
break;
}
case 196312:
{
returnValue = F("Kullbach");
break;
}
case 196313:
{
returnValue = F("Kulleich");
break;
}
case 196314:
{
returnValue = F("Kullenberg");
break;
}
case 196315:
{
returnValue = F("Kullengasse");
break;
}
case 196316:
{
returnValue = F("Kullenstr.");
break;
}
case 196317:
{
returnValue = F("Kullenweg");
break;
}
case 196318:
{
returnValue = F("Kullenwiesen");
break;
}
case 196319:
{
returnValue = F("Kullerberg");
break;
}
case 196320:
{
returnValue = F("Kullersträßchen");
break;
}
case 196321:
{
returnValue = F("Kullertreppe");
break;
}
case 196322:
{
returnValue = F("Kullichweg");
break;
}
case 196323:
{
returnValue = F("Kullmannstr.");
break;
}
case 196324:
{
returnValue = F("Kullweg");
break;
}
case 196325:
{
returnValue = F("Kulm");
break;
}
case 196326:
{
returnValue = F("Kulmainer Str.");
break;
}
case 196327:
{
returnValue = F("Kulmansweg");
break;
}
case 196328:
{
returnValue = F("Kulmbacher Str.");
break;
}
case 196329:
{
returnValue = F("Kulmblick");
break;
}
case 196330:
{
returnValue = F("Kulmbrücke");
break;
}
case 196331:
{
returnValue = F("Kulmenweg");
break;
}
case 196332:
{
returnValue = F("Kulmer Steig");
break;
}
case 196333:
{
returnValue = F("Kulmer Str.");
break;
}
case 196334:
{
returnValue = F("Kulmer Weg");
break;
}
case 196335:
{
returnValue = F("Kulmesweg");
break;
}
case 196336:
{
returnValue = F("Kulmgasse");
break;
}
case 196337:
{
returnValue = F("Kulmitzweg");
break;
}
case 196338:
{
returnValue = F("Kulmstr.");
break;
}
case 196339:
{
returnValue = F("Kulmuswiese");
break;
}
case 196340:
{
returnValue = F("Kulmweg");
break;
}
case 196341:
{
returnValue = F("Kulnikweg");
break;
}
case 196342:
{
returnValue = F("Kulperweg");
break;
}
case 196343:
{
returnValue = F("Kulpiner Weg");
break;
}
case 196344:
{
returnValue = F("Kultur- und Landschaftspark Loreley");
break;
}
case 196345:
{
returnValue = F("Kulturachse");
break;
}
case 196346:
{
returnValue = F("Kulturdamm");
break;
}
case 196347:
{
returnValue = F("Kulturenweg");
break;
}
case 196348:
{
returnValue = F("Kulturgrabenstr.");
break;
}
case 196349:
{
returnValue = F("Kulturhauspark Lüdenscheid");
break;
}
case 196350:
{
returnValue = F("Kulturhausstr.");
break;
}
case 196351:
{
returnValue = F("Kulturhausweg");
break;
}
case 196352:
{
returnValue = F("Kulturhof Flachsgasse");
break;
}
case 196353:
{
returnValue = F("Kulturhof Heyerhöfen");
break;
}
case 196354:
{
returnValue = F("Kulturinsel Einsiedel");
break;
}
case 196355:
{
returnValue = F("Kulturlandschaftsgarten");
break;
}
case 196356:
{
returnValue = F("Kulturpark");
break;
}
case 196357:
{
returnValue = F("Kulturpark \"Unser Fritz 2/3");
break;
}
case 196358:
{
returnValue = F("Kulturpark Dettinger");
break;
}
case 196359:
{
returnValue = F("Kulturpark Marienberg");
break;
}
case 196360:
{
returnValue = F("Kulturpark Mitte");
break;
}
case 196361:
{
returnValue = F("Kulturpark Pockau");
break;
}
case 196362:
{
returnValue = F("Kulturstr.");
break;
}
case 196363:
{
returnValue = F("Kulturweg");
break;
}
case 196364:
{
returnValue = F("Kulüken Padd");
break;
}
case 196365:
{
returnValue = F("Kumbachstr.");
break;
}
case 196366:
{
returnValue = F("Kumbderweg");
break;
}
case 196367:
{
returnValue = F("Kumbrügge");
break;
}
case 196368:
{
returnValue = F("Kumhausener Str.");
break;
}
case 196369:
{
returnValue = F("Kummel");
break;
}
case 196370:
{
returnValue = F("Kummelbergschneise");
break;
}
case 196371:
{
returnValue = F("Kummeldamm");
break;
}
case 196372:
{
returnValue = F("Kummelgasse");
break;
}
case 196373:
{
returnValue = F("Kummelrainweg");
break;
}
case 196374:
{
returnValue = F("Kummelstr.");
break;
}
case 196375:
{
returnValue = F("Kummenberg");
break;
}
case 196376:
{
returnValue = F("Kummer");
break;
}
case 196377:
{
returnValue = F("Kummerallee");
break;
}
case 196378:
{
returnValue = F("Kummerau");
break;
}
case 196379:
{
returnValue = F("Kummerberg");
break;
}
case 196380:
{
returnValue = F("Kummerbergstr.");
break;
}
case 196381:
{
returnValue = F("Kummerfeld");
break;
}
case 196382:
{
returnValue = F("Kummerfelder Str.");
break;
}
case 196383:
{
returnValue = F("Kummerfelder Weg");
break;
}
case 196384:
{
returnValue = F("Kummerfelds-Weg");
break;
}
case 196385:
{
returnValue = F("Kummerfeldweg");
break;
}
case 196386:
{
returnValue = F("Kummerlandweg");
break;
}
case 196387:
{
returnValue = F("Kummerléstr.");
break;
}
case 196388:
{
returnValue = F("Kummerow Heide-Transitstr.");
break;
}
case 196389:
{
returnValue = F("Kummerow-Transitstr.");
break;
}
case 196390:
{
returnValue = F("Kummerower Dorfstr.");
break;
}
case 196391:
{
returnValue = F("Kummerower Str.");
break;
}
case 196392:
{
returnValue = F("Kummerower Weg");
break;
}
case 196393:
{
returnValue = F("Kummersberg");
break;
}
case 196394:
{
returnValue = F("Kummersche Str.");
break;
}
case 196395:
{
returnValue = F("Kummerscher Weg");
break;
}
case 196396:
{
returnValue = F("Kummersdorfer Str.");
break;
}
case 196397:
{
returnValue = F("Kummersdorfer Weg");
break;
}
case 196398:
{
returnValue = F("Kummerskamp");
break;
}
case 196399:
{
returnValue = F("Kummerssteige");
break;
}
case 196400:
{
returnValue = F("Kummerstr.");
break;
}
case 196401:
{
returnValue = F("Kummerteich");
break;
}
case 196402:
{
returnValue = F("Kummertsreuth");
break;
}
case 196403:
{
returnValue = F("Kummerweg");
break;
}
case 196404:
{
returnValue = F("Kummerwiese");
break;
}
case 196405:
{
returnValue = F("Kummetgasse");
break;
}
case 196406:
{
returnValue = F("Kummle");
break;
}
case 196407:
{
returnValue = F("Kummroer Str.");
break;
}
case 196408:
{
returnValue = F("Kummroer Weg");
break;
}
case 196409:
{
returnValue = F("Kummstr.");
break;
}
case 196410:
{
returnValue = F("Kummweg");
break;
}
case 196411:
{
returnValue = F("Kumpanenstr.");
break;
}
case 196412:
{
returnValue = F("Kumpelstieg");
break;
}
case 196413:
{
returnValue = F("Kumpenkampsheide");
break;
}
case 196414:
{
returnValue = F("Kumpfgartenstr.");
break;
}
case 196415:
{
returnValue = F("Kumpfgasse");
break;
}
case 196416:
{
returnValue = F("Kumpfmühlstr.");
break;
}
case 196417:
{
returnValue = F("Kumpfmüllerstr.");
break;
}
case 196418:
{
returnValue = F("Kumpftal");
break;
}
case 196419:
{
returnValue = F("Kumpftreppchen");
break;
}
case 196420:
{
returnValue = F("Kumpfwies");
break;
}
case 196421:
{
returnValue = F("Kumpstr.");
break;
}
case 196422:
{
returnValue = F("Kumpweg");
break;
}
case 196423:
{
returnValue = F("Kumsgasse");
break;
}
case 196424:
{
returnValue = F("Kunackerweg");
break;
}
case 196425:
{
returnValue = F("Kunads Garten");
break;
}
case 196426:
{
returnValue = F("Kundlerweg");
break;
}
case 196427:
{
returnValue = F("Kundryweg");
break;
}
case 196428:
{
returnValue = F("Kunengarten");
break;
}
case 196429:
{
returnValue = F("Kunersdorf");
break;
}
case 196430:
{
returnValue = F("Kunersdorfer Str.");
break;
}
case 196431:
{
returnValue = F("Kunersdorfer Weg");
break;
}
case 196432:
{
returnValue = F("Kunertstr.");
break;
}
case 196433:
{
returnValue = F("Kunewaldstr.");
break;
}
case 196434:
{
returnValue = F("Kungelgäßchen");
break;
}
case 196435:
{
returnValue = F("Kungälvstr.");
break;
}
case 196436:
{
returnValue = F("Kuni-Tremel-Eggert-Str.");
break;
}
case 196437:
{
returnValue = F("Kunibert-Schäfer-Weg");
break;
}
case 196438:
{
returnValue = F("Kunibertstr.");
break;
}
case 196439:
{
returnValue = F("Kunibertsweg");
break;
}
case 196440:
{
returnValue = F("Kunibertusplatz");
break;
}
case 196441:
{
returnValue = F("Kunibertusstr.");
break;
}
case 196442:
{
returnValue = F("Kunibertusweg");
break;
}
case 196443:
{
returnValue = F("Kunibertweg");
break;
}
case 196444:
{
returnValue = F("Kunickerstr.");
break;
}
case 196445:
{
returnValue = F("Kunigunde");
break;
}
case 196446:
{
returnValue = F("Kunigunde-Kreuzer-Str.");
break;
}
case 196447:
{
returnValue = F("Kunigundendamm");
break;
}
case 196448:
{
returnValue = F("Kunigundengasse");
break;
}
case 196449:
{
returnValue = F("Kunigundenplatz");
break;
}
case 196450:
{
returnValue = F("Kunigundenring");
break;
}
case 196451:
{
returnValue = F("Kunigundenruhstr.");
break;
}
case 196452:
{
returnValue = F("Kunigundenstr.");
break;
}
case 196453:
{
returnValue = F("Kunigundenweg");
break;
}
case 196454:
{
returnValue = F("Kunigunder Str.");
break;
}
case 196455:
{
returnValue = F("Kunigundestr.");
break;
}
case 196456:
{
returnValue = F("Kunigundeweg");
break;
}
case 196457:
{
returnValue = F("Kunisrainweg");
break;
}
case 196458:
{
returnValue = F("Kunissastr.");
break;
}
case 196459:
{
returnValue = F("Kunitzburgweg");
break;
}
case 196460:
{
returnValue = F("Kunitzer Hirtengasse");
break;
}
case 196461:
{
returnValue = F("Kunitzer Loose");
break;
}
case 196462:
{
returnValue = F("Kunitzer Str.");
break;
}
case 196463:
{
returnValue = F("Kunitzkyweg");
break;
}
case 196464:
{
returnValue = F("Kunkelberg");
break;
}
case 196465:
{
returnValue = F("Kunkelgasse");
break;
}
case 196466:
{
returnValue = F("Kunkelhaltergasse");
break;
}
case 196467:
{
returnValue = F("Kunkelring");
break;
}
case 196468:
{
returnValue = F("Kunkemühlenweg");
break;
}
case 196469:
{
returnValue = F("Kunkenbecke");
break;
}
case 196470:
{
returnValue = F("Kunkenvenne");
break;
}
case 196471:
{
returnValue = F("Kunkheide");
break;
}
case 196472:
{
returnValue = F("Kunnegasse");
break;
}
case 196473:
{
returnValue = F("Kunnersbachstr.");
break;
}
case 196474:
{
returnValue = F("Kunnersbachweg");
break;
}
case 196475:
{
returnValue = F("Kunnersbrunnweg");
break;
}
case 196476:
{
returnValue = F("Kunnersdorfer Str.");
break;
}
case 196477:
{
returnValue = F("Kunnersteinweg");
break;
}
case 196478:
{
returnValue = F("Kunnerwitzer Str.");
break;
}
case 196479:
{
returnValue = F("Kunneweg");
break;
}
case 196480:
{
returnValue = F("Kuno-Dietrich-Siedlung");
break;
}
case 196481:
{
returnValue = F("Kuno-Fischer-Ring");
break;
}
case 196482:
{
returnValue = F("Kuno-Hanke-Weg");
break;
}
case 196483:
{
returnValue = F("Kuno-Liesenberg-Kehre");
break;
}
case 196484:
{
returnValue = F("Kuno-Riecke-Str.");
break;
}
case 196485:
{
returnValue = F("Kuno-von-Hagen-Str.");
break;
}
case 196486:
{
returnValue = F("Kunobrücke");
break;
}
case 196487:
{
returnValue = F("Kunohof");
break;
}
case 196488:
{
returnValue = F("Kunosteg");
break;
}
case 196489:
{
returnValue = F("Kunosteinstr.");
break;
}
case 196490:
{
returnValue = F("Kunostr.");
break;
}
case 196491:
{
returnValue = F("Kunoweiher");
break;
}
case 196492:
{
returnValue = F("Kunower Birkenweg");
break;
}
case 196493:
{
returnValue = F("Kunower Dorfstr.");
break;
}
case 196494:
{
returnValue = F("Kunower Postweg");
break;
}
case 196495:
{
returnValue = F("Kunower Steege");
break;
}
case 196496:
{
returnValue = F("Kunower Str.");
break;
}
case 196497:
{
returnValue = F("Kunower Weg");
break;
}
case 196498:
{
returnValue = F("Kunrauer Chaussee");
break;
}
case 196499:
{
returnValue = F("Kunrauer Str.");
break;
}
case 196500:
{
returnValue = F("Kunrauer Weg");
break;
}
case 196501:
{
returnValue = F("Kunreuth");
break;
}
case 196502:
{
returnValue = F("Kunst an der Strasse");
break;
}
case 196503:
{
returnValue = F("Kunst mit Bäumen");
break;
}
case 196504:
{
returnValue = F("Kunst-Fischer-Gasse");
break;
}
case 196505:
{
returnValue = F("Kunstbergstr.");
break;
}
case 196506:
{
returnValue = F("Kunstbucht");
break;
}
case 196507:
{
returnValue = F("Kunstdorfer Str.");
break;
}
case 196508:
{
returnValue = F("Kunsterspring");
break;
}
case 196509:
{
returnValue = F("Kunstgarten");
break;
}
case 196510:
{
returnValue = F("Kunstgasse");
break;
}
case 196511:
{
returnValue = F("Kunstgrabenweg");
break;
}
case 196512:
{
returnValue = F("Kunsthausweg");
break;
}
case 196513:
{
returnValue = F("Kunstlichtung");
break;
}
case 196514:
{
returnValue = F("Kunstmühle");
break;
}
case 196515:
{
returnValue = F("Kunstmühlenweg");
break;
}
case 196516:
{
returnValue = F("Kunstmühlestr.");
break;
}
case 196517:
{
returnValue = F("Kunstmühleweg");
break;
}
case 196518:
{
returnValue = F("Kunstmühlstr.");
break;
}
case 196519:
{
returnValue = F("Kunstpark Nadj & Rabsch");
break;
}
case 196520:
{
returnValue = F("Kunstpfad");
break;
}
case 196521:
{
returnValue = F("Kunstpfeifergasse");
break;
}
case 196522:
{
returnValue = F("Kunstschacht");
break;
}
case 196523:
{
returnValue = F("Kunststoff-Industrie-Str.");
break;
}
case 196524:
{
returnValue = F("Kunststr.");
break;
}
case 196525:
{
returnValue = F("Kunstwald Teutoburgia");
break;
}
case 196526:
{
returnValue = F("Kunstweg");
break;
}
case 196527:
{
returnValue = F("Kunstwerk Carlshütte");
break;
}
case 196528:
{
returnValue = F("Kunstwiesenweg");
break;
}
case 196529:
{
returnValue = F("Kunterhofsweg");
break;
}
case 196530:
{
returnValue = F("Kunterschaft");
break;
}
case 196531:
{
returnValue = F("Kunterstr.");
break;
}
case 196532:
{
returnValue = F("Kuntersweg");
break;
}
case 196533:
{
returnValue = F("Kunterweg");
break;
}
case 196534:
{
returnValue = F("Kuntsdorf");
break;
}
case 196535:
{
returnValue = F("Kuntzengasse");
break;
}
case 196536:
{
returnValue = F("Kuntzestr.");
break;
}
case 196537:
{
returnValue = F("Kuntzscher Garten");
break;
}
case 196538:
{
returnValue = F("Kunyszstr.");
break;
}
case 196539:
{
returnValue = F("Kunz-von-Kauffungen-Weg");
break;
}
case 196540:
{
returnValue = F("Kunz-von-der-Rosen-Str.");
break;
}
case 196541:
{
returnValue = F("Kunzacher Weg");
break;
}
case 196542:
{
returnValue = F("Kunze Pätche");
break;
}
case 196543:
{
returnValue = F("Kunze-Knorr-Str.");
break;
}
case 196544:
{
returnValue = F("Kunze-Schlie-Weg");
break;
}
case 196545:
{
returnValue = F("Kunzeckstr.");
break;
}
case 196546:
{
returnValue = F("Kunzegasse");
break;
}
case 196547:
{
returnValue = F("Kunzelfelderhuf");
break;
}
case 196548:
{
returnValue = F("Kunzelmannweg");
break;
}
case 196549:
{
returnValue = F("Kunzelweg");
break;
}
case 196550:
{
returnValue = F("Kunzen Äckerle");
break;
}
case 196551:
{
returnValue = F("Kunzenbacher Str.");
break;
}
case 196552:
{
returnValue = F("Kunzenbachsweg");
break;
}
case 196553:
{
returnValue = F("Kunzenberg");
break;
}
case 196554:
{
returnValue = F("Kunzendorfer Str.");
break;
}
case 196555:
{
returnValue = F("Kunzengasse");
break;
}
case 196556:
{
returnValue = F("Kunzenhahn");
break;
}
case 196557:
{
returnValue = F("Kunzental");
break;
}
case 196558:
{
returnValue = F("Kunzenweg");
break;
}
case 196559:
{
returnValue = F("Kunzer Marktweg");
break;
}
case 196560:
{
returnValue = F("Kunzes Weg");
break;
}
case 196561:
{
returnValue = F("Kunzestr.");
break;
}
case 196562:
{
returnValue = F("Kunzgutstr.");
break;
}
case 196563:
{
returnValue = F("Kunznickelstr.");
break;
}
case 196564:
{
returnValue = F("Kunzstr.");
break;
}
case 196565:
{
returnValue = F("Kunzweg");
break;
}
case 196566:
{
returnValue = F("Kunzwerdaer Str.");
break;
}
case 196567:
{
returnValue = F("Kuopiostr.");
break;
}
case 196568:
{
returnValue = F("Kupenwarf");
break;
}
case 196569:
{
returnValue = F("Kuperkamp");
break;
}
case 196570:
{
returnValue = F("Kupfenweg");
break;
}
case 196571:
{
returnValue = F("Kupfer Str.");
break;
}
case 196572:
{
returnValue = F("Kupfer-Wein-Str.");
break;
}
case 196573:
{
returnValue = F("Kupferanger");
break;
}
case 196574:
{
returnValue = F("Kupferbachweg");
break;
}
case 196575:
{
returnValue = F("Kupferberg");
break;
}
case 196576:
{
returnValue = F("Kupferbergstr.");
break;
}
case 196577:
{
returnValue = F("Kupferbergsweg");
break;
}
case 196578:
{
returnValue = F("Kupferbergwäldchen");
break;
}
case 196579:
{
returnValue = F("Kupferfeld");
break;
}
case 196580:
{
returnValue = F("Kupferfeldweg");
break;
}
case 196581:
{
returnValue = F("Kupfergasse");
break;
}
case 196582:
{
returnValue = F("Kupfergraben");
break;
}
case 196583:
{
returnValue = F("Kupfergrube");
break;
}
case 196584:
{
returnValue = F("Kupfergruben");
break;
}
case 196585:
{
returnValue = F("Kupfergrubenweg");
break;
}
case 196586:
{
returnValue = F("Kupfergrund");
break;
}
case 196587:
{
returnValue = F("Kupferhahn");
break;
}
case 196588:
{
returnValue = F("Kupferhaldenweg");
break;
}
case 196589:
{
returnValue = F("Kupferhammer");
break;
}
case 196590:
{
returnValue = F("Kupferhammergäßchen");
break;
}
case 196591:
{
returnValue = F("Kupferhammerstr.");
break;
}
case 196592:
{
returnValue = F("Kupferhammerweg");
break;
}
case 196593:
{
returnValue = F("Kupferhardtweg");
break;
}
case 196594:
{
returnValue = F("Kupferhausbrücke");
break;
}
case 196595:
{
returnValue = F("Kupferheckenweg");
break;
}
case 196596:
{
returnValue = F("Kupferheckstr.");
break;
}
case 196597:
{
returnValue = F("Kupferholzstr.");
break;
}
case 196598:
{
returnValue = F("Kupferhälde");
break;
}
case 196599:
{
returnValue = F("Kupferhütte");
break;
}
case 196600:
{
returnValue = F("Kupferkaule");
break;
}
case 196601:
{
returnValue = F("Kupferkaute");
break;
}
case 196602:
{
returnValue = F("Kupferkuhle");
break;
}
case 196603:
{
returnValue = F("Kupferleithenweg");
break;
}
case 196604:
{
returnValue = F("Kupferlohr");
break;
}
case 196605:
{
returnValue = F("Kupfermoor");
break;
}
case 196606:
{
returnValue = F("Kupfermühle");
break;
}
case 196607:
{
returnValue = F("Kupfermühlenberg");
break;
}
case 196608:
{
returnValue = F("Kupfermühlenkamp");
break;
}
case 196609:
{
returnValue = F("Kupfermühlenweg");
break;
}
case 196610:
{
returnValue = F("Kupfermühler Weg");
break;
}
case 196611:
{
returnValue = F("Kupfernagel");
break;
}
case 196612:
{
returnValue = F("Kupfernelkenweg");
break;
}
case 196613:
{
returnValue = F("Kupferroser Weg");
break;
}
case 196614:
{
returnValue = F("Kupferschlage");
break;
}
case 196615:
{
returnValue = F("Kupferschmidstr.");
break;
}
case 196616:
{
returnValue = F("Kupferschmied-Str.");
break;
}
case 196617:
{
returnValue = F("Kupferschmiede");
break;
}
case 196618:
{
returnValue = F("Kupferschmiedegang");
break;
}
case 196619:
{
returnValue = F("Kupferschmiedegasse");
break;
}
case 196620:
{
returnValue = F("Kupferschmiedeweg");
break;
}
case 196621:
{
returnValue = F("Kupferschmiedgasse");
break;
}
case 196622:
{
returnValue = F("Kupferschmiedstr.");
break;
}
case 196623:
{
returnValue = F("Kupferschneise");
break;
}
case 196624:
{
returnValue = F("Kupfersgarten");
break;
}
case 196625:
{
returnValue = F("Kupfersgasse");
break;
}
case 196626:
{
returnValue = F("Kupfersiefer Talweg");
break;
}
case 196627:
{
returnValue = F("Kupfersteig");
break;
}
case 196628:
{
returnValue = F("Kupfersteinstr.");
break;
}
case 196629:
{
returnValue = F("Kupferstr.");
break;
}
case 196630:
{
returnValue = F("Kupfersuhler Str.");
break;
}
case 196631:
{
returnValue = F("Kupfersuhler Weg");
break;
}
case 196632:
{
returnValue = F("Kupfertalweg");
break;
}
case 196633:
{
returnValue = F("Kupferteichring");
break;
}
case 196634:
{
returnValue = F("Kupfertorplatz");
break;
}
case 196635:
{
returnValue = F("Kupfertorstr.");
break;
}
case 196636:
{
returnValue = F("Kupferweg");
break;
}
case 196637:
{
returnValue = F("Kupferwerkstr.");
break;
}
case 196638:
{
returnValue = F("Kupferwiesenstr.");
break;
}
case 196639:
{
returnValue = F("Kupferzeller Str.");
break;
}
case 196640:
{
returnValue = F("Kupfstr.");
break;
}
case 196641:
{
returnValue = F("Kuppatz");
break;
}
case 196642:
{
returnValue = F("Kuppelholzweg");
break;
}
case 196643:
{
returnValue = F("Kuppelnaustr.");
break;
}
case 196644:
{
returnValue = F("Kuppelsteinbad");
break;
}
case 196645:
{
returnValue = F("Kuppelweg");
break;
}
case 196646:
{
returnValue = F("Kuppelzenweg");
break;
}
case 196647:
{
returnValue = F("Kuppenblick");
break;
}
case 196648:
{
returnValue = F("Kuppendorf");
break;
}
case 196649:
{
returnValue = F("Kuppendorfer Str.");
break;
}
case 196650:
{
returnValue = F("Kuppenheimer Str.");
break;
}
case 196651:
{
returnValue = F("Kuppenstr.");
break;
}
case 196652:
{
returnValue = F("Kuppentiner Landweg");
break;
}
case 196653:
{
returnValue = F("Kuppentiner Weg");
break;
}
case 196654:
{
returnValue = F("Kuppenweg");
break;
}
case 196655:
{
returnValue = F("Kupper Weg");
break;
}
case 196656:
{
returnValue = F("Kuppermühlerweg");
break;
}
case 196657:
{
returnValue = F("Kupperstr.");
break;
}
case 196658:
{
returnValue = F("Kuppgasse");
break;
}
case 196659:
{
returnValue = F("Kuppinger Str.");
break;
}
case 196660:
{
returnValue = F("Kuppinger Weg");
break;
}
case 196661:
{
returnValue = F("Kuppweg");
break;
}
case 196662:
{
returnValue = F("Kur");
break;
}
case 196663:
{
returnValue = F("Kur Park");
break;
}
case 196664:
{
returnValue = F("Kur-Kölner-Str.");
break;
}
case 196665:
{
returnValue = F("Kur-Mainzer-Platz");
break;
}
case 196666:
{
returnValue = F("Kur-Terrain-Weg");
break;
}
case 196667:
{
returnValue = F("KurErlebnispark BÄREAL");
break;
}
case 196668:
{
returnValue = F("Kuracker");
break;
}
case 196669:
{
returnValue = F("Kurallee");
break;
}
case 196670:
{
returnValue = F("Kuranlage");
break;
}
case 196671:
{
returnValue = F("Kuranlagen");
break;
}
case 196672:
{
returnValue = F("Kuranstalt Jungborn");
break;
}
case 196673:
{
returnValue = F("Kurat-Luber-Weg");
break;
}
case 196674:
{
returnValue = F("Kurat-Ostler-Weg");
break;
}
case 196675:
{
returnValue = F("Kuratus-Fischer-Str.");
break;
}
case 196676:
{
returnValue = F("Kuratus-Schmidt-Str.");
break;
}
case 196677:
{
returnValue = F("Kuratus-Will-Str.");
break;
}
case 196678:
{
returnValue = F("Kurbad");
break;
}
case 196679:
{
returnValue = F("Kurbersdorf");
break;
}
case 196680:
{
returnValue = F("Kurbersdorfer Str.");
break;
}
case 196681:
{
returnValue = F("Kurbrunnenstr.");
break;
}
case 196682:
{
returnValue = F("Kurbrunnenweg");
break;
}
case 196683:
{
returnValue = F("Kurcenterstr.");
break;
}
case 196684:
{
returnValue = F("Kurd-Laßwitz-Weg");
break;
}
case 196685:
{
returnValue = F("Kuren Weg");
break;
}
case 196686:
{
returnValue = F("Kurenholtweg");
break;
}
case 196687:
{
returnValue = F("Kurf");
break;
}
case 196688:
{
returnValue = F("Kurfer Str.");
break;
}
case 196689:
{
returnValue = F("Kurfürst-Balduin-Str.");
break;
}
case 196690:
{
returnValue = F("Kurfürst-Dietrich-Str.");
break;
}
case 196691:
{
returnValue = F("Kurfürst-Eppstein-Ring");
break;
}
case 196692:
{
returnValue = F("Kurfürst-Heinrich-Str.");
break;
}
case 196693:
{
returnValue = F("Kurfürst-Joachim-Str.");
break;
}
case 196694:
{
returnValue = F("Kurfürst-Karl-Theodor-Str.");
break;
}
case 196695:
{
returnValue = F("Kurfürst-Max-Siedlung");
break;
}
case 196696:
{
returnValue = F("Kurfürst-Maximilian-Str.");
break;
}
case 196697:
{
returnValue = F("Kurfürst-Wilhelm-Str.");
break;
}
case 196698:
{
returnValue = F("Kurfürsten Geräumt");
break;
}
case 196699:
{
returnValue = F("Kurfürstenallee");
break;
}
case 196700:
{
returnValue = F("Kurfürstenbadstr.");
break;
}
case 196701:
{
returnValue = F("Kurfürstenbrücke");
break;
}
case 196702:
{
returnValue = F("Kurfürstendamm");
break;
}
case 196703:
{
returnValue = F("Kurfürstengasse");
break;
}
case 196704:
{
returnValue = F("Kurfürstenpark");
break;
}
case 196705:
{
returnValue = F("Kurfürstenring");
break;
}
case 196706:
{
returnValue = F("Kurfürstenspitzweg");
break;
}
case 196707:
{
returnValue = F("Kurfürstenstr.");
break;
}
case 196708:
{
returnValue = F("Kurfürstenterrasse");
break;
}
case 196709:
{
returnValue = F("Kurfürstenwall");
break;
}
case 196710:
{
returnValue = F("Kurfürstenweg");
break;
}
case 196711:
{
returnValue = F("Kurfürstenwiese");
break;
}
case 196712:
{
returnValue = F("Kurfürstin-Amalie-Platz");
break;
}
case 196713:
{
returnValue = F("Kurfürstinstr.");
break;
}
case 196714:
{
returnValue = F("Kurgarten");
break;
}
case 196715:
{
returnValue = F("Kurgarten - Syberg - Park");
break;
}
case 196716:
{
returnValue = F("Kurgarten Baiersbronn-Oberdorf");
break;
}
case 196717:
{
returnValue = F("Kurgarten Baiersbronn-Unterdorf");
break;
}
case 196718:
{
returnValue = F("Kurgarten Grille");
break;
}
case 196719:
{
returnValue = F("Kurgarten Karlstein");
break;
}
case 196720:
{
returnValue = F("Kurgarten Wertach");
break;
}
case 196721:
{
returnValue = F("Kurgartenallee");
break;
}
case 196722:
{
returnValue = F("Kurgartenblick");
break;
}
case 196723:
{
returnValue = F("Kurgartenstr.");
break;
}
case 196724:
{
returnValue = F("Kurgartenweg");
break;
}
case 196725:
{
returnValue = F("Kurgrenzweg");
break;
}
case 196726:
{
returnValue = F("Kurhagen");
break;
}
case 196727:
{
returnValue = F("Kurhaus");
break;
}
case 196728:
{
returnValue = F("Kurhausbrink");
break;
}
case 196729:
{
returnValue = F("Kurhausdamm");
break;
}
case 196730:
{
returnValue = F("Kurhausplatz");
break;
}
case 196731:
{
returnValue = F("Kurhausstr.");
break;
}
case 196732:
{
returnValue = F("Kurhaustr.");
break;
}
case 196733:
{
returnValue = F("Kurhausweg");
break;
}
case 196734:
{
returnValue = F("Kurheimring");
break;
}
case 196735:
{
returnValue = F("Kurheimweg");
break;
}
case 196736:
{
returnValue = F("Kurhessenplatz");
break;
}
case 196737:
{
returnValue = F("Kurhessenstr.");
break;
}
case 196738:
{
returnValue = F("Kurhessenweg");
break;
}
case 196739:
{
returnValue = F("Kurhofer Str.");
break;
}
case 196740:
{
returnValue = F("Kurhutweg");
break;
}
case 196741:
{
returnValue = F("Kurie");
break;
}
case 196742:
{
returnValue = F("Kurierstr.");
break;
}
case 196743:
{
returnValue = F("Kurierweg");
break;
}
case 196744:
{
returnValue = F("Kuriswaldweg");
break;
}
case 196745:
{
returnValue = F("Kurkamp");
break;
}
case 196746:
{
returnValue = F("Kurkölner Str.");
break;
}
case 196747:
{
returnValue = F("Kurkölner Weg");
break;
}
case 196748:
{
returnValue = F("Kurkölnische Str.");
break;
}
case 196749:
{
returnValue = F("Kurlandstr.");
break;
}
case 196750:
{
returnValue = F("Kurlandweg");
break;
}
case 196751:
{
returnValue = F("Kurler Str.");
break;
}
case 196752:
{
returnValue = F("Kurleshauweg");
break;
}
case 196753:
{
returnValue = F("Kurländer Ring");
break;
}
case 196754:
{
returnValue = F("Kurmainzer Ring");
break;
}
case 196755:
{
returnValue = F("Kurmainzer Str.");
break;
}
case 196756:
{
returnValue = F("Kurmainzring");
break;
}
case 196757:
{
returnValue = F("Kurmainzstr.");
break;
}
case 196758:
{
returnValue = F("Kurmainzweg");
break;
}
case 196759:
{
returnValue = F("Kurmarkstr.");
break;
}
case 196760:
{
returnValue = F("Kurmeile");
break;
}
case 196761:
{
returnValue = F("Kurmärker Str.");
break;
}
case 196762:
{
returnValue = F("Kurmärkische Str.");
break;
}
case 196763:
{
returnValue = F("Kurnethweg");
break;
}
case 196764:
{
returnValue = F("Kurort Oberwiesenthal, Am Bahnhof");
break;
}
case 196765:
{
returnValue = F("Kurpark");
break;
}
case 196766:
{
returnValue = F("Kurpark Bad Feilnbach");
break;
}
case 196767:
{
returnValue = F("Kurpark Bad Holzhausen");
break;
}
case 196768:
{
returnValue = F("Kurpark Bad Klosterlausnitz");
break;
}
case 196769:
{
returnValue = F("Kurpark Bad Laasphe");
break;
}
case 196770:
{
returnValue = F("Kurpark Bad Laer");
break;
}
case 196771:
{
returnValue = F("Kurpark Bad Orb");
break;
}
case 196772:
{
returnValue = F("Kurpark Bad Salzhausen");
break;
}
case 196773:
{
returnValue = F("Kurpark Bad Tölz");
break;
}
case 196774:
{
returnValue = F("Kurpark Bad-Rippoldsau");
break;
}
case 196775:
{
returnValue = F("Kurpark Bald Salzig");
break;
}
case 196776:
{
returnValue = F("Kurpark Bismarckhöhe");
break;
}
case 196777:
{
returnValue = F("Kurpark Bärenfels");
break;
}
case 196778:
{
returnValue = F("Kurpark Bärenplatz");
break;
}
case 196779:
{
returnValue = F("Kurpark Dahn");
break;
}
case 196780:
{
returnValue = F("Kurpark Erlauzwiesel");
break;
}
case 196781:
{
returnValue = F("Kurpark Friedensberg");
break;
}
case 196782:
{
returnValue = F("Kurpark Grainau");
break;
}
case 196783:
{
returnValue = F("Kurpark Grassau");
break;
}
case 196784:
{
returnValue = F("Kurpark Hahn, Stadtwald");
break;
}
case 196785:
{
returnValue = F("Kurpark Herrngarten");
break;
}
case 196786:
{
returnValue = F("Kurpark Hesselbach");
break;
}
case 196787:
{
returnValue = F("Kurpark Hüllrod");
break;
}
case 196788:
{
returnValue = F("Kurpark Kreischa");
break;
}
case 196789:
{
returnValue = F("Kurpark Krün");
break;
}
case 196790:
{
returnValue = F("Kurpark Lautenthal");
break;
}
case 196791:
{
returnValue = F("Kurpark Mitteltal");
break;
}
case 196792:
{
returnValue = F("Kurpark Mölln");
break;
}
case 196793:
{
returnValue = F("Kurpark Nümbrecht");
break;
}
case 196794:
{
returnValue = F("Kurpark Oberhof");
break;
}
case 196795:
{
returnValue = F("Kurpark Obertal");
break;
}
case 196796:
{
returnValue = F("Kurpark Ost");
break;
}
case 196797:
{
returnValue = F("Kurpark Oy");
break;
}
case 196798:
{
returnValue = F("Kurpark Parkklinik Bad Rothenfelde");
break;
}
case 196799:
{
returnValue = F("Kurpark Puit");
break;
}
case 196800:
{
returnValue = F("Kurpark Scharbeutz");
break;
}
case 196801:
{
returnValue = F("Kurpark Schmiedinghausen");
break;
}
case 196802:
{
returnValue = F("Kurpark Thiesow");
break;
}
case 196803:
{
returnValue = F("Kurpark Waldbronn");
break;
}
case 196804:
{
returnValue = F("Kurpark Weiskirchen");
break;
}
case 196805:
{
returnValue = F("Kurpark Winkelhof");
break;
}
case 196806:
{
returnValue = F("Kurpark Wohlfühlgarten");
break;
}
case 196807:
{
returnValue = F("Kurpark am Burgberg");
break;
}
case 196808:
{
returnValue = F("Kurpark am Kur- und Bürgerhaus");
break;
}
case 196809:
{
returnValue = F("Kurpark am Kurhaus");
break;
}
case 196810:
{
returnValue = F("Kurpark am Mühlenteich");
break;
}
case 196811:
{
returnValue = F("Kurpark am Roseneck");
break;
}
case 196812:
{
returnValue = F("Kurpark der Sonnenseite");
break;
}
case 196813:
{
returnValue = F("Kurpark im Wiesengrund");
break;
}
case 196814:
{
returnValue = F("Kurpark in den Westdünen");
break;
}
case 196815:
{
returnValue = F("Kurpark, Landschaftspark");
break;
}
case 196816:
{
returnValue = F("Kurpark/Rosenheimer Str.");
break;
}
case 196817:
{
returnValue = F("Kurpark/Skulpturenpark");
break;
}
case 196818:
{
returnValue = F("Kurparkallee");
break;
}
case 196819:
{
returnValue = F("Kurparkpromenade");
break;
}
case 196820:
{
returnValue = F("Kurparkring");
break;
}
case 196821:
{
returnValue = F("Kurparkstr.");
break;
}
case 196822:
{
returnValue = F("Kurparkweg");
break;
}
case 196823:
{
returnValue = F("Kurpfalzkreisel");
break;
}
case 196824:
{
returnValue = F("Kurpfalzpark");
break;
}
case 196825:
{
returnValue = F("Kurpfalzring");
break;
}
case 196826:
{
returnValue = F("Kurpfalzstr.");
break;
}
case 196827:
{
returnValue = F("Kurpfalzweg");
break;
}
case 196828:
{
returnValue = F("Kurpfälzer Hof");
break;
}
case 196829:
{
returnValue = F("Kurpfälzer Str.");
break;
}
case 196830:
{
returnValue = F("Kurpfälzer Weg");
break;
}
case 196831:
{
returnValue = F("Kurpfälzerstr.");
break;
}
case 196832:
{
returnValue = F("Kurplatz");
break;
}
case 196833:
{
returnValue = F("Kurpromenade");
break;
}
case 196834:
{
returnValue = F("Kurrick");
break;
}
case 196835:
{
returnValue = F("Kurring");
break;
}
case 196836:
{
returnValue = F("Kurrstr.");
break;
}
case 196837:
{
returnValue = F("Kursaalbrücke");
break;
}
case 196838:
{
returnValue = F("Kursdorfer Ring");
break;
}
case 196839:
{
returnValue = F("Kursdorfer Str.");
break;
}
case 196840:
{
returnValue = F("Kursiefener Berg");
break;
}
case 196841:
{
returnValue = F("Kursiefener Str.");
break;
}
case 196842:
{
returnValue = F("Kurstr.");
break;
}
case 196843:
{
returnValue = F("Kursächsische Postmeilensäule-Distanzsäule in Oschatz");
break;
}
case 196844:
{
returnValue = F("Kurt - Schumacher - Str.");
break;
}
case 196845:
{
returnValue = F("Kurt Eichler Weg");
break;
}
case 196846:
{
returnValue = F("Kurt Reinhard Pfad");
break;
}
case 196847:
{
returnValue = F("Kurt Wabbel Str.");
break;
}
case 196848:
{
returnValue = F("Kurt-Adam-Str.");
break;
}
case 196849:
{
returnValue = F("Kurt-Albrecht-Weg");
break;
}
case 196850:
{
returnValue = F("Kurt-Alder-Str.");
break;
}
case 196851:
{
returnValue = F("Kurt-Barthel-Str.");
break;
}
case 196852:
{
returnValue = F("Kurt-Becker-Str.");
break;
}
case 196853:
{
returnValue = F("Kurt-Benesch-Weg");
break;
}
case 196854:
{
returnValue = F("Kurt-Bennewitz-Str.");
break;
}
case 196855:
{
returnValue = F("Kurt-Berkner-Str.");
break;
}
case 196856:
{
returnValue = F("Kurt-Bittel-Str.");
break;
}
case 196857:
{
returnValue = F("Kurt-Brinck-Str.");
break;
}
case 196858:
{
returnValue = F("Kurt-Brunner-Str.");
break;
}
case 196859:
{
returnValue = F("Kurt-Bähr-Str.");
break;
}
case 196860:
{
returnValue = F("Kurt-Bürger-Str.");
break;
}
case 196861:
{
returnValue = F("Kurt-Eisner-Anlage");
break;
}
case 196862:
{
returnValue = F("Kurt-Eisner-Platz");
break;
}
case 196863:
{
returnValue = F("Kurt-Eisner-Str.");
break;
}
case 196864:
{
returnValue = F("Kurt-Engmann-Str.");
break;
}
case 196865:
{
returnValue = F("Kurt-Fahr-Str.");
break;
}
case 196866:
{
returnValue = F("Kurt-Fehrmann-Str.");
break;
}
case 196867:
{
returnValue = F("Kurt-Fischer-Weg");
break;
}
case 196868:
{
returnValue = F("Kurt-Flockert-Str.");
break;
}
case 196869:
{
returnValue = F("Kurt-Frank-Str.");
break;
}
case 196870:
{
returnValue = F("Kurt-Friedrich-Weg");
break;
}
case 196871:
{
returnValue = F("Kurt-Georg-Kiesinger Str.");
break;
}
case 196872:
{
returnValue = F("Kurt-Georg-Kiesinger-Str.");
break;
}
case 196873:
{
returnValue = F("Kurt-Glockzin-Str.");
break;
}
case 196874:
{
returnValue = F("Kurt-Gnettner-Ring");
break;
}
case 196875:
{
returnValue = F("Kurt-Golze-Weg");
break;
}
case 196876:
{
returnValue = F("Kurt-Große-Str.");
break;
}
case 196877:
{
returnValue = F("Kurt-Gscheidle-Str.");
break;
}
case 196878:
{
returnValue = F("Kurt-Göhre-Str.");
break;
}
case 196879:
{
returnValue = F("Kurt-Hafermalz-Str.");
break;
}
case 196880:
{
returnValue = F("Kurt-Hahn-Park");
break;
}
case 196881:
{
returnValue = F("Kurt-Hahn-Str.");
break;
}
case 196882:
{
returnValue = F("Kurt-Hahn-Weg");
break;
}
case 196883:
{
returnValue = F("Kurt-Handwerk-Str.");
break;
}
case 196884:
{
returnValue = F("Kurt-Hasse-Str.");
break;
}
case 196885:
{
returnValue = F("Kurt-Heilbut-Str.");
break;
}
case 196886:
{
returnValue = F("Kurt-Hein-Str.");
break;
}
case 196887:
{
returnValue = F("Kurt-Hepperlin-Str.");
break;
}
case 196888:
{
returnValue = F("Kurt-Hoffmann-Str.");
break;
}
case 196889:
{
returnValue = F("Kurt-Holzapfel-Str.");
break;
}
case 196890:
{
returnValue = F("Kurt-Hornschuh-Stieg");
break;
}
case 196891:
{
returnValue = F("Kurt-Huber-Allee");
break;
}
case 196892:
{
returnValue = F("Kurt-Huber-Ring");
break;
}
case 196893:
{
returnValue = F("Kurt-Huber-Str.");
break;
}
case 196894:
{
returnValue = F("Kurt-Huber-Weg");
break;
}
case 196895:
{
returnValue = F("Kurt-Hujer-Weg");
break;
}
case 196896:
{
returnValue = F("Kurt-Höbold-Str.");
break;
}
case 196897:
{
returnValue = F("Kurt-Kappel-Str.");
break;
}
case 196898:
{
returnValue = F("Kurt-Karich-Weg");
break;
}
case 196899:
{
returnValue = F("Kurt-Kautz-Str.");
break;
}
case 196900:
{
returnValue = F("Kurt-Kerschl-Str.");
break;
}
case 196901:
{
returnValue = F("Kurt-Keßler-Str.");
break;
}
case 196902:
{
returnValue = F("Kurt-Kinkel-Str.");
break;
}
case 196903:
{
returnValue = F("Kurt-Kittel-Ring");
break;
}
case 196904:
{
returnValue = F("Kurt-Kittelmann-Str.");
break;
}
case 196905:
{
returnValue = F("Kurt-Kluge-Str.");
break;
}
case 196906:
{
returnValue = F("Kurt-Koblitz-Ring");
break;
}
case 196907:
{
returnValue = F("Kurt-Koch-Str.");
break;
}
case 196908:
{
returnValue = F("Kurt-Kramer-Str.");
break;
}
case 196909:
{
returnValue = F("Kurt-Krause-Weg");
break;
}
case 196910:
{
returnValue = F("Kurt-Kresse-Str.");
break;
}
case 196911:
{
returnValue = F("Kurt-Köhler-Str.");
break;
}
case 196912:
{
returnValue = F("Kurt-Körber-Str.");
break;
}
case 196913:
{
returnValue = F("Kurt-Lange-Str.");
break;
}
case 196914:
{
returnValue = F("Kurt-Lattner-Ring");
break;
}
case 196915:
{
returnValue = F("Kurt-Lau-Weg");
break;
}
case 196916:
{
returnValue = F("Kurt-Lembcke-Weg");
break;
}
case 196917:
{
returnValue = F("Kurt-Lindemann-Str.");
break;
}
case 196918:
{
returnValue = F("Kurt-Lorbeer-Str.");
break;
}
case 196919:
{
returnValue = F("Kurt-Lutz-Str.");
break;
}
case 196920:
{
returnValue = F("Kurt-Löwenstein-Str.");
break;
}
case 196921:
{
returnValue = F("Kurt-Mauersberger-Str.");
break;
}
case 196922:
{
returnValue = F("Kurt-Meyer-Weg");
break;
}
case 196923:
{
returnValue = F("Kurt-Moosdorf-Str.");
break;
}
case 196924:
{
returnValue = F("Kurt-Mühlen-Str.");
break;
}
case 196925:
{
returnValue = F("Kurt-Müller-Graf-Platz");
break;
}
case 196926:
{
returnValue = F("Kurt-Nagel-Platz");
break;
}
case 196927:
{
returnValue = F("Kurt-Nagel-Str.");
break;
}
case 196928:
{
returnValue = F("Kurt-Nehrling-Str.");
break;
}
case 196929:
{
returnValue = F("Kurt-Neubert-Str.");
break;
}
case 196930:
{
returnValue = F("Kurt-Nonne-Weg");
break;
}
case 196931:
{
returnValue = F("Kurt-Ohlsen-Weg");
break;
}
case 196932:
{
returnValue = F("Kurt-Partzsch-Weg");
break;
}
case 196933:
{
returnValue = F("Kurt-Pause-Weg");
break;
}
case 196934:
{
returnValue = F("Kurt-Pchalek-Str.");
break;
}
case 196935:
{
returnValue = F("Kurt-Pester-Platz");
break;
}
case 196936:
{
returnValue = F("Kurt-Piehl-Str.");
break;
}
case 196937:
{
returnValue = F("Kurt-Pietzsch-Weg");
break;
}
case 196938:
{
returnValue = F("Kurt-Pohle-Str.");
break;
}
case 196939:
{
returnValue = F("Kurt-Pohle-Weg");
break;
}
case 196940:
{
returnValue = F("Kurt-Preuss-Weg");
break;
}
case 196941:
{
returnValue = F("Kurt-Rauffus-Str.");
break;
}
case 196942:
{
returnValue = F("Kurt-Rettig-Weg");
break;
}
case 196943:
{
returnValue = F("Kurt-Richter-Weg");
break;
}
case 196944:
{
returnValue = F("Kurt-Rohde-Platz");
break;
}
case 196945:
{
returnValue = F("Kurt-Sattler-Str.");
break;
}
case 196946:
{
returnValue = F("Kurt-Schaible-Str.");
break;
}
case 196947:
{
returnValue = F("Kurt-Scheffler-Weg");
break;
}
case 196948:
{
returnValue = F("Kurt-Schlosser-Str.");
break;
}
case 196949:
{
returnValue = F("Kurt-Schmücker-Platz");
break;
}
case 196950:
{
returnValue = F("Kurt-Schneider-Str.");
break;
}
case 196951:
{
returnValue = F("Kurt-Schröder-Str.");
break;
}
case 196952:
{
returnValue = F("Kurt-Schubert-Str.");
break;
}
case 196953:
{
returnValue = F("Kurt-Schuhmacher-Str.");
break;
}
case 196954:
{
returnValue = F("Kurt-Schumacher-Allee");
break;
}
case 196955:
{
returnValue = F("Kurt-Schumacher-Anlage");
break;
}
case 196956:
{
returnValue = F("Kurt-Schumacher-Platz");
break;
}
case 196957:
{
returnValue = F("Kurt-Schumacher-Ring");
break;
}
case 196958:
{
returnValue = F("Kurt-Schumacher-Str.");
break;
}
case 196959:
{
returnValue = F("Kurt-Schumacher-Weg");
break;
}
case 196960:
{
returnValue = F("Kurt-Schumann-Str.");
break;
}
case 196961:
{
returnValue = F("Kurt-Schwarzmann-Str.");
break;
}
case 196962:
{
returnValue = F("Kurt-Schwitters-Str.");
break;
}
case 196963:
{
returnValue = F("Kurt-Schäffer-Str.");
break;
}
case 196964:
{
returnValue = F("Kurt-Schönfelder-Str.");
break;
}
case 196965:
{
returnValue = F("Kurt-Senne-Weg");
break;
}
case 196966:
{
returnValue = F("Kurt-Sohns-Weg");
break;
}
case 196967:
{
returnValue = F("Kurt-Stein-Str.");
break;
}
case 196968:
{
returnValue = F("Kurt-Steinlen-Weg");
break;
}
case 196969:
{
returnValue = F("Kurt-Stieler-Str.");
break;
}
case 196970:
{
returnValue = F("Kurt-Ständer-Str.");
break;
}
case 196971:
{
returnValue = F("Kurt-Stöbe-Str.");
break;
}
case 196972:
{
returnValue = F("Kurt-Tietze-Str.");
break;
}
case 196973:
{
returnValue = F("Kurt-Tucholsky-Ring");
break;
}
case 196974:
{
returnValue = F("Kurt-Tucholsky-Str.");
break;
}
case 196975:
{
returnValue = F("Kurt-Tucholsky-Weg");
break;
}
case 196976:
{
returnValue = F("Kurt-Unruh-Ring");
break;
}
case 196977:
{
returnValue = F("Kurt-Vittinghoff-Strraße");
break;
}
case 196978:
{
returnValue = F("Kurt-Vogelsang-Str.");
break;
}
case 196979:
{
returnValue = F("Kurt-Vollmer-Ring");
break;
}
case 196980:
{
returnValue = F("Kurt-Wabbel-Str.");
break;
}
case 196981:
{
returnValue = F("Kurt-Weill-Str.");
break;
}
case 196982:
{
returnValue = F("Kurt-Weill-Weg");
break;
}
case 196983:
{
returnValue = F("Kurt-Wein-Str.");
break;
}
case 196984:
{
returnValue = F("Kurt-Weirather-Str.");
break;
}
case 196985:
{
returnValue = F("Kurt-Wendt-Str.");
break;
}
case 196986:
{
returnValue = F("Kurt-Wilde-Str.");
break;
}
case 196987:
{
returnValue = F("Kurt-Woll-Weg");
break;
}
case 196988:
{
returnValue = F("Kurt-Wolters-Weg");
break;
}
case 196989:
{
returnValue = F("Kurt-Zimmermann-Str.");
break;
}
case 196990:
{
returnValue = F("Kurt-Zinn-Str.");
break;
}
case 196991:
{
returnValue = F("Kurt-am-Ende-Str.");
break;
}
case 196992:
{
returnValue = F("Kurt-von-Plettenberg-Weg");
break;
}
case 196993:
{
returnValue = F("Kurt-von-Unruh-Str.");
break;
}
case 196994:
{
returnValue = F("Kurt-von-Unruh-Weg");
break;
}
case 196995:
{
returnValue = F("Kurtalstr.");
break;
}
case 196996:
{
returnValue = F("Kurtelbeck");
break;
}
case 196997:
{
returnValue = F("Kurtelstr.");
break;
}
case 196998:
{
returnValue = F("Kurten Kamp");
break;
}
case 196999:
{
returnValue = F("Kurtenacker");
break;
}
case 197000:
{
returnValue = F("Kurtenbach");
break;
}
case 197001:
{
returnValue = F("Kurtenberg");
break;
}
case 197002:
{
returnValue = F("Kurtensiefen");
break;
}
case 197003:
{
returnValue = F("Kurterrainweg");
break;
}
case 197004:
{
returnValue = F("Kurtrierer Ring");
break;
}
case 197005:
{
returnValue = F("Kurtrierer Str.");
break;
}
case 197006:
{
returnValue = F("Kurtrierer Weg");
break;
}
case 197007:
{
returnValue = F("Kurtschatowweg");
break;
}
case 197008:
{
returnValue = F("Kurtschauer Weg");
break;
}
case 197009:
{
returnValue = F("Kurtscheider Str.");
break;
}
case 197010:
{
returnValue = F("Kurtschlager Dorfstr.");
break;
}
case 197011:
{
returnValue = F("Kurtsgehofen");
break;
}
case 197012:
{
returnValue = F("Kurtshagen");
break;
}
case 197013:
{
returnValue = F("Kurtshagener Str.");
break;
}
case 197014:
{
returnValue = F("Kurtsiefener Str.");
break;
}
case 197015:
{
returnValue = F("Kurtslochstr.");
break;
}
case 197016:
{
returnValue = F("Kurtstr.");
break;
}
case 197017:
{
returnValue = F("Kurve");
break;
}
case 197018:
{
returnValue = F("Kurvenschlagweg");
break;
}
case 197019:
{
returnValue = F("Kurvenstr.");
break;
}
case 197020:
{
returnValue = F("Kurvenweg");
break;
}
case 197021:
{
returnValue = F("Kurwaldweg");
break;
}
case 197022:
{
returnValue = F("Kurweg");
break;
}
case 197023:
{
returnValue = F("Kurwiesen");
break;
}
case 197024:
{
returnValue = F("Kurz Geräumt");
break;
}
case 197025:
{
returnValue = F("Kurz-Geländ-Weg");
break;
}
case 197026:
{
returnValue = F("Kurz-Geräumt");
break;
}
case 197027:
{
returnValue = F("Kurzacher Str.");
break;
}
case 197028:
{
returnValue = F("Kurzackerstr.");
break;
}
case 197029:
{
returnValue = F("Kurzackerweg");
break;
}
case 197030:
{
returnValue = F("Kurzberg");
break;
}
case 197031:
{
returnValue = F("Kurze Allee");
break;
}
case 197032:
{
returnValue = F("Kurze Badlow");
break;
}
case 197033:
{
returnValue = F("Kurze Baunastr.");
break;
}
case 197034:
{
returnValue = F("Kurze Baustr.");
break;
}
case 197035:
{
returnValue = F("Kurze Bergstr.");
break;
}
case 197036:
{
returnValue = F("Kurze Birken");
break;
}
case 197037:
{
returnValue = F("Kurze Bornschneise");
break;
}
case 197038:
{
returnValue = F("Kurze Brede");
break;
}
case 197039:
{
returnValue = F("Kurze Breede");
break;
}
case 197040:
{
returnValue = F("Kurze Breite");
break;
}
case 197041:
{
returnValue = F("Kurze Brän");
break;
}
case 197042:
{
returnValue = F("Kurze Brüdergasse");
break;
}
case 197043:
{
returnValue = F("Kurze Buche");
break;
}
case 197044:
{
returnValue = F("Kurze Bülten");
break;
}
case 197045:
{
returnValue = F("Kurze Bünd");
break;
}
case 197046:
{
returnValue = F("Kurze Bünte");
break;
}
case 197047:
{
returnValue = F("Kurze Drift");
break;
}
case 197048:
{
returnValue = F("Kurze Ecke");
break;
}
case 197049:
{
returnValue = F("Kurze Feldschneise");
break;
}
case 197050:
{
returnValue = F("Kurze Feldstr.");
break;
}
case 197051:
{
returnValue = F("Kurze Flegge");
break;
}
case 197052:
{
returnValue = F("Kurze Fohr");
break;
}
case 197053:
{
returnValue = F("Kurze Fuhrenstr.");
break;
}
case 197054:
{
returnValue = F("Kurze Gasse");
break;
}
case 197055:
{
returnValue = F("Kurze Georgstr.");
break;
}
case 197056:
{
returnValue = F("Kurze Halbe");
break;
}
case 197057:
{
returnValue = F("Kurze Hecke");
break;
}
case 197058:
{
returnValue = F("Kurze Heese");
break;
}
case 197059:
{
returnValue = F("Kurze Heide");
break;
}
case 197060:
{
returnValue = F("Kurze Hirschen");
break;
}
case 197061:
{
returnValue = F("Kurze Hohl");
break;
}
case 197062:
{
returnValue = F("Kurze Hohle");
break;
}
case 197063:
{
returnValue = F("Kurze Kamp");
break;
}
case 197064:
{
returnValue = F("Kurze Kesselstr.");
break;
}
case 197065:
{
returnValue = F("Kurze Kunde");
break;
}
case 197066:
{
returnValue = F("Kurze Luckenwalder Str.");
break;
}
case 197067:
{
returnValue = F("Kurze Maräcker");
break;
}
case 197068:
{
returnValue = F("Kurze Minte");
break;
}
case 197069:
{
returnValue = F("Kurze Münsterstr.");
break;
}
case 197070:
{
returnValue = F("Kurze Rade");
break;
}
case 197071:
{
returnValue = F("Kurze Reihe");
break;
}
case 197072:
{
returnValue = F("Kurze Richtstatt");
break;
}
case 197073:
{
returnValue = F("Kurze Rot");
break;
}
case 197074:
{
returnValue = F("Kurze Schneise");
break;
}
case 197075:
{
returnValue = F("Kurze Schulstr.");
break;
}
case 197076:
{
returnValue = F("Kurze Seite");
break;
}
case 197077:
{
returnValue = F("Kurze Steig");
break;
}
case 197078:
{
returnValue = F("Kurze Steige");
break;
}
case 197079:
{
returnValue = F("Kurze Stiege");
break;
}
case 197080:
{
returnValue = F("Kurze Str.");
break;
}
case 197081:
{
returnValue = F("Kurze Talstr.");
break;
}
case 197082:
{
returnValue = F("Kurze Trift");
break;
}
case 197083:
{
returnValue = F("Kurze Twiete");
break;
}
case 197084:
{
returnValue = F("Kurze Umbrüche");
break;
}
case 197085:
{
returnValue = F("Kurze Wallfahrt");
break;
}
case 197086:
{
returnValue = F("Kurze Wand");
break;
}
case 197087:
{
returnValue = F("Kurze Wanne");
break;
}
case 197088:
{
returnValue = F("Kurze Wehme");
break;
}
case 197089:
{
returnValue = F("Kurze Wende");
break;
}
case 197090:
{
returnValue = F("Kurze Wendung");
break;
}
case 197091:
{
returnValue = F("Kurze Wiesenstr.");
break;
}
case 197092:
{
returnValue = F("Kurzenbach");
break;
}
case 197093:
{
returnValue = F("Kurzenbachweg");
break;
}
case 197094:
{
returnValue = F("Kurzenberg");
break;
}
case 197095:
{
returnValue = F("Kurzenbergstr.");
break;
}
case 197096:
{
returnValue = F("Kurzenbergweg");
break;
}
case 197097:
{
returnValue = F("Kurzendorf");
break;
}
case 197098:
{
returnValue = F("Kurzenecker Str.");
break;
}
case 197099:
{
returnValue = F("Kurzenhülsen");
break;
}
case 197100:
{
returnValue = F("Kurzenlandskoppel");
break;
}
case 197101:
{
returnValue = F("Kurzenmoor");
break;
}
case 197102:
{
returnValue = F("Kurzenmoorer Chaussee");
break;
}
case 197103:
{
returnValue = F("Kurzenrainstr.");
break;
}
case 197104:
{
returnValue = F("Kurzenrieder Str.");
break;
}
case 197105:
{
returnValue = F("Kurzensteige");
break;
}
case 197106:
{
returnValue = F("Kurzental");
break;
}
case 197107:
{
returnValue = F("Kurzentalsweg");
break;
}
case 197108:
{
returnValue = F("Kurzentrum Im Quellenpark");
break;
}
case 197109:
{
returnValue = F("Kurzenweg");
break;
}
case 197110:
{
returnValue = F("Kurzer Acker");
break;
}
case 197111:
{
returnValue = F("Kurzer Brink");
break;
}
case 197112:
{
returnValue = F("Kurzer Damm");
break;
}
case 197113:
{
returnValue = F("Kurzer Esch");
break;
}
case 197114:
{
returnValue = F("Kurzer Flurweg");
break;
}
case 197115:
{
returnValue = F("Kurzer Flügel");
break;
}
case 197116:
{
returnValue = F("Kurzer Förthsweg");
break;
}
case 197117:
{
returnValue = F("Kurzer Gang");
break;
}
case 197118:
{
returnValue = F("Kurzer Geestweg");
break;
}
case 197119:
{
returnValue = F("Kurzer Graben");
break;
}
case 197120:
{
returnValue = F("Kurzer Grund");
break;
}
case 197121:
{
returnValue = F("Kurzer Hagen");
break;
}
case 197122:
{
returnValue = F("Kurzer Hoop");
break;
}
case 197123:
{
returnValue = F("Kurzer Kamp");
break;
}
case 197124:
{
returnValue = F("Kurzer Krummer Bruch");
break;
}
case 197125:
{
returnValue = F("Kurzer Loh");
break;
}
case 197126:
{
returnValue = F("Kurzer Moorweg");
break;
}
case 197127:
{
returnValue = F("Kurzer Morgen");
break;
}
case 197128:
{
returnValue = F("Kurzer Mühlweg");
break;
}
case 197129:
{
returnValue = F("Kurzer Ort");
break;
}
case 197130:
{
returnValue = F("Kurzer Redder");
break;
}
case 197131:
{
returnValue = F("Kurzer Rehm");
break;
}
case 197132:
{
returnValue = F("Kurzer Ried");
break;
}
case 197133:
{
returnValue = F("Kurzer Rundweg");
break;
}
case 197134:
{
returnValue = F("Kurzer Seifen");
break;
}
case 197135:
{
returnValue = F("Kurzer Steg");
break;
}
case 197136:
{
returnValue = F("Kurzer Steig");
break;
}
case 197137:
{
returnValue = F("Kurzer Steinweg");
break;
}
case 197138:
{
returnValue = F("Kurzer Stich");
break;
}
case 197139:
{
returnValue = F("Kurzer Stieg");
break;
}
case 197140:
{
returnValue = F("Kurzer Weg");
break;
}
case 197141:
{
returnValue = F("Kurzer Winkel");
break;
}
case 197142:
{
returnValue = F("Kurzerweg");
break;
}
case 197143:
{
returnValue = F("Kurzes Ende");
break;
}
case 197144:
{
returnValue = F("Kurzes Feld");
break;
}
case 197145:
{
returnValue = F("Kurzes Gewann");
break;
}
case 197146:
{
returnValue = F("Kurzes Roth");
break;
}
case 197147:
{
returnValue = F("Kurzes Tal");
break;
}
case 197148:
{
returnValue = F("Kurzesmäuerleweg");
break;
}
case 197149:
{
returnValue = F("Kurzestr.");
break;
}
case 197150:
{
returnValue = F("Kurzfeld");
break;
}
case 197151:
{
returnValue = F("Kurzgasse");
break;
}
case 197152:
{
returnValue = F("Kurzgeländstr.");
break;
}
case 197153:
{
returnValue = F("Kurzgewann");
break;
}
case 197154:
{
returnValue = F("Kurzgewannstr.");
break;
}
case 197155:
{
returnValue = F("Kurzhüttensteigle");
break;
}
case 197156:
{
returnValue = F("Kurzlandweg");
break;
}
case 197157:
{
returnValue = F("Kurzlipsdorf");
break;
}
case 197158:
{
returnValue = F("Kurzländstr.");
break;
}
case 197159:
{
returnValue = F("Kurzmittleweg");
break;
}
case 197160:
{
returnValue = F("Kurzmühle");
break;
}
case 197161:
{
returnValue = F("Kurzone am Busbahnhof");
break;
}
case 197162:
{
returnValue = F("Kurzr Gasse");
break;
}
case 197163:
{
returnValue = F("Kurzstr.");
break;
}
case 197164:
{
returnValue = F("Kurzsäge");
break;
}
case 197165:
{
returnValue = F("Kurzwalder Str.");
break;
}
case 197166:
{
returnValue = F("Kurzweg");
break;
}
case 197167:
{
returnValue = F("Kurzweil");
break;
}
case 197168:
{
returnValue = F("Kurzzeithalt Hort / Parkplatz Kirchgemeinde");
break;
}
case 197169:
{
returnValue = F("Kurzäckerstr.");
break;
}
case 197170:
{
returnValue = F("Kusarn");
break;
}
case 197171:
{
returnValue = F("Kusatsustr.");
break;
}
case 197172:
{
returnValue = F("Kuschelberg");
break;
}
case 197173:
{
returnValue = F("Kuschertstr.");
break;
}
case 197174:
{
returnValue = F("Kuschertweg");
break;
}
case 197175:
{
returnValue = F("Kuschweg");
break;
}
case 197176:
{
returnValue = F("Kuselbach");
break;
}
case 197177:
{
returnValue = F("Kuseler Str.");
break;
}
case 197178:
{
returnValue = F("Kuselweg");
break;
}
case 197179:
{
returnValue = F("Kuselwies");
break;
}
case 197180:
{
returnValue = F("Kusenborg");
break;
}
case 197181:
{
returnValue = F("Kusengäßchen");
break;
}
case 197182:
{
returnValue = F("Kusenhook");
break;
}
case 197183:
{
returnValue = F("Kusenpatt");
break;
}
case 197184:
{
returnValue = F("Kuseweg");
break;
}
case 197185:
{
returnValue = F("Kuseyer Bahnhofstr.");
break;
}
case 197186:
{
returnValue = F("Kuseyer Friedensstr.");
break;
}
case 197187:
{
returnValue = F("Kuseyer Str.");
break;
}
case 197188:
{
returnValue = F("Kuskoppermoor");
break;
}
case 197189:
{
returnValue = F("Kusselkamp");
break;
}
case 197190:
{
returnValue = F("Kusselweg");
break;
}
case 197191:
{
returnValue = F("Kussenberg");
break;
}
case 197192:
{
returnValue = F("Kussenhofstr.");
break;
}
case 197193:
{
returnValue = F("Kussersiedlung");
break;
}
case 197194:
{
returnValue = F("Kusserstr.");
break;
}
case 197195:
{
returnValue = F("Kussgässchen");
break;
}
case 197196:
{
returnValue = F("Kussiner Str.");
break;
}
case 197197:
{
returnValue = F("Kussower Weg");
break;
}
case 197198:
{
returnValue = F("Kussweg");
break;
}
case 197199:
{
returnValue = F("Kusterdinger Str.");
break;
}
case 197200:
{
returnValue = F("Kusterer Str.");
break;
}
case 197201:
{
returnValue = F("Kusterersweg");
break;
}
case 197202:
{
returnValue = F("Kustermannpark");
break;
}
case 197203:
{
returnValue = F("Kustermannstr.");
break;
}
case 197204:
{
returnValue = F("Kustoswiesen");
break;
}
case 197205:
{
returnValue = F("Kustrena");
break;
}
case 197206:
{
returnValue = F("Kutenholzer Str.");
break;
}
case 197207:
{
returnValue = F("Kutenholzer Weg");
break;
}
case 197208:
{
returnValue = F("Kuthestr.");
break;
}
case 197209:
{
returnValue = F("Kutiner Str.");
break;
}
case 197210:
{
returnValue = F("Kutschbergel");
break;
}
case 197211:
{
returnValue = F("Kutscheider Weg");
break;
}
case 197212:
{
returnValue = F("Kutschenbachweg");
break;
}
case 197213:
{
returnValue = F("Kutschenberg");
break;
}
case 197214:
{
returnValue = F("Kutschenrain");
break;
}
case 197215:
{
returnValue = F("Kutschenreuter Str.");
break;
}
case 197216:
{
returnValue = F("Kutschenreuterweg");
break;
}
case 197217:
{
returnValue = F("Kutschenreutherstr.");
break;
}
case 197218:
{
returnValue = F("Kutschenweg");
break;
}
case 197219:
{
returnValue = F("Kutschenweg (Neuwiesenschluchtweg)");
break;
}
case 197220:
{
returnValue = F("Kutscher Weg");
break;
}
case 197221:
{
returnValue = F("Kutscherberg");
break;
}
case 197222:
{
returnValue = F("Kutschergasse");
break;
}
case 197223:
{
returnValue = F("Kutscherhof");
break;
}
case 197224:
{
returnValue = F("Kutscherkurve");
break;
}
case 197225:
{
returnValue = F("Kutschers Weg");
break;
}
case 197226:
{
returnValue = F("Kutschersteig");
break;
}
case 197227:
{
returnValue = F("Kutscherstr.");
break;
}
case 197228:
{
returnValue = F("Kutscherweg");
break;
}
case 197229:
{
returnValue = F("Kutschstr.");
break;
}
case 197230:
{
returnValue = F("Kutschweg");
break;
}
case 197231:
{
returnValue = F("Kuttelgasse");
break;
}
case 197232:
{
returnValue = F("Kuttelpforte");
break;
}
case 197233:
{
returnValue = F("Kuttelweg");
break;
}
case 197234:
{
returnValue = F("Kutten");
break;
}
case 197235:
{
returnValue = F("Kuttenkauler Weg");
break;
}
case 197236:
{
returnValue = F("Kuttenkofen");
break;
}
case 197237:
{
returnValue = F("Kuttenthalmühle");
break;
}
case 197238:
{
returnValue = F("Kuttenweg");
break;
}
case 197239:
{
returnValue = F("Kutterauerhaldenweg");
break;
}
case 197240:
{
returnValue = F("Kutterlinger Weg");
break;
}
case 197241:
{
returnValue = F("Kutterweg");
break;
}
case 197242:
{
returnValue = F("Kutteweg");
break;
}
case 197243:
{
returnValue = F("Kutusowstr.");
break;
}
case 197244:
{
returnValue = F("Kutz");
break;
}
case 197245:
{
returnValue = F("Kutzbach");
break;
}
case 197246:
{
returnValue = F("Kutzbergerweg");
break;
}
case 197247:
{
returnValue = F("Kutzenberg");
break;
}
case 197248:
{
returnValue = F("Kutzenberger Str.");
break;
}
case 197249:
{
returnValue = F("Kutzendorf");
break;
}
case 197250:
{
returnValue = F("Kutzenhausener Str.");
break;
}
case 197251:
{
returnValue = F("Kutzerow");
break;
}
case 197252:
{
returnValue = F("Kutzersstege");
break;
}
case 197253:
{
returnValue = F("Kutzgasse");
break;
}
case 197254:
{
returnValue = F("Kutzhofer Str.");
break;
}
case 197255:
{
returnValue = F("Kutzhütte");
break;
}
case 197256:
{
returnValue = F("Kutzlebener Landstr.");
break;
}
case 197257:
{
returnValue = F("Kutzlebenstr.");
break;
}
case 197258:
{
returnValue = F("Kutzmühle");
break;
}
case 197259:
{
returnValue = F("Kutzower Str.");
break;
}
case 197260:
{
returnValue = F("Kutzschestr.");
break;
}
case 197261:
{
returnValue = F("Kuventhaler Ring");
break;
}
case 197262:
{
returnValue = F("Kuxberg");
break;
}
case 197263:
{
returnValue = F("Kuxburgstr.");
break;
}
case 197264:
{
returnValue = F("Kuxloher Weg");
break;
}
case 197265:
{
returnValue = F("Kuxstein");
break;
}
case 197266:
{
returnValue = F("Kuxwinkel");
break;
}
case 197267:
{
returnValue = F("Kuyckheide");
break;
}
case 197268:
{
returnValue = F("Kuzgräet");
break;
}
case 197269:
{
returnValue = F("Kußgasse");
break;
}
case 197270:
{
returnValue = F("Kußlgasse");
break;
}
case 197271:
{
returnValue = F("Kußmaulstr.");
break;
}
case 197272:
{
returnValue = F("Kußschneise");
break;
}
case 197273:
{
returnValue = F("Kußwinkel");
break;
}
case 197274:
{
returnValue = F("Kwischsteen");
break;
}
case 197275:
{
returnValue = F("Kybergstr.");
break;
}
case 197276:
{
returnValue = F("Kybitzstr.");
break;
}
case 197277:
{
returnValue = F("Kyburgstr.");
break;
}
case 197278:
{
returnValue = F("Kyffhäuser");
break;
}
case 197279:
{
returnValue = F("Kyffhäuser Kleinbahn");
break;
}
case 197280:
{
returnValue = F("Kyffhäuser Str.");
break;
}
case 197281:
{
returnValue = F("Kyffhäuser Weg");
break;
}
case 197282:
{
returnValue = F("Kyffhäuser-Kleinbahn");
break;
}
case 197283:
{
returnValue = F("Kyffhäuserstr.");
break;
}
case 197284:
{
returnValue = F("Kyffhäuserweg");
break;
}
case 197285:
{
returnValue = F("Kyhnaer Hauptstr.");
break;
}
case 197286:
{
returnValue = F("Kyhnaer Weg");
break;
}
case 197287:
{
returnValue = F("Kykerweg");
break;
}
case 197288:
{
returnValue = F("Kylische Str.");
break;
}
case 197289:
{
returnValue = F("Kyll-Lieser-Weg");
break;
}
case 197290:
{
returnValue = F("Kyll-Radweg");
break;
}
case 197291:
{
returnValue = F("Kyllbergstr.");
break;
}
case 197292:
{
returnValue = F("Kyllblick");
break;
}
case 197293:
{
returnValue = F("Kyllburger Str.");
break;
}
case 197294:
{
returnValue = F("Kyllburgweilerstr.");
break;
}
case 197295:
{
returnValue = F("Kyller Weg");
break;
}
case 197296:
{
returnValue = F("Kyllstr.");
break;
}
case 197297:
{
returnValue = F("Kylltal");
break;
}
case 197298:
{
returnValue = F("Kylltalstr.");
break;
}
case 197299:
{
returnValue = F("Kylltalweg");
break;
}
case 197300:
{
returnValue = F("Kyllweg");
break;
}
case 197301:
{
returnValue = F("Kynastweg");
break;
}
case 197302:
{
returnValue = F("Kyreinstr.");
break;
}
case 197303:
{
returnValue = F("Kyreinweg");
break;
}
case 197304:
{
returnValue = F("Kyrill-Fahrweg");
break;
}
case 197305:
{
returnValue = F("Kyrillplatz");
break;
}
case 197306:
{
returnValue = F("Kyrillweg");
break;
}
case 197307:
{
returnValue = F("Kyrionstr.");
break;
}
case 197308:
{
returnValue = F("Kyritz");
break;
}
case 197309:
{
returnValue = F("Kyritzer Allee");
break;
}
case 197310:
{
returnValue = F("Kyritzer Chaussee");
break;
}
case 197311:
{
returnValue = F("Kyritzer Str.");
break;
}
case 197312:
{
returnValue = F("Kyritzer Weg");
break;
}
case 197313:
{
returnValue = F("Kyselhäuser Str.");
break;
}
case 197314:
{
returnValue = F("Kálmánstr.");
break;
}
case 197315:
{
returnValue = F("Kármánstr.");
break;
}
case 197316:
{
returnValue = F("Käbach");
break;
}
case 197317:
{
returnValue = F("Käbschütz");
break;
}
case 197318:
{
returnValue = F("Käbschütztaler Kreisel");
break;
}
case 197319:
{
returnValue = F("Kächelesleere");
break;
}
case 197320:
{
returnValue = F("Kächelestr.");
break;
}
case 197321:
{
returnValue = F("Kächeleweg");
break;
}
case 197322:
{
returnValue = F("Kächelwangstr.");
break;
}
case 197323:
{
returnValue = F("Käcklitz");
break;
}
case 197324:
{
returnValue = F("Kädelers Kamp");
break;
}
case 197325:
{
returnValue = F("Käferbeinstr.");
break;
}
case 197326:
{
returnValue = F("Käferberg");
break;
}
case 197327:
{
returnValue = F("Käferbergstr.");
break;
}
case 197328:
{
returnValue = F("Käferflugstr.");
break;
}
case 197329:
{
returnValue = F("Käfergasse");
break;
}
case 197330:
{
returnValue = F("Käferhainer Str.");
break;
}
case 197331:
{
returnValue = F("Käferholzstr.");
break;
}
case 197332:
{
returnValue = F("Käferholzweg");
break;
}
case 197333:
{
returnValue = F("Käferhölzlein");
break;
}
case 197334:
{
returnValue = F("Käferhölzleweg");
break;
}
case 197335:
{
returnValue = F("Käferlinger Str.");
break;
}
case 197336:
{
returnValue = F("Käferlohweg");
break;
}
case 197337:
{
returnValue = F("Käfernberg");
break;
}
case 197338:
{
returnValue = F("Käfernburger Steig");
break;
}
case 197339:
{
returnValue = F("Käfernburger Str.");
break;
}
case 197340:
{
returnValue = F("Käfernweg");
break;
}
case 197341:
{
returnValue = F("Käferpfad");
break;
}
case 197342:
{
returnValue = F("Käferplattenweg");
break;
}
case 197343:
{
returnValue = F("Käfersberger Weg");
break;
}
case 197344:
{
returnValue = F("Käfersbergweg");
break;
}
case 197345:
{
returnValue = F("Käferstieg");
break;
}
case 197346:
{
returnValue = F("Käferstr.");
break;
}
case 197347:
{
returnValue = F("Käfersulgen");
break;
}
case 197348:
{
returnValue = F("Käfertaler Steinweg");
break;
}
case 197349:
{
returnValue = F("Käfertaler Str.");
break;
}
case 197350:
{
returnValue = F("Käferweg");
break;
}
case 197351:
{
returnValue = F("Käferwiese");
break;
}
case 197352:
{
returnValue = F("Käfig");
break;
}
case 197353:
{
returnValue = F("Käfigeckenweg");
break;
}
case 197354:
{
returnValue = F("Käfiggasse");
break;
}
case 197355:
{
returnValue = F("Käfringhausen");
break;
}
case 197356:
{
returnValue = F("Kägsdorfer Landweg");
break;
}
case 197357:
{
returnValue = F("Kägsdorfer Str.");
break;
}
case 197358:
{
returnValue = F("Kählen");
break;
}
case 197359:
{
returnValue = F("Kählenweg");
break;
}
case 197360:
{
returnValue = F("Kählerkoppel");
break;
}
case 197361:
{
returnValue = F("Kählerstr.");
break;
}
case 197362:
{
returnValue = F("Kählingstr.");
break;
}
case 197363:
{
returnValue = F("Kählstorf");
break;
}
case 197364:
{
returnValue = F("Kählstorfer Weg");
break;
}
case 197365:
{
returnValue = F("Kähm");
break;
}
case 197366:
{
returnValue = F("Kähnelacker");
break;
}
case 197367:
{
returnValue = F("Kähnelgasse");
break;
}
case 197368:
{
returnValue = F("Kähnelweg");
break;
}
case 197369:
{
returnValue = F("Kähnerbergstr.");
break;
}
case 197370:
{
returnValue = F("Kähnerbuchwaldweg");
break;
}
case 197371:
{
returnValue = F("Kähnergäßle");
break;
}
case 197372:
{
returnValue = F("Kähnerlochweg");
break;
}
case 197373:
{
returnValue = F("Kähnermatt");
break;
}
case 197374:
{
returnValue = F("Kähnermatte");
break;
}
case 197375:
{
returnValue = F("Kähnert");
break;
}
case 197376:
{
returnValue = F("Kähnerweg");
break;
}
case 197377:
{
returnValue = F("Kähnitzscher Str.");
break;
}
case 197378:
{
returnValue = F("Kähnsdorfer Str.");
break;
}
case 197379:
{
returnValue = F("Kähnsdorfer Weg");
break;
}
case 197380:
{
returnValue = F("Käksweg");
break;
}
case 197381:
{
returnValue = F("Kälbchesweg");
break;
}
case 197382:
{
returnValue = F("Kälbelescheuerweg");
break;
}
case 197383:
{
returnValue = F("Kälbelsbergweg");
break;
}
case 197384:
{
returnValue = F("Kälberaispenweg");
break;
}
case 197385:
{
returnValue = F("Kälberanger");
break;
}
case 197386:
{
returnValue = F("Kälberauer Str.");
break;
}
case 197387:
{
returnValue = F("Kälberbacher Str.");
break;
}
case 197388:
{
returnValue = F("Kälberbachsweg");
break;
}
case 197389:
{
returnValue = F("Kälberberg");
break;
}
case 197390:
{
returnValue = F("Kälberbitze");
break;
}
case 197391:
{
returnValue = F("Kälberbreite");
break;
}
case 197392:
{
returnValue = F("Kälberbronner Steige");
break;
}
case 197393:
{
returnValue = F("Kälberbronner Str.");
break;
}
case 197394:
{
returnValue = F("Kälberbrook");
break;
}
case 197395:
{
returnValue = F("Kälberbruch");
break;
}
case 197396:
{
returnValue = F("Kälberbrücke");
break;
}
case 197397:
{
returnValue = F("Kälberbusch");
break;
}
case 197398:
{
returnValue = F("Kälberbühlweg");
break;
}
case 197399:
{
returnValue = F("Kälbergarten");
break;
}
case 197400:
{
returnValue = F("Kälbergasse");
break;
}
case 197401:
{
returnValue = F("Kälbergrund");
break;
}
case 197402:
{
returnValue = F("Kälbergässle");
break;
}
case 197403:
{
returnValue = F("Kälbergäßchen");
break;
}
case 197404:
{
returnValue = F("Kälbergäßle");
break;
}
case 197405:
{
returnValue = F("Kälberhof");
break;
}
case 197406:
{
returnValue = F("Kälberhübelweg");
break;
}
case 197407:
{
returnValue = F("Kälberhüttenweg");
break;
}
case 197408:
{
returnValue = F("Kälberkamp");
break;
}
case 197409:
{
returnValue = F("Kälberkampstr.");
break;
}
case 197410:
{
returnValue = F("Kälberkampsweg");
break;
}
case 197411:
{
returnValue = F("Kälberklamm");
break;
}
case 197412:
{
returnValue = F("Kälberkopfweg");
break;
}
case 197413:
{
returnValue = F("Kälberkoppel");
break;
}
case 197414:
{
returnValue = F("Kälberlöcherweg");
break;
}
case 197415:
{
returnValue = F("Kälbermahd");
break;
}
case 197416:
{
returnValue = F("Kälbermarkt");
break;
}
case 197417:
{
returnValue = F("Kälbermoor");
break;
}
case 197418:
{
returnValue = F("Kälbermättle");
break;
}
case 197419:
{
returnValue = F("Kälberpfad");
break;
}
case 197420:
{
returnValue = F("Kälberrähr");
break;
}
case 197421:
{
returnValue = F("Kälbersgrünweg");
break;
}
case 197422:
{
returnValue = F("Kälbersiek");
break;
}
case 197423:
{
returnValue = F("Kälbersteig");
break;
}
case 197424:
{
returnValue = F("Kälbersteinblick");
break;
}
case 197425:
{
returnValue = F("Kälbersteinstr.");
break;
}
case 197426:
{
returnValue = F("Kälbersteinweg");
break;
}
case 197427:
{
returnValue = F("Kälberstieg");
break;
}
case 197428:
{
returnValue = F("Kälberstr.");
break;
}
case 197429:
{
returnValue = F("Kälberstücksweg");
break;
}
case 197430:
{
returnValue = F("Kälbertalweg");
break;
}
case 197431:
{
returnValue = F("Kälberteich");
break;
}
case 197432:
{
returnValue = F("Kälberträngweg");
break;
}
case 197433:
{
returnValue = F("Kälbertshäuser Str.");
break;
}
case 197434:
{
returnValue = F("Kälberwaid");
break;
}
case 197435:
{
returnValue = F("Kälberweg");
break;
}
case 197436:
{
returnValue = F("Kälberweide");
break;
}
case 197437:
{
returnValue = F("Kälberweideweg");
break;
}
case 197438:
{
returnValue = F("Kälberweidweg");
break;
}
case 197439:
{
returnValue = F("Kälberwiese");
break;
}
case 197440:
{
returnValue = F("Kälberwiesenstr.");
break;
}
case 197441:
{
returnValue = F("Kälberwäldleweg");
break;
}
case 197442:
{
returnValue = F("Kälberzahl");
break;
}
case 197443:
{
returnValue = F("Kälberzeil");
break;
}
case 197444:
{
returnValue = F("Kälbingswiesenweg");
break;
}
case 197445:
{
returnValue = F("Kälblesgrabenweg");
break;
}
case 197446:
{
returnValue = F("Kälblesjägerweg");
break;
}
case 197447:
{
returnValue = F("Kälblesrainweg");
break;
}
case 197448:
{
returnValue = F("Kälbleweg");
break;
}
case 197449:
{
returnValue = F("Kälblingstr.");
break;
}
case 197450:
{
returnValue = F("Kälblingswiesenweg");
break;
}
case 197451:
{
returnValue = F("Kälinstr.");
break;
}
case 197452:
{
returnValue = F("Kälkstr.");
break;
}
case 197453:
{
returnValue = F("Källerstr.");
break;
}
case 197454:
{
returnValue = F("Kämenadenweg");
break;
}
case 197455:
{
returnValue = F("Kämergasse");
break;
}
case 197456:
{
returnValue = F("Kämerhöfer Str.");
break;
}
case 197457:
{
returnValue = F("Kämeritz");
break;
}
case 197458:
{
returnValue = F("Kämeritzer Weg");
break;
}
case 197459:
{
returnValue = F("Kämerscheider Str.");
break;
}
case 197460:
{
returnValue = F("Kämersheide");
break;
}
case 197461:
{
returnValue = F("Kämerstr.");
break;
}
case 197462:
{
returnValue = F("Kämertorstr.");
break;
}
case 197463:
{
returnValue = F("Kämmekenstr.");
break;
}
case 197464:
{
returnValue = F("Kämmelstr.");
break;
}
case 197465:
{
returnValue = F("Kämmelweg");
break;
}
case 197466:
{
returnValue = F("Kämmer");
break;
}
case 197467:
{
returnValue = F("Kämmerchenweg");
break;
}
case 197468:
{
returnValue = F("Kämmerei");
break;
}
case 197469:
{
returnValue = F("Kämmereihof");
break;
}
case 197470:
{
returnValue = F("Kämmereihude");
break;
}
case 197471:
{
returnValue = F("Kämmereihölzchen");
break;
}
case 197472:
{
returnValue = F("Kämmereistr.");
break;
}
case 197473:
{
returnValue = F("Kämmereiweg");
break;
}
case 197474:
{
returnValue = F("Kämmerer-Fremy-Str.");
break;
}
case 197475:
{
returnValue = F("Kämmerergasse");
break;
}
case 197476:
{
returnValue = F("Kämmererstr.");
break;
}
case 197477:
{
returnValue = F("Kämmererweg");
break;
}
case 197478:
{
returnValue = F("Kämmergasse");
break;
}
case 197479:
{
returnValue = F("Kämmerhof");
break;
}
case 197480:
{
returnValue = F("Kämmerich");
break;
}
case 197481:
{
returnValue = F("Kämmeritz");
break;
}
case 197482:
{
returnValue = F("Kämmeritzer Str.");
break;
}
case 197483:
{
returnValue = F("Kämmerle");
break;
}
case 197484:
{
returnValue = F("Kämmerlesweg");
break;
}
case 197485:
{
returnValue = F("Kämmern");
break;
}
case 197486:
{
returnValue = F("Kämmersmühle");
break;
}
case 197487:
{
returnValue = F("Kämmertsweg");
break;
}
case 197488:
{
returnValue = F("Kämmerweg");
break;
}
case 197489:
{
returnValue = F("Kämmerzeller Str.");
break;
}
case 197490:
{
returnValue = F("Kämmleweg");
break;
}
case 197491:
{
returnValue = F("Kämmritzer Weg");
break;
}
case 197492:
{
returnValue = F("Kämnitz");
break;
}
case 197493:
{
returnValue = F("Kämpchen");
break;
}
case 197494:
{
returnValue = F("Kämpchenheide");
break;
}
case 197495:
{
returnValue = F("Kämpchensgasse");
break;
}
case 197496:
{
returnValue = F("Kämpchensplatz");
break;
}
case 197497:
{
returnValue = F("Kämpchenstiege");
break;
}
case 197498:
{
returnValue = F("Kämpchenstr.");
break;
}
case 197499:
{
returnValue = F("Kämpchensweg");
break;
}
case 197500:
{
returnValue = F("Kämpchenweg");
break;
}
case 197501:
{
returnValue = F("Kämpchesweg");
break;
}
case 197502:
{
returnValue = F("Kämpe");
break;
}
case 197503:
{
returnValue = F("Kämpelgasse");
break;
}
case 197504:
{
returnValue = F("Kämpen");
break;
}
case 197505:
{
returnValue = F("Kämpen Ost");
break;
}
case 197506:
{
returnValue = F("Kämpen West");
break;
}
case 197507:
{
returnValue = F("Kämpenberg");
break;
}
case 197508:
{
returnValue = F("Kämpenbree");
break;
}
case 197509:
{
returnValue = F("Kämpener Dorfstr.");
break;
}
case 197510:
{
returnValue = F("Kämpenschmiede");
break;
}
case 197511:
{
returnValue = F("Kämpensiedlung");
break;
}
case 197512:
{
returnValue = F("Kämpenstieg");
break;
}
case 197513:
{
returnValue = F("Kämpenstr.");
break;
}
case 197514:
{
returnValue = F("Kämpenweg");
break;
}
case 197515:
{
returnValue = F("Kämpenwiese");
break;
}
case 197516:
{
returnValue = F("Kämper Str.");
break;
}
case 197517:
{
returnValue = F("Kämper Weg");
break;
}
case 197518:
{
returnValue = F("Kämperdick");
break;
}
case 197519:
{
returnValue = F("Kämperfeld");
break;
}
case 197520:
{
returnValue = F("Kämperheide");
break;
}
case 197521:
{
returnValue = F("Kämperpfad");
break;
}
case 197522:
{
returnValue = F("Kämperriege");
break;
}
case 197523:
{
returnValue = F("Kämpershaus");
break;
}
case 197524:
{
returnValue = F("Kämpershausweg");
break;
}
case 197525:
{
returnValue = F("Kämpershof");
break;
}
case 197526:
{
returnValue = F("Kämpersiek");
break;
}
case 197527:
{
returnValue = F("Kämpersiekweg");
break;
}
case 197528:
{
returnValue = F("Kämperstr.");
break;
}
case 197529:
{
returnValue = F("Kämperweg");
break;
}
case 197530:
{
returnValue = F("Kämpestr.");
break;
}
case 197531:
{
returnValue = F("Kämpeweg");
break;
}
case 197532:
{
returnValue = F("Kämpfelbachstr.");
break;
}
case 197533:
{
returnValue = F("Kämpfenlagerkopfweg");
break;
}
case 197534:
{
returnValue = F("Kämpfenstr.");
break;
}
case 197535:
{
returnValue = F("Kämpfenweg");
break;
}
case 197536:
{
returnValue = F("Kämpfergasse");
break;
}
case 197537:
{
returnValue = F("Kämpferstr.");
break;
}
case 197538:
{
returnValue = F("Kämpfersweg");
break;
}
case 197539:
{
returnValue = F("Kämpflestr.");
break;
}
case 197540:
{
returnValue = F("Kämpfrasen");
break;
}
case 197541:
{
returnValue = F("Kämpfstr.");
break;
}
case 197542:
{
returnValue = F("Kämpken");
break;
}
case 197543:
{
returnValue = F("Kämswiese");
break;
}
case 197544:
{
returnValue = F("Kändelgasse");
break;
}
case 197545:
{
returnValue = F("Kändelstr.");
break;
}
case 197546:
{
returnValue = F("Kändelweg");
break;
}
case 197547:
{
returnValue = F("Kändlerstr.");
break;
}
case 197548:
{
returnValue = F("Kändlerweg");
break;
}
case 197549:
{
returnValue = F("Känelgärten");
break;
}
case 197550:
{
returnValue = F("Käner Str.");
break;
}
case 197551:
{
returnValue = F("Känerbergstr.");
break;
}
case 197552:
{
returnValue = F("Känerweg");
break;
}
case 197553:
{
returnValue = F("Känguru");
break;
}
case 197554:
{
returnValue = F("Känguru + Emu");
break;
}
case 197555:
{
returnValue = F("Kängurus, Emus");
break;
}
case 197556:
{
returnValue = F("Känzele");
break;
}
case 197557:
{
returnValue = F("Käpfle");
break;
}
case 197558:
{
returnValue = F("Käpflesweg");
break;
}
case 197559:
{
returnValue = F("Käpflingstr.");
break;
}
case 197560:
{
returnValue = F("Käpflstr.");
break;
}
case 197561:
{
returnValue = F("Käppele");
break;
}
case 197562:
{
returnValue = F("Käppele-Traufweg");
break;
}
case 197563:
{
returnValue = F("Käppelebühl");
break;
}
case 197564:
{
returnValue = F("Käppelehaldenweg");
break;
}
case 197565:
{
returnValue = F("Käppelehof");
break;
}
case 197566:
{
returnValue = F("Käppelematten");
break;
}
case 197567:
{
returnValue = F("Käppelemattweg");
break;
}
case 197568:
{
returnValue = F("Käppelenstr.");
break;
}
case 197569:
{
returnValue = F("Käppelerstr.");
break;
}
case 197570:
{
returnValue = F("Käppelesberg");
break;
}
case 197571:
{
returnValue = F("Käppelesbreite");
break;
}
case 197572:
{
returnValue = F("Käppelesbrunnenweg");
break;
}
case 197573:
{
returnValue = F("Käppelesgasse");
break;
}
case 197574:
{
returnValue = F("Käppeleshau");
break;
}
case 197575:
{
returnValue = F("Käppeleshof");
break;
}
case 197576:
{
returnValue = F("Käppelesplatz");
break;
}
case 197577:
{
returnValue = F("Käppelestr.");
break;
}
case 197578:
{
returnValue = F("Käppelesweg");
break;
}
case 197579:
{
returnValue = F("Käppelesäcker");
break;
}
case 197580:
{
returnValue = F("Käppeleweg");
break;
}
case 197581:
{
returnValue = F("Käppelingässle");
break;
}
case 197582:
{
returnValue = F("Käppelinstr.");
break;
}
case 197583:
{
returnValue = F("Käppelisweg");
break;
}
case 197584:
{
returnValue = F("Käppelse");
break;
}
case 197585:
{
returnValue = F("Käppen-Meyn-Platz");
break;
}
case 197586:
{
returnValue = F("Käppen-Pött-Weg");
break;
}
case 197587:
{
returnValue = F("Käppkenstr.");
break;
}
case 197588:
{
returnValue = F("Käpplingerstr.");
break;
}
case 197589:
{
returnValue = F("Käpt'n Weg");
break;
}
case 197590:
{
returnValue = F("Käpt'n-Christiansen-Str.");
break;
}
case 197591:
{
returnValue = F("Käpt'n-Lüers-Str.");
break;
}
case 197592:
{
returnValue = F("Käpt'n-Wilters-Str.");
break;
}
case 197593:
{
returnValue = F("Käpten-Jürs-Brücke");
break;
}
case 197594:
{
returnValue = F("Käptn's Gang");
break;
}
case 197595:
{
returnValue = F("Kärburs Ströche");
break;
}
case 197596:
{
returnValue = F("Kärchelsgrundweg");
break;
}
case 197597:
{
returnValue = F("Kärcherstr.");
break;
}
case 197598:
{
returnValue = F("Kärglstr.");
break;
}
case 197599:
{
returnValue = F("Kärhölzle");
break;
}
case 197600:
{
returnValue = F("Kärlegartenstr.");
break;
}
case 197601:
{
returnValue = F("Kärlicher Str.");
break;
}
case 197602:
{
returnValue = F("Kärlicherstr.");
break;
}
case 197603:
{
returnValue = F("Kärndelmattweg");
break;
}
case 197604:
{
returnValue = F("Kärnerstr.");
break;
}
case 197605:
{
returnValue = F("Kärnerweg");
break;
}
case 197606:
{
returnValue = F("Kärntener Ring");
break;
}
case 197607:
{
returnValue = F("Kärntener Str.");
break;
}
case 197608:
{
returnValue = F("Kärntenstr.");
break;
}
case 197609:
{
returnValue = F("Kärntner Platz");
break;
}
case 197610:
{
returnValue = F("Kärntner Str.");
break;
}
case 197611:
{
returnValue = F("Kärntner Weg");
break;
}
case 197612:
{
returnValue = F("Kärntnerstr.");
break;
}
case 197613:
{
returnValue = F("Kärrner Str.");
break;
}
case 197614:
{
returnValue = F("Kärrnergasse");
break;
}
case 197615:
{
returnValue = F("Kärrnerstr.");
break;
}
case 197616:
{
returnValue = F("Kärrnerweg");
break;
}
case 197617:
{
returnValue = F("Kärrnerwegsiedlung");
break;
}
case 197618:
{
returnValue = F("Kärtlerweg");
break;
}
case 197619:
{
returnValue = F("Käsacker");
break;
}
case 197620:
{
returnValue = F("Käsackerweg");
break;
}
case 197621:
{
returnValue = F("Käsbach");
break;
}
case 197622:
{
returnValue = F("Käsbacher Str.");
break;
}
case 197623:
{
returnValue = F("Käsbacher Weg");
break;
}
case 197624:
{
returnValue = F("Käsbachstr.");
break;
}
case 197625:
{
returnValue = F("Käsbaumweg");
break;
}
case 197626:
{
returnValue = F("Käsberg");
break;
}
case 197627:
{
returnValue = F("Käsbergstr.");
break;
}
case 197628:
{
returnValue = F("Käsbornstr.");
break;
}
case 197629:
{
returnValue = F("Käsbrunnen-Weg");
break;
}
case 197630:
{
returnValue = F("Käsbrunnenweg");
break;
}
case 197631:
{
returnValue = F("Käsbüchel");
break;
}
case 197632:
{
returnValue = F("Käsbühlstr.");
break;
}
case 197633:
{
returnValue = F("Käseberg");
break;
}
case 197634:
{
returnValue = F("Käseforth");
break;
}
case 197635:
{
returnValue = F("Käsegasse");
break;
}
case 197636:
{
returnValue = F("Käsehardt");
break;
}
case 197637:
{
returnValue = F("Käseicherweg");
break;
}
case 197638:
{
returnValue = F("Käselaus Gang");
break;
}
case 197639:
{
returnValue = F("Käselberg");
break;
}
case 197640:
{
returnValue = F("Käselow");
break;
}
case 197641:
{
returnValue = F("Käselteich");
break;
}
case 197642:
{
returnValue = F("Käsenbachstr.");
break;
}
case 197643:
{
returnValue = F("Käsentalweg");
break;
}
case 197644:
{
returnValue = F("Käserberg");
break;
}
case 197645:
{
returnValue = F("Käsereiberg");
break;
}
case 197646:
{
returnValue = F("Käsereistr.");
break;
}
case 197647:
{
returnValue = F("Käsereiweg");
break;
}
case 197648:
{
returnValue = F("Käsergasse");
break;
}
case 197649:
{
returnValue = F("Käseritze");
break;
}
case 197650:
{
returnValue = F("Käserweg");
break;
}
case 197651:
{
returnValue = F("Käseweg");
break;
}
case 197652:
{
returnValue = F("Käsewinkel");
break;
}
case 197653:
{
returnValue = F("Käsgasse");
break;
}
case 197654:
{
returnValue = F("Käshammer");
break;
}
case 197655:
{
returnValue = F("Käshof");
break;
}
case 197656:
{
returnValue = F("Käshofer Str.");
break;
}
case 197657:
{
returnValue = F("Käsküchenweg");
break;
}
case 197658:
{
returnValue = F("Käslochweg");
break;
}
case 197659:
{
returnValue = F("Käsmarkstr.");
break;
}
case 197660:
{
returnValue = F("Käsmarkt");
break;
}
case 197661:
{
returnValue = F("Käsmühle");
break;
}
case 197662:
{
returnValue = F("Käsperstr.");
break;
}
case 197663:
{
returnValue = F("Käspfad");
break;
}
case 197664:
{
returnValue = F("Käsrainweg");
break;
}
case 197665:
{
returnValue = F("Käsröthe");
break;
}
case 197666:
{
returnValue = F("Kässbohrerstr.");
break;
}
case 197667:
{
returnValue = F("Kässensweg");
break;
}
case 197668:
{
returnValue = F("Kästehalde");
break;
}
case 197669:
{
returnValue = F("Kästenbergstr.");
break;
}
case 197670:
{
returnValue = F("Kästenburger Str.");
break;
}
case 197671:
{
returnValue = F("Kästerweg");
break;
}
case 197672:
{
returnValue = F("Kästestr.");
break;
}
case 197673:
{
returnValue = F("Kästeweg");
break;
}
case 197674:
{
returnValue = F("Kästleinsmühlenstr.");
break;
}
case 197675:
{
returnValue = F("Kästlesgrabenweg");
break;
}
case 197676:
{
returnValue = F("Kästlesweg");
break;
}
case 197677:
{
returnValue = F("Kästnerbogen");
break;
}
case 197678:
{
returnValue = F("Kästnermühle");
break;
}
case 197679:
{
returnValue = F("Kästners Wegl");
break;
}
case 197680:
{
returnValue = F("Kästnerstr.");
break;
}
case 197681:
{
returnValue = F("Kästnerstreifen");
break;
}
case 197682:
{
returnValue = F("Kästnerweg");
break;
}
case 197683:
{
returnValue = F("Kästorfer Str.");
break;
}
case 197684:
{
returnValue = F("Kästorfer Weg");
break;
}
case 197685:
{
returnValue = F("Kästrich");
break;
}
case 197686:
{
returnValue = F("Käswasserstr.");
break;
}
case 197687:
{
returnValue = F("Käswasserweg");
break;
}
case 197688:
{
returnValue = F("Käsweg");
break;
}
case 197689:
{
returnValue = F("Käswegle");
break;
}
case 197690:
{
returnValue = F("Käsäckerweg");
break;
}
case 197691:
{
returnValue = F("Kätchen-Förster-Park");
break;
}
case 197692:
{
returnValue = F("Kätchen-Förster-Weg");
break;
}
case 197693:
{
returnValue = F("Kätchen-Kling-Weg");
break;
}
case 197694:
{
returnValue = F("Kätchen-Paulus-Str.");
break;
}
case 197695:
{
returnValue = F("Kätchen-von-Heilbronn-Str.");
break;
}
case 197696:
{
returnValue = F("Kätchenburgweg");
break;
}
case 197697:
{
returnValue = F("Kätchenhagen");
break;
}
case 197698:
{
returnValue = F("Kätchenort");
break;
}
case 197699:
{
returnValue = F("Käte-Lassen-Weg");
break;
}
case 197700:
{
returnValue = F("Käte-Petersen-Weg");
break;
}
case 197701:
{
returnValue = F("Käte-Strobel-Weg");
break;
}
case 197702:
{
returnValue = F("Käte-Walter-Weg");
break;
}
case 197703:
{
returnValue = F("Käte-Werner-Str.");
break;
}
case 197704:
{
returnValue = F("Käthchen-Paulus-Str.");
break;
}
case 197705:
{
returnValue = F("Käthe Kollwitz Weg");
break;
}
case 197706:
{
returnValue = F("Käthe-Brand-Str.");
break;
}
case 197707:
{
returnValue = F("Käthe-Burkhardt-Weg");
break;
}
case 197708:
{
returnValue = F("Käthe-Dassler-Kreisel");
break;
}
case 197709:
{
returnValue = F("Käthe-Dorsch-Str.");
break;
}
case 197710:
{
returnValue = F("Käthe-Dorsch-Weg");
break;
}
case 197711:
{
returnValue = F("Käthe-Elsbach-Platz");
break;
}
case 197712:
{
returnValue = F("Käthe-Engelhaupt-Str.");
break;
}
case 197713:
{
returnValue = F("Käthe-Haack-Weg");
break;
}
case 197714:
{
returnValue = F("Käthe-Haken-Str.");
break;
}
case 197715:
{
returnValue = F("Käthe-Hamann-Str.");
break;
}
case 197716:
{
returnValue = F("Käthe-Hoppe-Weg");
break;
}
case 197717:
{
returnValue = F("Käthe-Kolkwitz Str.");
break;
}
case 197718:
{
returnValue = F("Käthe-Kollwitz Park");
break;
}
case 197719:
{
returnValue = F("Käthe-Kollwitz-Allee");
break;
}
case 197720:
{
returnValue = F("Käthe-Kollwitz-Hof");
break;
}
case 197721:
{
returnValue = F("Käthe-Kollwitz-Park");
break;
}
case 197722:
{
returnValue = F("Käthe-Kollwitz-Pfad");
break;
}
case 197723:
{
returnValue = F("Käthe-Kollwitz-Platz");
break;
}
case 197724:
{
returnValue = F("Käthe-Kollwitz-Ring");
break;
}
case 197725:
{
returnValue = F("Käthe-Kollwitz-Siedlung");
break;
}
case 197726:
{
returnValue = F("Käthe-Kollwitz-Str.");
break;
}
case 197727:
{
returnValue = F("Käthe-Kollwitz-Ufer");
break;
}
case 197728:
{
returnValue = F("Käthe-Kollwitz-Weg");
break;
}
case 197729:
{
returnValue = F("Käthe-Kollwitz=Platz");
break;
}
case 197730:
{
returnValue = F("Käthe-Kraus-Weg");
break;
}
case 197731:
{
returnValue = F("Käthe-Kruse-Str.");
break;
}
case 197732:
{
returnValue = F("Käthe-Kruse-Weg");
break;
}
case 197733:
{
returnValue = F("Käthe-Krüger-Str.");
break;
}
case 197734:
{
returnValue = F("Käthe-Loewenthal-Weg");
break;
}
case 197735:
{
returnValue = F("Käthe-Lübke-Str.");
break;
}
case 197736:
{
returnValue = F("Käthe-Mendes-Str.");
break;
}
case 197737:
{
returnValue = F("Käthe-Mensing-Str.");
break;
}
case 197738:
{
returnValue = F("Käthe-Miethe-Str.");
break;
}
case 197739:
{
returnValue = F("Käthe-Miethe-Weg");
break;
}
case 197740:
{
returnValue = F("Käthe-Niederkirchner-Str.");
break;
}
case 197741:
{
returnValue = F("Käthe-Paulus-Str.");
break;
}
case 197742:
{
returnValue = F("Käthe-Paulus-Weg");
break;
}
case 197743:
{
returnValue = F("Käthe-Popall-Str.");
break;
}
case 197744:
{
returnValue = F("Käthe-Rieck-Str.");
break;
}
case 197745:
{
returnValue = F("Käthe-Ringe-Str.");
break;
}
case 197746:
{
returnValue = F("Käthe-Schmidt-Str.");
break;
}
case 197747:
{
returnValue = F("Käthe-Schwerdtfeger-Weg");
break;
}
case 197748:
{
returnValue = F("Käthe-Schäfer-Str.");
break;
}
case 197749:
{
returnValue = F("Käthe-Seidel-Ring");
break;
}
case 197750:
{
returnValue = F("Käthe-Simon-Weg");
break;
}
case 197751:
{
returnValue = F("Käthe-Sohnemann-Weg");
break;
}
case 197752:
{
returnValue = F("Käthe-Tucholla-Str.");
break;
}
case 197753:
{
returnValue = F("Käthe-Vordtriede-Weg");
break;
}
case 197754:
{
returnValue = F("Käthe-Winkelmann-Platz");
break;
}
case 197755:
{
returnValue = F("Käthe-Zeitler-Weg");
break;
}
case 197756:
{
returnValue = F("Käthener Str.");
break;
}
case 197757:
{
returnValue = F("Kätherles-Kreuz-Weg");
break;
}
case 197758:
{
returnValue = F("Käthes Gässchen");
break;
}
case 197759:
{
returnValue = F("Käthestr.");
break;
}
case 197760:
{
returnValue = F("Käthnerstr.");
break;
}
case 197761:
{
returnValue = F("Käthnersweg");
break;
}
case 197762:
{
returnValue = F("Kätingen");
break;
}
case 197763:
{
returnValue = F("Kätinger Fuhren");
break;
}
case 197764:
{
returnValue = F("Kätinger Mühlenweg");
break;
}
case 197765:
{
returnValue = F("Kätner Kamp");
break;
}
case 197766:
{
returnValue = F("Kätnerland");
break;
}
case 197767:
{
returnValue = F("Kätnersbüttenweg");
break;
}
case 197768:
{
returnValue = F("Kätnerskamp");
break;
}
case 197769:
{
returnValue = F("Kätnersredder");
break;
}
case 197770:
{
returnValue = F("Kätnersteil");
break;
}
case 197771:
{
returnValue = F("Kätnerstr.");
break;
}
case 197772:
{
returnValue = F("Kätnerweg");
break;
}
case 197773:
{
returnValue = F("Kätplatz");
break;
}
case 197774:
{
returnValue = F("Kättergrund");
break;
}
case 197775:
{
returnValue = F("Kätzer Weg");
break;
}
case 197776:
{
returnValue = F("Kätzeroder Weg");
break;
}
case 197777:
{
returnValue = F("Kätzlerweg");
break;
}
case 197778:
{
returnValue = F("Kätzling");
break;
}
case 197779:
{
returnValue = F("Käuersbachstr.");
break;
}
case 197780:
{
returnValue = F("Käufelkofen");
break;
}
case 197781:
{
returnValue = F("Käufelkofen-Siedlung");
break;
}
case 197782:
{
returnValue = F("Käufelkofener Schreinerfeld");
break;
}
case 197783:
{
returnValue = F("Käufung");
break;
}
case 197784:
{
returnValue = F("Käupers Kamp");
break;
}
case 197785:
{
returnValue = F("Käuser Steimel");
break;
}
case 197786:
{
returnValue = F("Käuserstruth");
break;
}
case 197787:
{
returnValue = F("Käutchesweg");
break;
}
case 197788:
{
returnValue = F("Käuzchenheide");
break;
}
case 197789:
{
returnValue = F("Käuzchenring");
break;
}
case 197790:
{
returnValue = F("Käuzchensteig");
break;
}
case 197791:
{
returnValue = F("Käuzchenweg");
break;
}
case 197792:
{
returnValue = F("Käßlitzer Dorfstr.");
break;
}
case 197793:
{
returnValue = F("Kékuléstr.");
break;
}
case 197794:
{
returnValue = F("Kórniker Weg");
break;
}
case 197795:
{
returnValue = F("Köbach");
break;
}
case 197796:
{
returnValue = F("Köbacher Str.");
break;
}
case 197797:
{
returnValue = F("Köbbelitzer Str.");
break;
}
case 197798:
{
returnValue = F("Köbbelitzer Weg");
break;
}
case 197799:
{
returnValue = F("Köbbinghausen");
break;
}
case 197800:
{
returnValue = F("Köbbinghauser Hammer");
break;
}
case 197801:
{
returnValue = F("Köbbinghof");
break;
}
case 197802:
{
returnValue = F("Köbbinghäuser Str.");
break;
}
case 197803:
{
returnValue = F("Köbelestr.");
break;
}
case 197804:
{
returnValue = F("Köbeleweg");
break;
}
case 197805:
{
returnValue = F("Köbelstr.");
break;
}
case 197806:
{
returnValue = F("Köbener Str.");
break;
}
case 197807:
{
returnValue = F("Köbengehäge");
break;
}
case 197808:
{
returnValue = F("Köbenstr.");
break;
}
case 197809:
{
returnValue = F("Köbererstr.");
break;
}
case 197810:
{
returnValue = F("Köberle");
break;
}
case 197811:
{
returnValue = F("Köberlestr.");
break;
}
case 197812:
{
returnValue = F("Köberleweg");
break;
}
case 197813:
{
returnValue = F("Köberlinstr.");
break;
}
case 197814:
{
returnValue = F("Köbkestr.");
break;
}
case 197815:
{
returnValue = F("Köblein");
break;
}
case 197816:
{
returnValue = F("Köbler Weg");
break;
}
case 197817:
{
returnValue = F("Köblerfeldstr.");
break;
}
case 197818:
{
returnValue = F("Köblerweg");
break;
}
case 197819:
{
returnValue = F("Köblitz");
break;
}
case 197820:
{
returnValue = F("Köblitzer Str.");
break;
}
case 197821:
{
returnValue = F("Köblitzplatte");
break;
}
case 197822:
{
returnValue = F("Köchelstr.");
break;
}
case 197823:
{
returnValue = F("Köchersberg");
break;
}
case 197824:
{
returnValue = F("Köchersberger Str.");
break;
}
case 197825:
{
returnValue = F("Köchersbergweg");
break;
}
case 197826:
{
returnValue = F("Köcherstr.");
break;
}
case 197827:
{
returnValue = F("Köcherweg");
break;
}
case 197828:
{
returnValue = F("Köchinger Str.");
break;
}
case 197829:
{
returnValue = F("Köchleinsweg");
break;
}
case 197830:
{
returnValue = F("Köchlingstr.");
break;
}
case 197831:
{
returnValue = F("Köchlinstr.");
break;
}
case 197832:
{
returnValue = F("Köchstedter Str.");
break;
}
case 197833:
{
returnValue = F("Köchstedter Weg");
break;
}
case 197834:
{
returnValue = F("Köck");
break;
}
case 197835:
{
returnValue = F("Köckbrunn");
break;
}
case 197836:
{
returnValue = F("Köckelwick");
break;
}
case 197837:
{
returnValue = F("Köckelwicker Esch");
break;
}
case 197838:
{
returnValue = F("Köckernsche Str.");
break;
}
case 197839:
{
returnValue = F("Köckersried");
break;
}
case 197840:
{
returnValue = F("Köckersrieder Str.");
break;
}
case 197841:
{
returnValue = F("Köckersriederweg");
break;
}
case 197842:
{
returnValue = F("Köckritz");
break;
}
case 197843:
{
returnValue = F("Köckritzer Weg");
break;
}
case 197844:
{
returnValue = F("Köckstr.");
break;
}
case 197845:
{
returnValue = F("Köckter Feldstr.");
break;
}
case 197846:
{
returnValue = F("Köckter Weg");
break;
}
case 197847:
{
returnValue = F("Köddinger Str.");
break;
}
case 197848:
{
returnValue = F("Ködelgang");
break;
}
case 197849:
{
returnValue = F("Ködenweg");
break;
}
case 197850:
{
returnValue = F("Ködersbachsiedlung");
break;
}
case 197851:
{
returnValue = F("Ködersbachweg");
break;
}
case 197852:
{
returnValue = F("Ködingstr.");
break;
}
case 197853:
{
returnValue = F("Köditzgasse");
break;
}
case 197854:
{
returnValue = F("Ködnitz");
break;
}
case 197855:
{
returnValue = F("Ködritzer Weg");
break;
}
case 197856:
{
returnValue = F("Köfeln");
break;
}
case 197857:
{
returnValue = F("Köferinger Str.");
break;
}
case 197858:
{
returnValue = F("Köferinger Tal");
break;
}
case 197859:
{
returnValue = F("Köferinger Weg");
break;
}
case 197860:
{
returnValue = F("Köferingerstr.");
break;
}
case 197861:
{
returnValue = F("Köferlweg");
break;
}
case 197862:
{
returnValue = F("Köflacher Hof");
break;
}
case 197863:
{
returnValue = F("Köflacher Str.");
break;
}
case 197864:
{
returnValue = F("Kögel-Willms-Platz");
break;
}
case 197865:
{
returnValue = F("Kögel-Willms-Str.");
break;
}
case 197866:
{
returnValue = F("Kögelgasse");
break;
}
case 197867:
{
returnValue = F("Kögelhof");
break;
}
case 197868:
{
returnValue = F("Kögelmühlstr.");
break;
}
case 197869:
{
returnValue = F("Kögelrißweg");
break;
}
case 197870:
{
returnValue = F("Kögelsteiner Str.");
break;
}
case 197871:
{
returnValue = F("Kögelstr.");
break;
}
case 197872:
{
returnValue = F("Kögelweg");
break;
}
case 197873:
{
returnValue = F("Köglergasse");
break;
}
case 197874:
{
returnValue = F("Köglhaus");
break;
}
case 197875:
{
returnValue = F("Köglitz");
break;
}
case 197876:
{
returnValue = F("Köglmühle");
break;
}
case 197877:
{
returnValue = F("Köglmühlstr.");
break;
}
case 197878:
{
returnValue = F("Köglmüllerweg");
break;
}
case 197879:
{
returnValue = F("Köglweg");
break;
}
case 197880:
{
returnValue = F("Köhlbarg");
break;
}
case 197881:
{
returnValue = F("Köhlberg");
break;
}
case 197882:
{
returnValue = F("Köhlbergstr.");
break;
}
case 197883:
{
returnValue = F("Köhlbergweg");
break;
}
case 197884:
{
returnValue = F("Köhlbrücke");
break;
}
case 197885:
{
returnValue = F("Köhleinsgasse");
break;
}
case 197886:
{
returnValue = F("Köhlen");
break;
}
case 197887:
{
returnValue = F("Köhlener Birkenweg");
break;
}
case 197888:
{
returnValue = F("Köhlener Str.");
break;
}
case 197889:
{
returnValue = F("Köhlenredder");
break;
}
case 197890:
{
returnValue = F("Köhlenweg");
break;
}
case 197891:
{
returnValue = F("Köhler Feld");
break;
}
case 197892:
{
returnValue = F("Köhler Str.");
break;
}
case 197893:
{
returnValue = F("Köhler Weg");
break;
}
case 197894:
{
returnValue = F("Köhler-Siedlung");
break;
}
case 197895:
{
returnValue = F("Köhlerbarg");
break;
}
case 197896:
{
returnValue = F("Köhlerberg");
break;
}
case 197897:
{
returnValue = F("Köhlerbergstr.");
break;
}
case 197898:
{
returnValue = F("Köhlerbergweg");
break;
}
case 197899:
{
returnValue = F("Köhlerbruch");
break;
}
case 197900:
{
returnValue = F("Köhlerbrunnen");
break;
}
case 197901:
{
returnValue = F("Köhlerbuschweg");
break;
}
case 197902:
{
returnValue = F("Köhlereiweg");
break;
}
case 197903:
{
returnValue = F("Köhlerer Weg");
break;
}
case 197904:
{
returnValue = F("Köhlergarten");
break;
}
case 197905:
{
returnValue = F("Köhlergasse");
break;
}
case 197906:
{
returnValue = F("Köhlergäßchen");
break;
}
case 197907:
{
returnValue = F("Köhlerhagen");
break;
}
case 197908:
{
returnValue = F("Köhlerhang");
break;
}
case 197909:
{
returnValue = F("Köhlerheide");
break;
}
case 197910:
{
returnValue = F("Köhlerhof Brücke");
break;
}
case 197911:
{
returnValue = F("Köhlerhofweg");
break;
}
case 197912:
{
returnValue = F("Köhlerholzweg");
break;
}
case 197913:
{
returnValue = F("Köhlerhüttenweg");
break;
}
case 197914:
{
returnValue = F("Köhlerkopf");
break;
}
case 197915:
{
returnValue = F("Köhlerkoppel");
break;
}
case 197916:
{
returnValue = F("Köhlerpfad");
break;
}
case 197917:
{
returnValue = F("Köhlerplatz");
break;
}
case 197918:
{
returnValue = F("Köhlerpromenade");
break;
}
case 197919:
{
returnValue = F("Köhlerring");
break;
}
case 197920:
{
returnValue = F("Köhlers Drift");
break;
}
case 197921:
{
returnValue = F("Köhlers Gasse");
break;
}
case 197922:
{
returnValue = F("Köhlersgasse");
break;
}
case 197923:
{
returnValue = F("Köhlersgraben");
break;
}
case 197924:
{
returnValue = F("Köhlersgrundgasse");
break;
}
case 197925:
{
returnValue = F("Köhlershohner Str.");
break;
}
case 197926:
{
returnValue = F("Köhlersloh");
break;
}
case 197927:
{
returnValue = F("Köhlerspitzweg");
break;
}
case 197928:
{
returnValue = F("Köhlerstieg");
break;
}
case 197929:
{
returnValue = F("Köhlerstr.");
break;
}
case 197930:
{
returnValue = F("Köhlerstrat");
break;
}
case 197931:
{
returnValue = F("Köhlerswaldweg");
break;
}
case 197932:
{
returnValue = F("Köhlersweg");
break;
}
case 197933:
{
returnValue = F("Köhlertal");
break;
}
case 197934:
{
returnValue = F("Köhlertwiete");
break;
}
case 197935:
{
returnValue = F("Köhlerwaldweg");
break;
}
case 197936:
{
returnValue = F("Köhlerweg");
break;
}
case 197937:
{
returnValue = F("Köhlerwiese");
break;
}
case 197938:
{
returnValue = F("Köhlerwinkel");
break;
}
case 197939:
{
returnValue = F("Köhlesrain");
break;
}
case 197940:
{
returnValue = F("Köhlgartenkopfweg");
break;
}
case 197941:
{
returnValue = F("Köhlgartenring");
break;
}
case 197942:
{
returnValue = F("Köhlgartenstr.");
break;
}
case 197943:
{
returnValue = F("Köhlgartenweg");
break;
}
case 197944:
{
returnValue = F("Köhlingen");
break;
}
case 197945:
{
returnValue = F("Köhlinger Weg");
break;
}
case 197946:
{
returnValue = F("Köhlkuhlen");
break;
}
case 197947:
{
returnValue = F("Köhlmoorweg");
break;
}
case 197948:
{
returnValue = F("Köhlmut");
break;
}
case 197949:
{
returnValue = F("Köhlsbergweg");
break;
}
case 197950:
{
returnValue = F("Köhlsgasse");
break;
}
case 197951:
{
returnValue = F("Köhlstr.");
break;
}
case 197952:
{
returnValue = F("Köhlte");
break;
}
case 197953:
{
returnValue = F("Köhlterholz");
break;
}
case 197954:
{
returnValue = F("Köhlweg");
break;
}
case 197955:
{
returnValue = F("Köhmesweg");
break;
}
case 197956:
{
returnValue = F("Köhmweg");
break;
}
case 197957:
{
returnValue = F("Köhnenbergsweg");
break;
}
case 197958:
{
returnValue = F("Köhnenhöhe");
break;
}
case 197959:
{
returnValue = F("Köhnenstr.");
break;
}
case 197960:
{
returnValue = F("Köhner Brücke");
break;
}
case 197961:
{
returnValue = F("Köhnestr.");
break;
}
case 197962:
{
returnValue = F("Köhnholz");
break;
}
case 197963:
{
returnValue = F("Köhnholz-Ost");
break;
}
case 197964:
{
returnValue = F("Köhnholzer Landstr.");
break;
}
case 197965:
{
returnValue = F("Köhnhornsweg");
break;
}
case 197966:
{
returnValue = F("Köhns Weg");
break;
}
case 197967:
{
returnValue = F("Köhns Übergang");
break;
}
case 197968:
{
returnValue = F("Köhnshof");
break;
}
case 197969:
{
returnValue = F("Köhnshöhe");
break;
}
case 197970:
{
returnValue = F("Köhnstege");
break;
}
case 197971:
{
returnValue = F("Köhpädche");
break;
}
case 197972:
{
returnValue = F("Köhraer Str.");
break;
}
case 197973:
{
returnValue = F("Kök");
break;
}
case 197974:
{
returnValue = F("Kökenbarg");
break;
}
case 197975:
{
returnValue = F("Kökenweg");
break;
}
case 197976:
{
returnValue = F("Kökerstr.");
break;
}
case 197977:
{
returnValue = F("Kölberberg");
break;
}
case 197978:
{
returnValue = F("Kölblanger");
break;
}
case 197979:
{
returnValue = F("Kölbldorf");
break;
}
case 197980:
{
returnValue = F("Kölbldorfer Weg");
break;
}
case 197981:
{
returnValue = F("Kölbleswiesen");
break;
}
case 197982:
{
returnValue = F("Kölblfeldstr.");
break;
}
case 197983:
{
returnValue = F("Kölblstr.");
break;
}
case 197984:
{
returnValue = F("Kölblweg");
break;
}
case 197985:
{
returnValue = F("Kölburger Str.");
break;
}
case 197986:
{
returnValue = F("Köldingsweg");
break;
}
case 197987:
{
returnValue = F("Köldweg");
break;
}
case 197988:
{
returnValue = F("Kölerstr.");
break;
}
case 197989:
{
returnValue = F("Kölfhamm");
break;
}
case 197990:
{
returnValue = F("Kölken");
break;
}
case 197991:
{
returnValue = F("Kölkenweg");
break;
}
case 197992:
{
returnValue = F("Kölker Weg");
break;
}
case 197993:
{
returnValue = F("Kölkerberg");
break;
}
case 197994:
{
returnValue = F("Kölkerweg");
break;
}
case 197995:
{
returnValue = F("Kölkeweg");
break;
}
case 197996:
{
returnValue = F("Köllbachweg");
break;
}
case 197997:
{
returnValue = F("Kölle");
break;
}
case 197998:
{
returnValue = F("Köllebachweg");
break;
}
case 197999:
{
returnValue = F("Kölledaer Siedlung");
break;
}
case 198000:
{
returnValue = F("Kölledaer Str.");
break;
}
case 198001:
{
returnValue = F("Köllenbergring");
break;
}
case 198002:
{
returnValue = F("Köllenbergschneise");
break;
}
case 198003:
{
returnValue = F("Köllenbergstr.");
break;
}
case 198004:
{
returnValue = F("Köllenweg");
break;
}
case 198005:
{
returnValue = F("Köllerbachweg");
break;
}
case 198006:
{
returnValue = F("Köllerberg");
break;
}
case 198007:
{
returnValue = F("Köllerkamp");
break;
}
case 198008:
{
returnValue = F("Köllersgarten");
break;
}
case 198009:
{
returnValue = F("Köllershof");
break;
}
case 198010:
{
returnValue = F("Köllerstr.");
break;
}
case 198011:
{
returnValue = F("Köllersweg");
break;
}
case 198012:
{
returnValue = F("Köllertalstr.");
break;
}
case 198013:
{
returnValue = F("Köllerweg");
break;
}
case 198014:
{
returnValue = F("Köllesch");
break;
}
case 198015:
{
returnValue = F("Köllespitzstr.");
break;
}
case 198016:
{
returnValue = F("Köllespitzweg");
break;
}
case 198017:
{
returnValue = F("Köllestr.");
break;
}
case 198018:
{
returnValue = F("Köllings Mühle");
break;
}
case 198019:
{
returnValue = F("Köllingskamp");
break;
}
case 198020:
{
returnValue = F("Köllingsmoor");
break;
}
case 198021:
{
returnValue = F("Köllingstr.");
break;
}
case 198022:
{
returnValue = F("Köllingsweg");
break;
}
case 198023:
{
returnValue = F("Köllinstr.");
break;
}
case 198024:
{
returnValue = F("Köllmer Str.");
break;
}
case 198025:
{
returnValue = F("Köllmer Weg");
break;
}
case 198026:
{
returnValue = F("Kölln");
break;
}
case 198027:
{
returnValue = F("Köllnbacher Str.");
break;
}
case 198028:
{
returnValue = F("Köllnbachstr.");
break;
}
case 198029:
{
returnValue = F("Köllnbrinkweg");
break;
}
case 198030:
{
returnValue = F("Köllner Chaussee");
break;
}
case 198031:
{
returnValue = F("Köllner Moorweg");
break;
}
case 198032:
{
returnValue = F("Köllner Str.");
break;
}
case 198033:
{
returnValue = F("Köllner Weg");
break;
}
case 198034:
{
returnValue = F("Köllnerberg");
break;
}
case 198035:
{
returnValue = F("Köllnerfeld");
break;
}
case 198036:
{
returnValue = F("Köllnerstr.");
break;
}
case 198037:
{
returnValue = F("Köllnweg");
break;
}
case 198038:
{
returnValue = F("Köllschestr.");
break;
}
case 198039:
{
returnValue = F("Köllstr.");
break;
}
case 198040:
{
returnValue = F("Köln-Aachener-Str.");
break;
}
case 198041:
{
returnValue = F("Köln-Düsseldorfer");
break;
}
case 198042:
{
returnValue = F("Köln-Leipziger-Str.");
break;
}
case 198043:
{
returnValue = F("Köln-Mindener-Bahn");
break;
}
case 198044:
{
returnValue = F("Kölnbusch");
break;
}
case 198045:
{
returnValue = F("Kölner End");
break;
}
case 198046:
{
returnValue = F("Kölner Gasse");
break;
}
case 198047:
{
returnValue = F("Kölner Grenzweg");
break;
}
case 198048:
{
returnValue = F("Kölner Heerweg");
break;
}
case 198049:
{
returnValue = F("Kölner Hohlweg");
break;
}
case 198050:
{
returnValue = F("Kölner Landstr.");
break;
}
case 198051:
{
returnValue = F("Kölner Pfad");
break;
}
case 198052:
{
returnValue = F("Kölner Ring");
break;
}
case 198053:
{
returnValue = F("Kölner Str.");
break;
}
case 198054:
{
returnValue = F("Kölner Tor");
break;
}
case 198055:
{
returnValue = F("Kölner Weg");
break;
}
case 198056:
{
returnValue = F("Kölner-Tor-Platz");
break;
}
case 198057:
{
returnValue = F("Kölnergrünstr.");
break;
}
case 198058:
{
returnValue = F("Kölnische Höfe");
break;
}
case 198059:
{
returnValue = F("Kölnische Landstr.");
break;
}
case 198060:
{
returnValue = F("Kölnische Str.");
break;
}
case 198061:
{
returnValue = F("Kölnische Turmgasse");
break;
}
case 198062:
{
returnValue = F("Kölnstadt");
break;
}
case 198063:
{
returnValue = F("Kölnstr.");
break;
}
case 198064:
{
returnValue = F("Kölnweg");
break;
}
case 198065:
{
returnValue = F("Kölnweg - - - Stellweg");
break;
}
case 198066:
{
returnValue = F("Kölpin");
break;
}
case 198067:
{
returnValue = F("Kölpiner Str.");
break;
}
case 198068:
{
returnValue = F("Kölpinseer Weg");
break;
}
case 198069:
{
returnValue = F("Kölpinweg");
break;
}
case 198070:
{
returnValue = F("Kölreuterstr.");
break;
}
case 198071:
{
returnValue = F("Kölsaer Str.");
break;
}
case 198072:
{
returnValue = F("Kölsaer Weg");
break;
}
case 198073:
{
returnValue = F("Kölsbachstr.");
break;
}
case 198074:
{
returnValue = F("Kölscher Hof");
break;
}
case 198075:
{
returnValue = F("Kölscher Weg");
break;
}
case 198076:
{
returnValue = F("Kölschhäuser Str.");
break;
}
case 198077:
{
returnValue = F("Kölschhäuser Weg");
break;
}
case 198078:
{
returnValue = F("Kölsumer Weg");
break;
}
case 198079:
{
returnValue = F("Költjes Wey");
break;
}
case 198080:
{
returnValue = F("Kölwelstr.");
break;
}
case 198081:
{
returnValue = F("Kölzener Str.");
break;
}
case 198082:
{
returnValue = F("Kölzenhainer Str.");
break;
}
case 198083:
{
returnValue = F("Kölzer Weg");
break;
}
case 198084:
{
returnValue = F("Kölzin");
break;
}
case 198085:
{
returnValue = F("Kölziner Str.");
break;
}
case 198086:
{
returnValue = F("Kölzower Chaussee");
break;
}
case 198087:
{
returnValue = F("Kölzower Ring");
break;
}
case 198088:
{
returnValue = F("Kömbarg");
break;
}
case 198089:
{
returnValue = F("Kömbchesweg");
break;
}
case 198090:
{
returnValue = F("Kömmlitzer Str.");
break;
}
case 198091:
{
returnValue = F("Kömpchen");
break;
}
case 198092:
{
returnValue = F("Kömpches Gasse");
break;
}
case 198093:
{
returnValue = F("Kömpel");
break;
}
case 198094:
{
returnValue = F("Kömstieg");
break;
}
case 198095:
{
returnValue = F("Könauer Str.");
break;
}
case 198096:
{
returnValue = F("Könauer Weg");
break;
}
case 198097:
{
returnValue = F("Könderitzer Dorfstr.");
break;
}
case 198098:
{
returnValue = F("Könderitzer Hauptstr.");
break;
}
case 198099:
{
returnValue = F("Könderitzer Str.");
break;
}
case 198100:
{
returnValue = F("Köndgenstr.");
break;
}
case 198101:
{
returnValue = F("Köndringer Str.");
break;
}
case 198102:
{
returnValue = F("Könemannshof");
break;
}
case 198103:
{
returnValue = F("Könener Str.");
break;
}
case 198104:
{
returnValue = F("Könensgasse");
break;
}
case 198105:
{
returnValue = F("Köngendobelweg");
break;
}
case 198106:
{
returnValue = F("Köngener Str.");
break;
}
case 198107:
{
returnValue = F("Köngetrieder Str.");
break;
}
case 198108:
{
returnValue = F("Könghauser Str.");
break;
}
case 198109:
{
returnValue = F("König Max Promenade");
break;
}
case 198110:
{
returnValue = F("König-Albrecht-Str.");
break;
}
case 198111:
{
returnValue = F("König-Allee");
break;
}
case 198112:
{
returnValue = F("König-Baudouin-Weg");
break;
}
case 198113:
{
returnValue = F("König-Carls-Ring");
break;
}
case 198114:
{
returnValue = F("König-Christian-Str.");
break;
}
case 198115:
{
returnValue = F("König-Christian-Weg");
break;
}
case 198116:
{
returnValue = F("König-Christoph-Str.");
break;
}
case 198117:
{
returnValue = F("König-Etzel-Str.");
break;
}
case 198118:
{
returnValue = F("König-Friedrich V-Allee");
break;
}
case 198119:
{
returnValue = F("König-Friedrich-Platz");
break;
}
case 198120:
{
returnValue = F("König-Georg-Allee");
break;
}
case 198121:
{
returnValue = F("König-Goldemar-Weg");
break;
}
case 198122:
{
returnValue = F("König-Gunther-Str.");
break;
}
case 198123:
{
returnValue = F("König-Heinrich-Str.");
break;
}
case 198124:
{
returnValue = F("König-Heinrich-Weg");
break;
}
case 198125:
{
returnValue = F("König-Johann-Str.");
break;
}
case 198126:
{
returnValue = F("König-Karl-Str.");
break;
}
case 198127:
{
returnValue = F("König-Konrad-Str.");
break;
}
case 198128:
{
returnValue = F("König-Ludwig-Brücke");
break;
}
case 198129:
{
returnValue = F("König-Ludwig-Promenade");
break;
}
case 198130:
{
returnValue = F("König-Ludwig-Radweg");
break;
}
case 198131:
{
returnValue = F("König-Ludwig-Str.");
break;
}
case 198132:
{
returnValue = F("König-Ludwig-Wanderweg");
break;
}
case 198133:
{
returnValue = F("König-Ludwig-Weg");
break;
}
case 198134:
{
returnValue = F("König-Max-Steg");
break;
}
case 198135:
{
returnValue = F("König-Max-Weg");
break;
}
case 198136:
{
returnValue = F("König-Otto-Passage");
break;
}
case 198137:
{
returnValue = F("König-Otto-Str.");
break;
}
case 198138:
{
returnValue = F("König-Philipp-Weg");
break;
}
case 198139:
{
returnValue = F("König-Pippin-Allee");
break;
}
case 198140:
{
returnValue = F("König-Rabbke-Weg");
break;
}
case 198141:
{
returnValue = F("König-Rudolf-Str.");
break;
}
case 198142:
{
returnValue = F("König-Ruprecht-Str.");
break;
}
case 198143:
{
returnValue = F("König-Schalinski-Str.");
break;
}
case 198144:
{
returnValue = F("König-Sigmund-Str.");
break;
}
case 198145:
{
returnValue = F("König-Wilhelm-Platz");
break;
}
case 198146:
{
returnValue = F("König-Wilhelm-Str.");
break;
}
case 198147:
{
returnValue = F("König-Wilhelm-Weg");
break;
}
case 198148:
{
returnValue = F("König-Wilhelm-Zentrum");
break;
}
case 198149:
{
returnValue = F("Königbacher Str.");
break;
}
case 198150:
{
returnValue = F("Königbauerstr.");
break;
}
case 198151:
{
returnValue = F("Königbergstr.");
break;
}
case 198152:
{
returnValue = F("Königenberg");
break;
}
case 198153:
{
returnValue = F("Königendorfer Str.");
break;
}
case 198154:
{
returnValue = F("Königental");
break;
}
case 198155:
{
returnValue = F("Königer Str.");
break;
}
case 198156:
{
returnValue = F("Königer Weg");
break;
}
case 198157:
{
returnValue = F("Königeroder Str.");
break;
}
case 198158:
{
returnValue = F("Königeröder Str.");
break;
}
case 198159:
{
returnValue = F("Königgrätzer Str.");
break;
}
case 198160:
{
returnValue = F("Königgäßle");
break;
}
case 198161:
{
returnValue = F("Königheimer Str.");
break;
}
case 198162:
{
returnValue = F("Königheimer Weg");
break;
}
case 198163:
{
returnValue = F("Königin-Emma-Str.");
break;
}
case 198164:
{
returnValue = F("Königin-Katharina-Str.");
break;
}
case 198165:
{
returnValue = F("Königin-Sophie-Str.");
break;
}
case 198166:
{
returnValue = F("Königinallee");
break;
}
case 198167:
{
returnValue = F("Königinstr.");
break;
}
case 198168:
{
returnValue = F("Königlich Reetz");
break;
}
case 198169:
{
returnValue = F("Königlicher Kurgarten");
break;
}
case 198170:
{
returnValue = F("Königplatz");
break;
}
case 198171:
{
returnValue = F("Königreich");
break;
}
case 198172:
{
returnValue = F("Königreichallee");
break;
}
case 198173:
{
returnValue = F("Königreicher Str.");
break;
}
case 198174:
{
returnValue = F("Königreicher Weg");
break;
}
case 198175:
{
returnValue = F("Königreichweg");
break;
}
case 198176:
{
returnValue = F("Königriede");
break;
}
case 198177:
{
returnValue = F("Königs Arboretum");
break;
}
case 198178:
{
returnValue = F("Königs Esch");
break;
}
case 198179:
{
returnValue = F("Königs Geräumt");
break;
}
case 198180:
{
returnValue = F("Königs Wusterhausener Str.");
break;
}
case 198181:
{
returnValue = F("Königs Wusterhausener Weg");
break;
}
case 198182:
{
returnValue = F("Königs-Geräumt");
break;
}
case 198183:
{
returnValue = F("Königsaal");
break;
}
case 198184:
{
returnValue = F("Königsacker");
break;
}
case 198185:
{
returnValue = F("Königsallee");
break;
}
case 198186:
{
returnValue = F("Königsau");
break;
}
case 198187:
{
returnValue = F("Königsaue");
break;
}
case 198188:
{
returnValue = F("Königsauer Str.");
break;
}
case 198189:
{
returnValue = F("Königsbacher Str.");
break;
}
case 198190:
{
returnValue = F("Königsbacher Weg");
break;
}
case 198191:
{
returnValue = F("Königsbachrundweg");
break;
}
case 198192:
{
returnValue = F("Königsbachtalstr.");
break;
}
case 198193:
{
returnValue = F("Königsbahn");
break;
}
case 198194:
{
returnValue = F("Königsbank");
break;
}
case 198195:
{
returnValue = F("Königsbarg");
break;
}
case 198196:
{
returnValue = F("Königsbarger Weg");
break;
}
case 198197:
{
returnValue = F("Königsbaum");
break;
}
case 198198:
{
returnValue = F("Königsbaustr.");
break;
}
case 198199:
{
returnValue = F("Königsbend");
break;
}
case 198200:
{
returnValue = F("Königsbenden");
break;
}
case 198201:
{
returnValue = F("Königsberg");
break;
}
case 198202:
{
returnValue = F("Königsbergallee");
break;
}
case 198203:
{
returnValue = F("Königsberger Allee");
break;
}
case 198204:
{
returnValue = F("Königsberger Dorfstr.");
break;
}
case 198205:
{
returnValue = F("Königsberger Platz");
break;
}
case 198206:
{
returnValue = F("Königsberger Ring");
break;
}
case 198207:
{
returnValue = F("Königsberger Steige");
break;
}
case 198208:
{
returnValue = F("Königsberger Stieg");
break;
}
case 198209:
{
returnValue = F("Königsberger Str.");
break;
}
case 198210:
{
returnValue = F("Königsberger Weg");
break;
}
case 198211:
{
returnValue = F("Königsbergerstr.");
break;
}
case 198212:
{
returnValue = F("Königsbergring");
break;
}
case 198213:
{
returnValue = F("Königsbergstr.");
break;
}
case 198214:
{
returnValue = F("Königsbergweg");
break;
}
case 198215:
{
returnValue = F("Königsborner Str.");
break;
}
case 198216:
{
returnValue = F("Königsbreite");
break;
}
case 198217:
{
returnValue = F("Königsbronner Str.");
break;
}
case 198218:
{
returnValue = F("Königsbronner Weg");
break;
}
case 198219:
{
returnValue = F("Königsbronnerweg");
break;
}
case 198220:
{
returnValue = F("Königsbronnhof");
break;
}
case 198221:
{
returnValue = F("Königsbronnweg");
break;
}
case 198222:
{
returnValue = F("Königsbrunner Str.");
break;
}
case 198223:
{
returnValue = F("Königsbrück Str.");
break;
}
case 198224:
{
returnValue = F("Königsbrücke");
break;
}
case 198225:
{
returnValue = F("Königsbrücker Str.");
break;
}
case 198226:
{
returnValue = F("Königsbrücker Weg");
break;
}
case 198227:
{
returnValue = F("Königsburgbrücke");
break;
}
case 198228:
{
returnValue = F("Königsburgstr.");
break;
}
case 198229:
{
returnValue = F("Königsbückele");
break;
}
case 198230:
{
returnValue = F("Königsbühlstr.");
break;
}
case 198231:
{
returnValue = F("Königsbühlweg");
break;
}
case 198232:
{
returnValue = F("Königsbühn");
break;
}
case 198233:
{
returnValue = F("Königschaldinger Str.");
break;
}
case 198234:
{
returnValue = F("Königsdamm");
break;
}
case 198235:
{
returnValue = F("Königsdellstr.");
break;
}
case 198236:
{
returnValue = F("Königsdobl");
break;
}
case 198237:
{
returnValue = F("Königsdobler Str.");
break;
}
case 198238:
{
returnValue = F("Königsdorfer Str.");
break;
}
case 198239:
{
returnValue = F("Königsdorfer Weg");
break;
}
case 198240:
{
returnValue = F("Königseck");
break;
}
case 198241:
{
returnValue = F("Königseer Str.");
break;
}
case 198242:
{
returnValue = F("Königseer Weg");
break;
}
case 198243:
{
returnValue = F("Königseeweg");
break;
}
case 198244:
{
returnValue = F("Königsegg");
break;
}
case 198245:
{
returnValue = F("Königsegger Str.");
break;
}
case 198246:
{
returnValue = F("Königseggstr.");
break;
}
case 198247:
{
returnValue = F("Königseggwalder Str.");
break;
}
case 198248:
{
returnValue = F("Königseichenpark Triangel");
break;
}
case 198249:
{
returnValue = F("Königseichenstr.");
break;
}
case 198250:
{
returnValue = F("Königseichestr.");
break;
}
case 198251:
{
returnValue = F("Königserlen");
break;
}
case 198252:
{
returnValue = F("Königsesch");
break;
}
case 198253:
{
returnValue = F("Königseschstr.");
break;
}
case 198254:
{
returnValue = F("Königsfahrt");
break;
}
case 198255:
{
returnValue = F("Königsfarnweg");
break;
}
case 198256:
{
returnValue = F("Königsfeld");
break;
}
case 198257:
{
returnValue = F("Königsfelder Allee");
break;
}
case 198258:
{
returnValue = F("Königsfelder Str.");
break;
}
case 198259:
{
returnValue = F("Königsfelder Weg");
break;
}
case 198260:
{
returnValue = F("Königsfeldergasse");
break;
}
case 198261:
{
returnValue = F("Königsfelderstr.");
break;
}
case 198262:
{
returnValue = F("Königsfelderweg");
break;
}
case 198263:
{
returnValue = F("Königsfeldschleife");
break;
}
case 198264:
{
returnValue = F("Königsfeldstr.");
break;
}
case 198265:
{
returnValue = F("Königsfeldweg");
break;
}
case 198266:
{
returnValue = F("Königsforster Str.");
break;
}
case 198267:
{
returnValue = F("Königsfuhr");
break;
}
case 198268:
{
returnValue = F("Königsfurt");
break;
}
case 198269:
{
returnValue = F("Königsfähre");
break;
}
case 198270:
{
returnValue = F("Königsförder Str.");
break;
}
case 198271:
{
returnValue = F("Königsförderrade");
break;
}
case 198272:
{
returnValue = F("Königsgarten");
break;
}
case 198273:
{
returnValue = F("Königsgartenstr.");
break;
}
case 198274:
{
returnValue = F("Königsgasse");
break;
}
case 198275:
{
returnValue = F("Königsgehege");
break;
}
case 198276:
{
returnValue = F("Königsgestell");
break;
}
case 198277:
{
returnValue = F("Königsgraben");
break;
}
case 198278:
{
returnValue = F("Königsgruber Park");
break;
}
case 198279:
{
returnValue = F("Königsgruber Str.");
break;
}
case 198280:
{
returnValue = F("Königsgrund");
break;
}
case 198281:
{
returnValue = F("Königsgräberweg");
break;
}
case 198282:
{
returnValue = F("Königsgässchen");
break;
}
case 198283:
{
returnValue = F("Königshagener Ring");
break;
}
case 198284:
{
returnValue = F("Königshagener Str.");
break;
}
case 198285:
{
returnValue = F("Königshainer Str.");
break;
}
case 198286:
{
returnValue = F("Königshainer Weg");
break;
}
case 198287:
{
returnValue = F("Königshalde");
break;
}
case 198288:
{
returnValue = F("Königshaller Weg");
break;
}
case 198289:
{
returnValue = F("Königshalt");
break;
}
case 198290:
{
returnValue = F("Königsheide");
break;
}
case 198291:
{
returnValue = F("Königsheider Weg");
break;
}
case 198292:
{
returnValue = F("Königsheidering");
break;
}
case 198293:
{
returnValue = F("Königsheidestr.");
break;
}
case 198294:
{
returnValue = F("Königsheideweg");
break;
}
case 198295:
{
returnValue = F("Königsheimer Str.");
break;
}
case 198296:
{
returnValue = F("Königsheimer Strasse");
break;
}
case 198297:
{
returnValue = F("Königshoeker Str.");
break;
}
case 198298:
{
returnValue = F("Königshof");
break;
}
case 198299:
{
returnValue = F("Königshofallee");
break;
}
case 198300:
{
returnValue = F("Königshofener Str.");
break;
}
case 198301:
{
returnValue = F("Königshofer Str.");
break;
}
case 198302:
{
returnValue = F("Königshofer Weg");
break;
}
case 198303:
{
returnValue = F("Königshofgasse");
break;
}
case 198304:
{
returnValue = F("Königshofstr.");
break;
}
case 198305:
{
returnValue = F("Königshofwall");
break;
}
case 198306:
{
returnValue = F("Königshofweg");
break;
}
case 198307:
{
returnValue = F("Königsholz");
break;
}
case 198308:
{
returnValue = F("Königsholzweg");
break;
}
case 198309:
{
returnValue = F("Königshook");
break;
}
case 198310:
{
returnValue = F("Königshorster Damm");
break;
}
case 198311:
{
returnValue = F("Königshorster Str.");
break;
}
case 198312:
{
returnValue = F("Königshufen - Am Wiesengrund");
break;
}
case 198313:
{
returnValue = F("Königshöfer Str.");
break;
}
case 198314:
{
returnValue = F("Königshöfer Weg");
break;
}
case 198315:
{
returnValue = F("Königshügel");
break;
}
case 198316:
{
returnValue = F("Königshütte");
break;
}
case 198317:
{
returnValue = F("Königshütter Str.");
break;
}
case 198318:
{
returnValue = F("Königsiek");
break;
}
case 198319:
{
returnValue = F("Königsjagdweg");
break;
}
case 198320:
{
returnValue = F("Königskamp");
break;
}
case 198321:
{
returnValue = F("Königskampweg");
break;
}
case 198322:
{
returnValue = F("Königskeil");
break;
}
case 198323:
{
returnValue = F("Königskerze");
break;
}
case 198324:
{
returnValue = F("Königskiel");
break;
}
case 198325:
{
returnValue = F("Königskielweg");
break;
}
case 198326:
{
returnValue = F("Königskinderweg");
break;
}
case 198327:
{
returnValue = F("Königsknollstr.");
break;
}
case 198328:
{
returnValue = F("Königskoppel");
break;
}
case 198329:
{
returnValue = F("Königskreuzstr.");
break;
}
case 198330:
{
returnValue = F("Königskronenweg");
break;
}
case 198331:
{
returnValue = F("Königskrug");
break;
}
case 198332:
{
returnValue = F("Königskämpe");
break;
}
case 198333:
{
returnValue = F("Königsküppel");
break;
}
case 198334:
{
returnValue = F("Königslachener Weg");
break;
}
case 198335:
{
returnValue = F("Königsland");
break;
}
case 198336:
{
returnValue = F("Königslandwehr");
break;
}
case 198337:
{
returnValue = F("Königslau");
break;
}
case 198338:
{
returnValue = F("Königslindenstr.");
break;
}
case 198339:
{
returnValue = F("Königslinie");
break;
}
case 198340:
{
returnValue = F("Königsmarckstr.");
break;
}
case 198341:
{
returnValue = F("Königsmarckweg");
break;
}
case 198342:
{
returnValue = F("Königsmarkstr.");
break;
}
case 198343:
{
returnValue = F("Königsmoorstr.");
break;
}
case 198344:
{
returnValue = F("Königsmoorweg");
break;
}
case 198345:
{
returnValue = F("Königsmühle");
break;
}
case 198346:
{
returnValue = F("Königsmühlenweg");
break;
}
case 198347:
{
returnValue = F("Königsort");
break;
}
case 198348:
{
returnValue = F("Königspark");
break;
}
case 198349:
{
returnValue = F("Königspergerstr.");
break;
}
case 198350:
{
returnValue = F("Königspeten");
break;
}
case 198351:
{
returnValue = F("Königspfad");
break;
}
case 198352:
{
returnValue = F("Königsplatz");
break;
}
case 198353:
{
returnValue = F("Königspool");
break;
}
case 198354:
{
returnValue = F("Königsquellenpark");
break;
}
case 198355:
{
returnValue = F("Königsquellenweg");
break;
}
case 198356:
{
returnValue = F("Königsrain");
break;
}
case 198357:
{
returnValue = F("Königsrain-Trail");
break;
}
case 198358:
{
returnValue = F("Königsrainstr.");
break;
}
case 198359:
{
returnValue = F("Königsredder");
break;
}
case 198360:
{
returnValue = F("Königsreich");
break;
}
case 198361:
{
returnValue = F("Königsriehe");
break;
}
case 198362:
{
returnValue = F("Königsring");
break;
}
case 198363:
{
returnValue = F("Königsrässle");
break;
}
case 198364:
{
returnValue = F("Königsschneise");
break;
}
case 198365:
{
returnValue = F("Königsseer Fußweg");
break;
}
case 198366:
{
returnValue = F("Königsseer Str.");
break;
}
case 198367:
{
returnValue = F("Königsseestr.");
break;
}
case 198368:
{
returnValue = F("Königsseeweg");
break;
}
case 198369:
{
returnValue = F("Königssiefen");
break;
}
case 198370:
{
returnValue = F("Königssood");
break;
}
case 198371:
{
returnValue = F("Königsspitzer Str.");
break;
}
case 198372:
{
returnValue = F("Königsstieg");
break;
}
case 198373:
{
returnValue = F("Königsstr.");
break;
}
case 198374:
{
returnValue = F("Königsstraßl");
break;
}
case 198375:
{
returnValue = F("Königssträßchen");
break;
}
case 198376:
{
returnValue = F("Königssträßle");
break;
}
case 198377:
{
returnValue = F("Königsstuhl");
break;
}
case 198378:
{
returnValue = F("Königsstädter Str.");
break;
}
case 198379:
{
returnValue = F("Königsstühle");
break;
}
case 198380:
{
returnValue = F("Königstal");
break;
}
case 198381:
{
returnValue = F("Königstandstr.");
break;
}
case 198382:
{
returnValue = F("Königstandweg");
break;
}
case 198383:
{
returnValue = F("Königstannenweg");
break;
}
case 198384:
{
returnValue = F("Königstedter Weg");
break;
}
case 198385:
{
returnValue = F("Königstein");
break;
}
case 198386:
{
returnValue = F("Königsteinblick");
break;
}
case 198387:
{
returnValue = F("Königsteiner Allee");
break;
}
case 198388:
{
returnValue = F("Königsteiner Steig");
break;
}
case 198389:
{
returnValue = F("Königsteiner Str.");
break;
}
case 198390:
{
returnValue = F("Königsteiner Weg");
break;
}
case 198391:
{
returnValue = F("Königsteinstr.");
break;
}
case 198392:
{
returnValue = F("Königsteinweg");
break;
}
case 198393:
{
returnValue = F("Königsthal");
break;
}
case 198394:
{
returnValue = F("Königsthaler Str.");
break;
}
case 198395:
{
returnValue = F("Königstieg");
break;
}
case 198396:
{
returnValue = F("Königstor");
break;
}
case 198397:
{
returnValue = F("Königstr.");
break;
}
case 198398:
{
returnValue = F("Königstreppe");
break;
}
case 198399:
{
returnValue = F("Königstrift");
break;
}
case 198400:
{
returnValue = F("Königsträßchen");
break;
}
case 198401:
{
returnValue = F("Königsträßle");
break;
}
case 198402:
{
returnValue = F("Königstuhlblick");
break;
}
case 198403:
{
returnValue = F("Königstuhlstr.");
break;
}
case 198404:
{
returnValue = F("Königstädter Grenzweg");
break;
}
case 198405:
{
returnValue = F("Königstädter Str.");
break;
}
case 198406:
{
returnValue = F("Königswalder Marktsteig");
break;
}
case 198407:
{
returnValue = F("Königswalder Str.");
break;
}
case 198408:
{
returnValue = F("Königswaldstr.");
break;
}
case 198409:
{
returnValue = F("Königswaldweg");
break;
}
case 198410:
{
returnValue = F("Königswall");
break;
}
case 198411:
{
returnValue = F("Königswarter Str.");
break;
}
case 198412:
{
returnValue = F("Königswater");
break;
}
case 198413:
{
returnValue = F("Königsweg");
break;
}
case 198414:
{
returnValue = F("Königswegbrücke");
break;
}
case 198415:
{
returnValue = F("Königsweide");
break;
}
case 198416:
{
returnValue = F("Königswiese");
break;
}
case 198417:
{
returnValue = F("Königswiesenweg");
break;
}
case 198418:
{
returnValue = F("Königswieser Str.");
break;
}
case 198419:
{
returnValue = F("Königswinkel");
break;
}
case 198420:
{
returnValue = F("Königswinterer Str.");
break;
}
case 198421:
{
returnValue = F("Königswinterstr.");
break;
}
case 198422:
{
returnValue = F("Königswisch");
break;
}
case 198423:
{
returnValue = F("Königswälder Weg");
break;
}
case 198424:
{
returnValue = F("Königszelter Str.");
break;
}
case 198425:
{
returnValue = F("Königsäcker");
break;
}
case 198426:
{
returnValue = F("Königsöd");
break;
}
case 198427:
{
returnValue = F("Königsöschle");
break;
}
case 198428:
{
returnValue = F("Königweg");
break;
}
case 198429:
{
returnValue = F("Könitzer Str.");
break;
}
case 198430:
{
returnValue = F("Könkendorfer Str.");
break;
}
case 198431:
{
returnValue = F("Könkendorfer Weg");
break;
}
case 198432:
{
returnValue = F("Könkenweg");
break;
}
case 198433:
{
returnValue = F("Könnernsche Str.");
break;
}
case 198434:
{
returnValue = F("Könnernscher Weg");
break;
}
case 198435:
{
returnValue = F("Könneröd");
break;
}
case 198436:
{
returnValue = F("Köntjeweg");
break;
}
case 198437:
{
returnValue = F("Köntrup");
break;
}
case 198438:
{
returnValue = F("Könzgenstr.");
break;
}
case 198439:
{
returnValue = F("Köp'sche Schneise");
break;
}
case 198440:
{
returnValue = F("Köpeltal");
break;
}
case 198441:
{
returnValue = F("Köpengarten");
break;
}
case 198442:
{
returnValue = F("Köpenicker Allee");
break;
}
case 198443:
{
returnValue = F("Köpenicker Chaussee");
break;
}
case 198444:
{
returnValue = F("Köpenicker Landstr.");
break;
}
case 198445:
{
returnValue = F("Köpenicker Schäferei");
break;
}
case 198446:
{
returnValue = F("Köpenicker Str.");
break;
}
case 198447:
{
returnValue = F("Köpenicker Weg");
break;
}
case 198448:
{
returnValue = F("Köpeniker Weg");
break;
}
case 198449:
{
returnValue = F("Köpergässel");
break;
}
case 198450:
{
returnValue = F("Köperhof");
break;
}
case 198451:
{
returnValue = F("Köperlesberg");
break;
}
case 198452:
{
returnValue = F("Köpernitzer Dorfstr.");
break;
}
case 198453:
{
returnValue = F("Köperstr.");
break;
}
case 198454:
{
returnValue = F("Köpfangerl");
break;
}
case 198455:
{
returnValue = F("Köpfchen");
break;
}
case 198456:
{
returnValue = F("Köpfchenstr.");
break;
}
case 198457:
{
returnValue = F("Köpfchensweg");
break;
}
case 198458:
{
returnValue = F("Köpfchenweg");
break;
}
case 198459:
{
returnValue = F("Köpfelgasse");
break;
}
case 198460:
{
returnValue = F("Köpfelsbergweg");
break;
}
case 198461:
{
returnValue = F("Köpferweg");
break;
}
case 198462:
{
returnValue = F("Köpfingen");
break;
}
case 198463:
{
returnValue = F("Köpfinger Str.");
break;
}
case 198464:
{
returnValue = F("Köpfle");
break;
}
case 198465:
{
returnValue = F("Köpflescheuerlewaldweg");
break;
}
case 198466:
{
returnValue = F("Köpflesweg");
break;
}
case 198467:
{
returnValue = F("Köpfleweg");
break;
}
case 198468:
{
returnValue = F("Köpfwiesenweg");
break;
}
case 198469:
{
returnValue = F("Köpkerhof");
break;
}
case 198470:
{
returnValue = F("Köpkes Berg");
break;
}
case 198471:
{
returnValue = F("Köplerstr.");
break;
}
case 198472:
{
returnValue = F("Köplitz");
break;
}
case 198473:
{
returnValue = F("Köpmeststr.");
break;
}
case 198474:
{
returnValue = F("Köpnick");
break;
}
case 198475:
{
returnValue = F("Köpnicker Weg");
break;
}
case 198476:
{
returnValue = F("Köppche");
break;
}
case 198477:
{
returnValue = F("Köppchen");
break;
}
case 198478:
{
returnValue = F("Köppchenweg");
break;
}
case 198479:
{
returnValue = F("Köppel");
break;
}
case 198480:
{
returnValue = F("Köppelbarg");
break;
}
case 198481:
{
returnValue = F("Köppelblick");
break;
}
case 198482:
{
returnValue = F("Köppelbrunnenschneise");
break;
}
case 198483:
{
returnValue = F("Köppelchen");
break;
}
case 198484:
{
returnValue = F("Köppeler Str.");
break;
}
case 198485:
{
returnValue = F("Köppeler Weg");
break;
}
case 198486:
{
returnValue = F("Köppelhof");
break;
}
case 198487:
{
returnValue = F("Köppelschneidweg");
break;
}
case 198488:
{
returnValue = F("Köppelsdorfer Str.");
break;
}
case 198489:
{
returnValue = F("Köppelsfeld");
break;
}
case 198490:
{
returnValue = F("Köppelstr.");
break;
}
case 198491:
{
returnValue = F("Köppelsweg");
break;
}
case 198492:
{
returnValue = F("Köppeltorstr.");
break;
}
case 198493:
{
returnValue = F("Köppelweg");
break;
}
case 198494:
{
returnValue = F("Köppen Kerkpädch");
break;
}
case 198495:
{
returnValue = F("Köppenfeld");
break;
}
case 198496:
{
returnValue = F("Köppenweg");
break;
}
case 198497:
{
returnValue = F("Köpperner Str.");
break;
}
case 198498:
{
returnValue = F("Köpperner Tal");
break;
}
case 198499:
{
returnValue = F("Köppernitztal (Höhenweg)");
break;
}
case 198500:
{
returnValue = F("Köpperweg");
break;
}
case 198501:
{
returnValue = F("Köppes Gasse");
break;
}
case 198502:
{
returnValue = F("Köppkenweg");
break;
}
case 198503:
{
returnValue = F("Köppleinstr.");
break;
}
case 198504:
{
returnValue = F("Köpplerweg");
break;
}
case 198505:
{
returnValue = F("Köpsiel Weg");
break;
}
case 198506:
{
returnValue = F("Körba");
break;
}
case 198507:
{
returnValue = F("Körbachstr.");
break;
}
case 198508:
{
returnValue = F("Körbaer Str.");
break;
}
case 198509:
{
returnValue = F("Körbaer Weg");
break;
}
case 198510:
{
returnValue = F("Körbecker Str.");
break;
}
case 198511:
{
returnValue = F("Körbecker Weg");
break;
}
case 198512:
{
returnValue = F("Körbekestr.");
break;
}
case 198513:
{
returnValue = F("Körbelitzer Weg");
break;
}
case 198514:
{
returnValue = F("Körbelshook");
break;
}
case 198515:
{
returnValue = F("Körbelstr.");
break;
}
case 198516:
{
returnValue = F("Körbenhof");
break;
}
case 198517:
{
returnValue = F("Körbenstr.");
break;
}
case 198518:
{
returnValue = F("Körberberg");
break;
}
case 198519:
{
returnValue = F("Körbergasse");
break;
}
case 198520:
{
returnValue = F("Körbergäßle");
break;
}
case 198521:
{
returnValue = F("Körberstr.");
break;
}
case 198522:
{
returnValue = F("Körbigweg");
break;
}
case 198523:
{
returnValue = F("Körbin-Neu");
break;
}
case 198524:
{
returnValue = F("Körbiner Str.");
break;
}
case 198525:
{
returnValue = F("Körbiner Weg");
break;
}
case 198526:
{
returnValue = F("Körbisdorfer Str.");
break;
}
case 198527:
{
returnValue = F("Körbiskruger Str.");
break;
}
case 198528:
{
returnValue = F("Körbitz");
break;
}
case 198529:
{
returnValue = F("Körbitzweg");
break;
}
case 198530:
{
returnValue = F("Körborner Str.");
break;
}
case 198531:
{
returnValue = F("Körchower Str.");
break;
}
case 198532:
{
returnValue = F("Kördelandsweg");
break;
}
case 198533:
{
returnValue = F("Körferstr.");
break;
}
case 198534:
{
returnValue = F("Köriser Str.");
break;
}
case 198535:
{
returnValue = F("Körkenbreede");
break;
}
case 198536:
{
returnValue = F("Körkesweg");
break;
}
case 198537:
{
returnValue = F("Körkwitzer Weg");
break;
}
case 198538:
{
returnValue = F("Körlegasse");
break;
}
case 198539:
{
returnValue = F("Körler Str.");
break;
}
case 198540:
{
returnValue = F("Körling");
break;
}
case 198541:
{
returnValue = F("Körlitzer Str.");
break;
}
case 198542:
{
returnValue = F("Körmeisterweg");
break;
}
case 198543:
{
returnValue = F("Körnbach");
break;
}
case 198544:
{
returnValue = F("Körnbacher Str.");
break;
}
case 198545:
{
returnValue = F("Körnbachstr.");
break;
}
case 198546:
{
returnValue = F("Körnberghaus");
break;
}
case 198547:
{
returnValue = F("Körnbergweg");
break;
}
case 198548:
{
returnValue = F("Körnerallee");
break;
}
case 198549:
{
returnValue = F("Körnerberg");
break;
}
case 198550:
{
returnValue = F("Körnerbruch");
break;
}
case 198551:
{
returnValue = F("Körnergasse");
break;
}
case 198552:
{
returnValue = F("Körnergäßchen");
break;
}
case 198553:
{
returnValue = F("Körnerplatz");
break;
}
case 198554:
{
returnValue = F("Körnerrain");
break;
}
case 198555:
{
returnValue = F("Körnersche Str.");
break;
}
case 198556:
{
returnValue = F("Körnersgasse");
break;
}
case 198557:
{
returnValue = F("Körnerstr.");
break;
}
case 198558:
{
returnValue = F("Körnersweg");
break;
}
case 198559:
{
returnValue = F("Körnerweg");
break;
}
case 198560:
{
returnValue = F("Körnick");
break;
}
case 198561:
{
returnValue = F("Körnickerfeld");
break;
}
case 198562:
{
returnValue = F("Körnle");
break;
}
case 198563:
{
returnValue = F("Körntalstr.");
break;
}
case 198564:
{
returnValue = F("Körntleswieseweg");
break;
}
case 198565:
{
returnValue = F("Körperstr.");
break;
}
case 198566:
{
returnValue = F("Körpricher Str.");
break;
}
case 198567:
{
returnValue = F("Körrenziger Str.");
break;
}
case 198568:
{
returnValue = F("Körschtalstr.");
break;
}
case 198569:
{
returnValue = F("Körschtalsträssle");
break;
}
case 198570:
{
returnValue = F("Körschtalsträsslee");
break;
}
case 198571:
{
returnValue = F("Körschtalweg");
break;
}
case 198572:
{
returnValue = F("Körsenkamp");
break;
}
case 198573:
{
returnValue = F("Körsestr.");
break;
}
case 198574:
{
returnValue = F("Kört Moor");
break;
}
case 198575:
{
returnValue = F("Körte Enden");
break;
}
case 198576:
{
returnValue = F("Körte Meedeweg");
break;
}
case 198577:
{
returnValue = F("Körte Twenter");
break;
}
case 198578:
{
returnValue = F("Körte Weg");
break;
}
case 198579:
{
returnValue = F("Körtestr.");
break;
}
case 198580:
{
returnValue = F("Körtingstr.");
break;
}
case 198581:
{
returnValue = F("Körtingweg");
break;
}
case 198582:
{
returnValue = F("Körtingweg / Brandbergweg");
break;
}
case 198583:
{
returnValue = F("Körtlandweg");
break;
}
case 198584:
{
returnValue = F("Körtlinghausen");
break;
}
case 198585:
{
returnValue = F("Körtlinghauser Weg");
break;
}
case 198586:
{
returnValue = F("Körtlingsfeld");
break;
}
case 198587:
{
returnValue = F("Körtlingstr.");
break;
}
case 198588:
{
returnValue = F("Körtlingsweg");
break;
}
case 198589:
{
returnValue = F("Körtmoor I");
break;
}
case 198590:
{
returnValue = F("Körtweg");
break;
}
case 198591:
{
returnValue = F("Körversbusch");
break;
}
case 198592:
{
returnValue = F("Körversweg");
break;
}
case 198593:
{
returnValue = F("Körvpad");
break;
}
case 198594:
{
returnValue = F("Köschbitze");
break;
}
case 198595:
{
returnValue = F("Köschinger Str.");
break;
}
case 198596:
{
returnValue = F("Köseleweg");
break;
}
case 198597:
{
returnValue = F("Köselgasse");
break;
}
case 198598:
{
returnValue = F("Köselitzer Dorfstr.");
break;
}
case 198599:
{
returnValue = F("Köselitzer Weg");
break;
}
case 198600:
{
returnValue = F("Köselitzplatz");
break;
}
case 198601:
{
returnValue = F("Köselstr.");
break;
}
case 198602:
{
returnValue = F("Kösener Str.");
break;
}
case 198603:
{
returnValue = F("Kösheide");
break;
}
case 198604:
{
returnValue = F("Kösinger Feld");
break;
}
case 198605:
{
returnValue = F("Kösinger Str.");
break;
}
case 198606:
{
returnValue = F("Köslarweg");
break;
}
case 198607:
{
returnValue = F("Köslauer Weg");
break;
}
case 198608:
{
returnValue = F("Kösliner Damm");
break;
}
case 198609:
{
returnValue = F("Kösliner Ring");
break;
}
case 198610:
{
returnValue = F("Kösliner Str.");
break;
}
case 198611:
{
returnValue = F("Kösliner Weg");
break;
}
case 198612:
{
returnValue = F("Kösnitzer Str.");
break;
}
case 198613:
{
returnValue = F("Kösseine Ringloipe");
break;
}
case 198614:
{
returnValue = F("Kösseinering");
break;
}
case 198615:
{
returnValue = F("Kösseinestr.");
break;
}
case 198616:
{
returnValue = F("Kösseineweg");
break;
}
case 198617:
{
returnValue = F("Kösseinstr.");
break;
}
case 198618:
{
returnValue = F("Kössentöbeleweg");
break;
}
case 198619:
{
returnValue = F("Kösserner Dorfstr.");
break;
}
case 198620:
{
returnValue = F("Kösserner Str.");
break;
}
case 198621:
{
returnValue = F("Kösslerstr.");
break;
}
case 198622:
{
returnValue = F("Kössulner Str.");
break;
}
case 198623:
{
returnValue = F("Köstenbach");
break;
}
case 198624:
{
returnValue = F("Köstener Str.");
break;
}
case 198625:
{
returnValue = F("Köster Drift");
break;
}
case 198626:
{
returnValue = F("Köster Pättken");
break;
}
case 198627:
{
returnValue = F("Köster's Kamp");
break;
}
case 198628:
{
returnValue = F("Köster-Dirxen-Str.");
break;
}
case 198629:
{
returnValue = F("Köster-Menke-Str.");
break;
}
case 198630:
{
returnValue = F("Köster-Roeren-Str.");
break;
}
case 198631:
{
returnValue = F("Kösterbecker Str.");
break;
}
case 198632:
{
returnValue = F("Kösterberg");
break;
}
case 198633:
{
returnValue = F("Kösterbrink");
break;
}
case 198634:
{
returnValue = F("Kösterecke");
break;
}
case 198635:
{
returnValue = F("Kösterfeldplatz");
break;
}
case 198636:
{
returnValue = F("Kösterfeldstr.");
break;
}
case 198637:
{
returnValue = F("Köstergang");
break;
}
case 198638:
{
returnValue = F("Kösterkamp");
break;
}
case 198639:
{
returnValue = F("Kösterkampstr.");
break;
}
case 198640:
{
returnValue = F("Kösterkoppel");
break;
}
case 198641:
{
returnValue = F("Kösterpool");
break;
}
case 198642:
{
returnValue = F("Kösterrodenweg");
break;
}
case 198643:
{
returnValue = F("Kösters Berg");
break;
}
case 198644:
{
returnValue = F("Kösters Brink");
break;
}
case 198645:
{
returnValue = F("Kösters Brügg");
break;
}
case 198646:
{
returnValue = F("Kösters Damm");
break;
}
case 198647:
{
returnValue = F("Kösters Feld");
break;
}
case 198648:
{
returnValue = F("Kösters Gang");
break;
}
case 198649:
{
returnValue = F("Kösters Kamp");
break;
}
case 198650:
{
returnValue = F("Kösters Land");
break;
}
case 198651:
{
returnValue = F("Kösters Rehre");
break;
}
case 198652:
{
returnValue = F("Kösters Siepen");
break;
}
case 198653:
{
returnValue = F("Kösters Sträßchen");
break;
}
case 198654:
{
returnValue = F("Kösters Weide");
break;
}
case 198655:
{
returnValue = F("Köstersholz");
break;
}
case 198656:
{
returnValue = F("Kösterskamp");
break;
}
case 198657:
{
returnValue = F("Köstersteg");
break;
}
case 198658:
{
returnValue = F("Kösterstieg");
break;
}
case 198659:
{
returnValue = F("Kösterstr.");
break;
}
case 198660:
{
returnValue = F("Kösterstraat");
break;
}
case 198661:
{
returnValue = F("Köstersweg");
break;
}
case 198662:
{
returnValue = F("Köstertwiete");
break;
}
case 198663:
{
returnValue = F("Kösterweg");
break;
}
case 198664:
{
returnValue = F("Kösterwäi");
break;
}
case 198665:
{
returnValue = F("Köstischjäßje");
break;
}
case 198666:
{
returnValue = F("Köstitzer Str.");
break;
}
case 198667:
{
returnValue = F("Köstlbach");
break;
}
case 198668:
{
returnValue = F("Köstlbacher Str.");
break;
}
case 198669:
{
returnValue = F("Köstlerfeld");
break;
}
case 198670:
{
returnValue = F("Köstlerring");
break;
}
case 198671:
{
returnValue = F("Köstlersleite");
break;
}
case 198672:
{
returnValue = F("Köstlerstr.");
break;
}
case 198673:
{
returnValue = F("Köstlinstr.");
break;
}
case 198674:
{
returnValue = F("Köstorf");
break;
}
case 198675:
{
returnValue = F("Köstorfer Berg");
break;
}
case 198676:
{
returnValue = F("Köstorfer Str.");
break;
}
case 198677:
{
returnValue = F("Köstritzer Str.");
break;
}
case 198678:
{
returnValue = F("Köstweg");
break;
}
case 198679:
{
returnValue = F("Köszeger Str.");
break;
}
case 198680:
{
returnValue = F("Kötachstr.");
break;
}
case 198681:
{
returnValue = F("Kötachtalstr.");
break;
}
case 198682:
{
returnValue = F("Kötenweg");
break;
}
case 198683:
{
returnValue = F("Köter Weg");
break;
}
case 198684:
{
returnValue = F("Köterberg");
break;
}
case 198685:
{
returnValue = F("Köterbergblick");
break;
}
case 198686:
{
returnValue = F("Köterbergstr.");
break;
}
case 198687:
{
returnValue = F("Köterbusch");
break;
}
case 198688:
{
returnValue = F("Köterei");
break;
}
case 198689:
{
returnValue = F("Köterender Str.");
break;
}
case 198690:
{
returnValue = F("Köterhörn");
break;
}
case 198691:
{
returnValue = F("Kötermoorer Str.");
break;
}
case 198692:
{
returnValue = F("Köterriege");
break;
}
case 198693:
{
returnValue = F("Köterstr.");
break;
}
case 198694:
{
returnValue = F("Köterweg");
break;
}
case 198695:
{
returnValue = F("Köterwelt");
break;
}
case 198696:
{
returnValue = F("Köthelgrund");
break;
}
case 198697:
{
returnValue = F("Köthener Chaussee");
break;
}
case 198698:
{
returnValue = F("Köthener Landstr.");
break;
}
case 198699:
{
returnValue = F("Köthener Str.");
break;
}
case 198700:
{
returnValue = F("Köthengasse");
break;
}
case 198701:
{
returnValue = F("Köthenitzer Grund");
break;
}
case 198702:
{
returnValue = F("Köthensdorfer Hauptstr.");
break;
}
case 198703:
{
returnValue = F("Köthensdorfer Str.");
break;
}
case 198704:
{
returnValue = F("Köthental");
break;
}
case 198705:
{
returnValue = F("Köthenwald");
break;
}
case 198706:
{
returnValue = F("Köthenwaldstr.");
break;
}
case 198707:
{
returnValue = F("Kötherheideweg");
break;
}
case 198708:
{
returnValue = F("Kötherhof");
break;
}
case 198709:
{
returnValue = F("Kötherkamp");
break;
}
case 198710:
{
returnValue = F("Köthersche Siedlung");
break;
}
case 198711:
{
returnValue = F("Köthner-Giesecke-Weg");
break;
}
case 198712:
{
returnValue = F("Köthnerberg");
break;
}
case 198713:
{
returnValue = F("Köthnerheide");
break;
}
case 198714:
{
returnValue = F("Köthnerkamp");
break;
}
case 198715:
{
returnValue = F("Köthnerlandsweg");
break;
}
case 198716:
{
returnValue = F("Köthnerstr.");
break;
}
case 198717:
{
returnValue = F("Köthnerweg");
break;
}
case 198718:
{
returnValue = F("Köthnitz");
break;
}
case 198719:
{
returnValue = F("Köthnitzer Weg");
break;
}
case 198720:
{
returnValue = F("Kötitzer Park");
break;
}
case 198721:
{
returnValue = F("Kötitzer Str.");
break;
}
case 198722:
{
returnValue = F("Kötner Weg");
break;
}
case 198723:
{
returnValue = F("Kötnerberg");
break;
}
case 198724:
{
returnValue = F("Kötnerdamm");
break;
}
case 198725:
{
returnValue = F("Kötnerei");
break;
}
case 198726:
{
returnValue = F("Kötnerende");
break;
}
case 198727:
{
returnValue = F("Kötnerhöfen");
break;
}
case 198728:
{
returnValue = F("Kötnerkamp");
break;
}
case 198729:
{
returnValue = F("Kötnermoor");
break;
}
case 198730:
{
returnValue = F("Kötnerplatz");
break;
}
case 198731:
{
returnValue = F("Kötnerreihe");
break;
}
case 198732:
{
returnValue = F("Kötnerstr.");
break;
}
case 198733:
{
returnValue = F("Kötnerweg");
break;
}
case 198734:
{
returnValue = F("Kötnerweide");
break;
}
case 198735:
{
returnValue = F("Kötschauer Str.");
break;
}
case 198736:
{
returnValue = F("Kötschauweg");
break;
}
case 198737:
{
returnValue = F("Kötschdorf");
break;
}
case 198738:
{
returnValue = F("Kötschlitzer Allee");
break;
}
case 198739:
{
returnValue = F("Kötschlitzer Str.");
break;
}
case 198740:
{
returnValue = F("Köttchen");
break;
}
case 198741:
{
returnValue = F("Kötteler Graben");
break;
}
case 198742:
{
returnValue = F("Köttendorfer Str.");
break;
}
case 198743:
{
returnValue = F("Köttener Str.");
break;
}
case 198744:
{
returnValue = F("Köttenicher Str.");
break;
}
case 198745:
{
returnValue = F("Köttensdorf");
break;
}
case 198746:
{
returnValue = F("Köttensdorfer Str.");
break;
}
case 198747:
{
returnValue = F("Kötterbachstr.");
break;
}
case 198748:
{
returnValue = F("Kötterberg");
break;
}
case 198749:
{
returnValue = F("Kötterhagen");
break;
}
case 198750:
{
returnValue = F("Kötterheide");
break;
}
case 198751:
{
returnValue = F("Köttericher Str.");
break;
}
case 198752:
{
returnValue = F("Kötteringer Str.");
break;
}
case 198753:
{
returnValue = F("Kötteritzscher Ring");
break;
}
case 198754:
{
returnValue = F("Köttermoor");
break;
}
case 198755:
{
returnValue = F("Kötterner Weg");
break;
}
case 198756:
{
returnValue = F("Köttersberg");
break;
}
case 198757:
{
returnValue = F("Köttershaus");
break;
}
case 198758:
{
returnValue = F("Kötterskamp");
break;
}
case 198759:
{
returnValue = F("Kötterstr.");
break;
}
case 198760:
{
returnValue = F("Köttersweg");
break;
}
case 198761:
{
returnValue = F("Kötterweg");
break;
}
case 198762:
{
returnValue = F("Kötterwiesen");
break;
}
case 198763:
{
returnValue = F("Kötteröde");
break;
}
case 198764:
{
returnValue = F("Köttewitz");
break;
}
case 198765:
{
returnValue = F("Köttichauer Str.");
break;
}
case 198766:
{
returnValue = F("Köttingen");
break;
}
case 198767:
{
returnValue = F("Köttinger Hecke");
break;
}
case 198768:
{
returnValue = F("Köttinger Str.");
break;
}
case 198769:
{
returnValue = F("Köttinger Weg");
break;
}
case 198770:
{
returnValue = F("Köttingsbachstr.");
break;
}
case 198771:
{
returnValue = F("Köttingstr.");
break;
}
case 198772:
{
returnValue = F("Köttler Grund");
break;
}
case 198773:
{
returnValue = F("Köttlitz");
break;
}
case 198774:
{
returnValue = F("Köttlitzer Str.");
break;
}
case 198775:
{
returnValue = F("Köttmannsdorfer Hauptstr.");
break;
}
case 198776:
{
returnValue = F("Köttnitzstr.");
break;
}
case 198777:
{
returnValue = F("Köttschen");
break;
}
case 198778:
{
returnValue = F("Köttwitzscher Kirchsteig");
break;
}
case 198779:
{
returnValue = F("Köttwitzscher Str.");
break;
}
case 198780:
{
returnValue = F("Kötzengraben");
break;
}
case 198781:
{
returnValue = F("Kötzenheckenweg");
break;
}
case 198782:
{
returnValue = F("Kötzer Str.");
break;
}
case 198783:
{
returnValue = F("Kötzer Weg");
break;
}
case 198784:
{
returnValue = F("Kötzersricht");
break;
}
case 198785:
{
returnValue = F("Kötzleshalde");
break;
}
case 198786:
{
returnValue = F("Kötzliner Str.");
break;
}
case 198787:
{
returnValue = F("Kötznerstr.");
break;
}
case 198788:
{
returnValue = F("Kötzschauer Str.");
break;
}
case 198789:
{
returnValue = F("Kötzschenbrodaer Str.");
break;
}
case 198790:
{
returnValue = F("Kötzschener Str.");
break;
}
case 198791:
{
returnValue = F("Kötzschener Weg");
break;
}
case 198792:
{
returnValue = F("Kötzstr.");
break;
}
case 198793:
{
returnValue = F("Kötztinger Str.");
break;
}
case 198794:
{
returnValue = F("Kövener Kamp");
break;
}
case 198795:
{
returnValue = F("Köveniger Str.");
break;
}
case 198796:
{
returnValue = F("Kößing");
break;
}
case 198797:
{
returnValue = F("Kößlarner Str.");
break;
}
case 198798:
{
returnValue = F("Kößlmühlstr.");
break;
}
case 198799:
{
returnValue = F("Kößnacher Str.");
break;
}
case 198800:
{
returnValue = F("Kübelbergsteinbruchweg");
break;
}
case 198801:
{
returnValue = F("Kübelbodenweg");
break;
}
case 198802:
{
returnValue = F("Kübelestr.");
break;
}
case 198803:
{
returnValue = F("Kübelgasse");
break;
}
case 198804:
{
returnValue = F("Kübelmarkt");
break;
}
case 198805:
{
returnValue = F("Kübelrainstr.");
break;
}
case 198806:
{
returnValue = F("Kübelsteiner Str.");
break;
}
case 198807:
{
returnValue = F("Kübelwasenweg");
break;
}
case 198808:
{
returnValue = F("Kübelweg");
break;
}
case 198809:
{
returnValue = F("Kübenborn");
break;
}
case 198810:
{
returnValue = F("Küblerbückli");
break;
}
case 198811:
{
returnValue = F("Küblergasse");
break;
}
case 198812:
{
returnValue = F("Küblersgäßchen");
break;
}
case 198813:
{
returnValue = F("Küblerstr.");
break;
}
case 198814:
{
returnValue = F("Küblerweg");
break;
}
case 198815:
{
returnValue = F("Küblinger Ring");
break;
}
case 198816:
{
returnValue = F("Küblinger Str.");
break;
}
case 198817:
{
returnValue = F("Küchelbachstr.");
break;
}
case 198818:
{
returnValue = F("Küchelsfurr");
break;
}
case 198819:
{
returnValue = F("Küchelstr.");
break;
}
case 198820:
{
returnValue = F("Küchenacker");
break;
}
case 198821:
{
returnValue = F("Küchenackersteige");
break;
}
case 198822:
{
returnValue = F("Küchenallee");
break;
}
case 198823:
{
returnValue = F("Küchenberger Feld");
break;
}
case 198824:
{
returnValue = F("Küchenberger Höhe");
break;
}
case 198825:
{
returnValue = F("Küchenberger Str.");
break;
}
case 198826:
{
returnValue = F("Küchenfeld");
break;
}
case 198827:
{
returnValue = F("Küchengarten");
break;
}
case 198828:
{
returnValue = F("Küchengartenweg");
break;
}
case 198829:
{
returnValue = F("Küchengasse");
break;
}
case 198830:
{
returnValue = F("Küchengestell");
break;
}
case 198831:
{
returnValue = F("Küchengrund");
break;
}
case 198832:
{
returnValue = F("Küchenmatten");
break;
}
case 198833:
{
returnValue = F("Küchenmeisterallee");
break;
}
case 198834:
{
returnValue = F("Küchenmeisterschneise");
break;
}
case 198835:
{
returnValue = F("Küchenmeisterstr.");
break;
}
case 198836:
{
returnValue = F("Küchenschellenweg");
break;
}
case 198837:
{
returnValue = F("Küchensteige");
break;
}
case 198838:
{
returnValue = F("Küchenweg");
break;
}
case 198839:
{
returnValue = F("Küchenwiesen");
break;
}
case 198840:
{
returnValue = F("Küchenwiesenweg");
break;
}
case 198841:
{
returnValue = F("Küchesheimer Hof");
break;
}
case 198842:
{
returnValue = F("Küchgarten");
break;
}
case 198843:
{
returnValue = F("Küchgartenstr.");
break;
}
case 198844:
{
returnValue = F("Küchlerstr.");
break;
}
case 198845:
{
returnValue = F("Küchleweg");
break;
}
case 198846:
{
returnValue = F("Kückallee");
break;
}
case 198847:
{
returnValue = F("Kückelberg");
break;
}
case 198848:
{
returnValue = F("Kückelburg");
break;
}
case 198849:
{
returnValue = F("Kückelhausen");
break;
}
case 198850:
{
returnValue = F("Kückelhauser Str.");
break;
}
case 198851:
{
returnValue = F("Kückelheim");
break;
}
case 198852:
{
returnValue = F("Kückensweg");
break;
}
case 198853:
{
returnValue = F("Kückerstr.");
break;
}
case 198854:
{
returnValue = F("Kückesweg");
break;
}
case 198855:
{
returnValue = F("Kückewiehe");
break;
}
case 198856:
{
returnValue = F("Kückhovener Str.");
break;
}
case 198857:
{
returnValue = F("Kückhover Weg");
break;
}
case 198858:
{
returnValue = F("Kücklingsweg");
break;
}
case 198859:
{
returnValue = F("Kückstege");
break;
}
case 198860:
{
returnValue = F("Kückstr.");
break;
}
case 198861:
{
returnValue = F("Küddowstr.");
break;
}
case 198862:
{
returnValue = F("Küdower Str.");
break;
}
case 198863:
{
returnValue = F("Küerbiker Str.");
break;
}
case 198864:
{
returnValue = F("Küfeen");
break;
}
case 198865:
{
returnValue = F("Küfenweg");
break;
}
case 198866:
{
returnValue = F("Küferbrunnen");
break;
}
case 198867:
{
returnValue = F("Küfereck");
break;
}
case 198868:
{
returnValue = F("Küfereiweg");
break;
}
case 198869:
{
returnValue = F("Küfergasse");
break;
}
case 198870:
{
returnValue = F("Küfergässchen");
break;
}
case 198871:
{
returnValue = F("Küfergäßle");
break;
}
case 198872:
{
returnValue = F("Küferplatz");
break;
}
case 198873:
{
returnValue = F("Küferring");
break;
}
case 198874:
{
returnValue = F("Küferstr.");
break;
}
case 198875:
{
returnValue = F("Küferweg");
break;
}
case 198876:
{
returnValue = F("Küfnersgewend");
break;
}
case 198877:
{
returnValue = F("Kügelgenstr.");
break;
}
case 198878:
{
returnValue = F("Kügelsteige");
break;
}
case 198879:
{
returnValue = F("Küglerweg");
break;
}
case 198880:
{
returnValue = F("Kühackerweg");
break;
}
case 198881:
{
returnValue = F("Kühamer Str.");
break;
}
case 198882:
{
returnValue = F("Kühamer Weg");
break;
}
case 198883:
{
returnValue = F("Kühbach");
break;
}
case 198884:
{
returnValue = F("Kühbach 3");
break;
}
case 198885:
{
returnValue = F("Kühbachstr.");
break;
}
case 198886:
{
returnValue = F("Kühbachäcker");
break;
}
case 198887:
{
returnValue = F("Kühberg");
break;
}
case 198888:
{
returnValue = F("Kühbergsflur");
break;
}
case 198889:
{
returnValue = F("Kühbergstr.");
break;
}
case 198890:
{
returnValue = F("Kühbergweg");
break;
}
case 198891:
{
returnValue = F("Kühbettstr.");
break;
}
case 198892:
{
returnValue = F("Kühbonnerschneiße");
break;
}
case 198893:
{
returnValue = F("Kühbrunnenweg");
break;
}
case 198894:
{
returnValue = F("Kühbuckel");
break;
}
case 198895:
{
returnValue = F("Kühbuckweg");
break;
}
case 198896:
{
returnValue = F("Kühbörncheshof");
break;
}
case 198897:
{
returnValue = F("Kühedorfer Weg");
break;
}
case 198898:
{
returnValue = F("Kühegert");
break;
}
case 198899:
{
returnValue = F("Küheichenweg");
break;
}
case 198900:
{
returnValue = F("Küherdsträschen");
break;
}
case 198901:
{
returnValue = F("Kühfelder Str.");
break;
}
case 198902:
{
returnValue = F("Kühgasse");
break;
}
case 198903:
{
returnValue = F("Kühgassse");
break;
}
case 198904:
{
returnValue = F("Kühkirchhofweg");
break;
}
case 198905:
{
returnValue = F("Kühkopfstr.");
break;
}
case 198906:
{
returnValue = F("Kühl");
break;
}
case 198907:
{
returnValue = F("Kühland");
break;
}
case 198908:
{
returnValue = F("Kühlandweg");
break;
}
case 198909:
{
returnValue = F("Kühlaustr.");
break;
}
case 198910:
{
returnValue = F("Kühlbachtal");
break;
}
case 198911:
{
returnValue = F("Kühlbachweg");
break;
}
case 198912:
{
returnValue = F("Kühlbrandweg");
break;
}
case 198913:
{
returnValue = F("Kühlbrunnenweg");
break;
}
case 198914:
{
returnValue = F("Kühlbrunnweg");
break;
}
case 198915:
{
returnValue = F("Kühlenberg");
break;
}
case 198916:
{
returnValue = F("Kühlenbronn");
break;
}
case 198917:
{
returnValue = F("Kühlenbronnerweg");
break;
}
case 198918:
{
returnValue = F("Kühlene");
break;
}
case 198919:
{
returnValue = F("Kühlenfelser Str.");
break;
}
case 198920:
{
returnValue = F("Kühlenmorgen");
break;
}
case 198921:
{
returnValue = F("Kühlenrott");
break;
}
case 198922:
{
returnValue = F("Kühlensitz");
break;
}
case 198923:
{
returnValue = F("Kühlenstampfweg");
break;
}
case 198924:
{
returnValue = F("Kühlenthaler Str.");
break;
}
case 198925:
{
returnValue = F("Kühler Bornweg");
break;
}
case 198926:
{
returnValue = F("Kühler Brunnen");
break;
}
case 198927:
{
returnValue = F("Kühler Grund");
break;
}
case 198928:
{
returnValue = F("Kühler Kamp");
break;
}
case 198929:
{
returnValue = F("Kühler Morgen");
break;
}
case 198930:
{
returnValue = F("Kühler Waldweg");
break;
}
case 198931:
{
returnValue = F("Kühlerblick");
break;
}
case 198932:
{
returnValue = F("Kühlersfeld");
break;
}
case 198933:
{
returnValue = F("Kühlerstr.");
break;
}
case 198934:
{
returnValue = F("Kühlerweg");
break;
}
case 198935:
{
returnValue = F("Kühlfeldsweg");
break;
}
case 198936:
{
returnValue = F("Kühlhausberg");
break;
}
case 198937:
{
returnValue = F("Kühlhausstr.");
break;
}
case 198938:
{
returnValue = F("Kühlhausweg");
break;
}
case 198939:
{
returnValue = F("Kühligenweg");
break;
}
case 198940:
{
returnValue = F("Kühlinger Str.");
break;
}
case 198941:
{
returnValue = F("Kühlings Kamp");
break;
}
case 198942:
{
returnValue = F("Kühlingstr.");
break;
}
case 198943:
{
returnValue = F("Kühlken");
break;
}
case 198944:
{
returnValue = F("Kühlloch");
break;
}
case 198945:
{
returnValue = F("Kühllochweg");
break;
}
case 198946:
{
returnValue = F("Kühlochweg");
break;
}
case 198947:
{
returnValue = F("Kühlottenweg");
break;
}
case 198948:
{
returnValue = F("Kühlredder");
break;
}
case 198949:
{
returnValue = F("Kühlscher Weg");
break;
}
case 198950:
{
returnValue = F("Kühlsener Tweete");
break;
}
case 198951:
{
returnValue = F("Kühlser Dorfstr.");
break;
}
case 198952:
{
returnValue = F("Kühlstellenweg");
break;
}
case 198953:
{
returnValue = F("Kühlstr.");
break;
}
case 198954:
{
returnValue = F("Kühlstücken");
break;
}
case 198955:
{
returnValue = F("Kühltal");
break;
}
case 198956:
{
returnValue = F("Kühltalstr.");
break;
}
case 198957:
{
returnValue = F("Kühlungsblick");
break;
}
case 198958:
{
returnValue = F("Kühlungsborner Chaussee");
break;
}
case 198959:
{
returnValue = F("Kühlungsborner Landweg");
break;
}
case 198960:
{
returnValue = F("Kühlungsborner Str.");
break;
}
case 198961:
{
returnValue = F("Kühlweg");
break;
}
case 198962:
{
returnValue = F("Kühlweinstr.");
break;
}
case 198963:
{
returnValue = F("Kühlwiesenstr.");
break;
}
case 198964:
{
returnValue = F("Kühläcker");
break;
}
case 198965:
{
returnValue = F("Kühmoos");
break;
}
case 198966:
{
returnValue = F("Kühmoosstr.");
break;
}
case 198967:
{
returnValue = F("Kühmoosweg");
break;
}
case 198968:
{
returnValue = F("Kühmoserweg");
break;
}
case 198969:
{
returnValue = F("Kühnbachsgrund");
break;
}
case 198970:
{
returnValue = F("Kühnbachstr.");
break;
}
case 198971:
{
returnValue = F("Kühnbachweg");
break;
}
case 198972:
{
returnValue = F("Kühnberg");
break;
}
case 198973:
{
returnValue = F("Kühnbergstr.");
break;
}
case 198974:
{
returnValue = F("Kühnbergweg");
break;
}
case 198975:
{
returnValue = F("Kühndorfer Pfad");
break;
}
case 198976:
{
returnValue = F("Kühnekopfweg");
break;
}
case 198977:
{
returnValue = F("Kühnelstr.");
break;
}
case 198978:
{
returnValue = F("Kühnelsweg");
break;
}
case 198979:
{
returnValue = F("Kühnemann-Weg");
break;
}
case 198980:
{
returnValue = F("Kühnenbachweg");
break;
}
case 198981:
{
returnValue = F("Kühneracker");
break;
}
case 198982:
{
returnValue = F("Kühnersecke");
break;
}
case 198983:
{
returnValue = F("Kühnerstr.");
break;
}
case 198984:
{
returnValue = F("Kühnes Berg");
break;
}
case 198985:
{
returnValue = F("Kühnestr.");
break;
}
case 198986:
{
returnValue = F("Kühneweg");
break;
}
case 198987:
{
returnValue = F("Kühngasse");
break;
}
case 198988:
{
returnValue = F("Kühnhaider Flügel");
break;
}
case 198989:
{
returnValue = F("Kühnhaider Steig");
break;
}
case 198990:
{
returnValue = F("Kühnhaider Str.");
break;
}
case 198991:
{
returnValue = F("Kühnhaidner Hauptstr.");
break;
}
case 198992:
{
returnValue = F("Kühnhaidner Str.");
break;
}
case 198993:
{
returnValue = F("Kühnham");
break;
}
case 198994:
{
returnValue = F("Kühnhausen");
break;
}
case 198995:
{
returnValue = F("Kühnhausener Str.");
break;
}
case 198996:
{
returnValue = F("Kühnheimer Str.");
break;
}
case 198997:
{
returnValue = F("Kühnhofener Str.");
break;
}
case 198998:
{
returnValue = F("Kühnitzscher Str.");
break;
}
case 198999:
{
returnValue = F("Kühnlenzhof");
break;
}
case 199000:
{
returnValue = F("Kühnlestr.");
break;
}
case 199001:
{
returnValue = F("Kühnmatt");
break;
}
case 199002:
{
returnValue = F("Kühnplatz");
break;
}
case 199003:
{
returnValue = F("Kühns Mühle");
break;
}
case 199004:
{
returnValue = F("Kühnscher Weg");
break;
}
case 199005:
{
returnValue = F("Kühnsgasse");
break;
}
case 199006:
{
returnValue = F("Kühnstelleweg");
break;
}
case 199007:
{
returnValue = F("Kühnstr.");
break;
}
case 199008:
{
returnValue = F("Kührainstr.");
break;
}
case 199009:
{
returnValue = F("Kühreisachweg");
break;
}
case 199010:
{
returnValue = F("Kührener Höfen");
break;
}
case 199011:
{
returnValue = F("Kührener Str.");
break;
}
case 199012:
{
returnValue = F("Kührener Weg");
break;
}
case 199013:
{
returnValue = F("Kührerstr.");
break;
}
case 199014:
{
returnValue = F("Kühried");
break;
}
case 199015:
{
returnValue = F("Kührnstweg");
break;
}
case 199016:
{
returnValue = F("Kührstedter Damm");
break;
}
case 199017:
{
returnValue = F("Kührstedter Str.");
break;
}
case 199018:
{
returnValue = F("Kührstedter Weg");
break;
}
case 199019:
{
returnValue = F("Kührstr.");
break;
}
case 199020:
{
returnValue = F("Kühruh");
break;
}
case 199021:
{
returnValue = F("Kühruhschneise");
break;
}
case 199022:
{
returnValue = F("Kühruhweg");
break;
}
case 199023:
{
returnValue = F("Kühschlagstr.");
break;
}
case 199024:
{
returnValue = F("Kühsteige");
break;
}
case 199025:
{
returnValue = F("Kühsteiggasse");
break;
}
case 199026:
{
returnValue = F("Kühsteigweg");
break;
}
case 199027:
{
returnValue = F("Kühstein");
break;
}
case 199028:
{
returnValue = F("Kühstelle");
break;
}
case 199029:
{
returnValue = F("Kühstetten");
break;
}
case 199030:
{
returnValue = F("Kühställe-Weg");
break;
}
case 199031:
{
returnValue = F("Kühtal");
break;
}
case 199032:
{
returnValue = F("Kühtreibe");
break;
}
case 199033:
{
returnValue = F("Kühtreuweg");
break;
}
case 199034:
{
returnValue = F("Kühtrieb");
break;
}
case 199035:
{
returnValue = F("Kühtrifftweg");
break;
}
case 199036:
{
returnValue = F("Kühtrift");
break;
}
case 199037:
{
returnValue = F("Kühtroiweg");
break;
}
case 199038:
{
returnValue = F("Kühtränkweg");
break;
}
case 199039:
{
returnValue = F("Kühwaldweg");
break;
}
case 199040:
{
returnValue = F("Kühwasenstr.");
break;
}
case 199041:
{
returnValue = F("Kühweg");
break;
}
case 199042:
{
returnValue = F("Kühzellstr.");
break;
}
case 199043:
{
returnValue = F("Kühäcker");
break;
}
case 199044:
{
returnValue = F("Kühäckerstr.");
break;
}
case 199045:
{
returnValue = F("Kühäckerweg");
break;
}
case 199046:
{
returnValue = F("Küingdorfer Str.");
break;
}
case 199047:
{
returnValue = F("Kükdörp");
break;
}
case 199048:
{
returnValue = F("Kükelser Weg");
break;
}
case 199049:
{
returnValue = F("Kükenbrink");
break;
}
case 199050:
{
returnValue = F("Kükenbrook");
break;
}
case 199051:
{
returnValue = F("Kükenbrucher Str.");
break;
}
case 199052:
{
returnValue = F("Kükenkamp");
break;
}
case 199053:
{
returnValue = F("Kükenkorb");
break;
}
case 199054:
{
returnValue = F("Kükenmoorer Dorfstr.");
break;
}
case 199055:
{
returnValue = F("Kükenmoorer Str.");
break;
}
case 199056:
{
returnValue = F("Kükenschnipp");
break;
}
case 199057:
{
returnValue = F("Kükensteg");
break;
}
case 199058:
{
returnValue = F("Kükenthalstr.");
break;
}
case 199059:
{
returnValue = F("Kükenweg");
break;
}
case 199060:
{
returnValue = F("Kükenwiese");
break;
}
case 199061:
{
returnValue = F("Kükersweg");
break;
}
case 199062:
{
returnValue = F("Kükesweg");
break;
}
case 199063:
{
returnValue = F("Külbe");
break;
}
case 199064:
{
returnValue = F("Külbenkamp");
break;
}
case 199065:
{
returnValue = F("Külbinger Str.");
break;
}
case 199066:
{
returnValue = F("Külchen");
break;
}
case 199067:
{
returnValue = F("Külftalstr.");
break;
}
case 199068:
{
returnValue = F("Külken");
break;
}
case 199069:
{
returnValue = F("Külkentwiet");
break;
}
case 199070:
{
returnValue = F("Küllbergsweg");
break;
}
case 199071:
{
returnValue = F("Külliggut");
break;
}
case 199072:
{
returnValue = F("Külliggutstr.");
break;
}
case 199073:
{
returnValue = F("Küllstedter Str.");
break;
}
case 199074:
{
returnValue = F("Külmla");
break;
}
case 199075:
{
returnValue = F("Külpstr.");
break;
}
case 199076:
{
returnValue = F("Külsheimer Str.");
break;
}
case 199077:
{
returnValue = F("Külsheimer Weg");
break;
}
case 199078:
{
returnValue = F("Külso");
break;
}
case 199079:
{
returnValue = F("Külsoer Str.");
break;
}
case 199080:
{
returnValue = F("Külsoer Weg");
break;
}
case 199081:
{
returnValue = F("Külter Weg");
break;
}
case 199082:
{
returnValue = F("Kültzschauer Str.");
break;
}
case 199083:
{
returnValue = F("Külve");
break;
}
case 199084:
{
returnValue = F("Külver Heide");
break;
}
case 199085:
{
returnValue = F("Külzauer Weg");
break;
}
case 199086:
{
returnValue = F("Külzbachstr.");
break;
}
case 199087:
{
returnValue = F("Külzer Str.");
break;
}
case 199088:
{
returnValue = F("Külzstr.");
break;
}
case 199089:
{
returnValue = F("Külztalstr.");
break;
}
case 199090:
{
returnValue = F("Külzufer");
break;
}
case 199091:
{
returnValue = F("Kümbdcher Hohl");
break;
}
case 199092:
{
returnValue = F("Kümdestr.");
break;
}
case 199093:
{
returnValue = F("Kümerschlag");
break;
}
case 199094:
{
returnValue = F("Kümmeckeweg");
break;
}
case 199095:
{
returnValue = F("Kümmelbach");
break;
}
case 199096:
{
returnValue = F("Kümmelbachstr.");
break;
}
case 199097:
{
returnValue = F("Kümmelbachweg");
break;
}
case 199098:
{
returnValue = F("Kümmelberg");
break;
}
case 199099:
{
returnValue = F("Kümmelbergstr.");
break;
}
case 199100:
{
returnValue = F("Kümmelbergsweg");
break;
}
case 199101:
{
returnValue = F("Kümmelgasse");
break;
}
case 199102:
{
returnValue = F("Kümmelkamp");
break;
}
case 199103:
{
returnValue = F("Kümmelpad");
break;
}
case 199104:
{
returnValue = F("Kümmelstr.");
break;
}
case 199105:
{
returnValue = F("Kümmeltärkenweg");
break;
}
case 199106:
{
returnValue = F("Kümmelweg");
break;
}
case 199107:
{
returnValue = F("Kümmelwiesenschneise");
break;
}
case 199108:
{
returnValue = F("Kümmelwiesenweg");
break;
}
case 199109:
{
returnValue = F("Kümmerazhofer Str.");
break;
}
case 199110:
{
returnValue = F("Kümmerazhofer Weg");
break;
}
case 199111:
{
returnValue = F("Kümmerlesgasse");
break;
}
case 199112:
{
returnValue = F("Kümmerlicher Stieg");
break;
}
case 199113:
{
returnValue = F("Kümmerner Weg");
break;
}
case 199114:
{
returnValue = F("Kümmernitz");
break;
}
case 199115:
{
returnValue = F("Kümmernitzer Weg");
break;
}
case 199116:
{
returnValue = F("Kümmersbuch");
break;
}
case 199117:
{
returnValue = F("Kümmersbucher Weg");
break;
}
case 199118:
{
returnValue = F("Kümmertsweiler");
break;
}
case 199119:
{
returnValue = F("Kümmritz");
break;
}
case 199120:
{
returnValue = F("Kümpel");
break;
}
case 199121:
{
returnValue = F("Kümpelersbitze");
break;
}
case 199122:
{
returnValue = F("Kümpelsgasse");
break;
}
case 199123:
{
returnValue = F("Kümpelweg");
break;
}
case 199124:
{
returnValue = F("Kümper");
break;
}
case 199125:
{
returnValue = F("Kümperheide");
break;
}
case 199126:
{
returnValue = F("Kümperhoek");
break;
}
case 199127:
{
returnValue = F("Künaberg");
break;
}
case 199128:
{
returnValue = F("Kündigersweg");
break;
}
case 199129:
{
returnValue = F("Künemeiersgasse");
break;
}
case 199130:
{
returnValue = F("Künemundgasse");
break;
}
case 199131:
{
returnValue = F("Künergasse");
break;
}
case 199132:
{
returnValue = F("Künersberg");
break;
}
case 199133:
{
returnValue = F("Künersberger Str.");
break;
}
case 199134:
{
returnValue = F("Künetteweg");
break;
}
case 199135:
{
returnValue = F("Künhok");
break;
}
case 199136:
{
returnValue = F("Künkeler Str.");
break;
}
case 199137:
{
returnValue = F("Künkelinstr.");
break;
}
case 199138:
{
returnValue = F("Künkelsgasse");
break;
}
case 199139:
{
returnValue = F("Künnekestr.");
break;
}
case 199140:
{
returnValue = F("Künnekeweg");
break;
}
case 199141:
{
returnValue = F("Künnenkamp");
break;
}
case 199142:
{
returnValue = F("Künnüber");
break;
}
case 199143:
{
returnValue = F("Künsbacher Str.");
break;
}
case 199144:
{
returnValue = F("Künsbergring");
break;
}
case 199145:
{
returnValue = F("Künscher Str.");
break;
}
case 199146:
{
returnValue = F("Künstlereck");
break;
}
case 199147:
{
returnValue = F("Künstlerhof");
break;
}
case 199148:
{
returnValue = F("Künstlerpark");
break;
}
case 199149:
{
returnValue = F("Küntroper Str.");
break;
}
case 199150:
{
returnValue = F("Künzeller Str.");
break;
}
case 199151:
{
returnValue = F("Künzeller Weg");
break;
}
case 199152:
{
returnValue = F("Künzelsauer Str.");
break;
}
case 199153:
{
returnValue = F("Künzenstr.");
break;
}
case 199154:
{
returnValue = F("Künzleweg");
break;
}
case 199155:
{
returnValue = F("Künzlisbergweg");
break;
}
case 199156:
{
returnValue = F("Künßbergweg");
break;
}
case 199157:
{
returnValue = F("Küperei");
break;
}
case 199158:
{
returnValue = F("Küpergang");
break;
}
case 199159:
{
returnValue = F("Küpershoff");
break;
}
case 199160:
{
returnValue = F("Küperskamp");
break;
}
case 199161:
{
returnValue = F("Küperweg");
break;
}
case 199162:
{
returnValue = F("Küpfendorf");
break;
}
case 199163:
{
returnValue = F("Küpfendorfer Sträßle");
break;
}
case 199164:
{
returnValue = F("Küpfendorferholzsträßle");
break;
}
case 199165:
{
returnValue = F("Küpferstr.");
break;
}
case 199166:
{
returnValue = F("Küppe");
break;
}
case 199167:
{
returnValue = F("Küppel");
break;
}
case 199168:
{
returnValue = F("Küppelsbachweg");
break;
}
case 199169:
{
returnValue = F("Küppelstr.");
break;
}
case 199170:
{
returnValue = F("Küppelweg");
break;
}
case 199171:
{
returnValue = F("Küpper");
break;
}
case 199172:
{
returnValue = F("Küppersdriesch");
break;
}
case 199173:
{
returnValue = F("Küppersgasse");
break;
}
case 199174:
{
returnValue = F("Küppersherweg");
break;
}
case 199175:
{
returnValue = F("Küpperssteg");
break;
}
case 199176:
{
returnValue = F("Küppersstr.");
break;
}
case 199177:
{
returnValue = F("Küpperstr.");
break;
}
case 199178:
{
returnValue = F("Küppersweg");
break;
}
case 199179:
{
returnValue = F("Küpperweg");
break;
}
case 199180:
{
returnValue = F("Kürackerweg");
break;
}
case 199181:
{
returnValue = F("Kürassierweg");
break;
}
case 199182:
{
returnValue = F("Kürbelweg");
break;
}
case 199183:
{
returnValue = F("Kürbeschstr.");
break;
}
case 199184:
{
returnValue = F("Kürbisstr.");
break;
}
case 199185:
{
returnValue = F("Kürbisweg");
break;
}
case 199186:
{
returnValue = F("Kürbitz");
break;
}
case 199187:
{
returnValue = F("Kürbitzer Landstr.");
break;
}
case 199188:
{
returnValue = F("Kürbitzer Str.");
break;
}
case 199189:
{
returnValue = F("Kürbitzer Weg");
break;
}
case 199190:
{
returnValue = F("Kürblegasse");
break;
}
case 199191:
{
returnValue = F("Kürbsweg");
break;
}
case 199192:
{
returnValue = F("Kürenbergstr.");
break;
}
case 199193:
{
returnValue = F("Kürlacher Weg");
break;
}
case 199194:
{
returnValue = F("Kürlochstr.");
break;
}
case 199195:
{
returnValue = F("Kürlochweg");
break;
}
case 199196:
{
returnValue = F("Kürmreuther Str.");
break;
}
case 199197:
{
returnValue = F("Kürnacher Str.");
break;
}
case 199198:
{
returnValue = F("Kürnbacher Str.");
break;
}
case 199199:
{
returnValue = F("Kürnberg");
break;
}
case 199200:
{
returnValue = F("Kürnberger Str.");
break;
}
case 199201:
{
returnValue = F("Kürnbergstr.");
break;
}
case 199202:
{
returnValue = F("Kürnburgstr.");
break;
}
case 199203:
{
returnValue = F("Kürner Str.");
break;
}
case 199204:
{
returnValue = F("Kürnersweg");
break;
}
case 199205:
{
returnValue = F("Kürnsteigweg");
break;
}
case 199206:
{
returnValue = F("Kürrenberger Steig");
break;
}
case 199207:
{
returnValue = F("Kürrenberger Str.");
break;
}
case 199208:
{
returnValue = F("Kürrighovener Str.");
break;
}
case 199209:
{
returnValue = F("Kürräckerstr.");
break;
}
case 199210:
{
returnValue = F("Kürschnergasse");
break;
}
case 199211:
{
returnValue = F("Kürschnerstr.");
break;
}
case 199212:
{
returnValue = F("Kürschnertal");
break;
}
case 199213:
{
returnValue = F("Kürschnerweg");
break;
}
case 199214:
{
returnValue = F("Kürstr.");
break;
}
case 199215:
{
returnValue = F("Kürtener Str.");
break;
}
case 199216:
{
returnValue = F("Kürvenweg");
break;
}
case 199217:
{
returnValue = F("Kürwiesgasse");
break;
}
case 199218:
{
returnValue = F("Kürze");
break;
}
case 199219:
{
returnValue = F("Kürzegasse");
break;
}
case 199220:
{
returnValue = F("Kürzeller Hauptstr.");
break;
}
case 199221:
{
returnValue = F("Kürzeller Oberdorfstr.");
break;
}
case 199222:
{
returnValue = F("Kürzeller Str.");
break;
}
case 199223:
{
returnValue = F("Kürzellerstr.");
break;
}
case 199224:
{
returnValue = F("Kürzenweg");
break;
}
case 199225:
{
returnValue = F("Kürzestr.");
break;
}
case 199226:
{
returnValue = F("Kürzeweg");
break;
}
case 199227:
{
returnValue = F("Kürzlengraben");
break;
}
case 199228:
{
returnValue = F("Kürzlingsweg");
break;
}
case 199229:
{
returnValue = F("Kürzstr.");
break;
}
case 199230:
{
returnValue = F("Küsdorp");
break;
}
case 199231:
{
returnValue = F("Küsel");
break;
}
case 199232:
{
returnValue = F("Küselbrink");
break;
}
case 199233:
{
returnValue = F("Küssaburgstr.");
break;
}
case 199234:
{
returnValue = F("Küsserower Weg");
break;
}
case 199235:
{
returnValue = F("Küssnacher Str.");
break;
}
case 199236:
{
returnValue = F("Küssower Str.");
break;
}
case 199237:
{
returnValue = F("Küstelberger Str.");
break;
}
case 199238:
{
returnValue = F("Küstenbahnstr.");
break;
}
case 199239:
{
returnValue = F("Küstenhof");
break;
}
case 199240:
{
returnValue = F("Küstenkanalstr.");
break;
}
case 199241:
{
returnValue = F("Küstenring");
break;
}
case 199242:
{
returnValue = F("Küstenschutzweg");
break;
}
case 199243:
{
returnValue = F("Küstenstr.");
break;
}
case 199244:
{
returnValue = F("Küstenweg");
break;
}
case 199245:
{
returnValue = F("Küster-Blomen-Weg");
break;
}
case 199246:
{
returnValue = F("Küster-Heising-Str.");
break;
}
case 199247:
{
returnValue = F("Küsterberg");
break;
}
case 199248:
{
returnValue = F("Küsterbusch");
break;
}
case 199249:
{
returnValue = F("Küstereiweg");
break;
}
case 199250:
{
returnValue = F("Küsterfeld");
break;
}
case 199251:
{
returnValue = F("Küsterfleck");
break;
}
case 199252:
{
returnValue = F("Küstergang");
break;
}
case 199253:
{
returnValue = F("Küstergarten");
break;
}
case 199254:
{
returnValue = F("Küstergasse");
break;
}
case 199255:
{
returnValue = F("Küstergrube");
break;
}
case 199256:
{
returnValue = F("Küstergrund");
break;
}
case 199257:
{
returnValue = F("Küstergärten");
break;
}
case 199258:
{
returnValue = F("Küsterhorst");
break;
}
case 199259:
{
returnValue = F("Küsterkamp");
break;
}
case 199260:
{
returnValue = F("Küsterkampweg");
break;
}
case 199261:
{
returnValue = F("Küsterkoppel");
break;
}
case 199262:
{
returnValue = F("Küsterland");
break;
}
case 199263:
{
returnValue = F("Küsterlücke");
break;
}
case 199264:
{
returnValue = F("Küstermannsweg");
break;
}
case 199265:
{
returnValue = F("Küstermarkt");
break;
}
case 199266:
{
returnValue = F("Küstermeyerstr.");
break;
}
case 199267:
{
returnValue = F("Küsters Allee");
break;
}
case 199268:
{
returnValue = F("Küsters Feld");
break;
}
case 199269:
{
returnValue = F("Küsters Garten");
break;
}
case 199270:
{
returnValue = F("Küsters Pfad");
break;
}
case 199271:
{
returnValue = F("Küstersgreuth");
break;
}
case 199272:
{
returnValue = F("Küstersgäßchen");
break;
}
case 199273:
{
returnValue = F("Küsterskamp");
break;
}
case 199274:
{
returnValue = F("Küstersmatt");
break;
}
case 199275:
{
returnValue = F("Küstersmeede");
break;
}
case 199276:
{
returnValue = F("Küsterspitze");
break;
}
case 199277:
{
returnValue = F("Küsterstege");
break;
}
case 199278:
{
returnValue = F("Küstersteig");
break;
}
case 199279:
{
returnValue = F("Küsterstr.");
break;
}
case 199280:
{
returnValue = F("Küstersweg");
break;
}
case 199281:
{
returnValue = F("Küstertwete");
break;
}
case 199282:
{
returnValue = F("Küsterweg");
break;
}
case 199283:
{
returnValue = F("Küstrinchen");
break;
}
case 199284:
{
returnValue = F("Küstrinchener Str.");
break;
}
case 199285:
{
returnValue = F("Küstrinchener Weg");
break;
}
case 199286:
{
returnValue = F("Küstriner Str.");
break;
}
case 199287:
{
returnValue = F("Küstriner Weg");
break;
}
case 199288:
{
returnValue = F("Küstringer Weg");
break;
}
case 199289:
{
returnValue = F("Küstrower Str.");
break;
}
case 199290:
{
returnValue = F("Küstwiese");
break;
}
case 199291:
{
returnValue = F("Küte");
break;
}
case 199292:
{
returnValue = F("Kütehof");
break;
}
case 199293:
{
returnValue = F("Küterbruch-Schneise");
break;
}
case 199294:
{
returnValue = F("Kütergang");
break;
}
case 199295:
{
returnValue = F("Küthe");
break;
}
case 199296:
{
returnValue = F("Küthestr.");
break;
}
case 199297:
{
returnValue = F("Kütiner Brink");
break;
}
case 199298:
{
returnValue = F("Kütiner Str.");
break;
}
case 199299:
{
returnValue = F("Küttebahn");
break;
}
case 199300:
{
returnValue = F("Küttener Anger");
break;
}
case 199301:
{
returnValue = F("Küttener Str.");
break;
}
case 199302:
{
returnValue = F("Küttener Winkel");
break;
}
case 199303:
{
returnValue = F("Küttiger Str.");
break;
}
case 199304:
{
returnValue = F("Küttiger Weg");
break;
}
case 199305:
{
returnValue = F("Kützberger Str.");
break;
}
case 199306:
{
returnValue = F("Kützbrunner Str.");
break;
}
case 199307:
{
returnValue = F("Kützelbachstr.");
break;
}
case 199308:
{
returnValue = F("Kützer Str.");
break;
}
case 199309:
{
returnValue = F("Kützerhof");
break;
}
case 199310:
{
returnValue = F("Kütziner Str.");
break;
}
case 199311:
{
returnValue = F("Kütziner Weg");
break;
}
case 199312:
{
returnValue = F("Kützingstr.");
break;
}
case 199313:
{
returnValue = F("Küvers Trift");
break;
}
case 199314:
{
returnValue = F("Küßnacher Str.");
break;
}
case 199315:
{
returnValue = F("Küßnachter Str.");
break;
}
}
return returnValue;
}
