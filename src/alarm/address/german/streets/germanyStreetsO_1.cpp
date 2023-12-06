#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameO1(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 235202:
    {
        returnValue = F("O");
        break;
    }
    case 235203:
    {
        returnValue = F("O'Brien-Str.");
        break;
    }
    case 235204:
    {
        returnValue = F("O-E-Schmidt-Steig");
        break;
    }
    case 235205:
    {
        returnValue = F("O-Weg");
        break;
    }
    case 235206:
    {
        returnValue = F("O. Gampweg");
        break;
    }
    case 235207:
    {
        returnValue = F("O. Hausmaßenweg");
        break;
    }
    case 235208:
    {
        returnValue = F("O. Schlangenweg");
        break;
    }
    case 235209:
    {
        returnValue = F("O.-Berneder-Ring");
        break;
    }
    case 235210:
    {
        returnValue = F("O.E.W.-Str.");
        break;
    }
    case 235211:
    {
        returnValue = F("O9 Park");
        break;
    }
    case 235212:
    {
        returnValue = F("OBERER ASPENWEG");
        break;
    }
    case 235213:
    {
        returnValue = F("OKD-Str.");
        break;
    }
    case 235214:
    {
        returnValue = F("OLGA Park");
        break;
    }
    case 235215:
    {
        returnValue = F("OLGA-Park");
        break;
    }
    case 235216:
    {
        returnValue = F("OM-Klebetechnik-Str.");
        break;
    }
    case 235217:
    {
        returnValue = F("OT Quitzerow Dorf");
        break;
    }
    case 235218:
    {
        returnValue = F("OU Bertoldshofen ( B472)");
        break;
    }
    case 235219:
    {
        returnValue = F("OU Marktoberdorf/Bertoldshofen ( B16/B 472)");
        break;
    }
    case 235220:
    {
        returnValue = F("OVAG-Str.");
        break;
    }
    case 235221:
    {
        returnValue = F("OWK-Platz");
        break;
    }
    case 235222:
    {
        returnValue = F("Oadby-and-Wigston-Str.");
        break;
    }
    case 235223:
    {
        returnValue = F("Oak Road");
        break;
    }
    case 235224:
    {
        returnValue = F("Oakstr.");
        break;
    }
    case 235225:
    {
        returnValue = F("Oase");
        break;
    }
    case 235226:
    {
        returnValue = F("Oase der Ruhe");
        break;
    }
    case 235227:
    {
        returnValue = F("Oasenweg");
        break;
    }
    case 235228:
    {
        returnValue = F("Ob Gärten");
        break;
    }
    case 235229:
    {
        returnValue = F("Ob Rustelhauweg");
        break;
    }
    case 235230:
    {
        returnValue = F("Ob de Braak");
        break;
    }
    case 235231:
    {
        returnValue = F("Ob dem Baumgarten");
        break;
    }
    case 235232:
    {
        returnValue = F("Ob dem Beurental");
        break;
    }
    case 235233:
    {
        returnValue = F("Ob dem Brückle");
        break;
    }
    case 235234:
    {
        returnValue = F("Ob dem Brünnle");
        break;
    }
    case 235235:
    {
        returnValue = F("Ob dem Dickenhart");
        break;
    }
    case 235236:
    {
        returnValue = F("Ob dem Dorf");
        break;
    }
    case 235237:
    {
        returnValue = F("Ob dem Felsen");
        break;
    }
    case 235238:
    {
        returnValue = F("Ob dem Hanfgarten");
        break;
    }
    case 235239:
    {
        returnValue = F("Ob dem Heckental");
        break;
    }
    case 235240:
    {
        returnValue = F("Ob dem Himmelreich");
        break;
    }
    case 235241:
    {
        returnValue = F("Ob dem Holz");
        break;
    }
    case 235242:
    {
        returnValue = F("Ob dem Kieserstal");
        break;
    }
    case 235243:
    {
        returnValue = F("Ob dem Kirchhof");
        break;
    }
    case 235244:
    {
        returnValue = F("Ob dem Rain");
        break;
    }
    case 235245:
    {
        returnValue = F("Ob dem Schloss");
        break;
    }
    case 235246:
    {
        returnValue = F("Ob dem Seltengraben");
        break;
    }
    case 235247:
    {
        returnValue = F("Ob dem Steinbach");
        break;
    }
    case 235248:
    {
        returnValue = F("Ob dem Stäffele");
        break;
    }
    case 235249:
    {
        returnValue = F("Ob dem Tal");
        break;
    }
    case 235250:
    {
        returnValue = F("Ob dem Traubenweg");
        break;
    }
    case 235251:
    {
        returnValue = F("Ob dem Viehmarkt");
        break;
    }
    case 235252:
    {
        returnValue = F("Ob dem Viehweidle");
        break;
    }
    case 235253:
    {
        returnValue = F("Ob dem Vogelloch");
        break;
    }
    case 235254:
    {
        returnValue = F("Ob dem Wasserbach");
        break;
    }
    case 235255:
    {
        returnValue = F("Ob dem Weiler");
        break;
    }
    case 235256:
    {
        returnValue = F("Ob dem Zaun");
        break;
    }
    case 235257:
    {
        returnValue = F("Ob dem langen Tal");
        break;
    }
    case 235258:
    {
        returnValue = F("Ob dem tiefen Weg");
        break;
    }
    case 235259:
    {
        returnValue = F("Ob den Bergen");
        break;
    }
    case 235260:
    {
        returnValue = F("Ob den Gärten");
        break;
    }
    case 235261:
    {
        returnValue = F("Ob den Halden");
        break;
    }
    case 235262:
    {
        returnValue = F("Ob den Häusern");
        break;
    }
    case 235263:
    {
        returnValue = F("Ob den Rainen");
        break;
    }
    case 235264:
    {
        returnValue = F("Ob den Reben");
        break;
    }
    case 235265:
    {
        returnValue = F("Ob den Tannen");
        break;
    }
    case 235266:
    {
        returnValue = F("Ob den Weingärten");
        break;
    }
    case 235267:
    {
        returnValue = F("Ob der Aach");
        break;
    }
    case 235268:
    {
        returnValue = F("Ob der Ammer");
        break;
    }
    case 235269:
    {
        returnValue = F("Ob der Au");
        break;
    }
    case 235270:
    {
        returnValue = F("Ob der Bint");
        break;
    }
    case 235271:
    {
        returnValue = F("Ob der Bruck");
        break;
    }
    case 235272:
    {
        returnValue = F("Ob der Brunnenwiese");
        break;
    }
    case 235273:
    {
        returnValue = F("Ob der Brücke");
        break;
    }
    case 235274:
    {
        returnValue = F("Ob der Claus");
        break;
    }
    case 235275:
    {
        returnValue = F("Ob der Ditzinger Str.");
        break;
    }
    case 235276:
    {
        returnValue = F("Ob der Eck");
        break;
    }
    case 235277:
    {
        returnValue = F("Ob der Eichhälden");
        break;
    }
    case 235278:
    {
        returnValue = F("Ob der Gass");
        break;
    }
    case 235279:
    {
        returnValue = F("Ob der Grafenhalde");
        break;
    }
    case 235280:
    {
        returnValue = F("Ob der Halde");
        break;
    }
    case 235281:
    {
        returnValue = F("Ob der Hecke");
        break;
    }
    case 235282:
    {
        returnValue = F("Ob der Hohlen");
        break;
    }
    case 235283:
    {
        returnValue = F("Ob der Hohlgaß");
        break;
    }
    case 235284:
    {
        returnValue = F("Ob der Kapelle");
        break;
    }
    case 235285:
    {
        returnValue = F("Ob der Kehr");
        break;
    }
    case 235286:
    {
        returnValue = F("Ob der Kirche");
        break;
    }
    case 235287:
    {
        returnValue = F("Ob der Kluse");
        break;
    }
    case 235288:
    {
        returnValue = F("Ob der Kolmke");
        break;
    }
    case 235289:
    {
        returnValue = F("Ob der Linde");
        break;
    }
    case 235290:
    {
        returnValue = F("Ob der Linden");
        break;
    }
    case 235291:
    {
        returnValue = F("Ob der Lucke");
        break;
    }
    case 235292:
    {
        returnValue = F("Ob der Luthereiche");
        break;
    }
    case 235293:
    {
        returnValue = F("Ob der Mühl");
        break;
    }
    case 235294:
    {
        returnValue = F("Ob der Mühle");
        break;
    }
    case 235295:
    {
        returnValue = F("Ob der Rainerwiese");
        break;
    }
    case 235296:
    {
        returnValue = F("Ob der Römersiedlung");
        break;
    }
    case 235297:
    {
        returnValue = F("Ob der Schule");
        break;
    }
    case 235298:
    {
        returnValue = F("Ob der Schwalbenhälde");
        break;
    }
    case 235299:
    {
        returnValue = F("Ob der Schwelle");
        break;
    }
    case 235300:
    {
        returnValue = F("Ob der Stadt");
        break;
    }
    case 235301:
    {
        returnValue = F("Ob der Steig");
        break;
    }
    case 235302:
    {
        returnValue = F("Ob der Steige");
        break;
    }
    case 235303:
    {
        returnValue = F("Ob der Steinau");
        break;
    }
    case 235304:
    {
        returnValue = F("Ob der Steingrube");
        break;
    }
    case 235305:
    {
        returnValue = F("Ob der Steinhalde");
        break;
    }
    case 235306:
    {
        returnValue = F("Ob der Sulzhalde");
        break;
    }
    case 235307:
    {
        returnValue = F("Ob der Tanzlinde");
        break;
    }
    case 235308:
    {
        returnValue = F("Ob der Wanne");
        break;
    }
    case 235309:
    {
        returnValue = F("Ob der Wette");
        break;
    }
    case 235310:
    {
        returnValue = F("Ob der Ziegelei");
        break;
    }
    case 235311:
    {
        returnValue = F("Ob der Ziegelhütte");
        break;
    }
    case 235312:
    {
        returnValue = F("Ob's Herrenhaus");
        break;
    }
    case 235313:
    {
        returnValue = F("Ob. Beind");
        break;
    }
    case 235314:
    {
        returnValue = F("Ob. Ebhaldenberg-Weg");
        break;
    }
    case 235315:
    {
        returnValue = F("Ob. Ermelzhholzweg");
        break;
    }
    case 235316:
    {
        returnValue = F("Ob. Ermelzholzweg");
        break;
    }
    case 235317:
    {
        returnValue = F("Ob. Hohackerweg");
        break;
    }
    case 235318:
    {
        returnValue = F("Ob. Tannenwaldweg");
        break;
    }
    case 235319:
    {
        returnValue = F("Ob.Stichweg");
        break;
    }
    case 235320:
    {
        returnValue = F("Ob.d.Langen Stein");
        break;
    }
    case 235321:
    {
        returnValue = F("ObBieselsteige");
        break;
    }
    case 235322:
    {
        returnValue = F("ObKärchelsgrundweg");
        break;
    }
    case 235323:
    {
        returnValue = F("Obagstr.");
        break;
    }
    case 235324:
    {
        returnValue = F("Obbacher Str.");
        break;
    }
    case 235325:
    {
        returnValue = F("Obbekenweg");
        break;
    }
    case 235326:
    {
        returnValue = F("Obbergshof");
        break;
    }
    case 235327:
    {
        returnValue = F("Obbornhofener Str.");
        break;
    }
    case 235328:
    {
        returnValue = F("Obdamer Str.");
        break;
    }
    case 235329:
    {
        returnValue = F("Obdrupstr.");
        break;
    }
    case 235330:
    {
        returnValue = F("Obeberbreitenauerweg");
        break;
    }
    case 235331:
    {
        returnValue = F("Obeer Geestweg");
        break;
    }
    case 235332:
    {
        returnValue = F("Obeliskenschneise");
        break;
    }
    case 235333:
    {
        returnValue = F("Obelix-Weg");
        break;
    }
    case 235334:
    {
        returnValue = F("Obelodenfeldweg");
        break;
    }
    case 235335:
    {
        returnValue = F("Obelterstr.");
        break;
    }
    case 235336:
    {
        returnValue = F("Obeltshauserstr.");
        break;
    }
    case 235337:
    {
        returnValue = F("Obelweg");
        break;
    }
    case 235338:
    {
        returnValue = F("Oben");
        break;
    }
    case 235339:
    {
        returnValue = F("Oben Am Berg");
        break;
    }
    case 235340:
    {
        returnValue = F("Oben am Dorf");
        break;
    }
    case 235341:
    {
        returnValue = F("Oben am Dorfe");
        break;
    }
    case 235342:
    {
        returnValue = F("Oben am Godtal");
        break;
    }
    case 235343:
    {
        returnValue = F("Oben am Martinspfad");
        break;
    }
    case 235344:
    {
        returnValue = F("Oben auf der Wiemhufe");
        break;
    }
    case 235345:
    {
        returnValue = F("Oben auf der Wäschbach");
        break;
    }
    case 235346:
    {
        returnValue = F("Oben der Hörne");
        break;
    }
    case 235347:
    {
        returnValue = F("Oben der Lee");
        break;
    }
    case 235348:
    {
        returnValue = F("Oben im Hähnchen");
        break;
    }
    case 235349:
    {
        returnValue = F("Oben im Odental");
        break;
    }
    case 235350:
    {
        returnValue = F("Oben zum Holz");
        break;
    }
    case 235351:
    {
        returnValue = F("Obenberger Weg");
        break;
    }
    case 235352:
    {
        returnValue = F("Obenburger Querweg");
        break;
    }
    case 235353:
    {
        returnValue = F("Obenburger Stieg");
        break;
    }
    case 235354:
    {
        returnValue = F("Obendeich");
        break;
    }
    case 235355:
    {
        returnValue = F("Obendiekstr.");
        break;
    }
    case 235356:
    {
        returnValue = F("Obendorfer Str.");
        break;
    }
    case 235357:
    {
        returnValue = F("Obendorfskamp");
        break;
    }
    case 235358:
    {
        returnValue = F("Obendorfstr.");
        break;
    }
    case 235359:
    {
        returnValue = F("Obenende Nord");
        break;
    }
    case 235360:
    {
        returnValue = F("Obenende Süd");
        break;
    }
    case 235361:
    {
        returnValue = F("Obenfeldeweg");
        break;
    }
    case 235362:
    {
        returnValue = F("Obenflachsberg");
        break;
    }
    case 235363:
    {
        returnValue = F("Obenfohr");
        break;
    }
    case 235364:
    {
        returnValue = F("Obengönrath");
        break;
    }
    case 235365:
    {
        returnValue = F("Obenhauptstr.");
        break;
    }
    case 235366:
    {
        returnValue = F("Obenhausener Str.");
        break;
    }
    case 235367:
    {
        returnValue = F("Obenhauser Str.");
        break;
    }
    case 235368:
    {
        returnValue = F("Obenholt");
        break;
    }
    case 235369:
    {
        returnValue = F("Obenhöhscheid");
        break;
    }
    case 235370:
    {
        returnValue = F("Obenitterstr.");
        break;
    }
    case 235371:
    {
        returnValue = F("Obenkatternberg");
        break;
    }
    case 235372:
    {
        returnValue = F("Obenketzberg");
        break;
    }
    case 235373:
    {
        returnValue = F("Obenmankhaus");
        break;
    }
    case 235374:
    {
        returnValue = F("Obenmarspforten");
        break;
    }
    case 235375:
    {
        returnValue = F("Obennaus");
        break;
    }
    case 235376:
    {
        returnValue = F("Obenpilghausen");
        break;
    }
    case 235377:
    {
        returnValue = F("Obenpilghauser Weg");
        break;
    }
    case 235378:
    {
        returnValue = F("Obenrother Str.");
        break;
    }
    case 235379:
    {
        returnValue = F("Obenrüden");
        break;
    }
    case 235380:
    {
        returnValue = F("Obensburgweg");
        break;
    }
    case 235381:
    {
        returnValue = F("Obenscheidt");
        break;
    }
    case 235382:
    {
        returnValue = F("Obenstroher Damm");
        break;
    }
    case 235383:
    {
        returnValue = F("Obenstruthstr.");
        break;
    }
    case 235384:
    {
        returnValue = F("Obental");
        break;
    }
    case 235385:
    {
        returnValue = F("Obentalweg");
        break;
    }
    case 235386:
    {
        returnValue = F("Obentraudstr.");
        break;
    }
    case 235387:
    {
        returnValue = F("Obentrautstr.");
        break;
    }
    case 235388:
    {
        returnValue = F("Obenwerth");
        break;
    }
    case 235389:
    {
        returnValue = F("Ober Beckers Haus");
        break;
    }
    case 235390:
    {
        returnValue = F("Ober Boberg");
        break;
    }
    case 235391:
    {
        returnValue = F("Ober Bommert");
        break;
    }
    case 235392:
    {
        returnValue = F("Ober Bongerten");
        break;
    }
    case 235393:
    {
        returnValue = F("Ober Buschhausen");
        break;
    }
    case 235394:
    {
        returnValue = F("Ober Buschweg");
        break;
    }
    case 235395:
    {
        returnValue = F("Ober Canet");
        break;
    }
    case 235396:
    {
        returnValue = F("Ober Carthausen");
        break;
    }
    case 235397:
    {
        returnValue = F("Ober Flönsheimer Weg");
        break;
    }
    case 235398:
    {
        returnValue = F("Ober Flörsheimer Weg");
        break;
    }
    case 235399:
    {
        returnValue = F("Ober Grabi");
        break;
    }
    case 235400:
    {
        returnValue = F("Ober Greut");
        break;
    }
    case 235401:
    {
        returnValue = F("Ober Hövel");
        break;
    }
    case 235402:
    {
        returnValue = F("Ober Hürxtal");
        break;
    }
    case 235403:
    {
        returnValue = F("Ober Jungmannshaus");
        break;
    }
    case 235404:
    {
        returnValue = F("Ober Kiesel");
        break;
    }
    case 235405:
    {
        returnValue = F("Ober Kleeburg");
        break;
    }
    case 235406:
    {
        returnValue = F("Ober Lehr");
        break;
    }
    case 235407:
    {
        returnValue = F("Ober Mörler Weg");
        break;
    }
    case 235408:
    {
        returnValue = F("Ober Ochtenhausener Str.");
        break;
    }
    case 235409:
    {
        returnValue = F("Ober Priesgarten");
        break;
    }
    case 235410:
    {
        returnValue = F("Ober Rottweg");
        break;
    }
    case 235411:
    {
        returnValue = F("Ober Schleifweg");
        break;
    }
    case 235412:
    {
        returnValue = F("Ober Schneidersgarten");
        break;
    }
    case 235413:
    {
        returnValue = F("Ober Seifen");
        break;
    }
    case 235414:
    {
        returnValue = F("Ober Ziegelfeld");
        break;
    }
    case 235415:
    {
        returnValue = F("Ober dem Backes");
        break;
    }
    case 235416:
    {
        returnValue = F("Ober dem Bann");
        break;
    }
    case 235417:
    {
        returnValue = F("Ober dem Beilstein");
        break;
    }
    case 235418:
    {
        returnValue = F("Ober dem Bienengarten");
        break;
    }
    case 235419:
    {
        returnValue = F("Ober dem Brauck");
        break;
    }
    case 235420:
    {
        returnValue = F("Ober dem Dorf");
        break;
    }
    case 235421:
    {
        returnValue = F("Ober dem Dorfe");
        break;
    }
    case 235422:
    {
        returnValue = F("Ober dem Driesch");
        break;
    }
    case 235423:
    {
        returnValue = F("Ober dem Fahrweg");
        break;
    }
    case 235424:
    {
        returnValue = F("Ober dem Feldgarten");
        break;
    }
    case 235425:
    {
        returnValue = F("Ober dem Garten");
        break;
    }
    case 235426:
    {
        returnValue = F("Ober dem Grubenhaus");
        break;
    }
    case 235427:
    {
        returnValue = F("Ober dem Grund");
        break;
    }
    case 235428:
    {
        returnValue = F("Ober dem Hau");
        break;
    }
    case 235429:
    {
        returnValue = F("Ober dem Hof");
        break;
    }
    case 235430:
    {
        returnValue = F("Ober dem Hofe");
        break;
    }
    case 235431:
    {
        returnValue = F("Ober dem Hohlweg");
        break;
    }
    case 235432:
    {
        returnValue = F("Ober dem Kinnborn");
        break;
    }
    case 235433:
    {
        returnValue = F("Ober dem Kirchweg");
        break;
    }
    case 235434:
    {
        returnValue = F("Ober dem Mainzweg");
        break;
    }
    case 235435:
    {
        returnValue = F("Ober dem Mühlgraben");
        break;
    }
    case 235436:
    {
        returnValue = F("Ober dem Mühlweg");
        break;
    }
    case 235437:
    {
        returnValue = F("Ober dem Mülldorfer Fahr");
        break;
    }
    case 235438:
    {
        returnValue = F("Ober dem Ort");
        break;
    }
    case 235439:
    {
        returnValue = F("Ober dem Pfarracker");
        break;
    }
    case 235440:
    {
        returnValue = F("Ober dem Pützchen");
        break;
    }
    case 235441:
    {
        returnValue = F("Ober dem Rauhbucherhäule");
        break;
    }
    case 235442:
    {
        returnValue = F("Ober dem Reiterweg");
        break;
    }
    case 235443:
    {
        returnValue = F("Ober dem Roth");
        break;
    }
    case 235444:
    {
        returnValue = F("Ober dem Salmendinger Weg");
        break;
    }
    case 235445:
    {
        returnValue = F("Ober dem Schafhaus");
        break;
    }
    case 235446:
    {
        returnValue = F("Ober dem Schelmental");
        break;
    }
    case 235447:
    {
        returnValue = F("Ober dem Staufenweg");
        break;
    }
    case 235448:
    {
        returnValue = F("Ober dem Stocksiefen");
        break;
    }
    case 235449:
    {
        returnValue = F("Ober dem Tal");
        break;
    }
    case 235450:
    {
        returnValue = F("Ober dem Turm");
        break;
    }
    case 235451:
    {
        returnValue = F("Ober dem Wasserborn");
        break;
    }
    case 235452:
    {
        returnValue = F("Ober dem Weihergarten");
        break;
    }
    case 235453:
    {
        returnValue = F("Ober dem Zöper Weg");
        break;
    }
    case 235454:
    {
        returnValue = F("Ober den Apfelbäumen");
        break;
    }
    case 235455:
    {
        returnValue = F("Ober den Eichen");
        break;
    }
    case 235456:
    {
        returnValue = F("Ober den Eisenkauten");
        break;
    }
    case 235457:
    {
        returnValue = F("Ober den Erken");
        break;
    }
    case 235458:
    {
        returnValue = F("Ober den Erlen");
        break;
    }
    case 235459:
    {
        returnValue = F("Ober den Eschen");
        break;
    }
    case 235460:
    {
        returnValue = F("Ober den Gärten");
        break;
    }
    case 235461:
    {
        returnValue = F("Ober den Höfen");
        break;
    }
    case 235462:
    {
        returnValue = F("Ober den Naien");
        break;
    }
    case 235463:
    {
        returnValue = F("Ober den Pöhlen");
        break;
    }
    case 235464:
    {
        returnValue = F("Ober den Stangen");
        break;
    }
    case 235465:
    {
        returnValue = F("Ober den Wiesen");
        break;
    }
    case 235466:
    {
        returnValue = F("Ober der Allwies");
        break;
    }
    case 235467:
    {
        returnValue = F("Ober der Chaussee");
        break;
    }
    case 235468:
    {
        returnValue = F("Ober der Deutschmühl");
        break;
    }
    case 235469:
    {
        returnValue = F("Ober der Gauch");
        break;
    }
    case 235470:
    {
        returnValue = F("Ober der Grindbitz");
        break;
    }
    case 235471:
    {
        returnValue = F("Ober der Hasselt");
        break;
    }
    case 235472:
    {
        returnValue = F("Ober der Heege");
        break;
    }
    case 235473:
    {
        returnValue = F("Ober der Held");
        break;
    }
    case 235474:
    {
        returnValue = F("Ober der Hirtenwiese");
        break;
    }
    case 235475:
    {
        returnValue = F("Ober der Hofwiese");
        break;
    }
    case 235476:
    {
        returnValue = F("Ober der Höhle");
        break;
    }
    case 235477:
    {
        returnValue = F("Ober der Jagdwiese");
        break;
    }
    case 235478:
    {
        returnValue = F("Ober der Kappesmühle");
        break;
    }
    case 235479:
    {
        returnValue = F("Ober der Kelter");
        break;
    }
    case 235480:
    {
        returnValue = F("Ober der Kirch");
        break;
    }
    case 235481:
    {
        returnValue = F("Ober der Kirche");
        break;
    }
    case 235482:
    {
        returnValue = F("Ober der Kluse");
        break;
    }
    case 235483:
    {
        returnValue = F("Ober der Lache");
        break;
    }
    case 235484:
    {
        returnValue = F("Ober der Lehmgrube");
        break;
    }
    case 235485:
    {
        returnValue = F("Ober der Linde");
        break;
    }
    case 235486:
    {
        returnValue = F("Ober der Lumda");
        break;
    }
    case 235487:
    {
        returnValue = F("Ober der Mühle");
        break;
    }
    case 235488:
    {
        returnValue = F("Ober der Neuwiese");
        break;
    }
    case 235489:
    {
        returnValue = F("Ober der Reinwies");
        break;
    }
    case 235490:
    {
        returnValue = F("Ober der Roten Erde");
        break;
    }
    case 235491:
    {
        returnValue = F("Ober der Röth");
        break;
    }
    case 235492:
    {
        returnValue = F("Ober der Schmitte");
        break;
    }
    case 235493:
    {
        returnValue = F("Ober der Schul");
        break;
    }
    case 235494:
    {
        returnValue = F("Ober der Schäferei");
        break;
    }
    case 235495:
    {
        returnValue = F("Ober der Sengenau");
        break;
    }
    case 235496:
    {
        returnValue = F("Ober der Steinhohle");
        break;
    }
    case 235497:
    {
        returnValue = F("Ober der Trift");
        break;
    }
    case 235498:
    {
        returnValue = F("Ober der Umkehr");
        break;
    }
    case 235499:
    {
        returnValue = F("Ober der Ölmühle");
        break;
    }
    case 235500:
    {
        returnValue = F("Ober'm Dorf");
        break;
    }
    case 235501:
    {
        returnValue = F("Ober'm Garten");
        break;
    }
    case 235502:
    {
        returnValue = F("Ober'm Lankenstell");
        break;
    }
    case 235503:
    {
        returnValue = F("Ober-Auenweg");
        break;
    }
    case 235504:
    {
        returnValue = F("Ober-Beckers-Garten");
        break;
    }
    case 235505:
    {
        returnValue = F("Ober-Beerbacher Str.");
        break;
    }
    case 235506:
    {
        returnValue = F("Ober-Bessinger Str.");
        break;
    }
    case 235507:
    {
        returnValue = F("Ober-Breidenbacher Str.");
        break;
    }
    case 235508:
    {
        returnValue = F("Ober-Breidenbacher-Weg");
        break;
    }
    case 235509:
    {
        returnValue = F("Ober-Erlenbacher Str.");
        break;
    }
    case 235510:
    {
        returnValue = F("Ober-Erlenbacher-Str.");
        break;
    }
    case 235511:
    {
        returnValue = F("Ober-Erlenbacher-Weg");
        break;
    }
    case 235512:
    {
        returnValue = F("Ober-Erler-Str.");
        break;
    }
    case 235513:
    {
        returnValue = F("Ober-Eschbacher Str.");
        break;
    }
    case 235514:
    {
        returnValue = F("Ober-Fiebig");
        break;
    }
    case 235515:
    {
        returnValue = F("Ober-Gleener Str.");
        break;
    }
    case 235516:
    {
        returnValue = F("Ober-Grafendorfer Weg");
        break;
    }
    case 235517:
    {
        returnValue = F("Ober-Hilbersheimer Str.");
        break;
    }
    case 235518:
    {
        returnValue = F("Ober-Holte");
        break;
    }
    case 235519:
    {
        returnValue = F("Ober-Hörger Weg");
        break;
    }
    case 235520:
    {
        returnValue = F("Ober-Hörgerner-Str.");
        break;
    }
    case 235521:
    {
        returnValue = F("Ober-Kohlgraben");
        break;
    }
    case 235522:
    {
        returnValue = F("Ober-Laudenbacher Str.");
        break;
    }
    case 235523:
    {
        returnValue = F("Ober-Lestert");
        break;
    }
    case 235524:
    {
        returnValue = F("Ober-Liebersbach");
        break;
    }
    case 235525:
    {
        returnValue = F("Ober-Lohberg-Allee");
        break;
    }
    case 235526:
    {
        returnValue = F("Ober-Mengelbach");
        break;
    }
    case 235527:
    {
        returnValue = F("Ober-Modauer Str.");
        break;
    }
    case 235528:
    {
        returnValue = F("Ober-Mooser Str.");
        break;
    }
    case 235529:
    {
        returnValue = F("Ober-Mossauer Str.");
        break;
    }
    case 235530:
    {
        returnValue = F("Ober-Mörler Weg");
        break;
    }
    case 235531:
    {
        returnValue = F("Ober-Mörler-Weg");
        break;
    }
    case 235532:
    {
        returnValue = F("Ober-Ofleidener Str.");
        break;
    }
    case 235533:
    {
        returnValue = F("Ober-Ohmener Str.");
        break;
    }
    case 235534:
    {
        returnValue = F("Ober-Ohmener-Str.");
        break;
    }
    case 235535:
    {
        returnValue = F("Ober-Olmer Str.");
        break;
    }
    case 235536:
    {
        returnValue = F("Ober-Olmer-Str.");
        break;
    }
    case 235537:
    {
        returnValue = F("Ober-Ramstädter Str.");
        break;
    }
    case 235538:
    {
        returnValue = F("Ober-Ramstädter Weg");
        break;
    }
    case 235539:
    {
        returnValue = F("Ober-Ramstädter-Weg");
        break;
    }
    case 235540:
    {
        returnValue = F("Ober-Reeswinkel");
        break;
    }
    case 235541:
    {
        returnValue = F("Ober-Rodener Str.");
        break;
    }
    case 235542:
    {
        returnValue = F("Ober-Röder Weg");
        break;
    }
    case 235543:
    {
        returnValue = F("Ober-Röder-Str.");
        break;
    }
    case 235544:
    {
        returnValue = F("Ober-Saulheimer-Str.");
        break;
    }
    case 235545:
    {
        returnValue = F("Ober-Savo-Ring");
        break;
    }
    case 235546:
    {
        returnValue = F("Ober-Seemer-Str.");
        break;
    }
    case 235547:
    {
        returnValue = F("Ober-Seilbacher-Weg");
        break;
    }
    case 235548:
    {
        returnValue = F("Ober-Warolder Str.");
        break;
    }
    case 235549:
    {
        returnValue = F("Ober-Werber-Str.");
        break;
    }
    case 235550:
    {
        returnValue = F("Ober-Widdersheimer Str.");
        break;
    }
    case 235551:
    {
        returnValue = F("Ober-Widdersheimer-Weg");
        break;
    }
    case 235552:
    {
        returnValue = F("Ober-Wiesener Str.");
        break;
    }
    case 235553:
    {
        returnValue = F("Ober-Wöllstädter Str.");
        break;
    }
    case 235554:
    {
        returnValue = F("Ober-Wöllstädter-Str.");
        break;
    }
    case 235555:
    {
        returnValue = F("Ober-Wöllstädter-Weg");
        break;
    }
    case 235556:
    {
        returnValue = F("Ober.-Steppenbergweg");
        break;
    }
    case 235557:
    {
        returnValue = F("Oberach");
        break;
    }
    case 235558:
    {
        returnValue = F("Oberachdorfstr.");
        break;
    }
    case 235559:
    {
        returnValue = F("Oberacherner Str.");
        break;
    }
    case 235560:
    {
        returnValue = F("Oberacherweg");
        break;
    }
    case 235561:
    {
        returnValue = F("Oberachtel");
        break;
    }
    case 235562:
    {
        returnValue = F("Oberachweg");
        break;
    }
    case 235563:
    {
        returnValue = F("Oberacker");
        break;
    }
    case 235564:
    {
        returnValue = F("Oberadener Heide");
        break;
    }
    case 235565:
    {
        returnValue = F("Oberadener Str.");
        break;
    }
    case 235566:
    {
        returnValue = F("Oberadlfurt");
        break;
    }
    case 235567:
    {
        returnValue = F("Oberafferbacher Str.");
        break;
    }
    case 235568:
    {
        returnValue = F("Oberahler Weg");
        break;
    }
    case 235569:
    {
        returnValue = F("Oberahrer Str.");
        break;
    }
    case 235570:
    {
        returnValue = F("Oberaich");
        break;
    }
    case 235571:
    {
        returnValue = F("Oberaichener Höhe");
        break;
    }
    case 235572:
    {
        returnValue = F("Oberaicher Str.");
        break;
    }
    case 235573:
    {
        returnValue = F("Oberaicher Weg");
        break;
    }
    case 235574:
    {
        returnValue = F("Oberaichhofweg");
        break;
    }
    case 235575:
    {
        returnValue = F("Oberaign");
        break;
    }
    case 235576:
    {
        returnValue = F("Oberailsfeld");
        break;
    }
    case 235577:
    {
        returnValue = F("Oberalba");
        break;
    }
    case 235578:
    {
        returnValue = F("Oberalbach");
        break;
    }
    case 235579:
    {
        returnValue = F("Oberalbaer Str.");
        break;
    }
    case 235580:
    {
        returnValue = F("Oberalberodaer Str.");
        break;
    }
    case 235581:
    {
        returnValue = F("Oberalfinger Str.");
        break;
    }
    case 235582:
    {
        returnValue = F("Oberalleestr.");
        break;
    }
    case 235583:
    {
        returnValue = F("Oberallener Weg");
        break;
    }
    case 235584:
    {
        returnValue = F("Oberallmannsbach");
        break;
    }
    case 235585:
    {
        returnValue = F("Oberalpfener Str.");
        break;
    }
    case 235586:
    {
        returnValue = F("Oberalpstr.");
        break;
    }
    case 235587:
    {
        returnValue = F("Oberalsener Ring");
        break;
    }
    case 235588:
    {
        returnValue = F("Oberalteicher Str.");
        break;
    }
    case 235589:
    {
        returnValue = F("Oberaltenallee");
        break;
    }
    case 235590:
    {
        returnValue = F("Oberaltenburg");
        break;
    }
    case 235591:
    {
        returnValue = F("Oberaltinger Str.");
        break;
    }
    case 235592:
    {
        returnValue = F("Oberammergauer Str.");
        break;
    }
    case 235593:
    {
        returnValue = F("Oberammersricht");
        break;
    }
    case 235594:
    {
        returnValue = F("Oberammersrichter Weg");
        break;
    }
    case 235595:
    {
        returnValue = F("Oberamteigasse");
        break;
    }
    case 235596:
    {
        returnValue = F("Oberamteistr.");
        break;
    }
    case 235597:
    {
        returnValue = F("Oberamthofstr.");
        break;
    }
    case 235598:
    {
        returnValue = F("Oberamtsgasse");
        break;
    }
    case 235599:
    {
        returnValue = F("Oberamtsgrenzweg");
        break;
    }
    case 235600:
    {
        returnValue = F("Oberamtsstr.");
        break;
    }
    case 235601:
    {
        returnValue = F("Oberamtstr.");
        break;
    }
    case 235602:
    {
        returnValue = F("Oberamtsweg");
        break;
    }
    case 235603:
    {
        returnValue = F("Oberanger");
        break;
    }
    case 235604:
    {
        returnValue = F("Oberangern");
        break;
    }
    case 235605:
    {
        returnValue = F("Oberangerweg");
        break;
    }
    case 235606:
    {
        returnValue = F("Oberanschiessing");
        break;
    }
    case 235607:
    {
        returnValue = F("Oberasbach");
        break;
    }
    case 235608:
    {
        returnValue = F("Oberasbacher Str.");
        break;
    }
    case 235609:
    {
        returnValue = F("Oberasbacher Weg");
        break;
    }
    case 235610:
    {
        returnValue = F("Oberasbacher-Geräumt");
        break;
    }
    case 235611:
    {
        returnValue = F("Oberasberg");
        break;
    }
    case 235612:
    {
        returnValue = F("Oberaschauer Str.");
        break;
    }
    case 235613:
    {
        returnValue = F("Oberaschenbach");
        break;
    }
    case 235614:
    {
        returnValue = F("Oberascherstr.");
        break;
    }
    case 235615:
    {
        returnValue = F("Oberasdorfer Str.");
        break;
    }
    case 235616:
    {
        returnValue = F("Oberaspher Str.");
        break;
    }
    case 235617:
    {
        returnValue = F("Oberasselborn");
        break;
    }
    case 235618:
    {
        returnValue = F("Oberau");
        break;
    }
    case 235619:
    {
        returnValue = F("Oberau -Stollenweg");
        break;
    }
    case 235620:
    {
        returnValue = F("Oberaubachweg");
        break;
    }
    case 235621:
    {
        returnValue = F("Oberaudorfer Str.");
        break;
    }
    case 235622:
    {
        returnValue = F("Oberaue");
        break;
    }
    case 235623:
    {
        returnValue = F("Oberauel");
        break;
    }
    case 235624:
    {
        returnValue = F("Oberauer Str.");
        break;
    }
    case 235625:
    {
        returnValue = F("Oberauer Weg");
        break;
    }
    case 235626:
    {
        returnValue = F("Oberauerbach");
        break;
    }
    case 235627:
    {
        returnValue = F("Oberauerbacher Str.");
        break;
    }
    case 235628:
    {
        returnValue = F("Oberauerkiel");
        break;
    }
    case 235629:
    {
        returnValue = F("Oberaufseß");
        break;
    }
    case 235630:
    {
        returnValue = F("Oberaulaer Str.");
        break;
    }
    case 235631:
    {
        returnValue = F("Oberaulaer Weg");
        break;
    }
    case 235632:
    {
        returnValue = F("Oberaumühle");
        break;
    }
    case 235633:
    {
        returnValue = F("Oberausstr.");
        break;
    }
    case 235634:
    {
        returnValue = F("Oberaustr.");
        break;
    }
    case 235635:
    {
        returnValue = F("Oberauweg");
        break;
    }
    case 235636:
    {
        returnValue = F("Oberaußemer Str.");
        break;
    }
    case 235637:
    {
        returnValue = F("Oberauäcker");
        break;
    }
    case 235638:
    {
        returnValue = F("Oberbabing");
        break;
    }
    case 235639:
    {
        returnValue = F("Oberbach");
        break;
    }
    case 235640:
    {
        returnValue = F("Oberbachemer Str.");
        break;
    }
    case 235641:
    {
        returnValue = F("Oberbacher Str.");
        break;
    }
    case 235642:
    {
        returnValue = F("Oberbachern");
        break;
    }
    case 235643:
    {
        returnValue = F("Oberbachham");
        break;
    }
    case 235644:
    {
        returnValue = F("Oberbachring");
        break;
    }
    case 235645:
    {
        returnValue = F("Oberbachstr.");
        break;
    }
    case 235646:
    {
        returnValue = F("Oberbachweg");
        break;
    }
    case 235647:
    {
        returnValue = F("Oberbaimbach");
        break;
    }
    case 235648:
    {
        returnValue = F("Oberbaimbacher Weg");
        break;
    }
    case 235649:
    {
        returnValue = F("Oberbalbacher Str.");
        break;
    }
    case 235650:
    {
        returnValue = F("Oberbalzheimer Str.");
        break;
    }
    case 235651:
    {
        returnValue = F("Oberbank");
        break;
    }
    case 235652:
    {
        returnValue = F("Oberbannstr.");
        break;
    }
    case 235653:
    {
        returnValue = F("Oberbantenberger Str.");
        break;
    }
    case 235654:
    {
        returnValue = F("Oberbaselweg");
        break;
    }
    case 235655:
    {
        returnValue = F("Oberbauer");
        break;
    }
    case 235656:
    {
        returnValue = F("Oberbauerschaft");
        break;
    }
    case 235657:
    {
        returnValue = F("Oberbauerschafter Str.");
        break;
    }
    case 235658:
    {
        returnValue = F("Oberbaumbrücke");
        break;
    }
    case 235659:
    {
        returnValue = F("Oberbaurat-Acker-Str.");
        break;
    }
    case 235660:
    {
        returnValue = F("Oberbaustr.");
        break;
    }
    case 235661:
    {
        returnValue = F("Oberbech");
        break;
    }
    case 235662:
    {
        returnValue = F("Oberbechinger Str.");
        break;
    }
    case 235663:
    {
        returnValue = F("Oberbeck");
        break;
    }
    case 235664:
    {
        returnValue = F("Oberbeckenstr.");
        break;
    }
    case 235665:
    {
        returnValue = F("Oberbecker Str.");
        break;
    }
    case 235666:
    {
        returnValue = F("Oberbeckerstr.");
        break;
    }
    case 235667:
    {
        returnValue = F("Oberbeckerweg");
        break;
    }
    case 235668:
    {
        returnValue = F("Oberbecksener Str.");
        break;
    }
    case 235669:
    {
        returnValue = F("Oberbeek");
        break;
    }
    case 235670:
    {
        returnValue = F("Oberbeisheimer Str.");
        break;
    }
    case 235671:
    {
        returnValue = F("Oberbeller Weg");
        break;
    }
    case 235672:
    {
        returnValue = F("Oberbenrader Str.");
        break;
    }
    case 235673:
    {
        returnValue = F("Oberbenrader Weg");
        break;
    }
    case 235674:
    {
        returnValue = F("Oberberg");
        break;
    }
    case 235675:
    {
        returnValue = F("Oberberge");
        break;
    }
    case 235676:
    {
        returnValue = F("Oberbergener Str.");
        break;
    }
    case 235677:
    {
        returnValue = F("Oberbergenstr.");
        break;
    }
    case 235678:
    {
        returnValue = F("Oberberger Str.");
        break;
    }
    case 235679:
    {
        returnValue = F("Oberbergheimer Str.");
        break;
    }
    case 235680:
    {
        returnValue = F("Oberberghofstr.");
        break;
    }
    case 235681:
    {
        returnValue = F("Oberberghöfe");
        break;
    }
    case 235682:
    {
        returnValue = F("Oberbergische Str.");
        break;
    }
    case 235683:
    {
        returnValue = F("Oberbergscheid");
        break;
    }
    case 235684:
    {
        returnValue = F("Oberbergstr.");
        break;
    }
    case 235685:
    {
        returnValue = F("Oberbergweg");
        break;
    }
    case 235686:
    {
        returnValue = F("Oberbernbacher Weg");
        break;
    }
    case 235687:
    {
        returnValue = F("Oberbernhards");
        break;
    }
    case 235688:
    {
        returnValue = F("Oberbersten");
        break;
    }
    case 235689:
    {
        returnValue = F("Oberbettinger Str.");
        break;
    }
    case 235690:
    {
        returnValue = F("Oberbettringer Str.");
        break;
    }
    case 235691:
    {
        returnValue = F("Oberbeurer Fußweg");
        break;
    }
    case 235692:
    {
        returnValue = F("Oberbexbacher Str.");
        break;
    }
    case 235693:
    {
        returnValue = F("Oberbibelsbach");
        break;
    }
    case 235694:
    {
        returnValue = F("Oberbiberger Str.");
        break;
    }
    case 235695:
    {
        returnValue = F("Oberbiberger Strassl");
        break;
    }
    case 235696:
    {
        returnValue = F("Oberbichler Str.");
        break;
    }
    case 235697:
    {
        returnValue = F("Oberbieberer Str.");
        break;
    }
    case 235698:
    {
        returnValue = F("Oberbieler Str.");
        break;
    }
    case 235699:
    {
        returnValue = F("Oberbierbach");
        break;
    }
    case 235700:
    {
        returnValue = F("Oberbierenbacher Str.");
        break;
    }
    case 235701:
    {
        returnValue = F("Oberbilker Allee");
        break;
    }
    case 235702:
    {
        returnValue = F("Oberbinge");
        break;
    }
    case 235703:
    {
        returnValue = F("Oberbinnwang");
        break;
    }
    case 235704:
    {
        returnValue = F("Oberbirkenhof");
        break;
    }
    case 235705:
    {
        returnValue = F("Oberblissenbach");
        break;
    }
    case 235706:
    {
        returnValue = F("Oberblombach");
        break;
    }
    case 235707:
    {
        returnValue = F("Oberboden");
        break;
    }
    case 235708:
    {
        returnValue = F("Oberboihinger Str.");
        break;
    }
    case 235709:
    {
        returnValue = F("Oberbolheimer Str.");
        break;
    }
    case 235710:
    {
        returnValue = F("Oberbonrath");
        break;
    }
    case 235711:
    {
        returnValue = F("Oberborn");
        break;
    }
    case 235712:
    {
        returnValue = F("Oberbornstr.");
        break;
    }
    case 235713:
    {
        returnValue = F("Oberbornweg");
        break;
    }
    case 235714:
    {
        returnValue = F("Oberborsbacher Str.");
        break;
    }
    case 235715:
    {
        returnValue = F("Oberbrake");
        break;
    }
    case 235716:
    {
        returnValue = F("Oberbraker Weg");
        break;
    }
    case 235717:
    {
        returnValue = F("Oberbrambacher Höhe");
        break;
    }
    case 235718:
    {
        returnValue = F("Oberbrandweg");
        break;
    }
    case 235719:
    {
        returnValue = F("Oberbreede");
        break;
    }
    case 235720:
    {
        returnValue = F("Oberbreidenbacher Str.");
        break;
    }
    case 235721:
    {
        returnValue = F("Oberbreite");
        break;
    }
    case 235722:
    {
        returnValue = F("Oberbreitenau");
        break;
    }
    case 235723:
    {
        returnValue = F("Oberbreitenauer Str.");
        break;
    }
    case 235724:
    {
        returnValue = F("Oberbreitenlohe B");
        break;
    }
    case 235725:
    {
        returnValue = F("Oberbreitenlohe D");
        break;
    }
    case 235726:
    {
        returnValue = F("Oberbreitenlohe E");
        break;
    }
    case 235727:
    {
        returnValue = F("Oberbreitenlohe G");
        break;
    }
    case 235728:
    {
        returnValue = F("Oberbreitweg");
        break;
    }
    case 235729:
    {
        returnValue = F("Oberbrettersbach");
        break;
    }
    case 235730:
    {
        returnValue = F("Oberbroich");
        break;
    }
    case 235731:
    {
        returnValue = F("Oberbruch");
        break;
    }
    case 235732:
    {
        returnValue = F("Oberbrucher Str.");
        break;
    }
    case 235733:
    {
        returnValue = F("Oberbruchstr.");
        break;
    }
    case 235734:
    {
        returnValue = F("Oberbruck");
        break;
    }
    case 235735:
    {
        returnValue = F("Oberbrucker Str.");
        break;
    }
    case 235736:
    {
        returnValue = F("Oberbrunner Str.");
        break;
    }
    case 235737:
    {
        returnValue = F("Oberbrunnham");
        break;
    }
    case 235738:
    {
        returnValue = F("Oberbrunnstr.");
        break;
    }
    case 235739:
    {
        returnValue = F("Oberbrunnweg");
        break;
    }
    case 235740:
    {
        returnValue = F("Oberbränder Str.");
        break;
    }
    case 235741:
    {
        returnValue = F("OberbränderAllee");
        break;
    }
    case 235742:
    {
        returnValue = F("Oberbrölstr.");
        break;
    }
    case 235743:
    {
        returnValue = F("Oberbrücke");
        break;
    }
    case 235744:
    {
        returnValue = F("Oberbrüdener Str.");
        break;
    }
    case 235745:
    {
        returnValue = F("Oberbrühlstr.");
        break;
    }
    case 235746:
    {
        returnValue = F("Oberbubach");
        break;
    }
    case 235747:
    {
        returnValue = F("Oberbucher Str.");
        break;
    }
    case 235748:
    {
        returnValue = F("Oberbuchfelder Weg");
        break;
    }
    case 235749:
    {
        returnValue = F("Oberbuchstr.");
        break;
    }
    case 235750:
    {
        returnValue = F("Oberbuck");
        break;
    }
    case 235751:
    {
        returnValue = F("Oberburg");
        break;
    }
    case 235752:
    {
        returnValue = F("Oberburg-Bergweg");
        break;
    }
    case 235753:
    {
        returnValue = F("Oberburger Weg");
        break;
    }
    case 235754:
    {
        returnValue = F("Oberburghof");
        break;
    }
    case 235755:
    {
        returnValue = F("Oberburgstr.");
        break;
    }
    case 235756:
    {
        returnValue = F("Oberbuschsiepen");
        break;
    }
    case 235757:
    {
        returnValue = F("Oberbuschweg");
        break;
    }
    case 235758:
    {
        returnValue = F("Oberböhl");
        break;
    }
    case 235759:
    {
        returnValue = F("Oberböhringer Str.");
        break;
    }
    case 235760:
    {
        returnValue = F("Oberböllen");
        break;
    }
    case 235761:
    {
        returnValue = F("Oberbörry");
        break;
    }
    case 235762:
    {
        returnValue = F("Oberbösaer Str.");
        break;
    }
    case 235763:
    {
        returnValue = F("Oberbüchel");
        break;
    }
    case 235764:
    {
        returnValue = F("Oberbüchleiner Str.");
        break;
    }
    case 235765:
    {
        returnValue = F("Oberbühl");
        break;
    }
    case 235766:
    {
        returnValue = F("Oberbühnweg");
        break;
    }
    case 235767:
    {
        returnValue = F("Oberbüngstr.");
        break;
    }
    case 235768:
    {
        returnValue = F("Oberbürchau");
        break;
    }
    case 235769:
    {
        returnValue = F("Oberbürgermeister-Arnold-Str.");
        break;
    }
    case 235770:
    {
        returnValue = F("Oberbürgermeister-Buß-Str.");
        break;
    }
    case 235771:
    {
        returnValue = F("Oberbürgermeister-Dr.-Engshuber-Str.");
        break;
    }
    case 235772:
    {
        returnValue = F("Oberbürgermeister-Dreifuß-Str.");
        break;
    }
    case 235773:
    {
        returnValue = F("Oberbürgermeister-Hohner-Str.");
        break;
    }
    case 235774:
    {
        returnValue = F("Oberbürgermeister-Kroher-Str.");
        break;
    }
    case 235775:
    {
        returnValue = F("Oberbürgermeister-Mann-Weg");
        break;
    }
    case 235776:
    {
        returnValue = F("Oberbürgermeister-Neumann-Str.");
        break;
    }
    case 235777:
    {
        returnValue = F("Oberbürgermeister-Ring");
        break;
    }
    case 235778:
    {
        returnValue = F("Oberbürgermeister-Thoma-Str.");
        break;
    }
    case 235779:
    {
        returnValue = F("Oberbüschem");
        break;
    }
    case 235780:
    {
        returnValue = F("Oberbüscherhof");
        break;
    }
    case 235781:
    {
        returnValue = F("Oberbüssauer Weg");
        break;
    }
    case 235782:
    {
        returnValue = F("Obercarsdorfer Str.");
        break;
    }
    case 235783:
    {
        returnValue = F("Obercatharinau");
        break;
    }
    case 235784:
    {
        returnValue = F("Obercrinitzer Str.");
        break;
    }
    case 235785:
    {
        returnValue = F("Obercrossen");
        break;
    }
    case 235786:
    {
        returnValue = F("Obercunnersdorfer Str.");
        break;
    }
    case 235787:
    {
        returnValue = F("Oberdaching");
        break;
    }
    case 235788:
    {
        returnValue = F("Oberdahl");
        break;
    }
    case 235789:
    {
        returnValue = F("Oberdahlhausen");
        break;
    }
    case 235790:
    {
        returnValue = F("Oberdalmerscheid");
        break;
    }
    case 235791:
    {
        returnValue = F("Oberdamm");
        break;
    }
    case 235792:
    {
        returnValue = F("Oberdarfeld");
        break;
    }
    case 235793:
    {
        returnValue = F("Oberdarfelder Str.");
        break;
    }
    case 235794:
    {
        returnValue = F("Oberdassen");
        break;
    }
    case 235795:
    {
        returnValue = F("Oberdeck");
        break;
    }
    case 235796:
    {
        returnValue = F("Oberdeggenbach");
        break;
    }
    case 235797:
    {
        returnValue = F("Oberdeich");
        break;
    }
    case 235798:
    {
        returnValue = F("Oberdeicher Weg");
        break;
    }
    case 235799:
    {
        returnValue = F("Oberdelle");
        break;
    }
    case 235800:
    {
        returnValue = F("Oberdessing");
        break;
    }
    case 235801:
    {
        returnValue = F("Oberdettinger Str.");
        break;
    }
    case 235802:
    {
        returnValue = F("Oberdeufstetter Str.");
        break;
    }
    case 235803:
    {
        returnValue = F("Oberdeuscher Weg");
        break;
    }
    case 235804:
    {
        returnValue = F("Oberdiebacher Str.");
        break;
    }
    case 235805:
    {
        returnValue = F("Oberdieck Weg");
        break;
    }
    case 235806:
    {
        returnValue = F("Oberdieckstr.");
        break;
    }
    case 235807:
    {
        returnValue = F("Oberdielfener Str.");
        break;
    }
    case 235808:
    {
        returnValue = F("Oberdiendorf");
        break;
    }
    case 235809:
    {
        returnValue = F("Oberdietenau");
        break;
    }
    case 235810:
    {
        returnValue = F("Oberdießemer Str.");
        break;
    }
    case 235811:
    {
        returnValue = F("Oberdigisheimer Str.");
        break;
    }
    case 235812:
    {
        returnValue = F("Oberdiller Str.");
        break;
    }
    case 235813:
    {
        returnValue = F("Oberdillinger Str.");
        break;
    }
    case 235814:
    {
        returnValue = F("Oberdinger Str.");
        break;
    }
    case 235815:
    {
        returnValue = F("Oberdingolfing");
        break;
    }
    case 235816:
    {
        returnValue = F("Oberdingolfinger Str.");
        break;
    }
    case 235817:
    {
        returnValue = F("Oberdippling");
        break;
    }
    case 235818:
    {
        returnValue = F("Oberdischinger Str.");
        break;
    }
    case 235819:
    {
        returnValue = F("Oberdollinger Str.");
        break;
    }
    case 235820:
    {
        returnValue = F("Oberdonauweg");
        break;
    }
    case 235821:
    {
        returnValue = F("Oberdorf");
        break;
    }
    case 235822:
    {
        returnValue = F("Oberdorf-Plätzjen");
        break;
    }
    case 235823:
    {
        returnValue = F("Oberdorf-Weg");
        break;
    }
    case 235824:
    {
        returnValue = F("Oberdorfallee");
        break;
    }
    case 235825:
    {
        returnValue = F("Oberdorfelder Str.");
        break;
    }
    case 235826:
    {
        returnValue = F("Oberdorfener Str.");
        break;
    }
    case 235827:
    {
        returnValue = F("Oberdorfer Bahnhofstr.");
        break;
    }
    case 235828:
    {
        returnValue = F("Oberdorfer Flügel");
        break;
    }
    case 235829:
    {
        returnValue = F("Oberdorfer Str.");
        break;
    }
    case 235830:
    {
        returnValue = F("Oberdorfer Torweg");
        break;
    }
    case 235831:
    {
        returnValue = F("Oberdorfer Weg");
        break;
    }
    case 235832:
    {
        returnValue = F("Oberdorferweg");
        break;
    }
    case 235833:
    {
        returnValue = F("Oberdorfgasse");
        break;
    }
    case 235834:
    {
        returnValue = F("Oberdorfplatz");
        break;
    }
    case 235835:
    {
        returnValue = F("Oberdorfring");
        break;
    }
    case 235836:
    {
        returnValue = F("Oberdorfstr.");
        break;
    }
    case 235837:
    {
        returnValue = F("Oberdorfweg");
        break;
    }
    case 235838:
    {
        returnValue = F("Oberdorlaer Str.");
        break;
    }
    case 235839:
    {
        returnValue = F("Oberdorp");
        break;
    }
    case 235840:
    {
        returnValue = F("Oberdorst");
        break;
    }
    case 235841:
    {
        returnValue = F("Oberdorster Str.");
        break;
    }
    case 235842:
    {
        returnValue = F("Oberdrauburger Str.");
        break;
    }
    case 235843:
    {
        returnValue = F("Oberdreescher Weg");
        break;
    }
    case 235844:
    {
        returnValue = F("Oberdreeser Str.");
        break;
    }
    case 235845:
    {
        returnValue = F("Oberdreisbach");
        break;
    }
    case 235846:
    {
        returnValue = F("Oberdreisbach-Höhe");
        break;
    }
    case 235847:
    {
        returnValue = F("Oberdreisbacher Str.");
        break;
    }
    case 235848:
    {
        returnValue = F("Oberdreiser Kopf");
        break;
    }
    case 235849:
    {
        returnValue = F("Oberdreiser Str.");
        break;
    }
    case 235850:
    {
        returnValue = F("Oberdreispringen");
        break;
    }
    case 235851:
    {
        returnValue = F("Oberdreveweg");
        break;
    }
    case 235852:
    {
        returnValue = F("Oberdörfer Allee");
        break;
    }
    case 235853:
    {
        returnValue = F("Oberdörfer Pfad");
        break;
    }
    case 235854:
    {
        returnValue = F("Oberdörfer Stadtweg");
        break;
    }
    case 235855:
    {
        returnValue = F("Oberdörfer Str.");
        break;
    }
    case 235856:
    {
        returnValue = F("Oberdörferstr.");
        break;
    }
    case 235857:
    {
        returnValue = F("Oberdörferweg");
        break;
    }
    case 235858:
    {
        returnValue = F("Oberdörnbachshof");
        break;
    }
    case 235859:
    {
        returnValue = F("Oberdörnen");
        break;
    }
    case 235860:
    {
        returnValue = F("Oberdörst");
        break;
    }
    case 235861:
    {
        returnValue = F("Oberdürrbacher Str.");
        break;
    }
    case 235862:
    {
        returnValue = F("Oberdüssel");
        break;
    }
    case 235863:
    {
        returnValue = F("Oberdüsseler Weg");
        break;
    }
    case 235864:
    {
        returnValue = F("Obere Achstr.");
        break;
    }
    case 235865:
    {
        returnValue = F("Obere Acht");
        break;
    }
    case 235866:
    {
        returnValue = F("Obere Ackerstr.");
        break;
    }
    case 235867:
    {
        returnValue = F("Obere Aichbachtalstr.");
        break;
    }
    case 235868:
    {
        returnValue = F("Obere Allee");
        break;
    }
    case 235869:
    {
        returnValue = F("Obere Alleenstr.");
        break;
    }
    case 235870:
    {
        returnValue = F("Obere Allenbach");
        break;
    }
    case 235871:
    {
        returnValue = F("Obere Allmendbrücke");
        break;
    }
    case 235872:
    {
        returnValue = F("Obere Alm");
        break;
    }
    case 235873:
    {
        returnValue = F("Obere Altburger Steige");
        break;
    }
    case 235874:
    {
        returnValue = F("Obere Alte Gass");
        break;
    }
    case 235875:
    {
        returnValue = F("Obere Alte Poststr.");
        break;
    }
    case 235876:
    {
        returnValue = F("Obere Altstadt");
        break;
    }
    case 235877:
    {
        returnValue = F("Obere Amalienhöhe");
        break;
    }
    case 235878:
    {
        returnValue = F("Obere Angelgasse");
        break;
    }
    case 235879:
    {
        returnValue = F("Obere Angergasse");
        break;
    }
    case 235880:
    {
        returnValue = F("Obere Angerstr.");
        break;
    }
    case 235881:
    {
        returnValue = F("Obere Anlage");
        break;
    }
    case 235882:
    {
        returnValue = F("Obere Anlagen");
        break;
    }
    case 235883:
    {
        returnValue = F("Obere Anspann");
        break;
    }
    case 235884:
    {
        returnValue = F("Obere Anwand");
        break;
    }
    case 235885:
    {
        returnValue = F("Obere Apfelbergstr.");
        break;
    }
    case 235886:
    {
        returnValue = F("Obere Arndorfer Str.");
        break;
    }
    case 235887:
    {
        returnValue = F("Obere Arnstädter Str.");
        break;
    }
    case 235888:
    {
        returnValue = F("Obere Arthurstr.");
        break;
    }
    case 235889:
    {
        returnValue = F("Obere Aspel");
        break;
    }
    case 235890:
    {
        returnValue = F("Obere Au");
        break;
    }
    case 235891:
    {
        returnValue = F("Obere Aub");
        break;
    }
    case 235892:
    {
        returnValue = F("Obere Aubergstr.");
        break;
    }
    case 235893:
    {
        returnValue = F("Obere Aue");
        break;
    }
    case 235894:
    {
        returnValue = F("Obere Auen");
        break;
    }
    case 235895:
    {
        returnValue = F("Obere Auenstr.");
        break;
    }
    case 235896:
    {
        returnValue = F("Obere Auflangenstr.");
        break;
    }
    case 235897:
    {
        returnValue = F("Obere Augartenstr.");
        break;
    }
    case 235898:
    {
        returnValue = F("Obere Augasse");
        break;
    }
    case 235899:
    {
        returnValue = F("Obere Augärten");
        break;
    }
    case 235900:
    {
        returnValue = F("Obere Austr.");
        break;
    }
    case 235901:
    {
        returnValue = F("Obere Auwiese");
        break;
    }
    case 235902:
    {
        returnValue = F("Obere Bachgasse");
        break;
    }
    case 235903:
    {
        returnValue = F("Obere Bachstr.");
        break;
    }
    case 235904:
    {
        returnValue = F("Obere Bachwiesen");
        break;
    }
    case 235905:
    {
        returnValue = F("Obere Badegasse");
        break;
    }
    case 235906:
    {
        returnValue = F("Obere Badergasse");
        break;
    }
    case 235907:
    {
        returnValue = F("Obere Badgasse");
        break;
    }
    case 235908:
    {
        returnValue = F("Obere Badstr.");
        break;
    }
    case 235909:
    {
        returnValue = F("Obere Bahn");
        break;
    }
    case 235910:
    {
        returnValue = F("Obere Bahnhofstr.");
        break;
    }
    case 235911:
    {
        returnValue = F("Obere Bahnstr.");
        break;
    }
    case 235912:
    {
        returnValue = F("Obere Baumgartenstr.");
        break;
    }
    case 235913:
    {
        returnValue = F("Obere Bausch");
        break;
    }
    case 235914:
    {
        returnValue = F("Obere Bauscherstr.");
        break;
    }
    case 235915:
    {
        returnValue = F("Obere Baustr.");
        break;
    }
    case 235916:
    {
        returnValue = F("Obere Bauwaldschneise");
        break;
    }
    case 235917:
    {
        returnValue = F("Obere Bayerische Gasse");
        break;
    }
    case 235918:
    {
        returnValue = F("Obere Beernleite");
        break;
    }
    case 235919:
    {
        returnValue = F("Obere Bein");
        break;
    }
    case 235920:
    {
        returnValue = F("Obere Beine");
        break;
    }
    case 235921:
    {
        returnValue = F("Obere Beintstr.");
        break;
    }
    case 235922:
    {
        returnValue = F("Obere Beltz");
        break;
    }
    case 235923:
    {
        returnValue = F("Obere Bergbahnstr.");
        break;
    }
    case 235924:
    {
        returnValue = F("Obere Bergenstr.");
        break;
    }
    case 235925:
    {
        returnValue = F("Obere Bergerheide");
        break;
    }
    case 235926:
    {
        returnValue = F("Obere Berggasse");
        break;
    }
    case 235927:
    {
        returnValue = F("Obere Berghofstr.");
        break;
    }
    case 235928:
    {
        returnValue = F("Obere Berghäuser");
        break;
    }
    case 235929:
    {
        returnValue = F("Obere Bergstr.");
        break;
    }
    case 235930:
    {
        returnValue = F("Obere Bergäcker");
        break;
    }
    case 235931:
    {
        returnValue = F("Obere Beund");
        break;
    }
    case 235932:
    {
        returnValue = F("Obere Beutau");
        break;
    }
    case 235933:
    {
        returnValue = F("Obere Beutenberghäuser");
        break;
    }
    case 235934:
    {
        returnValue = F("Obere Bichlstr.");
        break;
    }
    case 235935:
    {
        returnValue = F("Obere Bielefelder Landstr.");
        break;
    }
    case 235936:
    {
        returnValue = F("Obere Bienhecke");
        break;
    }
    case 235937:
    {
        returnValue = F("Obere Bifangstr.");
        break;
    }
    case 235938:
    {
        returnValue = F("Obere Biggestr.");
        break;
    }
    case 235939:
    {
        returnValue = F("Obere Bildgasse");
        break;
    }
    case 235940:
    {
        returnValue = F("Obere Binge");
        break;
    }
    case 235941:
    {
        returnValue = F("Obere Birk");
        break;
    }
    case 235942:
    {
        returnValue = F("Obere Birkastr.");
        break;
    }
    case 235943:
    {
        returnValue = F("Obere Birke");
        break;
    }
    case 235944:
    {
        returnValue = F("Obere Birkenallee");
        break;
    }
    case 235945:
    {
        returnValue = F("Obere Birkleite");
        break;
    }
    case 235946:
    {
        returnValue = F("Obere Bismarckstr.");
        break;
    }
    case 235947:
    {
        returnValue = F("Obere Bitzer Str.");
        break;
    }
    case 235948:
    {
        returnValue = F("Obere Blanke");
        break;
    }
    case 235949:
    {
        returnValue = F("Obere Blatt");
        break;
    }
    case 235950:
    {
        returnValue = F("Obere Bleiche");
        break;
    }
    case 235951:
    {
        returnValue = F("Obere Bleichstr.");
        break;
    }
    case 235952:
    {
        returnValue = F("Obere Blenz");
        break;
    }
    case 235953:
    {
        returnValue = F("Obere Blumenstr.");
        break;
    }
    case 235954:
    {
        returnValue = F("Obere Bogenstr.");
        break;
    }
    case 235955:
    {
        returnValue = F("Obere Bohle");
        break;
    }
    case 235956:
    {
        returnValue = F("Obere Bohlstr.");
        break;
    }
    case 235957:
    {
        returnValue = F("Obere Borngasse");
        break;
    }
    case 235958:
    {
        returnValue = F("Obere Bornholzstr.");
        break;
    }
    case 235959:
    {
        returnValue = F("Obere Bornränder");
        break;
    }
    case 235960:
    {
        returnValue = F("Obere Bornwiesenstr.");
        break;
    }
    case 235961:
    {
        returnValue = F("Obere Brake");
        break;
    }
    case 235962:
    {
        returnValue = F("Obere Braminseestr.");
        break;
    }
    case 235963:
    {
        returnValue = F("Obere Branderhaild");
        break;
    }
    case 235964:
    {
        returnValue = F("Obere Brandstr.");
        break;
    }
    case 235965:
    {
        returnValue = F("Obere Braugasse");
        break;
    }
    case 235966:
    {
        returnValue = F("Obere Brauhausgasse");
        break;
    }
    case 235967:
    {
        returnValue = F("Obere Brauhausstr.");
        break;
    }
    case 235968:
    {
        returnValue = F("Obere Braunstr.");
        break;
    }
    case 235969:
    {
        returnValue = F("Obere Brede");
        break;
    }
    case 235970:
    {
        returnValue = F("Obere Bredenstiege");
        break;
    }
    case 235971:
    {
        returnValue = F("Obere Breede");
        break;
    }
    case 235972:
    {
        returnValue = F("Obere Brehm");
        break;
    }
    case 235973:
    {
        returnValue = F("Obere Breige");
        break;
    }
    case 235974:
    {
        returnValue = F("Obere Breite");
        break;
    }
    case 235975:
    {
        returnValue = F("Obere Breite Str.");
        break;
    }
    case 235976:
    {
        returnValue = F("Obere Breiten");
        break;
    }
    case 235977:
    {
        returnValue = F("Obere Breitenbach");
        break;
    }
    case 235978:
    {
        returnValue = F("Obere Breitensteinstr.");
        break;
    }
    case 235979:
    {
        returnValue = F("Obere Breitstr.");
        break;
    }
    case 235980:
    {
        returnValue = F("Obere Breitwiese");
        break;
    }
    case 235981:
    {
        returnValue = F("Obere Breitäckerstr.");
        break;
    }
    case 235982:
    {
        returnValue = F("Obere Brendelstr.");
        break;
    }
    case 235983:
    {
        returnValue = F("Obere Brettachtalstr.");
        break;
    }
    case 235984:
    {
        returnValue = F("Obere Briel");
        break;
    }
    case 235985:
    {
        returnValue = F("Obere Brinkstr.");
        break;
    }
    case 235986:
    {
        returnValue = F("Obere Bruck");
        break;
    }
    case 235987:
    {
        returnValue = F("Obere Brudertalstr.");
        break;
    }
    case 235988:
    {
        returnValue = F("Obere Brunnengasse");
        break;
    }
    case 235989:
    {
        returnValue = F("Obere Brunnenstr.");
        break;
    }
    case 235990:
    {
        returnValue = F("Obere Brunnhalde");
        break;
    }
    case 235991:
    {
        returnValue = F("Obere Bräuhausstr.");
        break;
    }
    case 235992:
    {
        returnValue = F("Obere Brücke");
        break;
    }
    case 235993:
    {
        returnValue = F("Obere Brückengasse");
        break;
    }
    case 235994:
    {
        returnValue = F("Obere Brückenstr.");
        break;
    }
    case 235995:
    {
        returnValue = F("Obere Brüderstr.");
        break;
    }
    case 235996:
    {
        returnValue = F("Obere Brühlsteige");
        break;
    }
    case 235997:
    {
        returnValue = F("Obere Brühlstr.");
        break;
    }
    case 235998:
    {
        returnValue = F("Obere Buchen");
        break;
    }
    case 235999:
    {
        returnValue = F("Obere Buchenhölle");
        break;
    }
    case 236000:
    {
        returnValue = F("Obere Buchenreihe");
        break;
    }
    case 236001:
    {
        returnValue = F("Obere Buchgasse");
        break;
    }
    case 236002:
    {
        returnValue = F("Obere Buchhaldenstr.");
        break;
    }
    case 236003:
    {
        returnValue = F("Obere Buchstr.");
        break;
    }
    case 236004:
    {
        returnValue = F("Obere Bult");
        break;
    }
    case 236005:
    {
        returnValue = F("Obere Burachstr.");
        break;
    }
    case 236006:
    {
        returnValue = F("Obere Burg");
        break;
    }
    case 236007:
    {
        returnValue = F("Obere Burgbreite");
        break;
    }
    case 236008:
    {
        returnValue = F("Obere Burggasse");
        break;
    }
    case 236009:
    {
        returnValue = F("Obere Burghalde");
        break;
    }
    case 236010:
    {
        returnValue = F("Obere Burgleite");
        break;
    }
    case 236011:
    {
        returnValue = F("Obere Burgstallstr.");
        break;
    }
    case 236012:
    {
        returnValue = F("Obere Burgstr.");
        break;
    }
    case 236013:
    {
        returnValue = F("Obere Buschstr.");
        break;
    }
    case 236014:
    {
        returnValue = F("Obere Bussen");
        break;
    }
    case 236015:
    {
        returnValue = F("Obere Bärenbergstr.");
        break;
    }
    case 236016:
    {
        returnValue = F("Obere Bärenlocherstr.");
        break;
    }
    case 236017:
    {
        returnValue = F("Obere Bärenloher Str.");
        break;
    }
    case 236018:
    {
        returnValue = F("Obere Bäun");
        break;
    }
    case 236019:
    {
        returnValue = F("Obere Böhle");
        break;
    }
    case 236020:
    {
        returnValue = F("Obere Büch");
        break;
    }
    case 236021:
    {
        returnValue = F("Obere Bühlstr.");
        break;
    }
    case 236022:
    {
        returnValue = F("Obere Bündt");
        break;
    }
    case 236023:
    {
        returnValue = F("Obere Bürger");
        break;
    }
    case 236024:
    {
        returnValue = F("Obere Bürgstr.");
        break;
    }
    case 236025:
    {
        returnValue = F("Obere Büttengasse");
        break;
    }
    case 236026:
    {
        returnValue = F("Obere Clignetstr.");
        break;
    }
    case 236027:
    {
        returnValue = F("Obere Coburger Str.");
        break;
    }
    case 236028:
    {
        returnValue = F("Obere Conrad-Valdor-Str.");
        break;
    }
    case 236029:
    {
        returnValue = F("Obere Crottenseestr.");
        break;
    }
    case 236030:
    {
        returnValue = F("Obere Cunnersdorfer Str.");
        break;
    }
    case 236031:
    {
        returnValue = F("Obere Daadenbach");
        break;
    }
    case 236032:
    {
        returnValue = F("Obere Dammstr.");
        break;
    }
    case 236033:
    {
        returnValue = F("Obere Danziger Str.");
        break;
    }
    case 236034:
    {
        returnValue = F("Obere Dell");
        break;
    }
    case 236035:
    {
        returnValue = F("Obere Dellchenstr.");
        break;
    }
    case 236036:
    {
        returnValue = F("Obere Dellstr.");
        break;
    }
    case 236037:
    {
        returnValue = F("Obere Delme");
        break;
    }
    case 236038:
    {
        returnValue = F("Obere Denisstr.");
        break;
    }
    case 236039:
    {
        returnValue = F("Obere Denne");
        break;
    }
    case 236040:
    {
        returnValue = F("Obere Dick");
        break;
    }
    case 236041:
    {
        returnValue = F("Obere Dickne");
        break;
    }
    case 236042:
    {
        returnValue = F("Obere Dohle");
        break;
    }
    case 236043:
    {
        returnValue = F("Obere Domberggasse");
        break;
    }
    case 236044:
    {
        returnValue = F("Obere Donarstr.");
        break;
    }
    case 236045:
    {
        returnValue = F("Obere Donaulände");
        break;
    }
    case 236046:
    {
        returnValue = F("Obere Donitzschkau");
        break;
    }
    case 236047:
    {
        returnValue = F("Obere Dorfgasse");
        break;
    }
    case 236048:
    {
        returnValue = F("Obere Dorfstr.");
        break;
    }
    case 236049:
    {
        returnValue = F("Obere Dorfstrße");
        break;
    }
    case 236050:
    {
        returnValue = F("Obere Dorngartenstr.");
        break;
    }
    case 236051:
    {
        returnValue = F("Obere Dornhaner Str.");
        break;
    }
    case 236052:
    {
        returnValue = F("Obere Dornäcker");
        break;
    }
    case 236053:
    {
        returnValue = F("Obere Dorotheenstr.");
        break;
    }
    case 236054:
    {
        returnValue = F("Obere Dreihöf");
        break;
    }
    case 236055:
    {
        returnValue = F("Obere Drimbornstr.");
        break;
    }
    case 236056:
    {
        returnValue = F("Obere Drittelgasse");
        break;
    }
    case 236057:
    {
        returnValue = F("Obere Dunkelgasse");
        break;
    }
    case 236058:
    {
        returnValue = F("Obere Döhlerwaldstr.");
        break;
    }
    case 236059:
    {
        returnValue = F("Obere Dösse");
        break;
    }
    case 236060:
    {
        returnValue = F("Obere Ebene");
        break;
    }
    case 236061:
    {
        returnValue = F("Obere Ebenhalde");
        break;
    }
    case 236062:
    {
        returnValue = F("Obere Eberstr.");
        break;
    }
    case 236063:
    {
        returnValue = F("Obere Eberstr. / Bo1 / Bo2");
        break;
    }
    case 236064:
    {
        returnValue = F("Obere Ebertstr.");
        break;
    }
    case 236065:
    {
        returnValue = F("Obere Eckardtsstr.");
        break;
    }
    case 236066:
    {
        returnValue = F("Obere Ecke");
        break;
    }
    case 236067:
    {
        returnValue = F("Obere Eckenbergstr.");
        break;
    }
    case 236068:
    {
        returnValue = F("Obere Eckstr.");
        break;
    }
    case 236069:
    {
        returnValue = F("Obere Egge");
        break;
    }
    case 236070:
    {
        returnValue = F("Obere Eichehalde");
        break;
    }
    case 236071:
    {
        returnValue = F("Obere Eichen");
        break;
    }
    case 236072:
    {
        returnValue = F("Obere Eichenleite");
        break;
    }
    case 236073:
    {
        returnValue = F("Obere Eichenstr.");
        break;
    }
    case 236074:
    {
        returnValue = F("Obere Eichgartenstr.");
        break;
    }
    case 236075:
    {
        returnValue = F("Obere Eichstädtstr.");
        break;
    }
    case 236076:
    {
        returnValue = F("Obere Einsteinstr.");
        break;
    }
    case 236077:
    {
        returnValue = F("Obere Einöde");
        break;
    }
    case 236078:
    {
        returnValue = F("Obere Eisenbahnstr.");
        break;
    }
    case 236079:
    {
        returnValue = F("Obere Eisenstr.");
        break;
    }
    case 236080:
    {
        returnValue = F("Obere Eller");
        break;
    }
    case 236081:
    {
        returnValue = F("Obere Ellerbergstr.");
        break;
    }
    case 236082:
    {
        returnValue = F("Obere Endestr.");
        break;
    }
    case 236083:
    {
        returnValue = F("Obere Entengasse");
        break;
    }
    case 236084:
    {
        returnValue = F("Obere Erft");
        break;
    }
    case 236085:
    {
        returnValue = F("Obere Ergat");
        break;
    }
    case 236086:
    {
        returnValue = F("Obere Erlentiefenstr.");
        break;
    }
    case 236087:
    {
        returnValue = F("Obere Erzenbach");
        break;
    }
    case 236088:
    {
        returnValue = F("Obere Eschstr.");
        break;
    }
    case 236089:
    {
        returnValue = F("Obere Espenstr.");
        break;
    }
    case 236090:
    {
        returnValue = F("Obere Etzstr.");
        break;
    }
    case 236091:
    {
        returnValue = F("Obere Falbe");
        break;
    }
    case 236092:
    {
        returnValue = F("Obere Falltorstr.");
        break;
    }
    case 236093:
    {
        returnValue = F("Obere Felbenstr.");
        break;
    }
    case 236094:
    {
        returnValue = F("Obere Felder");
        break;
    }
    case 236095:
    {
        returnValue = F("Obere Felderstr.");
        break;
    }
    case 236096:
    {
        returnValue = F("Obere Feldschneise");
        break;
    }
    case 236097:
    {
        returnValue = F("Obere Feldstr.");
        break;
    }
    case 236098:
    {
        returnValue = F("Obere Fembachbrücke");
        break;
    }
    case 236099:
    {
        returnValue = F("Obere Feuergasse");
        break;
    }
    case 236100:
    {
        returnValue = F("Obere Findelstätte");
        break;
    }
    case 236101:
    {
        returnValue = F("Obere Finkensteige");
        break;
    }
    case 236102:
    {
        returnValue = F("Obere Fischerbergstr.");
        break;
    }
    case 236103:
    {
        returnValue = F("Obere Fischerstr.");
        break;
    }
    case 236104:
    {
        returnValue = F("Obere Fischgasse");
        break;
    }
    case 236105:
    {
        returnValue = F("Obere Fischäckergasse");
        break;
    }
    case 236106:
    {
        returnValue = F("Obere Flandersbach");
        break;
    }
    case 236107:
    {
        returnValue = F("Obere Fliederstaffel");
        break;
    }
    case 236108:
    {
        returnValue = F("Obere Flotz");
        break;
    }
    case 236109:
    {
        returnValue = F("Obere Flotzgasse");
        break;
    }
    case 236110:
    {
        returnValue = F("Obere Flur");
        break;
    }
    case 236111:
    {
        returnValue = F("Obere Fluraustr.");
        break;
    }
    case 236112:
    {
        returnValue = F("Obere Flurstr.");
        break;
    }
    case 236113:
    {
        returnValue = F("Obere Flutgasse");
        break;
    }
    case 236114:
    {
        returnValue = F("Obere Flüh");
        break;
    }
    case 236115:
    {
        returnValue = F("Obere Forchen");
        break;
    }
    case 236116:
    {
        returnValue = F("Obere Forststr.");
        break;
    }
    case 236117:
    {
        returnValue = F("Obere Frankenstr.");
        break;
    }
    case 236118:
    {
        returnValue = F("Obere Frankfurter Str.");
        break;
    }
    case 236119:
    {
        returnValue = F("Obere Fraubachstr.");
        break;
    }
    case 236120:
    {
        returnValue = F("Obere Frauenstr.");
        break;
    }
    case 236121:
    {
        returnValue = F("Obere Freiburgern");
        break;
    }
    case 236122:
    {
        returnValue = F("Obere Freiheit");
        break;
    }
    case 236123:
    {
        returnValue = F("Obere Freiheitstr.");
        break;
    }
    case 236124:
    {
        returnValue = F("Obere Freitorstr.");
        break;
    }
    case 236125:
    {
        returnValue = F("Obere Freyung");
        break;
    }
    case 236126:
    {
        returnValue = F("Obere Friedenstr.");
        break;
    }
    case 236127:
    {
        returnValue = F("Obere Friedhofstr.");
        break;
    }
    case 236128:
    {
        returnValue = F("Obere Froschau");
        break;
    }
    case 236129:
    {
        returnValue = F("Obere Fuchsgrub");
        break;
    }
    case 236130:
    {
        returnValue = F("Obere Fuhr");
        break;
    }
    case 236131:
    {
        returnValue = F("Obere Fuhre");
        break;
    }
    case 236132:
    {
        returnValue = F("Obere Fuldatalstr.");
        break;
    }
    case 236133:
    {
        returnValue = F("Obere Fulder Gasse");
        break;
    }
    case 236134:
    {
        returnValue = F("Obere Fährgasse");
        break;
    }
    case 236135:
    {
        returnValue = F("Obere Fährstr.");
        break;
    }
    case 236136:
    {
        returnValue = F("Obere Föhr");
        break;
    }
    case 236137:
    {
        returnValue = F("Obere Fürnsaler Str.");
        break;
    }
    case 236138:
    {
        returnValue = F("Obere Galgenheck");
        break;
    }
    case 236139:
    {
        returnValue = F("Obere Gallusstr.");
        break;
    }
    case 236140:
    {
        returnValue = F("Obere Gartenreihe");
        break;
    }
    case 236141:
    {
        returnValue = F("Obere Gartenstr.");
        break;
    }
    case 236142:
    {
        returnValue = F("Obere Gartenstücke");
        break;
    }
    case 236143:
    {
        returnValue = F("Obere Gartenwiesen");
        break;
    }
    case 236144:
    {
        returnValue = F("Obere Gass");
        break;
    }
    case 236145:
    {
        returnValue = F("Obere Gasse");
        break;
    }
    case 236146:
    {
        returnValue = F("Obere Gehrecken");
        break;
    }
    case 236147:
    {
        returnValue = F("Obere Gehrnstr.");
        break;
    }
    case 236148:
    {
        returnValue = F("Obere Geichen");
        break;
    }
    case 236149:
    {
        returnValue = F("Obere Geisbergstr.");
        break;
    }
    case 236150:
    {
        returnValue = F("Obere Geißäcker");
        break;
    }
    case 236151:
    {
        returnValue = F("Obere Gelmbach");
        break;
    }
    case 236152:
    {
        returnValue = F("Obere Gerbe");
        break;
    }
    case 236153:
    {
        returnValue = F("Obere Gerberstr.");
        break;
    }
    case 236154:
    {
        returnValue = F("Obere Gewendhalde");
        break;
    }
    case 236155:
    {
        returnValue = F("Obere Gewerbestr.");
        break;
    }
    case 236156:
    {
        returnValue = F("Obere Ghaustr.");
        break;
    }
    case 236157:
    {
        returnValue = F("Obere Giglstr.");
        break;
    }
    case 236158:
    {
        returnValue = F("Obere Glanstr.");
        break;
    }
    case 236159:
    {
        returnValue = F("Obere Glashüttensiedlung");
        break;
    }
    case 236160:
    {
        returnValue = F("Obere Glasschleife");
        break;
    }
    case 236161:
    {
        returnValue = F("Obere Godingbrede");
        break;
    }
    case 236162:
    {
        returnValue = F("Obere Goethestr.");
        break;
    }
    case 236163:
    {
        returnValue = F("Obere Goldene Au");
        break;
    }
    case 236164:
    {
        returnValue = F("Obere Goldlauterstr.");
        break;
    }
    case 236165:
    {
        returnValue = F("Obere Gondorf");
        break;
    }
    case 236166:
    {
        returnValue = F("Obere Grabenstr.");
        break;
    }
    case 236167:
    {
        returnValue = F("Obere Grabenäcker");
        break;
    }
    case 236168:
    {
        returnValue = F("Obere Grasstr.");
        break;
    }
    case 236169:
    {
        returnValue = F("Obere Grendelstr.");
        break;
    }
    case 236170:
    {
        returnValue = F("Obere Grenzstr.");
        break;
    }
    case 236171:
    {
        returnValue = F("Obere Grieselstr.");
        break;
    }
    case 236172:
    {
        returnValue = F("Obere Gronach");
        break;
    }
    case 236173:
    {
        returnValue = F("Obere Großgasse");
        break;
    }
    case 236174:
    {
        returnValue = F("Obere Grub");
        break;
    }
    case 236175:
    {
        returnValue = F("Obere Grube");
        break;
    }
    case 236176:
    {
        returnValue = F("Obere Grubstr.");
        break;
    }
    case 236177:
    {
        returnValue = F("Obere Grundstr.");
        break;
    }
    case 236178:
    {
        returnValue = F("Obere Gräbengasse");
        break;
    }
    case 236179:
    {
        returnValue = F("Obere Gräbenwiesen");
        break;
    }
    case 236180:
    {
        returnValue = F("Obere Grüben");
        break;
    }
    case 236181:
    {
        returnValue = F("Obere Grüneichstr.");
        break;
    }
    case 236182:
    {
        returnValue = F("Obere Guldenstr.");
        break;
    }
    case 236183:
    {
        returnValue = F("Obere Gundekarstr.");
        break;
    }
    case 236184:
    {
        returnValue = F("Obere Gutentalstr.");
        break;
    }
    case 236185:
    {
        returnValue = F("Obere Gänseweide");
        break;
    }
    case 236186:
    {
        returnValue = F("Obere Gänshalde");
        break;
    }
    case 236187:
    {
        returnValue = F("Obere Gänsweide");
        break;
    }
    case 236188:
    {
        returnValue = F("Obere Gänsäcker");
        break;
    }
    case 236189:
    {
        returnValue = F("Obere Gärten");
        break;
    }
    case 236190:
    {
        returnValue = F("Obere Gärtnerstr.");
        break;
    }
    case 236191:
    {
        returnValue = F("Obere Görgengasse");
        break;
    }
    case 236192:
    {
        returnValue = F("Obere Güterbahnhofstr.");
        break;
    }
    case 236193:
    {
        returnValue = F("Obere Haag");
        break;
    }
    case 236194:
    {
        returnValue = F("Obere Haaggasse");
        break;
    }
    case 236195:
    {
        returnValue = F("Obere Haardstr.");
        break;
    }
    case 236196:
    {
        returnValue = F("Obere Haardt");
        break;
    }
    case 236197:
    {
        returnValue = F("Obere Haardtstr.");
        break;
    }
    case 236198:
    {
        returnValue = F("Obere Haferstr.");
        break;
    }
    case 236199:
    {
        returnValue = F("Obere Hafnerstr.");
        break;
    }
    case 236200:
    {
        returnValue = F("Obere Hagenstr.");
        break;
    }
    case 236201:
    {
        returnValue = F("Obere Hagstr.");
        break;
    }
    case 236202:
    {
        returnValue = F("Obere Haide");
        break;
    }
    case 236203:
    {
        returnValue = F("Obere Hainbachstr.");
        break;
    }
    case 236204:
    {
        returnValue = F("Obere Hainbergstr.");
        break;
    }
    case 236205:
    {
        returnValue = F("Obere Haingasse");
        break;
    }
    case 236206:
    {
        returnValue = F("Obere Hainthalstr.");
        break;
    }
    case 236207:
    {
        returnValue = F("Obere Haitzer Gasse");
        break;
    }
    case 236208:
    {
        returnValue = F("Obere Hajestr.");
        break;
    }
    case 236209:
    {
        returnValue = F("Obere Halde");
        break;
    }
    case 236210:
    {
        returnValue = F("Obere Haldenstr.");
        break;
    }
    case 236211:
    {
        returnValue = F("Obere Haldenäcker");
        break;
    }
    case 236212:
    {
        returnValue = F("Obere Hallauer Str.");
        break;
    }
    case 236213:
    {
        returnValue = F("Obere Halle");
        break;
    }
    case 236214:
    {
        returnValue = F("Obere Hamböhlstr.");
        break;
    }
    case 236215:
    {
        returnValue = F("Obere Hammerstr.");
        break;
    }
    case 236216:
    {
        returnValue = F("Obere Hammerwiese");
        break;
    }
    case 236217:
    {
        returnValue = F("Obere Hangstr.");
        break;
    }
    case 236218:
    {
        returnValue = F("Obere Hardt");
        break;
    }
    case 236219:
    {
        returnValue = F("Obere Hardtstr.");
        break;
    }
    case 236220:
    {
        returnValue = F("Obere Hartensteiner Str.");
        break;
    }
    case 236221:
    {
        returnValue = F("Obere Hartstr.");
        break;
    }
    case 236222:
    {
        returnValue = F("Obere Harzstr.");
        break;
    }
    case 236223:
    {
        returnValue = F("Obere Haselmühlstr.");
        break;
    }
    case 236224:
    {
        returnValue = F("Obere Hasengasse");
        break;
    }
    case 236225:
    {
        returnValue = F("Obere Hasenhälde");
        break;
    }
    case 236226:
    {
        returnValue = F("Obere Haspelstr.");
        break;
    }
    case 236227:
    {
        returnValue = F("Obere Hatteläcker");
        break;
    }
    case 236228:
    {
        returnValue = F("Obere Hauptstr.");
        break;
    }
    case 236229:
    {
        returnValue = F("Obere Hausbergstr.");
        break;
    }
    case 236230:
    {
        returnValue = F("Obere Hausbreite");
        break;
    }
    case 236231:
    {
        returnValue = F("Obere Hausmatt");
        break;
    }
    case 236232:
    {
        returnValue = F("Obere Heckenstr.");
        break;
    }
    case 236233:
    {
        returnValue = F("Obere Heeg");
        break;
    }
    case 236234:
    {
        returnValue = F("Obere Heerbergstr.");
        break;
    }
    case 236235:
    {
        returnValue = F("Obere Heide");
        break;
    }
    case 236236:
    {
        returnValue = F("Obere Heidestr.");
        break;
    }
    case 236237:
    {
        returnValue = F("Obere Heidgasse");
        break;
    }
    case 236238:
    {
        returnValue = F("Obere Heiligenhöfe");
        break;
    }
    case 236239:
    {
        returnValue = F("Obere Helle");
        break;
    }
    case 236240:
    {
        returnValue = F("Obere Herbststr.");
        break;
    }
    case 236241:
    {
        returnValue = F("Obere Herl");
        break;
    }
    case 236242:
    {
        returnValue = F("Obere Herrenbergstr.");
        break;
    }
    case 236243:
    {
        returnValue = F("Obere Herrentalstr.");
        break;
    }
    case 236244:
    {
        returnValue = F("Obere Herrenwiese");
        break;
    }
    case 236245:
    {
        returnValue = F("Obere Herzentalstr.");
        break;
    }
    case 236246:
    {
        returnValue = F("Obere Heuernte");
        break;
    }
    case 236247:
    {
        returnValue = F("Obere Heulandsteige");
        break;
    }
    case 236248:
    {
        returnValue = F("Obere Hiese");
        break;
    }
    case 236249:
    {
        returnValue = F("Obere Hildenbrandstr.");
        break;
    }
    case 236250:
    {
        returnValue = F("Obere Hildener Str.");
        break;
    }
    case 236251:
    {
        returnValue = F("Obere Hilgenstock");
        break;
    }
    case 236252:
    {
        returnValue = F("Obere Hillegosser Str.");
        break;
    }
    case 236253:
    {
        returnValue = F("Obere Hilsengasse");
        break;
    }
    case 236254:
    {
        returnValue = F("Obere Hilsstr.");
        break;
    }
    case 236255:
    {
        returnValue = F("Obere Himmelsbergstr.");
        break;
    }
    case 236256:
    {
        returnValue = F("Obere Hindenburgstr.");
        break;
    }
    case 236257:
    {
        returnValue = F("Obere Hirschbitze");
        break;
    }
    case 236258:
    {
        returnValue = F("Obere Hirschgasse");
        break;
    }
    case 236259:
    {
        returnValue = F("Obere Hirschstr.");
        break;
    }
    case 236260:
    {
        returnValue = F("Obere Hirschäcker");
        break;
    }
    case 236261:
    {
        returnValue = F("Obere Hirtengasse");
        break;
    }
    case 236262:
    {
        returnValue = F("Obere Hirtenstr.");
        break;
    }
    case 236263:
    {
        returnValue = F("Obere Hochstr.");
        break;
    }
    case 236264:
    {
        returnValue = F("Obere Hofbreite");
        break;
    }
    case 236265:
    {
        returnValue = F("Obere Hofgasse");
        break;
    }
    case 236266:
    {
        returnValue = F("Obere Hofmark");
        break;
    }
    case 236267:
    {
        returnValue = F("Obere Hofstadt");
        break;
    }
    case 236268:
    {
        returnValue = F("Obere Hofstatt");
        break;
    }
    case 236269:
    {
        returnValue = F("Obere Hofstr.");
        break;
    }
    case 236270:
    {
        returnValue = F("Obere Hofstätte");
        break;
    }
    case 236271:
    {
        returnValue = F("Obere Hofstättgasse");
        break;
    }
    case 236272:
    {
        returnValue = F("Obere Hofstückstr.");
        break;
    }
    case 236273:
    {
        returnValue = F("Obere Hofwiese");
        break;
    }
    case 236274:
    {
        returnValue = F("Obere Hofäcker");
        break;
    }
    case 236275:
    {
        returnValue = F("Obere Hofäckerstr.");
        break;
    }
    case 236276:
    {
        returnValue = F("Obere Hohbergstr.");
        break;
    }
    case 236277:
    {
        returnValue = F("Obere Hohl");
        break;
    }
    case 236278:
    {
        returnValue = F("Obere Hohle");
        break;
    }
    case 236279:
    {
        returnValue = F("Obere Hohlgasse");
        break;
    }
    case 236280:
    {
        returnValue = F("Obere Hohlstr.");
        break;
    }
    case 236281:
    {
        returnValue = F("Obere Holdergasse");
        break;
    }
    case 236282:
    {
        returnValue = F("Obere Holderäcker");
        break;
    }
    case 236283:
    {
        returnValue = F("Obere Holtener Str.");
        break;
    }
    case 236284:
    {
        returnValue = F("Obere Holunderstaffel");
        break;
    }
    case 236285:
    {
        returnValue = F("Obere Holzbergstr.");
        break;
    }
    case 236286:
    {
        returnValue = F("Obere Holzgasse");
        break;
    }
    case 236287:
    {
        returnValue = F("Obere Holzmatt");
        break;
    }
    case 236288:
    {
        returnValue = F("Obere Holzstr.");
        break;
    }
    case 236289:
    {
        returnValue = F("Obere Honigleite");
        break;
    }
    case 236290:
    {
        returnValue = F("Obere Hornbergstr.");
        break;
    }
    case 236291:
    {
        returnValue = F("Obere Horst");
        break;
    }
    case 236292:
    {
        returnValue = F("Obere Hosbachstr.");
        break;
    }
    case 236293:
    {
        returnValue = F("Obere Hub");
        break;
    }
    case 236294:
    {
        returnValue = F("Obere Hubstr.");
        break;
    }
    case 236295:
    {
        returnValue = F("Obere Hummelke");
        break;
    }
    case 236296:
    {
        returnValue = F("Obere Hurststr.");
        break;
    }
    case 236297:
    {
        returnValue = F("Obere Husemannstr.");
        break;
    }
    case 236298:
    {
        returnValue = F("Obere Hut");
        break;
    }
    case 236299:
    {
        returnValue = F("Obere Hähnen");
        break;
    }
    case 236300:
    {
        returnValue = F("Obere Häldenstr.");
        break;
    }
    case 236301:
    {
        returnValue = F("Obere Häuser");
        break;
    }
    case 236302:
    {
        returnValue = F("Obere Höfe");
        break;
    }
    case 236303:
    {
        returnValue = F("Obere Höhe");
        break;
    }
    case 236304:
    {
        returnValue = F("Obere Höhle");
        break;
    }
    case 236305:
    {
        returnValue = F("Obere Höllengasse");
        break;
    }
    case 236306:
    {
        returnValue = F("Obere Höllgasse");
        break;
    }
    case 236307:
    {
        returnValue = F("Obere Hörbach");
        break;
    }
    case 236308:
    {
        returnValue = F("Obere Hüttenwiese");
        break;
    }
    case 236309:
    {
        returnValue = F("Obere Ibachgasse");
        break;
    }
    case 236310:
    {
        returnValue = F("Obere Illbach");
        break;
    }
    case 236311:
    {
        returnValue = F("Obere Immengasse");
        break;
    }
    case 236312:
    {
        returnValue = F("Obere Industrie Str.");
        break;
    }
    case 236313:
    {
        returnValue = F("Obere Industriestr.");
        break;
    }
    case 236314:
    {
        returnValue = F("Obere Inntal Str.");
        break;
    }
    case 236315:
    {
        returnValue = F("Obere Inntalstr.");
        break;
    }
    case 236316:
    {
        returnValue = F("Obere Isenbergstr.");
        break;
    }
    case 236317:
    {
        returnValue = F("Obere Jahnstr.");
        break;
    }
    case 236318:
    {
        returnValue = F("Obere Jakobermauer");
        break;
    }
    case 236319:
    {
        returnValue = F("Obere Jakobstr.");
        break;
    }
    case 236320:
    {
        returnValue = F("Obere Jasminstaffel");
        break;
    }
    case 236321:
    {
        returnValue = F("Obere Johannisbergstr.");
        break;
    }
    case 236322:
    {
        returnValue = F("Obere Johannisgasse");
        break;
    }
    case 236323:
    {
        returnValue = F("Obere Johannisstr.");
        break;
    }
    case 236324:
    {
        returnValue = F("Obere Johannitergasse");
        break;
    }
    case 236325:
    {
        returnValue = F("Obere Jägerstr.");
        break;
    }
    case 236326:
    {
        returnValue = F("Obere Kaiserstr.");
        break;
    }
    case 236327:
    {
        returnValue = F("Obere Kaiserswerther Str.");
        break;
    }
    case 236328:
    {
        returnValue = F("Obere Kampstr.");
        break;
    }
    case 236329:
    {
        returnValue = F("Obere Kanalstr.");
        break;
    }
    case 236330:
    {
        returnValue = F("Obere Kapellenäcker");
        break;
    }
    case 236331:
    {
        returnValue = F("Obere Kapelläcker");
        break;
    }
    case 236332:
    {
        returnValue = F("Obere Kaplaneigasse");
        break;
    }
    case 236333:
    {
        returnValue = F("Obere Kappel");
        break;
    }
    case 236334:
    {
        returnValue = F("Obere Karlsstr.");
        break;
    }
    case 236335:
    {
        returnValue = F("Obere Karlstr.");
        break;
    }
    case 236336:
    {
        returnValue = F("Obere Karpfenhalde");
        break;
    }
    case 236337:
    {
        returnValue = F("Obere Karspüle");
        break;
    }
    case 236338:
    {
        returnValue = F("Obere Kasernenstr.");
        break;
    }
    case 236339:
    {
        returnValue = F("Obere Kaserngasse");
        break;
    }
    case 236340:
    {
        returnValue = F("Obere Kasparstr.");
        break;
    }
    case 236341:
    {
        returnValue = F("Obere Kasseler Str.");
        break;
    }
    case 236342:
    {
        returnValue = F("Obere Kaulwiese");
        break;
    }
    case 236343:
    {
        returnValue = F("Obere Kehlstr.");
        break;
    }
    case 236344:
    {
        returnValue = F("Obere Kehläcker");
        break;
    }
    case 236345:
    {
        returnValue = F("Obere Kellergasse");
        break;
    }
    case 236346:
    {
        returnValue = F("Obere Kellerstr.");
        break;
    }
    case 236347:
    {
        returnValue = F("Obere Keltergasse");
        break;
    }
    case 236348:
    {
        returnValue = F("Obere Kelterstr.");
        break;
    }
    case 236349:
    {
        returnValue = F("Obere Kerflehde");
        break;
    }
    case 236350:
    {
        returnValue = F("Obere Kernberghorizontale");
        break;
    }
    case 236351:
    {
        returnValue = F("Obere Kernbergstr.");
        break;
    }
    case 236352:
    {
        returnValue = F("Obere Kieselbergstr.");
        break;
    }
    case 236353:
    {
        returnValue = F("Obere Kippstr.");
        break;
    }
    case 236354:
    {
        returnValue = F("Obere Kirchbergstr.");
        break;
    }
    case 236355:
    {
        returnValue = F("Obere Kirchenäcker");
        break;
    }
    case 236356:
    {
        returnValue = F("Obere Kirchgasse");
        break;
    }
    case 236357:
    {
        returnValue = F("Obere Kirchhaldenstr.");
        break;
    }
    case 236358:
    {
        returnValue = F("Obere Kirchrainstr.");
        break;
    }
    case 236359:
    {
        returnValue = F("Obere Kirchstr.");
        break;
    }
    case 236360:
    {
        returnValue = F("Obere Kirchweg");
        break;
    }
    case 236361:
    {
        returnValue = F("Obere Kirschgartenstr.");
        break;
    }
    case 236362:
    {
        returnValue = F("Obere Klappeiche");
        break;
    }
    case 236363:
    {
        returnValue = F("Obere Klebstr.");
        break;
    }
    case 236364:
    {
        returnValue = F("Obere Kleestr.");
        break;
    }
    case 236365:
    {
        returnValue = F("Obere Klepbergstr.");
        break;
    }
    case 236366:
    {
        returnValue = F("Obere Klepp");
        break;
    }
    case 236367:
    {
        returnValue = F("Obere Klimbach");
        break;
    }
    case 236368:
    {
        returnValue = F("Obere Klinge");
        break;
    }
    case 236369:
    {
        returnValue = F("Obere Klingen");
        break;
    }
    case 236370:
    {
        returnValue = F("Obere Klingengasse");
        break;
    }
    case 236371:
    {
        returnValue = F("Obere Klinggasse");
        break;
    }
    case 236372:
    {
        returnValue = F("Obere Klostergasse");
        break;
    }
    case 236373:
    {
        returnValue = F("Obere Klosterstr.");
        break;
    }
    case 236374:
    {
        returnValue = F("Obere Knappel");
        break;
    }
    case 236375:
    {
        returnValue = F("Obere Knorrenbergstr.");
        break;
    }
    case 236376:
    {
        returnValue = F("Obere Kochs");
        break;
    }
    case 236377:
    {
        returnValue = F("Obere Kohlenstr.");
        break;
    }
    case 236378:
    {
        returnValue = F("Obere Kolchstr.");
        break;
    }
    case 236379:
    {
        returnValue = F("Obere Kond");
        break;
    }
    case 236380:
    {
        returnValue = F("Obere Koppenhalde");
        break;
    }
    case 236381:
    {
        returnValue = F("Obere Kordel");
        break;
    }
    case 236382:
    {
        returnValue = F("Obere Krautgasse");
        break;
    }
    case 236383:
    {
        returnValue = F("Obere Krebsbachstr.");
        break;
    }
    case 236384:
    {
        returnValue = F("Obere Kreienbrede");
        break;
    }
    case 236385:
    {
        returnValue = F("Obere Kreisstr.");
        break;
    }
    case 236386:
    {
        returnValue = F("Obere Kreppe");
        break;
    }
    case 236387:
    {
        returnValue = F("Obere Kreuzbreite");
        break;
    }
    case 236388:
    {
        returnValue = F("Obere Kreuzen");
        break;
    }
    case 236389:
    {
        returnValue = F("Obere Kreuzgasse");
        break;
    }
    case 236390:
    {
        returnValue = F("Obere Kreuzstr.");
        break;
    }
    case 236391:
    {
        returnValue = F("Obere Kreuzäckerstr.");
        break;
    }
    case 236392:
    {
        returnValue = F("Obere Krodostr.");
        break;
    }
    case 236393:
    {
        returnValue = F("Obere Krämersgasse");
        break;
    }
    case 236394:
    {
        returnValue = F("Obere Krümme");
        break;
    }
    case 236395:
    {
        returnValue = F("Obere Kuhtrift");
        break;
    }
    case 236396:
    {
        returnValue = F("Obere Kupfer");
        break;
    }
    case 236397:
    {
        returnValue = F("Obere Kupferbergstr.");
        break;
    }
    case 236398:
    {
        returnValue = F("Obere Kurau");
        break;
    }
    case 236399:
    {
        returnValue = F("Obere Kurhausstr.");
        break;
    }
    case 236400:
    {
        returnValue = F("Obere Käppelenblah");
        break;
    }
    case 236401:
    {
        returnValue = F("Obere Königsstr.");
        break;
    }
    case 236402:
    {
        returnValue = F("Obere Königstr.");
        break;
    }
    case 236403:
    {
        returnValue = F("Obere Körschmühle");
        break;
    }
    case 236404:
    {
        returnValue = F("Obere Kürz");
        break;
    }
    case 236405:
    {
        returnValue = F("Obere Laak");
        break;
    }
    case 236406:
    {
        returnValue = F("Obere Labyrinthstr.");
        break;
    }
    case 236407:
    {
        returnValue = F("Obere Lache");
        break;
    }
    case 236408:
    {
        returnValue = F("Obere Lachen");
        break;
    }
    case 236409:
    {
        returnValue = F("Obere Lachenweg");
        break;
    }
    case 236410:
    {
        returnValue = F("Obere Lagerstr.");
        break;
    }
    case 236411:
    {
        returnValue = F("Obere Lahnstr.");
        break;
    }
    case 236412:
    {
        returnValue = F("Obere Landstr.");
        break;
    }
    case 236413:
    {
        returnValue = F("Obere Landstuhlstr.");
        break;
    }
    case 236414:
    {
        returnValue = F("Obere Landwehr");
        break;
    }
    case 236415:
    {
        returnValue = F("Obere Lange Schläge");
        break;
    }
    case 236416:
    {
        returnValue = F("Obere Langgasse");
        break;
    }
    case 236417:
    {
        returnValue = F("Obere Langmatten");
        break;
    }
    case 236418:
    {
        returnValue = F("Obere Laube");
        break;
    }
    case 236419:
    {
        returnValue = F("Obere Lauerfahrt");
        break;
    }
    case 236420:
    {
        returnValue = F("Obere Laugasse");
        break;
    }
    case 236421:
    {
        returnValue = F("Obere Lauterstr.");
        break;
    }
    case 236422:
    {
        returnValue = F("Obere Leberbachstr.");
        break;
    }
    case 236423:
    {
        returnValue = F("Obere Leberklinge");
        break;
    }
    case 236424:
    {
        returnValue = F("Obere Ledergasse");
        break;
    }
    case 236425:
    {
        returnValue = F("Obere Lehen");
        break;
    }
    case 236426:
    {
        returnValue = F("Obere Lehhalde");
        break;
    }
    case 236427:
    {
        returnValue = F("Obere Lehmbergstr.");
        break;
    }
    case 236428:
    {
        returnValue = F("Obere Lehmbreite");
        break;
    }
    case 236429:
    {
        returnValue = F("Obere Lehr");
        break;
    }
    case 236430:
    {
        returnValue = F("Obere Lehrstr.");
        break;
    }
    case 236431:
    {
        returnValue = F("Obere Leite");
        break;
    }
    case 236432:
    {
        returnValue = F("Obere Leitenbergstr.");
        break;
    }
    case 236433:
    {
        returnValue = F("Obere Leitenstr.");
        break;
    }
    case 236434:
    {
        returnValue = F("Obere Lenzstr.");
        break;
    }
    case 236435:
    {
        returnValue = F("Obere Leopoldstr.");
        break;
    }
    case 236436:
    {
        returnValue = F("Obere Lerch");
        break;
    }
    case 236437:
    {
        returnValue = F("Obere Lettenbergstr.");
        break;
    }
    case 236438:
    {
        returnValue = F("Obere Lichtenplatzer Str.");
        break;
    }
    case 236439:
    {
        returnValue = F("Obere Liebach");
        break;
    }
    case 236440:
    {
        returnValue = F("Obere Liebenau");
        break;
    }
    case 236441:
    {
        returnValue = F("Obere Liebfrauenstr.");
        break;
    }
    case 236442:
    {
        returnValue = F("Obere Linde");
        break;
    }
    case 236443:
    {
        returnValue = F("Obere Linden");
        break;
    }
    case 236444:
    {
        returnValue = F("Obere Lindenackerstr.");
        break;
    }
    case 236445:
    {
        returnValue = F("Obere Lindenbergstr.");
        break;
    }
    case 236446:
    {
        returnValue = F("Obere Lindenbreite");
        break;
    }
    case 236447:
    {
        returnValue = F("Obere Lindenstr.");
        break;
    }
    case 236448:
    {
        returnValue = F("Obere Linie");
        break;
    }
    case 236449:
    {
        returnValue = F("Obere Linnert");
        break;
    }
    case 236450:
    {
        returnValue = F("Obere Linsenwiese");
        break;
    }
    case 236451:
    {
        returnValue = F("Obere Lochmatt");
        break;
    }
    case 236452:
    {
        returnValue = F("Obere Loh");
        break;
    }
    case 236453:
    {
        returnValue = F("Obere Lohe");
        break;
    }
    case 236454:
    {
        returnValue = F("Obere Lohfeldstr.");
        break;
    }
    case 236455:
    {
        returnValue = F("Obere Losterbach");
        break;
    }
    case 236456:
    {
        returnValue = F("Obere Läng");
        break;
    }
    case 236457:
    {
        returnValue = F("Obere Länge");
        break;
    }
    case 236458:
    {
        returnValue = F("Obere Löhleinstr.");
        break;
    }
    case 236459:
    {
        returnValue = F("Obere Maden");
        break;
    }
    case 236460:
    {
        returnValue = F("Obere Mahlgasse");
        break;
    }
    case 236461:
    {
        returnValue = F("Obere Maierhofstr.");
        break;
    }
    case 236462:
    {
        returnValue = F("Obere Maingasse");
        break;
    }
    case 236463:
    {
        returnValue = F("Obere Mainleite");
        break;
    }
    case 236464:
    {
        returnValue = F("Obere Mandaustr.");
        break;
    }
    case 236465:
    {
        returnValue = F("Obere Mangfallstr.");
        break;
    }
    case 236466:
    {
        returnValue = F("Obere Manggasse");
        break;
    }
    case 236467:
    {
        returnValue = F("Obere Manngartenstr.");
        break;
    }
    case 236468:
    {
        returnValue = F("Obere Mark");
        break;
    }
    case 236469:
    {
        returnValue = F("Obere Markenhalde");
        break;
    }
    case 236470:
    {
        returnValue = F("Obere Markneukirchner Str.");
        break;
    }
    case 236471:
    {
        returnValue = F("Obere Marktgasse");
        break;
    }
    case 236472:
    {
        returnValue = F("Obere Marktstaße");
        break;
    }
    case 236473:
    {
        returnValue = F("Obere Marktstr.");
        break;
    }
    case 236474:
    {
        returnValue = F("Obere Martinistr.");
        break;
    }
    case 236475:
    {
        returnValue = F("Obere Martinsthaler Str.");
        break;
    }
    case 236476:
    {
        returnValue = F("Obere Masch");
        break;
    }
    case 236477:
    {
        returnValue = F("Obere Matt");
        break;
    }
    case 236478:
    {
        returnValue = F("Obere Matten");
        break;
    }
    case 236479:
    {
        returnValue = F("Obere Mauer");
        break;
    }
    case 236480:
    {
        returnValue = F("Obere Mauergasse");
        break;
    }
    case 236481:
    {
        returnValue = F("Obere Mauerstr.");
        break;
    }
    case 236482:
    {
        returnValue = F("Obere Meerbach");
        break;
    }
    case 236483:
    {
        returnValue = F("Obere Mehlgasse");
        break;
    }
    case 236484:
    {
        returnValue = F("Obere Meierbündt");
        break;
    }
    case 236485:
    {
        returnValue = F("Obere Meischede");
        break;
    }
    case 236486:
    {
        returnValue = F("Obere Meitzenbach");
        break;
    }
    case 236487:
    {
        returnValue = F("Obere Mentergasse");
        break;
    }
    case 236488:
    {
        returnValue = F("Obere Messenklinge");
        break;
    }
    case 236489:
    {
        returnValue = F("Obere Mettinger Wiesen");
        break;
    }
    case 236490:
    {
        returnValue = F("Obere Metzgerstr.");
        break;
    }
    case 236491:
    {
        returnValue = F("Obere Milbe");
        break;
    }
    case 236492:
    {
        returnValue = F("Obere Milchstr.");
        break;
    }
    case 236493:
    {
        returnValue = F("Obere Mittelstr.");
        break;
    }
    case 236494:
    {
        returnValue = F("Obere Moltkestr.");
        break;
    }
    case 236495:
    {
        returnValue = F("Obere Moosschwaigestr.");
        break;
    }
    case 236496:
    {
        returnValue = F("Obere Morgen");
        break;
    }
    case 236497:
    {
        returnValue = F("Obere Motsch");
        break;
    }
    case 236498:
    {
        returnValue = F("Obere Motschen");
        break;
    }
    case 236499:
    {
        returnValue = F("Obere Muhl");
        break;
    }
    case 236500:
    {
        returnValue = F("Obere Muldenstr.");
        break;
    }
    case 236501:
    {
        returnValue = F("Obere Mäurichstr.");
        break;
    }
    case 236502:
    {
        returnValue = F("Obere Mölkenkoppel");
        break;
    }
    case 236503:
    {
        returnValue = F("Obere Mönchtaler Gasse");
        break;
    }
    case 236504:
    {
        returnValue = F("Obere Mühlbachgasse");
        break;
    }
    case 236505:
    {
        returnValue = F("Obere Mühlbachstr.");
        break;
    }
    case 236506:
    {
        returnValue = F("Obere Mühlbergstr.");
        break;
    }
    case 236507:
    {
        returnValue = F("Obere Mühlbrücke");
        break;
    }
    case 236508:
    {
        returnValue = F("Obere Mühle");
        break;
    }
    case 236509:
    {
        returnValue = F("Obere Mühlen Str.");
        break;
    }
    case 236510:
    {
        returnValue = F("Obere Mühlengasse");
        break;
    }
    case 236511:
    {
        returnValue = F("Obere Mühlenstr.");
        break;
    }
    case 236512:
    {
        returnValue = F("Obere Mühlestr.");
        break;
    }
    case 236513:
    {
        returnValue = F("Obere Mühlewiesen");
        break;
    }
    case 236514:
    {
        returnValue = F("Obere Mühlgasse");
        break;
    }
    case 236515:
    {
        returnValue = F("Obere Mühlhelle");
        break;
    }
    case 236516:
    {
        returnValue = F("Obere Mühlleite");
        break;
    }
    case 236517:
    {
        returnValue = F("Obere Mühlseite");
        break;
    }
    case 236518:
    {
        returnValue = F("Obere Mühlstadt");
        break;
    }
    case 236519:
    {
        returnValue = F("Obere Mühlstr.");
        break;
    }
    case 236520:
    {
        returnValue = F("Obere Mühlwiese");
        break;
    }
    case 236521:
    {
        returnValue = F("Obere Müllerstr.");
        break;
    }
    case 236522:
    {
        returnValue = F("Obere Münsterstr.");
        break;
    }
    case 236523:
    {
        returnValue = F("Obere Müssing");
        break;
    }
    case 236524:
    {
        returnValue = F("Obere Nabburger Str.");
        break;
    }
    case 236525:
    {
        returnValue = F("Obere Nachtweide");
        break;
    }
    case 236526:
    {
        returnValue = F("Obere Neckarstr.");
        break;
    }
    case 236527:
    {
        returnValue = F("Obere Neue Gasse");
        break;
    }
    case 236528:
    {
        returnValue = F("Obere Neue Str.");
        break;
    }
    case 236529:
    {
        returnValue = F("Obere Neugasse");
        break;
    }
    case 236530:
    {
        returnValue = F("Obere Neustadt");
        break;
    }
    case 236531:
    {
        returnValue = F("Obere Neustr.");
        break;
    }
    case 236532:
    {
        returnValue = F("Obere Neuwiesen");
        break;
    }
    case 236533:
    {
        returnValue = F("Obere Nordstr.");
        break;
    }
    case 236534:
    {
        returnValue = F("Obere Nußbreite");
        break;
    }
    case 236535:
    {
        returnValue = F("Obere Nußfeldstr.");
        break;
    }
    case 236536:
    {
        returnValue = F("Obere Oberaustr.");
        break;
    }
    case 236537:
    {
        returnValue = F("Obere Ochsenkopfstr.");
        break;
    }
    case 236538:
    {
        returnValue = F("Obere Oese");
        break;
    }
    case 236539:
    {
        returnValue = F("Obere Ohlingerstr.");
        break;
    }
    case 236540:
    {
        returnValue = F("Obere Ortsstr.");
        break;
    }
    case 236541:
    {
        returnValue = F("Obere Ostenbachstr.");
        break;
    }
    case 236542:
    {
        returnValue = F("Obere Osterfeldstr.");
        break;
    }
    case 236543:
    {
        returnValue = F("Obere Ostlandstr.");
        break;
    }
    case 236544:
    {
        returnValue = F("Obere Panoramastr.");
        break;
    }
    case 236545:
    {
        returnValue = F("Obere Parkallee");
        break;
    }
    case 236546:
    {
        returnValue = F("Obere Parkstr.");
        break;
    }
    case 236547:
    {
        returnValue = F("Obere Patron");
        break;
    }
    case 236548:
    {
        returnValue = F("Obere Paulsdorfer Str.");
        break;
    }
    case 236549:
    {
        returnValue = F("Obere Paulusstr.");
        break;
    }
    case 236550:
    {
        returnValue = F("Obere Pekingstr.");
        break;
    }
    case 236551:
    {
        returnValue = F("Obere Penzelgasse");
        break;
    }
    case 236552:
    {
        returnValue = F("Obere Petersbach");
        break;
    }
    case 236553:
    {
        returnValue = F("Obere Petersbergstr.");
        break;
    }
    case 236554:
    {
        returnValue = F("Obere Pfaffensteigstr.");
        break;
    }
    case 236555:
    {
        returnValue = F("Obere Pfalzgrafstr.");
        break;
    }
    case 236556:
    {
        returnValue = F("Obere Pfannenstielgasse");
        break;
    }
    case 236557:
    {
        returnValue = F("Obere Pfannstr.");
        break;
    }
    case 236558:
    {
        returnValue = F("Obere Pfarrgasse");
        break;
    }
    case 236559:
    {
        returnValue = F("Obere Pfarrstr.");
        break;
    }
    case 236560:
    {
        returnValue = F("Obere Pfeifferstr.");
        break;
    }
    case 236561:
    {
        returnValue = F("Obere Pfingstweidstr.");
        break;
    }
    case 236562:
    {
        returnValue = F("Obere Pforte");
        break;
    }
    case 236563:
    {
        returnValue = F("Obere Pfortenstr.");
        break;
    }
    case 236564:
    {
        returnValue = F("Obere Pitzstr.");
        break;
    }
    case 236565:
    {
        returnValue = F("Obere Platzgasse");
        break;
    }
    case 236566:
    {
        returnValue = F("Obere Pleitenstr.");
        break;
    }
    case 236567:
    {
        returnValue = F("Obere Plötzgasse");
        break;
    }
    case 236568:
    {
        returnValue = F("Obere Pointstr.");
        break;
    }
    case 236569:
    {
        returnValue = F("Obere Prankelsteige");
        break;
    }
    case 236570:
    {
        returnValue = F("Obere Quergasse");
        break;
    }
    case 236571:
    {
        returnValue = F("Obere Querstr.");
        break;
    }
    case 236572:
    {
        returnValue = F("Obere Quiere");
        break;
    }
    case 236573:
    {
        returnValue = F("Obere Raingasse");
        break;
    }
    case 236574:
    {
        returnValue = F("Obere Rainstr.");
        break;
    }
    case 236575:
    {
        returnValue = F("Obere Rangenäcker");
        break;
    }
    case 236576:
    {
        returnValue = F("Obere Rappengasse");
        break;
    }
    case 236577:
    {
        returnValue = F("Obere Rappenhalde");
        break;
    }
    case 236578:
    {
        returnValue = F("Obere Rathausgasse");
        break;
    }
    case 236579:
    {
        returnValue = F("Obere Rauhe Egge");
        break;
    }
    case 236580:
    {
        returnValue = F("Obere Rauhmühle");
        break;
    }
    case 236581:
    {
        returnValue = F("Obere Realschulstr.");
        break;
    }
    case 236582:
    {
        returnValue = F("Obere Rebbergstr.");
        break;
    }
    case 236583:
    {
        returnValue = F("Obere Rebhalde");
        break;
    }
    case 236584:
    {
        returnValue = F("Obere Redersgasse");
        break;
    }
    case 236585:
    {
        returnValue = F("Obere Regenstr.");
        break;
    }
    case 236586:
    {
        returnValue = F("Obere Rehstr.");
        break;
    }
    case 236587:
    {
        returnValue = F("Obere Reihe");
        break;
    }
    case 236588:
    {
        returnValue = F("Obere Reismühle");
        break;
    }
    case 236589:
    {
        returnValue = F("Obere Reiterbrücke");
        break;
    }
    case 236590:
    {
        returnValue = F("Obere Reithausstr.");
        break;
    }
    case 236591:
    {
        returnValue = F("Obere Remscheider Str.");
        break;
    }
    case 236592:
    {
        returnValue = F("Obere Rettenbachstr.");
        break;
    }
    case 236593:
    {
        returnValue = F("Obere Reuschenbach");
        break;
    }
    case 236594:
    {
        returnValue = F("Obere Reute");
        break;
    }
    case 236595:
    {
        returnValue = F("Obere Reuth");
        break;
    }
    case 236596:
    {
        returnValue = F("Obere Rheinau");
        break;
    }
    case 236597:
    {
        returnValue = F("Obere Rheingasse");
        break;
    }
    case 236598:
    {
        returnValue = F("Obere Rheinstr.");
        break;
    }
    case 236599:
    {
        returnValue = F("Obere Richthöll");
        break;
    }
    case 236600:
    {
        returnValue = F("Obere Richtstatt");
        break;
    }
    case 236601:
    {
        returnValue = F("Obere Riedl");
        break;
    }
    case 236602:
    {
        returnValue = F("Obere Riedstr.");
        break;
    }
    case 236603:
    {
        returnValue = F("Obere Riedwiesen");
        break;
    }
    case 236604:
    {
        returnValue = F("Obere Riedwiesenstr.");
        break;
    }
    case 236605:
    {
        returnValue = F("Obere Riehenstr.");
        break;
    }
    case 236606:
    {
        returnValue = F("Obere Rieselstr.");
        break;
    }
    case 236607:
    {
        returnValue = F("Obere Riesen");
        break;
    }
    case 236608:
    {
        returnValue = F("Obere Ringstr.");
        break;
    }
    case 236609:
    {
        returnValue = F("Obere Rinne");
        break;
    }
    case 236610:
    {
        returnValue = F("Obere Rischbachstr.");
        break;
    }
    case 236611:
    {
        returnValue = F("Obere Ritsch");
        break;
    }
    case 236612:
    {
        returnValue = F("Obere Rittersheck");
        break;
    }
    case 236613:
    {
        returnValue = F("Obere Ritterstr.");
        break;
    }
    case 236614:
    {
        returnValue = F("Obere Rodstr.");
        break;
    }
    case 236615:
    {
        returnValue = F("Obere Roggenlehen");
        break;
    }
    case 236616:
    {
        returnValue = F("Obere Rohrschmidsmühle");
        break;
    }
    case 236617:
    {
        returnValue = F("Obere Rolandstr.");
        break;
    }
    case 236618:
    {
        returnValue = F("Obere Rombach");
        break;
    }
    case 236619:
    {
        returnValue = F("Obere Roonstr.");
        break;
    }
    case 236620:
    {
        returnValue = F("Obere Rosmaringasse");
        break;
    }
    case 236621:
    {
        returnValue = F("Obere Rossbachgasse");
        break;
    }
    case 236622:
    {
        returnValue = F("Obere Rot");
        break;
    }
    case 236623:
    {
        returnValue = F("Obere Rote Hardt");
        break;
    }
    case 236624:
    {
        returnValue = F("Obere Rotenbergerstr.");
        break;
    }
    case 236625:
    {
        returnValue = F("Obere Rottannensteige");
        break;
    }
    case 236626:
    {
        returnValue = F("Obere Rottstr.");
        break;
    }
    case 236627:
    {
        returnValue = F("Obere Roßstaig");
        break;
    }
    case 236628:
    {
        returnValue = F("Obere Rungstockstr.");
        break;
    }
    case 236629:
    {
        returnValue = F("Obere Rutenbeck");
        break;
    }
    case 236630:
    {
        returnValue = F("Obere Ruwererstr.");
        break;
    }
    case 236631:
    {
        returnValue = F("Obere Rödelbergstr.");
        break;
    }
    case 236632:
    {
        returnValue = F("Obere Rödt");
        break;
    }
    case 236633:
    {
        returnValue = F("Obere Röhrgasse");
        break;
    }
    case 236634:
    {
        returnValue = F("Obere Römerhofstr.");
        break;
    }
    case 236635:
    {
        returnValue = F("Obere Römerstr.");
        break;
    }
    case 236636:
    {
        returnValue = F("Obere Rötelstr.");
        break;
    }
    case 236637:
    {
        returnValue = F("Obere Röth");
        break;
    }
    case 236638:
    {
        returnValue = F("Obere Röthen");
        break;
    }
    case 236639:
    {
        returnValue = F("Obere Rüttepflugweg");
        break;
    }
    case 236640:
    {
        returnValue = F("Obere Rützelstr.");
        break;
    }
    case 236641:
    {
        returnValue = F("Obere Saarlandstr.");
        break;
    }
    case 236642:
    {
        returnValue = F("Obere Sackgasse");
        break;
    }
    case 236643:
    {
        returnValue = F("Obere Sackstr.");
        break;
    }
    case 236644:
    {
        returnValue = F("Obere Sage");
        break;
    }
    case 236645:
    {
        returnValue = F("Obere Saline");
        break;
    }
    case 236646:
    {
        returnValue = F("Obere Salvatorgasse");
        break;
    }
    case 236647:
    {
        returnValue = F("Obere Salzastr.");
        break;
    }
    case 236648:
    {
        returnValue = F("Obere Sandbreite");
        break;
    }
    case 236649:
    {
        returnValue = F("Obere Sandstr.");
        break;
    }
    case 236650:
    {
        returnValue = F("Obere Sankt-Leonhard-Str.");
        break;
    }
    case 236651:
    {
        returnValue = F("Obere Sattelecke");
        break;
    }
    case 236652:
    {
        returnValue = F("Obere Schacht");
        break;
    }
    case 236653:
    {
        returnValue = F("Obere Schanze");
        break;
    }
    case 236654:
    {
        returnValue = F("Obere Schanzenstr.");
        break;
    }
    case 236655:
    {
        returnValue = F("Obere Schanzstr.");
        break;
    }
    case 236656:
    {
        returnValue = F("Obere Scharr");
        break;
    }
    case 236657:
    {
        returnValue = F("Obere Scheidquelle");
        break;
    }
    case 236658:
    {
        returnValue = F("Obere Scheidstr.");
        break;
    }
    case 236659:
    {
        returnValue = F("Obere Scheiterburgsteige");
        break;
    }
    case 236660:
    {
        returnValue = F("Obere Scheunenberggasse");
        break;
    }
    case 236661:
    {
        returnValue = F("Obere Schied");
        break;
    }
    case 236662:
    {
        returnValue = F("Obere Schieferäcker");
        break;
    }
    case 236663:
    {
        returnValue = F("Obere Schießmauerstr.");
        break;
    }
    case 236664:
    {
        returnValue = F("Obere Schildstr.");
        break;
    }
    case 236665:
    {
        returnValue = F("Obere Schildwache");
        break;
    }
    case 236666:
    {
        returnValue = F("Obere Schillerstr.");
        break;
    }
    case 236667:
    {
        returnValue = F("Obere Schleich");
        break;
    }
    case 236668:
    {
        returnValue = F("Obere Schlom");
        break;
    }
    case 236669:
    {
        returnValue = F("Obere Schlosshalde");
        break;
    }
    case 236670:
    {
        returnValue = F("Obere Schlosssteige");
        break;
    }
    case 236671:
    {
        returnValue = F("Obere Schloßgartenstr.");
        break;
    }
    case 236672:
    {
        returnValue = F("Obere Schloßgasse");
        break;
    }
    case 236673:
    {
        returnValue = F("Obere Schloßleite");
        break;
    }
    case 236674:
    {
        returnValue = F("Obere Schloßstr.");
        break;
    }
    case 236675:
    {
        returnValue = F("Obere Schloßwiesenstr.");
        break;
    }
    case 236676:
    {
        returnValue = F("Obere Schlänke");
        break;
    }
    case 236677:
    {
        returnValue = F("Obere Schmiedegasse");
        break;
    }
    case 236678:
    {
        returnValue = F("Obere Schmiedgasse");
        break;
    }
    case 236679:
    {
        returnValue = F("Obere Schmiedstr.");
        break;
    }
    case 236680:
    {
        returnValue = F("Obere Schmierofenrichtstatt");
        break;
    }
    case 236681:
    {
        returnValue = F("Obere Schneckenbergstr.");
        break;
    }
    case 236682:
    {
        returnValue = F("Obere Schneeburgstr.");
        break;
    }
    case 236683:
    {
        returnValue = F("Obere Schneise");
        break;
    }
    case 236684:
    {
        returnValue = F("Obere Schnurstr.");
        break;
    }
    case 236685:
    {
        returnValue = F("Obere Schorteile");
        break;
    }
    case 236686:
    {
        returnValue = F("Obere Schraplauer Str.");
        break;
    }
    case 236687:
    {
        returnValue = F("Obere Schreberstr.");
        break;
    }
    case 236688:
    {
        returnValue = F("Obere Schubertstr.");
        break;
    }
    case 236689:
    {
        returnValue = F("Obere Schulgartenstr.");
        break;
    }
    case 236690:
    {
        returnValue = F("Obere Schulgasse");
        break;
    }
    case 236691:
    {
        returnValue = F("Obere Schulstr.");
        break;
    }
    case 236692:
    {
        returnValue = F("Obere Schurnstr.");
        break;
    }
    case 236693:
    {
        returnValue = F("Obere Schußbach");
        break;
    }
    case 236694:
    {
        returnValue = F("Obere Schweisfurth");
        break;
    }
    case 236695:
    {
        returnValue = F("Obere Schwemmbach");
        break;
    }
    case 236696:
    {
        returnValue = F("Obere Schwemmbichlstr.");
        break;
    }
    case 236697:
    {
        returnValue = F("Obere Schwemme");
        break;
    }
    case 236698:
    {
        returnValue = F("Obere Schäfergasse");
        break;
    }
    case 236699:
    {
        returnValue = F("Obere Schönauer");
        break;
    }
    case 236700:
    {
        returnValue = F("Obere Schöne Aussicht");
        break;
    }
    case 236701:
    {
        returnValue = F("Obere Schügelestr.");
        break;
    }
    case 236702:
    {
        returnValue = F("Obere Schützenstr.");
        break;
    }
    case 236703:
    {
        returnValue = F("Obere Seefeldstr.");
        break;
    }
    case 236704:
    {
        returnValue = F("Obere Seegasse");
        break;
    }
    case 236705:
    {
        returnValue = F("Obere Seehalde");
        break;
    }
    case 236706:
    {
        returnValue = F("Obere Seelach");
        break;
    }
    case 236707:
    {
        returnValue = F("Obere Seeleite");
        break;
    }
    case 236708:
    {
        returnValue = F("Obere Seelgasse");
        break;
    }
    case 236709:
    {
        returnValue = F("Obere Seestr.");
        break;
    }
    case 236710:
    {
        returnValue = F("Obere Seewiesen");
        break;
    }
    case 236711:
    {
        returnValue = F("Obere Sehlhofstr.");
        break;
    }
    case 236712:
    {
        returnValue = F("Obere Seilerbahn");
        break;
    }
    case 236713:
    {
        returnValue = F("Obere Seiten");
        break;
    }
    case 236714:
    {
        returnValue = F("Obere Seitenstr.");
        break;
    }
    case 236715:
    {
        returnValue = F("Obere Semel");
        break;
    }
    case 236716:
    {
        returnValue = F("Obere Sendlbachstr.");
        break;
    }
    case 236717:
    {
        returnValue = F("Obere Senke");
        break;
    }
    case 236718:
    {
        returnValue = F("Obere Setz");
        break;
    }
    case 236719:
    {
        returnValue = F("Obere Setze");
        break;
    }
    case 236720:
    {
        returnValue = F("Obere Siedlerstr.");
        break;
    }
    case 236721:
    {
        returnValue = F("Obere Siedlung");
        break;
    }
    case 236722:
    {
        returnValue = F("Obere Siedlungsstr.");
        break;
    }
    case 236723:
    {
        returnValue = F("Obere Siegfriedstr.");
        break;
    }
    case 236724:
    {
        returnValue = F("Obere Silberbergstr.");
        break;
    }
    case 236725:
    {
        returnValue = F("Obere Silberstr.");
        break;
    }
    case 236726:
    {
        returnValue = F("Obere Simon-Fink-Str.");
        break;
    }
    case 236727:
    {
        returnValue = F("Obere Sitt");
        break;
    }
    case 236728:
    {
        returnValue = F("Obere Sohlstr.");
        break;
    }
    case 236729:
    {
        returnValue = F("Obere Sommerbachstr.");
        break;
    }
    case 236730:
    {
        returnValue = F("Obere Sommerbergstr.");
        break;
    }
    case 236731:
    {
        returnValue = F("Obere Sommerhalde");
        break;
    }
    case 236732:
    {
        returnValue = F("Obere Sommerleite");
        break;
    }
    case 236733:
    {
        returnValue = F("Obere Sommerseite");
        break;
    }
    case 236734:
    {
        returnValue = F("Obere Sonneberger Str.");
        break;
    }
    case 236735:
    {
        returnValue = F("Obere Sonnenbergstr.");
        break;
    }
    case 236736:
    {
        returnValue = F("Obere Sonnenbühlstr.");
        break;
    }
    case 236737:
    {
        returnValue = F("Obere Sonnenhalde");
        break;
    }
    case 236738:
    {
        returnValue = F("Obere Sonnenleite");
        break;
    }
    case 236739:
    {
        returnValue = F("Obere Sonnenstr.");
        break;
    }
    case 236740:
    {
        returnValue = F("Obere Sonnenäcker");
        break;
    }
    case 236741:
    {
        returnValue = F("Obere Sonnhalde");
        break;
    }
    case 236742:
    {
        returnValue = F("Obere Spiekerstr.");
        break;
    }
    case 236743:
    {
        returnValue = F("Obere Spielershalde");
        break;
    }
    case 236744:
    {
        returnValue = F("Obere Spitalgasse");
        break;
    }
    case 236745:
    {
        returnValue = F("Obere Spitze");
        break;
    }
    case 236746:
    {
        returnValue = F("Obere Spitzkehre");
        break;
    }
    case 236747:
    {
        returnValue = F("Obere St. Nikolausgasse");
        break;
    }
    case 236748:
    {
        returnValue = F("Obere Stabstr.");
        break;
    }
    case 236749:
    {
        returnValue = F("Obere Stadt");
        break;
    }
    case 236750:
    {
        returnValue = F("Obere Stadtmauer");
        break;
    }
    case 236751:
    {
        returnValue = F("Obere Stahlindustrie");
        break;
    }
    case 236752:
    {
        returnValue = F("Obere Staltenstr.");
        break;
    }
    case 236753:
    {
        returnValue = F("Obere Staudenäcker");
        break;
    }
    case 236754:
    {
        returnValue = F("Obere Stautenbergstr.");
        break;
    }
    case 236755:
    {
        returnValue = F("Obere Stegwiesen");
        break;
    }
    case 236756:
    {
        returnValue = F("Obere Steig");
        break;
    }
    case 236757:
    {
        returnValue = F("Obere Steige");
        break;
    }
    case 236758:
    {
        returnValue = F("Obere Steigstr.");
        break;
    }
    case 236759:
    {
        returnValue = F("Obere Steinau");
        break;
    }
    case 236760:
    {
        returnValue = F("Obere Steinbeisstr.");
        break;
    }
    case 236761:
    {
        returnValue = F("Obere Steinbreite");
        break;
    }
    case 236762:
    {
        returnValue = F("Obere Steine");
        break;
    }
    case 236763:
    {
        returnValue = F("Obere Steinengrabenstr.");
        break;
    }
    case 236764:
    {
        returnValue = F("Obere Steinfelsstr.");
        break;
    }
    case 236765:
    {
        returnValue = F("Obere Steingasse");
        break;
    }
    case 236766:
    {
        returnValue = F("Obere Steingrube");
        break;
    }
    case 236767:
    {
        returnValue = F("Obere Steinig Richtstatt");
        break;
    }
    case 236768:
    {
        returnValue = F("Obere Steinkuhle");
        break;
    }
    case 236769:
    {
        returnValue = F("Obere Steinpforte");
        break;
    }
    case 236770:
    {
        returnValue = F("Obere Steinrinne");
        break;
    }
    case 236771:
    {
        returnValue = F("Obere Steinstr.");
        break;
    }
    case 236772:
    {
        returnValue = F("Obere Sterkrader Str.");
        break;
    }
    case 236773:
    {
        returnValue = F("Obere Sterngasse");
        break;
    }
    case 236774:
    {
        returnValue = F("Obere Stettwegäcker");
        break;
    }
    case 236775:
    {
        returnValue = F("Obere Stiegel");
        break;
    }
    case 236776:
    {
        returnValue = F("Obere Stiegelstr.");
        break;
    }
    case 236777:
    {
        returnValue = F("Obere Stiegelwiesen");
        break;
    }
    case 236778:
    {
        returnValue = F("Obere Stiftstr.");
        break;
    }
    case 236779:
    {
        returnValue = F("Obere Stirnbergstr.");
        break;
    }
    case 236780:
    {
        returnValue = F("Obere Stirnhälde");
        break;
    }
    case 236781:
    {
        returnValue = F("Obere Stockäcker");
        break;
    }
    case 236782:
    {
        returnValue = F("Obere Stoppelsbergstr.");
        break;
    }
    case 236783:
    {
        returnValue = F("Obere Stormstr.");
        break;
    }
    case 236784:
    {
        returnValue = F("Obere Str.");
        break;
    }
    case 236785:
    {
        returnValue = F("Obere Strassäcker");
        break;
    }
    case 236786:
    {
        returnValue = F("Obere Strautweg");
        break;
    }
    case 236787:
    {
        returnValue = F("Obere Straßäcker");
        break;
    }
    case 236788:
    {
        returnValue = F("Obere Striegisgasse");
        break;
    }
    case 236789:
    {
        returnValue = F("Obere Striet");
        break;
    }
    case 236790:
    {
        returnValue = F("Obere Strohstr.");
        break;
    }
    case 236791:
    {
        returnValue = F("Obere Stöckstr.");
        break;
    }
    case 236792:
    {
        returnValue = F("Obere Stühe");
        break;
    }
    case 236793:
    {
        returnValue = F("Obere Suhl Schneise");
        break;
    }
    case 236794:
    {
        returnValue = F("Obere Sulzwiesen");
        break;
    }
    case 236795:
    {
        returnValue = F("Obere Sägbergweg");
        break;
    }
    case 236796:
    {
        returnValue = F("Obere Sägmühle");
        break;
    }
    case 236797:
    {
        returnValue = F("Obere Sände");
        break;
    }
    case 236798:
    {
        returnValue = F("Obere Söldnersgasse");
        break;
    }
    case 236799:
    {
        returnValue = F("Obere Sülte");
        break;
    }
    case 236800:
    {
        returnValue = F("Obere Sülz");
        break;
    }
    case 236801:
    {
        returnValue = F("Obere Talgasse");
        break;
    }
    case 236802:
    {
        returnValue = F("Obere Talleite");
        break;
    }
    case 236803:
    {
        returnValue = F("Obere Talstr.");
        break;
    }
    case 236804:
    {
        returnValue = F("Obere Talwiese");
        break;
    }
    case 236805:
    {
        returnValue = F("Obere Talwiesen");
        break;
    }
    case 236806:
    {
        returnValue = F("Obere Tannenberger Str.");
        break;
    }
    case 236807:
    {
        returnValue = F("Obere Tannenbergstr.");
        break;
    }
    case 236808:
    {
        returnValue = F("Obere Tannenstr.");
        break;
    }
    case 236809:
    {
        returnValue = F("Obere Tannleite");
        break;
    }
    case 236810:
    {
        returnValue = F("Obere Tannstr.");
        break;
    }
    case 236811:
    {
        returnValue = F("Obere Tauberleite");
        break;
    }
    case 236812:
    {
        returnValue = F("Obere Teichgasse");
        break;
    }
    case 236813:
    {
        returnValue = F("Obere Teichschneise");
        break;
    }
    case 236814:
    {
        returnValue = F("Obere Teichstr.");
        break;
    }
    case 236815:
    {
        returnValue = F("Obere Terrasse");
        break;
    }
    case 236816:
    {
        returnValue = F("Obere Terrassenstr.");
        break;
    }
    case 236817:
    {
        returnValue = F("Obere Tiefe");
        break;
    }
    case 236818:
    {
        returnValue = F("Obere Tiefenbachstr.");
        break;
    }
    case 236819:
    {
        returnValue = F("Obere Tiefstr.");
        break;
    }
    case 236820:
    {
        returnValue = F("Obere Tilkenbreite");
        break;
    }
    case 236821:
    {
        returnValue = F("Obere Tor");
        break;
    }
    case 236822:
    {
        returnValue = F("Obere Toranlage");
        break;
    }
    case 236823:
    {
        returnValue = F("Obere Torgasse");
        break;
    }
    case 236824:
    {
        returnValue = F("Obere Torstr.");
        break;
    }
    case 236825:
    {
        returnValue = F("Obere Trab");
        break;
    }
    case 236826:
    {
        returnValue = F("Obere Tradtstr.");
        break;
    }
    case 236827:
    {
        returnValue = F("Obere Trappengasse");
        break;
    }
    case 236828:
    {
        returnValue = F("Obere Tratt");
        break;
    }
    case 236829:
    {
        returnValue = F("Obere Treppenstr.");
        break;
    }
    case 236830:
    {
        returnValue = F("Obere Trift");
        break;
    }
    case 236831:
    {
        returnValue = F("Obere Triftstr.");
        break;
    }
    case 236832:
    {
        returnValue = F("Obere Tropbach");
        break;
    }
    case 236833:
    {
        returnValue = F("Obere Tränke");
        break;
    }
    case 236834:
    {
        returnValue = F("Obere Turmstr.");
        break;
    }
    case 236835:
    {
        returnValue = F("Obere Turnstr.");
        break;
    }
    case 236836:
    {
        returnValue = F("Obere Twiete");
        break;
    }
    case 236837:
    {
        returnValue = F("Obere Ufergasse");
        break;
    }
    case 236838:
    {
        returnValue = F("Obere Uferstr.");
        break;
    }
    case 236839:
    {
        returnValue = F("Obere Usafeldweg");
        break;
    }
    case 236840:
    {
        returnValue = F("Obere Viebiggasse");
        break;
    }
    case 236841:
    {
        returnValue = F("Obere Viehgasse");
        break;
    }
    case 236842:
    {
        returnValue = F("Obere Viehmarktstr.");
        break;
    }
    case 236843:
    {
        returnValue = F("Obere Viehtrift");
        break;
    }
    case 236844:
    {
        returnValue = F("Obere Viehweide");
        break;
    }
    case 236845:
    {
        returnValue = F("Obere Vogelweide");
        break;
    }
    case 236846:
    {
        returnValue = F("Obere Volmestr.");
        break;
    }
    case 236847:
    {
        returnValue = F("Obere Volperstr.");
        break;
    }
    case 236848:
    {
        returnValue = F("Obere Vorstadt");
        break;
    }
    case 236849:
    {
        returnValue = F("Obere Vorstadtstr.");
        break;
    }
    case 236850:
    {
        returnValue = F("Obere Vödestr.");
        break;
    }
    case 236851:
    {
        returnValue = F("Obere Wacholderstr.");
        break;
    }
    case 236852:
    {
        returnValue = F("Obere Waiblinger Str.");
        break;
    }
    case 236853:
    {
        returnValue = F("Obere Waldemey");
        break;
    }
    case 236854:
    {
        returnValue = F("Obere Waldeslust");
        break;
    }
    case 236855:
    {
        returnValue = F("Obere Waldgasse");
        break;
    }
    case 236856:
    {
        returnValue = F("Obere Waldgärten");
        break;
    }
    case 236857:
    {
        returnValue = F("Obere Waldparkstr.");
        break;
    }
    case 236858:
    {
        returnValue = F("Obere Waldplätze");
        break;
    }
    case 236859:
    {
        returnValue = F("Obere Waldstr.");
        break;
    }
    case 236860:
    {
        returnValue = F("Obere Walkestr.");
        break;
    }
    case 236861:
    {
        returnValue = F("Obere Wallachei");
        break;
    }
    case 236862:
    {
        returnValue = F("Obere Wallecke");
        break;
    }
    case 236863:
    {
        returnValue = F("Obere Wallstr.");
        break;
    }
    case 236864:
    {
        returnValue = F("Obere Waltersdorfer Str.");
        break;
    }
    case 236865:
    {
        returnValue = F("Obere Wand");
        break;
    }
    case 236866:
    {
        returnValue = F("Obere Wangerhalde");
        break;
    }
    case 236867:
    {
        returnValue = F("Obere Wankel");
        break;
    }
    case 236868:
    {
        returnValue = F("Obere Wanne");
        break;
    }
    case 236869:
    {
        returnValue = F("Obere Wannestr.");
        break;
    }
    case 236870:
    {
        returnValue = F("Obere Wart");
        break;
    }
    case 236871:
    {
        returnValue = F("Obere Warte");
        break;
    }
    case 236872:
    {
        returnValue = F("Obere Warthe");
        break;
    }
    case 236873:
    {
        returnValue = F("Obere Wasenstr.");
        break;
    }
    case 236874:
    {
        returnValue = F("Obere Wassergasse");
        break;
    }
    case 236875:
    {
        returnValue = F("Obere Wasserstr.");
        break;
    }
    case 236876:
    {
        returnValue = F("Obere Watt");
        break;
    }
    case 236877:
    {
        returnValue = F("Obere Wehd");
        break;
    }
    case 236878:
    {
        returnValue = F("Obere Wehrhalder Str.");
        break;
    }
    case 236879:
    {
        returnValue = F("Obere Weide");
        break;
    }
    case 236880:
    {
        returnValue = F("Obere Weiden");
        break;
    }
    case 236881:
    {
        returnValue = F("Obere Weidenstr.");
        break;
    }
    case 236882:
    {
        returnValue = F("Obere Weihergasse");
        break;
    }
    case 236883:
    {
        returnValue = F("Obere Weiherstr.");
        break;
    }
    case 236884:
    {
        returnValue = F("Obere Weikertstein-Forststr.");
        break;
    }
    case 236885:
    {
        returnValue = F("Obere Weilerstr.");
        break;
    }
    case 236886:
    {
        returnValue = F("Obere Weinbachstr.");
        break;
    }
    case 236887:
    {
        returnValue = F("Obere Weinberge");
        break;
    }
    case 236888:
    {
        returnValue = F("Obere Weinberggasse");
        break;
    }
    case 236889:
    {
        returnValue = F("Obere Weinbergsleithe");
        break;
    }
    case 236890:
    {
        returnValue = F("Obere Weinbergstr.");
        break;
    }
    case 236891:
    {
        returnValue = F("Obere Weingartenstr.");
        break;
    }
    case 236892:
    {
        returnValue = F("Obere Weinhalde");
        break;
    }
    case 236893:
    {
        returnValue = F("Obere Weinleite");
        break;
    }
    case 236894:
    {
        returnValue = F("Obere Weinsteig");
        break;
    }
    case 236895:
    {
        returnValue = F("Obere Weinsteige");
        break;
    }
    case 236896:
    {
        returnValue = F("Obere Weinstr.");
        break;
    }
    case 236897:
    {
        returnValue = F("Obere Weisachstr.");
        break;
    }
    case 236898:
    {
        returnValue = F("Obere Weitzbergstr.");
        break;
    }
    case 236899:
    {
        returnValue = F("Obere Weiße");
        break;
    }
    case 236900:
    {
        returnValue = F("Obere Welle");
        break;
    }
    case 236901:
    {
        returnValue = F("Obere Wende");
        break;
    }
    case 236902:
    {
        returnValue = F("Obere Wengertstr.");
        break;
    }
    case 236903:
    {
        returnValue = F("Obere Werragasse");
        break;
    }
    case 236904:
    {
        returnValue = F("Obere Weserstr.");
        break;
    }
    case 236905:
    {
        returnValue = F("Obere Weweckleite");
        break;
    }
    case 236906:
    {
        returnValue = F("Obere Widdum");
        break;
    }
    case 236907:
    {
        returnValue = F("Obere Widigstr.");
        break;
    }
    case 236908:
    {
        returnValue = F("Obere Wieme");
        break;
    }
    case 236909:
    {
        returnValue = F("Obere Wiese");
        break;
    }
    case 236910:
    {
        returnValue = F("Obere Wiesen");
        break;
    }
    case 236911:
    {
        returnValue = F("Obere Wiesenbergstr.");
        break;
    }
    case 236912:
    {
        returnValue = F("Obere Wiesener Str.");
        break;
    }
    case 236913:
    {
        returnValue = F("Obere Wiesenstr.");
        break;
    }
    case 236914:
    {
        returnValue = F("Obere Wiesentalstr.");
        break;
    }
    case 236915:
    {
        returnValue = F("Obere Wiesenteile");
        break;
    }
    case 236916:
    {
        returnValue = F("Obere Wilhelmstr.");
        break;
    }
    case 236917:
    {
        returnValue = F("Obere Windberggasse");
        break;
    }
    case 236918:
    {
        returnValue = F("Obere Windeckstr.");
        break;
    }
    case 236919:
    {
        returnValue = F("Obere Wingert");
        break;
    }
    case 236920:
    {
        returnValue = F("Obere Wingertstr.");
        break;
    }
    case 236921:
    {
        returnValue = F("Obere Winkelstr.");
        break;
    }
    case 236922:
    {
        returnValue = F("Obere Winterleite");
        break;
    }
    case 236923:
    {
        returnValue = F("Obere Winzerstr.");
        break;
    }
    case 236924:
    {
        returnValue = F("Obere Wolfinstr.");
        break;
    }
    case 236925:
    {
        returnValue = F("Obere Wolkenstattstr.");
        break;
    }
    case 236926:
    {
        returnValue = F("Obere Wolkensteiner Gasse");
        break;
    }
    case 236927:
    {
        returnValue = F("Obere Wälle");
        break;
    }
    case 236928:
    {
        returnValue = F("Obere Wöhrde");
        break;
    }
    case 236929:
    {
        returnValue = F("Obere Wöhrstr.");
        break;
    }
    case 236930:
    {
        returnValue = F("Obere Wörden");
        break;
    }
    case 236931:
    {
        returnValue = F("Obere Wörthstr.");
        break;
    }
    case 236932:
    {
        returnValue = F("Obere Wüstenroter Str.");
        break;
    }
    case 236933:
    {
        returnValue = F("Obere Zahlbacher Str.");
        break;
    }
    case 236934:
    {
        returnValue = F("Obere Zanger Str.");
        break;
    }
    case 236935:
    {
        returnValue = F("Obere Zeil");
        break;
    }
    case 236936:
    {
        returnValue = F("Obere Zeilbäume");
        break;
    }
    case 236937:
    {
        returnValue = F("Obere Zeile");
        break;
    }
    case 236938:
    {
        returnValue = F("Obere Zeilstr.");
        break;
    }
    case 236939:
    {
        returnValue = F("Obere Zeiselbergstr.");
        break;
    }
    case 236940:
    {
        returnValue = F("Obere Zeislstr.");
        break;
    }
    case 236941:
    {
        returnValue = F("Obere Zeitenbach");
        break;
    }
    case 236942:
    {
        returnValue = F("Obere Zell");
        break;
    }
    case 236943:
    {
        returnValue = F("Obere Zense");
        break;
    }
    case 236944:
    {
        returnValue = F("Obere Zentbergstr.");
        break;
    }
    case 236945:
    {
        returnValue = F("Obere Ziegelangerstr.");
        break;
    }
    case 236946:
    {
        returnValue = F("Obere Ziegelei");
        break;
    }
    case 236947:
    {
        returnValue = F("Obere Ziegelhalde");
        break;
    }
    case 236948:
    {
        returnValue = F("Obere Ziegelhütte");
        break;
    }
    case 236949:
    {
        returnValue = F("Obere Ziegelleite");
        break;
    }
    case 236950:
    {
        returnValue = F("Obere Ziel");
        break;
    }
    case 236951:
    {
        returnValue = F("Obere Zieren");
        break;
    }
    case 236952:
    {
        returnValue = F("Obere Zimbergstr.");
        break;
    }
    case 236953:
    {
        returnValue = F("Obere Zinkenbaumstr.");
        break;
    }
    case 236954:
    {
        returnValue = F("Obere Zobelgasse");
        break;
    }
    case 236955:
    {
        returnValue = F("Obere Zugspitzstr.");
        break;
    }
    case 236956:
    {
        returnValue = F("Obere Zwerchgasse");
        break;
    }
    case 236957:
    {
        returnValue = F("Obere Zwerchäcker");
        break;
    }
    case 236958:
    {
        returnValue = F("Obere Zwickauer Str.");
        break;
    }
    case 236959:
    {
        returnValue = F("Obere Zwingergasse");
        break;
    }
    case 236960:
    {
        returnValue = F("Obere Zwingerstr.");
        break;
    }
    case 236961:
    {
        returnValue = F("Obere neue Str.");
        break;
    }
    case 236962:
    {
        returnValue = F("Obere Äcker");
        break;
    }
    case 236963:
    {
        returnValue = F("Obere Änger");
        break;
    }
    case 236964:
    {
        returnValue = F("Obere Ölbergstr.");
        break;
    }
    case 236965:
    {
        returnValue = F("Obere Öschlestr.");
        break;
    }
    case 236966:
    {
        returnValue = F("Obere-Au-Weg");
        break;
    }
    case 236967:
    {
        returnValue = F("Obere-Gasse");
        break;
    }
    case 236968:
    {
        returnValue = F("Obere-Gärten-Weg");
        break;
    }
    case 236969:
    {
        returnValue = F("Obere-Hohle-Buche-Weg");
        break;
    }
    case 236970:
    {
        returnValue = F("Obere-Höfe-Str.");
        break;
    }
    case 236971:
    {
        returnValue = F("Obere-Lehr-Str.");
        break;
    }
    case 236972:
    {
        returnValue = F("Obere-Loh-Str.");
        break;
    }
    case 236973:
    {
        returnValue = F("Obere-Masch-Str.");
        break;
    }
    case 236974:
    {
        returnValue = F("Obere-St.-Leonhard-Str.");
        break;
    }
    case 236975:
    {
        returnValue = F("Obere-Trift-Str.");
        break;
    }
    case 236976:
    {
        returnValue = F("Obere-Walldürner-Str.");
        break;
    }
    case 236977:
    {
        returnValue = F("Obere-Äcker-Str.");
        break;
    }
    case 236978:
    {
        returnValue = F("Obere-Äcker-Weg");
        break;
    }
    case 236979:
    {
        returnValue = F("Obereck");
        break;
    }
    case 236980:
    {
        returnValue = F("Obereckener Str.");
        break;
    }
    case 236981:
    {
        returnValue = F("Obereckstr.");
        break;
    }
    case 236982:
    {
        returnValue = F("Obereckweg");
        break;
    }
    case 236983:
    {
        returnValue = F("Oberegeriusweg");
        break;
    }
    case 236984:
    {
        returnValue = F("Oberegert");
        break;
    }
    case 236985:
    {
        returnValue = F("Obereggersberg");
        break;
    }
    case 236986:
    {
        returnValue = F("Oberehnheimer Str.");
        break;
    }
    case 236987:
    {
        returnValue = F("Oberehrenbach");
        break;
    }
    case 236988:
    {
        returnValue = F("Oberehring");
        break;
    }
    case 236989:
    {
        returnValue = F("Obereiberg");
        break;
    }
    case 236990:
    {
        returnValue = F("Obereiche");
        break;
    }
    case 236991:
    {
        returnValue = F("Obereichelsweg");
        break;
    }
    case 236992:
    {
        returnValue = F("Obereichenwinden");
        break;
    }
    case 236993:
    {
        returnValue = F("Obereichet");
        break;
    }
    case 236994:
    {
        returnValue = F("Obereichstätter Weg");
        break;
    }
    case 236995:
    {
        returnValue = F("Obereiderstr.");
        break;
    }
    case 236996:
    {
        returnValue = F("Obereilenberg");
        break;
    }
    case 236997:
    {
        returnValue = F("Obereimer");
        break;
    }
    case 236998:
    {
        returnValue = F("Obereipermühle");
        break;
    }
    case 236999:
    {
        returnValue = F("Obereipringhausen");
        break;
    }
    case 237000:
    {
        returnValue = F("Obereisenheimer Str.");
        break;
    }
    case 237001:
    {
        returnValue = F("Obereisesheimer Str.");
        break;
    }
    case 237002:
    {
        returnValue = F("Oberelbener Str.");
        break;
    }
    case 237003:
    {
        returnValue = F("Oberelkofener Str.");
        break;
    }
    case 237004:
    {
        returnValue = F("Obereller");
        break;
    }
    case 237005:
    {
        returnValue = F("Obereller Str.");
        break;
    }
    case 237006:
    {
        returnValue = F("Obereller Weg");
        break;
    }
    case 237007:
    {
        returnValue = F("Oberelles");
        break;
    }
    case 237008:
    {
        returnValue = F("Oberelsaff");
        break;
    }
    case 237009:
    {
        returnValue = F("Oberelsbacher Str.");
        break;
    }
    case 237010:
    {
        returnValue = F("Oberelsper Str.");
        break;
    }
    case 237011:
    {
        returnValue = F("Oberelsunger Str.");
        break;
    }
    case 237012:
    {
        returnValue = F("Oberelvenicher Str.");
        break;
    }
    case 237013:
    {
        returnValue = F("Oberembter Str.");
        break;
    }
    case 237014:
    {
        returnValue = F("Oberemmendorfer Weg");
        break;
    }
    case 237015:
    {
        returnValue = F("Oberemser Str.");
        break;
    }
    case 237016:
    {
        returnValue = F("Oberend");
        break;
    }
    case 237017:
    {
        returnValue = F("Oberende");
        break;
    }
    case 237018:
    {
        returnValue = F("Oberenden");
        break;
    }
    case 237019:
    {
        returnValue = F("Oberendreiweg");
        break;
    }
    case 237020:
    {
        returnValue = F("Oberendstr.");
        break;
    }
    case 237021:
    {
        returnValue = F("Oberendweg");
        break;
    }
    case 237022:
    {
        returnValue = F("Oberengengasse");
        break;
    }
    case 237023:
    {
        returnValue = F("Oberensinger Höhe");
        break;
    }
    case 237024:
    {
        returnValue = F("Oberensinger Str.");
        break;
    }
    case 237025:
    {
        returnValue = F("Oberensinger-Höhe-Weg");
        break;
    }
    case 237026:
    {
        returnValue = F("Obereppach");
        break;
    }
    case 237027:
    {
        returnValue = F("Obereppenried");
        break;
    }
    case 237028:
    {
        returnValue = F("Oberer Abendberg");
        break;
    }
    case 237029:
    {
        returnValue = F("Oberer Abfuhrweg");
        break;
    }
    case 237030:
    {
        returnValue = F("Oberer Abhauweg");
        break;
    }
    case 237031:
    {
        returnValue = F("Oberer Abteigarten");
        break;
    }
    case 237032:
    {
        returnValue = F("Oberer Adamsberg");
        break;
    }
    case 237033:
    {
        returnValue = F("Oberer Adenbergweg");
        break;
    }
    case 237034:
    {
        returnValue = F("Oberer Afrikaweg");
        break;
    }
    case 237035:
    {
        returnValue = F("Oberer Ahlenbergweg");
        break;
    }
    case 237036:
    {
        returnValue = F("Oberer Aizenbergweg");
        break;
    }
    case 237037:
    {
        returnValue = F("Oberer Alemannenweg");
        break;
    }
    case 237038:
    {
        returnValue = F("Oberer Alleenweg");
        break;
    }
    case 237039:
    {
        returnValue = F("Oberer Allmendhauweg");
        break;
    }
    case 237040:
    {
        returnValue = F("Oberer Almweg");
        break;
    }
    case 237041:
    {
        returnValue = F("Oberer Alte-Damen-Weg");
        break;
    }
    case 237042:
    {
        returnValue = F("Oberer Altenberg");
        break;
    }
    case 237043:
    {
        returnValue = F("Oberer Altlohweg");
        break;
    }
    case 237044:
    {
        returnValue = F("Oberer Altweg");
        break;
    }
    case 237045:
    {
        returnValue = F("Oberer Ammermühlweg");
        break;
    }
    case 237046:
    {
        returnValue = F("Oberer Amselstieg");
        break;
    }
    case 237047:
    {
        returnValue = F("Oberer Anger");
        break;
    }
    case 237048:
    {
        returnValue = F("Oberer Angerweg");
        break;
    }
    case 237049:
    {
        returnValue = F("Oberer Ankenbühlweg");
        break;
    }
    case 237050:
    {
        returnValue = F("Oberer Anwandel");
        break;
    }
    case 237051:
    {
        returnValue = F("Oberer Apfelskopfweg");
        break;
    }
    case 237052:
    {
        returnValue = F("Oberer Appelwaldweg");
        break;
    }
    case 237053:
    {
        returnValue = F("Oberer Ardeyweg");
        break;
    }
    case 237054:
    {
        returnValue = F("Oberer Aschberg");
        break;
    }
    case 237055:
    {
        returnValue = F("Oberer Aschheimer Weg");
        break;
    }
    case 237056:
    {
        returnValue = F("Oberer Atzelgarten");
        break;
    }
    case 237057:
    {
        returnValue = F("Oberer Aubersbach");
        break;
    }
    case 237058:
    {
        returnValue = F("Oberer Aufstieg");
        break;
    }
    case 237059:
    {
        returnValue = F("Oberer Augsgrund");
        break;
    }
    case 237060:
    {
        returnValue = F("Oberer Auhügel");
        break;
    }
    case 237061:
    {
        returnValue = F("Oberer Aussichtsturmweg");
        break;
    }
    case 237062:
    {
        returnValue = F("Oberer Auweg");
        break;
    }
    case 237063:
    {
        returnValue = F("Oberer Axtlohweg");
        break;
    }
    case 237064:
    {
        returnValue = F("Oberer Bach");
        break;
    }
    case 237065:
    {
        returnValue = F("Oberer Bachhangweg");
        break;
    }
    case 237066:
    {
        returnValue = F("Oberer Bachholzweg");
        break;
    }
    case 237067:
    {
        returnValue = F("Oberer Bachplatz");
        break;
    }
    case 237068:
    {
        returnValue = F("Oberer Bachweg");
        break;
    }
    case 237069:
    {
        returnValue = F("Oberer Backertsweg");
        break;
    }
    case 237070:
    {
        returnValue = F("Oberer Bahndamm");
        break;
    }
    case 237071:
    {
        returnValue = F("Oberer Bahnhof");
        break;
    }
    case 237072:
    {
        returnValue = F("Oberer Bahnhofsweg");
        break;
    }
    case 237073:
    {
        returnValue = F("Oberer Bahnweg");
        break;
    }
    case 237074:
    {
        returnValue = F("Oberer Bahofweg");
        break;
    }
    case 237075:
    {
        returnValue = F("Oberer Balkeshauweg");
        break;
    }
    case 237076:
    {
        returnValue = F("Oberer Ballenkopfweg");
        break;
    }
    case 237077:
    {
        returnValue = F("Oberer Ballenweg");
        break;
    }
    case 237078:
    {
        returnValue = F("Oberer Bandweg");
        break;
    }
    case 237079:
    {
        returnValue = F("Oberer Bangert");
        break;
    }
    case 237080:
    {
        returnValue = F("Oberer Bann");
        break;
    }
    case 237081:
    {
        returnValue = F("Oberer Bannweg");
        break;
    }
    case 237082:
    {
        returnValue = F("Oberer Baselblick");
        break;
    }
    case 237083:
    {
        returnValue = F("Oberer Bassenheimer Weg");
        break;
    }
    case 237084:
    {
        returnValue = F("Oberer Battertweg");
        break;
    }
    case 237085:
    {
        returnValue = F("Oberer Bauernwaldweg");
        break;
    }
    case 237086:
    {
        returnValue = F("Oberer Bauwaldweg");
        break;
    }
    case 237087:
    {
        returnValue = F("Oberer Beckenberg");
        break;
    }
    case 237088:
    {
        returnValue = F("Oberer Beeksweg");
        break;
    }
    case 237089:
    {
        returnValue = F("Oberer Beerenberg");
        break;
    }
    case 237090:
    {
        returnValue = F("Oberer Belz");
        break;
    }
    case 237091:
    {
        returnValue = F("Oberer Belzweg");
        break;
    }
    case 237092:
    {
        returnValue = F("Oberer Berg");
        break;
    }
    case 237093:
    {
        returnValue = F("Oberer Bergauerplatz");
        break;
    }
    case 237094:
    {
        returnValue = F("Oberer Bergelweg");
        break;
    }
    case 237095:
    {
        returnValue = F("Oberer Bergfeldweg");
        break;
    }
    case 237096:
    {
        returnValue = F("Oberer Berggarten");
        break;
    }
    case 237097:
    {
        returnValue = F("Oberer Berggrabenweg");
        break;
    }
    case 237098:
    {
        returnValue = F("Oberer Bergring");
        break;
    }
    case 237099:
    {
        returnValue = F("Oberer Bergweg");
        break;
    }
    case 237100:
    {
        returnValue = F("Oberer Bernardenzug");
        break;
    }
    case 237101:
    {
        returnValue = F("Oberer Bichlweg");
        break;
    }
    case 237102:
    {
        returnValue = F("Oberer Bickner");
        break;
    }
    case 237103:
    {
        returnValue = F("Oberer Bienenweg");
        break;
    }
    case 237104:
    {
        returnValue = F("Oberer Bierweg");
        break;
    }
    case 237105:
    {
        returnValue = F("Oberer Bifang");
        break;
    }
    case 237106:
    {
        returnValue = F("Oberer Bildsteinweg");
        break;
    }
    case 237107:
    {
        returnValue = F("Oberer Bildstöckleweg");
        break;
    }
    case 237108:
    {
        returnValue = F("Oberer Binsgenweg");
        break;
    }
    case 237109:
    {
        returnValue = F("Oberer Birkachweg");
        break;
    }
    case 237110:
    {
        returnValue = F("Oberer Birken");
        break;
    }
    case 237111:
    {
        returnValue = F("Oberer Birkenbuckelweg");
        break;
    }
    case 237112:
    {
        returnValue = F("Oberer Birkenwaldweg");
        break;
    }
    case 237113:
    {
        returnValue = F("Oberer Birkenweg");
        break;
    }
    case 237114:
    {
        returnValue = F("Oberer Birklesweg");
        break;
    }
    case 237115:
    {
        returnValue = F("Oberer Birkweiler Weg");
        break;
    }
    case 237116:
    {
        returnValue = F("Oberer Bischbergweg");
        break;
    }
    case 237117:
    {
        returnValue = F("Oberer Bischofsberger Weg");
        break;
    }
    case 237118:
    {
        returnValue = F("Oberer Bistenwaldweg");
        break;
    }
    case 237119:
    {
        returnValue = F("Oberer Bittersbrunnenweg");
        break;
    }
    case 237120:
    {
        returnValue = F("Oberer Bleicheweg");
        break;
    }
    case 237121:
    {
        returnValue = F("Oberer Blindbergweg");
        break;
    }
    case 237122:
    {
        returnValue = F("Oberer Blosenbergweg");
        break;
    }
    case 237123:
    {
        returnValue = F("Oberer Blumenstrichweg");
        break;
    }
    case 237124:
    {
        returnValue = F("Oberer Bocksbrunnenweg");
        break;
    }
    case 237125:
    {
        returnValue = F("Oberer Bocksgrundweg");
        break;
    }
    case 237126:
    {
        returnValue = F("Oberer Bogen");
        break;
    }
    case 237127:
    {
        returnValue = F("Oberer Bogenweg");
        break;
    }
    case 237128:
    {
        returnValue = F("Oberer Bohl");
        break;
    }
    case 237129:
    {
        returnValue = F("Oberer Bollhaldenweg");
        break;
    }
    case 237130:
    {
        returnValue = F("Oberer Bombachweg");
        break;
    }
    case 237131:
    {
        returnValue = F("Oberer Bomberg");
        break;
    }
    case 237132:
    {
        returnValue = F("Oberer Bongart");
        break;
    }
    case 237133:
    {
        returnValue = F("Oberer Bongert");
        break;
    }
    case 237134:
    {
        returnValue = F("Oberer Bornrain");
        break;
    }
    case 237135:
    {
        returnValue = F("Oberer Bornsweg");
        break;
    }
    case 237136:
    {
        returnValue = F("Oberer Bornweg");
        break;
    }
    case 237137:
    {
        returnValue = F("Oberer Botenweg");
        break;
    }
    case 237138:
    {
        returnValue = F("Oberer Brand");
        break;
    }
    case 237139:
    {
        returnValue = F("Oberer Brandenweg");
        break;
    }
    case 237140:
    {
        returnValue = F("Oberer Brandholzweg");
        break;
    }
    case 237141:
    {
        returnValue = F("Oberer Brandl");
        break;
    }
    case 237142:
    {
        returnValue = F("Oberer Brandweg");
        break;
    }
    case 237143:
    {
        returnValue = F("Oberer Brandweg Horbachtal");
        break;
    }
    case 237144:
    {
        returnValue = F("Oberer Braunewaldsgrundweg");
        break;
    }
    case 237145:
    {
        returnValue = F("Oberer Breitbühlweg");
        break;
    }
    case 237146:
    {
        returnValue = F("Oberer Breitchenweg");
        break;
    }
    case 237147:
    {
        returnValue = F("Oberer Breitenbergweg");
        break;
    }
    case 237148:
    {
        returnValue = F("Oberer Breitendobelweg");
        break;
    }
    case 237149:
    {
        returnValue = F("Oberer Breitenfelder Weg");
        break;
    }
    case 237150:
    {
        returnValue = F("Oberer Breithohleweg");
        break;
    }
    case 237151:
    {
        returnValue = F("Oberer Breitstockweg");
        break;
    }
    case 237152:
    {
        returnValue = F("Oberer Breitweg");
        break;
    }
    case 237153:
    {
        returnValue = F("Oberer Brenntenwaldweg");
        break;
    }
    case 237154:
    {
        returnValue = F("Oberer Brenntenweg");
        break;
    }
    case 237155:
    {
        returnValue = F("Oberer Brenntfelsenweg");
        break;
    }
    case 237156:
    {
        returnValue = F("Oberer Brettweg");
        break;
    }
    case 237157:
    {
        returnValue = F("Oberer Brigachweg");
        break;
    }
    case 237158:
    {
        returnValue = F("Oberer Bruchbergweg");
        break;
    }
    case 237159:
    {
        returnValue = F("Oberer Bruchrand");
        break;
    }
    case 237160:
    {
        returnValue = F("Oberer Bruchweg");
        break;
    }
    case 237161:
    {
        returnValue = F("Oberer Bruckwaldweg");
        break;
    }
    case 237162:
    {
        returnValue = F("Oberer Bruderbergweg");
        break;
    }
    case 237163:
    {
        returnValue = F("Oberer Bruennlweg");
        break;
    }
    case 237164:
    {
        returnValue = F("Oberer Brunnenweg");
        break;
    }
    case 237165:
    {
        returnValue = F("Oberer Bräkerkopfweg");
        break;
    }
    case 237166:
    {
        returnValue = F("Oberer Brändbachweg");
        break;
    }
    case 237167:
    {
        returnValue = F("Oberer Brömsterweg");
        break;
    }
    case 237168:
    {
        returnValue = F("Oberer Brückenweg");
        break;
    }
    case 237169:
    {
        returnValue = F("Oberer Brühl");
        break;
    }
    case 237170:
    {
        returnValue = F("Oberer Bründlweg");
        break;
    }
    case 237171:
    {
        returnValue = F("Oberer Buchberg");
        break;
    }
    case 237172:
    {
        returnValue = F("Oberer Buchbergweg");
        break;
    }
    case 237173:
    {
        returnValue = F("Oberer Buchhaldenweg");
        break;
    }
    case 237174:
    {
        returnValue = F("Oberer Buchhellenweg");
        break;
    }
    case 237175:
    {
        returnValue = F("Oberer Buchholenweg");
        break;
    }
    case 237176:
    {
        returnValue = F("Oberer Buchholzleweg");
        break;
    }
    case 237177:
    {
        returnValue = F("Oberer Buchholzweg");
        break;
    }
    case 237178:
    {
        returnValue = F("Oberer Buchrainweg");
        break;
    }
    case 237179:
    {
        returnValue = F("Oberer Buchwaldweg");
        break;
    }
    case 237180:
    {
        returnValue = F("Oberer Buchweg");
        break;
    }
    case 237181:
    {
        returnValue = F("Oberer Buhlschlag");
        break;
    }
    case 237182:
    {
        returnValue = F("Oberer Buigenweg");
        break;
    }
    case 237183:
    {
        returnValue = F("Oberer Bungert");
        break;
    }
    case 237184:
    {
        returnValue = F("Oberer Burggarten");
        break;
    }
    case 237185:
    {
        returnValue = F("Oberer Burggrabenweg");
        break;
    }
    case 237186:
    {
        returnValue = F("Oberer Burghaldenweg");
        break;
    }
    case 237187:
    {
        returnValue = F("Oberer Burghaldeweg");
        break;
    }
    case 237188:
    {
        returnValue = F("Oberer Burgseitenweg");
        break;
    }
    case 237189:
    {
        returnValue = F("Oberer Burgweg");
        break;
    }
    case 237190:
    {
        returnValue = F("Oberer Burrenweg");
        break;
    }
    case 237191:
    {
        returnValue = F("Oberer Busch");
        break;
    }
    case 237192:
    {
        returnValue = F("Oberer Buschmühlenweg");
        break;
    }
    case 237193:
    {
        returnValue = F("Oberer Bux");
        break;
    }
    case 237194:
    {
        returnValue = F("Oberer Buxheimer Weg");
        break;
    }
    case 237195:
    {
        returnValue = F("Oberer Bächlesweg");
        break;
    }
    case 237196:
    {
        returnValue = F("Oberer Bärenweg");
        break;
    }
    case 237197:
    {
        returnValue = F("Oberer Bärlach");
        break;
    }
    case 237198:
    {
        returnValue = F("Oberer Böllenberg");
        break;
    }
    case 237199:
    {
        returnValue = F("Oberer Bötzbergweg");
        break;
    }
    case 237200:
    {
        returnValue = F("Oberer Büchenstock");
        break;
    }
    case 237201:
    {
        returnValue = F("Oberer Bühl");
        break;
    }
    case 237202:
    {
        returnValue = F("Oberer Bühlweg");
        break;
    }
    case 237203:
    {
        returnValue = F("Oberer Bülteweg");
        break;
    }
    case 237204:
    {
        returnValue = F("Oberer Bürglaß");
        break;
    }
    case 237205:
    {
        returnValue = F("Oberer Bürrleweg");
        break;
    }
    case 237206:
    {
        returnValue = F("Oberer Calwer Weg");
        break;
    }
    case 237207:
    {
        returnValue = F("Oberer Charweg");
        break;
    }
    case 237208:
    {
        returnValue = F("Oberer Dachbaualden Weg");
        break;
    }
    case 237209:
    {
        returnValue = F("Oberer Dachenberg");
        break;
    }
    case 237210:
    {
        returnValue = F("Oberer Dachsbauweg");
        break;
    }
    case 237211:
    {
        returnValue = F("Oberer Dachsgrabenweg");
        break;
    }
    case 237212:
    {
        returnValue = F("Oberer Dachsklingenweg");
        break;
    }
    case 237213:
    {
        returnValue = F("Oberer Dallenbergweg");
        break;
    }
    case 237214:
    {
        returnValue = F("Oberer Dalmerweg");
        break;
    }
    case 237215:
    {
        returnValue = F("Oberer Damm");
        break;
    }
    case 237216:
    {
        returnValue = F("Oberer Dammbergweg");
        break;
    }
    case 237217:
    {
        returnValue = F("Oberer Dammweg");
        break;
    }
    case 237218:
    {
        returnValue = F("Oberer Degelberg");
        break;
    }
    case 237219:
    {
        returnValue = F("Oberer Delisbergweg");
        break;
    }
    case 237220:
    {
        returnValue = F("Oberer Dellenweg");
        break;
    }
    case 237221:
    {
        returnValue = F("Oberer Denkmalsweg");
        break;
    }
    case 237222:
    {
        returnValue = F("Oberer Deponieweg");
        break;
    }
    case 237223:
    {
        returnValue = F("Oberer Detschelweg");
        break;
    }
    case 237224:
    {
        returnValue = F("Oberer Dettenackerweg");
        break;
    }
    case 237225:
    {
        returnValue = F("Oberer Dettenbachweg");
        break;
    }
    case 237226:
    {
        returnValue = F("Oberer Dohrweg");
        break;
    }
    case 237227:
    {
        returnValue = F("Oberer Donauhaldenweg");
        break;
    }
    case 237228:
    {
        returnValue = F("Oberer Dorfberg");
        break;
    }
    case 237229:
    {
        returnValue = F("Oberer Dorfgraben");
        break;
    }
    case 237230:
    {
        returnValue = F("Oberer Dorfplatz");
        break;
    }
    case 237231:
    {
        returnValue = F("Oberer Dorfstr.");
        break;
    }
    case 237232:
    {
        returnValue = F("Oberer Dorfweg");
        break;
    }
    case 237233:
    {
        returnValue = F("Oberer Dornbusch");
        break;
    }
    case 237234:
    {
        returnValue = F("Oberer Dornhauweg");
        break;
    }
    case 237235:
    {
        returnValue = F("Oberer Dornrainweg");
        break;
    }
    case 237236:
    {
        returnValue = F("Oberer Dorsing");
        break;
    }
    case 237237:
    {
        returnValue = F("Oberer Dreieichenschlagweg");
        break;
    }
    case 237238:
    {
        returnValue = F("Oberer Dunkeleweg");
        break;
    }
    case 237239:
    {
        returnValue = F("Oberer Dünenweg");
        break;
    }
    case 237240:
    {
        returnValue = F("Oberer Dürener Weg");
        break;
    }
    case 237241:
    {
        returnValue = F("Oberer Dürrbückliweg");
        break;
    }
    case 237242:
    {
        returnValue = F("Oberer Dürrebergweg");
        break;
    }
    case 237243:
    {
        returnValue = F("Oberer Ebbel");
        break;
    }
    case 237244:
    {
        returnValue = F("Oberer Eckleweg");
        break;
    }
    case 237245:
    {
        returnValue = F("Oberer Edelburgweg");
        break;
    }
    case 237246:
    {
        returnValue = F("Oberer Egertenweg");
        break;
    }
    case 237247:
    {
        returnValue = F("Oberer Eggeweg");
        break;
    }
    case 237248:
    {
        returnValue = F("Oberer Ehlert");
        break;
    }
    case 237249:
    {
        returnValue = F("Oberer Ehmschen");
        break;
    }
    case 237250:
    {
        returnValue = F("Oberer Ehrenberg");
        break;
    }
    case 237251:
    {
        returnValue = F("Oberer Ehweg");
        break;
    }
    case 237252:
    {
        returnValue = F("Oberer Eichbergweg");
        break;
    }
    case 237253:
    {
        returnValue = F("Oberer Eichbühlweg");
        break;
    }
    case 237254:
    {
        returnValue = F("Oberer Eichenbergsweg");
        break;
    }
    case 237255:
    {
        returnValue = F("Oberer Eichenweg");
        break;
    }
    case 237256:
    {
        returnValue = F("Oberer Eichhagen");
        break;
    }
    case 237257:
    {
        returnValue = F("Oberer Eichhain");
        break;
    }
    case 237258:
    {
        returnValue = F("Oberer Eichhausweg");
        break;
    }
    case 237259:
    {
        returnValue = F("Oberer Eichköpfleweg");
        break;
    }
    case 237260:
    {
        returnValue = F("Oberer Eichwaldweg");
        break;
    }
    case 237261:
    {
        returnValue = F("Oberer Eichweg");
        break;
    }
    case 237262:
    {
        returnValue = F("Oberer Eickeshagen");
        break;
    }
    case 237263:
    {
        returnValue = F("Oberer Eierberg");
        break;
    }
    case 237264:
    {
        returnValue = F("Oberer Einschlag");
        break;
    }
    case 237265:
    {
        returnValue = F("Oberer Eisbergweg");
        break;
    }
    case 237266:
    {
        returnValue = F("Oberer Eisenhammer");
        break;
    }
    case 237267:
    {
        returnValue = F("Oberer Ellenberg");
        break;
    }
    case 237268:
    {
        returnValue = F("Oberer Elstalsweg");
        break;
    }
    case 237269:
    {
        returnValue = F("Oberer Engen");
        break;
    }
    case 237270:
    {
        returnValue = F("Oberer Enscheler Waldweg");
        break;
    }
    case 237271:
    {
        returnValue = F("Oberer Enzhangweg");
        break;
    }
    case 237272:
    {
        returnValue = F("Oberer Erbacher Weg");
        break;
    }
    case 237273:
    {
        returnValue = F("Oberer Erbisberg");
        break;
    }
    case 237274:
    {
        returnValue = F("Oberer Erbsenbach");
        break;
    }
    case 237275:
    {
        returnValue = F("Oberer Erdgrubenweg");
        break;
    }
    case 237276:
    {
        returnValue = F("Oberer Erdweg");
        break;
    }
    case 237277:
    {
        returnValue = F("Oberer Erlanger");
        break;
    }
    case 237278:
    {
        returnValue = F("Oberer Erlenbach");
        break;
    }
    case 237279:
    {
        returnValue = F("Oberer Erlenberg");
        break;
    }
    case 237280:
    {
        returnValue = F("Oberer Erzbuckweg");
        break;
    }
    case 237281:
    {
        returnValue = F("Oberer Esch");
        break;
    }
    case 237282:
    {
        returnValue = F("Oberer Eschachweg");
        break;
    }
    case 237283:
    {
        returnValue = F("Oberer Eschhaldenweg");
        break;
    }
    case 237284:
    {
        returnValue = F("Oberer Eschweg");
        break;
    }
    case 237285:
    {
        returnValue = F("Oberer Espach");
        break;
    }
    case 237286:
    {
        returnValue = F("Oberer Esperweg");
        break;
    }
    case 237287:
    {
        returnValue = F("Oberer Ettenbergweg");
        break;
    }
    case 237288:
    {
        returnValue = F("Oberer Ettlesberg");
        break;
    }
    case 237289:
    {
        returnValue = F("Oberer Eulenbachweg");
        break;
    }
    case 237290:
    {
        returnValue = F("Oberer Eulenbergweg");
        break;
    }
    case 237291:
    {
        returnValue = F("Oberer Ewiger Weg");
        break;
    }
    case 237292:
    {
        returnValue = F("Oberer Eßlichweg");
        break;
    }
    case 237293:
    {
        returnValue = F("Oberer Fahrbachweg");
        break;
    }
    case 237294:
    {
        returnValue = F("Oberer Falkenweg");
        break;
    }
    case 237295:
    {
        returnValue = F("Oberer Farbberg");
        break;
    }
    case 237296:
    {
        returnValue = F("Oberer Fauler Pelz");
        break;
    }
    case 237297:
    {
        returnValue = F("Oberer Feckler");
        break;
    }
    case 237298:
    {
        returnValue = F("Oberer Feldhain");
        break;
    }
    case 237299:
    {
        returnValue = F("Oberer Feldweg");
        break;
    }
    case 237300:
    {
        returnValue = F("Oberer Felsberg");
        break;
    }
    case 237301:
    {
        returnValue = F("Oberer Felsen");
        break;
    }
    case 237302:
    {
        returnValue = F("Oberer Fichtenwaldweg");
        break;
    }
    case 237303:
    {
        returnValue = F("Oberer Finkenpfad");
        break;
    }
    case 237304:
    {
        returnValue = F("Oberer Finkenweg");
        break;
    }
    case 237305:
    {
        returnValue = F("Oberer Finstererweg");
        break;
    }
    case 237306:
    {
        returnValue = F("Oberer Flachsberg");
        break;
    }
    case 237307:
    {
        returnValue = F("Oberer Flechterweg");
        break;
    }
    case 237308:
    {
        returnValue = F("Oberer Fleischerweg");
        break;
    }
    case 237309:
    {
        returnValue = F("Oberer Floßgrabenweg");
        break;
    }
    case 237310:
    {
        returnValue = F("Oberer Flur");
        break;
    }
    case 237311:
    {
        returnValue = F("Oberer Flurweg");
        break;
    }
    case 237312:
    {
        returnValue = F("Oberer Flutgraben");
        break;
    }
    case 237313:
    {
        returnValue = F("Oberer Flügel");
        break;
    }
    case 237314:
    {
        returnValue = F("Oberer Forchenweg");
        break;
    }
    case 237315:
    {
        returnValue = F("Oberer Forlenweg");
        break;
    }
    case 237316:
    {
        returnValue = F("Oberer Forst");
        break;
    }
    case 237317:
    {
        returnValue = F("Oberer Forstweg");
        break;
    }
    case 237318:
    {
        returnValue = F("Oberer Freimarkt");
        break;
    }
    case 237319:
    {
        returnValue = F("Oberer Friedhof");
        break;
    }
    case 237320:
    {
        returnValue = F("Oberer Friedhofsweg");
        break;
    }
    case 237321:
    {
        returnValue = F("Oberer Friedhofweg");
        break;
    }
    case 237322:
    {
        returnValue = F("Oberer Friedrichsberg");
        break;
    }
    case 237323:
    {
        returnValue = F("Oberer Frohholzweg");
        break;
    }
    case 237324:
    {
        returnValue = F("Oberer Frohnholzweg");
        break;
    }
    case 237325:
    {
        returnValue = F("Oberer Frohtalweg");
        break;
    }
    case 237326:
    {
        returnValue = F("Oberer Fuchsbergweg");
        break;
    }
    case 237327:
    {
        returnValue = F("Oberer Fuchsgraben");
        break;
    }
    case 237328:
    {
        returnValue = F("Oberer Fuchshaldenweg");
        break;
    }
    case 237329:
    {
        returnValue = F("Oberer Fuchsküppelsweg");
        break;
    }
    case 237330:
    {
        returnValue = F("Oberer Fuldablick");
        break;
    }
    case 237331:
    {
        returnValue = F("Oberer Furtweg");
        break;
    }
    case 237332:
    {
        returnValue = F("Oberer Furtweinberg");
        break;
    }
    case 237333:
    {
        returnValue = F("Oberer Fälchlesweg");
        break;
    }
    case 237334:
    {
        returnValue = F("Oberer Färbersäckerweg");
        break;
    }
    case 237335:
    {
        returnValue = F("Oberer Gaigelderweg");
        break;
    }
    case 237336:
    {
        returnValue = F("Oberer Gaisberg");
        break;
    }
    case 237337:
    {
        returnValue = F("Oberer Gaisbergweg");
        break;
    }
    case 237338:
    {
        returnValue = F("Oberer Gaisfelsenweg");
        break;
    }
    case 237339:
    {
        returnValue = F("Oberer Galgenhaldeweg");
        break;
    }
    case 237340:
    {
        returnValue = F("Oberer Galgenweg");
        break;
    }
    case 237341:
    {
        returnValue = F("Oberer Gartbrink");
        break;
    }
    case 237342:
    {
        returnValue = F("Oberer Garten");
        break;
    }
    case 237343:
    {
        returnValue = F("Oberer Gartenpfad");
        break;
    }
    case 237344:
    {
        returnValue = F("Oberer Gartenweg");
        break;
    }
    case 237345:
    {
        returnValue = F("Oberer Garwiedenweg");
        break;
    }
    case 237346:
    {
        returnValue = F("Oberer Gauchmattweg");
        break;
    }
    case 237347:
    {
        returnValue = F("Oberer Gegenbauersweg");
        break;
    }
    case 237348:
    {
        returnValue = F("Oberer Gehrenweg");
        break;
    }
    case 237349:
    {
        returnValue = F("Oberer Geigenbachweg");
        break;
    }
    case 237350:
    {
        returnValue = F("Oberer Geigenköpfleweg");
        break;
    }
    case 237351:
    {
        returnValue = F("Oberer Geigersheidweg");
        break;
    }
    case 237352:
    {
        returnValue = F("Oberer Geisberg");
        break;
    }
    case 237353:
    {
        returnValue = F("Oberer Geisbergweg");
        break;
    }
    case 237354:
    {
        returnValue = F("Oberer Geiselhof");
        break;
    }
    case 237355:
    {
        returnValue = F("Oberer Geisenbachweg");
        break;
    }
    case 237356:
    {
        returnValue = F("Oberer Geislochweg");
        break;
    }
    case 237357:
    {
        returnValue = F("Oberer Geißelring");
        break;
    }
    case 237358:
    {
        returnValue = F("Oberer Geißenbachweg");
        break;
    }
    case 237359:
    {
        returnValue = F("Oberer Gerlas");
        break;
    }
    case 237360:
    {
        returnValue = F("Oberer Gernauweg");
        break;
    }
    case 237361:
    {
        returnValue = F("Oberer Giesen-Weg");
        break;
    }
    case 237362:
    {
        returnValue = F("Oberer Giessenweg");
        break;
    }
    case 237363:
    {
        returnValue = F("Oberer Gießübl");
        break;
    }
    case 237364:
    {
        returnValue = F("Oberer Girzenweg");
        break;
    }
    case 237365:
    {
        returnValue = F("Oberer Glaserbergweg");
        break;
    }
    case 237366:
    {
        returnValue = F("Oberer Glashaldenweg");
        break;
    }
    case 237367:
    {
        returnValue = F("Oberer Gleiberger Weg");
        break;
    }
    case 237368:
    {
        returnValue = F("Oberer Gleichenweg");
        break;
    }
    case 237369:
    {
        returnValue = F("Oberer Gleißenberg");
        break;
    }
    case 237370:
    {
        returnValue = F("Oberer Goldbacher Weg");
        break;
    }
    case 237371:
    {
        returnValue = F("Oberer Goldbachweg");
        break;
    }
    case 237372:
    {
        returnValue = F("Oberer Goldersbachtalweg");
        break;
    }
    case 237373:
    {
        returnValue = F("Oberer Goldsbachweg");
        break;
    }
    case 237374:
    {
        returnValue = F("Oberer Gooskamp");
        break;
    }
    case 237375:
    {
        returnValue = F("Oberer Grabborn");
        break;
    }
    case 237376:
    {
        returnValue = F("Oberer Graben");
        break;
    }
    case 237377:
    {
        returnValue = F("Oberer Grabenring");
        break;
    }
    case 237378:
    {
        returnValue = F("Oberer Grabenweg");
        break;
    }
    case 237379:
    {
        returnValue = F("Oberer Grangertweg");
        break;
    }
    case 237380:
    {
        returnValue = F("Oberer Grasweg");
        break;
    }
    case 237381:
    {
        returnValue = F("Oberer Grenzweg");
        break;
    }
    case 237382:
    {
        returnValue = F("Oberer Greuthauweg");
        break;
    }
    case 237383:
    {
        returnValue = F("Oberer Griesberg");
        break;
    }
    case 237384:
    {
        returnValue = F("Oberer Grieslenweg");
        break;
    }
    case 237385:
    {
        returnValue = F("Oberer Grifflenberg");
        break;
    }
    case 237386:
    {
        returnValue = F("Oberer Grimms");
        break;
    }
    case 237387:
    {
        returnValue = F("Oberer Grottenweg");
        break;
    }
    case 237388:
    {
        returnValue = F("Oberer Großholzweg");
        break;
    }
    case 237389:
    {
        returnValue = F("Oberer Grubhofweg");
        break;
    }
    case 237390:
    {
        returnValue = F("Oberer Grund");
        break;
    }
    case 237391:
    {
        returnValue = F("Oberer Grundwaldweg");
        break;
    }
    case 237392:
    {
        returnValue = F("Oberer Grundweg");
        break;
    }
    case 237393:
    {
        returnValue = F("Oberer Grübweg");
        break;
    }
    case 237394:
    {
        returnValue = F("Oberer Grünbachsweg");
        break;
    }
    case 237395:
    {
        returnValue = F("Oberer Gründel");
        break;
    }
    case 237396:
    {
        returnValue = F("Oberer Gründelsweg");
        break;
    }
    case 237397:
    {
        returnValue = F("Oberer Grüneckweg");
        break;
    }
    case 237398:
    {
        returnValue = F("Oberer Grüneplanweg");
        break;
    }
    case 237399:
    {
        returnValue = F("Oberer Grüner Weg");
        break;
    }
    case 237400:
    {
        returnValue = F("Oberer Grünewaldweg");
        break;
    }
    case 237401:
    {
        returnValue = F("Oberer Grünwaldweg");
        break;
    }
    case 237402:
    {
        returnValue = F("Oberer Gusterleweg");
        break;
    }
    case 237403:
    {
        returnValue = F("Oberer Gutsweg");
        break;
    }
    case 237404:
    {
        returnValue = F("Oberer Göttelbach");
        break;
    }
    case 237405:
    {
        returnValue = F("Oberer Gürtelweg");
        break;
    }
    case 237406:
    {
        returnValue = F("Oberer Haag");
        break;
    }
    case 237407:
    {
        returnValue = F("Oberer Haarkamp");
        break;
    }
    case 237408:
    {
        returnValue = F("Oberer Haberschlagweg");
        break;
    }
    case 237409:
    {
        returnValue = F("Oberer Habichweg");
        break;
    }
    case 237410:
    {
        returnValue = F("Oberer Hackwaldweg");
        break;
    }
    case 237411:
    {
        returnValue = F("Oberer Hafendeckelweg");
        break;
    }
    case 237412:
    {
        returnValue = F("Oberer Hagen");
        break;
    }
    case 237413:
    {
        returnValue = F("Oberer Hagenweg");
        break;
    }
    case 237414:
    {
        returnValue = F("Oberer Hagwaldweg");
        break;
    }
    case 237415:
    {
        returnValue = F("Oberer Hagweg");
        break;
    }
    case 237416:
    {
        returnValue = F("Oberer Hahnenbohlweg");
        break;
    }
    case 237417:
    {
        returnValue = F("Oberer Hahnenböhlweg");
        break;
    }
    case 237418:
    {
        returnValue = F("Oberer Hahnenkopf");
        break;
    }
    case 237419:
    {
        returnValue = F("Oberer Haidweg");
        break;
    }
    case 237420:
    {
        returnValue = F("Oberer Hainberg");
        break;
    }
    case 237421:
    {
        returnValue = F("Oberer Hainbergweg");
        break;
    }
    case 237422:
    {
        returnValue = F("Oberer Haingraben");
        break;
    }
    case 237423:
    {
        returnValue = F("Oberer Hainweg");
        break;
    }
    case 237424:
    {
        returnValue = F("Oberer Hairlesgehrnweg");
        break;
    }
    case 237425:
    {
        returnValue = F("Oberer Haldenweg");
        break;
    }
    case 237426:
    {
        returnValue = F("Oberer Hallgarten");
        break;
    }
    case 237427:
    {
        returnValue = F("Oberer Hambach");
        break;
    }
    case 237428:
    {
        returnValue = F("Oberer Hammer");
        break;
    }
    case 237429:
    {
        returnValue = F("Oberer Hammerbügl");
        break;
    }
    case 237430:
    {
        returnValue = F("Oberer Hammerrain");
        break;
    }
    case 237431:
    {
        returnValue = F("Oberer Hammweg");
        break;
    }
    case 237432:
    {
        returnValue = F("Oberer Hamscheberg");
        break;
    }
    case 237433:
    {
        returnValue = F("Oberer Handweiser");
        break;
    }
    case 237434:
    {
        returnValue = F("Oberer Hang");
        break;
    }
    case 237435:
    {
        returnValue = F("Oberer Hangertweg");
        break;
    }
    case 237436:
    {
        returnValue = F("Oberer Hangweg");
        break;
    }
    case 237437:
    {
        returnValue = F("Oberer Hannwiesenweg");
        break;
    }
    case 237438:
    {
        returnValue = F("Oberer Hanselwaldweg");
        break;
    }
    case 237439:
    {
        returnValue = F("Oberer Hansenbühlweg");
        break;
    }
    case 237440:
    {
        returnValue = F("Oberer Happeyweg");
        break;
    }
    case 237441:
    {
        returnValue = F("Oberer Harbuckweg");
        break;
    }
    case 237442:
    {
        returnValue = F("Oberer Hardthof");
        break;
    }
    case 237443:
    {
        returnValue = F("Oberer Hardtweg");
        break;
    }
    case 237444:
    {
        returnValue = F("Oberer Hardweg");
        break;
    }
    case 237445:
    {
        returnValue = F("Oberer Hartheweg");
        break;
    }
    case 237446:
    {
        returnValue = F("Oberer Harthweg");
        break;
    }
    case 237447:
    {
        returnValue = F("Oberer Hartungsweg");
        break;
    }
    case 237448:
    {
        returnValue = F("Oberer Hartweg");
        break;
    }
    case 237449:
    {
        returnValue = F("Oberer Hasenberg");
        break;
    }
    case 237450:
    {
        returnValue = F("Oberer Hasenknuck");
        break;
    }
    case 237451:
    {
        returnValue = F("Oberer Hasenkopfweg");
        break;
    }
    case 237452:
    {
        returnValue = F("Oberer Hasenteichweg");
        break;
    }
    case 237453:
    {
        returnValue = F("Oberer Hasenwaldweg");
        break;
    }
    case 237454:
    {
        returnValue = F("Oberer Haskamp");
        break;
    }
    case 237455:
    {
        returnValue = F("Oberer Hasselbach");
        break;
    }
    case 237456:
    {
        returnValue = F("Oberer Hasselbacherforlenweg");
        break;
    }
    case 237457:
    {
        returnValue = F("Oberer Hasselweg");
        break;
    }
    case 237458:
    {
        returnValue = F("Oberer Haubenbergweg");
        break;
    }
    case 237459:
    {
        returnValue = F("Oberer Haugen");
        break;
    }
    case 237460:
    {
        returnValue = F("Oberer Haumbach");
        break;
    }
    case 237461:
    {
        returnValue = F("Oberer Hauptweg");
        break;
    }
    case 237462:
    {
        returnValue = F("Oberer Hauserweg");
        break;
    }
    case 237463:
    {
        returnValue = F("Oberer Hauswang");
        break;
    }
    case 237464:
    {
        returnValue = F("Oberer Hauweg");
        break;
    }
    case 237465:
    {
        returnValue = F("Oberer Heckenweg");
        break;
    }
    case 237466:
    {
        returnValue = F("Oberer Heersbergweg");
        break;
    }
    case 237467:
    {
        returnValue = F("Oberer Heideckweg");
        break;
    }
    case 237468:
    {
        returnValue = F("Oberer Heidelberg");
        break;
    }
    case 237469:
    {
        returnValue = F("Oberer Heidenkirchweg");
        break;
    }
    case 237470:
    {
        returnValue = F("Oberer Heidenweg");
        break;
    }
    case 237471:
    {
        returnValue = F("Oberer Heideweg");
        break;
    }
    case 237472:
    {
        returnValue = F("Oberer Heidschlickweg");
        break;
    }
    case 237473:
    {
        returnValue = F("Oberer Heidweg");
        break;
    }
    case 237474:
    {
        returnValue = F("Oberer Heiligenhof");
        break;
    }
    case 237475:
    {
        returnValue = F("Oberer Heiligenrainweg");
        break;
    }
    case 237476:
    {
        returnValue = F("Oberer Heimstättenweg");
        break;
    }
    case 237477:
    {
        returnValue = F("Oberer Heinzengrund");
        break;
    }
    case 237478:
    {
        returnValue = F("Oberer Heißbergweg");
        break;
    }
    case 237479:
    {
        returnValue = F("Oberer Hellenweg");
        break;
    }
    case 237480:
    {
        returnValue = F("Oberer Hellerweg");
        break;
    }
    case 237481:
    {
        returnValue = F("Oberer Hellrain");
        break;
    }
    case 237482:
    {
        returnValue = F("Oberer Hellweg");
        break;
    }
    case 237483:
    {
        returnValue = F("Oberer Hengsbacher Weg");
        break;
    }
    case 237484:
    {
        returnValue = F("Oberer Herdweg");
        break;
    }
    case 237485:
    {
        returnValue = F("Oberer Heriedenweg");
        break;
    }
    case 237486:
    {
        returnValue = F("Oberer Hermann-Löns-Weg");
        break;
    }
    case 237487:
    {
        returnValue = F("Oberer Herrenberg");
        break;
    }
    case 237488:
    {
        returnValue = F("Oberer Herrenpfad");
        break;
    }
    case 237489:
    {
        returnValue = F("Oberer Herrenstein");
        break;
    }
    case 237490:
    {
        returnValue = F("Oberer Herrenweg");
        break;
    }
    case 237491:
    {
        returnValue = F("Oberer Herrlichweg");
        break;
    }
    case 237492:
    {
        returnValue = F("Oberer Herrschaftswaldweg");
        break;
    }
    case 237493:
    {
        returnValue = F("Oberer Herzenberg");
        break;
    }
    case 237494:
    {
        returnValue = F("Oberer Herzogweg");
        break;
    }
    case 237495:
    {
        returnValue = F("Oberer Heubergweg");
        break;
    }
    case 237496:
    {
        returnValue = F("Oberer Heuchelbach");
        break;
    }
    case 237497:
    {
        returnValue = F("Oberer Heukamp");
        break;
    }
    case 237498:
    {
        returnValue = F("Oberer Heukopfweg");
        break;
    }
    case 237499:
    {
        returnValue = F("Oberer Heustellenweg");
        break;
    }
    case 237500:
    {
        returnValue = F("Oberer Heuweg");
        break;
    }
    case 237501:
    {
        returnValue = F("Oberer Hilsigweg");
        break;
    }
    case 237502:
    {
        returnValue = F("Oberer Himbeerschlagweg");
        break;
    }
    case 237503:
    {
        returnValue = F("Oberer Hintersgrabenweg");
        break;
    }
    case 237504:
    {
        returnValue = F("Oberer Hinzigberg");
        break;
    }
    case 237505:
    {
        returnValue = F("Oberer Hirnberg");
        break;
    }
    case 237506:
    {
        returnValue = F("Oberer Hirschberg");
        break;
    }
    case 237507:
    {
        returnValue = F("Oberer Hirschpfad");
        break;
    }
    case 237508:
    {
        returnValue = F("Oberer Hirschwaldweg");
        break;
    }
    case 237509:
    {
        returnValue = F("Oberer Hirtenrain");
        break;
    }
    case 237510:
    {
        returnValue = F("Oberer Hochwaldweg");
        break;
    }
    case 237511:
    {
        returnValue = F("Oberer Hochweg");
        break;
    }
    case 237512:
    {
        returnValue = F("Oberer Hof");
        break;
    }
    case 237513:
    {
        returnValue = F("Oberer Hofbauernweg");
        break;
    }
    case 237514:
    {
        returnValue = F("Oberer Hofberg");
        break;
    }
    case 237515:
    {
        returnValue = F("Oberer Hofhauweg");
        break;
    }
    case 237516:
    {
        returnValue = F("Oberer Hofwaldweg");
        break;
    }
    case 237517:
    {
        returnValue = F("Oberer Hofweg");
        break;
    }
    case 237518:
    {
        returnValue = F("Oberer Hohenförsiekweg");
        break;
    }
    case 237519:
    {
        returnValue = F("Oberer Hohenwarsleber Weg");
        break;
    }
    case 237520:
    {
        returnValue = F("Oberer Hohlenweg");
        break;
    }
    case 237521:
    {
        returnValue = F("Oberer Hohlweg");
        break;
    }
    case 237522:
    {
        returnValue = F("Oberer Hohnekammhangweg");
        break;
    }
    case 237523:
    {
        returnValue = F("Oberer Hohwaldweg");
        break;
    }
    case 237524:
    {
        returnValue = F("Oberer Hohweg");
        break;
    }
    case 237525:
    {
        returnValue = F("Oberer Holderbühlweg");
        break;
    }
    case 237526:
    {
        returnValue = F("Oberer Holler");
        break;
    }
    case 237527:
    {
        returnValue = F("Oberer Holmershornweg");
        break;
    }
    case 237528:
    {
        returnValue = F("Oberer Holsteinweg");
        break;
    }
    case 237529:
    {
        returnValue = F("Oberer Holzackerweg");
        break;
    }
    case 237530:
    {
        returnValue = F("Oberer Holzbrunnenweg");
        break;
    }
    case 237531:
    {
        returnValue = F("Oberer Holzschuhwaldweg");
        break;
    }
    case 237532:
    {
        returnValue = F("Oberer Holzweg");
        break;
    }
    case 237533:
    {
        returnValue = F("Oberer Hoppenlauweg");
        break;
    }
    case 237534:
    {
        returnValue = F("Oberer Horizontalweg");
        break;
    }
    case 237535:
    {
        returnValue = F("Oberer Hornbachstaden");
        break;
    }
    case 237536:
    {
        returnValue = F("Oberer Hornweg");
        break;
    }
    case 237537:
    {
        returnValue = F("Oberer Hubweg");
        break;
    }
    case 237538:
    {
        returnValue = F("Oberer Hummelbachweg");
        break;
    }
    case 237539:
    {
        returnValue = F("Oberer Hummelberg");
        break;
    }
    case 237540:
    {
        returnValue = F("Oberer Hundemarkt");
        break;
    }
    case 237541:
    {
        returnValue = F("Oberer Hundsrückweg");
        break;
    }
    case 237542:
    {
        returnValue = F("Oberer Husenberg");
        break;
    }
    case 237543:
    {
        returnValue = F("Oberer Häuselbergweg");
        break;
    }
    case 237544:
    {
        returnValue = F("Oberer Häuselsbergweg");
        break;
    }
    case 237545:
    {
        returnValue = F("Oberer Häuserweg");
        break;
    }
    case 237546:
    {
        returnValue = F("Oberer Häuslehaldenweg");
        break;
    }
    case 237547:
    {
        returnValue = F("Oberer Höchsten");
        break;
    }
    case 237548:
    {
        returnValue = F("Oberer Höhbastle");
        break;
    }
    case 237549:
    {
        returnValue = F("Oberer Höhenweg");
        break;
    }
    case 237550:
    {
        returnValue = F("Oberer Höhweg");
        break;
    }
    case 237551:
    {
        returnValue = F("Oberer Höllenberg");
        break;
    }
    case 237552:
    {
        returnValue = F("Oberer Höllweg");
        break;
    }
    case 237553:
    {
        returnValue = F("Oberer Hölzlesweg");
        break;
    }
    case 237554:
    {
        returnValue = F("Oberer Hörnleweg");
        break;
    }
    case 237555:
    {
        returnValue = F("Oberer Hörschbachweg");
        break;
    }
    case 237556:
    {
        returnValue = F("Oberer Hügel");
        break;
    }
    case 237557:
    {
        returnValue = F("Oberer Hühnerbergweg");
        break;
    }
    case 237558:
    {
        returnValue = F("Oberer Hühnerwässerlesweg");
        break;
    }
    case 237559:
    {
        returnValue = F("Oberer Hüttenhofweg");
        break;
    }
    case 237560:
    {
        returnValue = F("Oberer Hüttersbacher Weg");
        break;
    }
    case 237561:
    {
        returnValue = F("Oberer Hütteweg");
        break;
    }
    case 237562:
    {
        returnValue = F("Oberer Hüßberg");
        break;
    }
    case 237563:
    {
        returnValue = F("Oberer Igel");
        break;
    }
    case 237564:
    {
        returnValue = F("Oberer Ilgenbergweg");
        break;
    }
    case 237565:
    {
        returnValue = F("Oberer Illen");
        break;
    }
    case 237566:
    {
        returnValue = F("Oberer Illsbergweg");
        break;
    }
    case 237567:
    {
        returnValue = F("Oberer Irlweg");
        break;
    }
    case 237568:
    {
        returnValue = F("Oberer Irrwaldweg");
        break;
    }
    case 237569:
    {
        returnValue = F("Oberer Italienerweg");
        break;
    }
    case 237570:
    {
        returnValue = F("Oberer Jagdhausweg");
        break;
    }
    case 237571:
    {
        returnValue = F("Oberer Jagdweg");
        break;
    }
    case 237572:
    {
        returnValue = F("Oberer Jenneweg");
        break;
    }
    case 237573:
    {
        returnValue = F("Oberer Jesuitenweg");
        break;
    }
    case 237574:
    {
        returnValue = F("Oberer Josumsattweg");
        break;
    }
    case 237575:
    {
        returnValue = F("Oberer Junghölzlesweg");
        break;
    }
    case 237576:
    {
        returnValue = F("Oberer Jurablick");
        break;
    }
    case 237577:
    {
        returnValue = F("Oberer Kahlenberg");
        break;
    }
    case 237578:
    {
        returnValue = F("Oberer Kaiserweg");
        break;
    }
    case 237579:
    {
        returnValue = F("Oberer Kalbacher Weg");
        break;
    }
    case 237580:
    {
        returnValue = F("Oberer Kalk");
        break;
    }
    case 237581:
    {
        returnValue = F("Oberer Kalkofen");
        break;
    }
    case 237582:
    {
        returnValue = F("Oberer Kalkofenweg");
        break;
    }
    case 237583:
    {
        returnValue = F("Oberer Kallmatenweg");
        break;
    }
    case 237584:
    {
        returnValue = F("Oberer Kalte Klinge Weg");
        break;
    }
    case 237585:
    {
        returnValue = F("Oberer Kaltteichweg");
        break;
    }
    case 237586:
    {
        returnValue = F("Oberer Kammerloh");
        break;
    }
    case 237587:
    {
        returnValue = F("Oberer Kamp");
        break;
    }
    case 237588:
    {
        returnValue = F("Oberer Kampacker");
        break;
    }
    case 237589:
    {
        returnValue = F("Oberer Kanal");
        break;
    }
    case 237590:
    {
        returnValue = F("Oberer Kandelgrundweg");
        break;
    }
    case 237591:
    {
        returnValue = F("Oberer Kanzlerwaldweg");
        break;
    }
    case 237592:
    {
        returnValue = F("Oberer Kapellberg");
        break;
    }
    case 237593:
    {
        returnValue = F("Oberer Kapellenberg");
        break;
    }
    case 237594:
    {
        returnValue = F("Oberer Kapfweg");
        break;
    }
    case 237595:
    {
        returnValue = F("Oberer Karnweg");
        break;
    }
    case 237596:
    {
        returnValue = F("Oberer Kastaniendobel");
        break;
    }
    case 237597:
    {
        returnValue = F("Oberer Katermannshaldeweg");
        break;
    }
    case 237598:
    {
        returnValue = F("Oberer Kattenbergweg");
        break;
    }
    case 237599:
    {
        returnValue = F("Oberer Katthagen");
        break;
    }
    case 237600:
    {
        returnValue = F("Oberer Katzenbergweg");
        break;
    }
    case 237601:
    {
        returnValue = F("Oberer Katzenlochweg");
        break;
    }
    case 237602:
    {
        returnValue = F("Oberer Kaulberg");
        break;
    }
    case 237603:
    {
        returnValue = F("Oberer Kehlberg");
        break;
    }
    case 237604:
    {
        returnValue = F("Oberer Kehlhof");
        break;
    }
    case 237605:
    {
        returnValue = F("Oberer Kelchenweg");
        break;
    }
    case 237606:
    {
        returnValue = F("Oberer Kellbachdamm");
        break;
    }
    case 237607:
    {
        returnValue = F("Oberer Kellerbergweg");
        break;
    }
    case 237608:
    {
        returnValue = F("Oberer Kellergrund Weg");
        break;
    }
    case 237609:
    {
        returnValue = F("Oberer Kellermann");
        break;
    }
    case 237610:
    {
        returnValue = F("Oberer Kellerstutz");
        break;
    }
    case 237611:
    {
        returnValue = F("Oberer Kellerweg");
        break;
    }
    case 237612:
    {
        returnValue = F("Oberer Kelterplatz");
        break;
    }
    case 237613:
    {
        returnValue = F("Oberer Kenziweg");
        break;
    }
    case 237614:
    {
        returnValue = F("Oberer Kesselweg");
        break;
    }
    case 237615:
    {
        returnValue = F("Oberer Kiefergrundweg");
        break;
    }
    case 237616:
    {
        returnValue = F("Oberer Kienbergweg");
        break;
    }
    case 237617:
    {
        returnValue = F("Oberer Kiesweg");
        break;
    }
    case 237618:
    {
        returnValue = F("Oberer Kindsbergweg");
        break;
    }
    case 237619:
    {
        returnValue = F("Oberer Kirchberg");
        break;
    }
    case 237620:
    {
        returnValue = F("Oberer Kirchbergweg");
        break;
    }
    case 237621:
    {
        returnValue = F("Oberer Kircheckweg");
        break;
    }
    case 237622:
    {
        returnValue = F("Oberer Kirchensteig");
        break;
    }
    case 237623:
    {
        returnValue = F("Oberer Kirchenweg");
        break;
    }
    case 237624:
    {
        returnValue = F("Oberer Kirchhag");
        break;
    }
    case 237625:
    {
        returnValue = F("Oberer Kirchhaldenweg");
        break;
    }
    case 237626:
    {
        returnValue = F("Oberer Kirchplatz");
        break;
    }
    case 237627:
    {
        returnValue = F("Oberer Kirchsteig");
        break;
    }
    case 237628:
    {
        returnValue = F("Oberer Kirchweg");
        break;
    }
    case 237629:
    {
        returnValue = F("Oberer Kirchwiesenweg");
        break;
    }
    case 237630:
    {
        returnValue = F("Oberer Kirnbach");
        break;
    }
    case 237631:
    {
        returnValue = F("Oberer Kirschbaumweg");
        break;
    }
    case 237632:
    {
        returnValue = F("Oberer Kirschberg");
        break;
    }
    case 237633:
    {
        returnValue = F("Oberer Kirschbäumlebuck");
        break;
    }
    case 237634:
    {
        returnValue = F("Oberer Klammenweg");
        break;
    }
    case 237635:
    {
        returnValue = F("Oberer Klebweg");
        break;
    }
    case 237636:
    {
        returnValue = F("Oberer Kleiner Weg");
        break;
    }
    case 237637:
    {
        returnValue = F("Oberer Klingelbrunnen");
        break;
    }
    case 237638:
    {
        returnValue = F("Oberer Klingenberg");
        break;
    }
    case 237639:
    {
        returnValue = F("Oberer Klingenbergweg");
        break;
    }
    case 237640:
    {
        returnValue = F("Oberer Klingenweg");
        break;
    }
    case 237641:
    {
        returnValue = F("Oberer Klosterholzweg");
        break;
    }
    case 237642:
    {
        returnValue = F("Oberer Klosterweg");
        break;
    }
    case 237643:
    {
        returnValue = F("Oberer Klängeweg");
        break;
    }
    case 237644:
    {
        returnValue = F("Oberer Knick");
        break;
    }
    case 237645:
    {
        returnValue = F("Oberer Knopfholzweg");
        break;
    }
    case 237646:
    {
        returnValue = F("Oberer Kobelweg");
        break;
    }
    case 237647:
    {
        returnValue = F("Oberer Kochbuck");
        break;
    }
    case 237648:
    {
        returnValue = F("Oberer Kohlbachweg");
        break;
    }
    case 237649:
    {
        returnValue = F("Oberer Kohlberg");
        break;
    }
    case 237650:
    {
        returnValue = F("Oberer Kohlbergweg");
        break;
    }
    case 237651:
    {
        returnValue = F("Oberer Kohlerhauweg");
        break;
    }
    case 237652:
    {
        returnValue = F("Oberer Kohlgrubenweg");
        break;
    }
    case 237653:
    {
        returnValue = F("Oberer Kohlhütte Weg");
        break;
    }
    case 237654:
    {
        returnValue = F("Oberer Kohlweg");
        break;
    }
    case 237655:
    {
        returnValue = F("Oberer Kolbenweg");
        break;
    }
    case 237656:
    {
        returnValue = F("Oberer Kolberg");
        break;
    }
    case 237657:
    {
        returnValue = F("Oberer Komarweg");
        break;
    }
    case 237658:
    {
        returnValue = F("Oberer Konnenbergweg");
        break;
    }
    case 237659:
    {
        returnValue = F("Oberer Koppenhagen");
        break;
    }
    case 237660:
    {
        returnValue = F("Oberer Kornbergweg");
        break;
    }
    case 237661:
    {
        returnValue = F("Oberer Krankenhausweg");
        break;
    }
    case 237662:
    {
        returnValue = F("Oberer Krautelsbergweg");
        break;
    }
    case 237663:
    {
        returnValue = F("Oberer Krautgarten");
        break;
    }
    case 237664:
    {
        returnValue = F("Oberer Krautgartenweg");
        break;
    }
    case 237665:
    {
        returnValue = F("Oberer Kreesweg");
        break;
    }
    case 237666:
    {
        returnValue = F("Oberer Kreppach");
        break;
    }
    case 237667:
    {
        returnValue = F("Oberer Kreutzeichenweg");
        break;
    }
    case 237668:
    {
        returnValue = F("Oberer Kreuzacker");
        break;
    }
    case 237669:
    {
        returnValue = F("Oberer Kreuzberg");
        break;
    }
    case 237670:
    {
        returnValue = F("Oberer Kreuzbergweg");
        break;
    }
    case 237671:
    {
        returnValue = F("Oberer Kreuzheckenweg");
        break;
    }
    case 237672:
    {
        returnValue = F("Oberer Kreuzwasen");
        break;
    }
    case 237673:
    {
        returnValue = F("Oberer Kreuzweg");
        break;
    }
    case 237674:
    {
        returnValue = F("Oberer Kringel");
        break;
    }
    case 237675:
    {
        returnValue = F("Oberer Krohenberg");
        break;
    }
    case 237676:
    {
        returnValue = F("Oberer Krometweg");
        break;
    }
    case 237677:
    {
        returnValue = F("Oberer Kronbergweg");
        break;
    }
    case 237678:
    {
        returnValue = F("Oberer Kronriedweg");
        break;
    }
    case 237679:
    {
        returnValue = F("Oberer Krämer");
        break;
    }
    case 237680:
    {
        returnValue = F("Oberer Kuhberg");
        break;
    }
    case 237681:
    {
        returnValue = F("Oberer Kuhstallsweg");
        break;
    }
    case 237682:
    {
        returnValue = F("Oberer Kulm");
        break;
    }
    case 237683:
    {
        returnValue = F("Oberer Kulturweg");
        break;
    }
    case 237684:
    {
        returnValue = F("Oberer Kupferberg");
        break;
    }
    case 237685:
    {
        returnValue = F("Oberer Kurpark");
        break;
    }
    case 237686:
    {
        returnValue = F("Oberer Kutschenkopfweg");
        break;
    }
    case 237687:
    {
        returnValue = F("Oberer Käfig");
        break;
    }
    case 237688:
    {
        returnValue = F("Oberer Kähnelweg");
        break;
    }
    case 237689:
    {
        returnValue = F("Oberer Käsackerweg");
        break;
    }
    case 237690:
    {
        returnValue = F("Oberer Käseweg");
        break;
    }
    case 237691:
    {
        returnValue = F("Oberer Käuzerain");
        break;
    }
    case 237692:
    {
        returnValue = F("Oberer Köhlgartenweg");
        break;
    }
    case 237693:
    {
        returnValue = F("Oberer Köhrnersweg");
        break;
    }
    case 237694:
    {
        returnValue = F("Oberer Königsberg");
        break;
    }
    case 237695:
    {
        returnValue = F("Oberer Königsberger Weg");
        break;
    }
    case 237696:
    {
        returnValue = F("Oberer Köpflesweg");
        break;
    }
    case 237697:
    {
        returnValue = F("Oberer Köppel");
        break;
    }
    case 237698:
    {
        returnValue = F("Oberer Köppelesweg");
        break;
    }
    case 237699:
    {
        returnValue = F("Oberer Kühlenberg");
        break;
    }
    case 237700:
    {
        returnValue = F("Oberer Kühpfad");
        break;
    }
    case 237701:
    {
        returnValue = F("Oberer Kümmelbergsweg");
        break;
    }
    case 237702:
    {
        returnValue = F("Oberer Künzlisbergweg");
        break;
    }
    case 237703:
    {
        returnValue = F("Oberer Laakeweg");
        break;
    }
    case 237704:
    {
        returnValue = F("Oberer Laberweg");
        break;
    }
    case 237705:
    {
        returnValue = F("Oberer Lachenweg");
        break;
    }
    case 237706:
    {
        returnValue = F("Oberer Ladenberg");
        break;
    }
    case 237707:
    {
        returnValue = F("Oberer Lagweg");
        break;
    }
    case 237708:
    {
        returnValue = F("Oberer Laiernweg");
        break;
    }
    case 237709:
    {
        returnValue = F("Oberer Lampertweg");
        break;
    }
    case 237710:
    {
        returnValue = F("Oberer Langehaldenweg");
        break;
    }
    case 237711:
    {
        returnValue = F("Oberer Langenbuschweg");
        break;
    }
    case 237712:
    {
        returnValue = F("Oberer Langengrund");
        break;
    }
    case 237713:
    {
        returnValue = F("Oberer Langenwaldweg");
        break;
    }
    case 237714:
    {
        returnValue = F("Oberer Langer Graben");
        break;
    }
    case 237715:
    {
        returnValue = F("Oberer Langertalweg");
        break;
    }
    case 237716:
    {
        returnValue = F("Oberer Langewendeweg");
        break;
    }
    case 237717:
    {
        returnValue = F("Oberer Langhaldenweg");
        break;
    }
    case 237718:
    {
        returnValue = F("Oberer Langtalweg");
        break;
    }
    case 237719:
    {
        returnValue = F("Oberer Laubenheimer Weg");
        break;
    }
    case 237720:
    {
        returnValue = F("Oberer Laurenzerweg");
        break;
    }
    case 237721:
    {
        returnValue = F("Oberer Lausbühlhaldeweg");
        break;
    }
    case 237722:
    {
        returnValue = F("Oberer Lautenweg");
        break;
    }
    case 237723:
    {
        returnValue = F("Oberer Lautrupweg");
        break;
    }
    case 237724:
    {
        returnValue = F("Oberer Lederberg");
        break;
    }
    case 237725:
    {
        returnValue = F("Oberer Lederbergweg");
        break;
    }
    case 237726:
    {
        returnValue = F("Oberer Legel");
        break;
    }
    case 237727:
    {
        returnValue = F("Oberer Lehen");
        break;
    }
    case 237728:
    {
        returnValue = F("Oberer Lehnernweg");
        break;
    }
    case 237729:
    {
        returnValue = F("Oberer Leibachweg");
        break;
    }
    case 237730:
    {
        returnValue = F("Oberer Leichtersbergweg");
        break;
    }
    case 237731:
    {
        returnValue = F("Oberer Leienweg");
        break;
    }
    case 237732:
    {
        returnValue = F("Oberer Leierweg");
        break;
    }
    case 237733:
    {
        returnValue = F("Oberer Leimengrubenweg");
        break;
    }
    case 237734:
    {
        returnValue = F("Oberer Leinritt");
        break;
    }
    case 237735:
    {
        returnValue = F("Oberer Leisberg");
        break;
    }
    case 237736:
    {
        returnValue = F("Oberer Leitenberg");
        break;
    }
    case 237737:
    {
        returnValue = F("Oberer Lenzenberg");
        break;
    }
    case 237738:
    {
        returnValue = F("Oberer Lerchberg");
        break;
    }
    case 237739:
    {
        returnValue = F("Oberer Lerchensteinweg");
        break;
    }
    case 237740:
    {
        returnValue = F("Oberer Lettenweg");
        break;
    }
    case 237741:
    {
        returnValue = F("Oberer Liebenweg");
        break;
    }
    case 237742:
    {
        returnValue = F("Oberer Liether Moorweg");
        break;
    }
    case 237743:
    {
        returnValue = F("Oberer Lindacher Weg");
        break;
    }
    case 237744:
    {
        returnValue = F("Oberer Lindbuckweg");
        break;
    }
    case 237745:
    {
        returnValue = F("Oberer Lindengrundweg");
        break;
    }
    case 237746:
    {
        returnValue = F("Oberer Lindenplatz");
        break;
    }
    case 237747:
    {
        returnValue = F("Oberer Lindenstruthweg");
        break;
    }
    case 237748:
    {
        returnValue = F("Oberer Lindenweg");
        break;
    }
    case 237749:
    {
        returnValue = F("Oberer Lindhardweg");
        break;
    }
    case 237750:
    {
        returnValue = F("Oberer Lindigsweg");
        break;
    }
    case 237751:
    {
        returnValue = F("Oberer Lindweg");
        break;
    }
    case 237752:
    {
        returnValue = F("Oberer Linngruber Weg");
        break;
    }
    case 237753:
    {
        returnValue = F("Oberer Linsenberg");
        break;
    }
    case 237754:
    {
        returnValue = F("Oberer Locher Weg");
        break;
    }
    case 237755:
    {
        returnValue = F("Oberer Lochschweineweg");
        break;
    }
    case 237756:
    {
        returnValue = F("Oberer Lochwaldweg");
        break;
    }
    case 237757:
    {
        returnValue = F("Oberer Lockersbergweg");
        break;
    }
    case 237758:
    {
        returnValue = F("Oberer Lohweg");
        break;
    }
    case 237759:
    {
        returnValue = F("Oberer Lus");
        break;
    }
    case 237760:
    {
        returnValue = F("Oberer Luserweg");
        break;
    }
    case 237761:
    {
        returnValue = F("Oberer Lährer Weg");
        break;
    }
    case 237762:
    {
        returnValue = F("Oberer Längsweg");
        break;
    }
    case 237763:
    {
        returnValue = F("Oberer Lärchenweg");
        break;
    }
    case 237764:
    {
        returnValue = F("Oberer Löschbrunnweg");
        break;
    }
    case 237765:
    {
        returnValue = F("Oberer Löschleitenweg");
        break;
    }
    case 237766:
    {
        returnValue = F("Oberer Lückenweg");
        break;
    }
    case 237767:
    {
        returnValue = F("Oberer Lüßweg");
        break;
    }
    case 237768:
    {
        returnValue = F("Oberer Mahlbergweg");
        break;
    }
    case 237769:
    {
        returnValue = F("Oberer Maienbergweg");
        break;
    }
    case 237770:
    {
        returnValue = F("Oberer Maienbühlweg");
        break;
    }
    case 237771:
    {
        returnValue = F("Oberer Mainkai");
        break;
    }
    case 237772:
    {
        returnValue = F("Oberer Malbachweg");
        break;
    }
    case 237773:
    {
        returnValue = F("Oberer Mannenbachweg");
        break;
    }
    case 237774:
    {
        returnValue = F("Oberer Marbacher Grenzweg");
        break;
    }
    case 237775:
    {
        returnValue = F("Oberer Markenweg");
        break;
    }
    case 237776:
    {
        returnValue = F("Oberer Marksteinweg");
        break;
    }
    case 237777:
    {
        returnValue = F("Oberer Markt");
        break;
    }
    case 237778:
    {
        returnValue = F("Oberer Marktgraben");
        break;
    }
    case 237779:
    {
        returnValue = F("Oberer Marktplatz");
        break;
    }
    case 237780:
    {
        returnValue = F("Oberer Marktsteig");
        break;
    }
    case 237781:
    {
        returnValue = F("Oberer Marktweg");
        break;
    }
    case 237782:
    {
        returnValue = F("Oberer Markweg");
        break;
    }
    case 237783:
    {
        returnValue = F("Oberer Mattackerweg");
        break;
    }
    case 237784:
    {
        returnValue = F("Oberer Mattenweg");
        break;
    }
    case 237785:
    {
        returnValue = F("Oberer Mauergarten");
        break;
    }
    case 237786:
    {
        returnValue = F("Oberer Mauernweg");
        break;
    }
    case 237787:
    {
        returnValue = F("Oberer Mauerweg");
        break;
    }
    case 237788:
    {
        returnValue = F("Oberer Mausbachweg");
        break;
    }
    case 237789:
    {
        returnValue = F("Oberer Mayenbadweg");
        break;
    }
    case 237790:
    {
        returnValue = F("Oberer Meerbergsweg");
        break;
    }
    case 237791:
    {
        returnValue = F("Oberer Mehliskopfweg");
        break;
    }
    case 237792:
    {
        returnValue = F("Oberer Meisterstein");
        break;
    }
    case 237793:
    {
        returnValue = F("Oberer Meißnerblick");
        break;
    }
    case 237794:
    {
        returnValue = F("Oberer Metzgerbach");
        break;
    }
    case 237795:
    {
        returnValue = F("Oberer Michelsberg");
        break;
    }
    case 237796:
    {
        returnValue = F("Oberer Misswaldweg");
        break;
    }
    case 237797:
    {
        returnValue = F("Oberer Mistelbergweg");
        break;
    }
    case 237798:
    {
        returnValue = F("Oberer Mittelbachweg");
        break;
    }
    case 237799:
    {
        returnValue = F("Oberer Mittelberg");
        break;
    }
    case 237800:
    {
        returnValue = F("Oberer Mittelhiebweg");
        break;
    }
    case 237801:
    {
        returnValue = F("Oberer Mittelhof");
        break;
    }
    case 237802:
    {
        returnValue = F("Oberer Mittelweg");
        break;
    }
    case 237803:
    {
        returnValue = F("Oberer Molkenborn");
        break;
    }
    case 237804:
    {
        returnValue = F("Oberer Monauweg");
        break;
    }
    case 237805:
    {
        returnValue = F("Oberer Mordklingenweg");
        break;
    }
    case 237806:
    {
        returnValue = F("Oberer Mossweg");
        break;
    }
    case 237807:
    {
        returnValue = F("Oberer Märkischer Weg");
        break;
    }
    case 237808:
    {
        returnValue = F("Oberer Mönchelenweg");
        break;
    }
    case 237809:
    {
        returnValue = F("Oberer Mörick");
        break;
    }
    case 237810:
    {
        returnValue = F("Oberer Möstweg");
        break;
    }
    case 237811:
    {
        returnValue = F("Oberer Mühlbach");
        break;
    }
    case 237812:
    {
        returnValue = F("Oberer Mühlberg");
        break;
    }
    case 237813:
    {
        returnValue = F("Oberer Mühlbergweg");
        break;
    }
    case 237814:
    {
        returnValue = F("Oberer Mühlbogen");
        break;
    }
    case 237815:
    {
        returnValue = F("Oberer Mühlenberg");
        break;
    }
    case 237816:
    {
        returnValue = F("Oberer Mühlenbergweg");
        break;
    }
    case 237817:
    {
        returnValue = F("Oberer Mühlenblick");
        break;
    }
    case 237818:
    {
        returnValue = F("Oberer Mühlengraben");
        break;
    }
    case 237819:
    {
        returnValue = F("Oberer Mühlenhof");
        break;
    }
    case 237820:
    {
        returnValue = F("Oberer Mühlenteich");
        break;
    }
    case 237821:
    {
        returnValue = F("Oberer Mühlenweg");
        break;
    }
    case 237822:
    {
        returnValue = F("Oberer Mühlesbergweg");
        break;
    }
    case 237823:
    {
        returnValue = F("Oberer Mühleweg");
        break;
    }
    case 237824:
    {
        returnValue = F("Oberer Mühlfeldweg");
        break;
    }
    case 237825:
    {
        returnValue = F("Oberer Mühlgraben");
        break;
    }
    case 237826:
    {
        returnValue = F("Oberer Mühlhof");
        break;
    }
    case 237827:
    {
        returnValue = F("Oberer Mühlholzweg");
        break;
    }
    case 237828:
    {
        returnValue = F("Oberer Mühlhübelweg");
        break;
    }
    case 237829:
    {
        returnValue = F("Oberer Mühlpfad");
        break;
    }
    case 237830:
    {
        returnValue = F("Oberer Mühlrain");
        break;
    }
    case 237831:
    {
        returnValue = F("Oberer Mühlrech");
        break;
    }
    case 237832:
    {
        returnValue = F("Oberer Mühlsteig");
        break;
    }
    case 237833:
    {
        returnValue = F("Oberer Mühlsteinweg");
        break;
    }
    case 237834:
    {
        returnValue = F("Oberer Mühlwaldweg");
        break;
    }
    case 237835:
    {
        returnValue = F("Oberer Mühlweg");
        break;
    }
    case 237836:
    {
        returnValue = F("Oberer Mühlwiesenweg");
        break;
    }
    case 237837:
    {
        returnValue = F("Oberer Müllersgrund");
        break;
    }
    case 237838:
    {
        returnValue = F("Oberer Nackenweg");
        break;
    }
    case 237839:
    {
        returnValue = F("Oberer Nassachweg");
        break;
    }
    case 237840:
    {
        returnValue = F("Oberer Natzschungweg");
        break;
    }
    case 237841:
    {
        returnValue = F("Oberer Nebenweg");
        break;
    }
    case 237842:
    {
        returnValue = F("Oberer Neckarhaldenweg");
        break;
    }
    case 237843:
    {
        returnValue = F("Oberer Neuberg");
        break;
    }
    case 237844:
    {
        returnValue = F("Oberer Neubergweg");
        break;
    }
    case 237845:
    {
        returnValue = F("Oberer Neubrunnenweg");
        break;
    }
    case 237846:
    {
        returnValue = F("Oberer Neue Schlägweg");
        break;
    }
    case 237847:
    {
        returnValue = F("Oberer Neue Welt Weg");
        break;
    }
    case 237848:
    {
        returnValue = F("Oberer Neuenbergweg");
        break;
    }
    case 237849:
    {
        returnValue = F("Oberer Neuer Weg");
        break;
    }
    case 237850:
    {
        returnValue = F("Oberer Neurißbergweg");
        break;
    }
    case 237851:
    {
        returnValue = F("Oberer Neuwegsbergweg");
        break;
    }
    case 237852:
    {
        returnValue = F("Oberer Niederbergweg");
        break;
    }
    case 237853:
    {
        returnValue = F("Oberer Nistlerweg");
        break;
    }
    case 237854:
    {
        returnValue = F("Oberer Nonnenbrunnenweg");
        break;
    }
    case 237855:
    {
        returnValue = F("Oberer Nordendweg");
        break;
    }
    case 237856:
    {
        returnValue = F("Oberer Nordstetter Weg");
        break;
    }
    case 237857:
    {
        returnValue = F("Oberer Ochsenberg");
        break;
    }
    case 237858:
    {
        returnValue = F("Oberer Ochsentalweg");
        break;
    }
    case 237859:
    {
        returnValue = F("Oberer Oderweg");
        break;
    }
    case 237860:
    {
        returnValue = F("Oberer Ohmweg");
        break;
    }
    case 237861:
    {
        returnValue = F("Oberer Ohrenbacher Weg");
        break;
    }
    case 237862:
    {
        returnValue = F("Oberer Ornberg");
        break;
    }
    case 237863:
    {
        returnValue = F("Oberer Ortberg");
        break;
    }
    case 237864:
    {
        returnValue = F("Oberer Ortesweg");
        break;
    }
    case 237865:
    {
        returnValue = F("Oberer Ortlochweg");
        break;
    }
    case 237866:
    {
        returnValue = F("Oberer Ottiliendobelweg");
        break;
    }
    case 237867:
    {
        returnValue = F("Oberer Ottilienweg");
        break;
    }
    case 237868:
    {
        returnValue = F("Oberer Pahnsiek");
        break;
    }
    case 237869:
    {
        returnValue = F("Oberer Palmenwaldweg");
        break;
    }
    case 237870:
    {
        returnValue = F("Oberer Panoramaweg");
        break;
    }
    case 237871:
    {
        returnValue = F("Oberer Panoramerweg");
        break;
    }
    case 237872:
    {
        returnValue = F("Oberer Pappelhaldenweg");
        break;
    }
    case 237873:
    {
        returnValue = F("Oberer Park");
        break;
    }
    case 237874:
    {
        returnValue = F("Oberer Parkweg");
        break;
    }
    case 237875:
    {
        returnValue = F("Oberer Paulter Weg");
        break;
    }
    case 237876:
    {
        returnValue = F("Oberer Pelzackerweg");
        break;
    }
    case 237877:
    {
        returnValue = F("Oberer Pelzhügel");
        break;
    }
    case 237878:
    {
        returnValue = F("Oberer Pfad");
        break;
    }
    case 237879:
    {
        returnValue = F("Oberer Pfaffenberg");
        break;
    }
    case 237880:
    {
        returnValue = F("Oberer Pfaffenpfad");
        break;
    }
    case 237881:
    {
        returnValue = F("Oberer Pfaffenrain");
        break;
    }
    case 237882:
    {
        returnValue = F("Oberer Pfannenstiel");
        break;
    }
    case 237883:
    {
        returnValue = F("Oberer Pfarracker");
        break;
    }
    case 237884:
    {
        returnValue = F("Oberer Pfarrberg");
        break;
    }
    case 237885:
    {
        returnValue = F("Oberer Pfefferlache");
        break;
    }
    case 237886:
    {
        returnValue = F("Oberer Pfingstrasen");
        break;
    }
    case 237887:
    {
        returnValue = F("Oberer Pfützenweg");
        break;
    }
    case 237888:
    {
        returnValue = F("Oberer Philosophenweg");
        break;
    }
    case 237889:
    {
        returnValue = F("Oberer Plan");
        break;
    }
    case 237890:
    {
        returnValue = F("Oberer Plattenberg");
        break;
    }
    case 237891:
    {
        returnValue = F("Oberer Platz");
        break;
    }
    case 237892:
    {
        returnValue = F("Oberer Platzer Weg");
        break;
    }
    case 237893:
    {
        returnValue = F("Oberer Plänchenweg");
        break;
    }
    case 237894:
    {
        returnValue = F("Oberer Prielweg");
        break;
    }
    case 237895:
    {
        returnValue = F("Oberer Priesterweg");
        break;
    }
    case 237896:
    {
        returnValue = F("Oberer Prägerbödenweg");
        break;
    }
    case 237897:
    {
        returnValue = F("Oberer Pustenberg");
        break;
    }
    case 237898:
    {
        returnValue = F("Oberer Putzenberg");
        break;
    }
    case 237899:
    {
        returnValue = F("Oberer Pürschwaldweg");
        break;
    }
    case 237900:
    {
        returnValue = F("Oberer Quellberg");
        break;
    }
    case 237901:
    {
        returnValue = F("Oberer Quellenweg");
        break;
    }
    case 237902:
    {
        returnValue = F("Oberer Quellweg");
        break;
    }
    case 237903:
    {
        returnValue = F("Oberer Querweg");
        break;
    }
    case 237904:
    {
        returnValue = F("Oberer Rain");
        break;
    }
    case 237905:
    {
        returnValue = F("Oberer Rainbrunnen");
        break;
    }
    case 237906:
    {
        returnValue = F("Oberer Rainweg");
        break;
    }
    case 237907:
    {
        returnValue = F("Oberer Ramshaldeweg");
        break;
    }
    case 237908:
    {
        returnValue = F("Oberer Randweg");
        break;
    }
    case 237909:
    {
        returnValue = F("Oberer Rangen");
        break;
    }
    case 237910:
    {
        returnValue = F("Oberer Rappeneckweg");
        break;
    }
    case 237911:
    {
        returnValue = F("Oberer Rasenweg");
        break;
    }
    case 237912:
    {
        returnValue = F("Oberer Rasselweg");
        break;
    }
    case 237913:
    {
        returnValue = F("Oberer Rathsteichweg");
        break;
    }
    case 237914:
    {
        returnValue = F("Oberer Rauhaldeweg");
        break;
    }
    case 237915:
    {
        returnValue = F("Oberer Rauschweg");
        break;
    }
    case 237916:
    {
        returnValue = F("Oberer Rebberg");
        break;
    }
    case 237917:
    {
        returnValue = F("Oberer Rebbergweg");
        break;
    }
    case 237918:
    {
        returnValue = F("Oberer Rechacker Weg");
        break;
    }
    case 237919:
    {
        returnValue = F("Oberer Rechenbergweg");
        break;
    }
    case 237920:
    {
        returnValue = F("Oberer Reekenweg");
        break;
    }
    case 237921:
    {
        returnValue = F("Oberer Regenanger");
        break;
    }
    case 237922:
    {
        returnValue = F("Oberer Rehbuhlweg");
        break;
    }
    case 237923:
    {
        returnValue = F("Oberer Reichelenbergweg");
        break;
    }
    case 237924:
    {
        returnValue = F("Oberer Reikweg");
        break;
    }
    case 237925:
    {
        returnValue = F("Oberer Reimertweg");
        break;
    }
    case 237926:
    {
        returnValue = F("Oberer Reisberg");
        break;
    }
    case 237927:
    {
        returnValue = F("Oberer Reitgrund");
        break;
    }
    case 237928:
    {
        returnValue = F("Oberer Renksteg");
        break;
    }
    case 237929:
    {
        returnValue = F("Oberer Rennbachweg");
        break;
    }
    case 237930:
    {
        returnValue = F("Oberer Rennebaum");
        break;
    }
    case 237931:
    {
        returnValue = F("Oberer Renngrund");
        break;
    }
    case 237932:
    {
        returnValue = F("Oberer Rennweg");
        break;
    }
    case 237933:
    {
        returnValue = F("Oberer Reupersbergweg");
        break;
    }
    case 237934:
    {
        returnValue = F("Oberer Reutersberg");
        break;
    }
    case 237935:
    {
        returnValue = F("Oberer Reuteweg");
        break;
    }
    case 237936:
    {
        returnValue = F("Oberer Richters Lochweg");
        break;
    }
    case 237937:
    {
        returnValue = F("Oberer Richtersweg");
        break;
    }
    case 237938:
    {
        returnValue = F("Oberer Richtweg");
        break;
    }
    case 237939:
    {
        returnValue = F("Oberer Ried");
        break;
    }
    case 237940:
    {
        returnValue = F("Oberer Riedweg");
        break;
    }
    case 237941:
    {
        returnValue = F("Oberer Riegersbach");
        break;
    }
    case 237942:
    {
        returnValue = F("Oberer Riehweg");
        break;
    }
    case 237943:
    {
        returnValue = F("Oberer Rieselfeldgraben");
        break;
    }
    case 237944:
    {
        returnValue = F("Oberer Riesenacker");
        break;
    }
    case 237945:
    {
        returnValue = F("Oberer Riessweg");
        break;
    }
    case 237946:
    {
        returnValue = F("Oberer Riesterweg");
        break;
    }
    case 237947:
    {
        returnValue = F("Oberer Ring");
        break;
    }
    case 237948:
    {
        returnValue = F("Oberer Ringweg");
        break;
    }
    case 237949:
    {
        returnValue = F("Oberer Ringweg - Trimmpfad");
        break;
    }
    case 237950:
    {
        returnValue = F("Oberer Ristchenweg");
        break;
    }
    case 237951:
    {
        returnValue = F("Oberer Rittbergweg");
        break;
    }
    case 237952:
    {
        returnValue = F("Oberer Rofachweg");
        break;
    }
    case 237953:
    {
        returnValue = F("Oberer Rohrwaldweg");
        break;
    }
    case 237954:
    {
        returnValue = F("Oberer Romkerkopfweg");
        break;
    }
    case 237955:
    {
        returnValue = F("Oberer Rosberg");
        break;
    }
    case 237956:
    {
        returnValue = F("Oberer Rosenberg");
        break;
    }
    case 237957:
    {
        returnValue = F("Oberer Rosenbergweg");
        break;
    }
    case 237958:
    {
        returnValue = F("Oberer Rosengarten");
        break;
    }
    case 237959:
    {
        returnValue = F("Oberer Rossbodenweg");
        break;
    }
    case 237960:
    {
        returnValue = F("Oberer Rossrück");
        break;
    }
    case 237961:
    {
        returnValue = F("Oberer Rossweg");
        break;
    }
    case 237962:
    {
        returnValue = F("Oberer Rotebühlweg");
        break;
    }
    case 237963:
    {
        returnValue = F("Oberer Rotenberg");
        break;
    }
    case 237964:
    {
        returnValue = F("Oberer Roter Rain");
        break;
    }
    case 237965:
    {
        returnValue = F("Oberer Roter-Rain-Weg");
        break;
    }
    case 237966:
    {
        returnValue = F("Oberer Rothweg");
        break;
    }
    case 237967:
    {
        returnValue = F("Oberer Rotlaufweg");
        break;
    }
    case 237968:
    {
        returnValue = F("Oberer Rottenbach");
        break;
    }
    case 237969:
    {
        returnValue = F("Oberer Rottlandweg");
        break;
    }
    case 237970:
    {
        returnValue = F("Oberer Roßwaldweg");
        break;
    }
    case 237971:
    {
        returnValue = F("Oberer Rubersbachweg");
        break;
    }
    case 237972:
    {
        returnValue = F("Oberer Rundweg");
        break;
    }
    case 237973:
    {
        returnValue = F("Oberer Röderweg");
        break;
    }
    case 237974:
    {
        returnValue = F("Oberer Röhrensteig");
        break;
    }
    case 237975:
    {
        returnValue = F("Oberer Römerweg");
        break;
    }
    case 237976:
    {
        returnValue = F("Oberer Rötelweg");
        break;
    }
    case 237977:
    {
        returnValue = F("Oberer Röthelgrabenweg");
        break;
    }
    case 237978:
    {
        returnValue = F("Oberer Röthelweg");
        break;
    }
    case 237979:
    {
        returnValue = F("Oberer Röthlaaken");
        break;
    }
    case 237980:
    {
        returnValue = F("Oberer Rößberg");
        break;
    }
    case 237981:
    {
        returnValue = F("Oberer Rückenweg");
        break;
    }
    case 237982:
    {
        returnValue = F("Oberer Rühlesbergweg");
        break;
    }
    case 237983:
    {
        returnValue = F("Oberer Rüttiweg");
        break;
    }
    case 237984:
    {
        returnValue = F("Oberer Saatschulweg");
        break;
    }
    case 237985:
    {
        returnValue = F("Oberer Sachsenweg");
        break;
    }
    case 237986:
    {
        returnValue = F("Oberer Sackbergweg");
        break;
    }
    case 237987:
    {
        returnValue = F("Oberer Salltalweg");
        break;
    }
    case 237988:
    {
        returnValue = F("Oberer Salzlackenweg");
        break;
    }
    case 237989:
    {
        returnValue = F("Oberer Sampelweg");
        break;
    }
    case 237990:
    {
        returnValue = F("Oberer Sand");
        break;
    }
    case 237991:
    {
        returnValue = F("Oberer Sandacker");
        break;
    }
    case 237992:
    {
        returnValue = F("Oberer Sandberg");
        break;
    }
    case 237993:
    {
        returnValue = F("Oberer Sandbrink");
        break;
    }
    case 237994:
    {
        returnValue = F("Oberer Sandgrubenweg");
        break;
    }
    case 237995:
    {
        returnValue = F("Oberer Sandklingenweg");
        break;
    }
    case 237996:
    {
        returnValue = F("Oberer Sandrainweg");
        break;
    }
    case 237997:
    {
        returnValue = F("Oberer Sandrech");
        break;
    }
    case 237998:
    {
        returnValue = F("Oberer Sandweg");
        break;
    }
    case 237999:
    {
        returnValue = F("Oberer Sankt Nikolausweg");
        break;
    }
    case 238000:
    {
        returnValue = F("Oberer Sattlerberg");
        break;
    }
    case 238001:
    {
        returnValue = F("Oberer Saubadweg");
        break;
    }
    case 238002:
    {
        returnValue = F("Oberer Saubrunnenweg");
        break;
    }
    case 238003:
    {
        returnValue = F("Oberer Saufangweg");
        break;
    }
    case 238004:
    {
        returnValue = F("Oberer Saulachenweg");
        break;
    }
    case 238005:
    {
        returnValue = F("Oberer Saum");
        break;
    }
    case 238006:
    {
        returnValue = F("Oberer Saumweg");
        break;
    }
    case 238007:
    {
        returnValue = F("Oberer Schachbaumweg");
        break;
    }
    case 238008:
    {
        returnValue = F("Oberer Schachenmühlenweg");
        break;
    }
    case 238009:
    {
        returnValue = F("Oberer Schachenweg");
        break;
    }
    case 238010:
    {
        returnValue = F("Oberer Schafackerweg");
        break;
    }
    case 238011:
    {
        returnValue = F("Oberer Schafbrückenweg");
        break;
    }
    case 238012:
    {
        returnValue = F("Oberer Schafhofweg");
        break;
    }
    case 238013:
    {
        returnValue = F("Oberer Schafpferchweg");
        break;
    }
    case 238014:
    {
        returnValue = F("Oberer Schafstallkamp");
        break;
    }
    case 238015:
    {
        returnValue = F("Oberer Schafweg");
        break;
    }
    case 238016:
    {
        returnValue = F("Oberer Schangengarten");
        break;
    }
    case 238017:
    {
        returnValue = F("Oberer Schattbergweg");
        break;
    }
    case 238018:
    {
        returnValue = F("Oberer Scheibenbergweg");
        break;
    }
    case 238019:
    {
        returnValue = F("Oberer Scheibenbühl");
        break;
    }
    case 238020:
    {
        returnValue = F("Oberer Scheibenweg");
        break;
    }
    case 238021:
    {
        returnValue = F("Oberer Scheideweg");
        break;
    }
    case 238022:
    {
        returnValue = F("Oberer Scheinbergweg");
        break;
    }
    case 238023:
    {
        returnValue = F("Oberer Scheithauweg");
        break;
    }
    case 238024:
    {
        returnValue = F("Oberer Schelmen");
        break;
    }
    case 238025:
    {
        returnValue = F("Oberer Schenkgarten");
        break;
    }
    case 238026:
    {
        returnValue = F("Oberer Scheuermattweg");
        break;
    }
    case 238027:
    {
        returnValue = F("Oberer Schickenweg");
        break;
    }
    case 238028:
    {
        returnValue = F("Oberer Schimmelweg");
        break;
    }
    case 238029:
    {
        returnValue = F("Oberer Schlagweg");
        break;
    }
    case 238030:
    {
        returnValue = F("Oberer Schlangengraben");
        break;
    }
    case 238031:
    {
        returnValue = F("Oberer Schlangenweg");
        break;
    }
    case 238032:
    {
        returnValue = F("Oberer Schlatterweg");
        break;
    }
    case 238033:
    {
        returnValue = F("Oberer Schlechtbergweg");
        break;
    }
    case 238034:
    {
        returnValue = F("Oberer Schleichwaldweg");
        break;
    }
    case 238035:
    {
        returnValue = F("Oberer Schleifrain");
        break;
    }
    case 238036:
    {
        returnValue = F("Oberer Schleifweg");
        break;
    }
    case 238037:
    {
        returnValue = F("Oberer Schleisweg");
        break;
    }
    case 238038:
    {
        returnValue = F("Oberer Schlichteweg");
        break;
    }
    case 238039:
    {
        returnValue = F("Oberer Schlipfweg");
        break;
    }
    case 238040:
    {
        returnValue = F("Oberer Schlittenweg");
        break;
    }
    case 238041:
    {
        returnValue = F("Oberer Schlossgarten");
        break;
    }
    case 238042:
    {
        returnValue = F("Oberer Schlosshangweg");
        break;
    }
    case 238043:
    {
        returnValue = F("Oberer Schloßhang");
        break;
    }
    case 238044:
    {
        returnValue = F("Oberer Schloßhof");
        break;
    }
    case 238045:
    {
        returnValue = F("Oberer Schloßkopfweg");
        break;
    }
    case 238046:
    {
        returnValue = F("Oberer Schloßweg");
        break;
    }
    case 238047:
    {
        returnValue = F("Oberer Schlufterkopfweg");
        break;
    }
    case 238048:
    {
        returnValue = F("Oberer Schlupfaufweg");
        break;
    }
    case 238049:
    {
        returnValue = F("Oberer Schlössleweg");
        break;
    }
    case 238050:
    {
        returnValue = F("Oberer Schmalgarten");
        break;
    }
    case 238051:
    {
        returnValue = F("Oberer Schmalzbergweg");
        break;
    }
    case 238052:
    {
        returnValue = F("Oberer Schmidsberg");
        break;
    }
    case 238053:
    {
        returnValue = F("Oberer Schmiedekamp");
        break;
    }
    case 238054:
    {
        returnValue = F("Oberer Schmiedsbergweg");
        break;
    }
    case 238055:
    {
        returnValue = F("Oberer Schnaigbühlweg");
        break;
    }
    case 238056:
    {
        returnValue = F("Oberer Schnaithaldeweg");
        break;
    }
    case 238057:
    {
        returnValue = F("Oberer Schneckenweg");
        break;
    }
    case 238058:
    {
        returnValue = F("Oberer Schnetzweg");
        break;
    }
    case 238059:
    {
        returnValue = F("Oberer Schochenbachweg");
        break;
    }
    case 238060:
    {
        returnValue = F("Oberer Scholbenweg");
        break;
    }
    case 238061:
    {
        returnValue = F("Oberer Schorn");
        break;
    }
    case 238062:
    {
        returnValue = F("Oberer Schornsteinweg");
        break;
    }
    case 238063:
    {
        returnValue = F("Oberer Schozachweg");
        break;
    }
    case 238064:
    {
        returnValue = F("Oberer Schoß");
        break;
    }
    case 238065:
    {
        returnValue = F("Oberer Schrannenplatz");
        break;
    }
    case 238066:
    {
        returnValue = F("Oberer Schräger Weg");
        break;
    }
    case 238067:
    {
        returnValue = F("Oberer Schuleborn");
        break;
    }
    case 238068:
    {
        returnValue = F("Oberer Schulhof");
        break;
    }
    case 238069:
    {
        returnValue = F("Oberer Schulweg");
        break;
    }
    case 238070:
    {
        returnValue = F("Oberer Schupißweg");
        break;
    }
    case 238071:
    {
        returnValue = F("Oberer Schuramertobelweg");
        break;
    }
    case 238072:
    {
        returnValue = F("Oberer Schusterberg");
        break;
    }
    case 238073:
    {
        returnValue = F("Oberer Schutz");
        break;
    }
    case 238074:
    {
        returnValue = F("Oberer Schutzhofweg");
        break;
    }
    case 238075:
    {
        returnValue = F("Oberer Schuß");
        break;
    }
    case 238076:
    {
        returnValue = F("Oberer Schwalbenberg");
        break;
    }
    case 238077:
    {
        returnValue = F("Oberer Schwanenbachweg");
        break;
    }
    case 238078:
    {
        returnValue = F("Oberer Schwarzenbacherweg");
        break;
    }
    case 238079:
    {
        returnValue = F("Oberer Schwarzhaldeweg");
        break;
    }
    case 238080:
    {
        returnValue = F("Oberer Schwarzlachenweg");
        break;
    }
    case 238081:
    {
        returnValue = F("Oberer Schweinetalweg");
        break;
    }
    case 238082:
    {
        returnValue = F("Oberer Schweineweg");
        break;
    }
    case 238083:
    {
        returnValue = F("Oberer Schwimmbadweg");
        break;
    }
    case 238084:
    {
        returnValue = F("Oberer Schwitzbergweg");
        break;
    }
    case 238085:
    {
        returnValue = F("Oberer Schwärzbach");
        break;
    }
    case 238086:
    {
        returnValue = F("Oberer Schwöllbachweg");
        break;
    }
    case 238087:
    {
        returnValue = F("Oberer Schädlerweg");
        break;
    }
    case 238088:
    {
        returnValue = F("Oberer Schädweg");
        break;
    }
    case 238089:
    {
        returnValue = F("Oberer Schömberg");
        break;
    }
    case 238090:
    {
        returnValue = F("Oberer Schönackerweg");
        break;
    }
    case 238091:
    {
        returnValue = F("Oberer Schönberghof");
        break;
    }
    case 238092:
    {
        returnValue = F("Oberer Schönbühlweg");
        break;
    }
    case 238093:
    {
        returnValue = F("Oberer Schützengraben");
        break;
    }
    case 238094:
    {
        returnValue = F("Oberer Schützenrain");
        break;
    }
    case 238095:
    {
        returnValue = F("Oberer Sechserweg");
        break;
    }
    case 238096:
    {
        returnValue = F("Oberer See");
        break;
    }
    case 238097:
    {
        returnValue = F("Oberer Seesteig");
        break;
    }
    case 238098:
    {
        returnValue = F("Oberer Seeweg");
        break;
    }
    case 238099:
    {
        returnValue = F("Oberer Sehlemet");
        break;
    }
    case 238100:
    {
        returnValue = F("Oberer Seifertsberg");
        break;
    }
    case 238101:
    {
        returnValue = F("Oberer Seitelsdeichweg");
        break;
    }
    case 238102:
    {
        returnValue = F("Oberer Seitenweg");
        break;
    }
    case 238103:
    {
        returnValue = F("Oberer Semmetweg");
        break;
    }
    case 238104:
    {
        returnValue = F("Oberer Seyfriedweg");
        break;
    }
    case 238105:
    {
        returnValue = F("Oberer Sichlingweg");
        break;
    }
    case 238106:
    {
        returnValue = F("Oberer Sieberweg");
        break;
    }
    case 238107:
    {
        returnValue = F("Oberer Siedlungsweg");
        break;
    }
    case 238108:
    {
        returnValue = F("Oberer Siegen");
        break;
    }
    case 238109:
    {
        returnValue = F("Oberer Silberknapp");
        break;
    }
    case 238110:
    {
        returnValue = F("Oberer Silzbackenweg");
        break;
    }
    case 238111:
    {
        returnValue = F("Oberer Sindelberg");
        break;
    }
    case 238112:
    {
        returnValue = F("Oberer Singoldweg");
        break;
    }
    case 238113:
    {
        returnValue = F("Oberer Sittard");
        break;
    }
    case 238114:
    {
        returnValue = F("Oberer Sitterichweg");
        break;
    }
    case 238115:
    {
        returnValue = F("Oberer Soestweg");
        break;
    }
    case 238116:
    {
        returnValue = F("Oberer Sommerberg");
        break;
    }
    case 238117:
    {
        returnValue = F("Oberer Sommerfeldweg");
        break;
    }
    case 238118:
    {
        returnValue = F("Oberer Sommerseiteweg");
        break;
    }
    case 238119:
    {
        returnValue = F("Oberer Sommerwaldweg");
        break;
    }
    case 238120:
    {
        returnValue = F("Oberer Sommerweg");
        break;
    }
    case 238121:
    {
        returnValue = F("Oberer Sonnenberg");
        break;
    }
    case 238122:
    {
        returnValue = F("Oberer Sonnenbühl");
        break;
    }
    case 238123:
    {
        returnValue = F("Oberer Sonnenhang");
        break;
    }
    case 238124:
    {
        returnValue = F("Oberer Sonnenrain");
        break;
    }
    case 238125:
    {
        returnValue = F("Oberer Sonnenweg");
        break;
    }
    case 238126:
    {
        returnValue = F("Oberer Sonthaldenweg");
        break;
    }
    case 238127:
    {
        returnValue = F("Oberer Soormattthalweg");
        break;
    }
    case 238128:
    {
        returnValue = F("Oberer Sottenweg");
        break;
    }
    case 238129:
    {
        returnValue = F("Oberer Speicherweg");
        break;
    }
    case 238130:
    {
        returnValue = F("Oberer Spiesslingweg");
        break;
    }
    case 238131:
    {
        returnValue = F("Oberer Spineckweg");
        break;
    }
    case 238132:
    {
        returnValue = F("Oberer Spitzwaldweg");
        break;
    }
    case 238133:
    {
        returnValue = F("Oberer Sportplatzweg");
        break;
    }
    case 238134:
    {
        returnValue = F("Oberer Spreußberg");
        break;
    }
    case 238135:
    {
        returnValue = F("Oberer Stadtberg");
        break;
    }
    case 238136:
    {
        returnValue = F("Oberer Stadtgarten");
        break;
    }
    case 238137:
    {
        returnValue = F("Oberer Stadtgraben");
        break;
    }
    case 238138:
    {
        returnValue = F("Oberer Stadtplatz");
        break;
    }
    case 238139:
    {
        returnValue = F("Oberer Stadtrainweg");
        break;
    }
    case 238140:
    {
        returnValue = F("Oberer Stadtweg");
        break;
    }
    case 238141:
    {
        returnValue = F("Oberer Staffelweg");
        break;
    }
    case 238142:
    {
        returnValue = F("Oberer Staudenbergweg");
        break;
    }
    case 238143:
    {
        returnValue = F("Oberer Stechpalmenweg");
        break;
    }
    case 238144:
    {
        returnValue = F("Oberer Steckwaldweg");
        break;
    }
    case 238145:
    {
        returnValue = F("Oberer Steffleinsgraben");
        break;
    }
    case 238146:
    {
        returnValue = F("Oberer Steg");
        break;
    }
    case 238147:
    {
        returnValue = F("Oberer Stehling");
        break;
    }
    case 238148:
    {
        returnValue = F("Oberer Steig");
        break;
    }
    case 238149:
    {
        returnValue = F("Oberer Steigelmeweg");
        break;
    }
    case 238150:
    {
        returnValue = F("Oberer Steigweg");
        break;
    }
    case 238151:
    {
        returnValue = F("Oberer Steinbachstalweg");
        break;
    }
    case 238152:
    {
        returnValue = F("Oberer Steinbachweg");
        break;
    }
    case 238153:
    {
        returnValue = F("Oberer Steinbecker Weg");
        break;
    }
    case 238154:
    {
        returnValue = F("Oberer Steinberg");
        break;
    }
    case 238155:
    {
        returnValue = F("Oberer Steinbergweg");
        break;
    }
    case 238156:
    {
        returnValue = F("Oberer Steinbisweg");
        break;
    }
    case 238157:
    {
        returnValue = F("Oberer Steinbrink");
        break;
    }
    case 238158:
    {
        returnValue = F("Oberer Steinbruchweg");
        break;
    }
    case 238159:
    {
        returnValue = F("Oberer Steinbühl");
        break;
    }
    case 238160:
    {
        returnValue = F("Oberer Steineckleweg");
        break;
    }
    case 238161:
    {
        returnValue = F("Oberer Steinenberg");
        break;
    }
    case 238162:
    {
        returnValue = F("Oberer Steineweg");
        break;
    }
    case 238163:
    {
        returnValue = F("Oberer Steingrabenweg");
        break;
    }
    case 238164:
    {
        returnValue = F("Oberer Steingrundweg");
        break;
    }
    case 238165:
    {
        returnValue = F("Oberer Steinhardtweg");
        break;
    }
    case 238166:
    {
        returnValue = F("Oberer Steinich");
        break;
    }
    case 238167:
    {
        returnValue = F("Oberer Steinig");
        break;
    }
    case 238168:
    {
        returnValue = F("Oberer Steinigweg");
        break;
    }
    case 238169:
    {
        returnValue = F("Oberer Steinlingsweg");
        break;
    }
    case 238170:
    {
        returnValue = F("Oberer Steinrasselweg");
        break;
    }
    case 238171:
    {
        returnValue = F("Oberer Steinrausch");
        break;
    }
    case 238172:
    {
        returnValue = F("Oberer Steinrücken");
        break;
    }
    case 238173:
    {
        returnValue = F("Oberer Steinrütteweg");
        break;
    }
    case 238174:
    {
        returnValue = F("Oberer Steinweg");
        break;
    }
    case 238175:
    {
        returnValue = F("Oberer Steinwinkel");
        break;
    }
    case 238176:
    {
        returnValue = F("Oberer Stellehaldeweg");
        break;
    }
    case 238177:
    {
        returnValue = F("Oberer Stelleweg");
        break;
    }
    case 238178:
    {
        returnValue = F("Oberer Stelliweg");
        break;
    }
    case 238179:
    {
        returnValue = F("Oberer Stephansberg");
        break;
    }
    case 238180:
    {
        returnValue = F("Oberer Sternflügel");
        break;
    }
    case 238181:
    {
        returnValue = F("Oberer Sterrenberg");
        break;
    }
    case 238182:
    {
        returnValue = F("Oberer Sterzfluß");
        break;
    }
    case 238183:
    {
        returnValue = F("Oberer Stetthaldeweg");
        break;
    }
    case 238184:
    {
        returnValue = F("Oberer Steuchling");
        break;
    }
    case 238185:
    {
        returnValue = F("Oberer Steuerwandweg");
        break;
    }
    case 238186:
    {
        returnValue = F("Oberer Sticher Weg");
        break;
    }
    case 238187:
    {
        returnValue = F("Oberer Stichweg");
        break;
    }
    case 238188:
    {
        returnValue = F("Oberer Stiftswaldweg");
        break;
    }
    case 238189:
    {
        returnValue = F("Oberer Stiller Winkel");
        break;
    }
    case 238190:
    {
        returnValue = F("Oberer Stockdorfer Geräumt");
        break;
    }
    case 238191:
    {
        returnValue = F("Oberer Stocketweg");
        break;
    }
    case 238192:
    {
        returnValue = F("Oberer Stockschlagweg");
        break;
    }
    case 238193:
    {
        returnValue = F("Oberer Stockweg");
        break;
    }
    case 238194:
    {
        returnValue = F("Oberer Stollenmühlweg");
        break;
    }
    case 238195:
    {
        returnValue = F("Oberer Stollenweg");
        break;
    }
    case 238196:
    {
        returnValue = F("Oberer Straacher Weg");
        break;
    }
    case 238197:
    {
        returnValue = F("Oberer Straußberg");
        break;
    }
    case 238198:
    {
        returnValue = F("Oberer Streemweg");
        break;
    }
    case 238199:
    {
        returnValue = F("Oberer Strietweg");
        break;
    }
    case 238200:
    {
        returnValue = F("Oberer Struthweg");
        break;
    }
    case 238201:
    {
        returnValue = F("Oberer Strüh");
        break;
    }
    case 238202:
    {
        returnValue = F("Oberer Stuckwaldweg");
        break;
    }
    case 238203:
    {
        returnValue = F("Oberer Studentenhüttenweg");
        break;
    }
    case 238204:
    {
        returnValue = F("Oberer Stuhlskopfweg");
        break;
    }
    case 238205:
    {
        returnValue = F("Oberer Stuhlwaldweg");
        break;
    }
    case 238206:
    {
        returnValue = F("Oberer Sturz");
        break;
    }
    case 238207:
    {
        returnValue = F("Oberer Stutzweg");
        break;
    }
    case 238208:
    {
        returnValue = F("Oberer Stutzweg (Sackweg)");
        break;
    }
    case 238209:
    {
        returnValue = F("Oberer Stäuben");
        break;
    }
    case 238210:
    {
        returnValue = F("Oberer Stöckachweg");
        break;
    }
    case 238211:
    {
        returnValue = F("Oberer Stöckig");
        break;
    }
    case 238212:
    {
        returnValue = F("Oberer Stübchenweg");
        break;
    }
    case 238213:
    {
        returnValue = F("Oberer Stühleweg");
        break;
    }
    case 238214:
    {
        returnValue = F("Oberer Sulzberg");
        break;
    }
    case 238215:
    {
        returnValue = F("Oberer Sulzweg");
        break;
    }
    case 238216:
    {
        returnValue = F("Oberer Sumpfweg");
        break;
    }
    case 238217:
    {
        returnValue = F("Oberer Suttenbuckelweg");
        break;
    }
    case 238218:
    {
        returnValue = F("Oberer Sägerweg");
        break;
    }
    case 238219:
    {
        returnValue = F("Oberer Sägeweg");
        break;
    }
    case 238220:
    {
        returnValue = F("Oberer Sägholzweg");
        break;
    }
    case 238221:
    {
        returnValue = F("Oberer Sämig");
        break;
    }
    case 238222:
    {
        returnValue = F("Oberer Söhlbachweg");
        break;
    }
    case 238223:
    {
        returnValue = F("Oberer Sülzeweg");
        break;
    }
    case 238224:
    {
        returnValue = F("Oberer Taasberg");
        break;
    }
    case 238225:
    {
        returnValue = F("Oberer Tabakmühlenweg");
        break;
    }
    case 238226:
    {
        returnValue = F("Oberer Talberg");
        break;
    }
    case 238227:
    {
        returnValue = F("Oberer Talweg");
        break;
    }
    case 238228:
    {
        returnValue = F("Oberer Tann");
        break;
    }
    case 238229:
    {
        returnValue = F("Oberer Tannenkamp");
        break;
    }
    case 238230:
    {
        returnValue = F("Oberer Tannenkopfweg");
        break;
    }
    case 238231:
    {
        returnValue = F("Oberer Tannenwaldweg");
        break;
    }
    case 238232:
    {
        returnValue = F("Oberer Tannenweg");
        break;
    }
    case 238233:
    {
        returnValue = F("Oberer Taubenflug");
        break;
    }
    case 238234:
    {
        returnValue = F("Oberer Taubenherd");
        break;
    }
    case 238235:
    {
        returnValue = F("Oberer Taubentalweg");
        break;
    }
    case 238236:
    {
        returnValue = F("Oberer Teichfeldweg");
        break;
    }
    case 238237:
    {
        returnValue = F("Oberer Teichtalsweg");
        break;
    }
    case 238238:
    {
        returnValue = F("Oberer Teil");
        break;
    }
    case 238239:
    {
        returnValue = F("Oberer Tekendorfer Weg");
        break;
    }
    case 238240:
    {
        returnValue = F("Oberer Tencherweg");
        break;
    }
    case 238241:
    {
        returnValue = F("Oberer Tennenlochweg");
        break;
    }
    case 238242:
    {
        returnValue = F("Oberer Teppichweg");
        break;
    }
    case 238243:
    {
        returnValue = F("Oberer Teufelsküchenweg");
        break;
    }
    case 238244:
    {
        returnValue = F("Oberer Thalerfeldweg");
        break;
    }
    case 238245:
    {
        returnValue = F("Oberer Thie");
        break;
    }
    case 238246:
    {
        returnValue = F("Oberer Tiefenweg");
        break;
    }
    case 238247:
    {
        returnValue = F("Oberer Tiefweg");
        break;
    }
    case 238248:
    {
        returnValue = F("Oberer Tiegel");
        break;
    }
    case 238249:
    {
        returnValue = F("Oberer Tiergartenbergweg");
        break;
    }
    case 238250:
    {
        returnValue = F("Oberer Tobelweg");
        break;
    }
    case 238251:
    {
        returnValue = F("Oberer Todtberg");
        break;
    }
    case 238252:
    {
        returnValue = F("Oberer Torackerweg");
        break;
    }
    case 238253:
    {
        returnValue = F("Oberer Torplatz");
        break;
    }
    case 238254:
    {
        returnValue = F("Oberer Torweg");
        break;
    }
    case 238255:
    {
        returnValue = F("Oberer Torweinberg");
        break;
    }
    case 238256:
    {
        returnValue = F("Oberer Traufenweg");
        break;
    }
    case 238257:
    {
        returnValue = F("Oberer Traufweg");
        break;
    }
    case 238258:
    {
        returnValue = F("Oberer Treppenweg");
        break;
    }
    case 238259:
    {
        returnValue = F("Oberer Trieb");
        break;
    }
    case 238260:
    {
        returnValue = F("Oberer Triebweg");
        break;
    }
    case 238261:
    {
        returnValue = F("Oberer Triftweg");
        break;
    }
    case 238262:
    {
        returnValue = F("Oberer Tränkegarten");
        break;
    }
    case 238263:
    {
        returnValue = F("Oberer Trösterlesweg");
        break;
    }
    case 238264:
    {
        returnValue = F("Oberer Tuchert");
        break;
    }
    case 238265:
    {
        returnValue = F("Oberer Tugendpfad");
        break;
    }
    case 238266:
    {
        returnValue = F("Oberer Tännlehauweg");
        break;
    }
    case 238267:
    {
        returnValue = F("Oberer Uferweg");
        break;
    }
    case 238268:
    {
        returnValue = F("Oberer Uffhofenweg");
        break;
    }
    case 238269:
    {
        returnValue = F("Oberer Urselsteinweg");
        break;
    }
    case 238270:
    {
        returnValue = F("Oberer Verdel");
        break;
    }
    case 238271:
    {
        returnValue = F("Oberer Viebig");
        break;
    }
    case 238272:
    {
        returnValue = F("Oberer Viehweidtrieb");
        break;
    }
    case 238273:
    {
        returnValue = F("Oberer Vogelberg");
        break;
    }
    case 238274:
    {
        returnValue = F("Oberer Vogelsandweg");
        break;
    }
    case 238275:
    {
        returnValue = F("Oberer Vogtsbodenweg");
        break;
    }
    case 238276:
    {
        returnValue = F("Oberer Vorderwaldweg");
        break;
    }
    case 238277:
    {
        returnValue = F("Oberer Vorhaldeweg");
        break;
    }
    case 238278:
    {
        returnValue = F("Oberer Wachtelberg");
        break;
    }
    case 238279:
    {
        returnValue = F("Oberer Wald");
        break;
    }
    case 238280:
    {
        returnValue = F("Oberer Waldfrieden");
        break;
    }
    case 238281:
    {
        returnValue = F("Oberer Waldweg");
        break;
    }
    case 238282:
    {
        returnValue = F("Oberer Walischberg");
        break;
    }
    case 238283:
    {
        returnValue = F("Oberer Walkweiherweg");
        break;
    }
    case 238284:
    {
        returnValue = F("Oberer Wall");
        break;
    }
    case 238285:
    {
        returnValue = F("Oberer Wandweg");
        break;
    }
    case 238286:
    {
        returnValue = F("Oberer Wannengrabenweg");
        break;
    }
    case 238287:
    {
        returnValue = F("Oberer Wannenweg");
        break;
    }
    case 238288:
    {
        returnValue = F("Oberer Wappental Weg");
        break;
    }
    case 238289:
    {
        returnValue = F("Oberer Wartbergweg");
        break;
    }
    case 238290:
    {
        returnValue = F("Oberer Wartenberg");
        break;
    }
    case 238291:
    {
        returnValue = F("Oberer Wartenbergweg");
        break;
    }
    case 238292:
    {
        returnValue = F("Oberer Wartweg");
        break;
    }
    case 238293:
    {
        returnValue = F("Oberer Wasen");
        break;
    }
    case 238294:
    {
        returnValue = F("Oberer Wasenberg");
        break;
    }
    case 238295:
    {
        returnValue = F("Oberer Wasenweg");
        break;
    }
    case 238296:
    {
        returnValue = F("Oberer Wasserfall");
        break;
    }
    case 238297:
    {
        returnValue = F("Oberer Wasserfallweg");
        break;
    }
    case 238298:
    {
        returnValue = F("Oberer Wassergang");
        break;
    }
    case 238299:
    {
        returnValue = F("Oberer Wasserlochweg");
        break;
    }
    case 238300:
    {
        returnValue = F("Oberer Weg");
        break;
    }
    case 238301:
    {
        returnValue = F("Oberer Wegelbachweg");
        break;
    }
    case 238302:
    {
        returnValue = F("Oberer Weichselbergweg");
        break;
    }
    case 238303:
    {
        returnValue = F("Oberer Weidekamp");
        break;
    }
    case 238304:
    {
        returnValue = F("Oberer Weidenpfad");
        break;
    }
    case 238305:
    {
        returnValue = F("Oberer Weideweg");
        break;
    }
    case 238306:
    {
        returnValue = F("Oberer Weiglberg");
        break;
    }
    case 238307:
    {
        returnValue = F("Oberer Weiher");
        break;
    }
    case 238308:
    {
        returnValue = F("Oberer Weihersrain");
        break;
    }
    case 238309:
    {
        returnValue = F("Oberer Weiherweg");
        break;
    }
    case 238310:
    {
        returnValue = F("Oberer Weiler");
        break;
    }
    case 238311:
    {
        returnValue = F("Oberer Weinberg");
        break;
    }
    case 238312:
    {
        returnValue = F("Oberer Weinbergsweg");
        break;
    }
    case 238313:
    {
        returnValue = F("Oberer Weinbergweg");
        break;
    }
    case 238314:
    {
        returnValue = F("Oberer Weingartenweg");
        break;
    }
    case 238315:
    {
        returnValue = F("Oberer Weinweg");
        break;
    }
    case 238316:
    {
        returnValue = F("Oberer Weissersbergweg");
        break;
    }
    case 238317:
    {
        returnValue = F("Oberer Weißbirkenweg");
        break;
    }
    case 238318:
    {
        returnValue = F("Oberer Weißer Weg");
        break;
    }
    case 238319:
    {
        returnValue = F("Oberer Weißröck");
        break;
    }
    case 238320:
    {
        returnValue = F("Oberer Weltersberg");
        break;
    }
    case 238321:
    {
        returnValue = F("Oberer Wemensiepen");
        break;
    }
    case 238322:
    {
        returnValue = F("Oberer Wemmbergweg");
        break;
    }
    case 238323:
    {
        returnValue = F("Oberer Wendelweg");
        break;
    }
    case 238324:
    {
        returnValue = F("Oberer Wengertsbergweg");
        break;
    }
    case 238325:
    {
        returnValue = F("Oberer Wengertweg");
        break;
    }
    case 238326:
    {
        returnValue = F("Oberer Wernesgrüner Weg");
        break;
    }
    case 238327:
    {
        returnValue = F("Oberer Westring");
        break;
    }
    case 238328:
    {
        returnValue = F("Oberer Wetzentalweg");
        break;
    }
    case 238329:
    {
        returnValue = F("Oberer Wickenweg");
        break;
    }
    case 238330:
    {
        returnValue = F("Oberer Wieden Weg");
        break;
    }
    case 238331:
    {
        returnValue = F("Oberer Wierth");
        break;
    }
    case 238332:
    {
        returnValue = F("Oberer Wiesenhang");
        break;
    }
    case 238333:
    {
        returnValue = F("Oberer Wiesenrech");
        break;
    }
    case 238334:
    {
        returnValue = F("Oberer Wiesentalsweg");
        break;
    }
    case 238335:
    {
        returnValue = F("Oberer Wiesenweg");
        break;
    }
    case 238336:
    {
        returnValue = F("Oberer Willy-Dolge-Weg");
        break;
    }
    case 238337:
    {
        returnValue = F("Oberer Wingert");
        break;
    }
    case 238338:
    {
        returnValue = F("Oberer Wingertsberg");
        break;
    }
    case 238339:
    {
        returnValue = F("Oberer Wingertsweg");
        break;
    }
    case 238340:
    {
        returnValue = F("Oberer Wingertweg");
        break;
    }
    case 238341:
    {
        returnValue = F("Oberer Winkel");
        break;
    }
    case 238342:
    {
        returnValue = F("Oberer Winkelkamp");
        break;
    }
    case 238343:
    {
        returnValue = F("Oberer Winterbergweg");
        break;
    }
    case 238344:
    {
        returnValue = F("Oberer Winterhaldenweg");
        break;
    }
    case 238345:
    {
        returnValue = F("Oberer Winterhaldeweg");
        break;
    }
    case 238346:
    {
        returnValue = F("Oberer Winterrainweg");
        break;
    }
    case 238347:
    {
        returnValue = F("Oberer Winterzugweg");
        break;
    }
    case 238348:
    {
        returnValue = F("Oberer Wittenbachweg");
        break;
    }
    case 238349:
    {
        returnValue = F("Oberer Wittmoosweg");
        break;
    }
    case 238350:
    {
        returnValue = F("Oberer Wolfen");
        break;
    }
    case 238351:
    {
        returnValue = F("Oberer Wolfhain");
        break;
    }
    case 238352:
    {
        returnValue = F("Oberer Wolfhartweg");
        break;
    }
    case 238353:
    {
        returnValue = F("Oberer Wolfsgrubenweg");
        break;
    }
    case 238354:
    {
        returnValue = F("Oberer Wolfstalweg");
        break;
    }
    case 238355:
    {
        returnValue = F("Oberer Wolfsweg");
        break;
    }
    case 238356:
    {
        returnValue = F("Oberer Worgberg");
        break;
    }
    case 238357:
    {
        returnValue = F("Oberer Worthhagen");
        break;
    }
    case 238358:
    {
        returnValue = F("Oberer Wörth");
        break;
    }
    case 238359:
    {
        returnValue = F("Oberer Würmtalweg");
        break;
    }
    case 238360:
    {
        returnValue = F("Oberer Wüster Weg");
        break;
    }
    case 238361:
    {
        returnValue = F("Oberer Zaberhaldeweg");
        break;
    }
    case 238362:
    {
        returnValue = F("Oberer Zehentbergweg");
        break;
    }
    case 238363:
    {
        returnValue = F("Oberer Zeidlerweg");
        break;
    }
    case 238364:
    {
        returnValue = F("Oberer Zeilbaum");
        break;
    }
    case 238365:
    {
        returnValue = F("Oberer Zeilbergweg");
        break;
    }
    case 238366:
    {
        returnValue = F("Oberer Zellberg");
        break;
    }
    case 238367:
    {
        returnValue = F("Oberer Ziegeleiweg");
        break;
    }
    case 238368:
    {
        returnValue = F("Oberer Ziegengrundweg");
        break;
    }
    case 238369:
    {
        returnValue = F("Oberer Ziegweg");
        break;
    }
    case 238370:
    {
        returnValue = F("Oberer Zimmerweg");
        break;
    }
    case 238371:
    {
        returnValue = F("Oberer Zinnweg");
        break;
    }
    case 238372:
    {
        returnValue = F("Oberer Zinsbachtalweg");
        break;
    }
    case 238373:
    {
        returnValue = F("Oberer Zirkel");
        break;
    }
    case 238374:
    {
        returnValue = F("Oberer Zollstock");
        break;
    }
    case 238375:
    {
        returnValue = F("Oberer Zollweg");
        break;
    }
    case 238376:
    {
        returnValue = F("Oberer Zwerchweg");
        break;
    }
    case 238377:
    {
        returnValue = F("Oberer Zwtschgenweg");
        break;
    }
    case 238378:
    {
        returnValue = F("Oberer Zwölferweg");
        break;
    }
    case 238379:
    {
        returnValue = F("Oberer alter Weg");
        break;
    }
    case 238380:
    {
        returnValue = F("Oberer grosser Ackerweg");
        break;
    }
    case 238381:
    {
        returnValue = F("Oberer neuer Ebentaler Weg");
        break;
    }
    case 238382:
    {
        returnValue = F("Oberer Ölbachweg");
        break;
    }
    case 238383:
    {
        returnValue = F("Oberer Ölbergweg");
        break;
    }
    case 238384:
    {
        returnValue = F("Oberer Ölweg");
        break;
    }
    case 238385:
    {
        returnValue = F("Oberer-Albaner-Weg");
        break;
    }
    case 238386:
    {
        returnValue = F("Oberer-Markt");
        break;
    }
    case 238387:
    {
        returnValue = F("Oberer-Seeweg");
        break;
    }
    case 238388:
    {
        returnValue = F("Oberer-Wiesen-Ring");
        break;
    }
    case 238389:
    {
        returnValue = F("Oberer/ Unterer Hammerhaldenweg");
        break;
    }
    case 238390:
    {
        returnValue = F("Obererbacher Str.");
        break;
    }
    case 238391:
    {
        returnValue = F("Obererbacher Weg");
        break;
    }
    case 238392:
    {
        returnValue = F("Oberere Kellerbergstr.");
        break;
    }
    case 238393:
    {
        returnValue = F("Obererfischbachweg");
        break;
    }
    case 238394:
    {
        returnValue = F("Oberergauweg");
        break;
    }
    case 238395:
    {
        returnValue = F("Obererhangweg");
        break;
    }
    case 238396:
    {
        returnValue = F("Obererhüttenweg");
        break;
    }
    case 238397:
    {
        returnValue = F("Obererle");
        break;
    }
    case 238398:
    {
        returnValue = F("Obererleiterbergweg");
        break;
    }
    case 238399:
    {
        returnValue = F("Obererlen");
        break;
    }
    case 238400:
    {
        returnValue = F("Obererr Ziegelfeldweg");
        break;
    }
    case 238401:
    {
        returnValue = F("Obererschwarzenlochweg");
        break;
    }
    case 238402:
    {
        returnValue = F("Oberersommerhaldeweg");
        break;
    }
    case 238403:
    {
        returnValue = F("Obererthaler Str.");
        break;
    }
    case 238404:
    {
        returnValue = F("Obererweg");
        break;
    }
    case 238405:
    {
        returnValue = F("Obererwinterhaldeweg");
        break;
    }
    case 238406:
    {
        returnValue = F("Obererz");
        break;
    }
    case 238407:
    {
        returnValue = F("Obererzgebirgische Poststr.");
        break;
    }
    case 238408:
    {
        returnValue = F("Oberes Altfeld");
        break;
    }
    case 238409:
    {
        returnValue = F("Oberes Apothekergäßchen");
        break;
    }
    case 238410:
    {
        returnValue = F("Oberes Bachfeld");
        break;
    }
    case 238411:
    {
        returnValue = F("Oberes Beckertal");
        break;
    }
    case 238412:
    {
        returnValue = F("Oberes Bergfeld");
        break;
    }
    case 238413:
    {
        returnValue = F("Oberes Berglein");
        break;
    }
    case 238414:
    {
        returnValue = F("Oberes Biberfeld");
        break;
    }
    case 238415:
    {
        returnValue = F("Oberes Bickenmäuerle");
        break;
    }
    case 238416:
    {
        returnValue = F("Oberes Bieth");
        break;
    }
    case 238417:
    {
        returnValue = F("Oberes Blendlein");
        break;
    }
    case 238418:
    {
        returnValue = F("Oberes Bopsersträßchen");
        break;
    }
    case 238419:
    {
        returnValue = F("Oberes Breitenhag");
        break;
    }
    case 238420:
    {
        returnValue = F("Oberes Breitle");
        break;
    }
    case 238421:
    {
        returnValue = F("Oberes Brunkel");
        break;
    }
    case 238422:
    {
        returnValue = F("Oberes Buchenfeld");
        break;
    }
    case 238423:
    {
        returnValue = F("Oberes Buchsträßle");
        break;
    }
    case 238424:
    {
        returnValue = F("Oberes Burgholz");
        break;
    }
    case 238425:
    {
        returnValue = F("Oberes Dachsrainsträßchen");
        break;
    }
    case 238426:
    {
        returnValue = F("Oberes Daufeld");
        break;
    }
    case 238427:
    {
        returnValue = F("Oberes Dorf");
        break;
    }
    case 238428:
    {
        returnValue = F("Oberes Eck");
        break;
    }
    case 238429:
    {
        returnValue = F("Oberes Eichertstal");
        break;
    }
    case 238430:
    {
        returnValue = F("Oberes Eichet");
        break;
    }
    case 238431:
    {
        returnValue = F("Oberes Eichholz");
        break;
    }
    case 238432:
    {
        returnValue = F("Oberes Eichhölzchen");
        break;
    }
    case 238433:
    {
        returnValue = F("Oberes Emmatal");
        break;
    }
    case 238434:
    {
        returnValue = F("Oberes Endbergsträßchen");
        break;
    }
    case 238435:
    {
        returnValue = F("Oberes Erlach");
        break;
    }
    case 238436:
    {
        returnValue = F("Oberes Erlenbad");
        break;
    }
    case 238437:
    {
        returnValue = F("Oberes Eschle");
        break;
    }
    case 238438:
    {
        returnValue = F("Oberes Feld");
        break;
    }
    case 238439:
    {
        returnValue = F("Oberes Feldle");
        break;
    }
    case 238440:
    {
        returnValue = F("Oberes Fischerfeld");
        break;
    }
    case 238441:
    {
        returnValue = F("Oberes Fischhäusle");
        break;
    }
    case 238442:
    {
        returnValue = F("Oberes Flürlein");
        break;
    }
    case 238443:
    {
        returnValue = F("Oberes Gaistal");
        break;
    }
    case 238444:
    {
        returnValue = F("Oberes Georgenfeld");
        break;
    }
    case 238445:
    {
        returnValue = F("Oberes Gerstenfeld");
        break;
    }
    case 238446:
    {
        returnValue = F("Oberes Gewand");
        break;
    }
    case 238447:
    {
        returnValue = F("Oberes Gewend");
        break;
    }
    case 238448:
    {
        returnValue = F("Oberes Greuth");
        break;
    }
    case 238449:
    {
        returnValue = F("Oberes Griesfeld");
        break;
    }
    case 238450:
    {
        returnValue = F("Oberes Grünlingsfeld");
        break;
    }
    case 238451:
    {
        returnValue = F("Oberes Gurgelheusträßchen");
        break;
    }
    case 238452:
    {
        returnValue = F("Oberes Gässle");
        break;
    }
    case 238453:
    {
        returnValue = F("Oberes Gäßchen");
        break;
    }
    case 238454:
    {
        returnValue = F("Oberes Gäßle");
        break;
    }
    case 238455:
    {
        returnValue = F("Oberes Hag");
        break;
    }
    case 238456:
    {
        returnValue = F("Oberes Hardtfeld");
        break;
    }
    case 238457:
    {
        returnValue = F("Oberes Hasengässchen");
        break;
    }
    case 238458:
    {
        returnValue = F("Oberes Hessental");
        break;
    }
    case 238459:
    {
        returnValue = F("Oberes Himmelreich");
        break;
    }
    case 238460:
    {
        returnValue = F("Oberes Hirschfeld");
        break;
    }
    case 238461:
    {
        returnValue = F("Oberes Hochfeld");
        break;
    }
    case 238462:
    {
        returnValue = F("Oberes Hofreither Tal");
        break;
    }
    case 238463:
    {
        returnValue = F("Oberes Hohbergsträßle");
        break;
    }
    case 238464:
    {
        returnValue = F("Oberes Holz");
        break;
    }
    case 238465:
    {
        returnValue = F("Oberes Höfle");
        break;
    }
    case 238466:
    {
        returnValue = F("Oberes Höllgehau");
        break;
    }
    case 238467:
    {
        returnValue = F("Oberes Hörnlessträßchen");
        break;
    }
    case 238468:
    {
        returnValue = F("Oberes Johannisfeld");
        break;
    }
    case 238469:
    {
        returnValue = F("Oberes Jüchen");
        break;
    }
    case 238470:
    {
        returnValue = F("Oberes Katzerle");
        break;
    }
    case 238471:
    {
        returnValue = F("Oberes Kelterfeld");
        break;
    }
    case 238472:
    {
        returnValue = F("Oberes Kirchwegfeld");
        break;
    }
    case 238473:
    {
        returnValue = F("Oberes Kleinodsfeld");
        break;
    }
    case 238474:
    {
        returnValue = F("Oberes Knaupental");
        break;
    }
    case 238475:
    {
        returnValue = F("Oberes Kohletal");
        break;
    }
    case 238476:
    {
        returnValue = F("Oberes Land");
        break;
    }
    case 238477:
    {
        returnValue = F("Oberes Langgewann");
        break;
    }
    case 238478:
    {
        returnValue = F("Oberes Lauch");
        break;
    }
    case 238479:
    {
        returnValue = F("Oberes Lautenbächle");
        break;
    }
    case 238480:
    {
        returnValue = F("Oberes Lehen");
        break;
    }
    case 238481:
    {
        returnValue = F("Oberes Leinewehtal");
        break;
    }
    case 238482:
    {
        returnValue = F("Oberes Lerchenfeld");
        break;
    }
    case 238483:
    {
        returnValue = F("Oberes Lindental");
        break;
    }
    case 238484:
    {
        returnValue = F("Oberes Lindig");
        break;
    }
    case 238485:
    {
        returnValue = F("Oberes Loh");
        break;
    }
    case 238486:
    {
        returnValue = F("Oberes Lohhaus");
        break;
    }
    case 238487:
    {
        returnValue = F("Oberes Mainfeld");
        break;
    }
    case 238488:
    {
        returnValue = F("Oberes Metzgerle");
        break;
    }
    case 238489:
    {
        returnValue = F("Oberes Mitterfeld");
        break;
    }
    case 238490:
    {
        returnValue = F("Oberes Moos");
        break;
    }
    case 238491:
    {
        returnValue = F("Oberes Muldental");
        break;
    }
    case 238492:
    {
        returnValue = F("Oberes Munketal");
        break;
    }
    case 238493:
    {
        returnValue = F("Oberes Mühlfeld");
        break;
    }
    case 238494:
    {
        returnValue = F("Oberes Mühltal");
        break;
    }
    case 238495:
    {
        returnValue = F("Oberes Natzfeld");
        break;
    }
    case 238496:
    {
        returnValue = F("Oberes Neufeld");
        break;
    }
    case 238497:
    {
        returnValue = F("Oberes Paradies");
        break;
    }
    case 238498:
    {
        returnValue = F("Oberes Pennickental");
        break;
    }
    case 238499:
    {
        returnValue = F("Oberes Pfaffental");
        break;
    }
    case 238500:
    {
        returnValue = F("Oberes Püttlachtal");
        break;
    }
    case 238501:
    {
        returnValue = F("Oberes Rahlbruch");
        break;
    }
    case 238502:
    {
        returnValue = F("Oberes Reicheneck");
        break;
    }
    case 238503:
    {
        returnValue = F("Oberes Ried");
        break;
    }
    case 238504:
    {
        returnValue = F("Oberes Riesensträßle");
        break;
    }
    case 238505:
    {
        returnValue = F("Oberes Ringgässchen");
        break;
    }
    case 238506:
    {
        returnValue = F("Oberes Rippach");
        break;
    }
    case 238507:
    {
        returnValue = F("Oberes Rot");
        break;
    }
    case 238508:
    {
        returnValue = F("Oberes Roth");
        break;
    }
    case 238509:
    {
        returnValue = F("Oberes Rothenfeld");
        break;
    }
    case 238510:
    {
        returnValue = F("Oberes Sandfeld");
        break;
    }
    case 238511:
    {
        returnValue = F("Oberes Schleidchen");
        break;
    }
    case 238512:
    {
        returnValue = F("Oberes Schlingfeld");
        break;
    }
    case 238513:
    {
        returnValue = F("Oberes Schloß");
        break;
    }
    case 238514:
    {
        returnValue = F("Oberes Schwarzviertel");
        break;
    }
    case 238515:
    {
        returnValue = F("Oberes Seegässchen");
        break;
    }
    case 238516:
    {
        returnValue = F("Oberes Sporergäßchen");
        break;
    }
    case 238517:
    {
        returnValue = F("Oberes Stadelfeld");
        break;
    }
    case 238518:
    {
        returnValue = F("Oberes Stadtgäßchen");
        break;
    }
    case 238519:
    {
        returnValue = F("Oberes Stadtmoos");
        break;
    }
    case 238520:
    {
        returnValue = F("Oberes Steigle");
        break;
    }
    case 238521:
    {
        returnValue = F("Oberes Steinert");
        break;
    }
    case 238522:
    {
        returnValue = F("Oberes Steinufer");
        break;
    }
    case 238523:
    {
        returnValue = F("Oberes Straßfeld");
        break;
    }
    case 238524:
    {
        returnValue = F("Oberes Sträßchen");
        break;
    }
    case 238525:
    {
        returnValue = F("Oberes Sträßle");
        break;
    }
    case 238526:
    {
        returnValue = F("Oberes Sülzetal");
        break;
    }
    case 238527:
    {
        returnValue = F("Oberes Tal");
        break;
    }
    case 238528:
    {
        returnValue = F("Oberes Tannig");
        break;
    }
    case 238529:
    {
        returnValue = F("Oberes Tor");
        break;
    }
    case 238530:
    {
        returnValue = F("Oberes Täle");
        break;
    }
    case 238531:
    {
        returnValue = F("Oberes Täschle");
        break;
    }
    case 238532:
    {
        returnValue = F("Oberes Vocherl");
        break;
    }
    case 238533:
    {
        returnValue = F("Oberes Waldtor");
        break;
    }
    case 238534:
    {
        returnValue = F("Oberes Waltergäßle");
        break;
    }
    case 238535:
    {
        returnValue = F("Oberes Wehr");
        break;
    }
    case 238536:
    {
        returnValue = F("Oberes Weidenfeld");
        break;
    }
    case 238537:
    {
        returnValue = F("Oberes Wiegenfeld");
        break;
    }
    case 238538:
    {
        returnValue = F("Oberes Wiesental");
        break;
    }
    case 238539:
    {
        returnValue = F("Oberes Willigloh");
        break;
    }
    case 238540:
    {
        returnValue = F("Oberes Winterhaldensträßle");
        break;
    }
    case 238541:
    {
        returnValue = F("Oberes Wochenendgebiet");
        break;
    }
    case 238542:
    {
        returnValue = F("Oberes Wölfle");
        break;
    }
    case 238543:
    {
        returnValue = F("Oberes Ziegelfeld");
        break;
    }
    case 238544:
    {
        returnValue = F("Oberes Ösch");
        break;
    }
    case 238545:
    {
        returnValue = F("Oberes-Rot-Str.");
        break;
    }
    case 238546:
    {
        returnValue = F("Oberesch");
        break;
    }
    case 238547:
    {
        returnValue = F("Obereschacher Str.");
        break;
    }
    case 238548:
    {
        returnValue = F("Obereschbach");
        break;
    }
    case 238549:
    {
        returnValue = F("Obereschbacher Grenzweg");
        break;
    }
    case 238550:
    {
        returnValue = F("Oberescher Weg");
        break;
    }
    case 238551:
    {
        returnValue = F("Obereschle");
        break;
    }
    case 238552:
    {
        returnValue = F("Obereschring");
        break;
    }
    case 238553:
    {
        returnValue = F("Obereschweg");
        break;
    }
    case 238554:
    {
        returnValue = F("Oberessendorfer Str.");
        break;
    }
    case 238555:
    {
        returnValue = F("Oberesslinger Str.");
        break;
    }
    case 238556:
    {
        returnValue = F("Oberetscheid");
        break;
    }
    case 238557:
    {
        returnValue = F("Obereubigheim");
        break;
    }
    case 238558:
    {
        returnValue = F("Obereuerheimer Str.");
        break;
    }
    case 238559:
    {
        returnValue = F("Oberevinger Str.");
        break;
    }
    case 238560:
    {
        returnValue = F("Obereyller Str.");
        break;
    }
    case 238561:
    {
        returnValue = F("Obereßfelder Str.");
        break;
    }
    case 238562:
    {
        returnValue = F("Oberfahrenberg");
        break;
    }
    case 238563:
    {
        returnValue = F("Oberfarrnbacher Str.");
        break;
    }
    case 238564:
    {
        returnValue = F("Oberfeckinger Str.");
        break;
    }
    case 238565:
    {
        returnValue = F("Oberfeld");
        break;
    }
    case 238566:
    {
        returnValue = F("Oberfeldallee");
        break;
    }
    case 238567:
    {
        returnValue = F("Oberfeldbach");
        break;
    }
    case 238568:
    {
        returnValue = F("Oberfelder Str.");
        break;
    }
    case 238569:
    {
        returnValue = F("Oberfelder Weg");
        break;
    }
    case 238570:
    {
        returnValue = F("Oberfeldhauser Str.");
        break;
    }
    case 238571:
    {
        returnValue = F("Oberfeldinger Str.");
        break;
    }
    case 238572:
    {
        returnValue = F("Oberfeldkirchener Str.");
        break;
    }
    case 238573:
    {
        returnValue = F("Oberfeldring");
        break;
    }
    case 238574:
    {
        returnValue = F("Oberfeldstr.");
        break;
    }
    case 238575:
    {
        returnValue = F("Oberfeldsweg");
        break;
    }
    case 238576:
    {
        returnValue = F("Oberfeldswiesenweg");
        break;
    }
    case 238577:
    {
        returnValue = F("Oberfeldweg");
        break;
    }
    case 238578:
    {
        returnValue = F("Oberfeller Str.");
        break;
    }
    case 238579:
    {
        returnValue = F("Oberfembacher Str.");
        break;
    }
    case 238580:
    {
        returnValue = F("Oberferrieder Str.");
        break;
    }
    case 238581:
    {
        returnValue = F("Oberfichtenmühle");
        break;
    }
    case 238582:
    {
        returnValue = F("Oberfinanzrat-Friedrich-Weg");
        break;
    }
    case 238583:
    {
        returnValue = F("Oberfinanzrat-Seitz-Weg");
        break;
    }
    case 238584:
    {
        returnValue = F("Oberfischacher Str.");
        break;
    }
    case 238585:
    {
        returnValue = F("Oberfischacher Weg");
        break;
    }
    case 238586:
    {
        returnValue = F("Oberfischbach");
        break;
    }
    case 238587:
    {
        returnValue = F("Oberfischbacher Str.");
        break;
    }
    case 238588:
    {
        returnValue = F("Oberflachter Str.");
        break;
    }
    case 238589:
    {
        returnValue = F("Oberfladunger Str.");
        break;
    }
    case 238590:
    {
        returnValue = F("Oberflattig");
        break;
    }
    case 238591:
    {
        returnValue = F("Oberfleck");
        break;
    }
    case 238592:
    {
        returnValue = F("Oberflecken");
        break;
    }
    case 238593:
    {
        returnValue = F("Oberfletmer Str.");
        break;
    }
    case 238594:
    {
        returnValue = F("Oberflockenbacher Str.");
        break;
    }
    case 238595:
    {
        returnValue = F("Oberforstbacher Str.");
        break;
    }
    case 238596:
    {
        returnValue = F("Oberforsthausweg");
        break;
    }
    case 238597:
    {
        returnValue = F("Oberforstmeister Schneise");
        break;
    }
    case 238598:
    {
        returnValue = F("Oberforstmeister Ullrich-Weg");
        break;
    }
    case 238599:
    {
        returnValue = F("Oberforstmeister-Buch-Weg");
        break;
    }
    case 238600:
    {
        returnValue = F("Oberforstmeistersschneise");
        break;
    }
    case 238601:
    {
        returnValue = F("Oberfrauenwald");
        break;
    }
    case 238602:
    {
        returnValue = F("Oberfrauenwalder Weg");
        break;
    }
    case 238603:
    {
        returnValue = F("Oberfrohnaer Str.");
        break;
    }
    case 238604:
    {
        returnValue = F("Oberföhringer Str.");
        break;
    }
    case 238605:
    {
        returnValue = F("Oberförster Baumgarten Schneise");
        break;
    }
    case 238606:
    {
        returnValue = F("Oberförster Bosch-Weg");
        break;
    }
    case 238607:
    {
        returnValue = F("Oberförster Jähnert Weg");
        break;
    }
    case 238608:
    {
        returnValue = F("Oberförster Piechota - Weg");
        break;
    }
    case 238609:
    {
        returnValue = F("Oberförster Ringkloffweg");
        break;
    }
    case 238610:
    {
        returnValue = F("Oberförster-Feige-Weg");
        break;
    }
    case 238611:
    {
        returnValue = F("Oberförster-Ganter-Str.");
        break;
    }
    case 238612:
    {
        returnValue = F("Oberförster-Hahn-Weg");
        break;
    }
    case 238613:
    {
        returnValue = F("Oberförster-Hermann-Müller-Weg");
        break;
    }
    case 238614:
    {
        returnValue = F("Oberförster-Hermanns-Weg");
        break;
    }
    case 238615:
    {
        returnValue = F("Oberförster-Hinze-Weg");
        break;
    }
    case 238616:
    {
        returnValue = F("Oberförster-Hoffmann-Weg");
        break;
    }
    case 238617:
    {
        returnValue = F("Oberförster-Jahn-Weg");
        break;
    }
    case 238618:
    {
        returnValue = F("Oberförster-Kirsch-Weg");
        break;
    }
    case 238619:
    {
        returnValue = F("Oberförster-Koch-Weg");
        break;
    }
    case 238620:
    {
        returnValue = F("Oberförster-Pfahl-Weg");
        break;
    }
    case 238621:
    {
        returnValue = F("Oberförster-Staudacher-Weg");
        break;
    }
    case 238622:
    {
        returnValue = F("Oberförster-Ulrichs-Str.");
        break;
    }
    case 238623:
    {
        returnValue = F("Oberförsterdamm");
        break;
    }
    case 238624:
    {
        returnValue = F("Oberförsterei");
        break;
    }
    case 238625:
    {
        returnValue = F("Oberförstereistr.");
        break;
    }
    case 238626:
    {
        returnValue = F("Oberförstereiweg");
        break;
    }
    case 238627:
    {
        returnValue = F("Oberförsterkoppel");
        break;
    }
    case 238628:
    {
        returnValue = F("Oberförsterschneise");
        break;
    }
    case 238629:
    {
        returnValue = F("Oberförsterweg");
        break;
    }
    case 238630:
    {
        returnValue = F("Oberfüllbacher Str.");
        break;
    }
    case 238631:
    {
        returnValue = F("Oberfürberger Str.");
        break;
    }
    case 238632:
    {
        returnValue = F("Obergailinger Str.");
        break;
    }
    case 238633:
    {
        returnValue = F("Obergambach");
        break;
    }
    case 238634:
    {
        returnValue = F("Obergammenried");
        break;
    }
    case 238635:
    {
        returnValue = F("Obergangkofen");
        break;
    }
    case 238636:
    {
        returnValue = F("Obergangkofener Str.");
        break;
    }
    case 238637:
    {
        returnValue = F("Obergangstr.");
        break;
    }
    case 238638:
    {
        returnValue = F("Obergarschagen");
        break;
    }
    case 238639:
    {
        returnValue = F("Obergarten");
        break;
    }
    case 238640:
    {
        returnValue = F("Obergartenstr.");
        break;
    }
    case 238641:
    {
        returnValue = F("Obergartenweg");
        break;
    }
    case 238642:
    {
        returnValue = F("Obergasse");
        break;
    }
    case 238643:
    {
        returnValue = F("Obergath");
        break;
    }
    case 238644:
    {
        returnValue = F("Obergaul");
        break;
    }
    case 238645:
    {
        returnValue = F("Obergebertsham");
        break;
    }
    case 238646:
    {
        returnValue = F("Obergebisbach");
        break;
    }
    case 238647:
    {
        returnValue = F("Obergebraer Dorfstr.");
        break;
    }
    case 238648:
    {
        returnValue = F("Obergebraer Str.");
        break;
    }
    case 238649:
    {
        returnValue = F("Obergeißendorf");
        break;
    }
    case 238650:
    {
        returnValue = F("Obergelgen");
        break;
    }
    case 238651:
    {
        returnValue = F("Obergelpestr.");
        break;
    }
    case 238652:
    {
        returnValue = F("Obergemeinde");
        break;
    }
    case 238653:
    {
        returnValue = F("Oberger Hauptstr.");
        break;
    }
    case 238654:
    {
        returnValue = F("Oberger Str.");
        break;
    }
    case 238655:
    {
        returnValue = F("Oberger Weg");
        break;
    }
    case 238656:
    {
        returnValue = F("Obergerichtsstr.");
        break;
    }
    case 238657:
    {
        returnValue = F("Obergerner Weg");
        break;
    }
    case 238658:
    {
        returnValue = F("Obergersdorfer Str.");
        break;
    }
    case 238659:
    {
        returnValue = F("Obergessertshauser Str.");
        break;
    }
    case 238660:
    {
        returnValue = F("Obergevelhof");
        break;
    }
    case 238661:
    {
        returnValue = F("Obergieß");
        break;
    }
    case 238662:
    {
        returnValue = F("Obergimperner Str.");
        break;
    }
    case 238663:
    {
        returnValue = F("Oberginnick");
        break;
    }
    case 238664:
    {
        returnValue = F("Oberginsbacher Str.");
        break;
    }
    case 238665:
    {
        returnValue = F("Oberglaim");
        break;
    }
    case 238666:
    {
        returnValue = F("Oberglaimer Alm");
        break;
    }
    case 238667:
    {
        returnValue = F("Oberglogauer Str.");
        break;
    }
    case 238668:
    {
        returnValue = F("Oberglösinger Str.");
        break;
    }
    case 238669:
    {
        returnValue = F("Obergneus");
        break;
    }
    case 238670:
    {
        returnValue = F("Obergombental");
        break;
    }
    case 238671:
    {
        returnValue = F("Obergoseln");
        break;
    }
    case 238672:
    {
        returnValue = F("Obergplatz");
        break;
    }
    case 238673:
    {
        returnValue = F("Obergraben");
        break;
    }
    case 238674:
    {
        returnValue = F("Obergrauschwitzer Str.");
        break;
    }
    case 238675:
    {
        returnValue = F("Obergraustein");
        break;
    }
    case 238676:
    {
        returnValue = F("Obergreißlauer Str.");
        break;
    }
    case 238677:
    {
        returnValue = F("Obergreut");
        break;
    }
    case 238678:
    {
        returnValue = F("Obergrieser Str.");
        break;
    }
    case 238679:
    {
        returnValue = F("Obergriesheimer Str.");
        break;
    }
    case 238680:
    {
        returnValue = F("Obergrombacher Str.");
        break;
    }
    case 238681:
    {
        returnValue = F("Obergruben");
        break;
    }
    case 238682:
    {
        returnValue = F("Obergrund");
        break;
    }
    case 238683:
    {
        returnValue = F("Obergrundstr.");
        break;
    }
    case 238684:
    {
        returnValue = F("Obergrunewald");
        break;
    }
    case 238685:
    {
        returnValue = F("Obergrunstedter Str.");
        break;
    }
    case 238686:
    {
        returnValue = F("Obergruppenbacher Str.");
        break;
    }
    case 238687:
    {
        returnValue = F("Obergräfenhainer Str.");
        break;
    }
    case 238688:
    {
        returnValue = F("Obergräfenthal");
        break;
    }
    case 238689:
    {
        returnValue = F("Obergründchen");
        break;
    }
    case 238690:
    {
        returnValue = F("Obergründemich");
        break;
    }
    case 238691:
    {
        returnValue = F("Obergrünewalder Str.");
        break;
    }
    case 238692:
    {
        returnValue = F("Obergrünne");
        break;
    }
    case 238693:
    {
        returnValue = F("Obergrünthal");
        break;
    }
    case 238694:
    {
        returnValue = F("Obergrützenbach");
        break;
    }
    case 238695:
    {
        returnValue = F("Obergschwend");
        break;
    }
    case 238696:
    {
        returnValue = F("Obergschwendter Str.");
        break;
    }
    case 238697:
    {
        returnValue = F("Obergstr.");
        break;
    }
    case 238698:
    {
        returnValue = F("Oberguder Str.");
        break;
    }
    case 238699:
    {
        returnValue = F("Obergutstr.");
        break;
    }
    case 238700:
    {
        returnValue = F("Obergärten");
        break;
    }
    case 238701:
    {
        returnValue = F("Obergärtenstr.");
        break;
    }
    case 238702:
    {
        returnValue = F("Obergärtenweg");
        break;
    }
    case 238703:
    {
        returnValue = F("Obergässchen");
        break;
    }
    case 238704:
    {
        returnValue = F("Obergässel");
        break;
    }
    case 238705:
    {
        returnValue = F("Obergäßchen");
        break;
    }
    case 238706:
    {
        returnValue = F("Obergünzburger Str.");
        break;
    }
    case 238707:
    {
        returnValue = F("Obergünzkofen");
        break;
    }
    case 238708:
    {
        returnValue = F("Obergünzlstr.");
        break;
    }
    case 238709:
    {
        returnValue = F("Oberhaag");
        break;
    }
    case 238710:
    {
        returnValue = F("Oberhaagstr.");
        break;
    }
    case 238711:
    {
        returnValue = F("Oberhaaner Str.");
        break;
    }
    case 238712:
    {
        returnValue = F("Oberhaanerstr.");
        break;
    }
    case 238713:
    {
        returnValue = F("Oberhaarbach");
        break;
    }
    case 238714:
    {
        returnValue = F("Oberhaard Schneise");
        break;
    }
    case 238715:
    {
        returnValue = F("Oberhaaren");
        break;
    }
    case 238716:
    {
        returnValue = F("Oberhachinger Str.");
        break;
    }
    case 238717:
    {
        returnValue = F("Oberhacken");
        break;
    }
    case 238718:
    {
        returnValue = F("Oberhadermark");
        break;
    }
    case 238719:
    {
        returnValue = F("Oberhag");
        break;
    }
    case 238720:
    {
        returnValue = F("Oberhagen");
        break;
    }
    case 238721:
    {
        returnValue = F("Oberhagen-Flugplatz Purkshof");
        break;
    }
    case 238722:
    {
        returnValue = F("Oberhagenried");
        break;
    }
    case 238723:
    {
        returnValue = F("Oberhaide");
        break;
    }
    case 238724:
    {
        returnValue = F("Oberhaidelbacher Hauptstr.");
        break;
    }
    case 238725:
    {
        returnValue = F("Oberhaider Str.");
        break;
    }
    case 238726:
    {
        returnValue = F("Oberhain");
        break;
    }
    case 238727:
    {
        returnValue = F("Oberhainer Str.");
        break;
    }
    case 238728:
    {
        returnValue = F("Oberhainer Weg");
        break;
    }
    case 238729:
    {
        returnValue = F("Oberhalb Am Steinkreuz");
        break;
    }
    case 238730:
    {
        returnValue = F("Oberhalb Hahlgasse");
        break;
    }
    case 238731:
    {
        returnValue = F("Oberhalb der Langheck");
        break;
    }
    case 238732:
    {
        returnValue = F("Oberhalb der Waldmühle");
        break;
    }
    case 238733:
    {
        returnValue = F("Oberhalb der Weinstr.");
        break;
    }
    case 238734:
    {
        returnValue = F("Oberhalb des Gerberbruches");
        break;
    }
    case 238735:
    {
        returnValue = F("Oberhalb des Steinbruchs");
        break;
    }
    case 238736:
    {
        returnValue = F("Oberhaldenstr.");
        break;
    }
    case 238737:
    {
        returnValue = F("Oberhaldenweg");
        break;
    }
    case 238738:
    {
        returnValue = F("Oberhaldessen");
        break;
    }
    case 238739:
    {
        returnValue = F("Oberham");
        break;
    }
    case 238740:
    {
        returnValue = F("Oberhamer Feld");
        break;
    }
    case 238741:
    {
        returnValue = F("Oberhamer Str.");
        break;
    }
    case 238742:
    {
        returnValue = F("Oberhamerstr.");
        break;
    }
    case 238743:
    {
        returnValue = F("Oberhammelwarder Str.");
        break;
    }
    case 238744:
    {
        returnValue = F("Oberhammer");
        break;
    }
    case 238745:
    {
        returnValue = F("Oberhammerstr.");
        break;
    }
    case 238746:
    {
        returnValue = F("Oberhammerwiesenstr.");
        break;
    }
    case 238747:
    {
        returnValue = F("Oberhardt");
        break;
    }
    case 238748:
    {
        returnValue = F("Oberhardtweg");
        break;
    }
    case 238749:
    {
        returnValue = F("Oberharrer");
        break;
    }
    case 238750:
    {
        returnValue = F("Oberhart");
        break;
    }
    case 238751:
    {
        returnValue = F("Oberharthausen");
        break;
    }
    case 238752:
    {
        returnValue = F("Oberharthausener Str.");
        break;
    }
    case 238753:
    {
        returnValue = F("Oberharthof");
        break;
    }
    case 238754:
    {
        returnValue = F("Oberharzstr.");
        break;
    }
    case 238755:
    {
        returnValue = F("Oberhasbach");
        break;
    }
    case 238756:
    {
        returnValue = F("Oberhasel");
        break;
    }
    case 238757:
    {
        returnValue = F("Oberhaslau");
        break;
    }
    case 238758:
    {
        returnValue = F("Oberhaslinger Weg");
        break;
    }
    case 238759:
    {
        returnValue = F("Oberhaugstetter Str.");
        break;
    }
    case 238760:
    {
        returnValue = F("Oberhauner Str.");
        break;
    }
    case 238761:
    {
        returnValue = F("Oberhauner Weg");
        break;
    }
    case 238762:
    {
        returnValue = F("Oberhaus");
        break;
    }
    case 238763:
    {
        returnValue = F("Oberhausen");
        break;
    }
    case 238764:
    {
        returnValue = F("Oberhausener Steige");
        break;
    }
    case 238765:
    {
        returnValue = F("Oberhausener Str.");
        break;
    }
    case 238766:
    {
        returnValue = F("Oberhausenstr.");
        break;
    }
    case 238767:
    {
        returnValue = F("Oberhauser Allee");
        break;
    }
    case 238768:
    {
        returnValue = F("Oberhauser Berg");
        break;
    }
    case 238769:
    {
        returnValue = F("Oberhauser Kirchweg");
        break;
    }
    case 238770:
    {
        returnValue = F("Oberhauser Str.");
        break;
    }
    case 238771:
    {
        returnValue = F("Oberhauser Weg");
        break;
    }
    case 238772:
    {
        returnValue = F("Oberhausmehring");
        break;
    }
    case 238773:
    {
        returnValue = F("Oberhausstr.");
        break;
    }
    case 238774:
    {
        returnValue = F("Oberhausweg");
        break;
    }
    case 238775:
    {
        returnValue = F("Oberhauweg");
        break;
    }
    case 238776:
    {
        returnValue = F("Oberhaverbeck");
        break;
    }
    case 238777:
    {
        returnValue = F("Oberhaßlauer Str.");
        break;
    }
    case 238778:
    {
        returnValue = F("Oberhebbinghausen");
        break;
    }
    case 238779:
    {
        returnValue = F("Oberheckenhofen");
        break;
    }
    case 238780:
    {
        returnValue = F("Oberheckerweg");
        break;
    }
    case 238781:
    {
        returnValue = F("Oberheide");
        break;
    }
    case 238782:
    {
        returnValue = F("Oberheidelberger Str.");
        break;
    }
    case 238783:
    {
        returnValue = F("Oberheiden");
        break;
    }
    case 238784:
    {
        returnValue = F("Oberheider Str.");
        break;
    }
    case 238785:
    {
        returnValue = F("Oberheidkamper Str.");
        break;
    }
    case 238786:
    {
        returnValue = F("Oberheidstr.");
        break;
    }
    case 238787:
    {
        returnValue = F("Oberheidt");
        break;
    }
    case 238788:
    {
        returnValue = F("Oberheidter Str.");
        break;
    }
    case 238789:
    {
        returnValue = F("Oberheinrieter Str.");
        break;
    }
    case 238790:
    {
        returnValue = F("Oberheinsdorfer Weg");
        break;
    }
    case 238791:
    {
        returnValue = F("Oberheitmannweg");
        break;
    }
    case 238792:
    {
        returnValue = F("Oberheldenberg");
        break;
    }
    case 238793:
    {
        returnValue = F("Oberheldrunger Str.");
        break;
    }
    case 238794:
    {
        returnValue = F("Oberhelsumer Feld");
        break;
    }
    case 238795:
    {
        returnValue = F("Oberhembacher Weg");
        break;
    }
    case 238796:
    {
        returnValue = F("Oberhenneweg");
        break;
    }
    case 238797:
    {
        returnValue = F("Oberhepschingen");
        break;
    }
    case 238798:
    {
        returnValue = F("Oberhermsdorf Kreuzung (1)");
        break;
    }
    case 238799:
    {
        returnValue = F("Oberhermsdorf Kreuzung (2)");
        break;
    }
    case 238800:
    {
        returnValue = F("Oberhermsdorf Kreuzung (3)");
        break;
    }
    case 238801:
    {
        returnValue = F("Oberhermsdorf Kreuzung (4)");
        break;
    }
    case 238802:
    {
        returnValue = F("Oberhermsdorfer Str.");
        break;
    }
    case 238803:
    {
        returnValue = F("Oberhermsgrüner Weg");
        break;
    }
    case 238804:
    {
        returnValue = F("Oberherrlinger Str.");
        break;
    }
    case 238805:
    {
        returnValue = F("Oberherwigsdorfer Str.");
        break;
    }
    case 238806:
    {
        returnValue = F("Oberhesterberg");
        break;
    }
    case 238807:
    {
        returnValue = F("Oberheufeld");
        break;
    }
    case 238808:
    {
        returnValue = F("Oberheumödern");
        break;
    }
    case 238809:
    {
        returnValue = F("Oberheydener Str.");
        break;
    }
    case 238810:
    {
        returnValue = F("Oberhinkofener Str.");
        break;
    }
    case 238811:
    {
        returnValue = F("Oberhinrichshagen");
        break;
    }
    case 238812:
    {
        returnValue = F("Oberhirschberg");
        break;
    }
    case 238813:
    {
        returnValue = F("Oberhochstegstr.");
        break;
    }
    case 238814:
    {
        returnValue = F("Oberhoder Weg");
        break;
    }
    case 238815:
    {
        returnValue = F("Oberhof");
        break;
    }
    case 238816:
    {
        returnValue = F("Oberhofberg");
        break;
    }
    case 238817:
    {
        returnValue = F("Oberhofen");
        break;
    }
    case 238818:
    {
        returnValue = F("Oberhofener Str.");
        break;
    }
    case 238819:
    {
        returnValue = F("Oberhofener Weg");
        break;
    }
    case 238820:
    {
        returnValue = F("Oberhofenstr.");
        break;
    }
    case 238821:
    {
        returnValue = F("Oberhofer Kapf-Weg");
        break;
    }
    case 238822:
    {
        returnValue = F("Oberhofer Platz");
        break;
    }
    case 238823:
    {
        returnValue = F("Oberhofer Str.");
        break;
    }
    case 238824:
    {
        returnValue = F("Oberhofer Weg");
        break;
    }
    case 238825:
    {
        returnValue = F("Oberhoferweg");
        break;
    }
    case 238826:
    {
        returnValue = F("Oberhoffsfeld");
        break;
    }
    case 238827:
    {
        returnValue = F("Oberhofkirchen");
        break;
    }
    case 238828:
    {
        returnValue = F("Oberhofstr.");
        break;
    }
    case 238829:
    {
        returnValue = F("Oberhofweg");
        break;
    }
    case 238830:
    {
        returnValue = F("Oberhohenbergstr.");
        break;
    }
    case 238831:
    {
        returnValue = F("Oberhohenkirchener Str.");
        break;
    }
    case 238832:
    {
        returnValue = F("Oberhohlstr.");
        break;
    }
    case 238833:
    {
        returnValue = F("Oberhohndorfer Marktweg");
        break;
    }
    case 238834:
    {
        returnValue = F("Oberhohndorfer Weg");
        break;
    }
    case 238835:
    {
        returnValue = F("Oberholderstr.");
        break;
    }
    case 238836:
    {
        returnValue = F("Oberholl");
        break;
    }
    case 238837:
    {
        returnValue = F("Oberholsener Str.");
        break;
    }
    case 238838:
    {
        returnValue = F("Oberholte");
        break;
    }
    case 238839:
    {
        returnValue = F("Oberholtorfer Kirchweg");
        break;
    }
    case 238840:
    {
        returnValue = F("Oberholz");
        break;
    }
    case 238841:
    {
        returnValue = F("Oberholzchausee");
        break;
    }
    case 238842:
    {
        returnValue = F("Oberholzen");
        break;
    }
    case 238843:
    {
        returnValue = F("Oberholzer Str.");
        break;
    }
    case 238844:
    {
        returnValue = F("Oberholzerweg");
        break;
    }
    case 238845:
    {
        returnValue = F("Oberholzham");
        break;
    }
    case 238846:
    {
        returnValue = F("Oberholzhausen");
        break;
    }
    case 238847:
    {
        returnValue = F("Oberholzheimer Str.");
        break;
    }
    case 238848:
    {
        returnValue = F("Oberholzklauer Str.");
        break;
    }
    case 238849:
    {
        returnValue = F("Oberholzrundweg");
        break;
    }
    case 238850:
    {
        returnValue = F("Oberholzstr.");
        break;
    }
    case 238851:
    {
        returnValue = F("Oberholzweg");
        break;
    }
    case 238852:
    {
        returnValue = F("Oberhombach");
        break;
    }
    case 238853:
    {
        returnValue = F("Oberhomberg Trail");
        break;
    }
    case 238854:
    {
        returnValue = F("Oberhombrechen");
        break;
    }
    case 238855:
    {
        returnValue = F("Oberhoppen");
        break;
    }
    case 238856:
    {
        returnValue = F("Oberhorbacher Str.");
        break;
    }
    case 238857:
    {
        returnValue = F("Oberhorgen");
        break;
    }
    case 238858:
    {
        returnValue = F("Oberhub");
        break;
    }
    case 238859:
    {
        returnValue = F("Oberhuberstr.");
        break;
    }
    case 238860:
    {
        returnValue = F("Oberhummerweg");
        break;
    }
    case 238861:
    {
        returnValue = F("Oberhundemer Str.");
        break;
    }
    case 238862:
    {
        returnValue = F("Oberhunscheid");
        break;
    }
    case 238863:
    {
        returnValue = F("Oberhutstr.");
        break;
    }
    case 238864:
    {
        returnValue = F("Oberhäger Str.");
        break;
    }
    case 238865:
    {
        returnValue = F("Oberhäuser Str.");
        break;
    }
    case 238866:
    {
        returnValue = F("Oberhäuser Weg");
        break;
    }
    case 238867:
    {
        returnValue = F("Oberhäuserstr.");
        break;
    }
    case 238868:
    {
        returnValue = F("Oberhäuserstr. - Säge");
        break;
    }
    case 238869:
    {
        returnValue = F("Oberhöchstädter Str.");
        break;
    }
    case 238870:
    {
        returnValue = F("Oberhöchstädter Weg");
        break;
    }
    case 238871:
    {
        returnValue = F("Oberhöfen");
        break;
    }
    case 238872:
    {
        returnValue = F("Oberhöfener Steige");
        break;
    }
    case 238873:
    {
        returnValue = F("Oberhöhberg");
        break;
    }
    case 238874:
    {
        returnValue = F("Oberhöhenstetten");
        break;
    }
    case 238875:
    {
        returnValue = F("Oberhöllen");
        break;
    }
    case 238876:
    {
        returnValue = F("Oberhöllsteig");
        break;
    }
    case 238877:
    {
        returnValue = F("Oberhölterfelder Str.");
        break;
    }
    case 238878:
    {
        returnValue = F("Oberhölzleinsweg");
        break;
    }
    case 238879:
    {
        returnValue = F("Oberhölzleweg");
        break;
    }
    case 238880:
    {
        returnValue = F("Oberhörn");
        break;
    }
    case 238881:
    {
        returnValue = F("Oberhörne");
        break;
    }
    case 238882:
    {
        returnValue = F("Oberhörner Hellmer");
        break;
    }
    case 238883:
    {
        returnValue = F("Oberhövels");
        break;
    }
    case 238884:
    {
        returnValue = F("Oberhüll");
        break;
    }
    case 238885:
    {
        returnValue = F("Oberhülsenbecke");
        break;
    }
    case 238886:
    {
        returnValue = F("Oberhütte");
        break;
    }
    case 238887:
    {
        returnValue = F("Oberhütten");
        break;
    }
    case 238888:
    {
        returnValue = F("Oberhützer Str.");
        break;
    }
    case 238889:
    {
        returnValue = F("Oberibental");
        break;
    }
    case 238890:
    {
        returnValue = F("Oberickelsheimer Str.");
        break;
    }
    case 238891:
    {
        returnValue = F("Oberifflingerweg");
        break;
    }
    case 238892:
    {
        returnValue = F("Oberiflinger Str.");
        break;
    }
    case 238893:
    {
        returnValue = F("Oberiglinger Str.");
        break;
    }
    case 238894:
    {
        returnValue = F("Oberilzmühle");
        break;
    }
    case 238895:
    {
        returnValue = F("Oberin-Hermanutz-Str.");
        break;
    }
    case 238896:
    {
        returnValue = F("Oberindlinger Str.");
        break;
    }
    case 238897:
    {
        returnValue = F("Oberingstr.");
        break;
    }
    case 238898:
    {
        returnValue = F("Oberisnyberg");
        break;
    }
    case 238899:
    {
        returnValue = F("Oberissigheimer Str.");
        break;
    }
    case 238900:
    {
        returnValue = F("Oberjahna");
        break;
    }
    case 238901:
    {
        returnValue = F("Oberjersdaler Str.");
        break;
    }
    case 238902:
    {
        returnValue = F("Oberjesinger Str.");
        break;
    }
    case 238903:
    {
        returnValue = F("Oberjesinger Weg");
        break;
    }
    case 238904:
    {
        returnValue = F("Oberjettenbacher Str.");
        break;
    }
    case 238905:
    {
        returnValue = F("Oberjettinger Str.");
        break;
    }
    case 238906:
    {
        returnValue = F("Oberjochstr.");
        break;
    }
    case 238907:
    {
        returnValue = F("Oberjochweg");
        break;
    }
    case 238908:
    {
        returnValue = F("Oberjulbachring");
        break;
    }
    case 238909:
    {
        returnValue = F("Oberjägermeisters-Schneise");
        break;
    }
    case 238910:
    {
        returnValue = F("Oberjägerstr.");
        break;
    }
    case 238911:
    {
        returnValue = F("Oberjägerweg");
        break;
    }
    case 238912:
    {
        returnValue = F("Oberjörn");
        break;
    }
    case 238913:
    {
        returnValue = F("Oberjößnitz");
        break;
    }
    case 238914:
    {
        returnValue = F("Oberjößnitzer Weg");
        break;
    }
    case 238915:
    {
        returnValue = F("Oberjünne");
        break;
    }
    case 238916:
    {
        returnValue = F("Oberkager");
        break;
    }
    case 238917:
    {
        returnValue = F("Oberkailer Str.");
        break;
    }
    case 238918:
    {
        returnValue = F("Oberkailerweg");
        break;
    }
    case 238919:
    {
        returnValue = F("Oberkainaer Str.");
        break;
    }
    case 238920:
    {
        returnValue = F("Oberkalbacher Str.");
        break;
    }
    case 238921:
    {
        returnValue = F("Oberkaltenhofstr.");
        break;
    }
    case 238922:
    {
        returnValue = F("Oberkammbach");
        break;
    }
    case 238923:
    {
        returnValue = F("Oberkamp");
        break;
    }
    case 238924:
    {
        returnValue = F("Oberkamper Str.");
        break;
    }
    case 238925:
    {
        returnValue = F("Oberkandelbach");
        break;
    }
    case 238926:
    {
        returnValue = F("Oberkandeler Teich");
        break;
    }
    case 238927:
    {
        returnValue = F("Oberkarlinger Str.");
        break;
    }
    case 238928:
    {
        returnValue = F("Oberkarthausen");
        break;
    }
    case 238929:
    {
        returnValue = F("Oberkasseler Brücke");
        break;
    }
    case 238930:
    {
        returnValue = F("Oberkasseler Str.");
        break;
    }
    case 238931:
    {
        returnValue = F("Oberkattwinkel");
        break;
    }
    case 238932:
    {
        returnValue = F("Oberkatzbach");
        break;
    }
    case 238933:
    {
        returnValue = F("Oberkatzensteig");
        break;
    }
    case 238934:
    {
        returnValue = F("Oberkelzer Weg");
        break;
    }
    case 238935:
    {
        returnValue = F("Oberkemmathener Str.");
        break;
    }
    case 238936:
    {
        returnValue = F("Oberkemmather Str.");
        break;
    }
    case 238937:
    {
        returnValue = F("Oberkemmerich");
        break;
    }
    case 238938:
    {
        returnValue = F("Oberkenading");
        break;
    }
    case 238939:
    {
        returnValue = F("Oberkessacher Str.");
        break;
    }
    case 238940:
    {
        returnValue = F("Oberkienberg");
        break;
    }
    case 238941:
    {
        returnValue = F("Oberkiesweg");
        break;
    }
    case 238942:
    {
        returnValue = F("Oberkietz");
        break;
    }
    case 238943:
    {
        returnValue = F("Oberkirch");
        break;
    }
    case 238944:
    {
        returnValue = F("Oberkirchberg");
        break;
    }
    case 238945:
    {
        returnValue = F("Oberkirchener Str.");
        break;
    }
    case 238946:
    {
        returnValue = F("Oberkirchenweg");
        break;
    }
    case 238947:
    {
        returnValue = F("Oberkircher Ring");
        break;
    }
    case 238948:
    {
        returnValue = F("Oberkircher Str.");
        break;
    }
    case 238949:
    {
        returnValue = F("Oberkirchfeldstr.");
        break;
    }
    case 238950:
    {
        returnValue = F("Oberkirchgasse");
        break;
    }
    case 238951:
    {
        returnValue = F("Oberkirchplatz");
        break;
    }
    case 238952:
    {
        returnValue = F("Oberkirchstr.");
        break;
    }
    case 238953:
    {
        returnValue = F("Oberkirchweg");
        break;
    }
    case 238954:
    {
        returnValue = F("Oberkirnacher Str.");
        break;
    }
    case 238955:
    {
        returnValue = F("Oberklapfenlehen");
        break;
    }
    case 238956:
    {
        returnValue = F("Oberklausen");
        break;
    }
    case 238957:
    {
        returnValue = F("Oberkleener Str.");
        break;
    }
    case 238958:
    {
        returnValue = F("Oberkleinich");
        break;
    }
    case 238959:
    {
        returnValue = F("Oberklüppelberg");
        break;
    }
    case 238960:
    {
        returnValue = F("Oberklützer Weg");
        break;
    }
    case 238961:
    {
        returnValue = F("Oberknick");
        break;
    }
    case 238962:
    {
        returnValue = F("Oberknill");
        break;
    }
    case 238963:
    {
        returnValue = F("Oberknöringer Str.");
        break;
    }
    case 238964:
    {
        returnValue = F("Oberkochener Str.");
        break;
    }
    case 238965:
    {
        returnValue = F("Oberkochener Weg");
        break;
    }
    case 238966:
    {
        returnValue = F("Oberkohlhaldenweg");
        break;
    }
    case 238967:
    {
        returnValue = F("Oberkolbenhof");
        break;
    }
    case 238968:
    {
        returnValue = F("Oberkollbacher Str.");
        break;
    }
    case 238969:
    {
        returnValue = F("Oberkollenbach");
        break;
    }
    case 238970:
    {
        returnValue = F("Oberkollwanger Weg");
        break;
    }
    case 238971:
    {
        returnValue = F("Oberkonhof");
        break;
    }
    case 238972:
    {
        returnValue = F("Oberkonnersreuther Str.");
        break;
    }
    case 238973:
    {
        returnValue = F("Oberkoppel");
        break;
    }
    case 238974:
    {
        returnValue = F("Oberkorbecke");
        break;
    }
    case 238975:
    {
        returnValue = F("Oberkornettenweg");
        break;
    }
    case 238976:
    {
        returnValue = F("Oberkotten");
        break;
    }
    case 238977:
    {
        returnValue = F("Oberkotzauer Str.");
        break;
    }
    case 238978:
    {
        returnValue = F("Oberkreiden");
        break;
    }
    case 238979:
    {
        returnValue = F("Oberkreith");
        break;
    }
    case 238980:
    {
        returnValue = F("Oberkreuzfeld");
        break;
    }
    case 238981:
    {
        returnValue = F("Oberkreuzstr.");
        break;
    }
    case 238982:
    {
        returnValue = F("Oberkreuzweg");
        break;
    }
    case 238983:
    {
        returnValue = F("Oberkrieger");
        break;
    }
    case 238984:
    {
        returnValue = F("Oberkrone");
        break;
    }
    case 238985:
    {
        returnValue = F("Oberkrossen");
        break;
    }
    case 238986:
    {
        returnValue = F("Oberkrummenweg");
        break;
    }
    case 238987:
    {
        returnValue = F("Oberkrämerweg");
        break;
    }
    case 238988:
    {
        returnValue = F("Oberkrüchtener Weg");
        break;
    }
    case 238989:
    {
        returnValue = F("Oberkälberstein");
        break;
    }
    case 238990:
    {
        returnValue = F("Oberkäsbacher Weg");
        break;
    }
    case 238991:
    {
        returnValue = F("Oberkätzer Str.");
        break;
    }
    case 238992:
    {
        returnValue = F("Oberköditz");
        break;
    }
    case 238993:
    {
        returnValue = F("Oberkögt");
        break;
    }
    case 238994:
    {
        returnValue = F("Oberköhrstr.");
        break;
    }
    case 238995:
    {
        returnValue = F("Oberköster Weg");
        break;
    }
    case 238996:
    {
        returnValue = F("Oberkülheim");
        break;
    }
    case 238997:
    {
        returnValue = F("Oberkülheimer Hof");
        break;
    }
    case 238998:
    {
        returnValue = F("Oberküpser Str.");
        break;
    }
    case 238999:
    {
        returnValue = F("Oberlacher Str.");
        break;
    }
    case 239000:
    {
        returnValue = F("Oberlachweg");
        break;
    }
    case 239001:
    {
        returnValue = F("Oberlahnbrücke");
        break;
    }
    case 239002:
    {
        returnValue = F("Oberlaichling");
        break;
    }
    case 239003:
    {
        returnValue = F("Oberlaimbach");
        break;
    }
    case 239004:
    {
        returnValue = F("Oberland");
        break;
    }
    case 239005:
    {
        returnValue = F("Oberlandradweg");
        break;
    }
    case 239006:
    {
        returnValue = F("Oberlandscheid");
        break;
    }
    case 239007:
    {
        returnValue = F("Oberlandsteig");
        break;
    }
    case 239008:
    {
        returnValue = F("Oberlandstr.");
        break;
    }
    case 239009:
    {
        returnValue = F("Oberlandsweg");
        break;
    }
    case 239010:
    {
        returnValue = F("Oberlandweg");
        break;
    }
    case 239011:
    {
        returnValue = F("Oberlangau");
        break;
    }
    case 239012:
    {
        returnValue = F("Oberlangberg");
        break;
    }
    case 239013:
    {
        returnValue = F("Oberlangener Weg");
        break;
    }
    case 239014:
    {
        returnValue = F("Oberlangenhorst");
        break;
    }
    case 239015:
    {
        returnValue = F("Oberlangensee");
        break;
    }
    case 239016:
    {
        returnValue = F("Oberlangental");
        break;
    }
    case 239017:
    {
        returnValue = F("Oberlanggasse");
        break;
    }
    case 239018:
    {
        returnValue = F("Oberlangheimer Str.");
        break;
    }
    case 239019:
    {
        returnValue = F("Oberlanglohweg");
        break;
    }
    case 239020:
    {
        returnValue = F("Oberlarer Platz");
        break;
    }
    case 239021:
    {
        returnValue = F("Oberlarer Str.");
        break;
    }
    case 239022:
    {
        returnValue = F("Oberlau");
        break;
    }
    case 239023:
    {
        returnValue = F("Oberlaudaer Str.");
        break;
    }
    case 239024:
    {
        returnValue = F("Oberlauengasse");
        break;
    }
    case 239025:
    {
        returnValue = F("Oberlauringer Str.");
        break;
    }
    case 239026:
    {
        returnValue = F("Oberlauringer Weg");
        break;
    }
    case 239027:
    {
        returnValue = F("Oberlausitzer Bauerngarten");
        break;
    }
    case 239028:
    {
        returnValue = F("Oberlausitzer Str.");
        break;
    }
    case 239029:
    {
        returnValue = F("Oberlausitzer Wanderstiefel");
        break;
    }
    case 239030:
    {
        returnValue = F("Oberlausitzer Weg");
        break;
    }
    case 239031:
    {
        returnValue = F("Oberlauterbach");
        break;
    }
    case 239032:
    {
        returnValue = F("Oberlauterbacher Str.");
        break;
    }
    case 239033:
    {
        returnValue = F("Oberledinger Str.");
        break;
    }
    case 239034:
    {
        returnValue = F("Oberlehberg");
        break;
    }
    case 239035:
    {
        returnValue = F("Oberlehen");
        break;
    }
    case 239036:
    {
        returnValue = F("Oberlehrer-Beck-Str.");
        break;
    }
    case 239037:
    {
        returnValue = F("Oberlehrer-Grätzer-Str.");
        break;
    }
    case 239038:
    {
        returnValue = F("Oberlehrer-Haiböck-Str.");
        break;
    }
    case 239039:
    {
        returnValue = F("Oberlehrer-Sommerer-Str.");
        break;
    }
    case 239040:
    {
        returnValue = F("Oberlehrer-Stoeckl-Str.");
        break;
    }
    case 239041:
    {
        returnValue = F("Oberleien");
        break;
    }
    case 239042:
    {
        returnValue = F("Oberleierndorf");
        break;
    }
    case 239043:
    {
        returnValue = F("Oberleimbach");
        break;
    }
    case 239044:
    {
        returnValue = F("Oberleimbachshof");
        break;
    }
    case 239045:
    {
        returnValue = F("Oberleinbach");
        break;
    }
    case 239046:
    {
        returnValue = F("Oberleinsiedl");
        break;
    }
    case 239047:
    {
        returnValue = F("Oberleite");
        break;
    }
    case 239048:
    {
        returnValue = F("Oberleiten");
        break;
    }
    case 239049:
    {
        returnValue = F("Oberleiterbacher Str.");
        break;
    }
    case 239050:
    {
        returnValue = F("Oberlemnitz");
        break;
    }
    case 239051:
    {
        returnValue = F("Oberlemnitzer Weg");
        break;
    }
    case 239052:
    {
        returnValue = F("Oberlemper Str.");
        break;
    }
    case 239053:
    {
        returnValue = F("Oberlengendorf");
        break;
    }
    case 239054:
    {
        returnValue = F("Oberlengenfeld");
        break;
    }
    case 239055:
    {
        returnValue = F("Oberlengenhardter Str.");
        break;
    }
    case 239056:
    {
        returnValue = F("Oberlengenhardter Weg");
        break;
    }
    case 239057:
    {
        returnValue = F("Oberlenninger Steige");
        break;
    }
    case 239058:
    {
        returnValue = F("Oberleppe");
        break;
    }
    case 239059:
    {
        returnValue = F("Oberlerbach");
        break;
    }
    case 239060:
    {
        returnValue = F("Oberlestr.");
        break;
    }
    case 239061:
    {
        returnValue = F("Oberlether Str.");
        break;
    }
    case 239062:
    {
        returnValue = F("Oberleukener Weg");
        break;
    }
    case 239063:
    {
        returnValue = F("Oberleupoldsberg");
        break;
    }
    case 239064:
    {
        returnValue = F("Oberleuptener Str.");
        break;
    }
    case 239065:
    {
        returnValue = F("Oberleutnerstr.");
        break;
    }
    case 239066:
    {
        returnValue = F("Oberlibbacher Weg");
        break;
    }
    case 239067:
    {
        returnValue = F("Oberlichtenwald");
        break;
    }
    case 239068:
    {
        returnValue = F("Oberliede");
        break;
    }
    case 239069:
    {
        returnValue = F("Oberliederbacher Park");
        break;
    }
    case 239070:
    {
        returnValue = F("Oberliederbacher Weg");
        break;
    }
    case 239071:
    {
        returnValue = F("Oberlimbergstr.");
        break;
    }
    case 239072:
    {
        returnValue = F("Oberlin-Weg");
        break;
    }
    case 239073:
    {
        returnValue = F("Oberlind");
        break;
    }
    case 239074:
    {
        returnValue = F("Oberlindacher Str.");
        break;
    }
    case 239075:
    {
        returnValue = F("Oberlindau");
        break;
    }
    case 239076:
    {
        returnValue = F("Oberlindbergmühle");
        break;
    }
    case 239077:
    {
        returnValue = F("Oberlindelbach");
        break;
    }
    case 239078:
    {
        returnValue = F("Oberlinden");
        break;
    }
    case 239079:
    {
        returnValue = F("Oberlinden Passage");
        break;
    }
    case 239080:
    {
        returnValue = F("Oberlinder Marktplatz");
        break;
    }
    case 239081:
    {
        returnValue = F("Oberlinder Str.");
        break;
    }
    case 239082:
    {
        returnValue = F("Oberlindhart");
        break;
    }
    case 239083:
    {
        returnValue = F("Oberlindhofstr.");
        break;
    }
    case 239084:
    {
        returnValue = F("Oberlindigt");
        break;
    }
    case 239085:
    {
        returnValue = F("Oberlindigweg");
        break;
    }
    case 239086:
    {
        returnValue = F("Oberlinstr.");
        break;
    }
    case 239087:
    {
        returnValue = F("Oberlintach");
        break;
    }
    case 239088:
    {
        returnValue = F("Oberlinweg");
        break;
    }
    case 239089:
    {
        returnValue = F("Oberlippe");
        break;
    }
    case 239090:
    {
        returnValue = F("Oberlipper Str.");
        break;
    }
    case 239091:
    {
        returnValue = F("Oberlistinger Str.");
        break;
    }
    case 239092:
    {
        returnValue = F("Oberloch");
        break;
    }
    case 239093:
    {
        returnValue = F("Oberlocherhof");
        break;
    }
    case 239094:
    {
        returnValue = F("Oberlochmühle");
        break;
    }
    case 239095:
    {
        returnValue = F("Oberloh");
        break;
    }
    case 239096:
    {
        returnValue = F("Oberlohmannshof");
        break;
    }
    case 239097:
    {
        returnValue = F("Oberlohnstr.");
        break;
    }
    case 239098:
    {
        returnValue = F("Oberlohrstr.");
        break;
    }
    case 239099:
    {
        returnValue = F("Oberlohstr.");
        break;
    }
    case 239100:
    {
        returnValue = F("Oberlommatzscher Weg");
        break;
    }
    case 239101:
    {
        returnValue = F("Oberlope");
        break;
    }
    case 239102:
    {
        returnValue = F("Oberlosaer Weg");
        break;
    }
    case 239103:
    {
        returnValue = F("Oberlotse-Voß-Weg");
        break;
    }
    case 239104:
    {
        returnValue = F("Oberloßbruch");
        break;
    }
    case 239105:
    {
        returnValue = F("Oberluher Weg");
        break;
    }
    case 239106:
    {
        returnValue = F("Oberlungwitzer Str.");
        break;
    }
    case 239107:
    {
        returnValue = F("Oberlustadter Str.");
        break;
    }
    case 239108:
    {
        returnValue = F("Oberländchen");
        break;
    }
    case 239109:
    {
        returnValue = F("Oberländer Hafen");
        break;
    }
    case 239110:
    {
        returnValue = F("Oberländer Str.");
        break;
    }
    case 239111:
    {
        returnValue = F("Oberländer Ufer");
        break;
    }
    case 239112:
    {
        returnValue = F("Oberländer Wall");
        break;
    }
    case 239113:
    {
        returnValue = F("Oberländerstr.");
        break;
    }
    case 239114:
    {
        returnValue = F("Oberländerweg");
        break;
    }
    case 239115:
    {
        returnValue = F("Oberläuterstr.");
        break;
    }
    case 239116:
    {
        returnValue = F("Oberlöh");
        break;
    }
    case 239117:
    {
        returnValue = F("Oberlöricker Str.");
        break;
    }
    case 239118:
    {
        returnValue = F("Oberlösterner Str.");
        break;
    }
    case 239119:
    {
        returnValue = F("Oberlübber Str.");
        break;
    }
    case 239120:
    {
        returnValue = F("Oberlückerath");
        break;
    }
    case 239121:
    {
        returnValue = F("Oberlüghausen");
        break;
    }
    case 239122:
    {
        returnValue = F("Oberlütter");
        break;
    }
    case 239123:
    {
        returnValue = F("Oberm Ahlbacher Weg");
        break;
    }
    case 239124:
    {
        returnValue = F("Oberm Brinke");
        break;
    }
    case 239125:
    {
        returnValue = F("Oberm Dorf");
        break;
    }
    case 239126:
    {
        returnValue = F("Oberm Garten");
        break;
    }
    case 239127:
    {
        returnValue = F("Oberm Görgengarten");
        break;
    }
    case 239128:
    {
        returnValue = F("Oberm Haus");
        break;
    }
    case 239129:
    {
        returnValue = F("Oberm Hof");
        break;
    }
    case 239130:
    {
        returnValue = F("Oberm Hofe");
        break;
    }
    case 239131:
    {
        returnValue = F("Oberm Kappesgarten");
        break;
    }
    case 239132:
    {
        returnValue = F("Oberm Kirchhof");
        break;
    }
    case 239133:
    {
        returnValue = F("Oberm Kümpel");
        break;
    }
    case 239134:
    {
        returnValue = F("Oberm Rathaus");
        break;
    }
    case 239135:
    {
        returnValue = F("Oberm Schloßplatz");
        break;
    }
    case 239136:
    {
        returnValue = F("Oberm Schulhaus");
        break;
    }
    case 239137:
    {
        returnValue = F("Oberm Stück");
        break;
    }
    case 239138:
    {
        returnValue = F("Oberm Teich");
        break;
    }
    case 239139:
    {
        returnValue = F("Oberm Tiergarten");
        break;
    }
    case 239140:
    {
        returnValue = F("Oberm Wäldchen");
        break;
    }
    case 239141:
    {
        returnValue = F("Obermaierstr.");
        break;
    }
    case 239142:
    {
        returnValue = F("Obermainanlage");
        break;
    }
    case 239143:
    {
        returnValue = F("Obermainsbach");
        break;
    }
    case 239144:
    {
        returnValue = F("Obermainshof");
        break;
    }
    case 239145:
    {
        returnValue = F("Obermainstr.");
        break;
    }
    case 239146:
    {
        returnValue = F("Obermannshaldeweg");
        break;
    }
    case 239147:
    {
        returnValue = F("Obermannstr.");
        break;
    }
    case 239148:
    {
        returnValue = F("Obermarkersdorfer Str.");
        break;
    }
    case 239149:
    {
        returnValue = F("Obermarkstr.");
        break;
    }
    case 239150:
    {
        returnValue = F("Obermarkt");
        break;
    }
    case 239151:
    {
        returnValue = F("Obermarkt Passage");
        break;
    }
    case 239152:
    {
        returnValue = F("Obermarktgasse");
        break;
    }
    case 239153:
    {
        returnValue = F("Obermarktstr.");
        break;
    }
    case 239154:
    {
        returnValue = F("Obermarschweg");
        break;
    }
    case 239155:
    {
        returnValue = F("Obermartinsweiler");
        break;
    }
    case 239156:
    {
        returnValue = F("Obermarxgrüner Str.");
        break;
    }
    case 239157:
    {
        returnValue = F("Obermarxgrüner Weg");
        break;
    }
    case 239158:
    {
        returnValue = F("Obermarxloher Str.");
        break;
    }
    case 239159:
    {
        returnValue = F("Obermassener Kirchweg");
        break;
    }
    case 239160:
    {
        returnValue = F("Obermatt");
        break;
    }
    case 239161:
    {
        returnValue = F("Obermatten");
        break;
    }
    case 239162:
    {
        returnValue = F("Obermattenweg");
        break;
    }
    case 239163:
    {
        returnValue = F("Obermattstr.");
        break;
    }
    case 239164:
    {
        returnValue = F("Obermattweg");
        break;
    }
    case 239165:
    {
        returnValue = F("Obermauerstr.");
        break;
    }
    case 239166:
    {
        returnValue = F("Obermauk");
        break;
    }
    case 239167:
    {
        returnValue = F("Obermausbach");
        break;
    }
    case 239168:
    {
        returnValue = F("Obermaxkron");
        break;
    }
    case 239169:
    {
        returnValue = F("Obermayerstr.");
        break;
    }
    case 239170:
    {
        returnValue = F("Obermayerweg");
        break;
    }
    case 239171:
    {
        returnValue = F("Obermayrstr.");
        break;
    }
    case 239172:
    {
        returnValue = F("Obermaßholderbacher Weg");
        break;
    }
    case 239173:
    {
        returnValue = F("Obermehlersche Str.");
        break;
    }
    case 239174:
    {
        returnValue = F("Obermehner Str.");
        break;
    }
    case 239175:
    {
        returnValue = F("Obermehner Weg");
        break;
    }
    case 239176:
    {
        returnValue = F("Obermeidericher Pfad");
        break;
    }
    case 239177:
    {
        returnValue = F("Obermeidericher Str.");
        break;
    }
    case 239178:
    {
        returnValue = F("Obermeiers Feld");
        break;
    }
    case 239179:
    {
        returnValue = F("Obermeierstr.");
        break;
    }
    case 239180:
    {
        returnValue = F("Obermeierweg");
        break;
    }
    case 239181:
    {
        returnValue = F("Obermeitinger Str.");
        break;
    }
    case 239182:
    {
        returnValue = F("Obermelsendorf");
        break;
    }
    case 239183:
    {
        returnValue = F("Obermelsunger Str.");
        break;
    }
    case 239184:
    {
        returnValue = F("Obermelsunger Weg");
        break;
    }
    case 239185:
    {
        returnValue = F("Obermembach");
        break;
    }
    case 239186:
    {
        returnValue = F("Obermendiger Str.");
        break;
    }
    case 239187:
    {
        returnValue = F("Obermendigerstr");
        break;
    }
    case 239188:
    {
        returnValue = F("Obermenniger Str.");
        break;
    }
    case 239189:
    {
        returnValue = F("Obermerzer Str.");
        break;
    }
    case 239190:
    {
        returnValue = F("Obermeusegast");
        break;
    }
    case 239191:
    {
        returnValue = F("Obermichelbacher Str.");
        break;
    }
    case 239192:
    {
        returnValue = F("Obermiebach");
        break;
    }
    case 239193:
    {
        returnValue = F("Obermittweida");
        break;
    }
    case 239194:
    {
        returnValue = F("Obermohrer Pfad");
        break;
    }
    case 239195:
    {
        returnValue = F("Obermohrer Str.");
        break;
    }
    case 239196:
    {
        returnValue = F("Obermolbitzer Str.");
        break;
    }
    case 239197:
    {
        returnValue = F("Obermoldauer Str.");
        break;
    }
    case 239198:
    {
        returnValue = F("Obermoos");
        break;
    }
    case 239199:
    {
        returnValue = F("Obermoosen");
        break;
    }
    case 239200:
    {
        returnValue = F("Obermoosstr.");
        break;
    }
    case 239201:
    {
        returnValue = F("Obermoosweg");
        break;
    }
    case 239202:
    {
        returnValue = F("Obermorgenstr.");
        break;
    }
    case 239203:
    {
        returnValue = F("Obermoscheler Str.");
        break;
    }
    case 239204:
    {
        returnValue = F("Obermoselstr.");
        break;
    }
    case 239205:
    {
        returnValue = F("Obermunzig");
        break;
    }
    case 239206:
    {
        returnValue = F("Obermurach");
        break;
    }
    case 239207:
    {
        returnValue = F("Obermurnthal");
        break;
    }
    case 239208:
    {
        returnValue = F("Obermusbacher Weg");
        break;
    }
    case 239209:
    {
        returnValue = F("Obermylauer Berg");
        break;
    }
    case 239210:
    {
        returnValue = F("Obermylauer Weg");
        break;
    }
    case 239211:
    {
        returnValue = F("Obermögersheim");
        break;
    }
    case 239212:
    {
        returnValue = F("Obermöllricher Str.");
        break;
    }
    case 239213:
    {
        returnValue = F("Obermörler Weg");
        break;
    }
    case 239214:
    {
        returnValue = F("Obermörmter Str.");
        break;
    }
    case 239215:
    {
        returnValue = F("Obermühl");
        break;
    }
    case 239216:
    {
        returnValue = F("Obermühle");
        break;
    }
    case 239217:
    {
        returnValue = F("Obermühlenstr.");
        break;
    }
    case 239218:
    {
        returnValue = F("Obermühlenweg");
        break;
    }
    case 239219:
    {
        returnValue = F("Obermühlgasse");
        break;
    }
    case 239220:
    {
        returnValue = F("Obermühlhausen");
        break;
    }
    case 239221:
    {
        returnValue = F("Obermühlstr.");
        break;
    }
    case 239222:
    {
        returnValue = F("Obermühlsweg");
        break;
    }
    case 239223:
    {
        returnValue = F("Obermühlteich");
        break;
    }
    case 239224:
    {
        returnValue = F("Obermühlweg");
        break;
    }
    case 239225:
    {
        returnValue = F("Obermüllerstr.");
        break;
    }
    case 239226:
    {
        returnValue = F("Obermüllerweg");
        break;
    }
    case 239227:
    {
        returnValue = F("Obermünchen");
        break;
    }
    case 239228:
    {
        returnValue = F("Obermünsterer Passage");
        break;
    }
    case 239229:
    {
        returnValue = F("Obermünsterplatz");
        break;
    }
    case 239230:
    {
        returnValue = F("Obermünsterstr.");
        break;
    }
    case 239231:
    {
        returnValue = F("Obern Daal");
        break;
    }
    case 239232:
    {
        returnValue = F("Obern Diek");
        break;
    }
    case 239233:
    {
        returnValue = F("Obern Dorf");
        break;
    }
    case 239234:
    {
        returnValue = F("Obernach");
        break;
    }
    case 239235:
    {
        returnValue = F("Obernackernstr.");
        break;
    }
    case 239236:
    {
        returnValue = F("Obernaifermühle");
        break;
    }
    case 239237:
    {
        returnValue = F("Obernau");
        break;
    }
    case 239238:
    {
        returnValue = F("Obernauer Str.");
        break;
    }
    case 239239:
    {
        returnValue = F("Obernauer Weg");
        break;
    }
    case 239240:
    {
        returnValue = F("Obernaundorfer Str.");
        break;
    }
    case 239241:
    {
        returnValue = F("Obernaundorfer Weg");
        break;
    }
    case 239242:
    {
        returnValue = F("Obernberg");
        break;
    }
    case 239243:
    {
        returnValue = F("Obernbergsiedlung");
        break;
    }
    case 239244:
    {
        returnValue = F("Obernbergstr.");
        break;
    }
    case 239245:
    {
        returnValue = F("Obernbreiter Str.");
        break;
    }
    case 239246:
    {
        returnValue = F("Obernbrink");
        break;
    }
    case 239247:
    {
        returnValue = F("Obernburger Str.");
        break;
    }
    case 239248:
    {
        returnValue = F("Obernburger Weg");
        break;
    }
    case 239249:
    {
        returnValue = F("Oberndorf");
        break;
    }
    case 239250:
    {
        returnValue = F("Oberndorf A");
        break;
    }
    case 239251:
    {
        returnValue = F("Oberndorf B");
        break;
    }
    case 239252:
    {
        returnValue = F("Oberndorf C");
        break;
    }
    case 239253:
    {
        returnValue = F("Oberndorf D");
        break;
    }
    case 239254:
    {
        returnValue = F("Oberndorf E");
        break;
    }
    case 239255:
    {
        returnValue = F("Oberndorf F");
        break;
    }
    case 239256:
    {
        returnValue = F("Oberndorf Geräumt");
        break;
    }
    case 239257:
    {
        returnValue = F("Oberndorf Weißmahle");
        break;
    }
    case 239258:
    {
        returnValue = F("Oberndorf-Geräumt");
        break;
    }
    case 239259:
    {
        returnValue = F("Oberndorf-Höfe");
        break;
    }
    case 239260:
    {
        returnValue = F("Oberndorfer Brücke");
        break;
    }
    case 239261:
    {
        returnValue = F("Oberndorfer Fahrweg");
        break;
    }
    case 239262:
    {
        returnValue = F("Oberndorfer Str.");
        break;
    }
    case 239263:
    {
        returnValue = F("Oberndorfer Weg");
        break;
    }
    case 239264:
    {
        returnValue = F("Oberndorferstr.");
        break;
    }
    case 239265:
    {
        returnValue = F("Oberndorferweg");
        break;
    }
    case 239266:
    {
        returnValue = F("Oberndorff-Geräumt");
        break;
    }
    case 239267:
    {
        returnValue = F("Oberndorffer Str.");
        break;
    }
    case 239268:
    {
        returnValue = F("Oberndorfferstr.");
        break;
    }
    case 239269:
    {
        returnValue = F("Oberndorfstr.");
        break;
    }
    case 239270:
    {
        returnValue = F("Oberne");
        break;
    }
    case 239271:
    {
        returnValue = F("Obernefsried");
        break;
    }
    case 239272:
    {
        returnValue = F("Oberneiser Str.");
        break;
    }
    case 239273:
    {
        returnValue = F("Obernessig");
        break;
    }
    case 239274:
    {
        returnValue = F("Obernetter Str.");
        break;
    }
    case 239275:
    {
        returnValue = F("Oberneudorfer Weg");
        break;
    }
    case 239276:
    {
        returnValue = F("Oberneugasse");
        break;
    }
    case 239277:
    {
        returnValue = F("Oberneukirchner Str.");
        break;
    }
    case 239278:
    {
        returnValue = F("Oberneulander Heerstr.");
        break;
    }
    case 239279:
    {
        returnValue = F("Oberneulander Landstr.");
        break;
    }
    case 239280:
    {
        returnValue = F("Oberneumarker Str.");
        break;
    }
    case 239281:
    {
        returnValue = F("Oberneumarker Weg");
        break;
    }
    case 239282:
    {
        returnValue = F("Oberneureuther Str.");
        break;
    }
    case 239283:
    {
        returnValue = F("Oberneuschönberger Str.");
        break;
    }
    case 239284:
    {
        returnValue = F("Oberneuschönberger Weg");
        break;
    }
    case 239285:
    {
        returnValue = F("Oberneuses");
        break;
    }
    case 239286:
    {
        returnValue = F("Oberneusorge");
        break;
    }
    case 239287:
    {
        returnValue = F("Oberneustetten");
        break;
    }
    case 239288:
    {
        returnValue = F("Obernfeld");
        break;
    }
    case 239289:
    {
        returnValue = F("Obernfelde");
        break;
    }
    case 239290:
    {
        returnValue = F("Obernfelder Allee");
        break;
    }
    case 239291:
    {
        returnValue = F("Obernfeldstr.");
        break;
    }
    case 239292:
    {
        returnValue = F("Obernfeldweg");
        break;
    }
    case 239293:
    {
        returnValue = F("Oberngarten");
        break;
    }
    case 239294:
    {
        returnValue = F("Obernhagen");
        break;
    }
    case 239295:
    {
        returnValue = F("Obernhagener Str.");
        break;
    }
    case 239296:
    {
        returnValue = F("Obernhainer Str.");
        break;
    }
    case 239297:
    {
        returnValue = F("Obernhainer Weg");
        break;
    }
    case 239298:
    {
        returnValue = F("Obernhausen");
        break;
    }
    case 239299:
    {
        returnValue = F("Obernhausen-Neuenbürger-Weg");
        break;
    }
    case 239300:
    {
        returnValue = F("Obernheede");
        break;
    }
    case 239301:
    {
        returnValue = F("Obernheideweg");
        break;
    }
    case 239302:
    {
        returnValue = F("Obernheimer Str.");
        break;
    }
    case 239303:
    {
        returnValue = F("Obernheimweg");
        break;
    }
    case 239304:
    {
        returnValue = F("Obernhofer Str.");
        break;
    }
    case 239305:
    {
        returnValue = F("Obernholzweg");
        break;
    }
    case 239306:
    {
        returnValue = F("Obernhäuser Str.");
        break;
    }
    case 239307:
    {
        returnValue = F("Obernhäuser Weg");
        break;
    }
    case 239308:
    {
        returnValue = F("Obernierstr.");
        break;
    }
    case 239309:
    {
        returnValue = F("Obernissaer Chaussee");
        break;
    }
    case 239310:
    {
        returnValue = F("Obernitzstr.");
        break;
    }
    case 239311:
    {
        returnValue = F("Obernjesaer Str.");
        break;
    }
    case 239312:
    {
        returnValue = F("Obernkamp");
        break;
    }
    case 239313:
    {
        returnValue = F("Obernkirchener Str.");
        break;
    }
    case 239314:
    {
        returnValue = F("Obernkirchenstr.");
        break;
    }
    case 239315:
    {
        returnValue = F("Obernricht");
        break;
    }
    case 239316:
    {
        returnValue = F("Obernschreezer Str.");
        break;
    }
    case 239317:
    {
        returnValue = F("Obernstr.");
        break;
    }
    case 239318:
    {
        returnValue = F("Oberntiefer Str.");
        break;
    }
    case 239319:
    {
        returnValue = F("Oberntorstr.");
        break;
    }
    case 239320:
    {
        returnValue = F("Oberntorwall");
        break;
    }
    case 239321:
    {
        returnValue = F("Oberntrautstr.");
        break;
    }
    case 239322:
    {
        returnValue = F("Obernweg");
        break;
    }
    case 239323:
    {
        returnValue = F("Obernwöhrener Str.");
        break;
    }
    case 239324:
    {
        returnValue = F("Obernzeller Str.");
        break;
    }
    case 239325:
    {
        returnValue = F("Obernzenner Str.");
        break;
    }
    case 239326:
    {
        returnValue = F("Oberoberndorf");
        break;
    }
    case 239327:
    {
        returnValue = F("Oberobsang");
        break;
    }
    case 239328:
    {
        returnValue = F("Oberochsenbach");
        break;
    }
    case 239329:
    {
        returnValue = F("Oberoderwitzer Weg");
        break;
    }
    case 239330:
    {
        returnValue = F("Oberohe");
        break;
    }
    case 239331:
    {
        returnValue = F("Oberohrner Str.");
        break;
    }
    case 239332:
    {
        returnValue = F("Oberon");
        break;
    }
    case 239333:
    {
        returnValue = F("Oberonnert");
        break;
    }
    case 239334:
    {
        returnValue = F("Oberonstr.");
        break;
    }
    case 239335:
    {
        returnValue = F("Oberopfinger Str.");
        break;
    }
    case 239336:
    {
        returnValue = F("Oberoppacher Str.");
        break;
    }
    case 239337:
    {
        returnValue = F("Oberort");
        break;
    }
    case 239338:
    {
        returnValue = F("Oberortstr.");
        break;
    }
    case 239339:
    {
        returnValue = F("Oberortwang");
        break;
    }
    case 239340:
    {
        returnValue = F("Oberossenbach");
        break;
    }
    case 239341:
    {
        returnValue = F("Oberostendorfer Str.");
        break;
    }
    case 239342:
    {
        returnValue = F("Oberotterbacher Str.");
        break;
    }
    case 239343:
    {
        returnValue = F("Oberottersbach");
        break;
    }
    case 239344:
    {
        returnValue = F("Oberottl-Passage");
        break;
    }
    case 239345:
    {
        returnValue = F("Oberottmarshauser Str.");
        break;
    }
    case 239346:
    {
        returnValue = F("Oberpaurpassage");
        break;
    }
    case 239347:
    {
        returnValue = F("Oberpesterwitzer Str.");
        break;
    }
    case 239348:
    {
        returnValue = F("Oberpesterwitzer Str. (1)");
        break;
    }
    case 239349:
    {
        returnValue = F("Oberpesterwitzer Str. (2)");
        break;
    }
    case 239350:
    {
        returnValue = F("Oberpetterweiler Weg");
        break;
    }
    case 239351:
    {
        returnValue = F("Oberpfadweg");
        break;
    }
    case 239352:
    {
        returnValue = F("Oberpfalzstr.");
        break;
    }
    case 239353:
    {
        returnValue = F("Oberpfannenstiel");
        break;
    }
    case 239354:
    {
        returnValue = F("Oberpfannenstieler Str.");
        break;
    }
    case 239355:
    {
        returnValue = F("Oberpfarrkirchhof");
        break;
    }
    case 239356:
    {
        returnValue = F("Oberpferdt");
        break;
    }
    case 239357:
    {
        returnValue = F("Oberpferdter Dorfstr.");
        break;
    }
    case 239358:
    {
        returnValue = F("Oberpferdter Str.");
        break;
    }
    case 239359:
    {
        returnValue = F("Oberpforte");
        break;
    }
    case 239360:
    {
        returnValue = F("Oberpfortstr.");
        break;
    }
    case 239361:
    {
        returnValue = F("Oberpframmener Str.");
        break;
    }
    case 239362:
    {
        returnValue = F("Oberpfreimd");
        break;
    }
    case 239363:
    {
        returnValue = F("Oberpfuhlstr.");
        break;
    }
    case 239364:
    {
        returnValue = F("Oberpfälzer Str.");
        break;
    }
    case 239365:
    {
        returnValue = F("Oberpfälzer-Wald-Str.");
        break;
    }
    case 239366:
    {
        returnValue = F("Oberpickenhain");
        break;
    }
    case 239367:
    {
        returnValue = F("Oberpierlhofer Str.");
        break;
    }
    case 239368:
    {
        returnValue = F("Oberpierlhofer Weg");
        break;
    }
    case 239369:
    {
        returnValue = F("Oberpilghausen");
        break;
    }
    case 239370:
    {
        returnValue = F("Oberpirker Str.");
        break;
    }
    case 239371:
    {
        returnValue = F("Oberplaner Str.");
        break;
    }
    case 239372:
    {
        returnValue = F("Oberpleichfelder Str.");
        break;
    }
    case 239373:
    {
        returnValue = F("Oberpleiser Str.");
        break;
    }
    case 239374:
    {
        returnValue = F("Oberpohlhausen");
        break;
    }
    case 239375:
    {
        returnValue = F("Oberpollner Str.");
        break;
    }
    case 239376:
    {
        returnValue = F("Oberposta");
        break;
    }
    case 239377:
    {
        returnValue = F("Oberpoyritzer Str.");
        break;
    }
    case 239378:
    {
        returnValue = F("Oberprechhausen");
        break;
    }
    case 239379:
    {
        returnValue = F("Oberpreilipp");
        break;
    }
    case 239380:
    {
        returnValue = F("Oberpreth");
        break;
    }
    case 239381:
    {
        returnValue = F("Oberprether Weg");
        break;
    }
    case 239382:
    {
        returnValue = F("Oberpretz");
        break;
    }
    case 239383:
    {
        returnValue = F("Oberprost");
        break;
    }
    case 239384:
    {
        returnValue = F("Oberpullendorfer Str.");
        break;
    }
    case 239385:
    {
        returnValue = F("Oberpöllnitzer Str.");
        break;
    }
    case 239386:
    {
        returnValue = F("Oberpörlitzer Str.");
        break;
    }
    case 239387:
    {
        returnValue = F("Oberquast");
        break;
    }
    case 239388:
    {
        returnValue = F("Oberquembacher Str.");
        break;
    }
    case 239389:
    {
        returnValue = F("Oberr. Griesklingensackweg");
        break;
    }
    case 239390:
    {
        returnValue = F("Oberrabensteiner Str.");
        break;
    }
    case 239391:
    {
        returnValue = F("Oberradener Weg");
        break;
    }
    case 239392:
    {
        returnValue = F("Oberrahserstr.");
        break;
    }
    case 239393:
    {
        returnValue = F("Oberrain");
        break;
    }
    case 239394:
    {
        returnValue = F("Oberrainer Feld");
        break;
    }
    case 239395:
    {
        returnValue = F("Oberrainmühle");
        break;
    }
    case 239396:
    {
        returnValue = F("Oberrammenauer Str.");
        break;
    }
    case 239397:
    {
        returnValue = F("Oberrammersdorf");
        break;
    }
    case 239398:
    {
        returnValue = F("Oberranschütz");
        break;
    }
    case 239399:
    {
        returnValue = F("Oberranschützer Str.");
        break;
    }
    case 239400:
    {
        returnValue = F("Oberranschützer Weg");
        break;
    }
    case 239401:
    {
        returnValue = F("Oberrappendorf");
        break;
    }
    case 239402:
    {
        returnValue = F("Oberrasener Weg");
        break;
    }
    case 239403:
    {
        returnValue = F("Oberrather Str.");
        break;
    }
    case 239404:
    {
        returnValue = F("Oberrauschenthal");
        break;
    }
    case 239405:
    {
        returnValue = F("Oberrautenbach");
        break;
    }
    case 239406:
    {
        returnValue = F("Oberrecht");
        break;
    }
    case 239407:
    {
        returnValue = F("Oberredwitzer Str.");
        break;
    }
    case 239408:
    {
        returnValue = F("Oberrege");
        break;
    }
    case 239409:
    {
        returnValue = F("Oberregenwasserweg");
        break;
    }
    case 239410:
    {
        returnValue = F("Oberrehberg");
        break;
    }
    case 239411:
    {
        returnValue = F("Oberreichenbach");
        break;
    }
    case 239412:
    {
        returnValue = F("Oberreichenbacher Str.");
        break;
    }
    case 239413:
    {
        returnValue = F("Oberreifferscheid");
        break;
    }
    case 239414:
    {
        returnValue = F("Oberreifferscheider Str.");
        break;
    }
    case 239415:
    {
        returnValue = F("Oberreihe");
        break;
    }
    case 239416:
    {
        returnValue = F("Oberreinshagen");
        break;
    }
    case 239417:
    {
        returnValue = F("Oberreintalweg");
        break;
    }
    case 239418:
    {
        returnValue = F("Oberreisching");
        break;
    }
    case 239419:
    {
        returnValue = F("Oberreiselberg");
        break;
    }
    case 239420:
    {
        returnValue = F("Oberreit");
        break;
    }
    case 239421:
    {
        returnValue = F("Oberreiterweg");
        break;
    }
    case 239422:
    {
        returnValue = F("Oberreitnauer Str.");
        break;
    }
    case 239423:
    {
        returnValue = F("Oberreißener Str.");
        break;
    }
    case 239424:
    {
        returnValue = F("Oberrengersweiler");
        break;
    }
    case 239425:
    {
        returnValue = F("Oberrengseweg");
        break;
    }
    case 239426:
    {
        returnValue = F("Oberreuten");
        break;
    }
    case 239427:
    {
        returnValue = F("Oberreuth");
        break;
    }
    case 239428:
    {
        returnValue = F("Oberreuthen");
        break;
    }
    case 239429:
    {
        returnValue = F("Oberreuther Str.");
        break;
    }
    case 239430:
    {
        returnValue = F("Oberreutiner Weg");
        break;
    }
    case 239431:
    {
        returnValue = F("Oberried");
        break;
    }
    case 239432:
    {
        returnValue = F("Oberriedener Hauptstr.");
        break;
    }
    case 239433:
    {
        returnValue = F("Oberrieder");
        break;
    }
    case 239434:
    {
        returnValue = F("Oberrieder Str.");
        break;
    }
    case 239435:
    {
        returnValue = F("Oberrieder Weiherstr.");
        break;
    }
    case 239436:
    {
        returnValue = F("Oberriedern");
        break;
    }
    case 239437:
    {
        returnValue = F("Oberriederweg");
        break;
    }
    case 239438:
    {
        returnValue = F("Oberriedstr.");
        break;
    }
    case 239439:
    {
        returnValue = F("Oberriedter Str.");
        break;
    }
    case 239440:
    {
        returnValue = F("Oberriedweg");
        break;
    }
    case 239441:
    {
        returnValue = F("Oberriethstr.");
        break;
    }
    case 239442:
    {
        returnValue = F("Oberriexinger Str.");
        break;
    }
    case 239443:
    {
        returnValue = F("Oberriexinger Weg");
        break;
    }
    case 239444:
    {
        returnValue = F("Oberriffinger Str.");
        break;
    }
    case 239445:
    {
        returnValue = F("Oberrimbach");
        break;
    }
    case 239446:
    {
        returnValue = F("Oberrimsinger Weg");
        break;
    }
    case 239447:
    {
        returnValue = F("Oberringel");
        break;
    }
    case 239448:
    {
        returnValue = F("Oberringstr.");
        break;
    }
    case 239449:
    {
        returnValue = F("Oberrißdorfer Str.");
        break;
    }
    case 239450:
    {
        returnValue = F("Oberrod");
        break;
    }
    case 239451:
    {
        returnValue = F("Oberrodacher Berg");
        break;
    }
    case 239452:
    {
        returnValue = F("Oberrodenbacher Str.");
        break;
    }
    case 239453:
    {
        returnValue = F("Oberroder Str.");
        break;
    }
    case 239454:
    {
        returnValue = F("Oberrohner Hauptstr.");
        break;
    }
    case 239455:
    {
        returnValue = F("Oberrohner Str.");
        break;
    }
    case 239456:
    {
        returnValue = F("Oberrohrer Str.");
        break;
    }
    case 239457:
    {
        returnValue = F("Oberrombacher Str.");
        break;
    }
    case 239458:
    {
        returnValue = F("Oberrookstallerweg");
        break;
    }
    case 239459:
    {
        returnValue = F("Oberrospher Str.");
        break;
    }
    case 239460:
    {
        returnValue = F("Oberrot");
        break;
    }
    case 239461:
    {
        returnValue = F("Oberrotenstein");
        break;
    }
    case 239462:
    {
        returnValue = F("Oberroter Str.");
        break;
    }
    case 239463:
    {
        returnValue = F("Oberroth");
        break;
    }
    case 239464:
    {
        returnValue = F("Oberrothenbach Bahnhof, Gleis 1");
        break;
    }
    case 239465:
    {
        returnValue = F("Oberrothenbach Banhof, Gleis 2");
        break;
    }
    case 239466:
    {
        returnValue = F("Oberrothenbacher Weg");
        break;
    }
    case 239467:
    {
        returnValue = F("Oberrother Str.");
        break;
    }
    case 239468:
    {
        returnValue = F("Oberrothof");
        break;
    }
    case 239469:
    {
        returnValue = F("Oberrothweg");
        break;
    }
    case 239470:
    {
        returnValue = F("Oberrottweiler Str.");
        break;
    }
    case 239471:
    {
        returnValue = F("Oberrotweiler Str.");
        break;
    }
    case 239472:
    {
        returnValue = F("Oberroßbacher Str.");
        break;
    }
    case 239473:
    {
        returnValue = F("Oberroßlaer Weg");
        break;
    }
    case 239474:
    {
        returnValue = F("Oberröblingen – Allstedt");
        break;
    }
    case 239475:
    {
        returnValue = F("Oberröblinger Bahnhofstr.");
        break;
    }
    case 239476:
    {
        returnValue = F("Oberröblinger Hauptstr.");
        break;
    }
    case 239477:
    {
        returnValue = F("Oberröblinger Str.");
        break;
    }
    case 239478:
    {
        returnValue = F("Oberrödeler Str.");
        break;
    }
    case 239479:
    {
        returnValue = F("Oberröder Weg");
        break;
    }
    case 239480:
    {
        returnValue = F("Oberröhrenbach");
        break;
    }
    case 239481:
    {
        returnValue = F("Oberröttenscheid");
        break;
    }
    case 239482:
    {
        returnValue = F("Oberrückersbach");
        break;
    }
    case 239483:
    {
        returnValue = F("Oberrüsselbach");
        break;
    }
    case 239484:
    {
        returnValue = F("Obersaal");
        break;
    }
    case 239485:
    {
        returnValue = F("Obersaaler Str.");
        break;
    }
    case 239486:
    {
        returnValue = F("Obersachswerfer Str.");
        break;
    }
    case 239487:
    {
        returnValue = F("Obersaidaer Str.");
        break;
    }
    case 239488:
    {
        returnValue = F("Obersalhof");
        break;
    }
    case 239489:
    {
        returnValue = F("Obersalzbergstr.");
        break;
    }
    case 239490:
    {
        returnValue = F("Obersand");
        break;
    }
    case 239491:
    {
        returnValue = F("Obersasbacher Str.");
        break;
    }
    case 239492:
    {
        returnValue = F("Obersayn");
        break;
    }
    case 239493:
    {
        returnValue = F("Obersayner Str.");
        break;
    }
    case 239494:
    {
        returnValue = F("Obersbachweg");
        break;
    }
    case 239495:
    {
        returnValue = F("Oberschaarer Str.");
        break;
    }
    case 239496:
    {
        returnValue = F("Oberschallemich");
        break;
    }
    case 239497:
    {
        returnValue = F("Oberschanze");
        break;
    }
    case 239498:
    {
        returnValue = F("Oberschar");
        break;
    }
    case 239499:
    {
        returnValue = F("Oberscharam");
        break;
    }
    case 239500:
    {
        returnValue = F("Oberscharweg");
        break;
    }
    case 239501:
    {
        returnValue = F("Oberscheckenbach");
        break;
    }
    case 239502:
    {
        returnValue = F("Oberscheer");
        break;
    }
    case 239503:
    {
        returnValue = F("Oberscheffacher Str.");
        break;
    }
    case 239504:
    {
        returnValue = F("Oberschefflenzer Str.");
        break;
    }
    case 239505:
    {
        returnValue = F("Oberscheibenrain");
        break;
    }
    case 239506:
    {
        returnValue = F("Oberscheid");
        break;
    }
    case 239507:
    {
        returnValue = F("Oberscheider Weg");
        break;
    }
    case 239508:
    {
        returnValue = F("Oberscheidstr.");
        break;
    }
    case 239509:
    {
        returnValue = F("Oberscheidtstr.");
        break;
    }
    case 239510:
    {
        returnValue = F("Oberschelder Str.");
        break;
    }
    case 239511:
    {
        returnValue = F("Oberschelder Weg");
        break;
    }
    case 239512:
    {
        returnValue = F("Oberschelklinger Weg");
        break;
    }
    case 239513:
    {
        returnValue = F("Oberschelmerath");
        break;
    }
    case 239514:
    {
        returnValue = F("Oberschelps Feld");
        break;
    }
    case 239515:
    {
        returnValue = F("Oberscheveling");
        break;
    }
    case 239516:
    {
        returnValue = F("Oberschlag");
        break;
    }
    case 239517:
    {
        returnValue = F("Oberschlager Str.");
        break;
    }
    case 239518:
    {
        returnValue = F("Oberschlatzendorf");
        break;
    }
    case 239519:
    {
        returnValue = F("Oberschledorner Str.");
        break;
    }
    case 239520:
    {
        returnValue = F("Oberschleif");
        break;
    }
    case 239521:
    {
        returnValue = F("Oberschlesienstr.");
        break;
    }
    case 239522:
    {
        returnValue = F("Oberschlesienweg");
        break;
    }
    case 239523:
    {
        returnValue = F("Oberschlesier Str.");
        break;
    }
    case 239524:
    {
        returnValue = F("Oberschlesierstr.");
        break;
    }
    case 239525:
    {
        returnValue = F("Oberschlesische Str.");
        break;
    }
    case 239526:
    {
        returnValue = F("Oberschleuse");
        break;
    }
    case 239527:
    {
        returnValue = F("Oberschlicht");
        break;
    }
    case 239528:
    {
        returnValue = F("Oberschnaitertal");
        break;
    }
    case 239529:
    {
        returnValue = F("Oberschnatterbach");
        break;
    }
    case 239530:
    {
        returnValue = F("Oberschneidhart");
        break;
    }
    case 239531:
    {
        returnValue = F("Oberschnittenkofen");
        break;
    }
    case 239532:
    {
        returnValue = F("Oberschollach");
        break;
    }
    case 239533:
    {
        returnValue = F("Oberscholvener Str.");
        break;
    }
    case 239534:
    {
        returnValue = F("Oberschoothorst");
        break;
    }
    case 239535:
    {
        returnValue = F("Oberschopfheimer Hauptstr.");
        break;
    }
    case 239536:
    {
        returnValue = F("Oberschulenberg");
        break;
    }
    case 239537:
    {
        returnValue = F("Oberschultheiss-Schremser-Str.");
        break;
    }
    case 239538:
    {
        returnValue = F("Oberschultheiß-Schremser-Str.");
        break;
    }
    case 239539:
    {
        returnValue = F("Oberschultheißereistr.");
        break;
    }
    case 239540:
    {
        returnValue = F("Oberschurer Str.");
        break;
    }
    case 239541:
    {
        returnValue = F("Oberschwabenstr.");
        break;
    }
    case 239542:
    {
        returnValue = F("Oberschwaderberg");
        break;
    }
    case 239543:
    {
        returnValue = F("Oberschwaig");
        break;
    }
    case 239544:
    {
        returnValue = F("Oberschwaigstr.");
        break;
    }
    case 239545:
    {
        returnValue = F("Oberschwappacher Str.");
        break;
    }
    case 239546:
    {
        returnValue = F("Oberschwarzacher Pfad");
        break;
    }
    case 239547:
    {
        returnValue = F("Oberschwarzenberg");
        break;
    }
    case 239548:
    {
        returnValue = F("Oberschweinstiegschneise");
        break;
    }
    case 239549:
    {
        returnValue = F("Oberschwenden");
        break;
    }
    case 239550:
    {
        returnValue = F("Oberschwäbisches Museumsdorf Kürnbach");
        break;
    }
    case 239551:
    {
        returnValue = F("Oberschwärzenbacher Str.");
        break;
    }
    case 239552:
    {
        returnValue = F("Oberschwöditz");
        break;
    }
    case 239553:
    {
        returnValue = F("Oberschöbling");
        break;
    }
    case 239554:
    {
        returnValue = F("Oberschöllenbacher Hauptstr.");
        break;
    }
    case 239555:
    {
        returnValue = F("Oberschöllenbacher Str.");
        break;
    }
    case 239556:
    {
        returnValue = F("Oberschöllnacher Str.");
        break;
    }
    case 239557:
    {
        returnValue = F("Oberschömbach");
        break;
    }
    case 239558:
    {
        returnValue = F("Oberschönauer Hauptstr.");
        break;
    }
    case 239559:
    {
        returnValue = F("Oberschönauer Str.");
        break;
    }
    case 239560:
    {
        returnValue = F("Oberschönauerstr.");
        break;
    }
    case 239561:
    {
        returnValue = F("Oberschönbacher Weg");
        break;
    }
    case 239562:
    {
        returnValue = F("Oberschönbrunner Weg");
        break;
    }
    case 239563:
    {
        returnValue = F("Oberschönenfelder Str.");
        break;
    }
    case 239564:
    {
        returnValue = F("Oberschönrath");
        break;
    }
    case 239565:
    {
        returnValue = F("Oberschüttweg");
        break;
    }
    case 239566:
    {
        returnValue = F("Obersdorf");
        break;
    }
    case 239567:
    {
        returnValue = F("Obersdorfer Str.");
        break;
    }
    case 239568:
    {
        returnValue = F("Obersdorfer Weg");
        break;
    }
    case 239569:
    {
        returnValue = F("Oberseehof");
        break;
    }
    case 239570:
    {
        returnValue = F("Oberseelbach");
        break;
    }
    case 239571:
    {
        returnValue = F("Oberseelbacher Str.");
        break;
    }
    case 239572:
    {
        returnValue = F("Oberseener Weg");
        break;
    }
    case 239573:
    {
        returnValue = F("Oberseester Weg");
        break;
    }
    case 239574:
    {
        returnValue = F("Oberseestr.");
        break;
    }
    case 239575:
    {
        returnValue = F("Oberseeweg");
        break;
    }
    case 239576:
    {
        returnValue = F("Obersehr");
        break;
    }
    case 239577:
    {
        returnValue = F("Oberseifen");
        break;
    }
    case 239578:
    {
        returnValue = F("Oberseifener Str.");
        break;
    }
    case 239579:
    {
        returnValue = F("Oberseiffenbacher Str.");
        break;
    }
    case 239580:
    {
        returnValue = F("Oberseite");
        break;
    }
    case 239581:
    {
        returnValue = F("Oberselbach");
        break;
    }
    case 239582:
    {
        returnValue = F("Obersfelder Str.");
        break;
    }
    case 239583:
    {
        returnValue = F("Obersgegener Weg");
        break;
    }
    case 239584:
    {
        returnValue = F("Obershagener Str.");
        break;
    }
    case 239585:
    {
        returnValue = F("Obershausener Str.");
        break;
    }
    case 239586:
    {
        returnValue = F("Obershäuser Str.");
        break;
    }
    case 239587:
    {
        returnValue = F("Obersiddeldeichsweg");
        break;
    }
    case 239588:
    {
        returnValue = F("Obersiegenbühl");
        break;
    }
    case 239589:
    {
        returnValue = F("Obersiemauer Weg");
        break;
    }
    case 239590:
    {
        returnValue = F("Obersiffelhofen");
        break;
    }
    case 239591:
    {
        returnValue = F("Obersigginger Str.");
        break;
    }
    case 239592:
    {
        returnValue = F("Obersimbach");
        break;
    }
    case 239593:
    {
        returnValue = F("Obersinner Str.");
        break;
    }
    case 239594:
    {
        returnValue = F("Obersinsen");
        break;
    }
    case 239595:
    {
        returnValue = F("Obersinsener Str.");
        break;
    }
    case 239596:
    {
        returnValue = F("Oberskirchen");
        break;
    }
    case 239597:
    {
        returnValue = F("Oberskirchner Weg");
        break;
    }
    case 239598:
    {
        returnValue = F("Obersohl");
        break;
    }
    case 239599:
    {
        returnValue = F("Obersohler Weg");
        break;
    }
    case 239600:
    {
        returnValue = F("Obersommerfeldstr.");
        break;
    }
    case 239601:
    {
        returnValue = F("Obersondern");
        break;
    }
    case 239602:
    {
        returnValue = F("Obersontheimer Str.");
        break;
    }
    case 239603:
    {
        returnValue = F("Obersorghof");
        break;
    }
    case 239604:
    {
        returnValue = F("Obersorpe");
        break;
    }
    case 239605:
    {
        returnValue = F("Oberspeltacher Str.");
        break;
    }
    case 239606:
    {
        returnValue = F("Oberspergerstr.");
        break;
    }
    case 239607:
    {
        returnValue = F("Oberspierstr.");
        break;
    }
    case 239608:
    {
        returnValue = F("Oberspiesheimer Str.");
        break;
    }
    case 239609:
    {
        returnValue = F("Oberspitzenbacher Str.");
        break;
    }
    case 239610:
    {
        returnValue = F("Oberspredey");
        break;
    }
    case 239611:
    {
        returnValue = F("Obersprucke");
        break;
    }
    case 239612:
    {
        returnValue = F("Oberst Haardt");
        break;
    }
    case 239613:
    {
        returnValue = F("Oberst Reitzwies");
        break;
    }
    case 239614:
    {
        returnValue = F("Oberst Wies");
        break;
    }
    case 239615:
    {
        returnValue = F("Oberst-Barret-Str.");
        break;
    }
    case 239616:
    {
        returnValue = F("Oberst-Freiherr-von-Boeselager-Str.");
        break;
    }
    case 239617:
    {
        returnValue = F("Oberst-Klarmann-Str.");
        break;
    }
    case 239618:
    {
        returnValue = F("Oberst-Petersen-Weg");
        break;
    }
    case 239619:
    {
        returnValue = F("Oberst-Rolf-Krug-Weg");
        break;
    }
    case 239620:
    {
        returnValue = F("Oberst-von-Boeselager-Str.");
        break;
    }
    case 239621:
    {
        returnValue = F("Oberst-von-Stauffenberg-Str.");
        break;
    }
    case 239622:
    {
        returnValue = F("Oberstaaderstr.");
        break;
    }
    case 239623:
    {
        returnValue = F("Oberstaat");
        break;
    }
    case 239624:
    {
        returnValue = F("Oberstacker");
        break;
    }
    case 239625:
    {
        returnValue = F("Oberstadioner Str.");
        break;
    }
    case 239626:
    {
        returnValue = F("Oberstadt");
        break;
    }
    case 239627:
    {
        returnValue = F("Oberstadt Ring");
        break;
    }
    case 239628:
    {
        returnValue = F("Oberstadtgraben");
        break;
    }
    case 239629:
    {
        returnValue = F("Oberstadtstr.");
        break;
    }
    case 239630:
    {
        returnValue = F("Oberstadttunnel");
        break;
    }
    case 239631:
    {
        returnValue = F("Oberstaffelbach");
        break;
    }
    case 239632:
    {
        returnValue = F("Oberstaiger Weg");
        break;
    }
    case 239633:
    {
        returnValue = F("Oberstaudhausen");
        break;
    }
    case 239634:
    {
        returnValue = F("Oberstaufener Str.");
        break;
    }
    case 239635:
    {
        returnValue = F("Oberstdorfer Str.");
        break;
    }
    case 239636:
    {
        returnValue = F("Oberste Aue");
        break;
    }
    case 239637:
    {
        returnValue = F("Oberste Bitze");
        break;
    }
    case 239638:
    {
        returnValue = F("Oberste Eichen");
        break;
    }
    case 239639:
    {
        returnValue = F("Oberste Elpersweide");
        break;
    }
    case 239640:
    {
        returnValue = F("Oberste Falltorschneise");
        break;
    }
    case 239641:
    {
        returnValue = F("Oberste Feld");
        break;
    }
    case 239642:
    {
        returnValue = F("Oberste Gasse");
        break;
    }
    case 239643:
    {
        returnValue = F("Oberste Gärten");
        break;
    }
    case 239644:
    {
        returnValue = F("Oberste Hof");
        break;
    }
    case 239645:
    {
        returnValue = F("Oberste Homberg");
        break;
    }
    case 239646:
    {
        returnValue = F("Oberste Höfe");
        break;
    }
    case 239647:
    {
        returnValue = F("Oberste Kamp");
        break;
    }
    case 239648:
    {
        returnValue = F("Oberste Keil");
        break;
    }
    case 239649:
    {
        returnValue = F("Oberste Kumm");
        break;
    }
    case 239650:
    {
        returnValue = F("Oberste Linde");
        break;
    }
    case 239651:
    {
        returnValue = F("Oberste Mühle");
        break;
    }
    case 239652:
    {
        returnValue = F("Oberste Str.");
        break;
    }
    case 239653:
    {
        returnValue = F("Oberste Ströthe");
        break;
    }
    case 239654:
    {
        returnValue = F("Oberste Wiese");
        break;
    }
    case 239655:
    {
        returnValue = F("Oberste-Wilms-Str.");
        break;
    }
    case 239656:
    {
        returnValue = F("Obersteeg");
        break;
    }
    case 239657:
    {
        returnValue = F("Obersteenrader Hof");
        break;
    }
    case 239658:
    {
        returnValue = F("Oberstegle");
        break;
    }
    case 239659:
    {
        returnValue = F("Oberstehöher Str.");
        break;
    }
    case 239660:
    {
        returnValue = F("Obersteigerweg");
        break;
    }
    case 239661:
    {
        returnValue = F("Oberstein");
        break;
    }
    case 239662:
    {
        returnValue = F("Obersteinacher Str.");
        break;
    }
    case 239663:
    {
        returnValue = F("Obersteinaer Weg");
        break;
    }
    case 239664:
    {
        returnValue = F("Obersteinbach");
        break;
    }
    case 239665:
    {
        returnValue = F("Obersteinbach A");
        break;
    }
    case 239666:
    {
        returnValue = F("Obersteinbach B");
        break;
    }
    case 239667:
    {
        returnValue = F("Obersteinbach C");
        break;
    }
    case 239668:
    {
        returnValue = F("Obersteinbach D");
        break;
    }
    case 239669:
    {
        returnValue = F("Obersteinbach E");
        break;
    }
    case 239670:
    {
        returnValue = F("Obersteinbach F");
        break;
    }
    case 239671:
    {
        returnValue = F("Obersteinbach G");
        break;
    }
    case 239672:
    {
        returnValue = F("Obersteinbach H");
        break;
    }
    case 239673:
    {
        returnValue = F("Obersteinbacher Str.");
        break;
    }
    case 239674:
    {
        returnValue = F("Obersteinenberger Str.");
        break;
    }
    case 239675:
    {
        returnValue = F("Obersteinenfeld");
        break;
    }
    case 239676:
    {
        returnValue = F("Obersteiner Str.");
        break;
    }
    case 239677:
    {
        returnValue = F("Obersteiner Weg");
        break;
    }
    case 239678:
    {
        returnValue = F("Obersteinerweg");
        break;
    }
    case 239679:
    {
        returnValue = F("Obersteinhausen");
        break;
    }
    case 239680:
    {
        returnValue = F("Obersteinstr.");
        break;
    }
    case 239681:
    {
        returnValue = F("Obersteinweg");
        break;
    }
    case 239682:
    {
        returnValue = F("Obersten Wehr");
        break;
    }
    case 239683:
    {
        returnValue = F("Oberstenfelder Str.");
        break;
    }
    case 239684:
    {
        returnValue = F("Oberster Acker");
        break;
    }
    case 239685:
    {
        returnValue = F("Oberster Bergweg");
        break;
    }
    case 239686:
    {
        returnValue = F("Oberster Dreisch");
        break;
    }
    case 239687:
    {
        returnValue = F("Oberster Esch");
        break;
    }
    case 239688:
    {
        returnValue = F("Oberster Garten");
        break;
    }
    case 239689:
    {
        returnValue = F("Oberster Helks");
        break;
    }
    case 239690:
    {
        returnValue = F("Oberster Hof");
        break;
    }
    case 239691:
    {
        returnValue = F("Oberster Hofacker");
        break;
    }
    case 239692:
    {
        returnValue = F("Oberster Kamp");
        break;
    }
    case 239693:
    {
        returnValue = F("Oberster Kettiger Weg");
        break;
    }
    case 239694:
    {
        returnValue = F("Oberster Riedsweg");
        break;
    }
    case 239695:
    {
        returnValue = F("Oberster Waldweg");
        break;
    }
    case 239696:
    {
        returnValue = F("Oberster Weg");
        break;
    }
    case 239697:
    {
        returnValue = F("Oberstesiefen");
        break;
    }
    case 239698:
    {
        returnValue = F("Oberstettener Str.");
        break;
    }
    case 239699:
    {
        returnValue = F("Oberstetter Str.");
        break;
    }
    case 239700:
    {
        returnValue = F("Oberstiftstr.");
        break;
    }
    case 239701:
    {
        returnValue = F("Oberstimmer Str.");
        break;
    }
    case 239702:
    {
        returnValue = F("Oberstimmer Weg");
        break;
    }
    case 239703:
    {
        returnValue = F("Oberstjägermeisterweg");
        break;
    }
    case 239704:
    {
        returnValue = F("Oberstkoppeler Weg");
        break;
    }
    case 239705:
    {
        returnValue = F("Oberstockstr.");
        break;
    }
    case 239706:
    {
        returnValue = F("Oberstockumer Weg");
        break;
    }
    case 239707:
    {
        returnValue = F("Oberstork");
        break;
    }
    case 239708:
    {
        returnValue = F("Oberstotzinger Str.");
        break;
    }
    case 239709:
    {
        returnValue = F("Oberstr.");
        break;
    }
    case 239710:
    {
        returnValue = F("Oberstreiter Str.");
        break;
    }
    case 239711:
    {
        returnValue = F("Oberstreuer Str.");
        break;
    }
    case 239712:
    {
        returnValue = F("Oberstriet");
        break;
    }
    case 239713:
    {
        returnValue = F("Oberstruth");
        break;
    }
    case 239714:
    {
        returnValue = F("Oberströbl");
        break;
    }
    case 239715:
    {
        returnValue = F("Oberströmische Seite");
        break;
    }
    case 239716:
    {
        returnValue = F("Oberstubener Weg");
        break;
    }
    case 239717:
    {
        returnValue = F("Oberstweiler");
        break;
    }
    case 239718:
    {
        returnValue = F("Oberstwies");
        break;
    }
    case 239719:
    {
        returnValue = F("Oberstädter Str.");
        break;
    }
    case 239720:
    {
        returnValue = F("Oberstößwitzer Str.");
        break;
    }
    case 239721:
    {
        returnValue = F("Oberstüterstr.");
        break;
    }
    case 239722:
    {
        returnValue = F("Obersuhler Str.");
        break;
    }
    case 239723:
    {
        returnValue = F("Obersulmetinger Str.");
        break;
    }
    case 239724:
    {
        returnValue = F("Obersundernweg");
        break;
    }
    case 239725:
    {
        returnValue = F("Obersunzing");
        break;
    }
    case 239726:
    {
        returnValue = F("Obersur");
        break;
    }
    case 239727:
    {
        returnValue = F("Obersurheimer Str.");
        break;
    }
    case 239728:
    {
        returnValue = F("Obersöcheringer Str.");
        break;
    }
    case 239729:
    {
        returnValue = F("Obersölden");
        break;
    }
    case 239730:
    {
        returnValue = F("Obersölling");
        break;
    }
    case 239731:
    {
        returnValue = F("Obersötern");
        break;
    }
    case 239732:
    {
        returnValue = F("Obersülze");
        break;
    }
    case 239733:
    {
        returnValue = F("Obersülzer Str.");
        break;
    }
    case 239734:
    {
        returnValue = F("Obertal");
        break;
    }
    case 239735:
    {
        returnValue = F("Obertalfinger Weg");
        break;
    }
    case 239736:
    {
        returnValue = F("Obertalstr.");
        break;
    }
    case 239737:
    {
        returnValue = F("Obertalweg");
        break;
    }
    case 239738:
    {
        returnValue = F("Obertannenhof");
        break;
    }
    case 239739:
    {
        returnValue = F("Obertannfeldstr.");
        break;
    }
    case 239740:
    {
        returnValue = F("Obertannweg");
        break;
    }
    case 239741:
    {
        returnValue = F("Obertaxetweg");
        break;
    }
    case 239742:
    {
        returnValue = F("Oberteich");
        break;
    }
    case 239743:
    {
        returnValue = F("Oberteichstr.");
        break;
    }
    case 239744:
    {
        returnValue = F("Oberteichwiese");
        break;
    }
    case 239745:
    {
        returnValue = F("Oberteisbach");
        break;
    }
    case 239746:
    {
        returnValue = F("Oberthal");
        break;
    }
    case 239747:
    {
        returnValue = F("Oberthalweg");
        break;
    }
    case 239748:
    {
        returnValue = F("Oberthann");
        break;
    }
    case 239749:
    {
        returnValue = F("Oberthannerweg");
        break;
    }
    case 239750:
    {
        returnValue = F("Oberthauer Str.");
        break;
    }
    case 239751:
    {
        returnValue = F("Oberthereser Str.");
        break;
    }
    case 239752:
    {
        returnValue = F("Oberthereser Weg");
        break;
    }
    case 239753:
    {
        returnValue = F("Oberthiergärtner Str.");
        break;
    }
    case 239754:
    {
        returnValue = F("Oberthingauer Str.");
        break;
    }
    case 239755:
    {
        returnValue = F("Oberthstr.");
        break;
    }
    case 239756:
    {
        returnValue = F("Oberthulbaer Str.");
        break;
    }
    case 239757:
    {
        returnValue = F("Oberthweg");
        break;
    }
    case 239758:
    {
        returnValue = F("Oberthölau");
        break;
    }
    case 239759:
    {
        returnValue = F("Oberthürheimer Weg");
        break;
    }
    case 239760:
    {
        returnValue = F("Oberthürstr.");
        break;
    }
    case 239761:
    {
        returnValue = F("Obertiefenbacher Str.");
        break;
    }
    case 239762:
    {
        returnValue = F("Obertinsbach");
        break;
    }
    case 239763:
    {
        returnValue = F("Obertinsberger Str.");
        break;
    }
    case 239764:
    {
        returnValue = F("Obertischneckweg");
        break;
    }
    case 239765:
    {
        returnValue = F("Obertitz");
        break;
    }
    case 239766:
    {
        returnValue = F("Obertor");
        break;
    }
    case 239767:
    {
        returnValue = F("Obertor-Siedlung");
        break;
    }
    case 239768:
    {
        returnValue = F("Obertorfeld");
        break;
    }
    case 239769:
    {
        returnValue = F("Obertorgasse");
        break;
    }
    case 239770:
    {
        returnValue = F("Obertorkreisel");
        break;
    }
    case 239771:
    {
        returnValue = F("Obertorplatz");
        break;
    }
    case 239772:
    {
        returnValue = F("Obertorstr.");
        break;
    }
    case 239773:
    {
        returnValue = F("Obertorweg");
        break;
    }
    case 239774:
    {
        returnValue = F("Obertraubenbacher Str.");
        break;
    }
    case 239775:
    {
        returnValue = F("Obertraubing");
        break;
    }
    case 239776:
    {
        returnValue = F("Obertraubing Südost");
        break;
    }
    case 239777:
    {
        returnValue = F("Obertraublinger Str.");
        break;
    }
    case 239778:
    {
        returnValue = F("Obertravenbrücke");
        break;
    }
    case 239779:
    {
        returnValue = F("Obertresenfeld");
        break;
    }
    case 239780:
    {
        returnValue = F("Obertriebelbach");
        break;
    }
    case 239781:
    {
        returnValue = F("Obertriebeler Str.");
        break;
    }
    case 239782:
    {
        returnValue = F("Obertriebler Str.");
        break;
    }
    case 239783:
    {
        returnValue = F("Obertriesch");
        break;
    }
    case 239784:
    {
        returnValue = F("Obertriftstr.");
        break;
    }
    case 239785:
    {
        returnValue = F("Obertrogen");
        break;
    }
    case 239786:
    {
        returnValue = F("Obertshäuser Platz");
        break;
    }
    case 239787:
    {
        returnValue = F("Obertshäuser Str.");
        break;
    }
    case 239788:
    {
        returnValue = F("Obertshäuser Weg");
        break;
    }
    case 239789:
    {
        returnValue = F("Obertshäuser Wegschneise");
        break;
    }
    case 239790:
    {
        returnValue = F("Obertshäusner Pfad");
        break;
    }
    case 239791:
    {
        returnValue = F("Obertsroter Landstr.");
        break;
    }
    case 239792:
    {
        returnValue = F("Obertsroter Str.");
        break;
    }
    case 239793:
    {
        returnValue = F("Obertswiese");
        break;
    }
    case 239794:
    {
        returnValue = F("Obertürkheimer Str.");
        break;
    }
    case 239795:
    {
        returnValue = F("Oberuhna");
        break;
    }
    case 239796:
    {
        returnValue = F("Oberulrichsberg");
        break;
    }
    case 239797:
    {
        returnValue = F("Oberulsenbach");
        break;
    }
    case 239798:
    {
        returnValue = F("Oberumelsdorf");
        break;
    }
    case 239799:
    {
        returnValue = F("Oberumelsdorfer Str.");
        break;
    }
    case 239800:
    {
        returnValue = F("Oberurffer Str.");
        break;
    }
    case 239801:
    {
        returnValue = F("Oberurseler Str.");
        break;
    }
    case 239802:
    {
        returnValue = F("Oberurseler Weg");
        break;
    }
    case 239803:
    {
        returnValue = F("Obervalbert");
        break;
    }
    case 239804:
    {
        returnValue = F("Obervalme");
        break;
    }
    case 239805:
    {
        returnValue = F("Oberveischeder Str.");
        break;
    }
    case 239806:
    {
        returnValue = F("Obervellacher Str.");
        break;
    }
    case 239807:
    {
        returnValue = F("Obervellmarer Str.");
        break;
    }
    case 239808:
    {
        returnValue = F("Obervellmarer Weg");
        break;
    }
    case 239809:
    {
        returnValue = F("Obervellmarsche Str.");
        break;
    }
    case 239810:
    {
        returnValue = F("Oberviechtacher Str.");
        break;
    }
    case 239811:
    {
        returnValue = F("Oberviehhausen");
        break;
    }
    case 239812:
    {
        returnValue = F("Oberviehmoos");
        break;
    }
    case 239813:
    {
        returnValue = F("Obervielander Str.");
        break;
    }
    case 239814:
    {
        returnValue = F("Obervogelgesang");
        break;
    }
    case 239815:
    {
        returnValue = F("Obervogt-Haefelin-Str.");
        break;
    }
    case 239816:
    {
        returnValue = F("Obervogt-Huber-Str.");
        break;
    }
    case 239817:
    {
        returnValue = F("Obervolkacher Str.");
        break;
    }
    case 239818:
    {
        returnValue = F("Obervorschützer Str.");
        break;
    }
    case 239819:
    {
        returnValue = F("Obervorstadtstr.");
        break;
    }
    case 239820:
    {
        returnValue = F("Obervorwerk");
        break;
    }
    case 239821:
    {
        returnValue = F("Oberwachwitzer Weg");
        break;
    }
    case 239822:
    {
        returnValue = F("Oberwahn");
        break;
    }
    case 239823:
    {
        returnValue = F("Oberwalchen");
        break;
    }
    case 239824:
    {
        returnValue = F("Oberwalchener Weg");
        break;
    }
    case 239825:
    {
        returnValue = F("Oberwald");
        break;
    }
    case 239826:
    {
        returnValue = F("Oberwald-Grenzweg");
        break;
    }
    case 239827:
    {
        returnValue = F("Oberwaldbehrunger Str.");
        break;
    }
    case 239828:
    {
        returnValue = F("Oberwaldschneise");
        break;
    }
    case 239829:
    {
        returnValue = F("Oberwaldseeschneise");
        break;
    }
    case 239830:
    {
        returnValue = F("Oberwaldstr.");
        break;
    }
    case 239831:
    {
        returnValue = F("Oberwaldsweg");
        break;
    }
    case 239832:
    {
        returnValue = F("Oberwaldweg");
        break;
    }
    case 239833:
    {
        returnValue = F("Oberwall");
        break;
    }
    case 239834:
    {
        returnValue = F("Oberwall-Str.");
        break;
    }
    case 239835:
    {
        returnValue = F("Oberwallbachsmühle");
        break;
    }
    case 239836:
    {
        returnValue = F("Oberwallenstadter Weg");
        break;
    }
    case 239837:
    {
        returnValue = F("Oberwallnerweg");
        break;
    }
    case 239838:
    {
        returnValue = F("Oberwallstr.");
        break;
    }
    case 239839:
    {
        returnValue = F("Oberwallufer Str.");
        break;
    }
    case 239840:
    {
        returnValue = F("Oberwallweg");
        break;
    }
    case 239841:
    {
        returnValue = F("Oberwaltenkofen");
        break;
    }
    case 239842:
    {
        returnValue = F("Oberwaltinger Str.");
        break;
    }
    case 239843:
    {
        returnValue = F("Oberwappenöst");
        break;
    }
    case 239844:
    {
        returnValue = F("Oberwarmensteinach");
        break;
    }
    case 239845:
    {
        returnValue = F("Oberwarmensteinacher Str.");
        break;
    }
    case 239846:
    {
        returnValue = F("Oberwarnbach");
        break;
    }
    case 239847:
    {
        returnValue = F("Oberwarnsbach");
        break;
    }
    case 239848:
    {
        returnValue = F("Oberwarolder Str.");
        break;
    }
    case 239849:
    {
        returnValue = F("Oberwarthaer Str.");
        break;
    }
    case 239850:
    {
        returnValue = F("Oberwasser");
        break;
    }
    case 239851:
    {
        returnValue = F("Oberweg");
        break;
    }
    case 239852:
    {
        returnValue = F("Oberweg-Nord");
        break;
    }
    case 239853:
    {
        returnValue = F("Oberwehnrath");
        break;
    }
    case 239854:
    {
        returnValue = F("Oberwehrgasse");
        break;
    }
    case 239855:
    {
        returnValue = F("Oberweickenhof");
        break;
    }
    case 239856:
    {
        returnValue = F("Oberweid");
        break;
    }
    case 239857:
    {
        returnValue = F("Oberweidbacher Weg");
        break;
    }
    case 239858:
    {
        returnValue = F("Oberweider Str.");
        break;
    }
    case 239859:
    {
        returnValue = F("Oberweidstr.");
        break;
    }
    case 239860:
    {
        returnValue = F("Oberweierer Hauptstr.");
        break;
    }
    case 239861:
    {
        returnValue = F("Oberweierer Str.");
        break;
    }
    case 239862:
    {
        returnValue = F("Oberweihbach");
        break;
    }
    case 239863:
    {
        returnValue = F("Oberweiher");
        break;
    }
    case 239864:
    {
        returnValue = F("Oberweihersbucher Str.");
        break;
    }
    case 239865:
    {
        returnValue = F("Oberweiler");
        break;
    }
    case 239866:
    {
        returnValue = F("Oberweiler Str.");
        break;
    }
    case 239867:
    {
        returnValue = F("Oberweilerer Str.");
        break;
    }
    case 239868:
    {
        returnValue = F("Oberweilerstr.");
        break;
    }
    case 239869:
    {
        returnValue = F("Oberweilerweg");
        break;
    }
    case 239870:
    {
        returnValue = F("Oberweilnbach");
        break;
    }
    case 239871:
    {
        returnValue = F("Oberweingartenweg");
        break;
    }
    case 239872:
    {
        returnValue = F("Oberweinzierler Str.");
        break;
    }
    case 239873:
    {
        returnValue = F("Oberweischlitzer Str.");
        break;
    }
    case 239874:
    {
        returnValue = F("Oberweiser Str.");
        break;
    }
    case 239875:
    {
        returnValue = F("Oberweissacher Str.");
        break;
    }
    case 239876:
    {
        returnValue = F("Oberweißbacher Str.");
        break;
    }
    case 239877:
    {
        returnValue = F("Oberweißenkirchen");
        break;
    }
    case 239878:
    {
        returnValue = F("Oberwellitzleithen");
        break;
    }
    case 239879:
    {
        returnValue = F("Oberwendelsheim");
        break;
    }
    case 239880:
    {
        returnValue = F("Oberwendenstr.");
        break;
    }
    case 239881:
    {
        returnValue = F("Oberwengen");
        break;
    }
    case 239882:
    {
        returnValue = F("Oberwerder");
        break;
    }
    case 239883:
    {
        returnValue = F("Oberwerrner Str.");
        break;
    }
    case 239884:
    {
        returnValue = F("Oberwerrner Weg");
        break;
    }
    case 239885:
    {
        returnValue = F("Oberwertsmühle");
        break;
    }
    case 239886:
    {
        returnValue = F("Oberweschnegg");
        break;
    }
    case 239887:
    {
        returnValue = F("Oberweseler Str.");
        break;
    }
    case 239888:
    {
        returnValue = F("Oberweserstr.");
        break;
    }
    case 239889:
    {
        returnValue = F("Oberwesselinger Str.");
        break;
    }
    case 239890:
    {
        returnValue = F("Oberwesterbach");
        break;
    }
    case 239891:
    {
        returnValue = F("Oberwestrich");
        break;
    }
    case 239892:
    {
        returnValue = F("Oberwestrich (neu)");
        break;
    }
    case 239893:
    {
        returnValue = F("Oberwetzer Ring");
        break;
    }
    case 239894:
    {
        returnValue = F("Oberweyerer Str.");
        break;
    }
    case 239895:
    {
        returnValue = F("Oberwichterichstr.");
        break;
    }
    case 239896:
    {
        returnValue = F("Oberwieden");
        break;
    }
    case 239897:
    {
        returnValue = F("Oberwiehler Str.");
        break;
    }
    case 239898:
    {
        returnValue = F("Oberwies");
        break;
    }
    case 239899:
    {
        returnValue = F("Oberwiesachstr.");
        break;
    }
    case 239900:
    {
        returnValue = F("Oberwiese");
        break;
    }
    case 239901:
    {
        returnValue = F("Oberwiesen");
        break;
    }
    case 239902:
    {
        returnValue = F("Oberwiesenstr.");
        break;
    }
    case 239903:
    {
        returnValue = F("Oberwiesenthaler Str.");
        break;
    }
    case 239904:
    {
        returnValue = F("Oberwiesenthaler Weg");
        break;
    }
    case 239905:
    {
        returnValue = F("Oberwiesenweg");
        break;
    }
    case 239906:
    {
        returnValue = F("Oberwieser Str.");
        break;
    }
    case 239907:
    {
        returnValue = F("Oberwieser Weg");
        break;
    }
    case 239908:
    {
        returnValue = F("Oberwieserweg");
        break;
    }
    case 239909:
    {
        returnValue = F("Oberwiesstr.");
        break;
    }
    case 239910:
    {
        returnValue = F("Oberwietsche");
        break;
    }
    case 239911:
    {
        returnValue = F("Oberwihl");
        break;
    }
    case 239912:
    {
        returnValue = F("Oberwihler Weg");
        break;
    }
    case 239913:
    {
        returnValue = F("Oberwilflingen");
        break;
    }
    case 239914:
    {
        returnValue = F("Oberwillscheider Weg");
        break;
    }
    case 239915:
    {
        returnValue = F("Oberwilzinger Str.");
        break;
    }
    case 239916:
    {
        returnValue = F("Oberwimpasinger Weg");
        break;
    }
    case 239917:
    {
        returnValue = F("Oberwimpersing");
        break;
    }
    case 239918:
    {
        returnValue = F("Oberwinder Str.");
        break;
    }
    case 239919:
    {
        returnValue = F("Oberwindering");
        break;
    }
    case 239920:
    {
        returnValue = F("Oberwindhagener Str.");
        break;
    }
    case 239921:
    {
        returnValue = F("Oberwindsberg");
        break;
    }
    case 239922:
    {
        returnValue = F("Oberwinkel");
        break;
    }
    case 239923:
    {
        returnValue = F("Oberwinkelhausen");
        break;
    }
    case 239924:
    {
        returnValue = F("Oberwinkl");
        break;
    }
    case 239925:
    {
        returnValue = F("Oberwinn");
        break;
    }
    case 239926:
    {
        returnValue = F("Oberwinterer Weg");
        break;
    }
    case 239927:
    {
        returnValue = F("Oberwinzerfeld");
        break;
    }
    case 239928:
    {
        returnValue = F("Oberwirbach");
        break;
    }
    case 239929:
    {
        returnValue = F("Oberwirbacher Weg");
        break;
    }
    case 239930:
    {
        returnValue = F("Oberwirtssiedlung");
        break;
    }
    case 239931:
    {
        returnValue = F("Oberwirtstr.");
        break;
    }
    case 239932:
    {
        returnValue = F("Oberwittlershof");
        break;
    }
    case 239933:
    {
        returnValue = F("Oberwittstadter Str.");
        break;
    }
    case 239934:
    {
        returnValue = F("Oberwolfacher Str.");
        break;
    }
    case 239935:
    {
        returnValue = F("Oberworbscheid");
        break;
    }
    case 239936:
    {
        returnValue = F("Oberwurmbach");
        break;
    }
    case 239937:
    {
        returnValue = F("Oberwurzen");
        break;
    }
    case 239938:
    {
        returnValue = F("Oberwälder Str.");
        break;
    }
    case 239939:
    {
        returnValue = F("Oberwöhr");
        break;
    }
    case 239940:
    {
        returnValue = F("Oberwöhrd");
        break;
    }
    case 239941:
    {
        returnValue = F("Oberwöhrer Str.");
        break;
    }
    case 239942:
    {
        returnValue = F("Oberwöhrstr.");
        break;
    }
    case 239943:
    {
        returnValue = F("Oberwörthstr.");
        break;
    }
    case 239944:
    {
        returnValue = F("Oberwünscher Weg");
        break;
    }
    case 239945:
    {
        returnValue = F("Oberwürschnitzer Str.");
        break;
    }
    case 239946:
    {
        returnValue = F("Oberwürzbacher Str.");
        break;
    }
    case 239947:
    {
        returnValue = F("Oberzartener Weg");
        break;
    }
    case 239948:
    {
        returnValue = F("Oberzauner Weg");
        break;
    }
    case 239949:
    {
        returnValue = F("Oberzaunsbach");
        break;
    }
    case 239950:
    {
        returnValue = F("Oberzeismering");
        break;
    }
    case 239951:
    {
        returnValue = F("Oberzell");
        break;
    }
    case 239952:
    {
        returnValue = F("Oberzella");
        break;
    }
    case 239953:
    {
        returnValue = F("Oberzeller Str.");
        break;
    }
    case 239954:
    {
        returnValue = F("Oberzettling");
        break;
    }
    case 239955:
    {
        returnValue = F("Oberzettlitz");
        break;
    }
    case 239956:
    {
        returnValue = F("Oberzetzschaer Str.");
        break;
    }
    case 239957:
    {
        returnValue = F("Oberzeuzheimer Str.");
        break;
    }
    case 239958:
    {
        returnValue = F("Oberziegelbacher Str.");
        break;
    }
    case 239959:
    {
        returnValue = F("Oberzielenbach");
        break;
    }
    case 239960:
    {
        returnValue = F("Oberzierer Str.");
        break;
    }
    case 239961:
    {
        returnValue = F("Oberzierger Moorweg");
        break;
    }
    case 239962:
    {
        returnValue = F("Oberzipser Str.");
        break;
    }
    case 239963:
    {
        returnValue = F("Oberzollbrücke");
        break;
    }
    case 239964:
    {
        returnValue = F("Oberzollbrückestr.");
        break;
    }
    case 239965:
    {
        returnValue = F("Oberzollhauser Höhenweg");
        break;
    }
    case 239966:
    {
        returnValue = F("Oberzolling");
        break;
    }
    case 239967:
    {
        returnValue = F("Oberzwehrener Str.");
        break;
    }
    case 239968:
    {
        returnValue = F("Oberzwieselauer Str.");
        break;
    }
    case 239969:
    {
        returnValue = F("Oberärmel");
        break;
    }
    case 239970:
    {
        returnValue = F("Oberöd");
        break;
    }
    case 239971:
    {
        returnValue = F("Oberöder Weg");
        break;
    }
    case 239972:
    {
        returnValue = F("Oberölbach");
        break;
    }
    case 239973:
    {
        returnValue = F("Oberölkofener Str.");
        break;
    }
    case 239974:
    {
        returnValue = F("Oberölsbacher Str.");
        break;
    }
    case 239975:
    {
        returnValue = F("Oberölschnitz");
        break;
    }
    case 239976:
    {
        returnValue = F("Oberönkfeld");
        break;
    }
    case 239977:
    {
        returnValue = F("Oberösch");
        break;
    }
    case 239978:
    {
        returnValue = F("Oberöschweg");
        break;
    }
    case 239979:
    {
        returnValue = F("Obeswiesenweg");
        break;
    }
    case 239980:
    {
        returnValue = F("Obhausener Weg");
        break;
    }
    case 239981:
    {
        returnValue = F("Obhut");
        break;
    }
    case 239982:
    {
        returnValue = F("Obhäuser Str.");
        break;
    }
    case 239983:
    {
        returnValue = F("Obhäuser Weg");
        break;
    }
    case 239984:
    {
        returnValue = F("Obinger Str.");
        break;
    }
    case 239985:
    {
        returnValue = F("Obingskamp");
        break;
    }
    case 239986:
    {
        returnValue = F("Objektstr.");
        break;
    }
    case 239987:
    {
        returnValue = F("Oblandstr.");
        break;
    }
    case 239988:
    {
        returnValue = F("Oblatenstr.");
        break;
    }
    case 239989:
    {
        returnValue = F("Oblatenweg");
        break;
    }
    case 239990:
    {
        returnValue = F("Oblatterwallstr.");
        break;
    }
    case 239991:
    {
        returnValue = F("Obleiweg");
        break;
    }
    case 239992:
    {
        returnValue = F("Obleystr.");
        break;
    }
    case 239993:
    {
        returnValue = F("Oblfinger Str.");
        break;
    }
    case 239994:
    {
        returnValue = F("Oblisbergstr.");
        break;
    }
    case 239995:
    {
        returnValue = F("Oblohs Heide");
        break;
    }
    case 239996:
    {
        returnValue = F("Obludastr.");
        break;
    }
    case 239997:
    {
        returnValue = F("Obmettmann");
        break;
    }
    case 239998:
    {
        returnValue = F("Obodritenstr.");
        break;
    }
    case 239999:
    {
        returnValue = F("Obotritenring");
        break;
    }
    case 240000:
    {
        returnValue = F("Obotritenweg");
        break;
    }
    case 240001:
    {
        returnValue = F("Obrigheimer Str.");
        break;
    }
    case 240002:
    {
        returnValue = F("Obrighovener Str.");
        break;
    }
    case 240003:
    {
        returnValue = F("Obringer Voerde");
        break;
    }
    case 240004:
    {
        returnValue = F("Obringhauser Str.");
        break;
    }
    case 240005:
    {
        returnValue = F("Obringstr.");
        break;
    }
    case 240006:
    {
        returnValue = F("Obrist-Aescher-Str.");
        break;
    }
    case 240007:
    {
        returnValue = F("Obrist-von-Sperreuth-Str.");
        break;
    }
    case 240008:
    {
        returnValue = F("Obristfelder Str.");
        break;
    }
    case 240009:
    {
        returnValue = F("Obristfelder Weg");
        break;
    }
    case 240010:
    {
        returnValue = F("Obrockskamp");
        break;
    }
    case 240011:
    {
        returnValue = F("Obrunnstr.");
        break;
    }
    case 240012:
    {
        returnValue = F("Obschwarzbach");
        break;
    }
    case 240013:
    {
        returnValue = F("Obschützer Str.");
        break;
    }
    case 240014:
    {
        returnValue = F("Obschützer Weg");
        break;
    }
    case 240015:
    {
        returnValue = F("Obsen");
        break;
    }
    case 240016:
    {
        returnValue = F("Obserstr.");
        break;
    }
    case 240017:
    {
        returnValue = F("Obspringener Str.");
        break;
    }
    case 240018:
    {
        returnValue = F("Obst- und Gartenbauverein");
        break;
    }
    case 240019:
    {
        returnValue = F("Obst-Karree");
        break;
    }
    case 240020:
    {
        returnValue = F("Obstallee");
        break;
    }
    case 240021:
    {
        returnValue = F("Obstanlage Erbenheim");
        break;
    }
    case 240022:
    {
        returnValue = F("Obstbau");
        break;
    }
    case 240023:
    {
        returnValue = F("Obstbaum-Allee");
        break;
    }
    case 356459:
    {
        returnValue = F("ob. Stockermosserweg");
        break;
    }
    case 356460:
    {
        returnValue = F("obere Bergstr.");
        break;
    }
    case 356461:
    {
        returnValue = F("obere Ostlandstr.");
        break;
    }
    case 356462:
    {
        returnValue = F("obere Spitzbergweg");
        break;
    }
    case 356463:
    {
        returnValue = F("oberer Baubergweg");
        break;
    }
    case 356464:
    {
        returnValue = F("oberer Bruderholzweg");
        break;
    }
    case 356465:
    {
        returnValue = F("oberer Brücknerstieg");
        break;
    }
    case 356466:
    {
        returnValue = F("oberer Eckweg");
        break;
    }
    case 356467:
    {
        returnValue = F("oberer Geiersbergweg");
        break;
    }
    case 356468:
    {
        returnValue = F("oberer Glasbergweg");
        break;
    }
    case 356469:
    {
        returnValue = F("oberer Klippenweg");
        break;
    }
    case 356470:
    {
        returnValue = F("oberer Lehnkopfweg");
        break;
    }
    case 356471:
    {
        returnValue = F("oberer Molenpark");
        break;
    }
    case 356472:
    {
        returnValue = F("oberer Schwarzenbacher Weg");
        break;
    }
    case 356473:
    {
        returnValue = F("oberer Seeweg");
        break;
    }
    case 356474:
    {
        returnValue = F("oberer Specken");
        break;
    }
    case 356475:
    {
        returnValue = F("oberer Steinbruchweg");
        break;
    }
    case 356476:
    {
        returnValue = F("oberer Steinweg");
        break;
    }
    case 356477:
    {
        returnValue = F("oberer Weg");
        break;
    }
    case 356478:
    {
        returnValue = F("oberes Dorf");
        break;
    }
    case 356479:
    {
        returnValue = F("ohne Namen");
        break;
    }
    case 356480:
    {
        returnValue = F("old Bridge");
        break;
    }
    case 356481:
    {
        returnValue = F("om Böschl");
        break;
    }
    case 356482:
    {
        returnValue = F("om Dresch");
        break;
    }
    case 356483:
    {
        returnValue = F("om Mühlert");
        break;
    }
    case 356484:
    {
        returnValue = F("op er Diejelsheck");
        break;
    }
    case 356485:
    {
        returnValue = F("op er Höttekuhl");
        break;
    }
    case 356486:
    {
        returnValue = F("op er Jongeheck");
        break;
    }
    }
    return returnValue;
}
