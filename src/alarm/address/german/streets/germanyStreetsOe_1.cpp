#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameOe1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 357127:
    {
        returnValue = F("Öbelgasse");
        break;
    }
    case 357128:
    {
        returnValue = F("Öber de Beek");
        break;
    }
    case 357129:
    {
        returnValue = F("Öber'n Barg");
        break;
    }
    case 357130:
    {
        returnValue = F("Öberauer Str.");
        break;
    }
    case 357131:
    {
        returnValue = F("Öberbachweg");
        break;
    }
    case 357132:
    {
        returnValue = F("Öbern Diek");
        break;
    }
    case 357133:
    {
        returnValue = F("Öblinger Str.");
        break;
    }
    case 357134:
    {
        returnValue = F("Öchenbach");
        break;
    }
    case 357135:
    {
        returnValue = F("Öchlerweg");
        break;
    }
    case 357136:
    {
        returnValue = F("Öchsle-Radweg");
        break;
    }
    case 357137:
    {
        returnValue = F("Öchslerstückallee");
        break;
    }
    case 357138:
    {
        returnValue = F("Öchslestr.");
        break;
    }
    case 357139:
    {
        returnValue = F("Öchsleweg");
        break;
    }
    case 357140:
    {
        returnValue = F("Öchslinstr.");
        break;
    }
    case 357141:
    {
        returnValue = F("Öchsnersweg");
        break;
    }
    case 357142:
    {
        returnValue = F("Öchtringhauser Str.");
        break;
    }
    case 357143:
    {
        returnValue = F("Öcklweg");
        break;
    }
    case 357144:
    {
        returnValue = F("Öd");
        break;
    }
    case 357145:
    {
        returnValue = F("Ödachstr.");
        break;
    }
    case 357146:
    {
        returnValue = F("Ödachweg");
        break;
    }
    case 357147:
    {
        returnValue = F("Ödacker");
        break;
    }
    case 357148:
    {
        returnValue = F("Ödberg");
        break;
    }
    case 357149:
    {
        returnValue = F("Öddingstr.");
        break;
    }
    case 357150:
    {
        returnValue = F("Ödegrundbergweg");
        break;
    }
    case 357151:
    {
        returnValue = F("Ödegrundhangweg");
        break;
    }
    case 357152:
    {
        returnValue = F("Ödeklingeweg");
        break;
    }
    case 357153:
    {
        returnValue = F("Ödenburger Str.");
        break;
    }
    case 357154:
    {
        returnValue = F("Ödenburger Weg");
        break;
    }
    case 357155:
    {
        returnValue = F("Ödenburgstr.");
        break;
    }
    case 357156:
    {
        returnValue = F("Ödenbühlsteige");
        break;
    }
    case 357157:
    {
        returnValue = F("Ödendorfer Weg");
        break;
    }
    case 357158:
    {
        returnValue = F("Ödenfeldstr.");
        break;
    }
    case 357159:
    {
        returnValue = F("Ödengesäß");
        break;
    }
    case 357160:
    {
        returnValue = F("Ödenhaid");
        break;
    }
    case 357161:
    {
        returnValue = F("Ödenhof");
        break;
    }
    case 357162:
    {
        returnValue = F("Ödenhofweg");
        break;
    }
    case 357163:
    {
        returnValue = F("Ödenholzstr.");
        break;
    }
    case 357164:
    {
        returnValue = F("Ödenhub");
        break;
    }
    case 357165:
    {
        returnValue = F("Ödenpullach");
        break;
    }
    case 357166:
    {
        returnValue = F("Ödenpullacher Str.");
        break;
    }
    case 357167:
    {
        returnValue = F("Ödenthal");
        break;
    }
    case 357168:
    {
        returnValue = F("Ödenthaler Str.");
        break;
    }
    case 357169:
    {
        returnValue = F("Ödenthaler Weg");
        break;
    }
    case 357170:
    {
        returnValue = F("Ödenthalweg");
        break;
    }
    case 357171:
    {
        returnValue = F("Ödenturmweg");
        break;
    }
    case 357172:
    {
        returnValue = F("Ödenwald");
        break;
    }
    case 357173:
    {
        returnValue = F("Ödenwaldstetter Str.");
        break;
    }
    case 357174:
    {
        returnValue = F("Ödenwaldstr.");
        break;
    }
    case 357175:
    {
        returnValue = F("Ödenweg");
        break;
    }
    case 357176:
    {
        returnValue = F("Öder Weg");
        break;
    }
    case 357177:
    {
        returnValue = F("Öderaner Str.");
        break;
    }
    case 357178:
    {
        returnValue = F("Ödernitzer Str.");
        break;
    }
    case 357179:
    {
        returnValue = F("Ödersgasse");
        break;
    }
    case 357180:
    {
        returnValue = F("Öderweg");
        break;
    }
    case 357181:
    {
        returnValue = F("Ödesrech");
        break;
    }
    case 357182:
    {
        returnValue = F("Ödeweg");
        break;
    }
    case 357183:
    {
        returnValue = F("Ödgartelstr.");
        break;
    }
    case 357184:
    {
        returnValue = F("Ödgartenweg");
        break;
    }
    case 357185:
    {
        returnValue = F("Ödhof");
        break;
    }
    case 357186:
    {
        returnValue = F("Ödhofer Weg");
        break;
    }
    case 357187:
    {
        returnValue = F("Ödholzstr.");
        break;
    }
    case 357188:
    {
        returnValue = F("Ödholzweg");
        break;
    }
    case 357189:
    {
        returnValue = F("Ödhäuselweg");
        break;
    }
    case 357190:
    {
        returnValue = F("Ödhäuser");
        break;
    }
    case 357191:
    {
        returnValue = F("Ödhäusl");
        break;
    }
    case 357192:
    {
        returnValue = F("Ödinghauser Kamp");
        break;
    }
    case 357193:
    {
        returnValue = F("Ödinghauser Quelle");
        break;
    }
    case 357194:
    {
        returnValue = F("Ödinghauser Str.");
        break;
    }
    case 357195:
    {
        returnValue = F("Ödingheide");
        break;
    }
    case 357196:
    {
        returnValue = F("Ödlandrundweg");
        break;
    }
    case 357197:
    {
        returnValue = F("Ödlandweg");
        break;
    }
    case 357198:
    {
        returnValue = F("Ödmiesbacher Str.");
        break;
    }
    case 357199:
    {
        returnValue = F("Ödmühlenweg");
        break;
    }
    case 357200:
    {
        returnValue = F("Ödpielmannsberg");
        break;
    }
    case 357201:
    {
        returnValue = F("Ödreuteweg");
        break;
    }
    case 357202:
    {
        returnValue = F("Ödsbacher Str.");
        break;
    }
    case 357203:
    {
        returnValue = F("Ödseige");
        break;
    }
    case 357204:
    {
        returnValue = F("Ödstallweg");
        break;
    }
    case 357205:
    {
        returnValue = F("Ödwaldhausen");
        break;
    }
    case 357206:
    {
        returnValue = F("Ödwalpersreuth");
        break;
    }
    case 357207:
    {
        returnValue = F("Ödweiler Hof");
        break;
    }
    case 357208:
    {
        returnValue = F("Ödweilerhofstr.");
        break;
    }
    case 357209:
    {
        returnValue = F("Ödwieser Weg");
        break;
    }
    case 357210:
    {
        returnValue = F("Ödön-von-Horvath-Weg");
        break;
    }
    case 357211:
    {
        returnValue = F("Öfele");
        break;
    }
    case 357212:
    {
        returnValue = F("Öfelepass");
        break;
    }
    case 357213:
    {
        returnValue = F("Öffelegasse");
        break;
    }
    case 357214:
    {
        returnValue = F("Öffentlich gewidmeter Weg 161/1 Privatbesitz");
        break;
    }
    case 357215:
    {
        returnValue = F("Öffentlich gewidmeter Weg 33 Privatbesitz");
        break;
    }
    case 357216:
    {
        returnValue = F("Öffentlich gewidmeter Weg Privatbesitz");
        break;
    }
    case 357217:
    {
        returnValue = F("Öffentliche Grünanlage am Horst-Salzmann-Weg");
        break;
    }
    case 357218:
    {
        returnValue = F("Öffentliche Grünfläche Hochäckerstr.");
        break;
    }
    case 357219:
    {
        returnValue = F("Öffentlicher Garten");
        break;
    }
    case 357220:
    {
        returnValue = F("Öffentlicher Garten am Kriegsarchiv");
        break;
    }
    case 357221:
    {
        returnValue = F("Öffentlicher Gemeinschaftsplatz");
        break;
    }
    case 357222:
    {
        returnValue = F("Öffentlicher Grill und Picknickplatz für Naturfreunde");
        break;
    }
    case 357223:
    {
        returnValue = F("Öffentlicher Park Pleißa");
        break;
    }
    case 357224:
    {
        returnValue = F("Öffgasse");
        break;
    }
    case 357225:
    {
        returnValue = F("Öfinger Str.");
        break;
    }
    case 357226:
    {
        returnValue = F("Öfingerhauweg");
        break;
    }
    case 357227:
    {
        returnValue = F("Öflinger Str.");
        break;
    }
    case 357228:
    {
        returnValue = F("Öftenhäven");
        break;
    }
    case 357229:
    {
        returnValue = F("Öftenhävener Weg");
        break;
    }
    case 357230:
    {
        returnValue = F("Öglinstr.");
        break;
    }
    case 357231:
    {
        returnValue = F("Öhder Str.");
        break;
    }
    case 357232:
    {
        returnValue = F("Öhinghaltweg");
        break;
    }
    case 357233:
    {
        returnValue = F("Öhlberg");
        break;
    }
    case 357234:
    {
        returnValue = F("Öhlbergschneise");
        break;
    }
    case 357235:
    {
        returnValue = F("Öhlchen");
        break;
    }
    case 357236:
    {
        returnValue = F("Öhlemich");
        break;
    }
    case 357237:
    {
        returnValue = F("Öhlengärten");
        break;
    }
    case 357238:
    {
        returnValue = F("Öhler");
        break;
    }
    case 357239:
    {
        returnValue = F("Öhlerweg");
        break;
    }
    case 357240:
    {
        returnValue = F("Öhleweg");
        break;
    }
    case 357241:
    {
        returnValue = F("Öhlisbrunnenweg");
        break;
    }
    case 357242:
    {
        returnValue = F("Öhlmühle");
        break;
    }
    case 357243:
    {
        returnValue = F("Öhlschlagstr.");
        break;
    }
    case 357244:
    {
        returnValue = F("Öhmdstr.");
        break;
    }
    case 357245:
    {
        returnValue = F("Öhmdweg");
        break;
    }
    case 357246:
    {
        returnValue = F("Öhmdwiese");
        break;
    }
    case 357247:
    {
        returnValue = F("Öhmdwiesen");
        break;
    }
    case 357248:
    {
        returnValue = F("Öhmdwiesenstr.");
        break;
    }
    case 357249:
    {
        returnValue = F("Öhmdwiesenweg");
        break;
    }
    case 357250:
    {
        returnValue = F("Öhnbergstr.");
        break;
    }
    case 357251:
    {
        returnValue = F("Öhnböcker Str.");
        break;
    }
    case 357252:
    {
        returnValue = F("Öhnehofen");
        break;
    }
    case 357253:
    {
        returnValue = F("Öhninger Str.");
        break;
    }
    case 357254:
    {
        returnValue = F("Öhrentalsweg");
        break;
    }
    case 357255:
    {
        returnValue = F("Öhrich");
        break;
    }
    case 357256:
    {
        returnValue = F("Öhrichstr.");
        break;
    }
    case 357257:
    {
        returnValue = F("Öhrigstr.");
        break;
    }
    case 357258:
    {
        returnValue = F("Öhringer Steige");
        break;
    }
    case 357259:
    {
        returnValue = F("Öhringer Str.");
        break;
    }
    case 357260:
    {
        returnValue = F("Öhringer Weg");
        break;
    }
    case 357261:
    {
        returnValue = F("Öhrkamp");
        break;
    }
    case 357262:
    {
        returnValue = F("Öhrlenstr.");
        break;
    }
    case 357263:
    {
        returnValue = F("Öhrlinggasse");
        break;
    }
    case 357264:
    {
        returnValue = F("Öhrnbachstr.");
        break;
    }
    case 357265:
    {
        returnValue = F("Öhrwiesenweg");
        break;
    }
    case 357266:
    {
        returnValue = F("Öingssand");
        break;
    }
    case 357267:
    {
        returnValue = F("Öjendorfer Damm");
        break;
    }
    case 357268:
    {
        returnValue = F("Öjendorfer Höhe");
        break;
    }
    case 357269:
    {
        returnValue = F("Öjendorfer Park");
        break;
    }
    case 357270:
    {
        returnValue = F("Öjendorfer Steinkamp");
        break;
    }
    case 357271:
    {
        returnValue = F("Öjendorfer Weg");
        break;
    }
    case 357272:
    {
        returnValue = F("Ökling");
        break;
    }
    case 357273:
    {
        returnValue = F("Ökobad Rechenberg");
        break;
    }
    case 357274:
    {
        returnValue = F("Ökokonto (Ausgleichsfläche)");
        break;
    }
    case 357275:
    {
        returnValue = F("Ökolampadiusplatz");
        break;
    }
    case 357276:
    {
        returnValue = F("Ökologiepfad");
        break;
    }
    case 357277:
    {
        returnValue = F("Ökologische Abteilung");
        break;
    }
    case 357278:
    {
        returnValue = F("Ökonomiegasse");
        break;
    }
    case 357279:
    {
        returnValue = F("Ökonomierat-Bachmayer-Str.");
        break;
    }
    case 357280:
    {
        returnValue = F("Ökonomieweg");
        break;
    }
    case 357281:
    {
        returnValue = F("Ökopark");
        break;
    }
    case 357282:
    {
        returnValue = F("Ökopark Unterkiefer");
        break;
    }
    case 357283:
    {
        returnValue = F("Ökopfad");
        break;
    }
    case 357284:
    {
        returnValue = F("Ökostation Neugattersleben");
        break;
    }
    case 357285:
    {
        returnValue = F("Ökotop");
        break;
    }
    case 357286:
    {
        returnValue = F("Ökover Str.");
        break;
    }
    case 357287:
    {
        returnValue = F("Ökowerk Emden");
        break;
    }
    case 357288:
    {
        returnValue = F("Ökumeneweg");
        break;
    }
    case 357289:
    {
        returnValue = F("Ökumenisches Hainich Klinikum");
        break;
    }
    case 357290:
    {
        returnValue = F("Ölacker");
        break;
    }
    case 357291:
    {
        returnValue = F("Ölbachstr.");
        break;
    }
    case 357292:
    {
        returnValue = F("Ölbachsweg");
        break;
    }
    case 357293:
    {
        returnValue = F("Ölbachweg");
        break;
    }
    case 357294:
    {
        returnValue = F("Ölbaumweg");
        break;
    }
    case 357295:
    {
        returnValue = F("Ölberg");
        break;
    }
    case 357296:
    {
        returnValue = F("Ölbergblick");
        break;
    }
    case 357297:
    {
        returnValue = F("Ölberggasse");
        break;
    }
    case 357298:
    {
        returnValue = F("Ölbergpark");
        break;
    }
    case 357299:
    {
        returnValue = F("Ölbergring");
        break;
    }
    case 357300:
    {
        returnValue = F("Ölbergstr.");
        break;
    }
    case 357301:
    {
        returnValue = F("Ölbergweg");
        break;
    }
    case 357302:
    {
        returnValue = F("Ölblick");
        break;
    }
    case 357303:
    {
        returnValue = F("Ölbronner Str.");
        break;
    }
    case 357304:
    {
        returnValue = F("Ölbronner Weg");
        break;
    }
    case 357305:
    {
        returnValue = F("Ölbrunnenstr.");
        break;
    }
    case 357306:
    {
        returnValue = F("Ölegarten");
        break;
    }
    case 357307:
    {
        returnValue = F("Ölerdeweg");
        break;
    }
    case 357308:
    {
        returnValue = F("Ölergäßle");
        break;
    }
    case 357309:
    {
        returnValue = F("Ölern");
        break;
    }
    case 357310:
    {
        returnValue = F("Ölerstr.");
        break;
    }
    case 357311:
    {
        returnValue = F("Ölerweg");
        break;
    }
    case 357312:
    {
        returnValue = F("Ölesbrunnen");
        break;
    }
    case 357313:
    {
        returnValue = F("Öleweg");
        break;
    }
    case 357314:
    {
        returnValue = F("Ölfer Weg");
        break;
    }
    case 357315:
    {
        returnValue = F("Ölfestr.");
        break;
    }
    case 357316:
    {
        returnValue = F("Ölgarten");
        break;
    }
    case 357317:
    {
        returnValue = F("Ölgartenstr.");
        break;
    }
    case 357318:
    {
        returnValue = F("Ölgartenweg");
        break;
    }
    case 357319:
    {
        returnValue = F("Ölgasse");
        break;
    }
    case 357320:
    {
        returnValue = F("Ölgrabenstr.");
        break;
    }
    case 357321:
    {
        returnValue = F("Ölgrube");
        break;
    }
    case 357322:
    {
        returnValue = F("Ölgrund");
        break;
    }
    case 357323:
    {
        returnValue = F("Ölgrundteich");
        break;
    }
    case 357324:
    {
        returnValue = F("Ölgärtle");
        break;
    }
    case 357325:
    {
        returnValue = F("Ölgässel");
        break;
    }
    case 357326:
    {
        returnValue = F("Ölgäßchen");
        break;
    }
    case 357327:
    {
        returnValue = F("Ölgäßle");
        break;
    }
    case 357328:
    {
        returnValue = F("Ölhafenbrücke");
        break;
    }
    case 357329:
    {
        returnValue = F("Ölhafendamm");
        break;
    }
    case 357330:
    {
        returnValue = F("Ölhafenstr.");
        break;
    }
    case 357331:
    {
        returnValue = F("Ölhofweg");
        break;
    }
    case 357332:
    {
        returnValue = F("Ölhüttenweg");
        break;
    }
    case 357333:
    {
        returnValue = F("Ölinger Str.");
        break;
    }
    case 357334:
    {
        returnValue = F("Öljeburg");
        break;
    }
    case 357335:
    {
        returnValue = F("Öljemöhlenpadweg");
        break;
    }
    case 357336:
    {
        returnValue = F("Ölkammerweg");
        break;
    }
    case 357337:
    {
        returnValue = F("Ölkamp");
        break;
    }
    case 357338:
    {
        returnValue = F("Ölklauen");
        break;
    }
    case 357339:
    {
        returnValue = F("Ölkofer Str.");
        break;
    }
    case 357340:
    {
        returnValue = F("Öllandweg");
        break;
    }
    case 357341:
    {
        returnValue = F("Ölleitungsweg");
        break;
    }
    case 357342:
    {
        returnValue = F("Öllengasse");
        break;
    }
    case 357343:
    {
        returnValue = F("Öllerschlössl");
        break;
    }
    case 357344:
    {
        returnValue = F("Ölligrather Weg");
        break;
    }
    case 357345:
    {
        returnValue = F("Öllinger Steig");
        break;
    }
    case 357346:
    {
        returnValue = F("Öllinger Str.");
        break;
    }
    case 357347:
    {
        returnValue = F("Öllinger Weg");
        break;
    }
    case 357348:
    {
        returnValue = F("Ölmacherstr.");
        break;
    }
    case 357349:
    {
        returnValue = F("Ölmannsberg");
        break;
    }
    case 357350:
    {
        returnValue = F("Ölmannsgasse");
        break;
    }
    case 357351:
    {
        returnValue = F("Ölmättle");
        break;
    }
    case 357352:
    {
        returnValue = F("Ölmühle");
        break;
    }
    case 357353:
    {
        returnValue = F("Ölmühleacker");
        break;
    }
    case 357354:
    {
        returnValue = F("Ölmühlenallee");
        break;
    }
    case 357355:
    {
        returnValue = F("Ölmühlenbergweg");
        break;
    }
    case 357356:
    {
        returnValue = F("Ölmühlengasse");
        break;
    }
    case 357357:
    {
        returnValue = F("Ölmühlenkopfweg");
        break;
    }
    case 357358:
    {
        returnValue = F("Ölmühlenstr.");
        break;
    }
    case 357359:
    {
        returnValue = F("Ölmühlenweg");
        break;
    }
    case 357360:
    {
        returnValue = F("Ölmühleweg");
        break;
    }
    case 357361:
    {
        returnValue = F("Ölmühlhaldenstr.");
        break;
    }
    case 357362:
    {
        returnValue = F("Ölmühlhang");
        break;
    }
    case 357363:
    {
        returnValue = F("Ölmühlstr.");
        break;
    }
    case 357364:
    {
        returnValue = F("Ölmühlweg");
        break;
    }
    case 357365:
    {
        returnValue = F("Ölmüllergäßl");
        break;
    }
    case 357366:
    {
        returnValue = F("Ölmützer Weg");
        break;
    }
    case 357367:
    {
        returnValue = F("Ölper Mühle");
        break;
    }
    case 357368:
    {
        returnValue = F("Ölpfad");
        break;
    }
    case 357369:
    {
        returnValue = F("Ölpfuhlallee");
        break;
    }
    case 357370:
    {
        returnValue = F("Ölpointweg");
        break;
    }
    case 357371:
    {
        returnValue = F("Ölrain");
        break;
    }
    case 357372:
    {
        returnValue = F("Ölsaer Weg");
        break;
    }
    case 357373:
    {
        returnValue = F("Ölsbacher Weg");
        break;
    }
    case 357374:
    {
        returnValue = F("Ölsberger Weg");
        break;
    }
    case 357375:
    {
        returnValue = F("Ölsburger Str.");
        break;
    }
    case 357376:
    {
        returnValue = F("Ölsburger Weg");
        break;
    }
    case 357377:
    {
        returnValue = F("Ölsch");
        break;
    }
    case 357378:
    {
        returnValue = F("Ölschlag");
        break;
    }
    case 357379:
    {
        returnValue = F("Ölschlagerweg");
        break;
    }
    case 357380:
    {
        returnValue = F("Ölschlagweg");
        break;
    }
    case 357381:
    {
        returnValue = F("Ölschläger Weg");
        break;
    }
    case 357382:
    {
        returnValue = F("Ölschlägern");
        break;
    }
    case 357383:
    {
        returnValue = F("Ölschlägerweg");
        break;
    }
    case 357384:
    {
        returnValue = F("Ölschnitzstr.");
        break;
    }
    case 357385:
    {
        returnValue = F("Ölschwangweg");
        break;
    }
    case 357386:
    {
        returnValue = F("Ölsengrund");
        break;
    }
    case 357387:
    {
        returnValue = F("Ölsiger Str.");
        break;
    }
    case 357388:
    {
        returnValue = F("Ölsnitzstr.");
        break;
    }
    case 357389:
    {
        returnValue = F("Ölspielstr.");
        break;
    }
    case 357390:
    {
        returnValue = F("Ölstr.");
        break;
    }
    case 357391:
    {
        returnValue = F("Ölsweg");
        break;
    }
    case 357392:
    {
        returnValue = F("Ölweg");
        break;
    }
    case 357393:
    {
        returnValue = F("Ölweide");
        break;
    }
    case 357394:
    {
        returnValue = F("Ölwerkstr.");
        break;
    }
    case 357395:
    {
        returnValue = F("Ölwerkweg");
        break;
    }
    case 357396:
    {
        returnValue = F("Ölwiese");
        break;
    }
    case 357397:
    {
        returnValue = F("Ölwiesenstr.");
        break;
    }
    case 357398:
    {
        returnValue = F("Ölwiesenweg");
        break;
    }
    case 357399:
    {
        returnValue = F("Öläcker");
        break;
    }
    case 357400:
    {
        returnValue = F("Öläckerstr.");
        break;
    }
    case 357401:
    {
        returnValue = F("Öläckerweg");
        break;
    }
    case 357402:
    {
        returnValue = F("Öländerle");
        break;
    }
    case 357403:
    {
        returnValue = F("Öm de Kihr");
        break;
    }
    case 357404:
    {
        returnValue = F("Ömjang");
        break;
    }
    case 357405:
    {
        returnValue = F("Önkfeld");
        break;
    }
    case 357406:
    {
        returnValue = F("Önsbacher Str.");
        break;
    }
    case 357407:
    {
        returnValue = F("Öpfinger Str.");
        break;
    }
    case 357408:
    {
        returnValue = F("Örgelessteige");
        break;
    }
    case 357409:
    {
        returnValue = F("Öringsener Str.");
        break;
    }
    case 357410:
    {
        returnValue = F("Örkenweg");
        break;
    }
    case 357411:
    {
        returnValue = F("Örlenstr.");
        break;
    }
    case 357412:
    {
        returnValue = F("Örlesweg");
        break;
    }
    case 357413:
    {
        returnValue = F("Örlinger Str.");
        break;
    }
    case 357414:
    {
        returnValue = F("Örlinger-Tal-Weg");
        break;
    }
    case 357415:
    {
        returnValue = F("Örlingerhausen");
        break;
    }
    case 357416:
    {
        returnValue = F("Örlinghauser Weg");
        break;
    }
    case 357417:
    {
        returnValue = F("Örlingweg");
        break;
    }
    case 357418:
    {
        returnValue = F("Örreler Weg");
        break;
    }
    case 357419:
    {
        returnValue = F("Örtenröder Str.");
        break;
    }
    case 357420:
    {
        returnValue = F("Örtl");
        break;
    }
    case 357421:
    {
        returnValue = F("Örtleinsgrund");
        break;
    }
    case 357422:
    {
        returnValue = F("Örtleinsweg");
        break;
    }
    case 357423:
    {
        returnValue = F("Örtlingerort");
        break;
    }
    case 357424:
    {
        returnValue = F("Örtzenberg");
        break;
    }
    case 357425:
    {
        returnValue = F("Örtzepark");
        break;
    }
    case 357426:
    {
        returnValue = F("Örtzestr.");
        break;
    }
    case 357427:
    {
        returnValue = F("Örtzeweg");
        break;
    }
    case 357428:
    {
        returnValue = F("Örtzheide");
        break;
    }
    case 357429:
    {
        returnValue = F("Ösbühl");
        break;
    }
    case 357430:
    {
        returnValue = F("Ösch");
        break;
    }
    case 357431:
    {
        returnValue = F("Öschbachstr.");
        break;
    }
    case 357432:
    {
        returnValue = F("Öschbergweg");
        break;
    }
    case 357433:
    {
        returnValue = F("Öschbächle");
        break;
    }
    case 357434:
    {
        returnValue = F("Öschelbronn");
        break;
    }
    case 357435:
    {
        returnValue = F("Öschelbronner Str.");
        break;
    }
    case 357436:
    {
        returnValue = F("Öschelbronner Weg");
        break;
    }
    case 357437:
    {
        returnValue = F("Öschentalsträßle");
        break;
    }
    case 357438:
    {
        returnValue = F("Öschentalweg");
        break;
    }
    case 357439:
    {
        returnValue = F("Öschenweg");
        break;
    }
    case 357440:
    {
        returnValue = F("Öscher Weg");
        break;
    }
    case 357441:
    {
        returnValue = F("Öschertweg");
        break;
    }
    case 357442:
    {
        returnValue = F("Öschgasse");
        break;
    }
    case 357443:
    {
        returnValue = F("Öschgrabenweg");
        break;
    }
    case 357444:
    {
        returnValue = F("Öschinger Str.");
        break;
    }
    case 357445:
    {
        returnValue = F("Öschinger Weg");
        break;
    }
    case 357446:
    {
        returnValue = F("Öschle");
        break;
    }
    case 357447:
    {
        returnValue = F("Öschlesgrundweg");
        break;
    }
    case 357448:
    {
        returnValue = F("Öschlesgärtenweg");
        break;
    }
    case 357449:
    {
        returnValue = F("Öschlestr.");
        break;
    }
    case 357450:
    {
        returnValue = F("Öschlesweg");
        break;
    }
    case 357451:
    {
        returnValue = F("Öschleweg");
        break;
    }
    case 357452:
    {
        returnValue = F("Öschstr.");
        break;
    }
    case 357453:
    {
        returnValue = F("Öschweg");
        break;
    }
    case 357454:
    {
        returnValue = F("Öschwende");
        break;
    }
    case 357455:
    {
        returnValue = F("Öschwiesenweg");
        break;
    }
    case 357456:
    {
        returnValue = F("Öselblick");
        break;
    }
    case 357457:
    {
        returnValue = F("Öselweg");
        break;
    }
    case 357458:
    {
        returnValue = F("Ösenklinge");
        break;
    }
    case 357459:
    {
        returnValue = F("Ösingerstr.");
        break;
    }
    case 357460:
    {
        returnValue = F("Ösinghausener Str.");
        break;
    }
    case 357461:
    {
        returnValue = F("Ösperweg");
        break;
    }
    case 357462:
    {
        returnValue = F("Össelkämpe");
        break;
    }
    case 357463:
    {
        returnValue = F("Östbergweg");
        break;
    }
    case 357464:
    {
        returnValue = F("Öster-Anlage");
        break;
    }
    case 357465:
    {
        returnValue = F("Österbach");
        break;
    }
    case 357466:
    {
        returnValue = F("Österbachstr.");
        break;
    }
    case 357467:
    {
        returnValue = F("Österbehringer Str.");
        break;
    }
    case 357468:
    {
        returnValue = F("Österberger Str.");
        break;
    }
    case 357469:
    {
        returnValue = F("Österbergstr.");
        break;
    }
    case 357470:
    {
        returnValue = F("Österbergweg");
        break;
    }
    case 357471:
    {
        returnValue = F("Österblick");
        break;
    }
    case 357472:
    {
        returnValue = F("Österbrink");
        break;
    }
    case 357473:
    {
        returnValue = F("Österecker Weg");
        break;
    }
    case 357474:
    {
        returnValue = F("Östereichenstr.");
        break;
    }
    case 357475:
    {
        returnValue = F("Östererweg");
        break;
    }
    case 357476:
    {
        returnValue = F("Österfeld");
        break;
    }
    case 357477:
    {
        returnValue = F("Österfeldstr.");
        break;
    }
    case 357478:
    {
        returnValue = F("Österfeldweg");
        break;
    }
    case 357479:
    {
        returnValue = F("Östergang");
        break;
    }
    case 357480:
    {
        returnValue = F("Österhausweg");
        break;
    }
    case 357481:
    {
        returnValue = F("Österitz");
        break;
    }
    case 357482:
    {
        returnValue = F("Österkamp");
        break;
    }
    case 357483:
    {
        returnValue = F("Österkoppel");
        break;
    }
    case 357484:
    {
        returnValue = F("Österleystr.");
        break;
    }
    case 357485:
    {
        returnValue = F("Österligenweg");
        break;
    }
    case 357486:
    {
        returnValue = F("Österling");
        break;
    }
    case 357487:
    {
        returnValue = F("Österlingenweg");
        break;
    }
    case 357488:
    {
        returnValue = F("Östermoorweg");
        break;
    }
    case 357489:
    {
        returnValue = F("Östernend");
        break;
    }
    case 357490:
    {
        returnValue = F("Östernheide");
        break;
    }
    case 357491:
    {
        returnValue = F("Östernkamp");
        break;
    }
    case 357492:
    {
        returnValue = F("Östernweg");
        break;
    }
    case 357493:
    {
        returnValue = F("Österreicher Str.");
        break;
    }
    case 357494:
    {
        returnValue = F("Österreicher Weg");
        break;
    }
    case 357495:
    {
        returnValue = F("Österreicherweg");
        break;
    }
    case 357496:
    {
        returnValue = F("Österreichischer Platz");
        break;
    }
    case 357497:
    {
        returnValue = F("Österreichstr.");
        break;
    }
    case 357498:
    {
        returnValue = F("Österstieg");
        break;
    }
    case 357499:
    {
        returnValue = F("Österstr.");
        break;
    }
    case 357500:
    {
        returnValue = F("Östertonnaer Str.");
        break;
    }
    case 357501:
    {
        returnValue = F("Österweg");
        break;
    }
    case 357502:
    {
        returnValue = F("Österweide");
        break;
    }
    case 357503:
    {
        returnValue = F("Österwieher Str.");
        break;
    }
    case 357504:
    {
        returnValue = F("Österwiesen");
        break;
    }
    case 357505:
    {
        returnValue = F("Österwiesenweg");
        break;
    }
    case 357506:
    {
        returnValue = F("Österwischweg");
        break;
    }
    case 357507:
    {
        returnValue = F("Österäcker");
        break;
    }
    case 357508:
    {
        returnValue = F("Östings Busch");
        break;
    }
    case 357509:
    {
        returnValue = F("Östingstr.");
        break;
    }
    case 357510:
    {
        returnValue = F("Östlefeldweg");
        break;
    }
    case 357511:
    {
        returnValue = F("Östliche Allee");
        break;
    }
    case 357512:
    {
        returnValue = F("Östliche Alpenstr.");
        break;
    }
    case 357513:
    {
        returnValue = F("Östliche Bahnhofstr.");
        break;
    }
    case 357514:
    {
        returnValue = F("Östliche Bernfurter Str.");
        break;
    }
    case 357515:
    {
        returnValue = F("Östliche Breite");
        break;
    }
    case 357516:
    {
        returnValue = F("Östliche Entlastungsstr.");
        break;
    }
    case 357517:
    {
        returnValue = F("Östliche Feldstr.");
        break;
    }
    case 357518:
    {
        returnValue = F("Östliche Friedrichstr.");
        break;
    }
    case 357519:
    {
        returnValue = F("Östliche Fächerallee");
        break;
    }
    case 357520:
    {
        returnValue = F("Östliche Gewerbestr.");
        break;
    }
    case 357521:
    {
        returnValue = F("Östliche Gleisbergstr.");
        break;
    }
    case 357522:
    {
        returnValue = F("Östliche Hauptstr.");
        break;
    }
    case 357523:
    {
        returnValue = F("Östliche Havelpromenade");
        break;
    }
    case 357524:
    {
        returnValue = F("Östliche Karl-Friedrich-Str.");
        break;
    }
    case 357525:
    {
        returnValue = F("Östliche Linsenholz-Ausfahrt");
        break;
    }
    case 357526:
    {
        returnValue = F("Östliche Luhrbachstr.");
        break;
    }
    case 357527:
    {
        returnValue = F("Östliche Promenade");
        break;
    }
    case 357528:
    {
        returnValue = F("Östliche Rheinbrückenstr.");
        break;
    }
    case 357529:
    {
        returnValue = F("Östliche Ringstr.");
        break;
    }
    case 357530:
    {
        returnValue = F("Östliche Römerstr.");
        break;
    }
    case 357531:
    {
        returnValue = F("Östliche Stadtmauer");
        break;
    }
    case 357532:
    {
        returnValue = F("Östliche Stadtmauerstr.");
        break;
    }
    case 357533:
    {
        returnValue = F("Östliche Uferstr.");
        break;
    }
    case 357534:
    {
        returnValue = F("Östliche Umgehungsstr.");
        break;
    }
    case 357535:
    {
        returnValue = F("Östliche Umgehungsstr. Aschheim");
        break;
    }
    case 357536:
    {
        returnValue = F("Östliche Waldringstr.");
        break;
    }
    case 357537:
    {
        returnValue = F("Östliche Weinstr.");
        break;
    }
    case 357538:
    {
        returnValue = F("Östliche Wendeschleife");
        break;
    }
    case 357539:
    {
        returnValue = F("Östliche Winzerstr.");
        break;
    }
    case 357540:
    {
        returnValue = F("Östliche Zubringerstr.");
        break;
    }
    case 357541:
    {
        returnValue = F("Östliche Zwingergasse");
        break;
    }
    case 357542:
    {
        returnValue = F("Östlicher Birkenweg");
        break;
    }
    case 357543:
    {
        returnValue = F("Östlicher Bockgassenweg");
        break;
    }
    case 357544:
    {
        returnValue = F("Östlicher Burggraben");
        break;
    }
    case 357545:
    {
        returnValue = F("Östlicher Dammweg");
        break;
    }
    case 357546:
    {
        returnValue = F("Östlicher Doppelweg");
        break;
    }
    case 357547:
    {
        returnValue = F("Östlicher Dwarsdiek");
        break;
    }
    case 357548:
    {
        returnValue = F("Östlicher Graben");
        break;
    }
    case 357549:
    {
        returnValue = F("Östlicher Höhenweg");
        break;
    }
    case 357550:
    {
        returnValue = F("Östlicher Kohlbergweg");
        break;
    }
    case 357551:
    {
        returnValue = F("Östlicher Kreuzberg");
        break;
    }
    case 357552:
    {
        returnValue = F("Östlicher Kurpark");
        break;
    }
    case 357553:
    {
        returnValue = F("Östlicher Misswaldweg");
        break;
    }
    case 357554:
    {
        returnValue = F("Östlicher Niemandsbohlweg");
        break;
    }
    case 357555:
    {
        returnValue = F("Östlicher Ortsringweg");
        break;
    }
    case 357556:
    {
        returnValue = F("Östlicher Parkweg");
        break;
    }
    case 357557:
    {
        returnValue = F("Östlicher Postweg");
        break;
    }
    case 357558:
    {
        returnValue = F("Östlicher Rennweg");
        break;
    }
    case 357559:
    {
        returnValue = F("Östlicher Riedbahnweg");
        break;
    }
    case 357560:
    {
        returnValue = F("Östlicher Schlosswaldweg");
        break;
    }
    case 357561:
    {
        returnValue = F("Östlicher Stadtgraben");
        break;
    }
    case 357562:
    {
        returnValue = F("Östlicher Stangenbergweg");
        break;
    }
    case 357563:
    {
        returnValue = F("Östlicher Tecktraufweg");
        break;
    }
    case 357564:
    {
        returnValue = F("Östliches Rottalsträßchen");
        break;
    }
    case 357565:
    {
        returnValue = F("Östreweg");
        break;
    }
    case 357566:
    {
        returnValue = F("Östrich");
        break;
    }
    case 357567:
    {
        returnValue = F("Östricher Str.");
        break;
    }
    case 357568:
    {
        returnValue = F("Östrichweg");
        break;
    }
    case 357569:
    {
        returnValue = F("Östringer Str.");
        break;
    }
    case 357570:
    {
        returnValue = F("Östringer Weg");
        break;
    }
    case 357571:
    {
        returnValue = F("Östringerweg");
        break;
    }
    case 357572:
    {
        returnValue = F("Östringhusen");
        break;
    }
    case 357573:
    {
        returnValue = F("Ötigheimer Str.");
        break;
    }
    case 357574:
    {
        returnValue = F("Ötigheimer Weg");
        break;
    }
    case 357575:
    {
        returnValue = F("Ötisheimer Steige");
        break;
    }
    case 357576:
    {
        returnValue = F("Ötisheimer Str.");
        break;
    }
    case 357577:
    {
        returnValue = F("Ötisheimer Weg");
        break;
    }
    case 357578:
    {
        returnValue = F("Ötlingen Festpark");
        break;
    }
    case 357579:
    {
        returnValue = F("Ötlinger Str.");
        break;
    }
    case 357580:
    {
        returnValue = F("Ötlinger Waldweg");
        break;
    }
    case 357581:
    {
        returnValue = F("Ötlingerblick");
        break;
    }
    case 357582:
    {
        returnValue = F("Ötscher Str.");
        break;
    }
    case 357583:
    {
        returnValue = F("Ötschmannweg");
        break;
    }
    case 357584:
    {
        returnValue = F("Öttingenstr.");
        break;
    }
    case 357585:
    {
        returnValue = F("Öttinger Gasse");
        break;
    }
    case 357586:
    {
        returnValue = F("Öttinger Str.");
        break;
    }
    case 357587:
    {
        returnValue = F("Öttinger Weg");
        break;
    }
    case 357588:
    {
        returnValue = F("Öttleinstr.");
        break;
    }
    case 357589:
    {
        returnValue = F("Öttlinsgasse");
        break;
    }
    case 357590:
    {
        returnValue = F("Öttlmairstr.");
        break;
    }
    case 357591:
    {
        returnValue = F("Öttnergasse");
        break;
    }
    case 357592:
    {
        returnValue = F("Ötz");
        break;
    }
    case 357593:
    {
        returnValue = F("Ötz Geräumt");
        break;
    }
    case 357594:
    {
        returnValue = F("Ötzelsgrund");
        break;
    }
    case 357595:
    {
        returnValue = F("Ötzener Weg");
        break;
    }
    case 357596:
    {
        returnValue = F("Ötzlandstr.");
        break;
    }
    case 357597:
    {
        returnValue = F("Ötzstr.");
        break;
    }
    case 357598:
    {
        returnValue = F("Ötztaler Str.");
        break;
    }
    case 357599:
    {
        returnValue = F("Ötztalstr.");
        break;
    }
    case 357600:
    {
        returnValue = F("Ötzweg");
        break;
    }
    case 357601:
    {
        returnValue = F("Ötzwiesenweg");
        break;
    }
    case 357602:
    {
        returnValue = F("Övelgönne");
        break;
    }
    case 357603:
    {
        returnValue = F("Övelgünne");
        break;
    }
    case 357604:
    {
        returnValue = F("Över de Heid");
        break;
    }
    case 357605:
    {
        returnValue = F("Över de Ley");
        break;
    }
    case 357606:
    {
        returnValue = F("Över't Deep");
        break;
    }
    case 357607:
    {
        returnValue = F("Överchen");
        break;
    }
    case 357608:
    {
        returnValue = F("Överdiek");
        break;
    }
    case 357609:
    {
        returnValue = F("Överkamp");
        break;
    }
    case 357610:
    {
        returnValue = F("Överkiek");
        break;
    }
    case 357611:
    {
        returnValue = F("Övern Akker");
        break;
    }
    case 357612:
    {
        returnValue = F("Övern Klint");
        break;
    }
    case 357613:
    {
        returnValue = F("Överstendamm");
        break;
    }
    case 357614:
    {
        returnValue = F("Översweg");
        break;
    }
    case 357615:
    {
        returnValue = F("Övert Meer");
        break;
    }
    case 357616:
    {
        returnValue = F("Öwelgönne");
        break;
    }
    case 357617:
    {
        returnValue = F("Öwer de Hase");
        break;
    }
    case 357618:
    {
        returnValue = F("Öwer de Stacken");
        break;
    }
    case 357619:
    {
        returnValue = F("Öwerhook");
        break;
    }
    case 357620:
    {
        returnValue = F("Öwert Holt");
        break;
    }
    case 357621:
    {
        returnValue = F("Öwerweg");
        break;
    }
    case 358160:
    {
        returnValue = F("öffentliche Grünfläche");
        break;
    }
    case 358161:
    {
        returnValue = F("östl. Seeweg");
        break;
    }
    case 358162:
    {
        returnValue = F("östlicher Tiergartenweg");
        break;
    }
    }
    return returnValue;
}
