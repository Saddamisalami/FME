#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameN2(unsigned int streetKey)
{
String returnValue = "";
switch (streetKey)
{
case 230023:
{
returnValue = F("Neudorfer Str.");
break;
}
case 230024:
{
returnValue = F("Neudorfer Weg");
break;
}
case 230025:
{
returnValue = F("Neudorferhof");
break;
}
case 230026:
{
returnValue = F("Neudorfgasse");
break;
}
case 230027:
{
returnValue = F("Neudorfstr.");
break;
}
case 230028:
{
returnValue = F("Neudorfweg");
break;
}
case 230029:
{
returnValue = F("Neudrebnitz");
break;
}
case 230030:
{
returnValue = F("Neudöberner Str.");
break;
}
case 230031:
{
returnValue = F("Neudörfchen");
break;
}
case 230032:
{
returnValue = F("Neudörfchener Weg");
break;
}
case 230033:
{
returnValue = F("Neudörfel");
break;
}
case 230034:
{
returnValue = F("Neudörfersteg");
break;
}
case 230035:
{
returnValue = F("Neudörferstr.");
break;
}
case 230036:
{
returnValue = F("Neudörfferweg");
break;
}
case 230037:
{
returnValue = F("Neudörfle");
break;
}
case 230038:
{
returnValue = F("Neudörfler Str.");
break;
}
case 230039:
{
returnValue = F("Neudörfler Weg");
break;
}
case 230040:
{
returnValue = F("Neudörnweg");
break;
}
case 230041:
{
returnValue = F("Neudörpen");
break;
}
case 230042:
{
returnValue = F("Neudörpener Str.");
break;
}
case 230043:
{
returnValue = F("Neue Achenbacher Str.");
break;
}
case 230044:
{
returnValue = F("Neue Ackersteige");
break;
}
case 230045:
{
returnValue = F("Neue Alacher Chaussee");
break;
}
case 230046:
{
returnValue = F("Neue Allee");
break;
}
case 230047:
{
returnValue = F("Neue Altheimer Str.");
break;
}
case 230048:
{
returnValue = F("Neue Amberger Str.");
break;
}
case 230049:
{
returnValue = F("Neue Angerstr.");
break;
}
case 230050:
{
returnValue = F("Neue Anlage");
break;
}
case 230051:
{
returnValue = F("Neue Anlagen");
break;
}
case 230052:
{
returnValue = F("Neue Au");
break;
}
case 230053:
{
returnValue = F("Neue Aue");
break;
}
case 230054:
{
returnValue = F("Neue Austr.");
break;
}
case 230055:
{
returnValue = F("Neue Bachstr.");
break;
}
case 230056:
{
returnValue = F("Neue Badenstr.");
break;
}
case 230057:
{
returnValue = F("Neue Bahnhofstr.");
break;
}
case 230058:
{
returnValue = F("Neue Bahnstr.");
break;
}
case 230059:
{
returnValue = F("Neue Balinger Str.");
break;
}
case 230060:
{
returnValue = F("Neue Ballenstedter Str.");
break;
}
case 230061:
{
returnValue = F("Neue Barlage");
break;
}
case 230062:
{
returnValue = F("Neue Baruther Str.");
break;
}
case 230063:
{
returnValue = F("Neue Bauerngasse");
break;
}
case 230064:
{
returnValue = F("Neue Bauernstr.");
break;
}
case 230065:
{
returnValue = F("Neue Baurenberger Steige");
break;
}
case 230066:
{
returnValue = F("Neue Beckestr.");
break;
}
case 230067:
{
returnValue = F("Neue Beelitzer Str.");
break;
}
case 230068:
{
returnValue = F("Neue Behrensdorfstr.");
break;
}
case 230069:
{
returnValue = F("Neue Beiersdorfer Str.");
break;
}
case 230070:
{
returnValue = F("Neue Bergstr.");
break;
}
case 230071:
{
returnValue = F("Neue Bindstr.");
break;
}
case 230072:
{
returnValue = F("Neue Bleek");
break;
}
case 230073:
{
returnValue = F("Neue Bleicherstr.");
break;
}
case 230074:
{
returnValue = F("Neue Bochower Str.");
break;
}
case 230075:
{
returnValue = F("Neue Bockradener Str.");
break;
}
case 230076:
{
returnValue = F("Neue Bogen Schneise");
break;
}
case 230077:
{
returnValue = F("Neue Bohle");
break;
}
case 230078:
{
returnValue = F("Neue Boragker Trift");
break;
}
case 230079:
{
returnValue = F("Neue Bornstr.");
break;
}
case 230080:
{
returnValue = F("Neue Brake");
break;
}
case 230081:
{
returnValue = F("Neue Braugasse");
break;
}
case 230082:
{
returnValue = F("Neue Breetzer Str.");
break;
}
case 230083:
{
returnValue = F("Neue Breitenfelder Str.");
break;
}
case 230084:
{
returnValue = F("Neue Brettener Str.");
break;
}
case 230085:
{
returnValue = F("Neue Bruchstr.");
break;
}
case 230086:
{
returnValue = F("Neue Brücke");
break;
}
case 230087:
{
returnValue = F("Neue Brückenstr.");
break;
}
case 230088:
{
returnValue = F("Neue Brühlstr.");
break;
}
case 230089:
{
returnValue = F("Neue Buchener Str.");
break;
}
case 230090:
{
returnValue = F("Neue Bughofer Str.");
break;
}
case 230091:
{
returnValue = F("Neue Burg");
break;
}
case 230092:
{
returnValue = F("Neue Burger Str.");
break;
}
case 230093:
{
returnValue = F("Neue Burgkemnitzer Str.");
break;
}
case 230094:
{
returnValue = F("Neue Burgstr.");
break;
}
case 230095:
{
returnValue = F("Neue Bussestr.");
break;
}
case 230096:
{
returnValue = F("Neue Bäckerstr.");
break;
}
case 230097:
{
returnValue = F("Neue Carlsfelder Str.");
break;
}
case 230098:
{
returnValue = F("Neue Chaussee");
break;
}
case 230099:
{
returnValue = F("Neue Deichbrücke");
break;
}
case 230100:
{
returnValue = F("Neue Deichstr.");
break;
}
case 230101:
{
returnValue = F("Neue Dessauer Str.");
break;
}
case 230102:
{
returnValue = F("Neue Dielbacher Str.");
break;
}
case 230103:
{
returnValue = F("Neue Dimbergstr.");
break;
}
case 230104:
{
returnValue = F("Neue Dolmarstr.");
break;
}
case 230105:
{
returnValue = F("Neue Donnerschweer Str.");
break;
}
case 230106:
{
returnValue = F("Neue Dorflage");
break;
}
case 230107:
{
returnValue = F("Neue Dorfstelle");
break;
}
case 230108:
{
returnValue = F("Neue Dorfstr.");
break;
}
case 230109:
{
returnValue = F("Neue Dorfstr. I");
break;
}
case 230110:
{
returnValue = F("Neue Dorfstr. II");
break;
}
case 230111:
{
returnValue = F("Neue Drift");
break;
}
case 230112:
{
returnValue = F("Neue Dünenstr.");
break;
}
case 230113:
{
returnValue = F("Neue Eichenstr.");
break;
}
case 230114:
{
returnValue = F("Neue Eiler Str.");
break;
}
case 230115:
{
returnValue = F("Neue Eisenbahnstr.");
break;
}
case 230116:
{
returnValue = F("Neue Emleber Str.");
break;
}
case 230117:
{
returnValue = F("Neue Engelsstr.");
break;
}
case 230118:
{
returnValue = F("Neue Ennest");
break;
}
case 230119:
{
returnValue = F("Neue Erikabrücke");
break;
}
case 230120:
{
returnValue = F("Neue Erknerstr.");
break;
}
case 230121:
{
returnValue = F("Neue Fahrstr.");
break;
}
case 230122:
{
returnValue = F("Neue Fahrt");
break;
}
case 230123:
{
returnValue = F("Neue Feldstr.");
break;
}
case 230124:
{
returnValue = F("Neue Finien");
break;
}
case 230125:
{
returnValue = F("Neue Fischstr.");
break;
}
case 230126:
{
returnValue = F("Neue Flur");
break;
}
case 230127:
{
returnValue = F("Neue Flurstr.");
break;
}
case 230128:
{
returnValue = F("Neue Forsthäuser");
break;
}
case 230129:
{
returnValue = F("Neue Forstsiedlung");
break;
}
case 230130:
{
returnValue = F("Neue Forststr.");
break;
}
case 230131:
{
returnValue = F("Neue Friedensstr.");
break;
}
case 230132:
{
returnValue = F("Neue Friedenstr.");
break;
}
case 230133:
{
returnValue = F("Neue Friedhofstr.");
break;
}
case 230134:
{
returnValue = F("Neue Friedrichstr.");
break;
}
case 230135:
{
returnValue = F("Neue Fruchtstr.");
break;
}
case 230136:
{
returnValue = F("Neue Furth");
break;
}
case 230137:
{
returnValue = F("Neue Gabel");
break;
}
case 230138:
{
returnValue = F("Neue Gartenstadt");
break;
}
case 230139:
{
returnValue = F("Neue Gartenstr.");
break;
}
case 230140:
{
returnValue = F("Neue Gass");
break;
}
case 230141:
{
returnValue = F("Neue Gasse");
break;
}
case 230142:
{
returnValue = F("Neue Gautinger Str.");
break;
}
case 230143:
{
returnValue = F("Neue Geest");
break;
}
case 230144:
{
returnValue = F("Neue Gehrgass");
break;
}
case 230145:
{
returnValue = F("Neue Gewerbestr.");
break;
}
case 230146:
{
returnValue = F("Neue Giersbergstr.");
break;
}
case 230147:
{
returnValue = F("Neue Glattbacher Str.");
break;
}
case 230148:
{
returnValue = F("Neue Grabenstr.");
break;
}
case 230149:
{
returnValue = F("Neue Grenze");
break;
}
case 230150:
{
returnValue = F("Neue Grimmaer Str.");
break;
}
case 230151:
{
returnValue = F("Neue Große Wiese");
break;
}
case 230152:
{
returnValue = F("Neue Gröberner Str.");
break;
}
case 230153:
{
returnValue = F("Neue Gründe");
break;
}
case 230154:
{
returnValue = F("Neue Grünhainer Str.");
break;
}
case 230155:
{
returnValue = F("Neue Gärten");
break;
}
case 230156:
{
returnValue = F("Neue Güldenklinke");
break;
}
case 230157:
{
returnValue = F("Neue Hafenstr.");
break;
}
case 230158:
{
returnValue = F("Neue Hainstr.");
break;
}
case 230159:
{
returnValue = F("Neue Halberstädter Str.");
break;
}
case 230160:
{
returnValue = F("Neue Halde");
break;
}
case 230161:
{
returnValue = F("Neue Hallesche Str.");
break;
}
case 230162:
{
returnValue = F("Neue Hamburger Str.");
break;
}
case 230163:
{
returnValue = F("Neue Hanauer Str.");
break;
}
case 230164:
{
returnValue = F("Neue Harth");
break;
}
case 230165:
{
returnValue = F("Neue Hasenheide");
break;
}
case 230166:
{
returnValue = F("Neue Hauptstr.");
break;
}
case 230167:
{
returnValue = F("Neue Hausener Str.");
break;
}
case 230168:
{
returnValue = F("Neue Hechinger Str.");
break;
}
case 230169:
{
returnValue = F("Neue Heeg");
break;
}
case 230170:
{
returnValue = F("Neue Heerstr.");
break;
}
case 230171:
{
returnValue = F("Neue Hegelstr.");
break;
}
case 230172:
{
returnValue = F("Neue Heide");
break;
}
case 230173:
{
returnValue = F("Neue Heidenheimer Str.");
break;
}
case 230174:
{
returnValue = F("Neue Heidestr.");
break;
}
case 230175:
{
returnValue = F("Neue Heimat");
break;
}
case 230176:
{
returnValue = F("Neue Heimatstr.");
break;
}
case 230177:
{
returnValue = F("Neue Heimstätte");
break;
}
case 230178:
{
returnValue = F("Neue Heinestr.");
break;
}
case 230179:
{
returnValue = F("Neue Heinige");
break;
}
case 230180:
{
returnValue = F("Neue Hellmer");
break;
}
case 230181:
{
returnValue = F("Neue Helmer");
break;
}
case 230182:
{
returnValue = F("Neue Herberner Str.");
break;
}
case 230183:
{
returnValue = F("Neue Herrenalber Str.");
break;
}
case 230184:
{
returnValue = F("Neue Herrenhaider Str.");
break;
}
case 230185:
{
returnValue = F("Neue Hoffnung");
break;
}
case 230186:
{
returnValue = F("Neue Hohburkersdorfer Str.");
break;
}
case 230187:
{
returnValue = F("Neue Hohe Str.");
break;
}
case 230188:
{
returnValue = F("Neue Hohenzeller Str.");
break;
}
case 230189:
{
returnValue = F("Neue Hohl");
break;
}
case 230190:
{
returnValue = F("Neue Hohnstädter Str.");
break;
}
case 230191:
{
returnValue = F("Neue Hufen");
break;
}
case 230192:
{
returnValue = F("Neue Häfnersgasse");
break;
}
case 230193:
{
returnValue = F("Neue Häuser");
break;
}
case 230194:
{
returnValue = F("Neue Höft");
break;
}
case 230195:
{
returnValue = F("Neue Höllbachstr.");
break;
}
case 230196:
{
returnValue = F("Neue Hörsteiner Str.");
break;
}
case 230197:
{
returnValue = F("Neue Hülbe");
break;
}
case 230198:
{
returnValue = F("Neue Hünxer Str.");
break;
}
case 230199:
{
returnValue = F("Neue Hütte");
break;
}
case 230200:
{
returnValue = F("Neue Hüttenstr.");
break;
}
case 230201:
{
returnValue = F("Neue Industriestr.");
break;
}
case 230202:
{
returnValue = F("Neue Jülicher Str.");
break;
}
case 230203:
{
returnValue = F("Neue Kamp");
break;
}
case 230204:
{
returnValue = F("Neue Kampstr.");
break;
}
case 230205:
{
returnValue = F("Neue Kanalstr.");
break;
}
case 230206:
{
returnValue = F("Neue Kasseler Str.");
break;
}
case 230207:
{
returnValue = F("Neue Kastanienallee");
break;
}
case 230208:
{
returnValue = F("Neue Kautendorfer Str.");
break;
}
case 230209:
{
returnValue = F("Neue Kehr");
break;
}
case 230210:
{
returnValue = F("Neue Kietzstr.");
break;
}
case 230211:
{
returnValue = F("Neue Killer Steige");
break;
}
case 230212:
{
returnValue = F("Neue Kirchenstr.");
break;
}
case 230213:
{
returnValue = F("Neue Kirchgasse");
break;
}
case 230214:
{
returnValue = F("Neue Kirchmatte");
break;
}
case 230215:
{
returnValue = F("Neue Kirchstr.");
break;
}
case 230216:
{
returnValue = F("Neue Kirschallee");
break;
}
case 230217:
{
returnValue = F("Neue Klosterallee");
break;
}
case 230218:
{
returnValue = F("Neue Klosterstr.");
break;
}
case 230219:
{
returnValue = F("Neue Klosterwiese");
break;
}
case 230220:
{
returnValue = F("Neue Knochenhauerstr.");
break;
}
case 230221:
{
returnValue = F("Neue Kolonie");
break;
}
case 230222:
{
returnValue = F("Neue Konsulnstr.");
break;
}
case 230223:
{
returnValue = F("Neue Koppel");
break;
}
case 230224:
{
returnValue = F("Neue Kranenburger Str.");
break;
}
case 230225:
{
returnValue = F("Neue Krautgärten");
break;
}
case 230226:
{
returnValue = F("Neue Krefelder Str.");
break;
}
case 230227:
{
returnValue = F("Neue Kreisstr.");
break;
}
case 230228:
{
returnValue = F("Neue Kämpe");
break;
}
case 230229:
{
returnValue = F("Neue Kämpeweg");
break;
}
case 230230:
{
returnValue = F("Neue Kärntner Str.");
break;
}
case 230231:
{
returnValue = F("Neue Königstr.");
break;
}
case 230232:
{
returnValue = F("Neue Lage");
break;
}
case 230233:
{
returnValue = F("Neue Land");
break;
}
case 230234:
{
returnValue = F("Neue Lande");
break;
}
case 230235:
{
returnValue = F("Neue Landschaft Ronneburg");
break;
}
case 230236:
{
returnValue = F("Neue Landstr.");
break;
}
case 230237:
{
returnValue = F("Neue Landwehr");
break;
}
case 230238:
{
returnValue = F("Neue Landwehr I");
break;
}
case 230239:
{
returnValue = F("Neue Landwehr II");
break;
}
case 230240:
{
returnValue = F("Neue Leipziger Str.");
break;
}
case 230241:
{
returnValue = F("Neue Leite");
break;
}
case 230242:
{
returnValue = F("Neue Licher Pforte");
break;
}
case 230243:
{
returnValue = F("Neue Liebe");
break;
}
case 230244:
{
returnValue = F("Neue Lindenallee");
break;
}
case 230245:
{
returnValue = F("Neue Lindenstr.");
break;
}
case 230246:
{
returnValue = F("Neue Linie");
break;
}
case 230247:
{
returnValue = F("Neue Linner");
break;
}
case 230248:
{
returnValue = F("Neue Linner Str.");
break;
}
case 230249:
{
returnValue = F("Neue Loburger Str.");
break;
}
case 230250:
{
returnValue = F("Neue Lohne");
break;
}
case 230251:
{
returnValue = F("Neue Luchstr.");
break;
}
case 230252:
{
returnValue = F("Neue Lustgartenstr.");
break;
}
case 230253:
{
returnValue = F("Neue Länder");
break;
}
case 230254:
{
returnValue = F("Neue Länge");
break;
}
case 230255:
{
returnValue = F("Neue Lück");
break;
}
case 230256:
{
returnValue = F("Neue Lützener Str.");
break;
}
case 230257:
{
returnValue = F("Neue Maaße");
break;
}
case 230258:
{
returnValue = F("Neue Magazinstr.");
break;
}
case 230259:
{
returnValue = F("Neue Mainlände");
break;
}
case 230260:
{
returnValue = F("Neue Mainstr.");
break;
}
case 230261:
{
returnValue = F("Neue Mainzer Str.");
break;
}
case 230262:
{
returnValue = F("Neue Marienberger Str.");
break;
}
case 230263:
{
returnValue = F("Neue Marienstr.");
break;
}
case 230264:
{
returnValue = F("Neue Mark");
break;
}
case 230265:
{
returnValue = F("Neue Markneukirchner Str.");
break;
}
case 230266:
{
returnValue = F("Neue Markranstädter Str.");
break;
}
case 230267:
{
returnValue = F("Neue Marktstr.");
break;
}
case 230268:
{
returnValue = F("Neue Mauerstr.");
break;
}
case 230269:
{
returnValue = F("Neue Meedenstr.");
break;
}
case 230270:
{
returnValue = F("Neue Mehrower Str.");
break;
}
case 230271:
{
returnValue = F("Neue Meinigstr.");
break;
}
case 230272:
{
returnValue = F("Neue Meßstr.");
break;
}
case 230273:
{
returnValue = F("Neue Michelner Str.");
break;
}
case 230274:
{
returnValue = F("Neue Mitte");
break;
}
case 230275:
{
returnValue = F("Neue Mitte Zell");
break;
}
case 230276:
{
returnValue = F("Neue Mittelstr.");
break;
}
case 230277:
{
returnValue = F("Neue Molkereistr.");
break;
}
case 230278:
{
returnValue = F("Neue Mögglinger Str.");
break;
}
case 230279:
{
returnValue = F("Neue Mölbiser Str.");
break;
}
case 230280:
{
returnValue = F("Neue Mühle");
break;
}
case 230281:
{
returnValue = F("Neue Mühler Damm");
break;
}
case 230282:
{
returnValue = F("Neue Mühlgasse");
break;
}
case 230283:
{
returnValue = F("Neue Mühlstr.");
break;
}
case 230284:
{
returnValue = F("Neue Natostr.");
break;
}
case 230285:
{
returnValue = F("Neue Neckarspitze");
break;
}
case 230286:
{
returnValue = F("Neue Niedenau");
break;
}
case 230287:
{
returnValue = F("Neue Nordkirchener Str.");
break;
}
case 230288:
{
returnValue = F("Neue Nordstr.");
break;
}
case 230289:
{
returnValue = F("Neue Nußbaumer Str.");
break;
}
case 230290:
{
returnValue = F("Neue Nördlinger Str.");
break;
}
case 230291:
{
returnValue = F("Neue Obergasse");
break;
}
case 230292:
{
returnValue = F("Neue Obermayerstr.");
break;
}
case 230293:
{
returnValue = F("Neue Obernbreiter Str.");
break;
}
case 230294:
{
returnValue = F("Neue Oldendorfer Str.");
break;
}
case 230295:
{
returnValue = F("Neue Osdorfer Str.");
break;
}
case 230296:
{
returnValue = F("Neue Ostendstr.");
break;
}
case 230297:
{
returnValue = F("Neue Ostenheide");
break;
}
case 230298:
{
returnValue = F("Neue Oststr.");
break;
}
case 230299:
{
returnValue = F("Neue Parkstr.");
break;
}
case 230300:
{
returnValue = F("Neue Pforte");
break;
}
case 230301:
{
returnValue = F("Neue Pfortenstr.");
break;
}
case 230302:
{
returnValue = F("Neue Planie");
break;
}
case 230303:
{
returnValue = F("Neue Plantage");
break;
}
case 230304:
{
returnValue = F("Neue Platekaer Str.");
break;
}
case 230305:
{
returnValue = F("Neue Plauensche Str.");
break;
}
case 230306:
{
returnValue = F("Neue Poststr.");
break;
}
case 230307:
{
returnValue = F("Neue Priel");
break;
}
case 230308:
{
returnValue = F("Neue Promenade");
break;
}
case 230309:
{
returnValue = F("Neue Querstr.");
break;
}
case 230310:
{
returnValue = F("Neue Radstr.");
break;
}
case 230311:
{
returnValue = F("Neue Ramtelstr.");
break;
}
case 230312:
{
returnValue = F("Neue Rathausstr.");
break;
}
case 230313:
{
returnValue = F("Neue Rathenower Str.");
break;
}
case 230314:
{
returnValue = F("Neue Reeperbahn");
break;
}
case 230315:
{
returnValue = F("Neue Rehre");
break;
}
case 230316:
{
returnValue = F("Neue Reichenbacher Str.");
break;
}
case 230317:
{
returnValue = F("Neue Reifensteige");
break;
}
case 230318:
{
returnValue = F("Neue Reihe");
break;
}
case 230319:
{
returnValue = F("Neue Rheingaustr.");
break;
}
case 230320:
{
returnValue = F("Neue Rheinspitze");
break;
}
case 230321:
{
returnValue = F("Neue Rheinstr.");
break;
}
case 230322:
{
returnValue = F("Neue Riedstr.");
break;
}
case 230323:
{
returnValue = F("Neue Riege");
break;
}
case 230324:
{
returnValue = F("Neue Rieser Str.");
break;
}
case 230325:
{
returnValue = F("Neue Ringstr.");
break;
}
case 230326:
{
returnValue = F("Neue Ritterstr.");
break;
}
case 230327:
{
returnValue = F("Neue Rodenbeeke");
break;
}
case 230328:
{
returnValue = F("Neue Rommelshauser Str.");
break;
}
case 230329:
{
returnValue = F("Neue Rosefelder Str.");
break;
}
case 230330:
{
returnValue = F("Neue Rottenburger Str.");
break;
}
case 230331:
{
returnValue = F("Neue Ruh");
break;
}
case 230332:
{
returnValue = F("Neue Rösterei");
break;
}
case 230333:
{
returnValue = F("Neue Rützengrüner Str.");
break;
}
case 230334:
{
returnValue = F("Neue Sachlichkeit");
break;
}
case 230335:
{
returnValue = F("Neue Scheffelstr.");
break;
}
case 230336:
{
returnValue = F("Neue Schehlenstr.");
break;
}
case 230337:
{
returnValue = F("Neue Scheidt Str.");
break;
}
case 230338:
{
returnValue = F("Neue Schenke");
break;
}
case 230339:
{
returnValue = F("Neue Scherbdaer Str.");
break;
}
case 230340:
{
returnValue = F("Neue Scheune");
break;
}
case 230341:
{
returnValue = F("Neue Schillerstr.");
break;
}
case 230342:
{
returnValue = F("Neue Schlenke");
break;
}
case 230343:
{
returnValue = F("Neue Schlesingergasse");
break;
}
case 230344:
{
returnValue = F("Neue Schlossstr.");
break;
}
case 230345:
{
returnValue = F("Neue Schloßstr.");
break;
}
case 230346:
{
returnValue = F("Neue Schmiedegasse");
break;
}
case 230347:
{
returnValue = F("Neue Schmiedestr.");
break;
}
case 230348:
{
returnValue = F("Neue Schmiedgasse");
break;
}
case 230349:
{
returnValue = F("Neue Schmöllner Str.");
break;
}
case 230350:
{
returnValue = F("Neue Schneise");
break;
}
case 230351:
{
returnValue = F("Neue Schulbergstr.");
break;
}
case 230352:
{
returnValue = F("Neue Schule");
break;
}
case 230353:
{
returnValue = F("Neue Schulgasse");
break;
}
case 230354:
{
returnValue = F("Neue Schulstr.");
break;
}
case 230355:
{
returnValue = F("Neue Schwanebecker Str.");
break;
}
case 230356:
{
returnValue = F("Neue Schwarzatalstr.");
break;
}
case 230357:
{
returnValue = F("Neue Schäferei");
break;
}
case 230358:
{
returnValue = F("Neue Schöckinger Str.");
break;
}
case 230359:
{
returnValue = F("Neue Schönheider Str.");
break;
}
case 230360:
{
returnValue = F("Neue Seelingstädter Str.");
break;
}
case 230361:
{
returnValue = F("Neue Seitenstr.");
break;
}
case 230362:
{
returnValue = F("Neue Semlowerstr.");
break;
}
case 230363:
{
returnValue = F("Neue Sendstr.");
break;
}
case 230364:
{
returnValue = F("Neue Siedlung");
break;
}
case 230365:
{
returnValue = F("Neue Siedlung Amsdorf");
break;
}
case 230366:
{
returnValue = F("Neue Siedlungsstr.");
break;
}
case 230367:
{
returnValue = F("Neue Sorge");
break;
}
case 230368:
{
returnValue = F("Neue Spreestr.");
break;
}
case 230369:
{
returnValue = F("Neue Stadtbrücke");
break;
}
case 230370:
{
returnValue = F("Neue Steete");
break;
}
case 230371:
{
returnValue = F("Neue Stege");
break;
}
case 230372:
{
returnValue = F("Neue Steige");
break;
}
case 230373:
{
returnValue = F("Neue Steinengartländer");
break;
}
case 230374:
{
returnValue = F("Neue Steinstr.");
break;
}
case 230375:
{
returnValue = F("Neue Stiege");
break;
}
case 230376:
{
returnValue = F("Neue Str.");
break;
}
case 230377:
{
returnValue = F("Neue Str. Abberode");
break;
}
case 230378:
{
returnValue = F("Neue Str. Badel");
break;
}
case 230379:
{
returnValue = F("Neue Str. Weißenschirmbach");
break;
}
case 230380:
{
returnValue = F("Neue Str. am Wasser");
break;
}
case 230381:
{
returnValue = F("Neue Strandstr.");
break;
}
case 230382:
{
returnValue = F("Neue Strombrücke");
break;
}
case 230383:
{
returnValue = F("Neue Stuttgarter Str.");
break;
}
case 230384:
{
returnValue = F("Neue Stücker");
break;
}
case 230385:
{
returnValue = F("Neue Süderwieke");
break;
}
case 230386:
{
returnValue = F("Neue Sülze");
break;
}
case 230387:
{
returnValue = F("Neue Teichstr.");
break;
}
case 230388:
{
returnValue = F("Neue Teile");
break;
}
case 230389:
{
returnValue = F("Neue Terrasse");
break;
}
case 230390:
{
returnValue = F("Neue Thalheimer Str.");
break;
}
case 230391:
{
returnValue = F("Neue Theile");
break;
}
case 230392:
{
returnValue = F("Neue Thälmannstr.");
break;
}
case 230393:
{
returnValue = F("Neue Tor");
break;
}
case 230394:
{
returnValue = F("Neue Torstr.");
break;
}
case 230395:
{
returnValue = F("Neue Tremoniastr.");
break;
}
case 230396:
{
returnValue = F("Neue Trift");
break;
}
case 230397:
{
returnValue = F("Neue Twiete");
break;
}
case 230398:
{
returnValue = F("Neue Universitätsstr.");
break;
}
case 230399:
{
returnValue = F("Neue Unlinger Str.");
break;
}
case 230400:
{
returnValue = F("Neue Vehn");
break;
}
case 230401:
{
returnValue = F("Neue Verbindungsstr.");
break;
}
case 230402:
{
returnValue = F("Neue Vergrößerungen");
break;
}
case 230403:
{
returnValue = F("Neue Vockenroter Steige");
break;
}
case 230404:
{
returnValue = F("Neue Vogelsdorfer Str.");
break;
}
case 230405:
{
returnValue = F("Neue Walbecker Str.");
break;
}
case 230406:
{
returnValue = F("Neue Waldstr.");
break;
}
case 230407:
{
returnValue = F("Neue Wallstr.");
break;
}
case 230408:
{
returnValue = F("Neue Warnstedter Str.");
break;
}
case 230409:
{
returnValue = F("Neue Watenstädter Str.");
break;
}
case 230410:
{
returnValue = F("Neue Wegscheide");
break;
}
case 230411:
{
returnValue = F("Neue Weide");
break;
}
case 230412:
{
returnValue = F("Neue Weidenstr.");
break;
}
case 230413:
{
returnValue = F("Neue Weilersteußlinger Str.");
break;
}
case 230414:
{
returnValue = F("Neue Weilheimer Str.");
break;
}
case 230415:
{
returnValue = F("Neue Weinberge");
break;
}
case 230416:
{
returnValue = F("Neue Weinbergstr.");
break;
}
case 230417:
{
returnValue = F("Neue Weingärten");
break;
}
case 230418:
{
returnValue = F("Neue Weinsteige");
break;
}
case 230419:
{
returnValue = F("Neue Welt");
break;
}
case 230420:
{
returnValue = F("Neue Werderstr.");
break;
}
case 230421:
{
returnValue = F("Neue Werkstr.");
break;
}
case 230422:
{
returnValue = F("Neue Werner Str.");
break;
}
case 230423:
{
returnValue = F("Neue Werrabrücke");
break;
}
case 230424:
{
returnValue = F("Neue Werrestr.");
break;
}
case 230425:
{
returnValue = F("Neue Wieke Nord");
break;
}
case 230426:
{
returnValue = F("Neue Wieke Süd");
break;
}
case 230427:
{
returnValue = F("Neue Wiese");
break;
}
case 230428:
{
returnValue = F("Neue Wiesen");
break;
}
case 230429:
{
returnValue = F("Neue Wiesenstr.");
break;
}
case 230430:
{
returnValue = F("Neue Wietze");
break;
}
case 230431:
{
returnValue = F("Neue Wildenauer Str.");
break;
}
case 230432:
{
returnValue = F("Neue Wilhelmshäuser Str.");
break;
}
case 230433:
{
returnValue = F("Neue Wilhelmstr.");
break;
}
case 230434:
{
returnValue = F("Neue Wittenberger Str.");
break;
}
case 230435:
{
returnValue = F("Neue Wohnstr.");
break;
}
case 230436:
{
returnValue = F("Neue Wormser Str.");
break;
}
case 230437:
{
returnValue = F("Neue Wurth");
break;
}
case 230438:
{
returnValue = F("Neue Zeile");
break;
}
case 230439:
{
returnValue = F("Neue Ziegelei");
break;
}
case 230440:
{
returnValue = F("Neue Zossener Str.");
break;
}
case 230441:
{
returnValue = F("Neue Zumhofer Str.");
break;
}
case 230442:
{
returnValue = F("Neue Zwingerstr.");
break;
}
case 230443:
{
returnValue = F("Neue alte Brücke");
break;
}
case 230444:
{
returnValue = F("Neue lange Allee");
break;
}
case 230445:
{
returnValue = F("Neue Äcker");
break;
}
case 230446:
{
returnValue = F("Neue Örter");
break;
}
case 230447:
{
returnValue = F("Neue-Anlage-Str.");
break;
}
case 230448:
{
returnValue = F("Neue-Bahn");
break;
}
case 230449:
{
returnValue = F("Neue-Brauerei-Str.");
break;
}
case 230450:
{
returnValue = F("Neue-Heimat-Str.");
break;
}
case 230451:
{
returnValue = F("Neue-Heimat-Weg");
break;
}
case 230452:
{
returnValue = F("Neue-Hufen-Str.");
break;
}
case 230453:
{
returnValue = F("Neue-Häuser-Str.");
break;
}
case 230454:
{
returnValue = F("Neue-Land-Str.");
break;
}
case 230455:
{
returnValue = F("Neue-Stücken-Feld");
break;
}
case 230456:
{
returnValue = F("Neue-Stücklen-Weg");
break;
}
case 230457:
{
returnValue = F("Neue-Waag-Gasse");
break;
}
case 230458:
{
returnValue = F("Neue-Welt-Str.");
break;
}
case 230459:
{
returnValue = F("Neue-Wolterdinger-Str.");
break;
}
case 230460:
{
returnValue = F("Neuebeek");
break;
}
case 230461:
{
returnValue = F("Neuebersbach");
break;
}
case 230462:
{
returnValue = F("Neuebersbacher Str.");
break;
}
case 230463:
{
returnValue = F("Neuebrücke");
break;
}
case 230464:
{
returnValue = F("Neueburgstr.");
break;
}
case 230465:
{
returnValue = F("Neuefehnstr.");
break;
}
case 230466:
{
returnValue = F("Neuefeldstr.");
break;
}
case 230467:
{
returnValue = F("Neueglofsheim");
break;
}
case 230468:
{
returnValue = F("Neuehofweg");
break;
}
case 230469:
{
returnValue = F("Neuehäuserstr.");
break;
}
case 230470:
{
returnValue = F("Neuehütten");
break;
}
case 230471:
{
returnValue = F("Neuehüttener Str.");
break;
}
case 230472:
{
returnValue = F("Neueibauer Str.");
break;
}
case 230473:
{
returnValue = F("Neueichwaldstr.");
break;
}
case 230474:
{
returnValue = F("Neueigener Str.");
break;
}
case 230475:
{
returnValue = F("Neuekamp");
break;
}
case 230476:
{
returnValue = F("Neuekrug");
break;
}
case 230477:
{
returnValue = F("Neueland");
break;
}
case 230478:
{
returnValue = F("Neuelandstr.");
break;
}
case 230479:
{
returnValue = F("Neuelandweg");
break;
}
case 230480:
{
returnValue = F("Neuelchen");
break;
}
case 230481:
{
returnValue = F("Neuelshof");
break;
}
case 230482:
{
returnValue = F("Neuemarktstr.");
break;
}
case 230483:
{
returnValue = F("Neuemoorweg");
break;
}
case 230484:
{
returnValue = F("Neuemühle");
break;
}
case 230485:
{
returnValue = F("Neuen Bäue");
break;
}
case 230486:
{
returnValue = F("Neuen Garten");
break;
}
case 230487:
{
returnValue = F("Neuen Herweg");
break;
}
case 230488:
{
returnValue = F("Neuen Kamp");
break;
}
case 230489:
{
returnValue = F("Neuen Winkel");
break;
}
case 230490:
{
returnValue = F("Neuenackerweg");
break;
}
case 230491:
{
returnValue = F("Neuenahrer Str.");
break;
}
case 230492:
{
returnValue = F("Neuenbaumer Str.");
break;
}
case 230493:
{
returnValue = F("Neuenbaumer Weg");
break;
}
case 230494:
{
returnValue = F("Neuenbaumsweg");
break;
}
case 230495:
{
returnValue = F("Neuenbecke");
break;
}
case 230496:
{
returnValue = F("Neuenbekener Str.");
break;
}
case 230497:
{
returnValue = F("Neuenberg");
break;
}
case 230498:
{
returnValue = F("Neuenberger Str.");
break;
}
case 230499:
{
returnValue = F("Neuenberger Weg");
break;
}
case 230500:
{
returnValue = F("Neuenbergstr.");
break;
}
case 230501:
{
returnValue = F("Neuenborn");
break;
}
case 230502:
{
returnValue = F("Neuenbroker Verbindungsweg");
break;
}
case 230503:
{
returnValue = F("Neuenbrooker Str.");
break;
}
case 230504:
{
returnValue = F("Neuenbrooker Weg");
break;
}
case 230505:
{
returnValue = F("Neuenbrunnerweg");
break;
}
case 230506:
{
returnValue = F("Neuenbrunslarer Str.");
break;
}
case 230507:
{
returnValue = F("Neuenbucher Str.");
break;
}
case 230508:
{
returnValue = F("Neuenburger Str.");
break;
}
case 230509:
{
returnValue = F("Neuenburger Weg");
break;
}
case 230510:
{
returnValue = F("Neuenburgstr.");
break;
}
case 230511:
{
returnValue = F("Neuenbürger Str.");
break;
}
case 230512:
{
returnValue = F("Neuenbürger Weg");
break;
}
case 230513:
{
returnValue = F("Neuendamm");
break;
}
case 230514:
{
returnValue = F("Neuendeeler Weg");
break;
}
case 230515:
{
returnValue = F("Neuendeich");
break;
}
case 230516:
{
returnValue = F("Neuendeicher Weg");
break;
}
case 230517:
{
returnValue = F("Neuender Reihe");
break;
}
case 230518:
{
returnValue = F("Neuendettelsauer Str.");
break;
}
case 230519:
{
returnValue = F("Neuendickstr.");
break;
}
case 230520:
{
returnValue = F("Neuendorf");
break;
}
case 230521:
{
returnValue = F("Neuendorf am Speck");
break;
}
case 230522:
{
returnValue = F("Neuendorfer Anger");
break;
}
case 230523:
{
returnValue = F("Neuendorfer Bahnhofsstr.");
break;
}
case 230524:
{
returnValue = F("Neuendorfer Chaussee");
break;
}
case 230525:
{
returnValue = F("Neuendorfer Dorfstr.");
break;
}
case 230526:
{
returnValue = F("Neuendorfer Holzweg");
break;
}
case 230527:
{
returnValue = F("Neuendorfer Str.");
break;
}
case 230528:
{
returnValue = F("Neuendorfer Weg");
break;
}
case 230529:
{
returnValue = F("Neuendorfer Wende");
break;
}
case 230530:
{
returnValue = F("Neuendorfstr.");
break;
}
case 230531:
{
returnValue = F("Neuendriesch");
break;
}
case 230532:
{
returnValue = F("Neuenfeld");
break;
}
case 230533:
{
returnValue = F("Neuenfelde");
break;
}
case 230534:
{
returnValue = F("Neuenfelder Bogen");
break;
}
case 230535:
{
returnValue = F("Neuenfelder Hinterdeich");
break;
}
case 230536:
{
returnValue = F("Neuenfelder Str.");
break;
}
case 230537:
{
returnValue = F("Neuenfelder Weg");
break;
}
case 230538:
{
returnValue = F("Neuenfeldweg");
break;
}
case 230539:
{
returnValue = F("Neuenfelserweg");
break;
}
case 230540:
{
returnValue = F("Neuenfelsstr.");
break;
}
case 230541:
{
returnValue = F("Neuenflügel");
break;
}
case 230542:
{
returnValue = F("Neuenförde");
break;
}
case 230543:
{
returnValue = F("Neuengammer Str.");
break;
}
case 230544:
{
returnValue = F("Neuengarten");
break;
}
case 230545:
{
returnValue = F("Neuengasse");
break;
}
case 230546:
{
returnValue = F("Neuengeseker Heide");
break;
}
case 230547:
{
returnValue = F("Neuengeseker Str.");
break;
}
case 230548:
{
returnValue = F("Neuengland");
break;
}
case 230549:
{
returnValue = F("Neuengländer Ringstr.");
break;
}
case 230550:
{
returnValue = F("Neuengländer Str.");
break;
}
case 230551:
{
returnValue = F("Neuengraben");
break;
}
case 230552:
{
returnValue = F("Neuengrodener Weg");
break;
}
case 230553:
{
returnValue = F("Neuengrodenerdeich");
break;
}
case 230554:
{
returnValue = F("Neuengronauer Str.");
break;
}
case 230555:
{
returnValue = F("Neuengörser Str.");
break;
}
case 230556:
{
returnValue = F("Neuengüter");
break;
}
case 230557:
{
returnValue = F("Neuenhagener Chaussee");
break;
}
case 230558:
{
returnValue = F("Neuenhagener Str.");
break;
}
case 230559:
{
returnValue = F("Neuenhagener Weg");
break;
}
case 230560:
{
returnValue = F("Neuenhagenstr.");
break;
}
case 230561:
{
returnValue = F("Neuenhainer Str.");
break;
}
case 230562:
{
returnValue = F("Neuenhainer Weg");
break;
}
case 230563:
{
returnValue = F("Neuenhammer");
break;
}
case 230564:
{
returnValue = F("Neuenhammerstr.");
break;
}
case 230565:
{
returnValue = F("Neuenhammerweg");
break;
}
case 230566:
{
returnValue = F("Neuenhammstr.");
break;
}
case 230567:
{
returnValue = F("Neuenhaus");
break;
}
case 230568:
{
returnValue = F("Neuenhausener Str.");
break;
}
case 230569:
{
returnValue = F("Neuenhausener Weg");
break;
}
case 230570:
{
returnValue = F("Neuenhauser Berg");
break;
}
case 230571:
{
returnValue = F("Neuenhauser Str.");
break;
}
case 230572:
{
returnValue = F("Neuenhauser Weg");
break;
}
case 230573:
{
returnValue = F("Neuenhausgasse");
break;
}
case 230574:
{
returnValue = F("Neuenhausplatz");
break;
}
case 230575:
{
returnValue = F("Neuenhausstr.");
break;
}
case 230576:
{
returnValue = F("Neuenhausweg");
break;
}
case 230577:
{
returnValue = F("Neuenheerser Str.");
break;
}
case 230578:
{
returnValue = F("Neuenheerser Weg");
break;
}
case 230579:
{
returnValue = F("Neuenheimer Landstr.");
break;
}
case 230580:
{
returnValue = F("Neuenheimer Str.");
break;
}
case 230581:
{
returnValue = F("Neuenherweg");
break;
}
case 230582:
{
returnValue = F("Neuenhesterberg");
break;
}
case 230583:
{
returnValue = F("Neuenhof");
break;
}
case 230584:
{
returnValue = F("Neuenhofenweg");
break;
}
case 230585:
{
returnValue = F("Neuenhofer Str.");
break;
}
case 230586:
{
returnValue = F("Neuenhofer Weg");
break;
}
case 230587:
{
returnValue = F("Neuenhofstr.");
break;
}
case 230588:
{
returnValue = F("Neuenhovener Str.");
break;
}
case 230589:
{
returnValue = F("Neuenhuntorfer Str.");
break;
}
case 230590:
{
returnValue = F("Neuenhäuser");
break;
}
case 230591:
{
returnValue = F("Neuenhäuser Str.");
break;
}
case 230592:
{
returnValue = F("Neuenhöfe");
break;
}
case 230593:
{
returnValue = F("Neuenhöferstr.");
break;
}
case 230594:
{
returnValue = F("Neuenhöhe");
break;
}
case 230595:
{
returnValue = F("Neuenkamp");
break;
}
case 230596:
{
returnValue = F("Neuenkamp-Str.");
break;
}
case 230597:
{
returnValue = F("Neuenkamper Feld");
break;
}
case 230598:
{
returnValue = F("Neuenkamper Str.");
break;
}
case 230599:
{
returnValue = F("Neuenkamper Weg");
break;
}
case 230600:
{
returnValue = F("Neuenkampstr.");
break;
}
case 230601:
{
returnValue = F("Neuenkampsweg");
break;
}
case 230602:
{
returnValue = F("Neuenkirchener Allee");
break;
}
case 230603:
{
returnValue = F("Neuenkirchener Damm");
break;
}
case 230604:
{
returnValue = F("Neuenkirchener Landstr.");
break;
}
case 230605:
{
returnValue = F("Neuenkirchener Str.");
break;
}
case 230606:
{
returnValue = F("Neuenkirchener Weg");
break;
}
case 230607:
{
returnValue = F("Neuenkleusheimer Str.");
break;
}
case 230608:
{
returnValue = F("Neuenknicker Str.");
break;
}
case 230609:
{
returnValue = F("Neuenkooper Str.");
break;
}
case 230610:
{
returnValue = F("Neuenkopfweg");
break;
}
case 230611:
{
returnValue = F("Neuenkrug");
break;
}
case 230612:
{
returnValue = F("Neuenkruger Damm");
break;
}
case 230613:
{
returnValue = F("Neuenkruger Kirchweg");
break;
}
case 230614:
{
returnValue = F("Neuenkruger Str.");
break;
}
case 230615:
{
returnValue = F("Neuenkruger Weg");
break;
}
case 230616:
{
returnValue = F("Neuenlande");
break;
}
case 230617:
{
returnValue = F("Neuenlander Kämpe");
break;
}
case 230618:
{
returnValue = F("Neuenlander Ring");
break;
}
case 230619:
{
returnValue = F("Neuenlander Str.");
break;
}
case 230620:
{
returnValue = F("Neuenlander Weg");
break;
}
case 230621:
{
returnValue = F("Neuenloh");
break;
}
case 230622:
{
returnValue = F("Neuenloher Weg");
break;
}
case 230623:
{
returnValue = F("Neuenländer Str.");
break;
}
case 230624:
{
returnValue = F("Neuenmarhorster Str.");
break;
}
case 230625:
{
returnValue = F("Neuenmörbitz");
break;
}
case 230626:
{
returnValue = F("Neuenrade");
break;
}
case 230627:
{
returnValue = F("Neuenrader Str.");
break;
}
case 230628:
{
returnValue = F("Neuenrahmede");
break;
}
case 230629:
{
returnValue = F("Neuenreth");
break;
}
case 230630:
{
returnValue = F("Neuenreuth");
break;
}
case 230631:
{
returnValue = F("Neuenreuther Str.");
break;
}
case 230632:
{
returnValue = F("Neuenrieder Str.");
break;
}
case 230633:
{
returnValue = F("Neuenroisfeld");
break;
}
case 230634:
{
returnValue = F("Neuenröder Str.");
break;
}
case 230635:
{
returnValue = F("Neuensaaler Str.");
break;
}
case 230636:
{
returnValue = F("Neuensalzer Str.");
break;
}
case 230637:
{
returnValue = F("Neuensand");
break;
}
case 230638:
{
returnValue = F("Neuenschleuse");
break;
}
case 230639:
{
returnValue = F("Neuenschleuser Str.");
break;
}
case 230640:
{
returnValue = F("Neuenschmidter Weg");
break;
}
case 230641:
{
returnValue = F("Neuenseebogen");
break;
}
case 230642:
{
returnValue = F("Neuensien");
break;
}
case 230643:
{
returnValue = F("Neuensorga");
break;
}
case 230644:
{
returnValue = F("Neuensorger Str.");
break;
}
case 230645:
{
returnValue = F("Neuensorger Weg");
break;
}
case 230646:
{
returnValue = F("Neuensothriether Str.");
break;
}
case 230647:
{
returnValue = F("Neuenstadt");
break;
}
case 230648:
{
returnValue = F("Neuenstadter Str.");
break;
}
case 230649:
{
returnValue = F("Neuensteden");
break;
}
case 230650:
{
returnValue = F("Neuensteigweg");
break;
}
case 230651:
{
returnValue = F("Neuensteiner Steige");
break;
}
case 230652:
{
returnValue = F("Neuensteiner Str.");
break;
}
case 230653:
{
returnValue = F("Neuensteiner Weg");
break;
}
case 230654:
{
returnValue = F("Neuensteinstr.");
break;
}
case 230655:
{
returnValue = F("Neuenstr.");
break;
}
case 230656:
{
returnValue = F("Neuensturmberg");
break;
}
case 230657:
{
returnValue = F("Neuenstädter Str.");
break;
}
case 230658:
{
returnValue = F("Neuenstückenweg");
break;
}
case 230659:
{
returnValue = F("Neuensund");
break;
}
case 230660:
{
returnValue = F("Neuentaler Str.");
break;
}
case 230661:
{
returnValue = F("Neuenteich");
break;
}
case 230662:
{
returnValue = F("Neuenteicher Weg");
break;
}
case 230663:
{
returnValue = F("Neuenteichweg");
break;
}
case 230664:
{
returnValue = F("Neuenteilsredder");
break;
}
case 230665:
{
returnValue = F("Neuentempel");
break;
}
case 230666:
{
returnValue = F("Neuenthaler Weg");
break;
}
case 230667:
{
returnValue = F("Neuentheilerstr.");
break;
}
case 230668:
{
returnValue = F("Neuenwald");
break;
}
case 230669:
{
returnValue = F("Neuenwalder Str.");
break;
}
case 230670:
{
returnValue = F("Neuenwalder Weg");
break;
}
case 230671:
{
returnValue = F("Neuenweg");
break;
}
case 230672:
{
returnValue = F("Neuenwege");
break;
}
case 230673:
{
returnValue = F("Neuenweger Reihe");
break;
}
case 230674:
{
returnValue = F("Neuenweger Str.");
break;
}
case 230675:
{
returnValue = F("Neuenwegstr.");
break;
}
case 230676:
{
returnValue = F("Neuenweiher");
break;
}
case 230677:
{
returnValue = F("Neuenweiherstr.");
break;
}
case 230678:
{
returnValue = F("Neuenwiese");
break;
}
case 230679:
{
returnValue = F("Neuenwisch");
break;
}
case 230680:
{
returnValue = F("Neuer Achterkamp");
break;
}
case 230681:
{
returnValue = F("Neuer Acker");
break;
}
case 230682:
{
returnValue = F("Neuer Anbau");
break;
}
case 230683:
{
returnValue = F("Neuer Angel");
break;
}
case 230684:
{
returnValue = F("Neuer Anger");
break;
}
case 230685:
{
returnValue = F("Neuer Aspel");
break;
}
case 230686:
{
returnValue = F("Neuer Bahnhof");
break;
}
case 230687:
{
returnValue = F("Neuer Bahnweg");
break;
}
case 230688:
{
returnValue = F("Neuer Bekweg");
break;
}
case 230689:
{
returnValue = F("Neuer Bendenweg");
break;
}
case 230690:
{
returnValue = F("Neuer Berg");
break;
}
case 230691:
{
returnValue = F("Neuer Bergschmiedeweg");
break;
}
case 230692:
{
returnValue = F("Neuer Bergweg");
break;
}
case 230693:
{
returnValue = F("Neuer Beuerner Grabenweg");
break;
}
case 230694:
{
returnValue = F("Neuer Bierweg");
break;
}
case 230695:
{
returnValue = F("Neuer Blankengründelweg");
break;
}
case 230696:
{
returnValue = F("Neuer Blasiwälderweg");
break;
}
case 230697:
{
returnValue = F("Neuer Blumenplatz");
break;
}
case 230698:
{
returnValue = F("Neuer Brink");
break;
}
case 230699:
{
returnValue = F("Neuer Brinkhof");
break;
}
case 230700:
{
returnValue = F("Neuer Brückenweg");
break;
}
case 230701:
{
returnValue = F("Neuer Brückweg");
break;
}
case 230702:
{
returnValue = F("Neuer Buchenweg");
break;
}
case 230703:
{
returnValue = F("Neuer Buchgrabenweg");
break;
}
case 230704:
{
returnValue = F("Neuer Buchweg");
break;
}
case 230705:
{
returnValue = F("Neuer Buger Weg");
break;
}
case 230706:
{
returnValue = F("Neuer Buger Weg (A/B)");
break;
}
case 230707:
{
returnValue = F("Neuer Burgweg");
break;
}
case 230708:
{
returnValue = F("Neuer Bärenweg");
break;
}
case 230709:
{
returnValue = F("Neuer Damm");
break;
}
case 230710:
{
returnValue = F("Neuer Deich");
break;
}
case 230711:
{
returnValue = F("Neuer Diek");
break;
}
case 230712:
{
returnValue = F("Neuer Dietfurtweg");
break;
}
case 230713:
{
returnValue = F("Neuer Eichbergweg");
break;
}
case 230714:
{
returnValue = F("Neuer Esch");
break;
}
case 230715:
{
returnValue = F("Neuer Faulenhoop");
break;
}
case 230716:
{
returnValue = F("Neuer Fliederberg");
break;
}
case 230717:
{
returnValue = F("Neuer Flügel");
break;
}
case 230718:
{
returnValue = F("Neuer Flügel F");
break;
}
case 230719:
{
returnValue = F("Neuer Forstweg");
break;
}
case 230720:
{
returnValue = F("Neuer Friedberg");
break;
}
case 230721:
{
returnValue = F("Neuer Friedhof");
break;
}
case 230722:
{
returnValue = F("Neuer Friedhofsweg");
break;
}
case 230723:
{
returnValue = F("Neuer Friedhofweg");
break;
}
case 230724:
{
returnValue = F("Neuer Fuchssteinweg");
break;
}
case 230725:
{
returnValue = F("Neuer Fußweg zum Serpentinenweg");
break;
}
case 230726:
{
returnValue = F("Neuer Fährweg");
break;
}
case 230727:
{
returnValue = F("Neuer Fünfbrunnenweg");
break;
}
case 230728:
{
returnValue = F("Neuer Gang");
break;
}
case 230729:
{
returnValue = F("Neuer Garten");
break;
}
case 230730:
{
returnValue = F("Neuer Gartenweg");
break;
}
case 230731:
{
returnValue = F("Neuer Gassenweg");
break;
}
case 230732:
{
returnValue = F("Neuer Geiershagen");
break;
}
case 230733:
{
returnValue = F("Neuer Gernsheimer Weg");
break;
}
case 230734:
{
returnValue = F("Neuer Gespetweg");
break;
}
case 230735:
{
returnValue = F("Neuer Goetheweg");
break;
}
case 230736:
{
returnValue = F("Neuer Graben");
break;
}
case 230737:
{
returnValue = F("Neuer Grauwallweg");
break;
}
case 230738:
{
returnValue = F("Neuer Grenzweg");
break;
}
case 230739:
{
returnValue = F("Neuer Großkopfweg");
break;
}
case 230740:
{
returnValue = F("Neuer Grund");
break;
}
case 230741:
{
returnValue = F("Neuer Grünhüttenweg");
break;
}
case 230742:
{
returnValue = F("Neuer Gschächtrigweg");
break;
}
case 230743:
{
returnValue = F("Neuer Gstettenweg");
break;
}
case 230744:
{
returnValue = F("Neuer Hagen");
break;
}
case 230745:
{
returnValue = F("Neuer Hahnenmisseweg");
break;
}
case 230746:
{
returnValue = F("Neuer Haidkrug");
break;
}
case 230747:
{
returnValue = F("Neuer Hamm");
break;
}
case 230748:
{
returnValue = F("Neuer Hammerweg");
break;
}
case 230749:
{
returnValue = F("Neuer Heeg");
break;
}
case 230750:
{
returnValue = F("Neuer Heerweg");
break;
}
case 230751:
{
returnValue = F("Neuer Heidebergweg");
break;
}
case 230752:
{
returnValue = F("Neuer Heidkamp");
break;
}
case 230753:
{
returnValue = F("Neuer Heimweg");
break;
}
case 230754:
{
returnValue = F("Neuer Hellweg");
break;
}
case 230755:
{
returnValue = F("Neuer Herrenweg");
break;
}
case 230756:
{
returnValue = F("Neuer Heufelderweg");
break;
}
case 230757:
{
returnValue = F("Neuer Heuweg");
break;
}
case 230758:
{
returnValue = F("Neuer Hilsbacher Weg");
break;
}
case 230759:
{
returnValue = F("Neuer Hof");
break;
}
case 230760:
{
returnValue = F("Neuer Holzhafen");
break;
}
case 230761:
{
returnValue = F("Neuer Holzhauser Kirchweg");
break;
}
case 230762:
{
returnValue = F("Neuer Holzweg");
break;
}
case 230763:
{
returnValue = F("Neuer Hort");
break;
}
case 230764:
{
returnValue = F("Neuer Hospitalweg");
break;
}
case 230765:
{
returnValue = F("Neuer Hufenweg");
break;
}
case 230766:
{
returnValue = F("Neuer Höhenweg");
break;
}
case 230767:
{
returnValue = F("Neuer Höllweg");
break;
}
case 230768:
{
returnValue = F("Neuer Hönower Weg");
break;
}
case 230769:
{
returnValue = F("Neuer Jagdhüttenweg");
break;
}
case 230770:
{
returnValue = F("Neuer Jakobswaldweg");
break;
}
case 230771:
{
returnValue = F("Neuer Jenaplan");
break;
}
case 230772:
{
returnValue = F("Neuer Jugendherbergsweg");
break;
}
case 230773:
{
returnValue = F("Neuer Jungholzsteig");
break;
}
case 230774:
{
returnValue = F("Neuer Jägerweg");
break;
}
case 230775:
{
returnValue = F("Neuer Kahrweg");
break;
}
case 230776:
{
returnValue = F("Neuer Kamp");
break;
}
case 230777:
{
returnValue = F("Neuer Kampweg");
break;
}
case 230778:
{
returnValue = F("Neuer Katzenbachweg");
break;
}
case 230779:
{
returnValue = F("Neuer Katzenbuckelweg");
break;
}
case 230780:
{
returnValue = F("Neuer Kietz");
break;
}
case 230781:
{
returnValue = F("Neuer Kinderspielplatz");
break;
}
case 230782:
{
returnValue = F("Neuer Kirchplatz");
break;
}
case 230783:
{
returnValue = F("Neuer Kirchweg");
break;
}
case 230784:
{
returnValue = F("Neuer Kirner Weg");
break;
}
case 230785:
{
returnValue = F("Neuer Kirschenklingenweg");
break;
}
case 230786:
{
returnValue = F("Neuer Knick");
break;
}
case 230787:
{
returnValue = F("Neuer Kohlmühlweg");
break;
}
case 230788:
{
returnValue = F("Neuer Krautgarten");
break;
}
case 230789:
{
returnValue = F("Neuer Kreuzsteinweg");
break;
}
case 230790:
{
returnValue = F("Neuer Kronocken");
break;
}
case 230791:
{
returnValue = F("Neuer Krug");
break;
}
case 230792:
{
returnValue = F("Neuer Kurpark");
break;
}
case 230793:
{
returnValue = F("Neuer Landsweg");
break;
}
case 230794:
{
returnValue = F("Neuer Landweg");
break;
}
case 230795:
{
returnValue = F("Neuer Langer Weg");
break;
}
case 230796:
{
returnValue = F("Neuer Lehmgrundweg");
break;
}
case 230797:
{
returnValue = F("Neuer Leichenweg");
break;
}
case 230798:
{
returnValue = F("Neuer Lindachweg");
break;
}
case 230799:
{
returnValue = F("Neuer Lindenweg");
break;
}
case 230800:
{
returnValue = F("Neuer Linienweg");
break;
}
case 230801:
{
returnValue = F("Neuer Luruper Weg");
break;
}
case 230802:
{
returnValue = F("Neuer Lustgarten");
break;
}
case 230803:
{
returnValue = F("Neuer Löhdamm");
break;
}
case 230804:
{
returnValue = F("Neuer Markersbachweg");
break;
}
case 230805:
{
returnValue = F("Neuer Markt");
break;
}
case 230806:
{
returnValue = F("Neuer Marktplatz");
break;
}
case 230807:
{
returnValue = F("Neuer Maschweg");
break;
}
case 230808:
{
returnValue = F("Neuer Maurersweg");
break;
}
case 230809:
{
returnValue = F("Neuer Meedenweg");
break;
}
case 230810:
{
returnValue = F("Neuer Meedeweg");
break;
}
case 230811:
{
returnValue = F("Neuer Messenweg");
break;
}
case 230812:
{
returnValue = F("Neuer Meßweg");
break;
}
case 230813:
{
returnValue = F("Neuer Mittelweg");
break;
}
case 230814:
{
returnValue = F("Neuer Moordamm");
break;
}
case 230815:
{
returnValue = F("Neuer Moorweg");
break;
}
case 230816:
{
returnValue = F("Neuer Muddweg");
break;
}
case 230817:
{
returnValue = F("Neuer Mühlberg");
break;
}
case 230818:
{
returnValue = F("Neuer Mühlenweg");
break;
}
case 230819:
{
returnValue = F("Neuer Mühlweg");
break;
}
case 230820:
{
returnValue = F("Neuer Ort");
break;
}
case 230821:
{
returnValue = F("Neuer Ottenbronner Weg");
break;
}
case 230822:
{
returnValue = F("Neuer Pariser Weg");
break;
}
case 230823:
{
returnValue = F("Neuer Park");
break;
}
case 230824:
{
returnValue = F("Neuer Park Hohenleipisch");
break;
}
case 230825:
{
returnValue = F("Neuer Pfad");
break;
}
case 230826:
{
returnValue = F("Neuer Pfützenweg");
break;
}
case 230827:
{
returnValue = F("Neuer Pinkusraumweg");
break;
}
case 230828:
{
returnValue = F("Neuer Plan");
break;
}
case 230829:
{
returnValue = F("Neuer Platz");
break;
}
case 230830:
{
returnValue = F("Neuer Polder");
break;
}
case 230831:
{
returnValue = F("Neuer Postdamm");
break;
}
case 230832:
{
returnValue = F("Neuer Postweg");
break;
}
case 230833:
{
returnValue = F("Neuer Prozessionsweg");
break;
}
case 230834:
{
returnValue = F("Neuer Querweg");
break;
}
case 230835:
{
returnValue = F("Neuer Randweg");
break;
}
case 230836:
{
returnValue = F("Neuer Rebstockpark");
break;
}
case 230837:
{
returnValue = F("Neuer Renneweg");
break;
}
case 230838:
{
returnValue = F("Neuer Rennweg");
break;
}
case 230839:
{
returnValue = F("Neuer Reutenhardtweg");
break;
}
case 230840:
{
returnValue = F("Neuer Ring");
break;
}
case 230841:
{
returnValue = F("Neuer Rote Bild Weg");
break;
}
case 230842:
{
returnValue = F("Neuer Rotzenbachweg");
break;
}
case 230843:
{
returnValue = F("Neuer Rückweg");
break;
}
case 230844:
{
returnValue = F("Neuer Salzleckenweg");
break;
}
case 230845:
{
returnValue = F("Neuer Sandberg");
break;
}
case 230846:
{
returnValue = F("Neuer Schaafsweg");
break;
}
case 230847:
{
returnValue = F("Neuer Schafweg");
break;
}
case 230848:
{
returnValue = F("Neuer Schlag");
break;
}
case 230849:
{
returnValue = F("Neuer Schloßweg");
break;
}
case 230850:
{
returnValue = F("Neuer Schulweg");
break;
}
case 230851:
{
returnValue = F("Neuer Schutzdeich");
break;
}
case 230852:
{
returnValue = F("Neuer Schwanebecker Weg");
break;
}
case 230853:
{
returnValue = F("Neuer Seeweg");
break;
}
case 230854:
{
returnValue = F("Neuer Siedlungsweg");
break;
}
case 230855:
{
returnValue = F("Neuer Sorbenweg");
break;
}
case 230856:
{
returnValue = F("Neuer Stadtgarten");
break;
}
case 230857:
{
returnValue = F("Neuer Steinbruchschlagweg");
break;
}
case 230858:
{
returnValue = F("Neuer Steinbruchweg");
break;
}
case 230859:
{
returnValue = F("Neuer Steinweg");
break;
}
case 230860:
{
returnValue = F("Neuer Stettener Weg");
break;
}
case 230861:
{
returnValue = F("Neuer Stieg");
break;
}
case 230862:
{
returnValue = F("Neuer Stilkensweg");
break;
}
case 230863:
{
returnValue = F("Neuer Strebenweg");
break;
}
case 230864:
{
returnValue = F("Neuer Streckweg");
break;
}
case 230865:
{
returnValue = F("Neuer Stöckach");
break;
}
case 230866:
{
returnValue = F("Neuer Sülzeweg");
break;
}
case 230867:
{
returnValue = F("Neuer Talweg");
break;
}
case 230868:
{
returnValue = F("Neuer Taubenweg");
break;
}
case 230869:
{
returnValue = F("Neuer Teich");
break;
}
case 230870:
{
returnValue = F("Neuer Teichdamm");
break;
}
case 230871:
{
returnValue = F("Neuer Teichweg");
break;
}
case 230872:
{
returnValue = F("Neuer Traßweg");
break;
}
case 230873:
{
returnValue = F("Neuer Trieb");
break;
}
case 230874:
{
returnValue = F("Neuer Triebel");
break;
}
case 230875:
{
returnValue = F("Neuer Unterstützengrüner Bahnhofsweg");
break;
}
case 230876:
{
returnValue = F("Neuer Vorstadtbergweg");
break;
}
case 230877:
{
returnValue = F("Neuer Walddorfer Weg");
break;
}
case 230878:
{
returnValue = F("Neuer Waldweg");
break;
}
case 230879:
{
returnValue = F("Neuer Wall");
break;
}
case 230880:
{
returnValue = F("Neuer Wannenebeneweg");
break;
}
case 230881:
{
returnValue = F("Neuer Wasen");
break;
}
case 230882:
{
returnValue = F("Neuer Weg");
break;
}
case 230883:
{
returnValue = F("Neuer Weg / Häuslerweg");
break;
}
case 230884:
{
returnValue = F("Neuer Weg-Nord");
break;
}
case 230885:
{
returnValue = F("Neuer Weiher Weg");
break;
}
case 230886:
{
returnValue = F("Neuer Weinberg");
break;
}
case 230887:
{
returnValue = F("Neuer Wiehl Weg");
break;
}
case 230888:
{
returnValue = F("Neuer Wiesenweg");
break;
}
case 230889:
{
returnValue = F("Neuer Wilddobelweg");
break;
}
case 230890:
{
returnValue = F("Neuer Winkel");
break;
}
case 230891:
{
returnValue = F("Neuer Winkelsheidermoorweg");
break;
}
case 230892:
{
returnValue = F("Neuer Winterhaltweg");
break;
}
case 230893:
{
returnValue = F("Neuer Wolfbergbergweg");
break;
}
case 230894:
{
returnValue = F("Neuer Wurzelsteig");
break;
}
case 230895:
{
returnValue = F("Neuer Wurzenweg");
break;
}
case 230896:
{
returnValue = F("Neuer Zaberfelder Weg");
break;
}
case 230897:
{
returnValue = F("Neuer Zaunweg");
break;
}
case 230898:
{
returnValue = F("Neuer Zimmerleitenweg");
break;
}
case 230899:
{
returnValue = F("Neuer Zirkel");
break;
}
case 230900:
{
returnValue = F("Neuer Zuckerweg");
break;
}
case 230901:
{
returnValue = F("Neuer Zuschlagweg");
break;
}
case 230902:
{
returnValue = F("Neuer Überrain");
break;
}
case 230903:
{
returnValue = F("Neuer-Bau-Gasse");
break;
}
case 230904:
{
returnValue = F("Neuer-Berg-Weg");
break;
}
case 230905:
{
returnValue = F("Neuer-Dickneweg");
break;
}
case 230906:
{
returnValue = F("Neuer-Weg");
break;
}
case 230907:
{
returnValue = F("NeuerWinterhaldeweg");
break;
}
case 230908:
{
returnValue = F("Neuerbe");
break;
}
case 230909:
{
returnValue = F("Neuerburger Str.");
break;
}
case 230910:
{
returnValue = F("Neuerburger Weg");
break;
}
case 230911:
{
returnValue = F("Neuerburgpark");
break;
}
case 230912:
{
returnValue = F("Neuerburgstr.");
break;
}
case 230913:
{
returnValue = F("Neuerfrader Weg");
break;
}
case 230914:
{
returnValue = F("Neuergraben");
break;
}
case 230915:
{
returnValue = F("Neuerhagen");
break;
}
case 230916:
{
returnValue = F("Neuero Masch");
break;
}
case 230917:
{
returnValue = F("Neueroder Str.");
break;
}
case 230918:
{
returnValue = F("Neuerostr.");
break;
}
case 230919:
{
returnValue = F("Neuersdorfer Str.");
break;
}
case 230920:
{
returnValue = F("Neuershauser Str.");
break;
}
case 230921:
{
returnValue = F("Neuerstadt");
break;
}
case 230922:
{
returnValue = F("Neuerstr.");
break;
}
case 230923:
{
returnValue = F("Neuerweg");
break;
}
case 230924:
{
returnValue = F("Neues Aichelbergsträßle");
break;
}
case 230925:
{
returnValue = F("Neues Alleechen");
break;
}
case 230926:
{
returnValue = F("Neues Bannwaldsträßle");
break;
}
case 230927:
{
returnValue = F("Neues Bollwerk");
break;
}
case 230928:
{
returnValue = F("Neues Dorf");
break;
}
case 230929:
{
returnValue = F("Neues Dörfchen");
break;
}
case 230930:
{
returnValue = F("Neues Ende");
break;
}
case 230931:
{
returnValue = F("Neues Feld");
break;
}
case 230932:
{
returnValue = F("Neues Forsthaus");
break;
}
case 230933:
{
returnValue = F("Neues Gestell");
break;
}
case 230934:
{
returnValue = F("Neues Gütlein");
break;
}
case 230935:
{
returnValue = F("Neues Haus");
break;
}
case 230936:
{
returnValue = F("Neues Herrenhaus");
break;
}
case 230937:
{
returnValue = F("Neues Kautzengäßchen");
break;
}
case 230938:
{
returnValue = F("Neues Lager");
break;
}
case 230939:
{
returnValue = F("Neues Land");
break;
}
case 230940:
{
returnValue = F("Neues Leben");
break;
}
case 230941:
{
returnValue = F("Neues Moor");
break;
}
case 230942:
{
returnValue = F("Neues Rottland");
break;
}
case 230943:
{
returnValue = F("Neues Schloss");
break;
}
case 230944:
{
returnValue = F("Neues Steigle");
break;
}
case 230945:
{
returnValue = F("Neues Sträßchen");
break;
}
case 230946:
{
returnValue = F("Neues Sträßel");
break;
}
case 230947:
{
returnValue = F("Neues Sträßle");
break;
}
case 230948:
{
returnValue = F("Neues Tor");
break;
}
case 230949:
{
returnValue = F("Neues Viertel");
break;
}
case 230950:
{
returnValue = F("Neues Zentrum");
break;
}
case 230951:
{
returnValue = F("Neuessener Str.");
break;
}
case 230952:
{
returnValue = F("Neuestr.");
break;
}
case 230953:
{
returnValue = F("Neuetor");
break;
}
case 230954:
{
returnValue = F("Neuetorstr.");
break;
}
case 230955:
{
returnValue = F("Neueweg");
break;
}
case 230956:
{
returnValue = F("Neufahrner Str.");
break;
}
case 230957:
{
returnValue = F("Neufahrner Straßl");
break;
}
case 230958:
{
returnValue = F("Neufahrner Weg");
break;
}
case 230959:
{
returnValue = F("Neufang");
break;
}
case 230960:
{
returnValue = F("Neufanger Str.");
break;
}
case 230961:
{
returnValue = F("Neufanger Weg");
break;
}
case 230962:
{
returnValue = F("Neufangweg");
break;
}
case 230963:
{
returnValue = F("Neufarner Str.");
break;
}
case 230964:
{
returnValue = F("Neufchâteau-Park");
break;
}
case 230965:
{
returnValue = F("Neufchâteaustr.");
break;
}
case 230966:
{
returnValue = F("Neufeld");
break;
}
case 230967:
{
returnValue = F("Neufeldenstr.");
break;
}
case 230968:
{
returnValue = F("Neufelder Schanze");
break;
}
case 230969:
{
returnValue = F("Neufelder Str.");
break;
}
case 230970:
{
returnValue = F("Neufelder Weg");
break;
}
case 230971:
{
returnValue = F("Neufeldheide");
break;
}
case 230972:
{
returnValue = F("Neufeldlein");
break;
}
case 230973:
{
returnValue = F("Neufeldschlagweg");
break;
}
case 230974:
{
returnValue = F("Neufeldschneise");
break;
}
case 230975:
{
returnValue = F("Neufeldsiedlung");
break;
}
case 230976:
{
returnValue = F("Neufeldstr.");
break;
}
case 230977:
{
returnValue = F("Neufeldsweg");
break;
}
case 230978:
{
returnValue = F("Neufeldtstr.");
break;
}
case 230979:
{
returnValue = F("Neufeldweg");
break;
}
case 230980:
{
returnValue = F("Neufels");
break;
}
case 230981:
{
returnValue = F("Neufelser Mühle");
break;
}
case 230982:
{
returnValue = F("Neufelser Str.");
break;
}
case 230983:
{
returnValue = F("Neufelserstr.");
break;
}
case 230984:
{
returnValue = F("Neufenne");
break;
}
case 230985:
{
returnValue = F("Neuferchauer Dorfstr.");
break;
}
case 230986:
{
returnValue = F("Neuferchauer Str.");
break;
}
case 230987:
{
returnValue = F("Neuferchauer Weg");
break;
}
case 230988:
{
returnValue = F("Neuffenblick");
break;
}
case 230989:
{
returnValue = F("Neuffener Str.");
break;
}
case 230990:
{
returnValue = F("Neuffener Weg");
break;
}
case 230991:
{
returnValue = F("Neuffenplatz");
break;
}
case 230992:
{
returnValue = F("Neuffenstr.");
break;
}
case 230993:
{
returnValue = F("Neuffenweg");
break;
}
case 230994:
{
returnValue = F("Neufferackerstr.");
break;
}
case 230995:
{
returnValue = F("Neufferpark");
break;
}
case 230996:
{
returnValue = F("Neufferstr.");
break;
}
case 230997:
{
returnValue = F("Neuffstr.");
break;
}
case 230998:
{
returnValue = F("Neufinsinger Str.");
break;
}
case 230999:
{
returnValue = F("Neufirreler Str.");
break;
}
case 231000:
{
returnValue = F("Neuflizer Platz");
break;
}
case 231001:
{
returnValue = F("Neuflöz");
break;
}
case 231002:
{
returnValue = F("Neuflözstr.");
break;
}
case 231003:
{
returnValue = F("Neuflürchen");
break;
}
case 231004:
{
returnValue = F("Neufnachring");
break;
}
case 231005:
{
returnValue = F("Neufnachstr.");
break;
}
case 231006:
{
returnValue = F("Neufnachtalstr.");
break;
}
case 231007:
{
returnValue = F("Neufnachweg");
break;
}
case 231008:
{
returnValue = F("Neufolstenhausener Str.");
break;
}
case 231009:
{
returnValue = F("Neuforweiler Weg");
break;
}
case 231010:
{
returnValue = F("Neufracher Str.");
break;
}
case 231011:
{
returnValue = F("Neufraer Str.");
break;
}
case 231012:
{
returnValue = F("Neufresenburg");
break;
}
case 231013:
{
returnValue = F("Neufriedersdorf");
break;
}
case 231014:
{
returnValue = F("Neufriedland");
break;
}
case 231015:
{
returnValue = F("Neufriedrichsdorfer Str.");
break;
}
case 231016:
{
returnValue = F("Neufriedstein");
break;
}
case 231017:
{
returnValue = F("Neufriemer Str.");
break;
}
case 231018:
{
returnValue = F("Neufundlandstr.");
break;
}
case 231019:
{
returnValue = F("Neufunkenhagen");
break;
}
case 231020:
{
returnValue = F("Neufunnixsiel");
break;
}
case 231021:
{
returnValue = F("Neugablonzer Str.");
break;
}
case 231022:
{
returnValue = F("Neugablonzer Weg");
break;
}
case 231023:
{
returnValue = F("Neugaden");
break;
}
case 231024:
{
returnValue = F("Neugahlener Str.");
break;
}
case 231025:
{
returnValue = F("Neugart");
break;
}
case 231026:
{
returnValue = F("Neugarten");
break;
}
case 231027:
{
returnValue = F("Neugartener Str.");
break;
}
case 231028:
{
returnValue = F("Neugartenstr.");
break;
}
case 231029:
{
returnValue = F("Neugartenweg");
break;
}
case 231030:
{
returnValue = F("Neugartstr.");
break;
}
case 231031:
{
returnValue = F("Neugasse");
break;
}
case 231032:
{
returnValue = F("Neugasshohl");
break;
}
case 231033:
{
returnValue = F("Neugatterslebener Weg");
break;
}
case 231034:
{
returnValue = F("Neugattersleber Str.");
break;
}
case 231035:
{
returnValue = F("Neugaul");
break;
}
case 231036:
{
returnValue = F("Neugauler Str.");
break;
}
case 231037:
{
returnValue = F("Neugeiserhof");
break;
}
case 231038:
{
returnValue = F("Neugeländstr.");
break;
}
case 231039:
{
returnValue = F("Neugeorgenfeld");
break;
}
case 231040:
{
returnValue = F("Neugereut");
break;
}
case 231041:
{
returnValue = F("Neugereutweg");
break;
}
case 231042:
{
returnValue = F("Neugernsdorf");
break;
}
case 231043:
{
returnValue = F("Neugersdorfer Str.");
break;
}
case 231044:
{
returnValue = F("Neuglashüttener Str.");
break;
}
case 231045:
{
returnValue = F("Neuglobsower Str.");
break;
}
case 231046:
{
returnValue = F("Neuglosberg");
break;
}
case 231047:
{
returnValue = F("Neuglücker Weg");
break;
}
case 231048:
{
returnValue = F("Neuglückstr.");
break;
}
case 231049:
{
returnValue = F("Neugnewitzer Weg");
break;
}
case 231050:
{
returnValue = F("Neugohla");
break;
}
case 231051:
{
returnValue = F("Neugraben");
break;
}
case 231052:
{
returnValue = F("Neugraben-Schneise");
break;
}
case 231053:
{
returnValue = F("Neugrabener Weg");
break;
}
case 231054:
{
returnValue = F("Neugrabenstr.");
break;
}
case 231055:
{
returnValue = F("Neugrabensweg");
break;
}
case 231056:
{
returnValue = F("Neugrabenweg");
break;
}
case 231057:
{
returnValue = F("Neugreut");
break;
}
case 231058:
{
returnValue = F("Neugreuth");
break;
}
case 231059:
{
returnValue = F("Neugreuthstr.");
break;
}
case 231060:
{
returnValue = F("Neugreutstr.");
break;
}
case 231061:
{
returnValue = F("Neugreutweg");
break;
}
case 231062:
{
returnValue = F("Neugreußniger Str.");
break;
}
case 231063:
{
returnValue = F("Neugrimnitzer Str.");
break;
}
case 231064:
{
returnValue = F("Neugrüner Str.");
break;
}
case 231065:
{
returnValue = F("Neugschwendnergasse");
break;
}
case 231066:
{
returnValue = F("Neugugelhutweg");
break;
}
case 231067:
{
returnValue = F("Neugärten");
break;
}
case 231068:
{
returnValue = F("Neugärtenring");
break;
}
case 231069:
{
returnValue = F("Neugärtenstr.");
break;
}
case 231070:
{
returnValue = F("Neugärtenweg");
break;
}
case 231071:
{
returnValue = F("Neugärtle");
break;
}
case 231072:
{
returnValue = F("Neugässner Weg");
break;
}
case 231073:
{
returnValue = F("Neugäßchen");
break;
}
case 231074:
{
returnValue = F("Neugäßle");
break;
}
case 231075:
{
returnValue = F("Neugöggenhofen");
break;
}
case 231076:
{
returnValue = F("Neuhaid");
break;
}
case 231077:
{
returnValue = F("Neuhainholz");
break;
}
case 231078:
{
returnValue = F("Neuhalde");
break;
}
case 231079:
{
returnValue = F("Neuhaldenplatz");
break;
}
case 231080:
{
returnValue = F("Neuhaldensleber Str.");
break;
}
case 231081:
{
returnValue = F("Neuhaldensleber Weg");
break;
}
case 231082:
{
returnValue = F("Neuhaldenstr.");
break;
}
case 231083:
{
returnValue = F("Neuhaldenweg");
break;
}
case 231084:
{
returnValue = F("Neuhaldeweg");
break;
}
case 231085:
{
returnValue = F("Neuhammerweg");
break;
}
case 231086:
{
returnValue = F("Neuhandstr.");
break;
}
case 231087:
{
returnValue = F("Neuhardenbergstr.");
break;
}
case 231088:
{
returnValue = F("Neuharlingersieler Str.");
break;
}
case 231089:
{
returnValue = F("Neuharmhorst");
break;
}
case 231090:
{
returnValue = F("Neuhartslhof");
break;
}
case 231091:
{
returnValue = F("Neuhattendorfer Str.");
break;
}
case 231092:
{
returnValue = F("Neuhatter Str.");
break;
}
case 231093:
{
returnValue = F("Neuhauer Weg");
break;
}
case 231094:
{
returnValue = F("Neuhaus");
break;
}
case 231095:
{
returnValue = F("Neuhaus auf der Tratt");
break;
}
case 231096:
{
returnValue = F("Neuhausbusch");
break;
}
case 231097:
{
returnValue = F("Neuhausen");
break;
}
case 231098:
{
returnValue = F("Neuhausendyk");
break;
}
case 231099:
{
returnValue = F("Neuhausener Str.");
break;
}
case 231100:
{
returnValue = F("Neuhausener Weg");
break;
}
case 231101:
{
returnValue = F("Neuhausenstr.");
break;
}
case 231102:
{
returnValue = F("Neuhauser Hauptstr.");
break;
}
case 231103:
{
returnValue = F("Neuhauser Str.");
break;
}
case 231104:
{
returnValue = F("Neuhauser Weg");
break;
}
case 231105:
{
returnValue = F("Neuhauser-Weg");
break;
}
case 231106:
{
returnValue = F("Neuhauserhof");
break;
}
case 231107:
{
returnValue = F("Neuhauserweg");
break;
}
case 231108:
{
returnValue = F("Neuhausgasse");
break;
}
case 231109:
{
returnValue = F("Neuhausgäßchen");
break;
}
case 231110:
{
returnValue = F("Neuhauskamp");
break;
}
case 231111:
{
returnValue = F("Neuhaussteig");
break;
}
case 231112:
{
returnValue = F("Neuhausstr.");
break;
}
case 231113:
{
returnValue = F("Neuhaustr.");
break;
}
case 231114:
{
returnValue = F("Neuhausweg");
break;
}
case 231115:
{
returnValue = F("Neuhauweg");
break;
}
case 231116:
{
returnValue = F("Neuhaußstr.");
break;
}
case 231117:
{
returnValue = F("Neuheckstr.");
break;
}
case 231118:
{
returnValue = F("Neuheede Siedlung");
break;
}
case 231119:
{
returnValue = F("Neuheider Str.");
break;
}
case 231120:
{
returnValue = F("Neuheider Weg");
break;
}
case 231121:
{
returnValue = F("Neuheidlesweg");
break;
}
case 231122:
{
returnValue = F("Neuheikendorfer Weg");
break;
}
case 231123:
{
returnValue = F("Neuheim");
break;
}
case 231124:
{
returnValue = F("Neuheimer Weg");
break;
}
case 231125:
{
returnValue = F("Neuheimstattweg");
break;
}
case 231126:
{
returnValue = F("Neuheinder Weg");
break;
}
case 231127:
{
returnValue = F("Neuhellmer");
break;
}
case 231128:
{
returnValue = F("Neuherberger Str.");
break;
}
case 231129:
{
returnValue = F("Neuherbergstr.");
break;
}
case 231130:
{
returnValue = F("Neuhewenstr.");
break;
}
case 231131:
{
returnValue = F("Neuhewenweg");
break;
}
case 231132:
{
returnValue = F("Neuhillen");
break;
}
case 231133:
{
returnValue = F("Neuhirschsteiner Str.");
break;
}
case 231134:
{
returnValue = F("Neuhochstadter Str.");
break;
}
case 231135:
{
returnValue = F("Neuhof");
break;
}
case 231136:
{
returnValue = F("Neuhof-Siedlung");
break;
}
case 231137:
{
returnValue = F("Neuhofen");
break;
}
case 231138:
{
returnValue = F("Neuhofener Str.");
break;
}
case 231139:
{
returnValue = F("Neuhofer Dorfstr.");
break;
}
case 231140:
{
returnValue = F("Neuhofer Hauptstr.");
break;
}
case 231141:
{
returnValue = F("Neuhofer Landweg");
break;
}
case 231142:
{
returnValue = F("Neuhofer Str.");
break;
}
case 231143:
{
returnValue = F("Neuhofer Weg");
break;
}
case 231144:
{
returnValue = F("Neuhofer Weiche");
break;
}
case 231145:
{
returnValue = F("Neuhoferstr.");
break;
}
case 231146:
{
returnValue = F("Neuhoffstr.");
break;
}
case 231147:
{
returnValue = F("Neuhoffweg");
break;
}
case 231148:
{
returnValue = F("Neuhofschneise");
break;
}
case 231149:
{
returnValue = F("Neuhofstr.");
break;
}
case 231150:
{
returnValue = F("Neuhofsweg");
break;
}
case 231151:
{
returnValue = F("Neuhofweg");
break;
}
case 231152:
{
returnValue = F("Neuhohelinde");
break;
}
case 231153:
{
returnValue = F("Neuhohl");
break;
}
case 231154:
{
returnValue = F("Neuholland");
break;
}
case 231155:
{
returnValue = F("Neuholländer Chaussee");
break;
}
case 231156:
{
returnValue = F("Neuholländer Weg");
break;
}
case 231157:
{
returnValue = F("Neuholzkrug");
break;
}
case 231158:
{
returnValue = F("Neuholzsträßle");
break;
}
case 231159:
{
returnValue = F("Neuhorsbüller Weg");
break;
}
case 231160:
{
returnValue = F("Neuhurden");
break;
}
case 231161:
{
returnValue = F("Neuhäsen");
break;
}
case 231162:
{
returnValue = F("Neuhäuseler Str.");
break;
}
case 231163:
{
returnValue = F("Neuhäuser");
break;
}
case 231164:
{
returnValue = F("Neuhäuser Allee");
break;
}
case 231165:
{
returnValue = F("Neuhäuser Erholungsgebiet");
break;
}
case 231166:
{
returnValue = F("Neuhäuser Hauptweg");
break;
}
case 231167:
{
returnValue = F("Neuhäuser Kirchstr.");
break;
}
case 231168:
{
returnValue = F("Neuhäuser Kirchweg");
break;
}
case 231169:
{
returnValue = F("Neuhäuser Steige");
break;
}
case 231170:
{
returnValue = F("Neuhäuser Str.");
break;
}
case 231171:
{
returnValue = F("Neuhäuser Weg");
break;
}
case 231172:
{
returnValue = F("Neuhäuserlochweg");
break;
}
case 231173:
{
returnValue = F("Neuhäuserstr.");
break;
}
case 231174:
{
returnValue = F("Neuhäuserwandsträßchen");
break;
}
case 231175:
{
returnValue = F("Neuhäuserweg");
break;
}
case 231176:
{
returnValue = F("Neuhäusl");
break;
}
case 231177:
{
returnValue = F("Neuhäusle");
break;
}
case 231178:
{
returnValue = F("Neuhäusler Weg");
break;
}
case 231179:
{
returnValue = F("Neuhäuslerstr.");
break;
}
case 231180:
{
returnValue = F("Neuhäuslweg");
break;
}
case 231181:
{
returnValue = F("Neuhöfchen");
break;
}
case 231182:
{
returnValue = F("Neuhöfcher Str.");
break;
}
case 231183:
{
returnValue = F("Neuhöfe");
break;
}
case 231184:
{
returnValue = F("Neuhöfer Str.");
break;
}
case 231185:
{
returnValue = F("Neuhöfer Tannschneise");
break;
}
case 231186:
{
returnValue = F("Neuhöfer Weg");
break;
}
case 231187:
{
returnValue = F("Neuhörn");
break;
}
case 231188:
{
returnValue = F("Neuhüller Str.");
break;
}
case 231189:
{
returnValue = F("Neuhüttenstr.");
break;
}
case 231190:
{
returnValue = F("Neuhüttenstr. (Kolkrabe)");
break;
}
case 231191:
{
returnValue = F("Neuhüttenweg");
break;
}
case 231192:
{
returnValue = F("Neuhütter Weg");
break;
}
case 231193:
{
returnValue = F("Neuhütterstr.");
break;
}
case 231194:
{
returnValue = F("Neuilewitt");
break;
}
case 231195:
{
returnValue = F("Neuillyer-Platz");
break;
}
case 231196:
{
returnValue = F("Neuiser Weg");
break;
}
case 231197:
{
returnValue = F("Neuißweg");
break;
}
case 231198:
{
returnValue = F("Neujahrstr.");
break;
}
case 231199:
{
returnValue = F("Neujanisroda");
break;
}
case 231200:
{
returnValue = F("Neujellingsdorf");
break;
}
case 231201:
{
returnValue = F("Neukalener Str.");
break;
}
case 231202:
{
returnValue = F("Neukammer");
break;
}
case 231203:
{
returnValue = F("Neukamp");
break;
}
case 231204:
{
returnValue = F("Neukampsweg");
break;
}
case 231205:
{
returnValue = F("Neukappeln");
break;
}
case 231206:
{
returnValue = F("Neukarlshof");
break;
}
case 231207:
{
returnValue = F("Neukasteller Weg");
break;
}
case 231208:
{
returnValue = F("Neukastellstr.");
break;
}
case 231209:
{
returnValue = F("Neukeferloher Weg");
break;
}
case 231210:
{
returnValue = F("Neukegasse");
break;
}
case 231211:
{
returnValue = F("Neukelsterbacher Str.");
break;
}
case 231212:
{
returnValue = F("Neukietz");
break;
}
case 231213:
{
returnValue = F("Neukirchen");
break;
}
case 231214:
{
returnValue = F("Neukirchen zu Sankt Christoph");
break;
}
case 231215:
{
returnValue = F("Neukirchener Ring");
break;
}
case 231216:
{
returnValue = F("Neukirchener Str.");
break;
}
case 231217:
{
returnValue = F("Neukirchener Weg");
break;
}
case 231218:
{
returnValue = F("Neukirchensteig");
break;
}
case 231219:
{
returnValue = F("Neukirchenstr.");
break;
}
case 231220:
{
returnValue = F("Neukircher Heide");
break;
}
case 231221:
{
returnValue = F("Neukircher Mühle");
break;
}
case 231222:
{
returnValue = F("Neukircher Str.");
break;
}
case 231223:
{
returnValue = F("Neukircher Weg");
break;
}
case 231224:
{
returnValue = F("Neukirchner Str.");
break;
}
case 231225:
{
returnValue = F("Neukirchner Todtenweg");
break;
}
case 231226:
{
returnValue = F("Neukirchner Weg");
break;
}
case 231227:
{
returnValue = F("Neukirchnerstr.");
break;
}
case 231228:
{
returnValue = F("Neukirchstr.");
break;
}
case 231229:
{
returnValue = F("Neukirnberg");
break;
}
case 231230:
{
returnValue = F("Neukittlitz");
break;
}
case 231231:
{
returnValue = F("Neuklefstr.");
break;
}
case 231232:
{
returnValue = F("Neuklingenberg");
break;
}
case 231233:
{
returnValue = F("Neuklockenhäger Weg");
break;
}
case 231234:
{
returnValue = F("Neuklosteraner Str.");
break;
}
case 231235:
{
returnValue = F("Neuklosterweg");
break;
}
case 231236:
{
returnValue = F("Neukollm");
break;
}
case 231237:
{
returnValue = F("Neukoogstr.");
break;
}
case 231238:
{
returnValue = F("Neukoppel");
break;
}
case 231239:
{
returnValue = F("Neukoppeler Str.");
break;
}
case 231240:
{
returnValue = F("Neukorde");
break;
}
case 231241:
{
returnValue = F("Neukosler Weg");
break;
}
case 231242:
{
returnValue = F("Neukrapohl");
break;
}
case 231243:
{
returnValue = F("Neukreithstr.");
break;
}
case 231244:
{
returnValue = F("Neukreut");
break;
}
case 231245:
{
returnValue = F("Neukreuth");
break;
}
case 231246:
{
returnValue = F("Neukrittstr.");
break;
}
case 231247:
{
returnValue = F("Neukronenberger Str.");
break;
}
case 231248:
{
returnValue = F("Neukrug");
break;
}
case 231249:
{
returnValue = F("Neukruger Chaussee");
break;
}
case 231250:
{
returnValue = F("Neukruger Str.");
break;
}
case 231251:
{
returnValue = F("Neukruger Weg");
break;
}
case 231252:
{
returnValue = F("Neukrumbacher Str.");
break;
}
case 231253:
{
returnValue = F("Neukuchhausen");
break;
}
case 231254:
{
returnValue = F("Neukuhla");
break;
}
case 231255:
{
returnValue = F("Neukuhrener Weg");
break;
}
case 231256:
{
returnValue = F("Neukumweg");
break;
}
case 231257:
{
returnValue = F("Neukölln");
break;
}
case 231258:
{
returnValue = F("Neukölln-Anlage");
break;
}
case 231259:
{
returnValue = F("Neuköllner Platz");
break;
}
case 231260:
{
returnValue = F("Neuköllner Str.");
break;
}
case 231261:
{
returnValue = F("Neuköllner Weg");
break;
}
case 231262:
{
returnValue = F("Neuköllnstr.");
break;
}
case 231263:
{
returnValue = F("Neukölner Str.");
break;
}
case 231264:
{
returnValue = F("Neukölnstr.");
break;
}
case 231265:
{
returnValue = F("Neuköslarn");
break;
}
case 231266:
{
returnValue = F("Neukühschwitz");
break;
}
case 231267:
{
returnValue = F("Neuküstrinchen");
break;
}
case 231268:
{
returnValue = F("Neuland");
break;
}
case 231269:
{
returnValue = F("Neuland-Str.");
break;
}
case 231270:
{
returnValue = F("Neulanddamm");
break;
}
case 231271:
{
returnValue = F("Neulande");
break;
}
case 231272:
{
returnValue = F("Neulanden");
break;
}
case 231273:
{
returnValue = F("Neulandenweg");
break;
}
case 231274:
{
returnValue = F("Neulander Str.");
break;
}
case 231275:
{
returnValue = F("Neulander Weg");
break;
}
case 231276:
{
returnValue = F("Neulandgasse");
break;
}
case 231277:
{
returnValue = F("Neulandplatz");
break;
}
case 231278:
{
returnValue = F("Neulandring");
break;
}
case 231279:
{
returnValue = F("Neulands-Weg");
break;
}
case 231280:
{
returnValue = F("Neulandshof");
break;
}
case 231281:
{
returnValue = F("Neulandsiedlung");
break;
}
case 231282:
{
returnValue = F("Neulandstege");
break;
}
case 231283:
{
returnValue = F("Neulandstr.");
break;
}
case 231284:
{
returnValue = F("Neulandsweg");
break;
}
case 231285:
{
returnValue = F("Neulandweg");
break;
}
case 231286:
{
returnValue = F("Neulandwinkel");
break;
}
case 231287:
{
returnValue = F("Neulangsow");
break;
}
case 231288:
{
returnValue = F("Neulaubaer Str.");
break;
}
case 231289:
{
returnValue = F("Neulauterer Weg");
break;
}
case 231290:
{
returnValue = F("Neulauterner Str.");
break;
}
case 231291:
{
returnValue = F("Neuleblangsteig");
break;
}
case 231292:
{
returnValue = F("Neulehen");
break;
}
case 231293:
{
returnValue = F("Neulehenstr.");
break;
}
case 231294:
{
returnValue = F("Neuleher Str.");
break;
}
case 231295:
{
returnValue = F("Neuleininger Str.");
break;
}
case 231296:
{
returnValue = F("Neulengrund");
break;
}
case 231297:
{
returnValue = F("Neulens Höhe");
break;
}
case 231298:
{
returnValue = F("Neulerchenfeldweg");
break;
}
case 231299:
{
returnValue = F("Neulerstr.");
break;
}
case 231300:
{
returnValue = F("Neulewin");
break;
}
case 231301:
{
returnValue = F("Neulichtenhofstr.");
break;
}
case 231302:
{
returnValue = F("Neulichweg");
break;
}
case 231303:
{
returnValue = F("Neulietzegöricke");
break;
}
case 231304:
{
returnValue = F("Neulindacher Str.");
break;
}
case 231305:
{
returnValue = F("Neulinde");
break;
}
case 231306:
{
returnValue = F("Neulinger Str.");
break;
}
case 231307:
{
returnValue = F("Neulinger Weg");
break;
}
case 231308:
{
returnValue = F("Neulingerstr.");
break;
}
case 231309:
{
returnValue = F("Neulingsiepen");
break;
}
case 231310:
{
returnValue = F("Neulingstr.");
break;
}
case 231311:
{
returnValue = F("Neulohe");
break;
}
case 231312:
{
returnValue = F("Neulorup");
break;
}
case 231313:
{
returnValue = F("Neuloruper Weg");
break;
}
case 231314:
{
returnValue = F("Neulouisendorfer Str.");
break;
}
case 231315:
{
returnValue = F("Neulsweg");
break;
}
case 231316:
{
returnValue = F("Neuludwigsdorf");
break;
}
case 231317:
{
returnValue = F("Neulußheimer Str.");
break;
}
case 231318:
{
returnValue = F("Neulußheimer Weg");
break;
}
case 231319:
{
returnValue = F("Neuländchenring");
break;
}
case 231320:
{
returnValue = F("Neuländer");
break;
}
case 231321:
{
returnValue = F("Neuländer Pfad");
break;
}
case 231322:
{
returnValue = F("Neuländer Str.");
break;
}
case 231323:
{
returnValue = F("Neuländer Weg");
break;
}
case 231324:
{
returnValue = F("Neuländerstr.");
break;
}
case 231325:
{
returnValue = F("Neuländerweg");
break;
}
case 231326:
{
returnValue = F("Neuländstr.");
break;
}
case 231327:
{
returnValue = F("Neulänge");
break;
}
case 231328:
{
returnValue = F("Neulögower Weg");
break;
}
case 231329:
{
returnValue = F("Neulöwenberger Str.");
break;
}
case 231330:
{
returnValue = F("Neulüdersdorf");
break;
}
case 231331:
{
returnValue = F("Neulüsser Str.");
break;
}
case 231332:
{
returnValue = F("Neulütticher Str.");
break;
}
case 231333:
{
returnValue = F("Neulüßer Str.");
break;
}
case 231334:
{
returnValue = F("Neumagener Weg");
break;
}
case 231335:
{
returnValue = F("Neumagenstr.");
break;
}
case 231336:
{
returnValue = F("Neumaierweg");
break;
}
case 231337:
{
returnValue = F("Neumalsitz");
break;
}
case 231338:
{
returnValue = F("Neumalsweg");
break;
}
case 231339:
{
returnValue = F("Neumann-Neander-Str.");
break;
}
case 231340:
{
returnValue = F("Neumann-Passage");
break;
}
case 231341:
{
returnValue = F("Neumannheimer Weg");
break;
}
case 231342:
{
returnValue = F("Neumannsbusch");
break;
}
case 231343:
{
returnValue = F("Neumannsgrund");
break;
}
case 231344:
{
returnValue = F("Neumannsgrunder Str.");
break;
}
case 231345:
{
returnValue = F("Neumannshof");
break;
}
case 231346:
{
returnValue = F("Neumannstr.");
break;
}
case 231347:
{
returnValue = F("Neumannsweg");
break;
}
case 231348:
{
returnValue = F("Neumark");
break;
}
case 231349:
{
returnValue = F("Neumarker Str.");
break;
}
case 231350:
{
returnValue = F("Neumarkstr.");
break;
}
case 231351:
{
returnValue = F("Neumarkt");
break;
}
case 231352:
{
returnValue = F("Neumarkt-Brücke");
break;
}
case 231353:
{
returnValue = F("Neumarkter Allee");
break;
}
case 231354:
{
returnValue = F("Neumarkter Platz");
break;
}
case 231355:
{
returnValue = F("Neumarkter Str.");
break;
}
case 231356:
{
returnValue = F("Neumarkter Weg");
break;
}
case 231357:
{
returnValue = F("Neumarktgasse");
break;
}
case 231358:
{
returnValue = F("Neumarktpassage");
break;
}
case 231359:
{
returnValue = F("Neumarktplatz");
break;
}
case 231360:
{
returnValue = F("Neumarktstiege");
break;
}
case 231361:
{
returnValue = F("Neumarktstr.");
break;
}
case 231362:
{
returnValue = F("Neumatt");
break;
}
case 231363:
{
returnValue = F("Neumatten");
break;
}
case 231364:
{
returnValue = F("Neumattenstr.");
break;
}
case 231365:
{
returnValue = F("Neumattenweg");
break;
}
case 231366:
{
returnValue = F("Neumattring");
break;
}
case 231367:
{
returnValue = F("Neumattstr.");
break;
}
case 231368:
{
returnValue = F("Neumattweg");
break;
}
case 231369:
{
returnValue = F("Neumauer");
break;
}
case 231370:
{
returnValue = F("Neumayerring");
break;
}
case 231371:
{
returnValue = F("Neumayerstr.");
break;
}
case 231372:
{
returnValue = F("Neumayrstr.");
break;
}
case 231373:
{
returnValue = F("Neumerberen");
break;
}
case 231374:
{
returnValue = F("Neumerler Weg");
break;
}
case 231375:
{
returnValue = F("Neumeyerstr.");
break;
}
case 231376:
{
returnValue = F("Neumeyerweg");
break;
}
case 231377:
{
returnValue = F("Neumilkau");
break;
}
case 231378:
{
returnValue = F("Neumohlis");
break;
}
case 231379:
{
returnValue = F("Neumondgasse");
break;
}
case 231380:
{
returnValue = F("Neumoor");
break;
}
case 231381:
{
returnValue = F("Neumorgen");
break;
}
case 231382:
{
returnValue = F("Neumorschener Str.");
break;
}
case 231383:
{
returnValue = F("Neumurnthal");
break;
}
case 231384:
{
returnValue = F("Neumädewitz");
break;
}
case 231385:
{
returnValue = F("Neumähder");
break;
}
case 231386:
{
returnValue = F("Neumärker Str.");
break;
}
case 231387:
{
returnValue = F("Neumärker Tor");
break;
}
case 231388:
{
returnValue = F("Neumärkerei");
break;
}
case 231389:
{
returnValue = F("Neumärkerplatz");
break;
}
case 231390:
{
returnValue = F("Neumäuerstr.");
break;
}
case 231391:
{
returnValue = F("Neumühl");
break;
}
case 231392:
{
returnValue = F("Neumühle");
break;
}
case 231393:
{
returnValue = F("Neumühlen");
break;
}
case 231394:
{
returnValue = F("Neumühlen Pfad");
break;
}
case 231395:
{
returnValue = F("Neumühlenallee");
break;
}
case 231396:
{
returnValue = F("Neumühlener Str.");
break;
}
case 231397:
{
returnValue = F("Neumühlener Weg");
break;
}
case 231398:
{
returnValue = F("Neumühlenstr.");
break;
}
case 231399:
{
returnValue = F("Neumühlenweg");
break;
}
case 231400:
{
returnValue = F("Neumühler Gartenweg");
break;
}
case 231401:
{
returnValue = F("Neumühler Hauptweg Nord-Süd");
break;
}
case 231402:
{
returnValue = F("Neumühler Str.");
break;
}
case 231403:
{
returnValue = F("Neumühler Weg");
break;
}
case 231404:
{
returnValue = F("Neumühleweg");
break;
}
case 231405:
{
returnValue = F("Neumühlgasse");
break;
}
case 231406:
{
returnValue = F("Neumühlhausen");
break;
}
case 231407:
{
returnValue = F("Neumühlstr.");
break;
}
case 231408:
{
returnValue = F("Neumühlweg");
break;
}
case 231409:
{
returnValue = F("Neumühlwiesen");
break;
}
case 231410:
{
returnValue = F("Neumüllerswaldweg");
break;
}
case 231411:
{
returnValue = F("Neumüllerweg");
break;
}
case 231412:
{
returnValue = F("Neumünsteraner Chaussee");
break;
}
case 231413:
{
returnValue = F("Neumünsteraner Str.");
break;
}
case 231414:
{
returnValue = F("Neumünsterer Str.");
break;
}
case 231415:
{
returnValue = F("Neumünsterstr.");
break;
}
case 231416:
{
returnValue = F("Neun Brunnen");
break;
}
case 231417:
{
returnValue = F("Neun Eichenweg");
break;
}
case 231418:
{
returnValue = F("Neun Häuser");
break;
}
case 231419:
{
returnValue = F("Neun Linden");
break;
}
case 231420:
{
returnValue = F("Neun Morgen");
break;
}
case 231421:
{
returnValue = F("Neun-Morgen");
break;
}
case 231422:
{
returnValue = F("Neun-Morgen-Str.");
break;
}
case 231423:
{
returnValue = F("NeunLindenweg");
break;
}
case 231424:
{
returnValue = F("Neunackerweg");
break;
}
case 231425:
{
returnValue = F("Neunaigener Str.");
break;
}
case 231426:
{
returnValue = F("Neunaigner Str.");
break;
}
case 231427:
{
returnValue = F("Neunbaumweg");
break;
}
case 231428:
{
returnValue = F("Neunbuchenweg");
break;
}
case 231429:
{
returnValue = F("Neunburger Str.");
break;
}
case 231430:
{
returnValue = F("Neundlinger Str.");
break;
}
case 231431:
{
returnValue = F("Neundlinger Weg");
break;
}
case 231432:
{
returnValue = F("Neundorf");
break;
}
case 231433:
{
returnValue = F("Neundorfer Grenzweg");
break;
}
case 231434:
{
returnValue = F("Neundorfer Str.");
break;
}
case 231435:
{
returnValue = F("Neundorfer Weg");
break;
}
case 231436:
{
returnValue = F("Neundorfstr.");
break;
}
case 231437:
{
returnValue = F("Neundörflein");
break;
}
case 231438:
{
returnValue = F("Neunecker Str.");
break;
}
case 231439:
{
returnValue = F("Neuneckstr.");
break;
}
case 231440:
{
returnValue = F("Neunenweg");
break;
}
case 231441:
{
returnValue = F("Neuner Weg");
break;
}
case 231442:
{
returnValue = F("Neuneralmweg");
break;
}
case 231443:
{
returnValue = F("Neunerfeld");
break;
}
case 231444:
{
returnValue = F("Neunerflügelweg");
break;
}
case 231445:
{
returnValue = F("Neunergarten");
break;
}
case 231446:
{
returnValue = F("Neunerplatz");
break;
}
case 231447:
{
returnValue = F("Neunerstr.");
break;
}
case 231448:
{
returnValue = F("Neunerweg");
break;
}
case 231449:
{
returnValue = F("Neungärtenstr.");
break;
}
case 231450:
{
returnValue = F("Neungäßchen");
break;
}
case 231451:
{
returnValue = F("Neunhards");
break;
}
case 231452:
{
returnValue = F("Neunheiliger Weg");
break;
}
case 231453:
{
returnValue = F("Neunheilinger Str.");
break;
}
case 231454:
{
returnValue = F("Neunheimer Str.");
break;
}
case 231455:
{
returnValue = F("Neunhoefferstr.");
break;
}
case 231456:
{
returnValue = F("Neunhofer Hauptstr.");
break;
}
case 231457:
{
returnValue = F("Neunhofer Kirchenweg");
break;
}
case 231458:
{
returnValue = F("Neunhofer Schloßplatz");
break;
}
case 231459:
{
returnValue = F("Neunhofer Schulweg");
break;
}
case 231460:
{
returnValue = F("Neunhofer Str.");
break;
}
case 231461:
{
returnValue = F("Neunhäuser");
break;
}
case 231462:
{
returnValue = F("Neunhäuserweg");
break;
}
case 231463:
{
returnValue = F("Neunimptscher Str.");
break;
}
case 231464:
{
returnValue = F("Neunitzer Waldweg");
break;
}
case 231465:
{
returnValue = F("Neunkirchen");
break;
}
case 231466:
{
returnValue = F("Neunkirchener Garten");
break;
}
case 231467:
{
returnValue = F("Neunkirchener Platz");
break;
}
case 231468:
{
returnValue = F("Neunkirchener Str.");
break;
}
case 231469:
{
returnValue = F("Neunkirchener Weg");
break;
}
case 231470:
{
returnValue = F("Neunkirchenstr.");
break;
}
case 231471:
{
returnValue = F("Neunkirchenweg");
break;
}
case 231472:
{
returnValue = F("Neunkircher Str.");
break;
}
case 231473:
{
returnValue = F("Neunkircher Str. (\"Iweschtgass\")");
break;
}
case 231474:
{
returnValue = F("Neunkircher Weg");
break;
}
case 231475:
{
returnValue = F("Neunkircher Weg 7-14");
break;
}
case 231476:
{
returnValue = F("Neunkircherstr.");
break;
}
case 231477:
{
returnValue = F("Neunkircherweg");
break;
}
case 231478:
{
returnValue = F("Neunkirchner Str.");
break;
}
case 231479:
{
returnValue = F("Neunkirchner Weg");
break;
}
case 231480:
{
returnValue = F("Neunkirchnerplatz");
break;
}
case 231481:
{
returnValue = F("Neunlindenstr.");
break;
}
case 231482:
{
returnValue = F("Neunlindenweg");
break;
}
case 231483:
{
returnValue = F("Neunmorgen");
break;
}
case 231484:
{
returnValue = F("Neunmorgenstr.");
break;
}
case 231485:
{
returnValue = F("Neunmorgenweg");
break;
}
case 231486:
{
returnValue = F("Neunränklesweg");
break;
}
case 231487:
{
returnValue = F("Neunröhrenplatz");
break;
}
case 231488:
{
returnValue = F("Neunspringer Str.");
break;
}
case 231489:
{
returnValue = F("Neunstadter Str.");
break;
}
case 231490:
{
returnValue = F("Neunstetter Str.");
break;
}
case 231491:
{
returnValue = F("Neunstetter Weg");
break;
}
case 231492:
{
returnValue = F("Neunstücken");
break;
}
case 231493:
{
returnValue = F("Neunthausen");
break;
}
case 231494:
{
returnValue = F("Neuntöterweg");
break;
}
case 231495:
{
returnValue = F("Neunuifraer Str.");
break;
}
case 231496:
{
returnValue = F("Neunundneunzig Gärten");
break;
}
case 231497:
{
returnValue = F("Neunußberg");
break;
}
case 231498:
{
returnValue = F("Neunzehnhainer Str.");
break;
}
case 231499:
{
returnValue = F("Neunzehnhainer Weg");
break;
}
case 231500:
{
returnValue = F("Neunzfeldstr.");
break;
}
case 231501:
{
returnValue = F("Neunzig-Morgen-Weg");
break;
}
case 231502:
{
returnValue = F("Neunziger Winkel");
break;
}
case 231503:
{
returnValue = F("Neunzigstr.");
break;
}
case 231504:
{
returnValue = F("Neunäcker");
break;
}
case 231505:
{
returnValue = F("Neunäckervörde");
break;
}
case 231506:
{
returnValue = F("Neuoffsteiner Str.");
break;
}
case 231507:
{
returnValue = F("Neuortstr.");
break;
}
case 231508:
{
returnValue = F("Neuostheimer Str.");
break;
}
case 231509:
{
returnValue = F("Neuostra");
break;
}
case 231510:
{
returnValue = F("Neupertstr.");
break;
}
case 231511:
{
returnValue = F("Neuperverstr.");
break;
}
case 231512:
{
returnValue = F("Neupfarrplatz");
break;
}
case 231513:
{
returnValue = F("Neupforte");
break;
}
case 231514:
{
returnValue = F("Neupforter Str.");
break;
}
case 231515:
{
returnValue = F("Neupfälzer Str.");
break;
}
case 231516:
{
returnValue = F("Neupfälzer Weg");
break;
}
case 231517:
{
returnValue = F("Neupförtner Wall");
break;
}
case 231518:
{
returnValue = F("Neuplachter Weg");
break;
}
case 231519:
{
returnValue = F("Neuplanitz");
break;
}
case 231520:
{
returnValue = F("Neuplanitzer Str.");
break;
}
case 231521:
{
returnValue = F("Neuplanitzer Weg");
break;
}
case 231522:
{
returnValue = F("Neuplatz");
break;
}
case 231523:
{
returnValue = F("Neuplatzer Weg");
break;
}
case 231524:
{
returnValue = F("Neuplatzgasse");
break;
}
case 231525:
{
returnValue = F("Neupoderschauer Str.");
break;
}
case 231526:
{
returnValue = F("Neuporschdorfer Str.");
break;
}
case 231527:
{
returnValue = F("Neuposaer Str.");
break;
}
case 231528:
{
returnValue = F("Neupotzer Str.");
break;
}
case 231529:
{
returnValue = F("Neupresterweg");
break;
}
case 231530:
{
returnValue = F("Neuprüll");
break;
}
case 231531:
{
returnValue = F("Neuragoczystr.");
break;
}
case 231532:
{
returnValue = F("Neurandsberg");
break;
}
case 231533:
{
returnValue = F("Neurandsberger Str.");
break;
}
case 231534:
{
returnValue = F("Neuranft");
break;
}
case 231535:
{
returnValue = F("Neurather Str.");
break;
}
case 231536:
{
returnValue = F("Neurathgasse");
break;
}
case 231537:
{
returnValue = F("Neuratjensdorfer Weg");
break;
}
case 231538:
{
returnValue = F("Neureben");
break;
}
case 231539:
{
returnValue = F("Neuredder Weg");
break;
}
case 231540:
{
returnValue = F("Neureithstr.");
break;
}
case 231541:
{
returnValue = F("Neuremscheid");
break;
}
case 231542:
{
returnValue = F("Neurethwischer Weg");
break;
}
case 231543:
{
returnValue = F("Neureut");
break;
}
case 231544:
{
returnValue = F("Neureut Kirchfeld");
break;
}
case 231545:
{
returnValue = F("Neureut-Heide");
break;
}
case 231546:
{
returnValue = F("Neureuter Hauptstr.");
break;
}
case 231547:
{
returnValue = F("Neureuter Mühle");
break;
}
case 231548:
{
returnValue = F("Neureuter Querallee");
break;
}
case 231549:
{
returnValue = F("Neureuter Str.");
break;
}
case 231550:
{
returnValue = F("Neureuter Weg");
break;
}
case 231551:
{
returnValue = F("Neureuth");
break;
}
case 231552:
{
returnValue = F("Neureuther Str.");
break;
}
case 231553:
{
returnValue = F("Neureuthstr.");
break;
}
case 231554:
{
returnValue = F("Neureutweg");
break;
}
case 231555:
{
returnValue = F("Neurheder Str.");
break;
}
case 231556:
{
returnValue = F("Neuricht");
break;
}
case 231557:
{
returnValue = F("Neurichter Str.");
break;
}
case 231558:
{
returnValue = F("Neuried");
break;
}
case 231559:
{
returnValue = F("Neurieder Gangsteig");
break;
}
case 231560:
{
returnValue = F("Neurieder Geräumt");
break;
}
case 231561:
{
returnValue = F("Neurieder Str.");
break;
}
case 231562:
{
returnValue = F("Neurieder Straßl");
break;
}
case 231563:
{
returnValue = F("Neurieder Straßl/Trimm-dich-Pfad");
break;
}
case 231564:
{
returnValue = F("Neurieder Weg");
break;
}
case 231565:
{
returnValue = F("Neuriedweg");
break;
}
case 231566:
{
returnValue = F("Neuriesstr.");
break;
}
case 231567:
{
returnValue = F("Neuringe");
break;
}
case 231568:
{
returnValue = F("Neuritti");
break;
}
case 231569:
{
returnValue = F("Neurittsteiger Weg");
break;
}
case 231570:
{
returnValue = F("Neurißweg");
break;
}
case 231571:
{
returnValue = F("Neurobschützer Str.");
break;
}
case 231572:
{
returnValue = F("Neurobschützer Weg");
break;
}
case 231573:
{
returnValue = F("Neuroda - Am Mühlberg");
break;
}
case 231574:
{
returnValue = F("Neuroda - Am Schieferhof");
break;
}
case 231575:
{
returnValue = F("Neuroda - Bücheloher Str.");
break;
}
case 231576:
{
returnValue = F("Neuroda - Ilmenauer Str.");
break;
}
case 231577:
{
returnValue = F("Neuroda - Traßdorfer Str.");
break;
}
case 231578:
{
returnValue = F("Neuroder Platz");
break;
}
case 231579:
{
returnValue = F("Neuroder Str.");
break;
}
case 231580:
{
returnValue = F("Neuroder Weg");
break;
}
case 231581:
{
returnValue = F("Neurodestr.");
break;
}
case 231582:
{
returnValue = F("Neurodstr.");
break;
}
case 231583:
{
returnValue = F("Neurohrbrücke");
break;
}
case 231584:
{
returnValue = F("Neurohrstr.");
break;
}
case 231585:
{
returnValue = F("Neurom");
break;
}
case 231586:
{
returnValue = F("Neuroofen");
break;
}
case 231587:
{
returnValue = F("Neuroter Str.");
break;
}
case 231588:
{
returnValue = F("Neuroth");
break;
}
case 231589:
{
returnValue = F("Neurother Str.");
break;
}
case 231590:
{
returnValue = F("Neurothweg");
break;
}
case 231591:
{
returnValue = F("Neurott");
break;
}
case 231592:
{
returnValue = F("Neurott am Sohlberg");
break;
}
case 231593:
{
returnValue = F("Neurottstr.");
break;
}
case 231594:
{
returnValue = F("Neurottweg");
break;
}
case 231595:
{
returnValue = F("Neurotweg");
break;
}
case 231596:
{
returnValue = F("Neurppiner Str.");
break;
}
case 231597:
{
returnValue = F("Neurufenried");
break;
}
case 231598:
{
returnValue = F("Neuruppiner Str.");
break;
}
case 231599:
{
returnValue = F("Neuruppinstr.");
break;
}
case 231600:
{
returnValue = F("Neuröder Weg");
break;
}
case 231601:
{
returnValue = F("Neurödstr.");
break;
}
case 231602:
{
returnValue = F("Neurüdnitz");
break;
}
case 231603:
{
returnValue = F("Neurüdnitzer Ring");
break;
}
case 231604:
{
returnValue = F("Neusaalborn");
break;
}
case 231605:
{
returnValue = F("Neusalzaer Str.");
break;
}
case 231606:
{
returnValue = F("Neusalzer Str.");
break;
}
case 231607:
{
returnValue = F("Neusalzer Weg");
break;
}
case 231608:
{
returnValue = F("Neusalzstr.");
break;
}
case 231609:
{
returnValue = F("Neusasser Str.");
break;
}
case 231610:
{
returnValue = F("Neusath");
break;
}
case 231611:
{
returnValue = F("Neusather Str.");
break;
}
case 231612:
{
returnValue = F("Neusatz");
break;
}
case 231613:
{
returnValue = F("Neusatzer Str.");
break;
}
case 231614:
{
returnValue = F("Neusatzer Sträßle");
break;
}
case 231615:
{
returnValue = F("Neusatzer Weg");
break;
}
case 231616:
{
returnValue = F("Neusatzstr.");
break;
}
case 231617:
{
returnValue = F("Neusatzweg");
break;
}
case 231618:
{
returnValue = F("Neusaßer Pfad");
break;
}
case 231619:
{
returnValue = F("Neuschachtweg");
break;
}
case 231620:
{
returnValue = F("Neuschanzer Str.");
break;
}
case 231621:
{
returnValue = F("Neuscharfenberg");
break;
}
case 231622:
{
returnValue = F("Neuscharreler Allee");
break;
}
case 231623:
{
returnValue = F("Neuscharreler Str.");
break;
}
case 231624:
{
returnValue = F("Neuscharreler Weg");
break;
}
case 231625:
{
returnValue = F("Neusche Promenade");
break;
}
case 231626:
{
returnValue = F("Neuscheffels Felder");
break;
}
case 231627:
{
returnValue = F("Neuschelerstr.");
break;
}
case 231628:
{
returnValue = F("Neuscherbitzer Gasse");
break;
}
case 231629:
{
returnValue = F("Neuschlade");
break;
}
case 231630:
{
returnValue = F("Neuschlagerweg");
break;
}
case 231631:
{
returnValue = F("Neuschlagweg");
break;
}
case 231632:
{
returnValue = F("Neuschloßstr.");
break;
}
case 231633:
{
returnValue = F("Neuschloßweg");
break;
}
case 231634:
{
returnValue = F("Neuschmied");
break;
}
case 231635:
{
returnValue = F("Neuschmöllner Str.");
break;
}
case 231636:
{
returnValue = F("Neuschoren");
break;
}
case 231637:
{
returnValue = F("Neuschrenkenthal");
break;
}
case 231638:
{
returnValue = F("Neuschwangerstr.");
break;
}
case 231639:
{
returnValue = F("Neuschwansteinstr.");
break;
}
case 231640:
{
returnValue = F("Neuschweineweg");
break;
}
case 231641:
{
returnValue = F("Neuschweiniweg");
break;
}
case 231642:
{
returnValue = F("Neuschwetzinger Str.");
break;
}
case 231643:
{
returnValue = F("Neuschäferhöhe");
break;
}
case 231644:
{
returnValue = F("Neuschönauer Str.");
break;
}
case 231645:
{
returnValue = F("Neuschönberg");
break;
}
case 231646:
{
returnValue = F("Neuschönberger Str.");
break;
}
case 231647:
{
returnValue = F("Neuschönborn");
break;
}
case 231648:
{
returnValue = F("Neuschönborner Weg");
break;
}
case 231649:
{
returnValue = F("Neuschönburger Str.");
break;
}
case 231650:
{
returnValue = F("Neuschönburger Weg");
break;
}
case 231651:
{
returnValue = F("Neuschönfeld");
break;
}
case 231652:
{
returnValue = F("Neuschönfelder Weg");
break;
}
case 231653:
{
returnValue = F("Neuseegalendorf");
break;
}
case 231654:
{
returnValue = F("Neuseeleinsweg");
break;
}
case 231655:
{
returnValue = F("Neuseenbrücke");
break;
}
case 231656:
{
returnValue = F("Neuseestr.");
break;
}
case 231657:
{
returnValue = F("Neuseifersdorf");
break;
}
case 231658:
{
returnValue = F("Neuselingsbach");
break;
}
case 231659:
{
returnValue = F("Neuselsbrunn");
break;
}
case 231660:
{
returnValue = F("Neusener Str.");
break;
}
case 231661:
{
returnValue = F("Neuses");
break;
}
case 231662:
{
returnValue = F("Neuseser Mühle");
break;
}
case 231663:
{
returnValue = F("Neuseser Str.");
break;
}
case 231664:
{
returnValue = F("Neuseser Weg");
break;
}
case 231665:
{
returnValue = F("Neuseser-Tal-Str.");
break;
}
case 231666:
{
returnValue = F("Neusetz");
break;
}
case 231667:
{
returnValue = F("Neusetze");
break;
}
case 231668:
{
returnValue = F("Neusetzer Str.");
break;
}
case 231669:
{
returnValue = F("Neusetzeweg");
break;
}
case 231670:
{
returnValue = F("Neusiedenweg");
break;
}
case 231671:
{
returnValue = F("Neusiedler Str.");
break;
}
case 231672:
{
returnValue = F("Neusiedler Weg");
break;
}
case 231673:
{
returnValue = F("Neusiedlerhof");
break;
}
case 231674:
{
returnValue = F("Neusiedlerring");
break;
}
case 231675:
{
returnValue = F("Neusiedlerstr.");
break;
}
case 231676:
{
returnValue = F("Neusiedlerweg");
break;
}
case 231677:
{
returnValue = F("Neusiedlung");
break;
}
case 231678:
{
returnValue = F("Neusiedlungsstr.");
break;
}
case 231679:
{
returnValue = F("Neusitzer Str.");
break;
}
case 231680:
{
returnValue = F("Neusiß");
break;
}
case 231681:
{
returnValue = F("Neusißstr.");
break;
}
case 231682:
{
returnValue = F("Neuslesstr.");
break;
}
case 231683:
{
returnValue = F("Neuslinger Str.");
break;
}
case 231684:
{
returnValue = F("Neuslinger Weg");
break;
}
case 231685:
{
returnValue = F("Neusorg");
break;
}
case 231686:
{
returnValue = F("Neusorge");
break;
}
case 231687:
{
returnValue = F("Neusorgefeld");
break;
}
case 231688:
{
returnValue = F("Neusorger Landstr.");
break;
}
case 231689:
{
returnValue = F("Neusorger Str.");
break;
}
case 231690:
{
returnValue = F("Neusorger Weg");
break;
}
case 231691:
{
returnValue = F("Neusorgstr.");
break;
}
case 231692:
{
returnValue = F("Neusornziger Str.");
break;
}
case 231693:
{
returnValue = F("Neusreuther Str.");
break;
}
case 231694:
{
returnValue = F("Neusser Feldweg");
break;
}
case 231695:
{
returnValue = F("Neusser Gasse");
break;
}
case 231696:
{
returnValue = F("Neusser Landstr.");
break;
}
case 231697:
{
returnValue = F("Neusser Str.");
break;
}
case 231698:
{
returnValue = F("Neusser Weg");
break;
}
case 231699:
{
returnValue = F("Neusser Weyhe");
break;
}
case 231700:
{
returnValue = F("Neustadl");
break;
}
case 231701:
{
returnValue = F("Neustadlweg");
break;
}
case 231702:
{
returnValue = F("Neustadt");
break;
}
case 231703:
{
returnValue = F("Neustadt \"De Slaat");
break;
}
case 231704:
{
returnValue = F("Neustadt Bahnhof");
break;
}
case 231705:
{
returnValue = F("Neustadtallee");
break;
}
case 231706:
{
returnValue = F("Neustadter Hauptstr.");
break;
}
case 231707:
{
returnValue = F("Neustadter Ring");
break;
}
case 231708:
{
returnValue = F("Neustadter Str.");
break;
}
case 231709:
{
returnValue = F("Neustadtgasse");
break;
}
case 231710:
{
returnValue = F("Neustadtmühlendamm");
break;
}
case 231711:
{
returnValue = F("Neustadtpark");
break;
}
case 231712:
{
returnValue = F("Neustadtplatz");
break;
}
case 231713:
{
returnValue = F("Neustadtring");
break;
}
case 231714:
{
returnValue = F("Neustadts Gärten");
break;
}
case 231715:
{
returnValue = F("Neustadtstr.");
break;
}
case 231716:
{
returnValue = F("Neustadtsweg");
break;
}
case 231717:
{
returnValue = F("Neustadtweg");
break;
}
case 231718:
{
returnValue = F("Neustaedter Berg");
break;
}
case 231719:
{
returnValue = F("Neustaller Weg");
break;
}
case 231720:
{
returnValue = F("Neustatt");
break;
}
case 231721:
{
returnValue = F("Neustaßfurter Str.");
break;
}
case 231722:
{
returnValue = F("Neustedt");
break;
}
case 231723:
{
returnValue = F("Neusteinreuth");
break;
}
case 231724:
{
returnValue = F("Neustetter Str.");
break;
}
case 231725:
{
returnValue = F("Neustettiner Str.");
break;
}
case 231726:
{
returnValue = F("Neustettiner Weg");
break;
}
case 231727:
{
returnValue = F("Neusteußlingen");
break;
}
case 231728:
{
returnValue = F("Neustift");
break;
}
case 231729:
{
returnValue = F("Neustifter Str.");
break;
}
case 231730:
{
returnValue = F("Neustockach");
break;
}
case 231731:
{
returnValue = F("Neustr.");
break;
}
case 231732:
{
returnValue = F("Neustrassweg");
break;
}
case 231733:
{
returnValue = F("Neustrelitzer Chaussee");
break;
}
case 231734:
{
returnValue = F("Neustrelitzer Str.");
break;
}
case 231735:
{
returnValue = F("Neustrelitzer Weg");
break;
}
case 231736:
{
returnValue = F("Neusträßel");
break;
}
case 231737:
{
returnValue = F("Neusträßer Ring");
break;
}
case 231738:
{
returnValue = F("Neusträßer Weg");
break;
}
case 231739:
{
returnValue = F("Neustädle");
break;
}
case 231740:
{
returnValue = F("Neustädtel");
break;
}
case 231741:
{
returnValue = F("Neustädter Anbau");
break;
}
case 231742:
{
returnValue = F("Neustädter Bierweg");
break;
}
case 231743:
{
returnValue = F("Neustädter Breede");
break;
}
case 231744:
{
returnValue = F("Neustädter Chaussee");
break;
}
case 231745:
{
returnValue = F("Neustädter Damm");
break;
}
case 231746:
{
returnValue = F("Neustädter Feldmark");
break;
}
case 231747:
{
returnValue = F("Neustädter Graben");
break;
}
case 231748:
{
returnValue = F("Neustädter Kirchgasse");
break;
}
case 231749:
{
returnValue = F("Neustädter Kirchhof");
break;
}
case 231750:
{
returnValue = F("Neustädter Kirchplan");
break;
}
case 231751:
{
returnValue = F("Neustädter Kirchplatz");
break;
}
case 231752:
{
returnValue = F("Neustädter Landstr.");
break;
}
case 231753:
{
returnValue = F("Neustädter Markt");
break;
}
case 231754:
{
returnValue = F("Neustädter Passage");
break;
}
case 231755:
{
returnValue = F("Neustädter Pfad");
break;
}
case 231756:
{
returnValue = F("Neustädter Platz");
break;
}
case 231757:
{
returnValue = F("Neustädter Ring");
break;
}
case 231758:
{
returnValue = F("Neustädter Stobenstr.");
break;
}
case 231759:
{
returnValue = F("Neustädter Str.");
break;
}
case 231760:
{
returnValue = F("Neustädter Tor");
break;
}
case 231761:
{
returnValue = F("Neustädter Wall");
break;
}
case 231762:
{
returnValue = F("Neustädter Weg");
break;
}
case 231763:
{
returnValue = F("Neustädtges");
break;
}
case 231764:
{
returnValue = F("Neustädtische Fischerstr.");
break;
}
case 231765:
{
returnValue = F("Neustädtische Heidestr.");
break;
}
case 231766:
{
returnValue = F("Neustädtische Wassertorstr.");
break;
}
case 231767:
{
returnValue = F("Neustädtischer Markt");
break;
}
case 231768:
{
returnValue = F("Neustädtle");
break;
}
case 231769:
{
returnValue = F("Neustädtlein");
break;
}
case 231770:
{
returnValue = F("Neustädtler Stangenberg");
break;
}
case 231771:
{
returnValue = F("Neustädtler Str.");
break;
}
case 231772:
{
returnValue = F("Neustädtler Weg");
break;
}
case 231773:
{
returnValue = F("Neustädtleser Str.");
break;
}
case 231774:
{
returnValue = F("Neustädtleser Weg");
break;
}
case 231775:
{
returnValue = F("Neustätter Weg");
break;
}
case 231776:
{
returnValue = F("Neustätterstr.");
break;
}
case 231777:
{
returnValue = F("Neustücksweg");
break;
}
case 231778:
{
returnValue = F("Neustückweg");
break;
}
case 231779:
{
returnValue = F("Neusustrumer Str.");
break;
}
case 231780:
{
returnValue = F("Neusägeweg");
break;
}
case 231781:
{
returnValue = F("Neusärichener Str.");
break;
}
case 231782:
{
returnValue = F("Neusässer Str.");
break;
}
case 231783:
{
returnValue = F("Neusätz");
break;
}
case 231784:
{
returnValue = F("Neusätze");
break;
}
case 231785:
{
returnValue = F("Neusätzstr.");
break;
}
case 231786:
{
returnValue = F("Neusäßer Str.");
break;
}
case 231787:
{
returnValue = F("Neusöckinger Tunnel");
break;
}
case 231788:
{
returnValue = F("Neusüdender Str.");
break;
}
case 231789:
{
returnValue = F("Neusüdender Weg");
break;
}
case 231790:
{
returnValue = F("Neut");
break;
}
case 231791:
{
returnValue = F("Neutalhang");
break;
}
case 231792:
{
returnValue = F("Neutalstr.");
break;
}
case 231793:
{
returnValue = F("Neutalweg");
break;
}
case 231794:
{
returnValue = F("Neutaubenheimer Str.");
break;
}
case 231795:
{
returnValue = F("Neutauperlitzer Str.");
break;
}
case 231796:
{
returnValue = F("Neuteich");
break;
}
case 231797:
{
returnValue = F("Neuteicher Str.");
break;
}
case 231798:
{
returnValue = F("Neuteicher Weg");
break;
}
case 231799:
{
returnValue = F("Neuteichnitzer Str.");
break;
}
case 231800:
{
returnValue = F("Neuteichstr.");
break;
}
case 231801:
{
returnValue = F("Neuteichweg");
break;
}
case 231802:
{
returnValue = F("Neuteil");
break;
}
case 231803:
{
returnValue = F("Neuteilstr.");
break;
}
case 231804:
{
returnValue = F("Neuteilweg");
break;
}
case 231805:
{
returnValue = F("Neutharder Str.");
break;
}
case 231806:
{
returnValue = F("Neuthardweg");
break;
}
case 231807:
{
returnValue = F("Neuthymen");
break;
}
case 231808:
{
returnValue = F("Neutitscheiner Str.");
break;
}
case 231809:
{
returnValue = F("Neutitscheiner Weg");
break;
}
case 231810:
{
returnValue = F("Neutjenthal");
break;
}
case 231811:
{
returnValue = F("Neutor");
break;
}
case 231812:
{
returnValue = F("Neutorbrücke");
break;
}
case 231813:
{
returnValue = F("Neutorgasse");
break;
}
case 231814:
{
returnValue = F("Neutorgraben");
break;
}
case 231815:
{
returnValue = F("Neutormauer");
break;
}
case 231816:
{
returnValue = F("Neutornower Str.");
break;
}
case 231817:
{
returnValue = F("Neutorpfad");
break;
}
case 231818:
{
returnValue = F("Neutorplatz");
break;
}
case 231819:
{
returnValue = F("Neutorsgang");
break;
}
case 231820:
{
returnValue = F("Neutorstr.");
break;
}
case 231821:
{
returnValue = F("Neutorwall");
break;
}
case 231822:
{
returnValue = F("Neutorwiese");
break;
}
case 231823:
{
returnValue = F("Neutrale Str.");
break;
}
case 231824:
{
returnValue = F("Neutraler Weg");
break;
}
case 231825:
{
returnValue = F("Neutraleweg");
break;
}
case 231826:
{
returnValue = F("Neutras");
break;
}
case 231827:
{
returnValue = F("Neutraublinger Str.");
break;
}
case 231828:
{
returnValue = F("Neutrauchburger Str.");
break;
}
case 231829:
{
returnValue = F("Neutrebbiner Str.");
break;
}
case 231830:
{
returnValue = F("Neutsch");
break;
}
case 231831:
{
returnValue = F("Neutscher Pfad");
break;
}
case 231832:
{
returnValue = F("Neutscher Str.");
break;
}
case 231833:
{
returnValue = F("Neutscher Weg");
break;
}
case 231834:
{
returnValue = F("Neuturmstr.");
break;
}
case 231835:
{
returnValue = F("Neutzenbrunn");
break;
}
case 231836:
{
returnValue = F("Neutzer Str.");
break;
}
case 231837:
{
returnValue = F("Neutzkam");
break;
}
case 231838:
{
returnValue = F("Neuversener Str.");
break;
}
case 231839:
{
returnValue = F("Neuviller Str.");
break;
}
case 231840:
{
returnValue = F("Neuvitzenburg");
break;
}
case 231841:
{
returnValue = F("Neuvorwerk");
break;
}
case 231842:
{
returnValue = F("Neuvreesner Str.");
break;
}
case 231843:
{
returnValue = F("Neuwahrstorfer Str.");
break;
}
case 231844:
{
returnValue = F("Neuwaid");
break;
}
case 231845:
{
returnValue = F("Neuwalde");
break;
}
case 231846:
{
returnValue = F("Neuwalder Str.");
break;
}
case 231847:
{
returnValue = F("Neuwaldgrenzweg");
break;
}
case 231848:
{
returnValue = F("Neuwaldstr.");
break;
}
case 231849:
{
returnValue = F("Neuwaldweg");
break;
}
case 231850:
{
returnValue = F("Neuwallmodener Str.");
break;
}
case 231851:
{
returnValue = F("Neuwallwitz");
break;
}
case 231852:
{
returnValue = F("Neuwaltersdorfer Str.");
break;
}
case 231853:
{
returnValue = F("Neuwangerooger Str.");
break;
}
case 231854:
{
returnValue = F("Neuwangweg");
break;
}
case 231855:
{
returnValue = F("Neuwarendorf");
break;
}
case 231856:
{
returnValue = F("Neuwarendorfstr.");
break;
}
case 231857:
{
returnValue = F("Neuwarfer Str.");
break;
}
case 231858:
{
returnValue = F("Neuwarfer Weg");
break;
}
case 231859:
{
returnValue = F("Neuwarmbüchener Str.");
break;
}
case 231860:
{
returnValue = F("Neuwart");
break;
}
case 231861:
{
returnValue = F("Neuwedeller Str.");
break;
}
case 231862:
{
returnValue = F("Neuweg");
break;
}
case 231863:
{
returnValue = F("Neuwegerslebener Str.");
break;
}
case 231864:
{
returnValue = F("Neuwegersleber Str.");
break;
}
case 231865:
{
returnValue = F("Neuwegflügel");
break;
}
case 231866:
{
returnValue = F("Neuwegschneise");
break;
}
case 231867:
{
returnValue = F("Neuwegster Lohne");
break;
}
case 231868:
{
returnValue = F("Neuwegstr.");
break;
}
case 231869:
{
returnValue = F("Neuweide");
break;
}
case 231870:
{
returnValue = F("Neuweidstr.");
break;
}
case 231871:
{
returnValue = F("Neuweiherstr.");
break;
}
case 231872:
{
returnValue = F("Neuweiler");
break;
}
case 231873:
{
returnValue = F("Neuweiler Str.");
break;
}
case 231874:
{
returnValue = F("Neuweiler Weg");
break;
}
case 231875:
{
returnValue = F("Neuweilerhof");
break;
}
case 231876:
{
returnValue = F("Neuweilerstr.");
break;
}
case 231877:
{
returnValue = F("Neuweilerweg");
break;
}
case 231878:
{
returnValue = F("Neuweißenborner Str.");
break;
}
case 231879:
{
returnValue = F("Neuwelt");
break;
}
case 231880:
{
returnValue = F("Neuweltweg");
break;
}
case 231881:
{
returnValue = F("Neuwengert");
break;
}
case 231882:
{
returnValue = F("Neuwerk");
break;
}
case 231883:
{
returnValue = F("Neuwerk Ost");
break;
}
case 231884:
{
returnValue = F("Neuwerker Gärten");
break;
}
case 231885:
{
returnValue = F("Neuwerker Str.");
break;
}
case 231886:
{
returnValue = F("Neuwerker Tor");
break;
}
case 231887:
{
returnValue = F("Neuwerker Weg");
break;
}
case 231888:
{
returnValue = F("Neuwerkgarten");
break;
}
case 231889:
{
returnValue = F("Neuwerkhof");
break;
}
case 231890:
{
returnValue = F("Neuwerkstr.");
break;
}
case 231891:
{
returnValue = F("Neuwerkweg");
break;
}
case 231892:
{
returnValue = F("Neuwernsdorf");
break;
}
case 231893:
{
returnValue = F("Neuwernsdorfer Weg");
break;
}
case 231894:
{
returnValue = F("Neuwernstedt");
break;
}
case 231895:
{
returnValue = F("Neuweselstr.");
break;
}
case 231896:
{
returnValue = F("Neuwesteeler Str.");
break;
}
case 231897:
{
returnValue = F("Neuweststr.");
break;
}
case 231898:
{
returnValue = F("Neuwieder Str.");
break;
}
case 231899:
{
returnValue = F("Neuwieder Weg");
break;
}
case 231900:
{
returnValue = F("Neuwiehler Str.");
break;
}
case 231901:
{
returnValue = F("Neuwies");
break;
}
case 231902:
{
returnValue = F("Neuwiesallee");
break;
}
case 231903:
{
returnValue = F("Neuwiese");
break;
}
case 231904:
{
returnValue = F("Neuwiesen");
break;
}
case 231905:
{
returnValue = F("Neuwiesen Schneise");
break;
}
case 231906:
{
returnValue = F("Neuwiesenfeld");
break;
}
case 231907:
{
returnValue = F("Neuwiesengasse");
break;
}
case 231908:
{
returnValue = F("Neuwiesenhof");
break;
}
case 231909:
{
returnValue = F("Neuwiesenlochweg");
break;
}
case 231910:
{
returnValue = F("Neuwiesenrebenstr.");
break;
}
case 231911:
{
returnValue = F("Neuwiesenschneise");
break;
}
case 231912:
{
returnValue = F("Neuwiesenstr.");
break;
}
case 231913:
{
returnValue = F("Neuwiesenweg");
break;
}
case 231914:
{
returnValue = F("Neuwiesenäcker");
break;
}
case 231915:
{
returnValue = F("Neuwiesenäckerweg");
break;
}
case 231916:
{
returnValue = F("Neuwieser Str.");
break;
}
case 231917:
{
returnValue = F("Neuwieser Weg");
break;
}
case 231918:
{
returnValue = F("Neuwieserweg");
break;
}
case 231919:
{
returnValue = F("Neuwiesgasse");
break;
}
case 231920:
{
returnValue = F("Neuwiesnweg");
break;
}
case 231921:
{
returnValue = F("Neuwiesstr.");
break;
}
case 231922:
{
returnValue = F("Neuwiesweg");
break;
}
case 231923:
{
returnValue = F("Neuwietzer Weg");
break;
}
case 231924:
{
returnValue = F("Neuwildberg");
break;
}
case 231925:
{
returnValue = F("Neuwilkauer Str.");
break;
}
case 231926:
{
returnValue = F("Neuwiller Str.");
break;
}
case 231927:
{
returnValue = F("Neuwindeckstr.");
break;
}
case 231928:
{
returnValue = F("Neuwingert");
break;
}
case 231929:
{
returnValue = F("Neuwingertweg");
break;
}
case 231930:
{
returnValue = F("Neuwinsener Str.");
break;
}
case 231931:
{
returnValue = F("Neuwirtbrücke");
break;
}
case 231932:
{
returnValue = F("Neuwirthweg");
break;
}
case 231933:
{
returnValue = F("Neuwirtshaus");
break;
}
case 231934:
{
returnValue = F("Neuwirtshauser Str.");
break;
}
case 231935:
{
returnValue = F("Neuwirtshauser Weg");
break;
}
case 231936:
{
returnValue = F("Neuwirtshausstr.");
break;
}
case 231937:
{
returnValue = F("Neuwirtshäuser Str.");
break;
}
case 231938:
{
returnValue = F("Neuwirtweg");
break;
}
case 231939:
{
returnValue = F("Neuwisch");
break;
}
case 231940:
{
returnValue = F("Neuwoltersdorfer Weg");
break;
}
case 231941:
{
returnValue = F("Neuwoogsdamm");
break;
}
case 231942:
{
returnValue = F("Neuwoogstr.");
break;
}
case 231943:
{
returnValue = F("Neuwotzmannsreut");
break;
}
case 231944:
{
returnValue = F("Neuwäldleweg");
break;
}
case 231945:
{
returnValue = F("Neuwühn");
break;
}
case 231946:
{
returnValue = F("Neuwürschnitzer Str.");
break;
}
case 231947:
{
returnValue = F("Neuzaschendorf");
break;
}
case 231948:
{
returnValue = F("Neuzaunweg");
break;
}
case 231949:
{
returnValue = F("Neuzebachweg");
break;
}
case 231950:
{
returnValue = F("Neuzell");
break;
}
case 231951:
{
returnValue = F("Neuzeller Landweg");
break;
}
case 231952:
{
returnValue = F("Neuzeller Str.");
break;
}
case 231953:
{
returnValue = F("Neuzeller Weg");
break;
}
case 231954:
{
returnValue = F("Neuzenlache");
break;
}
case 231955:
{
returnValue = F("Neuzeschdorf");
break;
}
case 231956:
{
returnValue = F("Neuzeschdorfer Weg");
break;
}
case 231957:
{
returnValue = F("Neußen");
break;
}
case 231958:
{
returnValue = F("Neußener Str.");
break;
}
case 231959:
{
returnValue = F("Neußener Weg");
break;
}
case 231960:
{
returnValue = F("Neußer Str.");
break;
}
case 231961:
{
returnValue = F("Neußer Weg");
break;
}
case 231962:
{
returnValue = F("Neuäcker");
break;
}
case 231963:
{
returnValue = F("Neuäckerstr.");
break;
}
case 231964:
{
returnValue = F("Neuäckerweg");
break;
}
case 231965:
{
returnValue = F("Neuängerstr.");
break;
}
case 231966:
{
returnValue = F("Neuärgerniß");
break;
}
case 231967:
{
returnValue = F("Neuölling");
break;
}
case 231968:
{
returnValue = F("Neuöttinger Str.");
break;
}
case 231969:
{
returnValue = F("Nevadastr.");
break;
}
case 231970:
{
returnValue = F("Nevelkamp");
break;
}
case 231971:
{
returnValue = F("Nevelstr.");
break;
}
case 231972:
{
returnValue = F("Nevenweg");
break;
}
case 231973:
{
returnValue = F("Neverdorf");
break;
}
case 231974:
{
returnValue = F("Neveriner Str.");
break;
}
case 231975:
{
returnValue = F("Nevern");
break;
}
case 231976:
{
returnValue = F("Neversdorfer Str.");
break;
}
case 231977:
{
returnValue = F("Neversfelder Str.");
break;
}
case 231978:
{
returnValue = F("Neversstr.");
break;
}
case 231979:
{
returnValue = F("Neverstaven");
break;
}
case 231980:
{
returnValue = F("Neverstorfer Str.");
break;
}
case 231981:
{
returnValue = F("Neviandtstr.");
break;
}
case 231982:
{
returnValue = F("Neviandttreppe");
break;
}
case 231983:
{
returnValue = F("Nevigeser Str.");
break;
}
case 231984:
{
returnValue = F("Nevigesstr.");
break;
}
case 231985:
{
returnValue = F("Nevoigtstr.");
break;
}
case 231986:
{
returnValue = F("New Hampshire Avenue");
break;
}
case 231987:
{
returnValue = F("New York Str.");
break;
}
case 231988:
{
returnValue = F("New York Street");
break;
}
case 231989:
{
returnValue = F("New-Britain-Park");
break;
}
case 231990:
{
returnValue = F("New-Jersey-Str.");
break;
}
case 231991:
{
returnValue = F("New-Mills-Str.");
break;
}
case 231992:
{
returnValue = F("New-York-Ring");
break;
}
case 231993:
{
returnValue = F("New-York-Str.");
break;
}
case 231994:
{
returnValue = F("Newal Close");
break;
}
case 231995:
{
returnValue = F("Newbridge Promenade");
break;
}
case 231996:
{
returnValue = F("Newburystr.");
break;
}
case 231997:
{
returnValue = F("Neweler Str.");
break;
}
case 231998:
{
returnValue = F("Newerweg");
break;
}
case 231999:
{
returnValue = F("Newhamstr.");
break;
}
case 232000:
{
returnValue = F("Newporter Str.");
break;
}
case 232001:
{
returnValue = F("Newton-Abbot-Str.");
break;
}
case 232002:
{
returnValue = F("Newtonhof");
break;
}
case 232003:
{
returnValue = F("Newtonstr.");
break;
}
case 232004:
{
returnValue = F("Newtonweg");
break;
}
case 232005:
{
returnValue = F("Nexdorfer Dorfstr.");
break;
}
case 232006:
{
returnValue = F("Nexdorfer Hauptstr.");
break;
}
case 232007:
{
returnValue = F("Nexdorfer Str.");
break;
}
case 232008:
{
returnValue = F("Nexöer Str.");
break;
}
case 232009:
{
returnValue = F("Ney-Geräumt");
break;
}
case 232010:
{
returnValue = F("Neydeckgasse");
break;
}
case 232011:
{
returnValue = F("Neydhartinger Str.");
break;
}
case 232012:
{
returnValue = F("Neyehof");
break;
}
case 232013:
{
returnValue = F("Neyetal");
break;
}
case 232014:
{
returnValue = F("Neyetalsperre");
break;
}
case 232015:
{
returnValue = F("Neyeweg");
break;
}
case 232016:
{
returnValue = F("Neystr.");
break;
}
case 232017:
{
returnValue = F("Neßbergstr.");
break;
}
case 232018:
{
returnValue = F("Neßhoven");
break;
}
case 232019:
{
returnValue = F("Neßlauer Str.");
break;
}
case 232020:
{
returnValue = F("Neßlerstr.");
break;
}
case 232021:
{
returnValue = F("Neßmeraltendeichstr.");
break;
}
case 232022:
{
returnValue = F("Neßmerpolder Str.");
break;
}
case 232023:
{
returnValue = F("Neßstr.");
break;
}
case 232024:
{
returnValue = F("Neßtfellweg");
break;
}
case 232025:
{
returnValue = F("Nibbelsweg");
break;
}
case 232026:
{
returnValue = F("Nibelfurt");
break;
}
case 232027:
{
returnValue = F("Nibelhöfe");
break;
}
case 232028:
{
returnValue = F("Nibelstr.");
break;
}
case 232029:
{
returnValue = F("Nibelungen Weg");
break;
}
case 232030:
{
returnValue = F("Nibelungenallee");
break;
}
case 232031:
{
returnValue = F("Nibelungenberg");
break;
}
case 232032:
{
returnValue = F("Nibelungenbrücke");
break;
}
case 232033:
{
returnValue = F("Nibelungenhof");
break;
}
case 232034:
{
returnValue = F("Nibelungenpfad");
break;
}
case 232035:
{
returnValue = F("Nibelungenplatz");
break;
}
case 232036:
{
returnValue = F("Nibelungenring");
break;
}
case 232037:
{
returnValue = F("Nibelungenstr.");
break;
}
case 232038:
{
returnValue = F("Nibelungenstr. Str.");
break;
}
case 232039:
{
returnValue = F("Nibelungenweg");
break;
}
case 232040:
{
returnValue = F("Nibelweg");
break;
}
case 232041:
{
returnValue = F("Niblerstr.");
break;
}
case 232042:
{
returnValue = F("Nibourstr.");
break;
}
case 232043:
{
returnValue = F("Nicetiusberg");
break;
}
case 232044:
{
returnValue = F("Nicetiusstr.");
break;
}
case 232045:
{
returnValue = F("Nicheler Weg");
break;
}
case 232046:
{
returnValue = F("Nichtewitzer Str.");
break;
}
case 232047:
{
returnValue = F("Nickel-Hoffmann-Str.");
break;
}
case 232048:
{
returnValue = F("Nickelbergstr.");
break;
}
case 232049:
{
returnValue = F("Nickeleshalde");
break;
}
case 232050:
{
returnValue = F("Nickelmühlenweg");
break;
}
case 232051:
{
returnValue = F("Nickelsberg");
break;
}
case 232052:
{
returnValue = F("Nickelsbergweg");
break;
}
case 232053:
{
returnValue = F("Nickelsdorf");
break;
}
case 232054:
{
returnValue = F("Nickelseestr.");
break;
}
case 232055:
{
returnValue = F("Nickelsgrund");
break;
}
case 232056:
{
returnValue = F("Nickelsstück");
break;
}
case 232057:
{
returnValue = F("Nickelstr.");
break;
}
case 232058:
{
returnValue = F("Nickelswarft");
break;
}
case 232059:
{
returnValue = F("Nickelsweg");
break;
}
case 232060:
{
returnValue = F("Nickelsweiher");
break;
}
case 232061:
{
returnValue = F("Nickelweg");
break;
}
case 232062:
{
returnValue = F("Nickenicher Str.");
break;
}
case 232063:
{
returnValue = F("Nickenicher Weg");
break;
}
case 232064:
{
returnValue = F("Nickerner Str.");
break;
}
case 232065:
{
returnValue = F("Nickersbergweg");
break;
}
case 232066:
{
returnValue = F("Nickertshalde Rundweg");
break;
}
case 232067:
{
returnValue = F("Nickhornweg");
break;
}
case 232068:
{
returnValue = F("Nickl-Leibold-Str.");
break;
}
case 232069:
{
returnValue = F("Nicklheimer Str.");
break;
}
case 232070:
{
returnValue = F("Nicklich-Weg");
break;
}
case 232071:
{
returnValue = F("Nickolsgasse");
break;
}
case 232072:
{
returnValue = F("Nickrischer Str.");
break;
}
case 232073:
{
returnValue = F("Nickritzer Str.");
break;
}
case 232074:
{
returnValue = F("Nickweilerer Str.");
break;
}
case 232075:
{
returnValue = F("Niclas-Vogt-Str.");
break;
}
case 232076:
{
returnValue = F("Niclaser Steig");
break;
}
case 232077:
{
returnValue = F("Niclasreuther Weg");
break;
}
case 232078:
{
returnValue = F("Niclasstr.");
break;
}
case 232079:
{
returnValue = F("Nico-Andersen-Weg");
break;
}
case 232080:
{
returnValue = F("Nico-Diedrichsen-Weg");
break;
}
case 232081:
{
returnValue = F("Nico-Dostal-Str.");
break;
}
case 232082:
{
returnValue = F("Nicodemstr.");
break;
}
case 232083:
{
returnValue = F("Nicodéstr.");
break;
}
case 232084:
{
returnValue = F("Nicolai-Hartmann-Str.");
break;
}
case 232085:
{
returnValue = F("Nicolaiberg");
break;
}
case 232086:
{
returnValue = F("Nicolaibogen");
break;
}
case 232087:
{
returnValue = F("Nicolaigasse");
break;
}
case 232088:
{
returnValue = F("Nicolaikirchplatz");
break;
}
case 232089:
{
returnValue = F("Nicolaimühlgäßchen");
break;
}
case 232090:
{
returnValue = F("Nicolaipforte");
break;
}
case 232091:
{
returnValue = F("Nicolaiplatz");
break;
}
case 232092:
{
returnValue = F("Nicolairing");
break;
}
case 232093:
{
returnValue = F("Nicolaisteg");
break;
}
case 232094:
{
returnValue = F("Nicolaistr.");
break;
}
case 232095:
{
returnValue = F("Nicolaitorstr.");
break;
}
case 232096:
{
returnValue = F("Nicolaiweg");
break;
}
case 232097:
{
returnValue = F("Nicolaus-August-Otto-Str.");
break;
}
case 232098:
{
returnValue = F("Nicolaus-Augustin-Str.");
break;
}
case 232099:
{
returnValue = F("Nicolaus-Bachmann-Str.");
break;
}
case 232100:
{
returnValue = F("Nicolaus-Bruhns-Weg");
break;
}
case 232101:
{
returnValue = F("Nicolaus-Brückner-Str.");
break;
}
case 232102:
{
returnValue = F("Nicolaus-Büchert-Str.");
break;
}
case 232103:
{
returnValue = F("Nicolaus-Dierling-Str.");
break;
}
case 232104:
{
returnValue = F("Nicolaus-Dreyer-Str.");
break;
}
case 232105:
{
returnValue = F("Nicolaus-Ehlen-Str.");
break;
}
case 232106:
{
returnValue = F("Nicolaus-Friedrich-Johannsen-Weg");
break;
}
case 232107:
{
returnValue = F("Nicolaus-Gallus-Str.");
break;
}
case 232108:
{
returnValue = F("Nicolaus-Groß-Str.");
break;
}
case 232109:
{
returnValue = F("Nicolaus-Harms-Ring");
break;
}
case 232110:
{
returnValue = F("Nicolaus-Heuer-Weg");
break;
}
case 232111:
{
returnValue = F("Nicolaus-Krebs-Str.");
break;
}
case 232112:
{
returnValue = F("Nicolaus-Krottenschmidt-Siedlung");
break;
}
case 232113:
{
returnValue = F("Nicolaus-Lenau-Str.");
break;
}
case 232114:
{
returnValue = F("Nicolaus-Lenau-Weg");
break;
}
case 232115:
{
returnValue = F("Nicolaus-Meyer-Str.");
break;
}
case 232116:
{
returnValue = F("Nicolaus-Otto-Str.");
break;
}
case 232117:
{
returnValue = F("Nicolaus-Scheller-Str.");
break;
}
case 232118:
{
returnValue = F("Nicolaus-Siegen-Str.");
break;
}
case 232119:
{
returnValue = F("Nicolaus-Zech-Str.");
break;
}
case 232120:
{
returnValue = F("Nicolaus-von-Amsdorf-Str.");
break;
}
case 232121:
{
returnValue = F("Nicolaus-von-Dreyse-Str.");
break;
}
case 232122:
{
returnValue = F("Nicolausberg");
break;
}
case 232123:
{
returnValue = F("Nicolausstieg");
break;
}
case 232124:
{
returnValue = F("Nicolausstr.");
break;
}
case 232125:
{
returnValue = F("Nicolaystr.");
break;
}
case 232126:
{
returnValue = F("Nicoline-Hensler-Str.");
break;
}
case 232127:
{
returnValue = F("Nicolosengäßchen");
break;
}
case 232128:
{
returnValue = F("Nicoloviusstr.");
break;
}
case 232129:
{
returnValue = F("Nicolstr.");
break;
}
case 232130:
{
returnValue = F("Niddablick");
break;
}
case 232131:
{
returnValue = F("Niddaer Landstr.");
break;
}
case 232132:
{
returnValue = F("Niddaer Str.");
break;
}
case 232133:
{
returnValue = F("Niddagaustr.");
break;
}
case 232134:
{
returnValue = F("Niddapassage");
break;
}
case 232135:
{
returnValue = F("Niddapfad");
break;
}
case 232136:
{
returnValue = F("Niddastr.");
break;
}
case 232137:
{
returnValue = F("Niddaweg");
break;
}
case 232138:
{
returnValue = F("Niddener Weg");
break;
}
case 232139:
{
returnValue = F("Niddenweg");
break;
}
case 232140:
{
returnValue = F("Nidderau-Ring");
break;
}
case 232141:
{
returnValue = F("Nidderauer Str.");
break;
}
case 232142:
{
returnValue = F("Niddergrund");
break;
}
case 232143:
{
returnValue = F("Nidderring");
break;
}
case 232144:
{
returnValue = F("Nidderstr.");
break;
}
case 232145:
{
returnValue = F("Niddertalring");
break;
}
case 232146:
{
returnValue = F("Niddertalstr.");
break;
}
case 232147:
{
returnValue = F("Nidderweg");
break;
}
case 232148:
{
returnValue = F("Nidderwiesenweg");
break;
}
case 232149:
{
returnValue = F("Nideggener Burgen");
break;
}
case 232150:
{
returnValue = F("Nideggener Str.");
break;
}
case 232151:
{
returnValue = F("Nideggener Weg");
break;
}
case 232152:
{
returnValue = F("Nideggergasse");
break;
}
case 232153:
{
returnValue = F("Nideggerstr.");
break;
}
case 232154:
{
returnValue = F("Nie Dieck");
break;
}
case 232155:
{
returnValue = F("Niebecker Weg");
break;
}
case 232156:
{
returnValue = F("Niebeder Chaussee");
break;
}
case 232157:
{
returnValue = F("Niebeder Weg");
break;
}
case 232158:
{
returnValue = F("Niebelsbacher Str.");
break;
}
case 232159:
{
returnValue = F("Niebelsbacher Weg");
break;
}
case 232160:
{
returnValue = F("Niebelungenstr.");
break;
}
case 232161:
{
returnValue = F("Niebelungenstr. 61");
break;
}
case 232162:
{
returnValue = F("Niebendorf");
break;
}
case 232163:
{
returnValue = F("Niebendorfer Weg");
break;
}
case 232164:
{
returnValue = F("Nieberding Str.");
break;
}
case 232165:
{
returnValue = F("Nieberdingstr.");
break;
}
case 232166:
{
returnValue = F("Niebergallstr.");
break;
}
case 232167:
{
returnValue = F("Niebergallweg");
break;
}
case 232168:
{
returnValue = F("Nieberser Str.");
break;
}
case 232169:
{
returnValue = F("Nieberstr.");
break;
}
case 232170:
{
returnValue = F("Niebler Dorfstr.");
break;
}
case 232171:
{
returnValue = F("Nieblumstieg");
break;
}
case 232172:
{
returnValue = F("Nieblumweg");
break;
}
case 232173:
{
returnValue = F("Niebodenweg");
break;
}
case 232174:
{
returnValue = F("Niebra");
break;
}
case 232175:
{
returnValue = F("Niebraer Str.");
break;
}
case 232176:
{
returnValue = F("Niebraer Weg");
break;
}
case 232177:
{
returnValue = F("Niebuerswiek");
break;
}
case 232178:
{
returnValue = F("Niebuhrs Feld");
break;
}
case 232179:
{
returnValue = F("Niebuhrstr.");
break;
}
case 232180:
{
returnValue = F("Nieby");
break;
}
case 232181:
{
returnValue = F("Niebyer Str.");
break;
}
case 232182:
{
returnValue = F("Niebywesterfeld");
break;
}
case 232183:
{
returnValue = F("Niebüller Str.");
break;
}
case 232184:
{
returnValue = F("Niebüller Weg");
break;
}
case 232185:
{
returnValue = F("Niebüllweg");
break;
}
case 232186:
{
returnValue = F("Niechaer Gasse");
break;
}
case 232187:
{
returnValue = F("Niedaltdorfer Str.");
break;
}
case 232188:
{
returnValue = F("Niedamweg");
break;
}
case 232189:
{
returnValue = F("Niedbachstr.");
break;
}
case 232190:
{
returnValue = F("Niede Weg");
break;
}
case 232191:
{
returnValue = F("Niedeck");
break;
}
case 232192:
{
returnValue = F("Niedecke");
break;
}
case 232193:
{
returnValue = F("Niedecker Stieg");
break;
}
case 232194:
{
returnValue = F("Niedeckerstr.");
break;
}
case 232195:
{
returnValue = F("Niedelweg");
break;
}
case 232196:
{
returnValue = F("Niedenau");
break;
}
case 232197:
{
returnValue = F("Niedenbach");
break;
}
case 232198:
{
returnValue = F("Niedenhof");
break;
}
case 232199:
{
returnValue = F("Niedenhofsbusch");
break;
}
case 232200:
{
returnValue = F("Niedenkampstr.");
break;
}
case 232201:
{
returnValue = F("Niedens Garten");
break;
}
case 232202:
{
returnValue = F("Niedensteiner Str.");
break;
}
case 232203:
{
returnValue = F("Niedensteiner Weg");
break;
}
case 232204:
{
returnValue = F("Niedenstr.");
break;
}
case 232205:
{
returnValue = F("Nieder Hövel");
break;
}
case 232206:
{
returnValue = F("Nieder Langenscheid");
break;
}
case 232207:
{
returnValue = F("Nieder Sandweg");
break;
}
case 232208:
{
returnValue = F("Nieder Str.");
break;
}
case 232209:
{
returnValue = F("Nieder Viebig");
break;
}
case 232210:
{
returnValue = F("Nieder-Aue");
break;
}
case 232211:
{
returnValue = F("Nieder-Beerbacher Str.");
break;
}
case 232212:
{
returnValue = F("Nieder-Beerbacher Weg");
break;
}
case 232213:
{
returnValue = F("Nieder-Bessinger Weg");
break;
}
case 232214:
{
returnValue = F("Nieder-Breidenbacher Str.");
break;
}
case 232215:
{
returnValue = F("Nieder-Erlenbacher Weg");
break;
}
case 232216:
{
returnValue = F("Nieder-Erlenbacher-Grenzschneise");
break;
}
case 232217:
{
returnValue = F("Nieder-Eschbacher Grenzschneise");
break;
}
case 232218:
{
returnValue = F("Nieder-Fiebig");
break;
}
case 232219:
{
returnValue = F("Nieder-Flörsheimer Str.");
break;
}
case 232220:
{
returnValue = F("Nieder-Flörsheimer-Str.");
break;
}
case 232221:
{
returnValue = F("Nieder-Gemündener Str.");
break;
}
case 232222:
{
returnValue = F("Nieder-Hilbersheimer-Str.");
break;
}
case 232223:
{
returnValue = F("Nieder-Holte");
break;
}
case 232224:
{
returnValue = F("Nieder-Issel");
break;
}
case 232225:
{
returnValue = F("Nieder-Kinziger-Str.");
break;
}
case 232226:
{
returnValue = F("Nieder-Modauer Weg");
break;
}
case 232227:
{
returnValue = F("Nieder-Modauer-Str.");
break;
}
case 232228:
{
returnValue = F("Nieder-Mooser Str.");
break;
}
case 232229:
{
returnValue = F("Nieder-Mörler Str.");
break;
}
case 232230:
{
returnValue = F("Nieder-Mörler-Str.");
break;
}
case 232231:
{
returnValue = F("Nieder-Ofleidener Str.");
break;
}
case 232232:
{
returnValue = F("Nieder-Ohmener Str.");
break;
}
case 232233:
{
returnValue = F("Nieder-Ohmer Weg");
break;
}
case 232234:
{
returnValue = F("Nieder-Ohmer-Weg");
break;
}
case 232235:
{
returnValue = F("Nieder-Olmer Str.");
break;
}
case 232236:
{
returnValue = F("Nieder-Olmer Weg");
break;
}
case 232237:
{
returnValue = F("Nieder-Olmer-Str.");
break;
}
case 232238:
{
returnValue = F("Nieder-Ramstädter Fußpfad");
break;
}
case 232239:
{
returnValue = F("Nieder-Ramstädter Str.");
break;
}
case 232240:
{
returnValue = F("Nieder-Ramstädter-Weg");
break;
}
case 232241:
{
returnValue = F("Nieder-Rosbacher-Str.");
break;
}
case 232242:
{
returnValue = F("Nieder-Rußbacher-Str.");
break;
}
case 232243:
{
returnValue = F("Nieder-Röder Str.");
break;
}
case 232244:
{
returnValue = F("Nieder-Röder Weg");
break;
}
case 232245:
{
returnValue = F("Nieder-Röder-Str.");
break;
}
case 232246:
{
returnValue = F("Nieder-Röder-Weg");
break;
}
case 232247:
{
returnValue = F("Nieder-Saulheimer Str.");
break;
}
case 232248:
{
returnValue = F("Nieder-Spree");
break;
}
case 232249:
{
returnValue = F("Nieder-Weiseler Weg");
break;
}
case 232250:
{
returnValue = F("Nieder-Werber-Str.");
break;
}
case 232251:
{
returnValue = F("Nieder-Wieser Str.");
break;
}
case 232252:
{
returnValue = F("Nieder-Wippekühl");
break;
}
case 232253:
{
returnValue = F("Nieder-Wöllstädter Str.");
break;
}
case 232254:
{
returnValue = F("Nieder-Wöllstädter-Str.");
break;
}
case 232255:
{
returnValue = F("Niederacker");
break;
}
case 232256:
{
returnValue = F("Niederadener Str.");
break;
}
case 232257:
{
returnValue = F("Niederahrer Str.");
break;
}
case 232258:
{
returnValue = F("Niederaicher Str.");
break;
}
case 232259:
{
returnValue = F("Niederaltaicher Str.");
break;
}
case 232260:
{
returnValue = F("Niederalteicher Str.");
break;
}
case 232261:
{
returnValue = F("Niederalteicher Weg");
break;
}
case 232262:
{
returnValue = F("Niederangern");
break;
}
case 232263:
{
returnValue = F("Niederarth");
break;
}
case 232264:
{
returnValue = F("Niederasbach");
break;
}
case 232265:
{
returnValue = F("Niederaspher Str.");
break;
}
case 232266:
{
returnValue = F("Niederau");
break;
}
case 232267:
{
returnValue = F("Niederaue");
break;
}
case 232268:
{
returnValue = F("Niederauer Str.");
break;
}
case 232269:
{
returnValue = F("Niederauer Weg");
break;
}
case 232270:
{
returnValue = F("Niederauerbacher Str.");
break;
}
case 232271:
{
returnValue = F("Niederaulaer Str.");
break;
}
case 232272:
{
returnValue = F("Niederaupark");
break;
}
case 232273:
{
returnValue = F("Niederaustr.");
break;
}
case 232274:
{
returnValue = F("Niederauweg");
break;
}
case 232275:
{
returnValue = F("Niederaußemer Str.");
break;
}
case 232276:
{
returnValue = F("Niederbach");
break;
}
case 232277:
{
returnValue = F("Niederbachstr.");
break;
}
case 232278:
{
returnValue = F("Niederbachweg");
break;
}
case 232279:
{
returnValue = F("Niederbardenberger Str.");
break;
}
case 232280:
{
returnValue = F("Niederbarnimer Ring");
break;
}
case 232281:
{
returnValue = F("Niederbarnimer Str.");
break;
}
case 232282:
{
returnValue = F("Niederbarnimstr.");
break;
}
case 232283:
{
returnValue = F("Niederbecksener Str.");
break;
}
case 232284:
{
returnValue = F("Niederbeckstr.");
break;
}
case 232285:
{
returnValue = F("Niederbeckweg");
break;
}
case 232286:
{
returnValue = F("Niederbeisheimer Str.");
break;
}
case 232287:
{
returnValue = F("Niederbeller Weg");
break;
}
case 232288:
{
returnValue = F("Niederbellinghausen");
break;
}
case 232289:
{
returnValue = F("Niederbenningrath");
break;
}
case 232290:
{
returnValue = F("Niederberg");
break;
}
case 232291:
{
returnValue = F("Niederberger Höhe");
break;
}
case 232292:
{
returnValue = F("Niederberger Mark");
break;
}
case 232293:
{
returnValue = F("Niederberger Str.");
break;
}
case 232294:
{
returnValue = F("Niederberger Weg");
break;
}
case 232295:
{
returnValue = F("Niederbergerweg");
break;
}
case 232296:
{
returnValue = F("Niederbergheimer Str.");
break;
}
case 232297:
{
returnValue = F("Niederbergring");
break;
}
case 232298:
{
returnValue = F("Niederbergstr.");
break;
}
case 232299:
{
returnValue = F("Niederbergweg");
break;
}
case 232300:
{
returnValue = F("Niederbettenstr.");
break;
}
case 232301:
{
returnValue = F("Niederbexbacher Str.");
break;
}
case 232302:
{
returnValue = F("Niederbieberer Str.");
break;
}
case 232303:
{
returnValue = F("Niederbieger Str.");
break;
}
case 232304:
{
returnValue = F("Niederbieler Weg");
break;
}
case 232305:
{
returnValue = F("Niederbinz");
break;
}
case 232306:
{
returnValue = F("Niederblecher");
break;
}
case 232307:
{
returnValue = F("Niederbleick und Hohe Bleick");
break;
}
case 232308:
{
returnValue = F("Niederbonrath");
break;
}
case 232309:
{
returnValue = F("Niederborn");
break;
}
case 232310:
{
returnValue = F("Niederbornstr.");
break;
}
case 232311:
{
returnValue = F("Niederbornweg");
break;
}
case 232312:
{
returnValue = F("Niederbrake");
break;
}
case 232313:
{
returnValue = F("Niederbrecher Weg");
break;
}
case 232314:
{
returnValue = F("Niederbreede");
break;
}
case 232315:
{
returnValue = F("Niederbreidenbach");
break;
}
case 232316:
{
returnValue = F("Niederbreitbacher Str.");
break;
}
case 232317:
{
returnValue = F("Niederbrodhagen");
break;
}
case 232318:
{
returnValue = F("Niederbronner Str.");
break;
}
case 232319:
{
returnValue = F("Niederbronnerweg");
break;
}
case 232320:
{
returnValue = F("Niederbruch");
break;
}
case 232321:
{
returnValue = F("Niederbruchhausen");
break;
}
case 232322:
{
returnValue = F("Niederbruchstr.");
break;
}
case 232323:
{
returnValue = F("Niederbrunner Str.");
break;
}
case 232324:
{
returnValue = F("Niederbröler Str.");
break;
}
case 232325:
{
returnValue = F("Niederbrücke");
break;
}
case 232326:
{
returnValue = F("Niederbrünst");
break;
}
case 232327:
{
returnValue = F("Niederbuch");
break;
}
case 232328:
{
returnValue = F("Niederburger Platz");
break;
}
case 232329:
{
returnValue = F("Niederburger Str.");
break;
}
case 232330:
{
returnValue = F("Niederburggasse");
break;
}
case 232331:
{
returnValue = F("Niederburgstr.");
break;
}
case 232332:
{
returnValue = F("Niederbuscher Weg");
break;
}
case 232333:
{
returnValue = F("Niederböhmersdorf");
break;
}
case 232334:
{
returnValue = F("Niederböhmersdorfer Str.");
break;
}
case 232335:
{
returnValue = F("Niederböllen");
break;
}
case 232336:
{
returnValue = F("Niederbörry");
break;
}
case 232337:
{
returnValue = F("Niederbüssauer Weg");
break;
}
case 232338:
{
returnValue = F("Niedercrinitzer Str.");
break;
}
case 232339:
{
returnValue = F("Niedercrossen");
break;
}
case 232340:
{
returnValue = F("Niedercrostauer Str.");
break;
}
case 232341:
{
returnValue = F("Niederdahl");
break;
}
case 232342:
{
returnValue = F("Niederdedinghauser Str.");
break;
}
case 232343:
{
returnValue = F("Niederdehme");
break;
}
case 232344:
{
returnValue = F("Niederdollendorfer Str.");
break;
}
case 232345:
{
returnValue = F("Niederdonauweg");
break;
}
case 232346:
{
returnValue = F("Niederdonker Str.");
break;
}
case 232347:
{
returnValue = F("Niederdonker Weg");
break;
}
case 232348:
{
returnValue = F("Niederdorf");
break;
}
case 232349:
{
returnValue = F("Niederdorfer Flügel");
break;
}
case 232350:
{
returnValue = F("Niederdorfer Str.");
break;
}
case 232351:
{
returnValue = F("Niederdorfer Weg");
break;
}
case 232352:
{
returnValue = F("Niederdorfgasse");
break;
}
case 232353:
{
returnValue = F("Niederdorfstr.");
break;
}
case 232354:
{
returnValue = F("Niederdorfweg");
break;
}
case 232355:
{
returnValue = F("Niederdorla-Ring");
break;
}
case 232356:
{
returnValue = F("Niederdossenbach");
break;
}
case 232357:
{
returnValue = F("Niederdreisbach");
break;
}
case 232358:
{
returnValue = F("Niederdrove");
break;
}
case 232359:
{
returnValue = F("Niederdörfl");
break;
}
case 232360:
{
returnValue = F("Niedere Burgstr.");
break;
}
case 232361:
{
returnValue = F("Niedere Dorfstr.");
break;
}
case 232362:
{
returnValue = F("Niedere Fabrik");
break;
}
case 232363:
{
returnValue = F("Niedere Hauptstr.");
break;
}
case 232364:
{
returnValue = F("Niedere Heide");
break;
}
case 232365:
{
returnValue = F("Niedere Hofrütte");
break;
}
case 232366:
{
returnValue = F("Niedere Kirchgasse");
break;
}
case 232367:
{
returnValue = F("Niedere Kirchstr.");
break;
}
case 232368:
{
returnValue = F("Niedere Klinge");
break;
}
case 232369:
{
returnValue = F("Niedere Köditzgasse");
break;
}
case 232370:
{
returnValue = F("Niedere Lehmecke");
break;
}
case 232371:
{
returnValue = F("Niedere Lohe");
break;
}
case 232372:
{
returnValue = F("Niedere Mauer");
break;
}
case 232373:
{
returnValue = F("Niedere Mühlwiese");
break;
}
case 232374:
{
returnValue = F("Niedere Reihe");
break;
}
case 232375:
{
returnValue = F("Niedere Stadtmauer");
break;
}
case 232376:
{
returnValue = F("Niedere Str.");
break;
}
case 232377:
{
returnValue = F("Niedere Torgasse");
break;
}
case 232378:
{
returnValue = F("Niedere Wiesen");
break;
}
case 232379:
{
returnValue = F("Niedere Zeile");
break;
}
case 232380:
{
returnValue = F("Niedere-Au-Str.");
break;
}
case 232381:
{
returnValue = F("Niederebersdorfer Str.");
break;
}
case 232382:
{
returnValue = F("Niedereher Str.");
break;
}
case 232383:
{
returnValue = F("Niedereicher Str.");
break;
}
case 232384:
{
returnValue = F("Niedereichfeld");
break;
}
case 232385:
{
returnValue = F("Niedereichstr.");
break;
}
case 232386:
{
returnValue = F("Niedereimerfeld");
break;
}
case 232387:
{
returnValue = F("Niedereimerstr.");
break;
}
case 232388:
{
returnValue = F("Niedereiserner Str.");
break;
}
case 232389:
{
returnValue = F("Niederelberter Str.");
break;
}
case 232390:
{
returnValue = F("Niederellenbacher Str.");
break;
}
case 232391:
{
returnValue = F("Niederelsborn");
break;
}
case 232392:
{
returnValue = F("Niederelsunger Str.");
break;
}
case 232393:
{
returnValue = F("Niederembter Str.");
break;
}
case 232394:
{
returnValue = F("Niederembter Weg");
break;
}
case 232395:
{
returnValue = F("Niederemser Str.");
break;
}
case 232396:
{
returnValue = F("Niederend");
break;
}
case 232397:
{
returnValue = F("Niederende");
break;
}
case 232398:
{
returnValue = F("Niederendweg");
break;
}
case 232399:
{
returnValue = F("Niederer Brettweg");
break;
}
case 232400:
{
returnValue = F("Niederer Geldsteinweg");
break;
}
case 232401:
{
returnValue = F("Niederer Graben");
break;
}
case 232402:
{
returnValue = F("Niederer Grüneplanweg");
break;
}
case 232403:
{
returnValue = F("Niederer Hangweg");
break;
}
case 232404:
{
returnValue = F("Niederer Hirschewaldweg");
break;
}
case 232405:
{
returnValue = F("Niederer Hofweg");
break;
}
case 232406:
{
returnValue = F("Niederer Kamp");
break;
}
case 232407:
{
returnValue = F("Niederer Kohlweg");
break;
}
case 232408:
{
returnValue = F("Niederer Kreuzgalgen");
break;
}
case 232409:
{
returnValue = F("Niederer Mandauweg");
break;
}
case 232410:
{
returnValue = F("Niederer Marktsteig");
break;
}
case 232411:
{
returnValue = F("Niederer Mühlenweg");
break;
}
case 232412:
{
returnValue = F("Niederer Mühlgraben");
break;
}
case 232413:
{
returnValue = F("Niederer Rosenberg");
break;
}
case 232414:
{
returnValue = F("Niederer Steinbergweg");
break;
}
case 232415:
{
returnValue = F("Niederer Steinweg");
break;
}
case 232416:
{
returnValue = F("Niederer Sternflügel");
break;
}
case 232417:
{
returnValue = F("Niederer Viebig");
break;
}
case 232418:
{
returnValue = F("Niederer Viehweg");
break;
}
case 232419:
{
returnValue = F("Niederer Vierhufenweg");
break;
}
case 232420:
{
returnValue = F("Niederer Weg");
break;
}
case 232421:
{
returnValue = F("Niederer Wiesenweg");
break;
}
case 232422:
{
returnValue = F("Niedererbacher Str.");
break;
}
case 232423:
{
returnValue = F("Niedererdstr.");
break;
}
case 232424:
{
returnValue = F("Niedererlenbacher Grenzschneise");
break;
}
case 232425:
{
returnValue = F("Niedererlenbacher Str.");
break;
}
case 232426:
{
returnValue = F("Niedererlenbacher Weg");
break;
}
case 232427:
{
returnValue = F("Niederersgasse");
break;
}
case 232428:
{
returnValue = F("Niederes Feld");
break;
}
case 232429:
{
returnValue = F("Niedereschacher Str.");
break;
}
case 232430:
{
returnValue = F("Niedereschbacher Stadtweg");
break;
}
case 232431:
{
returnValue = F("Niedereschbacher Str.");
break;
}
case 232432:
{
returnValue = F("Niedereschstr.");
break;
}
case 232433:
{
returnValue = F("Niedereschweg");
break;
}
case 232434:
{
returnValue = F("Niederetscheid");
break;
}
case 232435:
{
returnValue = F("Niederfeld");
break;
}
case 232436:
{
returnValue = F("Niederfeldbach");
break;
}
case 232437:
{
returnValue = F("Niederfelder Str.");
break;
}
case 232438:
{
returnValue = F("Niederfelder Weg");
break;
}
case 232439:
{
returnValue = F("Niederfeldgasse");
break;
}
case 232440:
{
returnValue = F("Niederfeldring");
break;
}
case 232441:
{
returnValue = F("Niederfeldstr.");
break;
}
case 232442:
{
returnValue = F("Niederfeldweg");
break;
}
case 232443:
{
returnValue = F("Niederfinower Str.");
break;
}
case 232444:
{
returnValue = F("Niederflegge");
break;
}
case 232445:
{
returnValue = F("Niederflosbach");
break;
}
case 232446:
{
returnValue = F("Niederforst");
break;
}
case 232447:
{
returnValue = F("Niederforstbacher Str.");
break;
}
case 232448:
{
returnValue = F("Niederfrohnaer Str.");
break;
}
case 232449:
{
returnValue = F("Niederfrohnaer Weg");
break;
}
case 232450:
{
returnValue = F("Niederfährer Str.");
break;
}
case 232451:
{
returnValue = F("Niedergandern");
break;
}
case 232452:
{
returnValue = F("Niedergartenstr.");
break;
}
case 232453:
{
returnValue = F("Niedergartenweg");
break;
}
case 232454:
{
returnValue = F("Niedergasse");
break;
}
case 232455:
{
returnValue = F("Niedergaul");
break;
}
case 232456:
{
returnValue = F("Niedergebisbacher Str.");
break;
}
case 232457:
{
returnValue = F("Niedergersdorfer Str.");
break;
}
case 232458:
{
returnValue = F("Niedergieß");
break;
}
case 232459:
{
returnValue = F("Niedergirmeser Weg");
break;
}
case 232460:
{
returnValue = F("Niedergraben");
break;
}
case 232461:
{
returnValue = F("Niedergrabenstr.");
break;
}
case 232462:
{
returnValue = F("Niedergrauschwitzer Str.");
break;
}
case 232463:
{
returnValue = F("Niedergrenzebacher Str.");
break;
}
case 232464:
{
returnValue = F("Niedergrumbacher Str.");
break;
}
case 232465:
{
returnValue = F("Niedergrunstedter Weg");
break;
}
case 232466:
{
returnValue = F("Niedergräfenhain");
break;
}
case 232467:
{
returnValue = F("Niedergräfenhainer Weg");
break;
}
case 232468:
{
returnValue = F("Niedergrün");
break;
}
case 232469:
{
returnValue = F("Niedergründauer Str.");
break;
}
case 232470:
{
returnValue = F("Niedergrützenbach");
break;
}
case 232471:
{
returnValue = F("Niedergundelfingen");
break;
}
case 232472:
{
returnValue = F("Niederguriger Str.");
break;
}
case 232473:
{
returnValue = F("Niedergutstr.");
break;
}
case 232474:
{
returnValue = F("Niedergärten");
break;
}
case 232475:
{
returnValue = F("Niedergärtenstr.");
break;
}
case 232476:
{
returnValue = F("Niedergörner Damm");
break;
}
case 232477:
{
returnValue = F("Niedergörsdorfer Weg");
break;
}
case 232478:
{
returnValue = F("Niederhabbach");
break;
}
case 232479:
{
returnValue = F("Niederhabscheider Str.");
break;
}
case 232480:
{
returnValue = F("Niederhadamarer Weg");
break;
}
case 232481:
{
returnValue = F("Niederhagen");
break;
}
case 232482:
{
returnValue = F("Niederhaldenweg");
break;
}
case 232483:
{
returnValue = F("Niederhalener Dorfweg");
break;
}
case 232484:
{
returnValue = F("Niederham");
break;
}
case 232485:
{
returnValue = F("Niederhamer Str.");
break;
}
case 232486:
{
returnValue = F("Niederharter Str.");
break;
}
case 232487:
{
returnValue = F("Niederhaus");
break;
}
case 232488:
{
returnValue = F("Niederhausener Str.");
break;
}
case 232489:
{
returnValue = F("Niederhausener Weg");
break;
}
case 232490:
{
returnValue = F("Niederhauser Oesch");
break;
}
case 232491:
{
returnValue = F("Niederhauser Str.");
break;
}
case 232492:
{
returnValue = F("Niederhausweg");
break;
}
case 232493:
{
returnValue = F("Niederhaverbeck");
break;
}
case 232494:
{
returnValue = F("Niederhechinger Str.");
break;
}
case 232495:
{
returnValue = F("Niederheide");
break;
}
case 232496:
{
returnValue = F("Niederheiden");
break;
}
case 232497:
{
returnValue = F("Niederheidenstr.");
break;
}
case 232498:
{
returnValue = F("Niederheider Str.");
break;
}
case 232499:
{
returnValue = F("Niederheider Weg");
break;
}
case 232500:
{
returnValue = F("Niederheimbach");
break;
}
case 232501:
{
returnValue = F("Niederhelsum");
break;
}
case 232502:
{
returnValue = F("Niederhengstenberg");
break;
}
case 232503:
{
returnValue = F("Niederhenneborn");
break;
}
case 232504:
{
returnValue = F("Niederhermersdorfer Weg");
break;
}
case 232505:
{
returnValue = F("Niederhesterberg");
break;
}
case 232506:
{
returnValue = F("Niederhhäslicher Weg");
break;
}
case 232507:
{
returnValue = F("Niederhinkofen");
break;
}
case 232508:
{
returnValue = F("Niederhinrichshagener Weg");
break;
}
case 232509:
{
returnValue = F("Niederhof");
break;
}
case 232510:
{
returnValue = F("Niederhofen");
break;
}
case 232511:
{
returnValue = F("Niederhofener Str.");
break;
}
case 232512:
{
returnValue = F("Niederhofenstr.");
break;
}
case 232513:
{
returnValue = F("Niederhofenweg");
break;
}
case 232514:
{
returnValue = F("Niederhofer Kohlenweg");
break;
}
case 232515:
{
returnValue = F("Niederhofer Str.");
break;
}
case 232516:
{
returnValue = F("Niederhofer Weg");
break;
}
case 232517:
{
returnValue = F("Niederhoferstr.");
break;
}
case 232518:
{
returnValue = F("Niederhofheimer Str.");
break;
}
case 232519:
{
returnValue = F("Niederhofheimer Weg");
break;
}
case 232520:
{
returnValue = F("Niederhofstr.");
break;
}
case 232521:
{
returnValue = F("Niederhofweg");
break;
}
case 232522:
{
returnValue = F("Niederhohndorfer Querweg");
break;
}
case 232523:
{
returnValue = F("Niederhohndorfer Str.");
break;
}
case 232524:
{
returnValue = F("Niederholl");
break;
}
case 232525:
{
returnValue = F("Niederholz");
break;
}
case 232526:
{
returnValue = F("Niederholzhausen");
break;
}
case 232527:
{
returnValue = F("Niederholzklauer Str.");
break;
}
case 232528:
{
returnValue = F("Niederholzstr.");
break;
}
case 232529:
{
returnValue = F("Niederholzweg");
break;
}
case 232530:
{
returnValue = F("Niederholzwiesenweg");
break;
}
case 232531:
{
returnValue = F("Niederhoner Str.");
break;
}
case 232532:
{
returnValue = F("Niederhonnefelder Str.");
break;
}
case 232533:
{
returnValue = F("Niederhorbacher Str.");
break;
}
case 232534:
{
returnValue = F("Niederhosenbacher Str.");
break;
}
case 232535:
{
returnValue = F("Niederhosenbacher Weg");
break;
}
case 232536:
{
returnValue = F("Niederhove");
break;
}
case 232537:
{
returnValue = F("Niederhunscheid");
break;
}
case 232538:
{
returnValue = F("Niederhusener Str.");
break;
}
case 232539:
{
returnValue = F("NiederhäslichTanzschule (1)");
break;
}
case 232540:
{
returnValue = F("NiederhäslichTanzschule (2)");
break;
}
case 232541:
{
returnValue = F("Niederhäslicher Str.");
break;
}
case 232542:
{
returnValue = F("Niederhäslicher Weg");
break;
}
case 232543:
{
returnValue = F("Niederhäuser Eisenstr.");
break;
}
case 232544:
{
returnValue = F("Niederhäuser Str.");
break;
}
case 232545:
{
returnValue = F("Niederhöchstädter Pfad");
break;
}
case 232546:
{
returnValue = F("Niederhöchstädter Str.");
break;
}
case 232547:
{
returnValue = F("Niederhöfe");
break;
}
case 232548:
{
returnValue = F("Niederhöfen");
break;
}
case 232549:
{
returnValue = F("Niederhöfer Str.");
break;
}
case 232550:
{
returnValue = F("Niederhöfer Weg");
break;
}
case 232551:
{
returnValue = F("Niederhöh");
break;
}
case 232552:
{
returnValue = F("Niederhörne");
break;
}
case 232553:
{
returnValue = F("Niederhörner Damm");
break;
}
case 232554:
{
returnValue = F("Niederhörner Hellmer");
break;
}
case 232555:
{
returnValue = F("Niederhörner Weg");
break;
}
case 232556:
{
returnValue = F("Niederindling");
break;
}
case 232557:
{
returnValue = F("Niederjosbacher Str.");
break;
}
case 232558:
{
returnValue = F("Niederjossaer Str.");
break;
}
case 232559:
{
returnValue = F("Niederkailer Str.");
break;
}
case 232560:
{
returnValue = F("Niederkainaer Str.");
break;
}
case 232561:
{
returnValue = F("Niederkalbacher Str.");
break;
}
case 232562:
{
returnValue = F("Niederkam");
break;
}
case 232563:
{
returnValue = F("Niederkamp");
break;
}
case 232564:
{
returnValue = F("Niederkandelbach");
break;
}
case 232565:
{
returnValue = F("Niederkasseler Deich");
break;
}
case 232566:
{
returnValue = F("Niederkasseler Kirchweg");
break;
}
case 232567:
{
returnValue = F("Niederkasseler Lohweg");
break;
}
case 232568:
{
returnValue = F("Niederkasseler Str.");
break;
}
case 232569:
{
returnValue = F("Niederkastenholzer Str.");
break;
}
case 232570:
{
returnValue = F("Niederkell");
break;
}
case 232571:
{
returnValue = F("Niederkemmerich");
break;
}
case 232572:
{
returnValue = F("Niederkircher Str.");
break;
}
case 232573:
{
returnValue = F("Niederkirchleite");
break;
}
case 232574:
{
returnValue = F("Niederkleener Str.");
break;
}
case 232575:
{
returnValue = F("Niederkleiner Str.");
break;
}
case 232576:
{
returnValue = F("Niederkleiner Weg");
break;
}
case 232577:
{
returnValue = F("Niederkleveez");
break;
}
case 232578:
{
returnValue = F("Niederklüppelberg");
break;
}
case 232579:
{
returnValue = F("Niederkreuzstr.");
break;
}
case 232580:
{
returnValue = F("Niederkrombach");
break;
}
case 232581:
{
returnValue = F("Niederkrossen");
break;
}
case 232582:
{
returnValue = F("Niederkyll");
break;
}
case 232583:
{
returnValue = F("Niederkögt Nord");
break;
}
case 232584:
{
returnValue = F("Niederkögt Süd");
break;
}
case 232585:
{
returnValue = F("Niederkümmering");
break;
}
case 232586:
{
returnValue = F("Niederlaaspher Weg");
break;
}
case 232587:
{
returnValue = F("Niederlach");
break;
}
case 232588:
{
returnValue = F("Niederlagstr.");
break;
}
case 232589:
{
returnValue = F("Niederlamitzer Str.");
break;
}
case 232590:
{
returnValue = F("Niederland");
break;
}
case 232591:
{
returnValue = F("Niederlande");
break;
}
case 232592:
{
returnValue = F("Niederlandiner Str.");
break;
}
case 232593:
{
returnValue = F("Niederlandiner Weg");
break;
}
case 232594:
{
returnValue = F("Niederlandstr.");
break;
}
case 232595:
{
returnValue = F("Niederlangenbach");
break;
}
case 232596:
{
returnValue = F("Niederlangener Str.");
break;
}
case 232597:
{
returnValue = F("Niederlanggasse");
break;
}
case 232598:
{
returnValue = F("Niederlascheid");
break;
}
case 232599:
{
returnValue = F("Niederlaurer Str.");
break;
}
case 232600:
{
returnValue = F("Niederlausitzstr.");
break;
}
case 232601:
{
returnValue = F("Niederlautersteiner Str.");
break;
}
case 232602:
{
returnValue = F("Niederlehen");
break;
}
case 232603:
{
returnValue = F("Niederlehmer Chaussee");
break;
}
case 232604:
{
returnValue = F("Niederlehmer Str.");
break;
}
case 232605:
{
returnValue = F("Niederleite");
break;
}
case 232606:
{
returnValue = F("Niederlengericher Damm");
break;
}
case 232607:
{
returnValue = F("Niederleuptener Str.");
break;
}
case 232608:
{
returnValue = F("Niederleuscheider Str.");
break;
}
case 232609:
{
returnValue = F("Niederlichtenauer Eck");
break;
}
case 232610:
{
returnValue = F("Niederlindacher Str.");
break;
}
case 232611:
{
returnValue = F("Niederlindhart");
break;
}
case 232612:
{
returnValue = F("Niederlommatzscher Str.");
break;
}
case 232613:
{
returnValue = F("Niederlosheimer Str.");
break;
}
case 232614:
{
returnValue = F("Niederlosheimer Weg");
break;
}
case 232615:
{
returnValue = F("Niederluher Str.");
break;
}
case 232616:
{
returnValue = F("Niederländer Str.");
break;
}
case 232617:
{
returnValue = F("Niederländerhofstr.");
break;
}
case 232618:
{
returnValue = F("Niederländersteig");
break;
}
case 232619:
{
returnValue = F("Niederlöricker Str.");
break;
}
case 232620:
{
returnValue = F("Niederlöstern");
break;
}
case 232621:
{
returnValue = F("Niederlückerath");
break;
}
case 232622:
{
returnValue = F("Niedermai");
break;
}
case 232623:
{
returnValue = F("Niedermairstr.");
break;
}
case 232624:
{
returnValue = F("Niedermanderscheider Str.");
break;
}
case 232625:
{
returnValue = F("Niedermanns Hof");
break;
}
case 232626:
{
returnValue = F("Niedermarbacher Grenzweg");
break;
}
case 232627:
{
returnValue = F("Niedermarker Damm");
break;
}
case 232628:
{
returnValue = F("Niedermarkt");
break;
}
case 232629:
{
returnValue = F("Niedermarktgasse");
break;
}
case 232630:
{
returnValue = F("Niedermatt");
break;
}
case 232631:
{
returnValue = F("Niedermatten");
break;
}
case 232632:
{
returnValue = F("Niedermattenstr.");
break;
}
case 232633:
{
returnValue = F("Niedermattstr.");
break;
}
case 232634:
{
returnValue = F("Niedermauk B");
break;
}
case 232635:
{
returnValue = F("Niedermauk C");
break;
}
case 232636:
{
returnValue = F("Niedermauk D");
break;
}
case 232637:
{
returnValue = F("Niedermauk E");
break;
}
case 232638:
{
returnValue = F("Niedermauk F");
break;
}
case 232639:
{
returnValue = F("Niedermauk G");
break;
}
case 232640:
{
returnValue = F("Niedermauker Str.");
break;
}
case 232641:
{
returnValue = F("Niedermayerstr.");
break;
}
case 232642:
{
returnValue = F("Niedermehlinger Str.");
break;
}
case 232643:
{
returnValue = F("Niedermehlingerhof");
break;
}
case 232644:
{
returnValue = F("Niedermehner Str.");
break;
}
case 232645:
{
returnValue = F("Niedermeiers Holz");
break;
}
case 232646:
{
returnValue = F("Niedermeiers Loh");
break;
}
case 232647:
{
returnValue = F("Niedermeiersfeld");
break;
}
case 232648:
{
returnValue = F("Niedermeierstr.");
break;
}
case 232649:
{
returnValue = F("Niedermeiner Str.");
break;
}
case 232650:
{
returnValue = F("Niedermeiser Landstr.");
break;
}
case 232651:
{
returnValue = F("Niedermeiser Str.");
break;
}
case 232652:
{
returnValue = F("Niedermendiger Str.");
break;
}
case 232653:
{
returnValue = F("Niedermenniger Str.");
break;
}
case 232654:
{
returnValue = F("Niedermerzer Str.");
break;
}
case 232655:
{
returnValue = F("Niedermiebach");
break;
}
case 232656:
{
returnValue = F("Niedermirsberger Str.");
break;
}
case 232657:
{
returnValue = F("Niedermohrer Str.");
break;
}
case 232658:
{
returnValue = F("Niedermoor");
break;
}
case 232659:
{
returnValue = F("Niedermoosener Str.");
break;
}
case 232660:
{
returnValue = F("Niedermooser Str.");
break;
}
case 232661:
{
returnValue = F("Niedermoscheler Str.");
break;
}
case 232662:
{
returnValue = F("Niedermotzinger Str.");
break;
}
case 232663:
{
returnValue = F("Niedermowenfeld");
break;
}
case 232664:
{
returnValue = F("Niedermuracher Str.");
break;
}
case 232665:
{
returnValue = F("Niedermuschützer Str.");
break;
}
case 232666:
{
returnValue = F("Niedermöllern");
break;
}
case 232667:
{
returnValue = F("Niedermöllerstr.");
break;
}
case 232668:
{
returnValue = F("Niedermöllricher Str.");
break;
}
case 232669:
{
returnValue = F("Niedermühle");
break;
}
case 232670:
{
returnValue = F("Niedermühlen");
break;
}
case 232671:
{
returnValue = F("Niedermühlenkamp");
break;
}
case 232672:
{
returnValue = F("Niedermühlenstr.");
break;
}
case 232673:
{
returnValue = F("Niedermühlenweg");
break;
}
case 232674:
{
returnValue = F("Niedermühleweg");
break;
}
case 232675:
{
returnValue = F("Niedermühlstr.");
break;
}
case 232676:
{
returnValue = F("Niedermühlweg");
break;
}
case 232677:
{
returnValue = F("Niedermülsener Hauptstr.");
break;
}
case 232678:
{
returnValue = F("Niedermünsterstr.");
break;
}
case 232679:
{
returnValue = F("Niedern");
break;
}
case 232680:
{
returnValue = F("Niedernauer Str.");
break;
}
case 232681:
{
returnValue = F("Niedernberg");
break;
}
case 232682:
{
returnValue = F("Niedernberger Str.");
break;
}
case 232683:
{
returnValue = F("Niedernbergstr.");
break;
}
case 232684:
{
returnValue = F("Niedernbergweg");
break;
}
case 232685:
{
returnValue = F("Niedernburg");
break;
}
case 232686:
{
returnValue = F("Niedernburger Str.");
break;
}
case 232687:
{
returnValue = F("Niederndobrach");
break;
}
case 232688:
{
returnValue = F("Niederndodelebener Str.");
break;
}
case 232689:
{
returnValue = F("Niederndodeleber Str.");
break;
}
case 232690:
{
returnValue = F("Niederndorf");
break;
}
case 232691:
{
returnValue = F("Niederndorfer Hauptstr.");
break;
}
case 232692:
{
returnValue = F("Niederndorfer Str.");
break;
}
case 232693:
{
returnValue = F("Niederndorfer Weg");
break;
}
case 232694:
{
returnValue = F("Niederndorfring");
break;
}
case 232695:
{
returnValue = F("Niederneiser Str.");
break;
}
case 232696:
{
returnValue = F("Niederneuendorfer Weg");
break;
}
case 232697:
{
returnValue = F("Niederneureuth");
break;
}
case 232698:
{
returnValue = F("Niedernfeld");
break;
}
case 232699:
{
returnValue = F("Niedernfeldstr.");
break;
}
case 232700:
{
returnValue = F("Niedernfeldweg");
break;
}
case 232701:
{
returnValue = F("Niedernfelser Weg");
break;
}
case 232702:
{
returnValue = F("Niedernfloß");
break;
}
case 232703:
{
returnValue = F("Niedernhagen");
break;
}
case 232704:
{
returnValue = F("Niedernhagener Str.");
break;
}
case 232705:
{
returnValue = F("Niedernhaller Str.");
break;
}
case 232706:
{
returnValue = F("Niedernhausener Str.");
break;
}
case 232707:
{
returnValue = F("Niedernhausener Weg");
break;
}
case 232708:
{
returnValue = F("Niedernheede");
break;
}
case 232709:
{
returnValue = F("Niedernhof");
break;
}
case 232710:
{
returnValue = F("Niedernhofener Weg");
break;
}
case 232711:
{
returnValue = F("Niedernholz");
break;
}
case 232712:
{
returnValue = F("Niedernhäuser Mühle");
break;
}
case 232713:
{
returnValue = F("Niedernkamp");
break;
}
case 232714:
{
returnValue = F("Niedernkampstr.");
break;
}
case 232715:
{
returnValue = F("Niedernkuhle");
break;
}
case 232716:
{
returnValue = F("Niedernmoorstr.");
break;
}
case 232717:
{
returnValue = F("Niedernmühle");
break;
}
case 232718:
{
returnValue = F("Niedernstr.");
break;
}
case 232719:
{
returnValue = F("Niedernstöckener Str.");
break;
}
case 232720:
{
returnValue = F("Niederntalle");
break;
}
case 232721:
{
returnValue = F("Niedernweg");
break;
}
case 232722:
{
returnValue = F("Niedernwöhrener Landstr.");
break;
}
case 232723:
{
returnValue = F("Niedernwöhrener Str.");
break;
}
case 232724:
{
returnValue = F("Niederoderwitzer Str.");
break;
}
case 232725:
{
returnValue = F("Niederofleidener Str.");
break;
}
case 232726:
{
returnValue = F("Niederohe");
break;
}
case 232727:
{
returnValue = F("Niederort");
break;
}
case 232728:
{
returnValue = F("Niederorter Str.");
break;
}
case 232729:
{
returnValue = F("Niederpappenheimer Str.");
break;
}
case 232730:
{
returnValue = F("Niederperlesreut");
break;
}
case 232731:
{
returnValue = F("Niederpfannenstiel");
break;
}
case 232732:
{
returnValue = F("Niederpickenhain");
break;
}
case 232733:
{
returnValue = F("Niederpiebing");
break;
}
case 232734:
{
returnValue = F("Niederpiebinginger Str.");
break;
}
case 232735:
{
returnValue = F("Niederpierscheidermühle");
break;
}
case 232736:
{
returnValue = F("Niederpleiser Str.");
break;
}
case 232737:
{
returnValue = F("Niederposta");
break;
}
case 232738:
{
returnValue = F("Niederprümstr.");
break;
}
case 232739:
{
returnValue = F("Niederpöbel");
break;
}
case 232740:
{
returnValue = F("Niederpöckinger Weg");
break;
}
case 232741:
{
returnValue = F("Niederpöllnitzer Weg");
break;
}
case 232742:
{
returnValue = F("Niederpöring");
break;
}
case 232743:
{
returnValue = F("Niederradenberg");
break;
}
case 232744:
{
returnValue = F("Niederrader Allee");
break;
}
case 232745:
{
returnValue = F("Niederranschütz");
break;
}
case 232746:
{
returnValue = F("Niederrautenbach");
break;
}
case 232747:
{
returnValue = F("Niederreichenbach");
break;
}
case 232748:
{
returnValue = F("Niederreihe");
break;
}
case 232749:
{
returnValue = F("Niederreis");
break;
}
case 232750:
{
returnValue = F("Niederreißener Str.");
break;
}
case 232751:
{
returnValue = F("Niederrengse");
break;
}
case 232752:
{
returnValue = F("Niederrepinghofen");
break;
}
case 232753:
{
returnValue = F("Niederreuth");
break;
}
case 232754:
{
returnValue = F("Niederreuther-Weg");
break;
}
case 232755:
{
returnValue = F("Niederreutin");
break;
}
case 232756:
{
returnValue = F("Niederrheinallee");
break;
}
case 232757:
{
returnValue = F("Niederrheinische Str.");
break;
}
case 232758:
{
returnValue = F("Niederrheinischer Natur- und Steingarten");
break;
}
case 232759:
{
returnValue = F("Niederrheinstr.");
break;
}
case 232760:
{
returnValue = F("Niederried");
break;
}
case 232761:
{
returnValue = F("Niederrieder Str.");
break;
}
case 232762:
{
returnValue = F("Niederrod");
break;
}
case 232763:
{
returnValue = F("Niederroning");
break;
}
case 232764:
{
returnValue = F("Niederrott");
break;
}
case 232765:
{
returnValue = F("Niederrotweil");
break;
}
case 232766:
{
returnValue = F("Niederroßlaer Str.");
break;
}
case 232767:
{
returnValue = F("Niederräder Str.");
break;
}
case 232768:
{
returnValue = F("Niederröder Höhe");
break;
}
case 232769:
{
returnValue = F("Niederröder Weg");
break;
}
case 232770:
{
returnValue = F("Niedersaaler Str.");
break;
}
case 232771:
{
returnValue = F("Niedersaathener Einlassbauwerk");
break;
}
case 232772:
{
returnValue = F("Niedersachsendamm");
break;
}
case 232773:
{
returnValue = F("Niedersachsenhof");
break;
}
case 232774:
{
returnValue = F("Niedersachsenpark-Allee");
break;
}
case 232775:
{
returnValue = F("Niedersachsenplatz");
break;
}
case 232776:
{
returnValue = F("Niedersachsenring");
break;
}
case 232777:
{
returnValue = F("Niedersachsenstr.");
break;
}
case 232778:
{
returnValue = F("Niedersachsenweg");
break;
}
case 232779:
{
returnValue = F("Niedersachsenweg - X6");
break;
}
case 232780:
{
returnValue = F("Niedersaidaer Str.");
break;
}
case 232781:
{
returnValue = F("Niedersand");
break;
}
case 232782:
{
returnValue = F("Niedersandhausen");
break;
}
case 232783:
{
returnValue = F("Niedersatzbach");
break;
}
case 232784:
{
returnValue = F("Niedersaubachstr.");
break;
}
case 232785:
{
returnValue = F("Niedersayner Str.");
break;
}
case 232786:
{
returnValue = F("Niedersaß");
break;
}
case 232787:
{
returnValue = F("Niedersburger Weg");
break;
}
case 232788:
{
returnValue = F("Niederschenke");
break;
}
case 232789:
{
returnValue = F("Niederscheveling");
break;
}
case 232790:
{
returnValue = F("Niederscheyerer Str.");
break;
}
case 232791:
{
returnValue = F("Niederschlag");
break;
}
case 232792:
{
returnValue = F("Niederschlesienstr.");
break;
}
case 232793:
{
returnValue = F("Niederschlesische Str.");
break;
}
case 232794:
{
returnValue = F("Niederschneiding");
break;
}
case 232795:
{
returnValue = F("Niederscholvener Weg");
break;
}
case 232796:
{
returnValue = F("Niederschopfheimer Str.");
break;
}
case 232797:
{
returnValue = F("Niederschwarzbach");
break;
}
case 232798:
{
returnValue = F("Niederschwedeldorfer Str.");
break;
}
case 232799:
{
returnValue = F("Niederschönefelder Str.");
break;
}
case 232800:
{
returnValue = F("Niederschönenfelder Str.");
break;
}
case 232801:
{
returnValue = F("Niederseefelder Str.");
break;
}
case 232802:
{
returnValue = F("Niederseelbach");
break;
}
case 232803:
{
returnValue = F("Niederseelbacher Str.");
break;
}
case 232804:
{
returnValue = F("Niederseeoner Str.");
break;
}
case 232805:
{
returnValue = F("Niederseester Weg");
break;
}
case 232806:
{
returnValue = F("Niedersehr");
break;
}
case 232807:
{
returnValue = F("Niederseidewitz");
break;
}
case 232808:
{
returnValue = F("Niederseiffenbacher Str.");
break;
}
case 232809:
{
returnValue = F("Niederseite");
break;
}
case 232810:
{
returnValue = F("Niedersfelder Str.");
break;
}
case 232811:
{
returnValue = F("Niedersgasse");
break;
}
case 232812:
{
returnValue = F("Niedersohrener Str.");
break;
}
case 232813:
{
returnValue = F("Niedersonthofener Str.");
break;
}
case 232814:
{
returnValue = F("Niedersorpe");
break;
}
case 232815:
{
returnValue = F("Niederspaarer Str.");
break;
}
case 232816:
{
returnValue = F("Niederspiersche Str.");
break;
}
case 232817:
{
returnValue = F("Niederstadt");
break;
}
case 232818:
{
returnValue = F("Niederstadtgraben");
break;
}
case 232819:
{
returnValue = F("Niederstadthof");
break;
}
case 232820:
{
returnValue = F("Niederstadtstr.");
break;
}
case 232821:
{
returnValue = F("Niederstaffelbach");
break;
}
case 232822:
{
returnValue = F("Niederstaffeler Str.");
break;
}
case 232823:
{
returnValue = F("Niederste Kirchhoff");
break;
}
case 232824:
{
returnValue = F("Niederste Str.");
break;
}
case 232825:
{
returnValue = F("Niederstedter Weg");
break;
}
case 232826:
{
returnValue = F("Niedersteinach");
break;
}
case 232827:
{
returnValue = F("Niedersteinanlage");
break;
}
case 232828:
{
returnValue = F("Niedersteinbacher Str.");
break;
}
case 232829:
{
returnValue = F("Niederstettener Str.");
break;
}
case 232830:
{
returnValue = F("Niederstetter Str.");
break;
}
case 232831:
{
returnValue = F("Niederstimmer Str.");
break;
}
case 232832:
{
returnValue = F("Niederstockumer Weg");
break;
}
case 232833:
{
returnValue = F("Niederstotzinger Str.");
break;
}
case 232834:
{
returnValue = F("Niederstr.");
break;
}
case 232835:
{
returnValue = F("Niederstraß");
break;
}
case 232836:
{
returnValue = F("Niederstrich");
break;
}
case 232837:
{
returnValue = F("Niedersweiler");
break;
}
case 232838:
{
returnValue = F("Niedersweiler Str.");
break;
}
case 232839:
{
returnValue = F("Niedertal");
break;
}
case 232840:
{
returnValue = F("Niedertalstr.");
break;
}
case 232841:
{
returnValue = F("Niedertalweg");
break;
}
case 232842:
{
returnValue = F("Niederthann");
break;
}
case 232843:
{
returnValue = F("Niederthuine");
break;
}
case 232844:
{
returnValue = F("Niedertiefenbacher Str.");
break;
}
case 232845:
{
returnValue = F("Niedertiefenbacher Weg");
break;
}
case 232846:
{
returnValue = F("Niedertopfstedter Str.");
break;
}
case 232847:
{
returnValue = F("Niedertor");
break;
}
case 232848:
{
returnValue = F("Niedertorplatz");
break;
}
case 232849:
{
returnValue = F("Niedertorstr.");
break;
}
case 232850:
{
returnValue = F("Niedertraublinger Str.");
break;
}
case 232851:
{
returnValue = F("Niedertundinger Str.");
break;
}
case 232852:
{
returnValue = F("Niederuhna");
break;
}
case 232853:
{
returnValue = F("Niederumelsdorfer Str.");
break;
}
case 232854:
{
returnValue = F("Niederurfer Str.");
break;
}
case 232855:
{
returnValue = F("Niederurffer Str.");
break;
}
case 232856:
{
returnValue = F("Niederurseler Allee");
break;
}
case 232857:
{
returnValue = F("Niedervellmarer Str.");
break;
}
case 232858:
{
returnValue = F("Niedervellmarsche Str.");
break;
}
case 232859:
{
returnValue = F("Niederviebig");
break;
}
case 232860:
{
returnValue = F("Niederviehbacher Str.");
break;
}
case 232861:
{
returnValue = F("Niedervorschützer Str.");
break;
}
case 232862:
{
returnValue = F("Niederwahlen");
break;
}
case 232863:
{
returnValue = F("Niederwahn");
break;
}
case 232864:
{
returnValue = F("Niederwald");
break;
}
case 232865:
{
returnValue = F("Niederwalder Str.");
break;
}
case 232866:
{
returnValue = F("Niederwaldstr.");
break;
}
case 232867:
{
returnValue = F("Niederwaldweg");
break;
}
case 232868:
{
returnValue = F("Niederwalgerner Mühle");
break;
}
case 232869:
{
returnValue = F("Niederwall");
break;
}
case 232870:
{
returnValue = F("Niederwallach");
break;
}
case 232871:
{
returnValue = F("Niederwallstr.");
break;
}
case 232872:
{
returnValue = F("Niederwalm");
break;
}
case 232873:
{
returnValue = F("Niederwalting");
break;
}
case 232874:
{
returnValue = F("Niederwambacher Mühle");
break;
}
case 232875:
{
returnValue = F("Niederwambacher Str.");
break;
}
case 232876:
{
returnValue = F("Niederwang");
break;
}
case 232877:
{
returnValue = F("Niederwarthaer Str.");
break;
}
case 232878:
{
returnValue = F("Niederweg");
break;
}
case 232879:
{
returnValue = F("Niederwehberg");
break;
}
case 232880:
{
returnValue = F("Niederweide");
break;
}
case 232881:
{
returnValue = F("Niederweiler");
break;
}
case 232882:
{
returnValue = F("Niederweiler Str.");
break;
}
case 232883:
{
returnValue = F("Niederweiler Weg");
break;
}
case 232884:
{
returnValue = F("Niederweilerer Str.");
break;
}
case 232885:
{
returnValue = F("Niederweilerstr.");
break;
}
case 232886:
{
returnValue = F("Niederweimarer Str.");
break;
}
case 232887:
{
returnValue = F("Niederweiser Str.");
break;
}
case 232888:
{
returnValue = F("Niederwende");
break;
}
case 232889:
{
returnValue = F("Niederwendenstr.");
break;
}
case 232890:
{
returnValue = F("Niederwerder");
break;
}
case 232891:
{
returnValue = F("Niederwerrner Str.");
break;
}
case 232892:
{
returnValue = F("Niederwerrner Weg");
break;
}
case 232893:
{
returnValue = F("Niederwettersche Str.");
break;
}
case 232894:
{
returnValue = F("Niederwetzer Str.");
break;
}
case 232895:
{
returnValue = F("Niederwiesaer Str.");
break;
}
case 232896:
{
returnValue = F("Niederwiesaer Weg");
break;
}
case 232897:
{
returnValue = F("Niederwiese");
break;
}
case 232898:
{
returnValue = F("Niederwiesen");
break;
}
case 232899:
{
returnValue = F("Niederwiesenring");
break;
}
case 232900:
{
returnValue = F("Niederwiesenstr.");
break;
}
case 232901:
{
returnValue = F("Niederwiesenweg");
break;
}
case 232902:
{
returnValue = F("Niederwiesstr.");
break;
}
case 232903:
{
returnValue = F("Niederwihl");
break;
}
case 232904:
{
returnValue = F("Niederwillinger Str.");
break;
}
case 232905:
{
returnValue = F("Niederwindhagener Str.");
break;
}
case 232906:
{
returnValue = F("Niederwingertstr.");
break;
}
case 232907:
{
returnValue = F("Niederwinkler Hauptstr.");
break;
}
case 232908:
{
returnValue = F("Niederwinkler Str.");
break;
}
case 232909:
{
returnValue = F("Niederwipper");
break;
}
case 232910:
{
returnValue = F("Niederwälden");
break;
}
case 232911:
{
returnValue = F("Niederwönkhausen");
break;
}
case 232912:
{
returnValue = F("Niederwörresbacher Weg");
break;
}
case 232913:
{
returnValue = F("Niederwörth");
break;
}
case 232914:
{
returnValue = F("Niederwörthweg");
break;
}
case 232915:
{
returnValue = F("Niederwünscher Str.");
break;
}
case 232916:
{
returnValue = F("Niederzaistr.");
break;
}
case 232917:
{
returnValue = F("Niederzeller Str.");
break;
}
case 232918:
{
returnValue = F("Niederzeller Weg");
break;
}
case 232919:
{
returnValue = F("Niederzielenbach");
break;
}
case 232920:
{
returnValue = F("Niederzierer Str.");
break;
}
case 232921:
{
returnValue = F("Niederzissener Str.");
break;
}
case 232922:
{
returnValue = F("Niederzwönitzer Str.");
break;
}
case 232923:
{
returnValue = F("Niederärndter Weg");
break;
}
case 232924:
{
returnValue = F("Niedes Acht");
break;
}
case 232925:
{
returnValue = F("Niedesheimer Pfad");
break;
}
case 232926:
{
returnValue = F("Niedesheimer Str.");
break;
}
case 232927:
{
returnValue = F("Niedhammerstr.");
break;
}
case 232928:
{
returnValue = F("Niedheimer Weg");
break;
}
case 232929:
{
returnValue = F("Niedieck-Park");
break;
}
case 232930:
{
returnValue = F("Niedieckstr.");
break;
}
case 232931:
{
returnValue = F("Niedinkstr.");
break;
}
case 232932:
{
returnValue = F("Niedling");
break;
}
case 232933:
{
returnValue = F("Niedlingsgasse");
break;
}
case 232934:
{
returnValue = F("Niedriger Weg");
break;
}
case 232935:
{
returnValue = F("Niedringhausener Str.");
break;
}
case 232936:
{
returnValue = F("Niedstr.");
break;
}
case 232937:
{
returnValue = F("Niedtalstr.");
break;
}
case 232938:
{
returnValue = F("Niedweg");
break;
}
case 232939:
{
returnValue = F("Niedwerder Weg");
break;
}
case 232940:
{
returnValue = F("Nieen Grund");
break;
}
case 232941:
{
returnValue = F("Niefangweg");
break;
}
case 232942:
{
returnValue = F("Niefeld");
break;
}
case 232943:
{
returnValue = F("Niefelder Strot");
break;
}
case 232944:
{
returnValue = F("Niefeldstr.");
break;
}
case 232945:
{
returnValue = F("Niefelfeld");
break;
}
case 232946:
{
returnValue = F("Niefenthalerstr.");
break;
}
case 232947:
{
returnValue = F("Nieferner Str.");
break;
}
case 232948:
{
returnValue = F("Nieferner Sträßchen");
break;
}
case 232949:
{
returnValue = F("Nieferner Weg");
break;
}
case 232950:
{
returnValue = F("Niefindtweg");
break;
}
case 232951:
{
returnValue = F("Niege Reeg");
break;
}
case 232952:
{
returnValue = F("Niegerodaer Dorfstr.");
break;
}
case 232953:
{
returnValue = F("Niegesland");
break;
}
case 232954:
{
returnValue = F("Niegleve");
break;
}
case 232955:
{
returnValue = F("Niegn Diek");
break;
}
case 232956:
{
returnValue = F("Niegras");
break;
}
case 232957:
{
returnValue = F("Niegripper Str.");
break;
}
case 232958:
{
returnValue = F("Nieharde");
break;
}
case 232959:
{
returnValue = F("Niehaus' Brücke");
break;
}
case 232960:
{
returnValue = F("Niehaus' Kirchweg");
break;
}
case 232961:
{
returnValue = F("Niehaus-Str.");
break;
}
case 232962:
{
returnValue = F("Niehausstiege");
break;
}
case 232963:
{
returnValue = F("Niehausweg");
break;
}
case 232964:
{
returnValue = F("Nieheimer Str.");
break;
}
case 232965:
{
returnValue = F("Nieheimer Weg");
break;
}
case 232966:
{
returnValue = F("Niehekamp");
break;
}
case 232967:
{
returnValue = F("Niehen Kamp");
break;
}
case 232968:
{
returnValue = F("Niehestr.");
break;
}
case 232969:
{
returnValue = F("Niehler Str.");
break;
}
case 232970:
{
returnValue = F("Niehoffs Blaike");
break;
}
case 232971:
{
returnValue = F("Niehoffs Kamp");
break;
}
case 232972:
{
returnValue = F("Niehoffs-Kamp");
break;
}
case 232973:
{
returnValue = F("Niehoffstr.");
break;
}
case 232974:
{
returnValue = F("Nieholter Str.");
break;
}
case 232975:
{
returnValue = F("Niehorster Str.");
break;
}
case 232976:
{
returnValue = F("Niehues-Patt");
break;
}
case 232977:
{
returnValue = F("Niehuesstr.");
break;
}
case 232978:
{
returnValue = F("Niehuisweg");
break;
}
case 232979:
{
returnValue = F("Niehuser Weg");
break;
}
case 232980:
{
returnValue = F("Niehuskamp");
break;
}
case 232981:
{
returnValue = F("Niehuuser Str.");
break;
}
case 232982:
{
returnValue = F("Niehäger Str.");
break;
}
case 232983:
{
returnValue = F("Niehörsterstr.");
break;
}
case 232984:
{
returnValue = F("Niekamp");
break;
}
case 232985:
{
returnValue = F("Niekampsweg");
break;
}
case 232986:
{
returnValue = F("Niekoppel");
break;
}
case 232987:
{
returnValue = F("Niekoppelweg");
break;
}
case 232988:
{
returnValue = F("Niekrenzer Damm");
break;
}
case 232989:
{
returnValue = F("Niekrenzer Dorfstr.");
break;
}
case 232990:
{
returnValue = F("Niekrenzer Str.");
break;
}
case 232991:
{
returnValue = F("Nieland");
break;
}
case 232992:
{
returnValue = F("Nieland-Ost");
break;
}
case 232993:
{
returnValue = F("Nieland-West");
break;
}
case 232994:
{
returnValue = F("Nielande");
break;
}
case 232995:
{
returnValue = F("Nielandskamp");
break;
}
case 232996:
{
returnValue = F("Nielandsredder");
break;
}
case 232997:
{
returnValue = F("Nielandstr.");
break;
}
case 232998:
{
returnValue = F("Nielandsweg");
break;
}
case 232999:
{
returnValue = F("Nielandweg");
break;
}
case 233000:
{
returnValue = F("Nielebocker Chaussee");
break;
}
case 233001:
{
returnValue = F("Nielebocker Weg");
break;
}
case 233002:
{
returnValue = F("Nieler Str.");
break;
}
case 233003:
{
returnValue = F("Nielitz");
break;
}
case 233004:
{
returnValue = F("Niels-Bohr-Ring");
break;
}
case 233005:
{
returnValue = F("Niels-Bohr-Str.");
break;
}
case 233006:
{
returnValue = F("Niels-Bohr-Weg");
break;
}
case 233007:
{
returnValue = F("Niels-Gade-Str.");
break;
}
case 233008:
{
returnValue = F("Niels-Stensen-Str.");
break;
}
case 233009:
{
returnValue = F("Niels-Stensen-Weg");
break;
}
case 233010:
{
returnValue = F("Nielsenpark");
break;
}
case 233011:
{
returnValue = F("Nielsenstr.");
break;
}
case 233012:
{
returnValue = F("Nielsenweg");
break;
}
case 233013:
{
returnValue = F("Nielsglaat");
break;
}
case 233014:
{
returnValue = F("Nieländer");
break;
}
case 233015:
{
returnValue = F("Nieländer Str.");
break;
}
case 233016:
{
returnValue = F("Nieländer Weg");
break;
}
case 233017:
{
returnValue = F("Nielück");
break;
}
case 233018:
{
returnValue = F("Nielücke");
break;
}
case 233019:
{
returnValue = F("Niemandsberg");
break;
}
case 233020:
{
returnValue = F("Niemandsland");
break;
}
case 233021:
{
returnValue = F("Niemandsweg");
break;
}
case 233022:
{
returnValue = F("Niemanns Weg");
break;
}
case 233023:
{
returnValue = F("Niemannstr.");
break;
}
case 233024:
{
returnValue = F("Niemannsweg");
break;
}
case 233025:
{
returnValue = F("Niemark");
break;
}
case 233026:
{
returnValue = F("Niemarker Weg");
break;
}
case 233027:
{
returnValue = F("Niemberger Str.");
break;
}
case 233028:
{
returnValue = F("Niemberger Weg");
break;
}
case 233029:
{
returnValue = F("Niemczastr.");
break;
}
case 233030:
{
returnValue = F("Nieme");
break;
}
case 233031:
{
returnValue = F("Niemegker Str.");
break;
}
case 233032:
{
returnValue = F("Niemegker Weg");
break;
}
case 233033:
{
returnValue = F("Niemeiers Kamp");
break;
}
case 233034:
{
returnValue = F("Niemeierstr.");
break;
}
case 233035:
{
returnValue = F("Niemeierweg");
break;
}
case 233036:
{
returnValue = F("Niemergs Weide");
break;
}
case 233037:
{
returnValue = F("Niemerlang Ausbau");
break;
}
case 233038:
{
returnValue = F("Niemerweg");
break;
}
case 233039:
{
returnValue = F("Niemeser Str.");
break;
}
case 233040:
{
returnValue = F("Niemetalstr.");
break;
}
case 233041:
{
returnValue = F("Niemeyers Hof");
break;
}
case 233042:
{
returnValue = F("Niemeyerstr.");
break;
}
case 233043:
{
returnValue = F("Niemeyerweg");
break;
}
case 233044:
{
returnValue = F("Niemitzer Weg");
break;
}
case 233045:
{
returnValue = F("Niemodlinstr.");
break;
}
case 233046:
{
returnValue = F("Niemöller-Platz");
break;
}
case 233047:
{
returnValue = F("Niemöller-Privatweg");
break;
}
case 233048:
{
returnValue = F("Niemöllerallee");
break;
}
case 233049:
{
returnValue = F("Niemöllerplatz");
break;
}
case 233050:
{
returnValue = F("Niemöllershof");
break;
}
case 233051:
{
returnValue = F("Niemöllerstr.");
break;
}
case 233052:
{
returnValue = F("Niemöllerweg");
break;
}
case 233053:
{
returnValue = F("Nien Damm");
break;
}
case 233054:
{
returnValue = F("Nien Diek");
break;
}
case 233055:
{
returnValue = F("Nien Eschk");
break;
}
case 233056:
{
returnValue = F("Nien-Damm");
break;
}
case 233057:
{
returnValue = F("Nienbergstr.");
break;
}
case 233058:
{
returnValue = F("Nienborger Damm");
break;
}
case 233059:
{
returnValue = F("Nienborger Str.");
break;
}
case 233060:
{
returnValue = F("Nienbrügger Weg");
break;
}
case 233061:
{
returnValue = F("Nienburger Bruch");
break;
}
case 233062:
{
returnValue = F("Nienburger Chaussee");
break;
}
case 233063:
{
returnValue = F("Nienburger Str.");
break;
}
case 233064:
{
returnValue = F("Nienburger Weg");
break;
}
case 233065:
{
returnValue = F("Nienburgstr.");
break;
}
case 233066:
{
returnValue = F("Nienburgweg");
break;
}
case 233067:
{
returnValue = F("Niendamm");
break;
}
case 233068:
{
returnValue = F("Niendeel");
break;
}
case 233069:
{
returnValue = F("Niendieck");
break;
}
case 233070:
{
returnValue = F("Niendiek");
break;
}
case 233071:
{
returnValue = F("Niendieken");
break;
}
case 233072:
{
returnValue = F("Niendieker Strot");
break;
}
case 233073:
{
returnValue = F("Niendorf");
break;
}
case 233074:
{
returnValue = F("Niendorf I");
break;
}
case 233075:
{
returnValue = F("Niendorfer Balkon");
break;
}
case 233076:
{
returnValue = F("Niendorfer Chaussee");
break;
}
case 233077:
{
returnValue = F("Niendorfer Gartenweg");
break;
}
case 233078:
{
returnValue = F("Niendorfer Grund");
break;
}
case 233079:
{
returnValue = F("Niendorfer Hauptstr.");
break;
}
case 233080:
{
returnValue = F("Niendorfer Landstr.");
break;
}
case 233081:
{
returnValue = F("Niendorfer Mühlenweg");
break;
}
case 233082:
{
returnValue = F("Niendorfer Str.");
break;
}
case 233083:
{
returnValue = F("Niendorfer Weg");
break;
}
case 233084:
{
returnValue = F("Niendorfstr.");
break;
}
case 233085:
{
returnValue = F("Niendörp");
break;
}
case 233086:
{
returnValue = F("Nienfelder Str.");
break;
}
case 233087:
{
returnValue = F("Nienfrie Weg");
break;
}
case 233088:
{
returnValue = F("Niengraben");
break;
}
case 233089:
{
returnValue = F("Nienhabers Feld");
break;
}
case 233090:
{
returnValue = F("Nienhagen");
break;
}
case 233091:
{
returnValue = F("Nienhagener Str.");
break;
}
case 233092:
{
returnValue = F("Nienhagener Weg");
break;
}
case 233093:
{
returnValue = F("Nienhaus");
break;
}
case 233094:
{
returnValue = F("Nienhausen");
break;
}
case 233095:
{
returnValue = F("Nienhausenbusch");
break;
}
case 233096:
{
returnValue = F("Nienhausenstr.");
break;
}
case 233097:
{
returnValue = F("Nienhausweg");
break;
}
case 233098:
{
returnValue = F("Nienheider Weg");
break;
}
case 233099:
{
returnValue = F("Nienhof");
break;
}
case 233100:
{
returnValue = F("Nienhofstr.");
break;
}
case 233101:
{
returnValue = F("Nienhuus Esch");
break;
}
case 233102:
{
returnValue = F("Nienhäger Chaussee");
break;
}
case 233103:
{
returnValue = F("Nienhäger Str.");
break;
}
case 233104:
{
returnValue = F("Nienhäger Trift");
break;
}
case 233105:
{
returnValue = F("Nienhäger Weg");
break;
}
case 233106:
{
returnValue = F("Nienhöfen");
break;
}
case 233107:
{
returnValue = F("Nienhöfener Str.");
break;
}
case 233108:
{
returnValue = F("Nienhüsener Str.");
break;
}
case 233109:
{
returnValue = F("Nienkamp");
break;
}
case 233110:
{
returnValue = F("Nienkampstr.");
break;
}
case 233111:
{
returnValue = F("Nienkattbeker Schulweg");
break;
}
case 233112:
{
returnValue = F("Nienkattbeker Schweiz");
break;
}
case 233113:
{
returnValue = F("Nienkattbeker Str.");
break;
}
case 233114:
{
returnValue = F("Nienkämpe");
break;
}
case 233115:
{
returnValue = F("Nienlanden");
break;
}
case 233116:
{
returnValue = F("Nienmarker Weg");
break;
}
case 233117:
{
returnValue = F("Nienort");
break;
}
case 233118:
{
returnValue = F("Nienoverer Weg");
break;
}
case 233119:
{
returnValue = F("Nienrade");
break;
}
case 233120:
{
returnValue = F("Nienröden");
break;
}
case 233121:
{
returnValue = F("Nienrögen");
break;
}
case 233122:
{
returnValue = F("Nienser Str.");
break;
}
case 233123:
{
returnValue = F("Nienstadt");
break;
}
case 233124:
{
returnValue = F("Nienstadtstr.");
break;
}
case 233125:
{
returnValue = F("Nienstedter Stadtweg");
break;
}
case 233126:
{
returnValue = F("Nienstedter Str.");
break;
}
case 233127:
{
returnValue = F("Nienstedter Weg");
break;
}
case 233128:
{
returnValue = F("Nienstädter Str.");
break;
}
case 233129:
{
returnValue = F("Nienstädter Weg");
break;
}
case 233130:
{
returnValue = F("Niensweg");
break;
}
case 233131:
{
returnValue = F("Nientalweg");
break;
}
case 233132:
{
returnValue = F("Nienwalder Str.");
break;
}
case 233133:
{
returnValue = F("Nienwohlder Eck");
break;
}
case 233134:
{
returnValue = F("Nienwohlder Str.");
break;
}
case 233135:
{
returnValue = F("Nienwohlder Weg");
break;
}
case 233136:
{
returnValue = F("Nienwohllder Str.");
break;
}
case 233137:
{
returnValue = F("Nieparser Weg");
break;
}
case 233138:
{
returnValue = F("Niependoor");
break;
}
case 233139:
{
returnValue = F("Nieper Str.");
break;
}
case 233140:
{
returnValue = F("Nieperfitz");
break;
}
case 233141:
{
returnValue = F("Niephagener Str.");
break;
}
case 233142:
{
returnValue = F("Niephagenstr.");
break;
}
case 233143:
{
returnValue = F("Niephauser Str.");
break;
}
case 233144:
{
returnValue = F("Nieplitzdamm");
break;
}
case 233145:
{
returnValue = F("Nieplitzweg");
break;
}
case 233146:
{
returnValue = F("Nieporter-Esch");
break;
}
case 233147:
{
returnValue = F("Nieps");
break;
}
case 233148:
{
returnValue = F("Nieratzer Weg");
break;
}
case 233149:
{
returnValue = F("Nierbachtal");
break;
}
case 233150:
{
returnValue = F("Nierck");
break;
}
case 233151:
{
returnValue = F("Nierenberger Hof");
break;
}
case 233152:
{
returnValue = F("Nierenberger Str.");
break;
}
case 233153:
{
returnValue = F("Nierenburger Str.");
break;
}
case 233154:
{
returnValue = F("Nierenfeld");
break;
}
case 233155:
{
returnValue = F("Nierenfelder Str.");
break;
}
case 233156:
{
returnValue = F("Nierenfeldweg");
break;
}
case 233157:
{
returnValue = F("Nierenhofer Str.");
break;
}
case 233158:
{
returnValue = F("Nierenhofstr.");
break;
}
case 233159:
{
returnValue = F("Nierenweg");
break;
}
case 233160:
{
returnValue = F("Nierenwiesen");
break;
}
case 233161:
{
returnValue = F("Nieresch");
break;
}
case 233162:
{
returnValue = F("Nierfeld");
break;
}
case 233163:
{
returnValue = F("Nierfeldstr.");
break;
}
case 233164:
{
returnValue = F("Nierfeldweg");
break;
}
case 233165:
{
returnValue = F("Nierhausener Str.");
break;
}
case 233166:
{
returnValue = F("Nieringser Weg");
break;
}
case 233167:
{
returnValue = F("Nieringstr.");
break;
}
case 233168:
{
returnValue = F("Nierleinsgasse");
break;
}
case 233169:
{
returnValue = F("Nierleistr.");
break;
}
case 233170:
{
returnValue = F("Nierlesbrunnen");
break;
}
case 233171:
{
returnValue = F("Nierlochstr.");
break;
}
case 233172:
{
returnValue = F("Niermannstr.");
break;
}
case 233173:
{
returnValue = F("Niermannsweg");
break;
}
case 233174:
{
returnValue = F("Niernsdorf");
break;
}
case 233175:
{
returnValue = F("Niernthalweg");
break;
}
case 233176:
{
returnValue = F("Nierott");
break;
}
case 233177:
{
returnValue = F("Nierow");
break;
}
case 233178:
{
returnValue = F("Niersaue");
break;
}
case 233179:
{
returnValue = F("Niersbendenallee");
break;
}
case 233180:
{
returnValue = F("Niersbruch");
break;
}
case 233181:
{
returnValue = F("Niersdamm");
break;
}
case 233182:
{
returnValue = F("Niersdonker Str.");
break;
}
case 233183:
{
returnValue = F("Niersenberger Str.");
break;
}
case 233184:
{
returnValue = F("Niersenbruchstr.");
break;
}
case 233185:
{
returnValue = F("Niersheide");
break;
}
case 233186:
{
returnValue = F("Niersparkbrücke");
break;
}
case 233187:
{
returnValue = F("Niersplank");
break;
}
case 233188:
{
returnValue = F("Nierspromenade");
break;
}
case 233189:
{
returnValue = F("Niersstr.");
break;
}
case 233190:
{
returnValue = F("Niersteheide");
break;
}
case 233191:
{
returnValue = F("Niersteiner Str.");
break;
}
case 233192:
{
returnValue = F("Niersteiner Weg");
break;
}
case 233193:
{
returnValue = F("Nierstenhof");
break;
}
case 233194:
{
returnValue = F("Nierster Str.");
break;
}
case 233195:
{
returnValue = F("Nierstr.");
break;
}
case 233196:
{
returnValue = F("Nierstr.r Weg");
break;
}
case 233197:
{
returnValue = F("Niersweg");
break;
}
case 233198:
{
returnValue = F("Niesauer Dorfstr.");
break;
}
case 233199:
{
returnValue = F("Niesauer Weg");
break;
}
case 233200:
{
returnValue = F("Niesaß");
break;
}
case 233201:
{
returnValue = F("Niesaßer Weg");
break;
}
case 233202:
{
returnValue = F("Niesberg");
break;
}
case 233203:
{
returnValue = F("Nieschweg");
break;
}
case 233204:
{
returnValue = F("Niesemühle");
break;
}
case 233205:
{
returnValue = F("Niesener Str.");
break;
}
case 233206:
{
returnValue = F("Niesenstr.");
break;
}
case 233207:
{
returnValue = F("Nieser Kirchweg");
break;
}
case 233208:
{
returnValue = F("Niesetal");
break;
}
case 233209:
{
returnValue = F("Niesetalstr.");
break;
}
case 233210:
{
returnValue = F("Nieseweg");
break;
}
case 233211:
{
returnValue = F("Niesgau");
break;
}
case 233212:
{
returnValue = F("Niesgraugaard");
break;
}
case 233213:
{
returnValue = F("Niesiger Str.");
break;
}
case 233214:
{
returnValue = F("Niesingsweg");
break;
}
case 233215:
{
returnValue = F("Niesitzer Str.");
break;
}
case 233216:
{
returnValue = F("Nieskyer Str.");
break;
}
case 233217:
{
returnValue = F("Niesmannshof");
break;
}
case 233218:
{
returnValue = F("Niessen Weg");
break;
}
case 233219:
{
returnValue = F("Niessenstr.");
break;
}
case 233220:
{
returnValue = F("Niestadt");
break;
}
case 233221:
{
returnValue = F("Niesteblick");
break;
}
case 233222:
{
returnValue = F("Niestedter Weg");
break;
}
case 233223:
{
returnValue = F("Niestener Str.");
break;
}
case 233224:
{
returnValue = F("Niester Str.");
break;
}
case 233225:
{
returnValue = F("Niestetalstr.");
break;
}
case 233226:
{
returnValue = F("Niestetalweg");
break;
}
case 233227:
{
returnValue = F("Niestleweg");
break;
}
case 233228:
{
returnValue = F("Niestner Weg");
break;
}
case 233229:
{
returnValue = F("Niesweg");
break;
}
case 233230:
{
returnValue = F("Nietecke");
break;
}
case 233231:
{
returnValue = F("Nietenberger Weg");
break;
}
case 233232:
{
returnValue = F("Nietenhausen");
break;
}
case 233233:
{
returnValue = F("Nietental");
break;
}
case 233234:
{
returnValue = F("Nietenweg");
break;
}
case 233235:
{
returnValue = F("Nietfeldsweg");
break;
}
case 233236:
{
returnValue = F("Niethaken");
break;
}
case 233237:
{
returnValue = F("Niethammerstr.");
break;
}
case 233238:
{
returnValue = F("Niethammerweg");
break;
}
case 233239:
{
returnValue = F("Niethausener Str.");
break;
}
case 233240:
{
returnValue = F("Nietheimer Str.");
break;
}
case 233241:
{
returnValue = F("Nietlebener Bürgerpark");
break;
}
case 233242:
{
returnValue = F("Nietlebener Str.");
break;
}
case 233243:
{
returnValue = F("Nietmühle");
break;
}
case 233244:
{
returnValue = F("Nietnerstr.");
break;
}
case 233245:
{
returnValue = F("Nietoft");
break;
}
case 233246:
{
returnValue = F("Nietwerderweg");
break;
}
case 233247:
{
returnValue = F("Nietzschestr.");
break;
}
case 233248:
{
returnValue = F("Nietzscheweg");
break;
}
case 233249:
{
returnValue = F("Nieukerker Str.");
break;
}
case 233250:
{
returnValue = F("Nieuwpoorter Str.");
break;
}
case 233251:
{
returnValue = F("Nieuwstraat - Aachener Str.");
break;
}
case 233252:
{
returnValue = F("Nievelshecker Str.");
break;
}
case 233253:
{
returnValue = F("Nievelsteiner Weg");
break;
}
case 233254:
{
returnValue = F("Nievelsteinstr.");
break;
}
case 233255:
{
returnValue = F("Nievenheimer Str.");
break;
}
case 233256:
{
returnValue = F("Nievergelder-Schneise");
break;
}
case 233257:
{
returnValue = F("Nievergoltstr.");
break;
}
case 233258:
{
returnValue = F("Nieverner Brücke");
break;
}
case 233259:
{
returnValue = F("Nieverner Str.");
break;
}
case 233260:
{
returnValue = F("Niewalder Str.");
break;
}
case 233261:
{
returnValue = F("Niewaldstr.");
break;
}
case 233262:
{
returnValue = F("Niewark");
break;
}
case 233263:
{
returnValue = F("Niewedder Weg");
break;
}
case 233264:
{
returnValue = F("Nieweg");
break;
}
case 233265:
{
returnValue = F("Niewelers Kamp");
break;
}
case 233266:
{
returnValue = F("Niewerder Esch");
break;
}
case 233267:
{
returnValue = F("Niewerth");
break;
}
case 233268:
{
returnValue = F("Niewerthstr.");
break;
}
case 233269:
{
returnValue = F("Niewisch");
break;
}
case 233270:
{
returnValue = F("Nießengasse");
break;
}
case 233271:
{
returnValue = F("Nießenhook");
break;
}
case 233272:
{
returnValue = F("Nießenstr.");
break;
}
case 233273:
{
returnValue = F("Nießgasse");
break;
}
case 233274:
{
returnValue = F("Nießings Kamp");
break;
}
case 233275:
{
returnValue = F("Nießler Tal");
break;
}
case 233276:
{
returnValue = F("Nießleweg");
break;
}
case 233277:
{
returnValue = F("Nießweg");
break;
}
case 233278:
{
returnValue = F("Niffeler");
break;
}
case 233279:
{
returnValue = F("Nigelenkamp");
break;
}
case 233280:
{
returnValue = F("Nigen Enn");
break;
}
case 233281:
{
returnValue = F("Nigge Weg");
break;
}
case 233282:
{
returnValue = F("Niggeln");
break;
}
case 233283:
{
returnValue = F("Niggeländerweg");
break;
}
case 233284:
{
returnValue = F("Niggemannstr.");
break;
}
case 233285:
{
returnValue = F("Niggemeyerstr.");
break;
}
case 233286:
{
returnValue = F("Niggenhuser Hof");
break;
}
case 233287:
{
returnValue = F("Niggenkamp");
break;
}
case 233288:
{
returnValue = F("Niggenweg");
break;
}
case 233289:
{
returnValue = F("Niggeweg");
break;
}
case 233290:
{
returnValue = F("Nigglstr.");
break;
}
case 233291:
{
returnValue = F("Nigglweg");
break;
}
case 233292:
{
returnValue = F("Nightingalestr.");
break;
}
case 233293:
{
returnValue = F("Niihooger");
break;
}
case 233294:
{
returnValue = F("Nijenkamp");
break;
}
case 233295:
{
returnValue = F("Nikestr.");
break;
}
case 233296:
{
returnValue = F("Nikeweg");
break;
}
case 233297:
{
returnValue = F("Nikkisostr.");
break;
}
case 233298:
{
returnValue = F("Niklas-Brobst-Str.");
break;
}
case 233299:
{
returnValue = F("Niklas-Luhmann-Str.");
break;
}
case 233300:
{
returnValue = F("Niklas-Vogt-Str.");
break;
}
case 233301:
{
returnValue = F("Niklas-von-Hagenauer-Str.");
break;
}
case 233302:
{
returnValue = F("Niklasengasse");
break;
}
case 233303:
{
returnValue = F("Niklasreuth");
break;
}
case 233304:
{
returnValue = F("Niklasreuther Str.");
break;
}
case 233305:
{
returnValue = F("Niklasstr.");
break;
}
case 233306:
{
returnValue = F("Niklastorstr.");
break;
}
case 233307:
{
returnValue = F("Niklaus-Ehlen-Str.");
break;
}
case 233308:
{
returnValue = F("Niklaus-Ehlen-Weg");
break;
}
case 233309:
{
returnValue = F("Niklausgrabenweg");
break;
}
case 233310:
{
returnValue = F("Niklausstr.");
break;
}
case 233311:
{
returnValue = F("Niklotstr.");
break;
}
case 233312:
{
returnValue = F("Nikola-Reinartz-Str.");
break;
}
case 233313:
{
returnValue = F("Nikola-Tesla-Str.");
break;
}
case 233314:
{
returnValue = F("Nikolai-Gubarew-Str.");
break;
}
case 233315:
{
returnValue = F("Nikolai-Kirchhof");
break;
}
case 233316:
{
returnValue = F("Nikolai-Martynenko-Weg");
break;
}
case 233317:
{
returnValue = F("Nikolai-Ostrowski-Str.");
break;
}
case 233318:
{
returnValue = F("Nikolaiallee");
break;
}
case 233319:
{
returnValue = F("Nikolaiberg");
break;
}
case 233320:
{
returnValue = F("Nikolaibergstr.");
break;
}
case 233321:
{
returnValue = F("Nikolaigasse");
break;
}
case 233322:
{
returnValue = F("Nikolaigraben");
break;
}
case 233323:
{
returnValue = F("Nikolaihöfer Fuhren");
break;
}
case 233324:
{
returnValue = F("Nikolaikirchgasse");
break;
}
case 233325:
{
returnValue = F("Nikolaikirchhof");
break;
}
case 233326:
{
returnValue = F("Nikolaikirchplatz");
break;
}
case 233327:
{
returnValue = F("Nikolaikirchstr.");
break;
}
case 233328:
{
returnValue = F("Nikolaikirchweg");
break;
}
case 233329:
{
returnValue = F("Nikolaiort");
break;
}
case 233330:
{
returnValue = F("Nikolaiplatz");
break;
}
case 233331:
{
returnValue = F("Nikolaistr.");
break;
}
case 233332:
{
returnValue = F("Nikolaiwall");
break;
}
case 233333:
{
returnValue = F("Nikolaiweg");
break;
}
case 233334:
{
returnValue = F("Nikolaizwinger");
break;
}
case 233335:
{
returnValue = F("Nikolajewweg");
break;
}
case 233336:
{
returnValue = F("Nikolas Erlen");
break;
}
case 233337:
{
returnValue = F("Nikolasseeweg");
break;
}
case 233338:
{
returnValue = F("Nikolasstr.");
break;
}
case 233339:
{
returnValue = F("Nikolastr.");
break;
}
case 233340:
{
returnValue = F("Nikolaus Kopernikus Str.");
break;
}
case 233341:
{
returnValue = F("Nikolaus-Adams-Str.");
break;
}
case 233342:
{
returnValue = F("Nikolaus-Alexander-Mair-Str.");
break;
}
case 233343:
{
returnValue = F("Nikolaus-Andreae-Str.");
break;
}
case 233344:
{
returnValue = F("Nikolaus-Andricki-Str.");
break;
}
case 233345:
{
returnValue = F("Nikolaus-August-Otto-Str.");
break;
}
case 233346:
{
returnValue = F("Nikolaus-Bahles-Str.");
break;
}
case 233347:
{
returnValue = F("Nikolaus-Barth-Weg");
break;
}
case 233348:
{
returnValue = F("Nikolaus-Becker-Str.");
break;
}
case 233349:
{
returnValue = F("Nikolaus-Bernett-Str.");
break;
}
case 233350:
{
returnValue = F("Nikolaus-Bernhard-Weg");
break;
}
case 233351:
{
returnValue = F("Nikolaus-Bohnenkamp-Str.");
break;
}
case 233352:
{
returnValue = F("Nikolaus-Boll-Str.");
break;
}
case 233353:
{
returnValue = F("Nikolaus-Brantl-Weg");
break;
}
case 233354:
{
returnValue = F("Nikolaus-Bruhns-Str.");
break;
}
case 233355:
{
returnValue = F("Nikolaus-Claessens-Str.");
break;
}
case 233356:
{
returnValue = F("Nikolaus-Cusanus-Str.");
break;
}
case 233357:
{
returnValue = F("Nikolaus-Cüpper-Str.");
break;
}
case 233358:
{
returnValue = F("Nikolaus-Debler-Str.");
break;
}
case 233359:
{
returnValue = F("Nikolaus-Deichl-Str.");
break;
}
case 233360:
{
returnValue = F("Nikolaus-Dopp-Str.");
break;
}
case 233361:
{
returnValue = F("Nikolaus-Däublin-Weg");
break;
}
case 233362:
{
returnValue = F("Nikolaus-Döllel-Str.");
break;
}
case 233363:
{
returnValue = F("Nikolaus-Dürkopp-Str.");
break;
}
case 233364:
{
returnValue = F("Nikolaus-Ehlen-Str.");
break;
}
case 233365:
{
returnValue = F("Nikolaus-Ehlen-Weg");
break;
}
case 233366:
{
returnValue = F("Nikolaus-Emmerich-Str.");
break;
}
case 233367:
{
returnValue = F("Nikolaus-Erb-Str.");
break;
}
case 233368:
{
returnValue = F("Nikolaus-Eseler-Str.");
break;
}
case 233369:
{
returnValue = F("Nikolaus-Fasel-Str.");
break;
}
case 233370:
{
returnValue = F("Nikolaus-Feulner-Str.");
break;
}
case 233371:
{
returnValue = F("Nikolaus-Fey-Str.");
break;
}
case 233372:
{
returnValue = F("Nikolaus-Fiebiger-Str.");
break;
}
case 233373:
{
returnValue = F("Nikolaus-Gercken-Str.");
break;
}
case 233374:
{
returnValue = F("Nikolaus-Gross-Str.");
break;
}
case 233375:
{
returnValue = F("Nikolaus-Groß-Platz");
break;
}
case 233376:
{
returnValue = F("Nikolaus-Groß-Str.");
break;
}
case 233377:
{
returnValue = F("Nikolaus-Groß-Weg");
break;
}
case 233378:
{
returnValue = F("Nikolaus-Heilmann-Str.");
break;
}
case 233379:
{
returnValue = F("Nikolaus-Henrich-Str.");
break;
}
case 233380:
{
returnValue = F("Nikolaus-Hesse-Str.");
break;
}
case 233381:
{
returnValue = F("Nikolaus-Hofmann-Str.");
break;
}
case 233382:
{
returnValue = F("Nikolaus-Homm-Park");
break;
}
case 233383:
{
returnValue = F("Nikolaus-Huber-Str.");
break;
}
case 233384:
{
returnValue = F("Nikolaus-Höfer-Str.");
break;
}
case 233385:
{
returnValue = F("Nikolaus-Höniger-Weg");
break;
}
case 233386:
{
returnValue = F("Nikolaus-Jansen-Str.");
break;
}
case 233387:
{
returnValue = F("Nikolaus-Kalff-Weg");
break;
}
case 233388:
{
returnValue = F("Nikolaus-Kallenborn-Weg");
break;
}
case 233389:
{
returnValue = F("Nikolaus-Knauf-Str.");
break;
}
case 233390:
{
returnValue = F("Nikolaus-Kopernikus-Str.");
break;
}
case 233391:
{
returnValue = F("Nikolaus-Kopernikus-Weg");
break;
}
case 233392:
{
returnValue = F("Nikolaus-Lauer-Str.");
break;
}
case 233393:
{
returnValue = F("Nikolaus-Lauterbach-Str.");
break;
}
case 233394:
{
returnValue = F("Nikolaus-Lauxen-Str.");
break;
}
case 233395:
{
returnValue = F("Nikolaus-Leis-Str.");
break;
}
case 233396:
{
returnValue = F("Nikolaus-Lenau-Platz");
break;
}
case 233397:
{
returnValue = F("Nikolaus-Lenau-Ring");
break;
}
case 233398:
{
returnValue = F("Nikolaus-Lenau-Str.");
break;
}
case 233399:
{
returnValue = F("Nikolaus-Lenau-Weg");
break;
}
case 233400:
{
returnValue = F("Nikolaus-Mangold-Str.");
break;
}
case 233401:
{
returnValue = F("Nikolaus-Marschalk-Str.");
break;
}
case 233402:
{
returnValue = F("Nikolaus-Matthiesen-Str.");
break;
}
case 233403:
{
returnValue = F("Nikolaus-Matz-Str.");
break;
}
case 233404:
{
returnValue = F("Nikolaus-Medler-Str.");
break;
}
case 233405:
{
returnValue = F("Nikolaus-Meeth-Str.");
break;
}
case 233406:
{
returnValue = F("Nikolaus-Molitor-Str.");
break;
}
case 233407:
{
returnValue = F("Nikolaus-Moll-Str.");
break;
}
case 233408:
{
returnValue = F("Nikolaus-Mommer-Str.");
break;
}
case 233409:
{
returnValue = F("Nikolaus-Mölter-Str.");
break;
}
case 233410:
{
returnValue = F("Nikolaus-Müller-Str.");
break;
}
case 233411:
{
returnValue = F("Nikolaus-Neeb-Str.");
break;
}
case 233412:
{
returnValue = F("Nikolaus-Nüssel-Str.");
break;
}
case 233413:
{
returnValue = F("Nikolaus-Otto-Ring");
break;
}
case 233414:
{
returnValue = F("Nikolaus-Otto-Str.");
break;
}
case 233415:
{
returnValue = F("Nikolaus-Otto-Weg");
break;
}
case 233416:
{
returnValue = F("Nikolaus-Palm-Str.");
break;
}
case 233417:
{
returnValue = F("Nikolaus-Priester-Str.");
break;
}
case 233418:
{
returnValue = F("Nikolaus-Rank-Str.");
break;
}
case 233419:
{
returnValue = F("Nikolaus-Reuter-Str.");
break;
}
case 233420:
{
returnValue = F("Nikolaus-Reuß-Str.");
break;
}
case 233421:
{
returnValue = F("Nikolaus-Schaten-Str.");
break;
}
case 233422:
{
returnValue = F("Nikolaus-Schmidt-Str.");
break;
}
case 233423:
{
returnValue = F("Nikolaus-Schneider-Str.");
break;
}
case 233424:
{
returnValue = F("Nikolaus-Schrempp-Str.");
break;
}
case 233425:
{
returnValue = F("Nikolaus-Schwarzkopf-Str.");
break;
}
case 233426:
{
returnValue = F("Nikolaus-Schwendemann-Str.");
break;
}
case 233427:
{
returnValue = F("Nikolaus-Selnecker-Platz");
break;
}
case 233428:
{
returnValue = F("Nikolaus-Seng-Str.");
break;
}
case 233429:
{
returnValue = F("Nikolaus-Singeisen-Weg");
break;
}
case 233430:
{
returnValue = F("Nikolaus-Streicher-Str.");
break;
}
case 233431:
{
returnValue = F("Nikolaus-Stuber-Str.");
break;
}
case 233432:
{
returnValue = F("Nikolaus-Theiner-Str.");
break;
}
case 233433:
{
returnValue = F("Nikolaus-Theis-Str.");
break;
}
case 233434:
{
returnValue = F("Nikolaus-Thielen-Str.");
break;
}
case 233435:
{
returnValue = F("Nikolaus-Thoman-Str.");
break;
}
case 233436:
{
returnValue = F("Nikolaus-Unruh-Str.");
break;
}
case 233437:
{
returnValue = F("Nikolaus-Weins-Str.");
break;
}
case 233438:
{
returnValue = F("Nikolaus-Winzenried-Platz");
break;
}
case 233439:
{
returnValue = F("Nikolaus-Worf-Weg");
break;
}
case 233440:
{
returnValue = F("Nikolaus-Ziegler-Str.");
break;
}
case 233441:
{
returnValue = F("Nikolaus-von-Flue-Str.");
break;
}
case 233442:
{
returnValue = F("Nikolaus-von-Flüe-Weg");
break;
}
case 233443:
{
returnValue = F("Nikolaus-von-Halem-Str.");
break;
}
case 233444:
{
returnValue = F("Nikolaus-von-Weis-Str.");
break;
}
case 233445:
{
returnValue = F("Nikolaus-von-der-Flüe-Str.");
break;
}
case 233446:
{
returnValue = F("Nikolausberg");
break;
}
case 233447:
{
returnValue = F("Nikolausberger Weg");
break;
}
case 233448:
{
returnValue = F("Nikolausbergstr.");
break;
}
case 233449:
{
returnValue = F("Nikolausbrücke");
break;
}
case 233450:
{
returnValue = F("Nikolausdorfer Str.");
break;
}
case 233451:
{
returnValue = F("Nikolausengasse");
break;
}
case 233452:
{
returnValue = F("Nikolausgasse");
break;
}
case 233453:
{
returnValue = F("Nikolausgraben");
break;
}
case 233454:
{
returnValue = F("Nikolausgrabenweg");
break;
}
case 233455:
{
returnValue = F("Nikolausgrund");
break;
}
case 233456:
{
returnValue = F("Nikolausgässle");
break;
}
case 233457:
{
returnValue = F("Nikolaushaldeweg");
break;
}
case 233458:
{
returnValue = F("Nikolaushof");
break;
}
case 233459:
{
returnValue = F("Nikolaushöhe");
break;
}
case 233460:
{
returnValue = F("Nikolauskirchstr.");
break;
}
case 233461:
{
returnValue = F("Nikolausklinge");
break;
}
case 233462:
{
returnValue = F("Nikolauspfad");
break;
}
case 233463:
{
returnValue = F("Nikolauspforte");
break;
}
case 233464:
{
returnValue = F("Nikolausplatz");
break;
}
case 233465:
{
returnValue = F("Nikolaussiedlung");
break;
}
case 233466:
{
returnValue = F("Nikolausstr.");
break;
}
case 233467:
{
returnValue = F("Nikolausufer");
break;
}
case 233468:
{
returnValue = F("Nikolausweg");
break;
}
case 233469:
{
returnValue = F("Nikoleyweg");
break;
}
case 233470:
{
returnValue = F("Nikolsburger Str.");
break;
}
case 233471:
{
returnValue = F("Nikolsdorfer Berg");
break;
}
case 233472:
{
returnValue = F("Nikolsdorfer Weg");
break;
}
case 233473:
{
returnValue = F("Nikoluas-Otto-Str.");
break;
}
case 233474:
{
returnValue = F("Nikomedespark");
break;
}
case 233475:
{
returnValue = F("Nikomedesstr.");
break;
}
case 233476:
{
returnValue = F("Nikomödiestr.");
break;
}
case 233477:
{
returnValue = F("Nikopoler Str.");
break;
}
case 233478:
{
returnValue = F("Nilkheimer Bahnhofstr.");
break;
}
case 233479:
{
returnValue = F("Nilkheimer Park");
break;
}
case 233480:
{
returnValue = F("Nill-Sattelweg");
break;
}
case 233481:
{
returnValue = F("Nillabergweg");
break;
}
case 233482:
{
returnValue = F("Nillbergstr.");
break;
}
case 233483:
{
returnValue = F("Nillesterweg");
break;
}
case 233484:
{
returnValue = F("Nilleweg");
break;
}
case 233485:
{
returnValue = F("Nillingweg");
break;
}
case 233486:
{
returnValue = F("Nillkopfweg");
break;
}
case 233487:
{
returnValue = F("Nilländer");
break;
}
case 233488:
{
returnValue = F("Nils-Holgersson-Ring");
break;
}
case 233489:
{
returnValue = F("Nilstr.");
break;
}
case 233490:
{
returnValue = F("Nimbergstr.");
break;
}
case 233491:
{
returnValue = F("Nimbschener Landstr.");
break;
}
case 233492:
{
returnValue = F("Nimbschener Str.");
break;
}
case 233493:
{
returnValue = F("Nimburger Str.");
break;
}
case 233494:
{
returnValue = F("Nimburger Weg");
break;
}
case 233495:
{
returnValue = F("Nimburgerstr.");
break;
}
case 233496:
{
returnValue = F("Nimmendohrstr.");
break;
}
case 233497:
{
returnValue = F("Nimmersather Str.");
break;
}
case 233498:
{
returnValue = F("Nimrodsteig");
break;
}
case 233499:
{
returnValue = F("Nimrodstr.");
break;
}
case 233500:
{
returnValue = F("Nimrodweg");
break;
}
case 233501:
{
returnValue = F("Nimschützer Str.");
break;
}
case 233502:
{
returnValue = F("Nimsstr.");
break;
}
case 233503:
{
returnValue = F("Nimstalstr.");
break;
}
case 233504:
{
returnValue = F("Nimsweg");
break;
}
case 233505:
{
returnValue = F("Nimtitz");
break;
}
case 233506:
{
returnValue = F("Nimwegener Str.");
break;
}
case 233507:
{
returnValue = F("Nimwegenstr.");
break;
}
case 233508:
{
returnValue = F("Nimweger Str.");
break;
}
case 233509:
{
returnValue = F("Nina-Simone-Str.");
break;
}
case 233510:
{
returnValue = F("Nina-Simone-Weg");
break;
}
case 233511:
{
returnValue = F("Nina-Winkel-Str.");
break;
}
case 233512:
{
returnValue = F("Nina-Zober-Str.");
break;
}
case 233513:
{
returnValue = F("Ninaweg");
break;
}
case 233514:
{
returnValue = F("Nincoper Deich");
break;
}
case 233515:
{
returnValue = F("Nincoper Str.");
break;
}
case 233516:
{
returnValue = F("Nindorf");
break;
}
case 233517:
{
returnValue = F("Nindorfer Deichfeld");
break;
}
case 233518:
{
returnValue = F("Nindorfer Eichende");
break;
}
case 233519:
{
returnValue = F("Nindorfer Landstr.");
break;
}
case 233520:
{
returnValue = F("Nindorfer Moorweg");
break;
}
case 233521:
{
returnValue = F("Nindorfer Str.");
break;
}
case 233522:
{
returnValue = F("Nindorfer Weg");
break;
}
case 233523:
{
returnValue = F("Ningbostr.");
break;
}
case 233524:
{
returnValue = F("Nininghove");
break;
}
case 233525:
{
returnValue = F("Ninive");
break;
}
case 233526:
{
returnValue = F("Niniveer Weg");
break;
}
case 233527:
{
returnValue = F("Nino-Erné-Str.");
break;
}
case 233528:
{
returnValue = F("Ninth Street");
break;
}
case 233529:
{
returnValue = F("Niobestr.");
break;
}
case 233530:
{
returnValue = F("Niobeweg");
break;
}
case 233531:
{
returnValue = F("Niorter Str.");
break;
}
case 233532:
{
returnValue = F("Nipkendeyer Weg");
break;
}
case 233533:
{
returnValue = F("Nipkowstr.");
break;
}
case 233534:
{
returnValue = F("Nippenburger Str.");
break;
}
case 233535:
{
returnValue = F("Nippenburgstr.");
break;
}
case 233536:
{
returnValue = F("Nipperstr.");
break;
}
case 233537:
{
returnValue = F("Nippes");
break;
}
case 233538:
{
returnValue = F("Nippesstr.");
break;
}
case 233539:
{
returnValue = F("Nirgenaplatz");
break;
}
case 233540:
{
returnValue = F("Nirgenastr.");
break;
}
case 233541:
{
returnValue = F("Nirkendorfer Weg");
break;
}
case 233542:
{
returnValue = F("Nirm");
break;
}
case 233543:
{
returnValue = F("Nirmer Platz");
break;
}
case 233544:
{
returnValue = F("Nirmer Str.");
break;
}
case 233545:
{
returnValue = F("Nirmer Weg");
break;
}
case 233546:
{
returnValue = F("Nirmsdorfer Str.");
break;
}
case 233547:
{
returnValue = F("Nirnbergstr.");
break;
}
case 233548:
{
returnValue = F("Nirschlkofener Str.");
break;
}
case 233549:
{
returnValue = F("Nirschlstr.");
break;
}
case 233550:
{
returnValue = F("Nischwitz");
break;
}
case 233551:
{
returnValue = F("Nischwitzer Str.");
break;
}
case 233552:
{
returnValue = F("Nispelter Kehr");
break;
}
case 233553:
{
returnValue = F("Nissaer Weg");
break;
}
case 233554:
{
returnValue = F("Nissensgang");
break;
}
case 233555:
{
returnValue = F("Nissenshörn");
break;
}
case 233556:
{
returnValue = F("Nissenshörner Weg");
break;
}
case 233557:
{
returnValue = F("Nissenstr.");
break;
}
case 233558:
{
returnValue = F("Nissingstr.");
break;
}
case 233559:
{
returnValue = F("Nissleswiesen");
break;
}
case 233560:
{
returnValue = F("Nistelfeld");
break;
}
case 233561:
{
returnValue = F("Nistelitz");
break;
}
case 233562:
{
returnValue = F("Nistenbergstr.");
break;
}
case 233563:
{
returnValue = F("Nisterberger Weg");
break;
}
case 233564:
{
returnValue = F("Nisterbergerweg");
break;
}
case 233565:
{
returnValue = F("Nisterfeld");
break;
}
case 233566:
{
returnValue = F("Nistermühle");
break;
}
case 233567:
{
returnValue = F("Nisterpfad");
break;
}
case 233568:
{
returnValue = F("Nisterstr.");
break;
}
case 233569:
{
returnValue = F("Nistertalstr.");
break;
}
case 233570:
{
returnValue = F("Nisterweg");
break;
}
case 233571:
{
returnValue = F("Nistkastenallee");
break;
}
case 233572:
{
returnValue = F("Nistlbergweg");
break;
}
case 233573:
{
returnValue = F("Nita-Lindenberg-Str.");
break;
}
case 233574:
{
returnValue = F("Nitschareuth");
break;
}
case 233575:
{
returnValue = F("Nitschestr.");
break;
}
case 233576:
{
returnValue = F("Nitteler Str.");
break;
}
case 233577:
{
returnValue = F("Nittenauer Str.");
break;
}
case 233578:
{
returnValue = F("Nittendorfer Str.");
break;
}
case 233579:
{
returnValue = F("Nittendorfer Weg");
break;
}
case 233580:
{
returnValue = F("Nittumer Weg");
break;
}
case 233581:
{
returnValue = F("Nitzblick");
break;
}
case 233582:
{
returnValue = F("Nitzelweg");
break;
}
case 233583:
{
returnValue = F("Nitzenhäuser Str.");
break;
}
case 233584:
{
returnValue = F("Nitzenweiler");
break;
}
case 233585:
{
returnValue = F("Nitzer Str.");
break;
}
case 233586:
{
returnValue = F("Nitzer Weg");
break;
}
case 233587:
{
returnValue = F("Nitzestr.");
break;
}
case 233588:
{
returnValue = F("Nitzgrund");
break;
}
case 233589:
{
returnValue = F("Nitzschhammerstr.");
break;
}
case 233590:
{
returnValue = F("Nitzschhammerweg");
break;
}
case 233591:
{
returnValue = F("Nitzschkaer Str.");
break;
}
case 233592:
{
returnValue = F("Nitzschkestr.");
break;
}
case 233593:
{
returnValue = F("Nitzschkeweg");
break;
}
case 233594:
{
returnValue = F("Nitzschstr.");
break;
}
case 233595:
{
returnValue = F("Niwenburgstr.");
break;
}
case 233596:
{
returnValue = F("Nixbrunnenstr.");
break;
}
case 233597:
{
returnValue = F("Nixböthestr.");
break;
}
case 233598:
{
returnValue = F("Nixdorf");
break;
}
case 233599:
{
returnValue = F("Nixdorfer Str.");
break;
}
case 233600:
{
returnValue = F("Nixdörp");
break;
}
case 233601:
{
returnValue = F("Nixenburg");
break;
}
case 233602:
{
returnValue = F("Nixenfeld");
break;
}
case 233603:
{
returnValue = F("Nixenring");
break;
}
case 233604:
{
returnValue = F("Nixensteig");
break;
}
case 233605:
{
returnValue = F("Nixenstr.");
break;
}
case 233606:
{
returnValue = F("Nixenweg");
break;
}
case 233607:
{
returnValue = F("Nixeweg");
break;
}
case 233608:
{
returnValue = F("Nixgasse");
break;
}
case 233609:
{
returnValue = F("Nixhütter Weg");
break;
}
case 233610:
{
returnValue = F("Nizzaallee");
break;
}
case 233611:
{
returnValue = F("Nizzaplätzchen");
break;
}
case 233612:
{
returnValue = F("Nizzastr.");
break;
}
case 233613:
{
returnValue = F("Nizzatal");
break;
}
case 233614:
{
returnValue = F("Nizzaweg");
break;
}
case 233615:
{
returnValue = F("Nizzestr.");
break;
}
case 233616:
{
returnValue = F("Nißlgasse");
break;
}
case 233617:
{
returnValue = F("Nißlpointweg");
break;
}
case 233618:
{
returnValue = F("Nißmaer Hauptstr.");
break;
}
case 233619:
{
returnValue = F("Nißmaer Schulstr.");
break;
}
case 233620:
{
returnValue = F("No de Halloh");
break;
}
case 233621:
{
returnValue = F("No de Masch");
break;
}
case 233622:
{
returnValue = F("No de Schmed");
break;
}
case 233623:
{
returnValue = F("No de Schwarten Geest");
break;
}
case 233624:
{
returnValue = F("No'n Stüh");
break;
}
case 233625:
{
returnValue = F("Noa de Eek");
break;
}
case 233626:
{
returnValue = F("Noa de Heide");
break;
}
case 233627:
{
returnValue = F("Noa de Mergelschacht");
break;
}
case 233628:
{
returnValue = F("Noa-Wolff-Weg");
break;
}
case 233629:
{
returnValue = F("Noackstr.");
break;
}
case 233630:
{
returnValue = F("Noailles Str.");
break;
}
case 233631:
{
returnValue = F("Nobbe");
break;
}
case 233632:
{
returnValue = F("Nobbenburger Str.");
break;
}
case 233633:
{
returnValue = F("Nobbenort");
break;
}
case 233634:
{
returnValue = F("Nobbenstr.");
break;
}
case 233635:
{
returnValue = F("Nobbin");
break;
}
case 233636:
{
returnValue = F("Nobelring");
break;
}
case 233637:
{
returnValue = F("Nobelstr.");
break;
}
case 233638:
{
returnValue = F("Nobertstr.");
break;
}
case 233639:
{
returnValue = F("Nobiskruger Weg");
break;
}
case 233640:
{
returnValue = F("Nobiskrüger Allee");
break;
}
case 233641:
{
returnValue = F("Nobispfad");
break;
}
case 233642:
{
returnValue = F("Nobisstr.");
break;
}
case 233643:
{
returnValue = F("Nobisweg");
break;
}
case 233644:
{
returnValue = F("Nobitzer Str.");
break;
}
case 233645:
{
returnValue = F("Noblingstr.");
break;
}
case 233646:
{
returnValue = F("Noblingweg");
break;
}
case 233647:
{
returnValue = F("Nochen");
break;
}
case 233648:
{
returnValue = F("Nochener Str.");
break;
}
case 233649:
{
returnValue = F("Nocherner Bach");
break;
}
case 233650:
{
returnValue = F("Nochtener Düne");
break;
}
case 233651:
{
returnValue = F("Nochtener Weg");
break;
}
case 233652:
{
returnValue = F("Nocke");
break;
}
case 233653:
{
returnValue = F("Nocken");
break;
}
case 233654:
{
returnValue = F("Nockenbergstr.");
break;
}
case 233655:
{
returnValue = F("Nockenhofweg");
break;
}
case 233656:
{
returnValue = F("Nockenstr.");
break;
}
case 233657:
{
returnValue = F("Nockenthaler Weg");
break;
}
case 233658:
{
returnValue = F("Nockenwaldweg");
break;
}
case 233659:
{
returnValue = F("Nockenweg");
break;
}
case 233660:
{
returnValue = F("Nockfeldweg");
break;
}
case 233661:
{
returnValue = F("Nockhergasse");
break;
}
case 233662:
{
returnValue = F("Nocksteinstr.");
break;
}
case 233663:
{
returnValue = F("Nocksteinweg");
break;
}
case 233664:
{
returnValue = F("Nodhausen");
break;
}
case 233665:
{
returnValue = F("Nodhausener Str.");
break;
}
case 233666:
{
returnValue = F("Nodorpsweg");
break;
}
case 233667:
{
returnValue = F("Nodweg");
break;
}
case 233668:
{
returnValue = F("Noeggerathstr.");
break;
}
case 233669:
{
returnValue = F("Noellestr.");
break;
}
case 233670:
{
returnValue = F("Noelleweg");
break;
}
case 233671:
{
returnValue = F("Noerer Str.");
break;
}
case 233672:
{
returnValue = F("Noeser Str.");
break;
}
case 233673:
{
returnValue = F("Noetherstr.");
break;
}
case 233674:
{
returnValue = F("Noetherweg");
break;
}
case 233675:
{
returnValue = F("Noethigstr.");
break;
}
case 233676:
{
returnValue = F("Noethlichsstr.");
break;
}
case 233677:
{
returnValue = F("Nofler Str.");
break;
}
case 233678:
{
returnValue = F("Nogatstr.");
break;
}
case 233679:
{
returnValue = F("Nogatweg");
break;
}
case 233680:
{
returnValue = F("Nogaweg");
break;
}
case 233681:
{
returnValue = F("Nogent-le-Rotrou-Str.");
break;
}
case 233682:
{
returnValue = F("Nogentpark");
break;
}
case 233683:
{
returnValue = F("Noherrstr.");
break;
}
case 233684:
{
returnValue = F("Nohfeldener Str.");
break;
}
case 233685:
{
returnValue = F("Nohlmannstr.");
break;
}
case 233686:
{
returnValue = F("Nohlstr.");
break;
}
case 233687:
{
returnValue = F("Nohner Str.");
break;
}
case 233688:
{
returnValue = F("Nohraer Dorfstr.");
break;
}
case 233689:
{
returnValue = F("Nohraer Weg");
break;
}
case 233690:
{
returnValue = F("Nohweg");
break;
}
case 233691:
{
returnValue = F("Nohwiesenweg");
break;
}
case 233692:
{
returnValue = F("Noimergasse");
break;
}
case 233693:
{
returnValue = F("Noirestr.");
break;
}
case 233694:
{
returnValue = F("Noisling");
break;
}
case 233695:
{
returnValue = F("Noislinger Str.");
break;
}
case 233696:
{
returnValue = F("Noithausener Str.");
break;
}
case 233697:
{
returnValue = F("Noitjeweg");
break;
}
case 233698:
{
returnValue = F("Noitzscher Str.");
break;
}
case 233699:
{
returnValue = F("Nokkstr.");
break;
}
case 233700:
{
returnValue = F("Nolaystr.");
break;
}
case 233701:
{
returnValue = F("Noldenkothen");
break;
}
case 233702:
{
returnValue = F("Noldenweg");
break;
}
case 233703:
{
returnValue = F("Noldenöhde");
break;
}
case 233704:
{
returnValue = F("Noldering");
break;
}
case 233705:
{
returnValue = F("Noldestr.");
break;
}
case 233706:
{
returnValue = F("Noldeweg");
break;
}
case 233707:
{
returnValue = F("Noldplatz");
break;
}
case 233708:
{
returnValue = F("Nollböhlstr.");
break;
}
case 233709:
{
returnValue = F("Nollenackerweg");
break;
}
case 233710:
{
returnValue = F("Nollenberg");
break;
}
case 233711:
{
returnValue = F("Nollenblick");
break;
}
case 233712:
{
returnValue = F("Nollenburger Weg");
break;
}
case 233713:
{
returnValue = F("Nollendorfer Platz");
break;
}
case 233714:
{
returnValue = F("Nollendorfer Str.");
break;
}
case 233715:
{
returnValue = F("Nollendorfstr.");
break;
}
case 233716:
{
returnValue = F("Nollenhausträßchen");
break;
}
case 233717:
{
returnValue = F("Nollenkamp");
break;
}
case 233718:
{
returnValue = F("Nollenlinde");
break;
}
case 233719:
{
returnValue = F("Nollenloch");
break;
}
case 233720:
{
returnValue = F("Nollenpad");
break;
}
case 233721:
{
returnValue = F("Nollenpark");
break;
}
case 233722:
{
returnValue = F("Nollenrundweg");
break;
}
case 233723:
{
returnValue = F("Nollenstr.");
break;
}
case 233724:
{
returnValue = F("Nollenweg");
break;
}
case 233725:
{
returnValue = F("Noller Weg");
break;
}
case 233726:
{
returnValue = F("Nollesweg");
break;
}
case 233727:
{
returnValue = F("Nollgasse");
break;
}
case 233728:
{
returnValue = F("Nollgäßchen");
break;
}
case 233729:
{
returnValue = F("Nollhofstr.");
break;
}
case 233730:
{
returnValue = F("Nollmannsheide");
break;
}
case 233731:
{
returnValue = F("Nollstr.");
break;
}
case 233732:
{
returnValue = F("Nollweg");
break;
}
case 233733:
{
returnValue = F("Nolsenstr.");
break;
}
case 233734:
{
returnValue = F("Noltehof");
break;
}
case 233735:
{
returnValue = F("Noltemeyerhöfe");
break;
}
case 233736:
{
returnValue = F("Noltenburg");
break;
}
case 233737:
{
returnValue = F("Noltengasse");
break;
}
case 233738:
{
returnValue = F("Noltengängesken");
break;
}
case 233739:
{
returnValue = F("Noltenhöferweg");
break;
}
case 233740:
{
returnValue = F("Noltenweg");
break;
}
case 233741:
{
returnValue = F("Noltestr.");
break;
}
case 233742:
{
returnValue = F("Nolteweg");
break;
}
case 233743:
{
returnValue = F("Noltinastr.");
break;
}
case 233744:
{
returnValue = F("Noltings Hof");
break;
}
case 233745:
{
returnValue = F("Noltings Weg");
break;
}
case 233746:
{
returnValue = F("Noltzstr.");
break;
}
case 233747:
{
returnValue = F("Nolzeruhe");
break;
}
case 233748:
{
returnValue = F("Nomi-Rubel-Str.");
break;
}
case 233749:
{
returnValue = F("Nonengrund");
break;
}
case 233750:
{
returnValue = F("Nonn");
break;
}
case 233751:
{
returnValue = F("Nonnbachstr.");
break;
}
case 233752:
{
returnValue = F("Nonnbergstr.");
break;
}
case 233753:
{
returnValue = F("Nonnen-Pättken");
break;
}
case 233754:
{
returnValue = F("Nonnenahe");
break;
}
case 233755:
{
returnValue = F("Nonnenaue");
break;
}
case 233756:
{
returnValue = F("Nonnenauweg");
break;
}
case 233757:
{
returnValue = F("Nonnenbach");
break;
}
case 233758:
{
returnValue = F("Nonnenbacher Weg");
break;
}
case 233759:
{
returnValue = F("Nonnenbachstr.");
break;
}
case 233760:
{
returnValue = F("Nonnenbachtal");
break;
}
case 233761:
{
returnValue = F("Nonnenbachweg");
break;
}
case 233762:
{
returnValue = F("Nonnenberg");
break;
}
case 233763:
{
returnValue = F("Nonnenberger Str.");
break;
}
case 233764:
{
returnValue = F("Nonnenbergstr.");
break;
}
case 233765:
{
returnValue = F("Nonnenbergweg");
break;
}
case 233766:
{
returnValue = F("Nonnenbrucher Str.");
break;
}
case 233767:
{
returnValue = F("Nonnenbrunnen");
break;
}
case 233768:
{
returnValue = F("Nonnenbrunnenweg");
break;
}
case 233769:
{
returnValue = F("Nonnenbrücke");
break;
}
case 233770:
{
returnValue = F("Nonnenburg");
break;
}
case 233771:
{
returnValue = F("Nonnenburgstr.");
break;
}
case 233772:
{
returnValue = F("Nonnenbusch");
break;
}
case 233773:
{
returnValue = F("Nonnenbuschweg");
break;
}
case 233774:
{
returnValue = F("Nonnenbäume");
break;
}
case 233775:
{
returnValue = F("Nonnenbühl");
break;
}
case 233776:
{
returnValue = F("Nonnenbühlstr.");
break;
}
case 233777:
{
returnValue = F("Nonnendorf");
break;
}
case 233778:
{
returnValue = F("Nonnendorfer Weg");
break;
}
case 233779:
{
returnValue = F("Nonneneiche");
break;
}
case 233780:
{
returnValue = F("Nonnenerlen");
break;
}
case 233781:
{
returnValue = F("Nonnenfettweide");
break;
}
case 233782:
{
returnValue = F("Nonnenforst");
break;
}
case 233783:
{
returnValue = F("Nonnengarten");
break;
}
case 233784:
{
returnValue = F("Nonnengasse");
break;
}
case 233785:
{
returnValue = F("Nonnengiebelweg");
break;
}
case 233786:
{
returnValue = F("Nonnengrabenweg");
break;
}
case 233787:
{
returnValue = F("Nonnengrund");
break;
}
case 233788:
{
returnValue = F("Nonnengärten");
break;
}
case 233789:
{
returnValue = F("Nonnengäßchen");
break;
}
case 233790:
{
returnValue = F("Nonnenhausweg");
break;
}
case 233791:
{
returnValue = F("Nonnenheider Weg");
break;
}
case 233792:
{
returnValue = F("Nonnenhof");
break;
}
case 233793:
{
returnValue = F("Nonnenhofer Str.");
break;
}
case 233794:
{
returnValue = F("Nonnenhofstr.");
break;
}
case 233795:
{
returnValue = F("Nonnenholzstr.");
break;
}
case 233796:
{
returnValue = F("Nonnenholzweg");
break;
}
case 233797:
{
returnValue = F("Nonnenhorner Str.");
break;
}
case 233798:
{
returnValue = F("Nonnenhöfchen");
break;
}
case 233799:
{
returnValue = F("Nonnenhölzleweg");
break;
}
case 233800:
{
returnValue = F("Nonnenkamp");
break;
}
case 233801:
{
returnValue = F("Nonnenkampsteg");
break;
}
case 233802:
{
returnValue = F("Nonnenklinge");
break;
}
case 233803:
{
returnValue = F("Nonnenley");
break;
}
case 233804:
{
returnValue = F("Nonnenmattenweg");
break;
}
case 233805:
{
returnValue = F("Nonnenmattweiherweg");
break;
}
case 233806:
{
returnValue = F("Nonnenmühle");
break;
}
case 233807:
{
returnValue = F("Nonnenpatt");
break;
}
case 233808:
{
returnValue = F("Nonnenpfad");
break;
}
case 233809:
{
returnValue = F("Nonnenplan");
break;
}
case 233810:
{
returnValue = F("Nonnenplatz");
break;
}
case 233811:
{
returnValue = F("Nonnenpädken");
break;
}
case 233812:
{
returnValue = F("Nonnenpütz");
break;
}
case 233813:
{
returnValue = F("Nonnenrain");
break;
}
case 233814:
{
returnValue = F("Nonnenrott");
break;
}
case 233815:
{
returnValue = F("Nonnenröder Str.");
break;
}
case 233816:
{
returnValue = F("Nonnenröther Str.");
break;
}
case 233817:
{
returnValue = F("Nonnensee");
break;
}
case 233818:
{
returnValue = F("Nonnenseestr.");
break;
}
case 233819:
{
returnValue = F("Nonnenstaffel");
break;
}
case 233820:
{
returnValue = F("Nonnensteg");
break;
}
case 233821:
{
returnValue = F("Nonnensteig");
break;
}
case 233822:
{
returnValue = F("Nonnensteiner Weg");
break;
}
case 233823:
{
returnValue = F("Nonnenstelle");
break;
}
case 233824:
{
returnValue = F("Nonnenstieg");
break;
}
case 233825:
{
returnValue = F("Nonnenstiege");
break;
}
case 233826:
{
returnValue = F("Nonnenstr.");
break;
}
case 233827:
{
returnValue = F("Nonnenstrombergstr.");
break;
}
case 233828:
{
returnValue = F("Nonnenstrombergweg");
break;
}
case 233829:
{
returnValue = F("Nonnensuselstr.");
break;
}
case 233830:
{
returnValue = F("Nonnental");
break;
}
case 233831:
{
returnValue = F("Nonnenwald");
break;
}
case 233832:
{
returnValue = F("Nonnenwaldstr.");
break;
}
case 233833:
{
returnValue = F("Nonnenwaldweg");
break;
}
case 233834:
{
returnValue = F("Nonnenwall");
break;
}
case 233835:
{
returnValue = F("Nonnenwasenstr.");
break;
}
case 233836:
{
returnValue = F("Nonnenweg");
break;
}
case 233837:
{
returnValue = F("Nonnenwegle");
break;
}
case 233838:
{
returnValue = F("Nonnenweierer Hauptstr.");
break;
}
case 233839:
{
returnValue = F("Nonnenweilerweg");
break;
}
case 233840:
{
returnValue = F("Nonnenwerder");
break;
}
case 233841:
{
returnValue = F("Nonnenwerth");
break;
}
case 233842:
{
returnValue = F("Nonnenwerther Str.");
break;
}
case 233843:
{
returnValue = F("Nonnenwies");
break;
}
case 233844:
{
returnValue = F("Nonnenwiese");
break;
}
case 233845:
{
returnValue = F("Nonnenwiesenweg");
break;
}
case 233846:
{
returnValue = F("Nonnenwingert");
break;
}
case 233847:
{
returnValue = F("Nonnenwäscheweg");
break;
}
case 233848:
{
returnValue = F("Nonnenäcker");
break;
}
case 233849:
{
returnValue = F("Nonneplatz");
break;
}
case 233850:
{
returnValue = F("Nonner Steg");
break;
}
case 233851:
{
returnValue = F("Nonner Str.");
break;
}
case 233852:
{
returnValue = F("Nonnestr.");
break;
}
case 233853:
{
returnValue = F("Nonnevitz");
break;
}
case 233854:
{
returnValue = F("Nonnhof");
break;
}
case 233855:
{
returnValue = F("Nonnhofer Str.");
break;
}
case 233856:
{
returnValue = F("Nonnhäuser Weg");
break;
}
case 233857:
{
returnValue = F("Nonnstr.");
break;
}
case 233858:
{
returnValue = F("Nonntal");
break;
}
case 233859:
{
returnValue = F("Nonnweiler Str.");
break;
}
case 233860:
{
returnValue = F("Nonnwiesenweg");
break;
}
case 233861:
{
returnValue = F("Nonroder Str.");
break;
}
case 233862:
{
returnValue = F("Nonroder Weg");
break;
}
case 233863:
{
returnValue = F("Nookreuz");
break;
}
case 233864:
{
returnValue = F("Noorblick");
break;
}
case 233865:
{
returnValue = F("Noorder Jaat");
break;
}
case 233866:
{
returnValue = F("Noorder Kaalkamp");
break;
}
case 233867:
{
returnValue = F("Noorder-Hook");
break;
}
case 233868:
{
returnValue = F("Noorderloog");
break;
}
case 233869:
{
returnValue = F("Noorderpad");
break;
}
case 233870:
{
returnValue = F("Noorderstrunwai");
break;
}
case 233871:
{
returnValue = F("Noordertün");
break;
}
case 233872:
{
returnValue = F("Noorderwoi");
break;
}
case 233873:
{
returnValue = F("Noorndörp");
break;
}
case 233874:
{
returnValue = F("Noorstr.");
break;
}
case 233875:
{
returnValue = F("Noortmer Chaussee");
break;
}
case 233876:
{
returnValue = F("Noorwanderweg");
break;
}
case 233877:
{
returnValue = F("Noorweg");
break;
}
case 233878:
{
returnValue = F("Nopitschstr.");
break;
}
case 233879:
{
returnValue = F("Noppdorf");
break;
}
case 233880:
{
returnValue = F("Noppenberger Str.");
break;
}
case 233881:
{
returnValue = F("Noppengasse");
break;
}
case 233882:
{
returnValue = F("Noppennagold");
break;
}
case 233883:
{
returnValue = F("Noppenplatz");
break;
}
case 233884:
{
returnValue = F("Nopper Weg");
break;
}
case 233885:
{
returnValue = F("Noppernhag");
break;
}
case 233886:
{
returnValue = F("Noppers Waldweg");
break;
}
case 233887:
{
returnValue = F("Nopperweg");
break;
}
case 233888:
{
returnValue = F("Noppiusstr.");
break;
}
case 233889:
{
returnValue = F("Nopplinger Str.");
break;
}
case 233890:
{
returnValue = F("Nora-Pfefferkorn-Str.");
break;
}
case 233891:
{
returnValue = F("Nora-Platiel-Str.");
break;
}
case 233892:
{
returnValue = F("Norbachstr.");
break;
}
case 233893:
{
returnValue = F("Norbert-Baumann-Weg");
break;
}
case 233894:
{
returnValue = F("Norbert-Becher-Str.");
break;
}
case 233895:
{
returnValue = F("Norbert-Bögershausen-Str.");
break;
}
case 233896:
{
returnValue = F("Norbert-Fischer-Str.");
break;
}
case 233897:
{
returnValue = F("Norbert-Giltjes-Str.");
break;
}
case 233898:
{
returnValue = F("Norbert-Glanzberg-Str.");
break;
}
case 233899:
{
returnValue = F("Norbert-Hartan-Weg");
break;
}
case 233900:
{
returnValue = F("Norbert-Heßbrüggen-Str.");
break;
}
case 233901:
{
returnValue = F("Norbert-Hochsieder-Str.");
break;
}
case 233902:
{
returnValue = F("Norbert-Jacques-Weg");
break;
}
case 233903:
{
returnValue = F("Norbert-Jäger-Str.");
break;
}
case 233904:
{
returnValue = F("Norbert-Kaufholt-Weg");
break;
}
case 233905:
{
returnValue = F("Norbert-Kellnberger-Str.");
break;
}
case 233906:
{
returnValue = F("Norbert-Kerkel-Str.");
break;
}
case 233907:
{
returnValue = F("Norbert-Löffler-Weg");
break;
}
case 233908:
{
returnValue = F("Norbert-Michel-Str.");
break;
}
case 233909:
{
returnValue = F("Norbert-Pees-Weg");
break;
}
case 233910:
{
returnValue = F("Norbert-Rethmann-Platz");
break;
}
case 233911:
{
returnValue = F("Norbert-Scheele-Str.");
break;
}
case 233912:
{
returnValue = F("Norbert-Schmidt-Str.");
break;
}
case 233913:
{
returnValue = F("Norbert-Schuster-Str.");
break;
}
case 233914:
{
returnValue = F("Norbert-Steger-Str.");
break;
}
case 233915:
{
returnValue = F("Norbertastr.");
break;
}
case 233916:
{
returnValue = F("Norbertinerstr.");
break;
}
case 233917:
{
returnValue = F("Norbertinerweg");
break;
}
case 233918:
{
returnValue = F("Norbertpark");
break;
}
case 233919:
{
returnValue = F("Norbertplatz");
break;
}
case 233920:
{
returnValue = F("Norbertshöhe");
break;
}
case 233921:
{
returnValue = F("Norbertstr.");
break;
}
case 233922:
{
returnValue = F("Norbertusstr.");
break;
}
case 233923:
{
returnValue = F("Norbertusweg");
break;
}
case 233924:
{
returnValue = F("Norbertweg");
break;
}
case 233925:
{
returnValue = F("Norbrüg");
break;
}
case 233926:
{
returnValue = F("Norciastr.");
break;
}
case 233927:
{
returnValue = F("Nord");
break;
}
case 233928:
{
returnValue = F("Nord-Erbach");
break;
}
case 233929:
{
returnValue = F("Nord-Geräumt");
break;
}
case 233930:
{
returnValue = F("Nord-Ost-Ring");
break;
}
case 233931:
{
returnValue = F("Nord-Ost-Umgehung Freising (B 301)");
break;
}
case 233932:
{
returnValue = F("Nord-Str.");
break;
}
case 233933:
{
returnValue = F("Nord-Süd Weg");
break;
}
case 233934:
{
returnValue = F("Nord-Süd-Achse");
break;
}
case 233935:
{
returnValue = F("Nord-Süd-Brücke");
break;
}
case 233936:
{
returnValue = F("Nord-Süd-Spange");
break;
}
case 233937:
{
returnValue = F("Nord-Süd-Str.");
break;
}
case 233938:
{
returnValue = F("Nord-West");
break;
}
case 233939:
{
returnValue = F("Nord-West-Allee");
break;
}
case 233940:
{
returnValue = F("Nord-West-Ring");
break;
}
case 233941:
{
returnValue = F("Nord-West-Ring-Str.");
break;
}
case 233942:
{
returnValue = F("Nord-West-Str.");
break;
}
case 233943:
{
returnValue = F("Nord-West-Umfahrung");
break;
}
case 233944:
{
returnValue = F("Nord-West-Umgehung");
break;
}
case 233945:
{
returnValue = F("Nord-West-Weg");
break;
}
case 233946:
{
returnValue = F("Nordacker");
break;
}
case 233947:
{
returnValue = F("Nordacker Weg");
break;
}
case 233948:
{
returnValue = F("Nordackersmoorweg");
break;
}
case 233949:
{
returnValue = F("Nordahl-Grieg-Str.");
break;
}
case 233950:
{
returnValue = F("Nordahlweg");
break;
}
case 233951:
{
returnValue = F("Nordahner Kirchweg");
break;
}
case 233952:
{
returnValue = F("Nordalb");
break;
}
case 233953:
{
returnValue = F("Nordalbingerweg");
break;
}
case 233954:
{
returnValue = F("Nordalbstr.");
break;
}
case 233955:
{
returnValue = F("Nordallee");
break;
}
case 233956:
{
returnValue = F("Nordanbindung");
break;
}
case 233957:
{
returnValue = F("Nordanlage");
break;
}
case 233958:
{
returnValue = F("Nordapstr.");
break;
}
case 233959:
{
returnValue = F("Nordasseler Str.");
break;
}
case 233960:
{
returnValue = F("Nordbachweg");
break;
}
case 233961:
{
returnValue = F("Nordbadstr.");
break;
}
case 233962:
{
returnValue = F("Nordbahn");
break;
}
case 233963:
{
returnValue = F("Nordbahnhofstr.");
break;
}
case 233964:
{
returnValue = F("Nordbahnhofsweg");
break;
}
case 233965:
{
returnValue = F("Nordbahnstr.");
break;
}
case 233966:
{
returnValue = F("Nordbargen");
break;
}
case 233967:
{
returnValue = F("Nordbeck-Siedlung");
break;
}
case 233968:
{
returnValue = F("Nordbecker Damm");
break;
}
case 233969:
{
returnValue = F("Nordbecker Weg");
break;
}
case 233970:
{
returnValue = F("Nordbeckstr.");
break;
}
case 233971:
{
returnValue = F("Nordberg");
break;
}
case 233972:
{
returnValue = F("Nordbergstr.");
break;
}
case 233973:
{
returnValue = F("Nordblick");
break;
}
case 233974:
{
returnValue = F("Nordbockhorn");
break;
}
case 233975:
{
returnValue = F("Nordbosteler Str.");
break;
}
case 233976:
{
returnValue = F("Nordbrauerweg");
break;
}
case 233977:
{
returnValue = F("Nordbrede");
break;
}
case 233978:
{
returnValue = F("Nordbreite");
break;
}
case 233979:
{
returnValue = F("Nordbrocker Str.");
break;
}
case 233980:
{
returnValue = F("Nordbrooksweg");
break;
}
case 233981:
{
returnValue = F("Nordbruch");
break;
}
case 233982:
{
returnValue = F("Nordbrucher Str.");
break;
}
case 233983:
{
returnValue = F("Nordbrücke");
break;
}
case 233984:
{
returnValue = F("Nordburger Str.");
break;
}
case 233985:
{
returnValue = F("Nordbuscherweg");
break;
}
case 233986:
{
returnValue = F("Nordbögger Str.");
break;
}
case 233987:
{
returnValue = F("Nordbünte");
break;
}
case 233988:
{
returnValue = F("Nordbüttel");
break;
}
case 233989:
{
returnValue = F("Nordcharweg");
break;
}
case 233990:
{
returnValue = F("Norddeich");
break;
}
case 233991:
{
returnValue = F("Norddeicher Str.");
break;
}
case 233992:
{
returnValue = F("Norddeutsche Str.");
break;
}
case 233993:
{
returnValue = F("Norddeutschlandstr.");
break;
}
case 233994:
{
returnValue = F("Norddurchlass");
break;
}
case 233995:
{
returnValue = F("Norddünen");
break;
}
case 233996:
{
returnValue = F("Nordeck");
break;
}
case 233997:
{
returnValue = F("Nordecker Str.");
break;
}
case 233998:
{
returnValue = F("Nordecker Weg");
break;
}
case 233999:
{
returnValue = F("Nordeckstr.");
break;
}
case 234000:
{
returnValue = F("Nordeinfahrt");
break;
}
case 234001:
{
returnValue = F("Nordeler Schleifkotten");
break;
}
case 234002:
{
returnValue = F("Nordeln");
break;
}
case 234003:
{
returnValue = F("Nordelsheimer Weg");
break;
}
case 234004:
{
returnValue = F("Norden am Dorf");
break;
}
case 234005:
{
returnValue = F("Nordenbecker Str.");
break;
}
case 234006:
{
returnValue = F("Nordend");
break;
}
case 234007:
{
returnValue = F("Nordende");
break;
}
case 234008:
{
returnValue = F("Nordender Str.");
break;
}
case 234009:
{
returnValue = F("Nordender Weg");
break;
}
case 234010:
{
returnValue = F("Nordenderweg");
break;
}
case 234011:
{
returnValue = F("Nordendorf Bahnhof");
break;
}
case 234012:
{
returnValue = F("Nordendorfer Str.");
break;
}
case 234013:
{
returnValue = F("Nordendorfer Weg");
break;
}
case 234014:
{
returnValue = F("Nordendorfsweg");
break;
}
case 234015:
{
returnValue = F("Nordendstr.");
break;
}
case 234016:
{
returnValue = F("Nordendweg");
break;
}
case 234017:
{
returnValue = F("Nordener Hütte");
break;
}
case 234018:
{
returnValue = F("Nordener Str.");
break;
}
case 234019:
{
returnValue = F("Nordenfeld");
break;
}
case 234020:
{
returnValue = F("Nordenfelder Weg");
break;
}
case 234021:
{
returnValue = F("Nordenfeldmark");
break;
}
case 234022:
{
returnValue = F("Nordenhamer Sand");
break;
}
case 234023:
{
returnValue = F("Nordenhamer Str.");
break;
}
case 234024:
{
returnValue = F("Nordenhamer Weg");
break;
}
case 234025:
{
returnValue = F("Nordenheideweg");
break;
}
case 234026:
{
returnValue = F("Nordenholzer Str.");
break;
}
case 234027:
{
returnValue = F("Nordenholzer Weg");
break;
}
case 234028:
{
returnValue = F("Nordenkamp");
break;
}
case 234029:
{
returnValue = F("Nordenkampstr.");
break;
}
case 234030:
{
returnValue = F("Nordenlandsweg");
break;
}
case 234031:
{
returnValue = F("Nordenmauer");
break;
}
case 234032:
{
returnValue = F("Nordenredder");
break;
}
case 234033:
{
returnValue = F("Nordenstadter Str.");
break;
}
case 234034:
{
returnValue = F("Nordenstiftsweg");
break;
}
case 234035:
{
returnValue = F("Nordenstr.");
break;
}
case 234036:
{
returnValue = F("Nordenstädter Str.");
break;
}
case 234037:
{
returnValue = F("Nordenwall");
break;
}
case 234038:
{
returnValue = F("Norder Fenn");
break;
}
case 234039:
{
returnValue = F("Norder Gath");
break;
}
case 234040:
{
returnValue = F("Norder Landstr.");
break;
}
case 234041:
{
returnValue = F("Norder Lohne");
break;
}
case 234042:
{
returnValue = F("Norder Moorsweg");
break;
}
case 234043:
{
returnValue = F("Norder Reihe");
break;
}
case 234044:
{
returnValue = F("Norder Riege");
break;
}
case 234045:
{
returnValue = F("Norder Ring");
break;
}
case 234046:
{
returnValue = F("Norder Steinweg");
break;
}
case 234047:
{
returnValue = F("Norder Str.");
break;
}
case 234048:
{
returnValue = F("Norder Weg");
break;
}
case 234049:
{
returnValue = F("Norder Wung");
break;
}
case 234050:
{
returnValue = F("Norderallee");
break;
}
case 234051:
{
returnValue = F("Norderaltendeich");
break;
}
case 234052:
{
returnValue = F("Norderau");
break;
}
case 234053:
{
returnValue = F("Norderballig");
break;
}
case 234054:
{
returnValue = F("Norderbek");
break;
}
case 234055:
{
returnValue = F("Norderbergstr.");
break;
}
case 234056:
{
returnValue = F("Norderbergweg");
break;
}
case 234057:
{
returnValue = F("Norderbrainweg");
break;
}
case 234058:
{
returnValue = F("Norderdaal");
break;
}
case 234059:
{
returnValue = F("Norderdeich");
break;
}
case 234060:
{
returnValue = F("Norderdeichsweg");
break;
}
case 234061:
{
returnValue = F("Norderdiek");
break;
}
case 234062:
{
returnValue = F("Norderdomstr.");
break;
}
case 234063:
{
returnValue = F("Norderdonner Weg");
break;
}
case 234064:
{
returnValue = F("Norderdoor");
break;
}
case 234065:
{
returnValue = F("Norderdorf");
break;
}
case 234066:
{
returnValue = F("Norderdorfkamp");
break;
}
case 234067:
{
returnValue = F("Nordereck");
break;
}
case 234068:
{
returnValue = F("Nordereggenweg");
break;
}
case 234069:
{
returnValue = F("Norderend");
break;
}
case 234070:
{
returnValue = F("Norderende");
break;
}
case 234071:
{
returnValue = F("Nordereng");
break;
}
case 234072:
{
returnValue = F("Nordererweg");
break;
}
case 234073:
{
returnValue = F("Norderfahrt");
break;
}
case 234074:
{
returnValue = F("Norderfangweg");
break;
}
case 234075:
{
returnValue = F("Norderfeld");
break;
}
case 234076:
{
returnValue = F("Norderfelder Str.");
break;
}
case 234077:
{
returnValue = F("Norderfelder Weg");
break;
}
case 234078:
{
returnValue = F("Norderfeldweg");
break;
}
case 234079:
{
returnValue = F("Norderfischerstr.");
break;
}
case 234080:
{
returnValue = F("Nordergang");
break;
}
case 234081:
{
returnValue = F("Nordergarmser Weg");
break;
}
case 234082:
{
returnValue = F("Nordergast");
break;
}
case 234083:
{
returnValue = F("Nordergeest");
break;
}
case 234084:
{
returnValue = F("Nordergeestweg");
break;
}
case 234085:
{
returnValue = F("Nordergraben");
break;
}
case 234086:
{
returnValue = F("Nordergründe");
break;
}
case 234087:
{
returnValue = F("Norderhafen");
break;
}
case 234088:
{
returnValue = F("Norderhafenweg");
break;
}
case 234089:
{
returnValue = F("Norderhaffdeich");
break;
}
case 234090:
{
returnValue = F("Norderhammrichstr.");
break;
}
case 234091:
{
returnValue = F("Norderheide");
break;
}
case 234092:
{
returnValue = F("Norderheine");
break;
}
case 234093:
{
returnValue = F("Norderheverkoogstr.");
break;
}
case 234094:
{
returnValue = F("Norderheverstr.");
break;
}
case 234095:
{
returnValue = F("Norderheverweg");
break;
}
case 234096:
{
returnValue = F("Norderhinterstr.");
break;
}
case 234097:
{
returnValue = F("Norderhof");
break;
}
case 234098:
{
returnValue = F("Norderhofenden");
break;
}
case 234099:
{
returnValue = F("Norderholm");
break;
}
case 234100:
{
returnValue = F("Norderholmstr.");
break;
}
case 234101:
{
returnValue = F("Norderholt");
break;
}
case 234102:
{
returnValue = F("Norderholtende");
break;
}
case 234103:
{
returnValue = F("Norderholz");
break;
}
case 234104:
{
returnValue = F("Norderkamp");
break;
}
case 234105:
{
returnValue = F("Norderkiefmoor");
break;
}
case 234106:
{
returnValue = F("Norderkoog-Weg");
break;
}
case 234107:
{
returnValue = F("Norderkoppel");
break;
}
case 234108:
{
returnValue = F("Norderkreuzstr.");
break;
}
case 234109:
{
returnValue = F("Norderlund");
break;
}
case 234110:
{
returnValue = F("Norderländer Str.");
break;
}
case 234111:
{
returnValue = F("Norderlück");
break;
}
case 234112:
{
returnValue = F("Norderlücke");
break;
}
case 234113:
{
returnValue = F("Nordermaaße");
break;
}
case 234114:
{
returnValue = F("Nordermai");
break;
}
case 234115:
{
returnValue = F("Nordermarkt");
break;
}
case 234116:
{
returnValue = F("Nordermeedenstr.");
break;
}
case 234117:
{
returnValue = F("Nordermeedenweg");
break;
}
case 234118:
{
returnValue = F("Nordermitteldeich");
break;
}
case 234119:
{
returnValue = F("Nordermoor");
break;
}
case 234120:
{
returnValue = F("Nordermoorendenweg");
break;
}
case 234121:
{
returnValue = F("Nordermoorer Hellmer");
break;
}
case 234122:
{
returnValue = F("Nordermoorer Weg");
break;
}
case 234123:
{
returnValue = F("Nordermoorweg");
break;
}
case 234124:
{
returnValue = F("Nordermühle");
break;
}
case 234125:
{
returnValue = F("Norderney");
break;
}
case 234126:
{
returnValue = F("Norderneyer Str.");
break;
}
case 234127:
{
returnValue = F("Norderneyer Weg");
break;
}
case 234128:
{
returnValue = F("Norderneystr.");
break;
}
case 234129:
{
returnValue = F("Norderneyweg");
break;
}
case 234130:
{
returnValue = F("Nordernfeldstr.");
break;
}
case 234131:
{
returnValue = F("Norderohlfelderweg");
break;
}
case 234132:
{
returnValue = F("Norderoogstieg");
break;
}
case 234133:
{
returnValue = F("Norderoogweg");
break;
}
case 234134:
{
returnValue = F("Norderpad");
break;
}
case 234135:
{
returnValue = F("Norderpfannenweg");
break;
}
case 234136:
{
returnValue = F("Norderpiep");
break;
}
case 234137:
{
returnValue = F("Norderquerstr.");
break;
}
case 234138:
{
returnValue = F("Norderreeg");
break;
}
case 234139:
{
returnValue = F("Norderreihe");
break;
}
case 234140:
{
returnValue = F("Norderriff");
break;
}
case 234141:
{
returnValue = F("Norderring");
break;
}
case 234142:
{
returnValue = F("Norderscheidung");
break;
}
case 234143:
{
returnValue = F("Norderschlag");
break;
}
case 234144:
{
returnValue = F("Norderschweier Str.");
break;
}
case 234145:
{
returnValue = F("Norderseefeld Nord");
break;
}
case 234146:
{
returnValue = F("Norderstedter Str.");
break;
}
case 234147:
{
returnValue = F("Norderstieg");
break;
}
case 234148:
{
returnValue = F("Norderstr.");
break;
}
case 234149:
{
returnValue = F("Norderstrander Str.");
break;
}
case 234150:
{
returnValue = F("Norderstädtischer Markt");
break;
}
case 234151:
{
returnValue = F("Norderteichweg");
break;
}
case 234152:
{
returnValue = F("Norderteiler Weg");
break;
}
case 234153:
{
returnValue = F("Nordertoft");
break;
}
case 234154:
{
returnValue = F("Nordertor");
break;
}
case 234155:
{
returnValue = F("Nordertorstr.");
break;
}
case 234156:
{
returnValue = F("Norderup");
break;
}
case 234157:
{
returnValue = F("Norderwall");
break;
}
case 234158:
{
returnValue = F("Norderwang");
break;
}
case 234159:
{
returnValue = F("Norderwaygaard");
break;
}
case 234160:
{
returnValue = F("Norderwech");
break;
}
case 234161:
{
returnValue = F("Norderweg");
break;
}
case 234162:
{
returnValue = F("Norderweidenweg");
break;
}
case 234163:
{
returnValue = F("Norderwesterseite");
break;
}
case 234164:
{
returnValue = F("Norderwieke");
break;
}
case 234165:
{
returnValue = F("Norderwieke I");
break;
}
case 234166:
{
returnValue = F("Norderwieke II");
break;
}
case 234167:
{
returnValue = F("Norderwieke Nord");
break;
}
case 234168:
{
returnValue = F("Norderwieke Süd");
break;
}
case 234169:
{
returnValue = F("Norderwiesenweg");
break;
}
case 234170:
{
returnValue = F("Norderwisch");
break;
}
case 234171:
{
returnValue = F("Norderwischenweg");
break;
}
case 234172:
{
returnValue = F("Norderwischweg");
break;
}
case 234173:
{
returnValue = F("Norderwohld");
break;
}
case 234174:
{
returnValue = F("Norderwung");
break;
}
case 234175:
{
returnValue = F("Norderwungweg");
break;
}
case 234176:
{
returnValue = F("Norderwurth");
break;
}
case 234177:
{
returnValue = F("Norderwurthweg");
break;
}
case 234178:
{
returnValue = F("Nordesch");
break;
}
case 234179:
{
returnValue = F("Nordeschstr.");
break;
}
case 234180:
{
returnValue = F("Nordestr.");
break;
}
case 234181:
{
returnValue = F("Nordfeld");
break;
}
case 234182:
{
returnValue = F("Nordfelde");
break;
}
case 234183:
{
returnValue = F("Nordfeldenweg");
break;
}
case 234184:
{
returnValue = F("Nordfelder Str.");
break;
}
case 234185:
{
returnValue = F("Nordfelder Weg");
break;
}
case 234186:
{
returnValue = F("Nordfeldmark");
break;
}
case 234187:
{
returnValue = F("Nordfeldstr.");
break;
}
case 234188:
{
returnValue = F("Nordfeldweg");
break;
}
case 234189:
{
returnValue = F("Nordfriedhofstr.");
break;
}
case 234190:
{
returnValue = F("Nordfriesenstr.");
break;
}
case 234191:
{
returnValue = F("Nordfrost-Ring");
break;
}
case 234192:
{
returnValue = F("Nordgang");
break;
}
case 234193:
{
returnValue = F("Nordgarten");
break;
}
case 234194:
{
returnValue = F("Nordgasse");
break;
}
case 234195:
{
returnValue = F("Nordgauerstr.");
break;
}
case 234196:
{
returnValue = F("Nordgaustr.");
break;
}
case 234197:
{
returnValue = F("Nordgeismarer Brücke");
break;
}
case 234198:
{
returnValue = F("Nordgeismarer Weg");
break;
}
case 234199:
{
returnValue = F("Nordgermerslebener Str.");
break;
}
case 234200:
{
returnValue = F("Nordgermersleber Weg");
break;
}
case 234201:
{
returnValue = F("Nordgraben");
break;
}
case 234202:
{
returnValue = F("Nordgrovener Weg");
break;
}
case 234203:
{
returnValue = F("Nordgrund");
break;
}
case 234204:
{
returnValue = F("Nordgäßchen");
break;
}
case 234205:
{
returnValue = F("Nordhackstedter Str.");
break;
}
case 234206:
{
returnValue = F("Nordhag");
break;
}
case 234207:
{
returnValue = F("Nordhagen");
break;
}
case 234208:
{
returnValue = F("Nordhagener Str.");
break;
}
case 234209:
{
returnValue = F("Nordhagenweg");
break;
}
case 234210:
{
returnValue = F("Nordhalbener Str.");
break;
}
case 234211:
{
returnValue = F("Nordhalde");
break;
}
case 234212:
{
returnValue = F("Nordhaldenstr.");
break;
}
case 234213:
{
returnValue = F("Nordhalder Str.");
break;
}
case 234214:
{
returnValue = F("Nordhaldestr.");
break;
}
case 234215:
{
returnValue = F("Nordhalvenweg");
break;
}
case 234216:
{
returnValue = F("Nordhang");
break;
}
case 234217:
{
returnValue = F("Nordhangstr.");
break;
}
case 234218:
{
returnValue = F("Nordhangweg");
break;
}
case 234219:
{
returnValue = F("Nordhastedter Str.");
break;
}
case 234220:
{
returnValue = F("Nordhausen");
break;
}
case 234221:
{
returnValue = F("Nordhausener Eschweg");
break;
}
case 234222:
{
returnValue = F("Nordhausener Str.");
break;
}
case 234223:
{
returnValue = F("Nordhauser Str.");
break;
}
case 234224:
{
returnValue = F("Nordhaushof");
break;
}
case 234225:
{
returnValue = F("Nordhausstr.");
break;
}
case 234226:
{
returnValue = F("Nordhausweg");
break;
}
case 234227:
{
returnValue = F("Nordhedig");
break;
}
case 234228:
{
returnValue = F("Nordheide");
break;
}
case 234229:
{
returnValue = F("Nordheider Ring");
break;
}
case 234230:
{
returnValue = F("Nordheider Weg");
break;
}
case 234231:
{
returnValue = F("Nordheiderstr.");
break;
}
case 234232:
{
returnValue = F("Nordheimer Str.");
break;
}
case 234233:
{
returnValue = F("Nordheimer Weg");
break;
}
case 234234:
{
returnValue = F("Nordheimstr.");
break;
}
case 234235:
{
returnValue = F("Nordhellen");
break;
}
case 234236:
{
returnValue = F("Nordhellenweg");
break;
}
case 234237:
{
returnValue = F("Nordheller Weg");
break;
}
case 234238:
{
returnValue = F("Nordhelm-Eck");
break;
}
case 234239:
{
returnValue = F("Nordhelmstr.");
break;
}
case 234240:
{
returnValue = F("Nordhemmer Heide");
break;
}
case 234241:
{
returnValue = F("Nordhemmer Str.");
break;
}
case 234242:
{
returnValue = F("Nordhof");
break;
}
case 234243:
{
returnValue = F("Nordhofe");
break;
}
case 234244:
{
returnValue = F("Nordhofen");
break;
}
case 234245:
{
returnValue = F("Nordhofer Weg");
break;
}
case 234246:
{
returnValue = F("Nordhoffstr.");
break;
}
case 234247:
{
returnValue = F("Nordhofner Str.");
break;
}
case 234248:
{
returnValue = F("Nordhofstr.");
break;
}
case 234249:
{
returnValue = F("Nordholt");
break;
}
case 234250:
{
returnValue = F("Nordholte");
break;
}
case 234251:
{
returnValue = F("Nordholter Str.");
break;
}
case 234252:
{
returnValue = F("Nordholter Weg");
break;
}
case 234253:
{
returnValue = F("Nordholtsweg");
break;
}
case 234254:
{
returnValue = F("Nordholz");
break;
}
case 234255:
{
returnValue = F("Nordholzer Str.");
break;
}
case 234256:
{
returnValue = F("Nordholzer Weg");
break;
}
case 234257:
{
returnValue = F("Nordholzkamp");
break;
}
case 234258:
{
returnValue = F("Nordholzkämpe");
break;
}
case 234259:
{
returnValue = F("Nordholzstr.");
break;
}
case 234260:
{
returnValue = F("Nordholzweg");
break;
}
case 234261:
{
returnValue = F("Nordhoopstr.");
break;
}
case 234262:
{
returnValue = F("Nordhorner Str.");
break;
}
case 234263:
{
returnValue = F("Nordhorner Weg");
break;
}
case 234264:
{
returnValue = F("Nordhornsberg");
break;
}
case 234265:
{
returnValue = F("Nordhornweg");
break;
}
case 234266:
{
returnValue = F("Nordhusener Str.");
break;
}
case 234267:
{
returnValue = F("Nordhusumer Str.");
break;
}
case 234268:
{
returnValue = F("Nordhäuser Heerstr.");
break;
}
case 234269:
{
returnValue = F("Nordhäuser Kirchgasse");
break;
}
case 234270:
{
returnValue = F("Nordhäuser Str.");
break;
}
case 234271:
{
returnValue = F("Nordhäuser Weg");
break;
}
case 234272:
{
returnValue = F("Nordhöfer Str.");
break;
}
case 234273:
{
returnValue = F("Nordhöhe");
break;
}
case 234274:
{
returnValue = F("Nordhügel");
break;
}
case 234275:
{
returnValue = F("Nordhüttenweg");
break;
}
case 234276:
{
returnValue = F("Nordic Walking");
break;
}
case 234277:
{
returnValue = F("Nordick");
break;
}
case 234278:
{
returnValue = F("Nordick-Barsener Str.");
break;
}
case 234279:
{
returnValue = F("Nordick-Duesbergweg");
break;
}
case 234280:
{
returnValue = F("Nordick-Geestwinkel");
break;
}
case 234281:
{
returnValue = F("Nordick-Gottesort");
break;
}
case 234282:
{
returnValue = F("Nordick-Hammer Str.");
break;
}
case 234283:
{
returnValue = F("Nordick-Nordicker Str.");
break;
}
case 234284:
{
returnValue = F("Nordick-Schliekstr.");
break;
}
case 234285:
{
returnValue = F("Nordick-Spinnholt");
break;
}
case 234286:
{
returnValue = F("Nordiek");
break;
}
case 234287:
{
returnValue = F("Nordische");
break;
}
case 234288:
{
returnValue = F("Nordischer Garten");
break;
}
case 234289:
{
returnValue = F("Nordkamp");
break;
}
case 234290:
{
returnValue = F("Nordkampener Mühle");
break;
}
case 234291:
{
returnValue = F("Nordkampstr.");
break;
}
case 234292:
{
returnValue = F("Nordkanalallee");
break;
}
case 234293:
{
returnValue = F("Nordkaten");
break;
}
case 234294:
{
returnValue = F("Nordker Esch");
break;
}
case 234295:
{
returnValue = F("Nordkirchener Str.");
break;
}
case 234296:
{
returnValue = F("Nordkoog");
break;
}
case 234297:
{
returnValue = F("Nordkoogsweg");
break;
}
case 234298:
{
returnValue = F("Nordkorso");
break;
}
case 234299:
{
returnValue = F("Nordkreisel");
break;
}
case 234300:
{
returnValue = F("Nordkreuz");
break;
}
case 234301:
{
returnValue = F("Nordkreuzung");
break;
}
case 234302:
{
returnValue = F("Nordlachenbühl");
break;
}
case 234303:
{
returnValue = F("Nordlandring");
break;
}
case 234304:
{
returnValue = F("Nordlandstr.");
break;
}
case 234305:
{
returnValue = F("Nordlandweg");
break;
}
case 234306:
{
returnValue = F("Nordlandwehr");
break;
}
case 234307:
{
returnValue = F("Nordlehne");
break;
}
case 234308:
{
returnValue = F("Nordlicht");
break;
}
case 234309:
{
returnValue = F("Nordlichtstr.");
break;
}
case 234310:
{
returnValue = F("Nordlinie");
break;
}
case 234311:
{
returnValue = F("Nordlippering");
break;
}
case 234312:
{
returnValue = F("Nordlippestr.");
break;
}
case 234313:
{
returnValue = F("Nordloher Dorfstr.");
break;
}
case 234314:
{
returnValue = F("Nordloher Str.");
break;
}
case 234315:
{
returnValue = F("Nordlohne");
break;
}
case 234316:
{
returnValue = F("Nordlünerner Str.");
break;
}
case 234317:
{
returnValue = F("Nordmannring");
break;
}
case 234318:
{
returnValue = F("Nordmannstr.");
break;
}
case 234319:
{
returnValue = F("Nordmark");
break;
}
case 234320:
{
returnValue = F("Nordmarkstr.");
break;
}
case 234321:
{
returnValue = F("Nordmarsch");
break;
}
case 234322:
{
returnValue = F("Nordmauer");
break;
}
case 234323:
{
returnValue = F("Nordmauerstr.");
break;
}
case 234324:
{
returnValue = F("Nordmeerer Weg");
break;
}
case 234325:
{
returnValue = F("Nordmeerstr.");
break;
}
case 234326:
{
returnValue = F("Nordmeyerstr.");
break;
}
case 234327:
{
returnValue = F("Nordmole");
break;
}
case 234328:
{
returnValue = F("Nordmoortrift");
break;
}
case 234329:
{
returnValue = F("Nordmoorweg");
break;
}
case 234330:
{
returnValue = F("Nordmärkische Str.");
break;
}
case 234331:
{
returnValue = F("Nordnau");
break;
}
case 234332:
{
returnValue = F("Nordobenende");
break;
}
case 234333:
{
returnValue = F("Nordoe");
break;
}
case 234334:
{
returnValue = F("Nordoer Str.");
break;
}
case 234335:
{
returnValue = F("Nordoog");
break;
}
case 234336:
{
returnValue = F("Nordostbohlwerk");
break;
}
case 234337:
{
returnValue = F("Nordostdeich");
break;
}
case 234338:
{
returnValue = F("Nordosterdeich");
break;
}
case 234339:
{
returnValue = F("Nordoststr.");
break;
}
case 234340:
{
returnValue = F("Nordpark");
break;
}
case 234341:
{
returnValue = F("Nordpark Kleine Freizeit");
break;
}
case 234342:
{
returnValue = F("Nordparkstr.");
break;
}
case 234343:
{
returnValue = F("Nordparkweg");
break;
}
case 234344:
{
returnValue = F("Nordpassage");
break;
}
case 234345:
{
returnValue = F("Nordperdstr.");
break;
}
case 234346:
{
returnValue = F("Nordpfad");
break;
}
case 234347:
{
returnValue = F("Nordplatz");
break;
}
case 234348:
{
returnValue = F("Nordpol");
break;
}
case 234349:
{
returnValue = F("Nordportbogen");
break;
}
case 234350:
{
returnValue = F("Nordpromenade");
break;
}
case 234351:
{
returnValue = F("Nordquebbe");
break;
}
case 234352:
{
returnValue = F("Nordracher Str.");
break;
}
case 234353:
{
returnValue = F("Nordrachereckweg");
break;
}
case 234354:
{
returnValue = F("Nordrade");
break;
}
case 234355:
{
returnValue = F("Nordrampe");
break;
}
case 234356:
{
returnValue = F("Nordrand");
break;
}
case 234357:
{
returnValue = F("Nordrandstr.");
break;
}
case 234358:
{
returnValue = F("Nordrandweg");
break;
}
case 234359:
{
returnValue = F("Nordrather Str.");
break;
}
case 234360:
{
returnValue = F("Nordrehr");
break;
}
case 234361:
{
returnValue = F("Nordrheda");
break;
}
case 234362:
{
returnValue = F("Nordring");
break;
}
case 234363:
{
returnValue = F("Nordring II");
break;
}
case 234364:
{
returnValue = F("Nordring Schwenningen");
break;
}
case 234365:
{
returnValue = F("Nordring Villingen");
break;
}
case 234366:
{
returnValue = F("Nordringanschluss");
break;
}
case 234367:
{
returnValue = F("Nordsackgasse");
break;
}
case 234368:
{
returnValue = F("Nordschapsweg");
break;
}
case 234369:
{
returnValue = F("Nordschau");
break;
}
case 234370:
{
returnValue = F("Nordschleife");
break;
}
case 234371:
{
returnValue = F("Nordschleswigstr.");
break;
}
case 234372:
{
returnValue = F("Nordsee");
break;
}
case 234373:
{
returnValue = F("Nordseeallee");
break;
}
case 234374:
{
returnValue = F("Nordseekurpark");
break;
}
case 234375:
{
returnValue = F("Nordseeplatz");
break;
}
case 234376:
{
returnValue = F("Nordseering");
break;
}
case 234377:
{
returnValue = F("Nordseesiedlung");
break;
}
case 234378:
{
returnValue = F("Nordseestr.");
break;
}
case 234379:
{
returnValue = F("Nordseestrot");
break;
}
case 234380:
{
returnValue = F("Nordsehler Str.");
break;
}
case 234381:
{
returnValue = F("Nordseite");
break;
}
case 234382:
{
returnValue = F("Nordshäuser Str.");
break;
}
case 234383:
{
returnValue = F("Nordsiedlung");
break;
}
case 234384:
{
returnValue = F("Nordsiek");
break;
}
case 234385:
{
returnValue = F("Nordsiet");
break;
}
case 234386:
{
returnValue = F("Nordsoder Str.");
break;
}
case 234387:
{
returnValue = F("Nordspange");
break;
}
case 234388:
{
returnValue = F("Nordstadtbrücke");
break;
}
case 234389:
{
returnValue = F("Nordstadtpark");
break;
}
case 234390:
{
returnValue = F("Nordstadtstr.");
break;
}
case 234391:
{
returnValue = F("Nordstadum");
break;
}
case 234392:
{
returnValue = F("Nordsteg");
break;
}
case 234393:
{
returnValue = F("Nordsteig");
break;
}
case 234394:
{
returnValue = F("Nordsteimker Str.");
break;
}
case 234395:
{
returnValue = F("Nordstern");
break;
}
case 234396:
{
returnValue = F("Nordsternpark");
break;
}
case 234397:
{
returnValue = F("Nordsternstr.");
break;
}
case 234398:
{
returnValue = F("Nordsternweg");
break;
}
case 234399:
{
returnValue = F("Nordstetten");
break;
}
case 234400:
{
returnValue = F("Nordstetter Str.");
break;
}
case 234401:
{
returnValue = F("Nordstollen");
break;
}
case 234402:
{
returnValue = F("Nordstr.");
break;
}
case 234403:
{
returnValue = F("Nordstrand");
break;
}
case 234404:
{
returnValue = F("Nordstrander Damm");
break;
}
case 234405:
{
returnValue = F("Nordstrander Str.");
break;
}
case 234406:
{
returnValue = F("Nordstrandring");
break;
}
case 234407:
{
returnValue = F("Nordstrandweg");
break;
}
case 234408:
{
returnValue = F("Nordsunderberg");
break;
}
case 234409:
{
returnValue = F("Nordsunderweg");
break;
}
case 234410:
{
returnValue = F("Nordtangente");
break;
}
case 234411:
{
returnValue = F("Nordtangente (Dr. Kilian Str.)");
break;
}
case 234412:
{
returnValue = F("Nordtangente (Dr. Kilian str. )");
break;
}
case 234413:
{
returnValue = F("Nordtmeyerstr.");
break;
}
case 234414:
{
returnValue = F("Nordtor");
break;
}
case 234415:
{
returnValue = F("Nordtorstr.");
break;
}
case 234416:
{
returnValue = F("Nordtrift");
break;
}
case 234417:
{
returnValue = F("Nordufer");
break;
}
case 234418:
{
returnValue = F("Norduferstr.");
break;
}
case 234419:
{
returnValue = F("Nordumfahrung");
break;
}
case 234420:
{
returnValue = F("Nordumgehung");
break;
}
case 234421:
{
returnValue = F("Nordumgehung Abschnitt 2");
break;
}
case 234422:
{
returnValue = F("Nordumgehung Bodenwerder");
break;
}
case 234423:
{
returnValue = F("Nordumgehung Karben");
break;
}
case 234424:
{
returnValue = F("Nordvelener Str.");
break;
}
case 234425:
{
returnValue = F("Nordviertel");
break;
}
case 234426:
{
returnValue = F("Nordwalder Ring");
break;
}
case 234427:
{
returnValue = F("Nordwalder Str.");
break;
}
case 234428:
{
returnValue = F("Nordwaldstr.");
break;
}
case 234429:
{
returnValue = F("Nordwall");
break;
}
case 234430:
{
returnValue = F("Nordwallschloot");
break;
}
case 234431:
{
returnValue = F("Nordwandsteig");
break;
}
case 234432:
{
returnValue = F("Nordweder Str.");
break;
}
case 234433:
{
returnValue = F("Nordweg");
break;
}
case 234434:
{
returnValue = F("Nordweg I");
break;
}
case 234435:
{
returnValue = F("Nordweg II");
break;
}
case 234436:
{
returnValue = F("Nordweide");
break;
}
case 234437:
{
returnValue = F("Nordwerdum");
break;
}
case 234438:
{
returnValue = F("Nordwerk");
break;
}
case 234439:
{
returnValue = F("Nordwest-Tangente");
break;
}
case 234440:
{
returnValue = F("Nordwestliche Randstr.");
break;
}
case 234441:
{
returnValue = F("Nordweststr.");
break;
}
case 234442:
{
returnValue = F("Nordwesttangente");
break;
}
case 234443:
{
returnValue = F("Nordwestweg");
break;
}
case 234444:
{
returnValue = F("Nordwiehe");
break;
}
case 234445:
{
returnValue = F("Nordwiese");
break;
}
case 234446:
{
returnValue = F("Nordwiesen");
break;
}
case 234447:
{
returnValue = F("Nordwiesenweg");
break;
}
case 234448:
{
returnValue = F("Nordwindstr.");
break;
}
case 234449:
{
returnValue = F("Nordwinkel");
break;
}
case 234450:
{
returnValue = F("Nordwohlde");
break;
}
case 234451:
{
returnValue = F("Nordwohlder Dorfstr.");
break;
}
case 234452:
{
returnValue = F("Nordwohlder Heide");
break;
}
case 234453:
{
returnValue = F("Nordwohlder Ring");
break;
}
case 234454:
{
returnValue = F("Nordwohlder Str.");
break;
}
case 234455:
{
returnValue = F("Nordwollestr.");
break;
}
case 234456:
{
returnValue = F("Noreweg");
break;
}
case 234457:
{
returnValue = F("Norfer Kirchstr.");
break;
}
case 234458:
{
returnValue = F("Norfer Schulstr.");
break;
}
case 234459:
{
returnValue = F("Norfer Str.");
break;
}
case 234460:
{
returnValue = F("Norfer Weg");
break;
}
case 234461:
{
returnValue = F("Norfolk Lane");
break;
}
case 234462:
{
returnValue = F("Norgaardholz");
break;
}
case 234463:
{
returnValue = F("Norger Str.");
break;
}
case 234464:
{
returnValue = F("Norgerweg");
break;
}
case 234465:
{
returnValue = F("Norheimer Str.");
break;
}
case 234466:
{
returnValue = F("Norheimer Weg");
break;
}
case 234467:
{
returnValue = F("Norikerstr.");
break;
}
case 234468:
{
returnValue = F("Norikerweg");
break;
}
case 234469:
{
returnValue = F("Norissteig");
break;
}
case 234470:
{
returnValue = F("Norisstr.");
break;
}
case 234471:
{
returnValue = F("Nork");
break;
}
case 234472:
{
returnValue = F("Norkampweg");
break;
}
case 234473:
{
returnValue = F("Norkener Str.");
break;
}
case 234474:
{
returnValue = F("Norkstr.");
break;
}
case 234475:
{
returnValue = F("Norm. Übergang (Kein Zebra)");
break;
}
case 234476:
{
returnValue = F("Normandiering");
break;
}
case 234477:
{
returnValue = F("Normandiestr.");
break;
}
case 234478:
{
returnValue = F("Normandieweg");
break;
}
case 234479:
{
returnValue = F("Normanenstr.");
break;
}
case 234480:
{
returnValue = F("Normannenallee");
break;
}
case 234481:
{
returnValue = F("Normannengasse");
break;
}
case 234482:
{
returnValue = F("Normannenstr.");
break;
}
case 234483:
{
returnValue = F("Normannenweg");
break;
}
case 234484:
{
returnValue = F("Normannische Str.");
break;
}
case 234485:
{
returnValue = F("Normannplatz");
break;
}
case 234486:
{
returnValue = F("Normannsgasse");
break;
}
case 234487:
{
returnValue = F("Normannshausen");
break;
}
case 234488:
{
returnValue = F("Normannstr.");
break;
}
case 234489:
{
returnValue = F("Normannsweg");
break;
}
case 234490:
{
returnValue = F("Normanstr.");
break;
}
case 234491:
{
returnValue = F("Nornbodenweg");
break;
}
case 234492:
{
returnValue = F("Nornenweg");
break;
}
case 234493:
{
returnValue = F("Nornheimer Berg");
break;
}
case 234494:
{
returnValue = F("Nornheimer Str.");
break;
}
case 234495:
{
returnValue = F("Norpothstr.");
break;
}
case 234496:
{
returnValue = F("Norprathstr.");
break;
}
case 234497:
{
returnValue = F("Norrenbergstr.");
break;
}
case 234498:
{
returnValue = F("Norrstr.");
break;
}
case 234499:
{
returnValue = F("Norsinger Grundweg");
break;
}
case 234500:
{
returnValue = F("Norsinger Maistollenweg");
break;
}
case 234501:
{
returnValue = F("Norsinger Str.");
break;
}
case 234502:
{
returnValue = F("Norstedter Str.");
break;
}
case 234503:
{
returnValue = F("Nortelsteige");
break;
}
case 234504:
{
returnValue = F("Nortelweg");
break;
}
case 234505:
{
returnValue = F("North Carolina Avenue");
break;
}
case 234506:
{
returnValue = F("North Gettysburg Avenue");
break;
}
case 234507:
{
returnValue = F("North Lexington Avenue");
break;
}
case 234508:
{
returnValue = F("Northamptonpark");
break;
}
case 234509:
{
returnValue = F("Northamweg");
break;
}
case 234510:
{
returnValue = F("Northeimer Landstr.");
break;
}
case 234511:
{
returnValue = F("Northeimer Stieg");
break;
}
case 234512:
{
returnValue = F("Northeimer Str.");
break;
}
case 234513:
{
returnValue = F("Northeimer Weg");
break;
}
case 234514:
{
returnValue = F("Northolter Str.");
break;
}
case 234515:
{
returnValue = F("Northumer Weg");
break;
}
case 234516:
{
returnValue = F("Nortorf");
break;
}
case 234517:
{
returnValue = F("Nortorfer Chaussee");
break;
}
case 234518:
{
returnValue = F("Nortorfer Str.");
break;
}
case 234519:
{
returnValue = F("Nortorper Weg");
break;
}
case 234520:
{
returnValue = F("Nortruper Str.");
break;
}
case 234521:
{
returnValue = F("Nortthorn");
break;
}
case 234522:
{
returnValue = F("Nortweinerstr.");
break;
}
case 234523:
{
returnValue = F("Nortzstr.");
break;
}
case 234524:
{
returnValue = F("Norwegenstr.");
break;
}
case 234525:
{
returnValue = F("Norwegerweg");
break;
}
case 234526:
{
returnValue = F("Norwich Walk");
break;
}
case 234527:
{
returnValue = F("Norwichstr.");
break;
}
case 234528:
{
returnValue = F("Nosbacher Str.");
break;
}
case 234529:
{
returnValue = F("Nossener Berg");
break;
}
case 234530:
{
returnValue = F("Nossener Brücke");
break;
}
case 234531:
{
returnValue = F("Nossener Str.");
break;
}
case 234532:
{
returnValue = F("Nossengrund");
break;
}
case 234533:
{
returnValue = F("Nossentintrail");
break;
}
case 234534:
{
returnValue = F("Nostadtstr.");
break;
}
case 234535:
{
returnValue = F("Nostenbusch");
break;
}
case 234536:
{
returnValue = F("Nosterkamp");
break;
}
case 234537:
{
returnValue = F("Nosterplatz");
break;
}
case 234538:
{
returnValue = F("Nostorfer Str.");
break;
}
case 234539:
{
returnValue = F("Noswendeler Str.");
break;
}
case 234540:
{
returnValue = F("Notalmweg");
break;
}
case 234541:
{
returnValue = F("Notar-Bachmair-Str.");
break;
}
case 234542:
{
returnValue = F("Notausgang 1 Sandbergtunnel");
break;
}
case 234543:
{
returnValue = F("Notausgang 1 des Silberbergtunnels");
break;
}
case 234544:
{
returnValue = F("Notausgang 2 Bleßbergtunnel");
break;
}
case 234545:
{
returnValue = F("Notausgang Burg");
break;
}
case 234546:
{
returnValue = F("Notbrunnenstr.");
break;
}
case 234547:
{
returnValue = F("Notburgaplatz");
break;
}
case 234548:
{
returnValue = F("Notburgastr.");
break;
}
case 234549:
{
returnValue = F("Notburgaweg");
break;
}
case 234550:
{
returnValue = F("Notenstecherweg");
break;
}
case 234551:
{
returnValue = F("Notgasse");
break;
}
case 234552:
{
returnValue = F("Notgottesweg");
break;
}
case 234553:
{
returnValue = F("Nothafftstr.");
break;
}
case 234554:
{
returnValue = F("Nothaftstr.");
break;
}
case 234555:
{
returnValue = F("Nothaftweg");
break;
}
case 234556:
{
returnValue = F("Nothalt");
break;
}
case 234557:
{
returnValue = F("Nothausenbrücke");
break;
}
case 234558:
{
returnValue = F("Nothausenweg");
break;
}
case 234559:
{
returnValue = F("Nothauser Feld");
break;
}
case 234560:
{
returnValue = F("Nothberger Platz");
break;
}
case 234561:
{
returnValue = F("Nothberger Str.");
break;
}
case 234562:
{
returnValue = F("Nothberger Weg");
break;
}
case 234563:
{
returnValue = F("Nothelfersteig");
break;
}
case 234564:
{
returnValue = F("Nothelferweg");
break;
}
case 234565:
{
returnValue = F("Nothfelder Str.");
break;
}
case 234566:
{
returnValue = F("Nothgasse");
break;
}
case 234567:
{
returnValue = F("Nothgottesstr.");
break;
}
case 234568:
{
returnValue = F("Nothiltweg");
break;
}
case 234569:
{
returnValue = F("Nothmannstr.");
break;
}
case 234570:
{
returnValue = F("Notholdstr.");
break;
}
case 234571:
{
returnValue = F("Nothorstr.");
break;
}
case 234572:
{
returnValue = F("Nothweg");
break;
}
case 234573:
{
returnValue = F("Notinger Weg");
break;
}
case 234574:
{
returnValue = F("Notiser Weg");
break;
}
case 234575:
{
returnValue = F("Notisweg");
break;
}
case 234576:
{
returnValue = F("Notkarstr.");
break;
}
case 234577:
{
returnValue = F("Notkerweg");
break;
}
case 234578:
{
returnValue = F("Notkämpchenweg");
break;
}
case 234579:
{
returnValue = F("Notpforte");
break;
}
case 234580:
{
returnValue = F("Notre-Dame-Weg");
break;
}
case 234581:
{
returnValue = F("Notre-Dame-de-Gravenchon-Str.");
break;
}
case 234582:
{
returnValue = F("Notscheider Str.");
break;
}
case 234583:
{
returnValue = F("Notscheider Weg");
break;
}
case 234584:
{
returnValue = F("Notschrei Passhöhe");
break;
}
case 234585:
{
returnValue = F("Notschreiweg");
break;
}
case 234586:
{
returnValue = F("Notstandsweg");
break;
}
case 234587:
{
returnValue = F("Notstr.");
break;
}
case 234588:
{
returnValue = F("Nottau");
break;
}
case 234589:
{
returnValue = F("Nottauer Weg");
break;
}
case 234590:
{
returnValue = F("Nottbergstr.");
break;
}
case 234591:
{
returnValue = F("Nottebohmstr.");
break;
}
case 234592:
{
returnValue = F("Nottebohmweg");
break;
}
case 234593:
{
returnValue = F("Notteboomstege");
break;
}
case 234594:
{
returnValue = F("Nottelbergstr.");
break;
}
case 234595:
{
returnValue = F("Nottengartenweg");
break;
}
case 234596:
{
returnValue = F("Nottensdorfer Str.");
break;
}
case 234597:
{
returnValue = F("Nottensdorfer Weg");
break;
}
case 234598:
{
returnValue = F("Nottensteinstr.");
break;
}
case 234599:
{
returnValue = F("Nottersdorf");
break;
}
case 234600:
{
returnValue = F("Nottersiedlung");
break;
}
case 234601:
{
returnValue = F("Notterstr.");
break;
}
case 234602:
{
returnValue = F("Nottestr.");
break;
}
case 234603:
{
returnValue = F("Notteweg");
break;
}
case 234604:
{
returnValue = F("Nottgasse");
break;
}
case 234605:
{
returnValue = F("Notthafftweg");
break;
}
case 234606:
{
returnValue = F("Notthorn");
break;
}
case 234607:
{
returnValue = F("Nottingham-Anlage");
break;
}
case 234608:
{
returnValue = F("Nottkamp");
break;
}
case 234609:
{
returnValue = F("Nottkamphof");
break;
}
case 234610:
{
returnValue = F("Nottkampstr.");
break;
}
case 234611:
{
returnValue = F("Nottlebener Str.");
break;
}
case 234612:
{
returnValue = F("Nottlebener Weg");
break;
}
case 234613:
{
returnValue = F("Nottleber Str.");
break;
}
case 234614:
{
returnValue = F("Nottleber Tor");
break;
}
case 234615:
{
returnValue = F("Nottleber Weg");
break;
}
case 234616:
{
returnValue = F("Nottloh");
break;
}
case 234617:
{
returnValue = F("Nottloher Weg");
break;
}
case 234618:
{
returnValue = F("Nottnagelweg");
break;
}
case 234619:
{
returnValue = F("Nottorfer Str.");
break;
}
case 234620:
{
returnValue = F("Nottorfweg");
break;
}
case 234621:
{
returnValue = F("Nottorstr.");
break;
}
case 234622:
{
returnValue = F("Nottpohls Heide");
break;
}
case 234623:
{
returnValue = F("Nottstr.");
break;
}
case 234624:
{
returnValue = F("Nottulner Str.");
break;
}
case 234625:
{
returnValue = F("Nottweg");
break;
}
case 234626:
{
returnValue = F("Notweg");
break;
}
case 234627:
{
returnValue = F("Notwendestr.");
break;
}
case 234628:
{
returnValue = F("Notzeitweg");
break;
}
case 234629:
{
returnValue = F("Notzen");
break;
}
case 234630:
{
returnValue = F("Notzenhauser Str.");
break;
}
case 234631:
{
returnValue = F("Notzentalweg");
break;
}
case 234632:
{
returnValue = F("Notzinger Steige");
break;
}
case 234633:
{
returnValue = F("Notzinger Str.");
break;
}
case 234634:
{
returnValue = F("Notzinger Weg");
break;
}
case 234635:
{
returnValue = F("Notzingstr.");
break;
}
case 234636:
{
returnValue = F("Nouanweg");
break;
}
case 234637:
{
returnValue = F("Nougat-Allee");
break;
}
case 234638:
{
returnValue = F("Nourneystr.");
break;
}
case 234639:
{
returnValue = F("Nouvioner Str.");
break;
}
case 234640:
{
returnValue = F("Novalis-Park");
break;
}
case 234641:
{
returnValue = F("Novalisplatz");
break;
}
case 234642:
{
returnValue = F("Novalisstr.");
break;
}
case 234643:
{
returnValue = F("Novalisweg");
break;
}
case 234644:
{
returnValue = F("Novarastr.");
break;
}
case 234645:
{
returnValue = F("November ( Brandschneise )");
break;
}
case 234646:
{
returnValue = F("Novesiastr.");
break;
}
case 234647:
{
returnValue = F("Novettaweg");
break;
}
case 234648:
{
returnValue = F("Novianderweg");
break;
}
case 234649:
{
returnValue = F("Novizenweg");
break;
}
case 234650:
{
returnValue = F("Novuspark");
break;
}
case 234651:
{
returnValue = F("Nové-Město-Platz");
break;
}
case 234652:
{
returnValue = F("Nowackanlage");
break;
}
case 234653:
{
returnValue = F("Nowackistr.");
break;
}
case 234654:
{
returnValue = F("Nowgorodstr.");
break;
}
case 234655:
{
returnValue = F("Noyon-Allee");
break;
}
case 234656:
{
returnValue = F("Noßdorfer Str.");
break;
}
case 234657:
{
returnValue = F("Noßlitz");
break;
}
case 234658:
{
returnValue = F("Noßlitzer Str.");
break;
}
case 234659:
{
returnValue = F("Noßwitz");
break;
}
case 234660:
{
returnValue = F("Noßwitzer Hauptstr.");
break;
}
case 234661:
{
returnValue = F("Nr 22");
break;
}
case 234662:
{
returnValue = F("Nr 26");
break;
}
case 234663:
{
returnValue = F("Nr. 1 und 11");
break;
}
case 234664:
{
returnValue = F("Nr. 18, roter diag. Balken");
break;
}
case 234665:
{
returnValue = F("Nr. 2");
break;
}
case 234666:
{
returnValue = F("Nr. 23");
break;
}
case 234667:
{
returnValue = F("Nr. 4");
break;
}
case 234668:
{
returnValue = F("Nr.4");
break;
}
case 234669:
{
returnValue = F("Nr.5");
break;
}
case 234670:
{
returnValue = F("Nr.:(4)");
break;
}
case 234671:
{
returnValue = F("Nr.:4+5");
break;
}
case 234672:
{
returnValue = F("Nr26");
break;
}
case 234673:
{
returnValue = F("Nuberstr.");
break;
}
case 234674:
{
returnValue = F("Nuddelhof");
break;
}
case 234675:
{
returnValue = F("Nudersdorfer Str.");
break;
}
case 234676:
{
returnValue = F("Nudersdorfer Weg");
break;
}
case 234677:
{
returnValue = F("Nudhornweg");
break;
}
case 234678:
{
returnValue = F("Nudlbergweg");
break;
}
case 234679:
{
returnValue = F("Nudower Dorfstr.");
break;
}
case 234680:
{
returnValue = F("Nudower Grund");
break;
}
case 234681:
{
returnValue = F("Nudower Str.");
break;
}
case 234682:
{
returnValue = F("Nuelsenstr.");
break;
}
case 234683:
{
returnValue = F("Nufringer Str.");
break;
}
case 234684:
{
returnValue = F("Nufringer Weg");
break;
}
case 234685:
{
returnValue = F("Nuhnestr.");
break;
}
case 234686:
{
returnValue = F("Nuhnetalstr.");
break;
}
case 234687:
{
returnValue = F("Nuhneweg");
break;
}
case 234688:
{
returnValue = F("Nuhweiler");
break;
}
case 234689:
{
returnValue = F("Nuhweilerstr.");
break;
}
case 234690:
{
returnValue = F("Nuits-Sankt-Georges-Str.");
break;
}
case 234691:
{
returnValue = F("Nuitsstr.");
break;
}
case 234692:
{
returnValue = F("Nulandtplatz");
break;
}
case 234693:
{
returnValue = F("Nulandtstr.");
break;
}
case 234694:
{
returnValue = F("Nullbrede");
break;
}
case 234695:
{
returnValue = F("Nullweg");
break;
}
case 234696:
{
returnValue = F("Numbacher Hof");
break;
}
case 234697:
{
returnValue = F("Numbachstr.");
break;
}
case 234698:
{
returnValue = F("Numbergerstr.");
break;
}
case 234699:
{
returnValue = F("Numborner Str.");
break;
}
case 234700:
{
returnValue = F("Numeisterstr.");
break;
}
case 234701:
{
returnValue = F("Numerianstr.");
break;
}
case 234702:
{
returnValue = F("Nummerstr.");
break;
}
case 234703:
{
returnValue = F("Numrichstr.");
break;
}
case 234704:
{
returnValue = F("Nunhausen");
break;
}
case 234705:
{
returnValue = F("Nunkircher Str.");
break;
}
case 234706:
{
returnValue = F("Nunnenbrauk");
break;
}
case 234707:
{
returnValue = F("Nunnensieks Hof");
break;
}
case 234708:
{
returnValue = F("Nunnensteig");
break;
}
case 234709:
{
returnValue = F("Nunsdorfer Str.");
break;
}
case 234710:
{
returnValue = F("Nunsting");
break;
}
case 234711:
{
returnValue = F("Nunstinger Str.");
break;
}
case 234712:
{
returnValue = F("Nunzenberg");
break;
}
case 234713:
{
returnValue = F("Nunzenbergweg");
break;
}
case 234714:
{
returnValue = F("Nunzenrieder Str.");
break;
}
case 234715:
{
returnValue = F("Nupplinger Str.");
break;
}
case 234716:
{
returnValue = F("Nur Autobahnmeisterei");
break;
}
case 234717:
{
returnValue = F("Nur Winter,Loipe (Kein Weg)");
break;
}
case 234718:
{
returnValue = F("Nurda-Park");
break;
}
case 234719:
{
returnValue = F("Nurdakamp");
break;
}
case 234720:
{
returnValue = F("Nurmi-Str.");
break;
}
case 234721:
{
returnValue = F("Nurner Str.");
break;
}
case 234722:
{
returnValue = F("Nurrehang");
break;
}
case 234723:
{
returnValue = F("Nusbaumer Str.");
break;
}
case 234724:
{
returnValue = F("Nuschelberger Hauptstr.");
break;
}
case 234725:
{
returnValue = F("Nuschelberger Weg");
break;
}
case 234726:
{
returnValue = F("Nuschweg");
break;
}
case 234727:
{
returnValue = F("Nuschönfelder Weg");
break;
}
case 234728:
{
returnValue = F("Nusplinger Str.");
break;
}
case 234729:
{
returnValue = F("Nusplinger Weg");
break;
}
case 234730:
{
returnValue = F("Nuss-Anger");
break;
}
case 234731:
{
returnValue = F("Nussacker");
break;
}
case 234732:
{
returnValue = F("Nussallee");
break;
}
case 234733:
{
returnValue = F("Nussbach-Leithe");
break;
}
case 234734:
{
returnValue = F("Nussbachbrückli");
break;
}
case 234735:
{
returnValue = F("Nussbachweg");
break;
}
case 234736:
{
returnValue = F("Nussbaum-Pfad Rossrain");
break;
}
case 234737:
{
returnValue = F("Nussbaumallee");
break;
}
case 234738:
{
returnValue = F("Nussbaumhain");
break;
}
case 234739:
{
returnValue = F("Nussbaumstr.");
break;
}
case 234740:
{
returnValue = F("Nussbaumweg");
break;
}
case 234741:
{
returnValue = F("Nussberg-Denkmal");
break;
}
case 234742:
{
returnValue = F("Nussbergerstr.");
break;
}
case 234743:
{
returnValue = F("Nussbreite");
break;
}
case 234744:
{
returnValue = F("Nussbäumer Weg");
break;
}
case 234745:
{
returnValue = F("Nussbäumleweg");
break;
}
case 234746:
{
returnValue = F("Nussdorfer Str.");
break;
}
case 234747:
{
returnValue = F("Nussdorfer Weg");
break;
}
case 234748:
{
returnValue = F("Nusser Str.");
break;
}
case 234749:
{
returnValue = F("Nusser-von-Nußeck-Str.");
break;
}
case 234750:
{
returnValue = F("Nussergarten");
break;
}
case 234751:
{
returnValue = F("Nussergässchen");
break;
}
case 234752:
{
returnValue = F("Nusserstr.");
break;
}
case 234753:
{
returnValue = F("Nussertweg");
break;
}
case 234754:
{
returnValue = F("Nussgarten");
break;
}
case 234755:
{
returnValue = F("Nussgasse");
break;
}
case 234756:
{
returnValue = F("Nussgässchen");
break;
}
case 234757:
{
returnValue = F("Nusshans");
break;
}
case 234758:
{
returnValue = F("Nusshardtstr.");
break;
}
case 234759:
{
returnValue = F("Nussheckenweg");
break;
}
case 234760:
{
returnValue = F("Nusshölzle");
break;
}
case 234761:
{
returnValue = F("Nusshütterweg");
break;
}
case 234762:
{
returnValue = F("Nusspark");
break;
}
case 234763:
{
returnValue = F("Nussrainweg");
break;
}
case 234764:
{
returnValue = F("Nussstr.");
break;
}
case 234765:
{
returnValue = F("Nussweg");
break;
}
case 234766:
{
returnValue = F("Nussäcker");
break;
}
case 234767:
{
returnValue = F("Nussäckerstr.");
break;
}
case 234768:
{
returnValue = F("Nuthasche Str.");
break;
}
case 234769:
{
returnValue = F("Nuthedamm");
break;
}
case 234770:
{
returnValue = F("Nuthepark");
break;
}
case 234771:
{
returnValue = F("Nuthestr.");
break;
}
case 234772:
{
returnValue = F("Nuthetalstr.");
break;
}
case 234773:
{
returnValue = F("Nutheweg");
break;
}
case 234774:
{
returnValue = F("Nuthewinkel");
break;
}
case 234775:
{
returnValue = F("Nuthweg");
break;
}
case 234776:
{
returnValue = F("Nutloer Weg");
break;
}
case 234777:
{
returnValue = F("Nutriastr.");
break;
}
case 234778:
{
returnValue = F("Nutriaweg");
break;
}
case 234779:
{
returnValue = F("Nutscheidstr.");
break;
}
case 234780:
{
returnValue = F("Nutteler Kamp");
break;
}
case 234781:
{
returnValue = F("Nutteler Moorweg");
break;
}
case 234782:
{
returnValue = F("Nutteler Weg");
break;
}
case 234783:
{
returnValue = F("Nuttelner Damm");
break;
}
case 234784:
{
returnValue = F("Nuttelner Str.");
break;
}
case 234785:
{
returnValue = F("Nuttlarer Pfad");
break;
}
case 234786:
{
returnValue = F("Nuttlarer Str.");
break;
}
case 234787:
{
returnValue = F("Nutzberger Weg");
break;
}
case 234788:
{
returnValue = F("Nutzfelde");
break;
}
case 234789:
{
returnValue = F("Nutzfelder Weg");
break;
}
case 234790:
{
returnValue = F("Nutzhorn");
break;
}
case 234791:
{
returnValue = F("Nutzhorner Landstr.");
break;
}
case 234792:
{
returnValue = F("Nutzhorner Str.");
break;
}
case 234793:
{
returnValue = F("Nutzingerstr.");
break;
}
case 234794:
{
returnValue = F("Nutzingweg");
break;
}
case 234795:
{
returnValue = F("Nutzungsstr.");
break;
}
case 234796:
{
returnValue = F("Nutzweg");
break;
}
case 234797:
{
returnValue = F("Nutzweiher");
break;
}
case 234798:
{
returnValue = F("Nuurhörn");
break;
}
case 234799:
{
returnValue = F("Nußackerweg");
break;
}
case 234800:
{
returnValue = F("Nußallee");
break;
}
case 234801:
{
returnValue = F("Nußanger");
break;
}
case 234802:
{
returnValue = F("Nußbacher Str.");
break;
}
case 234803:
{
returnValue = F("Nußbachstr.");
break;
}
case 234804:
{
returnValue = F("Nußbachweg");
break;
}
case 234805:
{
returnValue = F("Nußbaum");
break;
}
case 234806:
{
returnValue = F("Nußbaum-Str.");
break;
}
case 234807:
{
returnValue = F("Nußbaumallee");
break;
}
case 234808:
{
returnValue = F("Nußbaumbitze");
break;
}
case 234809:
{
returnValue = F("Nußbaumer Berg");
break;
}
case 234810:
{
returnValue = F("Nußbaumer Brücke");
break;
}
case 234811:
{
returnValue = F("Nußbaumer Bungert");
break;
}
case 234812:
{
returnValue = F("Nußbaumer Feld");
break;
}
case 234813:
{
returnValue = F("Nußbaumer Garten");
break;
}
case 234814:
{
returnValue = F("Nußbaumer Höhe");
break;
}
case 234815:
{
returnValue = F("Nußbaumer Kamp");
break;
}
case 234816:
{
returnValue = F("Nußbaumer Str.");
break;
}
case 234817:
{
returnValue = F("Nußbaumer Weg");
break;
}
case 234818:
{
returnValue = F("Nußbaumer Wiese");
break;
}
case 234819:
{
returnValue = F("Nußbaumer Winkel");
break;
}
case 234820:
{
returnValue = F("Nußbaumerstr.");
break;
}
case 234821:
{
returnValue = F("Nußbaumerweg");
break;
}
case 234822:
{
returnValue = F("Nußbaumgasse");
break;
}
case 234823:
{
returnValue = F("Nußbaumhof");
break;
}
case 234824:
{
returnValue = F("Nußbaumkoppel");
break;
}
case 234825:
{
returnValue = F("Nußbaumstr.");
break;
}
case 234826:
{
returnValue = F("Nußbaumweg");
break;
}
case 234827:
{
returnValue = F("Nußbenden");
break;
}
case 234828:
{
returnValue = F("Nußberg");
break;
}
case 234829:
{
returnValue = F("Nußbergerstr.");
break;
}
case 234830:
{
returnValue = F("Nußbergstr.");
break;
}
case 234831:
{
returnValue = F("Nußbergtreppe");
break;
}
case 234832:
{
returnValue = F("Nußbergweg");
break;
}
case 234833:
{
returnValue = F("Nußbredde");
break;
}
case 234834:
{
returnValue = F("Nußbreite");
break;
}
case 234835:
{
returnValue = F("Nußbäumle");
break;
}
case 234836:
{
returnValue = F("Nußdorfer Str.");
break;
}
case 234837:
{
returnValue = F("Nußdorfer Weg");
break;
}
case 234838:
{
returnValue = F("Nußdorfstr.");
break;
}
case 234839:
{
returnValue = F("Nußfeldstr.");
break;
}
case 234840:
{
returnValue = F("Nußgarten");
break;
}
case 234841:
{
returnValue = F("Nußgartenstr.");
break;
}
case 234842:
{
returnValue = F("Nußgasse");
break;
}
case 234843:
{
returnValue = F("Nußgrabenweg");
break;
}
case 234844:
{
returnValue = F("Nußgrund");
break;
}
case 234845:
{
returnValue = F("Nußhardthüttenweg");
break;
}
case 234846:
{
returnValue = F("Nußhardtstr.");
break;
}
case 234847:
{
returnValue = F("Nußhardtweg");
break;
}
case 234848:
{
returnValue = F("Nußhecke");
break;
}
case 234849:
{
returnValue = F("Nußhecker Hof");
break;
}
case 234850:
{
returnValue = F("Nußholz");
break;
}
case 234851:
{
returnValue = F("Nußholzer Str.");
break;
}
case 234852:
{
returnValue = F("Nußholzstr.");
break;
}
case 234853:
{
returnValue = F("Nußhölzlweg");
break;
}
case 234854:
{
returnValue = F("Nußknackerstr.");
break;
}
case 234855:
{
returnValue = F("Nußlacherweg");
break;
}
case 234856:
{
returnValue = F("Nußleite");
break;
}
case 234857:
{
returnValue = F("Nußleitenweg");
break;
}
case 234858:
{
returnValue = F("Nußlocher Str.");
break;
}
case 234859:
{
returnValue = F("Nußlocher Weg");
break;
}
case 234860:
{
returnValue = F("Nußmannstr.");
break;
}
case 234861:
{
returnValue = F("Nußpergerweg");
break;
}
case 234862:
{
returnValue = F("Nußrain");
break;
}
case 234863:
{
returnValue = F("Nußschale");
break;
}
case 234864:
{
returnValue = F("Nußschütt");
break;
}
case 234865:
{
returnValue = F("Nußstr.");
break;
}
case 234866:
{
returnValue = F("Nußtobel");
break;
}
case 234867:
{
returnValue = F("Nußweg");
break;
}
case 234868:
{
returnValue = F("Nußwiesenweg");
break;
}
case 234869:
{
returnValue = F("Nußäckerstr.");
break;
}
case 234870:
{
returnValue = F("Nußäckerweg");
break;
}
case 234871:
{
returnValue = F("Nycolaistr.");
break;
}
case 234872:
{
returnValue = F("Nydamweg");
break;
}
case 234873:
{
returnValue = F("Nyenhuisring");
break;
}
case 234874:
{
returnValue = F("Nyfeld");
break;
}
case 234875:
{
returnValue = F("Nygen");
break;
}
case 234876:
{
returnValue = F("Nygener Str.");
break;
}
case 234877:
{
returnValue = F("Nyköpinger Str.");
break;
}
case 234878:
{
returnValue = F("Nyland");
break;
}
case 234879:
{
returnValue = F("Nylann-West");
break;
}
case 234880:
{
returnValue = F("Nylanndamm");
break;
}
case 234881:
{
returnValue = F("Nymburk-Ring");
break;
}
case 234882:
{
returnValue = F("Nympfenschneise");
break;
}
case 234883:
{
returnValue = F("Nymphengrotte");
break;
}
case 234884:
{
returnValue = F("Nymphenried");
break;
}
case 234885:
{
returnValue = F("Nymphenseeweg");
break;
}
case 234886:
{
returnValue = F("Nymphenweg");
break;
}
case 234887:
{
returnValue = F("Nyonsplatz");
break;
}
case 234888:
{
returnValue = F("Nysweg");
break;
}
case 234889:
{
returnValue = F("Nächst Neuendorfer Chaussee");
break;
}
case 234890:
{
returnValue = F("Nächst Neuendorfer Dorfstr.");
break;
}
case 234891:
{
returnValue = F("Nächst Neuendorfer Landstr.");
break;
}
case 234892:
{
returnValue = F("Nächstebrecker Berg");
break;
}
case 234893:
{
returnValue = F("Nächstebrecker Busch");
break;
}
case 234894:
{
returnValue = F("Nächstebrecker Bürgerpark");
break;
}
case 234895:
{
returnValue = F("Nächstebrecker Str.");
break;
}
case 234896:
{
returnValue = F("Nächstenbacher Str.");
break;
}
case 234897:
{
returnValue = F("Nächstenbacher Weg");
break;
}
case 234898:
{
returnValue = F("Nächstenbruch");
break;
}
case 234899:
{
returnValue = F("Nächstentalstr.");
break;
}
case 234900:
{
returnValue = F("Nächstmatten");
break;
}
case 234901:
{
returnValue = F("Nächtenstr.");
break;
}
case 234902:
{
returnValue = F("Nädlers Steig");
break;
}
case 234903:
{
returnValue = F("Nädlershorst");
break;
}
case 234904:
{
returnValue = F("Nädlershorster Weg");
break;
}
case 234905:
{
returnValue = F("Näfelsstr.");
break;
}
case 234906:
{
returnValue = F("Nägel");
break;
}
case 234907:
{
returnValue = F("Nägelbergweg");
break;
}
case 234908:
{
returnValue = F("Nägeleinsberg");
break;
}
case 234909:
{
returnValue = F("Nägeleinsbuck");
break;
}
case 234910:
{
returnValue = F("Nägeleinsplatz");
break;
}
case 234911:
{
returnValue = F("Nägelesberg");
break;
}
case 234912:
{
returnValue = F("Nägelesbrunnenweg");
break;
}
case 234913:
{
returnValue = F("Nägelesee");
break;
}
case 234914:
{
returnValue = F("Nägeleseestr.");
break;
}
case 234915:
{
returnValue = F("Nägelesfelsenweg");
break;
}
case 234916:
{
returnValue = F("Nägelesgasse");
break;
}
case 234917:
{
returnValue = F("Nägelesgrabenstr.");
break;
}
case 234918:
{
returnValue = F("Nägeleshofstr.");
break;
}
case 234919:
{
returnValue = F("Nägelestr.");
break;
}
case 234920:
{
returnValue = F("Nägelesäcker");
break;
}
case 234921:
{
returnValue = F("Nägeli-Weg");
break;
}
case 234922:
{
returnValue = F("Nägelishäldenstr.");
break;
}
case 234923:
{
returnValue = F("Nägelistr.");
break;
}
case 234924:
{
returnValue = F("Nägelriedbrücke");
break;
}
case 234925:
{
returnValue = F("Nägelriedstr.");
break;
}
case 234926:
{
returnValue = F("Nägelsbach");
break;
}
case 234927:
{
returnValue = F("Nägelsbachstr.");
break;
}
case 234928:
{
returnValue = F("Nägelseestr.");
break;
}
case 234929:
{
returnValue = F("Nägelspitzer Weg");
break;
}
case 234930:
{
returnValue = F("Nägelstedter Gartenstr.");
break;
}
case 234931:
{
returnValue = F("Nägelstedter Weg");
break;
}
case 234932:
{
returnValue = F("Näglein");
break;
}
case 234933:
{
returnValue = F("Nägleinsgasse");
break;
}
case 234934:
{
returnValue = F("Nähe Frankenschotter");
break;
}
case 234935:
{
returnValue = F("Nähefahrtsweg");
break;
}
case 234936:
{
returnValue = F("Nähere Hurst");
break;
}
case 234937:
{
returnValue = F("Nähereiweg");
break;
}
case 234938:
{
returnValue = F("Näherer Kirchberg");
break;
}
case 234939:
{
returnValue = F("Näherhofstr.");
break;
}
case 234940:
{
returnValue = F("Näherinkreuzweg");
break;
}
case 234941:
{
returnValue = F("Näherinnenstr.");
break;
}
case 234942:
{
returnValue = F("Nähermemminger Weg");
break;
}
case 234943:
{
returnValue = F("Nähermittenhausen");
break;
}
case 234944:
{
returnValue = F("Näherstiller Str.");
break;
}
case 234945:
{
returnValue = F("Näherweg");
break;
}
case 234946:
{
returnValue = F("Nähkissenweg");
break;
}
case 234947:
{
returnValue = F("Nähladengasse");
break;
}
case 234948:
{
returnValue = F("Nählingsweg");
break;
}
case 234949:
{
returnValue = F("Nähmaschinenweg");
break;
}
case 234950:
{
returnValue = F("Nährenbachstr.");
break;
}
case 234951:
{
returnValue = F("Nährenwaldweg");
break;
}
case 234952:
{
returnValue = F("Nährung");
break;
}
case 234953:
{
returnValue = F("Nähterstr.");
break;
}
case 234954:
{
returnValue = F("Näie Tuun");
break;
}
case 234955:
{
returnValue = F("Näie Wäi");
break;
}
case 234956:
{
returnValue = F("Näilound");
break;
}
case 234957:
{
returnValue = F("Näsbachstr.");
break;
}
case 234958:
{
returnValue = F("Näss");
break;
}
case 234959:
{
returnValue = F("Nässeweg");
break;
}
case 234960:
{
returnValue = F("Nätelward");
break;
}
case 234961:
{
returnValue = F("Näthergäßchen");
break;
}
case 234962:
{
returnValue = F("Näthern");
break;
}
case 234963:
{
returnValue = F("Nätherstr.");
break;
}
case 234964:
{
returnValue = F("Németkérstr.");
break;
}
case 234965:
{
returnValue = F("Nîmes-Str.");
break;
}
case 234966:
{
returnValue = F("Nöbdenitzer Str.");
break;
}
case 234967:
{
returnValue = F("Nöbeditz");
break;
}
case 234968:
{
returnValue = F("Nöbelner Str.");
break;
}
case 234969:
{
returnValue = F("Nöben");
break;
}
case 234970:
{
returnValue = F("Nöchel");
break;
}
case 234971:
{
returnValue = F("Nöckelstr.");
break;
}
case 234972:
{
returnValue = F("Nöckerstr.");
break;
}
case 234973:
{
returnValue = F("Nödaer Str.");
break;
}
case 234974:
{
returnValue = F("Nödaer Weg");
break;
}
case 234975:
{
returnValue = F("Nödelweg");
break;
}
case 234976:
{
returnValue = F("Nödenitzscher Grund");
break;
}
case 234977:
{
returnValue = F("Nödenitzscher Weg");
break;
}
case 234978:
{
returnValue = F("Nödiker Str.");
break;
}
case 234979:
{
returnValue = F("Nödlitz");
break;
}
case 234980:
{
returnValue = F("Nödlitzer Str.");
break;
}
case 234981:
{
returnValue = F("Nögelsche Schaftrift");
break;
}
case 234982:
{
returnValue = F("Nöhlenweg");
break;
}
case 234983:
{
returnValue = F("Nöhrenhaus");
break;
}
case 234984:
{
returnValue = F("Nöhrenhauser Str.");
break;
}
case 234985:
{
returnValue = F("Nöhrenkoppel");
break;
}
case 234986:
{
returnValue = F("Nöhringswinkel");
break;
}
case 234987:
{
returnValue = F("Nöldekestr.");
break;
}
case 234988:
{
returnValue = F("Nölke-Schütten-Str.");
break;
}
case 234989:
{
returnValue = F("Nölkenweg");
break;
}
case 234990:
{
returnValue = F("Nöllestr.");
break;
}
case 234991:
{
returnValue = F("Nölppstr.");
break;
}
case 234992:
{
returnValue = F("Nöltings Gang");
break;
}
case 234993:
{
returnValue = F("Nöltingstr.");
break;
}
case 234994:
{
returnValue = F("Nöltingsweg");
break;
}
case 234995:
{
returnValue = F("Nömaierstr.");
break;
}
case 234996:
{
returnValue = F("Nömer");
break;
}
case 234997:
{
returnValue = F("Nömerberg");
break;
}
case 234998:
{
returnValue = F("Nömmert");
break;
}
case 234999:
{
returnValue = F("Nönneckenbergsweg");
break;
}
case 235000:
{
returnValue = F("Nöpker Str.");
break;
}
case 235001:
{
returnValue = F("Nördeltstiege");
break;
}
case 235002:
{
returnValue = F("Nördeltstr.");
break;
}
case 235003:
{
returnValue = F("Nörder Str.");
break;
}
case 235004:
{
returnValue = F("Nördernweg");
break;
}
case 235005:
{
returnValue = F("Nörditz");
break;
}
case 235006:
{
returnValue = F("Nördliche Allee");
break;
}
case 235007:
{
returnValue = F("Nördliche Bergstr.");
break;
}
case 235008:
{
returnValue = F("Nördliche Dorfstr.");
break;
}
case 235009:
{
returnValue = F("Nördliche Grubholzer Str.");
break;
}
case 235010:
{
returnValue = F("Nördliche Hafenstr.");
break;
}
case 235011:
{
returnValue = F("Nördliche Hauptstr.");
break;
}
case 235012:
{
returnValue = F("Nördliche Hildapromenade");
break;
}
case 235013:
{
returnValue = F("Nördliche Ingolstädter Str.");
break;
}
case 235014:
{
returnValue = F("Nördliche Keltenstr.");
break;
}
case 235015:
{
returnValue = F("Nördliche Lippestr.");
break;
}
case 235016:
{
returnValue = F("Nördliche Lohstr.");
break;
}
case 235017:
{
returnValue = F("Nördliche Mauerstr.");
break;
}
case 235018:
{
returnValue = F("Nördliche Münchner Str.");
break;
}
case 235019:
{
returnValue = F("Nördliche Randstr.");
break;
}
case 235020:
{
returnValue = F("Nördliche Ringstr.");
break;
}
case 235021:
{
returnValue = F("Nördliche Römerstr.");
break;
}
case 235022:
{
returnValue = F("Nördliche Salzstr.");
break;
}
case 235023:
{
returnValue = F("Nördliche Schlafergasse");
break;
}
case 235024:
{
returnValue = F("Nördliche Seestr.");
break;
}
case 235025:
{
returnValue = F("Nördliche Seeterrasse");
break;
}
case 235026:
{
returnValue = F("Nördliche Stadtmauer");
break;
}
case 235027:
{
returnValue = F("Nördliche Stadtmauerstr.");
break;
}
case 235028:
{
returnValue = F("Nördliche Umgehungsstr.");
break;
}
case 235029:
{
returnValue = F("Nördliche Waldstr.");
break;
}
case 235030:
{
returnValue = F("Nördliche Wallstr.");
break;
}
case 235031:
{
returnValue = F("Nördliche Wiesenstr.");
break;
}
case 235032:
{
returnValue = F("Nördliche Winzerstr.");
break;
}
case 235033:
{
returnValue = F("Nördlicher Anwachsweg");
break;
}
case 235034:
{
returnValue = F("Nördlicher Buchbergweg");
break;
}
case 235035:
{
returnValue = F("Nördlicher Deichverteidigungsweg");
break;
}
case 235036:
{
returnValue = F("Nördlicher Eichwaldweg");
break;
}
case 235037:
{
returnValue = F("Nördlicher Feldweg");
break;
}
case 235038:
{
returnValue = F("Nördlicher Frauenberg");
break;
}
case 235039:
{
returnValue = F("Nördlicher Gastweg");
break;
}
case 235040:
{
returnValue = F("Nördlicher Gewerbeweg");
break;
}
case 235041:
{
returnValue = F("Nördlicher Grenzweg");
break;
}
case 235042:
{
returnValue = F("Nördlicher Griesweg");
break;
}
case 235043:
{
returnValue = F("Nördlicher Hauptweg");
break;
}
case 235044:
{
returnValue = F("Nördlicher Kammweg");
break;
}
case 235045:
{
returnValue = F("Nördlicher Kirchenweg");
break;
}
case 235046:
{
returnValue = F("Nördlicher Knick");
break;
}
case 235047:
{
returnValue = F("Nördlicher Ortsringweg");
break;
}
case 235048:
{
returnValue = F("Nördlicher Park");
break;
}
case 235049:
{
returnValue = F("Nördlicher Pflanzschulweg");
break;
}
case 235050:
{
returnValue = F("Nördlicher Querweg");
break;
}
case 235051:
{
returnValue = F("Nördlicher Ringweg");
break;
}
case 235052:
{
returnValue = F("Nördlicher Rosengarten");
break;
}
case 235053:
{
returnValue = F("Nördlicher Rundweg");
break;
}
case 235054:
{
returnValue = F("Nördlicher Seeuferweg");
break;
}
case 235055:
{
returnValue = F("Nördlicher Siegelsberg");
break;
}
case 235056:
{
returnValue = F("Nördlicher Stadtgraben");
break;
}
case 235057:
{
returnValue = F("Nördlicher Traufweg");
break;
}
case 235058:
{
returnValue = F("Nördlicher Trimmpfad");
break;
}
case 235059:
{
returnValue = F("Nördlicher Uferweg");
break;
}
case 235060:
{
returnValue = F("Nördliches Feld");
break;
}
case 235061:
{
returnValue = F("Nördliches Günztal");
break;
}
case 235062:
{
returnValue = F("Nördliches Hauptgeräumt");
break;
}
case 235063:
{
returnValue = F("Nördliches Sandfeld");
break;
}
case 235064:
{
returnValue = F("Nördling");
break;
}
case 235065:
{
returnValue = F("Nördlinger Steinweg");
break;
}
case 235066:
{
returnValue = F("Nördlinger Str.");
break;
}
case 235067:
{
returnValue = F("Nördlinger Weg");
break;
}
case 235068:
{
returnValue = F("Nördlingerhauweg");
break;
}
case 235069:
{
returnValue = F("Nördlingerstr.");
break;
}
case 235070:
{
returnValue = F("Nörenbergskamp");
break;
}
case 235071:
{
returnValue = F("Nörenbergstr.");
break;
}
case 235072:
{
returnValue = F("Nörerstr.");
break;
}
case 235073:
{
returnValue = F("Nörn");
break;
}
case 235074:
{
returnValue = F("Nörrmark");
break;
}
case 235075:
{
returnValue = F("Nörrweg");
break;
}
case 235076:
{
returnValue = F("Nörtener Str.");
break;
}
case 235077:
{
returnValue = F("Nörthestr.");
break;
}
case 235078:
{
returnValue = F("Nörvenicher Str.");
break;
}
case 235079:
{
returnValue = F("Nörvenicher Weg");
break;
}
case 235080:
{
returnValue = F("Nösbertser Weg");
break;
}
case 235081:
{
returnValue = F("Nöschenröder Hangweg");
break;
}
case 235082:
{
returnValue = F("Nöschenröder Str.");
break;
}
case 235083:
{
returnValue = F("Nöscherstr.");
break;
}
case 235084:
{
returnValue = F("Nöselwitzer Str.");
break;
}
case 235085:
{
returnValue = F("Nösenberg");
break;
}
case 235086:
{
returnValue = F("Nösingfelder Str.");
break;
}
case 235087:
{
returnValue = F("Nösistig");
break;
}
case 235088:
{
returnValue = F("Nösnerland");
break;
}
case 235089:
{
returnValue = F("Nösselweg");
break;
}
case 235090:
{
returnValue = F("Nössige");
break;
}
case 235091:
{
returnValue = F("Nössling");
break;
}
case 235092:
{
returnValue = F("Nösterkamp");
break;
}
case 235093:
{
returnValue = F("Nötenwallweg");
break;
}
case 235094:
{
returnValue = F("Nöthen");
break;
}
case 235095:
{
returnValue = F("Nöthener Mühle");
break;
}
case 235096:
{
returnValue = F("Nöthener Str.");
break;
}
case 235097:
{
returnValue = F("Nöthiggasse");
break;
}
case 235098:
{
returnValue = F("Nöthnitz");
break;
}
case 235099:
{
returnValue = F("Nöthnitzer Hang");
break;
}
case 235100:
{
returnValue = F("Nöthnitzer Str.");
break;
}
case 235101:
{
returnValue = F("Nöthstr.");
break;
}
case 235102:
{
returnValue = F("Nötiggasse");
break;
}
case 235103:
{
returnValue = F("Nötten-Brüder-Wallstr.");
break;
}
case 235104:
{
returnValue = F("Nöttenkamp");
break;
}
case 235105:
{
returnValue = F("Nöttenkampstr.");
break;
}
case 235106:
{
returnValue = F("Nöttenser Weg");
break;
}
case 235107:
{
returnValue = F("Nöttenstr.");
break;
}
case 235108:
{
returnValue = F("Nöttentor");
break;
}
case 235109:
{
returnValue = F("Nöttinger Richtstatt");
break;
}
case 235110:
{
returnValue = F("Nöttinger Str.");
break;
}
case 235111:
{
returnValue = F("Nöttinger Weg");
break;
}
case 235112:
{
returnValue = F("Nöttingerweg");
break;
}
case 235113:
{
returnValue = F("Nötzoldweg");
break;
}
case 235114:
{
returnValue = F("Növenthien");
break;
}
case 235115:
{
returnValue = F("Növergasse");
break;
}
case 235116:
{
returnValue = F("Növerhof");
break;
}
case 235117:
{
returnValue = F("Növerstr.");
break;
}
case 235118:
{
returnValue = F("Nößlerstr.");
break;
}
case 235119:
{
returnValue = F("Nößwartling");
break;
}
case 235120:
{
returnValue = F("Nørre-Alslev-Ring");
break;
}
case 235121:
{
returnValue = F("Nübbeler Weg");
break;
}
case 235122:
{
returnValue = F("Nübelfeld");
break;
}
case 235123:
{
returnValue = F("Nüchels-Weiher");
break;
}
case 235124:
{
returnValue = F("Nüchternbrunnweg");
break;
}
case 235125:
{
returnValue = F("Nüchtershof");
break;
}
case 235126:
{
returnValue = F("Nückeler Schulweg");
break;
}
case 235127:
{
returnValue = F("Nückeler Weg");
break;
}
case 235128:
{
returnValue = F("Nückental");
break;
}
case 235129:
{
returnValue = F("Nücker Str.");
break;
}
case 235130:
{
returnValue = F("Nückestr.");
break;
}
case 235131:
{
returnValue = F("Nüdelshalbach");
break;
}
case 235132:
{
returnValue = F("Nüdlinger Str.");
break;
}
case 235133:
{
returnValue = F("Nüdlingstr.");
break;
}
case 235134:
{
returnValue = F("Nüdlingweg");
break;
}
case 235135:
{
returnValue = F("Nüdlitzer Weg");
break;
}
case 235136:
{
returnValue = F("Nüffernstr.");
break;
}
case 235137:
{
returnValue = F("Nüggelnstück");
break;
}
case 235138:
{
returnValue = F("Nührenweg");
break;
}
case 235139:
{
returnValue = F("Nükkenborg");
break;
}
case 235140:
{
returnValue = F("Nüllberg");
break;
}
case 235141:
{
returnValue = F("Nüllbrink");
break;
}
case 235142:
{
returnValue = F("Nüllerholzstr.");
break;
}
case 235143:
{
returnValue = F("Nülsenstr.");
break;
}
case 235144:
{
returnValue = F("Nümbrechter Str.");
break;
}
case 235145:
{
returnValue = F("Nümmen");
break;
}
case 235146:
{
returnValue = F("Nümmener Feld");
break;
}
case 235147:
{
returnValue = F("Nümmener Str.");
break;
}
case 235148:
{
returnValue = F("Nünchritzer Str.");
break;
}
case 235149:
{
returnValue = F("Nünnings Busch");
break;
}
case 235150:
{
returnValue = F("Nünningstiege");
break;
}
case 235151:
{
returnValue = F("Nünningsweg");
break;
}
case 235152:
{
returnValue = F("Nürburger Str.");
break;
}
case 235153:
{
returnValue = F("Nürburger Weg");
break;
}
case 235154:
{
returnValue = F("Nürburgstr.");
break;
}
case 235155:
{
returnValue = F("Nürburgweg");
break;
}
case 235156:
{
returnValue = F("Nürenburgstr.");
break;
}
case 235157:
{
returnValue = F("Nürer Weg");
break;
}
case 235158:
{
returnValue = F("Nüringstr.");
break;
}
case 235159:
{
returnValue = F("Nürnberger Gasse");
break;
}
case 235160:
{
returnValue = F("Nürnberger Hof");
break;
}
case 235161:
{
returnValue = F("Nürnberger Landstr.");
break;
}
case 235162:
{
returnValue = F("Nürnberger Leithe");
break;
}
case 235163:
{
returnValue = F("Nürnberger Str.");
break;
}
case 235164:
{
returnValue = F("Nürnberger Str. / Woffenbacher Str.");
break;
}
case 235165:
{
returnValue = F("Nürnberger Weg");
break;
}
case 235166:
{
returnValue = F("Nürnbergstr.");
break;
}
case 235167:
{
returnValue = F("Nürnburger Str.");
break;
}
case 235168:
{
returnValue = F("Nürsche");
break;
}
case 235169:
{
returnValue = F("Nürtinger Str.");
break;
}
case 235170:
{
returnValue = F("Nürtinger Weg");
break;
}
case 235171:
{
returnValue = F("Nürtingerhofstr.");
break;
}
case 235172:
{
returnValue = F("Nüskenkamp");
break;
}
case 235173:
{
returnValue = F("Nüss Drenk");
break;
}
case 235174:
{
returnValue = F("Nüssauer Weg");
break;
}
case 235175:
{
returnValue = F("Nüsse Twier");
break;
}
case 235176:
{
returnValue = F("Nüssebergweg");
break;
}
case 235177:
{
returnValue = F("Nüssegarten");
break;
}
case 235178:
{
returnValue = F("Nüssle");
break;
}
case 235179:
{
returnValue = F("Nüsslestr.");
break;
}
case 235180:
{
returnValue = F("Nüssstr.");
break;
}
case 235181:
{
returnValue = F("Nüstedt");
break;
}
case 235182:
{
returnValue = F("Nüstenbacher Str.");
break;
}
case 235183:
{
returnValue = F("Nüster Küppel");
break;
}
case 235184:
{
returnValue = F("Nüster Str.");
break;
}
case 235185:
{
returnValue = F("Nüsterrasen");
break;
}
case 235186:
{
returnValue = F("Nüsterrasener Weg");
break;
}
case 235187:
{
returnValue = F("Nüststr.");
break;
}
case 235188:
{
returnValue = F("Nütheimer Str.");
break;
}
case 235189:
{
returnValue = F("Nüthenshof");
break;
}
case 235190:
{
returnValue = F("Nütschauer Weg");
break;
}
case 235191:
{
returnValue = F("Nüttel");
break;
}
case 235192:
{
returnValue = F("Nütteler Weg");
break;
}
case 235193:
{
returnValue = F("Nüttermoorer Str.");
break;
}
case 235194:
{
returnValue = F("Nützelbach");
break;
}
case 235195:
{
returnValue = F("Nützelbuchweg");
break;
}
case 235196:
{
returnValue = F("Nützer Weg");
break;
}
case 235197:
{
returnValue = F("Nüxei");
break;
}
case 235198:
{
returnValue = F("Nüxeier Str.");
break;
}
case 235199:
{
returnValue = F("Nüxhausen");
break;
}
case 235200:
{
returnValue = F("Nüßlerweg");
break;
}
case 235201:
{
returnValue = F("Nüßleser Str.");
break;
}
}
return returnValue;
}
