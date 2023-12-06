#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameS2(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 280028:
    {
        returnValue = F("Schirgiswalder Str.");
        break;
    }
    case 280029:
    {
        returnValue = F("Schirgiswalder Weg");
        break;
    }
    case 280030:
    {
        returnValue = F("Schirick");
        break;
    }
    case 280031:
    {
        returnValue = F("Schiricksweg");
        break;
    }
    case 280032:
    {
        returnValue = F("Schirl");
        break;
    }
    case 280033:
    {
        returnValue = F("Schirlinger Feld");
        break;
    }
    case 280034:
    {
        returnValue = F("Schirlinger Str.");
        break;
    }
    case 280035:
    {
        returnValue = F("Schirm");
        break;
    }
    case 280036:
    {
        returnValue = F("Schirmatte");
        break;
    }
    case 280037:
    {
        returnValue = F("Schirmbach");
        break;
    }
    case 280038:
    {
        returnValue = F("Schirmbachaue");
        break;
    }
    case 280039:
    {
        returnValue = F("Schirmbacher Klinge");
        break;
    }
    case 280040:
    {
        returnValue = F("Schirmbacher Steige");
        break;
    }
    case 280041:
    {
        returnValue = F("Schirmbacher Str.");
        break;
    }
    case 280042:
    {
        returnValue = F("Schirmbachweg");
        break;
    }
    case 280043:
    {
        returnValue = F("Schirmbeckstr.");
        break;
    }
    case 280044:
    {
        returnValue = F("Schirmbrake");
        break;
    }
    case 280045:
    {
        returnValue = F("Schirmbäckgassl");
        break;
    }
    case 280046:
    {
        returnValue = F("Schirmdorf");
        break;
    }
    case 280047:
    {
        returnValue = F("Schirmergasse");
        break;
    }
    case 280048:
    {
        returnValue = F("Schirmers Weg");
        break;
    }
    case 280049:
    {
        returnValue = F("Schirmerstr.");
        break;
    }
    case 280050:
    {
        returnValue = F("Schirmhäuserweg");
        break;
    }
    case 280051:
    {
        returnValue = F("Schirmhüttenweg");
        break;
    }
    case 280052:
    {
        returnValue = F("Schirmitzer Str.");
        break;
    }
    case 280053:
    {
        returnValue = F("Schirmitzer Weg");
        break;
    }
    case 280054:
    {
        returnValue = F("Schirmker Brink");
        break;
    }
    case 280055:
    {
        returnValue = F("Schirmkiefer");
        break;
    }
    case 280056:
    {
        returnValue = F("Schirmpilzweg");
        break;
    }
    case 280057:
    {
        returnValue = F("Schirmschneise");
        break;
    }
    case 280058:
    {
        returnValue = F("Schirmsteinstr.");
        break;
    }
    case 280059:
    {
        returnValue = F("Schirmstr.");
        break;
    }
    case 280060:
    {
        returnValue = F("Schirmtannweg");
        break;
    }
    case 280061:
    {
        returnValue = F("Schirmweg");
        break;
    }
    case 280062:
    {
        returnValue = F("Schirnaidel");
        break;
    }
    case 280063:
    {
        returnValue = F("Schirnaidler Str.");
        break;
    }
    case 280064:
    {
        returnValue = F("Schirnauweg");
        break;
    }
    case 280065:
    {
        returnValue = F("Schirnbachstr.");
        break;
    }
    case 280066:
    {
        returnValue = F("Schirnbornweg");
        break;
    }
    case 280067:
    {
        returnValue = F("Schirnbusch");
        break;
    }
    case 280068:
    {
        returnValue = F("Schirndinger Str.");
        break;
    }
    case 280069:
    {
        returnValue = F("Schirne");
        break;
    }
    case 280070:
    {
        returnValue = F("Schirnerstr.");
        break;
    }
    case 280071:
    {
        returnValue = F("Schirngasse");
        break;
    }
    case 280072:
    {
        returnValue = F("Schirngraben");
        break;
    }
    case 280073:
    {
        returnValue = F("Schirnstr.");
        break;
    }
    case 280074:
    {
        returnValue = F("Schirrbachstr.");
        break;
    }
    case 280075:
    {
        returnValue = F("Schirrhof");
        break;
    }
    case 280076:
    {
        returnValue = F("Schirrhof / Faulbacher Str.");
        break;
    }
    case 280077:
    {
        returnValue = F("Schirrhofstr.");
        break;
    }
    case 280078:
    {
        returnValue = F("Schirrmaierweg");
        break;
    }
    case 280079:
    {
        returnValue = F("Schirrmannstr.");
        break;
    }
    case 280080:
    {
        returnValue = F("Schirrmannweg");
        break;
    }
    case 280081:
    {
        returnValue = F("Schirrnbergstr.");
        break;
    }
    case 280082:
    {
        returnValue = F("Schirtenbecke");
        break;
    }
    case 280083:
    {
        returnValue = F("Schirumer Loog");
        break;
    }
    case 280084:
    {
        returnValue = F("Schirumer Str.");
        break;
    }
    case 280085:
    {
        returnValue = F("Schirumer Weg");
        break;
    }
    case 280086:
    {
        returnValue = F("Schirumerfeld");
        break;
    }
    case 280087:
    {
        returnValue = F("Schirwindter Str.");
        break;
    }
    case 280088:
    {
        returnValue = F("Schissergasse");
        break;
    }
    case 280089:
    {
        returnValue = F("Schitterlestr.");
        break;
    }
    case 280090:
    {
        returnValue = F("Schittweinstr.");
        break;
    }
    case 280091:
    {
        returnValue = F("Schißlerstr.");
        break;
    }
    case 280092:
    {
        returnValue = F("Schkauditzer Landstr.");
        break;
    }
    case 280093:
    {
        returnValue = F("Schkauditzer Weg");
        break;
    }
    case 280094:
    {
        returnValue = F("Schkeitbarer Allee");
        break;
    }
    case 280095:
    {
        returnValue = F("Schkeitbarer Str.");
        break;
    }
    case 280096:
    {
        returnValue = F("Schkeuditzer Str.");
        break;
    }
    case 280097:
    {
        returnValue = F("Schkeuditzer Weg");
        break;
    }
    case 280098:
    {
        returnValue = F("Schkopauer Str.");
        break;
    }
    case 280099:
    {
        returnValue = F("Schkorlopper Str.");
        break;
    }
    case 280100:
    {
        returnValue = F("Schkorlopper Weg");
        break;
    }
    case 280101:
    {
        returnValue = F("Schkortitzer Str.");
        break;
    }
    case 280102:
    {
        returnValue = F("Schkortlebener Str.");
        break;
    }
    case 280103:
    {
        returnValue = F("Schkölener Weg");
        break;
    }
    case 280104:
    {
        returnValue = F("Schkönaer Str.");
        break;
    }
    case 280105:
    {
        returnValue = F("Schkönaer Weg");
        break;
    }
    case 280106:
    {
        returnValue = F("Schlaa");
        break;
    }
    case 280107:
    {
        returnValue = F("Schlaarenweg");
        break;
    }
    case 280108:
    {
        returnValue = F("Schlaat");
        break;
    }
    case 280109:
    {
        returnValue = F("Schlaatzer Welle");
        break;
    }
    case 280110:
    {
        returnValue = F("Schlaatzstr.");
        break;
    }
    case 280111:
    {
        returnValue = F("Schlaatzweg");
        break;
    }
    case 280112:
    {
        returnValue = F("Schlaaweg");
        break;
    }
    case 280113:
    {
        returnValue = F("Schlabberpohl");
        break;
    }
    case 280114:
    {
        returnValue = F("Schlabendorf am See");
        break;
    }
    case 280115:
    {
        returnValue = F("Schlabenring");
        break;
    }
    case 280116:
    {
        returnValue = F("Schlabrendorffweg");
        break;
    }
    case 280117:
    {
        returnValue = F("Schlabuchweg");
        break;
    }
    case 280118:
    {
        returnValue = F("Schlacht");
        break;
    }
    case 280119:
    {
        returnValue = F("Schlachtberg");
        break;
    }
    case 280120:
    {
        returnValue = F("Schlachte");
        break;
    }
    case 280121:
    {
        returnValue = F("Schlachteggstr.");
        break;
    }
    case 280122:
    {
        returnValue = F("Schlachter-Gang");
        break;
    }
    case 280123:
    {
        returnValue = F("Schlachtermarkt");
        break;
    }
    case 280124:
    {
        returnValue = F("Schlachterstr.");
        break;
    }
    case 280125:
    {
        returnValue = F("Schlachthausgasse");
        break;
    }
    case 280126:
    {
        returnValue = F("Schlachthausgäßchen");
        break;
    }
    case 280127:
    {
        returnValue = F("Schlachthausstr.");
        break;
    }
    case 280128:
    {
        returnValue = F("Schlachthausweg");
        break;
    }
    case 280129:
    {
        returnValue = F("Schlachthofbrücke");
        break;
    }
    case 280130:
    {
        returnValue = F("Schlachthofgasse");
        break;
    }
    case 280131:
    {
        returnValue = F("Schlachthofplatz");
        break;
    }
    case 280132:
    {
        returnValue = F("Schlachthofsteg");
        break;
    }
    case 280133:
    {
        returnValue = F("Schlachthofstr.");
        break;
    }
    case 280134:
    {
        returnValue = F("Schlachthofweg");
        break;
    }
    case 280135:
    {
        returnValue = F("Schlachtpforte");
        break;
    }
    case 280136:
    {
        returnValue = F("Schlachtsteige");
        break;
    }
    case 280137:
    {
        returnValue = F("Schlachtstr.");
        break;
    }
    case 280138:
    {
        returnValue = F("Schlachtweg");
        break;
    }
    case 280139:
    {
        returnValue = F("Schlackdamm");
        break;
    }
    case 280140:
    {
        returnValue = F("Schlackenbergstr.");
        break;
    }
    case 280141:
    {
        returnValue = F("Schlackenbrink");
        break;
    }
    case 280142:
    {
        returnValue = F("Schlackenmühlweg");
        break;
    }
    case 280143:
    {
        returnValue = F("Schlackenstr.");
        break;
    }
    case 280144:
    {
        returnValue = F("Schlackenwall");
        break;
    }
    case 280145:
    {
        returnValue = F("Schlackenweg");
        break;
    }
    case 280146:
    {
        returnValue = F("Schlackenwegle");
        break;
    }
    case 280147:
    {
        returnValue = F("Schlackenwerther Str.");
        break;
    }
    case 280148:
    {
        returnValue = F("Schlackenwiese");
        break;
    }
    case 280149:
    {
        returnValue = F("Schlacker Weg");
        break;
    }
    case 280150:
    {
        returnValue = F("Schlackerweg");
        break;
    }
    case 280151:
    {
        returnValue = F("Schlackhaldenweg");
        break;
    }
    case 280152:
    {
        returnValue = F("Schlackweg");
        break;
    }
    case 280153:
    {
        returnValue = F("Schlade");
        break;
    }
    case 280154:
    {
        returnValue = F("Schladebacher Str.");
        break;
    }
    case 280155:
    {
        returnValue = F("Schladebacher Weg");
        break;
    }
    case 280156:
    {
        returnValue = F("Schladeberg");
        break;
    }
    case 280157:
    {
        returnValue = F("Schladen");
        break;
    }
    case 280158:
    {
        returnValue = F("Schladener Str.");
        break;
    }
    case 280159:
    {
        returnValue = F("Schladener Weg");
        break;
    }
    case 280160:
    {
        returnValue = F("Schladenweg");
        break;
    }
    case 280161:
    {
        returnValue = F("Schlader Stieg");
        break;
    }
    case 280162:
    {
        returnValue = F("Schlader Weg");
        break;
    }
    case 280163:
    {
        returnValue = F("Schladerberg");
        break;
    }
    case 280164:
    {
        returnValue = F("Schladererstr.");
        break;
    }
    case 280165:
    {
        returnValue = F("Schladerner Str.");
        break;
    }
    case 280166:
    {
        returnValue = F("Schladestr.");
        break;
    }
    case 280167:
    {
        returnValue = F("Schladetreppe");
        break;
    }
    case 280168:
    {
        returnValue = F("Schladeweg");
        break;
    }
    case 280169:
    {
        returnValue = F("Schladitzer Str.");
        break;
    }
    case 280170:
    {
        returnValue = F("Schladming-Anlage");
        break;
    }
    case 280171:
    {
        returnValue = F("Schladminger Weg");
        break;
    }
    case 280172:
    {
        returnValue = F("Schladstr.");
        break;
    }
    case 280173:
    {
        returnValue = F("Schladter Pfad");
        break;
    }
    case 280174:
    {
        returnValue = F("Schladter Str.");
        break;
    }
    case 280175:
    {
        returnValue = F("Schladter Weg");
        break;
    }
    case 280176:
    {
        returnValue = F("Schladterweg");
        break;
    }
    case 280177:
    {
        returnValue = F("Schladweg");
        break;
    }
    case 280178:
    {
        returnValue = F("Schlafdeich Nord");
        break;
    }
    case 280179:
    {
        returnValue = F("Schlafdeich Süd");
        break;
    }
    case 280180:
    {
        returnValue = F("Schlaffhäusergasse");
        break;
    }
    case 280181:
    {
        returnValue = F("Schlafgasse");
        break;
    }
    case 280182:
    {
        returnValue = F("Schlafheckelchen");
        break;
    }
    case 280183:
    {
        returnValue = F("Schlafweg");
        break;
    }
    case 280184:
    {
        returnValue = F("Schlag");
        break;
    }
    case 280185:
    {
        returnValue = F("Schlaga");
        break;
    }
    case 280186:
    {
        returnValue = F("Schlagacker");
        break;
    }
    case 280187:
    {
        returnValue = F("Schlagackerstr.");
        break;
    }
    case 280188:
    {
        returnValue = F("Schlagackerweg");
        break;
    }
    case 280189:
    {
        returnValue = F("Schlagaer Str.");
        break;
    }
    case 280190:
    {
        returnValue = F("Schlagallee");
        break;
    }
    case 280191:
    {
        returnValue = F("Schlagballkoppel");
        break;
    }
    case 280192:
    {
        returnValue = F("Schlagbauerstr.");
        break;
    }
    case 280193:
    {
        returnValue = F("Schlagbaum");
        break;
    }
    case 280194:
    {
        returnValue = F("Schlagbaumer Str.");
        break;
    }
    case 280195:
    {
        returnValue = F("Schlagbaumhof");
        break;
    }
    case 280196:
    {
        returnValue = F("Schlagbaumstege");
        break;
    }
    case 280197:
    {
        returnValue = F("Schlagbaumstr.");
        break;
    }
    case 280198:
    {
        returnValue = F("Schlagbaumsweg");
        break;
    }
    case 280199:
    {
        returnValue = F("Schlagbaumtwiet");
        break;
    }
    case 280200:
    {
        returnValue = F("Schlagbaumweg");
        break;
    }
    case 280201:
    {
        returnValue = F("Schlagberg");
        break;
    }
    case 280202:
    {
        returnValue = F("Schlagbergweg");
        break;
    }
    case 280203:
    {
        returnValue = F("Schlagborn");
        break;
    }
    case 280204:
    {
        returnValue = F("Schlagbreite");
        break;
    }
    case 280205:
    {
        returnValue = F("Schlagbrückchen");
        break;
    }
    case 280206:
    {
        returnValue = F("Schlagbrücke");
        break;
    }
    case 280207:
    {
        returnValue = F("Schlagbrückener Weg");
        break;
    }
    case 280208:
    {
        returnValue = F("Schlagde");
        break;
    }
    case 280209:
    {
        returnValue = F("Schlagdstr.");
        break;
    }
    case 280210:
    {
        returnValue = F("Schlage");
        break;
    }
    case 280211:
    {
        returnValue = F("Schlagebecker Weg");
        break;
    }
    case 280212:
    {
        returnValue = F("Schlagemühlenweg");
        break;
    }
    case 280213:
    {
        returnValue = F("Schlagen");
        break;
    }
    case 280214:
    {
        returnValue = F("Schlagenfeld");
        break;
    }
    case 280215:
    {
        returnValue = F("Schlagenhausermühle");
        break;
    }
    case 280216:
    {
        returnValue = F("Schlagenheide");
        break;
    }
    case 280217:
    {
        returnValue = F("Schlagenhofener Weg");
        break;
    }
    case 280218:
    {
        returnValue = F("Schlagenthiner Str.");
        break;
    }
    case 280219:
    {
        returnValue = F("Schlagenthiner Weg");
        break;
    }
    case 280220:
    {
        returnValue = F("Schlagenweg");
        break;
    }
    case 280221:
    {
        returnValue = F("Schlager Chaussee");
        break;
    }
    case 280222:
    {
        returnValue = F("Schlager Str.");
        break;
    }
    case 280223:
    {
        returnValue = F("Schlagerlessteige");
        break;
    }
    case 280224:
    {
        returnValue = F("Schlagermannstr.");
        break;
    }
    case 280225:
    {
        returnValue = F("Schlagerwaldweg");
        break;
    }
    case 280226:
    {
        returnValue = F("Schlagerweg");
        break;
    }
    case 280227:
    {
        returnValue = F("Schlageteich");
        break;
    }
    case 280228:
    {
        returnValue = F("Schlageten");
        break;
    }
    case 280229:
    {
        returnValue = F("Schlageterfahrweg");
        break;
    }
    case 280230:
    {
        returnValue = F("Schlageterweg");
        break;
    }
    case 280231:
    {
        returnValue = F("Schlagethal");
        break;
    }
    case 280232:
    {
        returnValue = F("Schlagfeld");
        break;
    }
    case 280233:
    {
        returnValue = F("Schlagfeldstr.");
        break;
    }
    case 280234:
    {
        returnValue = F("Schlagfeldweg");
        break;
    }
    case 280235:
    {
        returnValue = F("Schlaggarten");
        break;
    }
    case 280236:
    {
        returnValue = F("Schlaggasse");
        break;
    }
    case 280237:
    {
        returnValue = F("Schlaggenwalder Str.");
        break;
    }
    case 280238:
    {
        returnValue = F("Schlaggeweg");
        break;
    }
    case 280239:
    {
        returnValue = F("Schlaggrub");
        break;
    }
    case 280240:
    {
        returnValue = F("Schlagheckeweg");
        break;
    }
    case 280241:
    {
        returnValue = F("Schlagholm");
        break;
    }
    case 280242:
    {
        returnValue = F("Schlagholzbusch");
        break;
    }
    case 280243:
    {
        returnValue = F("Schlagintweitweg");
        break;
    }
    case 280244:
    {
        returnValue = F("Schlagkamp");
        break;
    }
    case 280245:
    {
        returnValue = F("Schlagklinge");
        break;
    }
    case 280246:
    {
        returnValue = F("Schlagleite");
        break;
    }
    case 280247:
    {
        returnValue = F("Schlagmühle");
        break;
    }
    case 280248:
    {
        returnValue = F("Schlagmühlenstr.");
        break;
    }
    case 280249:
    {
        returnValue = F("Schlagmühlenweg");
        break;
    }
    case 280250:
    {
        returnValue = F("Schlagmühlstr.");
        break;
    }
    case 280251:
    {
        returnValue = F("Schlagpfützenweg");
        break;
    }
    case 280252:
    {
        returnValue = F("Schlagresdorfer Weg");
        break;
    }
    case 280253:
    {
        returnValue = F("Schlagsdorf");
        break;
    }
    case 280254:
    {
        returnValue = F("Schlagsdorfer Str.");
        break;
    }
    case 280255:
    {
        returnValue = F("Schlagsdorfer Weg");
        break;
    }
    case 280256:
    {
        returnValue = F("Schlagsteinweg");
        break;
    }
    case 280257:
    {
        returnValue = F("Schlagstr.");
        break;
    }
    case 280258:
    {
        returnValue = F("Schlagtor");
        break;
    }
    case 280259:
    {
        returnValue = F("Schlagtörlgasse");
        break;
    }
    case 280260:
    {
        returnValue = F("Schlagvorder Str.");
        break;
    }
    case 280261:
    {
        returnValue = F("Schlagwaldstr.");
        break;
    }
    case 280262:
    {
        returnValue = F("Schlagweg");
        break;
    }
    case 280263:
    {
        returnValue = F("Schlagwies");
        break;
    }
    case 280264:
    {
        returnValue = F("Schlagwiese");
        break;
    }
    case 280265:
    {
        returnValue = F("Schlagwiesen");
        break;
    }
    case 280266:
    {
        returnValue = F("Schlagwiesenstr.");
        break;
    }
    case 280267:
    {
        returnValue = F("Schlagwitzer Str.");
        break;
    }
    case 280268:
    {
        returnValue = F("Schlagäcker");
        break;
    }
    case 280269:
    {
        returnValue = F("Schlagäckerstr.");
        break;
    }
    case 280270:
    {
        returnValue = F("Schlahdekamp");
        break;
    }
    case 280271:
    {
        returnValue = F("Schlaichturm");
        break;
    }
    case 280272:
    {
        returnValue = F("Schlaileweg");
        break;
    }
    case 280273:
    {
        returnValue = F("Schlaipfering");
        break;
    }
    case 280274:
    {
        returnValue = F("Schlaisdorfer Str.");
        break;
    }
    case 280275:
    {
        returnValue = F("Schlaitdorfer Str.");
        break;
    }
    case 280276:
    {
        returnValue = F("Schlaitdorfer Weg");
        break;
    }
    case 280277:
    {
        returnValue = F("Schlaitzer Str.");
        break;
    }
    case 280278:
    {
        returnValue = F("Schlakendorf");
        break;
    }
    case 280279:
    {
        returnValue = F("Schlalacher Str.");
        break;
    }
    case 280280:
    {
        returnValue = F("Schlamau");
        break;
    }
    case 280281:
    {
        returnValue = F("Schlamauer Str.");
        break;
    }
    case 280282:
    {
        returnValue = F("Schlamauer Weg");
        break;
    }
    case 280283:
    {
        returnValue = F("Schlamberg");
        break;
    }
    case 280284:
    {
        returnValue = F("Schlamerstr.");
        break;
    }
    case 280285:
    {
        returnValue = F("Schlammeringer Str.");
        break;
    }
    case 280286:
    {
        returnValue = F("Schlammersdorfer Str.");
        break;
    }
    case 280287:
    {
        returnValue = F("Schlammteichweg");
        break;
    }
    case 280288:
    {
        returnValue = F("Schlammweg");
        break;
    }
    case 280289:
    {
        returnValue = F("Schlamperweg");
        break;
    }
    case 280290:
    {
        returnValue = F("Schlanderhof");
        break;
    }
    case 280291:
    {
        returnValue = F("Schlanderser Str.");
        break;
    }
    case 280292:
    {
        returnValue = F("Schlandorfstr.");
        break;
    }
    case 280293:
    {
        returnValue = F("Schlanestr.");
        break;
    }
    case 280294:
    {
        returnValue = F("Schlangenallee");
        break;
    }
    case 280295:
    {
        returnValue = F("Schlangenbader Str.");
        break;
    }
    case 280296:
    {
        returnValue = F("Schlangenbader Weg");
        break;
    }
    case 280297:
    {
        returnValue = F("Schlangenbrunnenweg");
        break;
    }
    case 280298:
    {
        returnValue = F("Schlangenbrücke");
        break;
    }
    case 280299:
    {
        returnValue = F("Schlangenbrückerstr.");
        break;
    }
    case 280300:
    {
        returnValue = F("Schlangenbusch");
        break;
    }
    case 280301:
    {
        returnValue = F("Schlangenböhlweg");
        break;
    }
    case 280302:
    {
        returnValue = F("Schlangenbühl");
        break;
    }
    case 280303:
    {
        returnValue = F("Schlangenecke");
        break;
    }
    case 280304:
    {
        returnValue = F("Schlangengraben");
        break;
    }
    case 280305:
    {
        returnValue = F("Schlangengrubenweg");
        break;
    }
    case 280306:
    {
        returnValue = F("Schlangengässle");
        break;
    }
    case 280307:
    {
        returnValue = F("Schlangengäßchen");
        break;
    }
    case 280308:
    {
        returnValue = F("Schlangenhecke");
        break;
    }
    case 280309:
    {
        returnValue = F("Schlangenhofweg");
        break;
    }
    case 280310:
    {
        returnValue = F("Schlangenholt");
        break;
    }
    case 280311:
    {
        returnValue = F("Schlangenhöhler Weg");
        break;
    }
    case 280312:
    {
        returnValue = F("Schlangenkapellenweg");
        break;
    }
    case 280313:
    {
        returnValue = F("Schlangenlochweg");
        break;
    }
    case 280314:
    {
        returnValue = F("Schlangenpfad");
        break;
    }
    case 280315:
    {
        returnValue = F("Schlangenpfandsweg");
        break;
    }
    case 280316:
    {
        returnValue = F("Schlangenpättken");
        break;
    }
    case 280317:
    {
        returnValue = F("Schlangenrain");
        break;
    }
    case 280318:
    {
        returnValue = F("Schlangenredder");
        break;
    }
    case 280319:
    {
        returnValue = F("Schlangenschneise");
        break;
    }
    case 280320:
    {
        returnValue = F("Schlangenseeallee");
        break;
    }
    case 280321:
    {
        returnValue = F("Schlangenseebrücke");
        break;
    }
    case 280322:
    {
        returnValue = F("Schlangensterz");
        break;
    }
    case 280323:
    {
        returnValue = F("Schlangenstr.");
        break;
    }
    case 280324:
    {
        returnValue = F("Schlangentaler Weg");
        break;
    }
    case 280325:
    {
        returnValue = F("Schlangenwallstr.");
        break;
    }
    case 280326:
    {
        returnValue = F("Schlangenweg");
        break;
    }
    case 280327:
    {
        returnValue = F("Schlangenwiesenweg");
        break;
    }
    case 280328:
    {
        returnValue = F("Schlangenwinkel");
        break;
    }
    case 280329:
    {
        returnValue = F("Schlangenzahl");
        break;
    }
    case 280330:
    {
        returnValue = F("Schlangenäcker");
        break;
    }
    case 280331:
    {
        returnValue = F("Schlanger Str.");
        break;
    }
    case 280332:
    {
        returnValue = F("Schlangewegle");
        break;
    }
    case 280333:
    {
        returnValue = F("Schlaningtal");
        break;
    }
    case 280334:
    {
        returnValue = F("Schlanstedter Str.");
        break;
    }
    case 280335:
    {
        returnValue = F("Schlansteinstr.");
        break;
    }
    case 280336:
    {
        returnValue = F("Schlaops Padd");
        break;
    }
    case 280337:
    {
        returnValue = F("Schlapdieksweg");
        break;
    }
    case 280338:
    {
        returnValue = F("Schlappbachweg");
        break;
    }
    case 280339:
    {
        returnValue = F("Schlappengasse");
        break;
    }
    case 280340:
    {
        returnValue = F("Schlappenmoor-Furt");
        break;
    }
    case 280341:
    {
        returnValue = F("Schlappenreuther Weg");
        break;
    }
    case 280342:
    {
        returnValue = F("Schlappergasse");
        break;
    }
    case 280343:
    {
        returnValue = F("Schlappermatt");
        break;
    }
    case 280344:
    {
        returnValue = F("Schlappersweg");
        break;
    }
    case 280345:
    {
        returnValue = F("Schlappmühler Pfad");
        break;
    }
    case 280346:
    {
        returnValue = F("Schlapweg");
        break;
    }
    case 280347:
    {
        returnValue = F("Schlaraffiastr.");
        break;
    }
    case 280348:
    {
        returnValue = F("Schlarbhofener Str.");
        break;
    }
    case 280349:
    {
        returnValue = F("Schlarper Str.");
        break;
    }
    case 280350:
    {
        returnValue = F("Schlarpshecke");
        break;
    }
    case 280351:
    {
        returnValue = F("Schlartäckerweg");
        break;
    }
    case 280352:
    {
        returnValue = F("Schlassenloch");
        break;
    }
    case 280353:
    {
        returnValue = F("Schlater Str.");
        break;
    }
    case 280354:
    {
        returnValue = F("Schlater Waldweg");
        break;
    }
    case 280355:
    {
        returnValue = F("Schlatkamp");
        break;
    }
    case 280356:
    {
        returnValue = F("Schlatkow");
        break;
    }
    case 280357:
    {
        returnValue = F("Schlatmanns Weg");
        break;
    }
    case 280358:
    {
        returnValue = F("Schlatt");
        break;
    }
    case 280359:
    {
        returnValue = F("Schlattbachstr.");
        break;
    }
    case 280360:
    {
        returnValue = F("Schlatte");
        break;
    }
    case 280361:
    {
        returnValue = F("Schlattein");
        break;
    }
    case 280362:
    {
        returnValue = F("Schlatteiner Str.");
        break;
    }
    case 280363:
    {
        returnValue = F("Schlatten");
        break;
    }
    case 280364:
    {
        returnValue = F("Schlattenseil");
        break;
    }
    case 280365:
    {
        returnValue = F("Schlattenweg");
        break;
    }
    case 280366:
    {
        returnValue = F("Schlatter Str.");
        break;
    }
    case 280367:
    {
        returnValue = F("Schlatter Weg");
        break;
    }
    case 280368:
    {
        returnValue = F("Schlatterhofweg");
        break;
    }
    case 280369:
    {
        returnValue = F("Schlattermühlweg");
        break;
    }
    case 280370:
    {
        returnValue = F("Schlatterstr.");
        break;
    }
    case 280371:
    {
        returnValue = F("Schlatterweg");
        break;
    }
    case 280372:
    {
        returnValue = F("Schlattgasse");
        break;
    }
    case 280373:
    {
        returnValue = F("Schlattgraben");
        break;
    }
    case 280374:
    {
        returnValue = F("Schlattgrabenstr.");
        break;
    }
    case 280375:
    {
        returnValue = F("Schlatthalden");
        break;
    }
    case 280376:
    {
        returnValue = F("Schlattheide");
        break;
    }
    case 280377:
    {
        returnValue = F("Schlatthofstr.");
        break;
    }
    case 280378:
    {
        returnValue = F("Schlatthofweg");
        break;
    }
    case 280379:
    {
        returnValue = F("Schlattholzstr.");
        break;
    }
    case 280380:
    {
        returnValue = F("Schlatthölzlesweg");
        break;
    }
    case 280381:
    {
        returnValue = F("Schlattmatt");
        break;
    }
    case 280382:
    {
        returnValue = F("Schlattstaller Str.");
        break;
    }
    case 280383:
    {
        returnValue = F("Schlattstaller Weg");
        break;
    }
    case 280384:
    {
        returnValue = F("Schlattstr.");
        break;
    }
    case 280385:
    {
        returnValue = F("Schlattwasen");
        break;
    }
    case 280386:
    {
        returnValue = F("Schlattweg");
        break;
    }
    case 280387:
    {
        returnValue = F("Schlattwiesen");
        break;
    }
    case 280388:
    {
        returnValue = F("Schlattwiesenstr.");
        break;
    }
    case 280389:
    {
        returnValue = F("Schlattäckerstr.");
        break;
    }
    case 280390:
    {
        returnValue = F("Schlattäckerweg");
        break;
    }
    case 280391:
    {
        returnValue = F("Schlatweg");
        break;
    }
    case 280392:
    {
        returnValue = F("Schlatwieske");
        break;
    }
    case 280393:
    {
        returnValue = F("Schlatzendorf");
        break;
    }
    case 280394:
    {
        returnValue = F("Schlatäcker");
        break;
    }
    case 280395:
    {
        returnValue = F("Schlaubeeck");
        break;
    }
    case 280396:
    {
        returnValue = F("Schlaubegrund");
        break;
    }
    case 280397:
    {
        returnValue = F("Schlaubenweg");
        break;
    }
    case 280398:
    {
        returnValue = F("Schlaubestr.");
        break;
    }
    case 280399:
    {
        returnValue = F("Schlaubetalstr.");
        break;
    }
    case 280400:
    {
        returnValue = F("Schlaubeweg");
        break;
    }
    case 280401:
    {
        returnValue = F("Schlauch");
        break;
    }
    case 280402:
    {
        returnValue = F("Schlauchberg");
        break;
    }
    case 280403:
    {
        returnValue = F("Schlauchgarten");
        break;
    }
    case 280404:
    {
        returnValue = F("Schlauchstal");
        break;
    }
    case 280405:
    {
        returnValue = F("Schlauchstr.");
        break;
    }
    case 280406:
    {
        returnValue = F("Schlauchweg");
        break;
    }
    case 280407:
    {
        returnValue = F("Schlauchwehr Selikum");
        break;
    }
    case 280408:
    {
        returnValue = F("Schlauchwiesen");
        break;
    }
    case 280409:
    {
        returnValue = F("Schlauchwiesenweg");
        break;
    }
    case 280410:
    {
        returnValue = F("Schlauden");
        break;
    }
    case 280411:
    {
        returnValue = F("Schlauderberg");
        break;
    }
    case 280412:
    {
        returnValue = F("Schlauderstr.");
        break;
    }
    case 280413:
    {
        returnValue = F("Schlauditz");
        break;
    }
    case 280414:
    {
        returnValue = F("Schlauentrift");
        break;
    }
    case 280415:
    {
        returnValue = F("Schlauenweg");
        break;
    }
    case 280416:
    {
        returnValue = F("Schlauer Weg");
        break;
    }
    case 280417:
    {
        returnValue = F("Schlauersbach");
        break;
    }
    case 280418:
    {
        returnValue = F("Schlauersbacher Str.");
        break;
    }
    case 280419:
    {
        returnValue = F("Schlaueweg");
        break;
    }
    case 280420:
    {
        returnValue = F("Schlaufenbühl");
        break;
    }
    case 280421:
    {
        returnValue = F("Schlaufstr.");
        break;
    }
    case 280422:
    {
        returnValue = F("Schlaufweg");
        break;
    }
    case 280423:
    {
        returnValue = F("Schlaugasse");
        break;
    }
    case 280424:
    {
        returnValue = F("Schlaugenweg");
        break;
    }
    case 280425:
    {
        returnValue = F("Schlaukweg");
        break;
    }
    case 280426:
    {
        returnValue = F("Schlaunallee");
        break;
    }
    case 280427:
    {
        returnValue = F("Schlaunplatz");
        break;
    }
    case 280428:
    {
        returnValue = F("Schlaunstr.");
        break;
    }
    case 280429:
    {
        returnValue = F("Schlaunweg");
        break;
    }
    case 280430:
    {
        returnValue = F("Schlaureit");
        break;
    }
    case 280431:
    {
        returnValue = F("Schlaurother Str.");
        break;
    }
    case 280432:
    {
        returnValue = F("Schlaurother Weg");
        break;
    }
    case 280433:
    {
        returnValue = F("Schlautersteig");
        break;
    }
    case 280434:
    {
        returnValue = F("Schlauweg");
        break;
    }
    case 280435:
    {
        returnValue = F("Schlauäcker");
        break;
    }
    case 280436:
    {
        returnValue = F("Schlavenhorst");
        break;
    }
    case 280437:
    {
        returnValue = F("Schlaw");
        break;
    }
    case 280438:
    {
        returnValue = F("Schlawer Str.");
        break;
    }
    case 280439:
    {
        returnValue = F("Schlawer Weg");
        break;
    }
    case 280440:
    {
        returnValue = F("Schlayerstr.");
        break;
    }
    case 280441:
    {
        returnValue = F("Schlebacher Str.");
        break;
    }
    case 280442:
    {
        returnValue = F("Schlebacher Weg");
        break;
    }
    case 280443:
    {
        returnValue = F("Schlebendgesweg");
        break;
    }
    case 280444:
    {
        returnValue = F("Schlebener Ring");
        break;
    }
    case 280445:
    {
        returnValue = F("Schlebener Weg");
        break;
    }
    case 280446:
    {
        returnValue = F("Schleburgstr.");
        break;
    }
    case 280447:
    {
        returnValue = F("Schlebuscher Heide");
        break;
    }
    case 280448:
    {
        returnValue = F("Schlebuscher Str.");
        break;
    }
    case 280449:
    {
        returnValue = F("Schlebuschrath");
        break;
    }
    case 280450:
    {
        returnValue = F("Schlebuschweg");
        break;
    }
    case 280451:
    {
        returnValue = F("Schlechinger Str.");
        break;
    }
    case 280452:
    {
        returnValue = F("Schlechtaubergweg");
        break;
    }
    case 280453:
    {
        returnValue = F("Schlechtbach");
        break;
    }
    case 280454:
    {
        returnValue = F("Schlechtbach-Waldweg");
        break;
    }
    case 280455:
    {
        returnValue = F("Schlechtbacher Str.");
        break;
    }
    case 280456:
    {
        returnValue = F("Schlechtbergweg");
        break;
    }
    case 280457:
    {
        returnValue = F("Schlechtenbach");
        break;
    }
    case 280458:
    {
        returnValue = F("Schlechtenberg");
        break;
    }
    case 280459:
    {
        returnValue = F("Schlechtenfelder Str.");
        break;
    }
    case 280460:
    {
        returnValue = F("Schlechtenweg");
        break;
    }
    case 280461:
    {
        returnValue = F("Schlechtenwegener Str.");
        break;
    }
    case 280462:
    {
        returnValue = F("Schlechter Pfad");
        break;
    }
    case 280463:
    {
        returnValue = F("Schlechter Weg");
        break;
    }
    case 280464:
    {
        returnValue = F("Schlechteweg");
        break;
    }
    case 280465:
    {
        returnValue = F("Schlechtingen");
        break;
    }
    case 280466:
    {
        returnValue = F("Schlechtsarter Str.");
        break;
    }
    case 280467:
    {
        returnValue = F("Schlechtwegring");
        break;
    }
    case 280468:
    {
        returnValue = F("Schlechtwegverschmutzungsstrecke");
        break;
    }
    case 280469:
    {
        returnValue = F("Schlechtwiesstr.");
        break;
    }
    case 280470:
    {
        returnValue = F("Schlecker Deich");
        break;
    }
    case 280471:
    {
        returnValue = F("Schlecker Weg");
        break;
    }
    case 280472:
    {
        returnValue = F("Schleckheimer Str.");
        break;
    }
    case 280473:
    {
        returnValue = F("Schlecksweg");
        break;
    }
    case 280474:
    {
        returnValue = F("Schledde");
        break;
    }
    case 280475:
    {
        returnValue = F("Schleddebreite");
        break;
    }
    case 280476:
    {
        returnValue = F("Schleddenhofer Weg");
        break;
    }
    case 280477:
    {
        returnValue = F("Schleddestr.");
        break;
    }
    case 280478:
    {
        returnValue = F("Schleddeufer");
        break;
    }
    case 280479:
    {
        returnValue = F("Schledebrückstr.");
        break;
    }
    case 280480:
    {
        returnValue = F("Schledehausener Str.");
        break;
    }
    case 280481:
    {
        returnValue = F("Schledehauser Str.");
        break;
    }
    case 280482:
    {
        returnValue = F("Schledehauser Weg");
        break;
    }
    case 280483:
    {
        returnValue = F("Schledenhorst");
        break;
    }
    case 280484:
    {
        returnValue = F("Schledenhorster Str.");
        break;
    }
    case 280485:
    {
        returnValue = F("Schledenhöchte");
        break;
    }
    case 280486:
    {
        returnValue = F("Schledenstr.");
        break;
    }
    case 280487:
    {
        returnValue = F("Schlederleiten");
        break;
    }
    case 280488:
    {
        returnValue = F("Schledestr.");
        break;
    }
    case 280489:
    {
        returnValue = F("Schleebachbrücke");
        break;
    }
    case 280490:
    {
        returnValue = F("Schleebachgraben");
        break;
    }
    case 280491:
    {
        returnValue = F("Schleebachstr.");
        break;
    }
    case 280492:
    {
        returnValue = F("Schleeberg");
        break;
    }
    case 280493:
    {
        returnValue = F("Schleebergstr.");
        break;
    }
    case 280494:
    {
        returnValue = F("Schleebergweg");
        break;
    }
    case 280495:
    {
        returnValue = F("Schleebucher Str.");
        break;
    }
    case 280496:
    {
        returnValue = F("Schleeburg");
        break;
    }
    case 280497:
    {
        returnValue = F("Schleedahlstr.");
        break;
    }
    case 280498:
    {
        returnValue = F("Schleede");
        break;
    }
    case 280499:
    {
        returnValue = F("Schleefelder Str.");
        break;
    }
    case 280500:
    {
        returnValue = F("Schleefeldweg");
        break;
    }
    case 280501:
    {
        returnValue = F("Schleegasse");
        break;
    }
    case 280502:
    {
        returnValue = F("Schleeheck");
        break;
    }
    case 280503:
    {
        returnValue = F("Schleeker Weg");
        break;
    }
    case 280504:
    {
        returnValue = F("Schleeknockstr.");
        break;
    }
    case 280505:
    {
        returnValue = F("Schleen");
        break;
    }
    case 280506:
    {
        returnValue = F("Schleenackerstr.");
        break;
    }
    case 280507:
    {
        returnValue = F("Schleenbergweg");
        break;
    }
    case 280508:
    {
        returnValue = F("Schleener Weg");
        break;
    }
    case 280509:
    {
        returnValue = F("Schleenhainer Str.");
        break;
    }
    case 280510:
    {
        returnValue = F("Schleenstr.");
        break;
    }
    case 280511:
    {
        returnValue = F("Schleenweg");
        break;
    }
    case 280512:
    {
        returnValue = F("Schleepfad");
        break;
    }
    case 280513:
    {
        returnValue = F("Schleepweg");
        break;
    }
    case 280514:
    {
        returnValue = F("Schleeriether Berg");
        break;
    }
    case 280515:
    {
        returnValue = F("Schleesen");
        break;
    }
    case 280516:
    {
        returnValue = F("Schleesener Str.");
        break;
    }
    case 280517:
    {
        returnValue = F("Schleesener Weg");
        break;
    }
    case 280518:
    {
        returnValue = F("Schleestege");
        break;
    }
    case 280519:
    {
        returnValue = F("Schleestr.");
        break;
    }
    case 280520:
    {
        returnValue = F("Schleeweg");
        break;
    }
    case 280521:
    {
        returnValue = F("Schleeßeler Str.");
        break;
    }
    case 280522:
    {
        returnValue = F("Schlefengäßchen");
        break;
    }
    case 280523:
    {
        returnValue = F("Schlegelberg");
        break;
    }
    case 280524:
    {
        returnValue = F("Schlegelberger Weg");
        break;
    }
    case 280525:
    {
        returnValue = F("Schlegelbergstr.");
        break;
    }
    case 280526:
    {
        returnValue = F("Schlegelbergweg");
        break;
    }
    case 280527:
    {
        returnValue = F("Schlegeleinsweth");
        break;
    }
    case 280528:
    {
        returnValue = F("Schlegeler Str.");
        break;
    }
    case 280529:
    {
        returnValue = F("Schlegelgasse");
        break;
    }
    case 280530:
    {
        returnValue = F("Schlegelhof");
        break;
    }
    case 280531:
    {
        returnValue = F("Schlegelhofweg");
        break;
    }
    case 280532:
    {
        returnValue = F("Schlegelleithe");
        break;
    }
    case 280533:
    {
        returnValue = F("Schlegelmühlweg");
        break;
    }
    case 280534:
    {
        returnValue = F("Schlegelsberg");
        break;
    }
    case 280535:
    {
        returnValue = F("Schlegelsbergstr.");
        break;
    }
    case 280536:
    {
        returnValue = F("Schlegelstr.");
        break;
    }
    case 280537:
    {
        returnValue = F("Schlegelsweg");
        break;
    }
    case 280538:
    {
        returnValue = F("Schlegeltal");
        break;
    }
    case 280539:
    {
        returnValue = F("Schlegelwaldweg");
        break;
    }
    case 280540:
    {
        returnValue = F("Schlegelweg");
        break;
    }
    case 280541:
    {
        returnValue = F("Schlegersbusch");
        break;
    }
    case 280542:
    {
        returnValue = F("Schlegge");
        break;
    }
    case 280543:
    {
        returnValue = F("Schlegldorf");
        break;
    }
    case 280544:
    {
        returnValue = F("Schlegler Feld");
        break;
    }
    case 280545:
    {
        returnValue = F("Schlegler Str.");
        break;
    }
    case 280546:
    {
        returnValue = F("Schleglergasse");
        break;
    }
    case 280547:
    {
        returnValue = F("Schleglerstr.");
        break;
    }
    case 280548:
    {
        returnValue = F("Schlehbachstr.");
        break;
    }
    case 280549:
    {
        returnValue = F("Schlehbachweg");
        break;
    }
    case 280550:
    {
        returnValue = F("Schlehberg");
        break;
    }
    case 280551:
    {
        returnValue = F("Schlehbergring");
        break;
    }
    case 280552:
    {
        returnValue = F("Schlehbiek");
        break;
    }
    case 280553:
    {
        returnValue = F("Schlehbuschweg");
        break;
    }
    case 280554:
    {
        returnValue = F("Schlehdorfer Str.");
        break;
    }
    case 280555:
    {
        returnValue = F("Schlehdorn");
        break;
    }
    case 280556:
    {
        returnValue = F("Schlehdornstr.");
        break;
    }
    case 280557:
    {
        returnValue = F("Schlehdornweg");
        break;
    }
    case 280558:
    {
        returnValue = F("Schlehecke");
        break;
    }
    case 280559:
    {
        returnValue = F("Schlehecken");
        break;
    }
    case 280560:
    {
        returnValue = F("Schlehecker Str.");
        break;
    }
    case 280561:
    {
        returnValue = F("Schlehenallee");
        break;
    }
    case 280562:
    {
        returnValue = F("Schlehenberg");
        break;
    }
    case 280563:
    {
        returnValue = F("Schlehenbergstr.");
        break;
    }
    case 280564:
    {
        returnValue = F("Schlehenbogen");
        break;
    }
    case 280565:
    {
        returnValue = F("Schlehenbrink");
        break;
    }
    case 280566:
    {
        returnValue = F("Schlehenbuck");
        break;
    }
    case 280567:
    {
        returnValue = F("Schlehenbusch");
        break;
    }
    case 280568:
    {
        returnValue = F("Schlehenbuschweg");
        break;
    }
    case 280569:
    {
        returnValue = F("Schlehenbühl");
        break;
    }
    case 280570:
    {
        returnValue = F("Schlehendornweg");
        break;
    }
    case 280571:
    {
        returnValue = F("Schleheneck");
        break;
    }
    case 280572:
    {
        returnValue = F("Schlehengang");
        break;
    }
    case 280573:
    {
        returnValue = F("Schlehengarten");
        break;
    }
    case 280574:
    {
        returnValue = F("Schlehengasse");
        break;
    }
    case 280575:
    {
        returnValue = F("Schlehengrund");
        break;
    }
    case 280576:
    {
        returnValue = F("Schlehenhaag");
        break;
    }
    case 280577:
    {
        returnValue = F("Schlehenhag");
        break;
    }
    case 280578:
    {
        returnValue = F("Schlehenhain");
        break;
    }
    case 280579:
    {
        returnValue = F("Schlehenhalde");
        break;
    }
    case 280580:
    {
        returnValue = F("Schlehenhang");
        break;
    }
    case 280581:
    {
        returnValue = F("Schlehenhecke");
        break;
    }
    case 280582:
    {
        returnValue = F("Schlehenhof");
        break;
    }
    case 280583:
    {
        returnValue = F("Schlehenkamp");
        break;
    }
    case 280584:
    {
        returnValue = F("Schlehenmühler Weg");
        break;
    }
    case 280585:
    {
        returnValue = F("Schlehenpfad");
        break;
    }
    case 280586:
    {
        returnValue = F("Schlehenplatz");
        break;
    }
    case 280587:
    {
        returnValue = F("Schlehenrain");
        break;
    }
    case 280588:
    {
        returnValue = F("Schlehenring");
        break;
    }
    case 280589:
    {
        returnValue = F("Schlehensteig");
        break;
    }
    case 280590:
    {
        returnValue = F("Schlehensteinstr.");
        break;
    }
    case 280591:
    {
        returnValue = F("Schlehenstieg");
        break;
    }
    case 280592:
    {
        returnValue = F("Schlehenstiege");
        break;
    }
    case 280593:
    {
        returnValue = F("Schlehenstr.");
        break;
    }
    case 280594:
    {
        returnValue = F("Schlehental");
        break;
    }
    case 280595:
    {
        returnValue = F("Schlehenteichweg");
        break;
    }
    case 280596:
    {
        returnValue = F("Schlehenweg");
        break;
    }
    case 280597:
    {
        returnValue = F("Schlehenweg 28 - 28e");
        break;
    }
    case 280598:
    {
        returnValue = F("Schlehenwinkel");
        break;
    }
    case 280599:
    {
        returnValue = F("Schlehenworth");
        break;
    }
    case 280600:
    {
        returnValue = F("Schlehenäcker");
        break;
    }
    case 280601:
    {
        returnValue = F("Schleherstr.");
        break;
    }
    case 280602:
    {
        returnValue = F("Schleherweg");
        break;
    }
    case 280603:
    {
        returnValue = F("Schlehhag");
        break;
    }
    case 280604:
    {
        returnValue = F("Schlehhecke");
        break;
    }
    case 280605:
    {
        returnValue = F("Schlehkuhle");
        break;
    }
    case 280606:
    {
        returnValue = F("Schlehrain");
        break;
    }
    case 280607:
    {
        returnValue = F("Schlehrstr.");
        break;
    }
    case 280608:
    {
        returnValue = F("Schlehuberweg");
        break;
    }
    case 280609:
    {
        returnValue = F("Schlehweg");
        break;
    }
    case 280610:
    {
        returnValue = F("Schleibacher Weg");
        break;
    }
    case 280611:
    {
        returnValue = F("Schleibank");
        break;
    }
    case 280612:
    {
        returnValue = F("Schleiblick");
        break;
    }
    case 280613:
    {
        returnValue = F("Schleibnitzer Str.");
        break;
    }
    case 280614:
    {
        returnValue = F("Schleibogen");
        break;
    }
    case 280615:
    {
        returnValue = F("Schleichenweg");
        break;
    }
    case 280616:
    {
        returnValue = F("Schleichergasse");
        break;
    }
    case 280617:
    {
        returnValue = F("Schleichershof");
        break;
    }
    case 280618:
    {
        returnValue = F("Schleichersteig");
        break;
    }
    case 280619:
    {
        returnValue = F("Schleicherstr.");
        break;
    }
    case 280620:
    {
        returnValue = F("Schleichersträßchen");
        break;
    }
    case 280621:
    {
        returnValue = F("Schleichertstr.");
        break;
    }
    case 280622:
    {
        returnValue = F("Schleicherweg");
        break;
    }
    case 280623:
    {
        returnValue = F("Schleichgasse");
        break;
    }
    case 280624:
    {
        returnValue = F("Schleichgässchen");
        break;
    }
    case 280625:
    {
        returnValue = F("Schleichinger");
        break;
    }
    case 280626:
    {
        returnValue = F("Schleichinger Weg");
        break;
    }
    case 280627:
    {
        returnValue = F("Schleichlingstr.");
        break;
    }
    case 280628:
    {
        returnValue = F("Schleichstr.");
        break;
    }
    case 280629:
    {
        returnValue = F("Schleichtalstr.");
        break;
    }
    case 280630:
    {
        returnValue = F("Schleichwaldweg");
        break;
    }
    case 280631:
    {
        returnValue = F("Schleichweg");
        break;
    }
    case 280632:
    {
        returnValue = F("Schleichwies");
        break;
    }
    case 280633:
    {
        returnValue = F("Schleichäcker");
        break;
    }
    case 280634:
    {
        returnValue = F("Schleidbahn");
        break;
    }
    case 280635:
    {
        returnValue = F("Schleiden");
        break;
    }
    case 280636:
    {
        returnValue = F("Schleidenbruchweg");
        break;
    }
    case 280637:
    {
        returnValue = F("Schleidener Aue");
        break;
    }
    case 280638:
    {
        returnValue = F("Schleidener Str.");
        break;
    }
    case 280639:
    {
        returnValue = F("Schleidenstr.");
        break;
    }
    case 280640:
    {
        returnValue = F("Schleider Hauptstr.");
        break;
    }
    case 280641:
    {
        returnValue = F("Schleider Str.");
        break;
    }
    case 280642:
    {
        returnValue = F("Schleiderhook");
        break;
    }
    case 280643:
    {
        returnValue = F("Schleidermannsweg");
        break;
    }
    case 280644:
    {
        returnValue = F("Schleiderweg");
        break;
    }
    case 280645:
    {
        returnValue = F("Schleiderwiese");
        break;
    }
    case 280646:
    {
        returnValue = F("Schleidhof; Sonnenhof");
        break;
    }
    case 280647:
    {
        returnValue = F("Schleidpark");
        break;
    }
    case 280648:
    {
        returnValue = F("Schleidsbergweg");
        break;
    }
    case 280649:
    {
        returnValue = F("Schleidstr.");
        break;
    }
    case 280650:
    {
        returnValue = F("Schleidtalstr.");
        break;
    }
    case 280651:
    {
        returnValue = F("Schleidterweg");
        break;
    }
    case 280652:
    {
        returnValue = F("Schleidtgässchen");
        break;
    }
    case 280653:
    {
        returnValue = F("Schleidtstr.");
        break;
    }
    case 280654:
    {
        returnValue = F("Schleidweg");
        break;
    }
    case 280655:
    {
        returnValue = F("Schleidweiler Str.");
        break;
    }
    case 280656:
    {
        returnValue = F("Schleidörfer Str.");
        break;
    }
    case 280657:
    {
        returnValue = F("Schleidörferstr.");
        break;
    }
    case 280658:
    {
        returnValue = F("Schleiengrund");
        break;
    }
    case 280659:
    {
        returnValue = F("Schleienpfad");
        break;
    }
    case 280660:
    {
        returnValue = F("Schleienstr.");
        break;
    }
    case 280661:
    {
        returnValue = F("Schleientrift");
        break;
    }
    case 280662:
    {
        returnValue = F("Schleienweg");
        break;
    }
    case 280663:
    {
        returnValue = F("Schleier-Eule");
        break;
    }
    case 280664:
    {
        returnValue = F("Schleierackerweg");
        break;
    }
    case 280665:
    {
        returnValue = F("Schleierberg");
        break;
    }
    case 280666:
    {
        returnValue = F("Schleierbornweg");
        break;
    }
    case 280667:
    {
        returnValue = F("Schleiergasse");
        break;
    }
    case 280668:
    {
        returnValue = F("Schleiergewannweg");
        break;
    }
    case 280669:
    {
        returnValue = F("Schleiergrün");
        break;
    }
    case 280670:
    {
        returnValue = F("Schleierhof");
        break;
    }
    case 280671:
    {
        returnValue = F("Schleierhofer Weg");
        break;
    }
    case 280672:
    {
        returnValue = F("Schleierkrautweg");
        break;
    }
    case 280673:
    {
        returnValue = F("Schleiermacherstr.");
        break;
    }
    case 280674:
    {
        returnValue = F("Schleiermacherweg");
        break;
    }
    case 280675:
    {
        returnValue = F("Schleiersbach");
        break;
    }
    case 280676:
    {
        returnValue = F("Schleiersbacher Str.");
        break;
    }
    case 280677:
    {
        returnValue = F("Schleierweg");
        break;
    }
    case 280678:
    {
        returnValue = F("Schleiestr.");
        break;
    }
    case 280679:
    {
        returnValue = F("Schleif");
        break;
    }
    case 280680:
    {
        returnValue = F("Schleifanger");
        break;
    }
    case 280681:
    {
        returnValue = F("Schleifbach-Brücke");
        break;
    }
    case 280682:
    {
        returnValue = F("Schleifbachweg");
        break;
    }
    case 280683:
    {
        returnValue = F("Schleifberg");
        break;
    }
    case 280684:
    {
        returnValue = F("Schleifbrücke");
        break;
    }
    case 280685:
    {
        returnValue = F("Schleifbrückenstr.");
        break;
    }
    case 280686:
    {
        returnValue = F("Schleife");
        break;
    }
    case 280687:
    {
        returnValue = F("Schleifelder Str.");
        break;
    }
    case 280688:
    {
        returnValue = F("Schleifelder Weg");
        break;
    }
    case 280689:
    {
        returnValue = F("Schleifen");
        break;
    }
    case 280690:
    {
        returnValue = F("Schleifenbach");
        break;
    }
    case 280691:
    {
        returnValue = F("Schleifenbachstr.");
        break;
    }
    case 280692:
    {
        returnValue = F("Schleifenfelsweg");
        break;
    }
    case 280693:
    {
        returnValue = F("Schleifengrundweg");
        break;
    }
    case 280694:
    {
        returnValue = F("Schleifensteig");
        break;
    }
    case 280695:
    {
        returnValue = F("Schleifenstr.");
        break;
    }
    case 280696:
    {
        returnValue = F("Schleifenweg");
        break;
    }
    case 280697:
    {
        returnValue = F("Schleifer Allee");
        break;
    }
    case 280698:
    {
        returnValue = F("Schleifer Ring");
        break;
    }
    case 280699:
    {
        returnValue = F("Schleifer Str.");
        break;
    }
    case 280700:
    {
        returnValue = F("Schleifer Weg");
        break;
    }
    case 280701:
    {
        returnValue = F("Schleiferanger");
        break;
    }
    case 280702:
    {
        returnValue = F("Schleiferberg");
        break;
    }
    case 280703:
    {
        returnValue = F("Schleiferbergsiedlung");
        break;
    }
    case 280704:
    {
        returnValue = F("Schleiferbuchenweg");
        break;
    }
    case 280705:
    {
        returnValue = F("Schleifergasse");
        break;
    }
    case 280706:
    {
        returnValue = F("Schleifergäßchen");
        break;
    }
    case 280707:
    {
        returnValue = F("Schleiferplatz");
        break;
    }
    case 280708:
    {
        returnValue = F("Schleifersberg");
        break;
    }
    case 280709:
    {
        returnValue = F("Schleiferstr.");
        break;
    }
    case 280710:
    {
        returnValue = F("Schleiferweg");
        break;
    }
    case 280711:
    {
        returnValue = F("Schleifestr.");
        break;
    }
    case 280712:
    {
        returnValue = F("Schleifeweg");
        break;
    }
    case 280713:
    {
        returnValue = F("Schleifgarten");
        break;
    }
    case 280714:
    {
        returnValue = F("Schleifgasse");
        break;
    }
    case 280715:
    {
        returnValue = F("Schleifgrund");
        break;
    }
    case 280716:
    {
        returnValue = F("Schleifgäßchen");
        break;
    }
    case 280717:
    {
        returnValue = F("Schleifhalde");
        break;
    }
    case 280718:
    {
        returnValue = F("Schleifhaldenweg");
        break;
    }
    case 280719:
    {
        returnValue = F("Schleifhaltweg");
        break;
    }
    case 280720:
    {
        returnValue = F("Schleifhäusleweg");
        break;
    }
    case 280721:
    {
        returnValue = F("Schleifhüttenweg");
        break;
    }
    case 280722:
    {
        returnValue = F("Schleifkotengrund");
        break;
    }
    case 280723:
    {
        returnValue = F("Schleifkotten");
        break;
    }
    case 280724:
    {
        returnValue = F("Schleifmattstr.");
        break;
    }
    case 280725:
    {
        returnValue = F("Schleifmühlchen");
        break;
    }
    case 280726:
    {
        returnValue = F("Schleifmühle");
        break;
    }
    case 280727:
    {
        returnValue = F("Schleifmühlenstr.");
        break;
    }
    case 280728:
    {
        returnValue = F("Schleifmühlenweg");
        break;
    }
    case 280729:
    {
        returnValue = F("Schleifmühlestr.");
        break;
    }
    case 280730:
    {
        returnValue = F("Schleifmühleweg");
        break;
    }
    case 280731:
    {
        returnValue = F("Schleifmühllaine");
        break;
    }
    case 280732:
    {
        returnValue = F("Schleifmühlpark");
        break;
    }
    case 280733:
    {
        returnValue = F("Schleifmühlstr.");
        break;
    }
    case 280734:
    {
        returnValue = F("Schleifmühlweg");
        break;
    }
    case 280735:
    {
        returnValue = F("Schleifpfad");
        break;
    }
    case 280736:
    {
        returnValue = F("Schleifrainstr.");
        break;
    }
    case 280737:
    {
        returnValue = F("Schleifrainsträßchen");
        break;
    }
    case 280738:
    {
        returnValue = F("Schleifrasen");
        break;
    }
    case 280739:
    {
        returnValue = F("Schleifrasstr.");
        break;
    }
    case 280740:
    {
        returnValue = F("Schleifreisener Weg");
        break;
    }
    case 280741:
    {
        returnValue = F("Schleifstein");
        break;
    }
    case 280742:
    {
        returnValue = F("Schleifsteinweg");
        break;
    }
    case 280743:
    {
        returnValue = F("Schleifstiege");
        break;
    }
    case 280744:
    {
        returnValue = F("Schleifstr.");
        break;
    }
    case 280745:
    {
        returnValue = F("Schleiftalweg");
        break;
    }
    case 280746:
    {
        returnValue = F("Schleifweg");
        break;
    }
    case 280747:
    {
        returnValue = F("Schleifweg-Nord");
        break;
    }
    case 280748:
    {
        returnValue = F("Schleifwiesen");
        break;
    }
    case 280749:
    {
        returnValue = F("Schleifwiesenstr.");
        break;
    }
    case 280750:
    {
        returnValue = F("Schleifwiesenweg");
        break;
    }
    case 280751:
    {
        returnValue = F("Schleifäcker");
        break;
    }
    case 280752:
    {
        returnValue = F("Schleiglstr.");
        break;
    }
    case 280753:
    {
        returnValue = F("Schleihenweg");
        break;
    }
    case 280754:
    {
        returnValue = F("Schleihof");
        break;
    }
    case 280755:
    {
        returnValue = F("Schleihöhe");
        break;
    }
    case 280756:
    {
        returnValue = F("Schleikamp");
        break;
    }
    case 280757:
    {
        returnValue = F("Schleikoppel");
        break;
    }
    case 280758:
    {
        returnValue = F("Schleimbachstr.");
        break;
    }
    case 280759:
    {
        returnValue = F("Schleimteichsträßle");
        break;
    }
    case 280760:
    {
        returnValue = F("Schleimweg");
        break;
    }
    case 280761:
    {
        returnValue = F("Schleimwiesen");
        break;
    }
    case 280762:
    {
        returnValue = F("Schleimünder Str.");
        break;
    }
    case 280763:
    {
        returnValue = F("Schleindltörl");
        break;
    }
    case 280764:
    {
        returnValue = F("Schleinhofer Weg");
        break;
    }
    case 280765:
    {
        returnValue = F("Schleinitz");
        break;
    }
    case 280766:
    {
        returnValue = F("Schleinitzer Str.");
        break;
    }
    case 280767:
    {
        returnValue = F("Schleinitzstr.");
        break;
    }
    case 280768:
    {
        returnValue = F("Schleinitzweg");
        break;
    }
    case 280769:
    {
        returnValue = F("Schleinkoferstr.");
        break;
    }
    case 280770:
    {
        returnValue = F("Schleinkofstr.");
        break;
    }
    case 280771:
    {
        returnValue = F("Schleipweg");
        break;
    }
    case 280772:
    {
        returnValue = F("Schleiseeweg");
        break;
    }
    case 280773:
    {
        returnValue = F("Schleiserweg");
        break;
    }
    case 280774:
    {
        returnValue = F("Schleistr.");
        break;
    }
    case 280775:
    {
        returnValue = F("Schleisweg");
        break;
    }
    case 280776:
    {
        returnValue = F("Schleiten");
        break;
    }
    case 280777:
    {
        returnValue = F("Schleitenstr.");
        break;
    }
    case 280778:
    {
        returnValue = F("Schleitheimer Str.");
        break;
    }
    case 280779:
    {
        returnValue = F("Schleitheimerstr.");
        break;
    }
    case 280780:
    {
        returnValue = F("Schleitmersch");
        break;
    }
    case 280781:
    {
        returnValue = F("Schleitstr.");
        break;
    }
    case 280782:
    {
        returnValue = F("Schleitweg");
        break;
    }
    case 280783:
    {
        returnValue = F("Schleitwiesenweg");
        break;
    }
    case 280784:
    {
        returnValue = F("Schleitzenäcker");
        break;
    }
    case 280785:
    {
        returnValue = F("Schleiufer");
        break;
    }
    case 280786:
    {
        returnValue = F("Schleiweg");
        break;
    }
    case 280787:
    {
        returnValue = F("Schleizer Str.");
        break;
    }
    case 280788:
    {
        returnValue = F("Schleizleite");
        break;
    }
    case 280789:
    {
        returnValue = F("Schleißbacher Str.");
        break;
    }
    case 280790:
    {
        returnValue = F("Schleißbachweg");
        break;
    }
    case 280791:
    {
        returnValue = F("Schleißbergstr.");
        break;
    }
    case 280792:
    {
        returnValue = F("Schleißbühlstr.");
        break;
    }
    case 280793:
    {
        returnValue = F("Schleißdorf");
        break;
    }
    case 280794:
    {
        returnValue = F("Schleißheimer Str.");
        break;
    }
    case 280795:
    {
        returnValue = F("Schlemaer Gasse");
        break;
    }
    case 280796:
    {
        returnValue = F("Schlemaer Str.");
        break;
    }
    case 280797:
    {
        returnValue = F("Schlembenhaldenweg");
        break;
    }
    case 280798:
    {
        returnValue = F("Schlemmergasse");
        break;
    }
    case 280799:
    {
        returnValue = F("Schlemmersbrühlstr.");
        break;
    }
    case 280800:
    {
        returnValue = F("Schlemmershof");
        break;
    }
    case 280801:
    {
        returnValue = F("Schlemmersmühle");
        break;
    }
    case 280802:
    {
        returnValue = F("Schlemmerweg");
        break;
    }
    case 280803:
    {
        returnValue = F("Schlemmerwiesen");
        break;
    }
    case 280804:
    {
        returnValue = F("Schlemmgasse");
        break;
    }
    case 280805:
    {
        returnValue = F("Schlemmhüttenweg");
        break;
    }
    case 280806:
    {
        returnValue = F("Schlemminer Chaussee");
        break;
    }
    case 280807:
    {
        returnValue = F("Schlemminer Str.");
        break;
    }
    case 280808:
    {
        returnValue = F("Schlemminer Weg");
        break;
    }
    case 280809:
    {
        returnValue = F("Schlemminschneise");
        break;
    }
    case 280810:
    {
        returnValue = F("Schlempertshof");
        break;
    }
    case 280811:
    {
        returnValue = F("Schlemserweg");
        break;
    }
    case 280812:
    {
        returnValue = F("Schlencker Str.");
        break;
    }
    case 280813:
    {
        returnValue = F("Schlendergasse");
        break;
    }
    case 280814:
    {
        returnValue = F("Schlenderhanstr.");
        break;
    }
    case 280815:
    {
        returnValue = F("Schlenderhanweg");
        break;
    }
    case 280816:
    {
        returnValue = F("Schlenderweg");
        break;
    }
    case 280817:
    {
        returnValue = F("Schlendorfer Oberweg");
        break;
    }
    case 280818:
    {
        returnValue = F("Schlendorfer Str.");
        break;
    }
    case 280819:
    {
        returnValue = F("Schlengelweg");
        break;
    }
    case 280820:
    {
        returnValue = F("Schlengenstr.");
        break;
    }
    case 280821:
    {
        returnValue = F("Schlengenweg");
        break;
    }
    case 280822:
    {
        returnValue = F("Schlenk");
        break;
    }
    case 280823:
    {
        returnValue = F("Schlenkallee");
        break;
    }
    case 280824:
    {
        returnValue = F("Schlenke");
        break;
    }
    case 280825:
    {
        returnValue = F("Schlenkenbrink");
        break;
    }
    case 280826:
    {
        returnValue = F("Schlenkenmattweg");
        break;
    }
    case 280827:
    {
        returnValue = F("Schlenkenmoor");
        break;
    }
    case 280828:
    {
        returnValue = F("Schlenkenstr.");
        break;
    }
    case 280829:
    {
        returnValue = F("Schlenkental");
        break;
    }
    case 280830:
    {
        returnValue = F("Schlenkenweg");
        break;
    }
    case 280831:
    {
        returnValue = F("Schlenker Str.");
        break;
    }
    case 280832:
    {
        returnValue = F("Schlenkertstr.");
        break;
    }
    case 280833:
    {
        returnValue = F("Schlenkertwiesen");
        break;
    }
    case 280834:
    {
        returnValue = F("Schlenkestr.");
        break;
    }
    case 280835:
    {
        returnValue = F("Schlenkgasse");
        break;
    }
    case 280836:
    {
        returnValue = F("Schlenkhoffs Weg");
        break;
    }
    case 280837:
    {
        returnValue = F("Schlenkhoffstr.");
        break;
    }
    case 280838:
    {
        returnValue = F("Schlenkstr.");
        break;
    }
    case 280839:
    {
        returnValue = F("Schlensenweg");
        break;
    }
    case 280840:
    {
        returnValue = F("Schlenz");
        break;
    }
    case 280841:
    {
        returnValue = F("Schlenzer Str.");
        break;
    }
    case 280842:
    {
        returnValue = F("Schlenzer Weg");
        break;
    }
    case 280843:
    {
        returnValue = F("Schlenzetaler Str.");
        break;
    }
    case 280844:
    {
        returnValue = F("Schlenzeweg");
        break;
    }
    case 280845:
    {
        returnValue = F("Schlenzstr.");
        break;
    }
    case 280846:
    {
        returnValue = F("Schlepegrellstr.");
        break;
    }
    case 280847:
    {
        returnValue = F("Schlepelsberg");
        break;
    }
    case 280848:
    {
        returnValue = F("Schleper");
        break;
    }
    case 280849:
    {
        returnValue = F("Schlepers Kamp");
        break;
    }
    case 280850:
    {
        returnValue = F("Schlepes Grund");
        break;
    }
    case 280851:
    {
        returnValue = F("Schlepkow");
        break;
    }
    case 280852:
    {
        returnValue = F("Schleppbahn");
        break;
    }
    case 280853:
    {
        returnValue = F("Schleppenburger Kirchweg");
        break;
    }
    case 280854:
    {
        returnValue = F("Schleppenföhrerstr.");
        break;
    }
    case 280855:
    {
        returnValue = F("Schleppenweg");
        break;
    }
    case 280856:
    {
        returnValue = F("Schlepperstr.");
        break;
    }
    case 280857:
    {
        returnValue = F("Schlepperweg");
        break;
    }
    case 280858:
    {
        returnValue = F("Schleppsgarten");
        break;
    }
    case 280859:
    {
        returnValue = F("Schleppsgraben");
        break;
    }
    case 280860:
    {
        returnValue = F("Schleppweg");
        break;
    }
    case 280861:
    {
        returnValue = F("Schleptruper Kirchweg");
        break;
    }
    case 280862:
    {
        returnValue = F("Schleptruper Str.");
        break;
    }
    case 280863:
    {
        returnValue = F("Schleptruper Strang");
        break;
    }
    case 280864:
    {
        returnValue = F("Schlepweg");
        break;
    }
    case 280865:
    {
        returnValue = F("Schlerethstr.");
        break;
    }
    case 280866:
    {
        returnValue = F("Schlerner Weg");
        break;
    }
    case 280867:
    {
        returnValue = F("Schlernweg");
        break;
    }
    case 280868:
    {
        returnValue = F("Schlernweiher");
        break;
    }
    case 280869:
    {
        returnValue = F("Schlerreweg");
        break;
    }
    case 280870:
    {
        returnValue = F("Schlesenweg");
        break;
    }
    case 280871:
    {
        returnValue = F("Schleser Weg");
        break;
    }
    case 280872:
    {
        returnValue = F("Schlesienplatz");
        break;
    }
    case 280873:
    {
        returnValue = F("Schlesienring");
        break;
    }
    case 280874:
    {
        returnValue = F("Schlesienstr.");
        break;
    }
    case 280875:
    {
        returnValue = F("Schlesienstrasse");
        break;
    }
    case 280876:
    {
        returnValue = F("Schlesienweg");
        break;
    }
    case 280877:
    {
        returnValue = F("Schlesier Str.");
        break;
    }
    case 280878:
    {
        returnValue = F("Schlesier Weg");
        break;
    }
    case 280879:
    {
        returnValue = F("Schlesierallee");
        break;
    }
    case 280880:
    {
        returnValue = F("Schlesierdamm");
        break;
    }
    case 280881:
    {
        returnValue = F("Schlesierhöhe");
        break;
    }
    case 280882:
    {
        returnValue = F("Schlesierplatz");
        break;
    }
    case 280883:
    {
        returnValue = F("Schlesierring");
        break;
    }
    case 280884:
    {
        returnValue = F("Schlesierstr.");
        break;
    }
    case 280885:
    {
        returnValue = F("Schlesierstr.-71-81");
        break;
    }
    case 280886:
    {
        returnValue = F("Schlesierweg");
        break;
    }
    case 280887:
    {
        returnValue = F("Schlesiner Hof");
        break;
    }
    case 280888:
    {
        returnValue = F("Schlesiner Str.");
        break;
    }
    case 280889:
    {
        returnValue = F("Schlesinge");
        break;
    }
    case 280890:
    {
        returnValue = F("Schlesingerstr.");
        break;
    }
    case 280891:
    {
        returnValue = F("Schlesingstr.");
        break;
    }
    case 280892:
    {
        returnValue = F("Schlesische Str.");
        break;
    }
    case 280893:
    {
        returnValue = F("Schlesischer Hof");
        break;
    }
    case 280894:
    {
        returnValue = F("Schlesischer Platz");
        break;
    }
    case 280895:
    {
        returnValue = F("Schlesischer Ring");
        break;
    }
    case 280896:
    {
        returnValue = F("Schlesischer Weg");
        break;
    }
    case 280897:
    {
        returnValue = F("Schlesistr.");
        break;
    }
    case 280898:
    {
        returnValue = F("Schleswagweg");
        break;
    }
    case 280899:
    {
        returnValue = F("Schleswig-Holstein-Str.");
        break;
    }
    case 280900:
    {
        returnValue = F("Schleswiger Chaussee");
        break;
    }
    case 280901:
    {
        returnValue = F("Schleswiger Landstr.");
        break;
    }
    case 280902:
    {
        returnValue = F("Schleswiger Ring");
        break;
    }
    case 280903:
    {
        returnValue = F("Schleswiger Str.");
        break;
    }
    case 280904:
    {
        returnValue = F("Schleswiger Treppe");
        break;
    }
    case 280905:
    {
        returnValue = F("Schleswiger Weg");
        break;
    }
    case 280906:
    {
        returnValue = F("Schleswigerstr.");
        break;
    }
    case 280907:
    {
        returnValue = F("Schleswigstr.");
        break;
    }
    case 280908:
    {
        returnValue = F("Schleswigweg");
        break;
    }
    case 280909:
    {
        returnValue = F("Schletsberg");
        break;
    }
    case 280910:
    {
        returnValue = F("Schletta");
        break;
    }
    case 280911:
    {
        returnValue = F("Schlettach");
        break;
    }
    case 280912:
    {
        returnValue = F("Schlettacher Berg");
        break;
    }
    case 280913:
    {
        returnValue = F("Schlettacher Str.");
        break;
    }
    case 280914:
    {
        returnValue = F("Schlettachstr.");
        break;
    }
    case 280915:
    {
        returnValue = F("Schlettauer Bergstr.");
        break;
    }
    case 280916:
    {
        returnValue = F("Schlettauer Hauptstr.");
        break;
    }
    case 280917:
    {
        returnValue = F("Schlettauer Str.");
        break;
    }
    case 280918:
    {
        returnValue = F("Schlettauer Weg");
        break;
    }
    case 280919:
    {
        returnValue = F("Schlettauer Winkel");
        break;
    }
    case 280920:
    {
        returnValue = F("Schlettenhof");
        break;
    }
    case 280921:
    {
        returnValue = F("Schletterholzstr.");
        break;
    }
    case 280922:
    {
        returnValue = F("Schletterstr.");
        break;
    }
    case 280923:
    {
        returnValue = F("Schlettertannenweg");
        break;
    }
    case 280924:
    {
        returnValue = F("Schletterweg");
        break;
    }
    case 280925:
    {
        returnValue = F("Schlettichsteige");
        break;
    }
    case 280926:
    {
        returnValue = F("Schlettichstr.");
        break;
    }
    case 280927:
    {
        returnValue = F("Schlettichweg");
        break;
    }
    case 280928:
    {
        returnValue = F("Schlettstadtallee");
        break;
    }
    case 280929:
    {
        returnValue = F("Schlettstadter Str.");
        break;
    }
    case 280930:
    {
        returnValue = F("Schlettstr.");
        break;
    }
    case 280931:
    {
        returnValue = F("Schlettweg");
        break;
    }
    case 280932:
    {
        returnValue = F("Schlettweiner Steig");
        break;
    }
    case 280933:
    {
        returnValue = F("Schlettweiner Str.");
        break;
    }
    case 280934:
    {
        returnValue = F("Schletzenweg");
        break;
    }
    case 280935:
    {
        returnValue = F("Schleuderberg");
        break;
    }
    case 280936:
    {
        returnValue = F("Schleuener Weg");
        break;
    }
    case 280937:
    {
        returnValue = F("Schleuensche Trift");
        break;
    }
    case 280938:
    {
        returnValue = F("Schleuer");
        break;
    }
    case 280939:
    {
        returnValue = F("Schleupenweg");
        break;
    }
    case 280940:
    {
        returnValue = F("Schleupestr.");
        break;
    }
    case 280941:
    {
        returnValue = F("Schleusaubrücke");
        break;
    }
    case 280942:
    {
        returnValue = F("Schleusberg");
        break;
    }
    case 280943:
    {
        returnValue = F("Schleuse");
        break;
    }
    case 280944:
    {
        returnValue = F("Schleuse Altenberg");
        break;
    }
    case 280945:
    {
        returnValue = F("Schleuse Ausbau");
        break;
    }
    case 280946:
    {
        returnValue = F("Schleuse Barkow");
        break;
    }
    case 280947:
    {
        returnValue = F("Schleuse I");
        break;
    }
    case 280948:
    {
        returnValue = F("Schleuse II");
        break;
    }
    case 280949:
    {
        returnValue = F("Schleuse Leesenbrück");
        break;
    }
    case 280950:
    {
        returnValue = F("Schleuse Schorfheide");
        break;
    }
    case 280951:
    {
        returnValue = F("Schleusegasse");
        break;
    }
    case 280952:
    {
        returnValue = F("Schleusen-Gestell");
        break;
    }
    case 280953:
    {
        returnValue = F("Schleusenbreite");
        break;
    }
    case 280954:
    {
        returnValue = F("Schleusenbrücke");
        break;
    }
    case 280955:
    {
        returnValue = F("Schleusenbrücke Varloh Ost");
        break;
    }
    case 280956:
    {
        returnValue = F("Schleusenbrücke Varloh West");
        break;
    }
    case 280957:
    {
        returnValue = F("Schleusendamm");
        break;
    }
    case 280958:
    {
        returnValue = F("Schleusenerstr.");
        break;
    }
    case 280959:
    {
        returnValue = F("Schleusengang");
        break;
    }
    case 280960:
    {
        returnValue = F("Schleusengarten");
        break;
    }
    case 280961:
    {
        returnValue = F("Schleusengasse");
        break;
    }
    case 280962:
    {
        returnValue = F("Schleusengraben");
        break;
    }
    case 280963:
    {
        returnValue = F("Schleusengrund");
        break;
    }
    case 280964:
    {
        returnValue = F("Schleusenhof Regow");
        break;
    }
    case 280965:
    {
        returnValue = F("Schleusenhornweg");
        break;
    }
    case 280966:
    {
        returnValue = F("Schleuseninsel");
        break;
    }
    case 280967:
    {
        returnValue = F("Schleusenkanal");
        break;
    }
    case 280968:
    {
        returnValue = F("Schleusenpark");
        break;
    }
    case 280969:
    {
        returnValue = F("Schleusenpfad");
        break;
    }
    case 280970:
    {
        returnValue = F("Schleusenplatz");
        break;
    }
    case 280971:
    {
        returnValue = F("Schleusensiedlung");
        break;
    }
    case 280972:
    {
        returnValue = F("Schleusenstr.");
        break;
    }
    case 280973:
    {
        returnValue = F("Schleusentor");
        break;
    }
    case 280974:
    {
        returnValue = F("Schleusenweg");
        break;
    }
    case 280975:
    {
        returnValue = F("Schleusenwiese");
        break;
    }
    case 280976:
    {
        returnValue = F("Schleusig");
        break;
    }
    case 280977:
    {
        returnValue = F("Schleusinger Allee");
        break;
    }
    case 280978:
    {
        returnValue = F("Schleusinger Bahnhofstr.");
        break;
    }
    case 280979:
    {
        returnValue = F("Schleusinger Str.");
        break;
    }
    case 280980:
    {
        returnValue = F("Schleusinger Weg");
        break;
    }
    case 280981:
    {
        returnValue = F("Schleusingerstr.");
        break;
    }
    case 280982:
    {
        returnValue = F("Schleuskuhle");
        break;
    }
    case 280983:
    {
        returnValue = F("Schleussbrunnenweg");
        break;
    }
    case 280984:
    {
        returnValue = F("Schleussnerstr.");
        break;
    }
    case 280985:
    {
        returnValue = F("Schleuße");
        break;
    }
    case 280986:
    {
        returnValue = F("Schleußer Dorfstr.");
        break;
    }
    case 280987:
    {
        returnValue = F("Schleußer Str.");
        break;
    }
    case 280988:
    {
        returnValue = F("Schleußnerstr.");
        break;
    }
    case 280989:
    {
        returnValue = F("Schlewecker Str.");
        break;
    }
    case 280990:
    {
        returnValue = F("Schlewecker Trift");
        break;
    }
    case 280991:
    {
        returnValue = F("Schlewiesenmühle");
        break;
    }
    case 280992:
    {
        returnValue = F("Schleyerstr.");
        break;
    }
    case 280993:
    {
        returnValue = F("Schleyerweg");
        break;
    }
    case 280994:
    {
        returnValue = F("Schleypenhofer Weg");
        break;
    }
    case 280995:
    {
        returnValue = F("Schleystr.");
        break;
    }
    case 280996:
    {
        returnValue = F("Schlibbeckeweg");
        break;
    }
    case 280997:
    {
        returnValue = F("Schlibeck");
        break;
    }
    case 280998:
    {
        returnValue = F("Schlich");
        break;
    }
    case 280999:
    {
        returnValue = F("Schlichacker Weg");
        break;
    }
    case 281000:
    {
        returnValue = F("Schlichbachstr.");
        break;
    }
    case 281001:
    {
        returnValue = F("Schlichemklamm");
        break;
    }
    case 281002:
    {
        returnValue = F("Schlichemstr.");
        break;
    }
    case 281003:
    {
        returnValue = F("Schlichemwanderweg");
        break;
    }
    case 281004:
    {
        returnValue = F("Schlichemwandwerweg");
        break;
    }
    case 281005:
    {
        returnValue = F("Schlichenhöfle");
        break;
    }
    case 281006:
    {
        returnValue = F("Schlichenreuth");
        break;
    }
    case 281007:
    {
        returnValue = F("Schlichenweiler");
        break;
    }
    case 281008:
    {
        returnValue = F("Schlicher Str.");
        break;
    }
    case 281009:
    {
        returnValue = F("Schlicher Weg");
        break;
    }
    case 281010:
    {
        returnValue = F("Schlicherumer Str.");
        break;
    }
    case 281011:
    {
        returnValue = F("Schlichgasse");
        break;
    }
    case 281012:
    {
        returnValue = F("Schlichlingswiesen");
        break;
    }
    case 281013:
    {
        returnValue = F("Schlichower Dorfstr.");
        break;
    }
    case 281014:
    {
        returnValue = F("Schlichower Str.");
        break;
    }
    case 281015:
    {
        returnValue = F("Schlichte");
        break;
    }
    case 281016:
    {
        returnValue = F("Schlichtelke");
        break;
    }
    case 281017:
    {
        returnValue = F("Schlichtener Str.");
        break;
    }
    case 281018:
    {
        returnValue = F("Schlichtener Weg");
        break;
    }
    case 281019:
    {
        returnValue = F("Schlichtengasse");
        break;
    }
    case 281020:
    {
        returnValue = F("Schlichtenkamp");
        break;
    }
    case 281021:
    {
        returnValue = F("Schlichtenmoor");
        break;
    }
    case 281022:
    {
        returnValue = F("Schlichtenstr.");
        break;
    }
    case 281023:
    {
        returnValue = F("Schlichter Damm");
        break;
    }
    case 281024:
    {
        returnValue = F("Schlichter Str.");
        break;
    }
    case 281025:
    {
        returnValue = F("Schlichter Weg");
        break;
    }
    case 281026:
    {
        returnValue = F("Schlichtergasse");
        break;
    }
    case 281027:
    {
        returnValue = F("Schlichterheide");
        break;
    }
    case 281028:
    {
        returnValue = F("Schlichternheide");
        break;
    }
    case 281029:
    {
        returnValue = F("Schlichterstr.");
        break;
    }
    case 281030:
    {
        returnValue = F("Schlichtertalweg");
        break;
    }
    case 281031:
    {
        returnValue = F("Schlichterweg");
        break;
    }
    case 281032:
    {
        returnValue = F("Schlichtestr.");
        break;
    }
    case 281033:
    {
        returnValue = F("Schlichtfeld");
        break;
    }
    case 281034:
    {
        returnValue = F("Schlichtgasse");
        break;
    }
    case 281035:
    {
        returnValue = F("Schlichthorster Str.");
        break;
    }
    case 281036:
    {
        returnValue = F("Schlichthorststr.");
        break;
    }
    case 281037:
    {
        returnValue = F("Schlichtinger Chaussee");
        break;
    }
    case 281038:
    {
        returnValue = F("Schlichtinger Moor");
        break;
    }
    case 281039:
    {
        returnValue = F("Schlichtingstr.");
        break;
    }
    case 281040:
    {
        returnValue = F("Schlichtmoorweg");
        break;
    }
    case 281041:
    {
        returnValue = F("Schlichtmoosweg");
        break;
    }
    case 281042:
    {
        returnValue = F("Schlichtmühle");
        break;
    }
    case 281043:
    {
        returnValue = F("Schlichtstr.");
        break;
    }
    case 281044:
    {
        returnValue = F("Schlichtweg");
        break;
    }
    case 281045:
    {
        returnValue = F("Schlichtäcker");
        break;
    }
    case 281046:
    {
        returnValue = F("Schlickbreede");
        break;
    }
    case 281047:
    {
        returnValue = F("Schlickbruch");
        break;
    }
    case 281048:
    {
        returnValue = F("Schlickburg");
        break;
    }
    case 281049:
    {
        returnValue = F("Schlickelder Str.");
        break;
    }
    case 281050:
    {
        returnValue = F("Schlicken");
        break;
    }
    case 281051:
    {
        returnValue = F("Schlickenrieder Str.");
        break;
    }
    case 281052:
    {
        returnValue = F("Schlicker Weg");
        break;
    }
    case 281053:
    {
        returnValue = F("Schlickerberg");
        break;
    }
    case 281054:
    {
        returnValue = F("Schlickerstr.");
        break;
    }
    case 281055:
    {
        returnValue = F("Schlickestr.");
        break;
    }
    case 281056:
    {
        returnValue = F("Schlickhstr.");
        break;
    }
    case 281057:
    {
        returnValue = F("Schlickmannsweg");
        break;
    }
    case 281058:
    {
        returnValue = F("Schlicktrift");
        break;
    }
    case 281059:
    {
        returnValue = F("Schlickumer Weg");
        break;
    }
    case 281060:
    {
        returnValue = F("Schlickumstr.");
        break;
    }
    case 281061:
    {
        returnValue = F("Schlickumsweg");
        break;
    }
    case 281062:
    {
        returnValue = F("Schlickweg");
        break;
    }
    case 281063:
    {
        returnValue = F("Schliebener Str.");
        break;
    }
    case 281064:
    {
        returnValue = F("Schliebener Weg");
        break;
    }
    case 281065:
    {
        returnValue = F("Schliebenstr.");
        break;
    }
    case 281066:
    {
        returnValue = F("Schlieberstadtstr.");
        break;
    }
    case 281067:
    {
        returnValue = F("Schliechtstr.");
        break;
    }
    case 281068:
    {
        returnValue = F("Schlieckau");
        break;
    }
    case 281069:
    {
        returnValue = F("Schliedererstr.");
        break;
    }
    case 281070:
    {
        returnValue = F("Schliefelder Weg");
        break;
    }
    case 281071:
    {
        returnValue = F("Schliefeweg");
        break;
    }
    case 281072:
    {
        returnValue = F("Schlieffenallee");
        break;
    }
    case 281073:
    {
        returnValue = F("Schlieffenberger Dorfstr.");
        break;
    }
    case 281074:
    {
        returnValue = F("Schlieffenstr.");
        break;
    }
    case 281075:
    {
        returnValue = F("Schliefisteg");
        break;
    }
    case 281076:
    {
        returnValue = F("Schliefstr.");
        break;
    }
    case 281077:
    {
        returnValue = F("Schliehenbankweg");
        break;
    }
    case 281078:
    {
        returnValue = F("Schliekhege");
        break;
    }
    case 281079:
    {
        returnValue = F("Schliekstr.");
        break;
    }
    case 281080:
    {
        returnValue = F("Schliekumer Str.");
        break;
    }
    case 281081:
    {
        returnValue = F("Schliekweg");
        break;
    }
    case 281082:
    {
        returnValue = F("Schliemannstr.");
        break;
    }
    case 281083:
    {
        returnValue = F("Schliemannweg");
        break;
    }
    case 281084:
    {
        returnValue = F("Schliemenweg");
        break;
    }
    case 281085:
    {
        returnValue = F("Schliemstiege");
        break;
    }
    case 281086:
    {
        returnValue = F("Schliengener Str.");
        break;
    }
    case 281087:
    {
        returnValue = F("Schlienweg");
        break;
    }
    case 281088:
    {
        returnValue = F("Schlieper Kamp");
        break;
    }
    case 281089:
    {
        returnValue = F("Schlieperfeld");
        break;
    }
    case 281090:
    {
        returnValue = F("Schlieperstr.");
        break;
    }
    case 281091:
    {
        returnValue = F("Schlieperweg");
        break;
    }
    case 281092:
    {
        returnValue = F("Schliepsteinweg");
        break;
    }
    case 281093:
    {
        returnValue = F("Schliepstr.");
        break;
    }
    case 281094:
    {
        returnValue = F("Schliepweg");
        break;
    }
    case 281095:
    {
        returnValue = F("Schlierachstr.");
        break;
    }
    case 281096:
    {
        returnValue = F("Schlierachweg");
        break;
    }
    case 281097:
    {
        returnValue = F("Schlierbach");
        break;
    }
    case 281098:
    {
        returnValue = F("Schlierbacher Landstr.");
        break;
    }
    case 281099:
    {
        returnValue = F("Schlierbacher Schneise");
        break;
    }
    case 281100:
    {
        returnValue = F("Schlierbacher Str.");
        break;
    }
    case 281101:
    {
        returnValue = F("Schlierbacher Weg");
        break;
    }
    case 281102:
    {
        returnValue = F("Schlierbachsteige");
        break;
    }
    case 281103:
    {
        returnValue = F("Schlierbachstr.");
        break;
    }
    case 281104:
    {
        returnValue = F("Schlierbachsträßchen");
        break;
    }
    case 281105:
    {
        returnValue = F("Schlierbachweg");
        break;
    }
    case 281106:
    {
        returnValue = F("Schlierbachweg (F1/F2)");
        break;
    }
    case 281107:
    {
        returnValue = F("Schlierbachweg (F2)");
        break;
    }
    case 281108:
    {
        returnValue = F("Schlierbachweg (F3)");
        break;
    }
    case 281109:
    {
        returnValue = F("Schlierbahn");
        break;
    }
    case 281110:
    {
        returnValue = F("Schlierberg");
        break;
    }
    case 281111:
    {
        returnValue = F("Schlierberger Weg");
        break;
    }
    case 281112:
    {
        returnValue = F("Schlierbergstr.");
        break;
    }
    case 281113:
    {
        returnValue = F("Schlierbergweg");
        break;
    }
    case 281114:
    {
        returnValue = F("Schlierer Str.");
        break;
    }
    case 281115:
    {
        returnValue = F("Schlierholz");
        break;
    }
    case 281116:
    {
        returnValue = F("Schlierholzstr.");
        break;
    }
    case 281117:
    {
        returnValue = F("Schlierholzweg");
        break;
    }
    case 281118:
    {
        returnValue = F("Schlierkopfstr.");
        break;
    }
    case 281119:
    {
        returnValue = F("Schlierkopfweg");
        break;
    }
    case 281120:
    {
        returnValue = F("Schlierseer Str.");
        break;
    }
    case 281121:
    {
        returnValue = F("Schlierseestr.");
        break;
    }
    case 281122:
    {
        returnValue = F("Schlierseeweg");
        break;
    }
    case 281123:
    {
        returnValue = F("Schlierstädter Str.");
        break;
    }
    case 281124:
    {
        returnValue = F("Schliesenweg");
        break;
    }
    case 281125:
    {
        returnValue = F("Schliesharden");
        break;
    }
    case 281126:
    {
        returnValue = F("Schliestedter Str.");
        break;
    }
    case 281127:
    {
        returnValue = F("Schlietenstr.");
        break;
    }
    case 281128:
    {
        returnValue = F("Schliezgasse");
        break;
    }
    case 281129:
    {
        returnValue = F("Schließerstr.");
        break;
    }
    case 281130:
    {
        returnValue = F("Schließhäuser Str.");
        break;
    }
    case 281131:
    {
        returnValue = F("Schließkenberg");
        break;
    }
    case 281132:
    {
        returnValue = F("Schließlgaßl");
        break;
    }
    case 281133:
    {
        returnValue = F("Schließstr.");
        break;
    }
    case 281134:
    {
        returnValue = F("Schliffbachstr.");
        break;
    }
    case 281135:
    {
        returnValue = F("Schliffenenweg");
        break;
    }
    case 281136:
    {
        returnValue = F("Schliffenstr.");
        break;
    }
    case 281137:
    {
        returnValue = F("Schliffersteige");
        break;
    }
    case 281138:
    {
        returnValue = F("Schliffgasse");
        break;
    }
    case 281139:
    {
        returnValue = F("Schliffigäßli");
        break;
    }
    case 281140:
    {
        returnValue = F("Schliffkopf");
        break;
    }
    case 281141:
    {
        returnValue = F("Schliffkopfstr.");
        break;
    }
    case 281142:
    {
        returnValue = F("Schliffkopfweg");
        break;
    }
    case 281143:
    {
        returnValue = F("Schliffsstr.");
        break;
    }
    case 281144:
    {
        returnValue = F("Schliffstr.");
        break;
    }
    case 281145:
    {
        returnValue = F("Schliffweg");
        break;
    }
    case 281146:
    {
        returnValue = F("Schlikkuchen");
        break;
    }
    case 281147:
    {
        returnValue = F("Schlimbachallee");
        break;
    }
    case 281148:
    {
        returnValue = F("Schlimbachstr.");
        break;
    }
    case 281149:
    {
        returnValue = F("Schlimme Grabenschneise");
        break;
    }
    case 281150:
    {
        returnValue = F("Schlimmendorfer Str.");
        break;
    }
    case 281151:
    {
        returnValue = F("Schlimmerstr.");
        break;
    }
    case 281152:
    {
        returnValue = F("Schlimmfeld");
        break;
    }
    case 281153:
    {
        returnValue = F("Schlimmfeldstr.");
        break;
    }
    case 281154:
    {
        returnValue = F("Schlimmhohl");
        break;
    }
    case 281155:
    {
        returnValue = F("Schlimmstr.");
        break;
    }
    case 281156:
    {
        returnValue = F("Schlimmsweide");
        break;
    }
    case 281157:
    {
        returnValue = F("Schlimpfhofer Str.");
        break;
    }
    case 281158:
    {
        returnValue = F("Schlingbreede");
        break;
    }
    case 281159:
    {
        returnValue = F("Schlinge");
        break;
    }
    case 281160:
    {
        returnValue = F("Schlingenbach");
        break;
    }
    case 281161:
    {
        returnValue = F("Schlingenbusch");
        break;
    }
    case 281162:
    {
        returnValue = F("Schlingener Str.");
        break;
    }
    case 281163:
    {
        returnValue = F("Schlingenhof");
        break;
    }
    case 281164:
    {
        returnValue = F("Schlingenkamp");
        break;
    }
    case 281165:
    {
        returnValue = F("Schlingenstr.");
        break;
    }
    case 281166:
    {
        returnValue = F("Schlingenthal");
        break;
    }
    case 281167:
    {
        returnValue = F("Schlingenweg");
        break;
    }
    case 281168:
    {
        returnValue = F("Schlinger Str.");
        break;
    }
    case 281169:
    {
        returnValue = F("Schlingermanns Hof");
        break;
    }
    case 281170:
    {
        returnValue = F("Schlingewiesch");
        break;
    }
    case 281171:
    {
        returnValue = F("Schlingfeld");
        break;
    }
    case 281172:
    {
        returnValue = F("Schlinggraben");
        break;
    }
    case 281173:
    {
        returnValue = F("Schlingheide");
        break;
    }
    case 281174:
    {
        returnValue = F("Schlinghook");
        break;
    }
    case 281175:
    {
        returnValue = F("Schlingkamp");
        break;
    }
    case 281176:
    {
        returnValue = F("Schlingmannsweg");
        break;
    }
    case 281177:
    {
        returnValue = F("Schlingmannweg");
        break;
    }
    case 281178:
    {
        returnValue = F("Schlingmühle");
        break;
    }
    case 281179:
    {
        returnValue = F("Schlingstiege");
        break;
    }
    case 281180:
    {
        returnValue = F("Schlingstr.");
        break;
    }
    case 281181:
    {
        returnValue = F("Schlingweg");
        break;
    }
    case 281182:
    {
        returnValue = F("Schlinkengasse");
        break;
    }
    case 281183:
    {
        returnValue = F("Schlinkenweg");
        break;
    }
    case 281184:
    {
        returnValue = F("Schlinkergarten");
        break;
    }
    case 281185:
    {
        returnValue = F("Schlinkert");
        break;
    }
    case 281186:
    {
        returnValue = F("Schlinkertstr.");
        break;
    }
    case 281187:
    {
        returnValue = F("Schlinkstr.");
        break;
    }
    case 281188:
    {
        returnValue = F("Schlinkweg");
        break;
    }
    case 281189:
    {
        returnValue = F("Schlinsweg");
        break;
    }
    case 281190:
    {
        returnValue = F("Schlinzgerstr.");
        break;
    }
    case 281191:
    {
        returnValue = F("Schlipfenweg");
        break;
    }
    case 281192:
    {
        returnValue = F("Schlipferweg");
        break;
    }
    case 281193:
    {
        returnValue = F("Schlipfhalde");
        break;
    }
    case 281194:
    {
        returnValue = F("Schlipfhausen");
        break;
    }
    case 281195:
    {
        returnValue = F("Schlipfweg");
        break;
    }
    case 281196:
    {
        returnValue = F("Schlipp");
        break;
    }
    case 281197:
    {
        returnValue = F("Schlippe");
        break;
    }
    case 281198:
    {
        returnValue = F("Schlippehof");
        break;
    }
    case 281199:
    {
        returnValue = F("Schlippen");
        break;
    }
    case 281200:
    {
        returnValue = F("Schlippenstr.");
        break;
    }
    case 281201:
    {
        returnValue = F("Schlippental");
        break;
    }
    case 281202:
    {
        returnValue = F("Schlippenweg");
        break;
    }
    case 281203:
    {
        returnValue = F("Schlippergasse");
        break;
    }
    case 281204:
    {
        returnValue = F("Schlipperhaus");
        break;
    }
    case 281205:
    {
        returnValue = F("Schlippertstr.");
        break;
    }
    case 281206:
    {
        returnValue = F("Schlippesstr.");
        break;
    }
    case 281207:
    {
        returnValue = F("Schlipphakstr.");
        break;
    }
    case 281208:
    {
        returnValue = F("Schlippkamp");
        break;
    }
    case 281209:
    {
        returnValue = F("Schlipps");
        break;
    }
    case 281210:
    {
        returnValue = F("Schliprüther Mühle");
        break;
    }
    case 281211:
    {
        returnValue = F("Schlitchenstr.");
        break;
    }
    case 281212:
    {
        returnValue = F("Schlittberg");
        break;
    }
    case 281213:
    {
        returnValue = F("Schlittenbacher Str.");
        break;
    }
    case 281214:
    {
        returnValue = F("Schlittenbachweg");
        break;
    }
    case 281215:
    {
        returnValue = F("Schlittenbahn");
        break;
    }
    case 281216:
    {
        returnValue = F("Schlittenberg");
        break;
    }
    case 281217:
    {
        returnValue = F("Schlittengasse");
        break;
    }
    case 281218:
    {
        returnValue = F("Schlittenweg");
        break;
    }
    case 281219:
    {
        returnValue = F("Schlittenwiese");
        break;
    }
    case 281220:
    {
        returnValue = F("Schlittersweg");
        break;
    }
    case 281221:
    {
        returnValue = F("Schlitterweg");
        break;
    }
    case 281222:
    {
        returnValue = F("Schlittschuhbrueckchen");
        break;
    }
    case 281223:
    {
        returnValue = F("Schlittschuhweg");
        break;
    }
    case 281224:
    {
        returnValue = F("Schlittstr.");
        break;
    }
    case 281225:
    {
        returnValue = F("Schlittweg");
        break;
    }
    case 281226:
    {
        returnValue = F("Schlitzbachstr.");
        break;
    }
    case 281227:
    {
        returnValue = F("Schlitzer Str.");
        break;
    }
    case 281228:
    {
        returnValue = F("Schlitzer Weg");
        break;
    }
    case 281229:
    {
        returnValue = F("Schlitzergasse");
        break;
    }
    case 281230:
    {
        returnValue = F("Schlitzerhof");
        break;
    }
    case 281231:
    {
        returnValue = F("Schlitzgasse");
        break;
    }
    case 281232:
    {
        returnValue = F("Schlitzgernweg");
        break;
    }
    case 281233:
    {
        returnValue = F("Schlitzstr.");
        break;
    }
    case 281234:
    {
        returnValue = F("Schlitzweg");
        break;
    }
    case 281235:
    {
        returnValue = F("Schlizstr.");
        break;
    }
    case 281236:
    {
        returnValue = F("Schlobbenriede");
        break;
    }
    case 281237:
    {
        returnValue = F("Schlobigpark");
        break;
    }
    case 281238:
    {
        returnValue = F("Schlobigplatz");
        break;
    }
    case 281239:
    {
        returnValue = F("Schlobruchweg");
        break;
    }
    case 281240:
    {
        returnValue = F("Schlochauer Str.");
        break;
    }
    case 281241:
    {
        returnValue = F("Schlochauer Weg");
        break;
    }
    case 281242:
    {
        returnValue = F("Schlocht");
        break;
    }
    case 281243:
    {
        returnValue = F("Schlockhorststr.");
        break;
    }
    case 281244:
    {
        returnValue = F("Schlodderdicher Weg");
        break;
    }
    case 281245:
    {
        returnValue = F("Schloditzer Str.");
        break;
    }
    case 281246:
    {
        returnValue = F("Schloditzer Weg");
        break;
    }
    case 281247:
    {
        returnValue = F("Schloen");
        break;
    }
    case 281248:
    {
        returnValue = F("Schloenbachstr.");
        break;
    }
    case 281249:
    {
        returnValue = F("Schlogasse");
        break;
    }
    case 281250:
    {
        returnValue = F("Schlohbohms Hoff");
        break;
    }
    case 281251:
    {
        returnValue = F("Schloitweg");
        break;
    }
    case 281252:
    {
        returnValue = F("Schlonsberge");
        break;
    }
    case 281253:
    {
        returnValue = F("Schlonsberger Weg");
        break;
    }
    case 281254:
    {
        returnValue = F("Schloon");
        break;
    }
    case 281255:
    {
        returnValue = F("Schloons Eck");
        break;
    }
    case 281256:
    {
        returnValue = F("Schlootackerweg");
        break;
    }
    case 281257:
    {
        returnValue = F("Schlootdamm");
        break;
    }
    case 281258:
    {
        returnValue = F("Schlootsweg");
        break;
    }
    case 281259:
    {
        returnValue = F("Schlootweg");
        break;
    }
    case 281260:
    {
        returnValue = F("Schlopweg");
        break;
    }
    case 281261:
    {
        returnValue = F("Schlornsweg");
        break;
    }
    case 281262:
    {
        returnValue = F("Schloss");
        break;
    }
    case 281263:
    {
        returnValue = F("Schloss Altenschönbach");
        break;
    }
    case 281264:
    {
        returnValue = F("Schloss Altshausen");
        break;
    }
    case 281265:
    {
        returnValue = F("Schloss Beck");
        break;
    }
    case 281266:
    {
        returnValue = F("Schloss Bollschweil");
        break;
    }
    case 281267:
    {
        returnValue = F("Schloss Bronnen");
        break;
    }
    case 281268:
    {
        returnValue = F("Schloss Carlsdorf, Pferdegestüt");
        break;
    }
    case 281269:
    {
        returnValue = F("Schloss Dehrn");
        break;
    }
    case 281270:
    {
        returnValue = F("Schloss Eickhof");
        break;
    }
    case 281271:
    {
        returnValue = F("Schloss Garvensburg");
        break;
    }
    case 281272:
    {
        returnValue = F("Schloss Gelchsheim");
        break;
    }
    case 281273:
    {
        returnValue = F("Schloss Gelsdorf");
        break;
    }
    case 281274:
    {
        returnValue = F("Schloss Gödens");
        break;
    }
    case 281275:
    {
        returnValue = F("Schloss Hardenberg");
        break;
    }
    case 281276:
    {
        returnValue = F("Schloss Hellenstein");
        break;
    }
    case 281277:
    {
        returnValue = F("Schloss Herten");
        break;
    }
    case 281278:
    {
        returnValue = F("Schloss Horneck");
        break;
    }
    case 281279:
    {
        returnValue = F("Schloss Kirchschönbach");
        break;
    }
    case 281280:
    {
        returnValue = F("Schloss Königsbach");
        break;
    }
    case 281281:
    {
        returnValue = F("Schloss Moritzburg");
        break;
    }
    case 281282:
    {
        returnValue = F("Schloss Neuweilnau");
        break;
    }
    case 281283:
    {
        returnValue = F("Schloss Park");
        break;
    }
    case 281284:
    {
        returnValue = F("Schloss Rammersdorf");
        break;
    }
    case 281285:
    {
        returnValue = F("Schloss Reichstädt");
        break;
    }
    case 281286:
    {
        returnValue = F("Schloss Salem");
        break;
    }
    case 281287:
    {
        returnValue = F("Schloss Sanssouci");
        break;
    }
    case 281288:
    {
        returnValue = F("Schloss Schwebheim");
        break;
    }
    case 281289:
    {
        returnValue = F("Schloss Str.");
        break;
    }
    case 281290:
    {
        returnValue = F("Schloss Umpfenbach");
        break;
    }
    case 281291:
    {
        returnValue = F("Schloss Wickrath");
        break;
    }
    case 281292:
    {
        returnValue = F("Schloss und Park Mosigkau");
        break;
    }
    case 281293:
    {
        returnValue = F("Schloss-Brücke");
        break;
    }
    case 281294:
    {
        returnValue = F("Schloss-Dyck-Str.");
        break;
    }
    case 281295:
    {
        returnValue = F("Schloss-Rahe-Winkel");
        break;
    }
    case 281296:
    {
        returnValue = F("Schloss-Rötteln-Weg");
        break;
    }
    case 281297:
    {
        returnValue = F("Schloss-Schönau-Str.");
        break;
    }
    case 281298:
    {
        returnValue = F("Schloss-Steige");
        break;
    }
    case 281299:
    {
        returnValue = F("Schloss-Str.");
        break;
    }
    case 281300:
    {
        returnValue = F("Schloss-Wolfsbrunnenweg");
        break;
    }
    case 281301:
    {
        returnValue = F("Schlossacker");
        break;
    }
    case 281302:
    {
        returnValue = F("Schlossackerweg");
        break;
    }
    case 281303:
    {
        returnValue = F("Schlossallee");
        break;
    }
    case 281304:
    {
        returnValue = F("Schlossalm");
        break;
    }
    case 281305:
    {
        returnValue = F("Schlossanger");
        break;
    }
    case 281306:
    {
        returnValue = F("Schlossanlage Obertheres");
        break;
    }
    case 281307:
    {
        returnValue = F("Schlossareckplatz");
        break;
    }
    case 281308:
    {
        returnValue = F("Schlossaufstieg");
        break;
    }
    case 281309:
    {
        returnValue = F("Schlossbachstr.");
        break;
    }
    case 281310:
    {
        returnValue = F("Schlossbastei-Promenade");
        break;
    }
    case 281311:
    {
        returnValue = F("Schlossberg");
        break;
    }
    case 281312:
    {
        returnValue = F("Schlossberg DH");
        break;
    }
    case 281313:
    {
        returnValue = F("Schlossberg Downhill Trail");
        break;
    }
    case 281314:
    {
        returnValue = F("Schlossberg Rundweg");
        break;
    }
    case 281315:
    {
        returnValue = F("Schlossberg Süd");
        break;
    }
    case 281316:
    {
        returnValue = F("Schlossbergblick");
        break;
    }
    case 281317:
    {
        returnValue = F("Schlossbergbrücke");
        break;
    }
    case 281318:
    {
        returnValue = F("Schlossberglein");
        break;
    }
    case 281319:
    {
        returnValue = F("Schlossbergpark");
        break;
    }
    case 281320:
    {
        returnValue = F("Schlossbergring");
        break;
    }
    case 281321:
    {
        returnValue = F("Schlossbergsteg");
        break;
    }
    case 281322:
    {
        returnValue = F("Schlossbergstr.");
        break;
    }
    case 281323:
    {
        returnValue = F("Schlossbergtunnel");
        break;
    }
    case 281324:
    {
        returnValue = F("Schlossbergweg");
        break;
    }
    case 281325:
    {
        returnValue = F("Schlossblick");
        break;
    }
    case 281326:
    {
        returnValue = F("Schlossbreitengasse");
        break;
    }
    case 281327:
    {
        returnValue = F("Schlossbrücke");
        break;
    }
    case 281328:
    {
        returnValue = F("Schlossbuck");
        break;
    }
    case 281329:
    {
        returnValue = F("Schlossbuckel");
        break;
    }
    case 281330:
    {
        returnValue = F("Schlossbücke");
        break;
    }
    case 281331:
    {
        returnValue = F("Schlossbühlweg");
        break;
    }
    case 281332:
    {
        returnValue = F("Schlossbündten");
        break;
    }
    case 281333:
    {
        returnValue = F("Schlosschaussee");
        break;
    }
    case 281334:
    {
        returnValue = F("Schlossengriesstr.");
        break;
    }
    case 281335:
    {
        returnValue = F("Schlosseracker");
        break;
    }
    case 281336:
    {
        returnValue = F("Schlosserbachweg");
        break;
    }
    case 281337:
    {
        returnValue = F("Schlosserberg");
        break;
    }
    case 281338:
    {
        returnValue = F("Schlosserbuck");
        break;
    }
    case 281339:
    {
        returnValue = F("Schlossereiweg");
        break;
    }
    case 281340:
    {
        returnValue = F("Schlossergass");
        break;
    }
    case 281341:
    {
        returnValue = F("Schlossergasse");
        break;
    }
    case 281342:
    {
        returnValue = F("Schlossergäßchen");
        break;
    }
    case 281343:
    {
        returnValue = F("Schlosserhalde");
        break;
    }
    case 281344:
    {
        returnValue = F("Schlosserhübelweg");
        break;
    }
    case 281345:
    {
        returnValue = F("Schlosserplatz");
        break;
    }
    case 281346:
    {
        returnValue = F("Schlossers Winkel");
        break;
    }
    case 281347:
    {
        returnValue = F("Schlosserstiege");
        break;
    }
    case 281348:
    {
        returnValue = F("Schlosserstr.");
        break;
    }
    case 281349:
    {
        returnValue = F("Schlosserweg");
        break;
    }
    case 281350:
    {
        returnValue = F("Schlossestr.");
        break;
    }
    case 281351:
    {
        returnValue = F("Schlossfeld");
        break;
    }
    case 281352:
    {
        returnValue = F("Schlossfeldstr.");
        break;
    }
    case 281353:
    {
        returnValue = F("Schlossforum");
        break;
    }
    case 281354:
    {
        returnValue = F("Schlossgang");
        break;
    }
    case 281355:
    {
        returnValue = F("Schlossgarten");
        break;
    }
    case 281356:
    {
        returnValue = F("Schlossgarten Durlach");
        break;
    }
    case 281357:
    {
        returnValue = F("Schlossgarten Hovestadt");
        break;
    }
    case 281358:
    {
        returnValue = F("Schlossgarten Langenburg");
        break;
    }
    case 281359:
    {
        returnValue = F("Schlossgarten Park");
        break;
    }
    case 281360:
    {
        returnValue = F("Schlossgarten Pretzfeld");
        break;
    }
    case 281361:
    {
        returnValue = F("Schlossgartenstr.");
        break;
    }
    case 281362:
    {
        returnValue = F("Schlossgartenweg");
        break;
    }
    case 281363:
    {
        returnValue = F("Schlossgass");
        break;
    }
    case 281364:
    {
        returnValue = F("Schlossgasse");
        break;
    }
    case 281365:
    {
        returnValue = F("Schlossgassl");
        break;
    }
    case 281366:
    {
        returnValue = F("Schlossgraben");
        break;
    }
    case 281367:
    {
        returnValue = F("Schlossgrundweg");
        break;
    }
    case 281368:
    {
        returnValue = F("Schlossgut Altlandsberg");
        break;
    }
    case 281369:
    {
        returnValue = F("Schlossgärten");
        break;
    }
    case 281370:
    {
        returnValue = F("Schlossgärtenstr.");
        break;
    }
    case 281371:
    {
        returnValue = F("Schlossgässchen");
        break;
    }
    case 281372:
    {
        returnValue = F("Schlossgässel");
        break;
    }
    case 281373:
    {
        returnValue = F("Schlossgässle");
        break;
    }
    case 281374:
    {
        returnValue = F("Schlosshalde");
        break;
    }
    case 281375:
    {
        returnValue = F("Schlosshaldenstr.");
        break;
    }
    case 281376:
    {
        returnValue = F("Schlosshaldenweg");
        break;
    }
    case 281377:
    {
        returnValue = F("Schlosshof");
        break;
    }
    case 281378:
    {
        returnValue = F("Schlosshof Birken");
        break;
    }
    case 281379:
    {
        returnValue = F("Schlosshohlstr.");
        break;
    }
    case 281380:
    {
        returnValue = F("Schlosshöhe");
        break;
    }
    case 281381:
    {
        returnValue = F("Schlosshügel");
        break;
    }
    case 281382:
    {
        returnValue = F("Schlossinsel");
        break;
    }
    case 281383:
    {
        returnValue = F("Schlosskapellenweg");
        break;
    }
    case 281384:
    {
        returnValue = F("Schlosskirschenweg");
        break;
    }
    case 281385:
    {
        returnValue = F("Schlosskoppelweg");
        break;
    }
    case 281386:
    {
        returnValue = F("Schlossköpfelweg");
        break;
    }
    case 281387:
    {
        returnValue = F("Schlossleiten");
        break;
    }
    case 281388:
    {
        returnValue = F("Schlosslohne");
        break;
    }
    case 281389:
    {
        returnValue = F("Schlossmattweg");
        break;
    }
    case 281390:
    {
        returnValue = F("Schlossmauer");
        break;
    }
    case 281391:
    {
        returnValue = F("Schlossmühle");
        break;
    }
    case 281392:
    {
        returnValue = F("Schlossmühlenweg");
        break;
    }
    case 281393:
    {
        returnValue = F("Schlossmühlgasse");
        break;
    }
    case 281394:
    {
        returnValue = F("Schlosspark");
        break;
    }
    case 281395:
    {
        returnValue = F("Schlosspark Alt Rehse");
        break;
    }
    case 281396:
    {
        returnValue = F("Schlosspark Ammelshain");
        break;
    }
    case 281397:
    {
        returnValue = F("Schlosspark Assumstadt");
        break;
    }
    case 281398:
    {
        returnValue = F("Schlosspark Augustusburg");
        break;
    }
    case 281399:
    {
        returnValue = F("Schlosspark Baruth");
        break;
    }
    case 281400:
    {
        returnValue = F("Schlosspark Belvedere");
        break;
    }
    case 281401:
    {
        returnValue = F("Schlosspark Bergheim");
        break;
    }
    case 281402:
    {
        returnValue = F("Schlosspark Bornsdorf");
        break;
    }
    case 281403:
    {
        returnValue = F("Schlosspark Breill");
        break;
    }
    case 281404:
    {
        returnValue = F("Schlosspark Börnichen");
        break;
    }
    case 281405:
    {
        returnValue = F("Schlosspark Caputh");
        break;
    }
    case 281406:
    {
        returnValue = F("Schlosspark Dahlwitz");
        break;
    }
    case 281407:
    {
        returnValue = F("Schlosspark Derneburg");
        break;
    }
    case 281408:
    {
        returnValue = F("Schlosspark Dieskau");
        break;
    }
    case 281409:
    {
        returnValue = F("Schlosspark Dreilützow");
        break;
    }
    case 281410:
    {
        returnValue = F("Schlosspark Ebeleben");
        break;
    }
    case 281411:
    {
        returnValue = F("Schlosspark Escheberg");
        break;
    }
    case 281412:
    {
        returnValue = F("Schlosspark Etelsen");
        break;
    }
    case 281413:
    {
        returnValue = F("Schlosspark Fantaisie");
        break;
    }
    case 281414:
    {
        returnValue = F("Schlosspark Faulenrost");
        break;
    }
    case 281415:
    {
        returnValue = F("Schlosspark Favorite");
        break;
    }
    case 281416:
    {
        returnValue = F("Schlosspark Friedrichsburg");
        break;
    }
    case 281417:
    {
        returnValue = F("Schlosspark Gaibach");
        break;
    }
    case 281418:
    {
        returnValue = F("Schlosspark Gaibach - Überrest des Landschaftsparkes nach Carl v. Linné");
        break;
    }
    case 281419:
    {
        returnValue = F("Schlosspark Genshagen");
        break;
    }
    case 281420:
    {
        returnValue = F("Schlosspark Goldschmieding");
        break;
    }
    case 281421:
    {
        returnValue = F("Schlosspark Hohenprießnitz");
        break;
    }
    case 281422:
    {
        returnValue = F("Schlosspark Hohenzieritz");
        break;
    }
    case 281423:
    {
        returnValue = F("Schlosspark Hummelshain");
        break;
    }
    case 281424:
    {
        returnValue = F("Schlosspark Ihlow");
        break;
    }
    case 281425:
    {
        returnValue = F("Schlosspark Irlbach");
        break;
    }
    case 281426:
    {
        returnValue = F("Schlosspark Jagdschloss Seidingstadt");
        break;
    }
    case 281427:
    {
        returnValue = F("Schlosspark Janow");
        break;
    }
    case 281428:
    {
        returnValue = F("Schlosspark Jetzendorf");
        break;
    }
    case 281429:
    {
        returnValue = F("Schlosspark Karlstein");
        break;
    }
    case 281430:
    {
        returnValue = F("Schlosspark Ketschendorf");
        break;
    }
    case 281431:
    {
        returnValue = F("Schlosspark Kissenbrück");
        break;
    }
    case 281432:
    {
        returnValue = F("Schlosspark Kleinwerther");
        break;
    }
    case 281433:
    {
        returnValue = F("Schlosspark Klipphausen");
        break;
    }
    case 281434:
    {
        returnValue = F("Schlosspark Klosterhäseler");
        break;
    }
    case 281435:
    {
        returnValue = F("Schlosspark Landau");
        break;
    }
    case 281436:
    {
        returnValue = F("Schlosspark Lembeck");
        break;
    }
    case 281437:
    {
        returnValue = F("Schlosspark Lerbach");
        break;
    }
    case 281438:
    {
        returnValue = F("Schlosspark Linderhof");
        break;
    }
    case 281439:
    {
        returnValue = F("Schlosspark Ludwigslust");
        break;
    }
    case 281440:
    {
        returnValue = F("Schlosspark Marquardt");
        break;
    }
    case 281441:
    {
        returnValue = F("Schlosspark Mühlbach (privat)");
        break;
    }
    case 281442:
    {
        returnValue = F("Schlosspark Naunhof");
        break;
    }
    case 281443:
    {
        returnValue = F("Schlosspark Neckarhausen");
        break;
    }
    case 281444:
    {
        returnValue = F("Schlosspark Neersen");
        break;
    }
    case 281445:
    {
        returnValue = F("Schlosspark Nischwitz");
        break;
    }
    case 281446:
    {
        returnValue = F("Schlosspark Nörten-Hardenberg");
        break;
    }
    case 281447:
    {
        returnValue = F("Schlosspark Paffendorf");
        break;
    }
    case 281448:
    {
        returnValue = F("Schlosspark Pansevitz");
        break;
    }
    case 281449:
    {
        returnValue = F("Schlosspark Paretz");
        break;
    }
    case 281450:
    {
        returnValue = F("Schlosspark Pfedelbach");
        break;
    }
    case 281451:
    {
        returnValue = F("Schlosspark Philippsruhe");
        break;
    }
    case 281452:
    {
        returnValue = F("Schlosspark Plaue");
        break;
    }
    case 281453:
    {
        returnValue = F("Schlosspark Reddern");
        break;
    }
    case 281454:
    {
        returnValue = F("Schlosspark Riede");
        break;
    }
    case 281455:
    {
        returnValue = F("Schlosspark Schkopau");
        break;
    }
    case 281456:
    {
        returnValue = F("Schlosspark Schloss Schlachtegg");
        break;
    }
    case 281457:
    {
        returnValue = F("Schlosspark Schötmar");
        break;
    }
    case 281458:
    {
        returnValue = F("Schlosspark Seeheim");
        break;
    }
    case 281459:
    {
        returnValue = F("Schlosspark Seehof");
        break;
    }
    case 281460:
    {
        returnValue = F("Schlosspark Seerhausen");
        break;
    }
    case 281461:
    {
        returnValue = F("Schlosspark Seifersdorf");
        break;
    }
    case 281462:
    {
        returnValue = F("Schlosspark Sonnenstein");
        break;
    }
    case 281463:
    {
        returnValue = F("Schlosspark St. Emmeram");
        break;
    }
    case 281464:
    {
        returnValue = F("Schlosspark Strünkede");
        break;
    }
    case 281465:
    {
        returnValue = F("Schlosspark Styrum");
        break;
    }
    case 281466:
    {
        returnValue = F("Schlosspark Thüngen");
        break;
    }
    case 281467:
    {
        returnValue = F("Schlosspark Tiefurt");
        break;
    }
    case 281468:
    {
        returnValue = F("Schlosspark Trebsen");
        break;
    }
    case 281469:
    {
        returnValue = F("Schlosspark Tutzing");
        break;
    }
    case 281470:
    {
        returnValue = F("Schlosspark Ulenburg");
        break;
    }
    case 281471:
    {
        returnValue = F("Schlosspark Vietgest");
        break;
    }
    case 281472:
    {
        returnValue = F("Schlosspark Walda");
        break;
    }
    case 281473:
    {
        returnValue = F("Schlosspark Wansdorf");
        break;
    }
    case 281474:
    {
        returnValue = F("Schlosspark Wechselburg");
        break;
    }
    case 281475:
    {
        returnValue = F("Schlosspark Weesenstein");
        break;
    }
    case 281476:
    {
        returnValue = F("Schlosspark Werneck");
        break;
    }
    case 281477:
    {
        returnValue = F("Schlosspark Wichmannsdorf");
        break;
    }
    case 281478:
    {
        returnValue = F("Schlosspark Wildenfels");
        break;
    }
    case 281479:
    {
        returnValue = F("Schlosspark Wilhelmsthal");
        break;
    }
    case 281480:
    {
        returnValue = F("Schlosspark Zinzow");
        break;
    }
    case 281481:
    {
        returnValue = F("Schlosspark, Freizeitpark");
        break;
    }
    case 281482:
    {
        returnValue = F("Schlosspark, Isar-Amper-Klinikum");
        break;
    }
    case 281483:
    {
        returnValue = F("Schlosspark/Museum unter Tage");
        break;
    }
    case 281484:
    {
        returnValue = F("Schlosspark: Hohenbrünzow");
        break;
    }
    case 281485:
    {
        returnValue = F("Schlossparksteg Nord");
        break;
    }
    case 281486:
    {
        returnValue = F("Schlossparkstr.");
        break;
    }
    case 281487:
    {
        returnValue = F("Schlossparkweg");
        break;
    }
    case 281488:
    {
        returnValue = F("Schlosspassage");
        break;
    }
    case 281489:
    {
        returnValue = F("Schlosspfad");
        break;
    }
    case 281490:
    {
        returnValue = F("Schlossplatz");
        break;
    }
    case 281491:
    {
        returnValue = F("Schlossplatz Hadamar");
        break;
    }
    case 281492:
    {
        returnValue = F("Schlossreil");
        break;
    }
    case 281493:
    {
        returnValue = F("Schlossseeallee");
        break;
    }
    case 281494:
    {
        returnValue = F("Schlosssteig");
        break;
    }
    case 281495:
    {
        returnValue = F("Schlosssteige");
        break;
    }
    case 281496:
    {
        returnValue = F("Schlossstr.");
        break;
    }
    case 281497:
    {
        returnValue = F("Schlossstufen");
        break;
    }
    case 281498:
    {
        returnValue = F("Schlosstal");
        break;
    }
    case 281499:
    {
        returnValue = F("Schlossteichbrücke");
        break;
    }
    case 281500:
    {
        returnValue = F("Schlossteichrunde");
        break;
    }
    case 281501:
    {
        returnValue = F("Schlossterrasse");
        break;
    }
    case 281502:
    {
        returnValue = F("Schlossterrassen");
        break;
    }
    case 281503:
    {
        returnValue = F("Schlosstr.");
        break;
    }
    case 281504:
    {
        returnValue = F("Schlossvereinsweg");
        break;
    }
    case 281505:
    {
        returnValue = F("Schlossvorplatz");
        break;
    }
    case 281506:
    {
        returnValue = F("Schlosswald");
        break;
    }
    case 281507:
    {
        returnValue = F("Schlosswaldweg");
        break;
    }
    case 281508:
    {
        returnValue = F("Schlossweg");
        break;
    }
    case 281509:
    {
        returnValue = F("Schlossweide");
        break;
    }
    case 281510:
    {
        returnValue = F("Schlossweiher");
        break;
    }
    case 281511:
    {
        returnValue = F("Schlossweiherstr.");
        break;
    }
    case 281512:
    {
        returnValue = F("Schlosswiese");
        break;
    }
    case 281513:
    {
        returnValue = F("Schlosswiesen");
        break;
    }
    case 281514:
    {
        returnValue = F("Schlosszelchsteig");
        break;
    }
    case 281515:
    {
        returnValue = F("Schlossäcker");
        break;
    }
    case 281516:
    {
        returnValue = F("Schlossäckerring");
        break;
    }
    case 281517:
    {
        returnValue = F("Schlossäckerstr.");
        break;
    }
    case 281518:
    {
        returnValue = F("Schlot");
        break;
    }
    case 281519:
    {
        returnValue = F("Schlotenbeck");
        break;
    }
    case 281520:
    {
        returnValue = F("Schlotendoor");
        break;
    }
    case 281521:
    {
        returnValue = F("Schlotfegergasse");
        break;
    }
    case 281522:
    {
        returnValue = F("Schlotfegerweg");
        break;
    }
    case 281523:
    {
        returnValue = F("Schlotfeld");
        break;
    }
    case 281524:
    {
        returnValue = F("Schlotfeldtsberg");
        break;
    }
    case 281525:
    {
        returnValue = F("Schlotgasse");
        break;
    }
    case 281526:
    {
        returnValue = F("Schloth");
        break;
    }
    case 281527:
    {
        returnValue = F("Schlothageweg");
        break;
    }
    case 281528:
    {
        returnValue = F("Schlothauerweg");
        break;
    }
    case 281529:
    {
        returnValue = F("Schlothberg");
        break;
    }
    case 281530:
    {
        returnValue = F("Schlotheimer Ring");
        break;
    }
    case 281531:
    {
        returnValue = F("Schlotheimer Str.");
        break;
    }
    case 281532:
    {
        returnValue = F("Schlotheimer Weg");
        break;
    }
    case 281533:
    {
        returnValue = F("Schlothweg");
        break;
    }
    case 281534:
    {
        returnValue = F("Schlotkamp");
        break;
    }
    case 281535:
    {
        returnValue = F("Schlotmannstr.");
        break;
    }
    case 281536:
    {
        returnValue = F("Schlotstr.");
        break;
    }
    case 281537:
    {
        returnValue = F("Schlott");
        break;
    }
    case 281538:
    {
        returnValue = F("Schlottbergstr.");
        break;
    }
    case 281539:
    {
        returnValue = F("Schlotter Str.");
        break;
    }
    case 281540:
    {
        returnValue = F("Schlotter Weg");
        break;
    }
    case 281541:
    {
        returnValue = F("Schlotterbachgasse");
        break;
    }
    case 281542:
    {
        returnValue = F("Schlottergasse");
        break;
    }
    case 281543:
    {
        returnValue = F("Schlotterhof");
        break;
    }
    case 281544:
    {
        returnValue = F("Schlotterhofweg");
        break;
    }
    case 281545:
    {
        returnValue = F("Schlottersborn");
        break;
    }
    case 281546:
    {
        returnValue = F("Schlotterweg");
        break;
    }
    case 281547:
    {
        returnValue = F("Schlotteräxtweg");
        break;
    }
    case 281548:
    {
        returnValue = F("Schlottfelder Str.");
        break;
    }
    case 281549:
    {
        returnValue = F("Schlottfelder Winkel");
        break;
    }
    case 281550:
    {
        returnValue = F("Schlotthamer Str.");
        break;
    }
    case 281551:
    {
        returnValue = F("Schlottholzweg");
        break;
    }
    case 281552:
    {
        returnValue = F("Schlotthorst");
        break;
    }
    case 281553:
    {
        returnValue = F("Schlottkamp");
        break;
    }
    case 281554:
    {
        returnValue = F("Schlottweg");
        break;
    }
    case 281555:
    {
        returnValue = F("Schlotweg");
        break;
    }
    case 281556:
    {
        returnValue = F("Schlousweg");
        break;
    }
    case 281557:
    {
        returnValue = F("Schloß");
        break;
    }
    case 281558:
    {
        returnValue = F("Schloß Aremberg");
        break;
    }
    case 281559:
    {
        returnValue = F("Schloß Augustusburg");
        break;
    }
    case 281560:
    {
        returnValue = F("Schloß Berneck");
        break;
    }
    case 281561:
    {
        returnValue = F("Schloß Eismannsberg");
        break;
    }
    case 281562:
    {
        returnValue = F("Schloß Fasanerie");
        break;
    }
    case 281563:
    {
        returnValue = F("Schloß Gemünden");
        break;
    }
    case 281564:
    {
        returnValue = F("Schloß Gottesgabe");
        break;
    }
    case 281565:
    {
        returnValue = F("Schloß Hamborn");
        break;
    }
    case 281566:
    {
        returnValue = F("Schloß Hohenfels");
        break;
    }
    case 281567:
    {
        returnValue = F("Schloß Hollwinkel");
        break;
    }
    case 281568:
    {
        returnValue = F("Schloß Hünnefeld");
        break;
    }
    case 281569:
    {
        returnValue = F("Schloß Innenhof");
        break;
    }
    case 281570:
    {
        returnValue = F("Schloß Lindach");
        break;
    }
    case 281571:
    {
        returnValue = F("Schloß Lindich");
        break;
    }
    case 281572:
    {
        returnValue = F("Schloß Ludwigseck");
        break;
    }
    case 281573:
    {
        returnValue = F("Schloß Nörvenich");
        break;
    }
    case 281574:
    {
        returnValue = F("Schloß Ricklinger Str.");
        break;
    }
    case 281575:
    {
        returnValue = F("Schloß Ringelsdorf");
        break;
    }
    case 281576:
    {
        returnValue = F("Schloß Tiefurt");
        break;
    }
    case 281577:
    {
        returnValue = F("Schloß Tressow");
        break;
    }
    case 281578:
    {
        returnValue = F("Schloß Waldeck");
        break;
    }
    case 281579:
    {
        returnValue = F("Schloß Zehista");
        break;
    }
    case 281580:
    {
        returnValue = F("Schloß-Banz-Str.");
        break;
    }
    case 281581:
    {
        returnValue = F("Schloß-Bronnen-Str.");
        break;
    }
    case 281582:
    {
        returnValue = F("Schloß-Dyck-Str.");
        break;
    }
    case 281583:
    {
        returnValue = F("Schloß-Grimmstein-Weg");
        break;
    }
    case 281584:
    {
        returnValue = F("Schloß-Sackgasse");
        break;
    }
    case 281585:
    {
        returnValue = F("Schloß-Str.");
        break;
    }
    case 281586:
    {
        returnValue = F("Schloß-Strünkede-Str.");
        break;
    }
    case 281587:
    {
        returnValue = F("Schloß-Urach-Str.");
        break;
    }
    case 281588:
    {
        returnValue = F("Schloß-Wald-Sträßle");
        break;
    }
    case 281589:
    {
        returnValue = F("Schloß-Wissener-Str.");
        break;
    }
    case 281590:
    {
        returnValue = F("Schloßacker");
        break;
    }
    case 281591:
    {
        returnValue = F("Schloßackerstr.");
        break;
    }
    case 281592:
    {
        returnValue = F("Schloßackerweg");
        break;
    }
    case 281593:
    {
        returnValue = F("Schloßallee");
        break;
    }
    case 281594:
    {
        returnValue = F("Schloßanger");
        break;
    }
    case 281595:
    {
        returnValue = F("Schloßangerstr.");
        break;
    }
    case 281596:
    {
        returnValue = F("Schloßangerweg");
        break;
    }
    case 281597:
    {
        returnValue = F("Schloßaue");
        break;
    }
    case 281598:
    {
        returnValue = F("Schloßauel");
        break;
    }
    case 281599:
    {
        returnValue = F("Schloßauer Str.");
        break;
    }
    case 281600:
    {
        returnValue = F("Schloßaufgang II");
        break;
    }
    case 281601:
    {
        returnValue = F("Schloßaufgang IV");
        break;
    }
    case 281602:
    {
        returnValue = F("Schloßaufgang VI");
        break;
    }
    case 281603:
    {
        returnValue = F("Schloßbachstr.");
        break;
    }
    case 281604:
    {
        returnValue = F("Schloßbahn");
        break;
    }
    case 281605:
    {
        returnValue = F("Schloßbauernweg");
        break;
    }
    case 281606:
    {
        returnValue = F("Schloßbauerweg");
        break;
    }
    case 281607:
    {
        returnValue = F("Schloßberg");
        break;
    }
    case 281608:
    {
        returnValue = F("Schloßberg Park");
        break;
    }
    case 281609:
    {
        returnValue = F("Schloßbergallee");
        break;
    }
    case 281610:
    {
        returnValue = F("Schloßbergblick");
        break;
    }
    case 281611:
    {
        returnValue = F("Schloßberge");
        break;
    }
    case 281612:
    {
        returnValue = F("Schloßberger Str.");
        break;
    }
    case 281613:
    {
        returnValue = F("Schloßberger Weg");
        break;
    }
    case 281614:
    {
        returnValue = F("Schloßberggraben");
        break;
    }
    case 281615:
    {
        returnValue = F("Schloßberghof");
        break;
    }
    case 281616:
    {
        returnValue = F("Schloßbergleite");
        break;
    }
    case 281617:
    {
        returnValue = F("Schloßbergpark");
        break;
    }
    case 281618:
    {
        returnValue = F("Schloßbergring");
        break;
    }
    case 281619:
    {
        returnValue = F("Schloßbergsiedlung");
        break;
    }
    case 281620:
    {
        returnValue = F("Schloßbergsteige");
        break;
    }
    case 281621:
    {
        returnValue = F("Schloßbergstr.");
        break;
    }
    case 281622:
    {
        returnValue = F("Schloßbergweg");
        break;
    }
    case 281623:
    {
        returnValue = F("Schloßberstr.");
        break;
    }
    case 281624:
    {
        returnValue = F("Schloßbezirk");
        break;
    }
    case 281625:
    {
        returnValue = F("Schloßbitz");
        break;
    }
    case 281626:
    {
        returnValue = F("Schloßbleiche");
        break;
    }
    case 281627:
    {
        returnValue = F("Schloßblick");
        break;
    }
    case 281628:
    {
        returnValue = F("Schloßblickstr.");
        break;
    }
    case 281629:
    {
        returnValue = F("Schloßborner Str.");
        break;
    }
    case 281630:
    {
        returnValue = F("Schloßborner Weg");
        break;
    }
    case 281631:
    {
        returnValue = F("Schloßbreite");
        break;
    }
    case 281632:
    {
        returnValue = F("Schloßbreiten");
        break;
    }
    case 281633:
    {
        returnValue = F("Schloßbruck");
        break;
    }
    case 281634:
    {
        returnValue = F("Schloßbrücke");
        break;
    }
    case 281635:
    {
        returnValue = F("Schloßbuck");
        break;
    }
    case 281636:
    {
        returnValue = F("Schloßbuckelweg");
        break;
    }
    case 281637:
    {
        returnValue = F("Schloßbuckl");
        break;
    }
    case 281638:
    {
        returnValue = F("Schloßbug");
        break;
    }
    case 281639:
    {
        returnValue = F("Schloßbühl");
        break;
    }
    case 281640:
    {
        returnValue = F("Schloßbühlstr.");
        break;
    }
    case 281641:
    {
        returnValue = F("Schloßbühlweg");
        break;
    }
    case 281642:
    {
        returnValue = F("Schloßdamm");
        break;
    }
    case 281643:
    {
        returnValue = F("Schloßdomäne");
        break;
    }
    case 281644:
    {
        returnValue = F("Schloßendweg");
        break;
    }
    case 281645:
    {
        returnValue = F("Schloßergasse");
        break;
    }
    case 281646:
    {
        returnValue = F("Schloßfeld");
        break;
    }
    case 281647:
    {
        returnValue = F("Schloßfeld Obermönsheim");
        break;
    }
    case 281648:
    {
        returnValue = F("Schloßfeldsiedlung");
        break;
    }
    case 281649:
    {
        returnValue = F("Schloßfeldstr.");
        break;
    }
    case 281650:
    {
        returnValue = F("Schloßfeldweg");
        break;
    }
    case 281651:
    {
        returnValue = F("Schloßfelsenweg");
        break;
    }
    case 281652:
    {
        returnValue = F("Schloßfreiheit");
        break;
    }
    case 281653:
    {
        returnValue = F("Schloßgang");
        break;
    }
    case 281654:
    {
        returnValue = F("Schloßgarten");
        break;
    }
    case 281655:
    {
        returnValue = F("Schloßgartenallee");
        break;
    }
    case 281656:
    {
        returnValue = F("Schloßgartenplatz");
        break;
    }
    case 281657:
    {
        returnValue = F("Schloßgartenstr.");
        break;
    }
    case 281658:
    {
        returnValue = F("Schloßgartenweg");
        break;
    }
    case 281659:
    {
        returnValue = F("Schloßgasse");
        break;
    }
    case 281660:
    {
        returnValue = F("Schloßgassenpfad");
        break;
    }
    case 281661:
    {
        returnValue = F("Schloßgaßl");
        break;
    }
    case 281662:
    {
        returnValue = F("Schloßgebiet");
        break;
    }
    case 281663:
    {
        returnValue = F("Schloßgraben");
        break;
    }
    case 281664:
    {
        returnValue = F("Schloßgrabengasse");
        break;
    }
    case 281665:
    {
        returnValue = F("Schloßgrabenstr.");
        break;
    }
    case 281666:
    {
        returnValue = F("Schloßgrabenweg");
        break;
    }
    case 281667:
    {
        returnValue = F("Schloßgrube");
        break;
    }
    case 281668:
    {
        returnValue = F("Schloßgrund");
        break;
    }
    case 281669:
    {
        returnValue = F("Schloßgutsiedlung");
        break;
    }
    case 281670:
    {
        returnValue = F("Schloßgärten");
        break;
    }
    case 281671:
    {
        returnValue = F("Schloßgärtnerei");
        break;
    }
    case 281672:
    {
        returnValue = F("Schloßgässchen");
        break;
    }
    case 281673:
    {
        returnValue = F("Schloßgässel");
        break;
    }
    case 281674:
    {
        returnValue = F("Schloßgässle");
        break;
    }
    case 281675:
    {
        returnValue = F("Schloßgäßchen");
        break;
    }
    case 281676:
    {
        returnValue = F("Schloßgäßle");
        break;
    }
    case 281677:
    {
        returnValue = F("Schloßhaag");
        break;
    }
    case 281678:
    {
        returnValue = F("Schloßhalde");
        break;
    }
    case 281679:
    {
        returnValue = F("Schloßhaldenring");
        break;
    }
    case 281680:
    {
        returnValue = F("Schloßhaldenstr.");
        break;
    }
    case 281681:
    {
        returnValue = F("Schloßhaldenweg");
        break;
    }
    case 281682:
    {
        returnValue = F("Schloßhangstr.");
        break;
    }
    case 281683:
    {
        returnValue = F("Schloßhaustr.");
        break;
    }
    case 281684:
    {
        returnValue = F("Schloßhecke");
        break;
    }
    case 281685:
    {
        returnValue = F("Schloßhecker Str.");
        break;
    }
    case 281686:
    {
        returnValue = F("Schloßheide");
        break;
    }
    case 281687:
    {
        returnValue = F("Schloßhof");
        break;
    }
    case 281688:
    {
        returnValue = F("Schloßhofstr.");
        break;
    }
    case 281689:
    {
        returnValue = F("Schloßhofweg");
        break;
    }
    case 281690:
    {
        returnValue = F("Schloßhohle");
        break;
    }
    case 281691:
    {
        returnValue = F("Schloßhöhe");
        break;
    }
    case 281692:
    {
        returnValue = F("Schloßhübel");
        break;
    }
    case 281693:
    {
        returnValue = F("Schloßhübelstr.");
        break;
    }
    case 281694:
    {
        returnValue = F("Schloßhügelweg");
        break;
    }
    case 281695:
    {
        returnValue = F("Schloßinsel");
        break;
    }
    case 281696:
    {
        returnValue = F("Schloßinselstr.");
        break;
    }
    case 281697:
    {
        returnValue = F("Schloßkamp");
        break;
    }
    case 281698:
    {
        returnValue = F("Schloßkauteschneise");
        break;
    }
    case 281699:
    {
        returnValue = F("Schloßkehr");
        break;
    }
    case 281700:
    {
        returnValue = F("Schloßkellergasse");
        break;
    }
    case 281701:
    {
        returnValue = F("Schloßkellerweg");
        break;
    }
    case 281702:
    {
        returnValue = F("Schloßkirche");
        break;
    }
    case 281703:
    {
        returnValue = F("Schloßkirchenweg");
        break;
    }
    case 281704:
    {
        returnValue = F("Schloßkirchstr.");
        break;
    }
    case 281705:
    {
        returnValue = F("Schloßkopfhangweg");
        break;
    }
    case 281706:
    {
        returnValue = F("Schloßkrug am Dom");
        break;
    }
    case 281707:
    {
        returnValue = F("Schloßküchenweg");
        break;
    }
    case 281708:
    {
        returnValue = F("Schloßküppel");
        break;
    }
    case 281709:
    {
        returnValue = F("Schloßleite");
        break;
    }
    case 281710:
    {
        returnValue = F("Schloßleiten");
        break;
    }
    case 281711:
    {
        returnValue = F("Schloßleithn");
        break;
    }
    case 281712:
    {
        returnValue = F("Schloßlindenweg");
        break;
    }
    case 281713:
    {
        returnValue = F("Schloßmacherweg");
        break;
    }
    case 281714:
    {
        returnValue = F("Schloßmannsgasse");
        break;
    }
    case 281715:
    {
        returnValue = F("Schloßmark");
        break;
    }
    case 281716:
    {
        returnValue = F("Schloßmarkt");
        break;
    }
    case 281717:
    {
        returnValue = F("Schloßmatten");
        break;
    }
    case 281718:
    {
        returnValue = F("Schloßmattenstr.");
        break;
    }
    case 281719:
    {
        returnValue = F("Schloßmauergasse");
        break;
    }
    case 281720:
    {
        returnValue = F("Schloßmauerstr.");
        break;
    }
    case 281721:
    {
        returnValue = F("Schloßmühle");
        break;
    }
    case 281722:
    {
        returnValue = F("Schloßmühlenstr.");
        break;
    }
    case 281723:
    {
        returnValue = F("Schloßmühlenweg");
        break;
    }
    case 281724:
    {
        returnValue = F("Schloßmühlstr.");
        break;
    }
    case 281725:
    {
        returnValue = F("Schloßmühlweg");
        break;
    }
    case 281726:
    {
        returnValue = F("Schloßpaint");
        break;
    }
    case 281727:
    {
        returnValue = F("Schloßpark");
        break;
    }
    case 281728:
    {
        returnValue = F("Schloßpark Amerdingen");
        break;
    }
    case 281729:
    {
        returnValue = F("Schloßpark Benndorf");
        break;
    }
    case 281730:
    {
        returnValue = F("Schloßpark Buldern");
        break;
    }
    case 281731:
    {
        returnValue = F("Schloßpark Dahlen");
        break;
    }
    case 281732:
    {
        returnValue = F("Schloßpark Garatshausen");
        break;
    }
    case 281733:
    {
        returnValue = F("Schloßpark Golm");
        break;
    }
    case 281734:
    {
        returnValue = F("Schloßpark Jahnishausen");
        break;
    }
    case 281735:
    {
        returnValue = F("Schloßpark Kartzow");
        break;
    }
    case 281736:
    {
        returnValue = F("Schloßpark Kürenz");
        break;
    }
    case 281737:
    {
        returnValue = F("Schloßpark Langenstein");
        break;
    }
    case 281738:
    {
        returnValue = F("Schloßpark Laubach");
        break;
    }
    case 281739:
    {
        returnValue = F("Schloßpark Leubnitz");
        break;
    }
    case 281740:
    {
        returnValue = F("Schloßpark Lieser");
        break;
    }
    case 281741:
    {
        returnValue = F("Schloßpark Merten");
        break;
    }
    case 281742:
    {
        returnValue = F("Schloßpark Naundorf");
        break;
    }
    case 281743:
    {
        returnValue = F("Schloßpark Neuenhof");
        break;
    }
    case 281744:
    {
        returnValue = F("Schloßpark Oldershausen");
        break;
    }
    case 281745:
    {
        returnValue = F("Schloßpark Passage");
        break;
    }
    case 281746:
    {
        returnValue = F("Schloßpark Prossen");
        break;
    }
    case 281747:
    {
        returnValue = F("Schloßpark Quitzin");
        break;
    }
    case 281748:
    {
        returnValue = F("Schloßpark Ramholz");
        break;
    }
    case 281749:
    {
        returnValue = F("Schloßpark Ringenberg");
        break;
    }
    case 281750:
    {
        returnValue = F("Schloßpark Rosenau");
        break;
    }
    case 281751:
    {
        returnValue = F("Schloßpark Thierbach");
        break;
    }
    case 281752:
    {
        returnValue = F("Schloßpark Weitmar");
        break;
    }
    case 281753:
    {
        returnValue = F("Schloßpark Wilhelmsthal");
        break;
    }
    case 281754:
    {
        returnValue = F("Schloßpark Wolkenburg");
        break;
    }
    case 281755:
    {
        returnValue = F("Schloßparkpassage");
        break;
    }
    case 281756:
    {
        returnValue = F("Schloßparkstr.");
        break;
    }
    case 281757:
    {
        returnValue = F("Schloßparkweg");
        break;
    }
    case 281758:
    {
        returnValue = F("Schloßpassage");
        break;
    }
    case 281759:
    {
        returnValue = F("Schloßpfad");
        break;
    }
    case 281760:
    {
        returnValue = F("Schloßpforte");
        break;
    }
    case 281761:
    {
        returnValue = F("Schloßplan");
        break;
    }
    case 281762:
    {
        returnValue = F("Schloßplatz");
        break;
    }
    case 281763:
    {
        returnValue = F("Schloßpoint");
        break;
    }
    case 281764:
    {
        returnValue = F("Schloßpromenade");
        break;
    }
    case 281765:
    {
        returnValue = F("Schloßprunner Weg");
        break;
    }
    case 281766:
    {
        returnValue = F("Schloßquellenweg");
        break;
    }
    case 281767:
    {
        returnValue = F("Schloßquergasse");
        break;
    }
    case 281768:
    {
        returnValue = F("Schloßquerstr.");
        break;
    }
    case 281769:
    {
        returnValue = F("Schloßrain");
        break;
    }
    case 281770:
    {
        returnValue = F("Schloßrainstr.");
        break;
    }
    case 281771:
    {
        returnValue = F("Schloßraum");
        break;
    }
    case 281772:
    {
        returnValue = F("Schloßreute");
        break;
    }
    case 281773:
    {
        returnValue = F("Schloßring");
        break;
    }
    case 281774:
    {
        returnValue = F("Schloßschachen");
        break;
    }
    case 281775:
    {
        returnValue = F("Schloßschachenweg");
        break;
    }
    case 281776:
    {
        returnValue = F("Schloßschmiedelfeld");
        break;
    }
    case 281777:
    {
        returnValue = F("Schloßschänkenweg");
        break;
    }
    case 281778:
    {
        returnValue = F("Schloßseeallee");
        break;
    }
    case 281779:
    {
        returnValue = F("Schloßseestr.");
        break;
    }
    case 281780:
    {
        returnValue = F("Schloßstaffel");
        break;
    }
    case 281781:
    {
        returnValue = F("Schloßsteig");
        break;
    }
    case 281782:
    {
        returnValue = F("Schloßsteige");
        break;
    }
    case 281783:
    {
        returnValue = F("Schloßstr.");
        break;
    }
    case 281784:
    {
        returnValue = F("Schloßstr. (20 + 20a)");
        break;
    }
    case 281785:
    {
        returnValue = F("Schloßstufen");
        break;
    }
    case 281786:
    {
        returnValue = F("Schloßtal");
        break;
    }
    case 281787:
    {
        returnValue = F("Schloßteichinsel");
        break;
    }
    case 281788:
    {
        returnValue = F("Schloßteichpark");
        break;
    }
    case 281789:
    {
        returnValue = F("Schloßteichstr.");
        break;
    }
    case 281790:
    {
        returnValue = F("Schloßtor");
        break;
    }
    case 281791:
    {
        returnValue = F("Schloßtorstr.");
        break;
    }
    case 281792:
    {
        returnValue = F("Schloßtreppe");
        break;
    }
    case 281793:
    {
        returnValue = F("Schloßtreppen");
        break;
    }
    case 281794:
    {
        returnValue = F("Schloßtunnel");
        break;
    }
    case 281795:
    {
        returnValue = F("Schloßtwete");
        break;
    }
    case 281796:
    {
        returnValue = F("Schloßvippacher Platz");
        break;
    }
    case 281797:
    {
        returnValue = F("Schloßvippacher Str.");
        break;
    }
    case 281798:
    {
        returnValue = F("Schloßvorstadt");
        break;
    }
    case 281799:
    {
        returnValue = F("Schloßwaldstr.");
        break;
    }
    case 281800:
    {
        returnValue = F("Schloßwaldsträßle");
        break;
    }
    case 281801:
    {
        returnValue = F("Schloßwaldweg");
        break;
    }
    case 281802:
    {
        returnValue = F("Schloßwall");
        break;
    }
    case 281803:
    {
        returnValue = F("Schloßweg");
        break;
    }
    case 281804:
    {
        returnValue = F("Schloßweide");
        break;
    }
    case 281805:
    {
        returnValue = F("Schloßweihergarten");
        break;
    }
    case 281806:
    {
        returnValue = F("Schloßweiherstr.");
        break;
    }
    case 281807:
    {
        returnValue = F("Schloßweiherweg");
        break;
    }
    case 281808:
    {
        returnValue = F("Schloßweinbergstr.");
        break;
    }
    case 281809:
    {
        returnValue = F("Schloßweth");
        break;
    }
    case 281810:
    {
        returnValue = F("Schloßwiese");
        break;
    }
    case 281811:
    {
        returnValue = F("Schloßwiesen");
        break;
    }
    case 281812:
    {
        returnValue = F("Schloßwiesenstr.");
        break;
    }
    case 281813:
    {
        returnValue = F("Schloßwiesenweg");
        break;
    }
    case 281814:
    {
        returnValue = F("Schloßwiesweg");
        break;
    }
    case 281815:
    {
        returnValue = F("Schloßwinkel");
        break;
    }
    case 281816:
    {
        returnValue = F("Schloßzell");
        break;
    }
    case 281817:
    {
        returnValue = F("Schloßäcker");
        break;
    }
    case 281818:
    {
        returnValue = F("Schloßäckerring");
        break;
    }
    case 281819:
    {
        returnValue = F("Schloßäckerstr.");
        break;
    }
    case 281820:
    {
        returnValue = F("Schloßäckerweg");
        break;
    }
    case 281821:
    {
        returnValue = F("Schluchenhausstr.");
        break;
    }
    case 281822:
    {
        returnValue = F("Schluchenweg");
        break;
    }
    case 281823:
    {
        returnValue = F("Schluchseer Str.");
        break;
    }
    case 281824:
    {
        returnValue = F("Schluchseestr.");
        break;
    }
    case 281825:
    {
        returnValue = F("Schluchseeweg");
        break;
    }
    case 281826:
    {
        returnValue = F("Schluchstr.");
        break;
    }
    case 281827:
    {
        returnValue = F("Schlucht");
        break;
    }
    case 281828:
    {
        returnValue = F("Schluchtbachweg");
        break;
    }
    case 281829:
    {
        returnValue = F("Schluchtblick");
        break;
    }
    case 281830:
    {
        returnValue = F("Schluchtenpfad");
        break;
    }
    case 281831:
    {
        returnValue = F("Schluchtenweg");
        break;
    }
    case 281832:
    {
        returnValue = F("Schluchter");
        break;
    }
    case 281833:
    {
        returnValue = F("Schluchterheide");
        break;
    }
    case 281834:
    {
        returnValue = F("Schluchterner Str.");
        break;
    }
    case 281835:
    {
        returnValue = F("Schluchtgasse");
        break;
    }
    case 281836:
    {
        returnValue = F("Schluchtstr.");
        break;
    }
    case 281837:
    {
        returnValue = F("Schluchtweg");
        break;
    }
    case 281838:
    {
        returnValue = F("Schluchweg");
        break;
    }
    case 281839:
    {
        returnValue = F("Schluckenauer Str.");
        break;
    }
    case 281840:
    {
        returnValue = F("Schluckengasse");
        break;
    }
    case 281841:
    {
        returnValue = F("Schluckstr.");
        break;
    }
    case 281842:
    {
        returnValue = F("Schluckweg");
        break;
    }
    case 281843:
    {
        returnValue = F("Schluderstr.");
        break;
    }
    case 281844:
    {
        returnValue = F("Schluerweg");
        break;
    }
    case 281845:
    {
        returnValue = F("Schluff");
        break;
    }
    case 281846:
    {
        returnValue = F("Schluftberg");
        break;
    }
    case 281847:
    {
        returnValue = F("Schlufter");
        break;
    }
    case 281848:
    {
        returnValue = F("Schlufter Hauptstr.");
        break;
    }
    case 281849:
    {
        returnValue = F("Schlufter Kopfweg");
        break;
    }
    case 281850:
    {
        returnValue = F("Schlufter Str.");
        break;
    }
    case 281851:
    {
        returnValue = F("Schluftergraben");
        break;
    }
    case 281852:
    {
        returnValue = F("Schlufterkopfweg");
        break;
    }
    case 281853:
    {
        returnValue = F("Schlufterweg");
        break;
    }
    case 281854:
    {
        returnValue = F("Schluftstr.");
        break;
    }
    case 281855:
    {
        returnValue = F("Schluifelder Str.");
        break;
    }
    case 281856:
    {
        returnValue = F("Schluisweg");
        break;
    }
    case 281857:
    {
        returnValue = F("Schluitskamp");
        break;
    }
    case 281858:
    {
        returnValue = F("Schluke");
        break;
    }
    case 281859:
    {
        returnValue = F("Schlukopsredder");
        break;
    }
    case 281860:
    {
        returnValue = F("Schlumm");
        break;
    }
    case 281861:
    {
        returnValue = F("Schlummerriede");
        break;
    }
    case 281862:
    {
        returnValue = F("Schlummstr.");
        break;
    }
    case 281863:
    {
        returnValue = F("Schlump");
        break;
    }
    case 281864:
    {
        returnValue = F("Schlund");
        break;
    }
    case 281865:
    {
        returnValue = F("Schlundgasse");
        break;
    }
    case 281866:
    {
        returnValue = F("Schlundstr.");
        break;
    }
    case 281867:
    {
        returnValue = F("Schlundweg");
        break;
    }
    case 281868:
    {
        returnValue = F("Schlungweg");
        break;
    }
    case 281869:
    {
        returnValue = F("Schlunkendorfer Dorfstr.");
        break;
    }
    case 281870:
    {
        returnValue = F("Schlunkendorfer Str.");
        break;
    }
    case 281871:
    {
        returnValue = F("Schlunkendorfer Weg");
        break;
    }
    case 281872:
    {
        returnValue = F("Schlunkes Felsen");
        break;
    }
    case 281873:
    {
        returnValue = F("Schlunkweg");
        break;
    }
    case 281874:
    {
        returnValue = F("Schlunziger Hauptstr.");
        break;
    }
    case 281875:
    {
        returnValue = F("Schlunziger Str.");
        break;
    }
    case 281876:
    {
        returnValue = F("Schlunziger Weg");
        break;
    }
    case 281877:
    {
        returnValue = F("Schluot");
        break;
    }
    case 281878:
    {
        returnValue = F("Schlup");
        break;
    }
    case 281879:
    {
        returnValue = F("Schlupfenweg");
        break;
    }
    case 281880:
    {
        returnValue = F("Schlupfinger Str.");
        break;
    }
    case 281881:
    {
        returnValue = F("Schlupfweg");
        break;
    }
    case 281882:
    {
        returnValue = F("Schlupkothen");
        break;
    }
    case 281883:
    {
        returnValue = F("Schluplatz");
        break;
    }
    case 281884:
    {
        returnValue = F("Schluppe");
        break;
    }
    case 281885:
    {
        returnValue = F("Schluppe-Schäng-Str.");
        break;
    }
    case 281886:
    {
        returnValue = F("Schluppergasse");
        break;
    }
    case 281887:
    {
        returnValue = F("Schlupstr.");
        break;
    }
    case 281888:
    {
        returnValue = F("Schlurpenstr.");
        break;
    }
    case 281889:
    {
        returnValue = F("Schlurpweg");
        break;
    }
    case 281890:
    {
        returnValue = F("Schlurrehm");
        break;
    }
    case 281891:
    {
        returnValue = F("Schluse");
        break;
    }
    case 281892:
    {
        returnValue = F("Schlustr.");
        break;
    }
    case 281893:
    {
        returnValue = F("Schlut");
        break;
    }
    case 281894:
    {
        returnValue = F("Schluten");
        break;
    }
    case 281895:
    {
        returnValue = F("Schlutow");
        break;
    }
    case 281896:
    {
        returnValue = F("Schluttbaum");
        break;
    }
    case 281897:
    {
        returnValue = F("Schluttenbacher Str.");
        break;
    }
    case 281898:
    {
        returnValue = F("Schluttenbacher Weg");
        break;
    }
    case 281899:
    {
        returnValue = F("Schluttengasse");
        break;
    }
    case 281900:
    {
        returnValue = F("Schluttermühlenweg");
        break;
    }
    case 281901:
    {
        returnValue = F("Schlutterweg");
        break;
    }
    case 281902:
    {
        returnValue = F("Schlußdorfer Str.");
        break;
    }
    case 281903:
    {
        returnValue = F("Schlußgasse");
        break;
    }
    case 281904:
    {
        returnValue = F("Schlädchen");
        break;
    }
    case 281905:
    {
        returnValue = F("Schläfergarten");
        break;
    }
    case 281906:
    {
        returnValue = F("Schläferweg");
        break;
    }
    case 281907:
    {
        returnValue = F("Schläge");
        break;
    }
    case 281908:
    {
        returnValue = F("Schlägel-Und-Eisen-Str.");
        break;
    }
    case 281909:
    {
        returnValue = F("Schlägel-und-Eisen-Str.");
        break;
    }
    case 281910:
    {
        returnValue = F("Schlägelstr.");
        break;
    }
    case 281911:
    {
        returnValue = F("Schlägelswinkel");
        break;
    }
    case 281912:
    {
        returnValue = F("Schlägelweg");
        break;
    }
    case 281913:
    {
        returnValue = F("Schlägenweg");
        break;
    }
    case 281914:
    {
        returnValue = F("Schlägerheidstr.");
        break;
    }
    case 281915:
    {
        returnValue = F("Schläglein");
        break;
    }
    case 281916:
    {
        returnValue = F("Schlägleinsweg");
        break;
    }
    case 281917:
    {
        returnValue = F("Schläglesweg");
        break;
    }
    case 281918:
    {
        returnValue = F("Schlägleweg");
        break;
    }
    case 281919:
    {
        returnValue = F("Schlägweidestr.");
        break;
    }
    case 281920:
    {
        returnValue = F("Schlämmchen");
        break;
    }
    case 281921:
    {
        returnValue = F("Schlängelbachweg");
        break;
    }
    case 281922:
    {
        returnValue = F("Schlängelweg");
        break;
    }
    case 281923:
    {
        returnValue = F("Schlänger Bruch");
        break;
    }
    case 281924:
    {
        returnValue = F("Schlänger Weg");
        break;
    }
    case 281925:
    {
        returnValue = F("Schlänitzseer Weg");
        break;
    }
    case 281926:
    {
        returnValue = F("Schläpfad");
        break;
    }
    case 281927:
    {
        returnValue = F("Schlätterstr.");
        break;
    }
    case 281928:
    {
        returnValue = F("Schlättstiege");
        break;
    }
    case 281929:
    {
        returnValue = F("Schläuchenweg");
        break;
    }
    case 281930:
    {
        returnValue = F("Schläuhle");
        break;
    }
    case 281931:
    {
        returnValue = F("Schläulestr.");
        break;
    }
    case 281932:
    {
        returnValue = F("Schlöbckeweg");
        break;
    }
    case 281933:
    {
        returnValue = F("Schlöben Park");
        break;
    }
    case 281934:
    {
        returnValue = F("Schlödergasse");
        break;
    }
    case 281935:
    {
        returnValue = F("Schlögelmühlstr.");
        break;
    }
    case 281936:
    {
        returnValue = F("Schlöglstr.");
        break;
    }
    case 281937:
    {
        returnValue = F("Schlöglweg");
        break;
    }
    case 281938:
    {
        returnValue = F("Schlömannstr.");
        break;
    }
    case 281939:
    {
        returnValue = F("Schlömen");
        break;
    }
    case 281940:
    {
        returnValue = F("Schlömerkamp");
        break;
    }
    case 281941:
    {
        returnValue = F("Schlömers Gasse");
        break;
    }
    case 281942:
    {
        returnValue = F("Schlömerweg");
        break;
    }
    case 281943:
    {
        returnValue = F("Schlöpeweg");
        break;
    }
    case 281944:
    {
        returnValue = F("Schlöpitzer Weg");
        break;
    }
    case 281945:
    {
        returnValue = F("Schlöpkeweg");
        break;
    }
    case 281946:
    {
        returnValue = F("Schlörbachweg");
        break;
    }
    case 281947:
    {
        returnValue = F("Schlörplatz");
        break;
    }
    case 281948:
    {
        returnValue = F("Schlörstr.");
        break;
    }
    case 281949:
    {
        returnValue = F("Schlörweg");
        break;
    }
    case 281950:
    {
        returnValue = F("Schlösschen");
        break;
    }
    case 281951:
    {
        returnValue = F("Schlösschenpark");
        break;
    }
    case 281952:
    {
        returnValue = F("Schlösschenweg");
        break;
    }
    case 281953:
    {
        returnValue = F("Schlösselbrücke");
        break;
    }
    case 281954:
    {
        returnValue = F("Schlösselstr.");
        break;
    }
    case 281955:
    {
        returnValue = F("Schlösselweg");
        break;
    }
    case 281956:
    {
        returnValue = F("Schlösseläcker");
        break;
    }
    case 281957:
    {
        returnValue = F("Schlösser Forderglauchau und Hinterglauchau");
        break;
    }
    case 281958:
    {
        returnValue = F("Schlössergasse");
        break;
    }
    case 281959:
    {
        returnValue = F("Schlösserstr.");
        break;
    }
    case 281960:
    {
        returnValue = F("Schlösserweg");
        break;
    }
    case 281961:
    {
        returnValue = F("Schlössle");
        break;
    }
    case 281962:
    {
        returnValue = F("Schlössleblick");
        break;
    }
    case 281963:
    {
        returnValue = F("Schlösslehof");
        break;
    }
    case 281964:
    {
        returnValue = F("Schlösslehohle");
        break;
    }
    case 281965:
    {
        returnValue = F("Schlösslepark");
        break;
    }
    case 281966:
    {
        returnValue = F("Schlösslesbergweg");
        break;
    }
    case 281967:
    {
        returnValue = F("Schlösslespark");
        break;
    }
    case 281968:
    {
        returnValue = F("Schlösslesrichtstatt");
        break;
    }
    case 281969:
    {
        returnValue = F("Schlösslessteige");
        break;
    }
    case 281970:
    {
        returnValue = F("Schlösslestr.");
        break;
    }
    case 281971:
    {
        returnValue = F("Schlösslesweg");
        break;
    }
    case 281972:
    {
        returnValue = F("Schlössleweg");
        break;
    }
    case 281973:
    {
        returnValue = F("Schlötel");
        break;
    }
    case 281974:
    {
        returnValue = F("Schlötelborgstr.");
        break;
    }
    case 281975:
    {
        returnValue = F("Schlötelsbrink");
        break;
    }
    case 281976:
    {
        returnValue = F("Schlöten");
        break;
    }
    case 281977:
    {
        returnValue = F("Schlötengrund");
        break;
    }
    case 281978:
    {
        returnValue = F("Schlötenweg");
        break;
    }
    case 281979:
    {
        returnValue = F("Schlötlebergweg");
        break;
    }
    case 281980:
    {
        returnValue = F("Schlöttelborg");
        break;
    }
    case 281981:
    {
        returnValue = F("Schlöttergasse");
        break;
    }
    case 281982:
    {
        returnValue = F("Schlöttermühle");
        break;
    }
    case 281983:
    {
        returnValue = F("Schlöttleweg");
        break;
    }
    case 281984:
    {
        returnValue = F("Schlözelweg");
        break;
    }
    case 281985:
    {
        returnValue = F("Schlözer Str.");
        break;
    }
    case 281986:
    {
        returnValue = F("Schlözerweg");
        break;
    }
    case 281987:
    {
        returnValue = F("Schlößchendamm");
        break;
    }
    case 281988:
    {
        returnValue = F("Schlößchenpark");
        break;
    }
    case 281989:
    {
        returnValue = F("Schlößchenweg");
        break;
    }
    case 281990:
    {
        returnValue = F("Schlößlberg");
        break;
    }
    case 281991:
    {
        returnValue = F("Schlößle");
        break;
    }
    case 281992:
    {
        returnValue = F("Schlößlebühnd");
        break;
    }
    case 281993:
    {
        returnValue = F("Schlößleinsgasse");
        break;
    }
    case 281994:
    {
        returnValue = F("Schlößlemühle");
        break;
    }
    case 281995:
    {
        returnValue = F("Schlößlesstr.");
        break;
    }
    case 281996:
    {
        returnValue = F("Schlößlestr.");
        break;
    }
    case 281997:
    {
        returnValue = F("Schlößlesweg");
        break;
    }
    case 281998:
    {
        returnValue = F("Schlößleweg");
        break;
    }
    case 281999:
    {
        returnValue = F("Schlößlgartenweg");
        break;
    }
    case 282000:
    {
        returnValue = F("Schlößligasse");
        break;
    }
    case 282001:
    {
        returnValue = F("Schlößlmühle");
        break;
    }
    case 282002:
    {
        returnValue = F("Schlößlstr.");
        break;
    }
    case 282003:
    {
        returnValue = F("Schlößlweg");
        break;
    }
    case 282004:
    {
        returnValue = F("Schlößmigweg");
        break;
    }
    case 282005:
    {
        returnValue = F("Schlüchterner Str.");
        break;
    }
    case 282006:
    {
        returnValue = F("Schlüchttalstr.");
        break;
    }
    case 282007:
    {
        returnValue = F("Schlückersring");
        break;
    }
    case 282008:
    {
        returnValue = F("Schlückinger Weg");
        break;
    }
    case 282009:
    {
        returnValue = F("Schlüersburg");
        break;
    }
    case 282010:
    {
        returnValue = F("Schlüfter");
        break;
    }
    case 282011:
    {
        returnValue = F("Schlühüwana Park");
        break;
    }
    case 282012:
    {
        returnValue = F("Schlümersweg");
        break;
    }
    case 282013:
    {
        returnValue = F("Schlüpfere");
        break;
    }
    case 282014:
    {
        returnValue = F("Schlüpfingerhofweg");
        break;
    }
    case 282015:
    {
        returnValue = F("Schlüpfle");
        break;
    }
    case 282016:
    {
        returnValue = F("Schlüpker Weg");
        break;
    }
    case 282017:
    {
        returnValue = F("Schlüsbeker Weg");
        break;
    }
    case 282018:
    {
        returnValue = F("Schlüsenkamp");
        break;
    }
    case 282019:
    {
        returnValue = F("Schlüskamp");
        break;
    }
    case 282020:
    {
        returnValue = F("Schlüskesgraben");
        break;
    }
    case 282021:
    {
        returnValue = F("Schlüssel");
        break;
    }
    case 282022:
    {
        returnValue = F("Schlüsselacker");
        break;
    }
    case 282023:
    {
        returnValue = F("Schlüsselackerstr.");
        break;
    }
    case 282024:
    {
        returnValue = F("Schlüsselauer Weg");
        break;
    }
    case 282025:
    {
        returnValue = F("Schlüsselbeinweg");
        break;
    }
    case 282026:
    {
        returnValue = F("Schlüsselberg");
        break;
    }
    case 282027:
    {
        returnValue = F("Schlüsselbergerstr.");
        break;
    }
    case 282028:
    {
        returnValue = F("Schlüsselbergstr.");
        break;
    }
    case 282029:
    {
        returnValue = F("Schlüsselblumenschlagweg");
        break;
    }
    case 282030:
    {
        returnValue = F("Schlüsselblumenweg");
        break;
    }
    case 282031:
    {
        returnValue = F("Schlüsselbrücke");
        break;
    }
    case 282032:
    {
        returnValue = F("Schlüsselburger Str.");
        break;
    }
    case 282033:
    {
        returnValue = F("Schlüsselfelder Str.");
        break;
    }
    case 282034:
    {
        returnValue = F("Schlüsselfelder Weg");
        break;
    }
    case 282035:
    {
        returnValue = F("Schlüsselgall");
        break;
    }
    case 282036:
    {
        returnValue = F("Schlüsselgang");
        break;
    }
    case 282037:
    {
        returnValue = F("Schlüsselgarnweg");
        break;
    }
    case 282038:
    {
        returnValue = F("Schlüsselgasse");
        break;
    }
    case 282039:
    {
        returnValue = F("Schlüsselgrund");
        break;
    }
    case 282040:
    {
        returnValue = F("Schlüsselmattweg");
        break;
    }
    case 282041:
    {
        returnValue = F("Schlüsselring");
        break;
    }
    case 282042:
    {
        returnValue = F("Schlüsselstiel");
        break;
    }
    case 282043:
    {
        returnValue = F("Schlüsselstr.");
        break;
    }
    case 282044:
    {
        returnValue = F("Schlüsseltal");
        break;
    }
    case 282045:
    {
        returnValue = F("Schlüsselweg");
        break;
    }
    case 282046:
    {
        returnValue = F("Schlüsseläcker");
        break;
    }
    case 282047:
    {
        returnValue = F("Schlüsseläckerstr.");
        break;
    }
    case 282048:
    {
        returnValue = F("Schlüsseläckerweg");
        break;
    }
    case 282049:
    {
        returnValue = F("Schlüsslerstr.");
        break;
    }
    case 282050:
    {
        returnValue = F("Schlüsstücken");
        break;
    }
    case 282051:
    {
        returnValue = F("Schlütenstr.");
        break;
    }
    case 282052:
    {
        returnValue = F("Schlüter Helmer");
        break;
    }
    case 282053:
    {
        returnValue = F("Schlüter Str.");
        break;
    }
    case 282054:
    {
        returnValue = F("Schlüterberg");
        break;
    }
    case 282055:
    {
        returnValue = F("Schlütergelände");
        break;
    }
    case 282056:
    {
        returnValue = F("Schlüters Kuhle");
        break;
    }
    case 282057:
    {
        returnValue = F("Schlütersgrund");
        break;
    }
    case 282058:
    {
        returnValue = F("Schlüterskamp");
        break;
    }
    case 282059:
    {
        returnValue = F("Schlüterstr.");
        break;
    }
    case 282060:
    {
        returnValue = F("Schlüterweg");
        break;
    }
    case 282061:
    {
        returnValue = F("Schlütingstr.");
        break;
    }
    case 282062:
    {
        returnValue = F("Schlüts Kamp");
        break;
    }
    case 282063:
    {
        returnValue = F("Schlüttgarten");
        break;
    }
    case 282064:
    {
        returnValue = F("Schlüttsiel");
        break;
    }
    case 282065:
    {
        returnValue = F("Schlüßhaldenstr.");
        break;
    }
    case 282066:
    {
        returnValue = F("Schlüßstr.");
        break;
    }
    case 282067:
    {
        returnValue = F("Schmabeker Weg");
        break;
    }
    case 282068:
    {
        returnValue = F("Schmachtenberger Str.");
        break;
    }
    case 282069:
    {
        returnValue = F("Schmachtenbergweg");
        break;
    }
    case 282070:
    {
        returnValue = F("Schmachtendorfer Str.");
        break;
    }
    case 282071:
    {
        returnValue = F("Schmachtenhagener Dorfstr.");
        break;
    }
    case 282072:
    {
        returnValue = F("Schmachtenhagener Str.");
        break;
    }
    case 282073:
    {
        returnValue = F("Schmachterseestr.");
        break;
    }
    case 282074:
    {
        returnValue = F("Schmachthagen");
        break;
    }
    case 282075:
    {
        returnValue = F("Schmachthagener Redder");
        break;
    }
    case 282076:
    {
        returnValue = F("Schmachthagener Weg");
        break;
    }
    case 282077:
    {
        returnValue = F("Schmachtkamp");
        break;
    }
    case 282078:
    {
        returnValue = F("Schmachtstr.");
        break;
    }
    case 282079:
    {
        returnValue = F("Schmackenser Weg");
        break;
    }
    case 282080:
    {
        returnValue = F("Schmackweg");
        break;
    }
    case 282081:
    {
        returnValue = F("Schmadebecker Str.");
        break;
    }
    case 282082:
    {
        returnValue = F("Schmadstr.");
        break;
    }
    case 282083:
    {
        returnValue = F("Schmagerow");
        break;
    }
    case 282084:
    {
        returnValue = F("Schmagerower Weg");
        break;
    }
    case 282085:
    {
        returnValue = F("Schmal Pad");
        break;
    }
    case 282086:
    {
        returnValue = F("Schmal-Schneise");
        break;
    }
    case 282087:
    {
        returnValue = F("Schmalacker");
        break;
    }
    case 282088:
    {
        returnValue = F("Schmalackerstr.");
        break;
    }
    case 282089:
    {
        returnValue = F("Schmalauweg");
        break;
    }
    case 282090:
    {
        returnValue = F("Schmalbacher Str.");
        break;
    }
    case 282091:
    {
        returnValue = F("Schmalbachstr.");
        break;
    }
    case 282092:
    {
        returnValue = F("Schmalbachtal");
        break;
    }
    case 282093:
    {
        returnValue = F("Schmalbeekstr.");
        break;
    }
    case 282094:
    {
        returnValue = F("Schmalbeinsweg");
        break;
    }
    case 282095:
    {
        returnValue = F("Schmalbergring");
        break;
    }
    case 282096:
    {
        returnValue = F("Schmalbrockskamp");
        break;
    }
    case 282097:
    {
        returnValue = F("Schmalbusenweg");
        break;
    }
    case 282098:
    {
        returnValue = F("Schmale Allee");
        break;
    }
    case 282099:
    {
        returnValue = F("Schmale Brock");
        break;
    }
    case 282100:
    {
        returnValue = F("Schmale Gasse");
        break;
    }
    case 282101:
    {
        returnValue = F("Schmale Göhle");
        break;
    }
    case 282102:
    {
        returnValue = F("Schmale Haube");
        break;
    }
    case 282103:
    {
        returnValue = F("Schmale Reeke");
        break;
    }
    case 282104:
    {
        returnValue = F("Schmale Schneise");
        break;
    }
    case 282105:
    {
        returnValue = F("Schmale Schwende Weg");
        break;
    }
    case 282106:
    {
        returnValue = F("Schmale Seite");
        break;
    }
    case 282107:
    {
        returnValue = F("Schmale Str.");
        break;
    }
    case 282108:
    {
        returnValue = F("Schmale Teile");
        break;
    }
    case 282109:
    {
        returnValue = F("Schmale Trift");
        break;
    }
    case 282110:
    {
        returnValue = F("Schmale Weg");
        break;
    }
    case 282111:
    {
        returnValue = F("Schmaleckweg");
        break;
    }
    case 282112:
    {
        returnValue = F("Schmalefeld");
        break;
    }
    case 282113:
    {
        returnValue = F("Schmalegger Str.");
        break;
    }
    case 282114:
    {
        returnValue = F("Schmaleich");
        break;
    }
    case 282115:
    {
        returnValue = F("Schmaleichertorstr.");
        break;
    }
    case 282116:
    {
        returnValue = F("Schmalen Damm");
        break;
    }
    case 282117:
    {
        returnValue = F("Schmalenau");
        break;
    }
    case 282118:
    {
        returnValue = F("Schmalenbach");
        break;
    }
    case 282119:
    {
        returnValue = F("Schmalenbachweg");
        break;
    }
    case 282120:
    {
        returnValue = F("Schmalenbeck");
        break;
    }
    case 282121:
    {
        returnValue = F("Schmalenberger Str.");
        break;
    }
    case 282122:
    {
        returnValue = F("Schmalenbergstr.");
        break;
    }
    case 282123:
    {
        returnValue = F("Schmalenbergsweg");
        break;
    }
    case 282124:
    {
        returnValue = F("Schmalenbruch");
        break;
    }
    case 282125:
    {
        returnValue = F("Schmalenbrucher Str.");
        break;
    }
    case 282126:
    {
        returnValue = F("Schmalenbuchener Str.");
        break;
    }
    case 282127:
    {
        returnValue = F("Schmalenburg");
        break;
    }
    case 282128:
    {
        returnValue = F("Schmalend");
        break;
    }
    case 282129:
    {
        returnValue = F("Schmalenend");
        break;
    }
    case 282130:
    {
        returnValue = F("Schmalenfeld");
        break;
    }
    case 282131:
    {
        returnValue = F("Schmalenfelder Str.");
        break;
    }
    case 282132:
    {
        returnValue = F("Schmalenfeldweg");
        break;
    }
    case 282133:
    {
        returnValue = F("Schmalenhaubrücke");
        break;
    }
    case 282134:
    {
        returnValue = F("Schmalenhofer Str.");
        break;
    }
    case 282135:
    {
        returnValue = F("Schmalenkampsweg");
        break;
    }
    case 282136:
    {
        returnValue = F("Schmalenrade");
        break;
    }
    case 282137:
    {
        returnValue = F("Schmalensteinweg");
        break;
    }
    case 282138:
    {
        returnValue = F("Schmalenstrothstr.");
        break;
    }
    case 282139:
    {
        returnValue = F("Schmalenweg");
        break;
    }
    case 282140:
    {
        returnValue = F("Schmaler Beckerweg");
        break;
    }
    case 282141:
    {
        returnValue = F("Schmaler Damm");
        break;
    }
    case 282142:
    {
        returnValue = F("Schmaler Fußweg");
        break;
    }
    case 282143:
    {
        returnValue = F("Schmaler Fußweg durch die Wiese");
        break;
    }
    case 282144:
    {
        returnValue = F("Schmaler Gang");
        break;
    }
    case 282145:
    {
        returnValue = F("Schmaler Hellweg");
        break;
    }
    case 282146:
    {
        returnValue = F("Schmaler Kamp");
        break;
    }
    case 282147:
    {
        returnValue = F("Schmaler Pfad");
        break;
    }
    case 282148:
    {
        returnValue = F("Schmaler Weg");
        break;
    }
    case 282149:
    {
        returnValue = F("Schmaler Winkel");
        break;
    }
    case 282150:
    {
        returnValue = F("Schmales Feld");
        break;
    }
    case 282151:
    {
        returnValue = F("Schmales Gässchen");
        break;
    }
    case 282152:
    {
        returnValue = F("Schmales Moor");
        break;
    }
    case 282153:
    {
        returnValue = F("Schmales Tal");
        break;
    }
    case 282154:
    {
        returnValue = F("Schmalespanstr.");
        break;
    }
    case 282155:
    {
        returnValue = F("Schmalestr.");
        break;
    }
    case 282156:
    {
        returnValue = F("Schmalfelder Landstr.");
        break;
    }
    case 282157:
    {
        returnValue = F("Schmalfelder Str.");
        break;
    }
    case 282158:
    {
        returnValue = F("Schmalfeldsredder");
        break;
    }
    case 282159:
    {
        returnValue = F("Schmalfurtweg");
        break;
    }
    case 282160:
    {
        returnValue = F("Schmalfußstr.");
        break;
    }
    case 282161:
    {
        returnValue = F("Schmalförden");
        break;
    }
    case 282162:
    {
        returnValue = F("Schmalfördener Mühlenweg");
        break;
    }
    case 282163:
    {
        returnValue = F("Schmalgasse");
        break;
    }
    case 282164:
    {
        returnValue = F("Schmalger Weg");
        break;
    }
    case 282165:
    {
        returnValue = F("Schmalgiersweg");
        break;
    }
    case 282166:
    {
        returnValue = F("Schmalhardtstr.");
        break;
    }
    case 282167:
    {
        returnValue = F("Schmalhartstr.");
        break;
    }
    case 282168:
    {
        returnValue = F("Schmalheck");
        break;
    }
    case 282169:
    {
        returnValue = F("Schmalheckenweg");
        break;
    }
    case 282170:
    {
        returnValue = F("Schmalholt");
        break;
    }
    case 282171:
    {
        returnValue = F("Schmalholzstr.");
        break;
    }
    case 282172:
    {
        returnValue = F("Schmalhorn");
        break;
    }
    case 282173:
    {
        returnValue = F("Schmalhorststr.");
        break;
    }
    case 282174:
    {
        returnValue = F("Schmalhörn");
        break;
    }
    case 282175:
    {
        returnValue = F("Schmaligweg");
        break;
    }
    case 282176:
    {
        returnValue = F("Schmalingstr.");
        break;
    }
    case 282177:
    {
        returnValue = F("Schmalkaldener Ring");
        break;
    }
    case 282178:
    {
        returnValue = F("Schmalkaldener Str.");
        break;
    }
    case 282179:
    {
        returnValue = F("Schmalkaldener Weg");
        break;
    }
    case 282180:
    {
        returnValue = F("Schmalkalder Landwehr");
        break;
    }
    case 282181:
    {
        returnValue = F("Schmalkalder Str.");
        break;
    }
    case 282182:
    {
        returnValue = F("Schmalkalder Tal");
        break;
    }
    case 282183:
    {
        returnValue = F("Schmalkalder Weg");
        break;
    }
    case 282184:
    {
        returnValue = F("Schmalkenweg");
        break;
    }
    case 282185:
    {
        returnValue = F("Schmalkuhler Weg");
        break;
    }
    case 282186:
    {
        returnValue = F("Schmallenberger Haus");
        break;
    }
    case 282187:
    {
        returnValue = F("Schmallenberger Str.");
        break;
    }
    case 282188:
    {
        returnValue = F("Schmalloh");
        break;
    }
    case 282189:
    {
        returnValue = F("Schmallstr.");
        break;
    }
    case 282190:
    {
        returnValue = F("Schmalmeke");
        break;
    }
    case 282191:
    {
        returnValue = F("Schmalnohe");
        break;
    }
    case 282192:
    {
        returnValue = F("Schmalredder");
        break;
    }
    case 282193:
    {
        returnValue = F("Schmalrückenweg");
        break;
    }
    case 282194:
    {
        returnValue = F("Schmalscheid");
        break;
    }
    case 282195:
    {
        returnValue = F("Schmalscheidstr.");
        break;
    }
    case 282196:
    {
        returnValue = F("Schmalschlägerstr.");
        break;
    }
    case 282197:
    {
        returnValue = F("Schmalseeweg");
        break;
    }
    case 282198:
    {
        returnValue = F("Schmalseitweg");
        break;
    }
    case 282199:
    {
        returnValue = F("Schmalsgotte");
        break;
    }
    case 282200:
    {
        returnValue = F("Schmalsteder Weg");
        break;
    }
    case 282201:
    {
        returnValue = F("Schmalstieg");
        break;
    }
    case 282202:
    {
        returnValue = F("Schmalstr.");
        break;
    }
    case 282203:
    {
        returnValue = F("Schmaltalgasse");
        break;
    }
    case 282204:
    {
        returnValue = F("Schmalteilweg");
        break;
    }
    case 282205:
    {
        returnValue = F("Schmalweg");
        break;
    }
    case 282206:
    {
        returnValue = F("Schmalwegle");
        break;
    }
    case 282207:
    {
        returnValue = F("Schmalwiese");
        break;
    }
    case 282208:
    {
        returnValue = F("Schmalwiesenweg");
        break;
    }
    case 282209:
    {
        returnValue = F("Schmalwieser Weg");
        break;
    }
    case 282210:
    {
        returnValue = F("Schmalwiesäcker");
        break;
    }
    case 282211:
    {
        returnValue = F("Schmalzbachsiedlung");
        break;
    }
    case 282212:
    {
        returnValue = F("Schmalzbachstr.");
        break;
    }
    case 282213:
    {
        returnValue = F("Schmalzberg");
        break;
    }
    case 282214:
    {
        returnValue = F("Schmalzbergstr.");
        break;
    }
    case 282215:
    {
        returnValue = F("Schmalzbergweg");
        break;
    }
    case 282216:
    {
        returnValue = F("Schmalzbühl");
        break;
    }
    case 282217:
    {
        returnValue = F("Schmalzbühlweg");
        break;
    }
    case 282218:
    {
        returnValue = F("Schmalzerstr.");
        break;
    }
    case 282219:
    {
        returnValue = F("Schmalzgartenweg");
        break;
    }
    case 282220:
    {
        returnValue = F("Schmalzgasse");
        break;
    }
    case 282221:
    {
        returnValue = F("Schmalzgraben");
        break;
    }
    case 282222:
    {
        returnValue = F("Schmalzgrube");
        break;
    }
    case 282223:
    {
        returnValue = F("Schmalzgrubenweg");
        break;
    }
    case 282224:
    {
        returnValue = F("Schmalzgrubner Str.");
        break;
    }
    case 282225:
    {
        returnValue = F("Schmalzgrüble");
        break;
    }
    case 282226:
    {
        returnValue = F("Schmalzhalde");
        break;
    }
    case 282227:
    {
        returnValue = F("Schmalzhansenstein");
        break;
    }
    case 282228:
    {
        returnValue = F("Schmalzhof");
        break;
    }
    case 282229:
    {
        returnValue = F("Schmalzkamp");
        break;
    }
    case 282230:
    {
        returnValue = F("Schmalzlochweg");
        break;
    }
    case 282231:
    {
        returnValue = F("Schmalzmeier");
        break;
    }
    case 282232:
    {
        returnValue = F("Schmalzmühlweg");
        break;
    }
    case 282233:
    {
        returnValue = F("Schmalzstr.");
        break;
    }
    case 282234:
    {
        returnValue = F("Schmalzwasenteichweg");
        break;
    }
    case 282235:
    {
        returnValue = F("Schmalzäcker");
        break;
    }
    case 282236:
    {
        returnValue = F("Schmalzäckerstr.");
        break;
    }
    case 282237:
    {
        returnValue = F("Schmandgasse");
        break;
    }
    case 282238:
    {
        returnValue = F("Schmandstr.");
        break;
    }
    case 282239:
    {
        returnValue = F("Schmannewitzer Str.");
        break;
    }
    case 282240:
    {
        returnValue = F("Schmantelrundweg");
        break;
    }
    case 282241:
    {
        returnValue = F("Schmantevitz-Kammin");
        break;
    }
    case 282242:
    {
        returnValue = F("Schmarbeck");
        break;
    }
    case 282243:
    {
        returnValue = F("Schmarbeck Grube");
        break;
    }
    case 282244:
    {
        returnValue = F("Schmarbecker Heide");
        break;
    }
    case 282245:
    {
        returnValue = F("Schmarbecker Ring");
        break;
    }
    case 282246:
    {
        returnValue = F("Schmarbecker Weg");
        break;
    }
    case 282247:
    {
        returnValue = F("Schmardau");
        break;
    }
    case 282248:
    {
        returnValue = F("Schmargendorfer Weg");
        break;
    }
    case 282249:
    {
        returnValue = F("Schmarl-Dorf");
        break;
    }
    case 282250:
    {
        returnValue = F("Schmarler Damm");
        break;
    }
    case 282251:
    {
        returnValue = F("Schmarler Landgang");
        break;
    }
    case 282252:
    {
        returnValue = F("Schmarloh");
        break;
    }
    case 282253:
    {
        returnValue = F("Schmarrener Nordweg");
        break;
    }
    case 282254:
    {
        returnValue = F("Schmarrener Südweg");
        break;
    }
    case 282255:
    {
        returnValue = F("Schmarrenweg");
        break;
    }
    case 282256:
    {
        returnValue = F("Schmarrier Str.");
        break;
    }
    case 282257:
    {
        returnValue = F("Schmarsow");
        break;
    }
    case 282258:
    {
        returnValue = F("Schmarsower Damm");
        break;
    }
    case 282259:
    {
        returnValue = F("Schmarsower Str.");
        break;
    }
    case 282260:
    {
        returnValue = F("Schmarsower Weg");
        break;
    }
    case 282261:
    {
        returnValue = F("Schmatzenhöhe");
        break;
    }
    case 282262:
    {
        returnValue = F("Schmatzfelder Str.");
        break;
    }
    case 282263:
    {
        returnValue = F("Schmatzhausener Str.");
        break;
    }
    case 282264:
    {
        returnValue = F("Schmatziner Weg");
        break;
    }
    case 282265:
    {
        returnValue = F("Schmausegasse");
        break;
    }
    case 282266:
    {
        returnValue = F("Schmausemühle");
        break;
    }
    case 282267:
    {
        returnValue = F("Schmauserstr.");
        break;
    }
    case 282268:
    {
        returnValue = F("Schmauspfad");
        break;
    }
    case 282269:
    {
        returnValue = F("Schmausstr.");
        break;
    }
    case 282270:
    {
        returnValue = F("Schmautzer-Büchl-Weg");
        break;
    }
    case 282271:
    {
        returnValue = F("Schmauweg");
        break;
    }
    case 282272:
    {
        returnValue = F("Schmauß");
        break;
    }
    case 282273:
    {
        returnValue = F("Schmaxbruch");
        break;
    }
    case 282274:
    {
        returnValue = F("Schmechtener Str.");
        break;
    }
    case 282275:
    {
        returnValue = F("Schmechtener Weg");
        break;
    }
    case 282276:
    {
        returnValue = F("Schmechtingstr.");
        break;
    }
    case 282277:
    {
        returnValue = F("Schmedbarg");
        break;
    }
    case 282278:
    {
        returnValue = F("Schmeddersweg");
        break;
    }
    case 282279:
    {
        returnValue = F("Schmeddeweg");
        break;
    }
    case 282280:
    {
        returnValue = F("Schmeddinghoffstr.");
        break;
    }
    case 282281:
    {
        returnValue = F("Schmeddinghove");
        break;
    }
    case 282282:
    {
        returnValue = F("Schmeddingstr.");
        break;
    }
    case 282283:
    {
        returnValue = F("Schmede Breen");
        break;
    }
    case 282284:
    {
        returnValue = F("Schmedebyer Str.");
        break;
    }
    case 282285:
    {
        returnValue = F("Schmedehausen-Domhof");
        break;
    }
    case 282286:
    {
        returnValue = F("Schmedehausener Str.");
        break;
    }
    case 282287:
    {
        returnValue = F("Schmedekamp");
        break;
    }
    case 282288:
    {
        returnValue = F("Schmedekenstr.");
        break;
    }
    case 282289:
    {
        returnValue = F("Schmedenstedter Str.");
        break;
    }
    case 282290:
    {
        returnValue = F("Schmedenstedter Weg");
        break;
    }
    case 282291:
    {
        returnValue = F("Schmeder Weg");
        break;
    }
    case 282292:
    {
        returnValue = F("Schmedererstr.");
        break;
    }
    case 282293:
    {
        returnValue = F("Schmedes Damm");
        break;
    }
    case 282294:
    {
        returnValue = F("Schmedeshop");
        break;
    }
    case 282295:
    {
        returnValue = F("Schmedeskamp");
        break;
    }
    case 282296:
    {
        returnValue = F("Schmedesstr.");
        break;
    }
    case 282297:
    {
        returnValue = F("Schmedeswurth");
        break;
    }
    case 282298:
    {
        returnValue = F("Schmedeswurtherwesterdeich");
        break;
    }
    case 282299:
    {
        returnValue = F("Schmedisser Str.");
        break;
    }
    case 282300:
    {
        returnValue = F("Schmedtjestr.");
        break;
    }
    case 282301:
    {
        returnValue = F("Schmeebarg");
        break;
    }
    case 282302:
    {
        returnValue = F("Schmeedenbarg");
        break;
    }
    case 282303:
    {
        returnValue = F("Schmeedstraat");
        break;
    }
    case 282304:
    {
        returnValue = F("Schmeedweg");
        break;
    }
    case 282305:
    {
        returnValue = F("Schmeelkestr.");
        break;
    }
    case 282306:
    {
        returnValue = F("Schmeeredder");
        break;
    }
    case 282307:
    {
        returnValue = F("Schmeerhörn");
        break;
    }
    case 282308:
    {
        returnValue = F("Schmeerplatzweg");
        break;
    }
    case 282309:
    {
        returnValue = F("Schmeerstr.");
        break;
    }
    case 282310:
    {
        returnValue = F("Schmeerweken");
        break;
    }
    case 282311:
    {
        returnValue = F("Schmeheimer Str.");
        break;
    }
    case 282312:
    {
        returnValue = F("Schmehläckerstr.");
        break;
    }
    case 282313:
    {
        returnValue = F("Schmeidelgäßchen");
        break;
    }
    case 282314:
    {
        returnValue = F("Schmeienstr.");
        break;
    }
    case 282315:
    {
        returnValue = F("Schmeientalstr.");
        break;
    }
    case 282316:
    {
        returnValue = F("Schmeienweg");
        break;
    }
    case 282317:
    {
        returnValue = F("Schmeier Str.");
        break;
    }
    case 282318:
    {
        returnValue = F("Schmeierpfad");
        break;
    }
    case 282319:
    {
        returnValue = F("Schmeilweg");
        break;
    }
    case 282320:
    {
        returnValue = F("Schmeiserfeldstr.");
        break;
    }
    case 282321:
    {
        returnValue = F("Schmeißerstr.");
        break;
    }
    case 282322:
    {
        returnValue = F("Schmelchenberg");
        break;
    }
    case 282323:
    {
        returnValue = F("Schmelendriß");
        break;
    }
    case 282324:
    {
        returnValue = F("Schmelenheide");
        break;
    }
    case 282325:
    {
        returnValue = F("Schmelingstr.");
        break;
    }
    case 282326:
    {
        returnValue = F("Schmelitz");
        break;
    }
    case 282327:
    {
        returnValue = F("Schmellenberg");
        break;
    }
    case 282328:
    {
        returnValue = F("Schmellenbruch Schneise");
        break;
    }
    case 282329:
    {
        returnValue = F("Schmellengäßle");
        break;
    }
    case 282330:
    {
        returnValue = F("Schmellenhauallee");
        break;
    }
    case 282331:
    {
        returnValue = F("Schmellenhöfer Str.");
        break;
    }
    case 282332:
    {
        returnValue = F("Schmellenweg");
        break;
    }
    case 282333:
    {
        returnValue = F("Schmellerstr.");
        break;
    }
    case 282334:
    {
        returnValue = F("Schmellerweg");
        break;
    }
    case 282335:
    {
        returnValue = F("Schmelling");
        break;
    }
    case 282336:
    {
        returnValue = F("Schmellnricht");
        break;
    }
    case 282337:
    {
        returnValue = F("Schmellwitzer Chaussee");
        break;
    }
    case 282338:
    {
        returnValue = F("Schmellwitzer Platz");
        break;
    }
    case 282339:
    {
        returnValue = F("Schmellwitzer Schulstr.");
        break;
    }
    case 282340:
    {
        returnValue = F("Schmellwitzer Str.");
        break;
    }
    case 282341:
    {
        returnValue = F("Schmellwitzer Weg");
        break;
    }
    case 282342:
    {
        returnValue = F("Schmelten-Heide");
        break;
    }
    case 282343:
    {
        returnValue = F("Schmelterfeld");
        break;
    }
    case 282344:
    {
        returnValue = F("Schmeltings Wiese");
        break;
    }
    case 282345:
    {
        returnValue = F("Schmeltzlstr.");
        break;
    }
    case 282346:
    {
        returnValue = F("Schmelz");
        break;
    }
    case 282347:
    {
        returnValue = F("Schmelzberg");
        break;
    }
    case 282348:
    {
        returnValue = F("Schmelzbergstr.");
        break;
    }
    case 282349:
    {
        returnValue = F("Schmelzdobel");
        break;
    }
    case 282350:
    {
        returnValue = F("Schmelzdobelweg");
        break;
    }
    case 282351:
    {
        returnValue = F("Schmelze");
        break;
    }
    case 282352:
    {
        returnValue = F("Schmelzegasse");
        break;
    }
    case 282353:
    {
        returnValue = F("Schmelzeisenweg");
        break;
    }
    case 282354:
    {
        returnValue = F("Schmelzenhof");
        break;
    }
    case 282355:
    {
        returnValue = F("Schmelzer Str.");
        break;
    }
    case 282356:
    {
        returnValue = F("Schmelzer Weg");
        break;
    }
    case 282357:
    {
        returnValue = F("Schmelzergang");
        break;
    }
    case 282358:
    {
        returnValue = F("Schmelzerpfad");
        break;
    }
    case 282359:
    {
        returnValue = F("Schmelzerstr.");
        break;
    }
    case 282360:
    {
        returnValue = F("Schmelzertalstr.");
        break;
    }
    case 282361:
    {
        returnValue = F("Schmelzertor");
        break;
    }
    case 282362:
    {
        returnValue = F("Schmelzerweg");
        break;
    }
    case 282363:
    {
        returnValue = F("Schmelzestr.");
        break;
    }
    case 282364:
    {
        returnValue = F("Schmelzeweg");
        break;
    }
    case 282365:
    {
        returnValue = F("Schmelzhöfestr.");
        break;
    }
    case 282366:
    {
        returnValue = F("Schmelzhütte");
        break;
    }
    case 282367:
    {
        returnValue = F("Schmelzhüttenstr.");
        break;
    }
    case 282368:
    {
        returnValue = F("Schmelzhüttenweg");
        break;
    }
    case 282369:
    {
        returnValue = F("Schmelzler Str.");
        break;
    }
    case 282370:
    {
        returnValue = F("Schmelzlesmühle");
        break;
    }
    case 282371:
    {
        returnValue = F("Schmelzlingstal");
        break;
    }
    case 282372:
    {
        returnValue = F("Schmelzmühle");
        break;
    }
    case 282373:
    {
        returnValue = F("Schmelzstr.");
        break;
    }
    case 282374:
    {
        returnValue = F("Schmelztalstr.");
        break;
    }
    case 282375:
    {
        returnValue = F("Schmelzweg");
        break;
    }
    case 282376:
    {
        returnValue = F("Schmerachaue");
        break;
    }
    case 282377:
    {
        returnValue = F("Schmerachring");
        break;
    }
    case 282378:
    {
        returnValue = F("Schmerachstr.");
        break;
    }
    case 282379:
    {
        returnValue = F("Schmerbach");
        break;
    }
    case 282380:
    {
        returnValue = F("Schmerbacher Str.");
        break;
    }
    case 282381:
    {
        returnValue = F("Schmerbacher Weg");
        break;
    }
    case 282382:
    {
        returnValue = F("Schmerbachgrund");
        break;
    }
    case 282383:
    {
        returnValue = F("Schmerbachhangweg");
        break;
    }
    case 282384:
    {
        returnValue = F("Schmerbachstr.");
        break;
    }
    case 282385:
    {
        returnValue = F("Schmerbachtalweg");
        break;
    }
    case 282386:
    {
        returnValue = F("Schmerbachweg");
        break;
    }
    case 282387:
    {
        returnValue = F("Schmerber Weg");
        break;
    }
    case 282388:
    {
        returnValue = F("Schmerberger Allee");
        break;
    }
    case 282389:
    {
        returnValue = F("Schmerberger Str.");
        break;
    }
    case 282390:
    {
        returnValue = F("Schmerberger Weg");
        break;
    }
    case 282391:
    {
        returnValue = F("Schmerberggestell");
        break;
    }
    case 282392:
    {
        returnValue = F("Schmerbühl");
        break;
    }
    case 282393:
    {
        returnValue = F("Schmerfelder Str.");
        break;
    }
    case 282394:
    {
        returnValue = F("Schmerfeldstr.");
        break;
    }
    case 282395:
    {
        returnValue = F("Schmergower Str.");
        break;
    }
    case 282396:
    {
        returnValue = F("Schmerhof");
        break;
    }
    case 282397:
    {
        returnValue = F("Schmerhäldenweg");
        break;
    }
    case 282398:
    {
        returnValue = F("Schmerkamp");
        break;
    }
    case 282399:
    {
        returnValue = F("Schmerkendorfer Weg");
        break;
    }
    case 282400:
    {
        returnValue = F("Schmerlaibstr.");
        break;
    }
    case 282401:
    {
        returnValue = F("Schmerldorfer Str.");
        break;
    }
    case 282402:
    {
        returnValue = F("Schmerldorfer Weg");
        break;
    }
    case 282403:
    {
        returnValue = F("Schmerlecker Dorf");
        break;
    }
    case 282404:
    {
        returnValue = F("Schmerlecker Str.");
        break;
    }
    case 282405:
    {
        returnValue = F("Schmerlenbacher Str.");
        break;
    }
    case 282406:
    {
        returnValue = F("Schmerlenweg");
        break;
    }
    case 282407:
    {
        returnValue = F("Schmerlerstr.");
        break;
    }
    case 282408:
    {
        returnValue = F("Schmerlingstr.");
        break;
    }
    case 282409:
    {
        returnValue = F("Schmermannsweg");
        break;
    }
    case 282410:
    {
        returnValue = F("Schmersahlstr.");
        break;
    }
    case 282411:
    {
        returnValue = F("Schmersals Weg");
        break;
    }
    case 282412:
    {
        returnValue = F("Schmerschlaghangweg");
        break;
    }
    case 282413:
    {
        returnValue = F("Schmerschlaghöhenweg");
        break;
    }
    case 282414:
    {
        returnValue = F("Schmerschlagteichweg");
        break;
    }
    case 282415:
    {
        returnValue = F("Schmersteig");
        break;
    }
    case 282416:
    {
        returnValue = F("Schmerstr.");
        break;
    }
    case 282417:
    {
        returnValue = F("Schmerweg");
        break;
    }
    case 282418:
    {
        returnValue = F("Schmerwitz");
        break;
    }
    case 282419:
    {
        returnValue = F("Schmerwitzer Str.");
        break;
    }
    case 282420:
    {
        returnValue = F("Schmerzer Weg");
        break;
    }
    case 282421:
    {
        returnValue = F("Schmerzker Ring");
        break;
    }
    case 282422:
    {
        returnValue = F("Schmerzmoosstr.");
        break;
    }
    case 282423:
    {
        returnValue = F("Schmessau");
        break;
    }
    case 282424:
    {
        returnValue = F("Schmetsweg");
        break;
    }
    case 282425:
    {
        returnValue = F("Schmettaustr.");
        break;
    }
    case 282426:
    {
        returnValue = F("Schmette Gasse");
        break;
    }
    case 282427:
    {
        returnValue = F("Schmettererstr.");
        break;
    }
    case 282428:
    {
        returnValue = F("Schmettergasse");
        break;
    }
    case 282429:
    {
        returnValue = F("Schmetterling");
        break;
    }
    case 282430:
    {
        returnValue = F("Schmetterlings- und Naturlehrgarten");
        break;
    }
    case 282431:
    {
        returnValue = F("Schmetterlingsallee");
        break;
    }
    case 282432:
    {
        returnValue = F("Schmetterlingsgarten");
        break;
    }
    case 282433:
    {
        returnValue = F("Schmetterlingspark");
        break;
    }
    case 282434:
    {
        returnValue = F("Schmetterlingspfad");
        break;
    }
    case 282435:
    {
        returnValue = F("Schmetterlingsplatz");
        break;
    }
    case 282436:
    {
        returnValue = F("Schmetterlingsring");
        break;
    }
    case 282437:
    {
        returnValue = F("Schmetterlingstr.");
        break;
    }
    case 282438:
    {
        returnValue = F("Schmetterlingsweg");
        break;
    }
    case 282439:
    {
        returnValue = F("Schmetterlingweg");
        break;
    }
    case 282440:
    {
        returnValue = F("Schmetzberg");
        break;
    }
    case 282441:
    {
        returnValue = F("Schmetzdorfer Heerstr.");
        break;
    }
    case 282442:
    {
        returnValue = F("Schmetzergasse");
        break;
    }
    case 282443:
    {
        returnValue = F("Schmezerstr.");
        break;
    }
    case 282444:
    {
        returnValue = F("Schmickertstr.");
        break;
    }
    case 282445:
    {
        returnValue = F("Schmid-Hiwwel");
        break;
    }
    case 282446:
    {
        returnValue = F("Schmid-Wirt-Weg");
        break;
    }
    case 282447:
    {
        returnValue = F("Schmidbachstr.");
        break;
    }
    case 282448:
    {
        returnValue = F("Schmidbarg");
        break;
    }
    case 282449:
    {
        returnValue = F("Schmidbauergasse");
        break;
    }
    case 282450:
    {
        returnValue = F("Schmidbauernweg");
        break;
    }
    case 282451:
    {
        returnValue = F("Schmidbauerstr.");
        break;
    }
    case 282452:
    {
        returnValue = F("Schmidbauerweg");
        break;
    }
    case 282453:
    {
        returnValue = F("Schmidberg");
        break;
    }
    case 282454:
    {
        returnValue = F("Schmidbergstr.");
        break;
    }
    case 282455:
    {
        returnValue = F("Schmidbergweg");
        break;
    }
    case 282456:
    {
        returnValue = F("Schmidbleicherstr.");
        break;
    }
    case 282457:
    {
        returnValue = F("Schmidbügerlweg");
        break;
    }
    case 282458:
    {
        returnValue = F("Schmidbühl");
        break;
    }
    case 282459:
    {
        returnValue = F("Schmidener Str.");
        break;
    }
    case 282460:
    {
        returnValue = F("Schmidener Weg");
        break;
    }
    case 282461:
    {
        returnValue = F("Schmidetrift");
        break;
    }
    case 282462:
    {
        returnValue = F("Schmidfeld");
        break;
    }
    case 282463:
    {
        returnValue = F("Schmidfeldstr.");
        break;
    }
    case 282464:
    {
        returnValue = F("Schmidfeldweg");
        break;
    }
    case 282465:
    {
        returnValue = F("Schmidgadener Str.");
        break;
    }
    case 282466:
    {
        returnValue = F("Schmidgallstr.");
        break;
    }
    case 282467:
    {
        returnValue = F("Schmidgarten");
        break;
    }
    case 282468:
    {
        returnValue = F("Schmidgasse");
        break;
    }
    case 282469:
    {
        returnValue = F("Schmidgassl");
        break;
    }
    case 282470:
    {
        returnValue = F("Schmidgern");
        break;
    }
    case 282471:
    {
        returnValue = F("Schmidgäßle");
        break;
    }
    case 282472:
    {
        returnValue = F("Schmidham");
        break;
    }
    case 282473:
    {
        returnValue = F("Schmidhamer Dorfstr.");
        break;
    }
    case 282474:
    {
        returnValue = F("Schmidhamer Kapellenberg");
        break;
    }
    case 282475:
    {
        returnValue = F("Schmidhamer Sandgrube");
        break;
    }
    case 282476:
    {
        returnValue = F("Schmidhamer Str.");
        break;
    }
    case 282477:
    {
        returnValue = F("Schmidhammerstr.");
        break;
    }
    case 282478:
    {
        returnValue = F("Schmidhanslweg");
        break;
    }
    case 282479:
    {
        returnValue = F("Schmidhausen");
        break;
    }
    case 282480:
    {
        returnValue = F("Schmidhausener Str.");
        break;
    }
    case 282481:
    {
        returnValue = F("Schmidhofener Str.");
        break;
    }
    case 282482:
    {
        returnValue = F("Schmidhub");
        break;
    }
    case 282483:
    {
        returnValue = F("Schmidhubergasse");
        break;
    }
    case 282484:
    {
        returnValue = F("Schmidhubstr.");
        break;
    }
    case 282485:
    {
        returnValue = F("Schmidhäuslstr.");
        break;
    }
    case 282486:
    {
        returnValue = F("Schmiding");
        break;
    }
    case 282487:
    {
        returnValue = F("Schmidinger Feld");
        break;
    }
    case 282488:
    {
        returnValue = F("Schmidinger Höhe");
        break;
    }
    case 282489:
    {
        returnValue = F("Schmidinger Mitte");
        break;
    }
    case 282490:
    {
        returnValue = F("Schmidinger Str.");
        break;
    }
    case 282491:
    {
        returnValue = F("Schmidkampsweg");
        break;
    }
    case 282492:
    {
        returnValue = F("Schmidkapellenweg");
        break;
    }
    case 282493:
    {
        returnValue = F("Schmidlehen");
        break;
    }
    case 282494:
    {
        returnValue = F("Schmidleitn Weg");
        break;
    }
    case 282495:
    {
        returnValue = F("Schmidlgasse");
        break;
    }
    case 282496:
    {
        returnValue = F("Schmidlichweg");
        break;
    }
    case 282497:
    {
        returnValue = F("Schmidloher Weg");
        break;
    }
    case 282498:
    {
        returnValue = F("Schmidmühlener Str.");
        break;
    }
    case 282499:
    {
        returnValue = F("Schmidpointstr.");
        break;
    }
    case 282500:
    {
        returnValue = F("Schmidsbarg");
        break;
    }
    case 282501:
    {
        returnValue = F("Schmidsberg");
        break;
    }
    case 282502:
    {
        returnValue = F("Schmidschneiderstr.");
        break;
    }
    case 282503:
    {
        returnValue = F("Schmidsfelden");
        break;
    }
    case 282504:
    {
        returnValue = F("Schmidsgasse");
        break;
    }
    case 282505:
    {
        returnValue = F("Schmidsleiten");
        break;
    }
    case 282506:
    {
        returnValue = F("Schmidsreute");
        break;
    }
    case 282507:
    {
        returnValue = F("Schmidstr.");
        break;
    }
    case 282508:
    {
        returnValue = F("Schmidsweg");
        break;
    }
    case 282509:
    {
        returnValue = F("Schmidsöder Weg");
        break;
    }
    case 282510:
    {
        returnValue = F("Schmidt-Bleibtreu-Str.");
        break;
    }
    case 282511:
    {
        returnValue = F("Schmidt-Isserstedt-Weg");
        break;
    }
    case 282512:
    {
        returnValue = F("Schmidt-Reindahl-Str.");
        break;
    }
    case 282513:
    {
        returnValue = F("Schmidt-Rottluff-Allee");
        break;
    }
    case 282514:
    {
        returnValue = F("Schmidt-Rottluff-Park");
        break;
    }
    case 282515:
    {
        returnValue = F("Schmidt-Rottluff-Str.");
        break;
    }
    case 282516:
    {
        returnValue = F("Schmidt-Scholl-Weg");
        break;
    }
    case 282517:
    {
        returnValue = F("Schmidtackerweg");
        break;
    }
    case 282518:
    {
        returnValue = F("Schmidtberg");
        break;
    }
    case 282519:
    {
        returnValue = F("Schmidtbergstr.");
        break;
    }
    case 282520:
    {
        returnValue = F("Schmidtborn");
        break;
    }
    case 282521:
    {
        returnValue = F("Schmidtbornstr.");
        break;
    }
    case 282522:
    {
        returnValue = F("Schmidtbreite");
        break;
    }
    case 282523:
    {
        returnValue = F("Schmidtburger Weg");
        break;
    }
    case 282524:
    {
        returnValue = F("Schmidten");
        break;
    }
    case 282525:
    {
        returnValue = F("Schmidtenberg");
        break;
    }
    case 282526:
    {
        returnValue = F("Schmidtenbühlstr.");
        break;
    }
    case 282527:
    {
        returnValue = F("Schmidtenbühn");
        break;
    }
    case 282528:
    {
        returnValue = F("Schmidtendelle-Bach");
        break;
    }
    case 282529:
    {
        returnValue = F("Schmidtenfeldstr.");
        break;
    }
    case 282530:
    {
        returnValue = F("Schmidtengarten");
        break;
    }
    case 282531:
    {
        returnValue = F("Schmidtengässle");
        break;
    }
    case 282532:
    {
        returnValue = F("Schmidtenhof");
        break;
    }
    case 282533:
    {
        returnValue = F("Schmidtenstr.");
        break;
    }
    case 282534:
    {
        returnValue = F("Schmidtenweg");
        break;
    }
    case 282535:
    {
        returnValue = F("Schmidtenwinkel");
        break;
    }
    case 282536:
    {
        returnValue = F("Schmidter Str.");
        break;
    }
    case 282537:
    {
        returnValue = F("Schmidtestr.");
        break;
    }
    case 282538:
    {
        returnValue = F("Schmidtgasse");
        break;
    }
    case 282539:
    {
        returnValue = F("Schmidthahner Wies");
        break;
    }
    case 282540:
    {
        returnValue = F("Schmidthainsweg");
        break;
    }
    case 282541:
    {
        returnValue = F("Schmidthausen");
        break;
    }
    case 282542:
    {
        returnValue = F("Schmidtheimer Str.");
        break;
    }
    case 282543:
    {
        returnValue = F("Schmidthof");
        break;
    }
    case 282544:
    {
        returnValue = F("Schmidthütte");
        break;
    }
    case 282545:
    {
        returnValue = F("Schmidtkuhlsweg");
        break;
    }
    case 282546:
    {
        returnValue = F("Schmidtlerstr.");
        break;
    }
    case 282547:
    {
        returnValue = F("Schmidtlücke");
        break;
    }
    case 282548:
    {
        returnValue = F("Schmidtmannstr.");
        break;
    }
    case 282549:
    {
        returnValue = F("Schmidtmattenstr.");
        break;
    }
    case 282550:
    {
        returnValue = F("Schmidtmühle");
        break;
    }
    case 282551:
    {
        returnValue = F("Schmidtrainstr.");
        break;
    }
    case 282552:
    {
        returnValue = F("Schmidtring");
        break;
    }
    case 282553:
    {
        returnValue = F("Schmidts Berg");
        break;
    }
    case 282554:
    {
        returnValue = F("Schmidts Gasse");
        break;
    }
    case 282555:
    {
        returnValue = F("Schmidts Hof");
        break;
    }
    case 282556:
    {
        returnValue = F("Schmidts Kiefern");
        break;
    }
    case 282557:
    {
        returnValue = F("Schmidts Kämpe");
        break;
    }
    case 282558:
    {
        returnValue = F("Schmidts Stiche");
        break;
    }
    case 282559:
    {
        returnValue = F("Schmidts Weg");
        break;
    }
    case 282560:
    {
        returnValue = F("Schmidts-Kämpken");
        break;
    }
    case 282561:
    {
        returnValue = F("Schmidts-Lohne");
        break;
    }
    case 282562:
    {
        returnValue = F("Schmidtseifen");
        break;
    }
    case 282563:
    {
        returnValue = F("Schmidtsgasse");
        break;
    }
    case 282564:
    {
        returnValue = F("Schmidtsgraben");
        break;
    }
    case 282565:
    {
        returnValue = F("Schmidtsgrund");
        break;
    }
    case 282566:
    {
        returnValue = F("Schmidtsgäßchen");
        break;
    }
    case 282567:
    {
        returnValue = F("Schmidtshof");
        break;
    }
    case 282568:
    {
        returnValue = F("Schmidtshörn");
        break;
    }
    case 282569:
    {
        returnValue = F("Schmidtskamp");
        break;
    }
    case 282570:
    {
        returnValue = F("Schmidtskotten");
        break;
    }
    case 282571:
    {
        returnValue = F("Schmidtsmeetken");
        break;
    }
    case 282572:
    {
        returnValue = F("Schmidtstr.");
        break;
    }
    case 282573:
    {
        returnValue = F("Schmidtsweg");
        break;
    }
    case 282574:
    {
        returnValue = F("Schmidtswiese");
        break;
    }
    case 282575:
    {
        returnValue = F("Schmidttal");
        break;
    }
    case 282576:
    {
        returnValue = F("Schmidtweg");
        break;
    }
    case 282577:
    {
        returnValue = F("Schmiduzweg");
        break;
    }
    case 282578:
    {
        returnValue = F("Schmidweg");
        break;
    }
    case 282579:
    {
        returnValue = F("Schmidwiese");
        break;
    }
    case 282580:
    {
        returnValue = F("Schmidäckerstr.");
        break;
    }
    case 282581:
    {
        returnValue = F("Schmidäckerweg");
        break;
    }
    case 282582:
    {
        returnValue = F("Schmiebachweg");
        break;
    }
    case 282583:
    {
        returnValue = F("Schmiechastr.");
        break;
    }
    case 282584:
    {
        returnValue = F("Schmiechaweg");
        break;
    }
    case 282585:
    {
        returnValue = F("Schmiechenstr.");
        break;
    }
    case 282586:
    {
        returnValue = F("Schmiechgraben");
        break;
    }
    case 282587:
    {
        returnValue = F("Schmiechstr.");
        break;
    }
    case 282588:
    {
        returnValue = F("Schmiechtal");
        break;
    }
    case 282589:
    {
        returnValue = F("Schmied-Balthes-Str.");
        break;
    }
    case 282590:
    {
        returnValue = F("Schmied-Karl-Weg");
        break;
    }
    case 282591:
    {
        returnValue = F("Schmied-Kochel-Weg");
        break;
    }
    case 282592:
    {
        returnValue = F("Schmied-Ring");
        break;
    }
    case 282593:
    {
        returnValue = F("Schmied-Streit-Weg");
        break;
    }
    case 282594:
    {
        returnValue = F("Schmiedacker");
        break;
    }
    case 282595:
    {
        returnValue = F("Schmiedackerstr.");
        break;
    }
    case 282596:
    {
        returnValue = F("Schmiedackerweg");
        break;
    }
    case 282597:
    {
        returnValue = F("Schmiedanger");
        break;
    }
    case 282598:
    {
        returnValue = F("Schmiedauer Weg");
        break;
    }
    case 282599:
    {
        returnValue = F("Schmiedbachstr.");
        break;
    }
    case 282600:
    {
        returnValue = F("Schmiedberg");
        break;
    }
    case 282601:
    {
        returnValue = F("Schmiedbergl");
        break;
    }
    case 282602:
    {
        returnValue = F("Schmiedbergstr.");
        break;
    }
    case 282603:
    {
        returnValue = F("Schmiedbergweg");
        break;
    }
    case 282604:
    {
        returnValue = F("Schmiedbogen");
        break;
    }
    case 282605:
    {
        returnValue = F("Schmiedbruecke");
        break;
    }
    case 282606:
    {
        returnValue = F("Schmiedbuck");
        break;
    }
    case 282607:
    {
        returnValue = F("Schmiedbühl");
        break;
    }
    case 282608:
    {
        returnValue = F("Schmiede");
        break;
    }
    case 282609:
    {
        returnValue = F("Schmiedeacker");
        break;
    }
    case 282610:
    {
        returnValue = F("Schmiedeackerstr.");
        break;
    }
    case 282611:
    {
        returnValue = F("Schmiedebach");
        break;
    }
    case 282612:
    {
        returnValue = F("Schmiedebachstr.");
        break;
    }
    case 282613:
    {
        returnValue = F("Schmiedebachweg");
        break;
    }
    case 282614:
    {
        returnValue = F("Schmiedeberg");
        break;
    }
    case 282615:
    {
        returnValue = F("Schmiedeberge");
        break;
    }
    case 282616:
    {
        returnValue = F("Schmiedeberger Markt");
        break;
    }
    case 282617:
    {
        returnValue = F("Schmiedeberger Str.");
        break;
    }
    case 282618:
    {
        returnValue = F("Schmiedeberger Weg");
        break;
    }
    case 282619:
    {
        returnValue = F("Schmiedebergstr.");
        break;
    }
    case 282620:
    {
        returnValue = F("Schmiedebergweg");
        break;
    }
    case 282621:
    {
        returnValue = F("Schmiedeborn");
        break;
    }
    case 282622:
    {
        returnValue = F("Schmiedebrake");
        break;
    }
    case 282623:
    {
        returnValue = F("Schmiedebreite");
        break;
    }
    case 282624:
    {
        returnValue = F("Schmiedebrink");
        break;
    }
    case 282625:
    {
        returnValue = F("Schmiedebrunnenstr.");
        break;
    }
    case 282626:
    {
        returnValue = F("Schmiedebrück");
        break;
    }
    case 282627:
    {
        returnValue = F("Schmiedebrücke");
        break;
    }
    case 282628:
    {
        returnValue = F("Schmiedebusch");
        break;
    }
    case 282629:
    {
        returnValue = F("Schmiedebörnel Weg");
        break;
    }
    case 282630:
    {
        returnValue = F("Schmiedebühlstr.");
        break;
    }
    case 282631:
    {
        returnValue = F("Schmiedeck");
        break;
    }
    case 282632:
    {
        returnValue = F("Schmiedecke");
        break;
    }
    case 282633:
    {
        returnValue = F("Schmiededamm");
        break;
    }
    case 282634:
    {
        returnValue = F("Schmiedeecke");
        break;
    }
    case 282635:
    {
        returnValue = F("Schmiedefelder Str.");
        break;
    }
    case 282636:
    {
        returnValue = F("Schmiedefeldweg");
        break;
    }
    case 282637:
    {
        returnValue = F("Schmiedegang");
        break;
    }
    case 282638:
    {
        returnValue = F("Schmiedegarten");
        break;
    }
    case 282639:
    {
        returnValue = F("Schmiedegasse");
        break;
    }
    case 282640:
    {
        returnValue = F("Schmiedegassenweg");
        break;
    }
    case 282641:
    {
        returnValue = F("Schmiedegraben");
        break;
    }
    case 282642:
    {
        returnValue = F("Schmiedegrund");
        break;
    }
    case 282643:
    {
        returnValue = F("Schmiedegärten");
        break;
    }
    case 282644:
    {
        returnValue = F("Schmiedegässchen");
        break;
    }
    case 282645:
    {
        returnValue = F("Schmiedegässle");
        break;
    }
    case 282646:
    {
        returnValue = F("Schmiedegäßchen");
        break;
    }
    case 282647:
    {
        returnValue = F("Schmiedegäßje");
        break;
    }
    case 282648:
    {
        returnValue = F("Schmiedegäßle");
        break;
    }
    case 282649:
    {
        returnValue = F("Schmiedehammer");
        break;
    }
    case 282650:
    {
        returnValue = F("Schmiedehof");
        break;
    }
    case 282651:
    {
        returnValue = F("Schmiedehoff");
        break;
    }
    case 282652:
    {
        returnValue = F("Schmiedehäuser Str.");
        break;
    }
    case 282653:
    {
        returnValue = F("Schmiedekamp");
        break;
    }
    case 282654:
    {
        returnValue = F("Schmiedekampstr.");
        break;
    }
    case 282655:
    {
        returnValue = F("Schmiedekate");
        break;
    }
    case 282656:
    {
        returnValue = F("Schmiedeklint");
        break;
    }
    case 282657:
    {
        returnValue = F("Schmiedekoppel");
        break;
    }
    case 282658:
    {
        returnValue = F("Schmiedekoppelweg");
        break;
    }
    case 282659:
    {
        returnValue = F("Schmiedekrugstr.");
        break;
    }
    case 282660:
    {
        returnValue = F("Schmiedeköpfchenweg");
        break;
    }
    case 282661:
    {
        returnValue = F("Schmiedelberger Str.");
        break;
    }
    case 282662:
    {
        returnValue = F("Schmiedelstr.");
        break;
    }
    case 282663:
    {
        returnValue = F("Schmiedelsweg");
        break;
    }
    case 282664:
    {
        returnValue = F("Schmiedematt");
        break;
    }
    case 282665:
    {
        returnValue = F("Schmieden");
        break;
    }
    case 282666:
    {
        returnValue = F("Schmiedenfelde");
        break;
    }
    case 282667:
    {
        returnValue = F("Schmiedengasse");
        break;
    }
    case 282668:
    {
        returnValue = F("Schmiedenhalde");
        break;
    }
    case 282669:
    {
        returnValue = F("Schmiedenhof");
        break;
    }
    case 282670:
    {
        returnValue = F("Schmiedenhügel");
        break;
    }
    case 282671:
    {
        returnValue = F("Schmiedenmoorweg");
        break;
    }
    case 282672:
    {
        returnValue = F("Schmiedenstr.");
        break;
    }
    case 282673:
    {
        returnValue = F("Schmiedentalstr.");
        break;
    }
    case 282674:
    {
        returnValue = F("Schmiedenweg");
        break;
    }
    case 282675:
    {
        returnValue = F("Schmiedepfad");
        break;
    }
    case 282676:
    {
        returnValue = F("Schmiedeplatz");
        break;
    }
    case 282677:
    {
        returnValue = F("Schmiederain");
        break;
    }
    case 282678:
    {
        returnValue = F("Schmiederainweg");
        break;
    }
    case 282679:
    {
        returnValue = F("Schmiederasen");
        break;
    }
    case 282680:
    {
        returnValue = F("Schmiederedder");
        break;
    }
    case 282681:
    {
        returnValue = F("Schmiedergässle");
        break;
    }
    case 282682:
    {
        returnValue = F("Schmiedering");
        break;
    }
    case 282683:
    {
        returnValue = F("Schmiederstr.");
        break;
    }
    case 282684:
    {
        returnValue = F("Schmiederweg");
        break;
    }
    case 282685:
    {
        returnValue = F("Schmiedes Hof");
        break;
    }
    case 282686:
    {
        returnValue = F("Schmiedesberg");
        break;
    }
    case 282687:
    {
        returnValue = F("Schmiedesheide");
        break;
    }
    case 282688:
    {
        returnValue = F("Schmiedestege");
        break;
    }
    case 282689:
    {
        returnValue = F("Schmiedesteige");
        break;
    }
    case 282690:
    {
        returnValue = F("Schmiedestieg");
        break;
    }
    case 282691:
    {
        returnValue = F("Schmiedestr.");
        break;
    }
    case 282692:
    {
        returnValue = F("Schmiedestrang");
        break;
    }
    case 282693:
    {
        returnValue = F("Schmiedeteich");
        break;
    }
    case 282694:
    {
        returnValue = F("Schmiedeteichgasse");
        break;
    }
    case 282695:
    {
        returnValue = F("Schmiedetor");
        break;
    }
    case 282696:
    {
        returnValue = F("Schmiedetorstr.");
        break;
    }
    case 282697:
    {
        returnValue = F("Schmiedetwiete");
        break;
    }
    case 282698:
    {
        returnValue = F("Schmiedewalder Str.");
        break;
    }
    case 282699:
    {
        returnValue = F("Schmiedeweg");
        break;
    }
    case 282700:
    {
        returnValue = F("Schmiedewegle");
        break;
    }
    case 282701:
    {
        returnValue = F("Schmiedewiese");
        break;
    }
    case 282702:
    {
        returnValue = F("Schmiedewiesen");
        break;
    }
    case 282703:
    {
        returnValue = F("Schmiedewiesenstr.");
        break;
    }
    case 282704:
    {
        returnValue = F("Schmiedewinkel");
        break;
    }
    case 282705:
    {
        returnValue = F("Schmiedewisch");
        break;
    }
    case 282706:
    {
        returnValue = F("Schmiedewäldchen");
        break;
    }
    case 282707:
    {
        returnValue = F("Schmiedeäcker");
        break;
    }
    case 282708:
    {
        returnValue = F("Schmiedeäckerweg");
        break;
    }
    case 282709:
    {
        returnValue = F("Schmiedfeld");
        break;
    }
    case 282710:
    {
        returnValue = F("Schmiedfeldhöhe");
        break;
    }
    case 282711:
    {
        returnValue = F("Schmiedfeldstr.");
        break;
    }
    case 282712:
    {
        returnValue = F("Schmiedfeldweg");
        break;
    }
    case 282713:
    {
        returnValue = F("Schmiedgasse");
        break;
    }
    case 282714:
    {
        returnValue = F("Schmiedgassl");
        break;
    }
    case 282715:
    {
        returnValue = F("Schmiedgaß");
        break;
    }
    case 282716:
    {
        returnValue = F("Schmiedgraben");
        break;
    }
    case 282717:
    {
        returnValue = F("Schmiedgrabenstr.");
        break;
    }
    case 282718:
    {
        returnValue = F("Schmiedgrund");
        break;
    }
    case 282719:
    {
        returnValue = F("Schmiedgässchen");
        break;
    }
    case 282720:
    {
        returnValue = F("Schmiedgässle");
        break;
    }
    case 282721:
    {
        returnValue = F("Schmiedgäßchen");
        break;
    }
    case 282722:
    {
        returnValue = F("Schmiedgäßle");
        break;
    }
    case 282723:
    {
        returnValue = F("Schmiedhang");
        break;
    }
    case 282724:
    {
        returnValue = F("Schmiedhauser Str.");
        break;
    }
    case 282725:
    {
        returnValue = F("Schmiedhauserweg");
        break;
    }
    case 282726:
    {
        returnValue = F("Schmiedheck");
        break;
    }
    case 282727:
    {
        returnValue = F("Schmiedhof");
        break;
    }
    case 282728:
    {
        returnValue = F("Schmiedhöhe");
        break;
    }
    case 282729:
    {
        returnValue = F("Schmiedinger Str.");
        break;
    }
    case 282730:
    {
        returnValue = F("Schmiedjesweg");
        break;
    }
    case 282731:
    {
        returnValue = F("Schmiedleiten");
        break;
    }
    case 282732:
    {
        returnValue = F("Schmiedlweg");
        break;
    }
    case 282733:
    {
        returnValue = F("Schmiedorf");
        break;
    }
    case 282734:
    {
        returnValue = F("Schmiedorfer Str.");
        break;
    }
    case 282735:
    {
        returnValue = F("Schmiedpeunt");
        break;
    }
    case 282736:
    {
        returnValue = F("Schmiedplatz");
        break;
    }
    case 282737:
    {
        returnValue = F("Schmiedpoint");
        break;
    }
    case 282738:
    {
        returnValue = F("Schmiedrangen");
        break;
    }
    case 282739:
    {
        returnValue = F("Schmiedsbachweg");
        break;
    }
    case 282740:
    {
        returnValue = F("Schmiedsberg");
        break;
    }
    case 282741:
    {
        returnValue = F("Schmiedsberg-Ring");
        break;
    }
    case 282742:
    {
        returnValue = F("Schmiedsberger Weg");
        break;
    }
    case 282743:
    {
        returnValue = F("Schmiedsbergweg");
        break;
    }
    case 282744:
    {
        returnValue = F("Schmiedsbuck");
        break;
    }
    case 282745:
    {
        returnValue = F("Schmiedschlagweg");
        break;
    }
    case 282746:
    {
        returnValue = F("Schmiedsecke");
        break;
    }
    case 282747:
    {
        returnValue = F("Schmiedsfeld");
        break;
    }
    case 282748:
    {
        returnValue = F("Schmiedsgang");
        break;
    }
    case 282749:
    {
        returnValue = F("Schmiedsgasse");
        break;
    }
    case 282750:
    {
        returnValue = F("Schmiedsgewanne");
        break;
    }
    case 282751:
    {
        returnValue = F("Schmiedsgraben");
        break;
    }
    case 282752:
    {
        returnValue = F("Schmiedsgrund");
        break;
    }
    case 282753:
    {
        returnValue = F("Schmiedsgässle");
        break;
    }
    case 282754:
    {
        returnValue = F("Schmiedsgäßle");
        break;
    }
    case 282755:
    {
        returnValue = F("Schmiedsgäßlein");
        break;
    }
    case 282756:
    {
        returnValue = F("Schmiedshalde");
        break;
    }
    case 282757:
    {
        returnValue = F("Schmiedshohle");
        break;
    }
    case 282758:
    {
        returnValue = F("Schmiedshöhe");
        break;
    }
    case 282759:
    {
        returnValue = F("Schmiedshügel");
        break;
    }
    case 282760:
    {
        returnValue = F("Schmiedskamp");
        break;
    }
    case 282761:
    {
        returnValue = F("Schmiedsrangen");
        break;
    }
    case 282762:
    {
        returnValue = F("Schmiedsteig");
        break;
    }
    case 282763:
    {
        returnValue = F("Schmiedsteige");
        break;
    }
    case 282764:
    {
        returnValue = F("Schmiedstor");
        break;
    }
    case 282765:
    {
        returnValue = F("Schmiedstr.");
        break;
    }
    case 282766:
    {
        returnValue = F("Schmiedstunken");
        break;
    }
    case 282767:
    {
        returnValue = F("Schmiedsweg");
        break;
    }
    case 282768:
    {
        returnValue = F("Schmiedtorstr.");
        break;
    }
    case 282769:
    {
        returnValue = F("Schmiedweg");
        break;
    }
    case 282770:
    {
        returnValue = F("Schmiedwiesenstr.");
        break;
    }
    case 282771:
    {
        returnValue = F("Schmiedwiesenweg");
        break;
    }
    case 282772:
    {
        returnValue = F("Schmiedäcker");
        break;
    }
    case 282773:
    {
        returnValue = F("Schmiedäckerstr.");
        break;
    }
    case 282774:
    {
        returnValue = F("Schmieheimer Str.");
        break;
    }
    case 282775:
    {
        returnValue = F("Schmieher Str.");
        break;
    }
    case 282776:
    {
        returnValue = F("Schmieheweg");
        break;
    }
    case 282777:
    {
        returnValue = F("Schmielenbreite");
        break;
    }
    case 282778:
    {
        returnValue = F("Schmielenbreiter Weg");
        break;
    }
    case 282779:
    {
        returnValue = F("Schmielenfeldstr.");
        break;
    }
    case 282780:
    {
        returnValue = F("Schmielenkamp");
        break;
    }
    case 282781:
    {
        returnValue = F("Schmielenkampweg");
        break;
    }
    case 282782:
    {
        returnValue = F("Schmielenweg");
        break;
    }
    case 282783:
    {
        returnValue = F("Schmiemketal");
        break;
    }
    case 282784:
    {
        returnValue = F("Schmierdorfer-Str.");
        break;
    }
    case 282785:
    {
        returnValue = F("Schmiererweg");
        break;
    }
    case 282786:
    {
        returnValue = F("Schmiergasse");
        break;
    }
    case 282787:
    {
        returnValue = F("Schmiergässchen");
        break;
    }
    case 282788:
    {
        returnValue = F("Schmierofenweg");
        break;
    }
    case 282789:
    {
        returnValue = F("Schmierseifenweg");
        break;
    }
    case 282790:
    {
        returnValue = F("Schmierwaldweg");
        break;
    }
    case 282791:
    {
        returnValue = F("Schmiesheide");
        break;
    }
    case 282792:
    {
        returnValue = F("Schmiesweg");
        break;
    }
    case 282793:
    {
        returnValue = F("Schmietkower Dorfstr.");
        break;
    }
    case 282794:
    {
        returnValue = F("Schmietränkweg");
        break;
    }
    case 282795:
    {
        returnValue = F("Schmihenweg");
        break;
    }
    case 282796:
    {
        returnValue = F("Schmihlstr.");
        break;
    }
    case 282797:
    {
        returnValue = F("Schmilauer Str.");
        break;
    }
    case 282798:
    {
        returnValue = F("Schmilinskystr.");
        break;
    }
    case 282799:
    {
        returnValue = F("Schmilka");
        break;
    }
    case 282800:
    {
        returnValue = F("Schmilkendorfer Str.");
        break;
    }
    case 282801:
    {
        returnValue = F("Schmillenbruchschneise");
        break;
    }
    case 282802:
    {
        returnValue = F("Schmillenburg");
        break;
    }
    case 282803:
    {
        returnValue = F("Schmillengäßchen");
        break;
    }
    case 282804:
    {
        returnValue = F("Schmillinghäuser Str.");
        break;
    }
    case 282805:
    {
        returnValue = F("Schmillinghäuser Weg");
        break;
    }
    case 282806:
    {
        returnValue = F("Schminckestr.");
        break;
    }
    case 282807:
    {
        returnValue = F("Schmirbelstr.");
        break;
    }
    case 282808:
    {
        returnValue = F("Schmissgasse");
        break;
    }
    case 282809:
    {
        returnValue = F("Schmithofer Str.");
        break;
    }
    case 282810:
    {
        returnValue = F("Schmithofer Weg");
        break;
    }
    case 282811:
    {
        returnValue = F("Schmithuysenweg");
        break;
    }
    case 282812:
    {
        returnValue = F("Schmitsgrund");
        break;
    }
    case 282813:
    {
        returnValue = F("Schmitshauser-Höhe");
        break;
    }
    case 282814:
    {
        returnValue = F("Schmitskamp");
        break;
    }
    case 282815:
    {
        returnValue = F("Schmitt-Horr-Str.");
        break;
    }
    case 282816:
    {
        returnValue = F("Schmittbachstr.");
        break;
    }
    case 282817:
    {
        returnValue = F("Schmittbachweg");
        break;
    }
    case 282818:
    {
        returnValue = F("Schmittbergweg");
        break;
    }
    case 282819:
    {
        returnValue = F("Schmittbrache");
        break;
    }
    case 282820:
    {
        returnValue = F("Schmittburgstr.");
        break;
    }
    case 282821:
    {
        returnValue = F("Schmittdielstr.");
        break;
    }
    case 282822:
    {
        returnValue = F("Schmitteborn");
        break;
    }
    case 282823:
    {
        returnValue = F("Schmittegasse");
        break;
    }
    case 282824:
    {
        returnValue = F("Schmittegrundweg");
        break;
    }
    case 282825:
    {
        returnValue = F("Schmittehofstr.");
        break;
    }
    case 282826:
    {
        returnValue = F("Schmittekamp");
        break;
    }
    case 282827:
    {
        returnValue = F("Schmitten");
        break;
    }
    case 282828:
    {
        returnValue = F("Schmittenbachstr.");
        break;
    }
    case 282829:
    {
        returnValue = F("Schmittenbachweg");
        break;
    }
    case 282830:
    {
        returnValue = F("Schmittenberg");
        break;
    }
    case 282831:
    {
        returnValue = F("Schmittenbergstr.");
        break;
    }
    case 282832:
    {
        returnValue = F("Schmittenbergweg");
        break;
    }
    case 282833:
    {
        returnValue = F("Schmittenbuck");
        break;
    }
    case 282834:
    {
        returnValue = F("Schmittenbuscher Str.");
        break;
    }
    case 282835:
    {
        returnValue = F("Schmittenbuschweg");
        break;
    }
    case 282836:
    {
        returnValue = F("Schmittener Str.");
        break;
    }
    case 282837:
    {
        returnValue = F("Schmittener Weg");
        break;
    }
    case 282838:
    {
        returnValue = F("Schmittenfeldchen");
        break;
    }
    case 282839:
    {
        returnValue = F("Schmittenflur");
        break;
    }
    case 282840:
    {
        returnValue = F("Schmittengarten");
        break;
    }
    case 282841:
    {
        returnValue = F("Schmittengasse");
        break;
    }
    case 282842:
    {
        returnValue = F("Schmittengraben");
        break;
    }
    case 282843:
    {
        returnValue = F("Schmittenhalde");
        break;
    }
    case 282844:
    {
        returnValue = F("Schmittenhöhe");
        break;
    }
    case 282845:
    {
        returnValue = F("Schmittenkamp");
        break;
    }
    case 282846:
    {
        returnValue = F("Schmittenplatz");
        break;
    }
    case 282847:
    {
        returnValue = F("Schmittensiepen");
        break;
    }
    case 282848:
    {
        returnValue = F("Schmittensteinstr.");
        break;
    }
    case 282849:
    {
        returnValue = F("Schmittenstr.");
        break;
    }
    case 282850:
    {
        returnValue = F("Schmittenstück");
        break;
    }
    case 282851:
    {
        returnValue = F("Schmittenweg");
        break;
    }
    case 282852:
    {
        returnValue = F("Schmittenwiese");
        break;
    }
    case 282853:
    {
        returnValue = F("Schmittenäcker");
        break;
    }
    case 282854:
    {
        returnValue = F("Schmittepädchen");
        break;
    }
    case 282855:
    {
        returnValue = F("Schmitter Str.");
        break;
    }
    case 282856:
    {
        returnValue = F("Schmitter Weg");
        break;
    }
    case 282857:
    {
        returnValue = F("Schmitterain");
        break;
    }
    case 282858:
    {
        returnValue = F("Schmitterberg");
        break;
    }
    case 282859:
    {
        returnValue = F("Schmitterfeld");
        break;
    }
    case 282860:
    {
        returnValue = F("Schmitterhof");
        break;
    }
    case 282861:
    {
        returnValue = F("Schmitterstr.");
        break;
    }
    case 282862:
    {
        returnValue = F("Schmitteweg");
        break;
    }
    case 282863:
    {
        returnValue = F("Schmitteäcker");
        break;
    }
    case 282864:
    {
        returnValue = F("Schmittgasse");
        break;
    }
    case 282865:
    {
        returnValue = F("Schmittgraben");
        break;
    }
    case 282866:
    {
        returnValue = F("Schmittgrundweg");
        break;
    }
    case 282867:
    {
        returnValue = F("Schmitthahn");
        break;
    }
    case 282868:
    {
        returnValue = F("Schmitthauskamp");
        break;
    }
    case 282869:
    {
        returnValue = F("Schmitthenner Str.");
        break;
    }
    case 282870:
    {
        returnValue = F("Schmitthennerstr.");
        break;
    }
    case 282871:
    {
        returnValue = F("Schmitthewwel");
        break;
    }
    case 282872:
    {
        returnValue = F("Schmitthügel");
        break;
    }
    case 282873:
    {
        returnValue = F("Schmittiniweg");
        break;
    }
    case 282874:
    {
        returnValue = F("Schmittkaut");
        break;
    }
    case 282875:
    {
        returnValue = F("Schmittkautstr.");
        break;
    }
    case 282876:
    {
        returnValue = F("Schmittleweg");
        break;
    }
    case 282877:
    {
        returnValue = F("Schmittmannstr.");
        break;
    }
    case 282878:
    {
        returnValue = F("Schmittmecke");
        break;
    }
    case 282879:
    {
        returnValue = F("Schmittpforte");
        break;
    }
    case 282880:
    {
        returnValue = F("Schmittsberg");
        break;
    }
    case 282881:
    {
        returnValue = F("Schmittsbrunner Weg");
        break;
    }
    case 282882:
    {
        returnValue = F("Schmittsdell");
        break;
    }
    case 282883:
    {
        returnValue = F("Schmittsgasse");
        break;
    }
    case 282884:
    {
        returnValue = F("Schmittshauweg");
        break;
    }
    case 282885:
    {
        returnValue = F("Schmittspfad");
        break;
    }
    case 282886:
    {
        returnValue = F("Schmittstr.");
        break;
    }
    case 282887:
    {
        returnValue = F("Schmittswiesenstr.");
        break;
    }
    case 282888:
    {
        returnValue = F("Schmittweg");
        break;
    }
    case 282889:
    {
        returnValue = F("Schmittweiler Str.");
        break;
    }
    case 282890:
    {
        returnValue = F("Schmittweilerstr.");
        break;
    }
    case 282891:
    {
        returnValue = F("Schmittwilken Kamp");
        break;
    }
    case 282892:
    {
        returnValue = F("Schmitz Kamp");
        break;
    }
    case 282893:
    {
        returnValue = F("Schmitz Weide");
        break;
    }
    case 282894:
    {
        returnValue = F("Schmitz-Lenders-Weg");
        break;
    }
    case 282895:
    {
        returnValue = F("Schmitzbauerstr.");
        break;
    }
    case 282896:
    {
        returnValue = F("Schmitzberg");
        break;
    }
    case 282897:
    {
        returnValue = F("Schmitzbergweg");
        break;
    }
    case 282898:
    {
        returnValue = F("Schmitzbüchel");
        break;
    }
    case 282899:
    {
        returnValue = F("Schmitzdorf");
        break;
    }
    case 282900:
    {
        returnValue = F("Schmitzdorfer Str.");
        break;
    }
    case 282901:
    {
        returnValue = F("Schmitzdörfgen");
        break;
    }
    case 282902:
    {
        returnValue = F("Schmitze Schläwje");
        break;
    }
    case 282903:
    {
        returnValue = F("Schmitzfeld");
        break;
    }
    case 282904:
    {
        returnValue = F("Schmitzgasse");
        break;
    }
    case 282905:
    {
        returnValue = F("Schmitzgraben");
        break;
    }
    case 282906:
    {
        returnValue = F("Schmitzheide");
        break;
    }
    case 282907:
    {
        returnValue = F("Schmitzinger Str.");
        break;
    }
    case 282908:
    {
        returnValue = F("Schmitzkamp");
        break;
    }
    case 282909:
    {
        returnValue = F("Schmitzleite");
        break;
    }
    case 282910:
    {
        returnValue = F("Schmitzlödericher Str.");
        break;
    }
    case 282911:
    {
        returnValue = F("Schmitzpäsch");
        break;
    }
    case 282912:
    {
        returnValue = F("Schmitzstr.");
        break;
    }
    case 282913:
    {
        returnValue = F("Schmitzweg");
        break;
    }
    case 282914:
    {
        returnValue = F("Schmochtitz");
        break;
    }
    case 282915:
    {
        returnValue = F("Schmogrower Weg");
        break;
    }
    case 282916:
    {
        returnValue = F("Schmohlstr.");
        break;
    }
    case 282917:
    {
        returnValue = F("Schmolder Weg");
        break;
    }
    case 282918:
    {
        returnValue = F("Schmoll-von-Eisenwerth-Str.");
        break;
    }
    case 282919:
    {
        returnValue = F("Schmollerstr.");
        break;
    }
    case 282920:
    {
        returnValue = F("Schmolte");
        break;
    }
    case 282921:
    {
        returnValue = F("Schmolter Weg");
        break;
    }
    case 282922:
    {
        returnValue = F("Schmolzstr.");
        break;
    }
    case 282923:
    {
        returnValue = F("Schmomühlener Str.");
        break;
    }
    case 282924:
    {
        returnValue = F("Schmoner Str.");
        break;
    }
    case 282925:
    {
        returnValue = F("Schmooanger");
        break;
    }
    case 282926:
    {
        returnValue = F("Schmorditz");
        break;
    }
    case 282927:
    {
        returnValue = F("Schmorditzer Str.");
        break;
    }
    case 282928:
    {
        returnValue = F("Schmorellstr.");
        break;
    }
    case 282929:
    {
        returnValue = F("Schmorkauer Str.");
        break;
    }
    case 282930:
    {
        returnValue = F("Schmorkauer Weg");
        break;
    }
    case 282931:
    {
        returnValue = F("Schmorlstr.");
        break;
    }
    case 282932:
    {
        returnValue = F("Schmorrener Str.");
        break;
    }
    case 282933:
    {
        returnValue = F("Schmorsdorf");
        break;
    }
    case 282934:
    {
        returnValue = F("Schmotzenbreite");
        break;
    }
    case 282935:
    {
        returnValue = F("Schmuckenberger Weg");
        break;
    }
    case 282936:
    {
        returnValue = F("Schmuckental");
        break;
    }
    case 282937:
    {
        returnValue = F("Schmuckenweg");
        break;
    }
    case 282938:
    {
        returnValue = F("Schmucker-Passage");
        break;
    }
    case 282939:
    {
        returnValue = F("Schmuckers Hohl");
        break;
    }
    case 282940:
    {
        returnValue = F("Schmuckerweg");
        break;
    }
    case 282941:
    {
        returnValue = F("Schmuckgarten");
        break;
    }
    case 282942:
    {
        returnValue = F("Schmuckhof");
        break;
    }
    case 282943:
    {
        returnValue = F("Schmuckplatz");
        break;
    }
    case 282944:
    {
        returnValue = F("Schmuckstr.");
        break;
    }
    case 282945:
    {
        returnValue = F("Schmudestr.");
        break;
    }
    case 282946:
    {
        returnValue = F("Schmuggelpadd");
        break;
    }
    case 282947:
    {
        returnValue = F("Schmuggelpfad");
        break;
    }
    case 282948:
    {
        returnValue = F("Schmuggelstieg");
        break;
    }
    case 282949:
    {
        returnValue = F("Schmuggerow");
        break;
    }
    case 282950:
    {
        returnValue = F("Schmuggerow Ausbau");
        break;
    }
    case 282951:
    {
        returnValue = F("Schmuggler-Weg");
        break;
    }
    case 282952:
    {
        returnValue = F("Schmugglerpfad");
        break;
    }
    case 282953:
    {
        returnValue = F("Schmugglerweg");
        break;
    }
    case 282954:
    {
        returnValue = F("Schmuseweg");
        break;
    }
    case 282955:
    {
        returnValue = F("Schmutter-Park");
        break;
    }
    case 282956:
    {
        returnValue = F("Schmuttermairstr.");
        break;
    }
    case 282957:
    {
        returnValue = F("Schmutterpfad");
        break;
    }
    case 282958:
    {
        returnValue = F("Schmutterstr.");
        break;
    }
    case 282959:
    {
        returnValue = F("Schmuttertalstr.");
        break;
    }
    case 282960:
    {
        returnValue = F("Schmutterweg");
        break;
    }
    case 282961:
    {
        returnValue = F("Schmutterwiese");
        break;
    }
    case 282962:
    {
        returnValue = F("Schmutzbengel");
        break;
    }
    case 282963:
    {
        returnValue = F("Schmutzer Str.");
        break;
    }
    case 282964:
    {
        returnValue = F("Schmutzersweg");
        break;
    }
    case 282965:
    {
        returnValue = F("Schmuzerring");
        break;
    }
    case 282966:
    {
        returnValue = F("Schmuzerstr.");
        break;
    }
    case 282967:
    {
        returnValue = F("Schmuzerweg");
        break;
    }
    case 282968:
    {
        returnValue = F("Schmädelstr.");
        break;
    }
    case 282969:
    {
        returnValue = F("Schmädlgasse");
        break;
    }
    case 282970:
    {
        returnValue = F("Schmädlstr.");
        break;
    }
    case 282971:
    {
        returnValue = F("Schmähental");
        break;
    }
    case 282972:
    {
        returnValue = F("Schmähgasse");
        break;
    }
    case 282973:
    {
        returnValue = F("Schmähinger Str.");
        break;
    }
    case 282974:
    {
        returnValue = F("Schmähkoppel");
        break;
    }
    case 282975:
    {
        returnValue = F("Schmähling");
        break;
    }
    case 282976:
    {
        returnValue = F("Schmäkoppel");
        break;
    }
    case 282977:
    {
        returnValue = F("Schmäldamm");
        break;
    }
    case 282978:
    {
        returnValue = F("Schmöckwitzer Str.");
        break;
    }
    case 282979:
    {
        returnValue = F("Schmögelsdorfer Ringstr.");
        break;
    }
    case 282980:
    {
        returnValue = F("Schmölau");
        break;
    }
    case 282981:
    {
        returnValue = F("Schmölauer Str.");
        break;
    }
    case 282982:
    {
        returnValue = F("Schmölauer Weg");
        break;
    }
    case 282983:
    {
        returnValue = F("Schmölderpark");
        break;
    }
    case 282984:
    {
        returnValue = F("Schmöldersstr.");
        break;
    }
    case 282985:
    {
        returnValue = F("Schmölderstr.");
        break;
    }
    case 282986:
    {
        returnValue = F("Schmölener Str.");
        break;
    }
    case 282987:
    {
        returnValue = F("Schmölenpfad");
        break;
    }
    case 282988:
    {
        returnValue = F("Schmölestr.");
        break;
    }
    case 282989:
    {
        returnValue = F("Schmölln");
        break;
    }
    case 282990:
    {
        returnValue = F("Schmöllner Landstr.");
        break;
    }
    case 282991:
    {
        returnValue = F("Schmöllner Str.");
        break;
    }
    case 282992:
    {
        returnValue = F("Schmöllner Weg");
        break;
    }
    case 282993:
    {
        returnValue = F("Schmöllnsche Landstr.");
        break;
    }
    case 282994:
    {
        returnValue = F("Schmöllnsche Str.");
        break;
    }
    case 282995:
    {
        returnValue = F("Schmöllnsche Vorstadt");
        break;
    }
    case 282996:
    {
        returnValue = F("Schmölz");
        break;
    }
    case 282997:
    {
        returnValue = F("Schmölzer Str.");
        break;
    }
    case 282998:
    {
        returnValue = F("Schmölzstr.");
        break;
    }
    case 282999:
    {
        returnValue = F("Schmörholmer Weg");
        break;
    }
    case 283000:
    {
        returnValue = F("Schmücke");
        break;
    }
    case 283001:
    {
        returnValue = F("Schmückebergsweg");
        break;
    }
    case 283002:
    {
        returnValue = F("Schmücker Str.");
        break;
    }
    case 283003:
    {
        returnValue = F("Schmückersweg");
        break;
    }
    case 283004:
    {
        returnValue = F("Schmückerwiese");
        break;
    }
    case 283005:
    {
        returnValue = F("Schmückestr.");
        break;
    }
    case 283006:
    {
        returnValue = F("Schnaaper Weg");
        break;
    }
    case 283007:
    {
        returnValue = F("Schnaarsweg");
        break;
    }
    case 283008:
    {
        returnValue = F("Schnaatweg");
        break;
    }
    case 283009:
    {
        returnValue = F("Schnabe");
        break;
    }
    case 283010:
    {
        returnValue = F("Schnabel-Henning-Str.");
        break;
    }
    case 283011:
    {
        returnValue = F("Schnabelbrunnengasse");
        break;
    }
    case 283012:
    {
        returnValue = F("Schnabeler Weg");
        break;
    }
    case 283013:
    {
        returnValue = F("Schnabelfeld");
        break;
    }
    case 283014:
    {
        returnValue = F("Schnabelgasse");
        break;
    }
    case 283015:
    {
        returnValue = F("Schnabelsberg");
        break;
    }
    case 283016:
    {
        returnValue = F("Schnabelsmühle");
        break;
    }
    case 283017:
    {
        returnValue = F("Schnabelstr.");
        break;
    }
    case 283018:
    {
        returnValue = F("Schnabelwaider Str.");
        break;
    }
    case 283019:
    {
        returnValue = F("Schnabelweg");
        break;
    }
    case 283020:
    {
        returnValue = F("Schnacke Busch Str.");
        break;
    }
    case 283021:
    {
        returnValue = F("Schnacke Linie");
        break;
    }
    case 283022:
    {
        returnValue = F("Schnackenbergstr.");
        break;
    }
    case 283023:
    {
        returnValue = F("Schnackenhof");
        break;
    }
    case 283024:
    {
        returnValue = F("Schnackenwag");
        break;
    }
    case 283025:
    {
        returnValue = F("Schnackenwerther Str.");
        break;
    }
    case 283026:
    {
        returnValue = F("Schnadekamp");
        break;
    }
    case 283027:
    {
        returnValue = F("Schnaden");
        break;
    }
    case 283028:
    {
        returnValue = F("Schnadeweg");
        break;
    }
    case 283029:
    {
        returnValue = F("Schnadtweg");
        break;
    }
    case 283030:
    {
        returnValue = F("Schnadweg");
        break;
    }
    case 283031:
    {
        returnValue = F("Schnaidbergweg");
        break;
    }
    case 283032:
    {
        returnValue = F("Schnaider Str.");
        break;
    }
    case 283033:
    {
        returnValue = F("Schnaidholzstr.");
        break;
    }
    case 283034:
    {
        returnValue = F("Schnaidter Str.");
        break;
    }
    case 283035:
    {
        returnValue = F("Schnaidtweg");
        break;
    }
    case 283036:
    {
        returnValue = F("Schnaidweg");
        break;
    }
    case 283037:
    {
        returnValue = F("Schnaidwiesenweg");
        break;
    }
    case 283038:
    {
        returnValue = F("Schnaigbühlstr.");
        break;
    }
    case 283039:
    {
        returnValue = F("Schnaigbühlwandweg");
        break;
    }
    case 283040:
    {
        returnValue = F("Schnaihof");
        break;
    }
    case 283041:
    {
        returnValue = F("Schnait");
        break;
    }
    case 283042:
    {
        returnValue = F("Schnaitberg");
        break;
    }
    case 283043:
    {
        returnValue = F("Schnaitbergweg");
        break;
    }
    case 283044:
    {
        returnValue = F("Schnaiter Str.");
        break;
    }
    case 283045:
    {
        returnValue = F("Schnaiter Weg");
        break;
    }
    case 283046:
    {
        returnValue = F("Schnaithalde");
        break;
    }
    case 283047:
    {
        returnValue = F("Schnaitheimer Str.");
        break;
    }
    case 283048:
    {
        returnValue = F("Schnaitheimer Weg");
        break;
    }
    case 283049:
    {
        returnValue = F("Schnaitheimerweg");
        break;
    }
    case 283050:
    {
        returnValue = F("Schnaitseer Str.");
        break;
    }
    case 283051:
    {
        returnValue = F("Schnaitstr.");
        break;
    }
    case 283052:
    {
        returnValue = F("Schnaittacher Str.");
        break;
    }
    case 283053:
    {
        returnValue = F("Schnaittacher Weg");
        break;
    }
    case 283054:
    {
        returnValue = F("Schnaitterhofstr.");
        break;
    }
    case 283055:
    {
        returnValue = F("Schnaittweg");
        break;
    }
    case 283056:
    {
        returnValue = F("Schnaitweg");
        break;
    }
    case 283057:
    {
        returnValue = F("Schnaitwiesenweg");
        break;
    }
    case 283058:
    {
        returnValue = F("Schnake");
        break;
    }
    case 283059:
    {
        returnValue = F("Schnakenberg");
        break;
    }
    case 283060:
    {
        returnValue = F("Schnakenbergstr.");
        break;
    }
    case 283061:
    {
        returnValue = F("Schnakenbergweg");
        break;
    }
    case 283062:
    {
        returnValue = F("Schnakenbreite");
        break;
    }
    case 283063:
    {
        returnValue = F("Schnakenburg");
        break;
    }
    case 283064:
    {
        returnValue = F("Schnakenhalde");
        break;
    }
    case 283065:
    {
        returnValue = F("Schnakenhügel");
        break;
    }
    case 283066:
    {
        returnValue = F("Schnakenredder");
        break;
    }
    case 283067:
    {
        returnValue = F("Schnakenrieh-Schneise");
        break;
    }
    case 283068:
    {
        returnValue = F("Schnakentwiete");
        break;
    }
    case 283069:
    {
        returnValue = F("Schnakenweg");
        break;
    }
    case 283070:
    {
        returnValue = F("Schnallenäckerstr.");
        break;
    }
    case 283071:
    {
        returnValue = F("Schnalles Hafen Ausleger");
        break;
    }
    case 283072:
    {
        returnValue = F("Schnalzbergstr.");
        break;
    }
    case 283073:
    {
        returnValue = F("Schnalzstr.");
        break;
    }
    case 283074:
    {
        returnValue = F("Schnalzweg");
        break;
    }
    case 283075:
    {
        returnValue = F("Schnampelweg");
        break;
    }
    case 283076:
    {
        returnValue = F("Schnapp");
        break;
    }
    case 283077:
    {
        returnValue = F("Schnapp's Hof");
        break;
    }
    case 283078:
    {
        returnValue = F("Schnappacher Str.");
        break;
    }
    case 283079:
    {
        returnValue = F("Schnappacher Weg");
        break;
    }
    case 283080:
    {
        returnValue = F("Schnappburgsweg");
        break;
    }
    case 283081:
    {
        returnValue = F("Schnappe Gewann");
        break;
    }
    case 283082:
    {
        returnValue = F("Schnappelberg");
        break;
    }
    case 283083:
    {
        returnValue = F("Schnappenhain");
        break;
    }
    case 283084:
    {
        returnValue = F("Schnappenweg");
        break;
    }
    case 283085:
    {
        returnValue = F("Schnappenwinkl");
        break;
    }
    case 283086:
    {
        returnValue = F("Schnapper Weg");
        break;
    }
    case 283087:
    {
        returnValue = F("Schnapperweg");
        break;
    }
    case 283088:
    {
        returnValue = F("Schnappgasse");
        break;
    }
    case 283089:
    {
        returnValue = F("Schnappweg");
        break;
    }
    case 283090:
    {
        returnValue = F("Schnapsallee");
        break;
    }
    case 283091:
    {
        returnValue = F("Schnapsgasse");
        break;
    }
    case 283092:
    {
        returnValue = F("Schnapslinie");
        break;
    }
    case 283093:
    {
        returnValue = F("Schnapstalstr.");
        break;
    }
    case 283094:
    {
        returnValue = F("Schnapsweg");
        break;
    }
    case 283095:
    {
        returnValue = F("Schnarcherstr.");
        break;
    }
    case 283096:
    {
        returnValue = F("Schnarrenbergstr.");
        break;
    }
    case 283097:
    {
        returnValue = F("Schnarrenbergweg");
        break;
    }
    case 283098:
    {
        returnValue = F("Schnarrenwiesen");
        break;
    }
    case 283099:
    {
        returnValue = F("Schnarrtanne");
        break;
    }
    case 283100:
    {
        returnValue = F("Schnarslebener Str.");
        break;
    }
    case 283101:
    {
        returnValue = F("Schnarsleber Str.");
        break;
    }
    case 283102:
    {
        returnValue = F("Schnarsleber Weg");
        break;
    }
    case 283103:
    {
        returnValue = F("Schnaruper Str.");
        break;
    }
    case 283104:
    {
        returnValue = F("Schnat");
        break;
    }
    case 283105:
    {
        returnValue = F("Schnatbach");
        break;
    }
    case 283106:
    {
        returnValue = F("Schnatbuchenallee");
        break;
    }
    case 283107:
    {
        returnValue = F("Schnaterei");
        break;
    }
    case 283108:
    {
        returnValue = F("Schnatermannschneise");
        break;
    }
    case 283109:
    {
        returnValue = F("Schnatgang");
        break;
    }
    case 283110:
    {
        returnValue = F("Schnatgraben");
        break;
    }
    case 283111:
    {
        returnValue = F("Schnathofweg");
        break;
    }
    case 283112:
    {
        returnValue = F("Schnathorster Holz");
        break;
    }
    case 283113:
    {
        returnValue = F("Schnathorster Str.");
        break;
    }
    case 283114:
    {
        returnValue = F("Schnatskamp");
        break;
    }
    case 283115:
    {
        returnValue = F("Schnatstr.");
        break;
    }
    case 283116:
    {
        returnValue = F("Schnatweg");
        break;
    }
    case 283117:
    {
        returnValue = F("Schnatzenstr.");
        break;
    }
    case 283118:
    {
        returnValue = F("Schnauderbrücke Brossen");
        break;
    }
    case 283119:
    {
        returnValue = F("Schnaudergrund");
        break;
    }
    case 283120:
    {
        returnValue = F("Schnauderhainicher Weg");
        break;
    }
    case 283121:
    {
        returnValue = F("Schnauderstr.");
        break;
    }
    case 283122:
    {
        returnValue = F("Schnaudertrebnitz");
        break;
    }
    case 283123:
    {
        returnValue = F("Schnauderweg");
        break;
    }
    case 283124:
    {
        returnValue = F("Schnaudigelweg");
        break;
    }
    case 283125:
    {
        returnValue = F("Schnaufersträßle");
        break;
    }
    case 283126:
    {
        returnValue = F("Schnaukenbergweg");
        break;
    }
    case 283127:
    {
        returnValue = F("Schnauweg");
        break;
    }
    case 283128:
    {
        returnValue = F("Schnauzenbauerweg");
        break;
    }
    case 283129:
    {
        returnValue = F("Schnauzliweg");
        break;
    }
    case 283130:
    {
        returnValue = F("Schnebes");
        break;
    }
    case 283131:
    {
        returnValue = F("Schnecke");
        break;
    }
    case 283132:
    {
        returnValue = F("Schnecken");
        break;
    }
    case 283133:
    {
        returnValue = F("Schnecken Weg");
        break;
    }
    case 283134:
    {
        returnValue = F("Schneckenberg");
        break;
    }
    case 283135:
    {
        returnValue = F("Schneckenbergstr.");
        break;
    }
    case 283136:
    {
        returnValue = F("Schneckenbergweg");
        break;
    }
    case 283137:
    {
        returnValue = F("Schneckenboden");
        break;
    }
    case 283138:
    {
        returnValue = F("Schneckenbodenweg");
        break;
    }
    case 283139:
    {
        returnValue = F("Schneckenbrunnen");
        break;
    }
    case 283140:
    {
        returnValue = F("Schneckenbrücke");
        break;
    }
    case 283141:
    {
        returnValue = F("Schneckenbuch");
        break;
    }
    case 283142:
    {
        returnValue = F("Schneckenbuckel");
        break;
    }
    case 283143:
    {
        returnValue = F("Schneckenburger Platz");
        break;
    }
    case 283144:
    {
        returnValue = F("Schneckenburger Str.");
        break;
    }
    case 283145:
    {
        returnValue = F("Schneckenburgerstr.");
        break;
    }
    case 283146:
    {
        returnValue = F("Schneckenburgstr.");
        break;
    }
    case 283147:
    {
        returnValue = F("Schneckenburrenweg");
        break;
    }
    case 283148:
    {
        returnValue = F("Schneckenbörnelweg");
        break;
    }
    case 283149:
    {
        returnValue = F("Schneckenbühl");
        break;
    }
    case 283150:
    {
        returnValue = F("Schneckengarten");
        break;
    }
    case 283151:
    {
        returnValue = F("Schneckengasse");
        break;
    }
    case 283152:
    {
        returnValue = F("Schneckengrüner Str.");
        break;
    }
    case 283153:
    {
        returnValue = F("Schneckengrüner Weg");
        break;
    }
    case 283154:
    {
        returnValue = F("Schneckengrüner Weg / \"Panzerstr.");
        break;
    }
    case 283155:
    {
        returnValue = F("Schneckengässchen");
        break;
    }
    case 283156:
    {
        returnValue = F("Schneckengässle");
        break;
    }
    case 283157:
    {
        returnValue = F("Schneckengäßchen");
        break;
    }
    case 283158:
    {
        returnValue = F("Schneckenhalde");
        break;
    }
    case 283159:
    {
        returnValue = F("Schneckenhof");
        break;
    }
    case 283160:
    {
        returnValue = F("Schneckenhofener Str.");
        break;
    }
    case 283161:
    {
        returnValue = F("Schneckenhofengasse");
        break;
    }
    case 283162:
    {
        returnValue = F("Schneckenhofer Weg");
        break;
    }
    case 283163:
    {
        returnValue = F("Schneckenholzweg");
        break;
    }
    case 283164:
    {
        returnValue = F("Schneckenhäldenweg");
        break;
    }
    case 283165:
    {
        returnValue = F("Schneckenhügelweg");
        break;
    }
    case 283166:
    {
        returnValue = F("Schneckenkamp");
        break;
    }
    case 283167:
    {
        returnValue = F("Schneckenklingensträßle");
        break;
    }
    case 283168:
    {
        returnValue = F("Schneckenmatt");
        break;
    }
    case 283169:
    {
        returnValue = F("Schneckenmühle");
        break;
    }
    case 283170:
    {
        returnValue = F("Schneckenmühlweg");
        break;
    }
    case 283171:
    {
        returnValue = F("Schneckenmüllerweg");
        break;
    }
    case 283172:
    {
        returnValue = F("Schneckennudelweg");
        break;
    }
    case 283173:
    {
        returnValue = F("Schneckenring");
        break;
    }
    case 283174:
    {
        returnValue = F("Schneckensteiner Str.");
        break;
    }
    case 283175:
    {
        returnValue = F("Schneckensteiner Weg");
        break;
    }
    case 283176:
    {
        returnValue = F("Schneckenstr.");
        break;
    }
    case 283177:
    {
        returnValue = F("Schneckentalstr.");
        break;
    }
    case 283178:
    {
        returnValue = F("Schneckentalweg");
        break;
    }
    case 283179:
    {
        returnValue = F("Schneckentor");
        break;
    }
    case 283180:
    {
        returnValue = F("Schneckenweg");
        break;
    }
    case 283181:
    {
        returnValue = F("Schneckenweiher");
        break;
    }
    case 283182:
    {
        returnValue = F("Schneckenwiese");
        break;
    }
    case 283183:
    {
        returnValue = F("Schneckenzuchtweg");
        break;
    }
    case 283184:
    {
        returnValue = F("Schneckewegle");
        break;
    }
    case 283185:
    {
        returnValue = F("Schneckgasse");
        break;
    }
    case 283186:
    {
        returnValue = F("Schnecklein");
        break;
    }
    case 283187:
    {
        returnValue = F("Schneckleinsberg");
        break;
    }
    case 283188:
    {
        returnValue = F("Schnede");
        break;
    }
    case 283189:
    {
        returnValue = F("Schnedebergsweg");
        break;
    }
    case 283190:
    {
        returnValue = F("Schnedebruch");
        break;
    }
    case 283191:
    {
        returnValue = F("Schnedermannplatz");
        break;
    }
    case 283192:
    {
        returnValue = F("Schnedermannstr.");
        break;
    }
    case 283193:
    {
        returnValue = F("Schnedeweg");
        break;
    }
    case 283194:
    {
        returnValue = F("Schnedingsen");
        break;
    }
    case 283195:
    {
        returnValue = F("Schneebacher Weg");
        break;
    }
    case 283196:
    {
        returnValue = F("Schneebachstr.");
        break;
    }
    case 283197:
    {
        returnValue = F("Schneebachtal");
        break;
    }
    case 283198:
    {
        returnValue = F("Schneeballhof");
        break;
    }
    case 283199:
    {
        returnValue = F("Schneeballweg");
        break;
    }
    case 283200:
    {
        returnValue = F("Schneebeerenweg");
        break;
    }
    case 283201:
    {
        returnValue = F("Schneebeerweg");
        break;
    }
    case 283202:
    {
        returnValue = F("Schneeberg");
        break;
    }
    case 283203:
    {
        returnValue = F("Schneebergblick");
        break;
    }
    case 283204:
    {
        returnValue = F("Schneeberger Allee");
        break;
    }
    case 283205:
    {
        returnValue = F("Schneeberger Dorfstr.");
        break;
    }
    case 283206:
    {
        returnValue = F("Schneeberger Kietz");
        break;
    }
    case 283207:
    {
        returnValue = F("Schneeberger Platz");
        break;
    }
    case 283208:
    {
        returnValue = F("Schneeberger Str.");
        break;
    }
    case 283209:
    {
        returnValue = F("Schneeberger Weg");
        break;
    }
    case 283210:
    {
        returnValue = F("Schneebergstr.");
        break;
    }
    case 283211:
    {
        returnValue = F("Schneebergsweg");
        break;
    }
    case 283212:
    {
        returnValue = F("Schneebergweg");
        break;
    }
    case 283213:
    {
        returnValue = F("Schneeblock");
        break;
    }
    case 283214:
    {
        returnValue = F("Schneebruch");
        break;
    }
    case 283215:
    {
        returnValue = F("Schneeburgstr.");
        break;
    }
    case 283216:
    {
        returnValue = F("Schneeburgweg");
        break;
    }
    case 283217:
    {
        returnValue = F("Schneebuschstr.");
        break;
    }
    case 283218:
    {
        returnValue = F("Schneedamm");
        break;
    }
    case 283219:
    {
        returnValue = F("Schneedeich");
        break;
    }
    case 283220:
    {
        returnValue = F("Schneederweg");
        break;
    }
    case 283221:
    {
        returnValue = F("Schneefelder Berg");
        break;
    }
    case 283222:
    {
        returnValue = F("Schneegans-Str.");
        break;
    }
    case 283223:
    {
        returnValue = F("Schneegarten");
        break;
    }
    case 283224:
    {
        returnValue = F("Schneegasse");
        break;
    }
    case 283225:
    {
        returnValue = F("Schneeglöckchenring");
        break;
    }
    case 283226:
    {
        returnValue = F("Schneeglöckchenstr.");
        break;
    }
    case 283227:
    {
        returnValue = F("Schneeglöckchenweg");
        break;
    }
    case 283228:
    {
        returnValue = F("Schneeglöckenweg");
        break;
    }
    case 283229:
    {
        returnValue = F("Schneegrabenbrücke");
        break;
    }
    case 283230:
    {
        returnValue = F("Schneegrund");
        break;
    }
    case 283231:
    {
        returnValue = F("Schneegrundstr.");
        break;
    }
    case 283232:
    {
        returnValue = F("Schneehalde");
        break;
    }
    case 283233:
    {
        returnValue = F("Schneeheide");
        break;
    }
    case 283234:
    {
        returnValue = F("Schneeheidering");
        break;
    }
    case 283235:
    {
        returnValue = F("Schneeheideweg");
        break;
    }
    case 283236:
    {
        returnValue = F("Schneehof");
        break;
    }
    case 283237:
    {
        returnValue = F("Schneehohl");
        break;
    }
    case 283238:
    {
        returnValue = F("Schneehübelweg");
        break;
    }
    case 283239:
    {
        returnValue = F("Schneekamp");
        break;
    }
    case 283240:
    {
        returnValue = F("Schneekopf");
        break;
    }
    case 283241:
    {
        returnValue = F("Schneekopfblick");
        break;
    }
    case 283242:
    {
        returnValue = F("Schneekopfstr.");
        break;
    }
    case 283243:
    {
        returnValue = F("Schneekoppenweg");
        break;
    }
    case 283244:
    {
        returnValue = F("Schneekoppestr.");
        break;
    }
    case 283245:
    {
        returnValue = F("Schneekoppeweg");
        break;
    }
    case 283246:
    {
        returnValue = F("Schneemannstr.");
        break;
    }
    case 283247:
    {
        returnValue = F("Schneemühlenweg");
        break;
    }
    case 283248:
    {
        returnValue = F("Schneepflugweg");
        break;
    }
    case 283249:
    {
        returnValue = F("Schneer Weg");
        break;
    }
    case 283250:
    {
        returnValue = F("Schneerener Krug");
        break;
    }
    case 283251:
    {
        returnValue = F("Schneerener Str.");
        break;
    }
    case 283252:
    {
        returnValue = F("Schneerener Ziegelei");
        break;
    }
    case 283253:
    {
        returnValue = F("Schneerheinweg");
        break;
    }
    case 283254:
    {
        returnValue = F("Schneermannshof");
        break;
    }
    case 283255:
    {
        returnValue = F("Schneerosenweg");
        break;
    }
    case 283256:
    {
        returnValue = F("Schneesattel");
        break;
    }
    case 283257:
    {
        returnValue = F("Schneesch");
        break;
    }
    case 283258:
    {
        returnValue = F("Schneeweg");
        break;
    }
    case 283259:
    {
        returnValue = F("Schneeweiderhof");
        break;
    }
    case 283260:
    {
        returnValue = F("Schneeweißchenweg");
        break;
    }
    case 283261:
    {
        returnValue = F("Schneeweißdornstr.");
        break;
    }
    case 283262:
    {
        returnValue = F("Schneeweißstr.");
        break;
    }
    case 283263:
    {
        returnValue = F("Schneewiesenstr.");
        break;
    }
    case 283264:
    {
        returnValue = F("Schneewinkelstr.");
        break;
    }
    case 283265:
    {
        returnValue = F("Schneewinklweg");
        break;
    }
    case 283266:
    {
        returnValue = F("Schneewittchenring");
        break;
    }
    case 283267:
    {
        returnValue = F("Schneewittchenstr.");
        break;
    }
    case 283268:
    {
        returnValue = F("Schneewittchentwete");
        break;
    }
    case 283269:
    {
        returnValue = F("Schneewittchenweg");
        break;
    }
    case 283270:
    {
        returnValue = F("Schneflingen");
        break;
    }
    case 283271:
    {
        returnValue = F("Schneflinger Weg");
        break;
    }
    case 283272:
    {
        returnValue = F("Schnegelbachweg");
        break;
    }
    case 283273:
    {
        returnValue = F("Schnegelskothen");
        break;
    }
    case 283274:
    {
        returnValue = F("Schneggstr.");
        break;
    }
    case 283275:
    {
        returnValue = F("Schneibsteinstr.");
        break;
    }
    case 283276:
    {
        returnValue = F("Schneibsteinweg");
        break;
    }
    case 283277:
    {
        returnValue = F("Schneid");
        break;
    }
    case 283278:
    {
        returnValue = F("Schneidbach");
        break;
    }
    case 283279:
    {
        returnValue = F("Schneidbergweg");
        break;
    }
    case 283280:
    {
        returnValue = F("Schneide");
        break;
    }
    case 283281:
    {
        returnValue = F("Schneidegasse");
        break;
    }
    case 283282:
    {
        returnValue = F("Schneidemahdweg");
        break;
    }
    case 283283:
    {
        returnValue = F("Schneidemühle");
        break;
    }
    case 283284:
    {
        returnValue = F("Schneidemühlenberg");
        break;
    }
    case 283285:
    {
        returnValue = F("Schneidemühlenstr.");
        break;
    }
    case 283286:
    {
        returnValue = F("Schneidemühlenweg");
        break;
    }
    case 283287:
    {
        returnValue = F("Schneidemühler Str.");
        break;
    }
    case 283288:
    {
        returnValue = F("Schneidemühler Weg");
        break;
    }
    case 283289:
    {
        returnValue = F("Schneidemühlplatz");
        break;
    }
    case 283290:
    {
        returnValue = F("Schneidemühlsbrücke");
        break;
    }
    case 283291:
    {
        returnValue = F("Schneidenbacher Str.");
        break;
    }
    case 283292:
    {
        returnValue = F("Schneider-Böck-Weg");
        break;
    }
    case 283293:
    {
        returnValue = F("Schneider-Clauß-Str.");
        break;
    }
    case 283294:
    {
        returnValue = F("Schneider-Paas-Str.");
        break;
    }
    case 283295:
    {
        returnValue = F("Schneiderallee");
        break;
    }
    case 283296:
    {
        returnValue = F("Schneiderbachweg");
        break;
    }
    case 283297:
    {
        returnValue = F("Schneiderberg");
        break;
    }
    case 283298:
    {
        returnValue = F("Schneiderbergstr.");
        break;
    }
    case 283299:
    {
        returnValue = F("Schneiderbrink");
        break;
    }
    case 283300:
    {
        returnValue = F("Schneiderbuckstr.");
        break;
    }
    case 283301:
    {
        returnValue = F("Schneiderburg");
        break;
    }
    case 283302:
    {
        returnValue = F("Schneiderbäumlesweg");
        break;
    }
    case 283303:
    {
        returnValue = F("Schneiderdell");
        break;
    }
    case 283304:
    {
        returnValue = F("Schneiderei");
        break;
    }
    case 283305:
    {
        returnValue = F("Schneiderfeld");
        break;
    }
    case 283306:
    {
        returnValue = F("Schneidergang");
        break;
    }
    case 283307:
    {
        returnValue = F("Schneidergangweg");
        break;
    }
    case 283308:
    {
        returnValue = F("Schneidergasse");
        break;
    }
    case 283309:
    {
        returnValue = F("Schneidergassl");
        break;
    }
    case 283310:
    {
        returnValue = F("Schneidergasslweg");
        break;
    }
    case 283311:
    {
        returnValue = F("Schneidergäßchen");
        break;
    }
    case 283312:
    {
        returnValue = F("Schneidergäßle");
        break;
    }
    case 283313:
    {
        returnValue = F("Schneiderhansenweg");
        break;
    }
    case 283314:
    {
        returnValue = F("Schneiderhenn");
        break;
    }
    case 283315:
    {
        returnValue = F("Schneiderhof");
        break;
    }
    case 283316:
    {
        returnValue = F("Schneiderhof-Ausfahrt");
        break;
    }
    case 283317:
    {
        returnValue = F("Schneiderhofstr.");
        break;
    }
    case 283318:
    {
        returnValue = F("Schneidering");
        break;
    }
    case 283319:
    {
        returnValue = F("Schneiderkamp");
        break;
    }
    case 283320:
    {
        returnValue = F("Schneiderkoppel");
        break;
    }
    case 283321:
    {
        returnValue = F("Schneiderkruger Str.");
        break;
    }
    case 283322:
    {
        returnValue = F("Schneidermühlenweg");
        break;
    }
    case 283323:
    {
        returnValue = F("Schneidermühlstr.");
        break;
    }
    case 283324:
    {
        returnValue = F("Schneiderplatz");
        break;
    }
    case 283325:
    {
        returnValue = F("Schneiderring");
        break;
    }
    case 283326:
    {
        returnValue = F("Schneiders Berg");
        break;
    }
    case 283327:
    {
        returnValue = F("Schneiders Gang");
        break;
    }
    case 283328:
    {
        returnValue = F("Schneiders Gründel");
        break;
    }
    case 283329:
    {
        returnValue = F("Schneiders Kamp");
        break;
    }
    case 283330:
    {
        returnValue = F("Schneidersberg");
        break;
    }
    case 283331:
    {
        returnValue = F("Schneidersbergstr.");
        break;
    }
    case 283332:
    {
        returnValue = F("Schneidersbergweg");
        break;
    }
    case 283333:
    {
        returnValue = F("Schneidersbäumen");
        break;
    }
    case 283334:
    {
        returnValue = F("Schneiderschere");
        break;
    }
    case 283335:
    {
        returnValue = F("Schneidersgarten");
        break;
    }
    case 283336:
    {
        returnValue = F("Schneidersgasse");
        break;
    }
    case 283337:
    {
        returnValue = F("Schneidershof");
        break;
    }
    case 283338:
    {
        returnValue = F("Schneidershöhe");
        break;
    }
    case 283339:
    {
        returnValue = F("Schneiderskreuzstr.");
        break;
    }
    case 283340:
    {
        returnValue = F("Schneiderspfad");
        break;
    }
    case 283341:
    {
        returnValue = F("Schneiderspfädchen");
        break;
    }
    case 283342:
    {
        returnValue = F("Schneidersstr.");
        break;
    }
    case 283343:
    {
        returnValue = F("Schneiderstieg");
        break;
    }
    case 283344:
    {
        returnValue = F("Schneiderstr.");
        break;
    }
    case 283345:
    {
        returnValue = F("Schneiderstriesch");
        break;
    }
    case 283346:
    {
        returnValue = F("Schneidersweg");
        break;
    }
    case 283347:
    {
        returnValue = F("Schneidersäcker");
        break;
    }
    case 283348:
    {
        returnValue = F("Schneiderteichweg");
        break;
    }
    case 283349:
    {
        returnValue = F("Schneidertrift");
        break;
    }
    case 283350:
    {
        returnValue = F("Schneidertwiete");
        break;
    }
    case 283351:
    {
        returnValue = F("Schneiderweg");
        break;
    }
    case 283352:
    {
        returnValue = F("Schneideweg");
        break;
    }
    case 283353:
    {
        returnValue = F("Schneidewindstr.");
        break;
    }
    case 283354:
    {
        returnValue = F("Schneidgasse");
        break;
    }
    case 283355:
    {
        returnValue = F("Schneidhainer Str.");
        break;
    }
    case 283356:
    {
        returnValue = F("Schneidhainer Weg");
        break;
    }
    case 283357:
    {
        returnValue = F("Schneidhausen");
        break;
    }
    case 283358:
    {
        returnValue = F("Schneidhausener Weg");
        break;
    }
    case 283359:
    {
        returnValue = F("Schneidheimer Str.");
        break;
    }
    case 283360:
    {
        returnValue = F("Schneidinger Str.");
        break;
    }
    case 283361:
    {
        returnValue = F("Schneidkaul");
        break;
    }
    case 283362:
    {
        returnValue = F("Schneidkuhle");
        break;
    }
    case 283363:
    {
        returnValue = F("Schneidling");
        break;
    }
    case 283364:
    {
        returnValue = F("Schneidlinger Str.");
        break;
    }
    case 283365:
    {
        returnValue = F("Schneidlinger Weg");
        break;
    }
    case 283366:
    {
        returnValue = F("Schneidmannweg");
        break;
    }
    case 283367:
    {
        returnValue = F("Schneidmühle");
        break;
    }
    case 283368:
    {
        returnValue = F("Schneidmühlengrund");
        break;
    }
    case 283369:
    {
        returnValue = F("Schneidmühlenweg");
        break;
    }
    case 283370:
    {
        returnValue = F("Schneidmühlgasse");
        break;
    }
    case 283371:
    {
        returnValue = F("Schneidmühlstr.");
        break;
    }
    case 283372:
    {
        returnValue = F("Schneidmühlweg");
        break;
    }
    case 283373:
    {
        returnValue = F("Schneidstr.");
        break;
    }
    case 283374:
    {
        returnValue = F("Schneidt'scher Garten");
        break;
    }
    case 283375:
    {
        returnValue = F("Schneidwaldstr.");
        break;
    }
    case 283376:
    {
        returnValue = F("Schneidweg");
        break;
    }
    case 283377:
    {
        returnValue = F("Schneifelhöhenweg");
        break;
    }
    case 283378:
    {
        returnValue = F("Schneifelstr.");
        break;
    }
    case 283379:
    {
        returnValue = F("Schneifelweg");
        break;
    }
    case 283380:
    {
        returnValue = F("Schneikweg");
        break;
    }
    case 283381:
    {
        returnValue = F("Schneilstr.");
        break;
    }
    case 283382:
    {
        returnValue = F("Schneinderweg");
        break;
    }
    case 283383:
    {
        returnValue = F("Schneise");
        break;
    }
    case 283384:
    {
        returnValue = F("Schneise 07");
        break;
    }
    case 283385:
    {
        returnValue = F("Schneise 08");
        break;
    }
    case 283386:
    {
        returnValue = F("Schneise 1");
        break;
    }
    case 283387:
    {
        returnValue = F("Schneise 10");
        break;
    }
    case 283388:
    {
        returnValue = F("Schneise 11");
        break;
    }
    case 283389:
    {
        returnValue = F("Schneise 12");
        break;
    }
    case 283390:
    {
        returnValue = F("Schneise 13");
        break;
    }
    case 283391:
    {
        returnValue = F("Schneise 14");
        break;
    }
    case 283392:
    {
        returnValue = F("Schneise 15");
        break;
    }
    case 283393:
    {
        returnValue = F("Schneise 16");
        break;
    }
    case 283394:
    {
        returnValue = F("Schneise 17");
        break;
    }
    case 283395:
    {
        returnValue = F("Schneise 18");
        break;
    }
    case 283396:
    {
        returnValue = F("Schneise 19");
        break;
    }
    case 283397:
    {
        returnValue = F("Schneise 2");
        break;
    }
    case 283398:
    {
        returnValue = F("Schneise 20");
        break;
    }
    case 283399:
    {
        returnValue = F("Schneise 21");
        break;
    }
    case 283400:
    {
        returnValue = F("Schneise 22");
        break;
    }
    case 283401:
    {
        returnValue = F("Schneise 23");
        break;
    }
    case 283402:
    {
        returnValue = F("Schneise 24");
        break;
    }
    case 283403:
    {
        returnValue = F("Schneise 25");
        break;
    }
    case 283404:
    {
        returnValue = F("Schneise 26");
        break;
    }
    case 283405:
    {
        returnValue = F("Schneise 27");
        break;
    }
    case 283406:
    {
        returnValue = F("Schneise 28");
        break;
    }
    case 283407:
    {
        returnValue = F("Schneise 29");
        break;
    }
    case 283408:
    {
        returnValue = F("Schneise 3");
        break;
    }
    case 283409:
    {
        returnValue = F("Schneise 30");
        break;
    }
    case 283410:
    {
        returnValue = F("Schneise 31");
        break;
    }
    case 283411:
    {
        returnValue = F("Schneise 4");
        break;
    }
    case 283412:
    {
        returnValue = F("Schneise 5");
        break;
    }
    case 283413:
    {
        returnValue = F("Schneise 6");
        break;
    }
    case 283414:
    {
        returnValue = F("Schneise 7");
        break;
    }
    case 283415:
    {
        returnValue = F("Schneise 7a");
        break;
    }
    case 283416:
    {
        returnValue = F("Schneise 8");
        break;
    }
    case 283417:
    {
        returnValue = F("Schneise 9");
        break;
    }
    case 283418:
    {
        returnValue = F("Schneise D");
        break;
    }
    case 283419:
    {
        returnValue = F("Schneise E");
        break;
    }
    case 283420:
    {
        returnValue = F("Schneise F");
        break;
    }
    case 283421:
    {
        returnValue = F("Schneise G");
        break;
    }
    case 283422:
    {
        returnValue = F("Schneise H");
        break;
    }
    case 283423:
    {
        returnValue = F("Schneise I");
        break;
    }
    case 283424:
    {
        returnValue = F("Schneise K");
        break;
    }
    case 283425:
    {
        returnValue = F("Schneise L");
        break;
    }
    case 283426:
    {
        returnValue = F("Schneise M");
        break;
    }
    case 283427:
    {
        returnValue = F("Schneise Nummer 1");
        break;
    }
    case 283428:
    {
        returnValue = F("Schneise Nummer 2");
        break;
    }
    case 283429:
    {
        returnValue = F("Schneise Nummer 3");
        break;
    }
    case 283430:
    {
        returnValue = F("Schneise Nummer 4");
        break;
    }
    case 283431:
    {
        returnValue = F("Schneise Nummer 5");
        break;
    }
    case 283432:
    {
        returnValue = F("Schneise Nummer 6");
        break;
    }
    case 283433:
    {
        returnValue = F("Schneise U");
        break;
    }
    case 283434:
    {
        returnValue = F("Schneise V");
        break;
    }
    case 283435:
    {
        returnValue = F("Schneise10");
        break;
    }
    case 283436:
    {
        returnValue = F("Schneise13");
        break;
    }
    case 283437:
    {
        returnValue = F("Schneise16");
        break;
    }
    case 283438:
    {
        returnValue = F("Schneise28");
        break;
    }
    case 283439:
    {
        returnValue = F("Schneise33");
        break;
    }
    case 283440:
    {
        returnValue = F("Schneise5");
        break;
    }
    case 283441:
    {
        returnValue = F("Schneisenberg");
        break;
    }
    case 283442:
    {
        returnValue = F("Schneisenweg");
        break;
    }
    case 283443:
    {
        returnValue = F("Schneitbacher Weg");
        break;
    }
    case 283444:
    {
        returnValue = F("Schneitsteigweg");
        break;
    }
    case 283445:
    {
        returnValue = F("Schneittentalweg");
        break;
    }
    case 283446:
    {
        returnValue = F("Schneitweg");
        break;
    }
    case 283447:
    {
        returnValue = F("Schneitweger Str.");
        break;
    }
    case 283448:
    {
        returnValue = F("Schneizlreuth");
        break;
    }
    case 283449:
    {
        returnValue = F("Schneißenweg");
        break;
    }
    case 283450:
    {
        returnValue = F("Schnellbach");
        break;
    }
    case 283451:
    {
        returnValue = F("Schnellbachstr.");
        break;
    }
    case 283452:
    {
        returnValue = F("Schnellbruckstr.");
        break;
    }
    case 283453:
    {
        returnValue = F("Schnellbühlweg");
        break;
    }
    case 283454:
    {
        returnValue = F("Schnellebrinks Wall");
        break;
    }
    case 283455:
    {
        returnValue = F("Schnellenbacher Str.");
        break;
    }
    case 283456:
    {
        returnValue = F("Schnellenberger Allee");
        break;
    }
    case 283457:
    {
        returnValue = F("Schnellenberger Camp");
        break;
    }
    case 283458:
    {
        returnValue = F("Schnellenberger Weg");
        break;
    }
    case 283459:
    {
        returnValue = F("Schnellenbergsweg");
        break;
    }
    case 283460:
    {
        returnValue = F("Schnellenhof");
        break;
    }
    case 283461:
    {
        returnValue = F("Schnellenmarkt");
        break;
    }
    case 283462:
    {
        returnValue = F("Schnellenstr.");
        break;
    }
    case 283463:
    {
        returnValue = F("Schnellepark");
        break;
    }
    case 283464:
    {
        returnValue = F("Schneller Lauf");
        break;
    }
    case 283465:
    {
        returnValue = F("Schneller Ritt");
        break;
    }
    case 283466:
    {
        returnValue = F("Schnellermaarstr.");
        break;
    }
    case 283467:
    {
        returnValue = F("Schnellers");
        break;
    }
    case 283468:
    {
        returnValue = F("Schnellerstr.");
        break;
    }
    case 283469:
    {
        returnValue = F("Schnellertsberg");
        break;
    }
    case 283470:
    {
        returnValue = F("Schnellertsweg");
        break;
    }
    case 283471:
    {
        returnValue = F("Schnellerwaldweg");
        break;
    }
    case 283472:
    {
        returnValue = F("Schnellerweg");
        break;
    }
    case 283473:
    {
        returnValue = F("Schnellewalder Str.");
        break;
    }
    case 283474:
    {
        returnValue = F("Schnellewalder Weg");
        break;
    }
    case 283475:
    {
        returnValue = F("Schnellgasse");
        break;
    }
    case 283476:
    {
        returnValue = F("Schnellhamer Str.");
        break;
    }
    case 283477:
    {
        returnValue = F("Schnellhof");
        break;
    }
    case 283478:
    {
        returnValue = F("Schnelliggasse");
        break;
    }
    case 283479:
    {
        returnValue = F("Schnellin");
        break;
    }
    case 283480:
    {
        returnValue = F("Schnellinger Str.");
        break;
    }
    case 283481:
    {
        returnValue = F("Schnellingweg");
        break;
    }
    case 283482:
    {
        returnValue = F("Schnellmark");
        break;
    }
    case 283483:
    {
        returnValue = F("Schnellmarkstr.");
        break;
    }
    case 283484:
    {
        returnValue = F("Schnellrodaer Str.");
        break;
    }
    case 283485:
    {
        returnValue = F("Schnellröder Str.");
        break;
    }
    case 283486:
    {
        returnValue = F("Schnells Ecke");
        break;
    }
    case 283487:
    {
        returnValue = F("Schnellster Weg");
        break;
    }
    case 283488:
    {
        returnValue = F("Schnellstr.");
        break;
    }
    case 283489:
    {
        returnValue = F("Schnelltörle");
        break;
    }
    case 283490:
    {
        returnValue = F("Schnellweg");
        break;
    }
    case 283491:
    {
        returnValue = F("Schnelsener Weg");
        break;
    }
    case 283492:
    {
        returnValue = F("Schnelser Weg");
        break;
    }
    case 283493:
    {
        returnValue = F("Schnelthörn");
        break;
    }
    case 283494:
    {
        returnValue = F("Schnepel");
        break;
    }
    case 283495:
    {
        returnValue = F("Schnepfbrunnenstr.");
        break;
    }
    case 283496:
    {
        returnValue = F("Schnepfen Schneise");
        break;
    }
    case 283497:
    {
        returnValue = F("Schnepfen-Schneise");
        break;
    }
    case 283498:
    {
        returnValue = F("Schnepfenallee");
        break;
    }
    case 283499:
    {
        returnValue = F("Schnepfenberg");
        break;
    }
    case 283500:
    {
        returnValue = F("Schnepfenbergrundweg");
        break;
    }
    case 283501:
    {
        returnValue = F("Schnepfenbergweg");
        break;
    }
    case 283502:
    {
        returnValue = F("Schnepfenbruchweg");
        break;
    }
    case 283503:
    {
        returnValue = F("Schnepfendamm");
        break;
    }
    case 283504:
    {
        returnValue = F("Schnepfeneckschneise");
        break;
    }
    case 283505:
    {
        returnValue = F("Schnepfenflucht");
        break;
    }
    case 283506:
    {
        returnValue = F("Schnepfengrund");
        break;
    }
    case 283507:
    {
        returnValue = F("Schnepfenhain");
        break;
    }
    case 283508:
    {
        returnValue = F("Schnepfenhof");
        break;
    }
    case 283509:
    {
        returnValue = F("Schnepfenhüllsträßchen");
        break;
    }
    case 283510:
    {
        returnValue = F("Schnepfenlucke");
        break;
    }
    case 283511:
    {
        returnValue = F("Schnepfenluckstr.");
        break;
    }
    case 283512:
    {
        returnValue = F("Schnepfenmoosweg");
        break;
    }
    case 283513:
    {
        returnValue = F("Schnepfenreihe");
        break;
    }
    case 283514:
    {
        returnValue = F("Schnepfenreuther Str.");
        break;
    }
    case 283515:
    {
        returnValue = F("Schnepfenrückweg");
        break;
    }
    case 283516:
    {
        returnValue = F("Schnepfenschneise");
        break;
    }
    case 283517:
    {
        returnValue = F("Schnepfenstandweg");
        break;
    }
    case 283518:
    {
        returnValue = F("Schnepfensteg");
        break;
    }
    case 283519:
    {
        returnValue = F("Schnepfenstieg");
        break;
    }
    case 283520:
    {
        returnValue = F("Schnepfenstiege");
        break;
    }
    case 283521:
    {
        returnValue = F("Schnepfenstolzweg");
        break;
    }
    case 283522:
    {
        returnValue = F("Schnepfenstr.");
        break;
    }
    case 283523:
    {
        returnValue = F("Schnepfenstrich");
        break;
    }
    case 283524:
    {
        returnValue = F("Schnepfental");
        break;
    }
    case 283525:
    {
        returnValue = F("Schnepfenteichweg");
        break;
    }
    case 283526:
    {
        returnValue = F("Schnepfenthaler Str.");
        break;
    }
    case 283527:
    {
        returnValue = F("Schnepfentränk-Schneise");
        break;
    }
    case 283528:
    {
        returnValue = F("Schnepfenweg");
        break;
    }
    case 283529:
    {
        returnValue = F("Schnepfenwinkel");
        break;
    }
    case 283530:
    {
        returnValue = F("Schnepfhaldenweg");
        break;
    }
    case 283531:
    {
        returnValue = F("Schnepker Str.");
        break;
    }
    case 283532:
    {
        returnValue = F("Schneppbachstr.");
        break;
    }
    case 283533:
    {
        returnValue = F("Schneppbicker Weg");
        break;
    }
    case 283534:
    {
        returnValue = F("Schneppel");
        break;
    }
    case 283535:
    {
        returnValue = F("Schneppelstieg");
        break;
    }
    case 283536:
    {
        returnValue = F("Schneppelweg");
        break;
    }
    case 283537:
    {
        returnValue = F("Schneppelwiese");
        break;
    }
    case 283538:
    {
        returnValue = F("Schneppenberger Weg");
        break;
    }
    case 283539:
    {
        returnValue = F("Schneppendahl");
        break;
    }
    case 283540:
    {
        returnValue = F("Schneppendahler Weg");
        break;
    }
    case 283541:
    {
        returnValue = F("Schneppendorfer Str.");
        break;
    }
    case 283542:
    {
        returnValue = F("Schneppenheimer Weg");
        break;
    }
    case 283543:
    {
        returnValue = F("Schneppenhohner Weg");
        break;
    }
    case 283544:
    {
        returnValue = F("Schneppenhäuser Str.");
        break;
    }
    case 283545:
    {
        returnValue = F("Schneppenkauten");
        break;
    }
    case 283546:
    {
        returnValue = F("Schneppenohler Weg");
        break;
    }
    case 283547:
    {
        returnValue = F("Schneppenrather Weg");
        break;
    }
    case 283548:
    {
        returnValue = F("Schneppensiefen");
        break;
    }
    case 283549:
    {
        returnValue = F("Schnepperother Str.");
        break;
    }
    case 283550:
    {
        returnValue = F("Schnepperstr.");
        break;
    }
    case 283551:
    {
        returnValue = F("Schnepperter Str.");
        break;
    }
    case 283552:
    {
        returnValue = F("Schnepperweg");
        break;
    }
    case 283553:
    {
        returnValue = F("Schnepprath");
        break;
    }
    case 283554:
    {
        returnValue = F("Schneppruthe");
        break;
    }
    case 283555:
    {
        returnValue = F("Schneppruthweg");
        break;
    }
    case 283556:
    {
        returnValue = F("Schneppsiefenstr.");
        break;
    }
    case 283557:
    {
        returnValue = F("Schneringer Str.");
        break;
    }
    case 283558:
    {
        returnValue = F("Schneringhuser Str.");
        break;
    }
    case 283559:
    {
        returnValue = F("Schnerkinger Str.");
        break;
    }
    case 283560:
    {
        returnValue = F("Schnerzhofer Str.");
        break;
    }
    case 283561:
    {
        returnValue = F("Schnetkamp-Moritz-Weg");
        break;
    }
    case 283562:
    {
        returnValue = F("Schnettberg");
        break;
    }
    case 283563:
    {
        returnValue = F("Schnetter Str.");
        break;
    }
    case 283564:
    {
        returnValue = F("Schnettersmühle");
        break;
    }
    case 283565:
    {
        returnValue = F("Schnettlers Siepen");
        break;
    }
    case 283566:
    {
        returnValue = F("Schnettmecke");
        break;
    }
    case 283567:
    {
        returnValue = F("Schnetzenhauser Str.");
        break;
    }
    case 283568:
    {
        returnValue = F("Schnetzlerstr.");
        break;
    }
    case 283569:
    {
        returnValue = F("Schnetzlerweg");
        break;
    }
    case 283570:
    {
        returnValue = F("Schneuse");
        break;
    }
    case 283571:
    {
        returnValue = F("Schneverdinger Str.");
        break;
    }
    case 283572:
    {
        returnValue = F("Schneverdinger Weg");
        break;
    }
    case 283573:
    {
        returnValue = F("Schneyer Str.");
        break;
    }
    case 283574:
    {
        returnValue = F("Schnickenfeld");
        break;
    }
    case 283575:
    {
        returnValue = F("Schnickersbend");
        break;
    }
    case 283576:
    {
        returnValue = F("Schnickevenn");
        break;
    }
    case 283577:
    {
        returnValue = F("Schnickmannstr.");
        break;
    }
    case 283578:
    {
        returnValue = F("Schniderskamp");
        break;
    }
    case 283579:
    {
        returnValue = F("Schniebändskamp");
        break;
    }
    case 283580:
    {
        returnValue = F("Schniederberg");
        break;
    }
    case 283581:
    {
        returnValue = F("Schniederbergstr.");
        break;
    }
    case 283582:
    {
        returnValue = F("Schniederkamp");
        break;
    }
    case 283583:
    {
        returnValue = F("Schniederkoppel");
        break;
    }
    case 283584:
    {
        returnValue = F("Schniederredder");
        break;
    }
    case 283585:
    {
        returnValue = F("Schnieders Bleek");
        break;
    }
    case 283586:
    {
        returnValue = F("Schnieders Kamp");
        break;
    }
    case 283587:
    {
        returnValue = F("Schniedersgang");
        break;
    }
    case 283588:
    {
        returnValue = F("Schniedersweg");
        break;
    }
    case 283589:
    {
        returnValue = F("Schniederweg");
        break;
    }
    case 283590:
    {
        returnValue = F("Schnieringerweg");
        break;
    }
    case 283591:
    {
        returnValue = F("Schnierlestr.");
        break;
    }
    case 283592:
    {
        returnValue = F("Schnierriemengewannweg");
        break;
    }
    case 283593:
    {
        returnValue = F("Schniers Feld");
        break;
    }
    case 283594:
    {
        returnValue = F("Schniers Twiete");
        break;
    }
    case 283595:
    {
        returnValue = F("Schniers Wiese");
        break;
    }
    case 283596:
    {
        returnValue = F("Schniersweg");
        break;
    }
    case 283597:
    {
        returnValue = F("Schnieten");
        break;
    }
    case 283598:
    {
        returnValue = F("Schniewind-Str.");
        break;
    }
    case 283599:
    {
        returnValue = F("Schniewindstr.");
        break;
    }
    case 283600:
    {
        returnValue = F("Schniffelshöh");
        break;
    }
    case 283601:
    {
        returnValue = F("SchniftenbergerSchneise");
        break;
    }
    case 283602:
    {
        returnValue = F("Schnigelbergweg");
        break;
    }
    case 283603:
    {
        returnValue = F("Schniggenkamp");
        break;
    }
    case 283604:
    {
        returnValue = F("Schnipelweg");
        break;
    }
    case 283605:
    {
        returnValue = F("Schnippelkamp");
        break;
    }
    case 283606:
    {
        returnValue = F("Schnippenbreite");
        break;
    }
    case 283607:
    {
        returnValue = F("Schnipperingen");
        break;
    }
    case 283608:
    {
        returnValue = F("Schnippheide");
        break;
    }
    case 283609:
    {
        returnValue = F("Schnippstr.");
        break;
    }
    case 283610:
    {
        returnValue = F("Schnitkersweg");
        break;
    }
    case 283611:
    {
        returnValue = F("Schnittbrook");
        break;
    }
    case 283612:
    {
        returnValue = F("Schnittdamm");
        break;
    }
    case 283613:
    {
        returnValue = F("Schnittenbergspfad");
        break;
    }
    case 283614:
    {
        returnValue = F("Schnittenhorn");
        break;
    }
    case 283615:
    {
        returnValue = F("Schnittenkamp");
        break;
    }
    case 283616:
    {
        returnValue = F("Schnitterberg");
        break;
    }
    case 283617:
    {
        returnValue = F("Schnittersgang");
        break;
    }
    case 283618:
    {
        returnValue = F("Schnitterstiege");
        break;
    }
    case 283619:
    {
        returnValue = F("Schnitterstr.");
        break;
    }
    case 283620:
    {
        returnValue = F("Schnittert");
        break;
    }
    case 283621:
    {
        returnValue = F("Schnitterter Weg");
        break;
    }
    case 283622:
    {
        returnValue = F("Schnitterweg");
        break;
    }
    case 283623:
    {
        returnValue = F("Schnitterwiese");
        break;
    }
    case 283624:
    {
        returnValue = F("Schnitthalde");
        break;
    }
    case 283625:
    {
        returnValue = F("Schnitthammweg");
        break;
    }
    case 283626:
    {
        returnValue = F("Schnitthilgenloh");
        break;
    }
    case 283627:
    {
        returnValue = F("Schnittis Eck");
        break;
    }
    case 283628:
    {
        returnValue = F("Schnittling");
        break;
    }
    case 283629:
    {
        returnValue = F("Schnittlinger Str.");
        break;
    }
    case 283630:
    {
        returnValue = F("Schnittspahnstr.");
        break;
    }
    case 283631:
    {
        returnValue = F("Schnittstelle");
        break;
    }
    case 283632:
    {
        returnValue = F("Schnittstr.");
        break;
    }
    case 283633:
    {
        returnValue = F("Schnittweg");
        break;
    }
    case 283634:
    {
        returnValue = F("Schnitzbuckelweg");
        break;
    }
    case 283635:
    {
        returnValue = F("Schnitzelgasse");
        break;
    }
    case 283636:
    {
        returnValue = F("Schnitzelgässi");
        break;
    }
    case 283637:
    {
        returnValue = F("Schnitzengasse");
        break;
    }
    case 283638:
    {
        returnValue = F("Schnitzerberg");
        break;
    }
    case 283639:
    {
        returnValue = F("Schnitzerskopf");
        break;
    }
    case 283640:
    {
        returnValue = F("Schnitzerstr.");
        break;
    }
    case 283641:
    {
        returnValue = F("Schnitzerweg");
        break;
    }
    case 283642:
    {
        returnValue = F("Schnitzlergasse");
        break;
    }
    case 283643:
    {
        returnValue = F("Schnitzlerplatz");
        break;
    }
    case 283644:
    {
        returnValue = F("Schnitzlerstr.");
        break;
    }
    case 283645:
    {
        returnValue = F("Schnitzlerweg");
        break;
    }
    case 283646:
    {
        returnValue = F("Schnitzlmühl");
        break;
    }
    case 283647:
    {
        returnValue = F("Schnitzschulstr.");
        break;
    }
    case 283648:
    {
        returnValue = F("Schnizerstr.");
        break;
    }
    case 283649:
    {
        returnValue = F("Schnizleinstr.");
        break;
    }
    case 283650:
    {
        returnValue = F("Schnoienstr.");
        break;
    }
    case 283651:
    {
        returnValue = F("Schnoorstr.");
        break;
    }
    case 283652:
    {
        returnValue = F("Schnoraderborn");
        break;
    }
    case 283653:
    {
        returnValue = F("Schnorr-v.-Carolsfeld-Weg");
        break;
    }
    case 283654:
    {
        returnValue = F("Schnorrbergstr.");
        break;
    }
    case 283655:
    {
        returnValue = F("Schnorrenberg");
        break;
    }
    case 283656:
    {
        returnValue = F("Schnorrenberger Allee");
        break;
    }
    case 283657:
    {
        returnValue = F("Schnorrenbergstr.");
        break;
    }
    case 283658:
    {
        returnValue = F("Schnorrenhöhe");
        break;
    }
    case 283659:
    {
        returnValue = F("Schnorrstr.");
        break;
    }
    case 283660:
    {
        returnValue = F("Schnotting");
        break;
    }
    case 283661:
    {
        returnValue = F("Schnubelstr.");
        break;
    }
    case 283662:
    {
        returnValue = F("Schnuckenack-Reinhardt-Str.");
        break;
    }
    case 283663:
    {
        returnValue = F("Schnuckendrift");
        break;
    }
    case 283664:
    {
        returnValue = F("Schnuckenheide");
        break;
    }
    case 283665:
    {
        returnValue = F("Schnuckenpfad");
        break;
    }
    case 283666:
    {
        returnValue = F("Schnuckenstaller Weg");
        break;
    }
    case 283667:
    {
        returnValue = F("Schnuckentrift");
        break;
    }
    case 283668:
    {
        returnValue = F("Schnuckentwiete");
        break;
    }
    case 283669:
    {
        returnValue = F("Schnuckenweg");
        break;
    }
    case 283670:
    {
        returnValue = F("Schnuckenweide");
        break;
    }
    case 283671:
    {
        returnValue = F("Schnuddelplatz");
        break;
    }
    case 283672:
    {
        returnValue = F("Schnuerstr.");
        break;
    }
    case 283673:
    {
        returnValue = F("Schnuller");
        break;
    }
    case 283674:
    {
        returnValue = F("Schnupferweg");
        break;
    }
    case 283675:
    {
        returnValue = F("Schnurbaumweg");
        break;
    }
    case 283676:
    {
        returnValue = F("Schnurbeinstr.");
        break;
    }
    case 283677:
    {
        returnValue = F("Schnurgasse");
        break;
    }
    case 283678:
    {
        returnValue = F("Schnurhaspelweg");
        break;
    }
    case 283679:
    {
        returnValue = F("Schnurrbartstr.");
        break;
    }
    case 283680:
    {
        returnValue = F("Schnurrbartweg");
        break;
    }
    case 283681:
    {
        returnValue = F("Schnurrenbühl");
        break;
    }
    case 283682:
    {
        returnValue = F("Schnurrenstr.");
        break;
    }
    case 283683:
    {
        returnValue = F("Schnurrenweg");
        break;
    }
    case 283684:
    {
        returnValue = F("Schnurrestr.");
        break;
    }
    case 283685:
    {
        returnValue = F("Schnurrgasse");
        break;
    }
    case 283686:
    {
        returnValue = F("Schnurrhauk");
        break;
    }
    case 283687:
    {
        returnValue = F("Schnurrstr.");
        break;
    }
    case 283688:
    {
        returnValue = F("Schnurrum");
        break;
    }
    case 283689:
    {
        returnValue = F("Schnurstr.");
        break;
    }
    case 283690:
    {
        returnValue = F("Schnurweg");
        break;
    }
    case 283691:
    {
        returnValue = F("Schnusental");
        break;
    }
    case 283692:
    {
        returnValue = F("Schnuter Weg");
        break;
    }
    case 283693:
    {
        returnValue = F("Schnuttenbacher Str.");
        break;
    }
    case 283694:
    {
        returnValue = F("Schnuttenstr.");
        break;
    }
    case 283695:
    {
        returnValue = F("Schnödhofweg");
        break;
    }
    case 283696:
    {
        returnValue = F("Schnöggersburger Weg");
        break;
    }
    case 283697:
    {
        returnValue = F("Schnörleinsmühle");
        break;
    }
    case 283698:
    {
        returnValue = F("Schnörnweg");
        break;
    }
    case 283699:
    {
        returnValue = F("Schnörringen");
        break;
    }
    case 283700:
    {
        returnValue = F("Schnörringer Str.");
        break;
    }
    case 283701:
    {
        returnValue = F("Schnörringer Weg");
        break;
    }
    case 283702:
    {
        returnValue = F("Schnörrnberg");
        break;
    }
    case 283703:
    {
        returnValue = F("Schnösenbergstr.");
        break;
    }
    case 283704:
    {
        returnValue = F("Schnötring");
        break;
    }
    case 283705:
    {
        returnValue = F("Schnötstr.");
        break;
    }
    case 283706:
    {
        returnValue = F("Schnüggenweg");
        break;
    }
    case 283707:
    {
        returnValue = F("Schnürackerweg");
        break;
    }
    case 283708:
    {
        returnValue = F("Schnürle");
        break;
    }
    case 283709:
    {
        returnValue = F("Schnürpflinger Str.");
        break;
    }
    case 283710:
    {
        returnValue = F("Schnürstr.");
        break;
    }
    case 283711:
    {
        returnValue = F("Schoaland");
        break;
    }
    case 283712:
    {
        returnValue = F("Schoapdiek");
        break;
    }
    case 283713:
    {
        returnValue = F("Schobbachstr.");
        break;
    }
    case 283714:
    {
        returnValue = F("Schobbachweg");
        break;
    }
    case 283715:
    {
        returnValue = F("Schobbejeasje");
        break;
    }
    case 283716:
    {
        returnValue = F("Schobbostr.");
        break;
    }
    case 283717:
    {
        returnValue = F("Schobdach");
        break;
    }
    case 283718:
    {
        returnValue = F("Schobdacher Weg");
        break;
    }
    case 283719:
    {
        returnValue = F("Schobeck");
        break;
    }
    case 283720:
    {
        returnValue = F("Schobeke");
        break;
    }
    case 283721:
    {
        returnValue = F("Schobergasse");
        break;
    }
    case 283722:
    {
        returnValue = F("Schobermühle");
        break;
    }
    case 283723:
    {
        returnValue = F("Schoberstr.");
        break;
    }
    case 283724:
    {
        returnValue = F("Schobertiefenweg");
        break;
    }
    case 283725:
    {
        returnValue = F("Schobertweg");
        break;
    }
    case 283726:
    {
        returnValue = F("Schoberweg");
        break;
    }
    case 283727:
    {
        returnValue = F("Schoblochweg");
        break;
    }
    case 283728:
    {
        returnValue = F("Schobrigsweg");
        break;
    }
    case 283729:
    {
        returnValue = F("Schobrinker Weg");
        break;
    }
    case 283730:
    {
        returnValue = F("Schobsegrund");
        break;
    }
    case 283731:
    {
        returnValue = F("Schobsetal");
        break;
    }
    case 283732:
    {
        returnValue = F("Schobsetalstr.");
        break;
    }
    case 283733:
    {
        returnValue = F("Schobuliweg");
        break;
    }
    case 283734:
    {
        returnValue = F("Schobüller Str.");
        break;
    }
    case 283735:
    {
        returnValue = F("Schobüller Weg");
        break;
    }
    case 283736:
    {
        returnValue = F("Schochenhauweg");
        break;
    }
    case 283737:
    {
        returnValue = F("Schochenhofweg");
        break;
    }
    case 283738:
    {
        returnValue = F("Schochenweg");
        break;
    }
    case 283739:
    {
        returnValue = F("Schochertweg");
        break;
    }
    case 283740:
    {
        returnValue = F("Schochplan");
        break;
    }
    case 283741:
    {
        returnValue = F("Schochstr.");
        break;
    }
    case 283742:
    {
        returnValue = F("Schochwitzer Str.");
        break;
    }
    case 283743:
    {
        returnValue = F("Schockemöhler Damm");
        break;
    }
    case 283744:
    {
        returnValue = F("Schockenberg");
        break;
    }
    case 283745:
    {
        returnValue = F("Schockengartenweg");
        break;
    }
    case 283746:
    {
        returnValue = F("Schockengasse");
        break;
    }
    case 283747:
    {
        returnValue = F("Schockenseepark");
        break;
    }
    case 283748:
    {
        returnValue = F("Schocketal");
        break;
    }
    case 283749:
    {
        returnValue = F("Schockholzgrund");
        break;
    }
    case 283750:
    {
        returnValue = F("Schockumer Deich");
        break;
    }
    case 283751:
    {
        returnValue = F("Schockumer Weg");
        break;
    }
    case 283752:
    {
        returnValue = F("Schodden Hof");
        break;
    }
    case 283753:
    {
        returnValue = F("Schodenbüttel");
        break;
    }
    case 283754:
    {
        returnValue = F("Schodener Str.");
        break;
    }
    case 283755:
    {
        returnValue = F("Schodererstr.");
        break;
    }
    case 283756:
    {
        returnValue = F("Schodersstr.");
        break;
    }
    case 283757:
    {
        returnValue = F("Schoderstedt");
        break;
    }
    case 283758:
    {
        returnValue = F("Schoderstedter Beek");
        break;
    }
    case 283759:
    {
        returnValue = F("Schoderstedter Feld");
        break;
    }
    case 283760:
    {
        returnValue = F("Schoderstedter Ring");
        break;
    }
    case 283761:
    {
        returnValue = F("Schoderstedter Str.");
        break;
    }
    case 283762:
    {
        returnValue = F("Schoelkensdyck");
        break;
    }
    case 283763:
    {
        returnValue = F("Schoellers Weg");
        break;
    }
    case 283764:
    {
        returnValue = F("Schoellerstr.");
        break;
    }
    case 283765:
    {
        returnValue = F("Schoenstr.");
        break;
    }
    case 283766:
    {
        returnValue = F("Schoettlestr.");
        break;
    }
    case 283767:
    {
        returnValue = F("Schoferstr.");
        break;
    }
    case 283768:
    {
        returnValue = F("Schofterweg");
        break;
    }
    case 283769:
    {
        returnValue = F("Schohasberger Str.");
        break;
    }
    case 283770:
    {
        returnValue = F("Schohasberger Weg");
        break;
    }
    case 283771:
    {
        returnValue = F("Schohleck");
        break;
    }
    case 283772:
    {
        returnValue = F("Schoholtenser Str.");
        break;
    }
    case 283773:
    {
        returnValue = F("Schohusenweg");
        break;
    }
    case 283774:
    {
        returnValue = F("Schokamp");
        break;
    }
    case 283775:
    {
        returnValue = F("Schokengasse");
        break;
    }
    case 283776:
    {
        returnValue = F("Schokoladen- und Liebeswegerl");
        break;
    }
    case 283777:
    {
        returnValue = F("Schokoladenring");
        break;
    }
    case 283778:
    {
        returnValue = F("Schokoladenweg");
        break;
    }
    case 283779:
    {
        returnValue = F("Scholandstr.");
        break;
    }
    case 283780:
    {
        returnValue = F("Scholandweg");
        break;
    }
    case 283781:
    {
        returnValue = F("Scholarenpfad");
        break;
    }
    case 283782:
    {
        returnValue = F("Scholasterei");
        break;
    }
    case 283783:
    {
        returnValue = F("Scholastikastr.");
        break;
    }
    case 283784:
    {
        returnValue = F("Scholasweg");
        break;
    }
    case 283785:
    {
        returnValue = F("Scholaustr.");
        break;
    }
    case 283786:
    {
        returnValue = F("Scholbrocker Heide");
        break;
    }
    case 283787:
    {
        returnValue = F("Scholderplatz");
        break;
    }
    case 283788:
    {
        returnValue = F("Scholderstr.");
        break;
    }
    case 283789:
    {
        returnValue = F("Scholenfleth");
        break;
    }
    case 283790:
    {
        returnValue = F("Scholer Str.");
        break;
    }
    case 283791:
    {
        returnValue = F("Scholerholz");
        break;
    }
    case 283792:
    {
        returnValue = F("Scholerstr.");
        break;
    }
    case 283793:
    {
        returnValue = F("Scholien");
        break;
    }
    case 283794:
    {
        returnValue = F("Scholienstr.");
        break;
    }
    case 283795:
    {
        returnValue = F("Scholiser Weinberg");
        break;
    }
    case 283796:
    {
        returnValue = F("Scholitzer Brücke");
        break;
    }
    case 283797:
    {
        returnValue = F("Scholitzer Platz");
        break;
    }
    case 283798:
    {
        returnValue = F("Scholitzer Weg");
        break;
    }
    case 283799:
    {
        returnValue = F("Scholkwai");
        break;
    }
    case 283800:
    {
        returnValue = F("Schollacker");
        break;
    }
    case 283801:
    {
        returnValue = F("Schollagestr.");
        break;
    }
    case 283802:
    {
        returnValue = F("Scholland");
        break;
    }
    case 283803:
    {
        returnValue = F("Schollbrockstr.");
        break;
    }
    case 283804:
    {
        returnValue = F("Schollbrucher Str.");
        break;
    }
    case 283805:
    {
        returnValue = F("Schollbrunner Str.");
        break;
    }
    case 283806:
    {
        returnValue = F("Scholle");
        break;
    }
    case 283807:
    {
        returnValue = F("Scholleite");
        break;
    }
    case 283808:
    {
        returnValue = F("Schollen");
        break;
    }
    case 283809:
    {
        returnValue = F("Schollenbach");
        break;
    }
    case 283810:
    {
        returnValue = F("Schollenberg");
        break;
    }
    case 283811:
    {
        returnValue = F("Schollenbergsweg");
        break;
    }
    case 283812:
    {
        returnValue = F("Schollenbergweg");
        break;
    }
    case 283813:
    {
        returnValue = F("Schollenbächleweg");
        break;
    }
    case 283814:
    {
        returnValue = F("Schollendamm");
        break;
    }
    case 283815:
    {
        returnValue = F("Schollener Str.");
        break;
    }
    case 283816:
    {
        returnValue = F("Schollener Weg");
        break;
    }
    case 283817:
    {
        returnValue = F("Schollenfeld");
        break;
    }
    case 283818:
    {
        returnValue = F("Schollengasse");
        break;
    }
    case 283819:
    {
        returnValue = F("Schollenhaldenstr.");
        break;
    }
    case 283820:
    {
        returnValue = F("Schollenhofweg");
        break;
    }
    case 283821:
    {
        returnValue = F("Schollenkamp");
        break;
    }
    case 283822:
    {
        returnValue = F("Schollenpadd");
        break;
    }
    case 283823:
    {
        returnValue = F("Schollenrainweg");
        break;
    }
    case 283824:
    {
        returnValue = F("Schollenreuther Weg");
        break;
    }
    case 283825:
    {
        returnValue = F("Schollenrondell");
        break;
    }
    case 283826:
    {
        returnValue = F("Schollenstieg");
        break;
    }
    case 283827:
    {
        returnValue = F("Schollenstuckweg");
        break;
    }
    case 283828:
    {
        returnValue = F("Schollenweg");
        break;
    }
    case 283829:
    {
        returnValue = F("Schollenäcker");
        break;
    }
    case 283830:
    {
        returnValue = F("Schollergasse");
        break;
    }
    case 283831:
    {
        returnValue = F("Schollerstr.");
        break;
    }
    case 283832:
    {
        returnValue = F("Schollerwiese");
        break;
    }
    case 283833:
    {
        returnValue = F("Schollesflur");
        break;
    }
    case 283834:
    {
        returnValue = F("Schollgernweg");
        break;
    }
    case 283835:
    {
        returnValue = F("Schollhof");
        break;
    }
    case 283836:
    {
        returnValue = F("Schollhöfer Str.");
        break;
    }
    case 283837:
    {
        returnValue = F("Schollkamp");
        break;
    }
    case 283838:
    {
        returnValue = F("Schollklingerweg");
        break;
    }
    case 283839:
    {
        returnValue = F("Scholls Gässchen");
        break;
    }
    case 283840:
    {
        returnValue = F("Schollsbrücke");
        break;
    }
    case 283841:
    {
        returnValue = F("Schollstr.");
        break;
    }
    case 283842:
    {
        returnValue = F("Schollweg");
        break;
    }
    case 283843:
    {
        returnValue = F("Schollwiese");
        break;
    }
    case 283844:
    {
        returnValue = F("Schollwiesenstr.");
        break;
    }
    case 283845:
    {
        returnValue = F("Scholländer Weg");
        break;
    }
    case 283846:
    {
        returnValue = F("Scholmwehrbrücke");
        break;
    }
    case 283847:
    {
        returnValue = F("Scholppenäcker");
        break;
    }
    case 283848:
    {
        returnValue = F("Scholtenhof");
        break;
    }
    case 283849:
    {
        returnValue = F("Scholtenkamp");
        break;
    }
    case 283850:
    {
        returnValue = F("Scholtenstr.");
        break;
    }
    case 283851:
    {
        returnValue = F("Scholtenweg");
        break;
    }
    case 283852:
    {
        returnValue = F("Scholtmanns Diek");
        break;
    }
    case 283853:
    {
        returnValue = F("Scholtwiese");
        break;
    }
    case 283854:
    {
        returnValue = F("Scholtzestr.");
        break;
    }
    case 283855:
    {
        returnValue = F("Scholtzstr.");
        break;
    }
    case 283856:
    {
        returnValue = F("Scholvener Str.");
        break;
    }
    case 283857:
    {
        returnValue = F("Scholver Str.");
        break;
    }
    case 283858:
    {
        returnValue = F("Scholzenecken");
        break;
    }
    case 283859:
    {
        returnValue = F("Scholzenhof");
        break;
    }
    case 283860:
    {
        returnValue = F("Scholzenplanweg");
        break;
    }
    case 283861:
    {
        returnValue = F("Scholzenviertel");
        break;
    }
    case 283862:
    {
        returnValue = F("Scholzeweg");
        break;
    }
    case 283863:
    {
        returnValue = F("Schomakerstr.");
        break;
    }
    case 283864:
    {
        returnValue = F("Schomakersweg");
        break;
    }
    case 283865:
    {
        returnValue = F("Schomakerweg");
        break;
    }
    case 283866:
    {
        returnValue = F("Schomannsgasse");
        break;
    }
    case 283867:
    {
        returnValue = F("Schomberg");
        break;
    }
    case 283868:
    {
        returnValue = F("Schombergerweg");
        break;
    }
    case 283869:
    {
        returnValue = F("Schomburg");
        break;
    }
    case 283870:
    {
        returnValue = F("Schomburger Str.");
        break;
    }
    case 283871:
    {
        returnValue = F("Schomburgstr.");
        break;
    }
    case 283872:
    {
        returnValue = F("Schomburgsweg");
        break;
    }
    case 283873:
    {
        returnValue = F("Schomergasse");
        break;
    }
    case 283874:
    {
        returnValue = F("Schomerswolder Weg");
        break;
    }
    case 283875:
    {
        returnValue = F("Schomerusstr.");
        break;
    }
    case 283876:
    {
        returnValue = F("Schommelsnaaf");
        break;
    }
    case 283877:
    {
        returnValue = F("Schommerstückstr.");
        break;
    }
    case 283878:
    {
        returnValue = F("Schomäckerstr.");
        break;
    }
    case 283879:
    {
        returnValue = F("Schonach");
        break;
    }
    case 283880:
    {
        returnValue = F("Schonachbach");
        break;
    }
    case 283881:
    {
        returnValue = F("Schonacher Str.");
        break;
    }
    case 283882:
    {
        returnValue = F("Schondelgrund");
        break;
    }
    case 283883:
    {
        returnValue = F("Schondelweg");
        break;
    }
    case 283884:
    {
        returnValue = F("Schonderfeld");
        break;
    }
    case 283885:
    {
        returnValue = F("Schondorfer Str.");
        break;
    }
    case 283886:
    {
        returnValue = F("Schondorferstr.");
        break;
    }
    case 283887:
    {
        returnValue = F("Schondorfstr.");
        break;
    }
    case 283888:
    {
        returnValue = F("Schondraer Str.");
        break;
    }
    case 283889:
    {
        returnValue = F("Schondratal");
        break;
    }
    case 283890:
    {
        returnValue = F("Schondratal Radweg");
        break;
    }
    case 283891:
    {
        returnValue = F("Schondraweg");
        break;
    }
    case 283892:
    {
        returnValue = F("Schonebeck");
        break;
    }
    case 283893:
    {
        returnValue = F("Schoneberger Str.");
        break;
    }
    case 283894:
    {
        returnValue = F("Schoneeichweg");
        break;
    }
    case 283895:
    {
        returnValue = F("Schonekindstr.");
        break;
    }
    case 283896:
    {
        returnValue = F("Schonenbachstr.");
        break;
    }
    case 283897:
    {
        returnValue = F("Schonenberg");
        break;
    }
    case 283898:
    {
        returnValue = F("Schonenfahrerstr.");
        break;
    }
    case 283899:
    {
        returnValue = F("Schonenfeld");
        break;
    }
    case 283900:
    {
        returnValue = F("Schonergang");
        break;
    }
    case 283901:
    {
        returnValue = F("Schonerstr.");
        break;
    }
    case 283902:
    {
        returnValue = F("Schonerweg");
        break;
    }
    case 283903:
    {
        returnValue = F("Schonewegstr.");
        break;
    }
    case 283904:
    {
        returnValue = F("Schongauer Str.");
        break;
    }
    case 283905:
    {
        returnValue = F("Schongauer Weg");
        break;
    }
    case 283906:
    {
        returnValue = F("Schongauerstr.");
        break;
    }
    case 283907:
    {
        returnValue = F("Schongauerweg");
        break;
    }
    case 283908:
    {
        returnValue = F("Schongerring");
        break;
    }
    case 283909:
    {
        returnValue = F("Schongerstr.");
        break;
    }
    case 283910:
    {
        returnValue = F("Schongerweg");
        break;
    }
    case 283911:
    {
        returnValue = F("Schonhorststr.");
        break;
    }
    case 283912:
    {
        returnValue = F("Schoninger Str.");
        break;
    }
    case 283913:
    {
        returnValue = F("Schoninger Weg");
        break;
    }
    case 283914:
    {
        returnValue = F("Schonisweilerstr.");
        break;
    }
    case 283915:
    {
        returnValue = F("Schonlaublick");
        break;
    }
    case 283916:
    {
        returnValue = F("Schonlaustr.");
        break;
    }
    case 283917:
    {
        returnValue = F("Schonnebecker Str.");
        break;
    }
    case 283918:
    {
        returnValue = F("Schonscheider Weg");
        break;
    }
    case 283919:
    {
        returnValue = F("Schonstetter Str.");
        break;
    }
    case 283920:
    {
        returnValue = F("Schonstr.");
        break;
    }
    case 283921:
    {
        returnValue = F("Schonunger Bucht");
        break;
    }
    case 283922:
    {
        returnValue = F("Schonunger Pfad");
        break;
    }
    case 283923:
    {
        returnValue = F("Schonunger Str.");
        break;
    }
    case 283924:
    {
        returnValue = F("Schonunger Weg");
        break;
    }
    case 283925:
    {
        returnValue = F("Schonungsweg");
        break;
    }
    case 283926:
    {
        returnValue = F("Schonwaldweg");
        break;
    }
    case 283927:
    {
        returnValue = F("Schoobrook");
        break;
    }
    case 283928:
    {
        returnValue = F("Schoofslohne");
        break;
    }
    case 283929:
    {
        returnValue = F("Schoofstr.");
        break;
    }
    case 283930:
    {
        returnValue = F("Schoofsweg");
        break;
    }
    case 283931:
    {
        returnValue = F("Schoofweg");
        break;
    }
    case 283932:
    {
        returnValue = F("Schookerberg");
        break;
    }
    case 283933:
    {
        returnValue = F("School Road");
        break;
    }
    case 283934:
    {
        returnValue = F("Schoolbarg");
        break;
    }
    case 283935:
    {
        returnValue = F("Schoolbrink");
        break;
    }
    case 283936:
    {
        returnValue = F("Schoolkamp");
        break;
    }
    case 283937:
    {
        returnValue = F("Schoolkoppel");
        break;
    }
    case 283938:
    {
        returnValue = F("Schoolland");
        break;
    }
    case 283939:
    {
        returnValue = F("Schoollandsweg");
        break;
    }
    case 283940:
    {
        returnValue = F("Schoolmestersbagen");
        break;
    }
    case 283941:
    {
        returnValue = F("Schoolmoor");
        break;
    }
    case 283942:
    {
        returnValue = F("Schoolpad");
        break;
    }
    case 283943:
    {
        returnValue = F("Schoolpadd");
        break;
    }
    case 283944:
    {
        returnValue = F("Schoolpat");
        break;
    }
    case 283945:
    {
        returnValue = F("Schoolpatt");
        break;
    }
    case 283946:
    {
        returnValue = F("Schoolredder");
        break;
    }
    case 283947:
    {
        returnValue = F("Schoolsiekengang");
        break;
    }
    case 283948:
    {
        returnValue = F("Schoolspäting");
        break;
    }
    case 283949:
    {
        returnValue = F("Schoolsteege");
        break;
    }
    case 283950:
    {
        returnValue = F("Schoolstege");
        break;
    }
    case 283951:
    {
        returnValue = F("Schoolstieg");
        break;
    }
    case 283952:
    {
        returnValue = F("Schoolstraat");
        break;
    }
    case 283953:
    {
        returnValue = F("Schoolstroot");
        break;
    }
    case 283954:
    {
        returnValue = F("Schooltwiete");
        break;
    }
    case 283955:
    {
        returnValue = F("Schoolwech");
        break;
    }
    case 283956:
    {
        returnValue = F("Schoolweg");
        break;
    }
    case 283957:
    {
        returnValue = F("Schoonebeekstr.");
        break;
    }
    case 283958:
    {
        returnValue = F("Schoonorther Kreisstr.");
        break;
    }
    case 283959:
    {
        returnValue = F("Schoonorther Landesstr.");
        break;
    }
    case 283960:
    {
        returnValue = F("Schoonorther Möhlenhörn");
        break;
    }
    case 283961:
    {
        returnValue = F("Schoonorther Str.");
        break;
    }
    case 283962:
    {
        returnValue = F("Schoopschlopp");
        break;
    }
    case 283963:
    {
        returnValue = F("Schoopstrift");
        break;
    }
    case 283964:
    {
        returnValue = F("Schoopsweg");
        break;
    }
    case 283965:
    {
        returnValue = F("Schoopwäsche");
        break;
    }
    case 283966:
    {
        returnValue = F("Schoorsteinweg");
        break;
    }
    case 283967:
    {
        returnValue = F("Schoorteich");
        break;
    }
    case 283968:
    {
        returnValue = F("Schoosbergstr.");
        break;
    }
    case 283969:
    {
        returnValue = F("Schooster Str.");
        break;
    }
    case 283970:
    {
        returnValue = F("Schoosters Kamp");
        break;
    }
    case 283971:
    {
        returnValue = F("Schoosterspadd");
        break;
    }
    case 283972:
    {
        returnValue = F("Schoosterstieg");
        break;
    }
    case 283973:
    {
        returnValue = F("Schoosterweg");
        break;
    }
    case 283974:
    {
        returnValue = F("Schoosweg");
        break;
    }
    case 283975:
    {
        returnValue = F("Schooßweg");
        break;
    }
    case 283976:
    {
        returnValue = F("Schopdrift");
        break;
    }
    case 283977:
    {
        returnValue = F("Schopediek");
        break;
    }
    case 283978:
    {
        returnValue = F("Schopenhauer Str.");
        break;
    }
    case 283979:
    {
        returnValue = F("Schopenhauerstr.");
        break;
    }
    case 283980:
    {
        returnValue = F("Schopenhauerweg");
        break;
    }
    case 283981:
    {
        returnValue = F("Schopf");
        break;
    }
    case 283982:
    {
        returnValue = F("Schopfelen");
        break;
    }
    case 283983:
    {
        returnValue = F("Schopfelenstr.");
        break;
    }
    case 283984:
    {
        returnValue = F("Schopfelentalweg");
        break;
    }
    case 283985:
    {
        returnValue = F("Schopfelenweg");
        break;
    }
    case 283986:
    {
        returnValue = F("Schopfelerstr.");
        break;
    }
    case 283987:
    {
        returnValue = F("Schopfelnweg");
        break;
    }
    case 283988:
    {
        returnValue = F("Schopfelweg");
        break;
    }
    case 283989:
    {
        returnValue = F("Schopfenleite");
        break;
    }
    case 283990:
    {
        returnValue = F("Schopfenstr.");
        break;
    }
    case 283991:
    {
        returnValue = F("Schopfenweg");
        break;
    }
    case 283992:
    {
        returnValue = F("Schopferergasse");
        break;
    }
    case 283993:
    {
        returnValue = F("Schopfersbrunnenweg");
        break;
    }
    case 283994:
    {
        returnValue = F("Schopfgasse");
        break;
    }
    case 283995:
    {
        returnValue = F("Schopfgraben");
        break;
    }
    case 283996:
    {
        returnValue = F("Schopfheimer Allee");
        break;
    }
    case 283997:
    {
        returnValue = F("Schopfheimer Landstr.");
        break;
    }
    case 283998:
    {
        returnValue = F("Schopfheimer Str.");
        break;
    }
    case 283999:
    {
        returnValue = F("Schopfheimerweg");
        break;
    }
    case 284000:
    {
        returnValue = F("Schopfhofer Str.");
        break;
    }
    case 284001:
    {
        returnValue = F("Schopflachstr.");
        break;
    }
    case 284002:
    {
        returnValue = F("Schopflenbergweg");
        break;
    }
    case 284003:
    {
        returnValue = F("Schopfloch");
        break;
    }
    case 284004:
    {
        returnValue = F("Schopflocher Haldenweg");
        break;
    }
    case 284005:
    {
        returnValue = F("Schopflocher Str.");
        break;
    }
    case 284006:
    {
        returnValue = F("Schopflocher Teichweg");
        break;
    }
    case 284007:
    {
        returnValue = F("Schopflocher Weg");
        break;
    }
    case 284008:
    {
        returnValue = F("Schopflochweg");
        break;
    }
    case 284009:
    {
        returnValue = F("Schopfloher Str.");
        break;
    }
    case 284010:
    {
        returnValue = F("Schopfwiesenstr.");
        break;
    }
    case 284011:
    {
        returnValue = F("Schopfäcker");
        break;
    }
    case 284012:
    {
        returnValue = F("Schophof");
        break;
    }
    case 284013:
    {
        returnValue = F("Schophovener Str.");
        break;
    }
    case 284014:
    {
        returnValue = F("Schopke");
        break;
    }
    case 284015:
    {
        returnValue = F("Schopmeyerstr.");
        break;
    }
    case 284016:
    {
        returnValue = F("Schoppachstr.");
        break;
    }
    case 284017:
    {
        returnValue = F("Schoppastr.");
        break;
    }
    case 284018:
    {
        returnValue = F("Schoppbergstr.");
        break;
    }
    case 284019:
    {
        returnValue = F("Schoppen");
        break;
    }
    case 284020:
    {
        returnValue = F("Schoppenbergweg");
        break;
    }
    case 284021:
    {
        returnValue = F("Schoppenbusch");
        break;
    }
    case 284022:
    {
        returnValue = F("Schoppendellweg");
        break;
    }
    case 284023:
    {
        returnValue = F("Schoppengarten");
        break;
    }
    case 284024:
    {
        returnValue = F("Schoppenhalde");
        break;
    }
    case 284025:
    {
        returnValue = F("Schoppenheide");
        break;
    }
    case 284026:
    {
        returnValue = F("Schoppenkamp");
        break;
    }
    case 284027:
    {
        returnValue = F("Schoppenmauer");
        break;
    }
    case 284028:
    {
        returnValue = F("Schoppenmühl");
        break;
    }
    case 284029:
    {
        returnValue = F("Schoppenohr");
        break;
    }
    case 284030:
    {
        returnValue = F("Schoppenstedter Weg");
        break;
    }
    case 284031:
    {
        returnValue = F("Schoppenstiege");
        break;
    }
    case 284032:
    {
        returnValue = F("Schoppenstiel");
        break;
    }
    case 284033:
    {
        returnValue = F("Schoppenstr.");
        break;
    }
    case 284034:
    {
        returnValue = F("Schoppenweg");
        break;
    }
    case 284035:
    {
        returnValue = F("Schoppenwiesenweg");
        break;
    }
    case 284036:
    {
        returnValue = F("Schopperbergweg");
        break;
    }
    case 284037:
    {
        returnValue = F("Schopperplatz");
        break;
    }
    case 284038:
    {
        returnValue = F("Schopperstr.");
        break;
    }
    case 284039:
    {
        returnValue = F("Schopperstr.-Ost");
        break;
    }
    case 284040:
    {
        returnValue = F("Schopperweg");
        break;
    }
    case 284041:
    {
        returnValue = F("Schoppmanns Kamp");
        break;
    }
    case 284042:
    {
        returnValue = F("Schoppmannsallee");
        break;
    }
    case 284043:
    {
        returnValue = F("Schoppstr.");
        break;
    }
    case 284044:
    {
        returnValue = F("Schopsdorfer Bahnhofstr.");
        break;
    }
    case 284045:
    {
        returnValue = F("Schopsdorfer Chaussee");
        break;
    }
    case 284046:
    {
        returnValue = F("Schopsdorfer Dorfstr.");
        break;
    }
    case 284047:
    {
        returnValue = F("Schopsdorfer Waldstr.");
        break;
    }
    case 284048:
    {
        returnValue = F("Schopshofer Weg");
        break;
    }
    case 284049:
    {
        returnValue = F("Schopsland");
        break;
    }
    case 284050:
    {
        returnValue = F("Schopspad");
        break;
    }
    case 284051:
    {
        returnValue = F("Schopsweg");
        break;
    }
    case 284052:
    {
        returnValue = F("Schopswäsch");
        break;
    }
    case 284053:
    {
        returnValue = F("Schorba");
        break;
    }
    case 284054:
    {
        returnValue = F("Schorbacher Weg");
        break;
    }
    case 284055:
    {
        returnValue = F("Schorbachstr.");
        break;
    }
    case 284056:
    {
        returnValue = F("Schorbenhöft");
        break;
    }
    case 284057:
    {
        returnValue = F("Schorbrink");
        break;
    }
    case 284058:
    {
        returnValue = F("Schorbuser Weg");
        break;
    }
    case 284059:
    {
        returnValue = F("Schoren");
        break;
    }
    case 284060:
    {
        returnValue = F("Schoren-Weg");
        break;
    }
    case 284061:
    {
        returnValue = F("Schorenbachweg");
        break;
    }
    case 284062:
    {
        returnValue = F("Schorenblick");
        break;
    }
    case 284063:
    {
        returnValue = F("Schorenbrede");
        break;
    }
    case 284064:
    {
        returnValue = F("Schorendorferweg");
        break;
    }
    case 284065:
    {
        returnValue = F("Schorener Str.");
        break;
    }
    case 284066:
    {
        returnValue = F("Schorenfeldstr.");
        break;
    }
    case 284067:
    {
        returnValue = F("Schorengasse");
        break;
    }
    case 284068:
    {
        returnValue = F("Schorengraben");
        break;
    }
    case 284069:
    {
        returnValue = F("Schorenhof");
        break;
    }
    case 284070:
    {
        returnValue = F("Schorenhofweg");
        break;
    }
    case 284071:
    {
        returnValue = F("Schorenmättleweg");
        break;
    }
    case 284072:
    {
        returnValue = F("Schorenmättweg");
        break;
    }
    case 284073:
    {
        returnValue = F("Schorenmühlenweg");
        break;
    }
    case 284074:
    {
        returnValue = F("Schorenstr.");
        break;
    }
    case 284075:
    {
        returnValue = F("Schorenwaldstr.");
        break;
    }
    case 284076:
    {
        returnValue = F("Schorenweg");
        break;
    }
    case 284077:
    {
        returnValue = F("Schorerhofweg");
        break;
    }
    case 284078:
    {
        returnValue = F("Schorerstr.");
        break;
    }
    case 284079:
    {
        returnValue = F("Schorerweg");
        break;
    }
    case 284080:
    {
        returnValue = F("Schorffeldweg");
        break;
    }
    case 284081:
    {
        returnValue = F("Schorfheide");
        break;
    }
    case 284082:
    {
        returnValue = F("Schorfheider Str.");
        break;
    }
    case 284083:
    {
        returnValue = F("Schorfheidestr.");
        break;
    }
    case 284084:
    {
        returnValue = F("Schorfteichstr.");
        break;
    }
    case 284085:
    {
        returnValue = F("Schorfweg");
        break;
    }
    case 284086:
    {
        returnValue = F("Schorgasttal");
        break;
    }
    case 284087:
    {
        returnValue = F("Schoriner Weg");
        break;
    }
    case 284088:
    {
        returnValue = F("Schorkendorfer Weg");
        break;
    }
    case 284089:
    {
        returnValue = F("Schorkstr.");
        break;
    }
    case 284090:
    {
        returnValue = F("Schorl");
        break;
    }
    case 284091:
    {
        returnValue = F("Schorlachstr.");
        break;
    }
    case 284092:
    {
        returnValue = F("Schorlemer Damm");
        break;
    }
    case 284093:
    {
        returnValue = F("Schorlemer Hof");
        break;
    }
    case 284094:
    {
        returnValue = F("Schorlemer Str.");
        break;
    }
    case 284095:
    {
        returnValue = F("Schorlemer Weg");
        break;
    }
    case 284096:
    {
        returnValue = F("Schorlemer-Alst-Str.");
        break;
    }
    case 284097:
    {
        returnValue = F("Schorlemerstr.");
        break;
    }
    case 284098:
    {
        returnValue = F("Schorlemmers Kamp");
        break;
    }
    case 284099:
    {
        returnValue = F("Schorlemmerstr.");
        break;
    }
    case 284100:
    {
        returnValue = F("Schorlenberg");
        break;
    }
    case 284101:
    {
        returnValue = F("Schorlenberger Str.");
        break;
    }
    case 284102:
    {
        returnValue = F("Schorlenbergstr.");
        break;
    }
    case 284103:
    {
        returnValue = F("Schormsfeld");
        break;
    }
    case 284104:
    {
        returnValue = F("Schorn");
        break;
    }
    case 284105:
    {
        returnValue = F("Schornbacher Platz");
        break;
    }
    case 284106:
    {
        returnValue = F("Schornbacher Weg");
        break;
    }
    case 284107:
    {
        returnValue = F("Schornbaumstr.");
        break;
    }
    case 284108:
    {
        returnValue = F("Schornberg");
        break;
    }
    case 284109:
    {
        returnValue = F("Schornbusch");
        break;
    }
    case 284110:
    {
        returnValue = F("Schornbuschstr.");
        break;
    }
    case 284111:
    {
        returnValue = F("Schornbuschweg");
        break;
    }
    case 284112:
    {
        returnValue = F("Schorndelle");
        break;
    }
    case 284113:
    {
        returnValue = F("Schorndorfer Str.");
        break;
    }
    case 284114:
    {
        returnValue = F("Schorndorfer Weg");
        break;
    }
    case 284115:
    {
        returnValue = F("Schornemattstr.");
        break;
    }
    case 284116:
    {
        returnValue = F("Schornenweg");
        break;
    }
    case 284117:
    {
        returnValue = F("Schorner Str.");
        break;
    }
    case 284118:
    {
        returnValue = F("Schorner Strandweg");
        break;
    }
    case 284119:
    {
        returnValue = F("Schorner Weg");
        break;
    }
    case 284120:
    {
        returnValue = F("Schornerbuckweg");
        break;
    }
    case 284121:
    {
        returnValue = F("Schornfeld");
        break;
    }
    case 284122:
    {
        returnValue = F("Schornfeldstr.");
        break;
    }
    case 284123:
    {
        returnValue = F("Schornhofstr.");
        break;
    }
    case 284124:
    {
        returnValue = F("Schornmühlstr.");
        break;
    }
    case 284125:
    {
        returnValue = F("Schornreuteweg");
        break;
    }
    case 284126:
    {
        returnValue = F("Schornring");
        break;
    }
    case 284127:
    {
        returnValue = F("Schornsberg");
        break;
    }
    case 284128:
    {
        returnValue = F("Schornsheimer Weg");
        break;
    }
    case 284129:
    {
        returnValue = F("Schornsteinfegergasse");
        break;
    }
    case 284130:
    {
        returnValue = F("Schornsteinfegerstr.");
        break;
    }
    case 284131:
    {
        returnValue = F("Schornsteinlinie");
        break;
    }
    case 284132:
    {
        returnValue = F("Schornstr.");
        break;
    }
    case 284133:
    {
        returnValue = F("Schornsweg");
        break;
    }
    case 284134:
    {
        returnValue = F("Schornweg");
        break;
    }
    case 284135:
    {
        returnValue = F("Schornweisacher Str.");
        break;
    }
    case 284136:
    {
        returnValue = F("Schorre");
        break;
    }
    case 284137:
    {
        returnValue = F("Schorrehy");
        break;
    }
    case 284138:
    {
        returnValue = F("Schorrenblick");
        break;
    }
    case 284139:
    {
        returnValue = F("Schorrenbuckel");
        break;
    }
    case 284140:
    {
        returnValue = F("Schorrenburgstr.");
        break;
    }
    case 284141:
    {
        returnValue = F("Schorrenbühl");
        break;
    }
    case 284142:
    {
        returnValue = F("Schorrensteige");
        break;
    }
    case 284143:
    {
        returnValue = F("Schorrenstr.");
        break;
    }
    case 284144:
    {
        returnValue = F("Schorrental");
        break;
    }
    case 284145:
    {
        returnValue = F("Schorrenteichweg");
        break;
    }
    case 284146:
    {
        returnValue = F("Schorrentin");
        break;
    }
    case 284147:
    {
        returnValue = F("Schorrenweg");
        break;
    }
    case 284148:
    {
        returnValue = F("Schorrenweiherstr.");
        break;
    }
    case 284149:
    {
        returnValue = F("Schorrenwiesen");
        break;
    }
    case 284150:
    {
        returnValue = F("Schorrhaldenweg");
        break;
    }
    case 284151:
    {
        returnValue = F("Schorrmühlstr.");
        break;
    }
    case 284152:
    {
        returnValue = F("Schorrweg");
        break;
    }
    case 284153:
    {
        returnValue = F("Schorschebuckel");
        break;
    }
    case 284154:
    {
        returnValue = F("Schorsches Weg");
        break;
    }
    case 284155:
    {
        returnValue = F("Schorsodrom");
        break;
    }
    case 284156:
    {
        returnValue = F("Schorssower Weg");
        break;
    }
    case 284157:
    {
        returnValue = F("Schortau");
        break;
    }
    case 284158:
    {
        returnValue = F("Schortauer Nebenweg");
        break;
    }
    case 284159:
    {
        returnValue = F("Schortauer Str.");
        break;
    }
    case 284160:
    {
        returnValue = F("Schortauer Weg");
        break;
    }
    case 284161:
    {
        returnValue = F("Schorte");
        break;
    }
    case 284162:
    {
        returnValue = F("Schorte-Bergwerk");
        break;
    }
    case 284163:
    {
        returnValue = F("Schortenser Hammrich");
        break;
    }
    case 284164:
    {
        returnValue = F("Schortental");
        break;
    }
    case 284165:
    {
        returnValue = F("Schortestr.");
        break;
    }
    case 284166:
    {
        returnValue = F("Schosenweg");
        break;
    }
    case 284167:
    {
        returnValue = F("Schoshusen");
        break;
    }
    case 284168:
    {
        returnValue = F("Schosseifenstr.");
        break;
    }
    case 284169:
    {
        returnValue = F("Schossen");
        break;
    }
    case 284170:
    {
        returnValue = F("Schosserweg");
        break;
    }
    case 284171:
    {
        returnValue = F("Schossgraben");
        break;
    }
    case 284172:
    {
        returnValue = F("Schosspark");
        break;
    }
    case 284173:
    {
        returnValue = F("Schossparksteg");
        break;
    }
    case 284174:
    {
        returnValue = F("Schostakowitschplatz");
        break;
    }
    case 284175:
    {
        returnValue = F("Schosterbarg");
        break;
    }
    case 284176:
    {
        returnValue = F("Schostergang");
        break;
    }
    case 284177:
    {
        returnValue = F("Schosterkamp");
        break;
    }
    case 284178:
    {
        returnValue = F("Schosterpadd");
        break;
    }
    case 284179:
    {
        returnValue = F("Schosterredder");
        break;
    }
    case 284180:
    {
        returnValue = F("Schosterstieg");
        break;
    }
    case 284181:
    {
        returnValue = F("Schosterweg");
        break;
    }
    case 284182:
    {
        returnValue = F("Schostorfer Str.");
        break;
    }
    case 284183:
    {
        returnValue = F("Schote");
        break;
    }
    case 284184:
    {
        returnValue = F("Schotelstr.");
        break;
    }
    case 284185:
    {
        returnValue = F("Schotteliusstr.");
        break;
    }
    case 284186:
    {
        returnValue = F("Schottelstr.");
        break;
    }
    case 284187:
    {
        returnValue = F("Schottelweg");
        break;
    }
    case 284188:
    {
        returnValue = F("Schotten");
        break;
    }
    case 284189:
    {
        returnValue = F("Schottenacker");
        break;
    }
    case 284190:
    {
        returnValue = F("Schottenanger");
        break;
    }
    case 284191:
    {
        returnValue = F("Schottenau");
        break;
    }
    case 284192:
    {
        returnValue = F("Schottenbach");
        break;
    }
    case 284193:
    {
        returnValue = F("Schottenbachstr.");
        break;
    }
    case 284194:
    {
        returnValue = F("Schottenberg");
        break;
    }
    case 284195:
    {
        returnValue = F("Schottenbergtunnel");
        break;
    }
    case 284196:
    {
        returnValue = F("Schottenbergweg");
        break;
    }
    case 284197:
    {
        returnValue = F("Schottenbühlstr.");
        break;
    }
    case 284198:
    {
        returnValue = F("Schottener Str.");
        break;
    }
    case 284199:
    {
        returnValue = F("Schottener Weg");
        break;
    }
    case 284200:
    {
        returnValue = F("Schottenfeld");
        break;
    }
    case 284201:
    {
        returnValue = F("Schottengasse");
        break;
    }
    case 284202:
    {
        returnValue = F("Schottengrundweg");
        break;
    }
    case 284203:
    {
        returnValue = F("Schottenhammer");
        break;
    }
    case 284204:
    {
        returnValue = F("Schottenplatz");
        break;
    }
    case 284205:
    {
        returnValue = F("Schottenring");
        break;
    }
    case 284206:
    {
        returnValue = F("Schottensteinweg");
        break;
    }
    case 284207:
    {
        returnValue = F("Schottenstr.");
        break;
    }
    case 284208:
    {
        returnValue = F("Schottenteich");
        break;
    }
    case 284209:
    {
        returnValue = F("Schottenweg");
        break;
    }
    case 284210:
    {
        returnValue = F("Schottereyer Str.");
        break;
    }
    case 284211:
    {
        returnValue = F("Schottersrtasse");
        break;
    }
    case 284212:
    {
        returnValue = F("Schotterstr.");
        break;
    }
    case 284213:
    {
        returnValue = F("Schotterstrasse");
        break;
    }
    case 284214:
    {
        returnValue = F("Schotterwaldweg");
        break;
    }
    case 284215:
    {
        returnValue = F("Schotterweg");
        break;
    }
    case 284216:
    {
        returnValue = F("Schotterwerk");
        break;
    }
    case 284217:
    {
        returnValue = F("Schottgasse");
        break;
    }
    case 284218:
    {
        returnValue = F("Schottische Str.");
        break;
    }
    case 284219:
    {
        returnValue = F("Schottjer Grooden");
        break;
    }
    case 284220:
    {
        returnValue = F("Schottjer Str.");
        break;
    }
    case 284221:
    {
        returnValue = F("Schottkystr.");
        break;
    }
    case 284222:
    {
        returnValue = F("Schottland");
        break;
    }
    case 284223:
    {
        returnValue = F("Schottlandstr.");
        break;
    }
    case 284224:
    {
        returnValue = F("Schottmüllerstr.");
        break;
    }
    case 284225:
    {
        returnValue = F("Schottstr.");
        break;
    }
    case 284226:
    {
        returnValue = F("Schottstückenweg");
        break;
    }
    case 284227:
    {
        returnValue = F("Schottsweg");
        break;
    }
    case 284228:
    {
        returnValue = F("Schottvennenweg");
        break;
    }
    case 284229:
    {
        returnValue = F("Schottweg");
        break;
    }
    case 284230:
    {
        returnValue = F("Schottwiesen");
        break;
    }
    case 284231:
    {
        returnValue = F("Schotzwiesenweg");
        break;
    }
    case 284232:
    {
        returnValue = F("Schoulendyck");
        break;
    }
    case 284233:
    {
        returnValue = F("Schoweer Weg");
        break;
    }
    case 284234:
    {
        returnValue = F("Schoweweg");
        break;
    }
    case 284235:
    {
        returnValue = F("Schowtschickweg");
        break;
    }
    case 284236:
    {
        returnValue = F("Schozach");
        break;
    }
    case 284237:
    {
        returnValue = F("Schozach Aue");
        break;
    }
    case 284238:
    {
        returnValue = F("Schozacher Str.");
        break;
    }
    case 284239:
    {
        returnValue = F("Schozacher Weg");
        break;
    }
    case 284240:
    {
        returnValue = F("Schozachstr.");
        break;
    }
    case 284241:
    {
        returnValue = F("Schozachweg");
        break;
    }
    case 284242:
    {
        returnValue = F("Schoßaritzer Str.");
        break;
    }
    case 284243:
    {
        returnValue = F("Schoßbach");
        break;
    }
    case 284244:
    {
        returnValue = F("Schoßbachstr.");
        break;
    }
    case 284245:
    {
        returnValue = F("Schoßbergpromenade");
        break;
    }
    case 284246:
    {
        returnValue = F("Schoßfeldstr.");
        break;
    }
    case 284247:
    {
        returnValue = F("Schraberg");
        break;
    }
    case 284248:
    {
        returnValue = F("Schrabisch Mühle");
        break;
    }
    case 284249:
    {
        returnValue = F("Schrabsche Mühle");
        break;
    }
    case 284250:
    {
        returnValue = F("Schraden");
        break;
    }
    case 284251:
    {
        returnValue = F("Schradenbergstr.");
        break;
    }
    case 284252:
    {
        returnValue = F("Schrader-Velgen-Ring");
        break;
    }
    case 284253:
    {
        returnValue = F("Schrader-Velgen-Weg");
        break;
    }
    case 284254:
    {
        returnValue = F("Schradergang");
        break;
    }
    case 284255:
    {
        returnValue = F("Schraderpark");
        break;
    }
    case 284256:
    {
        returnValue = F("Schraders Legde");
        break;
    }
    case 284257:
    {
        returnValue = F("Schraderstr.");
        break;
    }
    case 284258:
    {
        returnValue = F("Schraderweg");
        break;
    }
    case 284259:
    {
        returnValue = F("Schradinstr.");
        break;
    }
    case 284260:
    {
        returnValue = F("Schradweg");
        break;
    }
    case 284261:
    {
        returnValue = F("Schraege Str.");
        break;
    }
    case 284262:
    {
        returnValue = F("Schraffertsweg");
        break;
    }
    case 284263:
    {
        returnValue = F("Schrage Esch");
        break;
    }
    case 284264:
    {
        returnValue = F("Schragen");
        break;
    }
    case 284265:
    {
        returnValue = F("Schragenberg");
        break;
    }
    case 284266:
    {
        returnValue = F("Schragenhof");
        break;
    }
    case 284267:
    {
        returnValue = F("Schragenort");
        break;
    }
    case 284268:
    {
        returnValue = F("Schragenwaldstr.");
        break;
    }
    case 284269:
    {
        returnValue = F("Schragnweg");
        break;
    }
    case 284270:
    {
        returnValue = F("Schrahöfe");
        break;
    }
    case 284271:
    {
        returnValue = F("Schrahörnstr.");
        break;
    }
    case 284272:
    {
        returnValue = F("Schraienstr.");
        break;
    }
    case 284273:
    {
        returnValue = F("Schraieweg");
        break;
    }
    case 284274:
    {
        returnValue = F("Schraistr.");
        break;
    }
    case 284275:
    {
        returnValue = F("Schrakampstr.");
        break;
    }
    case 284276:
    {
        returnValue = F("Schralling");
        break;
    }
    case 284277:
    {
        returnValue = F("Schramberger Str.");
        break;
    }
    case 284278:
    {
        returnValue = F("Schramberger Weg");
        break;
    }
    case 284279:
    {
        returnValue = F("Schrambergerstr.");
        break;
    }
    case 284280:
    {
        returnValue = F("Schramelweg");
        break;
    }
    case 284281:
    {
        returnValue = F("Schramenweg");
        break;
    }
    case 284282:
    {
        returnValue = F("Schramholz");
        break;
    }
    case 284283:
    {
        returnValue = F("Schrammbergweg");
        break;
    }
    case 284284:
    {
        returnValue = F("Schrammelweg");
        break;
    }
    case 284285:
    {
        returnValue = F("Schrammeläckerweg");
        break;
    }
    case 284286:
    {
        returnValue = F("Schrammenweg");
        break;
    }
    case 284287:
    {
        returnValue = F("Schrammerweg");
        break;
    }
    case 284288:
    {
        returnValue = F("Schrammhöhe");
        break;
    }
    case 284289:
    {
        returnValue = F("Schrammingerweg");
        break;
    }
    case 284290:
    {
        returnValue = F("Schrammoor");
        break;
    }
    case 284291:
    {
        returnValue = F("Schramms Hof");
        break;
    }
    case 284292:
    {
        returnValue = F("Schrammsteinblick");
        break;
    }
    case 284293:
    {
        returnValue = F("Schrammstr.");
        break;
    }
    case 284294:
    {
        returnValue = F("Schrammstwiete");
        break;
    }
    case 284295:
    {
        returnValue = F("Schrammsweg");
        break;
    }
    case 284296:
    {
        returnValue = F("Schrammweg");
        break;
    }
    case 284297:
    {
        returnValue = F("Schrandenweg");
        break;
    }
    case 284298:
    {
        returnValue = F("Schrandlerweg");
        break;
    }
    case 284299:
    {
        returnValue = F("Schrangen");
        break;
    }
    case 284300:
    {
        returnValue = F("Schrangenstr.");
        break;
    }
    case 284301:
    {
        returnValue = F("Schrankbaumgasse");
        break;
    }
    case 284302:
    {
        returnValue = F("Schranke");
        break;
    }
    case 284303:
    {
        returnValue = F("Schranke-Vennchesweg");
        break;
    }
    case 284304:
    {
        returnValue = F("Schrankenberg");
        break;
    }
    case 284305:
    {
        returnValue = F("Schrankenweg");
        break;
    }
    case 284306:
    {
        returnValue = F("Schrankenäcker");
        break;
    }
    case 284307:
    {
        returnValue = F("Schrankerweg");
        break;
    }
    case 284308:
    {
        returnValue = F("Schrankgasse");
        break;
    }
    case 284309:
    {
        returnValue = F("Schranklstr.");
        break;
    }
    case 284310:
    {
        returnValue = F("Schrankweg");
        break;
    }
    case 284311:
    {
        returnValue = F("Schranne");
        break;
    }
    case 284312:
    {
        returnValue = F("Schrannengasse");
        break;
    }
    case 284313:
    {
        returnValue = F("Schrannenplatz");
        break;
    }
    case 284314:
    {
        returnValue = F("Schrannenstr.");
        break;
    }
    case 284315:
    {
        returnValue = F("Schrannenweg");
        break;
    }
    case 284316:
    {
        returnValue = F("Schrannstr.");
        break;
    }
    case 284317:
    {
        returnValue = F("Schrapfendorf");
        break;
    }
    case 284318:
    {
        returnValue = F("Schraplauer Berg");
        break;
    }
    case 284319:
    {
        returnValue = F("Schraplauer Str.");
        break;
    }
    case 284320:
    {
        returnValue = F("Schraplauer Weg");
        break;
    }
    case 284321:
    {
        returnValue = F("Schrappach");
        break;
    }
    case 284322:
    {
        returnValue = F("Schratbrink");
        break;
    }
    case 284323:
    {
        returnValue = F("Schratenhof");
        break;
    }
    case 284324:
    {
        returnValue = F("Schratkamp");
        break;
    }
    case 284325:
    {
        returnValue = F("Schratweg");
        break;
    }
    case 284326:
    {
        returnValue = F("Schratzenweg");
        break;
    }
    case 284327:
    {
        returnValue = F("Schraubenberg");
        break;
    }
    case 284328:
    {
        returnValue = F("Schraubeweg");
        break;
    }
    case 284329:
    {
        returnValue = F("Schraudolphstr.");
        break;
    }
    case 284330:
    {
        returnValue = F("Schrauffweg");
        break;
    }
    case 284331:
    {
        returnValue = F("Schraufstetterstr.");
        break;
    }
    case 284332:
    {
        returnValue = F("Schrautenbachweg");
        break;
    }
    case 284333:
    {
        returnValue = F("Schravelen");
        break;
    }
    case 284334:
    {
        returnValue = F("Schravelener Niersweg");
        break;
    }
    case 284335:
    {
        returnValue = F("Schravelner Str.");
        break;
    }
    case 284336:
    {
        returnValue = F("Schravensgäßchen");
        break;
    }
    case 284337:
    {
        returnValue = F("Schraystr.");
        break;
    }
    case 284338:
    {
        returnValue = F("Schrayweg");
        break;
    }
    case 284339:
    {
        returnValue = F("Schreberallee");
        break;
    }
    case 284340:
    {
        returnValue = F("Schreberbergstr.");
        break;
    }
    case 284341:
    {
        returnValue = F("Schrebereck");
        break;
    }
    case 284342:
    {
        returnValue = F("Schrebergarten");
        break;
    }
    case 284343:
    {
        returnValue = F("Schrebergartenstr.");
        break;
    }
    case 284344:
    {
        returnValue = F("Schrebergartenweg");
        break;
    }
    case 284345:
    {
        returnValue = F("Schrebergartenweg Amsel");
        break;
    }
    case 284346:
    {
        returnValue = F("Schrebergoorn");
        break;
    }
    case 284347:
    {
        returnValue = F("Schrebergärten");
        break;
    }
    case 284348:
    {
        returnValue = F("Schreberkopp");
        break;
    }
    case 284349:
    {
        returnValue = F("Schreberplatz");
        break;
    }
    case 284350:
    {
        returnValue = F("Schrebersiedlung");
        break;
    }
    case 284351:
    {
        returnValue = F("Schrebersteig");
        break;
    }
    case 284352:
    {
        returnValue = F("Schreberstr.");
        break;
    }
    case 284353:
    {
        returnValue = F("Schreberweg");
        break;
    }
    case 284354:
    {
        returnValue = F("Schrebitzer Str.");
        break;
    }
    case 284355:
    {
        returnValue = F("Schreck");
        break;
    }
    case 284356:
    {
        returnValue = F("Schreckelberg");
        break;
    }
    case 284357:
    {
        returnValue = F("Schreckenbachstr.");
        break;
    }
    case 284358:
    {
        returnValue = F("Schreckenbachweg");
        break;
    }
    case 284359:
    {
        returnValue = F("Schreckenberger Str.");
        break;
    }
    case 284360:
    {
        returnValue = F("Schreckenbergstr.");
        break;
    }
    case 284361:
    {
        returnValue = F("Schreckengrabensträßle");
        break;
    }
    case 284362:
    {
        returnValue = F("Schreckenhübel");
        break;
    }
    case 284363:
    {
        returnValue = F("Schreckensee");
        break;
    }
    case 284364:
    {
        returnValue = F("Schreckensteinstr.");
        break;
    }
    case 284365:
    {
        returnValue = F("Schreckerstr.");
        break;
    }
    case 284366:
    {
        returnValue = F("Schrecksbacher Str.");
        break;
    }
    case 284367:
    {
        returnValue = F("Schreckstr.");
        break;
    }
    case 284368:
    {
        returnValue = F("Schreckwurzschneise");
        break;
    }
    case 284369:
    {
        returnValue = F("Schrederstr.");
        break;
    }
    case 284370:
    {
        returnValue = F("Schreefeld");
        break;
    }
    case 284371:
    {
        returnValue = F("Schreegstieg");
        break;
    }
    case 284372:
    {
        returnValue = F("Schreglestr.");
        break;
    }
    case 284373:
    {
        returnValue = F("Schregweg");
        break;
    }
    case 284374:
    {
        returnValue = F("Schreiadler-Lehrpfad");
        break;
    }
    case 284375:
    {
        returnValue = F("Schreibauerstr.");
        break;
    }
    case 284376:
    {
        returnValue = F("Schreibenwiesen");
        break;
    }
    case 284377:
    {
        returnValue = F("Schreiber-Esch");
        break;
    }
    case 284378:
    {
        returnValue = F("Schreiberberg");
        break;
    }
    case 284379:
    {
        returnValue = F("Schreiberbrücke");
        break;
    }
    case 284380:
    {
        returnValue = F("Schreiberei");
        break;
    }
    case 284381:
    {
        returnValue = F("Schreiberg");
        break;
    }
    case 284382:
    {
        returnValue = F("Schreibergasse");
        break;
    }
    case 284383:
    {
        returnValue = F("Schreiberhauer Str.");
        break;
    }
    case 284384:
    {
        returnValue = F("Schreiberhof");
        break;
    }
    case 284385:
    {
        returnValue = F("Schreiberin");
        break;
    }
    case 284386:
    {
        returnValue = F("Schreibermühle");
        break;
    }
    case 284387:
    {
        returnValue = F("Schreiberring");
        break;
    }
    case 284388:
    {
        returnValue = F("Schreibers Gasse");
        break;
    }
    case 284389:
    {
        returnValue = F("Schreibers Kamp");
        break;
    }
    case 284390:
    {
        returnValue = F("Schreibersbildstr.");
        break;
    }
    case 284391:
    {
        returnValue = F("Schreibersbruch");
        break;
    }
    case 284392:
    {
        returnValue = F("Schreibersgasse");
        break;
    }
    case 284393:
    {
        returnValue = F("Schreibersgäßchen");
        break;
    }
    case 284394:
    {
        returnValue = F("Schreibersheide");
        break;
    }
    case 284395:
    {
        returnValue = F("Schreibershove");
        break;
    }
    case 284396:
    {
        returnValue = F("Schreiberskamp");
        break;
    }
    case 284397:
    {
        returnValue = F("Schreiberstorberg");
        break;
    }
    case 284398:
    {
        returnValue = F("Schreiberstr.");
        break;
    }
    case 284399:
    {
        returnValue = F("Schreibersweg");
        break;
    }
    case 284400:
    {
        returnValue = F("Schreiberweg");
        break;
    }
    case 284401:
    {
        returnValue = F("Schreiberwiese");
        break;
    }
    case 284402:
    {
        returnValue = F("Schreibmüllerstr.");
        break;
    }
    case 284403:
    {
        returnValue = F("Schreibpult");
        break;
    }
    case 284404:
    {
        returnValue = F("Schreieggstr.");
        break;
    }
    case 284405:
    {
        returnValue = F("Schreienbachweg");
        break;
    }
    case 284406:
    {
        returnValue = F("Schreienöschstr.");
        break;
    }
    case 284407:
    {
        returnValue = F("Schreierbergweg");
        break;
    }
    case 284408:
    {
        returnValue = F("Schreiers Huk");
        break;
    }
    case 284409:
    {
        returnValue = F("Schreiersgrüner Str.");
        break;
    }
    case 284410:
    {
        returnValue = F("Schreiersgrüner Weg");
        break;
    }
    case 284411:
    {
        returnValue = F("Schreiershauweg");
        break;
    }
    case 284412:
    {
        returnValue = F("Schreierstr.");
        break;
    }
    case 284413:
    {
        returnValue = F("Schreigäßchen");
        break;
    }
    case 284414:
    {
        returnValue = F("Schreilegrund");
        break;
    }
    case 284415:
    {
        returnValue = F("Schreiner-Röckl-Gassl");
        break;
    }
    case 284416:
    {
        returnValue = F("Schreineranger");
        break;
    }
    case 284417:
    {
        returnValue = F("Schreinerbauerweg");
        break;
    }
    case 284418:
    {
        returnValue = F("Schreinerbergl");
        break;
    }
    case 284419:
    {
        returnValue = F("Schreinerbergweg");
        break;
    }
    case 284420:
    {
        returnValue = F("Schreinergarten");
        break;
    }
    case 284421:
    {
        returnValue = F("Schreinergasse");
        break;
    }
    case 284422:
    {
        returnValue = F("Schreinergassl");
        break;
    }
    case 284423:
    {
        returnValue = F("Schreinergäßle");
        break;
    }
    case 284424:
    {
        returnValue = F("Schreinerhof");
        break;
    }
    case 284425:
    {
        returnValue = F("Schreinerholzweg");
        break;
    }
    case 284426:
    {
        returnValue = F("Schreinerlohstr.");
        break;
    }
    case 284427:
    {
        returnValue = F("Schreinermühlweg");
        break;
    }
    case 284428:
    {
        returnValue = F("Schreiners Brücke");
        break;
    }
    case 284429:
    {
        returnValue = F("Schreiners Gässele");
        break;
    }
    case 284430:
    {
        returnValue = F("Schreinersberg");
        break;
    }
    case 284431:
    {
        returnValue = F("Schreinersbild");
        break;
    }
    case 284432:
    {
        returnValue = F("Schreinersgasse");
        break;
    }
    case 284433:
    {
        returnValue = F("Schreinershöh");
        break;
    }
    case 284434:
    {
        returnValue = F("Schreinersiedlung");
        break;
    }
    case 284435:
    {
        returnValue = F("Schreinerstr.");
        break;
    }
    case 284436:
    {
        returnValue = F("Schreinersweg");
        break;
    }
    case 284437:
    {
        returnValue = F("Schreinerweg");
        break;
    }
    case 284438:
    {
        returnValue = F("Schreinerwiese");
        break;
    }
    case 284439:
    {
        returnValue = F("Schreineräckerstr.");
        break;
    }
    case 284440:
    {
        returnValue = F("Schreineräckerweg");
        break;
    }
    case 284441:
    {
        returnValue = F("Schreinickenweg");
        break;
    }
    case 284442:
    {
        returnValue = F("Schreinshauser Weg");
        break;
    }
    case 284443:
    {
        returnValue = F("Schreinshauserhof; Fasanenhof");
        break;
    }
    case 284444:
    {
        returnValue = F("Schreitzergasse");
        break;
    }
    case 284445:
    {
        returnValue = F("Schreiäckerstr.");
        break;
    }
    case 284446:
    {
        returnValue = F("Schremscheweg");
        break;
    }
    case 284447:
    {
        returnValue = F("Schrenckstr.");
        break;
    }
    case 284448:
    {
        returnValue = F("Schrenckweg");
        break;
    }
    case 284449:
    {
        returnValue = F("Schrenker Feld");
        break;
    }
    case 284450:
    {
        returnValue = F("Schrenkstr.");
        break;
    }
    case 284451:
    {
        returnValue = F("Schrenkweg");
        break;
    }
    case 284452:
    {
        returnValue = F("Schrennenweg");
        break;
    }
    case 284453:
    {
        returnValue = F("Schrennweg");
        break;
    }
    case 284454:
    {
        returnValue = F("Schrenzer Str.");
        break;
    }
    case 284455:
    {
        returnValue = F("Schrenzerschneise");
        break;
    }
    case 284456:
    {
        returnValue = F("Schrepfersruh");
        break;
    }
    case 284457:
    {
        returnValue = F("Schrepkow");
        break;
    }
    case 284458:
    {
        returnValue = F("Schrepperie");
        break;
    }
    case 284459:
    {
        returnValue = F("Schreppingshöhe");
        break;
    }
    case 284460:
    {
        returnValue = F("Schretzheimer Str.");
        break;
    }
    case 284461:
    {
        returnValue = F("Schreursweg");
        break;
    }
    case 284462:
    {
        returnValue = F("Schrevenborner Weg");
        break;
    }
    case 284463:
    {
        returnValue = F("Schrevendorf");
        break;
    }
    case 284464:
    {
        returnValue = F("Schrevenwiesen");
        break;
    }
    case 284465:
    {
        returnValue = F("Schrewenfeld");
        break;
    }
    case 284466:
    {
        returnValue = F("Schrewenstr.");
        break;
    }
    case 284467:
    {
        returnValue = F("Schrewestr.");
        break;
    }
    case 284468:
    {
        returnValue = F("Schreweweg");
        break;
    }
    case 284469:
    {
        returnValue = F("Schreyeggstr.");
        break;
    }
    case 284470:
    {
        returnValue = F("Schreyerallee");
        break;
    }
    case 284471:
    {
        returnValue = F("Schreyergasse");
        break;
    }
    case 284472:
    {
        returnValue = F("Schreyerhof");
        break;
    }
    case 284473:
    {
        returnValue = F("Schreyerhofstr.");
        break;
    }
    case 284474:
    {
        returnValue = F("Schreyerstr.");
        break;
    }
    case 284475:
    {
        returnValue = F("Schreys Gasse");
        break;
    }
    case 284476:
    {
        returnValue = F("Schreyöggstr.");
        break;
    }
    case 284477:
    {
        returnValue = F("Schrezheimer Str.");
        break;
    }
    case 284478:
    {
        returnValue = F("Schricke Park");
        break;
    }
    case 284479:
    {
        returnValue = F("Schricker Parkweg");
        break;
    }
    case 284480:
    {
        returnValue = F("Schricker Str.");
        break;
    }
    case 284481:
    {
        returnValue = F("Schricker Weg");
        break;
    }
    case 284482:
    {
        returnValue = F("Schrickholtweg");
        break;
    }
    case 284483:
    {
        returnValue = F("Schrieberwisch");
        break;
    }
    case 284484:
    {
        returnValue = F("Schriefersmühle");
        break;
    }
    case 284485:
    {
        returnValue = F("Schriesenhof");
        break;
    }
    case 284486:
    {
        returnValue = F("Schriesheimer Fußweg");
        break;
    }
    case 284487:
    {
        returnValue = F("Schriesheimer Str.");
        break;
    }
    case 284488:
    {
        returnValue = F("Schriesheimergasse");
        break;
    }
    case 284489:
    {
        returnValue = F("Schrietgasse");
        break;
    }
    case 284490:
    {
        returnValue = F("Schrievers Brede");
        break;
    }
    case 284491:
    {
        returnValue = F("Schrieversgäßchen");
        break;
    }
    case 284492:
    {
        returnValue = F("Schrieverskamp");
        break;
    }
    case 284493:
    {
        returnValue = F("Schrieverspfad");
        break;
    }
    case 284494:
    {
        returnValue = F("Schrieversweg");
        break;
    }
    case 284495:
    {
        returnValue = F("Schrieveslaach");
        break;
    }
    case 284496:
    {
        returnValue = F("Schriewers Kamp");
        break;
    }
    case 284497:
    {
        returnValue = F("Schrieweshof");
        break;
    }
    case 284498:
    {
        returnValue = F("Schrimpfhof");
        break;
    }
    case 284499:
    {
        returnValue = F("Schrimpfstr.");
        break;
    }
    case 284500:
    {
        returnValue = F("Schringelstr.");
        break;
    }
    case 284501:
    {
        returnValue = F("Schrinkschau");
        break;
    }
    case 284502:
    {
        returnValue = F("Schrittenlohe");
        break;
    }
    case 284503:
    {
        returnValue = F("Schrittwaldweg");
        break;
    }
    case 284504:
    {
        returnValue = F("Schrixdorfstr.");
        break;
    }
    case 284505:
    {
        returnValue = F("Schroandiek");
        break;
    }
    case 284506:
    {
        returnValue = F("Schroatfeld");
        break;
    }
    case 284507:
    {
        returnValue = F("Schrobenhausener Str.");
        break;
    }
    case 284508:
    {
        returnValue = F("Schrobenhauser Str.");
        break;
    }
    case 284509:
    {
        returnValue = F("Schrockewies");
        break;
    }
    case 284510:
    {
        returnValue = F("Schrodaer Str.");
        break;
    }
    case 284511:
    {
        returnValue = F("Schrodweg");
        break;
    }
    case 284512:
    {
        returnValue = F("Schroederstr.");
        break;
    }
    case 284513:
    {
        returnValue = F("Schroederweg");
        break;
    }
    case 284514:
    {
        returnValue = F("Schroershof");
        break;
    }
    case 284515:
    {
        returnValue = F("Schroersstr.");
        break;
    }
    case 284516:
    {
        returnValue = F("Schroerstr.");
        break;
    }
    case 284517:
    {
        returnValue = F("Schroersweg");
        break;
    }
    case 284518:
    {
        returnValue = F("Schroetelerweg");
        break;
    }
    case 284519:
    {
        returnValue = F("Schroeterstr.");
        break;
    }
    case 284520:
    {
        returnValue = F("Schrofen");
        break;
    }
    case 284521:
    {
        returnValue = F("Schrofengasse");
        break;
    }
    case 284522:
    {
        returnValue = F("Schrofenriesweg");
        break;
    }
    case 284523:
    {
        returnValue = F("Schrofenstr.");
        break;
    }
    case 284524:
    {
        returnValue = F("Schrofenweg");
        break;
    }
    case 284525:
    {
        returnValue = F("Schroffenbergallee");
        break;
    }
    case 284526:
    {
        returnValue = F("Schroffener Str.");
        break;
    }
    case 284527:
    {
        returnValue = F("Schroffensteinweg");
        break;
    }
    case 284528:
    {
        returnValue = F("Schroffenstr.");
        break;
    }
    case 284529:
    {
        returnValue = F("Schroffenweg");
        break;
    }
    case 284530:
    {
        returnValue = F("Schrofmühle");
        break;
    }
    case 284531:
    {
        returnValue = F("Schrohmühleweg");
        break;
    }
    case 284532:
    {
        returnValue = F("Schrohweg");
        break;
    }
    case 284533:
    {
        returnValue = F("Schroiffweg");
        break;
    }
    case 284534:
    {
        returnValue = F("Schrollbacher Str.");
        break;
    }
    case 284535:
    {
        returnValue = F("Schrollingerstr.");
        break;
    }
    case 284536:
    {
        returnValue = F("Schronfeld");
        break;
    }
    case 284537:
    {
        returnValue = F("Schronfeldsteg");
        break;
    }
    case 284538:
    {
        returnValue = F("Schronnenäckerstr.");
        break;
    }
    case 284539:
    {
        returnValue = F("Schroofstr.");
        break;
    }
    case 284540:
    {
        returnValue = F("Schroppberg");
        break;
    }
    case 284541:
    {
        returnValue = F("Schroppenstr.");
        break;
    }
    case 284542:
    {
        returnValue = F("Schroppstr.");
        break;
    }
    case 284543:
    {
        returnValue = F("Schrot");
        break;
    }
    case 284544:
    {
        returnValue = F("Schrotacker");
        break;
    }
    case 284545:
    {
        returnValue = F("Schrotberg");
        break;
    }
    case 284546:
    {
        returnValue = F("Schroteln");
        break;
    }
    case 284547:
    {
        returnValue = F("Schroten");
        break;
    }
    case 284548:
    {
        returnValue = F("Schrotenstr.");
        break;
    }
    case 284549:
    {
        returnValue = F("Schrotestr.");
        break;
    }
    case 284550:
    {
        returnValue = F("Schrotgang");
        break;
    }
    case 284551:
    {
        returnValue = F("Schrotgasse");
        break;
    }
    case 284552:
    {
        returnValue = F("Schrothstr.");
        break;
    }
    case 284553:
    {
        returnValue = F("Schrotsdorf");
        break;
    }
    case 284554:
    {
        returnValue = F("Schrotstr.");
        break;
    }
    case 284555:
    {
        returnValue = F("Schrott");
        break;
    }
    case 284556:
    {
        returnValue = F("Schrottgasse");
        break;
    }
    case 284557:
    {
        returnValue = F("Schrotweg");
        break;
    }
    case 284558:
    {
        returnValue = F("Schrotzburgstr.");
        break;
    }
    case 284559:
    {
        returnValue = F("Schrotzhofen");
        break;
    }
    case 284560:
    {
        returnValue = F("Schroverbecksweg");
        break;
    }
    case 284561:
    {
        returnValue = F("Schrozberger Str.");
        break;
    }
    case 284562:
    {
        returnValue = F("Schroßlach");
        break;
    }
    case 284563:
    {
        returnValue = F("Schrumbrooksweg");
        break;
    }
    case 284564:
    {
        returnValue = F("Schrumer Weg");
        break;
    }
    case 284565:
    {
        returnValue = F("Schrumpftal");
        break;
    }
    case 284566:
    {
        returnValue = F("Schrundenweg");
        break;
    }
    case 284567:
    {
        returnValue = F("Schrundholz");
        break;
    }
    case 284568:
    {
        returnValue = F("Schrunser Weg");
        break;
    }
    case 284569:
    {
        returnValue = F("Schruppweg");
        break;
    }
    case 284570:
    {
        returnValue = F("Schräge Richtstatt");
        break;
    }
    case 284571:
    {
        returnValue = F("Schräger Weg");
        break;
    }
    case 284572:
    {
        returnValue = F("Schrägerweg");
        break;
    }
    case 284573:
    {
        returnValue = F("Schräggeest");
        break;
    }
    case 284574:
    {
        returnValue = F("Schrägkamp");
        break;
    }
    case 284575:
    {
        returnValue = F("Schrägstr.");
        break;
    }
    case 284576:
    {
        returnValue = F("Schrägweg");
        break;
    }
    case 284577:
    {
        returnValue = F("Schrännlesweg");
        break;
    }
    case 284578:
    {
        returnValue = F("Schräpestr.");
        break;
    }
    case 284579:
    {
        returnValue = F("Schräpperweg");
        break;
    }
    case 284580:
    {
        returnValue = F("Schröbziger Str.");
        break;
    }
    case 284581:
    {
        returnValue = F("Schröck");
        break;
    }
    case 284582:
    {
        returnValue = F("Schröcker Str.");
        break;
    }
    case 284583:
    {
        returnValue = F("Schröckerweg");
        break;
    }
    case 284584:
    {
        returnValue = F("Schröckstr.");
        break;
    }
    case 284585:
    {
        returnValue = F("Schrödelstr.");
        break;
    }
    case 284586:
    {
        returnValue = F("Schrödelweg");
        break;
    }
    case 284587:
    {
        returnValue = F("Schröden");
        break;
    }
    case 284588:
    {
        returnValue = F("Schröder Schneise");
        break;
    }
    case 284589:
    {
        returnValue = F("Schrödergasse");
        break;
    }
    case 284590:
    {
        returnValue = F("Schrödergäßchen");
        break;
    }
    case 284591:
    {
        returnValue = F("Schröderhof");
        break;
    }
    case 284592:
    {
        returnValue = F("Schröderhofer Weg");
        break;
    }
    case 284593:
    {
        returnValue = F("Schröderkreisel");
        break;
    }
    case 284594:
    {
        returnValue = F("Schrödermühlenweg");
        break;
    }
    case 284595:
    {
        returnValue = F("Schröderplatz");
        break;
    }
    case 284596:
    {
        returnValue = F("Schröders Garten");
        break;
    }
    case 284597:
    {
        returnValue = F("Schröders Gasse");
        break;
    }
    case 284598:
    {
        returnValue = F("Schröders Koppel");
        break;
    }
    case 284599:
    {
        returnValue = F("Schröders Stieg");
        break;
    }
    case 284600:
    {
        returnValue = F("Schröders Tannen");
        break;
    }
    case 284601:
    {
        returnValue = F("Schröders Wisch");
        break;
    }
    case 284602:
    {
        returnValue = F("Schrödersbergstr.");
        break;
    }
    case 284603:
    {
        returnValue = F("Schrödersgasse");
        break;
    }
    case 284604:
    {
        returnValue = F("Schrödershof");
        break;
    }
    case 284605:
    {
        returnValue = F("Schrödershöhe");
        break;
    }
    case 284606:
    {
        returnValue = F("Schröderskamp");
        break;
    }
    case 284607:
    {
        returnValue = F("Schröderstr.");
        break;
    }
    case 284608:
    {
        returnValue = F("Schrödersweg");
        break;
    }
    case 284609:
    {
        returnValue = F("Schröderweg");
        break;
    }
    case 284610:
    {
        returnValue = F("Schrödingerstr.");
        break;
    }
    case 284611:
    {
        returnValue = F("Schrödingerweg");
        break;
    }
    case 284612:
    {
        returnValue = F("Schröers Kamp");
        break;
    }
    case 284613:
    {
        returnValue = F("Schröerskamp");
        break;
    }
    case 284614:
    {
        returnValue = F("Schröerstr.");
        break;
    }
    case 284615:
    {
        returnValue = F("Schröersweg");
        break;
    }
    case 284616:
    {
        returnValue = F("Schrögerfeld");
        break;
    }
    case 284617:
    {
        returnValue = F("Schrönghamerstr.");
        break;
    }
    case 284618:
    {
        returnValue = F("Schrönplatz");
        break;
    }
    case 284619:
    {
        returnValue = F("Schrötenbreite");
        break;
    }
    case 284620:
    {
        returnValue = F("Schrötenen");
        break;
    }
    case 284621:
    {
        returnValue = F("Schrötergasse");
        break;
    }
    case 284622:
    {
        returnValue = F("Schröters Gestell");
        break;
    }
    case 284623:
    {
        returnValue = F("Schrötersdorfer Weg");
        break;
    }
    case 284624:
    {
        returnValue = F("Schröterstr.");
        break;
    }
    case 284625:
    {
        returnValue = F("Schröterweg");
        break;
    }
    case 284626:
    {
        returnValue = F("Schrötlein");
        break;
    }
    case 284627:
    {
        returnValue = F("Schröttergasse");
        break;
    }
    case 284628:
    {
        returnValue = F("Schröttinghausener Str.");
        break;
    }
    case 284629:
    {
        returnValue = F("Schröttinghauser Str.");
        break;
    }
    case 284630:
    {
        returnValue = F("Schröttmoos");
        break;
    }
    case 284631:
    {
        returnValue = F("Schröver Garten");
        break;
    }
    case 284632:
    {
        returnValue = F("Schröverweg");
        break;
    }
    case 284633:
    {
        returnValue = F("Schründerring");
        break;
    }
    case 284634:
    {
        returnValue = F("Schubart-von-Kleefeld-Str.");
        break;
    }
    case 284635:
    {
        returnValue = F("Schubartanlage");
        break;
    }
    case 284636:
    {
        returnValue = F("Schubartstr.");
        break;
    }
    case 284637:
    {
        returnValue = F("Schubartweg");
        break;
    }
    case 284638:
    {
        returnValue = F("Schubb");
        break;
    }
    case 284639:
    {
        returnValue = F("Schubbelackerweg");
        break;
    }
    case 284640:
    {
        returnValue = F("Schubbendenweg");
        break;
    }
    case 284641:
    {
        returnValue = F("Schubensteinweg");
        break;
    }
    case 284642:
    {
        returnValue = F("Schubert Weg");
        break;
    }
    case 284643:
    {
        returnValue = F("Schubert-u.-Salzer-Str.");
        break;
    }
    case 284644:
    {
        returnValue = F("Schubertallee");
        break;
    }
    case 284645:
    {
        returnValue = F("Schuberteck");
        break;
    }
    case 284646:
    {
        returnValue = F("Schubertgasse");
        break;
    }
    case 284647:
    {
        returnValue = F("Schubertpark");
        break;
    }
    case 284648:
    {
        returnValue = F("Schubertplatz");
        break;
    }
    case 284649:
    {
        returnValue = F("Schubertring");
        break;
    }
    case 284650:
    {
        returnValue = F("Schuberts Berge");
        break;
    }
    case 284651:
    {
        returnValue = F("Schubertsgasse");
        break;
    }
    case 284652:
    {
        returnValue = F("Schubertskehrrankweg");
        break;
    }
    case 284653:
    {
        returnValue = F("Schubertstr.");
        break;
    }
    case 284654:
    {
        returnValue = F("Schubertstürle");
        break;
    }
    case 284655:
    {
        returnValue = F("Schubertweg");
        break;
    }
    case 284656:
    {
        returnValue = F("Schubertwinkel");
        break;
    }
    case 284657:
    {
        returnValue = F("Schubhorn");
        break;
    }
    case 284658:
    {
        returnValue = F("Schubkarrenschneise");
        break;
    }
    case 284659:
    {
        returnValue = F("Schubkarrenweg");
        break;
    }
    case 284660:
    {
        returnValue = F("Schuby");
        break;
    }
    case 284661:
    {
        returnValue = F("Schubyer Str.");
        break;
    }
    case 284662:
    {
        returnValue = F("Schubyer Weg");
        break;
    }
    case 284663:
    {
        returnValue = F("Schubyfeld");
        break;
    }
    case 284664:
    {
        returnValue = F("Schubystr.");
        break;
    }
    case 284665:
    {
        returnValue = F("Schuchardstr.");
        break;
    }
    case 284666:
    {
        returnValue = F("Schuchardtsweg");
        break;
    }
    case 284667:
    {
        returnValue = F("Schuchergasse");
        break;
    }
    case 284668:
    {
        returnValue = F("Schuchstr.");
        break;
    }
    case 284669:
    {
        returnValue = F("Schuchtweg");
        break;
    }
    case 284670:
    {
        returnValue = F("Schuckenbergweg");
        break;
    }
    case 284671:
    {
        returnValue = F("Schuckenbrock");
        break;
    }
    case 284672:
    {
        returnValue = F("Schuckenbäumer-Tor");
        break;
    }
    case 284673:
    {
        returnValue = F("Schuckenhofstr.");
        break;
    }
    case 284674:
    {
        returnValue = F("Schuckenteichweg");
        break;
    }
    case 284675:
    {
        returnValue = F("Schuckertplatz");
        break;
    }
    case 284676:
    {
        returnValue = F("Schuckertstr.");
        break;
    }
    case 284677:
    {
        returnValue = F("Schuckertweg");
        break;
    }
    case 284678:
    {
        returnValue = F("Schucklbergstr.");
        break;
    }
    case 284679:
    {
        returnValue = F("Schuckmannshöhe");
        break;
    }
    case 284680:
    {
        returnValue = F("Schuckmannsweg");
        break;
    }
    case 284681:
    {
        returnValue = F("Schuckstr.");
        break;
    }
    case 284682:
    {
        returnValue = F("Schudele-Str.");
        break;
    }
    case 284683:
    {
        returnValue = F("Schuegrafstr.");
        break;
    }
    case 284684:
    {
        returnValue = F("Schuenhäger Str.");
        break;
    }
    case 284685:
    {
        returnValue = F("Schuerkamp");
        break;
    }
    case 284686:
    {
        returnValue = F("Schuetzenbergstr.");
        break;
    }
    case 284687:
    {
        returnValue = F("Schuffel");
        break;
    }
    case 284688:
    {
        returnValue = F("Schugansgasse");
        break;
    }
    case 284689:
    {
        returnValue = F("Schugeweg");
        break;
    }
    case 284690:
    {
        returnValue = F("Schugweg");
        break;
    }
    case 284691:
    {
        returnValue = F("Schuh Erv");
        break;
    }
    case 284692:
    {
        returnValue = F("Schuh- und Schlappweg");
        break;
    }
    case 284693:
    {
        returnValue = F("Schuhagen");
        break;
    }
    case 284694:
    {
        returnValue = F("Schuhangerweg");
        break;
    }
    case 284695:
    {
        returnValue = F("Schuhbauerstr.");
        break;
    }
    case 284696:
    {
        returnValue = F("Schuhdobelweg");
        break;
    }
    case 284697:
    {
        returnValue = F("Schuhfelsstr.");
        break;
    }
    case 284698:
    {
        returnValue = F("Schuhfuß Weg");
        break;
    }
    case 284699:
    {
        returnValue = F("Schuhgarten");
        break;
    }
    case 284700:
    {
        returnValue = F("Schuhgasse");
        break;
    }
    case 284701:
    {
        returnValue = F("Schuhgrundsweg");
        break;
    }
    case 284702:
    {
        returnValue = F("Schuhhalde");
        break;
    }
    case 284703:
    {
        returnValue = F("Schuhhof");
        break;
    }
    case 284704:
    {
        returnValue = F("Schuhhäuslestr.");
        break;
    }
    case 284705:
    {
        returnValue = F("Schuhkamp");
        break;
    }
    case 284706:
    {
        returnValue = F("Schuhkampsweg");
        break;
    }
    case 284707:
    {
        returnValue = F("Schuhkaufstr.");
        break;
    }
    case 284708:
    {
        returnValue = F("Schuhlhöh");
        break;
    }
    case 284709:
    {
        returnValue = F("Schuhmacher Str.");
        break;
    }
    case 284710:
    {
        returnValue = F("Schuhmacherberg");
        break;
    }
    case 284711:
    {
        returnValue = F("Schuhmachergasse");
        break;
    }
    case 284712:
    {
        returnValue = F("Schuhmachergäßchen");
        break;
    }
    case 284713:
    {
        returnValue = F("Schuhmacherhäusleweg");
        break;
    }
    case 284714:
    {
        returnValue = F("Schuhmachers");
        break;
    }
    case 284715:
    {
        returnValue = F("Schuhmachers Kopf");
        break;
    }
    case 284716:
    {
        returnValue = F("Schuhmachers Weg");
        break;
    }
    case 284717:
    {
        returnValue = F("Schuhmachershüttweg");
        break;
    }
    case 284718:
    {
        returnValue = F("Schuhmacherstr.");
        break;
    }
    case 284719:
    {
        returnValue = F("Schuhmacherweg");
        break;
    }
    case 284720:
    {
        returnValue = F("Schuhmacherwiese");
        break;
    }
    case 284721:
    {
        returnValue = F("Schuhmacherwoog");
        break;
    }
    case 284722:
    {
        returnValue = F("Schuhmann-Str.");
        break;
    }
    case 284723:
    {
        returnValue = F("Schuhmann-Weg");
        break;
    }
    case 284724:
    {
        returnValue = F("Schuhmannstr.");
        break;
    }
    case 284725:
    {
        returnValue = F("Schuhmannweg");
        break;
    }
    case 284726:
    {
        returnValue = F("Schuhmann´s Grund");
        break;
    }
    case 284727:
    {
        returnValue = F("Schuhmarkt");
        break;
    }
    case 284728:
    {
        returnValue = F("Schuhmarktplatz");
        break;
    }
    case 284729:
    {
        returnValue = F("Schuhmarktstr.");
        break;
    }
    case 284730:
    {
        returnValue = F("Schuhmeile");
        break;
    }
    case 284731:
    {
        returnValue = F("Schuhmühle");
        break;
    }
    case 284732:
    {
        returnValue = F("Schuhnagelweg");
        break;
    }
    case 284733:
    {
        returnValue = F("Schuhprüfstrecke");
        break;
    }
    case 284734:
    {
        returnValue = F("Schuhseppleweg");
        break;
    }
    case 284735:
    {
        returnValue = F("Schuhstieg");
        break;
    }
    case 284736:
    {
        returnValue = F("Schuhstr.");
        break;
    }
    case 284737:
    {
        returnValue = F("Schuhwall");
        break;
    }
    case 284738:
    {
        returnValue = F("Schuhweg");
        break;
    }
    case 284739:
    {
        returnValue = F("Schuhwiese");
        break;
    }
    case 284740:
    {
        returnValue = F("Schuitemakerstr.");
        break;
    }
    case 284741:
    {
        returnValue = F("Schuitensand");
        break;
    }
    case 284742:
    {
        returnValue = F("Schukjer");
        break;
    }
    case 284743:
    {
        returnValue = F("Schul Str.");
        break;
    }
    case 284744:
    {
        returnValue = F("Schul- und Gemeindegarten");
        break;
    }
    case 284745:
    {
        returnValue = F("Schul- und Pfarrgarten");
        break;
    }
    case 284746:
    {
        returnValue = F("Schulacker");
        break;
    }
    case 284747:
    {
        returnValue = F("Schulackerstr.");
        break;
    }
    case 284748:
    {
        returnValue = F("Schulackerweg");
        break;
    }
    case 284749:
    {
        returnValue = F("Schulallee");
        break;
    }
    case 284750:
    {
        returnValue = F("Schulalm");
        break;
    }
    case 284751:
    {
        returnValue = F("Schulanger");
        break;
    }
    case 284752:
    {
        returnValue = F("Schulangerweg");
        break;
    }
    case 284753:
    {
        returnValue = F("Schulauer Moorweg");
        break;
    }
    case 284754:
    {
        returnValue = F("Schulauer Str.");
        break;
    }
    case 284755:
    {
        returnValue = F("Schulbach");
        break;
    }
    case 284756:
    {
        returnValue = F("Schulbachweg");
        break;
    }
    case 284757:
    {
        returnValue = F("Schulbadestrand / Festplatz");
        break;
    }
    case 284758:
    {
        returnValue = F("Schulbahn");
        break;
    }
    case 284759:
    {
        returnValue = F("Schulbahn Sacka");
        break;
    }
    case 284760:
    {
        returnValue = F("Schulbahn Tauscha");
        break;
    }
    case 284761:
    {
        returnValue = F("Schulberg");
        break;
    }
    case 284762:
    {
        returnValue = F("Schulbergpassage");
        break;
    }
    case 284763:
    {
        returnValue = F("Schulbergstr.");
        break;
    }
    case 284764:
    {
        returnValue = F("Schulbezirk");
        break;
    }
    case 284765:
    {
        returnValue = F("Schulbitz");
        break;
    }
    case 284766:
    {
        returnValue = F("Schulbornstr.");
        break;
    }
    case 284767:
    {
        returnValue = F("Schulbrede");
        break;
    }
    case 284768:
    {
        returnValue = F("Schulbreite");
        break;
    }
    case 284769:
    {
        returnValue = F("Schulbreiten");
        break;
    }
    case 284770:
    {
        returnValue = F("Schulbrink");
        break;
    }
    case 284771:
    {
        returnValue = F("Schulbrinkstr.");
        break;
    }
    case 284772:
    {
        returnValue = F("Schulbruck");
        break;
    }
    case 284773:
    {
        returnValue = F("Schulbrunnen");
        break;
    }
    case 284774:
    {
        returnValue = F("Schulbrunnengasse");
        break;
    }
    case 284775:
    {
        returnValue = F("Schulbrunnenstr.");
        break;
    }
    case 284776:
    {
        returnValue = F("Schulbrücke");
        break;
    }
    case 284777:
    {
        returnValue = F("Schulbrückle");
        break;
    }
    case 284778:
    {
        returnValue = F("Schulbucht");
        break;
    }
    case 284779:
    {
        returnValue = F("Schulbuck");
        break;
    }
    case 284780:
    {
        returnValue = F("Schulbuckel");
        break;
    }
    case 284781:
    {
        returnValue = F("Schulbusch");
        break;
    }
    case 284782:
    {
        returnValue = F("Schulbuschweg");
        break;
    }
    case 284783:
    {
        returnValue = F("Schulbühl");
        break;
    }
    case 284784:
    {
        returnValue = F("Schulbültstr.");
        break;
    }
    case 284785:
    {
        returnValue = F("Schuldamm");
        break;
    }
    case 284786:
    {
        returnValue = F("Schuldholzinger Weg");
        break;
    }
    case 284787:
    {
        returnValue = F("Schuldurchgang");
        break;
    }
    case 284788:
    {
        returnValue = F("Schule");
        break;
    }
    case 284789:
    {
        returnValue = F("Schule Marienau");
        break;
    }
    case 284790:
    {
        returnValue = F("Schulecke");
        break;
    }
    case 284791:
    {
        returnValue = F("Schulenbarg");
        break;
    }
    case 284792:
    {
        returnValue = F("Schulenberg's Kamp");
        break;
    }
    case 284793:
    {
        returnValue = F("Schulenberger Str.");
        break;
    }
    case 284794:
    {
        returnValue = F("Schulenbergstr.");
        break;
    }
    case 284795:
    {
        returnValue = F("Schulenbrook");
        break;
    }
    case 284796:
    {
        returnValue = F("Schulenbruch");
        break;
    }
    case 284797:
    {
        returnValue = F("Schulenburg");
        break;
    }
    case 284798:
    {
        returnValue = F("Schulenburger Mühle");
        break;
    }
    case 284799:
    {
        returnValue = F("Schulenburger Str.");
        break;
    }
    case 284800:
    {
        returnValue = F("Schulenburgshof");
        break;
    }
    case 284801:
    {
        returnValue = F("Schulenburgslust");
        break;
    }
    case 284802:
    {
        returnValue = F("Schulenburgstr.");
        break;
    }
    case 284803:
    {
        returnValue = F("Schulenburgweg");
        break;
    }
    case 284804:
    {
        returnValue = F("Schulendamm");
        break;
    }
    case 284805:
    {
        returnValue = F("Schulendammer Weg");
        break;
    }
    case 284806:
    {
        returnValue = F("Schulendorf");
        break;
    }
    case 284807:
    {
        returnValue = F("Schulenhof");
        break;
    }
    case 284808:
    {
        returnValue = F("Schulenhörn");
        break;
    }
    case 284809:
    {
        returnValue = F("Schulenkampstr.");
        break;
    }
    case 284810:
    {
        returnValue = F("Schulenroder Str.");
        break;
    }
    case 284811:
    {
        returnValue = F("Schulenröder Str.");
        break;
    }
    case 284812:
    {
        returnValue = F("Schuleplan");
        break;
    }
    case 284813:
    {
        returnValue = F("Schuler-Platz");
        break;
    }
    case 284814:
    {
        returnValue = F("Schulerburgstr.");
        break;
    }
    case 284815:
    {
        returnValue = F("Schulergasse");
        break;
    }
    case 284816:
    {
        returnValue = F("Schulergärten");
        break;
    }
    case 284817:
    {
        returnValue = F("Schulerhofstr.");
        break;
    }
    case 284818:
    {
        returnValue = F("Schulersberg");
        break;
    }
    case 284819:
    {
        returnValue = F("Schulerslochweg");
        break;
    }
    case 284820:
    {
        returnValue = F("Schulerstr.");
        break;
    }
    case 284821:
    {
        returnValue = F("Schulerweg");
        break;
    }
    case 284822:
    {
        returnValue = F("Schulfeld");
        break;
    }
    case 284823:
    {
        returnValue = F("Schulfeldstr.");
        break;
    }
    case 284824:
    {
        returnValue = F("Schulfeldweg");
        break;
    }
    case 284825:
    {
        returnValue = F("Schulfichtenweg");
        break;
    }
    case 284826:
    {
        returnValue = F("Schulfurt");
        break;
    }
    case 284827:
    {
        returnValue = F("Schulgang");
        break;
    }
    case 284828:
    {
        returnValue = F("Schulgarten");
        break;
    }
    case 284829:
    {
        returnValue = F("Schulgartenstr.");
        break;
    }
    case 284830:
    {
        returnValue = F("Schulgartenweg");
        break;
    }
    case 284831:
    {
        returnValue = F("Schulgasse");
        break;
    }
    case 284832:
    {
        returnValue = F("Schulgassl");
        break;
    }
    case 284833:
    {
        returnValue = F("Schulgraben");
        break;
    }
    case 284834:
    {
        returnValue = F("Schulgrabenweg");
        break;
    }
    case 284835:
    {
        returnValue = F("Schulgrund");
        break;
    }
    case 284836:
    {
        returnValue = F("Schulgutweg");
        break;
    }
    case 284837:
    {
        returnValue = F("Schulgärtle");
        break;
    }
    case 284838:
    {
        returnValue = F("Schulgässchen");
        break;
    }
    case 284839:
    {
        returnValue = F("Schulgässel");
        break;
    }
    case 284840:
    {
        returnValue = F("Schulgässle");
        break;
    }
    case 284841:
    {
        returnValue = F("Schulgässli");
        break;
    }
    case 284842:
    {
        returnValue = F("Schulgäßchen");
        break;
    }
    case 284843:
    {
        returnValue = F("Schulgäßle");
        break;
    }
    case 284844:
    {
        returnValue = F("Schulhagen");
        break;
    }
    case 284845:
    {
        returnValue = F("Schulhalde");
        break;
    }
    case 284846:
    {
        returnValue = F("Schulhamm");
        break;
    }
    case 284847:
    {
        returnValue = F("Schulhausberg");
        break;
    }
    case 284848:
    {
        returnValue = F("Schulhausgasse");
        break;
    }
    case 284849:
    {
        returnValue = F("Schulhausplatz");
        break;
    }
    case 284850:
    {
        returnValue = F("Schulhausstr.");
        break;
    }
    case 284851:
    {
        returnValue = F("Schulhausweg");
        break;
    }
    case 284852:
    {
        returnValue = F("Schulheide");
        break;
    }
    case 284853:
    {
        returnValue = F("Schulheiserweg");
        break;
    }
    case 284854:
    {
        returnValue = F("Schulhelmer");
        break;
    }
    case 284855:
    {
        returnValue = F("Schulhof");
        break;
    }
    case 284856:
    {
        returnValue = F("Schulhof / Kirchhof");
        break;
    }
    case 284857:
    {
        returnValue = F("Schulhof Carl-Orff-Schule");
        break;
    }
    case 284858:
    {
        returnValue = F("Schulhof-Park Alte Schule");
        break;
    }
    case 284859:
    {
        returnValue = F("Schulhofstr.");
        break;
    }
    case 284860:
    {
        returnValue = F("Schulhofsweg");
        break;
    }
    case 284861:
    {
        returnValue = F("Schulhohl");
        break;
    }
    case 284862:
    {
        returnValue = F("Schulhög");
        break;
    }
    case 284863:
    {
        returnValue = F("Schulhöhle");
        break;
    }
    case 284864:
    {
        returnValue = F("Schulhübel");
        break;
    }
    case 284865:
    {
        returnValue = F("Schulhügel");
        break;
    }
    case 284866:
    {
        returnValue = F("Schulinstr.");
        break;
    }
    case 284867:
    {
        returnValue = F("Schulkamp");
        break;
    }
    case 284868:
    {
        returnValue = F("Schulkampallee");
        break;
    }
    case 284869:
    {
        returnValue = F("Schulklinge");
        break;
    }
    case 284870:
    {
        returnValue = F("Schulkoppel");
        break;
    }
    case 284871:
    {
        returnValue = F("Schulkoppelweg");
        break;
    }
    case 284872:
    {
        returnValue = F("Schulland");
        break;
    }
    case 284873:
    {
        returnValue = F("Schullandheim");
        break;
    }
    case 284874:
    {
        returnValue = F("Schullandstr.");
        break;
    }
    case 284875:
    {
        returnValue = F("Schullehrergasse");
        break;
    }
    case 284876:
    {
        returnValue = F("Schullehrgarten OGV Arnstorf");
        break;
    }
    case 284877:
    {
        returnValue = F("Schulleiten");
        break;
    }
    case 284878:
    {
        returnValue = F("Schullendamm");
        break;
    }
    case 284879:
    {
        returnValue = F("Schullenmatt");
        break;
    }
    case 284880:
    {
        returnValue = F("Schullenmoor");
        break;
    }
    case 284881:
    {
        returnValue = F("Schullenpool");
        break;
    }
    case 284882:
    {
        returnValue = F("Schullenweg");
        break;
    }
    case 284883:
    {
        returnValue = F("Schullergasse");
        break;
    }
    case 284884:
    {
        returnValue = F("Schullerstr.");
        break;
    }
    case 284885:
    {
        returnValue = F("Schullohne");
        break;
    }
    case 284886:
    {
        returnValue = F("Schulmannshöhe");
        break;
    }
    case 284887:
    {
        returnValue = F("Schulmeister Allee");
        break;
    }
    case 284888:
    {
        returnValue = F("Schulmeisterberg");
        break;
    }
    case 284889:
    {
        returnValue = F("Schulmeisterbuckelweg");
        break;
    }
    case 284890:
    {
        returnValue = F("Schulmeisterring");
        break;
    }
    case 284891:
    {
        returnValue = F("Schulmeisterstr.");
        break;
    }
    case 284892:
    {
        returnValue = F("Schulmeisterweg");
        break;
    }
    case 284893:
    {
        returnValue = F("Schulmense");
        break;
    }
    case 284894:
    {
        returnValue = F("Schulmke");
        break;
    }
    case 284895:
    {
        returnValue = F("Schulpad");
        break;
    }
    case 284896:
    {
        returnValue = F("Schulpadd");
        break;
    }
    case 284897:
    {
        returnValue = F("Schulpark");
        break;
    }
    case 284898:
    {
        returnValue = F("Schulpark am Michelbach");
        break;
    }
    case 284899:
    {
        returnValue = F("Schulpatt");
        break;
    }
    case 284900:
    {
        returnValue = F("Schulpfad");
        break;
    }
    case 284901:
    {
        returnValue = F("Schulpforte");
        break;
    }
    case 284902:
    {
        returnValue = F("Schulplan");
        break;
    }
    case 284903:
    {
        returnValue = F("Schulplatz");
        break;
    }
    case 284904:
    {
        returnValue = F("Schulplätzel");
        break;
    }
    case 284905:
    {
        returnValue = F("Schulpädche");
        break;
    }
    case 284906:
    {
        returnValue = F("Schulrain");
        break;
    }
    case 284907:
    {
        returnValue = F("Schulrainchen");
        break;
    }
    case 284908:
    {
        returnValue = F("Schulrangen");
        break;
    }
    case 284909:
    {
        returnValue = F("Schulrat-Benz-Str.");
        break;
    }
    case 284910:
    {
        returnValue = F("Schulrat-Blatner-Str.");
        break;
    }
    case 284911:
    {
        returnValue = F("Schulrat-Hohe-Str.");
        break;
    }
    case 284912:
    {
        returnValue = F("Schulrat-Schweikert-Weg");
        break;
    }
    case 284913:
    {
        returnValue = F("Schulrat-Spang-Str.");
        break;
    }
    case 284914:
    {
        returnValue = F("Schulrat-Will-Str.");
        break;
    }
    case 284915:
    {
        returnValue = F("Schulrech");
        break;
    }
    case 284916:
    {
        returnValue = F("Schulredder");
        break;
    }
    case 284917:
    {
        returnValue = F("Schulring");
        break;
    }
    case 284918:
    {
        returnValue = F("Schulschleife");
        break;
    }
    case 284919:
    {
        returnValue = F("Schulschneise");
        break;
    }
    case 284920:
    {
        returnValue = F("Schulschöpfe");
        break;
    }
    case 284921:
    {
        returnValue = F("Schulsee");
        break;
    }
    case 284922:
    {
        returnValue = F("Schulsiedlung");
        break;
    }
    case 284923:
    {
        returnValue = F("Schulsstr.");
        break;
    }
    case 284924:
    {
        returnValue = F("Schulstaffel");
        break;
    }
    case 284925:
    {
        returnValue = F("Schulsteg");
        break;
    }
    case 284926:
    {
        returnValue = F("Schulstegstr.");
        break;
    }
    case 284927:
    {
        returnValue = F("Schulsteig");
        break;
    }
    case 284928:
    {
        returnValue = F("Schulsteige");
        break;
    }
    case 284929:
    {
        returnValue = F("Schulsteigle");
        break;
    }
    case 284930:
    {
        returnValue = F("Schulstieg");
        break;
    }
    case 284931:
    {
        returnValue = F("Schulstiege");
        break;
    }
    case 284932:
    {
        returnValue = F("Schulstr.");
        break;
    }
    case 284933:
    {
        returnValue = F("Schulstr. Abberode");
        break;
    }
    case 284934:
    {
        returnValue = F("Schulstr. Benckendorf");
        break;
    }
    case 284935:
    {
        returnValue = F("Schulstr. Braunschwende");
        break;
    }
    case 284936:
    {
        returnValue = F("Schulstr. Bülow");
        break;
    }
    case 284937:
    {
        returnValue = F("Schulstr. Großörner");
        break;
    }
    case 284938:
    {
        returnValue = F("Schulstr. Vatterode");
        break;
    }
    case 284939:
    {
        returnValue = F("Schulstr. Weißenschirmbach");
        break;
    }
    case 284940:
    {
        returnValue = F("Schulstr.-Mitte");
        break;
    }
    case 284941:
    {
        returnValue = F("Schulstrasse");
        break;
    }
    case 284942:
    {
        returnValue = F("Schult-Kruse-Str.");
        break;
    }
    case 284943:
    {
        returnValue = F("Schultal");
        break;
    }
    case 284944:
    {
        returnValue = F("Schultannenschneise");
        break;
    }
    case 284945:
    {
        returnValue = F("Schulte-Berge-Str.");
        break;
    }
    case 284946:
    {
        returnValue = F("Schulte-Braucks-Str.");
        break;
    }
    case 284947:
    {
        returnValue = F("Schulte-Capellen-Weg");
        break;
    }
    case 284948:
    {
        returnValue = F("Schulte-Hordelhoff-Str.");
        break;
    }
    case 284949:
    {
        returnValue = F("Schulte-Krude-Weg");
        break;
    }
    case 284950:
    {
        returnValue = F("Schulte-Krumpen-Weg");
        break;
    }
    case 284951:
    {
        returnValue = F("Schulte-Mönting-Str.");
        break;
    }
    case 284952:
    {
        returnValue = F("Schulte-Rentrop-Weg");
        break;
    }
    case 284953:
    {
        returnValue = F("Schulte-Steinberg-Weg");
        break;
    }
    case 284954:
    {
        returnValue = F("Schultebeyringstr.");
        break;
    }
    case 284955:
    {
        returnValue = F("Schulten Brauk");
        break;
    }
    case 284956:
    {
        returnValue = F("Schulten Hecke");
        break;
    }
    case 284957:
    {
        returnValue = F("Schulten Kamp");
        break;
    }
    case 284958:
    {
        returnValue = F("Schulten Ohl");
        break;
    }
    case 284959:
    {
        returnValue = F("Schulten Wiese");
        break;
    }
    case 284960:
    {
        returnValue = F("Schulten-Kamp");
        break;
    }
    case 284961:
    {
        returnValue = F("Schultenacker");
        break;
    }
    case 284962:
    {
        returnValue = F("Schultenallee");
        break;
    }
    case 284963:
    {
        returnValue = F("Schultenanger");
        break;
    }
    case 284964:
    {
        returnValue = F("Schultenbrinkstr.");
        break;
    }
    case 284965:
    {
        returnValue = F("Schultenbuschstr.");
        break;
    }
    case 284966:
    {
        returnValue = F("Schultendamm");
        break;
    }
    case 284967:
    {
        returnValue = F("Schultenfeld");
        break;
    }
    case 284968:
    {
        returnValue = F("Schultenfelder Allee");
        break;
    }
    case 284969:
    {
        returnValue = F("Schultenhahn");
        break;
    }
    case 284970:
    {
        returnValue = F("Schultenhausener Str.");
        break;
    }
    case 284971:
    {
        returnValue = F("Schultenhof");
        break;
    }
    case 284972:
    {
        returnValue = F("Schultenhoff");
        break;
    }
    case 284973:
    {
        returnValue = F("Schultenhook");
        break;
    }
    case 284974:
    {
        returnValue = F("Schultenkamp");
        break;
    }
    case 284975:
    {
        returnValue = F("Schultenkampstr.");
        break;
    }
    case 284976:
    {
        returnValue = F("Schultenortstr.");
        break;
    }
    case 284977:
    {
        returnValue = F("Schultenplatz");
        break;
    }
    case 284978:
    {
        returnValue = F("Schultenrott");
        break;
    }
    case 284979:
    {
        returnValue = F("Schultenstegge");
        break;
    }
    case 284980:
    {
        returnValue = F("Schultensteig");
        break;
    }
    case 284981:
    {
        returnValue = F("Schultenstiege");
        break;
    }
    case 284982:
    {
        returnValue = F("Schultenstr.");
        break;
    }
    case 284983:
    {
        returnValue = F("Schultenweg");
        break;
    }
    case 284984:
    {
        returnValue = F("Schultenwiese");
        break;
    }
    case 284985:
    {
        returnValue = F("Schultenwirdel");
        break;
    }
    case 284986:
    {
        returnValue = F("Schultenwurt");
        break;
    }
    case 284987:
    {
        returnValue = F("Schulterbachstr.");
        break;
    }
    case 284988:
    {
        returnValue = F("Schulterbreitenstr.");
        break;
    }
    case 284989:
    {
        returnValue = F("Schulterdobel");
        break;
    }
    case 284990:
    {
        returnValue = F("Schulterdobelweg");
        break;
    }
    case 284991:
    {
        returnValue = F("Schultesberg");
        break;
    }
    case 284992:
    {
        returnValue = F("Schultesgasse");
        break;
    }
    case 284993:
    {
        returnValue = F("Schultesstr.");
        break;
    }
    case 284994:
    {
        returnValue = F("Schultestr.");
        break;
    }
    case 284995:
    {
        returnValue = F("Schultetusstr.");
        break;
    }
    case 284996:
    {
        returnValue = F("Schulteweg");
        break;
    }
    case 284997:
    {
        returnValue = F("Schulthaißstr.");
        break;
    }
    case 284998:
    {
        returnValue = F("Schultheis-Matthes-Str.");
        break;
    }
    case 284999:
    {
        returnValue = F("Schultheisen Kreuz");
        break;
    }
    case 285000:
    {
        returnValue = F("Schultheisengärten");
        break;
    }
    case 285001:
    {
        returnValue = F("Schultheisenstr.");
        break;
    }
    case 285002:
    {
        returnValue = F("Schultheisenwiese");
        break;
    }
    case 285003:
    {
        returnValue = F("Schultheismühle");
        break;
    }
    case 285004:
    {
        returnValue = F("Schultheiss-Gerhard-Schneider-Weg");
        break;
    }
    case 285005:
    {
        returnValue = F("Schultheiss-Keppler-Weg");
        break;
    }
    case 285006:
    {
        returnValue = F("Schultheiss-Str.");
        break;
    }
    case 285007:
    {
        returnValue = F("Schultheissenweg");
        break;
    }
    case 285008:
    {
        returnValue = F("Schultheissgang");
        break;
    }
    case 285009:
    {
        returnValue = F("Schultheissgäßchen");
        break;
    }
    case 285010:
    {
        returnValue = F("Schultheisstr.");
        break;
    }
    case 285011:
    {
        returnValue = F("Schultheiswiesenweg");
        break;
    }
    case 285012:
    {
        returnValue = F("Schultheiß-Bilger-Str.");
        break;
    }
    case 285013:
    {
        returnValue = F("Schultheiß-Bär-Str.");
        break;
    }
    case 285014:
    {
        returnValue = F("Schultheiß-Damen-Str.");
        break;
    }
    case 285015:
    {
        returnValue = F("Schultheiß-Eberhardt-Str.");
        break;
    }
    case 285016:
    {
        returnValue = F("Schultheiß-Fink-Weg");
        break;
    }
    case 285017:
    {
        returnValue = F("Schultheiß-Gipp-Str.");
        break;
    }
    case 285018:
    {
        returnValue = F("Schultheiß-Heschel-Ring");
        break;
    }
    case 285019:
    {
        returnValue = F("Schultheiß-Hildebrant-Weg");
        break;
    }
    case 285020:
    {
        returnValue = F("Schultheiß-Huzele-Str.");
        break;
    }
    case 285021:
    {
        returnValue = F("Schultheiß-Häußler-Str.");
        break;
    }
    case 285022:
    {
        returnValue = F("Schultheiß-Jäckle-Str.");
        break;
    }
    case 285023:
    {
        returnValue = F("Schultheiß-Kollei-Str.");
        break;
    }
    case 285024:
    {
        returnValue = F("Schultheiß-Köhle-Str.");
        break;
    }
    case 285025:
    {
        returnValue = F("Schultheiß-Leo-Ahlf-Weg");
        break;
    }
    case 285026:
    {
        returnValue = F("Schultheiß-Neeb-Pfad");
        break;
    }
    case 285027:
    {
        returnValue = F("Schultheiß-Rieg-Str.");
        break;
    }
    case 285028:
    {
        returnValue = F("Schultheiß-Schmid-Str.");
        break;
    }
    case 285029:
    {
        returnValue = F("Schultheiß-Schneider-Str.");
        break;
    }
    case 285030:
    {
        returnValue = F("Schultheiß-Schraff-Weg");
        break;
    }
    case 285031:
    {
        returnValue = F("Schultheiß-Seeber-Str.");
        break;
    }
    case 285032:
    {
        returnValue = F("Schultheiß-Sommer-Weg");
        break;
    }
    case 285033:
    {
        returnValue = F("Schultheiß-Stiefel-Str.");
        break;
    }
    case 285034:
    {
        returnValue = F("Schultheiß-Trenkle-Str.");
        break;
    }
    case 285035:
    {
        returnValue = F("Schultheiß-Weiß-Weg");
        break;
    }
    case 285036:
    {
        returnValue = F("Schultheiß-Wilhelm-Kammerer-Str.");
        break;
    }
    case 285037:
    {
        returnValue = F("Schultheißenacker");
        break;
    }
    case 285038:
    {
        returnValue = F("Schultheißenbrandstr.");
        break;
    }
    case 285039:
    {
        returnValue = F("Schultheißenhof");
        break;
    }
    case 285040:
    {
        returnValue = F("Schultheißenstr.");
        break;
    }
    case 285041:
    {
        returnValue = F("Schultheißenweg");
        break;
    }
    case 285042:
    {
        returnValue = F("Schultheißgarten");
        break;
    }
    case 285043:
    {
        returnValue = F("Schultheißstr.");
        break;
    }
    case 285044:
    {
        returnValue = F("Schultheißweg");
        break;
    }
    case 285045:
    {
        returnValue = F("Schultheißwies");
        break;
    }
    case 285046:
    {
        returnValue = F("Schulthesgasse");
        break;
    }
    case 285047:
    {
        returnValue = F("Schulthesiusstr.");
        break;
    }
    case 285048:
    {
        returnValue = F("Schulthorfeld");
        break;
    }
    case 285049:
    {
        returnValue = F("Schultkampstr.");
        break;
    }
    case 285050:
    {
        returnValue = F("Schultorstr.");
        break;
    }
    case 285051:
    {
        returnValue = F("Schultredde");
        break;
    }
    case 285052:
    {
        returnValue = F("Schultreppe");
        break;
    }
    case 285053:
    {
        returnValue = F("Schultrift");
        break;
    }
    case 285054:
    {
        returnValue = F("Schultwesselweg");
        break;
    }
    case 285055:
    {
        returnValue = F("Schultwete");
        break;
    }
    case 285056:
    {
        returnValue = F("Schultwiete");
        break;
    }
    case 285057:
    {
        returnValue = F("Schultze-Fimmen-Str.");
        break;
    }
    case 285058:
    {
        returnValue = F("Schultze-Gallera-Weg");
        break;
    }
    case 285059:
    {
        returnValue = F("Schultze-Geräumt");
        break;
    }
    case 285060:
    {
        returnValue = F("Schultzeteichweg");
        break;
    }
    case 285061:
    {
        returnValue = F("Schultzstr.");
        break;
    }
    case 285062:
    {
        returnValue = F("Schulviertel");
        break;
    }
    case 285063:
    {
        returnValue = F("Schulviertelgasse");
        break;
    }
    case 285064:
    {
        returnValue = F("Schulwald");
        break;
    }
    case 285065:
    {
        returnValue = F("Schulwald Cramme");
        break;
    }
    case 285066:
    {
        returnValue = F("Schulwald Reesenbüttel");
        break;
    }
    case 285067:
    {
        returnValue = F("Schulwaldstr.");
        break;
    }
    case 285068:
    {
        returnValue = F("Schulwaldweg");
        break;
    }
    case 285069:
    {
        returnValue = F("Schulwall");
        break;
    }
    case 285070:
    {
        returnValue = F("Schulweberstr.");
        break;
    }
    case 285071:
    {
        returnValue = F("Schulweg");
        break;
    }
    case 285072:
    {
        returnValue = F("Schulweg Paulshain-Paulsdorf");
        break;
    }
    case 285073:
    {
        returnValue = F("Schulwegle");
        break;
    }
    case 285074:
    {
        returnValue = F("Schulweide");
        break;
    }
    case 285075:
    {
        returnValue = F("Schulweinberge");
        break;
    }
    case 285076:
    {
        returnValue = F("Schulwies");
        break;
    }
    case 285077:
    {
        returnValue = F("Schulwiese");
        break;
    }
    case 285078:
    {
        returnValue = F("Schulwiesengraben");
        break;
    }
    case 285079:
    {
        returnValue = F("Schulwiesenstr.");
        break;
    }
    case 285080:
    {
        returnValue = F("Schulwiesenweg");
        break;
    }
    case 285081:
    {
        returnValue = F("Schulwinkel");
        break;
    }
    case 285082:
    {
        returnValue = F("Schulwinkl");
        break;
    }
    case 285083:
    {
        returnValue = F("Schulwäldchen");
        break;
    }
    case 285084:
    {
        returnValue = F("Schulz-Gahmen-Str.");
        break;
    }
    case 285085:
    {
        returnValue = F("Schulz-Kamp");
        break;
    }
    case 285086:
    {
        returnValue = F("Schulz-Keidel-Weg");
        break;
    }
    case 285087:
    {
        returnValue = F("Schulz-Riederich-Str.");
        break;
    }
    case 285088:
    {
        returnValue = F("Schulze Frenkings Hof");
        break;
    }
    case 285089:
    {
        returnValue = F("Schulze-Boysen-Str.");
        break;
    }
    case 285090:
    {
        returnValue = F("Schulze-Bremer-Str.");
        break;
    }
    case 285091:
    {
        returnValue = F("Schulze-Delitzsch-Str.");
        break;
    }
    case 285092:
    {
        returnValue = F("Schulze-Delitzsch-Weg");
        break;
    }
    case 285093:
    {
        returnValue = F("Schulze-Frenkings-Allee");
        break;
    }
    case 285094:
    {
        returnValue = F("Schulze-Geräumt");
        break;
    }
    case 285095:
    {
        returnValue = F("Schulze-Haarens-Hof");
        break;
    }
    case 285096:
    {
        returnValue = F("Schulze-Kathrin-Str.");
        break;
    }
    case 285097:
    {
        returnValue = F("Schulze-Kersten-Str.");
        break;
    }
    case 285098:
    {
        returnValue = F("Schulze-Lohhof-Str.");
        break;
    }
    case 285099:
    {
        returnValue = F("Schulze-Weg");
        break;
    }
    case 285100:
    {
        returnValue = F("Schulze-Weischer-Weg");
        break;
    }
    case 285101:
    {
        returnValue = F("Schulzegasse");
        break;
    }
    case 285102:
    {
        returnValue = F("Schulzehof");
        break;
    }
    case 285103:
    {
        returnValue = F("Schulzenberg");
        break;
    }
    case 285104:
    {
        returnValue = F("Schulzenbreite");
        break;
    }
    case 285105:
    {
        returnValue = F("Schulzenbuchweg");
        break;
    }
    case 285106:
    {
        returnValue = F("Schulzenburgweg");
        break;
    }
    case 285107:
    {
        returnValue = F("Schulzenbusch");
        break;
    }
    case 285108:
    {
        returnValue = F("Schulzenbuschweg");
        break;
    }
    case 285109:
    {
        returnValue = F("Schulzendorfer Siedlung");
        break;
    }
    case 285110:
    {
        returnValue = F("Schulzendorfer Str.");
        break;
    }
    case 285111:
    {
        returnValue = F("Schulzendorfer Weg");
        break;
    }
    case 285112:
    {
        returnValue = F("Schulzenfelde");
        break;
    }
    case 285113:
    {
        returnValue = F("Schulzenfeldstr.");
        break;
    }
    case 285114:
    {
        returnValue = F("Schulzengang");
        break;
    }
    case 285115:
    {
        returnValue = F("Schulzengasse");
        break;
    }
    case 285116:
    {
        returnValue = F("Schulzengrundstr.");
        break;
    }
    case 285117:
    {
        returnValue = F("Schulzengäßle");
        break;
    }
    case 285118:
    {
        returnValue = F("Schulzenhausstr.");
        break;
    }
    case 285119:
    {
        returnValue = F("Schulzenheide");
        break;
    }
    case 285120:
    {
        returnValue = F("Schulzenhof");
        break;
    }
    case 285121:
    {
        returnValue = F("Schulzenhohle");
        break;
    }
    case 285122:
    {
        returnValue = F("Schulzenhufe");
        break;
    }
    case 285123:
    {
        returnValue = F("Schulzenhöher Weg");
        break;
    }
    case 285124:
    {
        returnValue = F("Schulzenhügel");
        break;
    }
    case 285125:
    {
        returnValue = F("Schulzenkamp");
        break;
    }
    case 285126:
    {
        returnValue = F("Schulzenlandweg");
        break;
    }
    case 285127:
    {
        returnValue = F("Schulzenleite");
        break;
    }
    case 285128:
    {
        returnValue = F("Schulzenlochweg");
        break;
    }
    case 285129:
    {
        returnValue = F("Schulzenreihe");
        break;
    }
    case 285130:
    {
        returnValue = F("Schulzenstr.");
        break;
    }
    case 285131:
    {
        returnValue = F("Schulzental");
        break;
    }
    case 285132:
    {
        returnValue = F("Schulzentalweg");
        break;
    }
    case 285133:
    {
        returnValue = F("Schulzentrifft");
        break;
    }
    case 285134:
    {
        returnValue = F("Schulzentrift");
        break;
    }
    case 285135:
    {
        returnValue = F("Schulzentrum");
        break;
    }
    case 285136:
    {
        returnValue = F("Schulzentrum/Busstr.");
        break;
    }
    case 285137:
    {
        returnValue = F("Schulzenweg");
        break;
    }
    case 285138:
    {
        returnValue = F("Schulzenwerder");
        break;
    }
    case 285139:
    {
        returnValue = F("Schulzenwiese");
        break;
    }
    case 285140:
    {
        returnValue = F("Schulzesiedlung");
        break;
    }
    case 285141:
    {
        returnValue = F("Schulzestr.");
        break;
    }
    case 285142:
    {
        returnValue = F("Schulzeweg");
        break;
    }
    case 285143:
    {
        returnValue = F("Schulzmatten");
        break;
    }
    case 285144:
    {
        returnValue = F("Schulzschneise");
        break;
    }
    case 285145:
    {
        returnValue = F("Schulzstr.");
        break;
    }
    case 285146:
    {
        returnValue = F("Schumacherallee");
        break;
    }
    case 285147:
    {
        returnValue = F("Schumacherinweg");
        break;
    }
    case 285148:
    {
        returnValue = F("Schumacherort");
        break;
    }
    case 285149:
    {
        returnValue = F("Schumacherring");
        break;
    }
    case 285150:
    {
        returnValue = F("Schumachers Hof");
        break;
    }
    case 285151:
    {
        returnValue = F("Schumachers Weg");
        break;
    }
    case 285152:
    {
        returnValue = F("Schumachersstr.");
        break;
    }
    case 285153:
    {
        returnValue = F("Schumacherstr.");
        break;
    }
    case 285154:
    {
        returnValue = F("Schumacherweg");
        break;
    }
    case 285155:
    {
        returnValue = F("Schumannallee");
        break;
    }
    case 285156:
    {
        returnValue = F("Schumannhof");
        break;
    }
    case 285157:
    {
        returnValue = F("Schumannplatz");
        break;
    }
    case 285158:
    {
        returnValue = F("Schumannring");
        break;
    }
    case 285159:
    {
        returnValue = F("Schumannsdieken");
        break;
    }
    case 285160:
    {
        returnValue = F("Schumannstr.");
        break;
    }
    case 285161:
    {
        returnValue = F("Schumannweg");
        break;
    }
    case 285162:
    {
        returnValue = F("Schumanstr.");
        break;
    }
    case 285163:
    {
        returnValue = F("Schumberggasse");
        break;
    }
    case 285164:
    {
        returnValue = F("Schumburger Weg");
        break;
    }
    case 285165:
    {
        returnValue = F("Schumisberg");
        break;
    }
    case 285166:
    {
        returnValue = F("Schumkastr.");
        break;
    }
    case 285167:
    {
        returnValue = F("Schummelshof");
        break;
    }
    case 285168:
    {
        returnValue = F("Schumpe");
        break;
    }
    case 285169:
    {
        returnValue = F("Schumpenweg");
        break;
    }
    case 285170:
    {
        returnValue = F("Schunk'sche Str.");
        break;
    }
    case 285171:
    {
        returnValue = F("Schunkelstr.");
        break;
    }
    case 285172:
    {
        returnValue = F("Schunkenhof");
        break;
    }
    case 285173:
    {
        returnValue = F("Schunteraue");
        break;
    }
    case 285174:
    {
        returnValue = F("Schunternäher");
        break;
    }
    case 285175:
    {
        returnValue = F("Schunterquelle");
        break;
    }
    case 285176:
    {
        returnValue = F("Schunterstr.");
        break;
    }
    case 285177:
    {
        returnValue = F("Schunterweg");
        break;
    }
    case 285178:
    {
        returnValue = F("Schupbacher Str.");
        break;
    }
    case 285179:
    {
        returnValue = F("Schupfenberg");
        break;
    }
    case 285180:
    {
        returnValue = F("Schupfenschlag");
        break;
    }
    case 285181:
    {
        returnValue = F("Schupfenwiesen");
        break;
    }
    case 285182:
    {
        returnValue = F("Schupfenäcker");
        break;
    }
    case 285183:
    {
        returnValue = F("Schupfer Str.");
        break;
    }
    case 285184:
    {
        returnValue = F("Schupferbergstr.");
        break;
    }
    case 285185:
    {
        returnValue = F("Schupfholzerwaldweg");
        break;
    }
    case 285186:
    {
        returnValue = F("Schupfloh");
        break;
    }
    case 285187:
    {
        returnValue = F("Schupmanngasse");
        break;
    }
    case 285188:
    {
        returnValue = F("Schuppacher Str.");
        break;
    }
    case 285189:
    {
        returnValue = F("Schuppenbreite");
        break;
    }
    case 285190:
    {
        returnValue = F("Schuppengasse");
        break;
    }
    case 285191:
    {
        returnValue = F("Schuppenwies");
        break;
    }
    case 285192:
    {
        returnValue = F("Schuppenwiesen");
        break;
    }
    case 285193:
    {
        returnValue = F("Schuppertstr.");
        break;
    }
    case 285194:
    {
        returnValue = F("Schuppesiedlung");
        break;
    }
    case 285195:
    {
        returnValue = F("Schuppstr.");
        break;
    }
    case 285196:
    {
        returnValue = F("Schur");
        break;
    }
    case 285197:
    {
        returnValue = F("Schurackersweg");
        break;
    }
    case 285198:
    {
        returnValue = F("Schuraer Str.");
        break;
    }
    case 285199:
    {
        returnValue = F("Schurbach");
        break;
    }
    case 285200:
    {
        returnValue = F("Schurberg");
        break;
    }
    case 285201:
    {
        returnValue = F("Schurenbrook");
        break;
    }
    case 285202:
    {
        returnValue = F("Schurenweg");
        break;
    }
    case 285203:
    {
        returnValue = F("Schurhammerweg");
        break;
    }
    case 285204:
    {
        returnValue = F("Schurichtweg");
        break;
    }
    case 285205:
    {
        returnValue = F("Schurigstr.");
        break;
    }
    case 285206:
    {
        returnValue = F("Schurkamp");
        break;
    }
    case 285207:
    {
        returnValue = F("Schurre");
        break;
    }
    case 285208:
    {
        returnValue = F("Schurrelmoorweg");
        break;
    }
    case 285209:
    {
        returnValue = F("Schurrelsfeldweg");
        break;
    }
    case 285210:
    {
        returnValue = F("Schurrelweg");
        break;
    }
    case 285211:
    {
        returnValue = F("Schurrenberg");
        break;
    }
    case 285212:
    {
        returnValue = F("Schurrenstr.");
        break;
    }
    case 285213:
    {
        returnValue = F("Schurtenhofweg");
        break;
    }
    case 285214:
    {
        returnValue = F("Schurthalde");
        break;
    }
    case 285215:
    {
        returnValue = F("Schurthplatz");
        break;
    }
    case 285216:
    {
        returnValue = F("Schurwald - / Mörike Str.");
        break;
    }
    case 285217:
    {
        returnValue = F("Schurwaldblick");
        break;
    }
    case 285218:
    {
        returnValue = F("Schurwaldstr.");
        break;
    }
    case 285219:
    {
        returnValue = F("Schurwaldweg");
        break;
    }
    case 285220:
    {
        returnValue = F("Schurzfell");
        break;
    }
    case 285221:
    {
        returnValue = F("Schurzstr.");
        break;
    }
    case 285222:
    {
        returnValue = F("Schussenbrücke");
        break;
    }
    case 285223:
    {
        returnValue = F("Schussenrieder Str.");
        break;
    }
    case 285224:
    {
        returnValue = F("Schussenstr.");
        break;
    }
    case 285225:
    {
        returnValue = F("Schussentalbrücke");
        break;
    }
    case 285226:
    {
        returnValue = F("Schussentalstr.");
        break;
    }
    case 285227:
    {
        returnValue = F("Schussenweg");
        break;
    }
    case 285228:
    {
        returnValue = F("Schusteranger");
        break;
    }
    case 285229:
    {
        returnValue = F("Schusterbeckstr.");
        break;
    }
    case 285230:
    {
        returnValue = F("Schusterberg");
        break;
    }
    case 285231:
    {
        returnValue = F("Schusterbergstr.");
        break;
    }
    case 285232:
    {
        returnValue = F("Schusterbistlweg");
        break;
    }
    case 285233:
    {
        returnValue = F("Schusterbleek");
        break;
    }
    case 285234:
    {
        returnValue = F("Schusterbrink");
        break;
    }
    case 285235:
    {
        returnValue = F("Schusterdamm");
        break;
    }
    case 285236:
    {
        returnValue = F("Schusterecke");
        break;
    }
    case 285237:
    {
        returnValue = F("Schusterfeld");
        break;
    }
    case 285238:
    {
        returnValue = F("Schustergang");
        break;
    }
    case 285239:
    {
        returnValue = F("Schustergarten");
        break;
    }
    case 285240:
    {
        returnValue = F("Schustergasse");
        break;
    }
    case 285241:
    {
        returnValue = F("Schustergrund");
        break;
    }
    case 285242:
    {
        returnValue = F("Schustergässele");
        break;
    }
    case 285243:
    {
        returnValue = F("Schustergäßle");
        break;
    }
    case 285244:
    {
        returnValue = F("Schusterhang");
        break;
    }
    case 285245:
    {
        returnValue = F("Schusterhof");
        break;
    }
    case 285246:
    {
        returnValue = F("Schusterhöfe");
        break;
    }
    case 285247:
    {
        returnValue = F("Schusterhöhe");
        break;
    }
    case 285248:
    {
        returnValue = F("Schusterinsel");
        break;
    }
    case 285249:
    {
        returnValue = F("Schusterkamp");
        break;
    }
    case 285250:
    {
        returnValue = F("Schusterkate");
        break;
    }
    case 285251:
    {
        returnValue = F("Schusterknapp");
        break;
    }
    case 285252:
    {
        returnValue = F("Schusterkoppel");
        break;
    }
    case 285253:
    {
        returnValue = F("Schusterkrug");
        break;
    }
    case 285254:
    {
        returnValue = F("Schusterleite");
        break;
    }
    case 285255:
    {
        returnValue = F("Schusterlohne");
        break;
    }
    case 285256:
    {
        returnValue = F("Schustermarter");
        break;
    }
    case 285257:
    {
        returnValue = F("Schustermooslohe");
        break;
    }
    case 285258:
    {
        returnValue = F("Schusterpoint");
        break;
    }
    case 285259:
    {
        returnValue = F("Schusterrain");
        break;
    }
    case 285260:
    {
        returnValue = F("Schusterredder");
        break;
    }
    case 285261:
    {
        returnValue = F("Schusterring");
        break;
    }
    case 285262:
    {
        returnValue = F("Schusters Garten");
        break;
    }
    case 285263:
    {
        returnValue = F("Schusters Kamp");
        break;
    }
    case 285264:
    {
        returnValue = F("Schustersbuck");
        break;
    }
    case 285265:
    {
        returnValue = F("Schustersdamm");
        break;
    }
    case 285266:
    {
        returnValue = F("Schustersgasse");
        break;
    }
    case 285267:
    {
        returnValue = F("Schusterskamp");
        break;
    }
    case 285268:
    {
        returnValue = F("Schustersteig");
        break;
    }
    case 285269:
    {
        returnValue = F("Schustersteige");
        break;
    }
    case 285270:
    {
        returnValue = F("Schusterstiege");
        break;
    }
    case 285271:
    {
        returnValue = F("Schusterstr.");
        break;
    }
    case 285272:
    {
        returnValue = F("Schustersweg");
        break;
    }
    case 285273:
    {
        returnValue = F("Schustersweid");
        break;
    }
    case 285274:
    {
        returnValue = F("Schustertwiete");
        break;
    }
    case 285275:
    {
        returnValue = F("Schusterwall");
        break;
    }
    case 285276:
    {
        returnValue = F("Schusterweg");
        break;
    }
    case 285277:
    {
        returnValue = F("Schusterwörthstr.");
        break;
    }
    case 285278:
    {
        returnValue = F("Schusterzell");
        break;
    }
    case 285279:
    {
        returnValue = F("Schusteräcker");
        break;
    }
    case 285280:
    {
        returnValue = F("Schustgergasse");
        break;
    }
    case 285281:
    {
        returnValue = F("Schutenstellergang");
        break;
    }
    case 285282:
    {
        returnValue = F("Schutenweg");
        break;
    }
    case 285283:
    {
        returnValue = F("Schuter");
        break;
    }
    case 285284:
    {
        returnValue = F("Schuteweg");
        break;
    }
    case 285285:
    {
        returnValue = F("Schutow");
        break;
    }
    case 285286:
    {
        returnValue = F("Schuttberg");
        break;
    }
    case 285287:
    {
        returnValue = F("Schuttdeponie Steingaden");
        break;
    }
    case 285288:
    {
        returnValue = F("Schutterdamm");
        break;
    }
    case 285289:
    {
        returnValue = F("Schutterer Pfad");
        break;
    }
    case 285290:
    {
        returnValue = F("Schuttergasse");
        break;
    }
    case 285291:
    {
        returnValue = F("Schutterlindenbergstr.");
        break;
    }
    case 285292:
    {
        returnValue = F("Schutterner Hauptstr.");
        break;
    }
    case 285293:
    {
        returnValue = F("Schutternstr.");
        break;
    }
    case 285294:
    {
        returnValue = F("Schutterpfädle");
        break;
    }
    case 285295:
    {
        returnValue = F("Schutterpromenade/Rosenweg");
        break;
    }
    case 285296:
    {
        returnValue = F("Schutterstr.");
        break;
    }
    case 285297:
    {
        returnValue = F("Schuttertalstr.");
        break;
    }
    case 285298:
    {
        returnValue = F("Schuttertalweg");
        break;
    }
    case 285299:
    {
        returnValue = F("Schutterterrassen am alten Stadtbahnhof");
        break;
    }
    case 285300:
    {
        returnValue = F("Schutterweg");
        break;
    }
    case 285301:
    {
        returnValue = F("Schutterwälder Str.");
        break;
    }
    case 285302:
    {
        returnValue = F("Schutterzeller Mühle");
        break;
    }
    case 285303:
    {
        returnValue = F("Schutterzeller Str.");
        break;
    }
    case 285304:
    {
        returnValue = F("Schuttholz");
        break;
    }
    case 285305:
    {
        returnValue = F("Schuttholzweg");
        break;
    }
    case 285306:
    {
        returnValue = F("Schuttkuhlenweg");
        break;
    }
    case 285307:
    {
        returnValue = F("Schuttlochweg");
        break;
    }
    case 285308:
    {
        returnValue = F("Schuttorfer Aue");
        break;
    }
    case 285309:
    {
        returnValue = F("Schuttorfer Dieck");
        break;
    }
    case 285310:
    {
        returnValue = F("Schuttplatzweg");
        break;
    }
    case 285311:
    {
        returnValue = F("Schuttstr.");
        break;
    }
    case 285312:
    {
        returnValue = F("Schutzackerstr.");
        break;
    }
    case 285313:
    {
        returnValue = F("Schutzalf");
        break;
    }
    case 285314:
    {
        returnValue = F("Schutzbacher Weg");
        break;
    }
    case 285315:
    {
        returnValue = F("Schutzbarstr.");
        break;
    }
    case 285316:
    {
        returnValue = F("Schutzbaumstr.");
        break;
    }
    case 285317:
    {
        returnValue = F("Schutzengelstr.");
        break;
    }
    case 285318:
    {
        returnValue = F("Schutzengelweg");
        break;
    }
    case 285319:
    {
        returnValue = F("Schutzgasse");
        break;
    }
    case 285320:
    {
        returnValue = F("Schutzgraben");
        break;
    }
    case 285321:
    {
        returnValue = F("Schutzhausweg");
        break;
    }
    case 285322:
    {
        returnValue = F("Schutzheiligen");
        break;
    }
    case 285323:
    {
        returnValue = F("Schutzhof");
        break;
    }
    case 285324:
    {
        returnValue = F("Schutzhüttenweg");
        break;
    }
    case 285325:
    {
        returnValue = F("Schutzstr.");
        break;
    }
    case 285326:
    {
        returnValue = F("Schutzweg");
        break;
    }
    case 285327:
    {
        returnValue = F("Schutzwiese");
        break;
    }
    case 285328:
    {
        returnValue = F("Schutzwiesen");
        break;
    }
    case 285329:
    {
        returnValue = F("Schutzwiesenstr.");
        break;
    }
    case 285330:
    {
        returnValue = F("Schuwenstr.");
        break;
    }
    case 285331:
    {
        returnValue = F("Schuß");
        break;
    }
    case 285332:
    {
        returnValue = F("Schußangerweg");
        break;
    }
    case 285333:
    {
        returnValue = F("Schußbachstr.");
        break;
    }
    case 285334:
    {
        returnValue = F("Schußbachweg");
        break;
    }
    case 285335:
    {
        returnValue = F("Schußgasse");
        break;
    }
    case 285336:
    {
        returnValue = F("Schußhüttenweg");
        break;
    }
    case 285337:
    {
        returnValue = F("Schwaamer Str.");
        break;
    }
    case 285338:
    {
        returnValue = F("Schwaaner Chaussee");
        break;
    }
    case 285339:
    {
        returnValue = F("Schwaaner Landstr.");
        break;
    }
    case 285340:
    {
        returnValue = F("Schwaaner Landweg");
        break;
    }
    case 285341:
    {
        returnValue = F("Schwaaner Str.");
        break;
    }
    case 285342:
    {
        returnValue = F("Schwaansche Str.");
        break;
    }
    case 285343:
    {
        returnValue = F("Schwaara");
        break;
    }
    case 285344:
    {
        returnValue = F("Schwab-Str.");
        break;
    }
    case 285345:
    {
        returnValue = F("Schwabachanlage");
        break;
    }
    case 285346:
    {
        returnValue = F("Schwabacher Allee");
        break;
    }
    case 285347:
    {
        returnValue = F("Schwabacher Str.");
        break;
    }
    case 285348:
    {
        returnValue = F("Schwabacher Weg");
        break;
    }
    case 285349:
    {
        returnValue = F("Schwabachgasse");
        break;
    }
    case 285350:
    {
        returnValue = F("Schwabachgrund");
        break;
    }
    case 285351:
    {
        returnValue = F("Schwabachstr.");
        break;
    }
    case 285352:
    {
        returnValue = F("Schwabachweg");
        break;
    }
    case 285353:
    {
        returnValue = F("Schwabaicher Str.");
        break;
    }
    case 285354:
    {
        returnValue = F("Schwabbacher Str.");
        break;
    }
    case 285355:
    {
        returnValue = F("Schwabbacher Weg");
        break;
    }
    case 285356:
    {
        returnValue = F("Schwabbachstr.");
        break;
    }
    case 285357:
    {
        returnValue = F("Schwabbachweg");
        break;
    }
    case 285358:
    {
        returnValue = F("Schwabbrucker Str.");
        break;
    }
    case 285359:
    {
        returnValue = F("Schwabe");
        break;
    }
    case 285360:
    {
        returnValue = F("Schwabedastr.");
        break;
    }
    case 285361:
    {
        returnValue = F("Schwabegger Str.");
        break;
    }
    case 285362:
    {
        returnValue = F("Schwabeggstr.");
        break;
    }
    case 285363:
    {
        returnValue = F("Schwabelstr.");
        break;
    }
    case 285364:
    {
        returnValue = F("Schwaben");
        break;
    }
    case 285365:
    {
        returnValue = F("Schwabenbach");
        break;
    }
    case 285366:
    {
        returnValue = F("Schwabenbauerweg");
        break;
    }
    case 285367:
    {
        returnValue = F("Schwabenberg");
        break;
    }
    case 285368:
    {
        returnValue = F("Schwabenbergstr.");
        break;
    }
    case 285369:
    {
        returnValue = F("Schwabendorf");
        break;
    }
    case 285370:
    {
        returnValue = F("Schwabendorfer Str.");
        break;
    }
    case 285371:
    {
        returnValue = F("Schwabeneck");
        break;
    }
    case 285372:
    {
        returnValue = F("Schwabeneckweg");
        break;
    }
    case 285373:
    {
        returnValue = F("Schwabener Au");
        break;
    }
    case 285374:
    {
        returnValue = F("Schwabener Str.");
        break;
    }
    case 285375:
    {
        returnValue = F("Schwabener Weg");
        break;
    }
    case 285376:
    {
        returnValue = F("Schwabengartenstr.");
        break;
    }
    case 285377:
    {
        returnValue = F("Schwabengasse");
        break;
    }
    case 285378:
    {
        returnValue = F("Schwabengrube");
        break;
    }
    case 285379:
    {
        returnValue = F("Schwabengässchen");
        break;
    }
    case 285380:
    {
        returnValue = F("Schwabengässle");
        break;
    }
    case 285381:
    {
        returnValue = F("Schwabengäßle");
        break;
    }
    case 285382:
    {
        returnValue = F("Schwabenheimer Str.");
        break;
    }
    case 285383:
    {
        returnValue = F("Schwabenheimer Weg");
        break;
    }
    case 285384:
    {
        returnValue = F("Schwabenhof");
        break;
    }
    case 285385:
    {
        returnValue = F("Schwabenholz Weg");
        break;
    }
    case 285386:
    {
        returnValue = F("Schwabenlandweg");
        break;
    }
    case 285387:
    {
        returnValue = F("Schwabenlieselweg");
        break;
    }
    case 285388:
    {
        returnValue = F("Schwabenländle Str.");
        break;
    }
    case 285389:
    {
        returnValue = F("Schwabenmatten");
        break;
    }
    case 285390:
    {
        returnValue = F("Schwabenpark");
        break;
    }
    case 285391:
    {
        returnValue = F("Schwabenring");
        break;
    }
    case 285392:
    {
        returnValue = F("Schwabenröder Str.");
        break;
    }
    case 285393:
    {
        returnValue = F("Schwabensee");
        break;
    }
    case 285394:
    {
        returnValue = F("Schwabensiedlung");
        break;
    }
    case 285395:
    {
        returnValue = F("Schwabenstr.");
        break;
    }
    case 285396:
    {
        returnValue = F("Schwabentalkinzig");
        break;
    }
    case 285397:
    {
        returnValue = F("Schwabentorstr.");
        break;
    }
    case 285398:
    {
        returnValue = F("Schwabentorweg");
        break;
    }
    case 285399:
    {
        returnValue = F("Schwabenweg");
        break;
    }
    case 285400:
    {
        returnValue = F("Schwabenwiesen");
        break;
    }
    case 285401:
    {
        returnValue = F("Schwabenäcker");
        break;
    }
    case 285402:
    {
        returnValue = F("Schwaber Str.");
        break;
    }
    case 285403:
    {
        returnValue = F("Schwaberower Str.");
        break;
    }
    case 285404:
    {
        returnValue = F("Schwabershaldeweg");
        break;
    }
    case 285405:
    {
        returnValue = F("Schwaberweger Haupt-Geräumt");
        break;
    }
    case 285406:
    {
        returnValue = F("Schwabestr.");
        break;
    }
    case 285407:
    {
        returnValue = F("Schwabgäßchen");
        break;
    }
    case 285408:
    {
        returnValue = F("Schwabhausen");
        break;
    }
    case 285409:
    {
        returnValue = F("Schwabhausenstr.");
        break;
    }
    case 285410:
    {
        returnValue = F("Schwabhauser Str.");
        break;
    }
    case 285411:
    {
        returnValue = F("Schwabhäuser Str.");
        break;
    }
    case 285412:
    {
        returnValue = F("Schwabhäuser Weg");
        break;
    }
    case 285413:
    {
        returnValue = F("Schwablstr.");
        break;
    }
    case 285414:
    {
        returnValue = F("Schwablweg");
        break;
    }
    case 285415:
    {
        returnValue = F("Schwabmayrstr.");
        break;
    }
    case 285416:
    {
        returnValue = F("Schwabmünchener Str.");
        break;
    }
    case 285417:
    {
        returnValue = F("Schwabmünchner Str.");
        break;
    }
    case 285418:
    {
        returnValue = F("Schwabsdorfer Str.");
        break;
    }
    case 285419:
    {
        returnValue = F("Schwabsdorfer Weg");
        break;
    }
    case 285420:
    {
        returnValue = F("Schwabsgasse");
        break;
    }
    case 285421:
    {
        returnValue = F("Schwabsoiener Str.");
        break;
    }
    case 285422:
    {
        returnValue = F("Schwabsoier Str.");
        break;
    }
    case 285423:
    {
        returnValue = F("Schwabsrother Str.");
        break;
    }
    case 285424:
    {
        returnValue = F("Schwabstadl");
        break;
    }
    case 285425:
    {
        returnValue = F("Schwabstadler Str.");
        break;
    }
    case 285426:
    {
        returnValue = F("Schwabstedter Damm");
        break;
    }
    case 285427:
    {
        returnValue = F("Schwabstedter Str.");
        break;
    }
    case 285428:
    {
        returnValue = F("Schwabstedter Weg");
        break;
    }
    case 285429:
    {
        returnValue = F("Schwabstetter Str.");
        break;
    }
    case 285430:
    {
        returnValue = F("Schwabstichstr.");
        break;
    }
    case 285431:
    {
        returnValue = F("Schwabstichweg");
        break;
    }
    case 285432:
    {
        returnValue = F("Schwabstr.");
        break;
    }
    case 285433:
    {
        returnValue = F("Schwabsträßle");
        break;
    }
    case 285434:
    {
        returnValue = F("Schwabswiese");
        break;
    }
    case 285435:
    {
        returnValue = F("Schwabweg");
        break;
    }
    case 285436:
    {
        returnValue = F("Schwabäckerstr.");
        break;
    }
    case 285437:
    {
        returnValue = F("Schwachhausen");
        break;
    }
    case 285438:
    {
        returnValue = F("Schwachhäuser Str.");
        break;
    }
    case 285439:
    {
        returnValue = F("Schwachstetter Weg");
        break;
    }
    case 285440:
    {
        returnValue = F("Schwacken Hagen");
        break;
    }
    case 285441:
    {
        returnValue = F("Schwackendorf");
        break;
    }
    case 285442:
    {
        returnValue = F("Schwadbarg");
        break;
    }
    case 285443:
    {
        returnValue = F("Schwaderbachstr.");
        break;
    }
    case 285444:
    {
        returnValue = F("Schwaderfeld");
        break;
    }
    case 285445:
    {
        returnValue = F("Schwaderloch");
        break;
    }
    case 285446:
    {
        returnValue = F("Schwaderlochweg");
        break;
    }
    case 285447:
    {
        returnValue = F("Schwadermühler Weg");
        break;
    }
    case 285448:
    {
        returnValue = F("Schwadinger Helmer");
        break;
    }
    case 285449:
    {
        returnValue = F("Schwadorfer Kreuz");
        break;
    }
    case 285450:
    {
        returnValue = F("Schwadorfer Weg");
        break;
    }
    case 285451:
    {
        returnValue = F("Schwafener Str.");
        break;
    }
    case 285452:
    {
        returnValue = F("Schwafheimer Str.");
        break;
    }
    case 285453:
    {
        returnValue = F("Schwafheimer Weg");
        break;
    }
    case 285454:
    {
        returnValue = F("Schwafördener Str.");
        break;
    }
    case 285455:
    {
        returnValue = F("Schwafördener Weg");
        break;
    }
    case 285456:
    {
        returnValue = F("Schwager sin Strat");
        break;
    }
    case 285457:
    {
        returnValue = F("Schwagerhall");
        break;
    }
    case 285458:
    {
        returnValue = F("Schwagerstr.");
        break;
    }
    case 285459:
    {
        returnValue = F("Schwagersweg");
        break;
    }
    case 285460:
    {
        returnValue = F("Schwagestr.");
        break;
    }
    case 285461:
    {
        returnValue = F("Schwaghof");
        break;
    }
    case 285462:
    {
        returnValue = F("Schwagstorfer Str.");
        break;
    }
    case 285463:
    {
        returnValue = F("Schwaiba");
        break;
    }
    case 285464:
    {
        returnValue = F("Schwaibacher Str.");
        break;
    }
    case 285465:
    {
        returnValue = F("Schwaibachtal");
        break;
    }
    case 285466:
    {
        returnValue = F("Schwaiberger Str.");
        break;
    }
    case 285467:
    {
        returnValue = F("Schwaiberstr.");
        break;
    }
    case 285468:
    {
        returnValue = F("Schwaiblbachstr.");
        break;
    }
    case 285469:
    {
        returnValue = F("Schwaiblmeierweg");
        break;
    }
    case 285470:
    {
        returnValue = F("Schwaiblreuth");
        break;
    }
    case 285471:
    {
        returnValue = F("Schwaiblweg");
        break;
    }
    case 285472:
    {
        returnValue = F("Schwaig");
        break;
    }
    case 285473:
    {
        returnValue = F("Schwaiganger Str.");
        break;
    }
    case 285474:
    {
        returnValue = F("Schwaige");
        break;
    }
    case 285475:
    {
        returnValue = F("Schwaigener Bahnhofstr.");
        break;
    }
    case 285476:
    {
        returnValue = F("Schwaigener Str.");
        break;
    }
    case 285477:
    {
        returnValue = F("Schwaiger Kreisel");
        break;
    }
    case 285478:
    {
        returnValue = F("Schwaiger Str.");
        break;
    }
    case 285479:
    {
        returnValue = F("Schwaiger Weg");
        break;
    }
    case 285480:
    {
        returnValue = F("Schwaiger-Geräumt");
        break;
    }
    case 285481:
    {
        returnValue = F("Schwaigerbachstr.");
        break;
    }
    case 285482:
    {
        returnValue = F("Schwaigerbreite");
        break;
    }
    case 285483:
    {
        returnValue = F("Schwaigerfeldstr.");
        break;
    }
    case 285484:
    {
        returnValue = F("Schwaigergasse");
        break;
    }
    case 285485:
    {
        returnValue = F("Schwaigerner Ruith");
        break;
    }
    case 285486:
    {
        returnValue = F("Schwaigerner Str.");
        break;
    }
    case 285487:
    {
        returnValue = F("Schwaigerner Weg");
        break;
    }
    case 285488:
    {
        returnValue = F("Schwaigerstr.");
        break;
    }
    case 285489:
    {
        returnValue = F("Schwaigerweg");
        break;
    }
    case 285490:
    {
        returnValue = F("Schwaighausen");
        break;
    }
    case 285491:
    {
        returnValue = F("Schwaighausener Str.");
        break;
    }
    case 285492:
    {
        returnValue = F("Schwaighauser Bierweg");
        break;
    }
    case 285493:
    {
        returnValue = F("Schwaighauser Str.");
        break;
    }
    case 285494:
    {
        returnValue = F("Schwaighauser Weg");
        break;
    }
    case 285495:
    {
        returnValue = F("Schwaighofanger");
        break;
    }
    case 285496:
    {
        returnValue = F("Schwaighofanlage");
        break;
    }
    case 285497:
    {
        returnValue = F("Schwaighofen");
        break;
    }
    case 285498:
    {
        returnValue = F("Schwaighoferweg");
        break;
    }
    case 285499:
    {
        returnValue = F("Schwaighofsiedlung");
        break;
    }
    case 285500:
    {
        returnValue = F("Schwaighofstr.");
        break;
    }
    case 285501:
    {
        returnValue = F("Schwaigholzstr.");
        break;
    }
    case 285502:
    {
        returnValue = F("Schwaigstr.");
        break;
    }
    case 285503:
    {
        returnValue = F("Schwaigwall");
        break;
    }
    case 285504:
    {
        returnValue = F("Schwaigweg");
        break;
    }
    case 285505:
    {
        returnValue = F("Schwaigwiese");
        break;
    }
    case 285506:
    {
        returnValue = F("Schwaikheimer Str.");
        break;
    }
    case 285507:
    {
        returnValue = F("Schwaikheimer Weg");
        break;
    }
    case 285508:
    {
        returnValue = F("Schwaikheimer Wiesen");
        break;
    }
    case 285509:
    {
        returnValue = F("Schwaimer Str.");
        break;
    }
    case 285510:
    {
        returnValue = F("Schwaistr.");
        break;
    }
    case 285511:
    {
        returnValue = F("Schwaketenstr.");
        break;
    }
    case 285512:
    {
        returnValue = F("Schwal");
        break;
    }
    case 285513:
    {
        returnValue = F("Schwalbachacker");
        break;
    }
    case 285514:
    {
        returnValue = F("Schwalbacher Str.");
        break;
    }
    case 285515:
    {
        returnValue = F("Schwalbacher Weg");
        break;
    }
    case 285516:
    {
        returnValue = F("Schwalbachstr.");
        break;
    }
    case 285517:
    {
        returnValue = F("Schwalbachswiesenweg");
        break;
    }
    case 285518:
    {
        returnValue = F("Schwalbachweg");
        break;
    }
    case 285519:
    {
        returnValue = F("Schwalbenbachstr.");
        break;
    }
    case 285520:
    {
        returnValue = F("Schwalbenberg");
        break;
    }
    case 285521:
    {
        returnValue = F("Schwalbenbergweg");
        break;
    }
    case 285522:
    {
        returnValue = F("Schwalbenbogen");
        break;
    }
    case 285523:
    {
        returnValue = F("Schwalbenbreite");
        break;
    }
    case 285524:
    {
        returnValue = F("Schwalbenbrink");
        break;
    }
    case 285525:
    {
        returnValue = F("Schwalbeneck");
        break;
    }
    case 285526:
    {
        returnValue = F("Schwalbener Flügel");
        break;
    }
    case 285527:
    {
        returnValue = F("Schwalbenfeld");
        break;
    }
    case 285528:
    {
        returnValue = F("Schwalbenfeldstr.");
        break;
    }
    case 285529:
    {
        returnValue = F("Schwalbenflucht");
        break;
    }
    case 285530:
    {
        returnValue = F("Schwalbenflug");
        break;
    }
    case 285531:
    {
        returnValue = F("Schwalbengang");
        break;
    }
    case 285532:
    {
        returnValue = F("Schwalbengasse");
        break;
    }
    case 285533:
    {
        returnValue = F("Schwalbengraben");
        break;
    }
    case 285534:
    {
        returnValue = F("Schwalbengrube");
        break;
    }
    case 285535:
    {
        returnValue = F("Schwalbenherd");
        break;
    }
    case 285536:
    {
        returnValue = F("Schwalbenhof");
        break;
    }
    case 285537:
    {
        returnValue = F("Schwalbenhofstr.");
        break;
    }
    case 285538:
    {
        returnValue = F("Schwalbenholzstr.");
        break;
    }
    case 285539:
    {
        returnValue = F("Schwalbenhälde");
        break;
    }
    case 285540:
    {
        returnValue = F("Schwalbenhöhe");
        break;
    }
    case 285541:
    {
        returnValue = F("Schwalbenkaulstr.");
        break;
    }
    case 285542:
    {
        returnValue = F("Schwalbenklink");
        break;
    }
    case 285543:
    {
        returnValue = F("Schwalbenloh");
        break;
    }
    case 285544:
    {
        returnValue = F("Schwalbennest");
        break;
    }
    case 285545:
    {
        returnValue = F("Schwalbenpfad");
        break;
    }
    case 285546:
    {
        returnValue = F("Schwalbenplatz");
        break;
    }
    case 285547:
    {
        returnValue = F("Schwalbenrain");
        break;
    }
    case 285548:
    {
        returnValue = F("Schwalbenrainweg");
        break;
    }
    case 285549:
    {
        returnValue = F("Schwalbenredder");
        break;
    }
    case 285550:
    {
        returnValue = F("Schwalbenring");
        break;
    }
    case 285551:
    {
        returnValue = F("Schwalbenruhstr.");
        break;
    }
    case 285552:
    {
        returnValue = F("Schwalbenschwanz");
        break;
    }
    case 285553:
    {
        returnValue = F("Schwalbenschwanzweg");
        break;
    }
    case 285554:
    {
        returnValue = F("Schwalbenstadt");
        break;
    }
    case 285555:
    {
        returnValue = F("Schwalbensteg");
        break;
    }
    case 285556:
    {
        returnValue = F("Schwalbensteig");
        break;
    }
    case 285557:
    {
        returnValue = F("Schwalbensteinweg");
        break;
    }
    case 285558:
    {
        returnValue = F("Schwalbenstieg");
        break;
    }
    case 285559:
    {
        returnValue = F("Schwalbenstr.");
        break;
    }
    case 285560:
    {
        returnValue = F("Schwalbenstück");
        break;
    }
    case 285561:
    {
        returnValue = F("Schwalbental");
        break;
    }
    case 285562:
    {
        returnValue = F("Schwalbenthaler Str.");
        break;
    }
    case 285563:
    {
        returnValue = F("Schwalbenweg");
        break;
    }
    case 285564:
    {
        returnValue = F("Schwalbenwegpark");
        break;
    }
    case 285565:
    {
        returnValue = F("Schwalbenwinkel");
        break;
    }
    case 285566:
    {
        returnValue = F("Schwalbenäcker");
        break;
    }
    case 285567:
    {
        returnValue = F("Schwalbestr.");
        break;
    }
    case 285568:
    {
        returnValue = F("Schwalbstr.");
        break;
    }
    case 285569:
    {
        returnValue = F("Schwalbweg");
        break;
    }
    case 285570:
    {
        returnValue = F("Schwalbweiher");
        break;
    }
    case 285571:
    {
        returnValue = F("Schwaldstr.");
        break;
    }
    case 285572:
    {
        returnValue = F("Schwaldweg");
        break;
    }
    case 285573:
    {
        returnValue = F("Schwalefelder Str.");
        break;
    }
    case 285574:
    {
        returnValue = F("Schwalenbach");
        break;
    }
    case 285575:
    {
        returnValue = F("Schwalenberger Str.");
        break;
    }
    case 285576:
    {
        returnValue = F("Schwalenbergstr.");
        break;
    }
    case 285577:
    {
        returnValue = F("Schwalenbergsweg");
        break;
    }
    case 285578:
    {
        returnValue = F("Schwalenstert");
        break;
    }
    case 285579:
    {
        returnValue = F("Schwalheimer Hauptstr.");
        break;
    }
    case 285580:
    {
        returnValue = F("Schwalheimer Str.");
        break;
    }
    case 285581:
    {
        returnValue = F("Schwalheimer Weg");
        break;
    }
    case 285582:
    {
        returnValue = F("Schwalingen");
        break;
    }
    case 285583:
    {
        returnValue = F("Schwalinger Str.");
        break;
    }
    case 285584:
    {
        returnValue = F("Schwallbachstr.");
        break;
    }
    case 285585:
    {
        returnValue = F("Schwallbornstr.");
        break;
    }
    case 285586:
    {
        returnValue = F("Schwalldorfer Str.");
        break;
    }
    case 285587:
    {
        returnValue = F("Schwallenberg");
        break;
    }
    case 285588:
    {
        returnValue = F("Schwaller Dell");
        break;
    }
    case 285589:
    {
        returnValue = F("Schwaller Höhe");
        break;
    }
    case 285590:
    {
        returnValue = F("Schwaller Str.");
        break;
    }
    case 285591:
    {
        returnValue = F("Schwallgasse");
        break;
    }
    case 285592:
    {
        returnValue = F("Schwallunger Str.");
        break;
    }
    case 285593:
    {
        returnValue = F("Schwalmallee");
        break;
    }
    case 285594:
    {
        returnValue = F("Schwalmaue");
        break;
    }
    case 285595:
    {
        returnValue = F("Schwalmblick");
        break;
    }
    case 285596:
    {
        returnValue = F("Schwalmstr.");
        break;
    }
    case 285597:
    {
        returnValue = F("Schwalmtalstr.");
        break;
    }
    case 285598:
    {
        returnValue = F("Schwalmterrasse");
        break;
    }
    case 285599:
    {
        returnValue = F("Schwalmweg");
        break;
    }
    case 285600:
    {
        returnValue = F("Schwalweg");
        break;
    }
    case 285601:
    {
        returnValue = F("Schwambachstr.");
        break;
    }
    case 285602:
    {
        returnValue = F("Schwambornstr.");
        break;
    }
    case 285603:
    {
        returnValue = F("Schwambstr.");
        break;
    }
    case 285604:
    {
        returnValue = F("Schwamm");
        break;
    }
    case 285605:
    {
        returnValue = F("Schwammattweg");
        break;
    }
    case 285606:
    {
        returnValue = F("Schwammberger Weg");
        break;
    }
    case 285607:
    {
        returnValue = F("Schwammenaueler Str.");
        break;
    }
    case 285608:
    {
        returnValue = F("Schwammerlweg");
        break;
    }
    case 285609:
    {
        returnValue = F("Schwammerlweg Nr.14");
        break;
    }
    case 285610:
    {
        returnValue = F("Schwammertstr.");
        break;
    }
    case 285611:
    {
        returnValue = F("Schwammheckstr.");
        break;
    }
    case 285612:
    {
        returnValue = F("Schwammhofweg");
        break;
    }
    case 285613:
    {
        returnValue = F("Schwammweg");
        break;
    }
    case 285614:
    {
        returnValue = F("Schwampenstr.");
        break;
    }
    case 285615:
    {
        returnValue = F("Schwan");
        break;
    }
    case 285616:
    {
        returnValue = F("Schwanacker");
        break;
    }
    case 285617:
    {
        returnValue = F("Schwanallee");
        break;
    }
    case 285618:
    {
        returnValue = F("Schwanbecker Chaussee");
        break;
    }
    case 285619:
    {
        returnValue = F("Schwanbecker Str.");
        break;
    }
    case 285620:
    {
        returnValue = F("Schwanbergerstr.");
        break;
    }
    case 285621:
    {
        returnValue = F("Schwanbergstr.");
        break;
    }
    case 285622:
    {
        returnValue = F("Schwanbergweg");
        break;
    }
    case 285623:
    {
        returnValue = F("Schwand");
        break;
    }
    case 285624:
    {
        returnValue = F("Schwandbühlweg");
        break;
    }
    case 285625:
    {
        returnValue = F("Schwandeckstr.");
        break;
    }
    case 285626:
    {
        returnValue = F("Schwanden");
        break;
    }
    case 285627:
    {
        returnValue = F("Schwandener Str.");
        break;
    }
    case 285628:
    {
        returnValue = F("Schwandenweg");
        break;
    }
    case 285629:
    {
        returnValue = F("Schwander Str.");
        break;
    }
    case 285630:
    {
        returnValue = F("Schwandgrabenweg");
        break;
    }
    case 285631:
    {
        returnValue = F("Schwandhaldenweg");
        break;
    }
    case 285632:
    {
        returnValue = F("Schwandlichstr.");
        break;
    }
    case 285633:
    {
        returnValue = F("Schwandmättle");
        break;
    }
    case 285634:
    {
        returnValue = F("Schwandner Höhe");
        break;
    }
    case 285635:
    {
        returnValue = F("Schwandner Str.");
        break;
    }
    case 285636:
    {
        returnValue = F("Schwandnerstr.");
        break;
    }
    case 285637:
    {
        returnValue = F("Schwandorfer Str.");
        break;
    }
    case 285638:
    {
        returnValue = F("Schwandorfstr.");
        break;
    }
    case 285639:
    {
        returnValue = F("Schwandweg");
        break;
    }
    case 285640:
    {
        returnValue = F("Schwanebecker Str.");
        break;
    }
    case 285641:
    {
        returnValue = F("Schwanebecker Weg");
        break;
    }
    case 285642:
    {
        returnValue = F("Schwaneberg");
        break;
    }
    case 285643:
    {
        returnValue = F("Schwaneberger Weg");
        break;
    }
    case 285644:
    {
        returnValue = F("Schwaneburger Str.");
        break;
    }
    case 285645:
    {
        returnValue = F("Schwaneburger Weg");
        break;
    }
    case 285646:
    {
        returnValue = F("Schwaneburger Wieke");
        break;
    }
    case 285647:
    {
        returnValue = F("Schwanefelder Str.");
        break;
    }
    case 285648:
    {
        returnValue = F("Schwanekamp");
        break;
    }
    case 285649:
    {
        returnValue = F("Schwanen");
        break;
    }
    case 285650:
    {
        returnValue = F("Schwanenallee");
        break;
    }
    case 285651:
    {
        returnValue = F("Schwanenbach");
        break;
    }
    case 285652:
    {
        returnValue = F("Schwanenbacher Str.");
        break;
    }
    case 285653:
    {
        returnValue = F("Schwanenbachweg");
        break;
    }
    case 285654:
    {
        returnValue = F("Schwanenberg");
        break;
    }
    case 285655:
    {
        returnValue = F("Schwanenborg");
        break;
    }
    case 285656:
    {
        returnValue = F("Schwanenbruchweg");
        break;
    }
    case 285657:
    {
        returnValue = F("Schwanenbrücke");
        break;
    }
    case 285658:
    {
        returnValue = F("Schwanenburgstr.");
        break;
    }
    case 285659:
    {
        returnValue = F("Schwanenbäk");
        break;
    }
    case 285660:
    {
        returnValue = F("Schwanenbühn");
        break;
    }
    case 285661:
    {
        returnValue = F("Schwaneneck");
        break;
    }
    case 285662:
    {
        returnValue = F("Schwanengasse");
        break;
    }
    case 285663:
    {
        returnValue = F("Schwanengraben");
        break;
    }
    case 285664:
    {
        returnValue = F("Schwanengrabenstr.");
        break;
    }
    case 285665:
    {
        returnValue = F("Schwanengrund");
        break;
    }
    case 285666:
    {
        returnValue = F("Schwanengässchen");
        break;
    }
    case 285667:
    {
        returnValue = F("Schwanengässle");
        break;
    }
    case 285668:
    {
        returnValue = F("Schwanengäßle");
        break;
    }
    case 285669:
    {
        returnValue = F("Schwanenhalle");
        break;
    }
    case 285670:
    {
        returnValue = F("Schwanenhals");
        break;
    }
    case 285671:
    {
        returnValue = F("Schwanenhaus");
        break;
    }
    case 285672:
    {
        returnValue = F("Schwanenheide");
        break;
    }
    case 285673:
    {
        returnValue = F("Schwanenhofstr.");
        break;
    }
    case 285674:
    {
        returnValue = F("Schwaneninsel");
        break;
    }
    case 285675:
    {
        returnValue = F("Schwanenkamp");
        break;
    }
    case 285676:
    {
        returnValue = F("Schwanenkirchener Str.");
        break;
    }
    case 285677:
    {
        returnValue = F("Schwanenkirchner Str.");
        break;
    }
    case 285678:
    {
        returnValue = F("Schwanenklimp");
        break;
    }
    case 285679:
    {
        returnValue = F("Schwanenmarkt");
        break;
    }
    case 285680:
    {
        returnValue = F("Schwanenmoos");
        break;
    }
    case 285681:
    {
        returnValue = F("Schwanenplatz");
        break;
    }
    case 285682:
    {
        returnValue = F("Schwanenpool");
        break;
    }
    case 285683:
    {
        returnValue = F("Schwanenrain");
        break;
    }
    case 285684:
    {
        returnValue = F("Schwanenring");
        break;
    }
    case 285685:
    {
        returnValue = F("Schwanenschlatt");
        break;
    }
    case 285686:
    {
        returnValue = F("Schwanensee");
        break;
    }
    case 285687:
    {
        returnValue = F("Schwanenseestr.");
        break;
    }
    case 285688:
    {
        returnValue = F("Schwanensiedlung");
        break;
    }
    case 285689:
    {
        returnValue = F("Schwanensteg");
        break;
    }
    case 285690:
    {
        returnValue = F("Schwanensteig");
        break;
    }
    case 285691:
    {
        returnValue = F("Schwanenstieg");
        break;
    }
    case 285692:
    {
        returnValue = F("Schwanenstiege");
        break;
    }
    case 285693:
    {
        returnValue = F("Schwanenstr.");
        break;
    }
    case 285694:
    {
        returnValue = F("Schwanenteich");
        break;
    }
    case 285695:
    {
        returnValue = F("Schwanenteich-Park");
        break;
    }
    case 285696:
    {
        returnValue = F("Schwanenteichbrücke");
        break;
    }
    case 285697:
    {
        returnValue = F("Schwanenteichinsel");
        break;
    }
    case 285698:
    {
        returnValue = F("Schwanentorpassage");
        break;
    }
    case 285699:
    {
        returnValue = F("Schwanentreppchen");
        break;
    }
    case 285700:
    {
        returnValue = F("Schwanenweg");
        break;
    }
    case 285701:
    {
        returnValue = F("Schwanenweiher");
        break;
    }
    case 285702:
    {
        returnValue = F("Schwanenwiese");
        break;
    }
    case 285703:
    {
        returnValue = F("Schwanenwinkel");
        break;
    }
    case 285704:
    {
        returnValue = F("Schwanenwirtsgasse");
        break;
    }
    case 285705:
    {
        returnValue = F("Schwaner Knapp");
        break;
    }
    case 285706:
    {
        returnValue = F("Schwaner Weg");
        break;
    }
    case 285707:
    {
        returnValue = F("Schwaneweder Str.");
        break;
    }
    case 285708:
    {
        returnValue = F("Schwaneyer Str.");
        break;
    }
    case 285709:
    {
        returnValue = F("Schwaneyer Weg");
        break;
    }
    case 285710:
    {
        returnValue = F("Schwanfeld");
        break;
    }
    case 285711:
    {
        returnValue = F("Schwanfelder Str.");
        break;
    }
    case 285712:
    {
        returnValue = F("Schwanflügelweg");
        break;
    }
    case 285713:
    {
        returnValue = F("Schwang-Mühlen-Weg");
        break;
    }
    case 285714:
    {
        returnValue = F("Schwangasse");
        break;
    }
    case 285715:
    {
        returnValue = F("Schwangau Runde 11km");
        break;
    }
    case 285716:
    {
        returnValue = F("Schwangauenweg");
        break;
    }
    case 285717:
    {
        returnValue = F("Schwangauer Str.");
        break;
    }
    case 285718:
    {
        returnValue = F("Schwangenstr.");
        break;
    }
    case 285719:
    {
        returnValue = F("Schwangerberg");
        break;
    }
    case 285720:
    {
        returnValue = F("Schwanheider Str.");
        break;
    }
    case 285721:
    {
        returnValue = F("Schwanheider Weg");
        break;
    }
    case 285722:
    {
        returnValue = F("Schwanheimer Str.");
        break;
    }
    case 285723:
    {
        returnValue = F("Schwanhof");
        break;
    }
    case 285724:
    {
        returnValue = F("Schwanhorstberg");
        break;
    }
    case 285725:
    {
        returnValue = F("Schwanhäuser Str.");
        break;
    }
    case 285726:
    {
        returnValue = F("Schwaninger Str.");
        break;
    }
    case 285727:
    {
        returnValue = F("Schwanitzstr.");
        break;
    }
    case 285728:
    {
        returnValue = F("Schwankenfurth");
        break;
    }
    case 285729:
    {
        returnValue = F("Schwanklerstr.");
        break;
    }
    case 285730:
    {
        returnValue = F("Schwanmanweg");
        break;
    }
    case 285731:
    {
        returnValue = F("Schwannemühle");
        break;
    }
    case 285732:
    {
        returnValue = F("Schwannenweg");
        break;
    }
    case 285733:
    {
        returnValue = F("Schwanner F.A.D.-Weg");
        break;
    }
    case 285734:
    {
        returnValue = F("Schwanner Rainweg");
        break;
    }
    case 285735:
    {
        returnValue = F("Schwanner Str.");
        break;
    }
    case 285736:
    {
        returnValue = F("Schwannstr.");
        break;
    }
    case 285737:
    {
        returnValue = F("Schwannweg");
        break;
    }
    case 285738:
    {
        returnValue = F("Schwanoldstr.");
        break;
    }
    case 285739:
    {
        returnValue = F("Schwanower Str.");
        break;
    }
    case 285740:
    {
        returnValue = F("Schwanower Weg");
        break;
    }
    case 285741:
    {
        returnValue = F("Schwansburg");
        break;
    }
    case 285742:
    {
        returnValue = F("Schwanseer Str.");
        break;
    }
    case 285743:
    {
        returnValue = F("Schwanseestr.");
        break;
    }
    case 285744:
    {
        returnValue = F("Schwansenstr.");
        break;
    }
    case 285745:
    {
        returnValue = F("Schwansenweg");
        break;
    }
    case 285746:
    {
        returnValue = F("Schwanstetter Str.");
        break;
    }
    case 285747:
    {
        returnValue = F("Schwanstr.");
        break;
    }
    case 285748:
    {
        returnValue = F("Schwanswischweg");
        break;
    }
    case 285749:
    {
        returnValue = F("Schwantelweg");
        break;
    }
    case 285750:
    {
        returnValue = F("Schwanter Str.");
        break;
    }
    case 285751:
    {
        returnValue = F("Schwantestr.");
        break;
    }
    case 285752:
    {
        returnValue = F("Schwanthalerallee");
        break;
    }
    case 285753:
    {
        returnValue = F("Schwanthalerplatz");
        break;
    }
    case 285754:
    {
        returnValue = F("Schwanthalerstr.");
        break;
    }
    case 285755:
    {
        returnValue = F("Schwantjeweg");
        break;
    }
    case 285756:
    {
        returnValue = F("Schwanweg");
        break;
    }
    case 285757:
    {
        returnValue = F("Schwanze");
        break;
    }
    case 285758:
    {
        returnValue = F("Schwappachergasse");
        break;
    }
    case 285759:
    {
        returnValue = F("Schwappachweg");
        break;
    }
    case 285760:
    {
        returnValue = F("Schwardtweg");
        break;
    }
    case 285761:
    {
        returnValue = F("Schwarmer Str.");
        break;
    }
    case 285762:
    {
        returnValue = F("Schwarmer Weg");
        break;
    }
    case 285763:
    {
        returnValue = F("Schwarmgasse");
        break;
    }
    case 285764:
    {
        returnValue = F("Schwarmstedter Str.");
        break;
    }
    case 285765:
    {
        returnValue = F("Schwartauer Landstr.");
        break;
    }
    case 285766:
    {
        returnValue = F("Schwartauer Str.");
        break;
    }
    case 285767:
    {
        returnValue = F("Schwartauweg");
        break;
    }
    case 285768:
    {
        returnValue = F("Schwartbuckerholz");
        break;
    }
    case 285769:
    {
        returnValue = F("Schwartekamp");
        break;
    }
    case 285770:
    {
        returnValue = F("Schwartemeierstr.");
        break;
    }
    case 285771:
    {
        returnValue = F("Schwarten-Barg");
        break;
    }
    case 285772:
    {
        returnValue = F("Schwartenbergweg");
        break;
    }
    case 285773:
    {
        returnValue = F("Schwartenkamp");
        break;
    }
    case 285774:
    {
        returnValue = F("Schwartenpohler Str.");
        break;
    }
    case 285775:
    {
        returnValue = F("Schwarthoffstr.");
        break;
    }
    case 285776:
    {
        returnValue = F("Schwarthörn");
        break;
    }
    case 285777:
    {
        returnValue = F("Schwartkell");
        break;
    }
    case 285778:
    {
        returnValue = F("Schwartler Tal");
        break;
    }
    case 285779:
    {
        returnValue = F("Schwartmecke");
        break;
    }
    case 285780:
    {
        returnValue = F("Schwartmicke");
        break;
    }
    case 285781:
    {
        returnValue = F("Schwartmoorallee");
        break;
    }
    case 285782:
    {
        returnValue = F("Schwartmoorweg");
        break;
    }
    case 285783:
    {
        returnValue = F("Schwartze Str.");
        break;
    }
    case 285784:
    {
        returnValue = F("Schwartzen Brink");
        break;
    }
    case 285785:
    {
        returnValue = F("Schwartzkopffstr.");
        break;
    }
    case 285786:
    {
        returnValue = F("Schwartzstr.");
        break;
    }
    case 285787:
    {
        returnValue = F("Schwarwiese");
        break;
    }
    case 285788:
    {
        returnValue = F("Schwarz-Gold-Weg");
        break;
    }
    case 285789:
    {
        returnValue = F("Schwarz-Hag-Weg");
        break;
    }
    case 285790:
    {
        returnValue = F("Schwarz-Hau-Str.");
        break;
    }
    case 285791:
    {
        returnValue = F("Schwarz-Loch-Schneise");
        break;
    }
    case 285792:
    {
        returnValue = F("Schwarzabruckweg");
        break;
    }
    case 285793:
    {
        returnValue = F("Schwarzach");
        break;
    }
    case 285794:
    {
        returnValue = F("Schwarzachaue");
        break;
    }
    case 285795:
    {
        returnValue = F("Schwarzachen");
        break;
    }
    case 285796:
    {
        returnValue = F("Schwarzacher Hauptstr.");
        break;
    }
    case 285797:
    {
        returnValue = F("Schwarzacher Str.");
        break;
    }
    case 285798:
    {
        returnValue = F("Schwarzacher Weg");
        break;
    }
    case 285799:
    {
        returnValue = F("Schwarzachgrund");
        break;
    }
    case 285800:
    {
        returnValue = F("Schwarzachstr.");
        break;
    }
    case 285801:
    {
        returnValue = F("Schwarzachtaler Str.");
        break;
    }
    case 285802:
    {
        returnValue = F("Schwarzachweg");
        break;
    }
    case 285803:
    {
        returnValue = F("Schwarzacker");
        break;
    }
    case 285804:
    {
        returnValue = F("Schwarzackergasse");
        break;
    }
    case 285805:
    {
        returnValue = F("Schwarzackerschneise");
        break;
    }
    case 285806:
    {
        returnValue = F("Schwarzackerstr.");
        break;
    }
    case 285807:
    {
        returnValue = F("Schwarzadlergasse");
        break;
    }
    case 285808:
    {
        returnValue = F("Schwarzadlerstr.");
        break;
    }
    case 285809:
    {
        returnValue = F("Schwarzaer Str.");
        break;
    }
    case 285810:
    {
        returnValue = F("Schwarzallee");
        break;
    }
    case 285811:
    {
        returnValue = F("Schwarzamselweg");
        break;
    }
    case 285812:
    {
        returnValue = F("Schwarzastr.");
        break;
    }
    case 285813:
    {
        returnValue = F("Schwarzatal-Str.");
        break;
    }
    case 285814:
    {
        returnValue = F("Schwarzatalstr.");
        break;
    }
    case 285815:
    {
        returnValue = F("Schwarzatalweg");
        break;
    }
    case 285816:
    {
        returnValue = F("Schwarzau");
        break;
    }
    case 285817:
    {
        returnValue = F("Schwarzauer Str.");
        break;
    }
    case 285818:
    {
        returnValue = F("Schwarzaweg");
        break;
    }
    case 285819:
    {
        returnValue = F("Schwarzawehrstr.");
        break;
    }
    case 285820:
    {
        returnValue = F("Schwarzbach");
        break;
    }
    case 285821:
    {
        returnValue = F("Schwarzbachallee");
        break;
    }
    case 285822:
    {
        returnValue = F("Schwarzbacher Allee");
        break;
    }
    case 285823:
    {
        returnValue = F("Schwarzbacher Str.");
        break;
    }
    case 285824:
    {
        returnValue = F("Schwarzbacher Weg");
        break;
    }
    case 285825:
    {
        returnValue = F("Schwarzbachgrund");
        break;
    }
    case 285826:
    {
        returnValue = F("Schwarzbachstr.");
        break;
    }
    case 285827:
    {
        returnValue = F("Schwarzbachtal");
        break;
    }
    case 285828:
    {
        returnValue = F("Schwarzbachtalstr.");
        break;
    }
    case 285829:
    {
        returnValue = F("Schwarzbachtalweg");
        break;
    }
    case 285830:
    {
        returnValue = F("Schwarzbachweg");
        break;
    }
    case 285831:
    {
        returnValue = F("Schwarzbader Weg");
        break;
    }
    case 285832:
    {
        returnValue = F("Schwarzbauerstr.");
        break;
    }
    case 285833:
    {
        returnValue = F("Schwarzbecker Weg");
        break;
    }
    case 285834:
    {
        returnValue = F("Schwarzbeckstr.");
        break;
    }
    case 285835:
    {
        returnValue = F("Schwarzberg");
        break;
    }
    case 285836:
    {
        returnValue = F("Schwarzberger Weg");
        break;
    }
    case 285837:
    {
        returnValue = F("Schwarzberggrund");
        break;
    }
    case 285838:
    {
        returnValue = F("Schwarzberglstr.");
        break;
    }
    case 285839:
    {
        returnValue = F("Schwarzbergstr.");
        break;
    }
    case 285840:
    {
        returnValue = F("Schwarzbergweg");
        break;
    }
    case 285841:
    {
        returnValue = F("Schwarzbornweg");
        break;
    }
    case 285842:
    {
        returnValue = F("Schwarzbroicher Wiese");
        break;
    }
    case 285843:
    {
        returnValue = F("Schwarzbruch");
        break;
    }
    case 285844:
    {
        returnValue = F("Schwarzbrunnenstr.");
        break;
    }
    case 285845:
    {
        returnValue = F("Schwarzbrunnenweg");
        break;
    }
    case 285846:
    {
        returnValue = F("Schwarzbrunnweg");
        break;
    }
    case 285847:
    {
        returnValue = F("Schwarzburg");
        break;
    }
    case 285848:
    {
        returnValue = F("Schwarzburger Chaussee");
        break;
    }
    case 285849:
    {
        returnValue = F("Schwarzburger Str.");
        break;
    }
    case 285850:
    {
        returnValue = F("Schwarzburger Weg");
        break;
    }
    case 285851:
    {
        returnValue = F("Schwarzburgweg");
        break;
    }
    case 285852:
    {
        returnValue = F("Schwarzbächer Brücklein");
        break;
    }
    case 285853:
    {
        returnValue = F("Schwarzbärweg");
        break;
    }
    case 285854:
    {
        returnValue = F("Schwarzdobbenweg");
        break;
    }
    case 285855:
    {
        returnValue = F("Schwarzdornstr.");
        break;
    }
    case 285856:
    {
        returnValue = F("Schwarzdornweg");
        break;
    }
    case 285857:
    {
        returnValue = F("Schwarzdrosselweg");
        break;
    }
    case 285858:
    {
        returnValue = F("Schwarze Ahe");
        break;
    }
    case 285859:
    {
        returnValue = F("Schwarze Allee");
        break;
    }
    case 285860:
    {
        returnValue = F("Schwarze Aue");
        break;
    }
    case 285861:
    {
        returnValue = F("Schwarze Bahn");
        break;
    }
    case 285862:
    {
        returnValue = F("Schwarze Breite");
        break;
    }
    case 285863:
    {
        returnValue = F("Schwarze Brücke");
        break;
    }
    case 285864:
    {
        returnValue = F("Schwarze Damm");
        break;
    }
    case 285865:
    {
        returnValue = F("Schwarze Delle");
        break;
    }
    case 285866:
    {
        returnValue = F("Schwarze Elster");
        break;
    }
    case 285867:
    {
        returnValue = F("Schwarze Erde");
        break;
    }
    case 285868:
    {
        returnValue = F("Schwarze Feldstr.");
        break;
    }
    case 285869:
    {
        returnValue = F("Schwarze Flage");
        break;
    }
    case 285870:
    {
        returnValue = F("Schwarze Furth");
        break;
    }
    case 285871:
    {
        returnValue = F("Schwarze Gasse");
        break;
    }
    case 285872:
    {
        returnValue = F("Schwarze Heide");
        break;
    }
    case 285873:
    {
        returnValue = F("Schwarze Hohl");
        break;
    }
    case 285874:
    {
        returnValue = F("Schwarze Horst");
        break;
    }
    case 285875:
    {
        returnValue = F("Schwarze Höhe");
        break;
    }
    case 285876:
    {
        returnValue = F("Schwarze Kamp");
        break;
    }
    case 285877:
    {
        returnValue = F("Schwarze Kiefern");
        break;
    }
    case 285878:
    {
        returnValue = F("Schwarze Kuhle");
        break;
    }
    case 285879:
    {
        returnValue = F("Schwarze Kuppe");
        break;
    }
    case 285880:
    {
        returnValue = F("Schwarze Leegtstr.");
        break;
    }
    case 285881:
    {
        returnValue = F("Schwarze Leite");
        break;
    }
    case 285882:
    {
        returnValue = F("Schwarze Pfütze");
        break;
    }
    case 285883:
    {
        returnValue = F("Schwarze Pohl");
        break;
    }
    case 285884:
    {
        returnValue = F("Schwarze Rade");
        break;
    }
    case 285885:
    {
        returnValue = F("Schwarze Riede");
        break;
    }
    case 285886:
    {
        returnValue = F("Schwarze Riehe");
        break;
    }
    case 285887:
    {
        returnValue = F("Schwarze Rolle");
        break;
    }
    case 285888:
    {
        returnValue = F("Schwarze Schlüchte");
        break;
    }
    case 285889:
    {
        returnValue = F("Schwarze Steege");
        break;
    }
    case 285890:
    {
        returnValue = F("Schwarze Steige");
        break;
    }
    case 285891:
    {
        returnValue = F("Schwarze Str.");
        break;
    }
    case 285892:
    {
        returnValue = F("Schwarze Suhlweg");
        break;
    }
    case 285893:
    {
        returnValue = F("Schwarze Säge");
        break;
    }
    case 285894:
    {
        returnValue = F("Schwarze Tafel");
        break;
    }
    case 285895:
    {
        returnValue = F("Schwarze Weg");
        break;
    }
    case 285896:
    {
        returnValue = F("Schwarze Äcker");
        break;
    }
    case 285897:
    {
        returnValue = F("Schwarze-Breite-Str.");
        break;
    }
    case 285898:
    {
        returnValue = F("Schwarze-Drossel-Weg");
        break;
    }
    case 285899:
    {
        returnValue = F("Schwarze-Lach-Weg");
        break;
    }
    case 285900:
    {
        returnValue = F("Schwarze-Lache-Weg");
        break;
    }
    case 285901:
    {
        returnValue = F("Schwarze-Regen-Brücke");
        break;
    }
    case 285902:
    {
        returnValue = F("Schwarzebachweg");
        break;
    }
    case 285903:
    {
        returnValue = F("Schwarzeborngasse");
        break;
    }
    case 285904:
    {
        returnValue = F("Schwarzecker Str.");
        break;
    }
    case 285905:
    {
        returnValue = F("Schwarzeckerweg");
        break;
    }
    case 285906:
    {
        returnValue = F("Schwarzeckstr.");
        break;
    }
    case 285907:
    {
        returnValue = F("Schwarzegrundstr.");
        break;
    }
    case 285908:
    {
        returnValue = F("Schwarzeheidestr.");
        break;
    }
    case 285909:
    {
        returnValue = F("Schwarzehörner Str.");
        break;
    }
    case 285910:
    {
        returnValue = F("Schwarzeiche");
        break;
    }
    case 285911:
    {
        returnValue = F("Schwarzeiche Auenweg");
        break;
    }
    case 285912:
    {
        returnValue = F("Schwarzematt");
        break;
    }
    case 285913:
    {
        returnValue = F("Schwarzen Buben Weg");
        break;
    }
    case 285914:
    {
        returnValue = F("Schwarzen Lande");
        break;
    }
    case 285915:
    {
        returnValue = F("Schwarzen Weg");
        break;
    }
    case 285916:
    {
        returnValue = F("Schwarzenacker");
        break;
    }
    case 285917:
    {
        returnValue = F("Schwarzenackerstr.");
        break;
    }
    case 285918:
    {
        returnValue = F("Schwarzenauer Str.");
        break;
    }
    case 285919:
    {
        returnValue = F("Schwarzenbach");
        break;
    }
    case 285920:
    {
        returnValue = F("Schwarzenbacher Feld");
        break;
    }
    case 285921:
    {
        returnValue = F("Schwarzenbacher Ring");
        break;
    }
    case 285922:
    {
        returnValue = F("Schwarzenbacher Str.");
        break;
    }
    case 285923:
    {
        returnValue = F("Schwarzenbachmühle");
        break;
    }
    case 285924:
    {
        returnValue = F("Schwarzenbachstr.");
        break;
    }
    case 285925:
    {
        returnValue = F("Schwarzenbachweg");
        break;
    }
    case 285926:
    {
        returnValue = F("Schwarzenbeker Landstr.");
        break;
    }
    case 285927:
    {
        returnValue = F("Schwarzenbeker Str.");
        break;
    }
    case 285928:
    {
        returnValue = F("Schwarzenberg");
        break;
    }
    case 285929:
    {
        returnValue = F("Schwarzenberg-Bockauer-Str.");
        break;
    }
    case 285930:
    {
        returnValue = F("Schwarzenbergele");
        break;
    }
    case 285931:
    {
        returnValue = F("Schwarzenberger Str.");
        break;
    }
    case 285932:
    {
        returnValue = F("Schwarzenberger Weg");
        break;
    }
    case 285933:
    {
        returnValue = F("Schwarzenbergerweg");
        break;
    }
    case 285934:
    {
        returnValue = F("Schwarzenbergring");
        break;
    }
    case 285935:
    {
        returnValue = F("Schwarzenbergsfeld");
        break;
    }
    case 285936:
    {
        returnValue = F("Schwarzenbergstr.");
        break;
    }
    case 285937:
    {
        returnValue = F("Schwarzenbergweg");
        break;
    }
    case 285938:
    {
        returnValue = F("Schwarzenborner Weg");
        break;
    }
    case 285939:
    {
        returnValue = F("Schwarzenbornweg");
        break;
    }
    case 285940:
    {
        returnValue = F("Schwarzenbrink");
        break;
    }
    case 285941:
    {
        returnValue = F("Schwarzenbrinker Str.");
        break;
    }
    case 285942:
    {
        returnValue = F("Schwarzenbroichstr.");
        break;
    }
    case 285943:
    {
        returnValue = F("Schwarzenbronnenweg");
        break;
    }
    case 285944:
    {
        returnValue = F("Schwarzenbrooker Weg");
        break;
    }
    case 285945:
    {
        returnValue = F("Schwarzenbruch");
        break;
    }
    case 285946:
    {
        returnValue = F("Schwarzenbruchstr.");
        break;
    }
    case 285947:
    {
        returnValue = F("Schwarzenbrunn");
        break;
    }
    case 285948:
    {
        returnValue = F("Schwarzenbrunner Str.");
        break;
    }
    case 285949:
    {
        returnValue = F("Schwarzenburg");
        break;
    }
    case 285950:
    {
        returnValue = F("Schwarzenburgstr.");
        break;
    }
    case 285951:
    {
        returnValue = F("Schwarzenbächleweg");
        break;
    }
    case 285952:
    {
        returnValue = F("Schwarzenbörner Str.");
        break;
    }
    case 285953:
    {
        returnValue = F("Schwarzenbörner Weg");
        break;
    }
    case 285954:
    {
        returnValue = F("Schwarzendamm");
        break;
    }
    case 285955:
    {
        returnValue = F("Schwarzendammer Weg");
        break;
    }
    case 285956:
    {
        returnValue = F("Schwarzendorf");
        break;
    }
    case 285957:
    {
        returnValue = F("Schwarzeneck");
        break;
    }
    case 285958:
    {
        returnValue = F("Schwarzener Str.");
        break;
    }
    case 285959:
    {
        returnValue = F("Schwarzenfelder Weg");
        break;
    }
    case 285960:
    {
        returnValue = F("Schwarzenfurth");
        break;
    }
    case 285961:
    {
        returnValue = F("Schwarzenfurthweg");
        break;
    }
    case 285962:
    {
        returnValue = F("Schwarzengasse");
        break;
    }
    case 285963:
    {
        returnValue = F("Schwarzengrabenstr.");
        break;
    }
    case 285964:
    {
        returnValue = F("Schwarzengrund");
        break;
    }
    case 285965:
    {
        returnValue = F("Schwarzengrunder Str.");
        break;
    }
    case 285966:
    {
        returnValue = F("Schwarzengässchen");
        break;
    }
    case 285967:
    {
        returnValue = F("Schwarzenhausweg");
        break;
    }
    case 285968:
    {
        returnValue = F("Schwarzenhof");
        break;
    }
    case 285969:
    {
        returnValue = F("Schwarzenhof Dorf");
        break;
    }
    case 285970:
    {
        returnValue = F("Schwarzenhofer Str.");
        break;
    }
    case 285971:
    {
        returnValue = F("Schwarzenholzer Str.");
        break;
    }
    case 285972:
    {
        returnValue = F("Schwarzenholzer Weg");
        break;
    }
    case 285973:
    {
        returnValue = F("Schwarzenholzweg");
        break;
    }
    case 285974:
    {
        returnValue = F("Schwarzenkampsweg");
        break;
    }
    case 285975:
    {
        returnValue = F("Schwarzenknechtstr.");
        break;
    }
    case 285976:
    {
        returnValue = F("Schwarzenkopfstr.");
        break;
    }
    case 285977:
    {
        returnValue = F("Schwarzenkopfweg");
        break;
    }
    case 285978:
    {
        returnValue = F("Schwarzenlache");
        break;
    }
    case 285979:
    {
        returnValue = F("Schwarzenlochstr.");
        break;
    }
    case 285980:
    {
        returnValue = F("Schwarzenlochweg");
        break;
    }
    case 285981:
    {
        returnValue = F("Schwarzenmoor");
        break;
    }
    case 285982:
    {
        returnValue = F("Schwarzenmoorstr.");
        break;
    }
    case 285983:
    {
        returnValue = F("Schwarzenmühle");
        break;
    }
    case 285984:
    {
        returnValue = F("Schwarzenpaulweg");
        break;
    }
    case 285985:
    {
        returnValue = F("Schwarzenrabener Holz");
        break;
    }
    case 285986:
    {
        returnValue = F("Schwarzenreuth");
        break;
    }
    case 285987:
    {
        returnValue = F("Schwarzenreuther Str.");
        break;
    }
    case 285988:
    {
        returnValue = F("Schwarzensee");
        break;
    }
    case 285989:
    {
        returnValue = F("Schwarzensee Siedlung");
        break;
    }
    case 285990:
    {
        returnValue = F("Schwarzenseer Str.");
        break;
    }
    case 285991:
    {
        returnValue = F("Schwarzenshofer Weg");
        break;
    }
    case 285992:
    {
        returnValue = F("Schwarzensteiner Weg");
        break;
    }
    case 285993:
    {
        returnValue = F("Schwarzensteinerstr.");
        break;
    }
    case 285994:
    {
        returnValue = F("Schwarzensteinweg");
        break;
    }
    case 285995:
    {
        returnValue = F("Schwarzenstr.");
        break;
    }
    case 285996:
    {
        returnValue = F("Schwarzental");
        break;
    }
    case 285997:
    {
        returnValue = F("Schwarzenthonhausen");
        break;
    }
    case 285998:
    {
        returnValue = F("Schwarzenwaldweg");
        break;
    }
    case 285999:
    {
        returnValue = F("Schwarzenwangstr.");
        break;
    }
    case 286000:
    {
        returnValue = F("Schwarzenweg");
        break;
    }
    case 286001:
    {
        returnValue = F("Schwarzenweiler");
        break;
    }
    case 286002:
    {
        returnValue = F("Schwarzenäckerweg");
        break;
    }
    case 286003:
    {
        returnValue = F("Schwarzer Baum Weg");
        break;
    }
    case 286004:
    {
        returnValue = F("Schwarzer Berg");
        break;
    }
    case 286005:
    {
        returnValue = F("Schwarzer Berg Allee");
        break;
    }
    case 286006:
    {
        returnValue = F("Schwarzer Brand");
        break;
    }
    case 286007:
    {
        returnValue = F("Schwarzer Brink");
        break;
    }
    case 286008:
    {
        returnValue = F("Schwarzer Brunn");
        break;
    }
    case 286009:
    {
        returnValue = F("Schwarzer Brunnen");
        break;
    }
    case 286010:
    {
        returnValue = F("Schwarzer Busch");
        break;
    }
    case 286011:
    {
        returnValue = F("Schwarzer Busch Ausbau");
        break;
    }
    case 286012:
    {
        returnValue = F("Schwarzer Buschweg");
        break;
    }
    case 286013:
    {
        returnValue = F("Schwarzer Bär");
        break;
    }
    case 286014:
    {
        returnValue = F("Schwarzer Damm");
        break;
    }
    case 286015:
    {
        returnValue = F("Schwarzer Diek");
        break;
    }
    case 286016:
    {
        returnValue = F("Schwarzer Dyck");
        break;
    }
    case 286017:
    {
        returnValue = F("Schwarzer Gang");
        break;
    }
    case 286018:
    {
        returnValue = F("Schwarzer Garten");
        break;
    }
    case 286019:
    {
        returnValue = F("Schwarzer Gartenweg");
        break;
    }
    case 286020:
    {
        returnValue = F("Schwarzer Graben");
        break;
    }
    case 286021:
    {
        returnValue = F("Schwarzer Grabenweg");
        break;
    }
    case 286022:
    {
        returnValue = F("Schwarzer Hirsch");
        break;
    }
    case 286023:
    {
        returnValue = F("Schwarzer Hof");
        break;
    }
    case 286024:
    {
        returnValue = F("Schwarzer Kamp");
        break;
    }
    case 286025:
    {
        returnValue = F("Schwarzer Kampweg");
        break;
    }
    case 286026:
    {
        returnValue = F("Schwarzer Kater");
        break;
    }
    case 286027:
    {
        returnValue = F("Schwarzer Kopf");
        break;
    }
    case 286028:
    {
        returnValue = F("Schwarzer Koppelweg");
        break;
    }
    case 286029:
    {
        returnValue = F("Schwarzer Markstein Weg");
        break;
    }
    case 286030:
    {
        returnValue = F("Schwarzer Mersch");
        break;
    }
    case 286031:
    {
        returnValue = F("Schwarzer Moorweg");
        break;
    }
    case 286032:
    {
        returnValue = F("Schwarzer Pfuhl");
        break;
    }
    case 286033:
    {
        returnValue = F("Schwarzer Pool");
        break;
    }
    case 286034:
    {
        returnValue = F("Schwarzer Regen");
        break;
    }
    case 286035:
    {
        returnValue = F("Schwarzer Saal");
        break;
    }
    case 286036:
    {
        returnValue = F("Schwarzer Sandbusch");
        break;
    }
    case 286037:
    {
        returnValue = F("Schwarzer Stamm");
        break;
    }
    case 286038:
    {
        returnValue = F("Schwarzer Steg");
        break;
    }
    case 286039:
    {
        returnValue = F("Schwarzer Stich");
        break;
    }
    case 286040:
    {
        returnValue = F("Schwarzer Stock");
        break;
    }
    case 286041:
    {
        returnValue = F("Schwarzer Str.");
        break;
    }
    case 286042:
    {
        returnValue = F("Schwarzer Tanger");
        break;
    }
    case 286043:
    {
        returnValue = F("Schwarzer Weg");
        break;
    }
    case 286044:
    {
        returnValue = F("Schwarzer Weg Hubertus");
        break;
    }
    case 286045:
    {
        returnValue = F("Schwarzer-Berg-Weg");
        break;
    }
    case 286046:
    {
        returnValue = F("Schwarzer-Fluss-Weg");
        break;
    }
    case 286047:
    {
        returnValue = F("Schwarzer-Grat-Weg");
        break;
    }
    case 286048:
    {
        returnValue = F("Schwarzer-Hau-Weg");
        break;
    }
    case 286049:
    {
        returnValue = F("Schwarzer-Herzog-Kreisel");
        break;
    }
    case 286050:
    {
        returnValue = F("Schwarzer-Pfad");
        break;
    }
    case 286051:
    {
        returnValue = F("Schwarzer-Weiher-Str.");
        break;
    }
    case 286052:
    {
        returnValue = F("Schwarzerberg Str. Status: 6");
        break;
    }
    case 286053:
    {
        returnValue = F("Schwarzerden");
        break;
    }
    case 286054:
    {
        returnValue = F("Schwarzerdeweg");
        break;
    }
    case 286055:
    {
        returnValue = F("Schwarzerdstr.");
        break;
    }
    case 286056:
    {
        returnValue = F("Schwarzerlenweg");
        break;
    }
    case 286057:
    {
        returnValue = F("Schwarzersdorf");
        break;
    }
    case 286058:
    {
        returnValue = F("Schwarzerstockweg");
        break;
    }
    case 286059:
    {
        returnValue = F("Schwarzerteichweg");
        break;
    }
    case 286060:
    {
        returnValue = F("Schwarzerweg");
        break;
    }
    case 286061:
    {
        returnValue = F("Schwarzes Fehn");
        break;
    }
    case 286062:
    {
        returnValue = F("Schwarzes Feld");
        break;
    }
    case 286063:
    {
        returnValue = F("Schwarzes Gold");
        break;
    }
    case 286064:
    {
        returnValue = F("Schwarzes Kreuzweg");
        break;
    }
    case 286065:
    {
        returnValue = F("Schwarzes Land");
        break;
    }
    case 286066:
    {
        returnValue = F("Schwarzes Marterl");
        break;
    }
    case 286067:
    {
        returnValue = F("Schwarzes Moor");
        break;
    }
    case 286068:
    {
        returnValue = F("Schwarzes Wegle");
        break;
    }
    case 286069:
    {
        returnValue = F("Schwarzesmeerweg");
        break;
    }
    case 286070:
    {
        returnValue = F("Schwarzeweg");
        break;
    }
    case 286071:
    {
        returnValue = F("Schwarzfeld");
        break;
    }
    case 286072:
    {
        returnValue = F("Schwarzfelder Weg");
        break;
    }
    case 286073:
    {
        returnValue = F("Schwarzfeldstr.");
        break;
    }
    case 286074:
    {
        returnValue = F("Schwarzfeldweg");
        break;
    }
    case 286075:
    {
        returnValue = F("Schwarzfischerallee");
        break;
    }
    case 286076:
    {
        returnValue = F("Schwarzgasse");
        break;
    }
    case 286077:
    {
        returnValue = F("Schwarzgehrenweg");
        break;
    }
    case 286078:
    {
        returnValue = F("Schwarzgrabenstr.");
        break;
    }
    case 286079:
    {
        returnValue = F("Schwarzgrabenweg");
        break;
    }
    case 286080:
    {
        returnValue = F("Schwarzgraebleweg");
        break;
    }
    case 286081:
    {
        returnValue = F("Schwarzgräble");
        break;
    }
    case 286082:
    {
        returnValue = F("Schwarzgräbleweg");
        break;
    }
    case 286083:
    {
        returnValue = F("Schwarzhamm");
        break;
    }
    case 286084:
    {
        returnValue = F("Schwarzhangweg");
        break;
    }
    case 286085:
    {
        returnValue = F("Schwarzhauhangweg");
        break;
    }
    case 286086:
    {
        returnValue = F("Schwarzhausstr.");
        break;
    }
    case 286087:
    {
        returnValue = F("Schwarzhauweg");
        break;
    }
    case 286088:
    {
        returnValue = F("Schwarzheider Str.");
        break;
    }
    case 286089:
    {
        returnValue = F("Schwarzhof");
        break;
    }
    case 286090:
    {
        returnValue = F("Schwarzholz");
        break;
    }
    case 286091:
    {
        returnValue = F("Schwarzholzer Str.");
        break;
    }
    case 286092:
    {
        returnValue = F("Schwarzholzer Weg");
        break;
    }
    case 286093:
    {
        returnValue = F("Schwarzholzsteig");
        break;
    }
    case 286094:
    {
        returnValue = F("Schwarzholzstr.");
        break;
    }
    case 286095:
    {
        returnValue = F("Schwarzholzweg");
        break;
    }
    case 286096:
    {
        returnValue = F("Schwarzhorner Weg");
        break;
    }
    case 286097:
    {
        returnValue = F("Schwarzhornstr.");
        break;
    }
    case 286098:
    {
        returnValue = F("Schwarzhornweg");
        break;
    }
    case 286099:
    {
        returnValue = F("Schwarzhäuflweg");
        break;
    }
    case 286100:
    {
        returnValue = F("Schwarzhäuser Str.");
        break;
    }
    case 286101:
    {
        returnValue = F("Schwarzhäuser Weg");
        break;
    }
    case 286102:
    {
        returnValue = F("Schwarzhölzleweg");
        break;
    }
    case 286103:
    {
        returnValue = F("Schwarzhölzlstr.");
        break;
    }
    case 286104:
    {
        returnValue = F("Schwarzhülenäcker");
        break;
    }
    case 286105:
    {
        returnValue = F("Schwarzhüttenweg");
        break;
    }
    case 286106:
    {
        returnValue = F("Schwarzkehlchenweg");
        break;
    }
    case 286107:
    {
        returnValue = F("Schwarzkittelpfad");
        break;
    }
    case 286108:
    {
        returnValue = F("Schwarzklingenweg");
        break;
    }
    case 286109:
    {
        returnValue = F("Schwarzkollmer Weg");
        break;
    }
    case 286110:
    {
        returnValue = F("Schwarzkopfenhof");
        break;
    }
    case 286111:
    {
        returnValue = F("Schwarzkopfstr.");
        break;
    }
    case 286112:
    {
        returnValue = F("Schwarzkopfweg");
        break;
    }
    case 286113:
    {
        returnValue = F("Schwarzkreuzstr.");
        break;
    }
    case 286114:
    {
        returnValue = F("Schwarzlach");
        break;
    }
    case 286115:
    {
        returnValue = F("Schwarzlacheschneise");
        break;
    }
    case 286116:
    {
        returnValue = F("Schwarzlachplanie");
        break;
    }
    case 286117:
    {
        returnValue = F("Schwarzlachweg");
        break;
    }
    case 286118:
    {
        returnValue = F("Schwarzlack");
        break;
    }
    case 286119:
    {
        returnValue = F("Schwarzlackenweg");
        break;
    }
    case 286120:
    {
        returnValue = F("Schwarzlackstr.");
        break;
    }
    case 286121:
    {
        returnValue = F("Schwarzland");
        break;
    }
    case 286122:
    {
        returnValue = F("Schwarzlandkamp");
        break;
    }
    case 286123:
    {
        returnValue = F("Schwarzlandstr.");
        break;
    }
    case 286124:
    {
        returnValue = F("Schwarzleite");
        break;
    }
    case 286125:
    {
        returnValue = F("Schwarzleiten");
        break;
    }
    case 286126:
    {
        returnValue = F("Schwarzlochweg");
        break;
    }
    case 286127:
    {
        returnValue = F("Schwarzlofer-Forststr.");
        break;
    }
    case 286128:
    {
        returnValue = F("Schwarzländer Weg");
        break;
    }
    case 286129:
    {
        returnValue = F("Schwarzmaarer Weg");
        break;
    }
    case 286130:
    {
        returnValue = F("Schwarzmahrweg");
        break;
    }
    case 286131:
    {
        returnValue = F("Schwarzmaierstr.");
        break;
    }
    case 286132:
    {
        returnValue = F("Schwarzmatten");
        break;
    }
    case 286133:
    {
        returnValue = F("Schwarzmattstr.");
        break;
    }
    case 286134:
    {
        returnValue = F("Schwarzmattweg");
        break;
    }
    case 286135:
    {
        returnValue = F("Schwarzmissweg");
        break;
    }
    case 286136:
    {
        returnValue = F("Schwarzmoorstr.");
        break;
    }
    case 286137:
    {
        returnValue = F("Schwarzmoosweg");
        break;
    }
    case 286138:
    {
        returnValue = F("Schwarzmühle");
        break;
    }
    case 286139:
    {
        returnValue = F("Schwarzmühler Str.");
        break;
    }
    case 286140:
    {
        returnValue = F("Schwarznauring");
        break;
    }
    case 286141:
    {
        returnValue = F("Schwarznausiedlung");
        break;
    }
    case 286142:
    {
        returnValue = F("Schwarznussweg");
        break;
    }
    case 286143:
    {
        returnValue = F("Schwarzorter Zeile");
        break;
    }
    case 286144:
    {
        returnValue = F("Schwarzreiherweg");
        break;
    }
    case 286145:
    {
        returnValue = F("Schwarzrieh");
        break;
    }
    case 286146:
    {
        returnValue = F("Schwarzrieslingstr.");
        break;
    }
    case 286147:
    {
        returnValue = F("Schwarzrieslingweg");
        break;
    }
    case 286148:
    {
        returnValue = F("Schwarzrietweg");
        break;
    }
    case 286149:
    {
        returnValue = F("Schwarzrinder See");
        break;
    }
    case 286150:
    {
        returnValue = F("Schwarzringelweg");
        break;
    }
    case 286151:
    {
        returnValue = F("Schwarzrinnstr.");
        break;
    }
    case 286152:
    {
        returnValue = F("Schwarzrothweg");
        break;
    }
    case 286153:
    {
        returnValue = F("Schwarzroßgäßle");
        break;
    }
    case 286154:
    {
        returnValue = F("Schwarzschildstr.");
        break;
    }
    case 286155:
    {
        returnValue = F("Schwarzspechtweg");
        break;
    }
    case 286156:
    {
        returnValue = F("Schwarzsteigweg");
        break;
    }
    case 286157:
    {
        returnValue = F("Schwarzstr.");
        break;
    }
    case 286158:
    {
        returnValue = F("Schwarztannenstr.");
        break;
    }
    case 286159:
    {
        returnValue = F("Schwarztorweg");
        break;
    }
    case 286160:
    {
        returnValue = F("Schwarzwald Westweg");
        break;
    }
    case 286161:
    {
        returnValue = F("Schwarzwald-Rosen-Sortimentsgarten");
        break;
    }
    case 286162:
    {
        returnValue = F("Schwarzwaldblick");
        break;
    }
    case 286163:
    {
        returnValue = F("Schwarzwaldgasse");
        break;
    }
    case 286164:
    {
        returnValue = F("Schwarzwaldhochstr.");
        break;
    }
    case 286165:
    {
        returnValue = F("Schwarzwaldring");
        break;
    }
    case 286166:
    {
        returnValue = F("Schwarzwaldstr.");
        break;
    }
    case 286167:
    {
        returnValue = F("Schwarzwaldsträßle");
        break;
    }
    case 286168:
    {
        returnValue = F("Schwarzwaldweg");
        break;
    }
    case 286169:
    {
        returnValue = F("Schwarzwaldzoo");
        break;
    }
    case 286170:
    {
        returnValue = F("Schwarzwandweg");
        break;
    }
    case 286171:
    {
        returnValue = F("Schwarzwasenweg");
        break;
    }
    case 286172:
    {
        returnValue = F("Schwarzwasser");
        break;
    }
    case 286173:
    {
        returnValue = F("Schwarzwasser -Weg");
        break;
    }
    case 286174:
    {
        returnValue = F("Schwarzwasser-Quellweg");
        break;
    }
    case 286175:
    {
        returnValue = F("Schwarzwasserbach");
        break;
    }
    case 286176:
    {
        returnValue = F("Schwarzwasserschneise");
        break;
    }
    case 286177:
    {
        returnValue = F("Schwarzwasserstr.");
        break;
    }
    case 286178:
    {
        returnValue = F("Schwarzwassertalstr.");
        break;
    }
    case 286179:
    {
        returnValue = F("Schwarzwasserweg");
        break;
    }
    case 286180:
    {
        returnValue = F("Schwarzweg");
        break;
    }
    case 286181:
    {
        returnValue = F("Schwarzwegle");
        break;
    }
    case 286182:
    {
        returnValue = F("Schwarzwegli");
        break;
    }
    case 286183:
    {
        returnValue = F("Schwarzweiherstr.");
        break;
    }
    case 286184:
    {
        returnValue = F("Schwarzweilerteichweg");
        break;
    }
    case 286185:
    {
        returnValue = F("Schwarzwiesen");
        break;
    }
    case 286186:
    {
        returnValue = F("Schwarzwiesenweg");
        break;
    }
    case 286187:
    {
        returnValue = F("Schwarzwild");
        break;
    }
    case 286188:
    {
        returnValue = F("Schwarzwildweg");
        break;
    }
    case 286189:
    {
        returnValue = F("Schwarzwinkel");
        break;
    }
    case 286190:
    {
        returnValue = F("Schwarzwälder Schneise");
        break;
    }
    case 286191:
    {
        returnValue = F("Schwarzwälder Str.");
        break;
    }
    case 286192:
    {
        returnValue = F("Schwarzwälderweg");
        break;
    }
    case 286193:
    {
        returnValue = F("Schwarzwässerleweg");
        break;
    }
    case 286194:
    {
        returnValue = F("Schwarzwöhr");
        break;
    }
    case 286195:
    {
        returnValue = F("Schwarzwöhrstr.");
        break;
    }
    case 286196:
    {
        returnValue = F("Schwarzäcker");
        break;
    }
    case 286197:
    {
        returnValue = F("Schwarzäcker Str.");
        break;
    }
    case 286198:
    {
        returnValue = F("Schwarzäckerstr.");
        break;
    }
    case 286199:
    {
        returnValue = F("Schwarzäckerweg");
        break;
    }
    case 286200:
    {
        returnValue = F("Schwarzäderle");
        break;
    }
    case 286201:
    {
        returnValue = F("Schwasebachstr.");
        break;
    }
    case 286202:
    {
        returnValue = F("Schwastrum");
        break;
    }
    case 286203:
    {
        returnValue = F("Schwathvorlinge");
        break;
    }
    case 286204:
    {
        returnValue = F("Schwattachweg");
        break;
    }
    case 286205:
    {
        returnValue = F("Schwatte Damm");
        break;
    }
    case 286206:
    {
        returnValue = F("Schwatte Jräet");
        break;
    }
    case 286207:
    {
        returnValue = F("Schwatten Berg");
        break;
    }
    case 286208:
    {
        returnValue = F("Schwattenkamp");
        break;
    }
    case 286209:
    {
        returnValue = F("Schwazer Str.");
        break;
    }
    case 286210:
    {
        returnValue = F("Schwebach-Halbrund");
        break;
    }
    case 286211:
    {
        returnValue = F("Schwebdaer Str.");
        break;
    }
    case 286212:
    {
        returnValue = F("Schwebelbachstr.");
        break;
    }
    case 286213:
    {
        returnValue = F("Schwebelstr.");
        break;
    }
    case 286214:
    {
        returnValue = F("Schwebender Pfad");
        break;
    }
    case 286215:
    {
        returnValue = F("Schwebendorf");
        break;
    }
    case 286216:
    {
        returnValue = F("Schwebendorfer Weg");
        break;
    }
    case 286217:
    {
        returnValue = F("Schwebener Str.");
        break;
    }
    case 286218:
    {
        returnValue = F("Schwebenrieder Str.");
        break;
    }
    case 286219:
    {
        returnValue = F("Schwebermayerweg");
        break;
    }
    case 286220:
    {
        returnValue = F("Schwebesteg");
        break;
    }
    case 286221:
    {
        returnValue = F("Schwebeweg");
        break;
    }
    case 286222:
    {
        returnValue = F("Schwebheimer Gasse");
        break;
    }
    case 286223:
    {
        returnValue = F("Schwebheimer Str.");
        break;
    }
    case 286224:
    {
        returnValue = F("Schwebheimer Weg");
        break;
    }
    case 286225:
    {
        returnValue = F("Schwebstöcken");
        break;
    }
    case 286226:
    {
        returnValue = F("Schwechater Str.");
        break;
    }
    case 286227:
    {
        returnValue = F("Schwechower Weg");
        break;
    }
    case 286228:
    {
        returnValue = F("Schweckenbergsweg");
        break;
    }
    case 286229:
    {
        returnValue = F("Schweckendieckplatz");
        break;
    }
    case 286230:
    {
        returnValue = F("Schweckendieckstr.");
        break;
    }
    case 286231:
    {
        returnValue = F("Schweckenweg");
        break;
    }
    case 286232:
    {
        returnValue = F("Schweckhausen");
        break;
    }
    case 286233:
    {
        returnValue = F("Schweckhausener Str.");
        break;
    }
    case 286234:
    {
        returnValue = F("Schweckhauser Str.");
        break;
    }
    case 286235:
    {
        returnValue = F("Schwedderbergstr.");
        break;
    }
    case 286236:
    {
        returnValue = F("Schweddey");
        break;
    }
    case 286237:
    {
        returnValue = F("Schwede-Allee");
        break;
    }
    case 286238:
    {
        returnValue = F("Schwedelbacher Mühle");
        break;
    }
    case 286239:
    {
        returnValue = F("Schwedelbacher Str.");
        break;
    }
    case 286240:
    {
        returnValue = F("Schwedeldorfer Str.");
        break;
    }
    case 286241:
    {
        returnValue = F("Schweden");
        break;
    }
    case 286242:
    {
        returnValue = F("Schwedenallee");
        break;
    }
    case 286243:
    {
        returnValue = F("Schwedenanger");
        break;
    }
    case 286244:
    {
        returnValue = F("Schwedenberg");
        break;
    }
    case 286245:
    {
        returnValue = F("Schwedenbrunnen");
        break;
    }
    case 286246:
    {
        returnValue = F("Schwedenbrücke");
        break;
    }
    case 286247:
    {
        returnValue = F("Schwedendamm");
        break;
    }
    case 286248:
    {
        returnValue = F("Schwedenfeld Bahn");
        break;
    }
    case 286249:
    {
        returnValue = F("Schwedenfeldweg");
        break;
    }
    case 286250:
    {
        returnValue = F("Schwedengang");
        break;
    }
    case 286251:
    {
        returnValue = F("Schwedengarten");
        break;
    }
    case 286252:
    {
        returnValue = F("Schwedengasse");
        break;
    }
    case 286253:
    {
        returnValue = F("Schwedengraben");
        break;
    }
    case 286254:
    {
        returnValue = F("Schwedengrube");
        break;
    }
    case 286255:
    {
        returnValue = F("Schwedengässchen");
        break;
    }
    case 286256:
    {
        returnValue = F("Schwedenhagen");
        break;
    }
    case 286257:
    {
        returnValue = F("Schwedenhang");
        break;
    }
    case 286258:
    {
        returnValue = F("Schwedenkreuz");
        break;
    }
    case 286259:
    {
        returnValue = F("Schwedenkreuzstr.");
        break;
    }
    case 286260:
    {
        returnValue = F("Schwedenpatt");
        break;
    }
    case 286261:
    {
        returnValue = F("Schwedenpfad");
        break;
    }
    case 286262:
    {
        returnValue = F("Schwedenring");
        break;
    }
    case 286263:
    {
        returnValue = F("Schwedenschanze");
        break;
    }
    case 286264:
    {
        returnValue = F("Schwedenschanzstr.");
        break;
    }
    case 286265:
    {
        returnValue = F("Schwedensteg");
        break;
    }
    case 286266:
    {
        returnValue = F("Schwedenstegweg");
        break;
    }
    case 286267:
    {
        returnValue = F("Schwedensteig");
        break;
    }
    case 286268:
    {
        returnValue = F("Schwedensteinweg");
        break;
    }
    case 286269:
    {
        returnValue = F("Schwedenstr.");
        break;
    }
    case 286270:
    {
        returnValue = F("Schwedenwall");
        break;
    }
    case 286271:
    {
        returnValue = F("Schwedenwallweg");
        break;
    }
    case 286272:
    {
        returnValue = F("Schwedenweg");
        break;
    }
    case 286273:
    {
        returnValue = F("Schwedenwiese");
        break;
    }
    case 286274:
    {
        returnValue = F("Schwedenwinkel");
        break;
    }
    case 286275:
    {
        returnValue = F("Schwedenäcker");
        break;
    }
    case 286276:
    {
        returnValue = F("Schwedi");
        break;
    }
    case 286277:
    {
        returnValue = F("Schwedischer Ring");
        break;
    }
    case 286278:
    {
        returnValue = F("Schwedischrain-Schneise");
        break;
    }
    case 286279:
    {
        returnValue = F("Schweditz");
        break;
    }
    case 286280:
    {
        returnValue = F("Schwedlerstr.");
        break;
    }
    case 286281:
    {
        returnValue = F("Schwedrich");
        break;
    }
    case 286282:
    {
        returnValue = F("Schwedter Allee");
        break;
    }
    case 286283:
    {
        returnValue = F("Schwedter Chaussee");
        break;
    }
    case 286284:
    {
        returnValue = F("Schwedter Ende");
        break;
    }
    case 286285:
    {
        returnValue = F("Schwedter Lebenskreis");
        break;
    }
    case 286286:
    {
        returnValue = F("Schwedter Lindenweg");
        break;
    }
    case 286287:
    {
        returnValue = F("Schwedter Str.");
        break;
    }
    case 286288:
    {
        returnValue = F("Schwedter Weg");
        break;
    }
    case 286289:
    {
        returnValue = F("Schwedtseestr.");
        break;
    }
    case 286290:
    {
        returnValue = F("Schweenbrink");
        break;
    }
    case 286291:
    {
        returnValue = F("Schweer'scher Dreiecksweg");
        break;
    }
    case 286292:
    {
        returnValue = F("Schweers Eck");
        break;
    }
    case 286293:
    {
        returnValue = F("Schweershof");
        break;
    }
    case 286294:
    {
        returnValue = F("Schweersweg");
        break;
    }
    case 286295:
    {
        returnValue = F("Schweerweg");
        break;
    }
    case 286296:
    {
        returnValue = F("Schweetskroog");
        break;
    }
    case 286297:
    {
        returnValue = F("Schweewarder Str.");
        break;
    }
    case 286298:
    {
        returnValue = F("Schweez");
        break;
    }
    case 286299:
    {
        returnValue = F("Schwefelbachstr.");
        break;
    }
    case 286300:
    {
        returnValue = F("Schwefelborn");
        break;
    }
    case 286301:
    {
        returnValue = F("Schwefelbrünnlein");
        break;
    }
    case 286302:
    {
        returnValue = F("Schwefelloch");
        break;
    }
    case 286303:
    {
        returnValue = F("Schwefelstr.");
        break;
    }
    case 286304:
    {
        returnValue = F("Schwefelweg");
        break;
    }
    case 286305:
    {
        returnValue = F("Schwefelwerkstr.");
        break;
    }
    case 286306:
    {
        returnValue = F("Schwefer Str.");
        break;
    }
    case 286307:
    {
        returnValue = F("Schwefinger Str.");
        break;
    }
    case 286308:
    {
        returnValue = F("Schweflinghausen");
        break;
    }
    case 286309:
    {
        returnValue = F("Schwege");
        break;
    }
    case 286310:
    {
        returnValue = F("Schwegelinstr.");
        break;
    }
    case 286311:
    {
        returnValue = F("Schwegelinweg");
        break;
    }
    case 286312:
    {
        returnValue = F("Schwegen");
        break;
    }
    case 286313:
    {
        returnValue = F("Schwegenheimer Str.");
        break;
    }
    case 286314:
    {
        returnValue = F("Schwegenheimer Weg");
        break;
    }
    case 286315:
    {
        returnValue = F("Schweger Mühle");
        break;
    }
    case 286316:
    {
        returnValue = F("Schweger Str.");
        break;
    }
    case 286317:
    {
        returnValue = F("Schweger Weg");
        break;
    }
    case 286318:
    {
        returnValue = F("Schwegerhoffstr.");
        break;
    }
    case 286319:
    {
        returnValue = F("Schwegfeldstr.");
        break;
    }
    case 286320:
    {
        returnValue = F("Schweghaar");
        break;
    }
    case 286321:
    {
        returnValue = F("Schweglerstr.");
        break;
    }
    case 286322:
    {
        returnValue = F("Schweglerweg");
        break;
    }
    case 286323:
    {
        returnValue = F("Schweglohe");
        break;
    }
    case 286324:
    {
        returnValue = F("Schweibachstr.");
        break;
    }
    case 286325:
    {
        returnValue = F("Schweibelweg");
        break;
    }
    case 286326:
    {
        returnValue = F("Schweiber");
        break;
    }
    case 286327:
    {
        returnValue = F("Schweichel");
        break;
    }
    case 286328:
    {
        returnValue = F("Schweichelner Str.");
        break;
    }
    case 286329:
    {
        returnValue = F("Schweicher Acht");
        break;
    }
    case 286330:
    {
        returnValue = F("Schweicher Str.");
        break;
    }
    case 286331:
    {
        returnValue = F("Schweichhauserstr.");
        break;
    }
    case 286332:
    {
        returnValue = F("Schweichingerhöfe");
        break;
    }
    case 286333:
    {
        returnValue = F("Schweickershäuser Str.");
        break;
    }
    case 286334:
    {
        returnValue = F("Schweickhardtstr.");
        break;
    }
    case 286335:
    {
        returnValue = F("Schweidackerweg");
        break;
    }
    case 286336:
    {
        returnValue = F("Schweidnitzallee");
        break;
    }
    case 286337:
    {
        returnValue = F("Schweidnitzer Str.");
        break;
    }
    case 286338:
    {
        returnValue = F("Schweidnitzer Weg");
        break;
    }
    case 286339:
    {
        returnValue = F("Schweidweg");
        break;
    }
    case 286340:
    {
        returnValue = F("Schweier Str.");
        break;
    }
    case 286341:
    {
        returnValue = F("Schweifelder Str.");
        break;
    }
    case 286342:
    {
        returnValue = F("Schweiftalweg");
        break;
    }
    case 286343:
    {
        returnValue = F("Schweigbrunnenstr.");
        break;
    }
    case 286344:
    {
        returnValue = F("Schweigelstr.");
        break;
    }
    case 286345:
    {
        returnValue = F("Schweigener Str.");
        break;
    }
    case 286346:
    {
        returnValue = F("Schweigermoos");
        break;
    }
    case 286347:
    {
        returnValue = F("Schweigerner Str.");
        break;
    }
    case 286348:
    {
        returnValue = F("Schweigerner Weg");
        break;
    }
    case 286349:
    {
        returnValue = F("Schweigerstr.");
        break;
    }
    case 286350:
    {
        returnValue = F("Schweigerweg");
        break;
    }
    case 286351:
    {
        returnValue = F("Schweighausenstr.");
        break;
    }
    case 286352:
    {
        returnValue = F("Schweighofer Weg");
        break;
    }
    case 286353:
    {
        returnValue = F("Schweighofstr.");
        break;
    }
    case 286354:
    {
        returnValue = F("Schweighofweg");
        break;
    }
    case 286355:
    {
        returnValue = F("Schweighöfe");
        break;
    }
    case 286356:
    {
        returnValue = F("Schweigmatt");
        break;
    }
    case 286357:
    {
        returnValue = F("Schweigmattweg");
        break;
    }
    case 286358:
    {
        returnValue = F("Schweigrother Str.");
        break;
    }
    case 286359:
    {
        returnValue = F("Schweigstall");
        break;
    }
    case 286360:
    {
        returnValue = F("Schweigstr.");
        break;
    }
    case 286361:
    {
        returnValue = F("Schweikershainer Str.");
        break;
    }
    case 286362:
    {
        returnValue = F("Schweikhof");
        break;
    }
    case 286363:
    {
        returnValue = F("Schweiklberger Weg");
        break;
    }
    case 286364:
    {
        returnValue = F("Schweiklbergstr.");
        break;
    }
    case 286365:
    {
        returnValue = F("Schweikvitz");
        break;
    }
    case 286366:
    {
        returnValue = F("Schweilbacher Str.");
        break;
    }
    case 286367:
    {
        returnValue = F("Schweiler Str.");
        break;
    }
    case 286368:
    {
        returnValue = F("Schweimehder Weg");
        break;
    }
    case 286369:
    {
        returnValue = F("Schweimnitz");
        break;
    }
    case 286370:
    {
        returnValue = F("Schweimnitzer Weg");
        break;
    }
    case 286371:
    {
        returnValue = F("Schwein");
        break;
    }
    case 286372:
    {
        returnValue = F("Schweina");
        break;
    }
    case 286373:
    {
        returnValue = F("Schweinachweg");
        break;
    }
    case 286374:
    {
        returnValue = F("Schweinaer Weg");
        break;
    }
    case 286375:
    {
        returnValue = F("Schweinanger");
        break;
    }
    case 286376:
    {
        returnValue = F("Schweinauer Str.");
        break;
    }
    case 286377:
    {
        returnValue = F("Schweinbach");
        break;
    }
    case 286378:
    {
        returnValue = F("Schweinbach-Sträßchen");
        break;
    }
    case 286379:
    {
        returnValue = F("Schweinbacher Str.");
        break;
    }
    case 286380:
    {
        returnValue = F("Schweinbachstr.");
        break;
    }
    case 286381:
    {
        returnValue = F("Schweinbachtal Planie");
        break;
    }
    case 286382:
    {
        returnValue = F("Schweinbachweg");
        break;
    }
    case 286383:
    {
        returnValue = F("Schweinberg");
        break;
    }
    case 286384:
    {
        returnValue = F("Schweinberger Hof");
        break;
    }
    case 286385:
    {
        returnValue = F("Schweindorfer Str.");
        break;
    }
    case 286386:
    {
        returnValue = F("Schweinebach");
        break;
    }
    case 286387:
    {
        returnValue = F("Schweineberg");
        break;
    }
    case 286388:
    {
        returnValue = F("Schweineberg Rundwanderweg");
        break;
    }
    case 286389:
    {
        returnValue = F("Schweinebrücke");
        break;
    }
    case 286390:
    {
        returnValue = F("Schweinebrücker Weg");
        break;
    }
    case 286391:
    {
        returnValue = F("Schweinedeich");
        break;
    }
    case 286392:
    {
        returnValue = F("Schweinegasse");
        break;
    }
    case 286393:
    {
        returnValue = F("Schweinegger Weg");
        break;
    }
    case 286394:
    {
        returnValue = F("Schweinegrundweg");
        break;
    }
    case 286395:
    {
        returnValue = F("Schweinehof");
        break;
    }
    case 286396:
    {
        returnValue = F("Schweinehute");
        break;
    }
    case 286397:
    {
        returnValue = F("Schweinekopfrundweg");
        break;
    }
    case 286398:
    {
        returnValue = F("Schweinekopfweg");
        break;
    }
    case 286399:
    {
        returnValue = F("Schweineluschke");
        break;
    }
    case 286400:
    {
        returnValue = F("Schweinemarkt");
        break;
    }
    case 286401:
    {
        returnValue = F("Schweinertsweg");
        break;
    }
    case 286402:
    {
        returnValue = F("Schweinestallweg");
        break;
    }
    case 286403:
    {
        returnValue = F("Schweinesuhle");
        break;
    }
    case 286404:
    {
        returnValue = F("Schweinetal");
        break;
    }
    case 286405:
    {
        returnValue = F("Schweinetor");
        break;
    }
    case 286406:
    {
        returnValue = F("Schweinetrail");
        break;
    }
    case 286407:
    {
        returnValue = F("Schweinetrift");
        break;
    }
    case 286408:
    {
        returnValue = F("Schweineweg");
        break;
    }
    case 286409:
    {
        returnValue = F("Schweineweide");
        break;
    }
    case 286410:
    {
        returnValue = F("Schweineweideweg");
        break;
    }
    case 286411:
    {
        returnValue = F("Schweinfewiesen");
        break;
    }
    case 286412:
    {
        returnValue = F("Schweinfurter Str.");
        break;
    }
    case 286413:
    {
        returnValue = F("Schweinfurter Weg");
        break;
    }
    case 286414:
    {
        returnValue = F("Schweinfurther Str.");
        break;
    }
    case 286415:
    {
        returnValue = F("Schweingrubenweg");
        break;
    }
    case 286416:
    {
        returnValue = F("Schweingrübenweg");
        break;
    }
    case 286417:
    {
        returnValue = F("Schweinhauser Str.");
        break;
    }
    case 286418:
    {
        returnValue = F("Schweinheimer Allee");
        break;
    }
    case 286419:
    {
        returnValue = F("Schweinheimer Pfad");
        break;
    }
    case 286420:
    {
        returnValue = F("Schweinheimer Str.");
        break;
    }
    case 286421:
    {
        returnValue = F("Schweinheimer Weg");
        break;
    }
    case 286422:
    {
        returnValue = F("Schweinhorsterbahn");
        break;
    }
    case 286423:
    {
        returnValue = F("Schweinigelweg");
        break;
    }
    case 286424:
    {
        returnValue = F("Schweinitzer Chaussee");
        break;
    }
    case 286425:
    {
        returnValue = F("Schweinitzer Str.");
        break;
    }
    case 286426:
    {
        returnValue = F("Schweinitzer Weg");
        break;
    }
    case 286427:
    {
        returnValue = F("Schweinitztalwanderweg");
        break;
    }
    case 286428:
    {
        returnValue = F("Schweiniweg");
        break;
    }
    case 286429:
    {
        returnValue = F("Schweinlang");
        break;
    }
    case 286430:
    {
        returnValue = F("Schweinmarkt");
        break;
    }
    case 286431:
    {
        returnValue = F("Schweinricher Str.");
        break;
    }
    case 286432:
    {
        returnValue = F("Schweinsbach");
        break;
    }
    case 286433:
    {
        returnValue = F("Schweinsberger Str.");
        break;
    }
    case 286434:
    {
        returnValue = F("Schweinsbergstr.");
        break;
    }
    case 286435:
    {
        returnValue = F("Schweinsbergweg");
        break;
    }
    case 286436:
    {
        returnValue = F("Schweinsbrücke");
        break;
    }
    case 286437:
    {
        returnValue = F("Schweinsbrüten Allee");
        break;
    }
    case 286438:
    {
        returnValue = F("Schweinsbühler Str.");
        break;
    }
    case 286439:
    {
        returnValue = F("Schweinsdorf");
        break;
    }
    case 286440:
    {
        returnValue = F("Schweinsdorfer Str.");
        break;
    }
    case 286441:
    {
        returnValue = F("Schweinsgasse");
        break;
    }
    case 286442:
    {
        returnValue = F("Schweinsgrubenweg");
        break;
    }
    case 286443:
    {
        returnValue = F("Schweinsgrubschneise");
        break;
    }
    case 286444:
    {
        returnValue = F("Schweinshagweg");
        break;
    }
    case 286445:
    {
        returnValue = F("Schweinsheide");
        break;
    }
    case 286446:
    {
        returnValue = F("Schweinsmarkt");
        break;
    }
    case 286447:
    {
        returnValue = F("Schweinsmoorweg");
        break;
    }
    case 286448:
    {
        returnValue = F("Schweinsrasenweg");
        break;
    }
    case 286449:
    {
        returnValue = F("Schweinssteige");
        break;
    }
    case 286450:
    {
        returnValue = F("Schweinstal");
        break;
    }
    case 286451:
    {
        returnValue = F("Schweinstallweg");
        break;
    }
    case 286452:
    {
        returnValue = F("Schweinsweideweg");
        break;
    }
    case 286453:
    {
        returnValue = F("Schweintalweg");
        break;
    }
    case 286454:
    {
        returnValue = F("Schweinthal");
        break;
    }
    case 286455:
    {
        returnValue = F("Schweinthaler Str.");
        break;
    }
    case 286456:
    {
        returnValue = F("Schweisdorfer Str.");
        break;
    }
    case 286457:
    {
        returnValue = F("Schweisthal");
        break;
    }
    case 286458:
    {
        returnValue = F("Schweitenkirchener Str.");
        break;
    }
    case 286459:
    {
        returnValue = F("Schweitzbachweg");
        break;
    }
    case 286460:
    {
        returnValue = F("Schweitzer Str.");
        break;
    }
    case 286461:
    {
        returnValue = F("Schweitzer-Geräumt");
        break;
    }
    case 286462:
    {
        returnValue = F("Schweitzer-Weg");
        break;
    }
    case 286463:
    {
        returnValue = F("Schweitzerberg");
        break;
    }
    case 286464:
    {
        returnValue = F("Schweitzerstr.");
        break;
    }
    case 286465:
    {
        returnValue = F("Schweitzertalstr.");
        break;
    }
    case 286466:
    {
        returnValue = F("Schweitzerweg");
        break;
    }
    case 286467:
    {
        returnValue = F("Schweiz");
        break;
    }
    case 286468:
    {
        returnValue = F("Schweizer Blick");
        break;
    }
    case 286469:
    {
        returnValue = F("Schweizer Gasse");
        break;
    }
    case 286470:
    {
        returnValue = F("Schweizer Höh");
        break;
    }
    case 286471:
    {
        returnValue = F("Schweizer Ring");
        break;
    }
    case 286472:
    {
        returnValue = F("Schweizer Stapfen");
        break;
    }
    case 286473:
    {
        returnValue = F("Schweizer Str.");
        break;
    }
    case 286474:
    {
        returnValue = F("Schweizer Tor");
        break;
    }
    case 286475:
    {
        returnValue = F("Schweizer Weg");
        break;
    }
    case 286476:
    {
        returnValue = F("Schweizer Wiese");
        break;
    }
    case 286477:
    {
        returnValue = F("Schweizer Winkel");
        break;
    }
    case 286478:
    {
        returnValue = F("Schweizerbachstr.");
        break;
    }
    case 286479:
    {
        returnValue = F("Schweizerberg");
        break;
    }
    case 286480:
    {
        returnValue = F("Schweizerblick");
        break;
    }
    case 286481:
    {
        returnValue = F("Schweizerburg Weg");
        break;
    }
    case 286482:
    {
        returnValue = F("Schweizerdavidweg");
        break;
    }
    case 286483:
    {
        returnValue = F("Schweizereck");
        break;
    }
    case 286484:
    {
        returnValue = F("Schweizerei");
        break;
    }
    case 286485:
    {
        returnValue = F("Schweizereigasse");
        break;
    }
    case 286486:
    {
        returnValue = F("Schweizerfeldweg");
        break;
    }
    case 286487:
    {
        returnValue = F("Schweizergartenstr.");
        break;
    }
    case 286488:
    {
        returnValue = F("Schweizergasse");
        break;
    }
    case 286489:
    {
        returnValue = F("Schweizerhalde");
        break;
    }
    case 286490:
    {
        returnValue = F("Schweizerhaldestr.");
        break;
    }
    case 286491:
    {
        returnValue = F("Schweizerhaldeweg");
        break;
    }
    case 286492:
    {
        returnValue = F("Schweizerhaus");
        break;
    }
    case 286493:
    {
        returnValue = F("Schweizerhof");
        break;
    }
    case 286494:
    {
        returnValue = F("Schweizerhofweg");
        break;
    }
    case 286495:
    {
        returnValue = F("Schweizerhöhenweg");
        break;
    }
    case 286496:
    {
        returnValue = F("Schweizerhütte");
        break;
    }
    case 286497:
    {
        returnValue = F("Schweizerkopfweg");
        break;
    }
    case 286498:
    {
        returnValue = F("Schweizerlandstr.");
        break;
    }
    case 286499:
    {
        returnValue = F("Schweizerlehofweg");
        break;
    }
    case 286500:
    {
        returnValue = F("Schweizerloch");
        break;
    }
    case 286501:
    {
        returnValue = F("Schweizermühle");
        break;
    }
    case 286502:
    {
        returnValue = F("Schweizermühlengasse");
        break;
    }
    case 286503:
    {
        returnValue = F("Schweizersdelle");
        break;
    }
    case 286504:
    {
        returnValue = F("Schweizerstr.");
        break;
    }
    case 286505:
    {
        returnValue = F("Schweizertal");
        break;
    }
    case 286506:
    {
        returnValue = F("Schweizertalstr.");
        break;
    }
    case 286507:
    {
        returnValue = F("Schweizerthaler Str.");
        break;
    }
    case 286508:
    {
        returnValue = F("Schweizerweg");
        break;
    }
    case 286509:
    {
        returnValue = F("Schweizerwiesen");
        break;
    }
    case 286510:
    {
        returnValue = F("Schweizerwiesenweg");
        break;
    }
    case 286511:
    {
        returnValue = F("Schweizgasse");
        break;
    }
    case 286512:
    {
        returnValue = F("Schweizstr.");
        break;
    }
    case 286513:
    {
        returnValue = F("Schweizweg");
        break;
    }
    case 286514:
    {
        returnValue = F("Schweißenreuth");
        break;
    }
    case 286515:
    {
        returnValue = F("Schweißlohstr.");
        break;
    }
    case 286516:
    {
        returnValue = F("Schweiäckerstr.");
        break;
    }
    case 286517:
    {
        returnValue = F("Schwelbek");
        break;
    }
    case 286518:
    {
        returnValue = F("Schwelbeker Damm");
        break;
    }
    case 286519:
    {
        returnValue = F("Schwelchergasse");
        break;
    }
    case 286520:
    {
        returnValue = F("Schwelcherstr.");
        break;
    }
    case 286521:
    {
        returnValue = F("Schwelentruper Weg");
        break;
    }
    case 286522:
    {
        returnValue = F("Schwelgenäcker Weg");
        break;
    }
    case 286523:
    {
        returnValue = F("Schwelkstr.");
        break;
    }
    case 286524:
    {
        returnValue = F("Schwellbergstr.");
        break;
    }
    case 286525:
    {
        returnValue = F("Schwellbrückenstr.");
        break;
    }
    case 286526:
    {
        returnValue = F("Schwellenbach");
        break;
    }
    case 286527:
    {
        returnValue = F("Schwellengraben-Siedlung");
        break;
    }
    case 286528:
    {
        returnValue = F("Schwellenweg");
        break;
    }
    case 286529:
    {
        returnValue = F("Schwellenweg (Schwellsteig)");
        break;
    }
    case 286530:
    {
        returnValue = F("Schwellenwerkstr.");
        break;
    }
    case 286531:
    {
        returnValue = F("Schwellergasse");
        break;
    }
    case 286532:
    {
        returnValue = F("Schwellerhaldestr.");
        break;
    }
    case 286533:
    {
        returnValue = F("Schwelligengrund");
        break;
    }
    case 286534:
    {
        returnValue = F("Schwellmahdweg");
        break;
    }
    case 286535:
    {
        returnValue = F("Schwellsteig");
        break;
    }
    case 286536:
    {
        returnValue = F("Schwellstr.");
        break;
    }
    case 286537:
    {
        returnValue = F("Schwellweg");
        break;
    }
    case 286538:
    {
        returnValue = F("Schwelmer Str.");
        break;
    }
    case 286539:
    {
        returnValue = F("Schwelmestr.");
        break;
    }
    case 286540:
    {
        returnValue = F("Schweltholm");
        break;
    }
    case 286541:
    {
        returnValue = F("Schwemannskamp");
        break;
    }
    case 286542:
    {
        returnValue = F("Schwemannstr.");
        break;
    }
    case 286543:
    {
        returnValue = F("Schwemberg");
        break;
    }
    case 286544:
    {
        returnValue = F("Schwemeckerweg");
        break;
    }
    case 286545:
    {
        returnValue = F("Schwemmberg");
        break;
    }
    case 286546:
    {
        returnValue = F("Schwemmdobben");
        break;
    }
    case 286547:
    {
        returnValue = F("Schwemme");
        break;
    }
    case 286548:
    {
        returnValue = F("Schwemmelsbacher Str.");
        break;
    }
    case 286549:
    {
        returnValue = F("Schwemmerberg");
        break;
    }
    case 286550:
    {
        returnValue = F("Schwemmerichweg");
        break;
    }
    case 286551:
    {
        returnValue = F("Schwemmerstr.");
        break;
    }
    case 286552:
    {
        returnValue = F("Schwemmerweg");
        break;
    }
    case 286553:
    {
        returnValue = F("Schwemmfeld");
        break;
    }
    case 286554:
    {
        returnValue = F("Schwemmförth");
        break;
    }
    case 286555:
    {
        returnValue = F("Schwemmgasse");
        break;
    }
    case 286556:
    {
        returnValue = F("Schwemmplatz");
        break;
    }
    case 286557:
    {
        returnValue = F("Schwemmstr.");
        break;
    }
    case 286558:
    {
        returnValue = F("Schwemmteichweg");
        break;
    }
    case 286559:
    {
        returnValue = F("Schwemmtümpel");
        break;
    }
    case 286560:
    {
        returnValue = F("Schwemmweg");
        break;
    }
    case 286561:
    {
        returnValue = F("Schwemsaler Str.");
        break;
    }
    case 286562:
    {
        returnValue = F("Schwend");
        break;
    }
    case 286563:
    {
        returnValue = F("Schwendaer Stadtweg");
        break;
    }
    case 286564:
    {
        returnValue = F("Schwendaer Str.");
        break;
    }
    case 286565:
    {
        returnValue = F("Schwende");
        break;
    }
    case 286566:
    {
        returnValue = F("Schwendelgasse");
        break;
    }
    case 286567:
    {
        returnValue = F("Schwenden");
        break;
    }
    case 286568:
    {
        returnValue = F("Schwendener Str.");
        break;
    }
    case 286569:
    {
        returnValue = F("Schwender Str.");
        break;
    }
    case 286570:
    {
        returnValue = F("Schwendeweg");
        break;
    }
    case 286571:
    {
        returnValue = F("Schwendholz");
        break;
    }
    case 286572:
    {
        returnValue = F("Schwendier Str.");
        break;
    }
    case 286573:
    {
        returnValue = F("Schwendier Weg");
        break;
    }
    case 286574:
    {
        returnValue = F("Schwendigasse");
        break;
    }
    case 286575:
    {
        returnValue = F("Schwendistr.");
        break;
    }
    case 286576:
    {
        returnValue = F("Schwendlisrein");
        break;
    }
    case 286577:
    {
        returnValue = F("Schwendner Str.");
        break;
    }
    case 286578:
    {
        returnValue = F("Schwendner Weg");
        break;
    }
    case 286579:
    {
        returnValue = F("Schwendnißtannen");
        break;
    }
    case 286580:
    {
        returnValue = F("Schwendreuter Str.");
        break;
    }
    case 286581:
    {
        returnValue = F("Schwendweg");
        break;
    }
    case 286582:
    {
        returnValue = F("Schwengebergstr.");
        break;
    }
    case 286583:
    {
        returnValue = F("Schwengelgasse");
        break;
    }
    case 286584:
    {
        returnValue = F("Schwengerstr.");
        break;
    }
    case 286585:
    {
        returnValue = F("Schwengert");
        break;
    }
    case 286586:
    {
        returnValue = F("Schwenghammer Str.");
        break;
    }
    case 286587:
    {
        returnValue = F("Schweninger Str.");
        break;
    }
    case 286588:
    {
        returnValue = F("Schweningerstr.");
        break;
    }
    case 286589:
    {
        returnValue = F("Schwenitzer Str.");
        break;
    }
    case 286590:
    {
        returnValue = F("Schwenkelstr.");
        break;
    }
    case 286591:
    {
        returnValue = F("Schwenkenlohweg");
        break;
    }
    case 286592:
    {
        returnValue = F("Schwenkenmoorweg");
        break;
    }
    case 286593:
    {
        returnValue = F("Schwenkenweg");
        break;
    }
    case 286594:
    {
        returnValue = F("Schwenkestr.");
        break;
    }
    case 286595:
    {
        returnValue = F("Schwenkeweg");
        break;
    }
    case 286596:
    {
        returnValue = F("Schwenkgasse");
        break;
    }
    case 286597:
    {
        returnValue = F("Schwenkkuhlenweg");
        break;
    }
    case 286598:
    {
        returnValue = F("Schwenkstr.");
        break;
    }
    case 286599:
    {
        returnValue = F("Schwenksweiler");
        break;
    }
    case 286600:
    {
        returnValue = F("Schwenkweg");
        break;
    }
    case 286601:
    {
        returnValue = F("Schwennengasse");
        break;
    }
    case 286602:
    {
        returnValue = F("Schwennenzer Damm");
        break;
    }
    case 286603:
    {
        returnValue = F("Schwennesenstr.");
        break;
    }
    case 286604:
    {
        returnValue = F("Schwenningdorfer Heide");
        break;
    }
    case 286605:
    {
        returnValue = F("Schwenninger Damm");
        break;
    }
    case 286606:
    {
        returnValue = F("Schwenninger Str.");
        break;
    }
    case 286607:
    {
        returnValue = F("Schwenninger Weg");
        break;
    }
    case 286608:
    {
        returnValue = F("Schwensbyer Str.");
        break;
    }
    case 286609:
    {
        returnValue = F("Schwensbyer Weg");
        break;
    }
    case 286610:
    {
        returnValue = F("Schwensholz");
        break;
    }
    case 286611:
    {
        returnValue = F("Schwenstr.");
        break;
    }
    case 286612:
    {
        returnValue = F("Schwenterstr.");
        break;
    }
    case 286613:
    {
        returnValue = F("Schwentineblick");
        break;
    }
    case 286614:
    {
        returnValue = F("Schwentinequelle");
        break;
    }
    case 286615:
    {
        returnValue = F("Schwentinestr.");
        break;
    }
    case 286616:
    {
        returnValue = F("Schwentinetal");
        break;
    }
    case 286617:
    {
        returnValue = F("Schwentineweg");
        break;
    }
    case 286618:
    {
        returnValue = F("Schwenziner Str.");
        break;
    }
    case 286619:
    {
        returnValue = F("Schweperei");
        break;
    }
    case 286620:
    {
        returnValue = F("Schwepfinger Weg");
        break;
    }
    case 286621:
    {
        returnValue = F("Schwepnitzer Str.");
        break;
    }
    case 286622:
    {
        returnValue = F("Schweppelesgässle");
        break;
    }
    case 286623:
    {
        returnValue = F("Schweppenburgstr.");
        break;
    }
    case 286624:
    {
        returnValue = F("Schweppenhausener Str.");
        break;
    }
    case 286625:
    {
        returnValue = F("Schweppenhäuser Weg");
        break;
    }
    case 286626:
    {
        returnValue = F("Schweppenhäuserstr.");
        break;
    }
    case 286627:
    {
        returnValue = F("Schweppermannpark");
        break;
    }
    case 286628:
    {
        returnValue = F("Schweppermannstr.");
        break;
    }
    case 286629:
    {
        returnValue = F("Schwerdnermühle");
        break;
    }
    case 286630:
    {
        returnValue = F("Schwerdorfer Weg");
        break;
    }
    case 286631:
    {
        returnValue = F("Schwerdstr.");
        break;
    }
    case 286632:
    {
        returnValue = F("Schwerdt-Weg");
        break;
    }
    case 286633:
    {
        returnValue = F("Schwerdtfeger-Geräumt");
        break;
    }
    case 286634:
    {
        returnValue = F("Schwerdtfegerstr.");
        break;
    }
    case 286635:
    {
        returnValue = F("Schwerdtfiehrerstr.");
        break;
    }
    case 286636:
    {
        returnValue = F("Schwerdtflügel");
        break;
    }
    case 286637:
    {
        returnValue = F("Schwerdtmacherstr.");
        break;
    }
    case 286638:
    {
        returnValue = F("Schwerdtmannstr.");
        break;
    }
    case 286639:
    {
        returnValue = F("Schwerdtweg");
        break;
    }
    case 286640:
    {
        returnValue = F("Schwerfelstr.");
        break;
    }
    case 286641:
    {
        returnValue = F("Schwerfener Hauptstr.");
        break;
    }
    case 286642:
    {
        returnValue = F("Schwerinallee");
        break;
    }
    case 286643:
    {
        returnValue = F("Schweriner Allee");
        break;
    }
    case 286644:
    {
        returnValue = F("Schweriner Chaussee");
        break;
    }
    case 286645:
    {
        returnValue = F("Schweriner Heck");
        break;
    }
    case 286646:
    {
        returnValue = F("Schweriner Landstr.");
        break;
    }
    case 286647:
    {
        returnValue = F("Schweriner Reihe");
        break;
    }
    case 286648:
    {
        returnValue = F("Schweriner Ring");
        break;
    }
    case 286649:
    {
        returnValue = F("Schweriner Str.");
        break;
    }
    case 286650:
    {
        returnValue = F("Schweriner Tor");
        break;
    }
    case 286651:
    {
        returnValue = F("Schweriner Weg");
        break;
    }
    case 286652:
    {
        returnValue = F("Schweriner Zoo");
        break;
    }
    case 286653:
    {
        returnValue = F("Schwering & Hasse Str.");
        break;
    }
    case 286654:
    {
        returnValue = F("Schweringhausen");
        break;
    }
    case 286655:
    {
        returnValue = F("Schweringhauser Str.");
        break;
    }
    case 286656:
    {
        returnValue = F("Schweringhäuser Feld");
        break;
    }
    case 286657:
    {
        returnValue = F("Schweringstr.");
        break;
    }
    case 286658:
    {
        returnValue = F("Schwerinsburg");
        break;
    }
    case 286659:
    {
        returnValue = F("Schwerinsburger Damm");
        break;
    }
    case 286660:
    {
        returnValue = F("Schwerinsdorfer Str.");
        break;
    }
    case 286661:
    {
        returnValue = F("Schwerinsfeld");
        break;
    }
    case 286662:
    {
        returnValue = F("Schwerinsgroden");
        break;
    }
    case 286663:
    {
        returnValue = F("Schwerinshorst");
        break;
    }
    case 286664:
    {
        returnValue = F("Schwerinstr.");
        break;
    }
    case 286665:
    {
        returnValue = F("Schwerinweg");
        break;
    }
    case 286666:
    {
        returnValue = F("Schwerlastspur");
        break;
    }
    case 286667:
    {
        returnValue = F("Schwerstedter Kirchgasse");
        break;
    }
    case 286668:
    {
        returnValue = F("Schwerstedter Str.");
        break;
    }
    case 286669:
    {
        returnValue = F("Schwerstr.");
        break;
    }
    case 286670:
    {
        returnValue = F("Schwert-A-Weg");
        break;
    }
    case 286671:
    {
        returnValue = F("Schwertbergstr.");
        break;
    }
    case 286672:
    {
        returnValue = F("Schwerte");
        break;
    }
    case 286673:
    {
        returnValue = F("Schwerter Str.");
        break;
    }
    case 286674:
    {
        returnValue = F("Schwerterbruch");
        break;
    }
    case 286675:
    {
        returnValue = F("Schwertestr.");
        break;
    }
    case 286676:
    {
        returnValue = F("Schwertfegergasse");
        break;
    }
    case 286677:
    {
        returnValue = F("Schwertfegerstr.");
        break;
    }
    case 286678:
    {
        returnValue = F("Schwertflügel");
        break;
    }
    case 286679:
    {
        returnValue = F("Schwertgesweg");
        break;
    }
    case 286680:
    {
        returnValue = F("Schwerthofstr.");
        break;
    }
    case 286681:
    {
        returnValue = F("Schwertlacke");
        break;
    }
    case 286682:
    {
        returnValue = F("Schwertleswiesenweg");
        break;
    }
    case 286683:
    {
        returnValue = F("Schwertlilienstr.");
        break;
    }
    case 286684:
    {
        returnValue = F("Schwertlilienweg");
        break;
    }
    case 286685:
    {
        returnValue = F("Schwertsheftweg");
        break;
    }
    case 286686:
    {
        returnValue = F("Schwertstr.");
        break;
    }
    case 286687:
    {
        returnValue = F("Schwertweg");
        break;
    }
    case 286688:
    {
        returnValue = F("Schwerz");
        break;
    }
    case 286689:
    {
        returnValue = F("Schwerzauer Siedlung");
        break;
    }
    case 286690:
    {
        returnValue = F("Schwerzauer Str.");
        break;
    }
    case 286691:
    {
        returnValue = F("Schwerzener Str.");
        break;
    }
    case 286692:
    {
        returnValue = F("Schwerzerallee");
        break;
    }
    case 286693:
    {
        returnValue = F("Schwerzfelder Str.");
        break;
    }
    case 286694:
    {
        returnValue = F("Schwerzkoer Str.");
        break;
    }
    case 286695:
    {
        returnValue = F("Schwerzkower Weg");
        break;
    }
    case 286696:
    {
        returnValue = F("Schwerzstr.");
        break;
    }
    case 286697:
    {
        returnValue = F("Schwesendorfer Str.");
        break;
    }
    case 286698:
    {
        returnValue = F("Schwesendorfer Weg");
        break;
    }
    case 286699:
    {
        returnValue = F("Schwesingfeld");
        break;
    }
    case 286700:
    {
        returnValue = F("Schwester Valentine Weg");
        break;
    }
    case 286701:
    {
        returnValue = F("Schwester- Theodarda- Weg");
        break;
    }
    case 286702:
    {
        returnValue = F("Schwester-Adelsindis-Weg");
        break;
    }
    case 286703:
    {
        returnValue = F("Schwester-Aicharda-Str.");
        break;
    }
    case 286704:
    {
        returnValue = F("Schwester-Anna-Huberta-Weg");
        break;
    }
    case 286705:
    {
        returnValue = F("Schwester-Anna-Str.");
        break;
    }
    case 286706:
    {
        returnValue = F("Schwester-Aquinata-Weg");
        break;
    }
    case 286707:
    {
        returnValue = F("Schwester-Ariela-Str.");
        break;
    }
    case 286708:
    {
        returnValue = F("Schwester-Assumpta-Weg");
        break;
    }
    case 286709:
    {
        returnValue = F("Schwester-Baptista-Str.");
        break;
    }
    case 286710:
    {
        returnValue = F("Schwester-Berta-Str.");
        break;
    }
    case 286711:
    {
        returnValue = F("Schwester-Bertranda-Str.");
        break;
    }
    case 286712:
    {
        returnValue = F("Schwester-Blanda-Weg");
        break;
    }
    case 286713:
    {
        returnValue = F("Schwester-Blanka-Str.");
        break;
    }
    case 286714:
    {
        returnValue = F("Schwester-Brink-Str.");
        break;
    }
    case 286715:
    {
        returnValue = F("Schwester-Brionda-Str.");
        break;
    }
    case 286716:
    {
        returnValue = F("Schwester-Cantina-Weg");
        break;
    }
    case 286717:
    {
        returnValue = F("Schwester-Caritina-Weg");
        break;
    }
    case 286718:
    {
        returnValue = F("Schwester-Caroline-Weg");
        break;
    }
    case 286719:
    {
        returnValue = F("Schwester-Clematia-Str.");
        break;
    }
    case 286720:
    {
        returnValue = F("Schwester-Cleopha-Weg");
        break;
    }
    case 286721:
    {
        returnValue = F("Schwester-Columba-Str.");
        break;
    }
    case 286722:
    {
        returnValue = F("Schwester-Columbana-Weg");
        break;
    }
    case 286723:
    {
        returnValue = F("Schwester-Concordia-Str.");
        break;
    }
    case 286724:
    {
        returnValue = F("Schwester-Consolata-Platz");
        break;
    }
    case 286725:
    {
        returnValue = F("Schwester-Constantine-Str.");
        break;
    }
    case 286726:
    {
        returnValue = F("Schwester-Coronata-Weg");
        break;
    }
    case 286727:
    {
        returnValue = F("Schwester-Cölestine-Weg");
        break;
    }
    case 286728:
    {
        returnValue = F("Schwester-Damiana-Str.");
        break;
    }
    case 286729:
    {
        returnValue = F("Schwester-Dina-Weg");
        break;
    }
    case 286730:
    {
        returnValue = F("Schwester-Dorothea-Weg");
        break;
    }
    case 286731:
    {
        returnValue = F("Schwester-Edelfrieda-Weg");
        break;
    }
    case 286732:
    {
        returnValue = F("Schwester-Edelharda-Str.");
        break;
    }
    case 286733:
    {
        returnValue = F("Schwester-Edith-Stein-Str.");
        break;
    }
    case 286734:
    {
        returnValue = F("Schwester-Elisabeth-Str.");
        break;
    }
    case 286735:
    {
        returnValue = F("Schwester-Elisabeth-Weg");
        break;
    }
    case 286736:
    {
        returnValue = F("Schwester-Ella-Weg");
        break;
    }
    case 286737:
    {
        returnValue = F("Schwester-Elmara-Weg");
        break;
    }
    case 286738:
    {
        returnValue = F("Schwester-Emerentia-Weg");
        break;
    }
    case 286739:
    {
        returnValue = F("Schwester-Emma-Jänicke-Str.");
        break;
    }
    case 286740:
    {
        returnValue = F("Schwester-Emmi-Weg");
        break;
    }
    case 286741:
    {
        returnValue = F("Schwester-Ermelindis-Weg");
        break;
    }
    case 286742:
    {
        returnValue = F("Schwester-Eusebia-Str.");
        break;
    }
    case 286743:
    {
        returnValue = F("Schwester-Euthymia-Str.");
        break;
    }
    case 286744:
    {
        returnValue = F("Schwester-Felixina-Str.");
        break;
    }
    case 286745:
    {
        returnValue = F("Schwester-Florida-Weg");
        break;
    }
    case 286746:
    {
        returnValue = F("Schwester-Frieda-Weg");
        break;
    }
    case 286747:
    {
        returnValue = F("Schwester-Friedberta-Str.");
        break;
    }
    case 286748:
    {
        returnValue = F("Schwester-Gerharda-Weg");
        break;
    }
    case 286749:
    {
        returnValue = F("Schwester-Goswina-Str.");
        break;
    }
    case 286750:
    {
        returnValue = F("Schwester-Gustavia-Str.");
        break;
    }
    case 286751:
    {
        returnValue = F("Schwester-Hedwig-Janson-Weg");
        break;
    }
    case 286752:
    {
        returnValue = F("Schwester-Helia-Weg");
        break;
    }
    case 286753:
    {
        returnValue = F("Schwester-Helma-Str.");
        break;
    }
    case 286754:
    {
        returnValue = F("Schwester-Hermenegildis-Str.");
        break;
    }
    case 286755:
    {
        returnValue = F("Schwester-Hildebranda-Str.");
        break;
    }
    case 286756:
    {
        returnValue = F("Schwester-Huberta-Weg");
        break;
    }
    case 286757:
    {
        returnValue = F("Schwester-Hubertilla-Weg");
        break;
    }
    case 286758:
    {
        returnValue = F("Schwester-Irlanda-Weg");
        break;
    }
    case 286759:
    {
        returnValue = F("Schwester-Jovita-Str.");
        break;
    }
    case 286760:
    {
        returnValue = F("Schwester-Katharina-Str.");
        break;
    }
    case 286761:
    {
        returnValue = F("Schwester-Katharina-Weg");
        break;
    }
    case 286762:
    {
        returnValue = F("Schwester-Klothilde-Weg");
        break;
    }
    case 286763:
    {
        returnValue = F("Schwester-Lamberta-Weg");
        break;
    }
    case 286764:
    {
        returnValue = F("Schwester-Linolda-Weg");
        break;
    }
    case 286765:
    {
        returnValue = F("Schwester-Ludovika-Weg");
        break;
    }
    case 286766:
    {
        returnValue = F("Schwester-Luziana-Str.");
        break;
    }
    case 286767:
    {
        returnValue = F("Schwester-Macra-Str.");
        break;
    }
    case 286768:
    {
        returnValue = F("Schwester-Mansueta-Str.");
        break;
    }
    case 286769:
    {
        returnValue = F("Schwester-Marcellina-Weg");
        break;
    }
    case 286770:
    {
        returnValue = F("Schwester-Maria-Alberta-Str.");
        break;
    }
    case 286771:
    {
        returnValue = F("Schwester-Marie-Weg");
        break;
    }
    case 286772:
    {
        returnValue = F("Schwester-Marlise-Weg");
        break;
    }
    case 286773:
    {
        returnValue = F("Schwester-Martha-Str.");
        break;
    }
    case 286774:
    {
        returnValue = F("Schwester-Maximilia-Str.");
        break;
    }
    case 286775:
    {
        returnValue = F("Schwester-Modesta-Str.");
        break;
    }
    case 286776:
    {
        returnValue = F("Schwester-Neri-Str.");
        break;
    }
    case 286777:
    {
        returnValue = F("Schwester-Neri-Weg");
        break;
    }
    case 286778:
    {
        returnValue = F("Schwester-Nina-Weg");
        break;
    }
    case 286779:
    {
        returnValue = F("Schwester-Otgera-Str.");
        break;
    }
    case 286780:
    {
        returnValue = F("Schwester-Paterna-Allee");
        break;
    }
    case 286781:
    {
        returnValue = F("Schwester-Patientia-Str.");
        break;
    }
    case 286782:
    {
        returnValue = F("Schwester-Pia-Weg");
        break;
    }
    case 286783:
    {
        returnValue = F("Schwester-Quentina-Platz");
        break;
    }
    case 286784:
    {
        returnValue = F("Schwester-Quirina-Str.");
        break;
    }
    case 286785:
    {
        returnValue = F("Schwester-Regis-Str.");
        break;
    }
    case 286786:
    {
        returnValue = F("Schwester-Reinburga-Str.");
        break;
    }
    case 286787:
    {
        returnValue = F("Schwester-Renata-Hampel-Str.");
        break;
    }
    case 286788:
    {
        returnValue = F("Schwester-Romula-Str.");
        break;
    }
    case 286789:
    {
        returnValue = F("Schwester-Rottenkolber-Str.");
        break;
    }
    case 286790:
    {
        returnValue = F("Schwester-Sabina-Str.");
        break;
    }
    case 286791:
    {
        returnValue = F("Schwester-Salaberga-Weg");
        break;
    }
    case 286792:
    {
        returnValue = F("Schwester-Sebastiana-Str.");
        break;
    }
    case 286793:
    {
        returnValue = F("Schwester-Secunda-Weg");
        break;
    }
    case 286794:
    {
        returnValue = F("Schwester-Siena-Weg");
        break;
    }
    case 286795:
    {
        returnValue = F("Schwester-Sophie-Str.");
        break;
    }
    case 286796:
    {
        returnValue = F("Schwester-Steimer-Weg");
        break;
    }
    case 286797:
    {
        returnValue = F("Schwester-Sylvia-Str.");
        break;
    }
    case 286798:
    {
        returnValue = F("Schwester-Talida-Platz");
        break;
    }
    case 286799:
    {
        returnValue = F("Schwester-Thadäa-Weg");
        break;
    }
    case 286800:
    {
        returnValue = F("Schwester-Thekla-Str.");
        break;
    }
    case 286801:
    {
        returnValue = F("Schwester-Theophania-Weg");
        break;
    }
    case 286802:
    {
        returnValue = F("Schwester-Theotima-Str.");
        break;
    }
    case 286803:
    {
        returnValue = F("Schwester-Timothea-Str.");
        break;
    }
    case 286804:
    {
        returnValue = F("Schwester-Ulrika-Nisch-Str.");
        break;
    }
    case 286805:
    {
        returnValue = F("Schwester-Urbania-Weg");
        break;
    }
    case 286806:
    {
        returnValue = F("Schwester-Urbitia-Str.");
        break;
    }
    case 286807:
    {
        returnValue = F("Schwester-Ursinella-Platz");
        break;
    }
    case 286808:
    {
        returnValue = F("Schwester-Walburga-Str.");
        break;
    }
    case 286809:
    {
        returnValue = F("Schwester-Waltraut-Weg");
        break;
    }
    case 286810:
    {
        returnValue = F("Schwester-Werinharda-Str.");
        break;
    }
    case 286811:
    {
        returnValue = F("Schwester-Wiedemann-Str.");
        break;
    }
    case 286812:
    {
        returnValue = F("Schwester-Zita-weg");
        break;
    }
    case 286813:
    {
        returnValue = F("Schwestergasse");
        break;
    }
    case 286814:
    {
        returnValue = F("Schwesterhausgasse");
        break;
    }
    case 286815:
    {
        returnValue = F("Schwestern-Brünell-Weg");
        break;
    }
    case 286816:
    {
        returnValue = F("Schwesternberg");
        break;
    }
    case 286817:
    {
        returnValue = F("Schwesternbüschken und Josefskapelle");
        break;
    }
    case 286818:
    {
        returnValue = F("Schwesterngang");
        break;
    }
    case 286819:
    {
        returnValue = F("Schwesterngasse");
        break;
    }
    case 286820:
    {
        returnValue = F("Schwesternhausweg");
        break;
    }
    case 286821:
    {
        returnValue = F("Schwesternstr.");
        break;
    }
    case 286822:
    {
        returnValue = F("Schwesterntalstr.");
        break;
    }
    case 286823:
    {
        returnValue = F("Schwesternweg");
        break;
    }
    case 286824:
    {
        returnValue = F("Schwesterstr.");
        break;
    }
    case 286825:
    {
        returnValue = F("Schweta");
        break;
    }
    case 286826:
    {
        returnValue = F("Schwetaer Str.");
        break;
    }
    case 286827:
    {
        returnValue = F("Schwetenkamp");
        break;
    }
    case 286828:
    {
        returnValue = F("Schwette");
        break;
    }
    case 286829:
    {
        returnValue = F("Schwettingerweg");
        break;
    }
    case 286830:
    {
        returnValue = F("Schwetzendorfer Stadtweg");
        break;
    }
    case 286831:
    {
        returnValue = F("Schwetzer Str.");
        break;
    }
    case 286832:
    {
        returnValue = F("Schwetziner Str.");
        break;
    }
    case 286833:
    {
        returnValue = F("Schwetziner Weg");
        break;
    }
    case 286834:
    {
        returnValue = F("Schwetzinger Platz");
        break;
    }
    case 286835:
    {
        returnValue = F("Schwetzinger Schlossgarten");
        break;
    }
    case 286836:
    {
        returnValue = F("Schwetzinger Str.");
        break;
    }
    case 286837:
    {
        returnValue = F("Schwetzinger Viehtriebweg");
        break;
    }
    case 286838:
    {
        returnValue = F("Schwetzinger Weg");
        break;
    }
    case 286839:
    {
        returnValue = F("Schweyer Weg");
        break;
    }
    case 286840:
    {
        returnValue = F("Schweyerstr.");
        break;
    }
    case 286841:
    {
        returnValue = F("Schweßwitzer Str.");
        break;
    }
    case 286842:
    {
        returnValue = F("Schwibbogen");
        break;
    }
    case 286843:
    {
        returnValue = F("Schwibbogenplatz");
        break;
    }
    case 286844:
    {
        returnValue = F("Schwicheldter Str.");
        break;
    }
    case 286845:
    {
        returnValue = F("Schwicheldtstr.");
        break;
    }
    case 286846:
    {
        returnValue = F("Schwichingsweg");
        break;
    }
    case 286847:
    {
        returnValue = F("Schwichtelerstr.");
        break;
    }
    case 286848:
    {
        returnValue = F("Schwichtenberg");
        break;
    }
    case 286849:
    {
        returnValue = F("Schwichtensee");
        break;
    }
    case 286850:
    {
        returnValue = F("Schwickartshäuser Str.");
        break;
    }
    case 286851:
    {
        returnValue = F("Schwickersbachstr.");
        break;
    }
    case 286852:
    {
        returnValue = F("Schwickershäuser Str.");
        break;
    }
    case 286853:
    {
        returnValue = F("Schwickertstr.");
        break;
    }
    case 286854:
    {
        returnValue = F("Schwickhörn");
        break;
    }
    case 286855:
    {
        returnValue = F("Schwickingsbusch");
        break;
    }
    case 286856:
    {
        returnValue = F("Schwickingsfeld");
        break;
    }
    case 286857:
    {
        returnValue = F("Schwiddenhofstr.");
        break;
    }
    case 286858:
    {
        returnValue = F("Schwiebachtal");
        break;
    }
    case 286859:
    {
        returnValue = F("Schwieberdinger Str.");
        break;
    }
    case 286860:
    {
        returnValue = F("Schwiebogen");
        break;
    }
    case 286861:
    {
        returnValue = F("Schwiecheldstr.");
        break;
    }
    case 286862:
    {
        returnValue = F("Schwiederichweg");
        break;
    }
    case 286863:
    {
        returnValue = F("Schwiederstorfer Weg");
        break;
    }
    case 286864:
    {
        returnValue = F("Schwiedessenstr.");
        break;
    }
    case 286865:
    {
        returnValue = F("Schwiegershäuser Str.");
        break;
    }
    case 286866:
    {
        returnValue = F("Schwielowseestr.");
        break;
    }
    case 286867:
    {
        returnValue = F("Schwienaustr.");
        break;
    }
    case 286868:
    {
        returnValue = F("Schwienbrink");
        break;
    }
    case 286869:
    {
        returnValue = F("Schwienbrück");
        break;
    }
    case 286870:
    {
        returnValue = F("Schwiendahl");
        break;
    }
    case 286871:
    {
        returnValue = F("Schwieneckweg");
        break;
    }
    case 286872:
    {
        returnValue = F("Schwienhof");
        break;
    }
    case 286873:
    {
        returnValue = F("Schwienholm");
        break;
    }
    case 286874:
    {
        returnValue = F("Schwienholz");
        break;
    }
    case 286875:
    {
        returnValue = F("Schwienhusener Str.");
        break;
    }
    case 286876:
    {
        returnValue = F("Schwienkamp");
        break;
    }
    case 286877:
    {
        returnValue = F("Schwienkuhlener Weg");
        break;
    }
    case 286878:
    {
        returnValue = F("Schwienkuhler Weg");
        break;
    }
    case 286879:
    {
        returnValue = F("Schwienskoppweg");
        break;
    }
    case 286880:
    {
        returnValue = F("Schwienweidsweg");
        break;
    }
    case 286881:
    {
        returnValue = F("Schwiepinghook");
        break;
    }
    case 286882:
    {
        returnValue = F("Schwieringweg");
        break;
    }
    case 286883:
    {
        returnValue = F("Schwierts Kamp");
        break;
    }
    case 286884:
    {
        returnValue = F("Schwiesauer Dorfplatz");
        break;
    }
    case 286885:
    {
        returnValue = F("Schwiesauer Str.");
        break;
    }
    case 286886:
    {
        returnValue = F("Schwiesower Forst");
        break;
    }
    case 286887:
    {
        returnValue = F("Schwiesower Str.");
        break;
    }
    case 286888:
    {
        returnValue = F("Schwiessel-Ausbau");
        break;
    }
    case 286889:
    {
        returnValue = F("Schwietering");
        break;
    }
    case 286890:
    {
        returnValue = F("Schwieterskamp");
        break;
    }
    case 286891:
    {
        returnValue = F("Schwietersstr.");
        break;
    }
    case 286892:
    {
        returnValue = F("Schwiftinger Str.");
        break;
    }
    case 286893:
    {
        returnValue = F("Schwiggerow");
        break;
    }
    case 286894:
    {
        returnValue = F("Schwiggerower Chaussee");
        break;
    }
    case 286895:
    {
        returnValue = F("Schwillbachstr.");
        break;
    }
    case 286896:
    {
        returnValue = F("Schwimbach");
        break;
    }
    case 286897:
    {
        returnValue = F("Schwimbeckstr.");
        break;
    }
    case 286898:
    {
        returnValue = F("Schwimmbachstr.");
        break;
    }
    case 286899:
    {
        returnValue = F("Schwimmbad");
        break;
    }
    case 286900:
    {
        returnValue = F("Schwimmbad Albbruck");
        break;
    }
    case 286901:
    {
        returnValue = F("Schwimmbad Bokel");
        break;
    }
    case 286902:
    {
        returnValue = F("Schwimmbad Saarwellingen");
        break;
    }
    case 286903:
    {
        returnValue = F("Schwimmbadallee");
        break;
    }
    case 286904:
    {
        returnValue = F("Schwimmbadkreisel");
        break;
    }
    case 286905:
    {
        returnValue = F("Schwimmbadparkplatz");
        break;
    }
    case 286906:
    {
        returnValue = F("Schwimmbadschneise");
        break;
    }
    case 286907:
    {
        returnValue = F("Schwimmbadstr.");
        break;
    }
    case 286908:
    {
        returnValue = F("Schwimmbadweg");
        break;
    }
    case 286909:
    {
        returnValue = F("Schwimmbadweg, Wandelbahn");
        break;
    }
    case 286910:
    {
        returnValue = F("Schwimmbadwiese");
        break;
    }
    case 286911:
    {
        returnValue = F("Schwimmbrücke");
        break;
    }
    case 286912:
    {
        returnValue = F("Schwimmbrücke Mohrlehrpfad");
        break;
    }
    case 286913:
    {
        returnValue = F("Schwimmende Wiese");
        break;
    }
    case 286914:
    {
        returnValue = F("Schwimmschulstr.");
        break;
    }
    case 286915:
    {
        returnValue = F("Schwimmsteg");
        break;
    }
    case 286916:
    {
        returnValue = F("Schwinbachweg");
        break;
    }
    case 286917:
    {
        returnValue = F("Schwindeler");
        break;
    }
    case 286918:
    {
        returnValue = F("Schwinder Str.");
        break;
    }
    case 286919:
    {
        returnValue = F("Schwinder Weg");
        break;
    }
    case 286920:
    {
        returnValue = F("Schwindhalteweg");
        break;
    }
    case 286921:
    {
        returnValue = F("Schwindkirchen");
        break;
    }
    case 286922:
    {
        returnValue = F("Schwindsbachweg");
        break;
    }
    case 286923:
    {
        returnValue = F("Schwindstr.");
        break;
    }
    case 286924:
    {
        returnValue = F("Schwindsuchtsbrücke");
        break;
    }
    case 286925:
    {
        returnValue = F("Schwindweg");
        break;
    }
    case 286926:
    {
        returnValue = F("Schwingbodenpark");
        break;
    }
    case 286927:
    {
        returnValue = F("Schwinge");
        break;
    }
    case 286928:
    {
        returnValue = F("Schwinge-Siedlung");
        break;
    }
    case 286929:
    {
        returnValue = F("Schwingelerweg");
        break;
    }
    case 286930:
    {
        returnValue = F("Schwingen");
        break;
    }
    case 286931:
    {
        returnValue = F("Schwingenburg");
        break;
    }
    case 286932:
    {
        returnValue = F("Schwingener Str.");
        break;
    }
    case 286933:
    {
        returnValue = F("Schwingener Weg");
        break;
    }
    case 286934:
    {
        returnValue = F("Schwinger Ackerweg");
        break;
    }
    case 286935:
    {
        returnValue = F("Schwinger Steindamm");
        break;
    }
    case 286936:
    {
        returnValue = F("Schwingerbaumstr.");
        break;
    }
    case 286937:
    {
        returnValue = F("Schwingereiweg");
        break;
    }
    case 286938:
    {
        returnValue = F("Schwingestr.");
        break;
    }
    case 286939:
    {
        returnValue = F("Schwingsborn");
        break;
    }
    case 286940:
    {
        returnValue = F("Schwingsinger Weg");
        break;
    }
    case 286941:
    {
        returnValue = F("Schwinkendorf");
        break;
    }
    case 286942:
    {
        returnValue = F("Schwinkenrade");
        break;
    }
    case 286943:
    {
        returnValue = F("Schwinzweg");
        break;
    }
    case 286944:
    {
        returnValue = F("Schwippestr.");
        break;
    }
    case 286945:
    {
        returnValue = F("Schwippeweg");
        break;
    }
    case 286946:
    {
        returnValue = F("Schwirzpohler Str.");
        break;
    }
    case 286947:
    {
        returnValue = F("Schwitscher Str.");
        break;
    }
    case 286948:
    {
        returnValue = F("Schwittenesstr.");
        break;
    }
    case 286949:
    {
        returnValue = F("Schwittersdorfer Str.");
        break;
    }
    case 286950:
    {
        returnValue = F("Schwitterslohne");
        break;
    }
    case 286951:
    {
        returnValue = F("Schwittmerstr.");
        break;
    }
    case 286952:
    {
        returnValue = F("Schwittschauer Weg");
        break;
    }
    case 286953:
    {
        returnValue = F("Schwitzbergstr.");
        break;
    }
    case 286954:
    {
        returnValue = F("Schwitzbergweg");
        break;
    }
    case 286955:
    {
        returnValue = F("Schwitzerstr.");
        break;
    }
    case 286956:
    {
        returnValue = F("Schwobfelder Str.");
        break;
    }
    case 286957:
    {
        returnValue = F("Schwobtalweg");
        break;
    }
    case 286958:
    {
        returnValue = F("Schwochau");
        break;
    }
    case 286959:
    {
        returnValue = F("Schwochel");
        break;
    }
    case 286960:
    {
        returnValue = F("Schwohenend");
        break;
    }
    case 286961:
    {
        returnValue = F("Schwoitscher Str.");
        break;
    }
    case 286962:
    {
        returnValue = F("Schwojerstr.");
        break;
    }
    case 286963:
    {
        returnValue = F("Schwollmannsweg");
        break;
    }
    case 286964:
    {
        returnValue = F("Schwommbergstr.");
        break;
    }
    case 286965:
    {
        returnValue = F("Schwommengasse");
        break;
    }
    case 286966:
    {
        returnValue = F("Schwonauer Weg");
        break;
    }
    case 286967:
    {
        returnValue = F("Schwonhöh");
        break;
    }
    case 286968:
    {
        returnValue = F("Schwoog");
        break;
    }
    case 286969:
    {
        returnValue = F("Schwooger Weg");
        break;
    }
    case 286970:
    {
        returnValue = F("Schwoogweg");
        break;
    }
    case 286971:
    {
        returnValue = F("Schwoonstr.");
        break;
    }
    case 286972:
    {
        returnValue = F("Schwosdorfer Feldweg");
        break;
    }
    case 286973:
    {
        returnValue = F("Schwosdorfer Str.");
        break;
    }
    case 286974:
    {
        returnValue = F("Schwygrabenweg");
        break;
    }
    case 286975:
    {
        returnValue = F("Schwyz");
        break;
    }
    case 286976:
    {
        returnValue = F("Schwyzer Str.");
        break;
    }
    case 286977:
    {
        returnValue = F("Schwyzerweg");
        break;
    }
    case 286978:
    {
        returnValue = F("Schwäbelstr.");
        break;
    }
    case 286979:
    {
        returnValue = F("Schwäbisch-Hall-Str.");
        break;
    }
    case 286980:
    {
        returnValue = F("Schwäbische Alb");
        break;
    }
    case 286981:
    {
        returnValue = F("Schwäbische Albstr.");
        break;
    }
    case 286982:
    {
        returnValue = F("Schwäbische Str.");
        break;
    }
    case 286983:
    {
        returnValue = F("Schwäblishauser Str.");
        break;
    }
    case 286984:
    {
        returnValue = F("Schwägerlstr.");
        break;
    }
    case 286985:
    {
        returnValue = F("Schwälbchenweg");
        break;
    }
    case 286986:
    {
        returnValue = F("Schwälingsstartenweg");
        break;
    }
    case 286987:
    {
        returnValue = F("Schwälkenberg");
        break;
    }
    case 286988:
    {
        returnValue = F("Schwälmer Weg");
        break;
    }
    case 286989:
    {
        returnValue = F("Schwänchen");
        break;
    }
    case 286990:
    {
        returnValue = F("Schwändlesteig");
        break;
    }
    case 286991:
    {
        returnValue = F("Schwänheit");
        break;
    }
    case 286992:
    {
        returnValue = F("Schwärmerhof");
        break;
    }
    case 286993:
    {
        returnValue = F("Schwärmerweg");
        break;
    }
    case 286994:
    {
        returnValue = F("Schwärz");
        break;
    }
    case 286995:
    {
        returnValue = F("Schwärzacker Weg");
        break;
    }
    case 286996:
    {
        returnValue = F("Schwärzbühl");
        break;
    }
    case 286997:
    {
        returnValue = F("Schwärzdorf");
        break;
    }
    case 286998:
    {
        returnValue = F("Schwärze");
        break;
    }
    case 286999:
    {
        returnValue = F("Schwärzelstr.");
        break;
    }
    case 287000:
    {
        returnValue = F("Schwärzenbach");
        break;
    }
    case 287001:
    {
        returnValue = F("Schwärzenbachstr.");
        break;
    }
    case 287002:
    {
        returnValue = F("Schwärzenbergstr.");
        break;
    }
    case 287003:
    {
        returnValue = F("Schwärzengarten");
        break;
    }
    case 287004:
    {
        returnValue = F("Schwärzenstr.");
        break;
    }
    case 287005:
    {
        returnValue = F("Schwärzental");
        break;
    }
    case 287006:
    {
        returnValue = F("Schwärzentalweg");
        break;
    }
    case 287007:
    {
        returnValue = F("Schwärzenweg");
        break;
    }
    case 287008:
    {
        returnValue = F("Schwärzer Weg");
        break;
    }
    case 287009:
    {
        returnValue = F("Schwärzermühlweg");
        break;
    }
    case 287010:
    {
        returnValue = F("Schwärzerweg");
        break;
    }
    case 287011:
    {
        returnValue = F("Schwärzestr.");
        break;
    }
    case 287012:
    {
        returnValue = F("Schwärzeweg");
        break;
    }
    case 287013:
    {
        returnValue = F("Schwärzlegraben");
        break;
    }
    case 287014:
    {
        returnValue = F("Schwärzlenstr.");
        break;
    }
    case 287015:
    {
        returnValue = F("Schwärzlingstr.");
        break;
    }
    case 287016:
    {
        returnValue = F("Schwärzlocher Weg");
        break;
    }
    case 287017:
    {
        returnValue = F("Schwärzsteige");
        break;
    }
    case 287018:
    {
        returnValue = F("Schwärzstr.");
        break;
    }
    case 287019:
    {
        returnValue = F("Schwärzweg");
        break;
    }
    case 287020:
    {
        returnValue = F("Schwärzwiesenstr.");
        break;
    }
    case 287021:
    {
        returnValue = F("Schwätzgässle");
        break;
    }
    case 287022:
    {
        returnValue = F("Schwäwelsweg");
        break;
    }
    case 287023:
    {
        returnValue = F("Schwöbber");
        break;
    }
    case 287024:
    {
        returnValue = F("Schwöbgasse");
        break;
    }
    case 287025:
    {
        returnValue = F("Schwöditzer Weg");
        break;
    }
    case 287026:
    {
        returnValue = F("Schwöen");
        break;
    }
    case 287027:
    {
        returnValue = F("Schwöllbronner Str.");
        break;
    }
    case 287028:
    {
        returnValue = F("Schwöllbronner Weg");
        break;
    }
    case 287029:
    {
        returnValue = F("Schwönkamp");
        break;
    }
    case 287030:
    {
        returnValue = F("Schwörerhofweg");
        break;
    }
    case 287031:
    {
        returnValue = F("Schwörgasse");
        break;
    }
    case 287032:
    {
        returnValue = F("Schwörstr.");
        break;
    }
    case 287033:
    {
        returnValue = F("Schwörzweg");
        break;
    }
    case 287034:
    {
        returnValue = F("Schwüblingser Str.");
        break;
    }
    case 287035:
    {
        returnValue = F("Schwüblingser Weg");
        break;
    }
    case 287036:
    {
        returnValue = F("Schwülmeaue");
        break;
    }
    case 287037:
    {
        returnValue = F("Schwülmestr.");
        break;
    }
    case 287038:
    {
        returnValue = F("Schwülper Weg");
        break;
    }
    case 287039:
    {
        returnValue = F("Schwürbitzer Str.");
        break;
    }
    case 287040:
    {
        returnValue = F("Schwürzer Str.");
        break;
    }
    case 287041:
    {
        returnValue = F("Schynbergweg");
        break;
    }
    case 287042:
    {
        returnValue = F("Schyrenplatz");
        break;
    }
    case 287043:
    {
        returnValue = F("Schyrenstr.");
        break;
    }
    case 287044:
    {
        returnValue = F("Schyrenweg");
        break;
    }
    case 287045:
    {
        returnValue = F("Schäbbelesweg");
        break;
    }
    case 287046:
    {
        returnValue = F("Schäbelstr.");
        break;
    }
    case 287047:
    {
        returnValue = F("Schäberlesgässle");
        break;
    }
    case 287048:
    {
        returnValue = F("Schäbkerweg");
        break;
    }
    case 287049:
    {
        returnValue = F("Schächenstr.");
        break;
    }
    case 287050:
    {
        returnValue = F("Schächer Weg");
        break;
    }
    case 287051:
    {
        returnValue = F("Schächergasse");
        break;
    }
    case 287052:
    {
        returnValue = F("Schächerweg");
        break;
    }
    case 287053:
    {
        returnValue = F("Schächtelburg");
        break;
    }
    case 287054:
    {
        returnValue = F("Schächtelweg");
        break;
    }
    case 287055:
    {
        returnValue = F("Schächtlstr.");
        break;
    }
    case 287056:
    {
        returnValue = F("Schächtrig Hauptweg");
        break;
    }
    case 287057:
    {
        returnValue = F("Schädelbergweg");
        break;
    }
    case 287058:
    {
        returnValue = F("Schäderhofstr.");
        break;
    }
    case 287059:
    {
        returnValue = F("Schäderweg");
        break;
    }
    case 287060:
    {
        returnValue = F("Schädestr.");
        break;
    }
    case 287061:
    {
        returnValue = F("Schädlbergstr.");
        break;
    }
    case 287062:
    {
        returnValue = F("Schädlerstr.");
        break;
    }
    case 287063:
    {
        returnValue = F("Schädwien Str.");
        break;
    }
    case 287064:
    {
        returnValue = F("Schäfachstr.");
        break;
    }
    case 287065:
    {
        returnValue = F("Schäfbachweg");
        break;
    }
    case 287066:
    {
        returnValue = F("Schäfchenwiese");
        break;
    }
    case 287067:
    {
        returnValue = F("Schäfenloch");
        break;
    }
    case 287068:
    {
        returnValue = F("Schäfer Patt");
        break;
    }
    case 287069:
    {
        returnValue = F("Schäfer-Ast-Str.");
        break;
    }
    case 287070:
    {
        returnValue = F("Schäfer-Ast-Weg");
        break;
    }
    case 287071:
    {
        returnValue = F("Schäfer-Gehrig-Weg");
        break;
    }
    case 287072:
    {
        returnValue = F("Schäfer-Heide");
        break;
    }
    case 287073:
    {
        returnValue = F("Schäfer-Struck-Weg");
        break;
    }
    case 287074:
    {
        returnValue = F("Schäferacker");
        break;
    }
    case 287075:
    {
        returnValue = F("Schäferbauernhofweg");
        break;
    }
    case 287076:
    {
        returnValue = F("Schäferberg");
        break;
    }
    case 287077:
    {
        returnValue = F("Schäferbergstr.");
        break;
    }
    case 287078:
    {
        returnValue = F("Schäferbergweg");
        break;
    }
    case 287079:
    {
        returnValue = F("Schäferborn");
        break;
    }
    case 287080:
    {
        returnValue = F("Schäferbornweg");
        break;
    }
    case 287081:
    {
        returnValue = F("Schäferbreite");
        break;
    }
    case 287082:
    {
        returnValue = F("Schäferbrink");
        break;
    }
    case 287083:
    {
        returnValue = F("Schäferbruchstr.");
        break;
    }
    case 287084:
    {
        returnValue = F("Schäferbrunnen");
        break;
    }
    case 287085:
    {
        returnValue = F("Schäferbrücke");
        break;
    }
    case 287086:
    {
        returnValue = F("Schäferburg");
        break;
    }
    case 287087:
    {
        returnValue = F("Schäferdamm");
        break;
    }
    case 287088:
    {
        returnValue = F("Schäferdreesch");
        break;
    }
    case 287089:
    {
        returnValue = F("Schäferdreisch");
        break;
    }
    case 287090:
    {
        returnValue = F("Schäferdrift");
        break;
    }
    case 287091:
    {
        returnValue = F("Schäfereck");
        break;
    }
    case 287092:
    {
        returnValue = F("Schäferei");
        break;
    }
    case 287093:
    {
        returnValue = F("Schäfereiacker");
        break;
    }
    case 287094:
    {
        returnValue = F("Schäfereiberg");
        break;
    }
    case 287095:
    {
        returnValue = F("Schäfereigasse");
        break;
    }
    case 287096:
    {
        returnValue = F("Schäfereigut");
        break;
    }
    case 287097:
    {
        returnValue = F("Schäfereihof");
        break;
    }
    case 287098:
    {
        returnValue = F("Schäfereiplatz");
        break;
    }
    case 287099:
    {
        returnValue = F("Schäfereistr.");
        break;
    }
    case 287100:
    {
        returnValue = F("Schäfereiweg");
        break;
    }
    case 287101:
    {
        returnValue = F("Schäfergang");
        break;
    }
    case 287102:
    {
        returnValue = F("Schäfergarten");
        break;
    }
    case 287103:
    {
        returnValue = F("Schäfergasse");
        break;
    }
    case 287104:
    {
        returnValue = F("Schäfergraben");
        break;
    }
    case 287105:
    {
        returnValue = F("Schäfergrube");
        break;
    }
    case 287106:
    {
        returnValue = F("Schäfergrund");
        break;
    }
    case 287107:
    {
        returnValue = F("Schäfergutstr.");
        break;
    }
    case 287108:
    {
        returnValue = F("Schäfergässchen");
        break;
    }
    case 287109:
    {
        returnValue = F("Schäfergässlein");
        break;
    }
    case 287110:
    {
        returnValue = F("Schäfergäßle");
        break;
    }
    case 287111:
    {
        returnValue = F("Schäfergäßlein");
        break;
    }
    case 287112:
    {
        returnValue = F("Schäferhagen");
        break;
    }
    case 287113:
    {
        returnValue = F("Schäferhalde");
        break;
    }
    case 287114:
    {
        returnValue = F("Schäferhauser Str.");
        break;
    }
    case 287115:
    {
        returnValue = F("Schäferheide");
        break;
    }
    case 287116:
    {
        returnValue = F("Schäferhof");
        break;
    }
    case 287117:
    {
        returnValue = F("Schäferhof Park");
        break;
    }
    case 287118:
    {
        returnValue = F("Schäferhofstr.");
        break;
    }
    case 287119:
    {
        returnValue = F("Schäferhofweg");
        break;
    }
    case 287120:
    {
        returnValue = F("Schäferholz");
        break;
    }
    case 287121:
    {
        returnValue = F("Schäferholzweg");
        break;
    }
    case 287122:
    {
        returnValue = F("Schäferhorst");
        break;
    }
    case 287123:
    {
        returnValue = F("Schäferhundeverein Iggelheim");
        break;
    }
    case 287124:
    {
        returnValue = F("Schäferhügel");
        break;
    }
    case 287125:
    {
        returnValue = F("Schäferhütte");
        break;
    }
    case 287126:
    {
        returnValue = F("Schäferkamp");
        break;
    }
    case 287127:
    {
        returnValue = F("Schäferkamp-Kreisel");
        break;
    }
    case 287128:
    {
        returnValue = F("Schäferkampstr.");
        break;
    }
    case 287129:
    {
        returnValue = F("Schäferkampsweg");
        break;
    }
    case 287130:
    {
        returnValue = F("Schäferkatenweg");
        break;
    }
    case 287131:
    {
        returnValue = F("Schäferkoppel");
        break;
    }
    case 287132:
    {
        returnValue = F("Schäferkoppeln");
        break;
    }
    case 287133:
    {
        returnValue = F("Schäferkreisel");
        break;
    }
    case 287134:
    {
        returnValue = F("Schäferkuhlenweg");
        break;
    }
    case 287135:
    {
        returnValue = F("Schäferkurtswiese");
        break;
    }
    case 287136:
    {
        returnValue = F("Schäferkämper Weg");
        break;
    }
    case 287137:
    {
        returnValue = F("Schäferlinde");
        break;
    }
    case 287138:
    {
        returnValue = F("Schäfermeierhof");
        break;
    }
    case 287139:
    {
        returnValue = F("Schäferpfad");
        break;
    }
    case 287140:
    {
        returnValue = F("Schäferplatz");
        break;
    }
    case 287141:
    {
        returnValue = F("Schäferredder");
        break;
    }
    case 287142:
    {
        returnValue = F("Schäferring");
        break;
    }
    case 287143:
    {
        returnValue = F("Schäferrusch");
        break;
    }
    case 287144:
    {
        returnValue = F("Schäfers Garten");
        break;
    }
    case 287145:
    {
        returnValue = F("Schäfers Grund");
        break;
    }
    case 287146:
    {
        returnValue = F("Schäfers Gärten");
        break;
    }
    case 287147:
    {
        returnValue = F("Schäfers Kamp");
        break;
    }
    case 287148:
    {
        returnValue = F("Schäfers Resch");
        break;
    }
    case 287149:
    {
        returnValue = F("Schäfersberg");
        break;
    }
    case 287150:
    {
        returnValue = F("Schäfersbuck");
        break;
    }
    case 287151:
    {
        returnValue = F("Schäfersbuckelweg");
        break;
    }
    case 287152:
    {
        returnValue = F("Schäferschneise");
        break;
    }
    case 287153:
    {
        returnValue = F("Schäfersdrift");
        break;
    }
    case 287154:
    {
        returnValue = F("Schäfersgarten");
        break;
    }
    case 287155:
    {
        returnValue = F("Schäfersgasse");
        break;
    }
    case 287156:
    {
        returnValue = F("Schäfersgraben");
        break;
    }
    case 287157:
    {
        returnValue = F("Schäfersgrundweg");
        break;
    }
    case 287158:
    {
        returnValue = F("Schäfersheide");
        break;
    }
    case 287159:
    {
        returnValue = F("Schäfershäuschen");
        break;
    }
    case 287160:
    {
        returnValue = F("Schäfershütte");
        break;
    }
    case 287161:
    {
        returnValue = F("Schäfersiedlung");
        break;
    }
    case 287162:
    {
        returnValue = F("Schäferskamp");
        break;
    }
    case 287163:
    {
        returnValue = F("Schäferskoppe");
        break;
    }
    case 287164:
    {
        returnValue = F("Schäfersort");
        break;
    }
    case 287165:
    {
        returnValue = F("Schäferspesch");
        break;
    }
    case 287166:
    {
        returnValue = F("Schäferspforte");
        break;
    }
    case 287167:
    {
        returnValue = F("Schäfersruh");
        break;
    }
    case 287168:
    {
        returnValue = F("Schäferstaffel");
        break;
    }
    case 287169:
    {
        returnValue = F("Schäfersteg");
        break;
    }
    case 287170:
    {
        returnValue = F("Schäferstegel");
        break;
    }
    case 287171:
    {
        returnValue = F("Schäfersteig");
        break;
    }
    case 287172:
    {
        returnValue = F("Schäfersteige");
        break;
    }
    case 287173:
    {
        returnValue = F("Schäferstein");
        break;
    }
    case 287174:
    {
        returnValue = F("Schäferstieg");
        break;
    }
    case 287175:
    {
        returnValue = F("Schäferstr.");
        break;
    }
    case 287176:
    {
        returnValue = F("Schäferstrift");
        break;
    }
    case 287177:
    {
        returnValue = F("Schäferstwiete");
        break;
    }
    case 287178:
    {
        returnValue = F("Schäferswanne");
        break;
    }
    case 287179:
    {
        returnValue = F("Schäfersweg");
        break;
    }
    case 287180:
    {
        returnValue = F("Schäfertal");
        break;
    }
    case 287181:
    {
        returnValue = F("Schäferteich");
        break;
    }
    case 287182:
    {
        returnValue = F("Schäfertor");
        break;
    }
    case 287183:
    {
        returnValue = F("Schäfertrift");
        break;
    }
    case 287184:
    {
        returnValue = F("Schäferwall");
        break;
    }
    case 287185:
    {
        returnValue = F("Schäferwasen");
        break;
    }
    case 287186:
    {
        returnValue = F("Schäferwasenweg");
        break;
    }
    case 287187:
    {
        returnValue = F("Schäferweg");
        break;
    }
    case 287188:
    {
        returnValue = F("Schäferweide");
        break;
    }
    case 287189:
    {
        returnValue = F("Schäferwies");
        break;
    }
    case 287190:
    {
        returnValue = F("Schäferwiese");
        break;
    }
    case 287191:
    {
        returnValue = F("Schäferwiesen");
        break;
    }
    case 287192:
    {
        returnValue = F("Schäferwiesenschneise");
        break;
    }
    case 287193:
    {
        returnValue = F("Schäferwiesenweg");
        break;
    }
    case 287194:
    {
        returnValue = F("Schäferwinkel");
        break;
    }
    case 287195:
    {
        returnValue = F("Schäferworth");
        break;
    }
    case 287196:
    {
        returnValue = F("Schäferwäldchen");
        break;
    }
    case 287197:
    {
        returnValue = F("Schäferäcker");
        break;
    }
    case 287198:
    {
        returnValue = F("Schäffbräustr.");
        break;
    }
    case 287199:
    {
        returnValue = F("Schäffelshütte");
        break;
    }
    case 287200:
    {
        returnValue = F("Schäffelstr.");
        break;
    }
    case 287201:
    {
        returnValue = F("Schäfferbrink");
        break;
    }
    case 287202:
    {
        returnValue = F("Schäffereigasse");
        break;
    }
    case 287203:
    {
        returnValue = F("Schäffersheimer Str.");
        break;
    }
    case 287204:
    {
        returnValue = F("Schäfferstr.");
        break;
    }
    case 287205:
    {
        returnValue = F("Schäffersweyer");
        break;
    }
    case 287206:
    {
        returnValue = F("Schäffigenweg");
        break;
    }
    case 287207:
    {
        returnValue = F("Schäfflerbachstr.");
        break;
    }
    case 287208:
    {
        returnValue = F("Schäfflerberg");
        break;
    }
    case 287209:
    {
        returnValue = F("Schäfflergasse");
        break;
    }
    case 287210:
    {
        returnValue = F("Schäfflerring");
        break;
    }
    case 287211:
    {
        returnValue = F("Schäfflerstr.");
        break;
    }
    case 287212:
    {
        returnValue = F("Schäfflerweg");
        break;
    }
    case 287213:
    {
        returnValue = F("Schäfflesmarkt");
        break;
    }
    case 287214:
    {
        returnValue = F("Schäfflestr.");
        break;
    }
    case 287215:
    {
        returnValue = F("Schäffleweg");
        break;
    }
    case 287216:
    {
        returnValue = F("Schäffnersbruchschneise");
        break;
    }
    case 287217:
    {
        returnValue = F("Schäffnerstr.");
        break;
    }
    case 287218:
    {
        returnValue = F("Schäfgasse");
        break;
    }
    case 287219:
    {
        returnValue = F("Schäfigweg");
        break;
    }
    case 287220:
    {
        returnValue = F("Schäflerweg");
        break;
    }
    case 287221:
    {
        returnValue = F("Schäfstoßweg");
        break;
    }
    case 287222:
    {
        returnValue = F("Schäfstr.");
        break;
    }
    case 287223:
    {
        returnValue = F("Schäftersheimer Pfad");
        break;
    }
    case 287224:
    {
        returnValue = F("Schäftersheimer Str.");
        break;
    }
    case 287225:
    {
        returnValue = F("Schäftlarner Weg");
        break;
    }
    case 287226:
    {
        returnValue = F("Schäftlarnstr.");
        break;
    }
    case 287227:
    {
        returnValue = F("Schäfweg");
        break;
    }
    case 287228:
    {
        returnValue = F("Schäfwiesenweg");
        break;
    }
    case 287229:
    {
        returnValue = F("Schäkeler Str.");
        break;
    }
    case 287230:
    {
        returnValue = F("Schäkeln");
        break;
    }
    case 287231:
    {
        returnValue = F("Schälbäumer Str.");
        break;
    }
    case 287232:
    {
        returnValue = F("Schäle-Heide-Weg");
        break;
    }
    case 287233:
    {
        returnValue = F("Schälenweg");
        break;
    }
    case 287234:
    {
        returnValue = F("Schäleweg");
        break;
    }
    case 287235:
    {
        returnValue = F("Schälgärten");
        break;
    }
    case 287236:
    {
        returnValue = F("Schälk");
        break;
    }
    case 287237:
    {
        returnValue = F("Schälkstr.");
        break;
    }
    case 287238:
    {
        returnValue = F("Schäller");
        break;
    }
    case 287239:
    {
        returnValue = F("Schälrainstr.");
        break;
    }
    case 287240:
    {
        returnValue = F("Schälschleifweg");
        break;
    }
    case 287241:
    {
        returnValue = F("Schälwaldsträßle");
        break;
    }
    case 287242:
    {
        returnValue = F("Schälzigweg");
        break;
    }
    case 287243:
    {
        returnValue = F("Schänitzer Str.");
        break;
    }
    case 287244:
    {
        returnValue = F("Schänkberg");
        break;
    }
    case 287245:
    {
        returnValue = F("Schänkbreitenweg");
        break;
    }
    case 287246:
    {
        returnValue = F("Schänkenberg");
        break;
    }
    case 287247:
    {
        returnValue = F("Schänkenbergstr.");
        break;
    }
    case 287248:
    {
        returnValue = F("Schänkengasse");
        break;
    }
    case 287249:
    {
        returnValue = F("Schänkenplatz");
        break;
    }
    case 287250:
    {
        returnValue = F("Schänkenweg");
        break;
    }
    case 287251:
    {
        returnValue = F("Schänkeplatz");
        break;
    }
    case 287252:
    {
        returnValue = F("Schänkestr.");
        break;
    }
    case 287253:
    {
        returnValue = F("Schänkgasse");
        break;
    }
    case 287254:
    {
        returnValue = F("Schänkplatz");
        break;
    }
    case 287255:
    {
        returnValue = F("Schänksplatz");
        break;
    }
    case 287256:
    {
        returnValue = F("Schänweg");
        break;
    }
    case 287257:
    {
        returnValue = F("Schänzchen");
        break;
    }
    case 287258:
    {
        returnValue = F("Schänzeldamm");
        break;
    }
    case 287259:
    {
        returnValue = F("Schänzelstr.");
        break;
    }
    case 287260:
    {
        returnValue = F("Schänzelweg");
        break;
    }
    case 287261:
    {
        returnValue = F("Schänzle");
        break;
    }
    case 287262:
    {
        returnValue = F("Schänzle-Sportplatz");
        break;
    }
    case 287263:
    {
        returnValue = F("Schänzlebergstr.");
        break;
    }
    case 287264:
    {
        returnValue = F("Schänzlebrücke");
        break;
    }
    case 287265:
    {
        returnValue = F("Schänzlenöhenweg");
        break;
    }
    case 287266:
    {
        returnValue = F("Schänzlestr.");
        break;
    }
    case 287267:
    {
        returnValue = F("Schänzlesweg");
        break;
    }
    case 287268:
    {
        returnValue = F("Schänzleweg");
        break;
    }
    case 287269:
    {
        returnValue = F("Schäpe");
        break;
    }
    case 287270:
    {
        returnValue = F("Schäper Str.");
        break;
    }
    case 287271:
    {
        returnValue = F("Schäperdrift");
        break;
    }
    case 287272:
    {
        returnValue = F("Schäpers Kamp");
        break;
    }
    case 287273:
    {
        returnValue = F("Schäpersbusch");
        break;
    }
    case 287274:
    {
        returnValue = F("Schäpersgraben");
        break;
    }
    case 287275:
    {
        returnValue = F("Schäpershof");
        break;
    }
    case 287276:
    {
        returnValue = F("Schäperspöll");
        break;
    }
    case 287277:
    {
        returnValue = F("Schäperstieg");
        break;
    }
    case 287278:
    {
        returnValue = F("Schäpersweg");
        break;
    }
    case 287279:
    {
        returnValue = F("Schäperweg");
        break;
    }
    case 287280:
    {
        returnValue = F("Schäperwiese");
        break;
    }
    case 287281:
    {
        returnValue = F("Schäperwisch");
        break;
    }
    case 287282:
    {
        returnValue = F("Schäphorst");
        break;
    }
    case 287283:
    {
        returnValue = F("Schäpingener Weg");
        break;
    }
    case 287284:
    {
        returnValue = F("Schäppeleweg");
        break;
    }
    case 287285:
    {
        returnValue = F("Schäpsweg");
        break;
    }
    case 287286:
    {
        returnValue = F("Schärdinger Str.");
        break;
    }
    case 287287:
    {
        returnValue = F("Schärenhof");
        break;
    }
    case 287288:
    {
        returnValue = F("Schärenweg");
        break;
    }
    case 287289:
    {
        returnValue = F("Schärers Au");
        break;
    }
    case 287290:
    {
        returnValue = F("Schärerstr.");
        break;
    }
    case 287291:
    {
        returnValue = F("Schärerweg");
        break;
    }
    case 287292:
    {
        returnValue = F("Schärfener Weg");
        break;
    }
    case 287293:
    {
        returnValue = F("Schärfengäßchen");
        break;
    }
    case 287294:
    {
        returnValue = F("Schärfgasse");
        break;
    }
    case 287295:
    {
        returnValue = F("Schärflmühlweg");
        break;
    }
    case 287296:
    {
        returnValue = F("Schärmättle");
        break;
    }
    case 287297:
    {
        returnValue = F("Schärtenkopfweg");
        break;
    }
    case 287298:
    {
        returnValue = F("Schärtlstr.");
        break;
    }
    case 287299:
    {
        returnValue = F("Schätkeweg");
        break;
    }
    case 287300:
    {
        returnValue = F("Schättekopf");
        break;
    }
    case 287301:
    {
        returnValue = F("Schätzendorfer Aueweg");
        break;
    }
    case 287302:
    {
        returnValue = F("Schätzendorfer Str.");
        break;
    }
    case 287303:
    {
        returnValue = F("Schätzengraben");
        break;
    }
    case 287304:
    {
        returnValue = F("Schätzleingasse");
        break;
    }
    case 287305:
    {
        returnValue = F("Schätzlerstr.");
        break;
    }
    case 287306:
    {
        returnValue = F("Schätzlesruh");
        break;
    }
    case 287307:
    {
        returnValue = F("Schätzleweg");
        break;
    }
    case 287308:
    {
        returnValue = F("Schätzmühle");
        break;
    }
    case 287309:
    {
        returnValue = F("Schäuberstr.");
        break;
    }
    case 287310:
    {
        returnValue = F("Schäubleweg");
        break;
    }
    case 287311:
    {
        returnValue = F("Schäufeleinstr.");
        break;
    }
    case 287312:
    {
        returnValue = F("Schäufeleweg");
        break;
    }
    case 287313:
    {
        returnValue = F("Schäufelinstr.");
        break;
    }
    case 287314:
    {
        returnValue = F("Schäufelwiesweg");
        break;
    }
    case 287315:
    {
        returnValue = F("Schäufeläcker");
        break;
    }
    case 287316:
    {
        returnValue = F("Schäwenkamp");
        break;
    }
    case 287317:
    {
        returnValue = F("Schäßbach");
        break;
    }
    case 287318:
    {
        returnValue = F("Schäßburger Gasse");
        break;
    }
    case 287319:
    {
        returnValue = F("Schäßburger Str.");
        break;
    }
    case 287320:
    {
        returnValue = F("Schöbendorfer Str.");
        break;
    }
    case 287321:
    {
        returnValue = F("Schöberweg");
        break;
    }
    case 287322:
    {
        returnValue = F("Schöblstr.");
        break;
    }
    case 287323:
    {
        returnValue = F("Schöckengasse");
        break;
    }
    case 287324:
    {
        returnValue = F("Schöckinger Str.");
        break;
    }
    case 287325:
    {
        returnValue = F("Schöckstr.");
        break;
    }
    case 287326:
    {
        returnValue = F("Schödderweg");
        break;
    }
    case 287327:
    {
        returnValue = F("Schödelbachweg");
        break;
    }
    case 287328:
    {
        returnValue = F("Schödelshöhe");
        break;
    }
    case 287329:
    {
        returnValue = F("Schödlas");
        break;
    }
    case 287330:
    {
        returnValue = F("Schödling");
        break;
    }
    case 287331:
    {
        returnValue = F("Schöfbach");
        break;
    }
    case 287332:
    {
        returnValue = F("Schöferlestr.");
        break;
    }
    case 287333:
    {
        returnValue = F("Schöffauer Str.");
        break;
    }
    case 287334:
    {
        returnValue = F("Schöffbergweg");
        break;
    }
    case 287335:
    {
        returnValue = F("Schöffeldinger Str.");
        break;
    }
    case 287336:
    {
        returnValue = F("Schöffelhuberstr.");
        break;
    }
    case 287337:
    {
        returnValue = F("Schöffengasse");
        break;
    }
    case 287338:
    {
        returnValue = F("Schöffengrund");
        break;
    }
    case 287339:
    {
        returnValue = F("Schöffenhausstr.");
        break;
    }
    case 287340:
    {
        returnValue = F("Schöffenhausweg");
        break;
    }
    case 287341:
    {
        returnValue = F("Schöffenstr.");
        break;
    }
    case 287342:
    {
        returnValue = F("Schöffenstühl");
        break;
    }
    case 287343:
    {
        returnValue = F("Schöffenweg");
        break;
    }
    case 287344:
    {
        returnValue = F("Schöfferhofstr.");
        break;
    }
    case 287345:
    {
        returnValue = F("Schöfferstr.");
        break;
    }
    case 287346:
    {
        returnValue = F("Schöffhöfen");
        break;
    }
    case 287347:
    {
        returnValue = F("Schöffmannplatz");
        break;
    }
    case 287348:
    {
        returnValue = F("Schöffstalstr.");
        break;
    }
    case 287349:
    {
        returnValue = F("Schöffstr.");
        break;
    }
    case 287350:
    {
        returnValue = F("Schöftenhub");
        break;
    }
    case 287351:
    {
        returnValue = F("Schögenstr.");
        break;
    }
    case 287352:
    {
        returnValue = F("Schölderlenweg");
        break;
    }
    case 287353:
    {
        returnValue = F("Schölerswiese");
        break;
    }
    case 287354:
    {
        returnValue = F("Schölfstr.");
        break;
    }
    case 287355:
    {
        returnValue = F("Schölischer Hochfeld");
        break;
    }
    case 287356:
    {
        returnValue = F("Schölischer Str.");
        break;
    }
    case 287357:
    {
        returnValue = F("Schölke");
        break;
    }
    case 287358:
    {
        returnValue = F("Schölkopfweg");
        break;
    }
    case 287359:
    {
        returnValue = F("Schöllbach");
        break;
    }
    case 287360:
    {
        returnValue = F("Schöllbachweg");
        break;
    }
    case 287361:
    {
        returnValue = F("Schöllberg");
        break;
    }
    case 287362:
    {
        returnValue = F("Schöllbornstr.");
        break;
    }
    case 287363:
    {
        returnValue = F("Schöllbronner Str.");
        break;
    }
    case 287364:
    {
        returnValue = F("Schöllenbacher Weg");
        break;
    }
    case 287365:
    {
        returnValue = F("Schöllentrup");
        break;
    }
    case 287366:
    {
        returnValue = F("Schöllersfeld");
        break;
    }
    case 287367:
    {
        returnValue = F("Schöllersgarten");
        break;
    }
    case 287368:
    {
        returnValue = F("Schöllersgrund");
        break;
    }
    case 287369:
    {
        returnValue = F("Schöllerstr.");
        break;
    }
    case 287370:
    {
        returnValue = F("Schöllersweg");
        break;
    }
    case 287371:
    {
        returnValue = F("Schöllhammerweg");
        break;
    }
    case 287372:
    {
        returnValue = F("Schöllhauweg");
        break;
    }
    case 287373:
    {
        returnValue = F("Schölling");
        break;
    }
    case 287374:
    {
        returnValue = F("Schöllingerweg");
        break;
    }
    case 287375:
    {
        returnValue = F("Schöllingstr.");
        break;
    }
    case 287376:
    {
        returnValue = F("Schöllkopfstr.");
        break;
    }
    case 287377:
    {
        returnValue = F("Schöllkopfweg");
        break;
    }
    case 287378:
    {
        returnValue = F("Schöllkrippener Str.");
        break;
    }
    case 287379:
    {
        returnValue = F("Schöllmattweg");
        break;
    }
    case 287380:
    {
        returnValue = F("Schöllsweg");
        break;
    }
    case 287381:
    {
        returnValue = F("Schölmendobel");
        break;
    }
    case 287382:
    {
        returnValue = F("Schöltjenshof");
        break;
    }
    case 287383:
    {
        returnValue = F("Schömastr.");
        break;
    }
    case 287384:
    {
        returnValue = F("Schömbach");
        break;
    }
    case 287385:
    {
        returnValue = F("Schömberg");
        break;
    }
    case 287386:
    {
        returnValue = F("Schömberger Str.");
        break;
    }
    case 287387:
    {
        returnValue = F("Schömberger Weg");
        break;
    }
    case 287388:
    {
        returnValue = F("Schömbergstr.");
        break;
    }
    case 287389:
    {
        returnValue = F("Schömbergweg");
        break;
    }
    case 287390:
    {
        returnValue = F("Schömbsstr.");
        break;
    }
    case 287391:
    {
        returnValue = F("Schömbühl");
        break;
    }
    case 287392:
    {
        returnValue = F("Schömelstr.");
        break;
    }
    case 287393:
    {
        returnValue = F("Schömeringer Str.");
        break;
    }
    case 287394:
    {
        returnValue = F("Schömersdorf");
        break;
    }
    case 287395:
    {
        returnValue = F("Schömerweg");
        break;
    }
    case 287396:
    {
        returnValue = F("Schömkensweg");
        break;
    }
    case 287397:
    {
        returnValue = F("Schömsteiner Str.");
        break;
    }
    case 287398:
    {
        returnValue = F("Schön");
        break;
    }
    case 287399:
    {
        returnValue = F("Schöna");
        break;
    }
    case 287400:
    {
        returnValue = F("Schönacher Str.");
        break;
    }
    case 287401:
    {
        returnValue = F("Schönacher Weg");
        break;
    }
    case 287402:
    {
        returnValue = F("Schönachstr.");
        break;
    }
    case 287403:
    {
        returnValue = F("Schönackerweg");
        break;
    }
    case 287404:
    {
        returnValue = F("Schönaich");
        break;
    }
    case 287405:
    {
        returnValue = F("Schönaich-Carolath-Str.");
        break;
    }
    case 287406:
    {
        returnValue = F("Schönaicher Pfad");
        break;
    }
    case 287407:
    {
        returnValue = F("Schönaicher Str.");
        break;
    }
    case 287408:
    {
        returnValue = F("Schönaicher Sträßle");
        break;
    }
    case 287409:
    {
        returnValue = F("Schönaicher Weg");
        break;
    }
    case 287410:
    {
        returnValue = F("Schönangerbruchweg");
        break;
    }
    case 287411:
    {
        returnValue = F("Schönangerstr.");
        break;
    }
    case 287412:
    {
        returnValue = F("Schönangerweg");
        break;
    }
    case 287413:
    {
        returnValue = F("Schönartser Str.");
        break;
    }
    case 287414:
    {
        returnValue = F("Schönau");
        break;
    }
    case 287415:
    {
        returnValue = F("Schönauer Allee");
        break;
    }
    case 287416:
    {
        returnValue = F("Schönauer Bach");
        break;
    }
    case 287417:
    {
        returnValue = F("Schönauer Bergweg");
        break;
    }
    case 287418:
    {
        returnValue = F("Schönauer Bäckergasse");
        break;
    }
    case 287419:
    {
        returnValue = F("Schönauer Friede");
        break;
    }
    case 287420:
    {
        returnValue = F("Schönauer Hauptstr.");
        break;
    }
    case 287421:
    {
        returnValue = F("Schönauer Linde");
        break;
    }
    case 287422:
    {
        returnValue = F("Schönauer Ring");
        break;
    }
    case 287423:
    {
        returnValue = F("Schönauer Str.");
        break;
    }
    case 287424:
    {
        returnValue = F("Schönauer Sträßle");
        break;
    }
    case 287425:
    {
        returnValue = F("Schönauer Teiche");
        break;
    }
    case 287426:
    {
        returnValue = F("Schönauer Waldweg");
        break;
    }
    case 287427:
    {
        returnValue = F("Schönauer Weg");
        break;
    }
    case 287428:
    {
        returnValue = F("Schönauer Windmühlenstr.");
        break;
    }
    case 287429:
    {
        returnValue = F("Schönauergasse");
        break;
    }
    case 287430:
    {
        returnValue = F("Schönauerhofstr.");
        break;
    }
    case 287431:
    {
        returnValue = F("Schönauerstr.");
        break;
    }
    case 287432:
    {
        returnValue = F("Schönauerweg");
        break;
    }
    case 287433:
    {
        returnValue = F("Schönaugasse");
        break;
    }
    case 287434:
    {
        returnValue = F("Schönaustr.");
        break;
    }
    case 287435:
    {
        returnValue = F("Schönauweg");
        break;
    }
    case 287436:
    {
        returnValue = F("Schönbach");
        break;
    }
    case 287437:
    {
        returnValue = F("Schönbach Wendestelle");
        break;
    }
    case 287438:
    {
        returnValue = F("Schönbacher Dorfstr.");
        break;
    }
    case 287439:
    {
        returnValue = F("Schönbacher Hauptstr.");
        break;
    }
    case 287440:
    {
        returnValue = F("Schönbacher Hohle");
        break;
    }
    case 287441:
    {
        returnValue = F("Schönbacher Marktsteig");
        break;
    }
    case 287442:
    {
        returnValue = F("Schönbacher Str.");
        break;
    }
    case 287443:
    {
        returnValue = F("Schönbacher Weg");
        break;
    }
    case 287444:
    {
        returnValue = F("Schönbachstr.");
        break;
    }
    case 287445:
    {
        returnValue = F("Schönbachsweg");
        break;
    }
    case 287446:
    {
        returnValue = F("Schönbachweg");
        break;
    }
    case 287447:
    {
        returnValue = F("Schönbecker Weg");
        break;
    }
    case 287448:
    {
        returnValue = F("Schönbeckstr.");
        break;
    }
    case 287449:
    {
        returnValue = F("Schönbeetstr.");
        break;
    }
    case 287450:
    {
        returnValue = F("Schönbeinstr.");
        break;
    }
    case 287451:
    {
        returnValue = F("Schönbek");
        break;
    }
    case 287452:
    {
        returnValue = F("Schönbek-Holz");
        break;
    }
    case 287453:
    {
        returnValue = F("Schönbeker Weg");
        break;
    }
    case 287454:
    {
        returnValue = F("Schönberg");
        break;
    }
    case 287455:
    {
        returnValue = F("Schönberg-Allee");
        break;
    }
    case 287456:
    {
        returnValue = F("Schönberger Landstr.");
        break;
    }
    case 287457:
    {
        returnValue = F("Schönberger Marktplatz");
        break;
    }
    case 287458:
    {
        returnValue = F("Schönberger Str.");
        break;
    }
    case 287459:
    {
        returnValue = F("Schönberger Str. Rottensdorf");
        break;
    }
    case 287460:
    {
        returnValue = F("Schönberger Weg");
        break;
    }
    case 287461:
    {
        returnValue = F("Schönbergerstr.");
        break;
    }
    case 287462:
    {
        returnValue = F("Schönbergerweg");
        break;
    }
    case 287463:
    {
        returnValue = F("Schönberghäuser");
        break;
    }
    case 287464:
    {
        returnValue = F("Schönbergle");
        break;
    }
    case 287465:
    {
        returnValue = F("Schönbergplatz");
        break;
    }
    case 287466:
    {
        returnValue = F("Schönbergrandweg");
        break;
    }
    case 287467:
    {
        returnValue = F("Schönbergring");
        break;
    }
    case 287468:
    {
        returnValue = F("Schönbergstr.");
        break;
    }
    case 287469:
    {
        returnValue = F("Schönbergweg");
        break;
    }
    case 287470:
    {
        returnValue = F("Schönbichl");
        break;
    }
    case 287471:
    {
        returnValue = F("Schönbichler Str.");
        break;
    }
    case 287472:
    {
        returnValue = F("Schönbichlstr.");
        break;
    }
    case 287473:
    {
        returnValue = F("Schönbiegelweg");
        break;
    }
    case 287474:
    {
        returnValue = F("Schönblick");
        break;
    }
    case 287475:
    {
        returnValue = F("Schönblickstr.");
        break;
    }
    case 287476:
    {
        returnValue = F("Schönblickweg");
        break;
    }
    case 287477:
    {
        returnValue = F("Schönborn");
        break;
    }
    case 287478:
    {
        returnValue = F("Schönborn-Allee");
        break;
    }
    case 287479:
    {
        returnValue = F("Schönborner");
        break;
    }
    case 287480:
    {
        returnValue = F("Schönborner Str.");
        break;
    }
    case 287481:
    {
        returnValue = F("Schönborner Weg");
        break;
    }
    case 287482:
    {
        returnValue = F("Schönbornerhof");
        break;
    }
    case 287483:
    {
        returnValue = F("Schönbornerstr.");
        break;
    }
    case 287484:
    {
        returnValue = F("Schönbornplatz");
        break;
    }
    case 287485:
    {
        returnValue = F("Schönbornring");
        break;
    }
    case 287486:
    {
        returnValue = F("Schönbornsluster Str.");
        break;
    }
    case 287487:
    {
        returnValue = F("Schönbornsmühle");
        break;
    }
    case 287488:
    {
        returnValue = F("Schönbornstr.");
        break;
    }
    case 287489:
    {
        returnValue = F("Schönbornweg");
        break;
    }
    case 287490:
    {
        returnValue = F("Schönbrandweg");
        break;
    }
    case 287491:
    {
        returnValue = F("Schönbrehm");
        break;
    }
    case 287492:
    {
        returnValue = F("Schönbreiten");
        break;
    }
    case 287493:
    {
        returnValue = F("Schönbronn");
        break;
    }
    case 287494:
    {
        returnValue = F("Schönbronner Str.");
        break;
    }
    case 287495:
    {
        returnValue = F("Schönbronner Weg");
        break;
    }
    case 287496:
    {
        returnValue = F("Schönbruch");
        break;
    }
    case 287497:
    {
        returnValue = F("Schönbrunn");
        break;
    }
    case 287498:
    {
        returnValue = F("Schönbrunn am Lusen");
        break;
    }
    case 287499:
    {
        returnValue = F("Schönbrunnen");
        break;
    }
    case 287500:
    {
        returnValue = F("Schönbrunnenstr.");
        break;
    }
    case 287501:
    {
        returnValue = F("Schönbrunnenweg");
        break;
    }
    case 287502:
    {
        returnValue = F("Schönbrunner Str.");
        break;
    }
    case 287503:
    {
        returnValue = F("Schönbrunner Weg");
        break;
    }
    case 287504:
    {
        returnValue = F("Schönbrunnerweg");
        break;
    }
    case 287505:
    {
        returnValue = F("Schönbrunnstr.");
        break;
    }
    case 287506:
    {
        returnValue = F("Schönbrückstr.");
        break;
    }
    case 287507:
    {
        returnValue = F("Schönbrünnlfeld");
        break;
    }
    case 287508:
    {
        returnValue = F("Schönbuchallee");
        break;
    }
    case 287509:
    {
        returnValue = F("Schönbuchen");
        break;
    }
    case 287510:
    {
        returnValue = F("Schönbuchener Str.");
        break;
    }
    case 287511:
    {
        returnValue = F("Schönbuchetstr.");
        break;
    }
    case 287512:
    {
        returnValue = F("Schönbuchstr.");
        break;
    }
    case 287513:
    {
        returnValue = F("Schönbuchwaldweg");
        break;
    }
    case 287514:
    {
        returnValue = F("Schönbuchweg");
        break;
    }
    case 287515:
    {
        returnValue = F("Schönburg");
        break;
    }
    case 287516:
    {
        returnValue = F("Schönburgblick");
        break;
    }
    case 287517:
    {
        returnValue = F("Schönburger Flügel");
        break;
    }
    case 287518:
    {
        returnValue = F("Schönburger Str.");
        break;
    }
    case 287519:
    {
        returnValue = F("Schönburgstr.");
        break;
    }
    case 287520:
    {
        returnValue = F("Schönburgweg");
        break;
    }
    case 287521:
    {
        returnValue = F("Schönbusch");
        break;
    }
    case 287522:
    {
        returnValue = F("Schönbörnchener Weg");
        break;
    }
    case 287523:
    {
        returnValue = F("Schönbüchleweg");
        break;
    }
    case 287524:
    {
        returnValue = F("Schönbüchstr.");
        break;
    }
    case 287525:
    {
        returnValue = F("Schönbüchweg");
        break;
    }
    case 287526:
    {
        returnValue = F("Schönbühl");
        break;
    }
    case 287527:
    {
        returnValue = F("Schönbühl Weg");
        break;
    }
    case 287528:
    {
        returnValue = F("Schönbühl-Traufweg");
        break;
    }
    case 287529:
    {
        returnValue = F("Schönbühler Str.");
        break;
    }
    case 287530:
    {
        returnValue = F("Schönbühler Weg");
        break;
    }
    case 287531:
    {
        returnValue = F("Schönbühlstr.");
        break;
    }
    case 287532:
    {
        returnValue = F("Schönbühlweg");
        break;
    }
    case 287533:
    {
        returnValue = F("Schönbütteler Teil");
        break;
    }
    case 287534:
    {
        returnValue = F("Schöndelrain");
        break;
    }
    case 287535:
    {
        returnValue = F("Schöndelter Str.");
        break;
    }
    case 287536:
    {
        returnValue = F("Schöndelweg");
        break;
    }
    case 287537:
    {
        returnValue = F("Schöndorfer Hauptstr.");
        break;
    }
    case 287538:
    {
        returnValue = F("Schöndorfer Str.");
        break;
    }
    case 287539:
    {
        returnValue = F("Schöndorfer Weg");
        break;
    }
    case 287540:
    {
        returnValue = F("Schöne Allee");
        break;
    }
    case 287541:
    {
        returnValue = F("Schöne Aussicht");
        break;
    }
    case 287542:
    {
        returnValue = F("Schöne Aussicht auf das Hardautal");
        break;
    }
    case 287543:
    {
        returnValue = F("Schöne Breide");
        break;
    }
    case 287544:
    {
        returnValue = F("Schöne Ecke");
        break;
    }
    case 287545:
    {
        returnValue = F("Schöne Eichschneise");
        break;
    }
    case 287546:
    {
        returnValue = F("Schöne Feder");
        break;
    }
    case 287547:
    {
        returnValue = F("Schöne Flur");
        break;
    }
    case 287548:
    {
        returnValue = F("Schöne Gasse");
        break;
    }
    case 287549:
    {
        returnValue = F("Schöne Gegend");
        break;
    }
    case 287550:
    {
        returnValue = F("Schöne Gärten");
        break;
    }
    case 287551:
    {
        returnValue = F("Schöne Heide");
        break;
    }
    case 287552:
    {
        returnValue = F("Schöne Höhe");
        break;
    }
    case 287553:
    {
        returnValue = F("Schöne Lage");
        break;
    }
    case 287554:
    {
        returnValue = F("Schöne Reihe");
        break;
    }
    case 287555:
    {
        returnValue = F("Schöne Weibergasse");
        break;
    }
    case 287556:
    {
        returnValue = F("Schöne-Aussicht-Str.");
        break;
    }
    case 287557:
    {
        returnValue = F("Schöne-Baum-Schneise");
        break;
    }
    case 287558:
    {
        returnValue = F("Schönebachsweg");
        break;
    }
    case 287559:
    {
        returnValue = F("Schönebeck");
        break;
    }
    case 287560:
    {
        returnValue = F("Schönebecker Allee");
        break;
    }
    case 287561:
    {
        returnValue = F("Schönebecker Str.");
        break;
    }
    case 287562:
    {
        returnValue = F("Schönebecker Weg");
        break;
    }
    case 287563:
    {
        returnValue = F("Schöneberger Blick");
        break;
    }
    case 287564:
    {
        returnValue = F("Schöneberger Damm");
        break;
    }
    case 287565:
    {
        returnValue = F("Schöneberger Str.");
        break;
    }
    case 287566:
    {
        returnValue = F("Schöneberger Weg");
        break;
    }
    case 287567:
    {
        returnValue = F("Schönebergstr.");
        break;
    }
    case 287568:
    {
        returnValue = F("Schönebergweg");
        break;
    }
    case 287569:
    {
        returnValue = F("Schöneborn");
        break;
    }
    case 287570:
    {
        returnValue = F("Schöneborner Str.");
        break;
    }
    case 287571:
    {
        returnValue = F("Schönebühlstr.");
        break;
    }
    case 287572:
    {
        returnValue = F("Schönebürger Str.");
        break;
    }
    case 287573:
    {
        returnValue = F("Schönebürger Weg");
        break;
    }
    case 287574:
    {
        returnValue = F("Schönebürgstr.");
        break;
    }
    case 287575:
    {
        returnValue = F("Schöneck");
        break;
    }
    case 287576:
    {
        returnValue = F("Schöneckenstr.");
        break;
    }
    case 287577:
    {
        returnValue = F("Schönecker Landstr.");
        break;
    }
    case 287578:
    {
        returnValue = F("Schönecker Schweiz");
        break;
    }
    case 287579:
    {
        returnValue = F("Schönecker Str.");
        break;
    }
    case 287580:
    {
        returnValue = F("Schönecker Weg");
        break;
    }
    case 287581:
    {
        returnValue = F("Schöneckerstr.");
        break;
    }
    case 287582:
    {
        returnValue = F("Schöneckstr.");
        break;
    }
    case 287583:
    {
        returnValue = F("Schöneckweg");
        break;
    }
    case 287584:
    {
        returnValue = F("Schöneeckstr.");
        break;
    }
    case 287585:
    {
        returnValue = F("Schönefeld");
        break;
    }
    case 287586:
    {
        returnValue = F("Schönefelder Allee");
        break;
    }
    case 287587:
    {
        returnValue = F("Schönefelder Chaussee");
        break;
    }
    case 287588:
    {
        returnValue = F("Schönefelder Dorfstr.");
        break;
    }
    case 287589:
    {
        returnValue = F("Schönefelder Str.");
        break;
    }
    case 287590:
    {
        returnValue = F("Schönefelder Weg");
        break;
    }
    case 287591:
    {
        returnValue = F("Schönefeldstr.");
        break;
    }
    case 287592:
    {
        returnValue = F("Schönegertstr.");
        break;
    }
    case 287593:
    {
        returnValue = F("Schöneggert");
        break;
    }
    case 287594:
    {
        returnValue = F("Schöneggweg");
        break;
    }
    case 287595:
    {
        returnValue = F("Schönegründer Str.");
        break;
    }
    case 287596:
    {
        returnValue = F("Schöneiche");
        break;
    }
    case 287597:
    {
        returnValue = F("Schöneichenallee");
        break;
    }
    case 287598:
    {
        returnValue = F("Schöneichenstr.");
        break;
    }
    case 287599:
    {
        returnValue = F("Schöneicher Allee");
        break;
    }
    case 287600:
    {
        returnValue = F("Schöneicher Landstr.");
        break;
    }
    case 287601:
    {
        returnValue = F("Schöneicher Str.");
        break;
    }
    case 287602:
    {
        returnValue = F("Schöneicher Weg");
        break;
    }
    case 287603:
    {
        returnValue = F("Schöneichle Weg");
        break;
    }
    case 287604:
    {
        returnValue = F("Schöneichrundweg");
        break;
    }
    case 287605:
    {
        returnValue = F("Schöneichwaldsträßchen");
        break;
    }
    case 287606:
    {
        returnValue = F("Schöneichweg");
        break;
    }
    case 287607:
    {
        returnValue = F("Schönekamp");
        break;
    }
    case 287608:
    {
        returnValue = F("Schönemannstr.");
        break;
    }
    case 287609:
    {
        returnValue = F("Schönemarker Str.");
        break;
    }
    case 287610:
    {
        returnValue = F("Schönemoorer Dorfstr.");
        break;
    }
    case 287611:
    {
        returnValue = F("Schönemoorer Landstr.");
        break;
    }
    case 287612:
    {
        returnValue = F("Schönemoorer Str.");
        break;
    }
    case 287613:
    {
        returnValue = F("Schönenbacher Str.");
        break;
    }
    case 287614:
    {
        returnValue = F("Schönenbachweg");
        break;
    }
    case 287615:
    {
        returnValue = F("Schönenberg");
        break;
    }
    case 287616:
    {
        returnValue = F("Schönenberg-West");
        break;
    }
    case 287617:
    {
        returnValue = F("Schönenberger Str.");
        break;
    }
    case 287618:
    {
        returnValue = F("Schönenberger Weg");
        break;
    }
    case 287619:
    {
        returnValue = F("Schönenbergerweg");
        break;
    }
    case 287620:
    {
        returnValue = F("Schönenbergstr.");
        break;
    }
    case 287621:
    {
        returnValue = F("Schönenbergweg");
        break;
    }
    case 287622:
    {
        returnValue = F("Schönenborn");
        break;
    }
    case 287623:
    {
        returnValue = F("Schönenborner Weg");
        break;
    }
    case 287624:
    {
        returnValue = F("Schönenbuchen");
        break;
    }
    case 287625:
    {
        returnValue = F("Schönenbühlstr.");
        break;
    }
    case 287626:
    {
        returnValue = F("Schönenbühlweg");
        break;
    }
    case 287627:
    {
        returnValue = F("Schönengrund");
        break;
    }
    case 287628:
    {
        returnValue = F("Schönenstr.");
        break;
    }
    case 287629:
    {
        returnValue = F("Schönenwalde");
        break;
    }
    case 287630:
    {
        returnValue = F("Schönenwaldstr.");
        break;
    }
    case 287631:
    {
        returnValue = F("Schöner Aussichtsweg");
        break;
    }
    case 287632:
    {
        returnValue = F("Schöner Blick");
        break;
    }
    case 287633:
    {
        returnValue = F("Schöner Buchwaldweg");
        break;
    }
    case 287634:
    {
        returnValue = F("Schöner Busch");
        break;
    }
    case 287635:
    {
        returnValue = F("Schöner Bühl");
        break;
    }
    case 287636:
    {
        returnValue = F("Schöner Fleck");
        break;
    }
    case 287637:
    {
        returnValue = F("Schöner Grundweg");
        break;
    }
    case 287638:
    {
        returnValue = F("Schöner Weg");
        break;
    }
    case 287639:
    {
        returnValue = F("Schöner Winkel");
        break;
    }
    case 287640:
    {
        returnValue = F("Schönerbaum Weg");
        break;
    }
    case 287641:
    {
        returnValue = F("Schönerbergweg");
        break;
    }
    case 287642:
    {
        returnValue = F("Schönerlinder Bahnhofstr.");
        break;
    }
    case 287643:
    {
        returnValue = F("Schönerlinder Chaussee");
        break;
    }
    case 287644:
    {
        returnValue = F("Schönerlinder Dorfstr.");
        break;
    }
    case 287645:
    {
        returnValue = F("Schönerlinder Str.");
        break;
    }
    case 287646:
    {
        returnValue = F("Schönermarker Bahnhof");
        break;
    }
    case 287647:
    {
        returnValue = F("Schönermarker Landstr.");
        break;
    }
    case 287648:
    {
        returnValue = F("Schönermarker Str.");
        break;
    }
    case 287649:
    {
        returnValue = F("Schönermarker Weg");
        break;
    }
    case 287650:
    {
        returnValue = F("Schönermarkstr.");
        break;
    }
    case 287651:
    {
        returnValue = F("Schönerstedtstr.");
        break;
    }
    case 287652:
    {
        returnValue = F("Schönerstr.");
        break;
    }
    case 287653:
    {
        returnValue = F("Schönerstädt");
        break;
    }
    case 287654:
    {
        returnValue = F("Schönerstädter Str.");
        break;
    }
    case 287655:
    {
        returnValue = F("Schönerting");
        break;
    }
    case 287656:
    {
        returnValue = F("Schönertinger Str.");
        break;
    }
    case 287657:
    {
        returnValue = F("Schönertsbachstr.");
        break;
    }
    case 287658:
    {
        returnValue = F("Schönes Feldle");
        break;
    }
    case 287659:
    {
        returnValue = F("Schönes Ried");
        break;
    }
    case 287660:
    {
        returnValue = F("Schöneschacher Weg");
        break;
    }
    case 287661:
    {
        returnValue = F("Schöneseiffen");
        break;
    }
    case 287662:
    {
        returnValue = F("Schöneshofer Str.");
        break;
    }
    case 287663:
    {
        returnValue = F("Schönetweg");
        break;
    }
    case 287664:
    {
        returnValue = F("Schönewald");
        break;
    }
    case 287665:
    {
        returnValue = F("Schönewalder Naturlehrpfad");
        break;
    }
    case 287666:
    {
        returnValue = F("Schönewalder Str.");
        break;
    }
    case 287667:
    {
        returnValue = F("Schönewalder Weg");
        break;
    }
    case 287668:
    {
        returnValue = F("Schönewaldstr.");
        break;
    }
    case 287669:
    {
        returnValue = F("Schöneweibergasse");
        break;
    }
    case 287670:
    {
        returnValue = F("Schönewerdaer Str.");
        break;
    }
    case 287671:
    {
        returnValue = F("Schönfeld");
        break;
    }
    case 287672:
    {
        returnValue = F("Schönfelder Damm");
        break;
    }
    case 287673:
    {
        returnValue = F("Schönfelder Dorfstr.");
        break;
    }
    case 287674:
    {
        returnValue = F("Schönfelder Grundweg");
        break;
    }
    case 287675:
    {
        returnValue = F("Schönfelder Harzstr.");
        break;
    }
    case 287676:
    {
        returnValue = F("Schönfelder Str.");
        break;
    }
    case 287677:
    {
        returnValue = F("Schönfelder Weg");
        break;
    }
    case 287678:
    {
        returnValue = F("Schönfelderhof");
        break;
    }
    case 287679:
    {
        returnValue = F("Schönfelderstr.");
        break;
    }
    case 287680:
    {
        returnValue = F("Schönfeldspitzweg");
        break;
    }
    case 287681:
    {
        returnValue = F("Schönfeldstr.");
        break;
    }
    case 287682:
    {
        returnValue = F("Schönfelser Str.");
        break;
    }
    case 287683:
    {
        returnValue = F("Schönficht");
        break;
    }
    case 287684:
    {
        returnValue = F("Schönfichter Str.");
        break;
    }
    case 287685:
    {
        returnValue = F("Schönfliesserweg");
        break;
    }
    case 287686:
    {
        returnValue = F("Schönfließer Brücke");
        break;
    }
    case 287687:
    {
        returnValue = F("Schönfließer Dorfstr.");
        break;
    }
    case 287688:
    {
        returnValue = F("Schönfließer Platz");
        break;
    }
    case 287689:
    {
        returnValue = F("Schönfließer Str.");
        break;
    }
    case 287690:
    {
        returnValue = F("Schönfließer Weg");
        break;
    }
    case 287691:
    {
        returnValue = F("Schönforster Str.");
        break;
    }
    case 287692:
    {
        returnValue = F("Schönfußstr.");
        break;
    }
    case 287693:
    {
        returnValue = F("Schönfärberweg");
        break;
    }
    case 287694:
    {
        returnValue = F("Schönfüßlgasse");
        break;
    }
    case 287695:
    {
        returnValue = F("Schöngarnweg");
        break;
    }
    case 287696:
    {
        returnValue = F("Schöngartenstr.");
        break;
    }
    case 287697:
    {
        returnValue = F("Schöngasse");
        break;
    }
    case 287698:
    {
        returnValue = F("Schöngeising");
        break;
    }
    case 287699:
    {
        returnValue = F("Schöngeisinger Str.");
        break;
    }
    case 287700:
    {
        returnValue = F("Schöngewanne");
        break;
    }
    case 287701:
    {
        returnValue = F("Schöngleinaer Weg");
        break;
    }
    case 287702:
    {
        returnValue = F("Schöngrabenweg");
        break;
    }
    case 287703:
    {
        returnValue = F("Schöngrund");
        break;
    }
    case 287704:
    {
        returnValue = F("Schöngutweg");
        break;
    }
    case 287705:
    {
        returnValue = F("Schöngärten");
        break;
    }
    case 287706:
    {
        returnValue = F("Schönhaarstr.");
        break;
    }
    case 287707:
    {
        returnValue = F("Schönhagen");
        break;
    }
    case 287708:
    {
        returnValue = F("Schönhagener Dorfstr.");
        break;
    }
    case 287709:
    {
        returnValue = F("Schönhagener Gutshof");
        break;
    }
    case 287710:
    {
        returnValue = F("Schönhagener Landstr.");
        break;
    }
    case 287711:
    {
        returnValue = F("Schönhagener Mühle");
        break;
    }
    case 287712:
    {
        returnValue = F("Schönhagener Str.");
        break;
    }
    case 287713:
    {
        returnValue = F("Schönhagener Weg");
        break;
    }
    case 287714:
    {
        returnValue = F("Schönhaid");
        break;
    }
    case 287715:
    {
        returnValue = F("Schönhaide");
        break;
    }
    case 287716:
    {
        returnValue = F("Schönhaider Str.");
        break;
    }
    case 287717:
    {
        returnValue = F("Schönhalde");
        break;
    }
    case 287718:
    {
        returnValue = F("Schönhaldenstr.");
        break;
    }
    case 287719:
    {
        returnValue = F("Schönhaldeweg");
        break;
    }
    case 287720:
    {
        returnValue = F("Schönhannchenweg");
        break;
    }
    case 287721:
    {
        returnValue = F("Schönhardt");
        break;
    }
    case 287722:
    {
        returnValue = F("Schönhardter Str.");
        break;
    }
    case 287723:
    {
        returnValue = F("Schönhardtshöhe");
        break;
    }
    case 287724:
    {
        returnValue = F("Schönhardtweg");
        break;
    }
    case 287725:
    {
        returnValue = F("Schönhausen");
        break;
    }
    case 287726:
    {
        returnValue = F("Schönhauser Str.");
        break;
    }
    case 287727:
    {
        returnValue = F("Schönhauser Weg");
        break;
    }
    case 287728:
    {
        returnValue = F("Schönheck");
        break;
    }
    case 287729:
    {
        returnValue = F("Schönheider Str.");
        break;
    }
    case 287730:
    {
        returnValue = F("Schönheider Weg");
        break;
    }
    case 287731:
    {
        returnValue = F("Schönheider Wiesenweg");
        break;
    }
    case 287732:
    {
        returnValue = F("Schönheitsmühle");
        break;
    }
    case 287733:
    {
        returnValue = F("Schönhengstgaustr.");
        break;
    }
    case 287734:
    {
        returnValue = F("Schönhengststr.");
        break;
    }
    case 287735:
    {
        returnValue = F("Schönhengstweg");
        break;
    }
    case 287736:
    {
        returnValue = F("Schönherrs Weg");
        break;
    }
    case 287737:
    {
        returnValue = F("Schönherrstr.");
        break;
    }
    case 287738:
    {
        returnValue = F("Schönhof");
        break;
    }
    case 287739:
    {
        returnValue = F("Schönhofer Weg");
        break;
    }
    case 287740:
    {
        returnValue = F("Schönhoferstr.");
        break;
    }
    case 287741:
    {
        returnValue = F("Schönhofstr.");
        break;
    }
    case 287742:
    {
        returnValue = F("Schönhofweg");
        break;
    }
    case 287743:
    {
        returnValue = F("Schönholthauser Weg");
        break;
    }
    case 287744:
    {
        returnValue = F("Schönholz");
        break;
    }
    case 287745:
    {
        returnValue = F("Schönholzer Dorfstr.");
        break;
    }
    case 287746:
    {
        returnValue = F("Schönholzer Str.");
        break;
    }
    case 287747:
    {
        returnValue = F("Schönholzweg");
        break;
    }
    case 287748:
    {
        returnValue = F("Schönhorner Weg");
        break;
    }
    case 287749:
    {
        returnValue = F("Schönhorst");
        break;
    }
    case 287750:
    {
        returnValue = F("Schönhorster Str.");
        break;
    }
    case 287751:
    {
        returnValue = F("Schönhorster Weg");
        break;
    }
    case 287752:
    {
        returnValue = F("Schönhuthstr.");
        break;
    }
    case 287753:
    {
        returnValue = F("Schönhuthweg");
        break;
    }
    case 287754:
    {
        returnValue = F("Schönhutstr.");
        break;
    }
    case 287755:
    {
        returnValue = F("Schönhäuser Str.");
        break;
    }
    case 287756:
    {
        returnValue = F("Schönhöferweg");
        break;
    }
    case 287757:
    {
        returnValue = F("Schönhöher Str.");
        break;
    }
    case 287758:
    {
        returnValue = F("Schönhörne");
        break;
    }
    case 287759:
    {
        returnValue = F("Schönhörner Weg");
        break;
    }
    case 287760:
    {
        returnValue = F("Schönhörnweg");
        break;
    }
    case 287761:
    {
        returnValue = F("Schönianstr.");
        break;
    }
    case 287762:
    {
        returnValue = F("Schönigstr.");
        break;
    }
    case 287763:
    {
        returnValue = F("Schöningen, ZOB");
        break;
    }
    case 287764:
    {
        returnValue = F("Schöninger Stieg");
        break;
    }
    case 287765:
    {
        returnValue = F("Schöninger Str.");
        break;
    }
    case 287766:
    {
        returnValue = F("Schöningerstr.");
        break;
    }
    case 287767:
    {
        returnValue = F("Schöninghsdorfer Str.");
        break;
    }
    case 287768:
    {
        returnValue = F("Schöninsel");
        break;
    }
    case 287769:
    {
        returnValue = F("Schöninseler Weg");
        break;
    }
    case 287770:
    {
        returnValue = F("Schönitz");
        break;
    }
    case 287771:
    {
        returnValue = F("Schönitzer Str.");
        break;
    }
    case 287772:
    {
        returnValue = F("Schönkamp");
        break;
    }
    case 287773:
    {
        returnValue = F("Schönkirchener Str.");
        break;
    }
    case 287774:
    {
        returnValue = F("Schönklingstr.");
        break;
    }
    case 287775:
    {
        returnValue = F("Schönlanker Str.");
        break;
    }
    case 287776:
    {
        returnValue = F("Schönlautenbach");
        break;
    }
    case 287777:
    {
        returnValue = F("Schönleberstr.");
        break;
    }
    case 287778:
    {
        returnValue = F("Schönleberweg");
        break;
    }
    case 287779:
    {
        returnValue = F("Schönlebestr.");
        break;
    }
    case 287780:
    {
        returnValue = F("Schönleinsplatz");
        break;
    }
    case 287781:
    {
        returnValue = F("Schönleinstr.");
        break;
    }
    case 287782:
    {
        returnValue = F("Schönleite");
        break;
    }
    case 287783:
    {
        returnValue = F("Schönleiten");
        break;
    }
    case 287784:
    {
        returnValue = F("Schönleitener Str.");
        break;
    }
    case 287785:
    {
        returnValue = F("Schönleitenstr.");
        break;
    }
    case 287786:
    {
        returnValue = F("Schönleitenweg");
        break;
    }
    case 287787:
    {
        returnValue = F("Schönleitner Str.");
        break;
    }
    case 287788:
    {
        returnValue = F("Schönleitnerweg");
        break;
    }
    case 287789:
    {
        returnValue = F("Schönleutnerstr.");
        break;
    }
    case 287790:
    {
        returnValue = F("Schönlind");
        break;
    }
    case 287791:
    {
        returnValue = F("Schönlindener Str.");
        break;
    }
    case 287792:
    {
        returnValue = F("Schönlinder Str.");
        break;
    }
    case 287793:
    {
        returnValue = F("Schönlinder Weg");
        break;
    }
    case 287794:
    {
        returnValue = F("Schönlings");
        break;
    }
    case 287795:
    {
        returnValue = F("Schönlohstr.");
        break;
    }
    case 287796:
    {
        returnValue = F("Schönmai");
        break;
    }
    case 287797:
    {
        returnValue = F("Schönmannstr.");
        break;
    }
    case 287798:
    {
        returnValue = F("Schönmatt");
        break;
    }
    case 287799:
    {
        returnValue = F("Schönmetzlerstr.");
        break;
    }
    case 287800:
    {
        returnValue = F("Schönmoor");
        break;
    }
    case 287801:
    {
        returnValue = F("Schönmoorer Str.");
        break;
    }
    case 287802:
    {
        returnValue = F("Schönmoosweg");
        break;
    }
    case 287803:
    {
        returnValue = F("Schönmörchenstr.");
        break;
    }
    case 287804:
    {
        returnValue = F("Schönmühlweg");
        break;
    }
    case 287805:
    {
        returnValue = F("Schönmünz");
        break;
    }
    case 287806:
    {
        returnValue = F("Schönmünz-Sommerseiten-Sträßle");
        break;
    }
    case 287807:
    {
        returnValue = F("Schönmünzbrückle");
        break;
    }
    case 287808:
    {
        returnValue = F("Schönmünzstr.");
        break;
    }
    case 287809:
    {
        returnValue = F("Schönnagelweg");
        break;
    }
    case 287810:
    {
        returnValue = F("Schönnewitz Weg");
        break;
    }
    case 287811:
    {
        returnValue = F("Schönnewitzer Weg");
        break;
    }
    case 287812:
    {
        returnValue = F("Schönningstedter Str.");
        break;
    }
    case 287813:
    {
        returnValue = F("Schönower Bahnhofstr.");
        break;
    }
    case 287814:
    {
        returnValue = F("Schönower Birkenweg");
        break;
    }
    case 287815:
    {
        returnValue = F("Schönower Dorfstr.");
        break;
    }
    case 287816:
    {
        returnValue = F("Schönower Feldstr.");
        break;
    }
    case 287817:
    {
        returnValue = F("Schönower Gartenstr.");
        break;
    }
    case 287818:
    {
        returnValue = F("Schönower Kastanienallee");
        break;
    }
    case 287819:
    {
        returnValue = F("Schönower Kirchstr.");
        break;
    }
    case 287820:
    {
        returnValue = F("Schönower Lindenweg");
        break;
    }
    case 287821:
    {
        returnValue = F("Schönower Siedlungsweg");
        break;
    }
    case 287822:
    {
        returnValue = F("Schönower Str.");
        break;
    }
    case 287823:
    {
        returnValue = F("Schönower Waldrand");
        break;
    }
    case 287824:
    {
        returnValue = F("Schönower Waldstr.");
        break;
    }
    case 287825:
    {
        returnValue = F("Schönprunnstr.");
        break;
    }
    case 287826:
    {
        returnValue = F("Schönrain");
        break;
    }
    case 287827:
    {
        returnValue = F("Schönrainer Str.");
        break;
    }
    case 287828:
    {
        returnValue = F("Schönrainschneise");
        break;
    }
    case 287829:
    {
        returnValue = F("Schönrainstr.");
        break;
    }
    case 287830:
    {
        returnValue = F("Schönrainweg");
        break;
    }
    case 287831:
    {
        returnValue = F("Schönrasen");
        break;
    }
    case 287832:
    {
        returnValue = F("Schönrather Str.");
        break;
    }
    case 287833:
    {
        returnValue = F("Schönredder");
        break;
    }
    case 287834:
    {
        returnValue = F("Schönreuth");
        break;
    }
    case 287835:
    {
        returnValue = F("Schönreuthstr.");
        break;
    }
    case 287836:
    {
        returnValue = F("Schönriedlstr.");
        break;
    }
    case 287837:
    {
        returnValue = F("Schönscheid");
        break;
    }
    case 287838:
    {
        returnValue = F("Schönseer Str.");
        break;
    }
    case 287839:
    {
        returnValue = F("Schönseeschneise");
        break;
    }
    case 287840:
    {
        returnValue = F("Schönsichtweg");
        break;
    }
    case 287841:
    {
        returnValue = F("Schönsitzstr.");
        break;
    }
    case 287842:
    {
        returnValue = F("Schönskamp");
        break;
    }
    case 287843:
    {
        returnValue = F("Schönsland");
        break;
    }
    case 287844:
    {
        returnValue = F("Schönstadter Str.");
        break;
    }
    case 287845:
    {
        returnValue = F("Schönstattstr.");
        break;
    }
    case 287846:
    {
        returnValue = F("Schönstattzentrum Mariengart Waldstetten");
        break;
    }
    case 287847:
    {
        returnValue = F("Schönstedter Str.");
        break;
    }
    case 287848:
    {
        returnValue = F("Schönstedter Weg");
        break;
    }
    case 287849:
    {
        returnValue = F("Schönstedtgasse");
        break;
    }
    case 287850:
    {
        returnValue = F("Schönsteiner Str.");
        break;
    }
    case 287851:
    {
        returnValue = F("Schönsteinstr.");
        break;
    }
    case 287852:
    {
        returnValue = F("Schönstetter Str.");
        break;
    }
    case 287853:
    {
        returnValue = F("Schönstheimer Str.");
        break;
    }
    case 287854:
    {
        returnValue = F("Schönstr.");
        break;
    }
    case 287855:
    {
        returnValue = F("Schönstädt");
        break;
    }
    case 287856:
    {
        returnValue = F("Schönstädter Str.");
        break;
    }
    case 287857:
    {
        returnValue = F("Schönsweg");
        break;
    }
    case 287858:
    {
        returnValue = F("Schönswetterstr.");
        break;
    }
    case 287859:
    {
        returnValue = F("Schöntal");
        break;
    }
    case 287860:
    {
        returnValue = F("Schöntalbachsträßle");
        break;
    }
    case 287861:
    {
        returnValue = F("Schöntaler Berg");
        break;
    }
    case 287862:
    {
        returnValue = F("Schöntaler Gasse");
        break;
    }
    case 287863:
    {
        returnValue = F("Schöntaler Höhe");
        break;
    }
    case 287864:
    {
        returnValue = F("Schöntaler Str.");
        break;
    }
    case 287865:
    {
        returnValue = F("Schöntaler Weg");
        break;
    }
    case 287866:
    {
        returnValue = F("Schöntalhöfle");
        break;
    }
    case 287867:
    {
        returnValue = F("Schöntalsgrundweg");
        break;
    }
    case 287868:
    {
        returnValue = F("Schöntalstr.");
        break;
    }
    case 287869:
    {
        returnValue = F("Schöntalweg");
        break;
    }
    case 287870:
    {
        returnValue = F("Schönthal");
        break;
    }
    case 287871:
    {
        returnValue = F("Schönthaler Str.");
        break;
    }
    case 287872:
    {
        returnValue = F("Schönthaler Weg");
        break;
    }
    case 287873:
    {
        returnValue = F("Schönthalring");
        break;
    }
    case 287874:
    {
        returnValue = F("Schönthalstr.");
        break;
    }
    case 287875:
    {
        returnValue = F("Schönthalweg");
        break;
    }
    case 287876:
    {
        returnValue = F("Schönthan");
        break;
    }
    case 287877:
    {
        returnValue = F("Schönthaner Str.");
        break;
    }
    case 287878:
    {
        returnValue = F("Schönthanner Str.");
        break;
    }
    case 287879:
    {
        returnValue = F("Schöntrunk");
        break;
    }
    case 287880:
    {
        returnValue = F("Schönwald");
        break;
    }
    case 287881:
    {
        returnValue = F("Schönwalder Allee");
        break;
    }
    case 287882:
    {
        returnValue = F("Schönwalder Chaussee");
        break;
    }
    case 287883:
    {
        returnValue = F("Schönwalder Damm");
        break;
    }
    case 287884:
    {
        returnValue = F("Schönwalder Dorfstr.");
        break;
    }
    case 287885:
    {
        returnValue = F("Schönwalder Landstr.");
        break;
    }
    case 287886:
    {
        returnValue = F("Schönwalder Str.");
        break;
    }
    case 287887:
    {
        returnValue = F("Schönwalder Weg");
        break;
    }
    case 287888:
    {
        returnValue = F("Schönwalderstr.");
        break;
    }
    case 287889:
    {
        returnValue = F("Schönwaldstr.");
        break;
    }
    case 287890:
    {
        returnValue = F("Schönwaldweg");
        break;
    }
    case 287891:
    {
        returnValue = F("Schönwappenweg");
        break;
    }
    case 287892:
    {
        returnValue = F("Schönwasserstr.");
        break;
    }
    case 287893:
    {
        returnValue = F("Schönweg");
        break;
    }
    case 287894:
    {
        returnValue = F("Schönweider Weg");
        break;
    }
    case 287895:
    {
        returnValue = F("Schönwerthstr.");
        break;
    }
    case 287896:
    {
        returnValue = F("Schönwetterstr.");
        break;
    }
    case 287897:
    {
        returnValue = F("Schönwiesenweg");
        break;
    }
    case 287898:
    {
        returnValue = F("Schönwiesstr.");
        break;
    }
    case 287899:
    {
        returnValue = F("Schönwinkel");
        break;
    }
    case 287900:
    {
        returnValue = F("Schönwohlder Str.");
        break;
    }
    case 287901:
    {
        returnValue = F("Schönwolder Str.");
        break;
    }
    case 287902:
    {
        returnValue = F("Schönwolder Weg");
        break;
    }
    case 287903:
    {
        returnValue = F("Schönwälder Ring");
        break;
    }
    case 287904:
    {
        returnValue = F("Schönwälder Str.");
        break;
    }
    case 287905:
    {
        returnValue = F("Schöpbach");
        break;
    }
    case 287906:
    {
        returnValue = F("Schöpf");
        break;
    }
    case 287907:
    {
        returnValue = F("Schöpfebachweg");
        break;
    }
    case 287908:
    {
        returnValue = F("Schöpfengasse");
        break;
    }
    case 287909:
    {
        returnValue = F("Schöpfengärtenweg");
        break;
    }
    case 287910:
    {
        returnValue = F("Schöpfenrangen");
        break;
    }
    case 287911:
    {
        returnValue = F("Schöpfental");
        break;
    }
    case 287912:
    {
        returnValue = F("Schöpferloh");
        break;
    }
    case 287913:
    {
        returnValue = F("Schöpferweg");
        break;
    }
    case 287914:
    {
        returnValue = F("Schöpferwiese");
        break;
    }
    case 287915:
    {
        returnValue = F("Schöpfungsgarten");
        break;
    }
    case 287916:
    {
        returnValue = F("Schöpfurter Ring");
        break;
    }
    case 287917:
    {
        returnValue = F("Schöpfurter Str.");
        break;
    }
    case 287918:
    {
        returnValue = F("Schöpfwerk");
        break;
    }
    case 287919:
    {
        returnValue = F("Schöpfwerk Eschebrügge");
        break;
    }
    case 287920:
    {
        returnValue = F("Schöpfwerkstr.");
        break;
    }
    case 287921:
    {
        returnValue = F("Schöpfwerksweg");
        break;
    }
    case 287922:
    {
        returnValue = F("Schöpfwiesenweg");
        break;
    }
    case 287923:
    {
        returnValue = F("Schöplergasse");
        break;
    }
    case 287924:
    {
        returnValue = F("Schöppenkampstr.");
        break;
    }
    case 287925:
    {
        returnValue = F("Schöppenstedter Allee");
        break;
    }
    case 287926:
    {
        returnValue = F("Schöppenstedter Stieg");
        break;
    }
    case 287927:
    {
        returnValue = F("Schöppenstedter Str.");
        break;
    }
    case 287928:
    {
        returnValue = F("Schöppenstedter Turm");
        break;
    }
    case 287929:
    {
        returnValue = F("Schöppenstedter Weg");
        break;
    }
    case 287930:
    {
        returnValue = F("Schöppenthaustr.");
        break;
    }
    case 287931:
    {
        returnValue = F("Schöppenwerth Park");
        break;
    }
    case 287932:
    {
        returnValue = F("Schöppenwerthgasse");
        break;
    }
    case 287933:
    {
        returnValue = F("Schöppenwinkel");
        break;
    }
    case 287934:
    {
        returnValue = F("Schöppepfad");
        break;
    }
    case 287935:
    {
        returnValue = F("Schöpperg");
        break;
    }
    case 287936:
    {
        returnValue = F("Schöpperweg");
        break;
    }
    case 287937:
    {
        returnValue = F("Schöppestr.");
        break;
    }
    case 287938:
    {
        returnValue = F("Schöppingener Str.");
        break;
    }
    case 287939:
    {
        returnValue = F("Schöppinger Damm");
        break;
    }
    case 287940:
    {
        returnValue = F("Schöppinger Str.");
        break;
    }
    case 287941:
    {
        returnValue = F("Schöpplenberg");
        break;
    }
    case 287942:
    {
        returnValue = F("Schöpsdorfer Str.");
        break;
    }
    case 287943:
    {
        returnValue = F("Schöpser Str.");
        break;
    }
    case 287944:
    {
        returnValue = F("Schöpsquelle");
        break;
    }
    case 287945:
    {
        returnValue = F("Schöpstaler Weg");
        break;
    }
    case 287946:
    {
        returnValue = F("Schörderup");
        break;
    }
    case 287947:
    {
        returnValue = F("Schörderupfeld");
        break;
    }
    case 287948:
    {
        returnValue = F("Schördesweg");
        break;
    }
    case 287949:
    {
        returnValue = F("Schören");
        break;
    }
    case 287950:
    {
        returnValue = F("Schörenbergstr.");
        break;
    }
    case 287951:
    {
        returnValue = F("Schörkewäi");
        break;
    }
    case 287952:
    {
        returnValue = F("Schörlinger Str.");
        break;
    }
    case 287953:
    {
        returnValue = F("Schörlinsmatten");
        break;
    }
    case 287954:
    {
        returnValue = F("Schörmelweg");
        break;
    }
    case 287955:
    {
        returnValue = F("Schörrstr.");
        break;
    }
    case 287956:
    {
        returnValue = F("Schörsighaldeweg");
        break;
    }
    case 287957:
    {
        returnValue = F("Schörsigweg");
        break;
    }
    case 287958:
    {
        returnValue = F("Schörweken");
        break;
    }
    case 287959:
    {
        returnValue = F("Schörzinger Str.");
        break;
    }
    case 287960:
    {
        returnValue = F("Schörzinger Weg");
        break;
    }
    case 287961:
    {
        returnValue = F("Schösserberg");
        break;
    }
    case 287962:
    {
        returnValue = F("Schösserholzweg");
        break;
    }
    case 287963:
    {
        returnValue = F("Schössersmühlenweg");
        break;
    }
    case 287964:
    {
        returnValue = F("Schösserstr.");
        break;
    }
    case 287965:
    {
        returnValue = F("Schösserweg");
        break;
    }
    case 287966:
    {
        returnValue = F("Schötener Dorfstr.");
        break;
    }
    case 287967:
    {
        returnValue = F("Schötener Grund");
        break;
    }
    case 287968:
    {
        returnValue = F("Schötener Promenade");
        break;
    }
    case 287969:
    {
        returnValue = F("Schötenweg");
        break;
    }
    case 287970:
    {
        returnValue = F("Schötmarer Str.");
        break;
    }
    case 287971:
    {
        returnValue = F("Schötmarsche Str.");
        break;
    }
    case 287972:
    {
        returnValue = F("Schöttelbachweg");
        break;
    }
    case 287973:
    {
        returnValue = F("Schöttelkamp");
        break;
    }
    case 287974:
    {
        returnValue = F("Schöttelkaßmoorweg");
        break;
    }
    case 287975:
    {
        returnValue = F("Schöttenau");
        break;
    }
    case 287976:
    {
        returnValue = F("Schöttenauer Weg");
        break;
    }
    case 287977:
    {
        returnValue = F("Schöttenstr.");
        break;
    }
    case 287978:
    {
        returnValue = F("Schötterer Bergweg");
        break;
    }
    case 287979:
    {
        returnValue = F("Schötterweg");
        break;
    }
    case 287980:
    {
        returnValue = F("Schöttgenstr.");
        break;
    }
    case 287981:
    {
        returnValue = F("Schötthasen");
        break;
    }
    case 287982:
    {
        returnValue = F("Schöttlerskamp");
        break;
    }
    case 287983:
    {
        returnValue = F("Schöttlestr.");
        break;
    }
    case 287984:
    {
        returnValue = F("Schöttlingen");
        break;
    }
    case 287985:
    {
        returnValue = F("Schöttlinger Str.");
        break;
    }
    case 287986:
    {
        returnValue = F("Schöttlingstr.");
        break;
    }
    case 287987:
    {
        returnValue = F("Schöttlinstr.");
        break;
    }
    case 287988:
    {
        returnValue = F("Schöttlkarspitzstr.");
        break;
    }
    case 287989:
    {
        returnValue = F("Schöttlkarstr.");
        break;
    }
    case 287990:
    {
        returnValue = F("Schöttlstr.");
        break;
    }
    case 287991:
    {
        returnValue = F("Schöttnerweg");
        break;
    }
    case 287992:
    {
        returnValue = F("Schöttroy");
        break;
    }
    case 287993:
    {
        returnValue = F("Schötweg");
        break;
    }
    case 287994:
    {
        returnValue = F("Schötzstr.");
        break;
    }
    case 287995:
    {
        returnValue = F("Schößbaumweg");
        break;
    }
    case 287996:
    {
        returnValue = F("Schößchensweg");
        break;
    }
    case 287997:
    {
        returnValue = F("Schübelbeer");
        break;
    }
    case 287998:
    {
        returnValue = F("Schübeler Str.");
        break;
    }
    case 287999:
    {
        returnValue = F("Schübelsgasse");
        break;
    }
    case 288000:
    {
        returnValue = F("Schübelweg");
        break;
    }
    case 288001:
    {
        returnValue = F("Schübleckstr.");
        break;
    }
    case 288002:
    {
        returnValue = F("Schüby");
        break;
    }
    case 288003:
    {
        returnValue = F("Schüchtermannstr.");
        break;
    }
    case 288004:
    {
        returnValue = F("Schückhausen");
        break;
    }
    case 288005:
    {
        returnValue = F("Schückinghof");
        break;
    }
    case 288006:
    {
        returnValue = F("Schückingstr.");
        break;
    }
    case 288007:
    {
        returnValue = F("Schückingweg");
        break;
    }
    case 288008:
    {
        returnValue = F("Schücostr.");
        break;
    }
    case 288009:
    {
        returnValue = F("Schüddenkamp");
        break;
    }
    case 288010:
    {
        returnValue = F("Schüdderfelderweg");
        break;
    }
    case 288011:
    {
        returnValue = F("Schüerhoffweg");
        break;
    }
    case 288012:
    {
        returnValue = F("Schüffnerstr.");
        break;
    }
    case 288013:
    {
        returnValue = F("Schüfnerweg");
        break;
    }
    case 288014:
    {
        returnValue = F("Schükingstr.");
        break;
    }
    case 288015:
    {
        returnValue = F("Schükstr.");
        break;
    }
    case 288016:
    {
        returnValue = F("Schüla-Ring");
        break;
    }
    case 288017:
    {
        returnValue = F("Schüldernhof");
        break;
    }
    case 288018:
    {
        returnValue = F("Schüleinstr.");
        break;
    }
    case 288019:
    {
        returnValue = F("Schülerberg");
        break;
    }
    case 288020:
    {
        returnValue = F("Schülergasse");
        break;
    }
    case 288021:
    {
        returnValue = F("Schülergässchen");
        break;
    }
    case 288022:
    {
        returnValue = F("Schülerhof");
        break;
    }
    case 288023:
    {
        returnValue = F("Schülerkiesel");
        break;
    }
    case 288024:
    {
        returnValue = F("Schülernbrockhof");
        break;
    }
    case 288025:
    {
        returnValue = F("Schülerner Kirchweg");
        break;
    }
    case 288026:
    {
        returnValue = F("Schülerner Str.");
        break;
    }
    case 288027:
    {
        returnValue = F("Schülerpfad");
        break;
    }
    case 288028:
    {
        returnValue = F("Schülersmühle");
        break;
    }
    case 288029:
    {
        returnValue = F("Schülerstieg");
        break;
    }
    case 288030:
    {
        returnValue = F("Schülerstr.");
        break;
    }
    case 288031:
    {
        returnValue = F("Schülerweg");
        break;
    }
    case 288032:
    {
        returnValue = F("Schülerwiese");
        break;
    }
    case 288033:
    {
        returnValue = F("Schülerwiesen");
        break;
    }
    case 288034:
    {
        returnValue = F("Schülesgasse");
        break;
    }
    case 288035:
    {
        returnValue = F("Schülestr.");
        break;
    }
    case 288036:
    {
        returnValue = F("Schülgenstr.");
        break;
    }
    case 288037:
    {
        returnValue = F("Schülinger Str.");
        break;
    }
    case 288038:
    {
        returnValue = F("Schülken-Brücke");
        break;
    }
    case 288039:
    {
        returnValue = F("Schülkestr.");
        break;
    }
    case 288040:
    {
        returnValue = F("Schüllarhammer");
        break;
    }
    case 288041:
    {
        returnValue = F("Schüllbach");
        break;
    }
    case 288042:
    {
        returnValue = F("Schüllbachweg");
        break;
    }
    case 288043:
    {
        returnValue = F("Schüllenbusch");
        break;
    }
    case 288044:
    {
        returnValue = F("Schüllenweg");
        break;
    }
    case 288045:
    {
        returnValue = F("Schüllergasse");
        break;
    }
    case 288046:
    {
        returnValue = F("Schüllerplatz");
        break;
    }
    case 288047:
    {
        returnValue = F("Schüllerstr.");
        break;
    }
    case 288048:
    {
        returnValue = F("Schüllerweg");
        break;
    }
    case 288049:
    {
        returnValue = F("Schüllsmühle");
        break;
    }
    case 288050:
    {
        returnValue = F("Schüllweg");
        break;
    }
    case 288051:
    {
        returnValue = F("Schülper Chaussee");
        break;
    }
    case 288052:
    {
        returnValue = F("Schülper Gang");
        break;
    }
    case 288053:
    {
        returnValue = F("Schülper Str.");
        break;
    }
    case 288054:
    {
        returnValue = F("Schülper Weg");
        break;
    }
    case 288055:
    {
        returnValue = F("Schülperaltensiel");
        break;
    }
    case 288056:
    {
        returnValue = F("Schülperneuensiel");
        break;
    }
    case 288057:
    {
        returnValue = F("Schülpersiel");
        break;
    }
    case 288058:
    {
        returnValue = F("Schülpersieler Str.");
        break;
    }
    case 288059:
    {
        returnValue = F("Schülpigweg");
        break;
    }
    case 288060:
    {
        returnValue = F("Schülpploogweg");
        break;
    }
    case 288061:
    {
        returnValue = F("Schülpweg");
        break;
    }
    case 288062:
    {
        returnValue = F("Schültingerstr.");
        break;
    }
    case 288063:
    {
        returnValue = F("Schültingstr.");
        break;
    }
    case 288064:
    {
        returnValue = F("Schülzburgweg");
        break;
    }
    case 288065:
    {
        returnValue = F("Schülzchenstr.");
        break;
    }
    case 288066:
    {
        returnValue = F("Schümannweg");
        break;
    }
    case 288067:
    {
        returnValue = F("Schümberg");
        break;
    }
    case 288068:
    {
        returnValue = F("Schümerei");
        break;
    }
    case 288069:
    {
        returnValue = F("Schümm");
        break;
    }
    case 288070:
    {
        returnValue = F("Schümmerichstr.");
        break;
    }
    case 288071:
    {
        returnValue = F("Schümmerstr.");
        break;
    }
    case 288072:
    {
        returnValue = F("Schün-Rieden");
        break;
    }
    case 288073:
    {
        returnValue = F("Schünbusch");
        break;
    }
    case 288074:
    {
        returnValue = F("Schünbusch Feld");
        break;
    }
    case 288075:
    {
        returnValue = F("Schündelenhöfe");
        break;
    }
    case 288076:
    {
        returnValue = F("Schünebusch");
        break;
    }
    case 288077:
    {
        returnValue = F("Schünebuschstr.");
        break;
    }
    case 288078:
    {
        returnValue = F("Schünemann-Saß-Allee");
        break;
    }
    case 288079:
    {
        returnValue = F("Schünemann-Weg");
        break;
    }
    case 288080:
    {
        returnValue = F("Schünenhof");
        break;
    }
    case 288081:
    {
        returnValue = F("Schünenkamp");
        break;
    }
    case 288082:
    {
        returnValue = F("Schünenriehe");
        break;
    }
    case 288083:
    {
        returnValue = F("Schüngeler Weg");
        break;
    }
    case 288084:
    {
        returnValue = F("Schüngelgasse");
        break;
    }
    case 288085:
    {
        returnValue = F("Schüngelstr.");
        break;
    }
    case 288086:
    {
        returnValue = F("Schünhoff");
        break;
    }
    case 288087:
    {
        returnValue = F("Schünower Chaussee");
        break;
    }
    case 288088:
    {
        returnValue = F("Schünower Str.");
        break;
    }
    case 288089:
    {
        returnValue = F("Schünower Weg");
        break;
    }
    case 288090:
    {
        returnValue = F("Schüpfelsweg");
        break;
    }
    case 288091:
    {
        returnValue = F("Schüpfenstr.");
        break;
    }
    case 288092:
    {
        returnValue = F("Schüpfer Str.");
        break;
    }
    case 288093:
    {
        returnValue = F("Schüppenstiel");
        break;
    }
    case 288094:
    {
        returnValue = F("Schüptitz");
        break;
    }
    case 288095:
    {
        returnValue = F("Schürbusch");
        break;
    }
    case 288096:
    {
        returnValue = F("Schürbuschstr.");
        break;
    }
    case 288097:
    {
        returnValue = F("Schürckmannstr.");
        break;
    }
    case 288098:
    {
        returnValue = F("Schüreichhofen");
        break;
    }
    case 288099:
    {
        returnValue = F("Schüren");
        break;
    }
    case 288100:
    {
        returnValue = F("Schürenbreder Weg");
        break;
    }
    case 288101:
    {
        returnValue = F("Schürenbruch");
        break;
    }
    case 288102:
    {
        returnValue = F("Schürenbuschweg");
        break;
    }
    case 288103:
    {
        returnValue = F("Schürener Str.");
        break;
    }
    case 288104:
    {
        returnValue = F("Schürenheck");
        break;
    }
    case 288105:
    {
        returnValue = F("Schürenhofweg");
        break;
    }
    case 288106:
    {
        returnValue = F("Schürenholz");
        break;
    }
    case 288107:
    {
        returnValue = F("Schürenkamp");
        break;
    }
    case 288108:
    {
        returnValue = F("Schürenkampstr.");
        break;
    }
    case 288109:
    {
        returnValue = F("Schürenknapp");
        break;
    }
    case 288110:
    {
        returnValue = F("Schürenküppel");
        break;
    }
    case 288111:
    {
        returnValue = F("Schürenpass");
        break;
    }
    case 288112:
    {
        returnValue = F("Schürensteg");
        break;
    }
    case 288113:
    {
        returnValue = F("Schürenstr.");
        break;
    }
    case 288114:
    {
        returnValue = F("Schürenstätte");
        break;
    }
    case 288115:
    {
        returnValue = F("Schürenstück");
        break;
    }
    case 288116:
    {
        returnValue = F("Schürenweg");
        break;
    }
    case 288117:
    {
        returnValue = F("Schürer Weg");
        break;
    }
    case 288118:
    {
        returnValue = F("Schürerweg");
        break;
    }
    case 288119:
    {
        returnValue = F("Schürfelde");
        break;
    }
    case 288120:
    {
        returnValue = F("Schürffeld");
        break;
    }
    case 288121:
    {
        returnValue = F("Schürfweg");
        break;
    }
    case 288122:
    {
        returnValue = F("Schürgespfad");
        break;
    }
    case 288123:
    {
        returnValue = F("Schürhaubrunnenstr.");
        break;
    }
    case 288124:
    {
        returnValue = F("Schürhofer Str.");
        break;
    }
    case 288125:
    {
        returnValue = F("Schürhofweg");
        break;
    }
    case 288126:
    {
        returnValue = F("Schürholz");
        break;
    }
    case 288127:
    {
        returnValue = F("Schürholzer Str.");
        break;
    }
    case 288128:
    {
        returnValue = F("Schürholzstr.");
        break;
    }
    case 288129:
    {
        returnValue = F("Schürhöhe");
        break;
    }
    case 288130:
    {
        returnValue = F("Schürhölzleweg");
        break;
    }
    case 288131:
    {
        returnValue = F("Schüringsweg");
        break;
    }
    case 288132:
    {
        returnValue = F("Schürkamp");
        break;
    }
    case 288133:
    {
        returnValue = F("Schürkampallee");
        break;
    }
    case 288134:
    {
        returnValue = F("Schürkampsweg");
        break;
    }
    case 288135:
    {
        returnValue = F("Schürkampweg");
        break;
    }
    case 288136:
    {
        returnValue = F("Schürkesweg");
        break;
    }
    case 288137:
    {
        returnValue = F("Schürkopfrundweg");
        break;
    }
    case 288138:
    {
        returnValue = F("Schürlebergweg");
        break;
    }
    case 288139:
    {
        returnValue = F("Schürmann-Horster-Weg");
        break;
    }
    case 288140:
    {
        returnValue = F("Schürmannring");
        break;
    }
    case 288141:
    {
        returnValue = F("Schürmanns Heide");
        break;
    }
    case 288142:
    {
        returnValue = F("Schürmanns Kamp");
        break;
    }
    case 288143:
    {
        returnValue = F("Schürmannshof");
        break;
    }
    case 288144:
    {
        returnValue = F("Schürmannstr.");
        break;
    }
    case 288145:
    {
        returnValue = F("Schürmannsweg");
        break;
    }
    case 288146:
    {
        returnValue = F("Schürmannweg");
        break;
    }
    case 288147:
    {
        returnValue = F("Schürmansweg");
        break;
    }
    case 288148:
    {
        returnValue = F("Schürmesweg");
        break;
    }
    case 288149:
    {
        returnValue = F("Schürnbuschweg");
        break;
    }
    case 288150:
    {
        returnValue = F("Schürrstr.");
        break;
    }
    case 288151:
    {
        returnValue = F("Schürscheid");
        break;
    }
    case 288152:
    {
        returnValue = F("Schürsdorfer Fierth");
        break;
    }
    case 288153:
    {
        returnValue = F("Schürstatt");
        break;
    }
    case 288154:
    {
        returnValue = F("Schürstelle");
        break;
    }
    case 288155:
    {
        returnValue = F("Schürstr.");
        break;
    }
    case 288156:
    {
        returnValue = F("Schürten");
        break;
    }
    case 288157:
    {
        returnValue = F("Schürweg");
        break;
    }
    case 288158:
    {
        returnValue = F("Schürzingerstr.");
        break;
    }
    case 288159:
    {
        returnValue = F("Schüsselberg");
        break;
    }
    case 288160:
    {
        returnValue = F("Schüsselbruch");
        break;
    }
    case 288161:
    {
        returnValue = F("Schüsselbächleweg");
        break;
    }
    case 288162:
    {
        returnValue = F("Schüsselgrund");
        break;
    }
    case 288163:
    {
        returnValue = F("Schüsselhauser Str.");
        break;
    }
    case 288164:
    {
        returnValue = F("Schüsselhauser Weg");
        break;
    }
    case 288165:
    {
        returnValue = F("Schüsselkarweg");
        break;
    }
    case 288166:
    {
        returnValue = F("Schüssellehen");
        break;
    }
    case 288167:
    {
        returnValue = F("Schüsselmarkt");
        break;
    }
    case 288168:
    {
        returnValue = F("Schüsselstr.");
        break;
    }
    case 288169:
    {
        returnValue = F("Schüsslerstr.");
        break;
    }
    case 288170:
    {
        returnValue = F("Schütenhofstr.");
        break;
    }
    case 288171:
    {
        returnValue = F("Schütenweg");
        break;
    }
    case 288172:
    {
        returnValue = F("Schütgensweg");
        break;
    }
    case 288173:
    {
        returnValue = F("Schütt");
        break;
    }
    case 288174:
    {
        returnValue = F("Schütt Ausbau");
        break;
    }
    case 288175:
    {
        returnValue = F("Schüttacker");
        break;
    }
    case 288176:
    {
        returnValue = F("Schüttberg");
        break;
    }
    case 288177:
    {
        returnValue = F("Schüttberger Hauptstr.");
        break;
    }
    case 288178:
    {
        returnValue = F("Schüttdamm");
        break;
    }
    case 288179:
    {
        returnValue = F("Schüttdeelsweg");
        break;
    }
    case 288180:
    {
        returnValue = F("Schütte");
        break;
    }
    case 288181:
    {
        returnValue = F("Schütte Pad");
        break;
    }
    case 288182:
    {
        returnValue = F("Schütte-Lanz-Str.");
        break;
    }
    case 288183:
    {
        returnValue = F("Schütte-Lanz-Weg");
        break;
    }
    case 288184:
    {
        returnValue = F("Schüttelberg");
        break;
    }
    case 288185:
    {
        returnValue = F("Schüttelhorst");
        break;
    }
    case 288186:
    {
        returnValue = F("Schütteloher Weg");
        break;
    }
    case 288187:
    {
        returnValue = F("Schüttelweg");
        break;
    }
    case 288188:
    {
        returnValue = F("Schütteläcker");
        break;
    }
    case 288189:
    {
        returnValue = F("Schütten Kamp");
        break;
    }
    case 288190:
    {
        returnValue = F("Schütten Weg");
        break;
    }
    case 288191:
    {
        returnValue = F("Schütten Wiese");
        break;
    }
    case 288192:
    {
        returnValue = F("Schüttenbarg");
        break;
    }
    case 288193:
    {
        returnValue = F("Schüttenberg");
        break;
    }
    case 288194:
    {
        returnValue = F("Schüttendeich");
        break;
    }
    case 288195:
    {
        returnValue = F("Schüttendelle");
        break;
    }
    case 288196:
    {
        returnValue = F("Schüttenesch");
        break;
    }
    case 288197:
    {
        returnValue = F("Schüttenfeld");
        break;
    }
    case 288198:
    {
        returnValue = F("Schüttengang");
        break;
    }
    case 288199:
    {
        returnValue = F("Schüttenheide");
        break;
    }
    case 288200:
    {
        returnValue = F("Schüttenhelmstr.");
        break;
    }
    case 288201:
    {
        returnValue = F("Schüttenhengst");
        break;
    }
    case 288202:
    {
        returnValue = F("Schüttenhof");
        break;
    }
    case 288203:
    {
        returnValue = F("Schüttenhoff");
        break;
    }
    case 288204:
    {
        returnValue = F("Schüttenhus Weg");
        break;
    }
    case 288205:
    {
        returnValue = F("Schüttenkamp");
        break;
    }
    case 288206:
    {
        returnValue = F("Schüttenmoor");
        break;
    }
    case 288207:
    {
        returnValue = F("Schüttenredder");
        break;
    }
    case 288208:
    {
        returnValue = F("Schüttenrode");
        break;
    }
    case 288209:
    {
        returnValue = F("Schüttensteiner Str.");
        break;
    }
    case 288210:
    {
        returnValue = F("Schüttensteiner Weg");
        break;
    }
    case 288211:
    {
        returnValue = F("Schüttenstieg");
        break;
    }
    case 288212:
    {
        returnValue = F("Schüttentobel");
        break;
    }
    case 288213:
    {
        returnValue = F("Schüttenwall");
        break;
    }
    case 288214:
    {
        returnValue = F("Schüttenweg");
        break;
    }
    case 288215:
    {
        returnValue = F("Schütterbarg");
        break;
    }
    case 288216:
    {
        returnValue = F("Schütterberg");
        break;
    }
    case 288217:
    {
        returnValue = F("Schütterei");
        break;
    }
    case 288218:
    {
        returnValue = F("Schütterhaustr.");
        break;
    }
    case 288219:
    {
        returnValue = F("Schüttersmühle");
        break;
    }
    case 288220:
    {
        returnValue = F("Schütterweg");
        break;
    }
    case 288221:
    {
        returnValue = F("Schüttestr.");
        break;
    }
    case 288222:
    {
        returnValue = F("Schüttewall");
        break;
    }
    case 288223:
    {
        returnValue = F("Schütteweg");
        break;
    }
    case 288224:
    {
        returnValue = F("Schüttfeldstr.");
        break;
    }
    case 288225:
    {
        returnValue = F("Schüttgasse");
        break;
    }
    case 288226:
    {
        returnValue = F("Schütthag");
        break;
    }
    case 288227:
    {
        returnValue = F("Schütthagensbrook");
        break;
    }
    case 288228:
    {
        returnValue = F("Schütthalde");
        break;
    }
    case 288229:
    {
        returnValue = F("Schüttholzweg");
        break;
    }
    case 288230:
    {
        returnValue = F("Schütthörnweg");
        break;
    }
    case 288231:
    {
        returnValue = F("Schütting");
        break;
    }
    case 288232:
    {
        returnValue = F("Schüttingdeich");
        break;
    }
    case 288233:
    {
        returnValue = F("Schüttingstr.");
        break;
    }
    case 288234:
    {
        returnValue = F("Schüttkaufweg");
        break;
    }
    case 288235:
    {
        returnValue = F("Schüttkobengang");
        break;
    }
    case 288236:
    {
        returnValue = F("Schüttkobenweg");
        break;
    }
    case 288237:
    {
        returnValue = F("Schüttleweg");
        break;
    }
    case 288238:
    {
        returnValue = F("Schüttorfer Str.");
        break;
    }
    case 288239:
    {
        returnValue = F("Schüttringer Str.");
        break;
    }
    case 288240:
    {
        returnValue = F("Schüttschott");
        break;
    }
    case 288241:
    {
        returnValue = F("Schüttstr.");
        break;
    }
    case 288242:
    {
        returnValue = F("Schüttwall");
        break;
    }
    case 288243:
    {
        returnValue = F("Schüttweg");
        break;
    }
    case 288244:
    {
        returnValue = F("Schütz-Weg");
        break;
    }
    case 288245:
    {
        returnValue = F("Schütz-von-Rode-Str.");
        break;
    }
    case 288246:
    {
        returnValue = F("Schütz-zu-Holzhausen-Str.");
        break;
    }
    case 288247:
    {
        returnValue = F("Schützbahn");
        break;
    }
    case 288248:
    {
        returnValue = F("Schützberg");
        break;
    }
    case 288249:
    {
        returnValue = F("Schützbitz");
        break;
    }
    case 288250:
    {
        returnValue = F("Schützeberger Str.");
        break;
    }
    case 288251:
    {
        returnValue = F("Schützeiche");
        break;
    }
    case 288252:
    {
        returnValue = F("Schützelstr.");
        break;
    }
    case 288253:
    {
        returnValue = F("Schützelwiesen");
        break;
    }
    case 288254:
    {
        returnValue = F("Schützenallee");
        break;
    }
    case 288255:
    {
        returnValue = F("Schützenanger");
        break;
    }
    case 288256:
    {
        returnValue = F("Schützenaustr.");
        break;
    }
    case 288257:
    {
        returnValue = F("Schützenbachweg");
        break;
    }
    case 288258:
    {
        returnValue = F("Schützenbahn");
        break;
    }
    case 288259:
    {
        returnValue = F("Schützenbaum");
        break;
    }
    case 288260:
    {
        returnValue = F("Schützenberg");
        break;
    }
    case 288261:
    {
        returnValue = F("Schützenbergstr.");
        break;
    }
    case 288262:
    {
        returnValue = F("Schützenbeulen");
        break;
    }
    case 288263:
    {
        returnValue = F("Schützenbleek");
        break;
    }
    case 288264:
    {
        returnValue = F("Schützenbogen");
        break;
    }
    case 288265:
    {
        returnValue = F("Schützenbornstr.");
        break;
    }
    case 288266:
    {
        returnValue = F("Schützenbruch");
        break;
    }
    case 288267:
    {
        returnValue = F("Schützenbrücke");
        break;
    }
    case 288268:
    {
        returnValue = F("Schützenbühl");
        break;
    }
    case 288269:
    {
        returnValue = F("Schützendelle");
        break;
    }
    case 288270:
    {
        returnValue = F("Schützenellerweg");
        break;
    }
    case 288271:
    {
        returnValue = F("Schützengarten");
        break;
    }
    case 288272:
    {
        returnValue = F("Schützengartenstr.");
        break;
    }
    case 288273:
    {
        returnValue = F("Schützengartenweg");
        break;
    }
    case 288274:
    {
        returnValue = F("Schützengasse");
        break;
    }
    case 288275:
    {
        returnValue = F("Schützengraben");
        break;
    }
    case 288276:
    {
        returnValue = F("Schützengrund");
        break;
    }
    case 288277:
    {
        returnValue = F("Schützengässle");
        break;
    }
    case 288278:
    {
        returnValue = F("Schützengäßchen");
        break;
    }
    case 288279:
    {
        returnValue = F("Schützengäßle");
        break;
    }
    case 288280:
    {
        returnValue = F("Schützenhagen");
        break;
    }
    case 288281:
    {
        returnValue = F("Schützenhaus");
        break;
    }
    case 288282:
    {
        returnValue = F("Schützenhaus-Sträßchen");
        break;
    }
    case 288283:
    {
        returnValue = F("Schützenhauser Flügel");
        break;
    }
    case 288284:
    {
        returnValue = F("Schützenhausplatz");
        break;
    }
    case 288285:
    {
        returnValue = F("Schützenhausstr.");
        break;
    }
    case 288286:
    {
        returnValue = F("Schützenhausweg");
        break;
    }
    case 288287:
    {
        returnValue = F("Schützenheim");
        break;
    }
    case 288288:
    {
        returnValue = F("Schützenheimweg");
        break;
    }
    case 288289:
    {
        returnValue = F("Schützenhof");
        break;
    }
    case 288290:
    {
        returnValue = F("Schützenhofallee");
        break;
    }
    case 288291:
    {
        returnValue = F("Schützenhofbusch");
        break;
    }
    case 288292:
    {
        returnValue = F("Schützenhofpark");
        break;
    }
    case 288293:
    {
        returnValue = F("Schützenhofstr.");
        break;
    }
    case 288294:
    {
        returnValue = F("Schützenhofweg");
        break;
    }
    case 288295:
    {
        returnValue = F("Schützenhol");
        break;
    }
    case 288296:
    {
        returnValue = F("Schützenholz");
        break;
    }
    case 288297:
    {
        returnValue = F("Schützenholzstr.");
        break;
    }
    case 288298:
    {
        returnValue = F("Schützenhäuslesweg");
        break;
    }
    case 288299:
    {
        returnValue = F("Schützenhöfle");
        break;
    }
    case 288300:
    {
        returnValue = F("Schützenhöhe");
        break;
    }
    case 288301:
    {
        returnValue = F("Schützenhügel");
        break;
    }
    case 288302:
    {
        returnValue = F("Schützenkamp");
        break;
    }
    case 288303:
    {
        returnValue = F("Schützenkaul");
        break;
    }
    case 288304:
    {
        returnValue = F("Schützenklinge");
        break;
    }
    case 288305:
    {
        returnValue = F("Schützenkoppel");
        break;
    }
    case 288306:
    {
        returnValue = F("Schützenkreisel");
        break;
    }
    case 288307:
    {
        returnValue = F("Schützenkuhle");
        break;
    }
    case 288308:
    {
        returnValue = F("Schützenlaube");
        break;
    }
    case 288309:
    {
        returnValue = F("Schützenleite");
        break;
    }
    case 288310:
    {
        returnValue = F("Schützenmahdenstr.");
        break;
    }
    case 288311:
    {
        returnValue = F("Schützenmattweg");
        break;
    }
    case 288312:
    {
        returnValue = F("Schützenmauer");
        break;
    }
    case 288313:
    {
        returnValue = F("Schützenmuseum");
        break;
    }
    case 288314:
    {
        returnValue = F("Schützenpark");
        break;
    }
    case 288315:
    {
        returnValue = F("Schützenpfad");
        break;
    }
    case 288316:
    {
        returnValue = F("Schützenplatz");
        break;
    }
    case 288317:
    {
        returnValue = F("Schützenplatz Eckum");
        break;
    }
    case 288318:
    {
        returnValue = F("Schützenplatz Heedfeld");
        break;
    }
    case 288319:
    {
        returnValue = F("Schützenplatz Iseringhausen");
        break;
    }
    case 288320:
    {
        returnValue = F("Schützenplatz Letter");
        break;
    }
    case 288321:
    {
        returnValue = F("Schützenplatz Pfaffendorf");
        break;
    }
    case 288322:
    {
        returnValue = F("Schützenplatz Schützenverein Lau-Brechte");
        break;
    }
    case 288323:
    {
        returnValue = F("Schützenplatz Stukenbrock");
        break;
    }
    case 288324:
    {
        returnValue = F("Schützenplatz Stukenbrock-Senne");
        break;
    }
    case 288325:
    {
        returnValue = F("Schützenplatz Vahrendorf");
        break;
    }
    case 288326:
    {
        returnValue = F("Schützenplatz Wessum");
        break;
    }
    case 288327:
    {
        returnValue = F("Schützenplatz, Am Spieker");
        break;
    }
    case 288328:
    {
        returnValue = F("Schützenplatzallee");
        break;
    }
    case 288329:
    {
        returnValue = F("Schützenplatzschneise");
        break;
    }
    case 288330:
    {
        returnValue = F("Schützenplatzstr.");
        break;
    }
    case 288331:
    {
        returnValue = F("Schützenplatzweg");
        break;
    }
    case 288332:
    {
        returnValue = F("Schützenrain");
        break;
    }
    case 288333:
    {
        returnValue = F("Schützenrainweg");
        break;
    }
    case 288334:
    {
        returnValue = F("Schützenrasen");
        break;
    }
    case 288335:
    {
        returnValue = F("Schützenredder");
        break;
    }
    case 288336:
    {
        returnValue = F("Schützenring");
        break;
    }
    case 288337:
    {
        returnValue = F("Schützenschneise");
        break;
    }
    case 288338:
    {
        returnValue = F("Schützensiepen");
        break;
    }
    case 288339:
    {
        returnValue = F("Schützensteig");
        break;
    }
    case 288340:
    {
        returnValue = F("Schützensteige");
        break;
    }
    case 288341:
    {
        returnValue = F("Schützenstein");
        break;
    }
    case 288342:
    {
        returnValue = F("Schützenstieg");
        break;
    }
    case 288343:
    {
        returnValue = F("Schützenstiege");
        break;
    }
    case 288344:
    {
        returnValue = F("Schützenstr.");
        break;
    }
    case 288345:
    {
        returnValue = F("Schützenstr. - Sandgrubenweg");
        break;
    }
    case 288346:
    {
        returnValue = F("Schützentor");
        break;
    }
    case 288347:
    {
        returnValue = F("Schützentorstr.");
        break;
    }
    case 288348:
    {
        returnValue = F("Schützentrift");
        break;
    }
    case 288349:
    {
        returnValue = F("Schützentwete");
        break;
    }
    case 288350:
    {
        returnValue = F("Schützenverein Werdorf 1961 e.V.");
        break;
    }
    case 288351:
    {
        returnValue = F("Schützenwald");
        break;
    }
    case 288352:
    {
        returnValue = F("Schützenwaldstr.");
        break;
    }
    case 288353:
    {
        returnValue = F("Schützenwaldweg");
        break;
    }
    case 288354:
    {
        returnValue = F("Schützenwall");
        break;
    }
    case 288355:
    {
        returnValue = F("Schützenweg");
        break;
    }
    case 288356:
    {
        returnValue = F("Schützenwehr Niederhof");
        break;
    }
    case 288357:
    {
        returnValue = F("Schützenwerth");
        break;
    }
    case 288358:
    {
        returnValue = F("Schützenwiese");
        break;
    }
    case 288359:
    {
        returnValue = F("Schützenwiesenweg");
        break;
    }
    case 288360:
    {
        returnValue = F("Schützenworth");
        break;
    }
    case 288361:
    {
        returnValue = F("Schützenzaun");
        break;
    }
    case 288362:
    {
        returnValue = F("Schützenzeltplatz");
        break;
    }
    case 288363:
    {
        returnValue = F("Schützenäckerle");
        break;
    }
    case 288364:
    {
        returnValue = F("Schützenöschle Rundweg");
        break;
    }
    case 288365:
    {
        returnValue = F("Schützestr.");
        break;
    }
    case 288366:
    {
        returnValue = F("Schützfelder Weg");
        break;
    }
    case 288367:
    {
        returnValue = F("Schützgasse");
        break;
    }
    case 288368:
    {
        returnValue = F("Schützheide");
        break;
    }
    case 288369:
    {
        returnValue = F("Schützheider Weg");
        break;
    }
    case 288370:
    {
        returnValue = F("Schützhofweg");
        break;
    }
    case 288371:
    {
        returnValue = F("Schützing");
        break;
    }
    case 288372:
    {
        returnValue = F("Schützinger Kirchweg");
        break;
    }
    case 288373:
    {
        returnValue = F("Schützinger Str.");
        break;
    }
    case 288374:
    {
        returnValue = F("Schützinger Weg");
        break;
    }
    case 288375:
    {
        returnValue = F("Schützingerweg");
        break;
    }
    case 288376:
    {
        returnValue = F("Schützlerbergstr.");
        break;
    }
    case 288377:
    {
        returnValue = F("Schützstr.");
        break;
    }
    case 288378:
    {
        returnValue = F("Schützwanne");
        break;
    }
    case 288379:
    {
        returnValue = F("Schützweg");
        break;
    }
    case 288380:
    {
        returnValue = F("Schüßlers Weg");
        break;
    }
    case 288381:
    {
        returnValue = F("Schüßlerstr.");
        break;
    }
    case 288382:
    {
        returnValue = F("Schüürmannsweg");
        break;
    }
    case 288383:
    {
        returnValue = F("Scillawaldstr.");
        break;
    }
    case 288384:
    {
        returnValue = F("Scipiostr.");
        break;
    }
    case 288385:
    {
        returnValue = F("Sckellstr.");
        break;
    }
    case 288386:
    {
        returnValue = F("Sclammerl");
        break;
    }
    case 288387:
    {
        returnValue = F("Scmötzerstr.");
        break;
    }
    case 288388:
    {
        returnValue = F("Scottstr.");
        break;
    }
    case 288389:
    {
        returnValue = F("Scottweg");
        break;
    }
    case 288390:
    {
        returnValue = F("Scratostr.");
        break;
    }
    case 288391:
    {
        returnValue = F("Scribastr.");
        break;
    }
    case 288392:
    {
        returnValue = F("Scultetusstr.");
        break;
    }
    case 288393:
    {
        returnValue = F("Scunthorpeplatz");
        break;
    }
    case 288394:
    {
        returnValue = F("Seafordkehre");
        break;
    }
    case 288395:
    {
        returnValue = F("Seb.-Kneipp-Anlage");
        break;
    }
    case 288396:
    {
        returnValue = F("Seb.-Sailer-Str.");
        break;
    }
    case 288397:
    {
        returnValue = F("Sebald-Hirder-Str.");
        break;
    }
    case 288398:
    {
        returnValue = F("Sebald-Kopp-Str.");
        break;
    }
    case 288399:
    {
        returnValue = F("Sebald-Mayer-Str.");
        break;
    }
    case 288400:
    {
        returnValue = F("Sebald-Rieter-Weg");
        break;
    }
    case 288401:
    {
        returnValue = F("Sebald-Waldstein-Str.");
        break;
    }
    case 288402:
    {
        returnValue = F("Sebalder Forstweg");
        break;
    }
    case 288403:
    {
        returnValue = F("Sebalder Str.");
        break;
    }
    case 288404:
    {
        returnValue = F("Sebaldkoppel");
        break;
    }
    case 288405:
    {
        returnValue = F("Sebaldstr.");
        break;
    }
    case 288406:
    {
        returnValue = F("Sebaldusstr.");
        break;
    }
    case 288407:
    {
        returnValue = F("Sebastian Kneipp Weg - Park");
        break;
    }
    case 288408:
    {
        returnValue = F("Sebastian Kneipstr.");
        break;
    }
    case 288409:
    {
        returnValue = F("Sebastian-Bach-Platz");
        break;
    }
    case 288410:
    {
        returnValue = F("Sebastian-Bach-Promenade");
        break;
    }
    case 288411:
    {
        returnValue = F("Sebastian-Bach-Str.");
        break;
    }
    case 288412:
    {
        returnValue = F("Sebastian-Bach-Weg");
        break;
    }
    case 288413:
    {
        returnValue = F("Sebastian-Blau-Str.");
        break;
    }
    case 288414:
    {
        returnValue = F("Sebastian-Blau-Weg");
        break;
    }
    case 288415:
    {
        returnValue = F("Sebastian-Brant-Str.");
        break;
    }
    case 288416:
    {
        returnValue = F("Sebastian-Degginger-Weg");
        break;
    }
    case 288417:
    {
        returnValue = F("Sebastian-Eberhard-Str.");
        break;
    }
    case 288418:
    {
        returnValue = F("Sebastian-Eckardt-Str.");
        break;
    }
    case 288419:
    {
        returnValue = F("Sebastian-Engler-Str.");
        break;
    }
    case 288420:
    {
        returnValue = F("Sebastian-Englert-Str.");
        break;
    }
    case 288421:
    {
        returnValue = F("Sebastian-Englerth-Str.");
        break;
    }
    case 288422:
    {
        returnValue = F("Sebastian-Fackelmann-Str.");
        break;
    }
    case 288423:
    {
        returnValue = F("Sebastian-Fischer-Weg");
        break;
    }
    case 288424:
    {
        returnValue = F("Sebastian-Franck-Str.");
        break;
    }
    case 288425:
    {
        returnValue = F("Sebastian-Furck-Str.");
        break;
    }
    case 288426:
    {
        returnValue = F("Sebastian-Gratzl-Str.");
        break;
    }
    case 288427:
    {
        returnValue = F("Sebastian-Hausler-Str.");
        break;
    }
    case 288428:
    {
        returnValue = F("Sebastian-Herbst-Str.");
        break;
    }
    case 288429:
    {
        returnValue = F("Sebastian-Hofstetter-Str.");
        break;
    }
    case 288430:
    {
        returnValue = F("Sebastian-Höß-Str.");
        break;
    }
    case 288431:
    {
        returnValue = F("Sebastian-Jaud-Str.");
        break;
    }
    case 288432:
    {
        returnValue = F("Sebastian-Kirsch-Str.");
        break;
    }
    case 288433:
    {
        returnValue = F("Sebastian-Kneipp-Allee");
        break;
    }
    case 288434:
    {
        returnValue = F("Sebastian-Kneipp-Brücke");
        break;
    }
    case 288435:
    {
        returnValue = F("Sebastian-Kneipp-Park");
        break;
    }
    case 288436:
    {
        returnValue = F("Sebastian-Kneipp-Platz");
        break;
    }
    case 288437:
    {
        returnValue = F("Sebastian-Kneipp-Promenade");
        break;
    }
    case 288438:
    {
        returnValue = F("Sebastian-Kneipp-Steg");
        break;
    }
    case 288439:
    {
        returnValue = F("Sebastian-Kneipp-Str.");
        break;
    }
    case 288440:
    {
        returnValue = F("Sebastian-Kneipp-Weg");
        break;
    }
    case 288441:
    {
        returnValue = F("Sebastian-Kurtz-Str.");
        break;
    }
    case 288442:
    {
        returnValue = F("Sebastian-Leicht-Str.");
        break;
    }
    case 288443:
    {
        returnValue = F("Sebastian-Lindenast-Str.");
        break;
    }
    case 288444:
    {
        returnValue = F("Sebastian-Lorenz-Str.");
        break;
    }
    case 288445:
    {
        returnValue = F("Sebastian-Lotzer-Str.");
        break;
    }
    case 288446:
    {
        returnValue = F("Sebastian-Löffelholz-Str.");
        break;
    }
    case 288447:
    {
        returnValue = F("Sebastian-Miller-Weg");
        break;
    }
    case 288448:
    {
        returnValue = F("Sebastian-Mutschelle-Str.");
        break;
    }
    case 288449:
    {
        returnValue = F("Sebastian-Münster-Str.");
        break;
    }
    case 288450:
    {
        returnValue = F("Sebastian-Ott-Weg");
        break;
    }
    case 288451:
    {
        returnValue = F("Sebastian-Pfriem-Str.");
        break;
    }
    case 288452:
    {
        returnValue = F("Sebastian-Pöttinger-Weg");
        break;
    }
    case 288453:
    {
        returnValue = F("Sebastian-Reiter-Str.");
        break;
    }
    case 288454:
    {
        returnValue = F("Sebastian-Reithmayer-Str.");
        break;
    }
    case 288455:
    {
        returnValue = F("Sebastian-Riegele-Weg");
        break;
    }
    case 288456:
    {
        returnValue = F("Sebastian-Rieger-Str.");
        break;
    }
    case 288457:
    {
        returnValue = F("Sebastian-Sailer-Str.");
        break;
    }
    case 288458:
    {
        returnValue = F("Sebastian-Sailer-Weg");
        break;
    }
    case 288459:
    {
        returnValue = F("Sebastian-Schertlin-Str.");
        break;
    }
    case 288460:
    {
        returnValue = F("Sebastian-Schwarz-Str.");
        break;
    }
    case 288461:
    {
        returnValue = F("Sebastian-Schöler-Weg");
        break;
    }
    case 288462:
    {
        returnValue = F("Sebastian-Schütz-Str.");
        break;
    }
    case 288463:
    {
        returnValue = F("Sebastian-Steiner-Weg");
        break;
    }
    case 288464:
    {
        returnValue = F("Sebastian-Stolz-Str.");
        break;
    }
    case 288465:
    {
        returnValue = F("Sebastian-Stoskopff-Weg");
        break;
    }
    case 288466:
    {
        returnValue = F("Sebastian-Straub-Str.");
        break;
    }
    case 288467:
    {
        returnValue = F("Sebastian-Trossner-Str.");
        break;
    }
    case 288468:
    {
        returnValue = F("Sebastian-Wagner-Str.");
        break;
    }
    case 288469:
    {
        returnValue = F("Sebastian-Weinzierl-Str.");
        break;
    }
    case 288470:
    {
        returnValue = F("Sebastian-Wierer-Str.");
        break;
    }
    case 288471:
    {
        returnValue = F("Sebastian-Willis-Weg");
        break;
    }
    case 288472:
    {
        returnValue = F("Sebastian-Wunderlich-Str.");
        break;
    }
    case 288473:
    {
        returnValue = F("Sebastian-Zeißner-Str.");
        break;
    }
    case 288474:
    {
        returnValue = F("Sebastian-von-Heusenstamm-Str.");
        break;
    }
    case 288475:
    {
        returnValue = F("Sebastianallee");
        break;
    }
    case 288476:
    {
        returnValue = F("Sebastiangasse");
        break;
    }
    case 288477:
    {
        returnValue = F("Sebastiani Steg");
        break;
    }
    case 288478:
    {
        returnValue = F("Sebastianigasse");
        break;
    }
    case 288479:
    {
        returnValue = F("Sebastianiplatz");
        break;
    }
    case 288480:
    {
        returnValue = F("Sebastianiring");
        break;
    }
    case 288481:
    {
        returnValue = F("Sebastianistr.");
        break;
    }
    case 288482:
    {
        returnValue = F("Sebastianiweg");
        break;
    }
    case 288483:
    {
        returnValue = F("Sebastianring");
        break;
    }
    case 288484:
    {
        returnValue = F("Sebastians Hof");
        break;
    }
    case 288485:
    {
        returnValue = F("Sebastiansberg");
        break;
    }
    case 288486:
    {
        returnValue = F("Sebastiansbrunnstr.");
        break;
    }
    case 288487:
    {
        returnValue = F("Sebastiansgasse");
        break;
    }
    case 288488:
    {
        returnValue = F("Sebastianshof");
        break;
    }
    case 288489:
    {
        returnValue = F("Sebastianspark");
        break;
    }
    case 288490:
    {
        returnValue = F("Sebastiansplatz");
        break;
    }
    case 288491:
    {
        returnValue = F("Sebastiansstr.");
        break;
    }
    case 288492:
    {
        returnValue = F("Sebastianstr.");
        break;
    }
    case 288493:
    {
        returnValue = F("Sebastiansweg");
        break;
    }
    case 288494:
    {
        returnValue = F("Sebastiansweiler");
        break;
    }
    case 288495:
    {
        returnValue = F("Sebastiansweiler Str.");
        break;
    }
    case 288496:
    {
        returnValue = F("Sebastianusgasse");
        break;
    }
    case 288497:
    {
        returnValue = F("Sebastianushöhe");
        break;
    }
    case 288498:
    {
        returnValue = F("Sebastianusplatz");
        break;
    }
    case 288499:
    {
        returnValue = F("Sebastianusstr.");
        break;
    }
    case 288500:
    {
        returnValue = F("Sebastianuswall");
        break;
    }
    case 288501:
    {
        returnValue = F("Sebastianusweg");
        break;
    }
    case 288502:
    {
        returnValue = F("Sebastianweg");
        break;
    }
    case 288503:
    {
        returnValue = F("Sebastistr.");
        break;
    }
    case 288504:
    {
        returnValue = F("Sebastopol");
        break;
    }
    case 288505:
    {
        returnValue = F("Sebaweg");
        break;
    }
    case 288506:
    {
        returnValue = F("Sebbelheide");
        break;
    }
    case 288507:
    {
        returnValue = F("Sebbenhausener Str.");
        break;
    }
    case 288508:
    {
        returnValue = F("Sebensweg");
        break;
    }
    case 288509:
    {
        returnValue = F("Sebenter Weg");
        break;
    }
    case 288510:
    {
        returnValue = F("Sebertsweg");
        break;
    }
    case 288511:
    {
        returnValue = F("Sebigsweg");
        break;
    }
    case 288512:
    {
        returnValue = F("Sebnitzer Ring");
        break;
    }
    case 288513:
    {
        returnValue = F("Sebnitzer Str.");
        break;
    }
    case 288514:
    {
        returnValue = F("Sebnitztalstr.");
        break;
    }
    case 288515:
    {
        returnValue = F("Seboldshäuser Str.");
        break;
    }
    case 288516:
    {
        returnValue = F("Seboldwiesenstr.");
        break;
    }
    case 288517:
    {
        returnValue = F("Sebrinksheide");
        break;
    }
    case 288518:
    {
        returnValue = F("Sebstr.");
        break;
    }
    case 288519:
    {
        returnValue = F("Sechenfahrter Str.");
        break;
    }
    case 288520:
    {
        returnValue = F("Sechs");
        break;
    }
    case 288521:
    {
        returnValue = F("Sechs Jaucherten");
        break;
    }
    case 288522:
    {
        returnValue = F("Sechs Linden");
        break;
    }
    case 288523:
    {
        returnValue = F("Sechs-Bäumle-Park");
        break;
    }
    case 288524:
    {
        returnValue = F("Sechs-Eichen-Weg");
        break;
    }
    case 288525:
    {
        returnValue = F("Sechs-Kilometer-Weg");
        break;
    }
    case 288526:
    {
        returnValue = F("Sechs-Morgen-Str.");
        break;
    }
    case 288527:
    {
        returnValue = F("Sechsackerstr.");
        break;
    }
    case 288528:
    {
        returnValue = F("Sechsackerweg");
        break;
    }
    case 288529:
    {
        returnValue = F("Sechsarm");
        break;
    }
    case 288530:
    {
        returnValue = F("Sechsbatzenweg");
        break;
    }
    case 288531:
    {
        returnValue = F("Sechsbaumweg");
        break;
    }
    case 288532:
    {
        returnValue = F("Sechsbuchenstr.");
        break;
    }
    case 288533:
    {
        returnValue = F("Sechseichener Weg");
        break;
    }
    case 288534:
    {
        returnValue = F("Sechseichenweg");
        break;
    }
    case 288535:
    {
        returnValue = F("Sechselberger Str.");
        break;
    }
    case 288536:
    {
        returnValue = F("Sechselberger Weg");
        break;
    }
    case 288537:
    {
        returnValue = F("Sechsersiedlung");
        break;
    }
    case 288538:
    {
        returnValue = F("Sechserweg");
        break;
    }
    case 288539:
    {
        returnValue = F("Sechsheldener Str.");
        break;
    }
    case 288540:
    {
        returnValue = F("Sechslindensteige");
        break;
    }
    case 288541:
    {
        returnValue = F("Sechslindenweg");
        break;
    }
    case 288542:
    {
        returnValue = F("Sechsrutenweg");
        break;
    }
    case 288543:
    {
        returnValue = F("Sechssesselweg");
        break;
    }
    case 288544:
    {
        returnValue = F("Sechsstädteplatz");
        break;
    }
    case 288545:
    {
        returnValue = F("Sechswiesenweg");
        break;
    }
    case 288546:
    {
        returnValue = F("Sechsäcker");
        break;
    }
    case 288547:
    {
        returnValue = F("Sechsämtergäßchen");
        break;
    }
    case 288548:
    {
        returnValue = F("Sechsämterlandstr.");
        break;
    }
    case 288549:
    {
        returnValue = F("Sechsämterstr.");
        break;
    }
    case 288550:
    {
        returnValue = F("Sechtastr.");
        break;
    }
    case 288551:
    {
        returnValue = F("Sechtaweg");
        break;
    }
    case 288552:
    {
        returnValue = F("Sechtemer Str.");
        break;
    }
    case 288553:
    {
        returnValue = F("Sechtemer Weg");
        break;
    }
    case 288554:
    {
        returnValue = F("Sechtenbrink");
        break;
    }
    case 288555:
    {
        returnValue = F("Sechtengasse");
        break;
    }
    case 288556:
    {
        returnValue = F("Sechtenhausen");
        break;
    }
    case 288557:
    {
        returnValue = F("Sechwandsweg");
        break;
    }
    case 288558:
    {
        returnValue = F("Sechzehneichener Weg");
        break;
    }
    case 288559:
    {
        returnValue = F("Sechzehnerstr.");
        break;
    }
    case 288560:
    {
        returnValue = F("Seckacher Pfad");
        break;
    }
    case 288561:
    {
        returnValue = F("Seckacher Str.");
        break;
    }
    case 288562:
    {
        returnValue = F("Seckachtalbrücke");
        break;
    }
    case 288563:
    {
        returnValue = F("Seckachtorgasse");
        break;
    }
    case 288564:
    {
        returnValue = F("Seckbruch");
        break;
    }
    case 288565:
    {
        returnValue = F("Seckel");
        break;
    }
    case 288566:
    {
        returnValue = F("Seckenbach");
        break;
    }
    case 288567:
    {
        returnValue = F("Seckendorfer Hauptstr.");
        break;
    }
    case 288568:
    {
        returnValue = F("Seckendorfer Str.");
        break;
    }
    case 288569:
    {
        returnValue = F("Seckendorffallee");
        break;
    }
    case 288570:
    {
        returnValue = F("Seckendorffpark");
        break;
    }
    case 288571:
    {
        returnValue = F("Seckendorffplatz");
        break;
    }
    case 288572:
    {
        returnValue = F("Seckendorffstr.");
        break;
    }
    case 288573:
    {
        returnValue = F("Seckendorffweg");
        break;
    }
    case 288574:
    {
        returnValue = F("Seckendorfstr.");
        break;
    }
    case 288575:
    {
        returnValue = F("Seckenhainweg");
        break;
    }
    case 288576:
    {
        returnValue = F("Seckenhauser Str.");
        break;
    }
    case 288577:
    {
        returnValue = F("Seckenheimer Str.");
        break;
    }
    case 288578:
    {
        returnValue = F("Seckenhäuserstr.");
        break;
    }
    case 288579:
    {
        returnValue = F("Seckenrain");
        break;
    }
    case 288580:
    {
        returnValue = F("Seckentalstr.");
        break;
    }
    case 288581:
    {
        returnValue = F("Secker Str.");
        break;
    }
    case 288582:
    {
        returnValue = F("Seckerstr.");
        break;
    }
    case 288583:
    {
        returnValue = F("Seckerweg");
        break;
    }
    case 288584:
    {
        returnValue = F("Seckhemmsweg");
        break;
    }
    case 288585:
    {
        returnValue = F("Seckhorn");
        break;
    }
    case 288586:
    {
        returnValue = F("Secklerhohl");
        break;
    }
    case 288587:
    {
        returnValue = F("Seckmauerer Str.");
        break;
    }
    case 288588:
    {
        returnValue = F("Secliner Str.");
        break;
    }
    case 288589:
    {
        returnValue = F("Secretariusmühle");
        break;
    }
    case 288590:
    {
        returnValue = F("Section de la délimitation Epailly des propriétés entre le Royaume de France et le Grand-duché de Bade – 1816-1840");
        break;
    }
    case 288591:
    {
        returnValue = F("Section de la délimitation Epailly des propriétés entre le Royaume de France et le Grand-duché de Bade – 1816-1840 / Schwarzspechtweg");
        break;
    }
    case 288592:
    {
        returnValue = F("Secundastr.");
        break;
    }
    case 288593:
    {
        returnValue = F("Secundinierstr.");
        break;
    }
    case 288594:
    {
        returnValue = F("Securiusstr.");
        break;
    }
    case 288595:
    {
        returnValue = F("Sedanallee");
        break;
    }
    case 288596:
    {
        returnValue = F("Sedanplatz");
        break;
    }
    case 288597:
    {
        returnValue = F("Sedanstr.");
        break;
    }
    case 288598:
    {
        returnValue = F("Sedanweg");
        break;
    }
    case 288599:
    {
        returnValue = F("Sedderichweg");
        break;
    }
    case 288600:
    {
        returnValue = F("Seddin");
        break;
    }
    case 288601:
    {
        returnValue = F("Seddiner Str.");
        break;
    }
    case 288602:
    {
        returnValue = F("Seddiner Weg");
        break;
    }
    case 288603:
    {
        returnValue = F("Sedel");
        break;
    }
    case 288604:
    {
        returnValue = F("Sedelbauerstr.");
        break;
    }
    case 288605:
    {
        returnValue = F("Sedelbreite");
        break;
    }
    case 288606:
    {
        returnValue = F("Sedelfeldberg");
        break;
    }
    case 288607:
    {
        returnValue = F("Sedelfeldweg");
        break;
    }
    case 288608:
    {
        returnValue = F("Sedelhofweg");
        break;
    }
    case 288609:
    {
        returnValue = F("Sedelmayerstr.");
        break;
    }
    case 288610:
    {
        returnValue = F("Sedelsberger Str.");
        break;
    }
    case 288611:
    {
        returnValue = F("Sedemünderstr.");
        break;
    }
    case 288612:
    {
        returnValue = F("Sedentaler Str.");
        break;
    }
    case 288613:
    {
        returnValue = F("Sederweg");
        break;
    }
    case 288614:
    {
        returnValue = F("Sedgefieldstr.");
        break;
    }
    case 288615:
    {
        returnValue = F("Sedlbauernweg");
        break;
    }
    case 288616:
    {
        returnValue = F("Sedlbrunn");
        break;
    }
    case 288617:
    {
        returnValue = F("Sedleweg");
        break;
    }
    case 288618:
    {
        returnValue = F("Sedlgasse");
        break;
    }
    case 288619:
    {
        returnValue = F("Sedlhofer Str.");
        break;
    }
    case 288620:
    {
        returnValue = F("Sedlhofring");
        break;
    }
    case 288621:
    {
        returnValue = F("Sedlitzer Str.");
        break;
    }
    case 288622:
    {
        returnValue = F("Sedlitzer Weg");
        break;
    }
    case 288623:
    {
        returnValue = F("Sedlmaierstr.");
        break;
    }
    case 288624:
    {
        returnValue = F("Sedlmaierweg");
        break;
    }
    case 288625:
    {
        returnValue = F("Sedlmayrstr.");
        break;
    }
    case 288626:
    {
        returnValue = F("Sedlmeierstr.");
        break;
    }
    case 288627:
    {
        returnValue = F("Sedlmeierweg");
        break;
    }
    case 288628:
    {
        returnValue = F("Sedlweg");
        break;
    }
    case 288629:
    {
        returnValue = F("See");
        break;
    }
    case 288630:
    {
        returnValue = F("See-Ebenenweg");
        break;
    }
    case 288631:
    {
        returnValue = F("See-Eichenweg");
        break;
    }
    case 288632:
    {
        returnValue = F("See-Ende");
        break;
    }
    case 288633:
    {
        returnValue = F("See-Enn");
        break;
    }
    case 288634:
    {
        returnValue = F("See-Schneise");
        break;
    }
    case 288635:
    {
        returnValue = F("Seeacker");
        break;
    }
    case 288636:
    {
        returnValue = F("Seeackerstr.");
        break;
    }
    case 288637:
    {
        returnValue = F("Seeackerweg");
        break;
    }
    case 288638:
    {
        returnValue = F("Seeadler-Damm");
        break;
    }
    case 288639:
    {
        returnValue = F("Seeadlerradweg");
        break;
    }
    case 288640:
    {
        returnValue = F("Seeadlerring");
        break;
    }
    case 288641:
    {
        returnValue = F("Seeadlerstr.");
        break;
    }
    case 288642:
    {
        returnValue = F("Seeadlerweg");
        break;
    }
    case 288643:
    {
        returnValue = F("Seeallee");
        break;
    }
    case 288644:
    {
        returnValue = F("Seeanger");
        break;
    }
    case 288645:
    {
        returnValue = F("Seeangerstr.");
        break;
    }
    case 288646:
    {
        returnValue = F("Seeanlage Schondorf");
        break;
    }
    case 288647:
    {
        returnValue = F("Seeannerwiese");
        break;
    }
    case 288648:
    {
        returnValue = F("Seebach");
        break;
    }
    case 288649:
    {
        returnValue = F("Seebachanlage");
        break;
    }
    case 288650:
    {
        returnValue = F("Seebacher Feld");
        break;
    }
    case 288651:
    {
        returnValue = F("Seebacher Pfad");
        break;
    }
    case 288652:
    {
        returnValue = F("Seebacher Str.");
        break;
    }
    case 288653:
    {
        returnValue = F("Seebacher Weg");
        break;
    }
    case 288654:
    {
        returnValue = F("Seebacherweg");
        break;
    }
    case 288655:
    {
        returnValue = F("Seebachhof");
        break;
    }
    case 288656:
    {
        returnValue = F("Seebachmarter");
        break;
    }
    case 288657:
    {
        returnValue = F("Seebachring");
        break;
    }
    case 288658:
    {
        returnValue = F("Seebachstr.");
        break;
    }
    case 288659:
    {
        returnValue = F("Seebachsträßchen");
        break;
    }
    case 288660:
    {
        returnValue = F("Seebachtal");
        break;
    }
    case 288661:
    {
        returnValue = F("Seebachtalweg");
        break;
    }
    case 288662:
    {
        returnValue = F("Seebachweg");
        break;
    }
    case 288663:
    {
        returnValue = F("Seebad");
        break;
    }
    case 288664:
    {
        returnValue = F("Seebadallee");
        break;
    }
    case 288665:
    {
        returnValue = F("Seebadkorso");
        break;
    }
    case 288666:
    {
        returnValue = F("Seebadstr.");
        break;
    }
    case 288667:
    {
        returnValue = F("Seebadweg");
        break;
    }
    case 288668:
    {
        returnValue = F("Seebaer Str.");
        break;
    }
    case 288669:
    {
        returnValue = F("Seebarg");
        break;
    }
    case 288670:
    {
        returnValue = F("Seebarner Berg");
        break;
    }
    case 288671:
    {
        returnValue = F("Seebauerstr.");
        break;
    }
    case 288672:
    {
        returnValue = F("Seebaums Mühle");
        break;
    }
    case 288673:
    {
        returnValue = F("Seebaumstr.");
        break;
    }
    case 288674:
    {
        returnValue = F("Seebecker Str.");
        break;
    }
    case 288675:
    {
        returnValue = F("Seebeckstr.");
        break;
    }
    case 288676:
    {
        returnValue = F("Seebeeke");
        break;
    }
    case 288677:
    {
        returnValue = F("Seebener Str.");
        break;
    }
    case 288678:
    {
        returnValue = F("Seebenischer Str.");
        break;
    }
    case 288679:
    {
        returnValue = F("Seebenischer Weg");
        break;
    }
    case 288680:
    {
        returnValue = F("Seeber Flur");
        break;
    }
    case 288681:
    {
        returnValue = F("Seeberg");
        break;
    }
    case 288682:
    {
        returnValue = F("Seeberg Siedlung");
        break;
    }
    case 288683:
    {
        returnValue = F("Seebergasse");
        break;
    }
    case 288684:
    {
        returnValue = F("Seebergblick");
        break;
    }
    case 288685:
    {
        returnValue = F("Seeberge");
        break;
    }
    case 288686:
    {
        returnValue = F("Seebergen");
        break;
    }
    case 288687:
    {
        returnValue = F("Seeberger Fahrt");
        break;
    }
    case 288688:
    {
        returnValue = F("Seeberger Heide");
        break;
    }
    case 288689:
    {
        returnValue = F("Seeberger Landstr.");
        break;
    }
    case 288690:
    {
        returnValue = F("Seeberger Moor");
        break;
    }
    case 288691:
    {
        returnValue = F("Seeberger Str.");
        break;
    }
    case 288692:
    {
        returnValue = F("Seebergergasse");
        break;
    }
    case 288693:
    {
        returnValue = F("Seebergerteich");
        break;
    }
    case 288694:
    {
        returnValue = F("Seebergsteige");
        break;
    }
    case 288695:
    {
        returnValue = F("Seebergstr.");
        break;
    }
    case 288696:
    {
        returnValue = F("Seebergsweg");
        break;
    }
    case 288697:
    {
        returnValue = F("Seebergweg");
        break;
    }
    case 288698:
    {
        returnValue = F("Seeberstr.");
        break;
    }
    case 288699:
    {
        returnValue = F("Seebestattetendenkmal");
        break;
    }
    case 288700:
    {
        returnValue = F("Seebitzschener Str.");
        break;
    }
    case 288701:
    {
        returnValue = F("Seeblick");
        break;
    }
    case 288702:
    {
        returnValue = F("Seeblick Groß Labenz");
        break;
    }
    case 288703:
    {
        returnValue = F("Seeblickstr.");
        break;
    }
    case 288704:
    {
        returnValue = F("Seeblickweg");
        break;
    }
    case 288705:
    {
        returnValue = F("Seebodenstr.");
        break;
    }
    case 288706:
    {
        returnValue = F("Seebohmschneise");
        break;
    }
    case 288707:
    {
        returnValue = F("Seebohmstr.");
        break;
    }
    case 288708:
    {
        returnValue = F("Seeboldstr.");
        break;
    }
    case 288709:
    {
        returnValue = F("Seeborg");
        break;
    }
    case 288710:
    {
        returnValue = F("Seeborn");
        break;
    }
    case 288711:
    {
        returnValue = F("Seeborngasse");
        break;
    }
    case 288712:
    {
        returnValue = F("Seebornstr.");
        break;
    }
    case 288713:
    {
        returnValue = F("Seebothstr.");
        break;
    }
    case 288714:
    {
        returnValue = F("Seebrandweg");
        break;
    }
    case 288715:
    {
        returnValue = F("Seebrock");
        break;
    }
    case 288716:
    {
        returnValue = F("Seebronner Str.");
        break;
    }
    case 288717:
    {
        returnValue = F("Seebrook");
        break;
    }
    case 288718:
    {
        returnValue = F("Seebrooksberg");
        break;
    }
    case 288719:
    {
        returnValue = F("Seebrookswiese");
        break;
    }
    case 288720:
    {
        returnValue = F("Seebrucker Str.");
        break;
    }
    case 288721:
    {
        returnValue = F("Seebrugg");
        break;
    }
    case 288722:
    {
        returnValue = F("Seebrunnenweg");
        break;
    }
    case 288723:
    {
        returnValue = F("Seebrücke");
        break;
    }
    case 288724:
    {
        returnValue = F("Seebrücke Binz");
        break;
    }
    case 288725:
    {
        returnValue = F("Seebrücke Dahme");
        break;
    }
    case 288726:
    {
        returnValue = F("Seebrücke Heringsdorf");
        break;
    }
    case 288727:
    {
        returnValue = F("Seebrücke Süssau");
        break;
    }
    case 288728:
    {
        returnValue = F("Seebrückenweg");
        break;
    }
    case 288729:
    {
        returnValue = F("Seebrückle");
        break;
    }
    case 288730:
    {
        returnValue = F("Seebrückleweg");
        break;
    }
    case 288731:
    {
        returnValue = F("Seebrücklweg");
        break;
    }
    case 288732:
    {
        returnValue = F("Seebschützer Weg");
        break;
    }
    case 288733:
    {
        returnValue = F("Seebuckel");
        break;
    }
    case 288734:
    {
        returnValue = F("Seebuckweg");
        break;
    }
    case 288735:
    {
        returnValue = F("Seeburg");
        break;
    }
    case 288736:
    {
        returnValue = F("Seeburger Chaussee");
        break;
    }
    case 288737:
    {
        returnValue = F("Seeburger Landstr.");
        break;
    }
    case 288738:
    {
        returnValue = F("Seeburger Str.");
        break;
    }
    case 288739:
    {
        returnValue = F("Seeburger Weg");
        break;
    }
    case 288740:
    {
        returnValue = F("Seeburgstr.");
        break;
    }
    case 288741:
    {
        returnValue = F("Seebuschstr.");
        break;
    }
    case 288742:
    {
        returnValue = F("Seebächle");
        break;
    }
    case 288743:
    {
        returnValue = F("Seebächleweg");
        break;
    }
    case 288744:
    {
        returnValue = F("Seebühlstr.");
        break;
    }
    case 288745:
    {
        returnValue = F("Seebühlweg");
        break;
    }
    case 288746:
    {
        returnValue = F("Seebühne");
        break;
    }
    case 288747:
    {
        returnValue = F("Seebüll");
        break;
    }
    case 288748:
    {
        returnValue = F("Seedach");
        break;
    }
    case 288749:
    {
        returnValue = F("Seedamm");
        break;
    }
    case 288750:
    {
        returnValue = F("Seedammstr.");
        break;
    }
    case 288751:
    {
        returnValue = F("Seedammweg");
        break;
    }
    case 288752:
    {
        returnValue = F("Seedaweg");
        break;
    }
    case 288753:
    {
        returnValue = F("Seedeich");
        break;
    }
    case 288754:
    {
        returnValue = F("Seedeichstr.");
        break;
    }
    case 288755:
    {
        returnValue = F("Seedener Str.");
        break;
    }
    case 288756:
    {
        returnValue = F("Seediekstr.");
        break;
    }
    case 288757:
    {
        returnValue = F("Seedorf");
        break;
    }
    case 288758:
    {
        returnValue = F("Seedorfer Str.");
        break;
    }
    case 288759:
    {
        returnValue = F("Seedorfer Weg");
        break;
    }
    case 288760:
    {
        returnValue = F("Seedorffstr.");
        break;
    }
    case 288761:
    {
        returnValue = F("Seedorfstr.");
        break;
    }
    case 288762:
    {
        returnValue = F("Seedämmle");
        break;
    }
    case 288763:
    {
        returnValue = F("Seedüne");
        break;
    }
    case 288764:
    {
        returnValue = F("Seefahrerstr.");
        break;
    }
    case 288765:
    {
        returnValue = F("Seefeld");
        break;
    }
    case 288766:
    {
        returnValue = F("Seefelden");
        break;
    }
    case 288767:
    {
        returnValue = F("Seefelder Chaussee");
        break;
    }
    case 288768:
    {
        returnValue = F("Seefelder Kirchweg");
        break;
    }
    case 288769:
    {
        returnValue = F("Seefelder Moor");
        break;
    }
    case 288770:
    {
        returnValue = F("Seefelder Str.");
        break;
    }
    case 288771:
    {
        returnValue = F("Seefelder Weg");
        break;
    }
    case 288772:
    {
        returnValue = F("Seefelderschaart");
        break;
    }
    case 288773:
    {
        returnValue = F("Seefelderstr.");
        break;
    }
    case 288774:
    {
        returnValue = F("Seefeldstr.");
        break;
    }
    case 288775:
    {
        returnValue = F("Seefeldweg");
        break;
    }
    case 288776:
    {
        returnValue = F("Seefichtenstr.");
        break;
    }
    case 288777:
    {
        returnValue = F("Seeflurstr.");
        break;
    }
    case 288778:
    {
        returnValue = F("Seefreiheit");
        break;
    }
    case 288779:
    {
        returnValue = F("Seefridstr.");
        break;
    }
    case 288780:
    {
        returnValue = F("Seefuhre");
        break;
    }
    case 288781:
    {
        returnValue = F("Seegaarder Weg");
        break;
    }
    case 288782:
    {
        returnValue = F("Seegaddel");
        break;
    }
    case 288783:
    {
        returnValue = F("Seegaer Str.");
        break;
    }
    case 288784:
    {
        returnValue = F("Seegaer Weg");
        break;
    }
    case 288785:
    {
        returnValue = F("Seegang");
        break;
    }
    case 288786:
    {
        returnValue = F("Seegang zum Glambecker See");
        break;
    }
    case 288787:
    {
        returnValue = F("Seegarden");
        break;
    }
    case 288788:
    {
        returnValue = F("Seegarten");
        break;
    }
    case 288789:
    {
        returnValue = F("Seegartenstr.");
        break;
    }
    case 288790:
    {
        returnValue = F("Seegartenweg");
        break;
    }
    case 288791:
    {
        returnValue = F("Seegasse");
        break;
    }
    case 288792:
    {
        returnValue = F("Seegatterl");
        break;
    }
    case 288793:
    {
        returnValue = F("Seegatterweg");
        break;
    }
    case 288794:
    {
        returnValue = F("Seegefelder Str.");
        break;
    }
    case 288795:
    {
        returnValue = F("Seegekuhle");
        break;
    }
    case 288796:
    {
        returnValue = F("Seegel");
        break;
    }
    case 288797:
    {
        returnValue = F("Seegen");
        break;
    }
    case 288798:
    {
        returnValue = F("Seegenhöfe");
        break;
    }
    case 288799:
    {
        returnValue = F("Seegensgang");
        break;
    }
    case 288800:
    {
        returnValue = F("Seegenstr.");
        break;
    }
    case 288801:
    {
        returnValue = F("Seegenweg");
        break;
    }
    case 288802:
    {
        returnValue = F("Seeger Str.");
        break;
    }
    case 288803:
    {
        returnValue = F("Seegerbrunnenweg");
        break;
    }
    case 288804:
    {
        returnValue = F("Seegerheide");
        break;
    }
    case 288805:
    {
        returnValue = F("Seegeritzer Str.");
        break;
    }
    case 288806:
    {
        returnValue = F("Seegeritzer Weg");
        break;
    }
    case 288807:
    {
        returnValue = F("Seegers Weg");
        break;
    }
    case 288808:
    {
        returnValue = F("Seegersallee");
        break;
    }
    case 288809:
    {
        returnValue = F("Seegerstr.");
        break;
    }
    case 288810:
    {
        returnValue = F("Seegersweg");
        break;
    }
    case 288811:
    {
        returnValue = F("Seegertenstr.");
        break;
    }
    case 288812:
    {
        returnValue = F("Seegestell");
        break;
    }
    case 288813:
    {
        returnValue = F("Seegetweg");
        break;
    }
    case 288814:
    {
        returnValue = F("Seeghauweg");
        break;
    }
    case 288815:
    {
        returnValue = F("Seegraben");
        break;
    }
    case 288816:
    {
        returnValue = F("Seegrabenstr.");
        break;
    }
    case 288817:
    {
        returnValue = F("Seegrabenweg");
        break;
    }
    case 288818:
    {
        returnValue = F("Seegraspfad");
        break;
    }
    case 288819:
    {
        returnValue = F("Seegrasscheuerweg");
        break;
    }
    case 288820:
    {
        returnValue = F("Seegrasschlagweg");
        break;
    }
    case 288821:
    {
        returnValue = F("Seegrasweg");
        break;
    }
    case 288822:
    {
        returnValue = F("Seegrehnaer Lindenstr.");
        break;
    }
    case 288823:
    {
        returnValue = F("Seegrehnaer Mittelstr.");
        break;
    }
    case 288824:
    {
        returnValue = F("Seegrehnaer Neustr.");
        break;
    }
    case 288825:
    {
        returnValue = F("Seegrehnaer Querstr.");
        break;
    }
    case 288826:
    {
        returnValue = F("Seegrehnaer Stiller Winkel");
        break;
    }
    case 288827:
    {
        returnValue = F("Seegrehnaer Thomas-Müntzer-Str.");
        break;
    }
    case 288828:
    {
        returnValue = F("Seegrehnaer Waldstr.");
        break;
    }
    case 288829:
    {
        returnValue = F("Seegrehnaer Wiesenstr.");
        break;
    }
    case 288830:
    {
        returnValue = F("Seegrube Ausbau");
        break;
    }
    case 288831:
    {
        returnValue = F("Seegrundsdamm");
        break;
    }
    case 288832:
    {
        returnValue = F("Seegrundstr.");
        break;
    }
    case 288833:
    {
        returnValue = F("Seegrundstücke");
        break;
    }
    case 288834:
    {
        returnValue = F("Seegrundweg");
        break;
    }
    case 288835:
    {
        returnValue = F("Seegründeweg");
        break;
    }
    case 288836:
    {
        returnValue = F("Seegsweg");
        break;
    }
    case 288837:
    {
        returnValue = F("Seegutstr.");
        break;
    }
    case 288838:
    {
        returnValue = F("Seegärten");
        break;
    }
    case 288839:
    {
        returnValue = F("Seegärtenweg");
        break;
    }
    case 288840:
    {
        returnValue = F("Seehagen");
        break;
    }
    case 288841:
    {
        returnValue = F("Seehagenweg");
        break;
    }
    case 288842:
    {
        returnValue = F("Seehalde");
        break;
    }
    case 288843:
    {
        returnValue = F("Seehaldenstr.");
        break;
    }
    case 288844:
    {
        returnValue = F("Seehaldenweg");
        break;
    }
    case 288845:
    {
        returnValue = F("Seehaldeweg");
        break;
    }
    case 288846:
    {
        returnValue = F("Seehamer Str.");
        break;
    }
    case 288847:
    {
        returnValue = F("Seehamer Weg");
        break;
    }
    case 288848:
    {
        returnValue = F("Seehang");
        break;
    }
    case 288849:
    {
        returnValue = F("Seehasenallee");
        break;
    }
    case 288850:
    {
        returnValue = F("Seehaus");
        break;
    }
    case 288851:
    {
        returnValue = F("Seehausen");
        break;
    }
    case 288852:
    {
        returnValue = F("Seehausener Chaussee");
        break;
    }
    case 288853:
    {
        returnValue = F("Seehausener Str.");
        break;
    }
    case 288854:
    {
        returnValue = F("Seehausener Weg");
        break;
    }
    case 288855:
    {
        returnValue = F("Seehausenstr.");
        break;
    }
    case 288856:
    {
        returnValue = F("Seehausentrift");
        break;
    }
    case 288857:
    {
        returnValue = F("Seehauser Str.");
        break;
    }
    case 288858:
    {
        returnValue = F("Seehausstr.");
        break;
    }
    case 288859:
    {
        returnValue = F("Seehausträßle");
        break;
    }
    case 288860:
    {
        returnValue = F("Seehausweg");
        break;
    }
    case 288861:
    {
        returnValue = F("Seeheidestr.");
        break;
    }
    case 288862:
    {
        returnValue = F("Seeheim");
        break;
    }
    case 288863:
    {
        returnValue = F("Seeheimer Pfad");
        break;
    }
    case 288864:
    {
        returnValue = F("Seeheimer Str.");
        break;
    }
    case 288865:
    {
        returnValue = F("Seeheimer Weg");
        break;
    }
    case 288866:
    {
        returnValue = F("Seeheimerbergweg");
        break;
    }
    case 288867:
    {
        returnValue = F("Seeheimerhaldenweg");
        break;
    }
    case 288868:
    {
        returnValue = F("Seeheimstr.");
        break;
    }
    case 288869:
    {
        returnValue = F("Seehof");
        break;
    }
    case 288870:
    {
        returnValue = F("Seehofer Str.");
        break;
    }
    case 288871:
    {
        returnValue = F("Seehofstr.");
        break;
    }
    case 288872:
    {
        returnValue = F("Seehofweg");
        break;
    }
    case 288873:
    {
        returnValue = F("Seeholz");
        break;
    }
    case 288874:
    {
        returnValue = F("Seeholzstr.");
        break;
    }
    case 288875:
    {
        returnValue = F("Seeholzweg");
        break;
    }
    case 288876:
    {
        returnValue = F("Seehorst");
        break;
    }
    case 288877:
    {
        returnValue = F("Seehund");
        break;
    }
    case 288878:
    {
        returnValue = F("Seehundbank");
        break;
    }
    case 288879:
    {
        returnValue = F("Seehunde");
        break;
    }
    case 288880:
    {
        returnValue = F("Seehundsbank");
        break;
    }
    case 288881:
    {
        returnValue = F("Seehuser Weg");
        break;
    }
    case 288882:
    {
        returnValue = F("Seehäldenweg");
        break;
    }
    case 288883:
    {
        returnValue = F("Seehäuser");
        break;
    }
    case 288884:
    {
        returnValue = F("Seehäuser Str.");
        break;
    }
    case 288885:
    {
        returnValue = F("Seehäuslewiesenweg");
        break;
    }
    case 288886:
    {
        returnValue = F("Seehäuslstr.");
        break;
    }
    case 288887:
    {
        returnValue = F("Seehöchte");
        break;
    }
    case 288888:
    {
        returnValue = F("Seehöfer Str.");
        break;
    }
    case 288889:
    {
        returnValue = F("Seehöfer Weg");
        break;
    }
    case 288890:
    {
        returnValue = F("Seehöhe");
        break;
    }
    case 288891:
    {
        returnValue = F("Seehölzle");
        break;
    }
    case 288892:
    {
        returnValue = F("Seehölzleweg");
        break;
    }
    case 288893:
    {
        returnValue = F("Seehühle");
        break;
    }
    case 288894:
    {
        returnValue = F("Seeidyll");
        break;
    }
    case 288895:
    {
        returnValue = F("Seeigelweg");
        break;
    }
    case 288896:
    {
        returnValue = F("Seekamp");
        break;
    }
    case 288897:
    {
        returnValue = F("Seekampsredder");
        break;
    }
    case 288898:
    {
        returnValue = F("Seekante");
        break;
    }
    case 288899:
    {
        returnValue = F("Seekarstr.");
        break;
    }
    case 288900:
    {
        returnValue = F("Seekarweg");
        break;
    }
    case 288901:
    {
        returnValue = F("Seekaten");
        break;
    }
    case 288902:
    {
        returnValue = F("Seekathen");
        break;
    }
    case 288903:
    {
        returnValue = F("Seekatzstr.");
        break;
    }
    case 288904:
    {
        returnValue = F("Seekaute");
        break;
    }
    case 288905:
    {
        returnValue = F("Seekenbekpark");
        break;
    }
    case 288906:
    {
        returnValue = F("Seekenkamp");
        break;
    }
    case 288907:
    {
        returnValue = F("Seekenschneise");
        break;
    }
    case 288908:
    {
        returnValue = F("Seekenstegge");
        break;
    }
    case 288909:
    {
        returnValue = F("Seekircher Str.");
        break;
    }
    case 288910:
    {
        returnValue = F("Seeklingenstr.");
        break;
    }
    case 288911:
    {
        returnValue = F("Seeklingenweg");
        break;
    }
    case 288912:
    {
        returnValue = F("Seekoppel");
        break;
    }
    case 288913:
    {
        returnValue = F("Seekoppeln");
        break;
    }
    case 288914:
    {
        returnValue = F("Seekoppelring");
        break;
    }
    case 288915:
    {
        returnValue = F("Seekoppelweg");
        break;
    }
    case 288916:
    {
        returnValue = F("Seekorso");
        break;
    }
    case 288917:
    {
        returnValue = F("Seekrug");
        break;
    }
    case 288918:
    {
        returnValue = F("Seekumweg");
        break;
    }
    case 288919:
    {
        returnValue = F("Seekurpark");
        break;
    }
    case 288920:
    {
        returnValue = F("Seekweg");
        break;
    }
    case 288921:
    {
        returnValue = F("Seeküppelstr.");
        break;
    }
    case 288922:
    {
        returnValue = F("Seelabach");
        break;
    }
    case 288923:
    {
        returnValue = F("Seelach");
        break;
    }
    case 288924:
    {
        returnValue = F("Seelacher Berg");
        break;
    }
    case 288925:
    {
        returnValue = F("Seelacher Weg");
        break;
    }
    case 288926:
    {
        returnValue = F("Seelachring");
        break;
    }
    case 288927:
    {
        returnValue = F("Seelachstr.");
        break;
    }
    case 288928:
    {
        returnValue = F("Seelachweg");
        break;
    }
    case 288929:
    {
        returnValue = F("Seelackerstr.");
        break;
    }
    case 288930:
    {
        returnValue = F("Seeland");
        break;
    }
    case 288931:
    {
        returnValue = F("Seelander Str.");
        break;
    }
    case 288932:
    {
        returnValue = F("Seelanderdamm");
        break;
    }
    case 288933:
    {
        returnValue = F("Seelandstr.");
        break;
    }
    case 288934:
    {
        returnValue = F("Seelauer Str.");
        break;
    }
    case 288935:
    {
        returnValue = F("Seelauerweg");
        break;
    }
    case 288936:
    {
        returnValue = F("Seelbacher Grund");
        break;
    }
    case 288937:
    {
        returnValue = F("Seelbacher Str.");
        break;
    }
    case 288938:
    {
        returnValue = F("Seelbacher Weg");
        break;
    }
    case 288939:
    {
        returnValue = F("Seelbacherstr.");
        break;
    }
    case 288940:
    {
        returnValue = F("Seelbachring");
        break;
    }
    case 288941:
    {
        returnValue = F("Seelbachsecke");
        break;
    }
    case 288942:
    {
        returnValue = F("Seelbachstr.");
        break;
    }
    case 288943:
    {
        returnValue = F("Seelbachweg");
        break;
    }
    case 288944:
    {
        returnValue = F("Seelbornpfad");
        break;
    }
    case 288945:
    {
        returnValue = F("Seelbronn");
        break;
    }
    case 288946:
    {
        returnValue = F("Seelbrunnenweg");
        break;
    }
    case 288947:
    {
        returnValue = F("Seelbrunnweg");
        break;
    }
    case 288948:
    {
        returnValue = F("Seelbüde");
        break;
    }
    case 288949:
    {
        returnValue = F("Seele");
        break;
    }
    case 288950:
    {
        returnValue = F("Seelebach");
        break;
    }
    case 288951:
    {
        returnValue = F("Seelegrund");
        break;
    }
    case 288952:
    {
        returnValue = F("Seelein");
        break;
    }
    case 288953:
    {
        returnValue = F("Seeleinsteige");
        break;
    }
    case 288954:
    {
        returnValue = F("Seeleinstr.");
        break;
    }
    case 288955:
    {
        returnValue = F("Seeleinsweg");
        break;
    }
    case 288956:
    {
        returnValue = F("Seeleite");
        break;
    }
    case 288957:
    {
        returnValue = F("Seeleiten");
        break;
    }
    case 288958:
    {
        returnValue = F("Seeleitenpark");
        break;
    }
    case 288959:
    {
        returnValue = F("Seeleitenstr.");
        break;
    }
    case 288960:
    {
        returnValue = F("Seeleitenweg");
        break;
    }
    case 288961:
    {
        returnValue = F("Seeleitn");
        break;
    }
    case 288962:
    {
        returnValue = F("Seelekopfweg");
        break;
    }
    case 288963:
    {
        returnValue = F("Seelen");
        break;
    }
    case 288964:
    {
        returnValue = F("Seelenberg");
        break;
    }
    case 288965:
    {
        returnValue = F("Seelenberger Str.");
        break;
    }
    case 288966:
    {
        returnValue = F("Seelenberger Weg");
        break;
    }
    case 288967:
    {
        returnValue = F("Seelenbergstr.");
        break;
    }
    case 288968:
    {
        returnValue = F("Seelenbergweg");
        break;
    }
    case 288969:
    {
        returnValue = F("Seelenbinderstr.");
        break;
    }
    case 288970:
    {
        returnValue = F("Seelener Str.");
        break;
    }
    case 288971:
    {
        returnValue = F("Seelenfelder Str.");
        break;
    }
    case 288972:
    {
        returnValue = F("Seelengrabenweg");
        break;
    }
    case 288973:
    {
        returnValue = F("Seelenhausgasse");
        break;
    }
    case 288974:
    {
        returnValue = F("Seelenhofer Str.");
        break;
    }
    case 288975:
    {
        returnValue = F("Seelenmähder");
        break;
    }
    case 288976:
    {
        returnValue = F("Seelenpfad");
        break;
    }
    case 288977:
    {
        returnValue = F("Seelenschlagweg");
        break;
    }
    case 288978:
    {
        returnValue = F("Seelensdorf");
        break;
    }
    case 288979:
    {
        returnValue = F("Seelensdorfer Damm");
        break;
    }
    case 288980:
    {
        returnValue = F("Seelensdorfer Weg");
        break;
    }
    case 288981:
    {
        returnValue = F("Seelenstr.");
        break;
    }
    case 288982:
    {
        returnValue = F("Seelenwaldgasse");
        break;
    }
    case 288983:
    {
        returnValue = F("Seelenweg");
        break;
    }
    case 288984:
    {
        returnValue = F("Seeler Str.");
        break;
    }
    case 288985:
    {
        returnValue = F("Seelesrain");
        break;
    }
    case 288986:
    {
        returnValue = F("Seelesteichweg");
        break;
    }
    case 288987:
    {
        returnValue = F("Seelesweg");
        break;
    }
    case 288988:
    {
        returnValue = F("Seeleuten");
        break;
    }
    case 288989:
    {
        returnValue = F("Seelgasse");
        break;
    }
    case 288990:
    {
        returnValue = F("Seelgenhofstr.");
        break;
    }
    case 288991:
    {
        returnValue = F("Seelgutweg");
        break;
    }
    case 288992:
    {
        returnValue = F("Seelhauleweg");
        break;
    }
    case 288993:
    {
        returnValue = F("Seelhausgasse");
        break;
    }
    case 288994:
    {
        returnValue = F("Seelhausweg");
        break;
    }
    case 288995:
    {
        returnValue = F("Seelheimer Weg");
        break;
    }
    case 288996:
    {
        returnValue = F("Seelhofenstr.");
        break;
    }
    case 288997:
    {
        returnValue = F("Seelhofgasse");
        break;
    }
    case 288998:
    {
        returnValue = F("Seelhofstr.");
        break;
    }
    case 288999:
    {
        returnValue = F("Seelhofweg");
        break;
    }
    case 289000:
    {
        returnValue = F("Seelhop");
        break;
    }
    case 289001:
    {
        returnValue = F("Seelhorst");
        break;
    }
    case 289002:
    {
        returnValue = F("Seelhorster Str.");
        break;
    }
    case 289003:
    {
        returnValue = F("Seelhorster Weg");
        break;
    }
    case 289004:
    {
        returnValue = F("Seelhuve");
        break;
    }
    case 289005:
    {
        returnValue = F("Seelig");
        break;
    }
    case 289006:
    {
        returnValue = F("Seeligenweg");
        break;
    }
    case 289007:
    {
        returnValue = F("Seeliger Hof");
        break;
    }
    case 289008:
    {
        returnValue = F("Seeliger Park");
        break;
    }
    case 289009:
    {
        returnValue = F("Seeligstr.");
        break;
    }
    case 289010:
    {
        returnValue = F("Seeligstädter Str.");
        break;
    }
    case 289011:
    {
        returnValue = F("Seelilienweg");
        break;
    }
    case 289012:
    {
        returnValue = F("Seelingstr.");
        break;
    }
    case 289013:
    {
        returnValue = F("Seelingstädt");
        break;
    }
    case 289014:
    {
        returnValue = F("Seelingstädter Str.");
        break;
    }
    case 289015:
    {
        returnValue = F("Seelitzer Str.");
        break;
    }
    case 289016:
    {
        returnValue = F("Seelitzer Weg");
        break;
    }
    case 289017:
    {
        returnValue = F("Seelmannstr.");
        break;
    }
    case 289018:
    {
        returnValue = F("Seelmattweg");
        break;
    }
    case 289019:
    {
        returnValue = F("Seeloch");
        break;
    }
    case 289020:
    {
        returnValue = F("Seelochweg");
        break;
    }
    case 289021:
    {
        returnValue = F("Seelohe");
        break;
    }
    case 289022:
    {
        returnValue = F("Seelosenstr.");
        break;
    }
    case 289023:
    {
        returnValue = F("Seelower Str.");
        break;
    }
    case 289024:
    {
        returnValue = F("Seelower Weg");
        break;
    }
    case 289025:
    {
        returnValue = F("Seelrather Weg");
        break;
    }
    case 289026:
    {
        returnValue = F("Seelsche Str.");
        break;
    }
    case 289027:
    {
        returnValue = F("Seelscheider Str.");
        break;
    }
    case 289028:
    {
        returnValue = F("Seelsheide");
        break;
    }
    case 289029:
    {
        returnValue = F("Seelstr.");
        break;
    }
    case 289030:
    {
        returnValue = F("Seelust");
        break;
    }
    case 289031:
    {
        returnValue = F("Seeluster Trail");
        break;
    }
    case 289032:
    {
        returnValue = F("Seelwartstr.");
        break;
    }
    case 289033:
    {
        returnValue = F("Seelweiheweg");
        break;
    }
    case 289034:
    {
        returnValue = F("Seelwiesweg");
        break;
    }
    case 289035:
    {
        returnValue = F("Seelworth");
        break;
    }
    case 289036:
    {
        returnValue = F("Seelzer Str.");
        break;
    }
    case 289037:
    {
        returnValue = F("Seelzer-Thurmer-Weg");
        break;
    }
    case 289038:
    {
        returnValue = F("Seelübber Weg");
        break;
    }
    case 289039:
    {
        returnValue = F("Seelücke");
        break;
    }
    case 289040:
    {
        returnValue = F("SeemannsAllee");
        break;
    }
    case 289041:
    {
        returnValue = F("Seemannsgarn");
        break;
    }
    case 289042:
    {
        returnValue = F("Seemannshagen");
        break;
    }
    case 289043:
    {
        returnValue = F("Seemannsheimweg");
        break;
    }
    case 289044:
    {
        returnValue = F("Seemannshof");
        break;
    }
    case 289045:
    {
        returnValue = F("Seemannslust");
        break;
    }
    case 289046:
    {
        returnValue = F("Seemannstr.");
        break;
    }
    case 289047:
    {
        returnValue = F("Seemannsweg");
        break;
    }
    case 289048:
    {
        returnValue = F("Seemarkenring");
        break;
    }
    case 289049:
    {
        returnValue = F("Seematen");
        break;
    }
    case 289050:
    {
        returnValue = F("Seematenweg");
        break;
    }
    case 289051:
    {
        returnValue = F("Seemenbachstr.");
        break;
    }
    case 289052:
    {
        returnValue = F("Seemenstr.");
        break;
    }
    case 289053:
    {
        returnValue = F("Seemeweg");
        break;
    }
    case 289054:
    {
        returnValue = F("Seemeyerstr.");
        break;
    }
    case 289055:
    {
        returnValue = F("Seemißweg");
        break;
    }
    case 289056:
    {
        returnValue = F("Seemoor");
        break;
    }
    case 289057:
    {
        returnValue = F("Seemoorstr.");
        break;
    }
    case 289058:
    {
        returnValue = F("Seemoorweg");
        break;
    }
    case 289059:
    {
        returnValue = F("Seemooser Weg");
        break;
    }
    case 289060:
    {
        returnValue = F("Seemorgen");
        break;
    }
    case 289061:
    {
        returnValue = F("Seemühle");
        break;
    }
    case 289062:
    {
        returnValue = F("Seemühlen");
        break;
    }
    case 289063:
    {
        returnValue = F("Seemühlenweg");
        break;
    }
    case 289064:
    {
        returnValue = F("Seemühlerstr.");
        break;
    }
    case 289065:
    {
        returnValue = F("Seemühlestr.");
        break;
    }
    case 289066:
    {
        returnValue = F("Seemühlstr.");
        break;
    }
    case 289067:
    {
        returnValue = F("Seena");
        break;
    }
    case 289068:
    {
        returnValue = F("Seenadelweg");
        break;
    }
    case 289069:
    {
        returnValue = F("Seenaer Str.");
        break;
    }
    case 289070:
    {
        returnValue = F("Seenallee");
        break;
    }
    case 289071:
    {
        returnValue = F("Seenbachweg");
        break;
    }
    case 289072:
    {
        returnValue = F("Seenelkenweg");
        break;
    }
    case 289073:
    {
        returnValue = F("Seenheimer Str.");
        break;
    }
    case 289074:
    {
        returnValue = F("Seenstr.");
        break;
    }
    case 289075:
    {
        returnValue = F("Seentalstr.");
        break;
    }
    case 289076:
    {
        returnValue = F("Seenweg");
        break;
    }
    case 289077:
    {
        returnValue = F("Seeoner Str.");
        break;
    }
    case 289078:
    {
        returnValue = F("Seeoner Str. 46-50");
        break;
    }
    case 289079:
    {
        returnValue = F("Seeor");
        break;
    }
    case 289080:
    {
        returnValue = F("Seepark");
        break;
    }
    case 289081:
    {
        returnValue = F("Seepark Lehe");
        break;
    }
    case 289082:
    {
        returnValue = F("Seepark Lünen");
        break;
    }
    case 289083:
    {
        returnValue = F("Seepark Möhnesee");
        break;
    }
    case 289084:
    {
        returnValue = F("Seepark Neubäu");
        break;
    }
    case 289085:
    {
        returnValue = F("Seepark Paul Zimmermann");
        break;
    }
    case 289086:
    {
        returnValue = F("Seeparkstr.");
        break;
    }
    case 289087:
    {
        returnValue = F("Seeperle");
        break;
    }
    case 289088:
    {
        returnValue = F("Seeperlenweg");
        break;
    }
    case 289089:
    {
        returnValue = F("Seepfad");
        break;
    }
    case 289090:
    {
        returnValue = F("Seepferd");
        break;
    }
    case 289091:
    {
        returnValue = F("Seepferdchen");
        break;
    }
    case 289092:
    {
        returnValue = F("Seepferdchenring");
        break;
    }
    case 289093:
    {
        returnValue = F("Seepferdchenweg");
        break;
    }
    case 289094:
    {
        returnValue = F("Seeplanstr.");
        break;
    }
    case 289095:
    {
        returnValue = F("Seeplatz");
        break;
    }
    case 289096:
    {
        returnValue = F("Seeplecken");
        break;
    }
    case 289097:
    {
        returnValue = F("Seepoint");
        break;
    }
    case 289098:
    {
        returnValue = F("Seepointweg");
        break;
    }
    case 289099:
    {
        returnValue = F("Seepromenade");
        break;
    }
    case 289100:
    {
        returnValue = F("Seer Str.");
        break;
    }
    case 289101:
    {
        returnValue = F("Seer Weg");
        break;
    }
    case 289102:
    {
        returnValue = F("Seerain");
        break;
    }
    case 289103:
    {
        returnValue = F("Seerainweg");
        break;
    }
    case 289104:
    {
        returnValue = F("Seerandstr.");
        break;
    }
    case 289105:
    {
        returnValue = F("Seerandweg");
        break;
    }
    case 289106:
    {
        returnValue = F("Seerangen");
        break;
    }
    case 289107:
    {
        returnValue = F("Seerasen");
        break;
    }
    case 289108:
    {
        returnValue = F("Seerau in der Lucie");
        break;
    }
    case 289109:
    {
        returnValue = F("Seerauer Landstr.");
        break;
    }
    case 289110:
    {
        returnValue = F("Seerauer Str.");
        break;
    }
    case 289111:
    {
        returnValue = F("Seerauer Weg");
        break;
    }
    case 289112:
    {
        returnValue = F("Seerbrooksweg");
        break;
    }
    case 289113:
    {
        returnValue = F("Seeredder");
        break;
    }
    case 289114:
    {
        returnValue = F("Seeregenpfeiferweg");
        break;
    }
    case 289115:
    {
        returnValue = F("Seereihe");
        break;
    }
    case 289116:
    {
        returnValue = F("Seerentalweg");
        break;
    }
    case 289117:
    {
        returnValue = F("Seerenteichstr.");
        break;
    }
    case 289118:
    {
        returnValue = F("Seereweg");
        break;
    }
    case 289119:
    {
        returnValue = F("Seergasse");
        break;
    }
    case 289120:
    {
        returnValue = F("Seerhausener Str.");
        break;
    }
    case 289121:
    {
        returnValue = F("Seerichterstr.");
        break;
    }
    case 289122:
    {
        returnValue = F("Seerichtstatt");
        break;
    }
    case 289123:
    {
        returnValue = F("Seering");
        break;
    }
    case 289124:
    {
        returnValue = F("Seeringstr.");
        break;
    }
    case 289125:
    {
        returnValue = F("Seerose");
        break;
    }
    case 289126:
    {
        returnValue = F("Seerosengarten");
        break;
    }
    case 289127:
    {
        returnValue = F("Seerosenring");
        break;
    }
    case 289128:
    {
        returnValue = F("Seerosensteig");
        break;
    }
    case 289129:
    {
        returnValue = F("Seerosenstieg");
        break;
    }
    case 289130:
    {
        returnValue = F("Seerosenstr.");
        break;
    }
    case 289131:
    {
        returnValue = F("Seerosenweg");
        break;
    }
    case 289132:
    {
        returnValue = F("Seershäuser Weg");
        break;
    }
    case 289133:
    {
        returnValue = F("Seerundwanderweg");
        break;
    }
    case 289134:
    {
        returnValue = F("Seerundweg");
        break;
    }
    case 289135:
    {
        returnValue = F("Seerundweg 2");
        break;
    }
    case 289136:
    {
        returnValue = F("Seerundweg Rannasee");
        break;
    }
    case 289137:
    {
        returnValue = F("Seeräuber");
        break;
    }
    case 289138:
    {
        returnValue = F("Seeräuberweg");
        break;
    }
    case 289139:
    {
        returnValue = F("Seerückenstr.");
        break;
    }
    case 289140:
    {
        returnValue = F("Seerückenweg");
        break;
    }
    case 289141:
    {
        returnValue = F("Seeschleuse");
        break;
    }
    case 289142:
    {
        returnValue = F("Seeschleusenstr.");
        break;
    }
    case 289143:
    {
        returnValue = F("Seeschneise");
        break;
    }
    case 289144:
    {
        returnValue = F("Seeschwalbenstr.");
        break;
    }
    case 289145:
    {
        returnValue = F("Seeschwalbenweg");
        break;
    }
    case 289146:
    {
        returnValue = F("Seeseiten");
        break;
    }
    case 289147:
    {
        returnValue = F("Seeseitener Str.");
        break;
    }
    case 289148:
    {
        returnValue = F("Seesener Landstr.");
        break;
    }
    case 289149:
    {
        returnValue = F("Seesener Str.");
        break;
    }
    case 289150:
    {
        returnValue = F("Seesener Weg");
        break;
    }
    case 289151:
    {
        returnValue = F("Seesenweg");
        break;
    }
    case 289152:
    {
        returnValue = F("Seesgasse");
        break;
    }
    case 289153:
    {
        returnValue = F("Seeshaupt Sankt Heinrich");
        break;
    }
    case 289154:
    {
        returnValue = F("Seeshauptener Str.");
        break;
    }
    case 289155:
    {
        returnValue = F("Seeshaupter Str.");
        break;
    }
    case 289156:
    {
        returnValue = F("Seeshof");
        break;
    }
    case 289157:
    {
        returnValue = F("Seeshofer Str.");
        break;
    }
    case 289158:
    {
        returnValue = F("Seesiedlung");
        break;
    }
    case 289159:
    {
        returnValue = F("Seespitze");
        break;
    }
    case 289160:
    {
        returnValue = F("Seesrain");
        break;
    }
    case 289161:
    {
        returnValue = F("Seestadt");
        break;
    }
    case 289162:
    {
        returnValue = F("Seestadtler Weg");
        break;
    }
    case 289163:
    {
        returnValue = F("Seestadtstr.");
        break;
    }
    case 289164:
    {
        returnValue = F("Seestall");
        break;
    }
    case 289165:
    {
        returnValue = F("Seestaller Weg");
        break;
    }
    case 289166:
    {
        returnValue = F("Seestallstr.");
        break;
    }
    case 289167:
    {
        returnValue = F("Seestallweg");
        break;
    }
    case 289168:
    {
        returnValue = F("Seestedt");
        break;
    }
    case 289169:
    {
        returnValue = F("Seestedter Kirchweg");
        break;
    }
    case 289170:
    {
        returnValue = F("Seestedter Weg");
        break;
    }
    case 289171:
    {
        returnValue = F("Seesteg");
        break;
    }
    case 289172:
    {
        returnValue = F("Seesteig");
        break;
    }
    case 289173:
    {
        returnValue = F("Seesteige");
        break;
    }
    case 289174:
    {
        returnValue = F("Seesteraudeich");
        break;
    }
    case 289175:
    {
        returnValue = F("Seestermüher Weg");
        break;
    }
    case 289176:
    {
        returnValue = F("Seestern");
        break;
    }
    case 289177:
    {
        returnValue = F("Seestern-Pauly-Str.");
        break;
    }
    case 289178:
    {
        returnValue = F("Seesterngang");
        break;
    }
    case 289179:
    {
        returnValue = F("Seesternweg");
        break;
    }
    case 289180:
    {
        returnValue = F("Seestettener Str.");
        break;
    }
    case 289181:
    {
        returnValue = F("Seestieg");
        break;
    }
    case 289182:
    {
        returnValue = F("Seestr.");
        break;
    }
    case 289183:
    {
        returnValue = F("Seestr. Johannstorf");
        break;
    }
    case 289184:
    {
        returnValue = F("Seestr. Ost");
        break;
    }
    case 289185:
    {
        returnValue = F("Seestr. West");
        break;
    }
    case 289186:
    {
        returnValue = F("Seestädter Platz");
        break;
    }
    case 289187:
    {
        returnValue = F("Seestücken");
        break;
    }
    case 289188:
    {
        returnValue = F("Seestückeweg");
        break;
    }
    case 289189:
    {
        returnValue = F("Seetal");
        break;
    }
    case 289190:
    {
        returnValue = F("Seetalbachstr.");
        break;
    }
    case 289191:
    {
        returnValue = F("Seetalstr.");
        break;
    }
    case 289192:
    {
        returnValue = F("Seetalweg");
        break;
    }
    case 289193:
    {
        returnValue = F("Seetenweg");
        break;
    }
    case 289194:
    {
        returnValue = F("Seetetriftweg");
        break;
    }
    case 289195:
    {
        returnValue = F("Seethal");
        break;
    }
    case 289196:
    {
        returnValue = F("Seethaler Str.");
        break;
    }
    case 289197:
    {
        returnValue = F("Seethaler Weg");
        break;
    }
    case 289198:
    {
        returnValue = F("Seethen");
        break;
    }
    case 289199:
    {
        returnValue = F("Seethener Weg");
        break;
    }
    case 289200:
    {
        returnValue = F("Seether Weg");
        break;
    }
    case 289201:
    {
        returnValue = F("Seetor");
        break;
    }
    case 289202:
    {
        returnValue = F("Seetorplatz");
        break;
    }
    case 289203:
    {
        returnValue = F("Seetorstr.");
        break;
    }
    case 289204:
    {
        returnValue = F("Seetorweg");
        break;
    }
    case 289205:
    {
        returnValue = F("Seetrift");
        break;
    }
    case 289206:
    {
        returnValue = F("Seetwiete");
        break;
    }
    case 289207:
    {
        returnValue = F("Seetzenstr.");
        break;
    }
    case 289208:
    {
        returnValue = F("Seetzer Lindenallee");
        break;
    }
    case 289209:
    {
        returnValue = F("Seetzer Weg");
        break;
    }
    case 289210:
    {
        returnValue = F("Seeufer");
        break;
    }
    case 289211:
    {
        returnValue = F("Seeufersteg");
        break;
    }
    case 289212:
    {
        returnValue = F("Seeuferstr.");
        break;
    }
    case 289213:
    {
        returnValue = F("Seeuferweg");
        break;
    }
    case 289214:
    {
        returnValue = F("Seeveblick");
        break;
    }
    case 289215:
    {
        returnValue = F("Seevedeich");
        break;
    }
    case 289216:
    {
        returnValue = F("Seevekamp");
        break;
    }
    case 289217:
    {
        returnValue = F("Seevenweg");
        break;
    }
    case 289218:
    {
        returnValue = F("Seevering");
        break;
    }
    case 289219:
    {
        returnValue = F("Seeverns");
        break;
    }
    case 289220:
    {
        returnValue = F("Seevernser Weg");
        break;
    }
    case 289221:
    {
        returnValue = F("Seevernser Wischweg");
        break;
    }
    case 289222:
    {
        returnValue = F("Seevestr.");
        break;
    }
    case 289223:
    {
        returnValue = F("Seevetal");
        break;
    }
    case 289224:
    {
        returnValue = F("Seevetalstr.");
        break;
    }
    case 289225:
    {
        returnValue = F("Seeveufer");
        break;
    }
    case 289226:
    {
        returnValue = F("Seeviertel");
        break;
    }
    case 289227:
    {
        returnValue = F("Seewalchner Str.");
        break;
    }
    case 289228:
    {
        returnValue = F("Seewaldallee");
        break;
    }
    case 289229:
    {
        returnValue = F("Seewalde");
        break;
    }
    case 289230:
    {
        returnValue = F("Seewaldstr.");
        break;
    }
    case 289231:
    {
        returnValue = F("Seewaldsträßle");
        break;
    }
    case 289232:
    {
        returnValue = F("Seewaldweg");
        break;
    }
    case 289233:
    {
        returnValue = F("Seewaldzipfelweg");
        break;
    }
    case 289234:
    {
        returnValue = F("Seewasen");
        break;
    }
    case 289235:
    {
        returnValue = F("Seewattenstr.");
        break;
    }
    case 289236:
    {
        returnValue = F("Seeweg");
        break;
    }
    case 289237:
    {
        returnValue = F("Seeweg Nord");
        break;
    }
    case 289238:
    {
        returnValue = F("Seeweg-Nord");
        break;
    }
    case 289239:
    {
        returnValue = F("Seeweg-Süd");
        break;
    }
    case 289240:
    {
        returnValue = F("Seewegshöhe");
        break;
    }
    case 289241:
    {
        returnValue = F("Seeweide");
        break;
    }
    case 289242:
    {
        returnValue = F("Seeweiherstr.");
        break;
    }
    case 289243:
    {
        returnValue = F("Seeweinberge");
        break;
    }
    case 289244:
    {
        returnValue = F("Seewendung");
        break;
    }
    case 289245:
    {
        returnValue = F("Seewiese");
        break;
    }
    case 289246:
    {
        returnValue = F("Seewiesen");
        break;
    }
    case 289247:
    {
        returnValue = F("Seewiesenbrücke");
        break;
    }
    case 289248:
    {
        returnValue = F("Seewieseneck");
        break;
    }
    case 289249:
    {
        returnValue = F("Seewiesenring");
        break;
    }
    case 289250:
    {
        returnValue = F("Seewiesenstr.");
        break;
    }
    case 289251:
    {
        returnValue = F("Seewiesenweg");
        break;
    }
    case 289252:
    {
        returnValue = F("Seewiesn");
        break;
    }
    case 289253:
    {
        returnValue = F("Seewiesstr.");
        break;
    }
    case 289254:
    {
        returnValue = F("Seewinkel");
        break;
    }
    case 289255:
    {
        returnValue = F("Seewisch");
        break;
    }
    case 289256:
    {
        returnValue = F("Seeworth");
        break;
    }
    case 289257:
    {
        returnValue = F("Seezugang");
        break;
    }
    case 289258:
    {
        returnValue = F("Seezungenweg");
        break;
    }
    case 289259:
    {
        returnValue = F("Seeßelmannsgang");
        break;
    }
    case 289260:
    {
        returnValue = F("Seeäcker");
        break;
    }
    case 289261:
    {
        returnValue = F("Seeäckerstr.");
        break;
    }
    case 289262:
    {
        returnValue = F("Seeäckerweg");
        break;
    }
    case 289263:
    {
        returnValue = F("Sefferweg");
        break;
    }
    case 289264:
    {
        returnValue = F("Seffnerstr.");
        break;
    }
    case 289265:
    {
        returnValue = F("Seflerstr.");
        break;
    }
    case 289266:
    {
        returnValue = F("Sefreweg");
        break;
    }
    case 289267:
    {
        returnValue = F("Segalen");
        break;
    }
    case 289268:
    {
        returnValue = F("Segbachstr.");
        break;
    }
    case 289269:
    {
        returnValue = F("Segebadenhau");
        break;
    }
    case 289270:
    {
        returnValue = F("Segeberger Chaussee");
        break;
    }
    case 289271:
    {
        returnValue = F("Segeberger Landstr.");
        break;
    }
    case 289272:
    {
        returnValue = F("Segeberger Str.");
        break;
    }
    case 289273:
    {
        returnValue = F("Segeberger Weg");
        break;
    }
    case 289274:
    {
        returnValue = F("Segebrock");
        break;
    }
    case 289275:
    {
        returnValue = F("Segelaustr.");
        break;
    }
    case 289276:
    {
        returnValue = F("Segelbach");
        break;
    }
    case 289277:
    {
        returnValue = F("Segelberg-Weg");
        break;
    }
    case 289278:
    {
        returnValue = F("Segelbreite");
        break;
    }
    case 289279:
    {
        returnValue = F("Segelckestr.");
        break;
    }
    case 289280:
    {
        returnValue = F("Segeletzer Str.");
        break;
    }
    case 289281:
    {
        returnValue = F("Segeletzer Weg");
        break;
    }
    case 289282:
    {
        returnValue = F("Segelfalterweg");
        break;
    }
    case 289283:
    {
        returnValue = F("Segelfliegerdamm");
        break;
    }
    case 289284:
    {
        returnValue = F("Segelfliegerhang");
        break;
    }
    case 289285:
    {
        returnValue = F("Segelfliegerweg");
        break;
    }
    case 289286:
    {
        returnValue = F("Segelflugstr.");
        break;
    }
    case 289287:
    {
        returnValue = F("Segelfortstr.");
        break;
    }
    case 289288:
    {
        returnValue = F("Segelhafen");
        break;
    }
    case 289289:
    {
        returnValue = F("Segelhorster Str.");
        break;
    }
    case 289290:
    {
        returnValue = F("Segelinweg");
        break;
    }
    case 289291:
    {
        returnValue = F("Segelmacherstr.");
        break;
    }
    case 289292:
    {
        returnValue = F("Segelmacherweg");
        break;
    }
    case 289293:
    {
        returnValue = F("Segelrainsträßchen");
        break;
    }
    case 289294:
    {
        returnValue = F("Segelskamp");
        break;
    }
    case 289295:
    {
        returnValue = F("Segelstr.");
        break;
    }
    case 289296:
    {
        returnValue = F("Segelteichstr.");
        break;
    }
    case 289297:
    {
        returnValue = F("Segelthalweg");
        break;
    }
    case 289298:
    {
        returnValue = F("Segenbergweg");
        break;
    }
    case 289299:
    {
        returnValue = F("Segendorfer Str.");
        break;
    }
    case 289300:
    {
        returnValue = F("Segenhaus");
        break;
    }
    case 289301:
    {
        returnValue = F("Segenhörn");
        break;
    }
    case 289302:
    {
        returnValue = F("Segenredder");
        break;
    }
    case 289303:
    {
        returnValue = F("Segensort");
        break;
    }
    case 289304:
    {
        returnValue = F("Segerstr.");
        break;
    }
    case 289305:
    {
        returnValue = F("Segersweg");
        break;
    }
    case 289306:
    {
        returnValue = F("Segeten");
        break;
    }
    case 289307:
    {
        returnValue = F("Segge Moor");
        break;
    }
    case 289308:
    {
        returnValue = F("Seggebrucher Holz");
        break;
    }
    case 289309:
    {
        returnValue = F("Seggebrucher Str.");
        break;
    }
    case 289310:
    {
        returnValue = F("Seggendamm");
        break;
    }
    case 289311:
    {
        returnValue = F("Seggenkamp");
        break;
    }
    case 289312:
    {
        returnValue = F("Seggenriedweg");
        break;
    }
    case 289313:
    {
        returnValue = F("Seggenstr.");
        break;
    }
    case 289314:
    {
        returnValue = F("Seggenweg");
        break;
    }
    case 289315:
    {
        returnValue = F("Seggenwiese");
        break;
    }
    case 289316:
    {
        returnValue = F("Seggenwiesweg");
        break;
    }
    case 289317:
    {
        returnValue = F("Seggenwisch");
        break;
    }
    case 289318:
    {
        returnValue = F("Seggerder Weg");
        break;
    }
    case 289319:
    {
        returnValue = F("Seggeriedenweg");
        break;
    }
    case 289320:
    {
        returnValue = F("Seggerner Str.");
        break;
    }
    case 289321:
    {
        returnValue = F("Seggernhoff");
        break;
    }
    case 289322:
    {
        returnValue = F("Seggernweg");
        break;
    }
    case 289323:
    {
        returnValue = F("Seggerweg");
        break;
    }
    case 289324:
    {
        returnValue = F("Seggestr.");
        break;
    }
    case 289325:
    {
        returnValue = F("Seggeweg");
        break;
    }
    case 289326:
    {
        returnValue = F("Seghorn");
        break;
    }
    case 289327:
    {
        returnValue = F("Seghorner Weg");
        break;
    }
    case 289328:
    {
        returnValue = F("Seglerbogen");
        break;
    }
    case 289329:
    {
        returnValue = F("Seglerring");
        break;
    }
    case 289330:
    {
        returnValue = F("Seglersteg");
        break;
    }
    case 289331:
    {
        returnValue = F("Seglerweg");
        break;
    }
    case 289332:
    {
        returnValue = F("Seglingsweg");
        break;
    }
    case 289333:
    {
        returnValue = F("Segnerstr.");
        break;
    }
    case 289334:
    {
        returnValue = F("Segnitzer Str.");
        break;
    }
    case 289335:
    {
        returnValue = F("Segnitzstr.");
        break;
    }
    case 289336:
    {
        returnValue = F("Segomarstr.");
        break;
    }
    case 289337:
    {
        returnValue = F("Segouer Str.");
        break;
    }
    case 289338:
    {
        returnValue = F("Segringen");
        break;
    }
    case 289339:
    {
        returnValue = F("Segringer Str.");
        break;
    }
    case 289340:
    {
        returnValue = F("Sehberg");
        break;
    }
    case 289341:
    {
        returnValue = F("Sehden");
        break;
    }
    case 289342:
    {
        returnValue = F("Sehensander Str.");
        break;
    }
    case 289343:
    {
        returnValue = F("Seheringstr.");
        break;
    }
    case 289344:
    {
        returnValue = F("Seherinstr.");
        break;
    }
    case 289345:
    {
        returnValue = F("Sehestedter Str.");
        break;
    }
    case 289346:
    {
        returnValue = F("Sehlbachstr.");
        break;
    }
    case 289347:
    {
        returnValue = F("Sehlbergstr.");
        break;
    }
    case 289348:
    {
        returnValue = F("Sehlbergweg");
        break;
    }
    case 289349:
    {
        returnValue = F("Sehlder Weg");
        break;
    }
    case 289350:
    {
        returnValue = F("Sehlemer Hauptstr.");
        break;
    }
    case 289351:
    {
        returnValue = F("Sehlemer Str.");
        break;
    }
    case 289352:
    {
        returnValue = F("Sehlener Str.");
        break;
    }
    case 289353:
    {
        returnValue = F("Sehlenweg");
        break;
    }
    case 289354:
    {
        returnValue = F("Sehler Anlagen");
        break;
    }
    case 289355:
    {
        returnValue = F("Sehlingdorfer Str.");
        break;
    }
    case 289356:
    {
        returnValue = F("Sehlinger Dorfstr.");
        break;
    }
    case 289357:
    {
        returnValue = F("Sehlinger Weg");
        break;
    }
    case 289358:
    {
        returnValue = F("Sehliser Str.");
        break;
    }
    case 289359:
    {
        returnValue = F("Sehlsdorfer Str.");
        break;
    }
    case 289360:
    {
        returnValue = F("Sehlsdorfer Weg");
        break;
    }
    case 289361:
    {
        returnValue = F("Sehmaer Weg");
        break;
    }
    case 289362:
    {
        returnValue = F("Sehmatalstr.");
        break;
    }
    case 289363:
    {
        returnValue = F("Sehmsdorfer Str.");
        break;
    }
    case 289364:
    {
        returnValue = F("Sehnder Str.");
        break;
    }
    case 289365:
    {
        returnValue = F("Sehnder Weg");
        break;
    }
    case 289366:
    {
        returnValue = F("Sehningen");
        break;
    }
    case 289367:
    {
        returnValue = F("Sehnrather Str.");
        break;
    }
    case 289368:
    {
        returnValue = F("Sehnser Str.");
        break;
    }
    case 289369:
    {
        returnValue = F("Sehnweg");
        break;
    }
    case 289370:
    {
        returnValue = F("Sehrbruchskamp");
        break;
    }
    case 289371:
    {
        returnValue = F("Sehrer Ritsch");
        break;
    }
    case 289372:
    {
        returnValue = F("Sehrgärten");
        break;
    }
    case 289373:
    {
        returnValue = F("Sehringer Str.");
        break;
    }
    case 289374:
    {
        returnValue = F("Sehringer Weg");
        break;
    }
    case 289375:
    {
        returnValue = F("Sehringstr.");
        break;
    }
    case 289376:
    {
        returnValue = F("Sehrtenbachstr.");
        break;
    }
    case 289377:
    {
        returnValue = F("Sehräcker");
        break;
    }
    case 289378:
    {
        returnValue = F("Seibachstr.");
        break;
    }
    case 289379:
    {
        returnValue = F("Seibelquerspange");
        break;
    }
    case 289380:
    {
        returnValue = F("Seibelsbach");
        break;
    }
    case 289381:
    {
        returnValue = F("Seibelsdorfer Str.");
        break;
    }
    case 289382:
    {
        returnValue = F("Seibelsdorfer Weg");
        break;
    }
    case 289383:
    {
        returnValue = F("Seibelsgraben");
        break;
    }
    case 289384:
    {
        returnValue = F("Seibelstr.");
        break;
    }
    case 289385:
    {
        returnValue = F("Seibersbacher Str.");
        break;
    }
    case 289386:
    {
        returnValue = F("Seibersdorf");
        break;
    }
    case 289387:
    {
        returnValue = F("Seibersdorfer Str.");
        break;
    }
    case 289388:
    {
        returnValue = F("Seibertsbergstr.");
        break;
    }
    case 289389:
    {
        returnValue = F("Seibertshof");
        break;
    }
    case 289390:
    {
        returnValue = F("Seibertshofener Str.");
        break;
    }
    case 289391:
    {
        returnValue = F("Seibertstr.");
        break;
    }
    case 289392:
    {
        returnValue = F("Seibertzstr.");
        break;
    }
    case 289393:
    {
        returnValue = F("Seibertzweg");
        break;
    }
    case 289394:
    {
        returnValue = F("Seibigstr.");
        break;
    }
    case 289395:
    {
        returnValue = F("Seibiser Str.");
        break;
    }
    case 289396:
    {
        returnValue = F("Seible");
        break;
    }
    case 289397:
    {
        returnValue = F("Seiboldenstr.");
        break;
    }
    case 289398:
    {
        returnValue = F("Seiboldhof");
        break;
    }
    case 289399:
    {
        returnValue = F("Seiboldsdorf");
        break;
    }
    case 289400:
    {
        returnValue = F("Seiboldsdorfer Mühle");
        break;
    }
    case 289401:
    {
        returnValue = F("Seiboldsdorfer Str.");
        break;
    }
    case 289402:
    {
        returnValue = F("Seiboldsmühler Str.");
        break;
    }
    case 289403:
    {
        returnValue = F("Seiboldstetten");
        break;
    }
    case 289404:
    {
        returnValue = F("Seiboldstr.");
        break;
    }
    case 289405:
    {
        returnValue = F("Seiboldsweiler");
        break;
    }
    case 289406:
    {
        returnValue = F("Seiboldwies");
        break;
    }
    case 289407:
    {
        returnValue = F("Seibranzer Str.");
        break;
    }
    case 289408:
    {
        returnValue = F("Seibthübelweg");
        break;
    }
    case 289409:
    {
        returnValue = F("Seichenbrunnen");
        break;
    }
    case 289410:
    {
        returnValue = F("Seichäckerweg");
        break;
    }
    case 289411:
    {
        returnValue = F("Seidau");
        break;
    }
    case 289412:
    {
        returnValue = F("Seidauer Str.");
        break;
    }
    case 289413:
    {
        returnValue = F("Seidehof");
        break;
    }
    case 289414:
    {
        returnValue = F("Seidelbast");
        break;
    }
    case 289415:
    {
        returnValue = F("Seidelbastring");
        break;
    }
    case 289416:
    {
        returnValue = F("Seidelbaststr.");
        break;
    }
    case 289417:
    {
        returnValue = F("Seidelbastweg");
        break;
    }
    case 289418:
    {
        returnValue = F("Seidelsberg");
        break;
    }
    case 289419:
    {
        returnValue = F("Seidelsdorf");
        break;
    }
    case 289420:
    {
        returnValue = F("Seidelsgrund");
        break;
    }
    case 289421:
    {
        returnValue = F("Seidelstr.");
        break;
    }
    case 289422:
    {
        returnValue = F("Seidelsweg");
        break;
    }
    case 289423:
    {
        returnValue = F("Seidelweg");
        break;
    }
    case 289424:
    {
        returnValue = F("Seidenbenderstr.");
        break;
    }
    case 289425:
    {
        returnValue = F("Seidenberger Str.");
        break;
    }
    case 289426:
    {
        returnValue = F("Seidenbergstr.");
        break;
    }
    case 289427:
    {
        returnValue = F("Seidenbeutel");
        break;
    }
    case 289428:
    {
        returnValue = F("Seidenbronnenstr.");
        break;
    }
    case 289429:
    {
        returnValue = F("Seidenbuschstr.");
        break;
    }
    case 289430:
    {
        returnValue = F("Seidener Beutel");
        break;
    }
    case 289431:
    {
        returnValue = F("Seidenfaden");
        break;
    }
    case 289432:
    {
        returnValue = F("Seidenhof");
        break;
    }
    case 289433:
    {
        returnValue = F("Seidenhofer Str.");
        break;
    }
    case 289434:
    {
        returnValue = F("Seidenkotten");
        break;
    }
    case 289435:
    {
        returnValue = F("Seidenpfad");
        break;
    }
    case 289436:
    {
        returnValue = F("Seidenraupenweg");
        break;
    }
    case 289437:
    {
        returnValue = F("Seidenröther Str.");
        break;
    }
    case 289438:
    {
        returnValue = F("Seidenschwanzer Str.");
        break;
    }
    case 289439:
    {
        returnValue = F("Seidenstickerstr.");
        break;
    }
    case 289440:
    {
        returnValue = F("Seidenstr.");
        break;
    }
    case 289441:
    {
        returnValue = F("Seidenstückerstr.");
        break;
    }
    case 289442:
    {
        returnValue = F("Seidenstückerweg");
        break;
    }
    case 289443:
    {
        returnValue = F("Seidenwebergasse");
        break;
    }
    case 289444:
    {
        returnValue = F("Seidenweberstr.");
        break;
    }
    case 289445:
    {
        returnValue = F("Seidenweberweg");
        break;
    }
    case 289446:
    {
        returnValue = F("Seidenweg");
        break;
    }
    case 289447:
    {
        returnValue = F("Seidererstr.");
        break;
    }
    case 289448:
    {
        returnValue = F("Seidersberg");
        break;
    }
    case 289449:
    {
        returnValue = F("Seiderstr.");
        break;
    }
    case 289450:
    {
        returnValue = F("Seideweg");
        break;
    }
    case 289451:
    {
        returnValue = F("Seidewitzer Str.");
        break;
    }
    case 289452:
    {
        returnValue = F("Seidiek");
        break;
    }
    case 289453:
    {
        returnValue = F("Seiding");
        break;
    }
    case 289454:
    {
        returnValue = F("Seidinger Str.");
        break;
    }
    case 289455:
    {
        returnValue = F("Seidingstädter Hauptstr.");
        break;
    }
    case 289456:
    {
        returnValue = F("Seidingstädter Kirchgasse");
        break;
    }
    case 289457:
    {
        returnValue = F("Seidl-Ainöder-Str.");
        break;
    }
    case 289458:
    {
        returnValue = F("Seidl-Kreuz-Weg");
        break;
    }
    case 289459:
    {
        returnValue = F("Seidlbrandweg");
        break;
    }
    case 289460:
    {
        returnValue = F("Seidlbruck");
        break;
    }
    case 289461:
    {
        returnValue = F("Seidlersreuth");
        break;
    }
    case 289462:
    {
        returnValue = F("Seidlerweg");
        break;
    }
    case 289463:
    {
        returnValue = F("Seidlhofstr.");
        break;
    }
    case 289464:
    {
        returnValue = F("Seidlkreuzstr.");
        break;
    }
    case 289465:
    {
        returnValue = F("Seidlthal");
        break;
    }
    case 289466:
    {
        returnValue = F("Seidlweg");
        break;
    }
    case 289467:
    {
        returnValue = F("Seidmar");
        break;
    }
    case 289468:
    {
        returnValue = F("Seidorfer Str.");
        break;
    }
    case 289469:
    {
        returnValue = F("Seier");
        break;
    }
    case 289470:
    {
        returnValue = F("Seiersberger Str.");
        break;
    }
    case 289471:
    {
        returnValue = F("Seiersdorf");
        break;
    }
    case 289472:
    {
        returnValue = F("Seierstr.");
        break;
    }
    case 289473:
    {
        returnValue = F("Seierweg");
        break;
    }
    case 289474:
    {
        returnValue = F("Seif-Wald-Ring");
        break;
    }
    case 289475:
    {
        returnValue = F("Seifen");
        break;
    }
    case 289476:
    {
        returnValue = F("Seifenackerstr.");
        break;
    }
    case 289477:
    {
        returnValue = F("Seifenauel");
        break;
    }
    case 289478:
    {
        returnValue = F("Seifenbachweg");
        break;
    }
    case 289479:
    {
        returnValue = F("Seifenberg");
        break;
    }
    case 289480:
    {
        returnValue = F("Seifenbergweg");
        break;
    }
    case 289481:
    {
        returnValue = F("Seifendamm");
        break;
    }
    case 289482:
    {
        returnValue = F("Seifener Str.");
        break;
    }
    case 289483:
    {
        returnValue = F("Seifener Weg");
        break;
    }
    case 289484:
    {
        returnValue = F("Seifenfeld");
        break;
    }
    case 289485:
    {
        returnValue = F("Seifenflügel");
        break;
    }
    case 289486:
    {
        returnValue = F("Seifengasse");
        break;
    }
    case 289487:
    {
        returnValue = F("Seifenheck");
        break;
    }
    case 289488:
    {
        returnValue = F("Seifenkisten-Rennen");
        break;
    }
    case 289489:
    {
        returnValue = F("Seifenlehrpfad");
        break;
    }
    case 289490:
    {
        returnValue = F("Seifenpfad");
        break;
    }
    case 289491:
    {
        returnValue = F("Seifenrand");
        break;
    }
    case 289492:
    {
        returnValue = F("Seifensiedergasse");
        break;
    }
    case 289493:
    {
        returnValue = F("Seifensiederweg");
        break;
    }
    case 289494:
    {
        returnValue = F("Seifenstr.");
        break;
    }
    case 289495:
    {
        returnValue = F("Seifentalstr.");
        break;
    }
    case 289496:
    {
        returnValue = F("Seifenweg");
        break;
    }
    case 289497:
    {
        returnValue = F("Seifenwiese");
        break;
    }
    case 289498:
    {
        returnValue = F("Seifenwiesenweg");
        break;
    }
    case 289499:
    {
        returnValue = F("Seifer Str.");
        break;
    }
    case 289500:
    {
        returnValue = F("Seifer Weg");
        break;
    }
    case 289501:
    {
        returnValue = F("Seiferduhne");
        break;
    }
    case 289502:
    {
        returnValue = F("Seiferdune");
        break;
    }
    case 289503:
    {
        returnValue = F("Seiferheldstr.");
        break;
    }
    case 289504:
    {
        returnValue = F("Seiferhofweg");
        break;
    }
    case 289505:
    {
        returnValue = F("Seiferitzer Allee");
        break;
    }
    case 289506:
    {
        returnValue = F("Seiferitzer Schulweg");
        break;
    }
    case 289507:
    {
        returnValue = F("Seiferitzer Str.");
        break;
    }
    case 289508:
    {
        returnValue = F("Seiferitzer Weg");
        break;
    }
    case 289509:
    {
        returnValue = F("Seifersdorf");
        break;
    }
    case 289510:
    {
        returnValue = F("Seifersdorfer Kirchweg");
        break;
    }
    case 289511:
    {
        returnValue = F("Seifersdorfer Str.");
        break;
    }
    case 289512:
    {
        returnValue = F("Seifersdorfer Tal");
        break;
    }
    case 289513:
    {
        returnValue = F("Seifersdorfer Tal-Wanderweg");
        break;
    }
    case 289514:
    {
        returnValue = F("Seifersdorfer Weg");
        break;
    }
    case 289515:
    {
        returnValue = F("Seifersreuth");
        break;
    }
    case 289516:
    {
        returnValue = F("Seiferstetter Str.");
        break;
    }
    case 289517:
    {
        returnValue = F("Seiferstr.");
        break;
    }
    case 289518:
    {
        returnValue = F("Seifertser Str.");
        break;
    }
    case 289519:
    {
        returnValue = F("Seifertser Weg");
        break;
    }
    case 289520:
    {
        returnValue = F("Seifertshainer Str.");
        break;
    }
    case 289521:
    {
        returnValue = F("Seifertshofer Weg");
        break;
    }
    case 289522:
    {
        returnValue = F("Seifertsreuth");
        break;
    }
    case 289523:
    {
        returnValue = F("Seifertstr.");
        break;
    }
    case 289524:
    {
        returnValue = F("Seiferweg");
        break;
    }
    case 289525:
    {
        returnValue = F("Seiferwiese");
        break;
    }
    case 289526:
    {
        returnValue = F("Seiffener Str.");
        break;
    }
    case 289527:
    {
        returnValue = F("Seiffener Weg");
        break;
    }
    case 289528:
    {
        returnValue = F("Seifhennersdorfer Str.");
        break;
    }
    case 289529:
    {
        returnValue = F("Seifriedring");
        break;
    }
    case 289530:
    {
        returnValue = F("Seifriedsberg");
        break;
    }
    case 289531:
    {
        returnValue = F("Seifriedsburger Str.");
        break;
    }
    case 289532:
    {
        returnValue = F("Seiftweg");
        break;
    }
    case 289533:
    {
        returnValue = F("Seifweg");
        break;
    }
    case 289534:
    {
        returnValue = F("Seigendorfer Hauptstr.");
        break;
    }
    case 289535:
    {
        returnValue = F("Seigendorfer Str.");
        break;
    }
    case 289536:
    {
        returnValue = F("Seigenweg");
        break;
    }
    case 289537:
    {
        returnValue = F("Seigerhüttenweg");
        break;
    }
    case 289538:
    {
        returnValue = F("Seigerodstr.");
        break;
    }
    case 289539:
    {
        returnValue = F("Seigertshäuser Weg");
        break;
    }
    case 289540:
    {
        returnValue = F("Seignweg");
        break;
    }
    case 289541:
    {
        returnValue = F("Seiheräcker");
        break;
    }
    case 289542:
    {
        returnValue = F("Seikampsweg");
        break;
    }
    case 289543:
    {
        returnValue = F("Seikengarten");
        break;
    }
    case 289544:
    {
        returnValue = F("Seikenstiegsweg");
        break;
    }
    case 289545:
    {
        returnValue = F("Seilandstr.");
        break;
    }
    case 289546:
    {
        returnValue = F("Seilbachstr.");
        break;
    }
    case 289547:
    {
        returnValue = F("Seilbahnstr.");
        break;
    }
    case 289548:
    {
        returnValue = F("Seilbahnweg");
        break;
    }
    case 289549:
    {
        returnValue = F("Seilbrücke");
        break;
    }
    case 289550:
    {
        returnValue = F("Seilenau");
        break;
    }
    case 289551:
    {
        returnValue = F("Seilenauweg");
        break;
    }
    case 289552:
    {
        returnValue = F("Seilenbachgasse");
        break;
    }
    case 289553:
    {
        returnValue = F("Seiler Weg");
        break;
    }
    case 289554:
    {
        returnValue = F("Seilerbahn");
        break;
    }
    case 289555:
    {
        returnValue = F("Seilerbahnstr.");
        break;
    }
    case 289556:
    {
        returnValue = F("Seilerbahnweg");
        break;
    }
    case 289557:
    {
        returnValue = F("Seilerberg");
        break;
    }
    case 289558:
    {
        returnValue = F("Seilerbergweg");
        break;
    }
    case 289559:
    {
        returnValue = F("Seilerblick");
        break;
    }
    case 289560:
    {
        returnValue = F("Seilerbrücklstr.");
        break;
    }
    case 289561:
    {
        returnValue = F("Seilerei");
        break;
    }
    case 289562:
    {
        returnValue = F("Seilergang");
        break;
    }
    case 289563:
    {
        returnValue = F("Seilergasse");
        break;
    }
    case 289564:
    {
        returnValue = F("Seilergassl");
        break;
    }
    case 289565:
    {
        returnValue = F("Seilergraben");
        break;
    }
    case 289566:
    {
        returnValue = F("Seilergässchen");
        break;
    }
    case 289567:
    {
        returnValue = F("Seilergässle");
        break;
    }
    case 289568:
    {
        returnValue = F("Seilergäßchen");
        break;
    }
    case 289569:
    {
        returnValue = F("Seilergäßle");
        break;
    }
    case 289570:
    {
        returnValue = F("Seilerholzweg");
        break;
    }
    case 289571:
    {
        returnValue = F("Seilerhöhe");
        break;
    }
    case 289572:
    {
        returnValue = F("Seilerkamp");
        break;
    }
    case 289573:
    {
        returnValue = F("Seilerkinzig");
        break;
    }
    case 289574:
    {
        returnValue = F("Seilermarkt");
        break;
    }
    case 289575:
    {
        returnValue = F("Seilernweg");
        break;
    }
    case 289576:
    {
        returnValue = F("Seilerpfad");
        break;
    }
    case 289577:
    {
        returnValue = F("Seilerplatz");
        break;
    }
    case 289578:
    {
        returnValue = F("Seilersbahn");
        break;
    }
    case 289579:
    {
        returnValue = F("Seilerseestr.");
        break;
    }
    case 289580:
    {
        returnValue = F("Seilersgarten");
        break;
    }
    case 289581:
    {
        returnValue = F("Seilersgasse");
        break;
    }
    case 289582:
    {
        returnValue = F("Seilersiedlung");
        break;
    }
    case 289583:
    {
        returnValue = F("Seilerstr.");
        break;
    }
    case 289584:
    {
        returnValue = F("Seilersweg");
        break;
    }
    case 289585:
    {
        returnValue = F("Seilerwaldstr.");
        break;
    }
    case 289586:
    {
        returnValue = F("Seilerwall");
        break;
    }
    case 289587:
    {
        returnValue = F("Seilerweg");
        break;
    }
    case 289588:
    {
        returnValue = F("Seilerwegle");
        break;
    }
    case 289589:
    {
        returnValue = F("Seilerwiesen");
        break;
    }
    case 289590:
    {
        returnValue = F("Seilfurter Str.");
        break;
    }
    case 289591:
    {
        returnValue = F("Seilgang");
        break;
    }
    case 289592:
    {
        returnValue = F("Seilgenfelderweg");
        break;
    }
    case 289593:
    {
        returnValue = F("Seilhof");
        break;
    }
    case 289594:
    {
        returnValue = F("Seilhängebrücke");
        break;
    }
    case 289595:
    {
        returnValue = F("Seilmacherstr.");
        break;
    }
    case 289596:
    {
        returnValue = F("Seilmattenstr.");
        break;
    }
    case 289597:
    {
        returnValue = F("Seilmecke");
        break;
    }
    case 289598:
    {
        returnValue = F("Seilrückholweg FSG Malsch");
        break;
    }
    case 289599:
    {
        returnValue = F("Seilschlagstr.");
        break;
    }
    case 289600:
    {
        returnValue = F("Seilstr.");
        break;
    }
    case 289601:
    {
        returnValue = F("Seiläckerweg");
        break;
    }
    case 289602:
    {
        returnValue = F("Seimbergstr.");
        break;
    }
    case 289603:
    {
        returnValue = F("Seimertsbacherweg");
        break;
    }
    case 289604:
    {
        returnValue = F("Sein");
        break;
    }
    case 289605:
    {
        returnValue = F("Seiniger Weg");
        break;
    }
    case 289606:
    {
        returnValue = F("Seinscheweg");
        break;
    }
    case 289607:
    {
        returnValue = F("Seinsfelder Str.");
        break;
    }
    case 289608:
    {
        returnValue = F("Seinsfelder Weg");
        break;
    }
    case 289609:
    {
        returnValue = F("Seinsheimer Str.");
        break;
    }
    case 289610:
    {
        returnValue = F("Seinsheimer Weg");
        break;
    }
    case 289611:
    {
        returnValue = F("Seinsheimgasse");
        break;
    }
    case 289612:
    {
        returnValue = F("Seinsheimstr.");
        break;
    }
    case 289613:
    {
        returnValue = F("Seinsheimweg");
        break;
    }
    case 289614:
    {
        returnValue = F("Seinskopfstr.");
        break;
    }
    case 289615:
    {
        returnValue = F("Seinstedter Str.");
        break;
    }
    case 289616:
    {
        returnValue = F("Seipstr.");
        break;
    }
    case 289617:
    {
        returnValue = F("Seiselitzer Weg");
        break;
    }
    case 289618:
    {
        returnValue = F("Seiser Steig");
        break;
    }
    case 289619:
    {
        returnValue = F("Seiserstr.");
        break;
    }
    case 289620:
    {
        returnValue = F("Seisrain");
        break;
    }
    case 289621:
    {
        returnValue = F("Seistelweg");
        break;
    }
    case 289622:
    {
        returnValue = F("Seitelsgrundweg");
        break;
    }
    case 289623:
    {
        returnValue = F("Seitenbach");
        break;
    }
    case 289624:
    {
        returnValue = F("Seitenbacher Str.");
        break;
    }
    case 289625:
    {
        returnValue = F("Seitenbachstr.");
        break;
    }
    case 289626:
    {
        returnValue = F("Seitenbeutel");
        break;
    }
    case 289627:
    {
        returnValue = F("Seitenbrück");
        break;
    }
    case 289628:
    {
        returnValue = F("Seitendorf");
        break;
    }
    case 289629:
    {
        returnValue = F("Seitenfeldstr.");
        break;
    }
    case 289630:
    {
        returnValue = F("Seitenflügel");
        break;
    }
    case 289631:
    {
        returnValue = F("Seitengasse");
        break;
    }
    case 289632:
    {
        returnValue = F("Seitengasse I");
        break;
    }
    case 289633:
    {
        returnValue = F("Seitengasse II");
        break;
    }
    case 289634:
    {
        returnValue = F("Seitengasse III");
        break;
    }
    case 289635:
    {
        returnValue = F("Seitengäßchen");
        break;
    }
    case 289636:
    {
        returnValue = F("Seitenhalde");
        break;
    }
    case 289637:
    {
        returnValue = F("Seitenhügelweg");
        break;
    }
    case 289638:
    {
        returnValue = F("Seitenkopfstr.");
        break;
    }
    case 289639:
    {
        returnValue = F("Seitenrainweg");
        break;
    }
    case 289640:
    {
        returnValue = F("Seitenspring");
        break;
    }
    case 289641:
    {
        returnValue = F("Seitensteiner Str.");
        break;
    }
    case 289642:
    {
        returnValue = F("Seitenstr.");
        break;
    }
    case 289643:
    {
        returnValue = F("Seitentalsträßle");
        break;
    }
    case 289644:
    {
        returnValue = F("Seitenweg");
        break;
    }
    case 289645:
    {
        returnValue = F("Seitenweg II - 02");
        break;
    }
    case 289646:
    {
        returnValue = F("Seitenweg II - 03");
        break;
    }
    case 289647:
    {
        returnValue = F("Seitenweg II - 04");
        break;
    }
    case 289648:
    {
        returnValue = F("Seitenweg II - 05");
        break;
    }
    case 289649:
    {
        returnValue = F("Seitenweg II - 10");
        break;
    }
    case 289650:
    {
        returnValue = F("Seitenweg II - 11");
        break;
    }
    case 289651:
    {
        returnValue = F("Seitenweg II - 12");
        break;
    }
    case 289652:
    {
        returnValue = F("Seitenweg II - 13");
        break;
    }
    case 289653:
    {
        returnValue = F("Seitenweg II - 14");
        break;
    }
    case 289654:
    {
        returnValue = F("Seitenweg II-06");
        break;
    }
    case 289655:
    {
        returnValue = F("Seitenweg II-07");
        break;
    }
    case 289656:
    {
        returnValue = F("Seitenweg II-08");
        break;
    }
    case 289657:
    {
        returnValue = F("Seitenweg II-09");
        break;
    }
    case 289658:
    {
        returnValue = F("Seitenäcker");
        break;
    }
    case 289659:
    {
        returnValue = F("Seitenäckerweg");
        break;
    }
    case 289660:
    {
        returnValue = F("Seiterser Weg");
        break;
    }
    case 289661:
    {
        returnValue = F("Seitersstr.");
        break;
    }
    case 289662:
    {
        returnValue = F("Seiterstälchen");
        break;
    }
    case 289663:
    {
        returnValue = F("Seitertstr.");
        break;
    }
    case 289664:
    {
        returnValue = F("Seitheller Weg");
        break;
    }
    case 289665:
    {
        returnValue = F("Seitinger Steige");
        break;
    }
    case 289666:
    {
        returnValue = F("Seitinger Str.");
        break;
    }
    case 289667:
    {
        returnValue = F("Seitlingsweg");
        break;
    }
    case 289668:
    {
        returnValue = F("Seitsberger Weg");
        break;
    }
    case 289669:
    {
        returnValue = F("Seitweg");
        break;
    }
    case 289670:
    {
        returnValue = F("Seitz-Berlin-Str.");
        break;
    }
    case 289671:
    {
        returnValue = F("Seitz-Str.");
        break;
    }
    case 289672:
    {
        returnValue = F("Seitzenbachstr.");
        break;
    }
    case 289673:
    {
        returnValue = F("Seitzenbergstr.");
        break;
    }
    case 289674:
    {
        returnValue = F("Seitzenäcker");
        break;
    }
    case 289675:
    {
        returnValue = F("Seitzermühle");
        break;
    }
    case 289676:
    {
        returnValue = F("Seitzstr.");
        break;
    }
    case 289677:
    {
        returnValue = F("Seitzweg");
        break;
    }
    case 289678:
    {
        returnValue = F("Seitzweilerstr.");
        break;
    }
    case 289679:
    {
        returnValue = F("Seiwertstr.");
        break;
    }
    case 289680:
    {
        returnValue = F("Seizstr.");
        break;
    }
    case 289681:
    {
        returnValue = F("Seißenschmidtstr.");
        break;
    }
    case 289682:
    {
        returnValue = F("Seißer Bühl");
        break;
    }
    case 289683:
    {
        returnValue = F("Seißer Weg");
        break;
    }
    case 289684:
    {
        returnValue = F("Sekenweg");
        break;
    }
    case 289685:
    {
        returnValue = F("Sekmeder");
        break;
    }
    case 289686:
    {
        returnValue = F("Sekretärkamp");
        break;
    }
    case 289687:
    {
        returnValue = F("Sektor A");
        break;
    }
    case 289688:
    {
        returnValue = F("Sektor B");
        break;
    }
    case 289689:
    {
        returnValue = F("Sektor C");
        break;
    }
    case 289690:
    {
        returnValue = F("Sektor D");
        break;
    }
    case 289691:
    {
        returnValue = F("Sektor F");
        break;
    }
    case 289692:
    {
        returnValue = F("Selacher Weg");
        break;
    }
    case 289693:
    {
        returnValue = F("Selackerstr.");
        break;
    }
    case 289694:
    {
        returnValue = F("Selauer Str.");
        break;
    }
    case 289695:
    {
        returnValue = F("Selbach");
        break;
    }
    case 289696:
    {
        returnValue = F("Selbacher Str.");
        break;
    }
    case 289697:
    {
        returnValue = F("Selbacher Weg");
        break;
    }
    case 289698:
    {
        returnValue = F("Selbachstr.");
        break;
    }
    case 289699:
    {
        returnValue = F("Selbarg");
        break;
    }
    case 289700:
    {
        returnValue = F("Selbecke");
        break;
    }
    case 289701:
    {
        returnValue = F("Selbecker Str.");
        break;
    }
    case 289702:
    {
        returnValue = F("Selbecker Weg");
        break;
    }
    case 289703:
    {
        returnValue = F("Selbelanger Weg");
        break;
    }
    case 289704:
    {
        returnValue = F("Selbend");
        break;
    }
    case 289705:
    {
        returnValue = F("Selbener Str.");
        break;
    }
    case 289706:
    {
        returnValue = F("Selbenhäuser Str.");
        break;
    }
    case 289707:
    {
        returnValue = F("Selbenhäuser Weg");
        break;
    }
    case 289708:
    {
        returnValue = F("Selbensberg");
        break;
    }
    case 289709:
    {
        returnValue = F("Selber Str.");
        break;
    }
    case 289710:
    {
        returnValue = F("Selbergstr.");
        break;
    }
    case 289711:
    {
        returnValue = F("Selbergsweg");
        break;
    }
    case 289712:
    {
        returnValue = F("Selbergweg");
        break;
    }
    case 289713:
    {
        returnValue = F("Selbig");
        break;
    }
    case 289714:
    {
        returnValue = F("Selbigweg");
        break;
    }
    case 289715:
    {
        returnValue = F("Selbitzer Berg");
        break;
    }
    case 289716:
    {
        returnValue = F("Selbitzer Dorfstr.");
        break;
    }
    case 289717:
    {
        returnValue = F("Selbitzer Str.");
        break;
    }
    case 289718:
    {
        returnValue = F("Selbitzer Weg");
        break;
    }
    case 289719:
    {
        returnValue = F("Selbitztalstr.");
        break;
    }
    case 289720:
    {
        returnValue = F("Selbitzweg");
        break;
    }
    case 289721:
    {
        returnValue = F("Selby-Kreisel");
        break;
    }
    case 289722:
    {
        returnValue = F("Selchastr.");
        break;
    }
    case 289723:
    {
        returnValue = F("Selchenbacher Str.");
        break;
    }
    case 289724:
    {
        returnValue = F("Selchertstr.");
        break;
    }
    case 289725:
    {
        returnValue = F("Selcherweg");
        break;
    }
    case 289726:
    {
        returnValue = F("Selchower Chaussee");
        break;
    }
    case 289727:
    {
        returnValue = F("Selchower Grund");
        break;
    }
    case 289728:
    {
        returnValue = F("Selchower Seen");
        break;
    }
    case 289729:
    {
        returnValue = F("Selchower Str.");
        break;
    }
    case 289730:
    {
        returnValue = F("Selchower Weg");
        break;
    }
    case 289731:
    {
        returnValue = F("Selckstr.");
        break;
    }
    case 289732:
    {
        returnValue = F("Selcukstr.");
        break;
    }
    case 289733:
    {
        returnValue = F("Seldenstr.");
        break;
    }
    case 289734:
    {
        returnValue = F("Selder");
        break;
    }
    case 289735:
    {
        returnValue = F("Seldernweg");
        break;
    }
    case 289736:
    {
        returnValue = F("Seldersland");
        break;
    }
    case 289737:
    {
        returnValue = F("Seldeweg");
        break;
    }
    case 289738:
    {
        returnValue = F("Seldnerstr.");
        break;
    }
    case 289739:
    {
        returnValue = F("Selenter Weg");
        break;
    }
    case 289740:
    {
        returnValue = F("Seles");
        break;
    }
    case 289741:
    {
        returnValue = F("Selfkant");
        break;
    }
    case 289742:
    {
        returnValue = F("Selfkantstr.");
        break;
    }
    case 289743:
    {
        returnValue = F("Selgenbusch");
        break;
    }
    case 289744:
    {
        returnValue = F("Selgenstadt");
        break;
    }
    case 289745:
    {
        returnValue = F("Selgetsweiler Str.");
        break;
    }
    case 289746:
    {
        returnValue = F("Selhausener Str.");
        break;
    }
    case 289747:
    {
        returnValue = F("Selhofer Str.");
        break;
    }
    case 289748:
    {
        returnValue = F("Selhofer Weg");
        break;
    }
    case 289749:
    {
        returnValue = F("Selhofstr.");
        break;
    }
    case 289750:
    {
        returnValue = F("Selhorst");
        break;
    }
    case 289751:
    {
        returnValue = F("Selibertstr.");
        break;
    }
    case 289752:
    {
        returnValue = F("Seligenau");
        break;
    }
    case 289753:
    {
        returnValue = F("Seligenportener Str.");
        break;
    }
    case 289754:
    {
        returnValue = F("Seligenstadter Weg");
        break;
    }
    case 289755:
    {
        returnValue = F("Seligenstädter Schneise");
        break;
    }
    case 289756:
    {
        returnValue = F("Seligenstädter Str.");
        break;
    }
    case 289757:
    {
        returnValue = F("Seligenstädter Weg");
        break;
    }
    case 289758:
    {
        returnValue = F("Seligenthaler Str.");
        break;
    }
    case 289759:
    {
        returnValue = F("Seligerstr.");
        break;
    }
    case 289760:
    {
        returnValue = F("Seligmannsgasse");
        break;
    }
    case 289761:
    {
        returnValue = F("Seligmannstr.");
        break;
    }
    case 289762:
    {
        returnValue = F("Seligweg");
        break;
    }
    case 289763:
    {
        returnValue = F("Selikumer Park");
        break;
    }
    case 289764:
    {
        returnValue = F("Selikumer Str.");
        break;
    }
    case 289765:
    {
        returnValue = F("Selikumer Weg");
        break;
    }
    case 289766:
    {
        returnValue = F("Selingstadt");
        break;
    }
    case 289767:
    {
        returnValue = F("Selingstädter Str.");
        break;
    }
    case 289768:
    {
        returnValue = F("Selingweg");
        break;
    }
    case 289769:
    {
        returnValue = F("Selkaer Str.");
        break;
    }
    case 289770:
    {
        returnValue = F("Selkau");
        break;
    }
    case 289771:
    {
        returnValue = F("Selkebachstr.");
        break;
    }
    case 289772:
    {
        returnValue = F("Selkemühle");
        break;
    }
    case 289773:
    {
        returnValue = F("Selkenkoppel");
        break;
    }
    case 289774:
    {
        returnValue = F("Selkenreuther Str.");
        break;
    }
    case 289775:
    {
        returnValue = F("Selkentrop");
        break;
    }
    case 289776:
    {
        returnValue = F("Selker Weg");
        break;
    }
    case 289777:
    {
        returnValue = F("Selkestr.");
        break;
    }
    case 289778:
    {
        returnValue = F("Selketal");
        break;
    }
    case 289779:
    {
        returnValue = F("Selkeweg");
        break;
    }
    case 289780:
    {
        returnValue = F("Selkeweg Güntersberge-Straßberg");
        break;
    }
    case 289781:
    {
        returnValue = F("Sella-Hasse-Str.");
        break;
    }
    case 289782:
    {
        returnValue = F("Sellaer Str.");
        break;
    }
    case 289783:
    {
        returnValue = F("Sellaer Weg");
        break;
    }
    case 289784:
    {
        returnValue = F("Sellarystr.");
        break;
    }
    case 289785:
    {
        returnValue = F("Sellbachstr.");
        break;
    }
    case 289786:
    {
        returnValue = F("Sellbachsweg");
        break;
    }
    case 289787:
    {
        returnValue = F("Sellbachweg");
        break;
    }
    case 289788:
    {
        returnValue = F("Sellberg");
        break;
    }
    case 289789:
    {
        returnValue = F("Sellbornschneise");
        break;
    }
    case 289790:
    {
        returnValue = F("Selle");
        break;
    }
    case 289791:
    {
        returnValue = F("Sellen");
        break;
    }
    case 289792:
    {
        returnValue = F("Sellen Str.");
        break;
    }
    case 289793:
    {
        returnValue = F("Sellenahne");
        break;
    }
    case 289794:
    {
        returnValue = F("Sellenbach");
        break;
    }
    case 289795:
    {
        returnValue = F("Sellenbachsweg");
        break;
    }
    case 289796:
    {
        returnValue = F("Sellenberg");
        break;
    }
    case 289797:
    {
        returnValue = F("Sellenborngasse");
        break;
    }
    case 289798:
    {
        returnValue = F("Sellener Weg");
        break;
    }
    case 289799:
    {
        returnValue = F("Sellenfreed");
        break;
    }
    case 289800:
    {
        returnValue = F("Sellenfried");
        break;
    }
    case 289801:
    {
        returnValue = F("Sellenrade");
        break;
    }
    case 289802:
    {
        returnValue = F("Sellenstr.");
        break;
    }
    case 289803:
    {
        returnValue = F("Sellentin");
        break;
    }
    case 289804:
    {
        returnValue = F("Sellenwalder Weg");
        break;
    }
    case 289805:
    {
        returnValue = F("Seller Schulweg");
        break;
    }
    case 289806:
    {
        returnValue = F("Seller Weg");
        break;
    }
    case 289807:
    {
        returnValue = F("Sellerain");
        break;
    }
    case 289808:
    {
        returnValue = F("Sellerbacher Str.");
        break;
    }
    case 289809:
    {
        returnValue = F("Sellerbeckstr.");
        break;
    }
    case 289810:
    {
        returnValue = F("Sellericher Str.");
        break;
    }
    case 289811:
    {
        returnValue = F("Selleris");
        break;
    }
    case 289812:
    {
        returnValue = F("Sellertwiete");
        break;
    }
    case 289813:
    {
        returnValue = F("Sellerweg");
        break;
    }
    case 289814:
    {
        returnValue = F("Sellerwiesenschneise");
        break;
    }
    case 289815:
    {
        returnValue = F("Sellessener Allee");
        break;
    }
    case 289816:
    {
        returnValue = F("Sellestr.");
        break;
    }
    case 289817:
    {
        returnValue = F("Sellgraben");
        break;
    }
    case 289818:
    {
        returnValue = F("Sellgrund");
        break;
    }
    case 289819:
    {
        returnValue = F("Sellhof");
        break;
    }
    case 289820:
    {
        returnValue = F("Sellhoop");
        break;
    }
    case 289821:
    {
        returnValue = F("Sellhorn");
        break;
    }
    case 289822:
    {
        returnValue = F("Sellhorner Weg");
        break;
    }
    case 289823:
    {
        returnValue = F("Sellhornshof");
        break;
    }
    case 289824:
    {
        returnValue = F("Sellien");
        break;
    }
    case 289825:
    {
        returnValue = F("Selliendorfer Str.");
        break;
    }
    case 289826:
    {
        returnValue = F("Sellierstr.");
        break;
    }
    case 289827:
    {
        returnValue = F("Selliggasse");
        break;
    }
    case 289828:
    {
        returnValue = F("Selligstr.");
        break;
    }
    case 289829:
    {
        returnValue = F("Selligweg");
        break;
    }
    case 289830:
    {
        returnValue = F("Sellin");
        break;
    }
    case 289831:
    {
        returnValue = F("Selliner Str.");
        break;
    }
    case 289832:
    {
        returnValue = F("Selliner Weg");
        break;
    }
    case 289833:
    {
        returnValue = F("Sellingerstr.");
        break;
    }
    case 289834:
    {
        returnValue = F("Sellnberg");
        break;
    }
    case 289835:
    {
        returnValue = F("Sellnersgasse");
        break;
    }
    case 289836:
    {
        returnValue = F("Sellnhofweg");
        break;
    }
    case 289837:
    {
        returnValue = F("Sellnitzfahrweg");
        break;
    }
    case 289838:
    {
        returnValue = F("Sellnitzgrundweg");
        break;
    }
    case 289839:
    {
        returnValue = F("Sellnröder Str.");
        break;
    }
    case 289840:
    {
        returnValue = F("Sellostr.");
        break;
    }
    case 289841:
    {
        returnValue = F("Selloweg");
        break;
    }
    case 289842:
    {
        returnValue = F("Sellscheid");
        break;
    }
    case 289843:
    {
        returnValue = F("Sellschneise");
        break;
    }
    case 289844:
    {
        returnValue = F("Sellstedter Str.");
        break;
    }
    case 289845:
    {
        returnValue = F("Sellstedter Weg");
        break;
    }
    case 289846:
    {
        returnValue = F("Sellstedtstr.");
        break;
    }
    case 289847:
    {
        returnValue = F("Sellstr.");
        break;
    }
    case 289848:
    {
        returnValue = F("Sellworth");
        break;
    }
    case 289849:
    {
        returnValue = F("Selm-Beifang");
        break;
    }
    case 289850:
    {
        returnValue = F("Selma-Becker-Platz");
        break;
    }
    case 289851:
    {
        returnValue = F("Selma-Bruch-Str.");
        break;
    }
    case 289852:
    {
        returnValue = F("Selma-Englisch-Str.");
        break;
    }
    case 289853:
    {
        returnValue = F("Selma-Lagerlöf-Hof");
        break;
    }
    case 289854:
    {
        returnValue = F("Selma-Lagerlöf-Ring");
        break;
    }
    case 289855:
    {
        returnValue = F("Selma-Lagerlöf-Str.");
        break;
    }
    case 289856:
    {
        returnValue = F("Selma-Lagerlöf-Weg");
        break;
    }
    case 289857:
    {
        returnValue = F("Selma-Lagerlöff-Weg");
        break;
    }
    case 289858:
    {
        returnValue = F("Selma-Wiesner-Weg");
        break;
    }
    case 289859:
    {
        returnValue = F("Selmastr.");
        break;
    }
    case 289860:
    {
        returnValue = F("Selmbach");
        break;
    }
    case 289861:
    {
        returnValue = F("Selmenstr.");
        break;
    }
    case 289862:
    {
        returnValue = F("Selmer Str.");
        break;
    }
    case 289863:
    {
        returnValue = F("Selmerhof");
        break;
    }
    case 289864:
    {
        returnValue = F("Selmke-Weg");
        break;
    }
    case 289865:
    {
        returnValue = F("Selmnau");
        break;
    }
    case 289866:
    {
        returnValue = F("Selmnitzstr.");
        break;
    }
    case 289867:
    {
        returnValue = F("Selmsdorfer Landstr.");
        break;
    }
    case 289868:
    {
        returnValue = F("Selmsdorfer Str.");
        break;
    }
    case 289869:
    {
        returnValue = F("Selmsdörp");
        break;
    }
    case 289870:
    {
        returnValue = F("Selmseeweg");
        break;
    }
    case 289871:
    {
        returnValue = F("Selmshof");
        break;
    }
    case 289872:
    {
        returnValue = F("Selower Chaussee");
        break;
    }
    case 289873:
    {
        returnValue = F("Selower Weg");
        break;
    }
    case 289874:
    {
        returnValue = F("Selrain");
        break;
    }
    case 289875:
    {
        returnValue = F("Selscheid");
        break;
    }
    case 289876:
    {
        returnValue = F("Selscheider Weg");
        break;
    }
    case 289877:
    {
        returnValue = F("Selsenbergstr.");
        break;
    }
    case 289878:
    {
        returnValue = F("Selser Str.");
        break;
    }
    case 289879:
    {
        returnValue = F("Selsinger Str.");
        break;
    }
    case 289880:
    {
        returnValue = F("Selstener Str.");
        break;
    }
    case 289881:
    {
        returnValue = F("Seltbachstr.");
        break;
    }
    case 289882:
    {
        returnValue = F("Seltbachweg");
        break;
    }
    case 289883:
    {
        returnValue = F("Seltelstr.");
        break;
    }
    case 289884:
    {
        returnValue = F("Seltelweg");
        break;
    }
    case 289885:
    {
        returnValue = F("Seltenau");
        break;
    }
    case 289886:
    {
        returnValue = F("Seltenbach");
        break;
    }
    case 289887:
    {
        returnValue = F("Seltenbachstr.");
        break;
    }
    case 289888:
    {
        returnValue = F("Seltenbachweg");
        break;
    }
    case 289889:
    {
        returnValue = F("Seltenberg");
        break;
    }
    case 289890:
    {
        returnValue = F("Seltendorfer Str.");
        break;
    }
    case 289891:
    {
        returnValue = F("Seltenhornstr.");
        break;
    }
    case 289892:
    {
        returnValue = F("Seltenstr.");
        break;
    }
    case 289893:
    {
        returnValue = F("Seltenweg");
        break;
    }
    case 289894:
    {
        returnValue = F("Selterhofbrücke");
        break;
    }
    case 289895:
    {
        returnValue = F("Selterser Hohl");
        break;
    }
    case 289896:
    {
        returnValue = F("Selterser Str.");
        break;
    }
    case 289897:
    {
        returnValue = F("Selterstr.");
        break;
    }
    case 289898:
    {
        returnValue = F("Seltersweg");
        break;
    }
    case 289899:
    {
        returnValue = F("Selterweg");
        break;
    }
    case 289900:
    {
        returnValue = F("Seltgesrech");
        break;
    }
    case 289901:
    {
        returnValue = F("Seltings Porte");
        break;
    }
    case 289902:
    {
        returnValue = F("Seltkerpad");
        break;
    }
    case 289903:
    {
        returnValue = F("Seltmannstr.");
        break;
    }
    case 289904:
    {
        returnValue = F("Seltmannweg");
        break;
    }
    case 289905:
    {
        returnValue = F("Seltsamplatz");
        break;
    }
    case 289906:
    {
        returnValue = F("Selttal");
        break;
    }
    case 289907:
    {
        returnValue = F("Selttalstr.");
        break;
    }
    case 289908:
    {
        returnValue = F("Seltz");
        break;
    }
    case 289909:
    {
        returnValue = F("Seltzer Ring");
        break;
    }
    case 289910:
    {
        returnValue = F("Seltzer Str.");
        break;
    }
    case 289911:
    {
        returnValue = F("Seltzer Weg");
        break;
    }
    case 289912:
    {
        returnValue = F("Selverder Grenzweg");
        break;
    }
    case 289913:
    {
        returnValue = F("Selverder Str.");
        break;
    }
    case 289914:
    {
        returnValue = F("Selvestr.");
        break;
    }
    case 289915:
    {
        returnValue = F("Selwatstr.");
        break;
    }
    case 289916:
    {
        returnValue = F("Selworth");
        break;
    }
    case 289917:
    {
        returnValue = F("Selxer Str.");
        break;
    }
    case 289918:
    {
        returnValue = F("Selz Park");
        break;
    }
    case 289919:
    {
        returnValue = F("Selzachtal");
        break;
    }
    case 289920:
    {
        returnValue = F("Selzau");
        break;
    }
    case 289921:
    {
        returnValue = F("Selzenweg");
        break;
    }
    case 289922:
    {
        returnValue = F("Selzer");
        break;
    }
    case 289923:
    {
        returnValue = F("Selzerbachweg");
        break;
    }
    case 289924:
    {
        returnValue = F("Selzerweg");
        break;
    }
    case 289925:
    {
        returnValue = F("Selzgarten");
        break;
    }
    case 289926:
    {
        returnValue = F("Selzgasse");
        break;
    }
    case 289927:
    {
        returnValue = F("Selzlinweg");
        break;
    }
    case 289928:
    {
        returnValue = F("Selzstr.");
        break;
    }
    case 289929:
    {
        returnValue = F("Selztalstr.");
        break;
    }
    case 289930:
    {
        returnValue = F("Selzweg");
        break;
    }
    case 289931:
    {
        returnValue = F("Seläcker");
        break;
    }
    case 289932:
    {
        returnValue = F("Sembacher Str.");
        break;
    }
    case 289933:
    {
        returnValue = F("Sembachtal");
        break;
    }
    case 289934:
    {
        returnValue = F("Sembdnerstr.");
        break;
    }
    case 289935:
    {
        returnValue = F("Sembergstr.");
        break;
    }
    case 289936:
    {
        returnValue = F("Sembergsweg");
        break;
    }
    case 289937:
    {
        returnValue = F("Sembritzkistr.");
        break;
    }
    case 289938:
    {
        returnValue = F("Sembtener Str.");
        break;
    }
    case 289939:
    {
        returnValue = F("Sembtener Weg");
        break;
    }
    case 289940:
    {
        returnValue = F("Semdachstr.");
        break;
    }
    case 289941:
    {
        returnValue = F("Semdenstr.");
        break;
    }
    case 289942:
    {
        returnValue = F("Semder Pfad");
        break;
    }
    case 289943:
    {
        returnValue = F("Semder Str.");
        break;
    }
    case 289944:
    {
        returnValue = F("Semder Weg");
        break;
    }
    case 289945:
    {
        returnValue = F("Semendriastr.");
        break;
    }
    case 289946:
    {
        returnValue = F("Semersteig");
        break;
    }
    case 289947:
    {
        returnValue = F("Semerstr.");
        break;
    }
    case 289948:
    {
        returnValue = F("Semichweg");
        break;
    }
    case 289949:
    {
        returnValue = F("Seminarberg");
        break;
    }
    case 289950:
    {
        returnValue = F("Seminargarten");
        break;
    }
    case 289951:
    {
        returnValue = F("Seminargasse");
        break;
    }
    case 289952:
    {
        returnValue = F("Seminarplatz");
        break;
    }
    case 289953:
    {
        returnValue = F("Seminarstr.");
        break;
    }
    case 289954:
    {
        returnValue = F("Seminarweg");
        break;
    }
    case 289955:
    {
        returnValue = F("Semlerstr.");
        break;
    }
    case 289956:
    {
        returnValue = F("Semliner Chaussee");
        break;
    }
    case 289957:
    {
        returnValue = F("Semliner Str.");
        break;
    }
    case 289958:
    {
        returnValue = F("Semlower Str.");
        break;
    }
    case 289959:
    {
        returnValue = F("Semlowerstr.");
        break;
    }
    case 289960:
    {
        returnValue = F("Semmelallee");
        break;
    }
    case 289961:
    {
        returnValue = F("Semmelberg");
        break;
    }
    case 289962:
    {
        returnValue = F("Semmelbergstr.");
        break;
    }
    case 289963:
    {
        returnValue = F("Semmeleweg");
        break;
    }
    case 289964:
    {
        returnValue = F("Semmelflügel");
        break;
    }
    case 289965:
    {
        returnValue = F("Semmelgasse");
        break;
    }
    case 289966:
    {
        returnValue = F("Semmelmühle");
        break;
    }
    case 289967:
    {
        returnValue = F("Semmelstr.");
        break;
    }
    case 289968:
    {
        returnValue = F("Semmelweg");
        break;
    }
    case 289969:
    {
        returnValue = F("Semmelweispark");
        break;
    }
    case 289970:
    {
        returnValue = F("Semmelweissiedlung");
        break;
    }
    case 289971:
    {
        returnValue = F("Semmelweisstr.");
        break;
    }
    case 289972:
    {
        returnValue = F("Semmelweisweg");
        break;
    }
    case 289973:
    {
        returnValue = F("Semmelweißstr.");
        break;
    }
    case 289974:
    {
        returnValue = F("Semmelweißweg");
        break;
    }
    case 289975:
    {
        returnValue = F("Semmenstedter Str.");
        break;
    }
    case 289976:
    {
        returnValue = F("Semmenweg");
        break;
    }
    case 289977:
    {
        returnValue = F("Semmeriner Dorfstr.");
        break;
    }
    case 289978:
    {
        returnValue = F("Semmern");
        break;
    }
    case 289979:
    {
        returnValue = F("Semmerweg");
        break;
    }
    case 289980:
    {
        returnValue = F("Semmeweg");
        break;
    }
    case 289981:
    {
        returnValue = F("Semmichsweg");
        break;
    }
    case 289982:
    {
        returnValue = F("Semminger");
        break;
    }
    case 289983:
    {
        returnValue = F("Semmlerstr.");
        break;
    }
    case 289984:
    {
        returnValue = F("Semnonenring");
        break;
    }
    case 289985:
    {
        returnValue = F("Semnonenweg");
        break;
    }
    case 289986:
    {
        returnValue = F("Semper");
        break;
    }
    case 289987:
    {
        returnValue = F("Semperhof");
        break;
    }
    case 289988:
    {
        returnValue = F("Semperlohstr.");
        break;
    }
    case 289989:
    {
        returnValue = F("Sempten");
        break;
    }
    case 289990:
    {
        returnValue = F("Semptstr.");
        break;
    }
    case 289991:
    {
        returnValue = F("Semptweg");
        break;
    }
    case 289992:
    {
        returnValue = F("Semssweg");
        break;
    }
    case 289993:
    {
        returnValue = F("Senator-August-Moritz-Platz");
        break;
    }
    case 289994:
    {
        returnValue = F("Senator-Beyer-Weg");
        break;
    }
    case 289995:
    {
        returnValue = F("Senator-Borst-Str.");
        break;
    }
    case 289996:
    {
        returnValue = F("Senator-Borttscheller-Str.");
        break;
    }
    case 289997:
    {
        returnValue = F("Senator-Braun-Allee");
        break;
    }
    case 289998:
    {
        returnValue = F("Senator-Brünger-Str.");
        break;
    }
    case 289999:
    {
        returnValue = F("Senator-Burda-Anlage");
        break;
    }
    case 290000:
    {
        returnValue = F("Senator-Burda-Str.");
        break;
    }
    case 290001:
    {
        returnValue = F("Senator-Ernst-Str.");
        break;
    }
    case 290002:
    {
        returnValue = F("Senator-Franz-Burda-Str.");
        break;
    }
    case 290003:
    {
        returnValue = F("Senator-Gerauer-Str.");
        break;
    }
    case 290004:
    {
        returnValue = F("Senator-Haake-Str.");
        break;
    }
    case 290005:
    {
        returnValue = F("Senator-Hahne-Str.");
        break;
    }
    case 290006:
    {
        returnValue = F("Senator-Hilmer-Str.");
        break;
    }
    case 290007:
    {
        returnValue = F("Senator-Kraft-Str.");
        break;
    }
    case 290008:
    {
        returnValue = F("Senator-Meier-Str.");
        break;
    }
    case 290009:
    {
        returnValue = F("Senator-Rohlfs-Weg");
        break;
    }
    case 290010:
    {
        returnValue = F("Senator-Sandhagen-Str.");
        break;
    }
    case 290011:
    {
        returnValue = F("Senator-Schröder-Str.");
        break;
    }
    case 290012:
    {
        returnValue = F("Senator-Schulze-Promenade");
        break;
    }
    case 290013:
    {
        returnValue = F("Senator-Schwartz-Ring");
        break;
    }
    case 290014:
    {
        returnValue = F("Senator-Stuhr-Str.");
        break;
    }
    case 290015:
    {
        returnValue = F("Senator-Voges-Str.");
        break;
    }
    case 290016:
    {
        returnValue = F("Senator-Wentz-Str.");
        break;
    }
    case 290017:
    {
        returnValue = F("Senator-Zick-Str.");
        break;
    }
    case 290018:
    {
        returnValue = F("Senatorenwinkel");
        break;
    }
    case 290019:
    {
        returnValue = F("Senatsplatz");
        break;
    }
    case 290020:
    {
        returnValue = F("Senckenbergstr.");
        break;
    }
    case 290021:
    {
        returnValue = F("Sendbergsfeld");
        break;
    }
    case 290022:
    {
        returnValue = F("Sendbergstr.");
        break;
    }
    case 290023:
    {
        returnValue = F("Sendefunkstelle");
        break;
    }
    case 290024:
    {
        returnValue = F("Sendelbach");
        break;
    }
    case 290025:
    {
        returnValue = F("Sendelbacher Str.");
        break;
    }
    case 290026:
    {
        returnValue = F("Sendelbachstr.");
        break;
    }
    case 290027:
    {
        returnValue = F("Sendelmühlstr.");
        break;
    }
    case 290028:
    {
        returnValue = F("Sendelweg");
        break;
    }
    }
    return returnValue;
}
